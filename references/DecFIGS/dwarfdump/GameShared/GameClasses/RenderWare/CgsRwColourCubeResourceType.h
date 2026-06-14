// CgsRwColourCubeResourceType.h:47
void CgsResource::RwColourCubeResourceType::RwColourCubeResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsRwColourCubeResourceType.h:47
struct CgsResource::RwColourCubeResourceType : public CgsResource::Type {
public:
	// CgsRwColourCubeResourceType.cpp:53
	virtual uint32_t GetTypeID() const;

	// CgsRwColourCubeResourceType.cpp:73
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsRwColourCubeResourceType.cpp:137
	virtual bool DeSerialise(void *) const;

	// CgsRwColourCubeResourceType.cpp:159
	virtual void FixDown(void *, const Resource &) const;

	// CgsRwColourCubeResourceType.cpp:180
	virtual void FixUp(void *, const Resource &) const;

	// CgsRwColourCubeResourceType.cpp:200
	virtual uint32_t GetImportCount(const void *) const;

	// CgsRwColourCubeResourceType.cpp:221
	virtual void GetImportPointer(const void *, uint32_t, uint32_t *, const void **) const;

}

