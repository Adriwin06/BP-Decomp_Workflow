// CgsModelResourceType.h:49
void CgsResource::ModelResourceType::ModelResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsModelResourceType.h:49
struct CgsResource::ModelResourceType : public CgsResource::Type {
public:
	// CgsModelResourceType.cpp:61
	virtual uint32_t GetTypeID() const;

	// CgsModelResourceType.cpp:80
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsModelResourceType.cpp:156
	virtual bool DeSerialise(void *) const;

	// CgsModelResourceType.cpp:177
	virtual void FixDown(void *, const Resource &) const;

	// CgsModelResourceType.cpp:213
	virtual void FixUp(void *, const Resource &) const;

	// CgsModelResourceType.cpp:241
	virtual void PostFixUp(void *, const Resource &) const;

	// CgsModelResourceType.cpp:324
	virtual RwUInt32 GetImportCount(const void *) const;

	// CgsModelResourceType.cpp:294
	virtual void GetImportPointer(const void *, RwUInt32, RwUInt32 *, const void **) const;

	// CgsModelResourceType.h:120
	virtual CgsResource::EDebugResourceCategory GetDebugResourceCategory() const;

}

