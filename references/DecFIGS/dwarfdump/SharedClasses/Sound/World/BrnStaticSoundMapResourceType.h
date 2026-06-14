// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnStaticSoundMapResourceType.h:33
	namespace World {
		// Declaration
		struct StaticSoundMapResourceType {
		public:
			StaticSoundMapResourceType();

		}

	}

}

// BrnStaticSoundMapResourceType.h:53
void BrnSound::World::StaticSoundMapResourceType::StaticSoundMapResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStaticSoundMapResourceType.h:53
struct BrnSound::World::StaticSoundMapResourceType : public CgsResource::Type {
public:
	// BrnStaticSoundMapResourceType.cpp:55
	virtual uint32_t GetTypeID() const;

	// BrnStaticSoundMapResourceType.cpp:74
	// Declaration
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnStaticSoundMapResourceType.cpp:76
		using namespace BrnSound::World;

	}

	// BrnStaticSoundMapResourceType.cpp:222
	// Declaration
	virtual void FixUp(void *, const Resource &) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnStaticSoundMapResourceType.cpp:224
		using namespace BrnSound::World;

	}

	// BrnStaticSoundMapResourceType.cpp:282
	virtual RwUInt32 GetImportCount(const void *) const;

	// BrnStaticSoundMapResourceType.cpp:303
	virtual void GetImportPointer(const void *, RwUInt32, RwUInt32 *, const void **) const;

}

