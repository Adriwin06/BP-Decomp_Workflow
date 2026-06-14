// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// BrnEffectsData.h:40
		namespace postfx {
			// Declaration
			struct ColourCube {
				// rwgpfxcolourcube.h:17
				struct Parameters {
					// rwgpfxcolourcube.h:18
					uint32_t size;

				}

			}

		}

	}

}

// rwgpfxcolourcube.h:14
struct rw::graphics::postfx::ColourCube {
	// rwgpfxcolourcube.h:41
	uint32_t m_size;

	// rwgpfxcolourcube.h:42
	uint8_t * m_pixels;

public:
	// rwgpfxcolourcube.h:21
	ResourceDescriptor GetResourceDescriptor(rw::graphics::postfx::ColourCube::Parameters &);

	// rwgpfxcolourcube.h:22
	rw::graphics::postfx::ColourCube * Initialize(const Resource &, rw::graphics::postfx::ColourCube::Parameters &);

	// rwgpfxcolourcube.h:23
	void Release();

	// rwgpfxcolourcube.h:25
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// rwgpfxcolourcube.h:25
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// rwgpfxcolourcube.h:25
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// rwgpfxcolourcube.h:25
	void RegisterArenaReadCallbacks();

	// rwgpfxcolourcube.h:25
	void RegisterArenaWriteCallbacks();

	// rwgpfxcolourcube.h:25
	void EndianSwapUnfix();

	// rwgpfxcolourcube.h:25
	void EndianSwapFixup();

	// rwgpfxcolourcube.h:27
	uint32_t GetSize() const;

	// rwgpfxcolourcube.h:28
	uint8_t * GetPixels() const;

	// rwgpfxcolourcube.h:30
	void Fill(uint8_t *);

	// rwgpfxcolourcube.h:32
	void GetParameters(rw::graphics::postfx::ColourCube::Parameters &) const;

private:
	// rwgpfxcolourcube.h:35
	void ColourCube();

	// rwgpfxcolourcube.h:36
	void ColourCube(const rw::graphics::postfx::ColourCube &);

	// rwgpfxcolourcube.h:37
	void ~ColourCube();

}

// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// rwgpfxcolourcube.h:11
		namespace postfx {
			// Declaration
			struct ColourCube {
				// rwgpfxcolourcube.h:17
				struct Parameters {
					// rwgpfxcolourcube.h:18
					uint32_t size;

				}

			}

		}

	}

}

// rwgpfxcolourcube.h:14
struct rw::graphics::postfx::ColourCube {
	// rwgpfxcolourcube.h:41
	uint32_t m_size;

	// rwgpfxcolourcube.h:42
	uint8_t * m_pixels;

public:
	// rwgpfxcolourcube.h:21
	ResourceDescriptor GetResourceDescriptor(rw::graphics::postfx::ColourCube::Parameters &);

	// rwgpfxcolourcube.h:22
	ColourCube * Initialize(const Resource &, rw::graphics::postfx::ColourCube::Parameters &);

	// rwgpfxcolourcube.h:23
	void Release();

	// rwgpfxcolourcube.h:25
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// rwgpfxcolourcube.h:25
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// rwgpfxcolourcube.h:25
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// rwgpfxcolourcube.h:25
	void RegisterArenaReadCallbacks();

	// rwgpfxcolourcube.h:25
	void RegisterArenaWriteCallbacks();

	// rwgpfxcolourcube.h:25
	void EndianSwapUnfix();

	// rwgpfxcolourcube.h:25
	void EndianSwapFixup();

	// rwgpfxcolourcube.h:27
	uint32_t GetSize() const;

	// rwgpfxcolourcube.h:28
	uint8_t * GetPixels() const;

	// rwgpfxcolourcube.h:30
	void Fill(uint8_t *);

	// rwgpfxcolourcube.h:32
	void GetParameters(rw::graphics::postfx::ColourCube::Parameters &) const;

private:
	// rwgpfxcolourcube.h:35
	void ColourCube();

	// rwgpfxcolourcube.h:36
	void ColourCube(const ColourCube &);

	// rwgpfxcolourcube.h:37
	void ~ColourCube();

}

