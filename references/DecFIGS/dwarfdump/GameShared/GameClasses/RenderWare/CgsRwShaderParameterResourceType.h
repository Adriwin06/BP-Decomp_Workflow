// CgsRwShaderParameterResourceType.h:49
void CgsResource::RwShaderParameterResourceType::RwShaderParameterResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsRwShaderParameterResourceType.h:49
struct CgsResource::RwShaderParameterResourceType : public CgsResource::Type {
public:
	// CgsRwShaderParameterResourceTypePS3.cpp:113
	virtual uint32_t GetTypeID() const;

	// CgsRwShaderParameterResourceTypePS3.cpp:132
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsRwShaderParameterResourceTypePS3.cpp:243
	virtual bool DeSerialise(void *) const;

	// CgsRwShaderParameterResourceTypePS3.cpp:264
	virtual void FixDown(void *, const Resource &) const;

	// CgsRwShaderParameterResourceTypePS3.cpp:313
	virtual void FixUp(void *, const Resource &) const;

}

