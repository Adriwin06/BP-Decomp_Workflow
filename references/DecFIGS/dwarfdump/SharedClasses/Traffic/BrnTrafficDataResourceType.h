// BrnTrafficDataResourceType.h:38
void BrnTraffic::TrafficDataResourceType::TrafficDataResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficDataResourceType.h:38
struct BrnTraffic::TrafficDataResourceType : public CgsResource::Type {
public:
	// BrnTrafficDataResourceType.cpp:40
	virtual uint32_t GetTypeID() const;

	// BrnTrafficDataResourceType.cpp:54
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// BrnTrafficDataResourceType.cpp:117
	virtual void FixDown(void *, const Resource &) const;

	// BrnTrafficDataResourceType.cpp:133
	virtual void FixUp(void *, const Resource &) const;

}

