// BrnFlaptFileResourceType.h:38
struct BrnFlapt::FlaptFileResourceType : public CgsResource::Type {
public:
	// BrnFlaptFileResourceType.cpp:41
	virtual uint32_t GetTypeID() const;

	// BrnFlaptFileResourceType.cpp:55
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// BrnFlaptFileResourceType.cpp:74
	virtual uint32_t GetImportCount(const void *) const;

	// BrnFlaptFileResourceType.cpp:96
	virtual void GetImportPointer(const void *, uint32_t, uint32_t *, const void **) const;

	// BrnFlaptFileResourceType.cpp:158
	virtual void FixDown(void *, const Resource &) const;

	// BrnFlaptFileResourceType.cpp:174
	virtual void FixUp(void *, const Resource &) const;

}

// BrnFlaptFileResourceType.h:38
void BrnFlapt::FlaptFileResourceType::FlaptFileResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

