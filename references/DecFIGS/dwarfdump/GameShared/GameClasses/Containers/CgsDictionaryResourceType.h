// CgsDictionaryResourceType.h:63
struct CgsContainers::DictionaryResourceType<ICE::ICETakeData> : public CgsContainers::DictionaryResourceTypeBase {
public:
	void DictionaryResourceType(const DictionaryResourceType<ICE::ICETakeData> &);

	void DictionaryResourceType();

private:
	// CgsDictionaryResourceType.h:101
	virtual uint32_t GetTypeID() const;

	// CgsDictionaryResourceType.h:162
	virtual void FixDown(void *, const Resource &) const;

	// CgsDictionaryResourceType.h:183
	virtual void FixUp(void *, const Resource &) const;

}

// CgsDictionaryResourceType.h:63
void CgsContainers::DictionaryResourceType<ICE::ICETakeData>::DictionaryResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDictionaryResourceType.h:44
void CgsContainers::DictionaryResourceTypeBase::DictionaryResourceTypeBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDictionaryResourceType.h:44
struct CgsContainers::DictionaryResourceTypeBase : public CgsResource::Type {
private:
	// CgsDictionaryResourceType.cpp:47
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

}

