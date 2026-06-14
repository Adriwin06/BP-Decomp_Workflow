// CgsMaterialStateResourceType.h:49
void CgsResource::MaterialStateResourceType::MaterialStateResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMaterialStateResourceType.h:49
struct CgsResource::MaterialStateResourceType : public CgsResource::Type {
public:
	// CgsMaterialStateResourceTypePS3.cpp:59
	virtual uint32_t GetTypeID() const;

	// CgsMaterialStateResourceTypePS3.cpp:78
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsMaterialStateResourceTypePS3.cpp:158
	virtual bool DeSerialise(void *) const;

	// CgsMaterialStateResourceTypePS3.cpp:179
	virtual void FixDown(void *, const Resource &) const;

	// CgsMaterialStateResourceTypePS3.cpp:243
	virtual void FixUp(void *, const Resource &) const;

	// CgsMaterialStateResourceTypePS3.cpp:266
	virtual RwUInt32 GetImportCount(const void *) const;

	// CgsMaterialStateResourceTypePS3.cpp:287
	virtual void GetImportPointer(const void *, RwUInt32, RwUInt32 *, const void **) const;

}

