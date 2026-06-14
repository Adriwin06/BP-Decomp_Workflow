// CgsRwShaderParameterResourceTypePS3.cpp:45
struct ShaderParams : public ParameterBlock {
public:
	// CgsRwShaderParameterResourceTypePS3.cpp:47
	ParameterSemanticBlock * GetSemanticBlock();

	// CgsRwShaderParameterResourceTypePS3.cpp:52
	uint32_t * GetParameterBlock();

	// CgsRwShaderParameterResourceTypePS3.cpp:57
	void SetSemanticBlock(ParameterSemanticBlock *);

	// CgsRwShaderParameterResourceTypePS3.cpp:62
	void SetParameterBlock(uint32_t *);

	// CgsRwShaderParameterResourceTypePS3.cpp:67
	void EndianSwap();

}

// CgsRwShaderParameterResourceTypePS3.cpp:76
struct ParameterSemanticWrapper : public ParameterSemanticBlock {
public:
	// CgsRwShaderParameterResourceTypePS3.cpp:79
	void SetSemantic(ParameterSemantic *);

	// CgsRwShaderParameterResourceTypePS3.cpp:84
	void EndianSwap();

}

