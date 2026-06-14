// CgsInstanceListResourceType.h:42
void CgsGraphics::InstanceListResourceType::InstanceListResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsInstanceListResourceType.h:42
struct CgsGraphics::InstanceListResourceType : public CgsResource::Type {
private:
	// CgsInstanceListResourceType.cpp:44
	virtual uint32_t GetTypeID() const;

	// CgsInstanceListResourceType.cpp:60
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsInstanceListResourceType.cpp:221
	uint32_t CalculateSizeOfResource(const void *) const;

	// CgsInstanceListResourceType.cpp:183
	virtual void FixDown(void *, const Resource &) const;

	// CgsInstanceListResourceType.cpp:203
	virtual void FixUp(void *, const Resource &) const;

	// CgsInstanceListResourceType.cpp:234
	virtual void PostFixUp(void *, const Resource &) const;

}

