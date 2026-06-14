// CgsMaterialResourceType.h:51
void CgsResource::MaterialResourceType::MaterialResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMaterialResourceType.h:51
struct CgsResource::MaterialResourceType : public CgsResource::Type {
public:
	// CgsMaterialResourceType.cpp:78
	virtual uint32_t GetTypeID() const;

	// CgsMaterialResourceType.cpp:97
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsMaterialResourceType.cpp:130
	uint32_t GetShaderConstantSerialisedResourceDescriptorSize(ShaderConstantsInternal *, uint32_t) const;

	// CgsMaterialResourceType.cpp:164
	uint32_t GetCPUShaderConstantsSerialisedResourceDescriptorSize(ShaderConstantsCPU *, uint32_t) const;

	// CgsMaterialResourceType.cpp:664
	virtual bool DeSerialise(void *) const;

	// CgsMaterialResourceType.cpp:686
	virtual void FixUp(void *, const Resource &) const;

	// CgsMaterialResourceType.cpp:728
	virtual void PostFixUp(void *, const Resource &) const;

	// CgsMaterialResourceType.cpp:769
	void PostFixUpShaderConstants(void *, ShaderConstantsInternal *, bool) const;

	// CgsMaterialResourceType.h:158
	virtual CgsResource::EDebugResourceCategory GetDebugResourceCategory() const;

}

