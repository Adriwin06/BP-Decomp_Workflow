// CgsRwMaterialCRC32ResourceType.h:49
void CgsResource::RwMaterialCRC32ResourceType::RwMaterialCRC32ResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsRwMaterialCRC32ResourceType.h:49
struct CgsResource::RwMaterialCRC32ResourceType : public CgsResource::Type {
public:
	// CgsRwMaterialCRC32ResourceTypePS3.cpp:55
	virtual uint32_t GetTypeID() const;

	// CgsRwMaterialCRC32ResourceTypePS3.cpp:74
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsRwMaterialCRC32ResourceTypePS3.cpp:124
	virtual bool DeSerialise(void *) const;

	// CgsRwMaterialCRC32ResourceTypePS3.cpp:145
	virtual void FixDown(void *, const Resource &) const;

	// CgsRwMaterialCRC32ResourceTypePS3.cpp:169
	virtual void FixUp(void *, const Resource &) const;

	// CgsRwMaterialCRC32ResourceType.h:87
	virtual CgsResource::EDebugResourceCategory GetDebugResourceCategory() const;

}

