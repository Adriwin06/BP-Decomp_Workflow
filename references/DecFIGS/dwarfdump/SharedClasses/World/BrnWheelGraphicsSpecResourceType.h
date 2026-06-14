// BrnWheelGraphicsSpecResourceType.h:29
namespace BrnWheel {
	// Declaration
	struct GraphicsSpecResourceType {
	public:
		GraphicsSpecResourceType();

	}

}

// BrnWheelGraphicsSpecResourceType.h:37
void BrnWheel::GraphicsSpecResourceType::GraphicsSpecResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnWheelGraphicsSpecResourceType.h:37
struct BrnWheel::GraphicsSpecResourceType : public CgsResource::Type {
public:
	// BrnWheelGraphicsSpecResourceType.cpp:40
	virtual uint32_t GetTypeID() const;

	// BrnWheelGraphicsSpecResourceType.cpp:55
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// BrnWheelGraphicsSpecResourceType.cpp:176
	virtual void FixDown(void *, const Resource &) const;

	// BrnWheelGraphicsSpecResourceType.cpp:197
	virtual void FixUp(void *, const Resource &) const;

}

