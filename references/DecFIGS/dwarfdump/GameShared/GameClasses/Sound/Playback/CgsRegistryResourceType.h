// CgsRegistryResourceType.h:41
struct CgsResource::RegistryResourceType : public CgsResource::Type {
public:
	void RegistryResourceType(const CgsResource::RegistryResourceType &);

	void RegistryResourceType();

	// CgsRegistryResourceType.h:79
	virtual uint32_t GetTypeID() const;

	// CgsRegistryResourceType.h:87
	// Declaration
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsRegistryResourceType.h:89
		using namespace CgsSound::Playback;

	}

	// CgsRegistryResourceType.h:100
	virtual void FixDown(void *, const Resource &) const;

	// CgsRegistryResourceType.h:115
	virtual void FixUp(void *, const Resource &) const;

}

// CgsRegistryResourceType.h:41
void CgsResource::RegistryResourceType::RegistryResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

