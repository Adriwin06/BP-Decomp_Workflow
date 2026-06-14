// CgsRwRasterResourceType.h:47
void CgsResource::RwRasterResourceType::RwRasterResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsRwRasterResourceType.h:47
struct CgsResource::RwRasterResourceType : public CgsResource::Type {
public:
	// CgsRwRasterResourceTypePS3.cpp:85
	virtual uint32_t GetTypeID() const;

	// CgsRwRasterResourceTypePS3.cpp:105
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsRwRasterResourceTypePS3.cpp:185
	virtual bool DeSerialise(void *) const;

	// CgsRwRasterResourceTypePS3.cpp:207
	virtual void FixDown(void *, const Resource &) const;

	// CgsRwRasterResourceTypePS3.cpp:232
	virtual void FixUp(void *, const Resource &) const;

	// CgsRwRasterResourceTypePS3.cpp:258
	virtual uint32_t GetImportCount(const void *) const;

	// CgsRwRasterResourceTypePS3.cpp:279
	virtual void GetImportPointer(const void *, uint32_t, uint32_t *, const void **) const;

	// CgsRwRasterResourceType.h:96
	virtual CgsResource::EDebugResourceCategory GetDebugResourceCategory() const;

}

