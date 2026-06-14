// BrnPropInstanceDataResourceType.h:52
void BrnPhysics::Props::PropInstanceDataResourceType::PropInstanceDataResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPropInstanceDataResourceType.h:52
struct BrnPhysics::Props::PropInstanceDataResourceType : public CgsResource::Type {
public:
	// BrnPropInstanceDataResourceType.cpp:43
	virtual uint32_t GetTypeID() const;

	// BrnPropInstanceDataResourceType.cpp:57
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// BrnPropInstanceDataResourceType.cpp:110
	virtual void FixDown(void *, const Resource &) const;

	// BrnPropInstanceDataResourceType.cpp:126
	virtual void FixUp(void *, const Resource &) const;

}

