// MassiveLookupTableResourceType.h:41
void CgsResource::MassiveLookupTableResourceType::MassiveLookupTableResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// MassiveLookupTableResourceType.h:41
struct CgsResource::MassiveLookupTableResourceType : public CgsResource::Type {
public:
	// MassiveLookupTableResourceType.cpp:41
	virtual void * Serialise(const void *, const Resource &, const ResourceDescriptor &) const;

	// MassiveLookupTableResourceType.cpp:68
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// MassiveLookupTableResourceType.cpp:87
	virtual uint32_t GetTypeID() const;

	// MassiveLookupTableResourceType.cpp:103
	virtual void FixUp(void *, const Resource &) const;

	// MassiveLookupTableResourceType.cpp:122
	virtual void FixDown(void *, const Resource &) const;

private:
	// MassiveLookupTableResourceType.cpp:140
	uint32_t CalculateSizeOfResource(const void *) const;

}

