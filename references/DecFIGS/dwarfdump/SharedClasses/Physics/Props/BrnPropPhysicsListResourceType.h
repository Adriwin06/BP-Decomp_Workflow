// BrnPropPhysicsListResourceType.h:51
void BrnPhysics::Props::PropPhysicsResourceType::PropPhysicsResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPropPhysicsListResourceType.h:51
struct BrnPhysics::Props::PropPhysicsResourceType : public CgsResource::Type {
public:
	// BrnPropPhysicsListResourceType.cpp:44
	virtual uint32_t GetTypeID() const;

	// BrnPropPhysicsListResourceType.cpp:58
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// BrnPropPhysicsListResourceType.cpp:119
	virtual void FixDown(void *, const Resource &) const;

	// BrnPropPhysicsListResourceType.cpp:135
	virtual void FixUp(void *, const Resource &) const;

}

