// BrnVehicleGraphicsSpecResourceType.h:37
void BrnVehicle::GraphicsSpecResourceType::GraphicsSpecResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnVehicleGraphicsSpecResourceType.h:37
struct BrnVehicle::GraphicsSpecResourceType : public CgsResource::Type {
public:
	// BrnVehicleGraphicsSpecResourceType.cpp:43
	virtual uint32_t GetTypeID() const;

	// BrnVehicleGraphicsSpecResourceType.cpp:58
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// BrnVehicleGraphicsSpecResourceType.cpp:283
	virtual void FixDown(void *, const Resource &) const;

	// BrnVehicleGraphicsSpecResourceType.cpp:363
	virtual void FixUp(void *, const Resource &) const;

}

