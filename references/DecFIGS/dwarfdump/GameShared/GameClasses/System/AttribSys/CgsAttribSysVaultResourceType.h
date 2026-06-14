// CgsAttribSysVaultResourceType.h:50
void CgsResource::AttribSysVaultResourceType::AttribSysVaultResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAttribSysVaultResourceType.h:50
struct CgsResource::AttribSysVaultResourceType : public Type {
public:
	// CgsAttribSysVaultResourceType.cpp:51
	virtual uint32_t GetTypeID() const;

	// CgsAttribSysVaultResourceType.cpp:70
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsAttribSysVaultResourceType.cpp:230
	virtual void FixUp(void *, const Resource &) const;

	// CgsAttribSysVaultResourceType.cpp:96
	virtual RwUInt32 GetImportCount(const void *) const;

}

