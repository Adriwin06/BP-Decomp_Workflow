// CgsShaderTechniqueResourceType.h:49
void CgsResource::ShaderTechniqueResourceType::ShaderTechniqueResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsShaderTechniqueResourceType.h:49
struct CgsResource::ShaderTechniqueResourceType : public CgsResource::Type {
public:
	// CgsShaderTechniqueResourceType.cpp:186
	virtual uint32_t GetTypeID() const;

	// CgsShaderTechniqueResourceType.cpp:205
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsShaderTechniqueResourceType.cpp:249
	uint32_t GetShaderConstantInternalSerialisedResourceDescriptorSize(ShaderConstantsInternal *, uint32_t) const;

	// CgsShaderTechniqueResourceType.cpp:281
	uint32_t GetShaderConstantExternalSerialisedResourceDescriptorSize(const ShaderConstantsExternal *) const;

	// CgsShaderTechniqueResourceType.cpp:728
	uint32_t GetConstantHashTableSerialisedResourceDescriptorSize(const CgsGraphics::ShaderConstantHashTable *) const;

	// CgsShaderTechniqueResourceType.cpp:231
	uint32_t GetShaderSamplersSerialisedResourceDescriptorSize(CgsGraphics::ShaderTechnique *) const;

	// CgsShaderTechniqueResourceType.h:130
	virtual uint32_t GetImportCount(const void *) const;

	// CgsShaderTechniqueResourceType.cpp:541
	virtual void GetImportPointer(const void *, uint32_t, uint32_t *, const void **) const;

	// CgsShaderTechniqueResourceType.cpp:578
	virtual bool DeSerialise(void *) const;

	// CgsShaderTechniqueResourceType.cpp:599
	virtual void FixUp(void *, const Resource &) const;

	// CgsShaderTechniqueResourceType.cpp:638
	virtual void PostFixUp(void *, const Resource &) const;

}

