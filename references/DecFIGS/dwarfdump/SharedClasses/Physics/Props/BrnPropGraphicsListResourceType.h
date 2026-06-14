// BrnPropGraphicsListResourceType.h:51
void BrnPhysics::Props::PropGraphicsListResourceType::PropGraphicsListResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPropGraphicsListResourceType.h:51
struct BrnPhysics::Props::PropGraphicsListResourceType : public CgsResource::Type {
public:
	// BrnPropGraphicsListResourceType.cpp:44
	virtual uint32_t GetTypeID() const;

	// BrnPropGraphicsListResourceType.cpp:58
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// BrnPropGraphicsListResourceType.cpp:121
	virtual void FixDown(void *, const Resource &) const;

	// BrnPropGraphicsListResourceType.cpp:137
	virtual void FixUp(void *, const Resource &) const;

	// BrnPropGraphicsListResourceType.cpp:157
	virtual uint32_t GetImportCount(const void *) const;

	// BrnPropGraphicsListResourceType.cpp:176
	virtual void GetImportPointer(const void *, uint32_t, uint32_t *, const void **) const;

}

