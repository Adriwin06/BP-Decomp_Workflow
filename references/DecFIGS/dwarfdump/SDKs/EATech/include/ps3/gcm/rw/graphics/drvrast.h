// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// Declaration
		struct Raster {
			// drvrast.h:125
			enum StateID {
				STATEID_NA = 0,
				STATEID_MIN_FILTER = 1,
				STATEID_MAG_FILTER = 2,
				STATEID_ADDRESSING_U = 3,
				STATEID_ADDRESSING_V = 4,
				STATEID_MAX = 5,
				STATEID_FORCEENUMSIZEINT = 2147483647,
			}

			// drvrast.h:210
			enum Format {
				FORMAT_NA = -1,
				FORMAT_SURFACE_X1R5G5B5_Z1R5G5B5 = 1,
				FORMAT_SURFACE_X1R5G5B5_O1R5G5B5 = 2,
				FORMAT_SURFACE_R5G6B5 = 3,
				FORMAT_SURFACE_X8R8G8B8_Z8R8G8B8 = 4,
				FORMAT_SURFACE_X8R8G8B8_O8R8G8B8 = 5,
				FORMAT_SURFACE_A8R8G8B8 = 8,
				FORMAT_SURFACE_B8 = 9,
				FORMAT_SURFACE_G8B8 = 10,
				FORMAT_SURFACE_F_W16Z16Y16X16 = 11,
				FORMAT_SURFACE_F_W32Z32Y32X32 = 12,
				FORMAT_SURFACE_F_X32 = 13,
				FORMAT_SURFACE_X8B8G8R8_Z8B8G8R8 = 14,
				FORMAT_SURFACE_X8B8G8R8_O8B8G8R8 = 15,
				FORMAT_SURFACE_A8B8G8R8 = 16,
				FORMAT_DEPTH_Z16 = 1,
				FORMAT_DEPTH_Z24S8 = 2,
				FORMAT_DEPTH_Z24 = 3,
				FORMAT_B8 = 0,
				FORMAT_A1R5G5B5 = 1,
				FORMAT_A4R4G4B4 = 2,
				FORMAT_R5G6B5 = 3,
				FORMAT_A8R8G8B8 = 4,
				FORMAT_COMPRESSED_DXT1 = 5,
				FORMAT_COMPRESSED_DXT23 = 6,
				FORMAT_COMPRESSED_DXT45 = 7,
				FORMAT_G8B8 = 8,
				FORMAT_R6G5B5 = 9,
				FORMAT_DEPTH24_STENCIL8 = 10,
				FORMAT_DEPTH24_STENCIL8F = 11,
				FORMAT_DEPTH16 = 12,
				FORMAT_FLOAT_DEPTH16 = 13,
				FORMAT_X16 = 14,
				FORMAT_Y16_X16 = 15,
				FORMAT_R5G5B5A1 = 16,
				FORMAT_COMPRESSED_HILO8 = 17,
				FORMAT_COMPRESSED_HILO_S8 = 18,
				FORMAT_W16_Z16_Y16_X16_FLOAT = 19,
				FORMAT_W32_Z32_Y32_X32_FLOAT = 20,
				FORMAT_X32_FLOAT = 21,
				FORMAT_D1R5G5B5 = 22,
				FORMAT_D8R8G8B8 = 23,
				FORMAT_Y16_X16_FLOAT = 24,
				FORMAT_R8G8B8A8 = 25,
				FORMAT_LIN_A8R8G8B8 = 26,
				FORMAT_8888 = 4,
				FORMAT_1555 = 1,
				FORMAT_565 = 3,
				FORMAT_4444 = 2,
				FORMAT_ALPHA = 0,
				FORMAT_RGBA = 25,
				FORMAT_DXT1 = 5,
				FORMAT_DXT2 = 6,
				FORMAT_DXT3 = 6,
				FORMAT_DXT4 = 7,
				FORMAT_DXT5 = 7,
				FORMAT_DXT1_RGB = 5,
				FORMAT_DXT1_RGBA = 5,
				FORMAT_DXT3_RGBA = 6,
				FORMAT_DXT5_RGBA = 7,
				FORMAT_888 = -1,
				FORMAT_RGBA8_CAMERA = -1,
				FORMAT_RGBA16_CAMERA = -1,
				FORMAT_FLOAT_RGBA16_CAMERA = -1,
				FORMAT_FLOAT_RGBA32_CAMERA = -1,
				FORMAT_FLOAT_RGBA32 = -1,
				FORMAT_FLOAT_DEPTH32 = -1,
				FORMAT_DEPTH32 = -1,
				FORMAT_STENCIL8 = -1,
				FORMAT_LUM16 = -1,
				FORMAT_16 = -1,
				FORMAT_24 = -1,
				FORMAT_32 = -1,
				FORMAT_PAL4 = -1,
				FORMAT_LUM4 = -1,
				FORMAT_PAL8 = -1,
				FORMAT_LUM8 = -1,
				FORMAT_555 = -1,
				FORMAT_A8B8G8R8 = -1,
				FORMAT_FORCEENUMSIZEINT = 2147483647,
			}

			// drvrast.h:310
			enum PSGLTarget {
				PSGLTARGET_NA = 0,
				PSGLTARGET_2D = 3553,
				PSGLTARGET_3D = 32879,
				PSGLTARGET_CUBEMAP = 34067,
				PSGLTARGET_FORCEENUMSIZEINT = 2147483647,
			}

			// drvrast.h:327
			enum PSGLFormat {
				PSGLFORMAT_NA = 0,
				PSGLFORMAT_ALPHA = 6406,
				PSGLFORMAT_RGB = 6407,
				PSGLFORMAT_RGBA = 6408,
				PSGLFORMAT_LUMINANCE = 6409,
				PSGLFORMAT_LUMINANCE_ALPHA = 6410,
				PSGLFORMAT_RGB_DXT1 = 33776,
				PSGLFORMAT_RGBA_DXT1 = 33777,
				PSGLFORMAT_RGBA_DXT3 = 33778,
				PSGLFORMAT_RGBA_DXT5 = 33779,
				PSGLFORMAT_PAL4_RGB8 = 35728,
				PSGLFORMAT_PAL4_RGBA8 = 35729,
				PSGLFORMAT_PAL4_R5_G6_B5 = 35730,
				PSGLFORMAT_PAL4_RGBA4 = 35731,
				PSGLFORMAT_PAL4_RGB5_A1 = 35732,
				PSGLFORMAT_PAL8_RGB8 = 35733,
				PSGLFORMAT_PAL8_RGBA8 = 35734,
				PSGLFORMAT_PAL8_R5_G6_B5 = 35735,
				PSGLFORMAT_PAL8_RGBA4 = 35736,
				PSGLFORMAT_PAL8_RGB5_A1 = 35737,
				PSGLFORMAT_ARGB_SCE = 24583,
				PSGLFORMAT_ABGR = 32768,
				PSGLFORMAT_RGBA16F_ARB = 34842,
				PSGLFORMAT_RGBA32F_ARB = 34836,
				PSGLFORMAT_BGRA = 32993,
				PSGLFORMAT_DEPTH = 6402,
				PSGLFORMAT_DEPTH16 = 33189,
				PSGLFORMAT_DEPTH24 = 33190,
				PSGLFORMAT_DEPTH32 = 33191,
				PSGLFORMAT_DEPTH16_SCE = 24576,
				PSGLFORMAT_DEPTH32_SCE = 24577,
				PSGLFORMAT_FORCEENUMSIZEINT = 2147483647,
			}

			// drvrast.h:375
			enum PSGLDataType {
				PSGLDATATYPE_NA = 0,
				PSGLDATATYPE_UBYTE = 5121,
				PSGLDATATYPE_USHORT = 5123,
				PSGLDATATYPE_SHORT_4_4_4_4 = 32819,
				PSGLDATATYPE_SHORT_4_4_4_4_REV = 33637,
				PSGLDATATYPE_SHORT_5_5_5_1 = 32820,
				PSGLDATATYPE_SHORT_1_5_5_5_REV = 33638,
				PSGLDATATYPE_SHORT_5_6_5 = 33635,
				PSGLDATATYPE_SHORT_5_6_5_REV = 33636,
				PSGLDATATYPE_UBYTE_8_8_8_8 = 32821,
				PSGLDATATYPE_UBYTE_8_8_8_8_REV = 33639,
				PSGLDATATYPE_UBYTE_8888_REV = 33639,
				PSGLDATATYPE_INT_24_8 = 24584,
				PSGLDATATYPE_FLOAT = 5126,
				PSGLDATATYPE_FLOAT_16 = 5131,
				PSGLDATATYPE_COMPRESSED = 65535,
				PSGLDATATYPE_FORCEENUMSIZEINT = 2147483647,
			}

			// drvrast.h:402
			enum Filter {
				FILTER_NA = 0,
				FILTER_NEAREST = 9728,
				FILTER_LINEAR = 9729,
				FILTER_MIPNEAREST = 9984,
				FILTER_MIPLINEAR = 9985,
				FILTER_LINEARMIPNEAREST = 9986,
				FILTER_LINEARMIPLINEAR = 9987,
				FILTER_ANISOTROPIC = 0,
				FILTER_MIPANISOTROPIC = 0,
				FILTER_LINEARMIPANISOTROPIC = 0,
				FILTER_FORCEENUMSIZEINT = 2147483647,
			}

			// drvrast.h:421
			enum Addressing {
				ADDRESSING_NA = 0,
				ADDRESSING_WRAP = 10497,
				ADDRESSING_MIRROR = 0,
				ADDRESSING_CLAMP = 33071,
				ADDRESSING_BORDER = 0,
				ADDRESSING_FORCEENUMSIZEINT = 2147483647,
			}

			// drvrast.h:438
			struct ParameterStates {
				// drvrast.h:439
				rw::graphics::Raster::Filter m_minFilter;

				// drvrast.h:440
				rw::graphics::Raster::Filter m_magFilter;

				// drvrast.h:441
				rw::graphics::Raster::Addressing m_addressU;

				// drvrast.h:442
				rw::graphics::Raster::Addressing m_addressV;

			}

			// drvrast.h:450
			struct Locked {
				// drvrast.h:451
				rw::graphics::Raster * lockedRaster;

				// drvrast.h:452
				uint8_t * pixelData;

				// drvrast.h:453
				uint32_t lockFlags;

				// drvrast.h:454
				uint8_t lockedMipLevel;

				// drvrast.h:455
				uint8_t pad0;

				// drvrast.h:456
				uint16_t stride;

			}

			// drvrast.h:460
			enum CubeMapFace {
				CUBEMAPFACE_NA = -1,
				CUBEMAPFACE_POSITIVE_X = 0,
				CUBEMAPFACE_NEGATIVE_X = 1,
				CUBEMAPFACE_POSITIVE_Y = 2,
				CUBEMAPFACE_NEGATIVE_Y = 3,
				CUBEMAPFACE_POSITIVE_Z = 4,
				CUBEMAPFACE_NEGATIVE_Z = 5,
				CUBEMAPFACE_MAX = 6,
				CUBEMAPFACE_FORCEENUMSIZEINT = 2147483647,
			}

			// drvrast.h:521
			struct PSGLFormatDetails {
				// drvrast.h:522
				rw::graphics::Raster::PSGLFormat m_internalFormat;

				// drvrast.h:523
				rw::graphics::Raster::PSGLFormat m_dataFormat;

				// drvrast.h:524
				rw::graphics::Raster::PSGLDataType m_dataType;

			}

		}

	}

}

// drvrast.h:122
struct rw::graphics::Raster {
	// drvrast.h:139
	extern const uint32_t TYPE_CAMERA = 1;

	// drvrast.h:140
	extern const uint32_t TYPE_ZBUFFER = 2;

	// drvrast.h:141
	extern const uint32_t TYPE_NORMAL = 4;

	// drvrast.h:142
	extern const uint32_t TYPE_TEXTURE = 8;

	// drvrast.h:144
	extern const uint32_t TYPE_BASE_TYPE_MASK = 15;

	// drvrast.h:147
	extern const uint32_t TYPE_CAMERATEXTURE = 9;

	// drvrast.h:148
	extern const uint32_t TYPE_ZTEXTURE = 11;

	// drvrast.h:150
	extern const uint32_t TYPE_DYNAMIC = 16;

	// drvrast.h:151
	extern const uint32_t TYPE_READ = 32;

	// drvrast.h:154
	extern const uint32_t TYPE_DONTALLOCATE = 256;

	// drvrast.h:156
	extern const uint32_t TYPE_PSGL_CUBE = 4096;

	// drvrast.h:157
	extern const uint32_t TYPE_KEEP_DATA = 16384;

	// drvrast.h:158
	extern const uint32_t TYPE_PSGL_VOLUME = 32768;

	// drvrast.h:160
	extern const uint32_t TYPE_CUBE = 4096;

	// drvrast.h:161
	extern const uint32_t TYPE_VOLUME = 32768;

	// drvrast.h:172
	extern const uint32_t PS3SURFACE_X1R5G5B5_Z1R5G5B5 = 1;

	// drvrast.h:173
	extern const uint32_t PS3SURFACE_X1R5G5B5_O1R5G5B5 = 2;

	// drvrast.h:174
	extern const uint32_t PS3SURFACE_R5G6B5 = 3;

	// drvrast.h:175
	extern const uint32_t PS3SURFACE_X8R8G8B8_Z8R8G8B8 = 4;

	// drvrast.h:176
	extern const uint32_t PS3SURFACE_X8R8G8B8_O8R8G8B8 = 5;

	// drvrast.h:177
	extern const uint32_t PS3SURFACE_A8R8G8B8 = 8;

	// drvrast.h:178
	extern const uint32_t PS3SURFACE_B8 = 9;

	// drvrast.h:179
	extern const uint32_t PS3SURFACE_G8B8 = 10;

	// drvrast.h:180
	extern const uint32_t PS3SURFACE_F_W16Z16Y16X16 = 11;

	// drvrast.h:181
	extern const uint32_t PS3SURFACE_F_W32Z32Y32X32 = 12;

	// drvrast.h:182
	extern const uint32_t PS3SURFACE_F_X32 = 13;

	// drvrast.h:183
	extern const uint32_t PS3SURFACE_X8B8G8R8_Z8B8G8R8 = 14;

	// drvrast.h:184
	extern const uint32_t PS3SURFACE_X8B8G8R8_O8B8G8R8 = 15;

	// drvrast.h:185
	extern const uint32_t PS3SURFACE_A8B8G8R8 = 16;

	// drvrast.h:190
	extern const uint32_t PS3SURFACE_Z16 = 1;

	// drvrast.h:191
	extern const uint32_t PS3SURFACE_Z24S8 = 2;

	// drvrast.h:192
	extern const uint32_t PS3SURFACE_Z24 = 3;

	// drvrast.h:197
	extern const uint32_t PS3REMAP_ORDER_XYXY;

	// drvrast.h:198
	extern const uint32_t PS3REMAP_ORDER_XXXY = 1;

	// drvrast.h:199
	extern const uint32_t PS3REMAP_FROM_A;

	// drvrast.h:200
	extern const uint32_t PS3REMAP_FROM_R = 1;

	// drvrast.h:201
	extern const uint32_t PS3REMAP_FROM_G = 2;

	// drvrast.h:202
	extern const uint32_t PS3REMAP_FROM_B = 3;

	// drvrast.h:203
	extern const uint32_t PS3REMAP_OUTPUT_ZERO;

	// drvrast.h:204
	extern const uint32_t PS3REMAP_OUTPUT_ONE = 1;

	// drvrast.h:205
	extern const uint32_t PS3REMAP_OUTPUT_REMAP = 2;

private:
	// drvrast.h:557
	extern uint32_t[] m_PSGLCubemapFaceTable;

	// drvrast.h:558
	extern rw::graphics::Raster::PSGLFormatDetails[] m_formatDetails;

	// drvrast.h:560
	void * m_data;

	// drvrast.h:563
	union {
		// drvrast.h:564
		uint32_t m_name;

		// drvrast.h:565
		uint32_t m_renderBuffer;

	}

	// drvrast.h:568
	rw::graphics::Raster::ParameterStates m_paramStates;

	// drvrast.h:569
	uint32_t m_type;

	// drvrast.h:570
	rw::graphics::Raster::PSGLTarget m_target;

	// drvrast.h:571
	rw::graphics::Raster::PSGLFormat m_internalFormat;

	// drvrast.h:572
	rw::graphics::Raster::PSGLFormat m_dataFormat;

	// drvrast.h:573
	rw::graphics::Raster::PSGLDataType m_dataType;

	// drvrast.h:574
	uint32_t m_bufferName;

	// drvrast.h:575
	uint16_t m_width;

	// drvrast.h:576
	uint16_t m_height;

	// drvrast.h:577
	uint8_t m_numMipLevels;

	// drvrast.h:578
	uint8_t m_face;

public:
	// drvrast.h:163
	const uint32_t TYPE_VOLUME_OF_DEPTH(uint32_t);

	// drvrast.h:477
	ResourceDescriptor GetResourceDescriptor(uint16_t, uint16_t, uint8_t, uint32_t, rw::graphics::Raster::Format);

	// drvrast.h:477
	uint32_t GetAlignment(uint16_t, uint16_t, uint8_t, uint32_t, rw::graphics::Raster::Format);

	// drvrast.h:477
	uint32_t GetSize(uint16_t, uint16_t, uint8_t, uint32_t, rw::graphics::Raster::Format);

	// drvrast.h:477
	rw::graphics::Raster * Initialize(void *, uint32_t, uint16_t, uint16_t, uint8_t, uint32_t, rw::graphics::Raster::Format);

	// drvrast.h:477
	rw::graphics::Raster * Initialize(const Resource &, uint16_t, uint16_t, uint8_t, uint32_t, rw::graphics::Raster::Format);

	// drvrast.h:477
	void Destruct(rw::graphics::Raster *);

	// drvrast.h:477
	void Release();

	// drvrast.h:477
	uint16_t GetWidth() const;

	// drvrast.h:477
	uint16_t GetHeight() const;

	// drvrast.h:477
	uint8_t GetDepth() const;

	// drvrast.h:477
	uint8_t GetNumMipLevels() const;

	// drvrast.h:477
	int32_t GetType() const;

	// drvrast.h:477
	rw::graphics::Raster::Format GetFormat() const;

	// drvrast.h:477
	uint32_t GetLinearBufferSize(uint8_t) const;

	// drvrast.h:477
	rw::graphics::Raster * Lock(uint32_t, uint8_t, rw::graphics::Raster::Locked &);

	// drvrast.h:477
	rw::graphics::Raster * Unlock(rw::graphics::Raster::Locked &);

	// drvrast.h:477
	RwBool Fill(const void *, uint8_t);

	// drvrast.h:477
	RwBool Extract(void *, uint32_t, uint8_t);

	// drvrast.h:477
	uint8_t FormatGetDepth(rw::graphics::Raster::Format);

	// drvrast.h:477
	RwBool FormatSupportsAlpha(rw::graphics::Raster::Format);

	// drvrast.h:477
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// drvrast.h:477
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// drvrast.h:477
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// drvrast.h:477
	void RegisterArenaReadCallbacks();

	// drvrast.h:477
	void RegisterArenaWriteCallbacks();

	// drvrast.h:478
	void SetActiveFace(rw::graphics::Raster::CubeMapFace);

	// drvrast.h:478
	rw::graphics::Raster::CubeMapFace GetActiveFace() const;

	// drvrast.h:481
	void PSGLSetActiveFace(rw::graphics::Raster::CubeMapFace);

	// drvrast.h:482
	rw::graphics::Raster::CubeMapFace PSGLGetActiveFace() const;

	// drvrast.h:483
	rw::graphics::Raster::PSGLTarget PSGLGetTarget() const;

	// drvrast.h:484
	uint32_t PSGLGetName() const;

	// drvrast.h:485
	uint32_t PSGLGetRenderBuffer() const;

	// drvrast.h:487
	rw::graphics::Raster::ParameterStates * PSGLParameterStates();

	// drvrast.h:488
	const rw::graphics::Raster::ParameterStates * PSGLParameterStates() const;

	// drvrast.h:490
	uint32_t PSGLGetSurface() const;

	// drvrast.h:491
	void PSGLSetSurface(uint32_t);

	// drvrast.h:493
	void PSGLCameraTextureBeginUpdate();

	// drvrast.h:494
	void PSGLCameraTextureEndUpdate();

	// drvrast.h:496
	const void * PSGLGetPixelData() const;

	// drvrast.h:497
	void * PSGLGetPixelData();

	// drvrast.h:498
	void PSGLSetPixelData(void *);

	// drvrast.h:499
	uint32_t PSGLGetPixelDataSize() const;

	// drvrast.h:502
	void * PSGLUpdateBegin(uint32_t);

	// drvrast.h:503
	void PSGLUpdateEnd();

	// drvrast.h:506
	bool PSGLZStencil() const;

private:
	// drvrast.h:512
	void * PSGLRawLock(uint32_t);

	// drvrast.h:513
	void PSGLRawUnlock();

	// drvrast.h:528
	uint32_t PSGLBitsPerPixel(rw::graphics::Raster::Format);

	// drvrast.h:529
	uint32_t PSGLBitsPerPixel(rw::graphics::Raster::PSGLFormat, rw::graphics::Raster::PSGLDataType);

	// drvrast.h:531
	uint32_t PSGLMipLevelStride(rw::graphics::Raster::PSGLFormat, rw::graphics::Raster::PSGLDataType, uint16_t, uint8_t);

	// drvrast.h:532
	uint8_t PSGLMipLevels(uint16_t, uint16_t);

	// drvrast.h:534
	uint32_t PSGLMipLevelSize(rw::graphics::Raster::PSGLFormat, rw::graphics::Raster::PSGLDataType, uint16_t, uint16_t, uint8_t);

	// drvrast.h:536
	uint32_t PSGLFaceSize(rw::graphics::Raster::PSGLFormat, rw::graphics::Raster::PSGLDataType, uint16_t, uint16_t, uint8_t);

	// drvrast.h:539
	uint32_t PSGLBitsPerPixel() const;

	// drvrast.h:540
	uint32_t PSGLMipLevelStride(uint8_t) const;

	// drvrast.h:541
	uint32_t PSGLMipLevelSize(uint8_t) const;

	// drvrast.h:542
	uint32_t PSGLFaceSize() const;

	// drvrast.h:543
	uint32_t PSGLDataOffset(uint8_t) const;

	// drvrast.h:544
	void SetDetailsFromFormat(rw::graphics::Raster::Format);

	// drvrast.h:547
	void PSGLCreateGPUObjects();

	// drvrast.h:551
	void PSGLSetPointer(uint32_t, uint8_t, uint16_t, uint16_t, uint32_t, void *);

	// drvrast.h:552
	void PSGLFillPBO(uint8_t);

	// drvrast.h:553
	void PSGLUploadLevel(uint8_t);

	// drvrast.h:554
	void PSGLUploadData();

	// drvrast.h:581
	void Raster();

	// drvrast.h:582
	void Raster(const Raster &);

	// drvrast.h:583
	void ~Raster();

}

// drvrast.h:139
extern const uint32_t TYPE_CAMERA = 1;

// drvrast.h:140
extern const uint32_t TYPE_ZBUFFER = 2;

// drvrast.h:142
extern const uint32_t TYPE_TEXTURE = 8;

// drvrast.h:156
extern const uint32_t TYPE_PSGL_CUBE = 4096;

// drvrast.h:158
extern const uint32_t TYPE_PSGL_VOLUME = 32768;

// drvrast.h:161
extern const uint32_t TYPE_VOLUME = 32768;

// drvrast.h:172
extern const uint32_t PS3SURFACE_X1R5G5B5_Z1R5G5B5 = 1;

// drvrast.h:173
extern const uint32_t PS3SURFACE_X1R5G5B5_O1R5G5B5 = 2;

// drvrast.h:174
extern const uint32_t PS3SURFACE_R5G6B5 = 3;

// drvrast.h:175
extern const uint32_t PS3SURFACE_X8R8G8B8_Z8R8G8B8 = 4;

// drvrast.h:176
extern const uint32_t PS3SURFACE_X8R8G8B8_O8R8G8B8 = 5;

// drvrast.h:177
extern const uint32_t PS3SURFACE_A8R8G8B8 = 8;

// drvrast.h:178
extern const uint32_t PS3SURFACE_B8 = 9;

// drvrast.h:179
extern const uint32_t PS3SURFACE_G8B8 = 10;

// drvrast.h:180
extern const uint32_t PS3SURFACE_F_W16Z16Y16X16 = 11;

// drvrast.h:181
extern const uint32_t PS3SURFACE_F_W32Z32Y32X32 = 12;

// drvrast.h:182
extern const uint32_t PS3SURFACE_F_X32 = 13;

// drvrast.h:183
extern const uint32_t PS3SURFACE_X8B8G8R8_Z8B8G8R8 = 14;

// drvrast.h:184
extern const uint32_t PS3SURFACE_X8B8G8R8_O8B8G8R8 = 15;

// drvrast.h:185
extern const uint32_t PS3SURFACE_A8B8G8R8 = 16;

// drvrast.h:190
extern const uint32_t PS3SURFACE_Z16 = 1;

// drvrast.h:191
extern const uint32_t PS3SURFACE_Z24S8 = 2;

// drvrast.h:192
extern const uint32_t PS3SURFACE_Z24 = 3;

// drvrast.h:557
extern uint32_t[] m_PSGLCubemapFaceTable;

// drvrast.h:558
extern rw::graphics::Raster::PSGLFormatDetails[] m_formatDetails;

