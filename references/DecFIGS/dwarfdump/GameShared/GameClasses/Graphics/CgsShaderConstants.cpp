// CgsShaderConstants.h:100
namespace ShaderConstantShadowing {
	// CgsShaderConstants.cpp:54
	const bool gbShadowingByValueIntoDispatchBin;

	// CgsShaderConstants.cpp:55
	const bool gbShadowingVertexConstantByValueIntoPushBuffer;

	// CgsShaderConstants.cpp:56
	const bool gbShadowingPixelConstantByValueIntoPushBuffer;

}

// CgsShaderConstants.cpp:1084
void ShaderConstantsExternal::FixUp(uint8_t *  lpBaseData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:1089
		uint32_t t;

	}
}

// CgsShaderConstants.cpp:1125
void ShaderConstantsInternal::FixUp(uint8_t *  lpBaseData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:1131
		uint32_t t;

	}
}

// CgsShaderConstants.cpp:1138
void ShaderConstantsInternal::GetConstant(const const uint32_t &  lConstantNameHash, const ProgramVariableHandle *&  lpOutHandle, const uint32_t &  lOutIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:1140
		bool lFound;

		{
			// CgsShaderConstants.cpp:1146
			uint32_t i;

		}
	}
}

// CgsShaderConstants.cpp:1196
void ShaderConstantsInternal::FixUp(const renderengine::ProgramBuffer *  lpVertexProgramBuffer, const CgsGraphics::ShaderConstantHashTable *  lpConstantHashTable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:1203
		uint32_t luNumConstantsFound;

	}
	{
		// CgsShaderConstants.cpp:1204
		uint32_t t;

		{
			// CgsShaderConstants.cpp:1206
			const char * lpcConstantName;

		}
	}
}

// CgsShaderConstants.cpp:1227
void ShaderConstantsInternal::GetValue(const const uint32_t &  lConstantNameHash, const Vector4 &  lOutValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:1229
		bool lFound;

		{
			// CgsShaderConstants.cpp:1235
			uint32_t i;

		}
	}
}

// CgsShaderConstants.cpp:1250
void ShaderConstantsExternal::GetConstant(const char *  lpName, const ProgramVariableHandle *&  lpOutHandle, const uint32_t &  lOutIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:1252
		bool lFound;

		{
			// CgsShaderConstants.cpp:1258
			uint32_t i;

		}
	}
}

// CgsShaderConstants.cpp:1274
void ShaderConstantsExternal::HasShaderConstant(const char *  lpName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:1276
		bool lFound;

		{
			// CgsShaderConstants.cpp:1279
			uint32_t i;

		}
	}
}

// CgsShaderConstants.cpp:1291
void ShaderConstantsExternal::GetValue(const char *  lpName, const Vector4 &  lOutValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:1293
		bool lFound;

		{
			// CgsShaderConstants.cpp:1299
			uint32_t i;

		}
	}
}

// CgsShaderConstants.cpp:1348
void ShaderConstantTableElement::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsShaderConstants.cpp:1374
void ShaderConstantTable::ResetShadowing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:1378
		uint32_t luIndex;

	}
}

// CgsShaderConstants.cpp:1366
void ShaderConstantTable::BeginFrame(CgsGraphics::DispatchBin *  lpDispatchBin) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsShaderConstants.cpp:1411
void ShaderConstantTable::EndFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsShaderConstants.cpp:1525
void ShaderConstantTable::SetAllConstantsDirty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:1527
		uint32_t luIndex;

	}
}

// CgsShaderConstants.cpp:1498
void ShaderConstantTable::AddDirtyConstantsToDispatchBin(Vector4 *  lpBinHeaderSpace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:1500
		uint16_t lu16NumBytesForIndexArray;

		// CgsShaderConstants.cpp:1503
		uint8_t * lpau8CountAndIndexArray;

		// CgsShaderConstants.cpp:1504
		uint32_t * lpau32PointerArray;

		// CgsShaderConstants.cpp:1511
		uint32_t luIndex;

		{
			// CgsShaderConstants.cpp:1514
			uint8_t lu8DirtyConstantIndex;

		}
		ClearDirtyConstants(/* parameters */);
	}
}

// CgsShaderConstants.cpp:1163
void ShaderConstantsInternal::FixDown(uint8_t *  lpBaseData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:1167
		uint32_t t;

		{
			// CgsShaderConstants.cpp:1169
			uint32_t lIndexFloatSwap;

		}
	}
}

// CgsShaderConstants.cpp:1100
void ShaderConstantsExternal::FixDown(uint8_t *  lpBaseData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:1104
		uint32_t t;

	}
}

// CgsShaderConstants.cpp:1396
void ShaderConstantTable::ResetShadowingForDispatch() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:1398
		uint32_t luIndex;

		{
			// CgsShaderConstants.cpp:1400
			const ShaderConstantTableElement & lTableElement;

			{
				// CgsShaderConstants.cpp:1402
				uint32_t luShader;

				ShaderConstantTableElement::ShaderState::Reset(/* parameters */);
				ShaderConstantTableElement::ShaderState::Reset(/* parameters */);
			}
		}
	}
}

// CgsShaderConstants.cpp:1314
void ShaderConstantTable::ShaderConstantTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:1325
		uint32_t luCount;

	}
}

// CgsShaderConstants.cpp:181
extern uint64_t FastQWmemcmp_Vector(const void *  lp0, const void *  lp1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:183
		const uint64_t * lpau64_0;

		// CgsShaderConstants.cpp:184
		const uint64_t * lpau64_1;

	}
}

// CgsShaderConstants.cpp:164
extern uint64_t FastQWmemcmp_Matrix3x3(const void *  lp0, const void *  lp1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:166
		const uint64_t * lpau64_0;

		// CgsShaderConstants.cpp:167
		const uint64_t * lpau64_1;

	}
}

// CgsShaderConstants.cpp:146
extern uint64_t FastQWmemcmp_Matrix(const void *  lp0, const void *  lp1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:148
		const uint64_t * lpau64_0;

		// CgsShaderConstants.cpp:149
		const uint64_t * lpau64_1;

	}
}

// CgsShaderConstants.cpp:195
extern uint64_t FastQWmemcmp(const void *  lp0, const void *  lp1, const uint32_t  luByteCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:200
		uint64_t lu64ReturnValue;

		// CgsShaderConstants.cpp:201
		uint32_t luNum64BitWords;

		// CgsShaderConstants.cpp:202
		uint32_t luCount;

		// CgsShaderConstants.cpp:203
		const uint64_t * lpau64_0;

		// CgsShaderConstants.cpp:204
		const uint64_t * lpau64_1;

	}
}

// CgsShaderConstants.cpp:385
extern void ApplySingleConstantIfNecessary<E_SHADER_CONSTANT_TYPE_EXTERNAL, E_SHADER_TYPE_PIXEL, E_SHADER_CHANGED_DYNAMIC_BRANCH>(uint32_t  luShaderConstantIndex, const ProgramVariableHandle *  lpProgramHandle, const rw::math::vpu::Vector4 *  lpShaderConstantsToApply, const bool  lbShaderHasChangedParameter, const renderengine::ProgramBuffer *  lpProgramBuffer, const ShaderConstantHandle *  lpShaderConstantHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:388
		const bool lbIsInternal;

		// CgsShaderConstants.cpp:389
		const bool lbIsPixelShader;

		// CgsShaderConstants.cpp:390
		const bool lbShaderHasChanged;

		// CgsShaderConstants.cpp:398
		const ShaderConstantTable & lShaderTable;

		// CgsShaderConstants.cpp:399
		const ShaderConstantTableElement & lTableElement;

		// CgsShaderConstants.cpp:400
		ShaderConstantTableElement::ShaderState * lConstantShaderState;

		// CgsShaderConstants.cpp:404
		uint32_t luConstantCount;

		// CgsShaderConstants.cpp:405
		uint32_t luConstantIndex;

	}
	renderengine::ProgramVariableHandle::GetNumConstants(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	{
		// CgsShaderConstants.cpp:444
		uint64_t lComparisonResult;

		{
			// CgsShaderConstants.cpp:462
			const uint32_t KU_COMPARISON_BY_VALUE_THRESHOLD;

			FastQWmemcmp(/* parameters */);
		}
	}
	{
		// CgsShaderConstants.cpp:554
		Vector4 * lpConstantDataDst;

		CgsGraphics::ShaderPatch::BeginShaderStatesPatchRaw(/* parameters */);
	}
	renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::AddCommandSpace(/* parameters */);
	{
		// CgsShaderConstants.cpp:556
		uint32_t i;

	}
	CgsGraphics::ShaderPatch::EndShaderStatesPatchRaw(/* parameters */);
	vec_st(/* parameters */);
	renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::BeginEntry(/* parameters */);
	FastQWmemcmp_Matrix(/* parameters */);
	FastQWmemcmp_Matrix3x3(/* parameters */);
	FastQWmemcmp_Vector(/* parameters */);
}

// CgsShaderConstants.cpp:385
extern void ApplySingleConstantIfNecessary<E_SHADER_CONSTANT_TYPE_INTERNAL, E_SHADER_TYPE_PIXEL, E_SHADER_CHANGED_DYNAMIC_BRANCH>(uint32_t  luShaderConstantIndex, const ProgramVariableHandle *  lpProgramHandle, const rw::math::vpu::Vector4 *  lpShaderConstantsToApply, const bool  lbShaderHasChangedParameter, const renderengine::ProgramBuffer *  lpProgramBuffer, const ShaderConstantHandle *  lpShaderConstantHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:388
		const bool lbIsInternal;

		// CgsShaderConstants.cpp:389
		const bool lbIsPixelShader;

		// CgsShaderConstants.cpp:390
		const bool lbShaderHasChanged;

		// CgsShaderConstants.cpp:398
		const ShaderConstantTable & lShaderTable;

		// CgsShaderConstants.cpp:399
		const ShaderConstantTableElement & lTableElement;

		// CgsShaderConstants.cpp:400
		ShaderConstantTableElement::ShaderState * lConstantShaderState;

		// CgsShaderConstants.cpp:404
		uint32_t luConstantCount;

		// CgsShaderConstants.cpp:405
		uint32_t luConstantIndex;

	}
	{
		// CgsShaderConstants.cpp:444
		uint64_t lComparisonResult;

		{
			// CgsShaderConstants.cpp:462
			const uint32_t KU_COMPARISON_BY_VALUE_THRESHOLD;

			FastQWmemcmp(/* parameters */);
		}
	}
	{
		// CgsShaderConstants.cpp:554
		Vector4 * lpConstantDataDst;

		CgsGraphics::ShaderPatch::BeginShaderStatesPatchRaw(/* parameters */);
	}
	renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::AddCommandSpace(/* parameters */);
	{
		// CgsShaderConstants.cpp:556
		uint32_t i;

	}
	CgsGraphics::ShaderPatch::EndShaderStatesPatchRaw(/* parameters */);
	vec_st(/* parameters */);
	renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::BeginEntry(/* parameters */);
	FastQWmemcmp_Matrix(/* parameters */);
	FastQWmemcmp_Matrix3x3(/* parameters */);
	FastQWmemcmp_Vector(/* parameters */);
}

// CgsShaderConstants.cpp:385
extern void ApplySingleConstantIfNecessary<E_SHADER_CONSTANT_TYPE_EXTERNAL, E_SHADER_TYPE_VERTEX, E_SHADER_CHANGED_FALSE>(uint32_t  luShaderConstantIndex, const ProgramVariableHandle *  lpProgramHandle, const rw::math::vpu::Vector4 *  lpShaderConstantsToApply, const bool  lbShaderHasChangedParameter, const renderengine::ProgramBuffer *  lpProgramBuffer, const ShaderConstantHandle *  lpShaderConstantHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:388
		const bool lbIsInternal;

		// CgsShaderConstants.cpp:389
		const bool lbIsPixelShader;

		// CgsShaderConstants.cpp:390
		const bool lbShaderHasChanged;

		// CgsShaderConstants.cpp:398
		const ShaderConstantTable & lShaderTable;

		// CgsShaderConstants.cpp:399
		const ShaderConstantTableElement & lTableElement;

		// CgsShaderConstants.cpp:400
		ShaderConstantTableElement::ShaderState * lConstantShaderState;

		// CgsShaderConstants.cpp:404
		uint32_t luConstantCount;

		// CgsShaderConstants.cpp:405
		uint32_t luConstantIndex;

	}
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	renderengine::ProgramVariableHandle::GetNumConstants(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
	}
}

// CgsShaderConstants.cpp:385
extern void ApplySingleConstantIfNecessary<E_SHADER_CONSTANT_TYPE_EXTERNAL, E_SHADER_TYPE_VERTEX, E_SHADER_CHANGED_TRUE>(uint32_t  luShaderConstantIndex, const ProgramVariableHandle *  lpProgramHandle, const rw::math::vpu::Vector4 *  lpShaderConstantsToApply, const bool  lbShaderHasChangedParameter, const renderengine::ProgramBuffer *  lpProgramBuffer, const ShaderConstantHandle *  lpShaderConstantHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:388
		const bool lbIsInternal;

		// CgsShaderConstants.cpp:389
		const bool lbIsPixelShader;

		// CgsShaderConstants.cpp:390
		const bool lbShaderHasChanged;

		// CgsShaderConstants.cpp:398
		const ShaderConstantTable & lShaderTable;

		// CgsShaderConstants.cpp:399
		const ShaderConstantTableElement & lTableElement;

		// CgsShaderConstants.cpp:400
		ShaderConstantTableElement::ShaderState * lConstantShaderState;

		// CgsShaderConstants.cpp:404
		uint32_t luConstantCount;

		// CgsShaderConstants.cpp:405
		uint32_t luConstantIndex;

	}
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	renderengine::ProgramVariableHandle::GetNumConstants(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
	}
}

// CgsShaderConstants.cpp:716
extern void ApplyConstantsIfNecessary<E_SHADER_CONSTANT_TYPE_EXTERNAL, E_SHADER_TYPE_VERTEX, E_SHADER_CHANGED_TRUE>(uint32_t  luNumConstants, const ShaderConstantHandle *  lpaShaderConstantsHandles, const uint32_t *  lpShaderConstantIndices, const ProgramVariableHandle *  lpProgramHandles, Vector4 **  lppShaderConstantsToApply, const bool  lbShaderHasChanged, const renderengine::ProgramBuffer *  lpProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:720
		uint32_t luInlinedMax;

		// CgsShaderConstants.cpp:721
		uint32_t luI;

		// CgsShaderConstants.cpp:722
		int8_t liShaderConstantIndex;

	}
}

// CgsShaderConstants.cpp:716
extern void ApplyConstantsIfNecessary<E_SHADER_CONSTANT_TYPE_EXTERNAL, E_SHADER_TYPE_VERTEX, E_SHADER_CHANGED_FALSE>(uint32_t  luNumConstants, const ShaderConstantHandle *  lpaShaderConstantsHandles, const uint32_t *  lpShaderConstantIndices, const ProgramVariableHandle *  lpProgramHandles, Vector4 **  lppShaderConstantsToApply, const bool  lbShaderHasChanged, const renderengine::ProgramBuffer *  lpProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:720
		uint32_t luInlinedMax;

		// CgsShaderConstants.cpp:721
		uint32_t luI;

		// CgsShaderConstants.cpp:722
		int8_t liShaderConstantIndex;

	}
}

// CgsShaderConstants.cpp:865
void ShaderConstantsExternal::DispatchVertexShaderConstants(Vector4 **  lpapShaderConstantPointers, const bool  lbShaderHasChanged, const renderengine::ProgramBuffer *  lpProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	renderengine::ProgramVariableHandle::GetProgramType(/* parameters */);
	ApplyConstantsIfNecessary<E_SHADER_CONSTANT_TYPE_EXTERNAL, E_SHADER_TYPE_VERTEX, E_SHADER_CHANGED_TRUE>(/* parameters */);
	ApplyConstantsIfNecessary<E_SHADER_CONSTANT_TYPE_EXTERNAL, E_SHADER_TYPE_VERTEX, E_SHADER_CHANGED_FALSE>(/* parameters */);
}

// CgsShaderConstants.cpp:385
extern void ApplySingleConstantIfNecessary<E_SHADER_CONSTANT_TYPE_INTERNAL, E_SHADER_TYPE_VERTEX, E_SHADER_CHANGED_FALSE>(uint32_t  luShaderConstantIndex, const ProgramVariableHandle *  lpProgramHandle, const rw::math::vpu::Vector4 *  lpShaderConstantsToApply, const bool  lbShaderHasChangedParameter, const renderengine::ProgramBuffer *  lpProgramBuffer, const ShaderConstantHandle *  lpShaderConstantHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:388
		const bool lbIsInternal;

		// CgsShaderConstants.cpp:389
		const bool lbIsPixelShader;

		// CgsShaderConstants.cpp:390
		const bool lbShaderHasChanged;

		// CgsShaderConstants.cpp:398
		const ShaderConstantTable & lShaderTable;

		// CgsShaderConstants.cpp:399
		const ShaderConstantTableElement & lTableElement;

		// CgsShaderConstants.cpp:400
		ShaderConstantTableElement::ShaderState * lConstantShaderState;

		// CgsShaderConstants.cpp:404
		uint32_t luConstantCount;

		// CgsShaderConstants.cpp:405
		uint32_t luConstantIndex;

	}
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
	}
}

// CgsShaderConstants.cpp:385
extern void ApplySingleConstantIfNecessary<E_SHADER_CONSTANT_TYPE_INTERNAL, E_SHADER_TYPE_VERTEX, E_SHADER_CHANGED_TRUE>(uint32_t  luShaderConstantIndex, const ProgramVariableHandle *  lpProgramHandle, const rw::math::vpu::Vector4 *  lpShaderConstantsToApply, const bool  lbShaderHasChangedParameter, const renderengine::ProgramBuffer *  lpProgramBuffer, const ShaderConstantHandle *  lpShaderConstantHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:388
		const bool lbIsInternal;

		// CgsShaderConstants.cpp:389
		const bool lbIsPixelShader;

		// CgsShaderConstants.cpp:390
		const bool lbShaderHasChanged;

		// CgsShaderConstants.cpp:398
		const ShaderConstantTable & lShaderTable;

		// CgsShaderConstants.cpp:399
		const ShaderConstantTableElement & lTableElement;

		// CgsShaderConstants.cpp:400
		ShaderConstantTableElement::ShaderState * lConstantShaderState;

		// CgsShaderConstants.cpp:404
		uint32_t luConstantCount;

		// CgsShaderConstants.cpp:405
		uint32_t luConstantIndex;

	}
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
	}
}

// CgsShaderConstants.cpp:716
extern void ApplyConstantsIfNecessary<E_SHADER_CONSTANT_TYPE_INTERNAL, E_SHADER_TYPE_VERTEX, E_SHADER_CHANGED_TRUE>(uint32_t  luNumConstants, const ShaderConstantHandle *  lpaShaderConstantsHandles, const uint32_t *  lpShaderConstantIndices, const ProgramVariableHandle *  lpProgramHandles, Vector4 **  lppShaderConstantsToApply, const bool  lbShaderHasChanged, const renderengine::ProgramBuffer *  lpProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:720
		uint32_t luInlinedMax;

		// CgsShaderConstants.cpp:721
		uint32_t luI;

		// CgsShaderConstants.cpp:722
		int8_t liShaderConstantIndex;

	}
}

// CgsShaderConstants.cpp:716
extern void ApplyConstantsIfNecessary<E_SHADER_CONSTANT_TYPE_INTERNAL, E_SHADER_TYPE_VERTEX, E_SHADER_CHANGED_FALSE>(uint32_t  luNumConstants, const ShaderConstantHandle *  lpaShaderConstantsHandles, const uint32_t *  lpShaderConstantIndices, const ProgramVariableHandle *  lpProgramHandles, Vector4 **  lppShaderConstantsToApply, const bool  lbShaderHasChanged, const renderengine::ProgramBuffer *  lpProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:720
		uint32_t luInlinedMax;

		// CgsShaderConstants.cpp:721
		uint32_t luI;

		// CgsShaderConstants.cpp:722
		int8_t liShaderConstantIndex;

	}
}

// CgsShaderConstants.cpp:933
void ShaderConstantsInternal::DispatchVertexShaderConstants(const int8_t  li8NumVertexShaderConstants, const ShaderConstantHandle *  lpaShaderConstantsHandles, const bool  lbShaderHasChanged, const renderengine::ProgramBuffer *  lpProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ApplyConstantsIfNecessary<E_SHADER_CONSTANT_TYPE_INTERNAL, E_SHADER_TYPE_VERTEX, E_SHADER_CHANGED_TRUE>(/* parameters */);
	ApplyConstantsIfNecessary<E_SHADER_CONSTANT_TYPE_INTERNAL, E_SHADER_TYPE_VERTEX, E_SHADER_CHANGED_FALSE>(/* parameters */);
}

// CgsShaderConstants.cpp:977
void ShaderConstantsExternal::FixUp(const renderengine::ProgramBuffer *  lpVertexProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:979
		uint32_t luDataSizeToDispatch;

		// CgsShaderConstants.cpp:1031
		uint32_t lNewInstanceCount;

		{
			// CgsShaderConstants.cpp:981
			uint32_t lInstanceIndex;

		}
	}
	{
		// CgsShaderConstants.cpp:1050
		uint32_t luIndex;

	}
	std::swap<renderengine::ProgramVariableHandle>(/* parameters */);
	std::swap<const char*>(/* parameters */);
	std::swap<unsigned int>(/* parameters */);
	{
		// CgsShaderConstants.cpp:1065
		uint32_t luIndex;

		std::swap<renderengine::ProgramVariableHandle>(/* parameters */);
		std::swap<const char*>(/* parameters */);
		std::swap<unsigned int>(/* parameters */);
	}
	{
		// CgsShaderConstants.cpp:983
		bool lbConstantHasBeenFound;

		{
			// CgsShaderConstants.cpp:986
			uint32_t lConstantIndex;

		}
		{
			// CgsShaderConstants.cpp:1022
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// CgsShaderConstants.cpp:996
		const ShaderConstantTable & lShaderTable;

		// CgsShaderConstants.cpp:997
		const ShaderConstantTableElement & lTableElement;

		// CgsShaderConstants.cpp:998
		uint32_t liNumConstants;

	}
	ShaderConstantTable::GetShaderConstantName(/* parameters */);
	{
		// CgsShaderConstants.cpp:1033
		uint32_t lInstanceIndex;

		{
			// CgsShaderConstants.cpp:1036
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	renderengine::ProgramVariableHandle::GetNumConstants(/* parameters */);
	{
		// CgsShaderConstants.cpp:1002
		uint32_t liByteCount;

		ShaderConstantShadowing::DivideExact(/* parameters */);
		renderengine::ProgramVariableHandle::SetNumConstants(/* parameters */);
	}
}

// CgsShaderConstants.cpp:838
void ShaderConstantsExternal::DispatchPixelShaderConstants(Vector4 **  lpapShaderConstantPointers, const bool  lbShaderHasChanged, const renderengine::ProgramBuffer *  lpProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsShaderConstants.cpp:716
extern void ApplyConstantsIfNecessary<E_SHADER_CONSTANT_TYPE_EXTERNAL, E_SHADER_TYPE_PIXEL, E_SHADER_CHANGED_DYNAMIC_BRANCH>(uint32_t  luNumConstants, const ShaderConstantHandle *  lpaShaderConstantsHandles, const uint32_t *  lpShaderConstantIndices, const ProgramVariableHandle *  lpProgramHandles, Vector4 **  lppShaderConstantsToApply, const bool  lbShaderHasChanged, const renderengine::ProgramBuffer *  lpProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:720
		uint32_t luInlinedMax;

		// CgsShaderConstants.cpp:721
		uint32_t luI;

		// CgsShaderConstants.cpp:722
		int8_t liShaderConstantIndex;

	}
}

// CgsShaderConstants.cpp:912
void ShaderConstantsInternal::DispatchPixelShaderConstants(const int8_t  li8NumPixelShaderConstants, const ShaderConstantHandle *  lpaiShaderConstants, const bool  lbShaderHasChanged, const renderengine::ProgramBuffer *  lpProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsShaderConstants.cpp:716
extern void ApplyConstantsIfNecessary<E_SHADER_CONSTANT_TYPE_INTERNAL, E_SHADER_TYPE_PIXEL, E_SHADER_CHANGED_DYNAMIC_BRANCH>(uint32_t  luNumConstants, const ShaderConstantHandle *  lpaShaderConstantsHandles, const uint32_t *  lpShaderConstantIndices, const ProgramVariableHandle *  lpProgramHandles, Vector4 **  lppShaderConstantsToApply, const bool  lbShaderHasChanged, const renderengine::ProgramBuffer *  lpProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.cpp:720
		uint32_t luInlinedMax;

		// CgsShaderConstants.cpp:721
		uint32_t luI;

		// CgsShaderConstants.cpp:722
		int8_t liShaderConstantIndex;

	}
}

// CgsShaderConstants.cpp:101
