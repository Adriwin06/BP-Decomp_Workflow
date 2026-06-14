// CgsRwMaterialResourceType.h:52
void CgsResource::MaterialTechniqueResourceType::MaterialTechniqueResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsRwMaterialResourceType.h:52
struct CgsResource::MaterialTechniqueResourceType : public CgsResource::Type {
public:
	// CgsMaterialTechniqueResourceType.cpp:77
	virtual uint32_t GetTypeID() const;

	// CgsMaterialTechniqueResourceType.cpp:96
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsMaterialTechniqueResourceType.cpp:199
	virtual void FixDown(void *, const Resource &) const;

	// CgsMaterialTechniqueResourceType.cpp:239
	virtual void FixUp(void *, const Resource &) const;

	// CgsMaterialTechniqueResourceType.cpp:261
	virtual void PostFixUp(void *, const Resource &) const;

	// CgsMaterialTechniqueResourceType.cpp:331
	virtual RwUInt32 GetImportCount(const void *) const;

	// CgsRwMaterialResourceType.h:117
	bool IsImportPointer(const void *, RwUInt32, RwUInt32 &, RwUInt32 *, const void **) const;

	// CgsMaterialTechniqueResourceType.cpp:352
	virtual void GetImportPointer(const void *, RwUInt32, RwUInt32 *, const void **) const;

	// CgsRwMaterialResourceType.h:146
	virtual CgsResource::EDebugResourceCategory GetDebugResourceCategory() const;

}

