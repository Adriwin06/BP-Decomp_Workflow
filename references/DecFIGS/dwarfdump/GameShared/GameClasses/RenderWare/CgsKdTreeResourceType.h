// CgsKdTreeResourceType.h:49
void CgsResource::KdTreeResourceType::KdTreeResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsKdTreeResourceType.h:49
struct CgsResource::KdTreeResourceType : public CgsResource::Type {
public:
	// CgsKdTreeResourceType.cpp:66
	virtual uint32_t GetTypeID() const;

	// CgsKdTreeResourceType.cpp:85
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsKdTreeResourceType.cpp:190
	virtual bool DeSerialise(void *) const;

	// CgsKdTreeResourceType.cpp:211
	virtual void FixDown(void *, const Resource &) const;

	// CgsKdTreeResourceType.cpp:301
	virtual void FixUp(void *, const Resource &) const;

	// CgsKdTreeResourceType.cpp:391
	virtual void ReBase(void *, Resource &, Resource &, ResourceDescriptor &, int32_t) const;

	// CgsKdTreeResourceType.cpp:436
	virtual RwUInt32 GetImportCount(const void *) const;

	// CgsKdTreeResourceType.cpp:418
	virtual void GetImportPointer(const void *, RwUInt32, RwUInt32 *, const void **) const;

}

