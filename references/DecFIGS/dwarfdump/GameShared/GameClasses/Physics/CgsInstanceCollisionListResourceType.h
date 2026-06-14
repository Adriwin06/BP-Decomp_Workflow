// CgsInstanceCollisionListResourceType.h:42
void CgsPhysics::InstanceCollisionListResourceType::InstanceCollisionListResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsInstanceCollisionListResourceType.h:42
struct CgsPhysics::InstanceCollisionListResourceType : public CgsResource::Type {
private:
	// CgsInstanceCollisionListResourceType.cpp:47
	virtual uint32_t GetTypeID() const;

	// CgsInstanceCollisionListResourceType.cpp:66
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsInstanceCollisionListResourceType.cpp:253
	uint32_t CalculateSizeOfResource(const void *) const;

	// CgsInstanceCollisionListResourceType.cpp:209
	virtual void FixDown(void *, const Resource &) const;

	// CgsInstanceCollisionListResourceType.cpp:232
	virtual void FixUp(void *, const Resource &) const;

}

