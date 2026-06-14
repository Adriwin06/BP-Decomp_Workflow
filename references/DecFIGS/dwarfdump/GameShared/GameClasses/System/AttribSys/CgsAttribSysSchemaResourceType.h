// CgsAttribSysSchemaResourceType.h:52
void CgsResource::AttribSysSchemaResourceType::AttribSysSchemaResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAttribSysSchemaResourceType.h:52
struct CgsResource::AttribSysSchemaResourceType : public Type {
public:
	// CgsAttribSysSchemaResourceType.cpp:52
	virtual uint32_t GetTypeID() const;

	// CgsAttribSysSchemaResourceType.cpp:71
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsAttribSysSchemaResourceType.cpp:232
	virtual void FixUp(void *, const Resource &) const;

	// CgsAttribSysSchemaResourceType.cpp:97
	virtual RwUInt32 GetImportCount(const void *) const;

}

