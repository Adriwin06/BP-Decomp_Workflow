// BrnVehiclePhysicsSpecResourceType.h:37
struct BrnVehicle::PhysicsSpecResourceType : public CgsResource::Type {
public:
	// BrnVehiclePhysicsSpecResourceType.cpp:38
	virtual uint32_t GetTypeID() const;

	// BrnVehiclePhysicsSpecResourceType.cpp:53
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// BrnVehiclePhysicsSpecResourceType.cpp:175
	virtual void FixDown(void *, const Resource &) const;

	// BrnVehiclePhysicsSpecResourceType.cpp:199
	virtual void FixUp(void *, const Resource &) const;

}

