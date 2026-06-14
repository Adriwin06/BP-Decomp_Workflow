// VehicleListResourceType.h:43
struct BrnResource::VehicleListResource {
	// VehicleListResourceType.h:46
	uint32_t muNumVehicles;

	// VehicleListResourceType.h:47
	VehicleListEntry * mpEntries;

	// VehicleListResourceType.h:48
	uint64_t mu16BytePad;

}

// VehicleListResourceType.h:60
void BrnResource::VehicleListResourceType::VehicleListResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// VehicleListResourceType.h:60
struct BrnResource::VehicleListResourceType : public CgsResource::Type {
public:
	// VehicleListResourceType.cpp:41
	virtual uint32_t GetTypeID() const;

	// VehicleListResourceType.cpp:57
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// VehicleListResourceType.cpp:122
	virtual void FixDown(void *, const Resource &) const;

	// VehicleListResourceType.cpp:153
	virtual void FixUp(void *, const Resource &) const;

}

