// AISectionsResourceType.h:38
void BrnAI::AISectionsResourceType::AISectionsResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// AISectionsResourceType.h:38
struct BrnAI::AISectionsResourceType : public CgsResource::Type {
public:
	// AISectionsResourceType.cpp:39
	virtual uint32_t GetTypeID() const;

	// AISectionsResourceType.cpp:54
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// AISectionsResourceType.cpp:117
	virtual void FixDown(void *, const Resource &) const;

	// AISectionsResourceType.cpp:134
	virtual void FixUp(void *, const Resource &) const;

}

