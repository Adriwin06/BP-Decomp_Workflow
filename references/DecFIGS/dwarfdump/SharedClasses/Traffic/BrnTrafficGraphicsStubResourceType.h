// BrnTrafficGraphicsStubResourceType.h:38
void BrnTraffic::GraphicsStubResourceType::GraphicsStubResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficGraphicsStubResourceType.h:38
struct BrnTraffic::GraphicsStubResourceType : public CgsResource::Type {
public:
	// BrnTrafficGraphicsStubResourceType.cpp:40
	virtual uint32_t GetTypeID() const;

	// BrnTrafficGraphicsStubResourceType.cpp:54
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// BrnTrafficGraphicsStubResourceType.cpp:101
	virtual void FixDown(void *, const Resource &) const;

	// BrnTrafficGraphicsStubResourceType.cpp:116
	virtual void FixUp(void *, const Resource &) const;

	// BrnTrafficGraphicsStubResourceType.cpp:134
	virtual uint32_t GetImportCount(const void *) const;

	// BrnTrafficGraphicsStubResourceType.cpp:153
	virtual void GetImportPointer(const void *, uint32_t, uint32_t *, const void **) const;

}

