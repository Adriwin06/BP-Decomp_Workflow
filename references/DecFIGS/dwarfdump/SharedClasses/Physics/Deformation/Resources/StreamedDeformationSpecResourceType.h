// StreamedDeformationSpecResourceType.h:41
void BrnResource::StreamedDeformationSpecResourceType::StreamedDeformationSpecResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// StreamedDeformationSpecResourceType.h:41
struct BrnResource::StreamedDeformationSpecResourceType : public CgsResource::Type {
public:
	// StreamedDeformationSpecResourceType.cpp:41
	virtual void * Serialise(const void *, const Resource &, const ResourceDescriptor &) const;

	// StreamedDeformationSpecResourceType.cpp:68
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// StreamedDeformationSpecResourceType.cpp:87
	virtual uint32_t GetTypeID() const;

	// StreamedDeformationSpecResourceType.cpp:103
	virtual void FixUp(void *, const Resource &) const;

	// StreamedDeformationSpecResourceType.cpp:122
	virtual void FixDown(void *, const Resource &) const;

private:
	// StreamedDeformationSpecResourceType.cpp:140
	uint32_t CalculateSizeOfResource(const void *) const;

}

