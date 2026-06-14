// CgsResourceIdListResourceType.h:42
struct CgsResource::IdListResourceType : public CgsResource::Type {
public:
	void IdListResourceType(const IdListResourceType &);

	void IdListResourceType();

	// CgsResourceIdListResourceType.cpp:241
	uint32_t CalculateSizeOfResource(const void *);

private:
	// CgsResourceIdListResourceType.cpp:47
	virtual uint32_t GetTypeID() const;

	// CgsResourceIdListResourceType.cpp:66
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsResourceIdListResourceType.cpp:198
	virtual void FixDown(void *, const Resource &) const;

	// CgsResourceIdListResourceType.cpp:220
	virtual void FixUp(void *, const Resource &) const;

}

// CgsResourceIdListResourceType.h:42
void CgsResource::IdListResourceType::IdListResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

