# Texture (RwRaster) resource on-disk schema (our x64 PC format)

The layout of a single **Texture / RwRaster** resource (bundle resource-type id **0x00**) in our x64 PC
bundles (platform 4 — see [FONT_BUNDLE_SCHEMA.md](FONT_BUNDLE_SCHEMA.md) for the bundle container and the
platform-4 rules). This is the resource the loader turns into a `renderengine::Texture` (a D3D9 texture)
via `CgsResource::RwRasterResourceType`. Fonts import these as their atlas pages; materials/meshes
reference them the same way.

## Ground rules (same as the font schema)

- Little-endian, x64. Payloads are verbatim x64 struct images; pointer fields are zeroed (the raster has
  no serialized self-pointers — the runtime D3D handle is created at load).
- Uncompressed, native byte order in the `.dat` files; the bundle is platform 4.
- Offsets below are authoritative (dumped via `offsetof`/`sizeof`; regenerate with
  `tools/_dump_font_offsets.cpp`).

## Two memory pools

A Texture resource occupies **two** of the bundle's three memory pools:

| bundle mem-pool | contents | YAP |
|---|---|---|
| 0 — main | the `renderengine::Texture` header (40 bytes) | primary `.dat` |
| 1 — graphics-system | the pixel data (linear mip chain) | secondary `.dat`, `secondaryMemoryType: 1` |
| 2 — graphics-local | unused | — |

**Use mem-pool 1 for the pixels, not 2.** The loader maps small-resource slot 1 → rw resource slot 2,
and the raster fix-up reads its pixels from rw slot 2 (`renderengine::Texture::Create(..., lrResource.m_baseResources[2])`).
Putting pixels in mem-pool 2 would leave the texture empty.

## 1. Header — `renderengine::Texture`, 40 bytes (0x28), mem-pool 0

| off  | type | field                 | what to write |
|------|------|-----------------------|---------------|
| 0x00 | u64  | `mpD3DTexture`        | 0 (runtime D3D texture handle) |
| 0x08 | u64  | `mpTextureDataStruct` | 0 |
| 0x10 | u64  | `mpReserved8`         | 0 |
| 0x18 | u8×4 | `mbFlagC..mbFlagF`    | 0 |
| 0x1C | s32  | `miFormat`            | **D3DFORMAT** of the pixels (see §3) |
| 0x20 | u16  | `muWidth`             | width in texels |
| 0x22 | u16  | `muHeight`            | height in texels |
| 0x24 | u8   | `muDepth`             | 1 for a 2D texture |
| 0x25 | u8   | `muNumMipLevels`      | number of mip levels in the pixel data (1 if none) |
| 0x26 | u16  | `muFlags`             | 0 |

At load, `Texture::GetParameters` reads exactly `miFormat`, `muWidth`, `muHeight`, `muDepth`,
`muNumMipLevels`; everything else is runtime/zero. So those five fields are the only ones that must be
correct.

**On-disk padding:** the 0x28 bytes of fields are zero-padded to **0x30 (16-byte aligned)** — the game
aligns the `renderengine::Texture` resource to 16 bytes (BundleV2 main-memory optimisation alignment), so
the main `.dat` is 48 bytes. volatility's `TextureDecomp` writer pads automatically.

## 2. Pixel data — mem-pool 1

The mip chain, **tightly packed**, **level 0 first**, in `miFormat`'s native byte layout. No per-mip
padding. Level *k* is `max(1, width>>k) × max(1, height>>k)`. `Texture::Create` uploads each level in
order via `LockRect` (it relies on this tight, level-0-first packing).

**Endianness:** the pixel bytes must be **little-endian** (PC-native). X360 DXT is stored 16-bit
big-endian (GPUENDIAN 8in16), so `PortTexture x360 → decomp` byte-swaps it (8in16) on the way out; a
non-swapped X360 DXT atlas renders as **full-white coverage + colour-shifted blocks**.

Per-level byte size:
- **Block-compressed (DXT/BCn):** `ceil(W/4) * ceil(H/4) * blockBytes` — 8 bytes/block for DXT1, 16 for
  DXT2/3/4/5.
- **Uncompressed:** `ceil(W * bpp / 8) * H`, e.g. `W*4*H` for a 32-bit format.

For an A8R8G8B8 texture, pixels are 4 bytes each in **B, G, R, A** order (D3D9 `D3DFMT_A8R8G8B8` memory
layout), `width*4*height` bytes for level 0.

## 3. `miFormat` (D3DFORMAT) values

`Create` calls D3D9 `CreateTexture(..., (D3DFORMAT)miFormat, D3DPOOL_MANAGED, ...)`, so `miFormat` is a
raw D3DFORMAT. The backend recognizes these for the mip-size math (others fall back to 32 bpp):

| miFormat | D3DFORMAT | bytes |
|---|---|---|
| 21 | `D3DFMT_A8R8G8B8` | 4 bpp (BGRA) — simplest; what the debug font + UI use |
| 28 | `D3DFMT_A8` | 1 bpp |
| 827611204 | `D3DFMT_DXT1` (FOURCC `'DXT1'`) | 8 bytes / 4×4 block |
| 861165636 | `D3DFMT_DXT3` (FOURCC `'DXT3'`) | 16 bytes / block |
| 894720068 | `D3DFMT_DXT5` (FOURCC `'DXT5'`) | 16 bytes / block |

(DXT2 = 844388420, DXT4 = 877942852 are also recognized as 16-byte-block.) Pick the format your pixel
data is actually in.

## 4. Imports

None. A raster is a leaf resource (`GetImportCount` → 0). The *importing* party (a Font, Material, etc.)
references the raster by id through its own import table — see the font schema's import section.

## 5. Authoring with YAP

`.meta.yaml` entry for one atlas/texture page (id `0xbb` here):

```yaml
0x000000bb:
  type: 0x0
  secondaryMemoryType: 1     # pixels in mem-pool 1 (-> rw slot 2 at load)
  alignment: [0x10, 0x80]    # main 16, pixels 128 (graphics)
```

Files:
- `0x000000BB_primary.dat`   — the 40-byte header (§1).
- `0x000000BB_secondary.dat` — the linear mip chain (§2).

Then `YAP c <folder> <bundle>` packs them into a platform-4 bundle.

## 6. Producing this from an Xbox 360 texture (volatility)

`tools/volatility` has a **`decomp` platform** and a **`TextureDecomp`** resource that emit exactly this
format. So:

```
PortTexture --informat=x360 --inpath=<360 texture> --outformat=decomp --outpath=<out>
```

writes the header (§1) as a `TextureDecomp` (the 40-byte x64 `renderengine::Texture`, with `miFormat` as
the mapped Windows D3DFORMAT — e.g. X360 `GPUTEXTUREFORMAT_8_8_8_8` → `D3DFMT_A8R8G8B8`=21, `_DXT1` →
827611204) and the **detiled** pixels as the secondary bitmap (the mem-pool-1 data in §2).

The detiler (`X360TextureUtilities.ConvertToLinearTexture`) walks the 32-block-aligned tiled grid, maps
each block back to its linear position, and drops the tile padding, so non-power-of-two / non-32-aligned
sizes (the old "breaks on height 64" case) now untile correctly. It emits a tightly-packed, level-0-first
linear mip chain — i.e. the layout in §2. (`decomp` is "TUB with an x64 header": same D3DFORMAT/pixel
handling as the TUB PC platform, only the resource header layout differs.)

You can also go the other way (`--informat=decomp`) and to/from `tub`/`bpr`/`ps3`.

## 7. What happens at load (for reference)

1. The loader copies mem-pool 0 → the `Texture` object, mem-pool 1 → the pixel buffer (rw slot 2).
2. `RwRasterResourceType::DeSerialise` clears the runtime D3D handle.
3. `RwRasterResourceType::FixUp` → `Texture::GetParameters` (reads the header) → `Texture::Create`:
   creates a managed D3D9 texture in `miFormat` and uploads the mip chain from mem-pool 1.
4. The texture is then bound by the immediate renderer / texture-state path (e.g. a font's
   `CreateTextureState` points its texture state at atlas page 0).
