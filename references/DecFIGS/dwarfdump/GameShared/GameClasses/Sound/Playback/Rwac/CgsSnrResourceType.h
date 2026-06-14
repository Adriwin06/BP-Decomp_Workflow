// CgsSnrResourceType.h:47
void CgsResource::SnrResourceType::SnrResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSnrResourceType.h:47
struct CgsResource::SnrResourceType : public CgsResource::Type {
public:
	// CgsSnrResourceType.cpp:55
	virtual uint32_t GetTypeID() const;

	// CgsSnrResourceType.cpp:74
	// Declaration
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSnrResourceType.cpp:76
		using namespace CgsSound::Playback;

	}

	// CgsSnrResourceType.cpp:165
	// Declaration
	virtual void FixUp(void *, const Resource &) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSnrResourceType.cpp:167
		using namespace CgsSound::Playback;

	}

}

