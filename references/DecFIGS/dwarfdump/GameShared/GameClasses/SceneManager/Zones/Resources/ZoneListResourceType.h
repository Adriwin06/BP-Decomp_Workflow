// ZoneListResourceType.h:41
void CgsResource::ZoneListResourceType::ZoneListResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ZoneListResourceType.h:41
struct CgsResource::ZoneListResourceType : public CgsResource::Type {
public:
	// ZoneListResourceType.cpp:41
	virtual void * Serialise(const void *, const Resource &, const ResourceDescriptor &) const;

	// ZoneListResourceType.cpp:68
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// ZoneListResourceType.cpp:87
	virtual uint32_t GetTypeID() const;

	// ZoneListResourceType.cpp:103
	virtual void FixUp(void *, const Resource &) const;

	// ZoneListResourceType.cpp:122
	virtual void FixDown(void *, const Resource &) const;

private:
	// ZoneListResourceType.cpp:140
	uint32_t CalculateSizeOfResource(const void *) const;

}

