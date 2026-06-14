// CgsRwTextureStateResourceType.h:50
void CgsResource::RwTextureStateResourceType::RwTextureStateResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsRwTextureStateResourceType.h:50
struct CgsResource::RwTextureStateResourceType : public CgsResource::Type {
public:
	// CgsRwTextureStateResourceTypePS3.cpp:71
	virtual uint32_t GetTypeID() const;

	// CgsRwTextureStateResourceTypePS3.cpp:90
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsRwTextureStateResourceTypePS3.cpp:137
	virtual bool DeSerialise(void *) const;

	// CgsRwTextureStateResourceTypePS3.cpp:241
	virtual void FixDown(void *, const Resource &) const;

	// CgsRwTextureStateResourceTypePS3.cpp:275
	virtual void FixUp(void *, const Resource &) const;

	// CgsRwTextureStateResourceTypePS3.cpp:299
	virtual RwUInt32 GetImportCount(const void *) const;

	// CgsRwTextureStateResourceTypePS3.cpp:320
	virtual void GetImportPointer(const void *, RwUInt32, RwUInt32 *, const void **) const;

	// CgsRwTextureStateResourceTypePS3.cpp:337
	virtual bool DebugValidate(const void *) const;

	// CgsRwTextureStateResourceType.h:119
	virtual CgsResource::EDebugResourceCategory GetDebugResourceCategory() const;

}

