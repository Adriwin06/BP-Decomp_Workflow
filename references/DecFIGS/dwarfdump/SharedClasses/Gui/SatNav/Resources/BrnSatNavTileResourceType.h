// BrnSatNavTileResourceType.h:108
struct CgsResource::SatNavTileDirectoryResourceType : public CgsResource::Type {
public:
	// BrnSatNavTileResourceType.cpp:269
	virtual uint32_t GetTypeID() const;

	// BrnSatNavTileResourceType.cpp:285
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// BrnSatNavTileResourceType.cpp:355
	virtual void FixDown(void *, const Resource &) const;

	// BrnSatNavTileResourceType.cpp:393
	virtual void FixUp(void *, const Resource &) const;

}

// BrnSatNavTileResourceType.h:48
struct CgsResource::SatNavTileResourceType : public CgsResource::Type {
public:
	// BrnSatNavTileResourceType.cpp:44
	virtual uint32_t GetTypeID() const;

	// BrnSatNavTileResourceType.cpp:60
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// BrnSatNavTileResourceType.cpp:124
	virtual void FixDown(void *, const Resource &) const;

	// BrnSatNavTileResourceType.cpp:173
	virtual void FixUp(void *, const Resource &) const;

	// BrnSatNavTileResourceType.cpp:219
	virtual uint32_t GetImportCount(const void *) const;

	// BrnSatNavTileResourceType.cpp:239
	virtual void GetImportPointer(const void *, uint32_t, uint32_t *, const void **) const;

}

// BrnSatNavTileResourceType.h:108
void CgsResource::SatNavTileDirectoryResourceType::SatNavTileDirectoryResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSatNavTileResourceType.h:48
void CgsResource::SatNavTileResourceType::SatNavTileResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

