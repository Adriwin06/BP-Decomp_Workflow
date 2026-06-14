// CgsMaterialAssembly.h:54
struct CgsGraphics::MaterialAssembly {
	// CgsMaterialAssembly.h:58
	MaterialTechnique ** mappMaterials;

	// CgsMaterialAssembly.h:59
	uint32_t muNameHash;

	// CgsMaterialAssembly.h:60
	uint8_t mu8NumMaterials;

	// CgsMaterialAssembly.h:62
	int8_t mi8NumSamplers;

	// CgsMaterialAssembly.h:63
	int8_t mi8NumInternalSamplers;

	// CgsMaterialAssembly.h:64
	int8_t mi8NumExternalSamplers;

	// CgsMaterialAssembly.h:65
	Sampler * mpaSamplers;

private:
	// CgsMaterialAssembly.h:68
	ShaderConstantsInternal * mpVertexShaderConstants;

	// CgsMaterialAssembly.h:69
	ShaderConstantsInternal * mpPixelShaderConstants;

	// CgsMaterialAssembly.h:70
	ShaderConstantsCPU * mpCPUShaderConstants;

	// CgsMaterialAssembly.h:74
	void FixupAnimatedMaterial();

public:
	// CgsMaterialAssembly.h:78
	const ShaderConstantsInternal * GetVertexShaderConstants() const;

	// CgsMaterialAssembly.h:85
	void SetVertexShaderConstants(ShaderConstantsInternal *);

	// CgsMaterialAssembly.h:91
	const ShaderConstantsCPU * GetCPUParameters() const;

	// CgsMaterialAssembly.h:97
	ShaderConstantsCPU * GetCPUParameters();

	// CgsMaterialAssembly.h:104
	void SetCPUParameters(ShaderConstantsCPU *);

	// CgsMaterialAssembly.h:110
	ShaderConstantsInternal * GetPixelShaderConstants();

	// CgsMaterialAssembly.h:116
	const ShaderConstantsInternal * GetPixelShaderConstants() const;

	// CgsMaterialAssembly.h:123
	void SetPixelShaderConstants(ShaderConstantsInternal *);

	// CgsMaterialAssembly.h:129
	const Sampler * GetSamplers() const;

	// CgsMaterialAssembly.h:135
	int8_t GetNumSamplers() const;

	// CgsMaterialAssembly.h:141
	int8_t GetNumInternalSamplers() const;

	// CgsMaterialAssembly.h:147
	int8_t GetNumExternalSamplers() const;

	// CgsMaterialAssembly.h:153
	const Sampler *const GetInternalSampler() const;

	// CgsMaterialAssembly.h:159
	uint32_t GetNameHash() const;

	// CgsMaterialAssembly.h:165
	const uint8_t GetLength() const;

	// CgsMaterialAssembly.h:172
	MaterialTechnique * GetMaterial(uint32_t) const;

	// CgsMaterialAssembly.h:181
	const Sampler *const GetInternalSampler(int8_t) const;

	// CgsMaterialAssembly.h:188
	const Sampler *const GetExternalSampler() const;

	// CgsMaterialAssembly.h:195
	const Sampler *const GetExternalSampler(int8_t) const;

	// CgsMaterialAssembly.h:204
	bool UsesTexture(const Texture *) const;

}

