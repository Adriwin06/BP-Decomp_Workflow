// CgsMaterialState.h:37
namespace CgsGraphics {
	// CgsDispatcherCommands.cpp:539
	extern void SetupBuiltinInterpreters(void (*)(DispatchCommand *, CgsGraphics::DispatchFrame *, void *, float32_t) *);

	// CgsDispatcherCommands.cpp:416
	extern CgsGraphics::DispatchObjectContext_JobState * GetDispatchObjectContextJobState(const DispatchObjectContext *);

	// CgsDispatcherCommands.cpp:709
	Vector4 ** AddShaderTechniqueConstantsToDispatchBin(CgsGraphics::DispatchBin *, CgsGraphics::DispatchObjectContext *, const MaterialTechnique *, const CgsGraphics::MaterialAssembly *, bool);

	// CgsDispatcherCommands.cpp:1798
	uint32_t GetDispatchBinExternalTextureStateInQuadWords(uint32_t);

	// CgsDispatcherCommands.cpp:1261
	void ReceiveDirtyConstantsFromDispatchBinIntoContext(const rw::math::vpu::Vector4 *, CgsGraphics::DispatchObjectContext *);

	// CgsDispatcherCommands.cpp:1011
	bool FrustumTest_AnyOutside(Matrix44);

	// CgsDispatcherCommands.cpp:1164
	extern bool FrustumTest(Matrix44);

	// CgsDispatcherCommands.cpp:118
	const uint32_t sizeof_renderengine_ps3_SamplerState = 28;

	// CgsDispatcherCommands.cpp:119
	const uint32_t sizeof_renderengine_ps3_TextureState = 32;

	// CgsDispatcherCommands.cpp:1256
	const VecFloat K_32767;

}

// CgsDispatcherCommands.cpp:101
struct CgsGraphics::DrawRenderableDispatchThreadInfo {
	// CgsDispatcherCommands.cpp:107
	bool mbRenderZOnly;

	// CgsDispatcherCommands.cpp:108
	uint8_t mu8PreZList;

	// CgsDispatcherCommands.cpp:109
	int8_t mi8InstanceCount;

	// CgsDispatcherCommands.cpp:110
	uint8_t mu8PreZTechniqueIndex;

	// CgsDispatcherCommands.cpp:111
	uint8_t mu8ExcludeMeshBits;

	// CgsDispatcherCommands.cpp:113
	RenderableMesh * mpLastRenderableMesh;

}

// CgsDispatcherCommands.cpp:141
struct CgsGraphics::DispatchObjectContext_JobState {
	// CgsDispatcherCommands.cpp:163
	extern const uint32_t KU_MAX_OUTPUT_DISPATCH_LISTS = 26;

	// CgsDispatcherCommands.cpp:164
	extern const uint32_t KU_MAX_MESHES_PER_RENDERABLE = 256;

	// CgsDispatcherCommands.cpp:165
	extern const uint32_t KU_MAX_RENDERABLE_PACKET_LENGTH = 256;

	// CgsDispatcherCommands.cpp:167
	extern const uint32_t KU_LOCAL_RENDERABLE_RESOURCE_QUADWORD_MAX = 1024;

	// CgsDispatcherCommands.cpp:170
	extern const uint32_t KU_MAX_INPUT_KEYS = 256;

	// CgsDispatcherCommands.cpp:172
	extern const uint32_t KU_LOCAL_DISPATCH_BIN_QUADWORD_MAX = 1024;

	// CgsDispatcherCommands.cpp:183
	DispatchFrame lDispatchFrameLocal;

	// CgsDispatcherCommands.cpp:185
	DispatchList lInputDispatchList;

	// CgsDispatcherCommands.cpp:186
	SortKeyBlock lInputDispatchList_CurrentKeyBlock;

	// CgsDispatcherCommands.cpp:189
	Matrix44Affine mWorldMatrix;

	// CgsDispatcherCommands.cpp:193
	Matrix44 mViewProjectionMatrix;

	// CgsDispatcherCommands.cpp:198
	SortKey[256] laInputDispatchListKeyArray;

	// CgsDispatcherCommands.cpp:202
	DispatchList[26] laOutputDispatchListArray;

	// CgsDispatcherCommands.cpp:206
	DrawRenderable lDrawRenderableCommand;

	// CgsDispatcherCommands.cpp:210
	Vector4[256] laPacketContents;

	// CgsDispatcherCommands.cpp:214
	ObjectToMeshJobInfo * lpObjectToMeshJobInfo;

	// CgsDispatcherCommands.cpp:215
	uintptr_t luOffsetToMainMemory;

	// CgsDispatcherCommands.cpp:217
	const Renderable * lpRenderableMainMemory;

	// CgsDispatcherCommands.cpp:218
	intptr_t luRenderableMainMemoryOffset;

	// CgsDispatcherCommands.cpp:222
	Renderable lRenderable;

	// CgsDispatcherCommands.cpp:226
	char[16384] lLocalRenderableResourceStorage;

	// CgsDispatcherCommands.cpp:228
	RenderableMesh *[256] lapRenderableMeshPtrArray;

	// CgsDispatcherCommands.cpp:232
	RenderableMesh lRenderableMesh;

	// CgsDispatcherCommands.cpp:234
	RenderableMesh * lpRenderableMeshMainMemory;

	// CgsDispatcherCommands.cpp:236
	const rw::math::vpu::Matrix44Affine * mpWorldMatrix_MainMemory;

	// CgsDispatcherCommands.cpp:237
	const rw::math::vpu::Matrix44 * mpViewProjectionMatrix_MainMemory;

	// CgsDispatcherCommands.cpp:238
	const CgsGraphics::MaterialAssembly * lpMaterialAssemblyMainMemory;

	// CgsDispatcherCommands.cpp:239
	const MaterialTechnique * lpMaterialTechniqueMainMemory;

	// CgsDispatcherCommands.cpp:240
	const MaterialTechnique * lpMaterialTechniquePreZMainMemory;

	// CgsDispatcherCommands.cpp:241
	const CgsGraphics::ShaderTechnique * lpShaderTechniqueMainMemory;

	// CgsDispatcherCommands.cpp:243
	const Sampler * lpExternalSamplersMainMemory;

	// CgsDispatcherCommands.cpp:245
	extern const int MAX_TECHNIQUES = 8;

	// CgsDispatcherCommands.cpp:249
	MaterialAssembly lMaterialAssembly;

	// CgsDispatcherCommands.cpp:253
	MaterialTechnique *[8] lapMaterialTechniqueArray;

	// CgsDispatcherCommands.cpp:257
	MaterialTechnique lMaterialTechnique;

	// CgsDispatcherCommands.cpp:261
	MaterialTechnique lMaterialTechniquePreZ;

	// CgsDispatcherCommands.cpp:265
	ShaderTechnique lShaderTechnique;

	// CgsDispatcherCommands.cpp:269
	ShaderConstantsExternal lShaderConstantsVertexGlobal;

	// CgsDispatcherCommands.cpp:273
	ShaderConstantsExternal lShaderConstantsVertexObject;

	// CgsDispatcherCommands.cpp:277
	ShaderConstantsExternal lShaderConstantsPixelGlobal;

	// CgsDispatcherCommands.cpp:281
	ShaderConstantsExternal lShaderConstantsPixelObject;

	// CgsDispatcherCommands.cpp:285
	DrawRenderableDispatchThreadInfo lDrawRenderableDispatchThreadInfo;

	// CgsDispatcherCommands.cpp:287
	extern const int KU_MAX_SAMPLERS = 16;

	// CgsDispatcherCommands.cpp:290
	Sampler[16] laSamplerArray;

	// CgsDispatcherCommands.cpp:291
	char[128] laSamplerArrayPadding;

	// CgsDispatcherCommands.cpp:295
	int8_t[16] lai8SamplerIndexArray;

	// CgsDispatcherCommands.cpp:296
	char[128] lai8SamplerIndexArrayPadding;

	// CgsDispatcherCommands.cpp:301
	uint32_t[82] laShaderConstantIndexArray_VertexGlobal;

	// CgsDispatcherCommands.cpp:305
	uint32_t[82] laShaderConstantIndexArray_VertexObject;

	// CgsDispatcherCommands.cpp:309
	uint32_t[82] laShaderConstantIndexArray_PixelGlobal;

	// CgsDispatcherCommands.cpp:313
	uint32_t[82] laShaderConstantIndexArray_PixelObject;

public:
	// CgsDispatcherCommands.cpp:148
	void Reset();

	// CgsDispatcherCommands.cpp:155
	void TransferMemoryToLocal(void *, const void *, size_t, uint32_t);

	// CgsDispatcherCommands.cpp:161
	void TransferLocalToMemoryAligned(void *, const void *, size_t);

}

// CgsDispatcherCommands.cpp:3194
void ShaderConstantsExternal::AddToDispatchBinFromStatePointers(CgsGraphics::DispatchObjectContext *  lpDispatchObjectContext, Vector4 *  lpDispatchBin, const Vector4 **&  lpapShaderConstantPointers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:3196
		uint32_t luIndex;

	}
	{
		// CgsDispatcherCommands.cpp:3198
		uint32_t luShaderIndex;

	}
}

// CgsDispatcherCommands.cpp:86
void CgsDispatchCommands_RelocatePointer<RenderableMesh*>(const RenderableMesh *&  lpPointer, intptr_t  luOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDispatcherCommands.cpp:86
void CgsDispatchCommands_RelocatePointer<rw::math::vpu::Vector4**>(const Vector4 **&  lpPointer, intptr_t  luOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDispatcherCommands.cpp:2752
void CgsGraphics::DispatchPacketInterpreter::DispatchPacketInterpreter(void (*)(DispatchCommand *, CgsGraphics::DispatchFrame *, void *, float32_t) *const  paInterpreters, uint32_t  uNumInterpreters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDispatcherCommands.cpp:2926
void CgsGraphics::DispatchFrame::SetActiveBlockInSharedMemory(uintptr_t  muNewDispatchBinOutputAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDispatcherCommands.cpp:3211
void CgsGraphics::DispatchObjectContext::ResetShadowing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:3214
		uint32_t luIndex;

	}
}

// CgsDispatcherCommands.cpp:3114
void CgsGraphics::DispatchFrame::ConstructWithSharedBinMemory(DispatchList *  lpaDispatchListArray, uint32_t  luDispatchListCount, uintptr_t  luDispatchBinMasterAddress, uintptr_t  luSharedMemoryStartAddress, uint32_t *  lpSharedMemoryBlockNextFreeAtomic, uint32_t  luSharedMemoryBlockMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:3130
		uint32_t i;

	}
}

// CgsDispatcherCommands.cpp:86
void CgsDispatchCommands_RelocatePointer<SortKeyBlock*>(const SortKeyBlock *&  lpPointer, intptr_t  luOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDispatcherCommands.cpp:965
void CgsGraphics::DrawRenderable::Prefetch(DispatchCommand *  lpCommand1, DispatchCommand *  lpCommand2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:974
		DrawRenderable * lpCmd1;

		// CgsDispatcherCommands.cpp:975
		DrawRenderable * lpCmd2;

		// CgsDispatcherCommands.cpp:980
		const Renderable * lpRenderable1;

		// CgsDispatcherCommands.cpp:981
		const Renderable * lpRenderable2;

		// CgsDispatcherCommands.cpp:987
		const uint32_t num_meshes1;

		// CgsDispatcherCommands.cpp:989
		uint32_t lu32MeshId;

	}
	{
		// CgsDispatcherCommands.cpp:985
		uintptr_t luAddress;

	}
	{
		// CgsDispatcherCommands.cpp:992
		RenderableMesh * lpRenderableMesh;

		{
			// CgsDispatcherCommands.cpp:994
			uintptr_t luAddress;

		}
	}
}

// CgsDispatcherCommands.cpp:2765
void CgsGraphics::DispatchPacketInterpreter::Interpret(DispatchPacket *  pPacket, void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:2770
		DispatchCommand * pCommand;

		// CgsDispatcherCommands.cpp:2772
		float32_t lfTime;

		// CgsDispatcherCommands.cpp:2773
		CgsGraphics::DispatchFrame * lpMeshOnlyDispatchFrame;

		{
			// CgsDispatcherCommands.cpp:2777
			uint32_t Command;

			// CgsDispatcherCommands.cpp:2778
			uint32_t Size;

			// CgsDispatcherCommands.cpp:2779
			bool EndOfPacket;

			// CgsDispatcherCommands.cpp:2782
			void (DispatchCommand *, CgsGraphics::DispatchFrame *, void *, float32_t) *const pInterpretFunc;

			DispatchCommand::GetCommandID(/* parameters */);
		}
	}
}

// CgsDispatcherCommands.cpp:2819
void CgsGraphics::DispatchPacketInterpreter::PrefetchObjectToMesh(DispatchPacket *  pPacket1, DispatchPacket *  pPacket2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:2824
		DispatchCommand * pCommand1;

		// CgsDispatcherCommands.cpp:2825
		DispatchCommand * pCommand2;

	}
}

// CgsDispatcherCommands.cpp:2119
void CgsGraphics::DrawRenderableMesh::Prefetch(DispatchCommand *  lpCommand1, DispatchCommand *  lpCommand2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:2128
		DrawRenderableMesh * lpCmd1;

		// CgsDispatcherCommands.cpp:2129
		DrawRenderableMesh * lpCmd2;

		// CgsDispatcherCommands.cpp:2132
		const RenderableMesh * lpMesh;

		{
			// CgsDispatcherCommands.cpp:2130
			uintptr_t luAddress;

		}
		{
			// CgsDispatcherCommands.cpp:2133
			uintptr_t luAddress;

		}
		{
			// CgsDispatcherCommands.cpp:2134
			uintptr_t luAddress;

		}
	}
}

// CgsDispatcherCommands.cpp:2838
void CgsGraphics::DispatchPacketInterpreter::PrefetchMesh(DispatchPacket *  pPacket1, DispatchPacket *  pPacket2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:2843
		DispatchCommand * pCommand1;

		// CgsDispatcherCommands.cpp:2844
		DispatchCommand * pCommand2;

	}
	DrawRenderableMesh::Prefetch(/* parameters */);
}

// CgsDispatcherCommands.cpp:86
void CgsDispatchCommands_RelocatePointer<SortKey*>(const SortKey *&  lpPointer, intptr_t  luOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDispatcherCommands.cpp:3137
void CgsGraphics::DispatchList::RelocateForMainMemory(uintptr_t  luLocalAddress, uintptr_t  luMainAddress, uintptr_t  luMainMasterBinAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:3141
		uintptr_t luOffsetToMainMemory;

	}
	{
		// CgsDispatcherCommands.cpp:3145
		SortKeyBlock * lpKeyBlock;

		{
			// CgsDispatcherCommands.cpp:3149
			SortKeyBlock * lpNextBlock;

			CgsDispatchCommands_RelocatePointer<SortKey*>(/* parameters */);
		}
	}
}

// CgsDispatcherCommands.cpp:3176
void CgsGraphics::DispatchFrame::RelocateForMainMemory(uintptr_t  luLocalBinAddress, uintptr_t  luMainBinAddress, uintptr_t  luMainBinMasterAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:3178
		uint32_t luIndex;

	}
}

// CgsDispatcherCommands.cpp:2880
void CgsGraphics::DispatchFrame::FlushBlockToSharedMemory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:2909
		void * lpDispatchBinOutput;

		GetBin(/* parameters */);
	}
}

// CgsDispatcherCommands.cpp:2934
void ObjectToMeshJob::SharedMemoryChangeCallback(void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:2938
		CgsGraphics::DispatchObjectContext_JobState * lpJobState;

		// CgsDispatcherCommands.cpp:2939
		const DispatchObjectContext_JobState & lJobState;

		// CgsDispatcherCommands.cpp:2941
		uintptr_t luBinOutputMainAddress;

		// CgsDispatcherCommands.cpp:2946
		uintptr_t luBinOutputLocalAddress;

		// CgsDispatcherCommands.cpp:2955
		uint32_t luOffsetOfCurrentBlock;

		// CgsDispatcherCommands.cpp:2958
		uintptr_t luEffectiveMasterInLocalAddress;

		// CgsDispatcherCommands.cpp:2960
		uint32_t luIndex;

		CgsGraphics::DispatchFrame::GetBin(/* parameters */);
	}
	CgsGraphics::DispatchList::SetDispatchBinMasterStart(/* parameters */);
}

// CgsDispatcherCommands.cpp:691
void CgsGraphics::CallbackFn::Interpret(DispatchCommand *  lpCommand, CgsGraphics::DispatchFrame *  lpMeshOnlyDispatchFrame, void *  lpContext, float32_t  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:694
		CallbackFn * pCmd;

		// CgsDispatcherCommands.cpp:696
		void (*)(void *, uint32_t) pFunc;

		// CgsDispatcherCommands.cpp:697
		void * pData;

		// CgsDispatcherCommands.cpp:698
		uint32_t uDataSize;

	}
}

// CgsDispatcherCommands.cpp:2046
void CgsGraphics::DrawRenderableMesh::InterpretOcclusionQuery_Bulk(DispatchCommand *  pCommand, float32_t  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:2050
		DrawRenderableMesh * lpCmd;

		// CgsDispatcherCommands.cpp:2051
		const RenderableMesh * lpMesh;

		// CgsDispatcherCommands.cpp:2052
		Vector4 ** lpapShaderConstantExternalPointers;

		// CgsDispatcherCommands.cpp:2062
		int32_t liMaxTechniqueIndex;

		// CgsDispatcherCommands.cpp:2063
		int32_t liTechniqueIndex;

		// CgsDispatcherCommands.cpp:2064
		MaterialTechnique * lpMaterial;

		// CgsDispatcherCommands.cpp:2069
		const rw::math::vpu::Matrix44 * lpWorldMatrix;

		// CgsDispatcherCommands.cpp:2070
		Matrix44 lWorldViewProjectionMatrix;

		// CgsDispatcherCommands.cpp:2072
		Matrix44 lBoxMatrix;

	}
	DispatchCommand::GetCustomSection(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	MaterialAssembly::GetMaterial(/* parameters */);
	OcclusionCullManager::GetViewProjectionMatrix(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	OcclusionCullManager::StoreOccludeeBoundingBox_TrivialAccept(/* parameters */);
}

// CgsDispatcherCommands.cpp:2083
void CgsGraphics::DrawRenderableMesh::InterpretOcclusionQuery(DispatchCommand *  pCommand, float32_t  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:2087
		DrawRenderableMesh * lpCmd;

		// CgsDispatcherCommands.cpp:2088
		const RenderableMesh * lpMesh;

		// CgsDispatcherCommands.cpp:2089
		Vector4 ** lpapShaderConstantExternalPointers;

		// CgsDispatcherCommands.cpp:2099
		int32_t liMaxTechniqueIndex;

		// CgsDispatcherCommands.cpp:2100
		int32_t liTechniqueIndex;

		// CgsDispatcherCommands.cpp:2101
		MaterialTechnique * lpMaterial;

		// CgsDispatcherCommands.cpp:2106
		const rw::math::vpu::Matrix44 * lpWorldMatrix;

		// CgsDispatcherCommands.cpp:2107
		Matrix44 lWorldViewProjectionMatrix;

		// CgsDispatcherCommands.cpp:2109
		Matrix44 lBoxMatrix;

	}
	DispatchCommand::GetCustomSection(/* parameters */);
	OcclusionCullManager::TrivialAcceptOccludeeBoundingBox(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	MaterialAssembly::GetMaterial(/* parameters */);
	OcclusionCullManager::GetViewProjectionMatrix(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
}

// CgsDispatcherCommands.cpp:2865
void CgsGraphics::DispatchPacketInterpreter::InterpretMeshOcclusionQuery(DispatchPacket *  pPacket) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:2869
		DispatchCommand * pCommand;

	}
}

// CgsDispatcherCommands.cpp:2142
void CgsGraphics::DispatchList::DispatchAllMeshes(const DispatchPacketInterpreter *  pInterpreter, void *  lpContext, int32_t  liStartIndex, int32_t  liNumToDispatch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:2153
		int32_t liEndIndex;

		// CgsDispatcherCommands.cpp:2159
		float lfTime;

		// CgsDispatcherCommands.cpp:2161
		uint32_t luCurrent;

		shadow::Device::ResetShadowingForShaders(/* parameters */);
		DrawRenderableMesh::SetMaterialShadowingAddress(/* parameters */);
	}
	DrawRenderableMeshZOnly::SetMaterialShadowingAddress(/* parameters */);
	CgsNumeric::Min(/* parameters */);
	DispatchPacketInterpreter::GetTime(/* parameters */);
	{
		// CgsDispatcherCommands.cpp:2170
		DispatchCommand * lpCommand;

		// CgsDispatcherCommands.cpp:2186
		DrawRenderableMesh * lpCmd;

		// CgsDispatcherCommands.cpp:2187
		const RenderableMesh * lpMesh;

		// CgsDispatcherCommands.cpp:2188
		const CgsGraphics::MaterialAssembly * lpMaterialAssembly;

		// CgsDispatcherCommands.cpp:2189
		Vector4 * lpCmdV;

		// CgsDispatcherCommands.cpp:2191
		uint32_t lu32TechniqueAndInstanceCount;

		// CgsDispatcherCommands.cpp:2192
		uint32_t luTechniqueIndexRequested;

		// CgsDispatcherCommands.cpp:2193
		uint8_t lu8InstanceCount;

		// CgsDispatcherCommands.cpp:2202
		int32_t liMaxTechniqueIndex;

		// CgsDispatcherCommands.cpp:2203
		int32_t liTechniqueIndex;

		// CgsDispatcherCommands.cpp:2206
		MaterialTechnique * lpMaterial;

		// CgsDispatcherCommands.cpp:2209
		bool lbSubmitMaterialScope;

		// CgsDispatcherCommands.cpp:2220
		const ShaderConstantsExternal * lpVertexShaderConstantsExternalObject;

		// CgsDispatcherCommands.cpp:2221
		const ShaderConstantsExternal * lpPixelShaderConstantsExternalObject;

		// CgsDispatcherCommands.cpp:2223
		const ShaderConstantsExternal * lpVertexShaderConstantsExternalGlobal;

		// CgsDispatcherCommands.cpp:2224
		const ShaderConstantsExternal * lpPixelShaderConstantsExternalGlobal;

		// CgsDispatcherCommands.cpp:2229
		Vector4 ** lpapShaderConstantExternalPointers;

		// CgsDispatcherCommands.cpp:2231
		Vector4 **const lpapShaderConstantVertexExternalObjectPointers;

		// CgsDispatcherCommands.cpp:2234
		Vector4 **const lpapShaderConstantPixelExternalObjectPointers;

		// CgsDispatcherCommands.cpp:2239
		bool lbForceVertexShaderConstants;

		// CgsDispatcherCommands.cpp:2240
		bool lbForcePixelShaderConstants;

		// CgsDispatcherCommands.cpp:2389
		const bool lbOcclusionModeRender;

		GetCommandFromIndex_Sorted(/* parameters */);
		GetCommandFromIndex_Sorted(/* parameters */);
		DrawRenderableMesh::Prefetch(/* parameters */);
		{
		}
		{
		}
		{
		}
		GetCommandFromIndex_Sorted(/* parameters */);
		DispatchCommand::GetCustomSection(/* parameters */);
		{
			// CgsDispatcherCommands.cpp:2195
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			RenderableMesh::GetNumVertexDescriptors(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsNumeric::Min(/* parameters */);
		MaterialAssembly::GetMaterial(/* parameters */);
		ShaderTechnique::GetExternalObjectVertexShaderConstants(/* parameters */);
		ShaderTechnique::GetExternalObjectPixelShaderConstants(/* parameters */);
		ShaderTechnique::GetExternalGlobalVertexShaderConstants(/* parameters */);
		ShaderTechnique::GetExternalGlobalPixelShaderConstants(/* parameters */);
		{
			// CgsDispatcherCommands.cpp:2248
			Vector4 **const lpapShaderConstantVertexExternalGlobalPointers;

			// CgsDispatcherCommands.cpp:2251
			Vector4 **const lpapShaderConstantPixelExternalGlobalPointers;

			// CgsDispatcherCommands.cpp:2255
			const renderengine::ProgramBuffer * pVertexProgramBuffer;

			// CgsDispatcherCommands.cpp:2256
			const renderengine::ProgramBuffer * pPixelProgramBuffer;

			// CgsDispatcherCommands.cpp:2263
			const BlendState * lpBlendState;

			// CgsDispatcherCommands.cpp:2264
			const DepthStencilState * lpDepthStencilState;

			// CgsDispatcherCommands.cpp:2265
			const RasterizerState * lpRasterizerState;

			// CgsDispatcherCommands.cpp:2326
			Sampler * lpaInternalSamplers;

			// CgsDispatcherCommands.cpp:2328
			int8_t luSampler;

			ShaderTechnique::GetVertexProgramBuffer(/* parameters */);
			ShaderTechnique::GetPixelProgramBuffer(/* parameters */);
			MaterialTechnique::GetBlendState(/* parameters */);
			MaterialTechnique::GetDepthStencilState(/* parameters */);
			MaterialTechnique::GetRasterizerState(/* parameters */);
			shadow::Device::SetState(/* parameters */);
			shadow::Device::SetState(/* parameters */);
			shadow::Device::SetState(/* parameters */);
			{
				// CgsDispatcherCommands.cpp:2295
				const ShaderConstantsCPU * lpVertexShaderConstantsCPU;

				shadow::Device::SetVertexProgram(/* parameters */);
				MaterialAssembly::GetCPUParameters(/* parameters */);
			}
			shadow::Device::SetPixelProgram(/* parameters */);
			ShaderConstantsExternal::DispatchPixelShaderConstants(/* parameters */);
			{
				// CgsDispatcherCommands.cpp:2319
				const ShaderConstantsInternal * lpPixelShaderConstantsInternal;

				ShaderConstantsInternal::DispatchPixelShaderConstants(/* parameters */);
				MaterialTechnique::GetPixelShaderConstantsHandles(/* parameters */);
				ApplyConstantsIfNecessary<E_SHADER_CONSTANT_TYPE_INTERNAL, E_SHADER_TYPE_PIXEL, E_SHADER_CHANGED_DYNAMIC_BRANCH>(/* parameters */);
			}
			{
				// CgsDispatcherCommands.cpp:2331
				int8_t luSamplerIndex;

				// CgsDispatcherCommands.cpp:2333
				TextureState * lpState;

				shadow::Device::SetState(/* parameters */);
			}
		}
		ShaderConstantsExternal::DispatchPixelShaderConstants(/* parameters */);
		ApplyConstantsIfNecessary<E_SHADER_CONSTANT_TYPE_EXTERNAL, E_SHADER_TYPE_PIXEL, E_SHADER_CHANGED_DYNAMIC_BRANCH>(/* parameters */);
		ShaderPatch::CommitPatchedMicrocode(/* parameters */);
		shadow::Device::SetVertexDescriptor(/* parameters */);
		cellGcmSetVertexDataArrayInline(/* parameters */);
		shadow::Device::SetMeshBuffers(/* parameters */);
		OcclusionCullManager::BeginMeshConditionalRender(/* parameters */);
		OcclusionCullManager::EndMeshConditionalRender(/* parameters */);
	}
	renderengine::Device::SetResource(/* parameters */);
	{
		// CgsDispatcherCommands.cpp:2291
		const ShaderConstantsInternal * lpVertexShaderConstantsInternal;

	}
	cellGcmSetRenderEnableInline(/* parameters */);
	renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::BeginEntry(/* parameters */);
}

// CgsDispatcherCommands.cpp:2527
void CgsGraphics::DrawRenderableMeshZOnly::Interpret(DispatchCommand *  lpCommand, CgsGraphics::DispatchFrame *  lpMeshOnlyDispatchFrame, void *, float32_t  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:2535
		DrawRenderableMeshZOnly * lpCmd;

		// CgsDispatcherCommands.cpp:2536
		const RenderableMesh * lpMesh;

		// CgsDispatcherCommands.cpp:2537
		const CgsGraphics::MaterialAssembly * lpMaterialAssembly;

		// CgsDispatcherCommands.cpp:2539
		uint32_t lu32TechniqueAndInstanceCount;

		// CgsDispatcherCommands.cpp:2540
		uint32_t luTechniqueIndexRequested;

		// CgsDispatcherCommands.cpp:2541
		uint8_t lu8InstanceCount;

		// CgsDispatcherCommands.cpp:2550
		int32_t liMaxTechniqueIndex;

		// CgsDispatcherCommands.cpp:2551
		int32_t liTechniqueIndex;

		// CgsDispatcherCommands.cpp:2554
		MaterialTechnique * lpMaterial;

		// CgsDispatcherCommands.cpp:2557
		bool lbSubmitMaterialScope;

		// CgsDispatcherCommands.cpp:2558
		const CgsGraphics::ShaderTechnique * lpShaderTechnique;

		// CgsDispatcherCommands.cpp:2568
		const renderengine::ProgramBuffer * pVertexProgramBuffer;

		// CgsDispatcherCommands.cpp:2569
		const renderengine::ProgramBuffer * pPixelProgramBuffer;

		// CgsDispatcherCommands.cpp:2571
		const ShaderConstantsExternal * lpVertexShaderConstantsExternalObject;

		// CgsDispatcherCommands.cpp:2572
		const ShaderConstantsExternal * lpVertexShaderConstantsExternalGlobal;

		// CgsDispatcherCommands.cpp:2574
		const ShaderConstantsExternal * lpPixelShaderConstantsExternalObject;

		// CgsDispatcherCommands.cpp:2580
		bool lbForceVertexShaderConstants;

		// CgsDispatcherCommands.cpp:2582
		Vector4 ** lpapShaderConstantExternalPointers;

		// CgsDispatcherCommands.cpp:2585
		Vector4 ** lpapShaderConstantVertexExternalObjectPointers;

		// CgsDispatcherCommands.cpp:2588
		Vector4 ** lpapShaderConstantVertexExternalGlobalPointers;

		DispatchCommand::GetCustomSection(/* parameters */);
		{
			// CgsDispatcherCommands.cpp:2543
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			RenderableMesh::GetNumVertexDescriptors(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsNumeric::Min(/* parameters */);
		MaterialAssembly::GetMaterial(/* parameters */);
		MaterialTechnique::GetShaderTechnique(/* parameters */);
		ShaderTechnique::GetExternalObjectPixelShaderConstants(/* parameters */);
		ShaderTechnique::GetExternalObjectVertexShaderConstants(/* parameters */);
		ShaderTechnique::GetExternalGlobalVertexShaderConstants(/* parameters */);
		ShaderTechnique::GetVertexProgramBuffer(/* parameters */);
		ShaderTechnique::GetPixelProgramBuffer(/* parameters */);
		{
			// CgsDispatcherCommands.cpp:2594
			bool lbIsAlphaTested;

			{
				// CgsDispatcherCommands.cpp:2602
				const DepthStencilState * lpDepthStencilState;

				// CgsDispatcherCommands.cpp:2603
				const RasterizerState * lpRasterizerState;

				// CgsDispatcherCommands.cpp:2617
				const BlendState * lpBlendStateNoAT;

				// CgsDispatcherCommands.cpp:2618
				const BlendState * lpBlendStateAT;

				MaterialTechnique::GetDepthStencilState(/* parameters */);
			}
			MaterialTechnique::GetRasterizerState(/* parameters */);
			shadow::Device::SetState(/* parameters */);
			shadow::Device::SetState(/* parameters */);
			shadow::Device::SetState(/* parameters */);
			{
				// CgsDispatcherCommands.cpp:2653
				const ShaderConstantsCPU * lpVertexShaderConstantsCPU;

				shadow::Device::SetVertexProgram(/* parameters */);
				MaterialAssembly::GetCPUParameters(/* parameters */);
			}
			shadow::Device::SetPixelProgram(/* parameters */);
			{
				// CgsDispatcherCommands.cpp:2671
				Sampler * lpaInternalSamplers;

				// CgsDispatcherCommands.cpp:2673
				int8_t luSampler;

			}
		}
		shadow::Device::SetVertexDescriptor(/* parameters */);
		cellGcmSetVertexDataArrayInline(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		shadow::Device::SetMeshBuffers(/* parameters */);
		ShaderPatch::CommitPatchedMicrocode(/* parameters */);
	}
	renderengine::Device::SetResource(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	{
		// CgsDispatcherCommands.cpp:2649
		const ShaderConstantsInternal * lpVertexShaderConstantsInternal;

	}
	{
		// CgsDispatcherCommands.cpp:2676
		int8_t luSamplerIndex;

		// CgsDispatcherCommands.cpp:2678
		TextureState * lpState;

		shadow::Device::SetState(/* parameters */);
	}
	renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::BeginEntry(/* parameters */);
}

// CgsDispatcherCommands.cpp:2852
void CgsGraphics::DispatchPacketInterpreter::InterpretMeshZOnly(DispatchPacket *  pPacket, void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:2856
		DispatchCommand * pCommand;

	}
}

// CgsDispatcherCommands.cpp:2460
void CgsGraphics::DrawRenderableMeshZOnly::AddToBin(const RenderableMesh *  lpMesh, CgsGraphics::DispatchBin *  lpBin, CgsGraphics::DispatchObjectContext *  lpDispatchObjectContext, uint8_t  lu8TechniqueIndex, uint8_t  lu8InstanceCount, const CgsGraphics::DrawRenderableDispatchThreadInfo *  lpDispatchThreadInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:2467
		MaterialTechnique * lpMaterialTechnique;

		// CgsDispatcherCommands.cpp:2470
		CgsGraphics::DispatchObjectContext_JobState *const lpJobState;

		// CgsDispatcherCommands.cpp:2489
		Vector4 ** lpMemoryForShaderConstantPointers;

		// CgsDispatcherCommands.cpp:2493
		DrawRenderableMeshZOnly * lpCmd;

		// CgsDispatcherCommands.cpp:2509
		uint32_t lu32TechniqueAndInstanceCount;

	}
	MaterialAssembly::GetMaterial(/* parameters */);
	DispatchBin::AllocateCommand(/* parameters */);
	DispatchCommand::SetupCommandWord(/* parameters */);
	DispatchCommand::GetCustomSection(/* parameters */);
}

// CgsDispatcherCommands.cpp:667
void CgsGraphics::CallbackFn::AddToBin(CgsGraphics::DispatchBin *  pBin, void (*)(void *, uint32_t)  pFunc, const void *  pData, uint32_t  uNumQwords) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:669
		CallbackFn * pCmd;

		DispatchBin::AllocateCommand(/* parameters */);
	}
	DispatchBin::Reserve(/* parameters */);
	DispatchCommand::SetupCommandWord(/* parameters */);
}

// CgsDispatcherCommands.cpp:873
void CgsGraphics::DrawRenderable::AddToBin(const Renderable *  lpRenderable, CgsGraphics::DispatchFrame *  lpDispatchFrame, bool  lbFlushAllConstants, int8_t  li8OpaqueList, int8_t  li8TransparentList, bool  lbFrustumTest, uint8_t  lu8TechniqueIndex, bool  lbRenderZOnly, uint8_t  lu8PreZList, uint8_t  lu8PreZTechniqueIndex, int32_t  liInstanceCount, uint8_t  lu8MeshExcludeBits) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:884
		uint16_t lu16NumQwForDirtyHeaders;

		// CgsDispatcherCommands.cpp:886
		const uint32_t luNumQwForDispatchThreadInfo;

		// CgsDispatcherCommands.cpp:890
		const uint32_t luNumConstantsRequired;

		// CgsDispatcherCommands.cpp:895
		DrawRenderable * lpCmd;

		// CgsDispatcherCommands.cpp:907
		Vector4 * lpAllocatedHeaderSpace;

		// CgsDispatcherCommands.cpp:909
		DrawRenderableDispatchThreadInfo * lpDrawRenderableInfo;

	}
	ShaderConstantTable::GetNumQWForDirtyHeaders(/* parameters */);
	DispatchFrame::GetBin(/* parameters */);
	DispatchBin::AllocateCommand(/* parameters */);
	DispatchBin::Reserve(/* parameters */);
	{
		// CgsDispatcherCommands.cpp:903
		uintptr_t luAddress;

	}
	DispatchCommand::GetCustomSection(/* parameters */);
	DispatchCommand::SetupCommandWord(/* parameters */);
}

// CgsDispatcherCommands.cpp:1833
void CgsGraphics::DrawRenderableMesh::AddToBin(const RenderableMesh *  lpMesh, CgsGraphics::DispatchBin *  lpBin, CgsGraphics::DispatchObjectContext *  lpDispatchObjectContext, uint8_t  lu8TechniqueIndex, uint8_t  lu8InstanceCount, const CgsGraphics::DrawRenderableDispatchThreadInfo *  lpDispatchThreadInfoParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:1840
		CgsGraphics::DispatchObjectContext_JobState *const lpJobState;

		// CgsDispatcherCommands.cpp:1842
		const MaterialTechnique * lpMaterialTechnique;

		// CgsDispatcherCommands.cpp:1852
		Vector4 ** lpMemoryForShaderConstantPointers;

		// CgsDispatcherCommands.cpp:1856
		const uint32_t lNumExternalSamplers;

		// CgsDispatcherCommands.cpp:1857
		const uint32_t luSizeOfExternalTextureStateQuadWords;

		// CgsDispatcherCommands.cpp:1859
		DrawRenderableMesh * lpCmd;

		// CgsDispatcherCommands.cpp:2030
		uint32_t lu32TechniqueAndInstanceCount;

	}
	MaterialAssembly::GetMaterial(/* parameters */);
	DispatchBin::AllocateCommand(/* parameters */);
	GetDispatchBinExternalTextureStateInQuadWords(/* parameters */);
	DispatchBin::Reserve(/* parameters */);
	DispatchCommand::SetupCommandWord(/* parameters */);
	DispatchCommand::GetCustomSection(/* parameters */);
}

// CgsDispatcherCommands.cpp:86
void CgsDispatchCommands_RelocatePointer<RenderableMesh**>(const RenderableMesh **&  lpPointer, intptr_t  luOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDispatcherCommands.cpp:1291
void CgsGraphics::DrawRenderable::Interpret(DispatchCommand *  lpCommandParam, CgsGraphics::DispatchFrame *  lpMeshOnlyDispatchFrame, void *  lpDispatchObjectContextVoid, float32_t  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:1296
		const DispatchCommand * lpCommand;

		// CgsDispatcherCommands.cpp:1302
		CgsGraphics::DispatchObjectContext *const lpDispatchObjectContext;

		// CgsDispatcherCommands.cpp:1303
		CgsGraphics::DispatchObjectContext_JobState *const lpJobState;

		// CgsDispatcherCommands.cpp:1306
		const DrawRenderable * lpCmd;

		// CgsDispatcherCommands.cpp:1341
		const CgsGraphics::DrawRenderableDispatchThreadInfo * lpDrawRenderableInfo;

		// CgsDispatcherCommands.cpp:1355
		const Renderable * lpRenderable;

		// CgsDispatcherCommands.cpp:1361
		uintptr_t luRenderableResourceStart;

		// CgsDispatcherCommands.cpp:1362
		uintptr_t luRenderableResourceEnd;

		// CgsDispatcherCommands.cpp:1363
		size_t luRenderableResourceSize;

		// CgsDispatcherCommands.cpp:1365
		bool lbRenderableResourceFitsLocally;

		// CgsDispatcherCommands.cpp:1407
		const uint32_t luPackedData;

		// CgsDispatcherCommands.cpp:1408
		uint8_t lu8OpaqueList;

		// CgsDispatcherCommands.cpp:1409
		uint8_t lu8TransparentList;

		// CgsDispatcherCommands.cpp:1410
		const uint8_t lu8TechniqueIndex;

		// CgsDispatcherCommands.cpp:1411
		uint8_t lbFrustumTest;

		// CgsDispatcherCommands.cpp:1417
		const rw::math::vpu::Vector4 * lpBinData;

		// CgsDispatcherCommands.cpp:1422
		CgsGraphics::DispatchBin * lpDispatchBin;

		// CgsDispatcherCommands.cpp:1424
		const rw::math::vpu::Matrix44Affine * lpWorldMatrix;

		// CgsDispatcherCommands.cpp:1425
		const rw::math::vpu::Matrix44 * lpViewProjectionMatrix;

		// CgsDispatcherCommands.cpp:1449
		Matrix44 lWorldViewProjectionMatrix;

		// CgsDispatcherCommands.cpp:1451
		const uint32_t luNumMeshes;

		// CgsDispatcherCommands.cpp:1453
		const uint32_t KI_RENDERABLE_FRUSTUM_TEST_THRESHOLD;

		// CgsDispatcherCommands.cpp:1475
		uint32_t lu32MeshId;

		// CgsDispatcherCommands.cpp:1476
		Matrix44 lBoxToClipSpace;

	}
	DispatchCommand::GetCustomSection(/* parameters */);
	ReceiveDirtyConstantsFromDispatchBinIntoContext(/* parameters */);
	{
	}
	DispatchFrame::GetBin(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	{
		// CgsDispatcherCommands.cpp:1479
		RenderableMesh * lpRenderableMesh;

		// CgsDispatcherCommands.cpp:1524
		const CgsGraphics::MaterialAssembly * lpMaterialAssembly;

		// CgsDispatcherCommands.cpp:1536
		int32_t liTechniqueCount;

		// CgsDispatcherCommands.cpp:1537
		int32_t liMaxTechniqueIndex;

		// CgsDispatcherCommands.cpp:1538
		int32_t liTechniqueIndex;

		// CgsDispatcherCommands.cpp:1565
		MaterialTechnique * lpMaterialTechnique;

		// CgsDispatcherCommands.cpp:1607
		uint32_t luListToUse;

		// CgsDispatcherCommands.cpp:1608
		DispatchList * lpDispatchList;

		// CgsDispatcherCommands.cpp:1610
		const uint32_t KU_MAX_QUADWORDS_PER_MESH;

		// CgsDispatcherCommands.cpp:1619
		bool lbSuccess;

		// CgsDispatcherCommands.cpp:1642
		DispatchPacket * lpPacketStart;

		// CgsDispatcherCommands.cpp:1650
		uint64_t lu64FragmentHash;

		// CgsDispatcherCommands.cpp:1651
		uint64_t lu64VertexHash;

		// CgsDispatcherCommands.cpp:1652
		uint64_t lu64MaterialHash;

		// CgsDispatcherCommands.cpp:1655
		uint64_t luShaderTechniquePriority;

		// CgsDispatcherCommands.cpp:1658
		SortKey lKey;

		rw::core::stdc::Min(/* parameters */);
		MaterialAssembly::GetMaterial(/* parameters */);
		DispatchFrame::GetList(/* parameters */);
		DispatchList::ReserveKey(/* parameters */);
		DispatchBin::Reserve(/* parameters */);
		DispatchBin::BeginPacket(/* parameters */);
		DispatchBin::EndPacket(/* parameters */);
		DispatchList::Submit(/* parameters */);
		{
			// CgsDispatcherCommands.cpp:1713
			int32_t liPreZTechniqueIndex;

			// CgsDispatcherCommands.cpp:1719
			const const rw::math::vpu::Vector4 & lCentrePos;

			// CgsDispatcherCommands.cpp:1725
			MaterialTechnique * lpPreZMaterialTechnique;

			// CgsDispatcherCommands.cpp:1743
			uint32_t luListToUse;

			// CgsDispatcherCommands.cpp:1745
			DispatchList * lpDispatchList;

			// CgsDispatcherCommands.cpp:1761
			DispatchPacket * lpPreZPacketStart;

			// CgsDispatcherCommands.cpp:1767
			uint64_t lu64FragmentHash;

			// CgsDispatcherCommands.cpp:1768
			uint64_t lu64VertexHash;

			// CgsDispatcherCommands.cpp:1769
			uint64_t lu64MaterialHash;

			// CgsDispatcherCommands.cpp:1771
			SortKey lPreZKey;

			DispatchList::Submit(/* parameters */);
		}
	}
	{
		// CgsDispatcherCommands.cpp:1661
		const const rw::math::vpu::Vector4 & lCentrePos;

		// CgsDispatcherCommands.cpp:1663
		uint64_t lu64AlphaTestHash;

		// CgsDispatcherCommands.cpp:1664
		int32_t liDepth;

		// CgsDispatcherCommands.cpp:1665
		uint64_t lu64DepthHash;

		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Matrix44::GetRow(/* parameters */);
		rw::math::fpu::Clamp<int>(/* parameters */);
	}
	{
		// CgsDispatcherCommands.cpp:1644
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	PackedOobb::MultiplyByMatrix(/* parameters */);
	FrustumTest(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::GetVector4_One(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Abs(/* parameters */);
	rw::math::vpu::Abs(/* parameters */);
	rw::math::vpu::Abs(/* parameters */);
	rw::math::vpu::Abs(/* parameters */);
	rw::math::vpu::Abs(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Abs(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Or(/* parameters */);
	rw::math::vpu::CompLessThan(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::operator!=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::core::stdc::Min(/* parameters */);
	rw::math::vpu::operator><VectorAxisW>(/* parameters */);
	rw::math::vpu::Matrix44::GetRow(/* parameters */);
	MaterialAssembly::GetMaterial(/* parameters */);
	DispatchFrame::GetList(/* parameters */);
	DispatchList::ReserveKey(/* parameters */);
	DispatchBin::Reserve(/* parameters */);
	DispatchBin::BeginPacket(/* parameters */);
	DispatchBin::EndPacket(/* parameters */);
	DispatchList::ReserveKey(/* parameters */);
	rw::math::fpu::Min<int>(/* parameters */);
	{
		// CgsDispatcherCommands.cpp:1457
		Vector4 lSphereCentre;

		// CgsDispatcherCommands.cpp:1458
		VecFloat lSphereRadius;

		// CgsDispatcherCommands.cpp:1460
		Matrix44 lBoxToClipSpace;

		rw::math::vpu::GetVecFloat_One(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		VecFloat<VectorAxisW>(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		FrustumTest_AnyOutside(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Matrix44::SetW(/* parameters */);
		VecFloat<VectorAxisW>(/* parameters */);
		VecFloat<VectorAxisW>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		VecFloat<VectorAxisW>(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		VecFloat<VectorAxisW>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Abs(/* parameters */);
		rw::math::vpu::Abs(/* parameters */);
		rw::math::vpu::Abs(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Abs(/* parameters */);
		rw::math::vpu::Abs(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::CompLessThan(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Or(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
		rw::math::vpu::operator!=(/* parameters */);
	}
	{
		// CgsDispatcherCommands.cpp:1763
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDispatcherCommands.cpp:2802
void CgsGraphics::DispatchPacketInterpreter::InterpretObjectToMesh(DispatchPacket *  pPacket, CgsGraphics::DispatchFrame *  lpDispatchFrame, void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:2806
		DispatchCommand * pCommand;

	}
}

// CgsDispatcherCommands.cpp:2969
void ObjectToMeshJob::ExecuteImplementation(ObjectToMeshJobInfo *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:2988
		DispatchObjectContext_JobState lJobState;

		// CgsDispatcherCommands.cpp:2993
		DispatchObjectContext lLocalDispatchContext;

		// CgsDispatcherCommands.cpp:3008
		DispatchList * lpaLocalOutputDispatchLists;

		// CgsDispatcherCommands.cpp:3037
		SortKeyBlock * lpCurrentKeyBlock;

		// CgsDispatcherCommands.cpp:3039
		int32_t liCurrentBaseIndex;

	}
	DispatchObjectContext_JobState(/* parameters */);
	ShaderTechnique(/* parameters */);
	CgsGraphics::DispatchBin::Reserve(/* parameters */);
	CgsGraphics::DispatchList::GetFirstKeyBlock(/* parameters */);
	{
		// CgsDispatcherCommands.cpp:3066
		int32_t liLocalStartIndex;

		// CgsDispatcherCommands.cpp:3067
		int32_t liLocalEndIndex;

		rw::core::stdc::Max(/* parameters */);
		rw::core::stdc::Max(/* parameters */);
		rw::core::stdc::Min(/* parameters */);
	}
}

// CgsDispatcherCommands.cpp:525
// CgsDispatcherCommands.cpp:526
// CgsDispatcherCommands.cpp:527
// CgsDispatcherCommands.cpp:528
// CgsDispatcherCommands.cpp:529
// CgsDispatcherCommands.cpp:530
// CgsDispatcherCommands.cpp:532
// CgsDispatcherCommands.cpp:533
// CgsDispatcherCommands.cpp:531
// CgsDispatcherCommands.cpp:163
extern const uint32_t KU_MAX_OUTPUT_DISPATCH_LISTS = 26;

// CgsDispatcherCommands.cpp:164
extern const uint32_t KU_MAX_MESHES_PER_RENDERABLE = 256;

// CgsDispatcherCommands.cpp:165
extern const uint32_t KU_MAX_RENDERABLE_PACKET_LENGTH = 256;

// CgsDispatcherCommands.cpp:167
extern const uint32_t KU_LOCAL_RENDERABLE_RESOURCE_QUADWORD_MAX = 1024;

// CgsDispatcherCommands.cpp:170
extern const uint32_t KU_MAX_INPUT_KEYS = 256;

// CgsDispatcherCommands.cpp:245
extern const int MAX_TECHNIQUES = 8;

// CgsDispatcherCommands.cpp:287
extern const int KU_MAX_SAMPLERS = 16;

