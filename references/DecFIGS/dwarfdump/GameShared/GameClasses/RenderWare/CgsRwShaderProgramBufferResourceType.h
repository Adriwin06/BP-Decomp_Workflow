// CgsRwShaderProgramBufferResourceType.h:48
void CgsResource::RwShaderProgramBufferResourceType::RwShaderProgramBufferResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsRwShaderProgramBufferResourceType.h:48
struct CgsResource::RwShaderProgramBufferResourceType : public CgsResource::Type {
public:
	// CgsRwShaderProgramBufferResourceTypePS3.cpp:61
	virtual uint32_t GetTypeID() const;

	// CgsRwShaderProgramBufferResourceTypePS3.cpp:81
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsRwShaderProgramBufferResourceTypePS3.cpp:169
	virtual bool DeSerialise(void *) const;

	// CgsRwShaderProgramBufferResourceTypePS3.cpp:191
	virtual void FixDown(void *, const Resource &) const;

	// CgsRwShaderProgramBufferResourceTypePS3.cpp:255
	virtual void FixUp(void *, const Resource &) const;

	// CgsRwShaderProgramBufferResourceTypePS3.cpp:301
	virtual void PostFixUp(void *, const Resource &) const;

	// CgsRwShaderProgramBufferResourceTypePS3.cpp:322
	virtual RwUInt32 GetImportCount(const void *) const;

	// CgsRwShaderProgramBufferResourceTypePS3.cpp:343
	virtual void GetImportPointer(const void *, RwUInt32, RwUInt32 *, const void **) const;

}

