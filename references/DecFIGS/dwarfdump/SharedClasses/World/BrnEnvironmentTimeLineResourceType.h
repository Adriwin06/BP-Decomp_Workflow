// BrnEnvironmentTimeLineResourceType.h:52
void BrnWorld::EnvironmentSettings::TimeLineResourceType::TimeLineResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEnvironmentTimeLineResourceType.h:52
struct BrnWorld::EnvironmentSettings::TimeLineResourceType : public CgsResource::Type {
public:
	// BrnEnvironmentTimeLineResourceType.cpp:41
	virtual uint32_t GetTypeID() const;

	// BrnEnvironmentTimeLineResourceType.cpp:56
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// BrnEnvironmentTimeLineResourceType.cpp:251
	virtual void FixDown(void *, const Resource &) const;

	// BrnEnvironmentTimeLineResourceType.cpp:299
	virtual void FixUp(void *, const Resource &) const;

}

