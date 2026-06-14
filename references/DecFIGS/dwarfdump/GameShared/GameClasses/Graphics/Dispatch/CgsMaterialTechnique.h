// CgsMaterialTechnique.h:48
struct ShaderConstantHandle {
	// CgsMaterialTechnique.h:49
	uint16_t muProgramIndex;

	// CgsMaterialTechnique.h:50
	uint8_t muValueIndex;

	// CgsMaterialTechnique.h:51
	uint8_t muNumConstants;

}

// CgsMaterialTechnique.h:55
struct MaterialTechnique {
private:
	// CgsMaterialTechnique.h:194
	CgsGraphics::ShaderTechnique * mpShaderTechnique;

	// CgsMaterialTechnique.h:195
	MaterialState * mpMaterialState;

	// CgsMaterialTechnique.h:197
	uint16_t mu16StateFlags;

	// Unknown accessibility
	// CgsMaterialTechnique.h:199
	uint16_t mu16VertexProgramHash12;

	// Unknown accessibility
	// CgsMaterialTechnique.h:200
	uint16_t mu16PixelProgramHash12;

	// Unknown accessibility
	// CgsMaterialTechnique.h:201
	uint16_t mu16MaterialHash16;

	// Unknown accessibility
	// CgsMaterialTechnique.h:202
	uint16_t mu16Flags2;

	// CgsMaterialTechnique.h:204
	uint32_t mNameHash;

	// CgsMaterialTechnique.h:206
	ShaderConstantHandle * mpaVertexShaderInternalConstantsHandles;

	// CgsMaterialTechnique.h:207
	ShaderConstantHandle * mpaPixelShaderInternalConstantsHandles;

	// CgsMaterialTechnique.h:208
	int8_t mi8NumVertexShaderInternalConstants;

	// CgsMaterialTechnique.h:209
	int8_t mi8NumPixelShaderInternalConstants;

	// CgsMaterialTechnique.h:211
	int8_t mi8NumInternalSamplers;

	// CgsMaterialTechnique.h:212
	int8_t mi8NumExternalSamplers;

	// Unknown accessibility
	// CgsMaterialTechnique.h:214
	int8_t * mpai8SamplersIndex;

public:
	// CgsMaterialTechnique.h:76
	uint32_t GetNameHash() const;

	// CgsMaterialTechnique.h:82
	int8_t GetNumSamplers() const;

	// CgsMaterialTechnique.h:88
	const int8_t *const GetSamplers() const;

	// CgsMaterialTechnique.h:94
	int8_t GetNumInternalSamplers() const;

	// CgsMaterialTechnique.h:100
	int8_t GetNumExternalSamplers() const;

	// CgsMaterialTechnique.h:106
	const int8_t *const GetExternalSampler() const;

	// CgsMaterialTechnique.h:112
	const MaterialState * GetMaterialState() const;

	// CgsMaterialTechnique.h:119
	MaterialState * SetMaterialState(MaterialState *);

	// CgsMaterialTechnique.h:122
	const CgsGraphics::ShaderTechnique * GetShaderTechnique() const;

	// CgsMaterialTechnique.h:129
	const BlendState * GetBlendState() const;

	// CgsMaterialTechnique.h:136
	BlendState * SetBlendState(BlendState *);

	// CgsMaterialTechnique.h:139
	const DepthStencilState * GetDepthStencilState() const;

	// CgsMaterialTechnique.h:146
	DepthStencilState * SetDepthStencilState(DepthStencilState *);

	// CgsMaterialTechnique.h:149
	const RasterizerState * GetRasterizerState() const;

	// CgsMaterialTechnique.h:156
	RasterizerState * SetRasterizerState(RasterizerState *);

	// CgsMaterialTechnique.h:161
	bool IsTranslucent() const;

	// CgsMaterialTechnique.h:166
	bool IsAlphaTested();

	// CgsMaterialTechnique.h:172
	bool IsWvpmNeeded() const;

	// CgsMaterialTechnique.h:178
	bool IsWorldTransformNeeded() const;

	// CgsMaterialTechnique.h:183
	bool IsAnimated() const;

	// CgsMaterialTechnique.h:188
	bool IsInstanced() const;

	// CgsMaterialTechnique.h:219
	const ShaderConstantHandle * GetVertexShaderConstantsHandles() const;

	// CgsMaterialTechnique.h:225
	const ShaderConstantHandle * GetPixelShaderConstantsHandles() const;

	// CgsMaterialTechnique.h:231
	uint8_t GetNumVertexShaderConstants() const;

	// CgsMaterialTechnique.h:237
	uint8_t GetNumPixelShaderConstants() const;

}

