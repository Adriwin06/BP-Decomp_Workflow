// BrnStreetDataResourceType.h:38
void BrnStreetData::StreetDataResourceType::StreetDataResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStreetDataResourceType.h:38
struct BrnStreetData::StreetDataResourceType : public CgsResource::Type {
public:
	// BrnStreetDataResourceType.cpp:39
	virtual uint32_t GetTypeID() const;

	// BrnStreetDataResourceType.cpp:54
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// BrnStreetDataResourceType.cpp:117
	virtual void FixDown(void *, const Resource &) const;

	// BrnStreetDataResourceType.cpp:134
	virtual void FixUp(void *, const Resource &) const;

}

