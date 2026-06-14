// CgsClusteredMeshResourceType.h:49
void CgsResource::ClusteredMeshResourceType::ClusteredMeshResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsClusteredMeshResourceType.h:49
struct CgsResource::ClusteredMeshResourceType : public CgsResource::Type {
public:
	// CgsClusteredMeshResourceType.cpp:61
	virtual uint32_t GetTypeID() const;

	// CgsClusteredMeshResourceType.cpp:80
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsClusteredMeshResourceType.cpp:217
	virtual bool DeSerialise(void *) const;

	// CgsClusteredMeshResourceType.cpp:239
	virtual void FixDown(void *, const Resource &) const;

	// CgsClusteredMeshResourceType.cpp:378
	virtual void FixUp(void *, const Resource &) const;

	// CgsClusteredMeshResourceType.cpp:484
	virtual void ReBase(void *, Resource &, Resource &, ResourceDescriptor &, int32_t) const;

	// CgsClusteredMeshResourceType.cpp:529
	virtual RwUInt32 GetImportCount(const void *) const;

	// CgsClusteredMeshResourceType.cpp:511
	virtual void GetImportPointer(const void *, RwUInt32, RwUInt32 *, const void **) const;

}

