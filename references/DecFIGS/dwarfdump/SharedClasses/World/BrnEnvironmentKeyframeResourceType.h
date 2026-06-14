// BrnEnvironmentKeyframeResourceType.h:52
void BrnWorld::EnvironmentSettings::KeyframeResourceType::KeyframeResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEnvironmentKeyframeResourceType.h:52
struct BrnWorld::EnvironmentSettings::KeyframeResourceType : public CgsResource::Type {
public:
	// BrnEnvironmentKeyframeResourceType.cpp:41
	virtual uint32_t GetTypeID() const;

	// BrnEnvironmentKeyframeResourceType.cpp:56
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// BrnEnvironmentKeyframeResourceType.cpp:154
	virtual void FixDown(void *, const Resource &) const;

	// BrnEnvironmentKeyframeResourceType.cpp:172
	virtual void FixUp(void *, const Resource &) const;

}

