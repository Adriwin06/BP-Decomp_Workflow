// CgsVoiceHierarchyResourceType.h:53
void CgsResource::VoiceHierarchyResourceType::VoiceHierarchyResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoiceHierarchyResourceType.h:53
struct CgsResource::VoiceHierarchyResourceType : public CgsResource::Type {
public:
	// CgsVoiceHierarchyResourceType.cpp:55
	virtual uint32_t GetTypeID() const;

	// CgsVoiceHierarchyResourceType.cpp:74
	// Declaration
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVoiceHierarchyResourceType.cpp:76
		using namespace CgsSound::Logic;

	}

	// CgsVoiceHierarchyResourceType.cpp:254
	// Declaration
	virtual void FixUp(void *, const Resource &) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVoiceHierarchyResourceType.cpp:256
		using namespace CgsSound::Logic;

	}

	// CgsVoiceHierarchyResourceType.cpp:305
	virtual RwUInt32 GetImportCount(const void *) const;

	// CgsVoiceHierarchyResourceType.cpp:326
	virtual void GetImportPointer(const void *, RwUInt32, RwUInt32 *, const void **) const;

}

