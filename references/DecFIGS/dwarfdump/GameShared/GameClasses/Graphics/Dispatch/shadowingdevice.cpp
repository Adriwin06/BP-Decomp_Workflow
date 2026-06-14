// vertexbuffer.h:23
namespace shadow {
	// shadowingdevice.cpp:190
	namespace InstancingPrototype {
		struct IndexBuffer_PublicAccess;

		struct VertexBuffer_PublicAccess;

		struct VertexDescriptor_PublicAccess;

		// shadowingdevice.cpp:198
		extern void StartupInstancingSupport(rw::IResourceAllocator *);

		// shadowingdevice.cpp:192
		const int KI_INSTANCING_STREAM_FREQUENCY_DIVIDER = 4096;

		// shadowingdevice.cpp:194
		const int KI_INSTANCING_STREAM_INDEX = 15;

		// shadowingdevice.cpp:196
		extern int32_t gu32PS3OffsetForSpecialInstancingBuffer;

	}

	// shadowingdevice.cpp:763
	namespace CellGcmHelper {
		// shadowingdevice.cpp:771
		extern CellGcmContextData * BeginUnsafeBatch(CellGcmContextData *, CellGcmContextData *, uint32_t);

		// shadowingdevice.cpp:799
		extern void EndUnsafeBatch(CellGcmContextData *, CellGcmContextData *);

	}

	// shadowingdevice.cpp:134
	extern uint8_t m_currentFrame;

	// shadowingdevice.cpp:135
	extern uint8_t m_numFrames;

	// shadowingdevice.cpp:136
	extern uint8_t m_synchronisationLabel;

	// shadowingdevice.cpp:137
	extern bool m_enableSynchronisation;

	// shadowingdevice.cpp:179
	extern VertexProgramStateData sVertexProgramStateData;

	// shadowingdevice.cpp:180
	Resource sVertexProgramStateResource;

}

// shadowingdevice.cpp:174
struct shadow::VertexProgramStateData {
	// shadowingdevice.cpp:175
	char[8] maData;

}

// shadowingdevice.cpp:236
struct shadow::InstancingPrototype::IndexBuffer_PublicAccess {
	// shadowingdevice.cpp:237
	void * m_buffer;

	// shadowingdevice.cpp:239
	uint32_t m_offset;

	// shadowingdevice.cpp:240
	uint32_t m_numIndices;

	// shadowingdevice.cpp:241
	uint32_t m_stride;

	// shadowingdevice.cpp:243
	uint8_t m_indexType;

	// shadowingdevice.cpp:244
	uint8_t m_location;

	// shadowingdevice.cpp:246
	uint8_t m_type;

	// shadowingdevice.cpp:247
	uint8_t m_lockFlags;

}

// shadowingdevice.cpp:251
struct shadow::InstancingPrototype::VertexBuffer_PublicAccess {
	// shadowingdevice.cpp:252
	void * m_buffer;

	// shadowingdevice.cpp:253
	uint32_t m_offset;

	// shadowingdevice.cpp:254
	uint32_t m_bufferSize;

	// shadowingdevice.cpp:256
	uint8_t m_location;

	// shadowingdevice.cpp:257
	uint8_t m_lockFlags;

	// shadowingdevice.cpp:258
	uint16_t m_pad0;

}

// shadowingdevice.cpp:262
struct shadow::InstancingPrototype::VertexDescriptor_PublicAccess {
	// shadowingdevice.cpp:263
	int32_t m_refCount;

	// shadowingdevice.cpp:264
	uint32_t m_typesFlags;

	// shadowingdevice.cpp:265
	uint16_t m_numStreams;

	// shadowingdevice.cpp:266
	uint16_t m_numElements;

	// shadowingdevice.cpp:267
	uint16_t m_frequencyDividerOperation;

	// shadowingdevice.cpp:268
	uint16_t m_pad0;

}

// shadowingdevice.cpp:752
void shadow::Device::SetVertexProgramInternal(const renderengine::ProgramBuffer *  lpVertexProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	renderengine::Device::PS3SetVertexProgram(/* parameters */);
}

// shadowingdevice.cpp:299
void shadow::Device::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// shadowingdevice.cpp:308
void shadow::Device::SetSynchronisationLabel(uint8_t  label) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// shadowingdevice.cpp:317
void shadow::Device::GetSynchronisationLabel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// shadowingdevice.cpp:323
void shadow::Device::SetEnableSynchronisation(bool  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// shadowingdevice.cpp:329
void shadow::Device::GetEnableSynchronisation() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// shadowingdevice.cpp:415
void shadow::Device::GetVertexProgramState(const renderengine::ProgramBuffer *  lVertexProgram, const renderengine::VertexDescriptor *  lVertexDescriptor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.cpp:466
		Parameters lParameters;

		// shadowingdevice.cpp:470
		const VertexProgramState * lpVertexProgramState;

		renderengine::VertexProgramState::Parameters::SetVertexProgram(/* parameters */);
		renderengine::VertexProgramState::Parameters::SetVertexDescriptor(/* parameters */);
	}
}

// shadowingdevice.cpp:1943
void shadow::Device::PS3DrawOcclusionBox_Custom(const const DrawIndexedParameters &  params, const IndexBuffer *  lpIndexBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	cellGcmSetDrawIndexArrayInline(/* parameters */);
	{
	}
	{
	}
}

// shadowingdevice.cpp:80
void CgsGraphics::ShaderPatch::EndPatchTask() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.cpp:87
		PatchTask<renderengine::shaderpatch::ParameterStream> * task;

	}
	renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::End(/* parameters */);
}

// shadowingdevice.cpp:1767
void shadow::Device::DrawIndexedMultipleStreams_Custom(const const DrawIndexedParameters &  params) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.cpp:1780
		const uint32_t luMaxWordsForSetVertexDataArray;

		// shadowingdevice.cpp:1781
		const uint32_t luMaxWordsForSetDrawIndexArray;

		// shadowingdevice.cpp:1782
		const uint32_t luMaxWordsSafetyMargin;

		// shadowingdevice.cpp:1784
		const uint32_t luMaxWordsForUnsafeBatch;

		// shadowingdevice.cpp:1786
		CellGcmContextData lGcmCurrentContextLocal;

		// shadowingdevice.cpp:1788
		CellGcmContextData * lpRestrictedContextPtr;

		// shadowingdevice.cpp:1850
		const IndexBuffer * indexBuffer;

	}
	CellGcmHelper::BeginUnsafeBatch(/* parameters */);
	{
		// shadowingdevice.cpp:1796
		uint32_t streamsToUpdate;

		// shadowingdevice.cpp:1797
		const renderengine::VertexDescriptor * vdesc;

		// shadowingdevice.cpp:1811
		const renderengine::VertexDescriptor::Element * element;

	}
	{
		// shadowingdevice.cpp:1815
		uint8_t streamIdx;

		// shadowingdevice.cpp:1817
		const VertexBuffer * vBuf;

		// shadowingdevice.cpp:1820
		uint32_t streamOffset;

	}
	cellGcmSetVertexDataArrayUnsafeInline(/* parameters */);
	cellGcmSetDrawIndexArrayUnsafeInline(/* parameters */);
	{
	}
	{
	}
	CellGcmHelper::EndUnsafeBatch(/* parameters */);
	{
	}
}

// shadowingdevice.cpp:278
void shadow::Device::Initialize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.cpp:280
		bool lbResult;

		rw::Resource::Resource(/* parameters */);
	}
}

// shadowingdevice.cpp:396
void shadow::Device::FrameEnd() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ResetAllState(/* parameters */);
	{
		// shadowingdevice.cpp:402
		uint8_t label;

		renderengine::Device::PS3CPUSetLabelValue(/* parameters */);
	}
}

// shadowingdevice.cpp:42
void CgsGraphics::ShaderPatch::SetPixelProgram(const renderengine::ProgramBuffer *  pixelProgram) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.cpp:55
		const void * microcode;

		// shadowingdevice.cpp:56
		uint32_t microcodeSize;

		// shadowingdevice.cpp:57
		ParameterOffsetTable * table;

		renderengine::ProgramBuffer::PS3GetMicrocode(/* parameters */);
		renderengine::ProgramBuffer::PS3GetMicrocodeSize(/* parameters */);
		renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::SetMicrocode(/* parameters */);
	}
	renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::BeginEntry(/* parameters */);
	renderengine::Device::SetPixelProgram(/* parameters */);
}

// shadowingdevice.cpp:373
void shadow::Device::FrameBegin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ResetAllState(/* parameters */);
	{
		// shadowingdevice.cpp:384
		uint8_t label;

		renderengine::Device::PS3CPUSetLabelValue(/* parameters */);
		renderengine::Device::PS3GPUSetWaitLabel(/* parameters */);
		cellGcmSetWaitLabelInline(/* parameters */);
	}
}

// shadowingdevice.cpp:1973
void shadow::Device::PS3DrawOcclusionBoxSetStreams_Custom(const renderengine::VertexDescriptor *  lpVertexDescriptor, const VertexBuffer *  lpVertexBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.cpp:1975
		const renderengine::VertexDescriptor::Element * lpElement;

		cellGcmSetVertexDataArrayInline(/* parameters */);
	}
}

// shadowingdevice.cpp:814
void shadow::Device::SetSamplerStateFastPS3(const SamplerState *const  lpSamplerState, const uint32_t  luSamplerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.cpp:822
		const uint32_t KI_WORDS_TO_RESERVE_FOR_UNSAFE_BATCH;

		// shadowingdevice.cpp:824
		CellGcmContextData lGcmCurrentContextLocal;

		// shadowingdevice.cpp:826
		CellGcmContextData * lpRestrictedContextPtr;

	}
	CellGcmHelper::BeginUnsafeBatch(/* parameters */);
	{
		// shadowingdevice.cpp:834
		const SamplerState * state;

		// shadowingdevice.cpp:835
		uint8_t index;

		cellGcmSetTextureBorderColorUnsafeInline(/* parameters */);
	}
	cellGcmSetTextureControlUnsafeInline(/* parameters */);
	cellGcmSetTextureFilterUnsafeInline(/* parameters */);
	CellGcmHelper::EndUnsafeBatch(/* parameters */);
	cellGcmSetTextureAddressUnsafeInline(/* parameters */);
	{
	}
}

// shadowingdevice.cpp:874
void shadow::Device::SetTextureStateFastPS3(const TextureState *  textureState, uint32_t  id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.cpp:878
		const SamplerState * lpSamplerState;

		// shadowingdevice.cpp:883
		const Texture * texture;

		// shadowingdevice.cpp:886
		const uint32_t KI_WORDS_TO_RESERVE_FOR_UNSAFE_BATCH;

		// shadowingdevice.cpp:888
		CellGcmContextData lGcmCurrentContextLocal;

		// shadowingdevice.cpp:890
		CellGcmContextData * lpRestrictedContextPtr;

	}
	CellGcmHelper::BeginUnsafeBatch(/* parameters */);
	{
		// shadowingdevice.cpp:898
		const SamplerState * state;

		// shadowingdevice.cpp:899
		uint8_t index;

		cellGcmSetTextureBorderColorUnsafeInline(/* parameters */);
	}
	cellGcmSetTextureUnsafeInline(/* parameters */);
	cellGcmSetTextureControlUnsafeInline(/* parameters */);
	CellGcmHelper::EndUnsafeBatch(/* parameters */);
	cellGcmSetTextureAddressUnsafeInline(/* parameters */);
	cellGcmSetTextureFilterUnsafeInline(/* parameters */);
	{
	}
}

// shadowingdevice.cpp:945
void shadow::Device::SetStateFastPS3(const BlendState *  blendStateParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.cpp:947
		const BlendState *const blendState;

		// shadowingdevice.cpp:961
		const BlendState * state;

		// shadowingdevice.cpp:967
		const uint32_t KI_WORDS_TO_RESERVE_FOR_UNSAFE_BATCH;

		// shadowingdevice.cpp:969
		CellGcmContextData lGcmCurrentContextLocal;

		// shadowingdevice.cpp:971
		CellGcmContextData * lpRestrictedContextPtr;

	}
	CellGcmHelper::BeginUnsafeBatch(/* parameters */);
	cellGcmSetBlendEnableUnsafeInline(/* parameters */);
	cellGcmSetBlendFuncUnsafeInline(/* parameters */);
	cellGcmSetBlendEquationUnsafeInline(/* parameters */);
	cellGcmSetBlendColorUnsafeInline(/* parameters */);
	cellGcmSetBlendEnableMrtUnsafeInline(/* parameters */);
	cellGcmSetColorMaskUnsafeInline(/* parameters */);
	cellGcmSetColorMaskMrtUnsafeInline(/* parameters */);
	cellGcmSetAntiAliasingControlUnsafeInline(/* parameters */);
	cellGcmSetAlphaTestEnableUnsafeInline(/* parameters */);
	cellGcmSetAlphaFuncUnsafeInline(/* parameters */);
	CellGcmHelper::EndUnsafeBatch(/* parameters */);
	{
	}
}

// shadowingdevice.cpp:1006
void shadow::Device::SetStateFastPS3(const DepthStencilState *  depthStencilStateParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.cpp:1008
		const DepthStencilState *const depthStencilState;

		// shadowingdevice.cpp:1021
		const DepthStencilState * state;

		// shadowingdevice.cpp:1068
		const uint32_t KI_WORDS_TO_RESERVE_FOR_UNSAFE_BATCH;

		// shadowingdevice.cpp:1070
		CellGcmContextData lGcmCurrentContextLocal;

		// shadowingdevice.cpp:1072
		CellGcmContextData * lpRestrictedContextPtr;

	}
	CellGcmHelper::BeginUnsafeBatch(/* parameters */);
	cellGcmSetDepthTestEnableUnsafeInline(/* parameters */);
	cellGcmSetDepthFuncUnsafeInline(/* parameters */);
	cellGcmSetDepthMaskUnsafeInline(/* parameters */);
	cellGcmSetStencilTestEnableUnsafeInline(/* parameters */);
	cellGcmSetTwoSidedStencilTestEnableUnsafeInline(/* parameters */);
	cellGcmSetStencilFuncUnsafeInline(/* parameters */);
	cellGcmSetStencilMaskUnsafeInline(/* parameters */);
	cellGcmSetStencilOpUnsafeInline(/* parameters */);
	CellGcmHelper::EndUnsafeBatch(/* parameters */);
	cellGcmSetStencilTestEnableUnsafeInline(/* parameters */);
	cellGcmSetTwoSidedStencilTestEnableUnsafeInline(/* parameters */);
	cellGcmSetStencilFuncUnsafeInline(/* parameters */);
	cellGcmSetStencilMaskUnsafeInline(/* parameters */);
	cellGcmSetStencilOpUnsafeInline(/* parameters */);
	cellGcmSetBackStencilFuncUnsafeInline(/* parameters */);
	cellGcmSetBackStencilMaskUnsafeInline(/* parameters */);
	cellGcmSetBackStencilOpUnsafeInline(/* parameters */);
	{
	}
}

// shadowingdevice.cpp:1123
void shadow::Device::SetStateFastPS3(const RasterizerState *  rasterizerStateParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.cpp:1125
		const RasterizerState *const rasterizerState;

		// shadowingdevice.cpp:1134
		const RasterizerState * state;

		// shadowingdevice.cpp:1140
		const uint32_t KI_WORDS_TO_RESERVE_FOR_UNSAFE_BATCH;

		// shadowingdevice.cpp:1142
		CellGcmContextData lGcmCurrentContextLocal;

		// shadowingdevice.cpp:1144
		CellGcmContextData * lpRestrictedContextPtr;

	}
	CellGcmHelper::BeginUnsafeBatch(/* parameters */);
	cellGcmSetFrontPolygonModeUnsafeInline(/* parameters */);
	cellGcmSetBackPolygonModeUnsafeInline(/* parameters */);
	cellGcmSetCullFaceUnsafeInline(/* parameters */);
	cellGcmSetCullFaceEnableUnsafeInline(/* parameters */);
	cellGcmSetPolygonOffsetUnsafeInline(/* parameters */);
	cellGcmSetPolygonOffsetFillEnableUnsafeInline(/* parameters */);
	cellGcmSetScissorUnsafeInline(/* parameters */);
	cellGcmSetFrontFaceUnsafeInline(/* parameters */);
	cellGcmSetShadeModeUnsafeInline(/* parameters */);
	cellGcmSetRestartIndexUnsafeInline(/* parameters */);
	cellGcmSetRestartIndexEnableUnsafeInline(/* parameters */);
	CellGcmHelper::EndUnsafeBatch(/* parameters */);
	cellGcmSetScissorUnsafeInline(/* parameters */);
	{
	}
}

// shadowingdevice.cpp:566
void shadow::Device::DrawInstancedIndexedPrimitive_Custom(const DrawIndexedParameters &  params, int32_t  luInstanceCount, int32_t  luInstanceMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.cpp:583
		uint32_t luOriginalIndexCount;

		// shadowingdevice.cpp:584
		uint32_t luNewIndexCount;

		// shadowingdevice.cpp:595
		uint16_t frequency;

		// shadowingdevice.cpp:596
		uint16_t startInstance;

		// shadowingdevice.cpp:600
		uint32_t streamsToUpdate;

		// shadowingdevice.cpp:601
		const renderengine::VertexDescriptor * vdesc;

		// shadowingdevice.cpp:616
		const renderengine::VertexDescriptor::Element * element;

		// shadowingdevice.cpp:674
		const VertexDescriptor_PublicAccess * currentVertexDescriptor;

		// shadowingdevice.cpp:678
		uint32_t attributesToDisable;

		// shadowingdevice.cpp:679
		uint8_t attributeIndex;

		// shadowingdevice.cpp:715
		const IndexBuffer * indexBufferActual;

		// shadowingdevice.cpp:716
		const IndexBuffer_PublicAccess * indexBuffer;

	}
	renderengine::DrawIndexedParameters::GetIndexCount(/* parameters */);
	{
		// shadowingdevice.cpp:631
		uint8_t streamIdx;

		// shadowingdevice.cpp:635
		const VertexBuffer * vBufActual;

		// shadowingdevice.cpp:636
		const VertexBuffer_PublicAccess * vBuf;

		// shadowingdevice.cpp:640
		uint32_t streamOffset;

		cellGcmSetVertexDataArrayInline(/* parameters */);
	}
	cellGcmSetVertexDataArrayInline(/* parameters */);
	cellGcmSetVertexDataArrayInline(/* parameters */);
	cellGcmSetInvalidateVertexCacheInline(/* parameters */);
	cellGcmSetDrawIndexArrayInline(/* parameters */);
	{
	}
	{
	}
	cellGcmSetVertexDataArrayInline(/* parameters */);
}

// shadowingdevice.cpp:1885
void shadow::Device::DrawIndexedSingleStream_Custom(const const DrawIndexedParameters &  params) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.cpp:1924
		const IndexBuffer * indexBuffer;

		{
			// shadowingdevice.cpp:1900
			const renderengine::VertexDescriptor * vdesc;

			// shadowingdevice.cpp:1902
			const renderengine::VertexDescriptor::Element * element;

			// shadowingdevice.cpp:1903
			const uint32_t luNumElements;

		}
	}
	{
		// shadowingdevice.cpp:1905
		uint32_t luI;

		{
			// shadowingdevice.cpp:1908
			const VertexBuffer * vBuf;

			cellGcmSetVertexDataArrayInline(/* parameters */);
		}
	}
	cellGcmSetDrawIndexArrayInline(/* parameters */);
	{
	}
	{
	}
}

// shadowingdevice.cpp:336
void shadow::Device::PS3SetShaderStates(const const ProgramVariableHandle &  varHandle, const rw::math::vpu::Vector4 *  constArray, const uint32_t  luNumConstants) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.cpp:343
		FloatShaderStateIterator lShaderStateIterator;

		renderengine::ProgramVariableHandle::GetProgramType(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	}
	CgsGraphics::ShaderPatch::BeginShaderStatesPatch(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	CgsGraphics::ShaderPatch::EndShaderStatesPatch(/* parameters */);
	{
	}
	renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::BeginEntry(/* parameters */);
}

// shadowingdevice.cpp:130
// shadowingdevice.cpp:131
// shadowingdevice.cpp:132
// shadowingdevice.cpp:117
// shadowingdevice.cpp:121
// shadowingdevice.cpp:122
// shadowingdevice.cpp:123
// shadowingdevice.cpp:124
// shadowingdevice.cpp:125
// shadowingdevice.cpp:128
// shadowingdevice.cpp:129
