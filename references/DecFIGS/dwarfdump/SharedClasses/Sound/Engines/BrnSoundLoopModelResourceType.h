// BrnSoundLoopModelResourceType.h:43
void BrnSound::Vehicles::Engines::LoopModelResourceType::LoopModelResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSoundLoopModelResourceType.h:43
struct BrnSound::Vehicles::Engines::LoopModelResourceType : public CgsResource::Type {
public:
	// BrnSoundLoopModelResourceType.cpp:52
	// Declaration
	virtual uint32_t GetTypeID() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSoundLoopModelResourceType.cpp:54
		using namespace BrnResource;

	}

	// BrnSoundLoopModelResourceType.cpp:61
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// BrnSoundLoopModelResourceType.cpp:107
	virtual void FixDown(void *, const Resource &) const;

	// BrnSoundLoopModelResourceType.cpp:116
	virtual void FixUp(void *, const Resource &) const;

}

