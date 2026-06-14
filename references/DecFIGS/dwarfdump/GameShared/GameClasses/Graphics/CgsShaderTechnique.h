// CgsShaderTechnique.h:73
struct CgsGraphics::ShaderTechnique {
private:
	// CgsShaderTechnique.h:170
	ProgramBuffer * mpVertexProgramBuffer;

	// CgsShaderTechnique.h:171
	ProgramBuffer * mpPixelProgramBuffer;

	// CgsShaderTechnique.h:173
	ShaderConstantsInternal mInternalVertexShaderConstants;

	// CgsShaderTechnique.h:174
	ShaderConstantsExternal mExternalObjectVertexShaderConstants;

	// CgsShaderTechnique.h:175
	ShaderConstantsExternal mExternalGlobalVertexShaderConstants;

	// CgsShaderTechnique.h:177
	ShaderConstantsInternal mInternalPixelShaderConstants;

	// CgsShaderTechnique.h:178
	ShaderConstantsExternal mExternalObjectPixelShaderConstants;

	// CgsShaderTechnique.h:179
	ShaderConstantsExternal mExternalGlobalPixelShaderConstants;

	// CgsShaderTechnique.h:181
	ShaderConstantsCPU mCPUShaderConstants;

	// CgsShaderTechnique.h:183
	ShaderConstantHashTable mShaderConstantHashTable;

	// CgsShaderTechnique.h:185
	ShaderSampler * mpaSamplers;

	// CgsShaderTechnique.h:186
	int8_t miNumSamplers;

	// CgsShaderTechnique.h:188
	char * mpacName;

public:
	// CgsShaderTechnique.h:78
	void SetVertexProgramBuffer(ProgramBuffer *);

	// CgsShaderTechnique.h:85
	void SetPixelProgramBuffer(ProgramBuffer *);

	// CgsShaderTechnique.h:92
	const renderengine::ProgramBuffer * GetVertexProgramBuffer() const;

	// CgsShaderTechnique.h:98
	const renderengine::ProgramBuffer * GetPixelProgramBuffer() const;

	// CgsShaderTechnique.h:104
	const ShaderConstantsInternal & GetInternalVertexShaderConstants() const;

	// CgsShaderTechnique.h:110
	const ShaderConstantsExternal & GetExternalObjectVertexShaderConstants() const;

	// CgsShaderTechnique.h:116
	const ShaderConstantsExternal & GetExternalGlobalVertexShaderConstants() const;

	// CgsShaderTechnique.h:122
	const ShaderConstantsInternal & GetInternalPixelShaderConstants() const;

	// CgsShaderTechnique.h:128
	const ShaderConstantsExternal & GetExternalObjectPixelShaderConstants() const;

	// CgsShaderTechnique.h:134
	const ShaderConstantsExternal & GetExternalGlobalPixelShaderConstants() const;

	// CgsShaderTechnique.h:140
	const ShaderConstantsCPU & GetCPUShaderConstants() const;

	// CgsShaderTechnique.h:146
	const CgsGraphics::ShaderConstantHashTable * GetConstantHashTable() const;

	// CgsShaderTechnique.h:152
	ShaderSampler *const GetSamplers() const;

	// CgsShaderTechnique.h:158
	int8_t GetNumSamplers() const;

	// CgsShaderTechnique.h:164
	const char * GetName() const;

}

// CgsShaderTechnique.h:73
struct CgsGraphics::ShaderTechnique {
private:
	// CgsShaderTechnique.h:170
	ProgramBuffer * mpVertexProgramBuffer;

	// CgsShaderTechnique.h:171
	ProgramBuffer * mpPixelProgramBuffer;

	// CgsShaderTechnique.h:173
	ShaderConstantsInternal mInternalVertexShaderConstants;

	// CgsShaderTechnique.h:174
	ShaderConstantsExternal mExternalObjectVertexShaderConstants;

	// CgsShaderTechnique.h:175
	ShaderConstantsExternal mExternalGlobalVertexShaderConstants;

	// CgsShaderTechnique.h:177
	ShaderConstantsInternal mInternalPixelShaderConstants;

	// CgsShaderTechnique.h:178
	ShaderConstantsExternal mExternalObjectPixelShaderConstants;

	// CgsShaderTechnique.h:179
	ShaderConstantsExternal mExternalGlobalPixelShaderConstants;

	// CgsShaderTechnique.h:181
	ShaderConstantsCPU mCPUShaderConstants;

	// CgsShaderTechnique.h:183
	ShaderConstantHashTable mShaderConstantHashTable;

	// CgsShaderTechnique.h:185
	ShaderSampler * mpaSamplers;

	// CgsShaderTechnique.h:186
	int8_t miNumSamplers;

	// CgsShaderTechnique.h:188
	char * mpacName;

public:
	// CgsShaderTechnique.h:78
	void SetVertexProgramBuffer(ProgramBuffer *);

	// CgsShaderTechnique.h:85
	void SetPixelProgramBuffer(ProgramBuffer *);

	// CgsShaderTechnique.h:92
	const ProgramBuffer * GetVertexProgramBuffer() const;

	// CgsShaderTechnique.h:98
	const ProgramBuffer * GetPixelProgramBuffer() const;

	// CgsShaderTechnique.h:104
	const ShaderConstantsInternal & GetInternalVertexShaderConstants() const;

	// CgsShaderTechnique.h:110
	const ShaderConstantsExternal & GetExternalObjectVertexShaderConstants() const;

	// CgsShaderTechnique.h:116
	const ShaderConstantsExternal & GetExternalGlobalVertexShaderConstants() const;

	// CgsShaderTechnique.h:122
	const ShaderConstantsInternal & GetInternalPixelShaderConstants() const;

	// CgsShaderTechnique.h:128
	const ShaderConstantsExternal & GetExternalObjectPixelShaderConstants() const;

	// CgsShaderTechnique.h:134
	const ShaderConstantsExternal & GetExternalGlobalPixelShaderConstants() const;

	// CgsShaderTechnique.h:140
	const ShaderConstantsCPU & GetCPUShaderConstants() const;

	// CgsShaderTechnique.h:146
	const CgsGraphics::ShaderConstantHashTable * GetConstantHashTable() const;

	// CgsShaderTechnique.h:152
	ShaderSampler *const GetSamplers() const;

	// CgsShaderTechnique.h:158
	int8_t GetNumSamplers() const;

	// CgsShaderTechnique.h:164
	const char * GetName() const;

}

