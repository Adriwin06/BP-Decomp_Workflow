// WheelListResourceType.h:43
struct BrnResource::WheelListResource {
	// WheelListResourceType.h:46
	uint32_t muNumWheels;

	// WheelListResourceType.h:47
	WheelListEntry * mpEntries;

	// WheelListResourceType.h:48
	uint64_t mu16BytePad;

}

// WheelListResourceType.h:60
void BrnResource::WheelListResourceType::WheelListResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// WheelListResourceType.h:60
struct BrnResource::WheelListResourceType : public CgsResource::Type {
public:
	// WheelListResourceType.cpp:41
	virtual uint32_t GetTypeID() const;

	// WheelListResourceType.cpp:57
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// WheelListResourceType.cpp:122
	virtual void FixDown(void *, const Resource &) const;

	// WheelListResourceType.cpp:153
	virtual void FixUp(void *, const Resource &) const;

}

