struct _CGprogram;

struct _CGparameter;

void CgsResource::KdTreeResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::KdTreeResourceType::DeSerialise(void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::KdTreeResourceType::GetImportPointer(const void *  lpResource, RwUInt32  luImportIndex, RwUInt32 *  lpuOutOffset, const void **  lppOutResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::KdTreeResourceType::GetImportCount(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ClusteredMeshResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ClusteredMeshResourceType::DeSerialise(void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ClusteredMeshResourceType::GetImportPointer(const void *  lpResource, RwUInt32  luImportIndex, RwUInt32 *  lpuOutOffset, const void **  lppOutResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ClusteredMeshResourceType::GetImportCount(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::MaterialResourceType::GetDebugResourceCategory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwTextureStateResourceType::GetDebugResourceCategory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::MaterialTechniqueResourceType::GetDebugResourceCategory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwMaterialCRC32ResourceType::GetDebugResourceCategory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::MaterialResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::MaterialResourceType::GetCPUShaderConstantsSerialisedResourceDescriptorSize(ShaderConstantsCPU *  lpShaderConstants, uint32_t  luCurrentSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMaterialResourceType.cpp:166
		uint32_t lTotalSize;

	}
}

void CgsResource::MaterialResourceType::DeSerialise(void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ModelResourceType::GetDebugResourceCategory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ModelResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ModelResourceType::DeSerialise(void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ModelResourceType::GetImportCount(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwColourCubeResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwColourCubeResourceType::DeSerialise(void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwColourCubeResourceType::GetImportCount(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwColourCubeResourceType::GetImportPointer(const void *  lpResource, uint32_t  luImportIndex, uint32_t *  lpuOutOffset, const void **  lppOutResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwRenderableResourceType::GetDebugResourceCategory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwVertexDescResourceType::GetDebugResourceCategory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwRenderableResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwRenderableResourceType::DeSerialise(void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwRenderableResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwRenderableResourceType::CountNumSubMaterialVertexDescriptorImports(const Renderable *  lpRenderable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRwRenderableResourceType.cpp:1180
		uint32_t luNumSubMaterialResourceDescriptors;

		{
			// CgsRwRenderableResourceType.cpp:1181
			uint32_t luI;

			{
				// CgsRwRenderableResourceType.cpp:1183
				RenderableMesh * lpMesh;

			}
		}
	}
}

void CgsResource::RwRenderableResourceType::GetImportCount(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRwRenderableResourceType.cpp:895
		const Renderable * lpRenderable;

	}
}

void CgsResource::RwRenderableResourceType::GetImportPointer(const void *  lpResource, RwUInt32  luImportIndex, RwUInt32 *  lpuOutOffset, const void **  lppOutResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwRenderableResourceType::FindSubMaterialVertDescImportMesh(const Renderable *  lpRenderable, uint32_t  luVdImportIndex, const uint32_t &  luMeshIndexOut, const uint32_t &  luMeshVdIndexOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRwRenderableResourceType.cpp:1212
		RenderableMesh * lpImportMesh;

		// CgsRwRenderableResourceType.cpp:1213
		uint32_t luCurrentMeshStartIndex;

		{
			// CgsRwRenderableResourceType.cpp:1215
			uint32_t luI;

		}
	}
	{
		// CgsRwRenderableResourceType.cpp:1217
		RenderableMesh * lpMesh;

	}
}

void CgsGraphics::MaterialAssembly::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MaterialAssembly::GetMaterial(uint32_t  lnIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwRenderableResourceType::DebugValidate(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRwRenderableResourceType.cpp:1257
		const Renderable * lpRenderable;

		// CgsRwRenderableResourceType.cpp:1258
		uint32_t lu32MeshId;

	}
	{
		// CgsRwRenderableResourceType.cpp:1263
		const RenderableMesh * lpRenderableMesh;

		// CgsRwRenderableResourceType.cpp:1264
		const CgsGraphics::MaterialAssembly * lpMaterialAssembly;

	}
	CgsGraphics::MaterialAssembly::GetLength(/* parameters */);
	CgsGraphics::MaterialAssembly::GetMaterial(/* parameters */);
}

void CgsResource::RwRasterResourceType::GetDebugResourceCategory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::MaterialTechniqueResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::RGBA8(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::GetBlendEnable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::GetAlphaTestEnable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderTechnique::GetVertexProgramBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderTechnique::GetPixelProgramBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderTechnique::GetExternalObjectVertexShaderConstants() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderTechnique::GetExternalGlobalVertexShaderConstants() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void MaterialTechnique::GetNameHash() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderTechnique::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::MaterialTechniqueResourceType::PostFixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMaterialTechniqueResourceType.cpp:263
		MaterialTechnique * lpMaterial;

		// CgsMaterialTechniqueResourceType.cpp:269
		Parameters lBlendParameters;

		// CgsMaterialTechniqueResourceType.cpp:280
		const ProgramBuffer * lpVertexProgramBuffer;

		// CgsMaterialTechniqueResourceType.cpp:281
		const ProgramBuffer * lpPixelProgramBuffer;

		// CgsMaterialTechniqueResourceType.cpp:293
		uint32_t lu32MaterialNameCRC32;

		// CgsMaterialTechniqueResourceType.cpp:294
		uint32_t lu32FragmentCRC32;

		// CgsMaterialTechniqueResourceType.cpp:295
		uint32_t lu32VertexCRC32;

		// CgsMaterialTechniqueResourceType.cpp:303
		uint32_t luShaderTechniquePriority;

	}
	renderengine::BlendState::Parameters::Parameters(/* parameters */);
	CgsGraphics::ShaderTechnique::GetVertexProgramBuffer(/* parameters */);
	CgsGraphics::ShaderTechnique::GetPixelProgramBuffer(/* parameters */);
}

void CgsResource::MaterialTechniqueResourceType::GetImportCount(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::MaterialTechniqueResourceType::GetImportPointer(const void *  lpResource, RwUInt32  luImportIndex, RwUInt32 *  lpuOutOffset, const void **  lppOutResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwMaterialCRC32ResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwMaterialCRC32ResourceType::DeSerialise(void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwMaterialCRC32ResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwRasterResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwRasterResourceType::DeSerialise(void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwRasterResourceType::GetImportCount(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwRasterResourceType::GetImportPointer(const void *  lpResource, uint32_t  luImportIndex, uint32_t *  lpuOutOffset, const void **  lppOutResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwVertexDescResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwVertexDescResourceType::DeSerialise(void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwVertexDescResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRwVertexDescResourceTypePS3.cpp:257
		VertexDescriptor * lpVertexDescPtr;

	}
}

void CgsResource::MaterialStateResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::MaterialStateResourceType::DeSerialise(void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::MaterialStateResourceType::GetImportCount(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::MaterialStateResourceType::GetImportPointer(const void *  lpResource, RwUInt32  luImportIndex, RwUInt32 *  lpuOutOffset, const void **  lppOutResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwShaderParameterResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwShaderParameterResourceType::DeSerialise(void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwShaderProgramBufferResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwShaderProgramBufferResourceType::DeSerialise(void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwShaderProgramBufferResourceType::PostFixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRwShaderProgramBufferResourceTypePS3.cpp:304
		ProgramBuffer * lpShaderProgramBuffer;

	}
}

void CgsResource::RwShaderProgramBufferResourceType::GetImportCount(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwShaderProgramBufferResourceType::GetImportPointer(const void *  lpResource, RwUInt32  luImportIndex, RwUInt32 *  lpuOutOffset, const void **  lppOutResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwTextureStateResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwTextureStateResourceType::DeSerialise(void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwTextureStateResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwTextureStateResourceType::GetImportCount(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwTextureStateResourceType::GetImportPointer(const void *  lpResource, RwUInt32  luImportIndex, RwUInt32 *  lpuOutOffset, const void **  lppOutResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRwTextureStateResourceTypePS3.cpp:322
		TextureState * lpTextureState;

	}
}

void CgsDev::StrStream::StrStream(char *  lpcCharBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::StrStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwTextureStateResourceType::DebugValidate(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRwTextureStateResourceTypePS3.cpp:339
		const TextureState * lpTextureState;

	}
	{
		// CgsRwTextureStateResourceTypePS3.cpp:347
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::ResourceHandle::ResourceHandle(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::Construct(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::CgsHash::CalculateHash(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void __static_initialization_and_destruction_0(int  __initialize_p, int  __priority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

void rw::graphics::postfx::ColourCube::EndianSwapFixup() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<std::uint8_t>(const uint8_t *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const uint32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::MemAddBasePtr<std::uint8_t, rw::graphics::postfx::ColourCube>(uint8_t *  ptr, ColourCube *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwColourCubeResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRwColourCubeResourceType.cpp:182
		ColourCube * lpColourCube;

		rw::graphics::postfx::ColourCube::EndianSwapFixup(/* parameters */);
	}
}

void CgsResource::RwMaterialCRC32ResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<rw::collision::Volume::VTable>(const rw::collision::Volume::VTable *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const float32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwapArray<float>(float *, uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::MaterialResourceType::GetShaderConstantSerialisedResourceDescriptorSize(ShaderConstantsInternal *  lpShaderConstants, uint32_t  luCurrentSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMaterialResourceType.cpp:132
		uint32_t lIndex;

		// CgsMaterialResourceType.cpp:133
		uint32_t lTotalSize;

		{
			// CgsMaterialResourceType.cpp:142
			uint32_t lu32AlignedSize;

			// CgsMaterialResourceType.cpp:143
			uint32_t lu32AlignedOffset;

		}
	}
}

void CgsResource::ModelResourceType::GetImportPointer(const void *  lpResource, RwUInt32  luImportIndex, RwUInt32 *  lpuOutOffset, const void **  lppOutResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelResourceType.cpp:296
		const Model * lpModel;

		{
			// CgsModelResourceType.cpp:301
			uint32_t luRenderableArrayOffset;

		}
	}
}

void rw::EndianSwap(const uint16_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwVertexDescResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRwVertexDescResourceTypePS3.cpp:210
		VertexDescriptor * lpVertexDescPtr;

		{
			// CgsRwVertexDescResourceTypePS3.cpp:221
			uint32_t i;

		}
	}
}

void CgsResource::RwTextureStateResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::GetType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::GetFlags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::GetGraphicsSystemResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<6u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::GetGraphicsLocalResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::shaderpatch::ParameterOffsetTable::EndianSwapFixup() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shaderpatch.h:298
		uint32_t size;

		// shaderpatch.h:300
		uint32_t numValues;

	}
}

void rw::EndianSwapArray<std::uint32_t>(uint32_t *, uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::shaderpatch::ParameterOffsetTable::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwShaderProgramBufferResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRwShaderProgramBufferResourceTypePS3.cpp:258
		ProgramBuffer * lpShaderProgramBuffer;

	}
}

void rw::Resource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::CollisionMeshData::GetVolume() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<rw::collision::Aggregate>(const rw::collision::Aggregate *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<rw::collision::Aggregate>(rw::collision::Aggregate *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<rw::collision::Aggregate>(const Aggregate *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<rw::collision::Aggregate>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ClusteredMeshResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsClusteredMeshResourceType.cpp:390
		rw::core::arena::ArenaIterator * lpIter;

		// CgsClusteredMeshResourceType.cpp:392
		void * lpOffset;

		// CgsClusteredMeshResourceType.cpp:395
		CollisionMeshData * lpMeshData;

		// CgsClusteredMeshResourceType.cpp:400
		VolRef::Volume * volume;

		// CgsClusteredMeshResourceType.cpp:433
		uint8_t[360] mau8FakeIter;

	}
	rw::Resource::GetMemoryResource(/* parameters */);
}

void CgsGraphics::TextureScopeTable::GetTexturePurpose(const char *  lpPurposeName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTextureScopeTable.h:277
		uint32_t luPurpose;

	}
}

void CgsGraphics::TextureScopeTableElement::GetPurposeName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::MaterialResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMaterialResourceType.cpp:688
		uint8_t lIndex;

		// CgsMaterialResourceType.cpp:689
		MaterialAssembly * lpMaterial;

		// CgsMaterialResourceType.cpp:690
		uint8_t * lpBaseData;

	}
	CgsGraphics::TextureScopeTable::GetTexturePurpose(/* parameters */);
}

void rw::EndianSwap(const int32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Type::FixDownPointer<Renderable*>(Renderable *const*  lpPointer, const void *  lpBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Type::FixDownPointer<std::uint8_t>(const uint8_t *  lpPointer, const void *  lpBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Type::FixDownPointer<float32_t>(const float32_t *  lpPointer, const void *  lpBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ModelResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelResourceType.cpp:179
		void * lpBase;

		// CgsModelResourceType.cpp:180
		Model * lpModel;

		{
			// CgsModelResourceType.cpp:183
			int32_t luI;

		}
		rw::Resource::GetMemoryResource(/* parameters */);
		Type::FixDownPointer<Renderable*>(/* parameters */);
	}
}

void CgsResource::MaterialTechniqueResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMaterialTechniqueResourceType.cpp:241
		MaterialTechnique * lpMaterial;

		// CgsMaterialTechniqueResourceType.cpp:242
		uint8_t * lpBaseData;

	}
}

void rw::EndianSwap<renderengine::BlendState>(const BlendState *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<renderengine::DepthStencilState>(const DepthStencilState *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<renderengine::RasterizerState>(const RasterizerState *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::MaterialStateResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMaterialStateResourceTypePS3.cpp:183
		MaterialState * lpMaterialState;

		// CgsMaterialStateResourceTypePS3.cpp:184
		uint8_t * lpBaseData;

		// CgsMaterialStateResourceTypePS3.cpp:191
		DepthStencilState * lpDepthStencilState;

		// CgsMaterialStateResourceTypePS3.cpp:211
		RasterizerState * lpRasterizerState;

	}
}

void CgsResource::MaterialStateResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMaterialStateResourceTypePS3.cpp:245
		MaterialState * lpMaterialState;

		// CgsMaterialStateResourceTypePS3.cpp:246
		uint8_t * lpBaseData;

	}
}

void CgsResource::RwRasterResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRwRasterResourceTypePS3.cpp:209
		renderengine::Texture * lpTexture;

		// CgsRwRasterResourceTypePS3.cpp:211
		void * lpBufferBase;

		rw::Resource::GetGraphicsSystemResource(/* parameters */);
	}
	rw::Resource::GetGraphicsLocalResource(/* parameters */);
}

void ShaderParams::GetSemanticBlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ShaderParams::GetParameterBlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ShaderParams::SetParameterBlock(uint32_t *  lParamBlock) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ShaderParams::SetSemanticBlock(ParameterSemanticBlock *  lBlock) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Shader::ParameterSemanticBlock::GetCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Shader::ParameterSemanticBlock::GetSemantics() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ParameterSemanticWrapper::SetSemantic(ParameterSemantic *  lpSemantics) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwShaderParameterResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRwShaderParameterResourceTypePS3.cpp:315
		ShaderParams * lpShaderParams;

		// CgsRwShaderParameterResourceTypePS3.cpp:316
		uint8_t * lpBaseData;

		// CgsRwShaderParameterResourceTypePS3.cpp:319
		ParameterSemanticBlock * lpSemanticBlock;

		// CgsRwShaderParameterResourceTypePS3.cpp:320
		uint32_t * lpParamaterBlock;

		// CgsRwShaderParameterResourceTypePS3.cpp:325
		ParameterSemanticWrapper * lpSemanticBlockWrapper;

		// CgsRwShaderParameterResourceTypePS3.cpp:327
		uint32_t lNumSemantics;

		// CgsRwShaderParameterResourceTypePS3.cpp:328
		ParameterSemantic * lpSemanticParams;

		ShaderParams::GetSemanticBlock(/* parameters */);
		ShaderParams::SetParameterBlock(/* parameters */);
		ShaderParams::SetSemanticBlock(/* parameters */);
		Shader::ParameterSemanticBlock::GetCount(/* parameters */);
		ParameterSemanticWrapper::SetSemantic(/* parameters */);
		{
			// CgsRwShaderParameterResourceTypePS3.cpp:332
			uint32_t i;

		}
	}
}

void rw::EndianSwap<CgsGraphics::ShaderTechnique>(const CgsGraphics::ShaderTechnique *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsGraphics::MaterialState>(const MaterialState *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<ShaderConstantHandle>(const ShaderConstantHandle *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<std::int8_t>(const int8_t *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::MaterialTechniqueResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMaterialTechniqueResourceType.cpp:201
		MaterialTechnique * lpMaterial;

		// CgsMaterialTechniqueResourceType.cpp:202
		uint8_t * lpBaseData;

	}
}

void rw::ResourceDescriptor::ResourceDescriptor(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<6u>::BaseResourceDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::BaseResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::~BaseResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<0u>::BaseResourceDescriptorType(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::BaseResourceDescriptor(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<0u>::~BaseResourceDescriptorType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~BaseResourceDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwTextureStateResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
}

void rw::graphics::postfx::ColourCube::GetParameters(const rw::graphics::postfx::ColourCube::Parameters &  parameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwColourCubeResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsRwColourCubeResourceType.cpp:80
	ResourceDescriptor & lSerialColourCubeDescriptor;

	{
		// CgsRwColourCubeResourceType.cpp:75
		ColourCube * lpColourCube;

		// CgsRwColourCubeResourceType.cpp:77
		rw::graphics::postfx::ColourCube::Parameters lColourCubeParameters;

		// CgsRwColourCubeResourceType.cpp:80
		ResourceDescriptor lSerialColourCubeDescriptor;

	}
	rw::graphics::postfx::ColourCube::GetParameters(/* parameters */);
}

void renderengine::IndexBuffer::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwRenderableResourceType::GetIndexBufferResourceDescriptor(const IndexBuffer *  lpIndexBufferPtr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsRwRenderableResourceType.cpp:802
	ResourceDescriptor & lSerialRasterDescriptor;

	{
		// CgsRwRenderableResourceType.cpp:800
		renderengine::IndexBuffer::Parameters IndexBufferParams;

		// CgsRwRenderableResourceType.cpp:802
		ResourceDescriptor lSerialRasterDescriptor;

	}
	renderengine::IndexBuffer::Parameters::Parameters(/* parameters */);
}

void renderengine::MeshHelper::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// meshHelper.h:123
		uint32_t i;

	}
}

void CgsResource::RwRenderableResourceType::GetMeshStateResourceDescriptor(const MeshHelper *  lpMeshStatePtr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsRwRenderableResourceType.cpp:825
	ResourceDescriptor & lSerialRasterDescriptor;

	{
		// CgsRwRenderableResourceType.cpp:822
		const MeshHelper * lpMeshStatePtrPS;

		// CgsRwRenderableResourceType.cpp:823
		renderengine::MeshHelper::Parameters meshParams;

		// CgsRwRenderableResourceType.cpp:825
		ResourceDescriptor lSerialRasterDescriptor;

		renderengine::MeshHelper::Parameters::Parameters(/* parameters */);
	}
}

void renderengine::VertexBuffer::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBuffer::Parameters::PS3GetFlags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBuffer::Parameters::PS3SetFlags(uint32_t  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwRenderableResourceType::GetVertexBufferResourceDescriptor(const VertexBuffer *  lpVertexBufferPtr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsRwRenderableResourceType.cpp:852
	ResourceDescriptor & lSerialRasterDescriptor;

	{
		// CgsRwRenderableResourceType.cpp:846
		renderengine::VertexBuffer::Parameters vertexBufferParams;

		// CgsRwRenderableResourceType.cpp:852
		ResourceDescriptor lSerialRasterDescriptor;

		renderengine::VertexBuffer::Parameters::Parameters(/* parameters */);
	}
	renderengine::VertexBuffer::Parameters::PS3SetFlags(/* parameters */);
}

void RenderableMesh::GetNumVertexBuffers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwRenderableResourceType::GetRenderableMeshResourceDescriptor(const RenderableMesh *  lpRenderableMesh) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsRwRenderableResourceType.cpp:874
	ResourceDescriptor & lSerialRasterDescriptor;

	{
		// CgsRwRenderableResourceType.cpp:874
		ResourceDescriptor lSerialRasterDescriptor;

	}
}

void CgsResource::RwMaterialCRC32ResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsRwMaterialCRC32ResourceTypePS3.cpp:78
	ResourceDescriptor & lSerialRasterDescriptor;

	{
		// CgsRwMaterialCRC32ResourceTypePS3.cpp:78
		ResourceDescriptor lSerialRasterDescriptor;

	}
}

void renderengine::Texture::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwRasterResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsRwRasterResourceTypePS3.cpp:112
	ResourceDescriptor & lSerialTextureDescriptor;

	{
		// CgsRwRasterResourceTypePS3.cpp:107
		renderengine::Texture * lpTexture;

		// CgsRwRasterResourceTypePS3.cpp:109
		renderengine::Texture::Parameters lTextureParameters;

		// CgsRwRasterResourceTypePS3.cpp:112
		ResourceDescriptor lSerialTextureDescriptor;

		renderengine::Texture::Parameters::Parameters(/* parameters */);
	}
}

void renderengine::VertexDescriptor::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vertexdescriptor.h:181
		uint32_t n;

	}
}

void CgsResource::RwVertexDescResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsRwVertexDescResourceTypePS3.cpp:84
	ResourceDescriptor & lSerialRasterDescriptor;

	{
		// CgsRwVertexDescResourceTypePS3.cpp:81
		const VertexDescriptor * lpVertDescPtr;

		// CgsRwVertexDescResourceTypePS3.cpp:82
		renderengine::VertexDescriptor::Parameters vertexDescriptorParams;

		// CgsRwVertexDescResourceTypePS3.cpp:84
		ResourceDescriptor lSerialRasterDescriptor;

	}
	renderengine::VertexDescriptor::Parameters::Parameters(/* parameters */);
}

void CgsResource::Type::ReBaseTechniqueFixDownAndCopy(void *  lpResource, const Resource &  lSource, const Resource &  lDest, const ResourceDescriptor &  lSize, int32_t  liMemType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::MemCpy(void *  lpDestination, const void *  lpSource, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ClusteredMeshResourceType::ReBase(void *  lpResource, const Resource &  lSource, const Resource &  lDest, const ResourceDescriptor &  lSize, int32_t  liMemType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Type::ReBaseTechniqueFixDownAndCopy(/* parameters */);
}

void Shader::ParameterSemanticBlock::GetDataSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<void>(const void *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<const char>(const const char *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ParameterSemanticWrapper::EndianSwap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<Shader::ParameterSemantic>(const ParameterSemantic *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ShaderParams::EndianSwap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<Shader::ParameterSemanticBlock>(const ParameterSemanticBlock *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<std::uint32_t>(const uint32_t *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwShaderParameterResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRwShaderParameterResourceTypePS3.cpp:266
		ShaderParams * lpShaderParams;

		// CgsRwShaderParameterResourceTypePS3.cpp:267
		uint8_t * lpBaseData;

		// CgsRwShaderParameterResourceTypePS3.cpp:270
		ParameterSemanticBlock * lpSemanticBlock;

		// CgsRwShaderParameterResourceTypePS3.cpp:271
		ParameterSemanticWrapper * lpSemanticBlockWrapper;

		// CgsRwShaderParameterResourceTypePS3.cpp:272
		uint32_t * lpParamaterBlock;

		// CgsRwShaderParameterResourceTypePS3.cpp:273
		uint32_t lDataSize;

		// CgsRwShaderParameterResourceTypePS3.cpp:279
		uint32_t lNumSemantics;

		// CgsRwShaderParameterResourceTypePS3.cpp:280
		ParameterSemantic * lpSemanticParams;

		ShaderParams::GetSemanticBlock(/* parameters */);
		ShaderParams::GetParameterBlock(/* parameters */);
		Shader::ParameterSemanticBlock::GetDataSize(/* parameters */);
		{
			// CgsRwShaderParameterResourceTypePS3.cpp:274
			uint32_t i;

		}
		Shader::ParameterSemanticBlock::GetCount(/* parameters */);
		{
			// CgsRwShaderParameterResourceTypePS3.cpp:282
			uint32_t i;

		}
		ShaderParams::SetParameterBlock(/* parameters */);
		ShaderParams::SetSemanticBlock(/* parameters */);
		ParameterSemanticWrapper::SetSemantic(/* parameters */);
	}
}

void rw::graphics::postfx::ColourCube::EndianSwapUnfix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::MemSubtractBasePtr<std::uint8_t, rw::graphics::postfx::ColourCube>(uint8_t *  ptr, ColourCube *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwColourCubeResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRwColourCubeResourceType.cpp:161
		ColourCube * lpColourCube;

		rw::graphics::postfx::ColourCube::EndianSwapUnfix(/* parameters */);
	}
}

void renderengine::shaderpatch::ParameterOffsetTable::EndianSwapUnfix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shaderpatch.h:287
		uint32_t numValues;

	}
}

void rw::EndianSwap<_CGprogram>(const _CGprogram *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwShaderProgramBufferResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRwShaderProgramBufferResourceTypePS3.cpp:193
		ProgramBuffer * lpShaderProgramBuffer;

	}
}

void rw::BaseResourceDescriptors<6u>::operator+=(const const BaseResourceDescriptors<6u> &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:197
		uint32_t i;

	}
}

void rw::BaseResourceDescriptor::operator+=(const const BaseResourceDescriptor &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::Align(const const BaseResourceDescriptor &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::SizeAlign(uint32_t  size, uint32_t  align) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ostypes.h:401
		const uint32_t alignMask;

	}
}

void CgsResource::RwShaderParameterResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsRwShaderParameterResourceTypePS3.cpp:143
	ResourceDescriptor & lSerialisedDescriptor;

	{
		// CgsRwShaderParameterResourceTypePS3.cpp:134
		ShaderParams * lpShaderParams;

		// CgsRwShaderParameterResourceTypePS3.cpp:135
		ParameterSemanticBlock * lpSemanticBlock;

		// CgsRwShaderParameterResourceTypePS3.cpp:140
		Shader::ParameterBlock::Parameters lParameters;

		// CgsRwShaderParameterResourceTypePS3.cpp:143
		ResourceDescriptor lSerialisedDescriptor;

		// CgsRwShaderParameterResourceTypePS3.cpp:145
		Shader::ParameterSemanticBlock::Parameters lSemParameters;

		// CgsRwShaderParameterResourceTypePS3.cpp:149
		const ParameterSemantic *const lpSemanticParams;

		// CgsRwShaderParameterResourceTypePS3.cpp:151
		unsigned int * lpSemanticNameSize;

		// CgsRwShaderParameterResourceTypePS3.cpp:152
		unsigned int * lpSemanticNameSpaceSize;

		// CgsRwShaderParameterResourceTypePS3.cpp:153
		uint32_t lSemanticNameTotal;

		// CgsRwShaderParameterResourceTypePS3.cpp:154
		uint32_t lSemanticNameSpaceTotal;

		ShaderParams::GetSemanticBlock(/* parameters */);
	}
	{
		// CgsRwShaderParameterResourceTypePS3.cpp:155
		uint32_t i;

	}
	Shader::ParameterSemanticBlock::GetSemantics(/* parameters */);
	rw::BaseResourceDescriptors<6u>::operator+=(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

void renderengine::ProgramVariableHandle::ProgramVariableHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderTechnique::GetInternalVertexShaderConstants() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderTechnique::GetInternalPixelShaderConstants() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderTechnique::GetConstantHashTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MaterialAssembly::GetVertexShaderConstants() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramVariableHandle::GetNumConstants() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramVariableHandle::GetConstantIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MaterialAssembly::GetPixelShaderConstants() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::MaterialResourceType::PostFixUpShaderConstants(void *  lpResource, ShaderConstantsInternal *  lpShaderConstants, bool  lbVertexOrPixel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMaterialResourceType.cpp:771
		uint8_t luIndex;

		// CgsMaterialResourceType.cpp:772
		uint8_t luIndex2;

		// CgsMaterialResourceType.cpp:773
		uint8_t luIndex3;

		// CgsMaterialResourceType.cpp:774
		uint8_t luNumShaderConstants;

		// CgsMaterialResourceType.cpp:775
		uint32_t luShaderConstantHash;

		// CgsMaterialResourceType.cpp:776
		const ProgramBuffer * lpProgramBuffer;

		// CgsMaterialResourceType.cpp:777
		ProgramVariableHandle lTempProgramVariableHandle;

		// CgsMaterialResourceType.cpp:778
		MaterialAssembly * lpMaterial;

		renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	}
	{
		// CgsMaterialResourceType.cpp:782
		MaterialTechnique * lpMaterialTechnique;

		// CgsMaterialResourceType.cpp:783
		CgsGraphics::ShaderTechnique * lpShaderTechnique;

		CgsGraphics::ShaderTechnique::GetVertexProgramBuffer(/* parameters */);
		{
			// CgsMaterialResourceType.cpp:806
			const char * lpcConstantName;

		}
	}
	CgsGraphics::MaterialAssembly::GetPixelShaderConstants(/* parameters */);
	CgsGraphics::ShaderTechnique::GetPixelProgramBuffer(/* parameters */);
}

void CgsGraphics::ShaderTechnique::GetSamplers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderTechnique::GetNumSamplers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MaterialAssembly::GetNumSamplers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::MaterialResourceType::PostFixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMaterialResourceType.cpp:730
		MaterialAssembly * lpMaterial;

		// CgsMaterialResourceType.cpp:731
		uint8_t luIndex;

		// CgsMaterialResourceType.cpp:733
		uint8_t liTextureIndex;

		// CgsMaterialResourceType.cpp:734
		int8_t liTextureIndex2;

	}
}

void rw::RwPtrSubtractOffset<rw::collision::Aggregate>(rw::collision::Aggregate *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwapArray<rw::collision::KDTree::BranchNode>(rw::collision::KDTree::BranchNode *, uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<rw::collision::KDTree::BranchNode>(rw::collision::KDTree::BranchNode *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<rw::collision::KDTree::BranchNode>(const rw::collision::KDTree::BranchNode *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<rw::collision::KDTree::BranchNode>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<rw::collision::KDTree::BranchNode>(const rw::collision::KDTree::BranchNode *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const AABBox &  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwapArray<std::uint16_t>(uint16_t *, uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwapArray<std::int32_t>(int32_t *, uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<rw::collision::KDTree>(KDTree *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<rw::collision::KDTree>(const KDTree *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<rw::collision::KDTree>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<std::uint32_t>(uint32_t *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<std::uint32_t>(const uint32_t *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<std::uint32_t>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<rw::collision::KDTree>(const KDTree *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ClusteredMeshResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsClusteredMeshResourceType.cpp:242
		CollisionMeshData * lpMeshData;

		// CgsClusteredMeshResourceType.cpp:244
		void * lpOffset;

		// CgsClusteredMeshResourceType.cpp:254
		VolRef::Volume * lpVolume;

		// CgsClusteredMeshResourceType.cpp:255
		rw::collision::VolumeType vType;

		// CgsClusteredMeshResourceType.cpp:269
		rw::collision::ClusteredMesh * clusteredMesh;

		// CgsClusteredMeshResourceType.cpp:276
		KDTree * kdtree;

		// CgsClusteredMeshResourceType.cpp:277
		SPU::HostPtr KdTreeDelta;

		// CgsClusteredMeshResourceType.cpp:293
		uint32_t i;

		// CgsClusteredMeshResourceType.cpp:326
		SPU::HostPtr ClusteredMeshDelta;

		// CgsClusteredMeshResourceType.cpp:354
		rw::collision::Aggregate * aggregate;

		rw::Resource::GetMemoryResource(/* parameters */);
	}
}

void CgsResource::KdTreeResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsKdTreeResourceType.cpp:313
		rw::core::arena::ArenaIterator * lpIter;

		// CgsKdTreeResourceType.cpp:315
		void * lpOffset;

		// CgsKdTreeResourceType.cpp:318
		VolRef::Volume * volume;

		// CgsKdTreeResourceType.cpp:338
		uint8_t[360] mau8FakeIter;

	}
}

void rw::BaseResourceDescriptorType<0u>::BaseResourceDescriptorType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::ResourceDescriptor(const const MemoryResourceDescriptor &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwShaderProgramBufferResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsRwShaderProgramBufferResourceTypePS3.cpp:83
	ResourceDescriptor & lSerialisedResDec;

	{
		// CgsRwShaderProgramBufferResourceTypePS3.cpp:83
		ResourceDescriptor lSerialisedResDec;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	}
}

void rw::EndianSwapArray<rw::math::vpu::Vector3>(Vector3 *, uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwapArray<rw::collision::TriangleKDTreeProcedural::Triangle>(rw::collision::TriangleKDTreeProcedural::Triangle *, uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<rw::collision::TriangleKDTreeProcedural::Triangle>(rw::collision::TriangleKDTreeProcedural::Triangle *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<rw::collision::TriangleKDTreeProcedural::Triangle>(const rw::collision::TriangleKDTreeProcedural::Triangle *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<rw::collision::TriangleKDTreeProcedural::Triangle>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<rw::math::vpu::Vector3>(Vector3 *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<rw::math::vpu::Vector3>(const rw::math::vpu::Vector3 *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<rw::math::vpu::Vector3>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<rw::collision::TriangleKDTreeProcedural::Triangle>(const rw::collision::TriangleKDTreeProcedural::Triangle *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<rw::math::vpu::Vector3>(const Vector3 *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::KdTreeResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsKdTreeResourceType.cpp:213
		void * lpOffset;

		// CgsKdTreeResourceType.cpp:216
		VolRef::Volume * lpVolume;

		// CgsKdTreeResourceType.cpp:217
		rw::collision::VolumeType vType;

		// CgsKdTreeResourceType.cpp:231
		TriangleKDTreeProcedural * triKDTree;

		// CgsKdTreeResourceType.cpp:238
		KDTree * kdtree;

		// CgsKdTreeResourceType.cpp:239
		SPU::HostPtr KdTreeDelta;

		// CgsKdTreeResourceType.cpp:256
		SPU::HostPtr delta;

		// CgsKdTreeResourceType.cpp:277
		rw::collision::Aggregate * aggregate;

		rw::Resource::GetMemoryResource(/* parameters */);
	}
}

void renderengine::Device::PS3AddressToOffset(void *  address) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// device.h:2268
		uint32_t offset;

		// device.h:2270
		int32_t result;

	}
}

void CgsResource::RwRasterResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRwRasterResourceTypePS3.cpp:234
		renderengine::Texture * lpTexture;

		// CgsRwRasterResourceTypePS3.cpp:238
		void * lpBufferBase;

	}
	rw::Resource::GetGraphicsSystemResource(/* parameters */);
	renderengine::Device::PS3AddressToOffset(/* parameters */);
	rw::Resource::GetGraphicsLocalResource(/* parameters */);
}

void CgsResource::Type::FixUpPointer<void>(const void *  lpPointer, const void *  lpBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void RenderableMesh::GetVertexBuffer(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void RenderableMesh::GetIndexBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwRenderableResourceType::FixUpRenderableMesh(RenderableMesh *  lpMesh, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRwRenderableResourceTypePS3.cpp:184
		uint8_t * lpBaseData;

		rw::Resource::GetMemoryResource(/* parameters */);
	}
	{
		// CgsRwRenderableResourceTypePS3.cpp:210
		IndexBuffer * lpIndexBuffer;

		{
			// CgsRwRenderableResourceTypePS3.cpp:196
			uint32_t i;

			{
				// CgsRwRenderableResourceTypePS3.cpp:199
				renderengine::VertexBuffer * lpVertexBuffer;

			}
			Type::FixUpPointer<void>(/* parameters */);
			renderengine::Device::PS3AddressToOffset(/* parameters */);
		}
		Type::FixUpPointer<void>(/* parameters */);
		renderengine::Device::PS3AddressToOffset(/* parameters */);
	}
}

void rw::collision::KDTree::GetNumBranchNodes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::GetMemoryResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::GetAlignment() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::GetAlignment() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::KdTreeResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsKdTreeResourceType.cpp:97
	ResourceDescriptor & lFinalDesc;

	{
		// CgsKdTreeResourceType.cpp:87
		VolRef::Volume * lpVol;

		// CgsKdTreeResourceType.cpp:88
		TriangleKDTreeProcedural * lpKdTree;

		// CgsKdTreeResourceType.cpp:89
		ResourceDescriptor lDesc;

		// CgsKdTreeResourceType.cpp:97
		ResourceDescriptor lFinalDesc;

	}
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetSize(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::BaseResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(/* parameters */);
	~BaseResourceDescriptors(/* parameters */);
}

void CgsResource::ClusteredMeshResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsClusteredMeshResourceType.cpp:100
	ResourceDescriptor & lFinalDesc;

	{
		// CgsClusteredMeshResourceType.cpp:83
		const CollisionMeshData * lpMeshData;

		// CgsClusteredMeshResourceType.cpp:86
		int32_t liSizeInBytes;

		// CgsClusteredMeshResourceType.cpp:88
		VolRef::Volume * lpVol;

		// CgsClusteredMeshResourceType.cpp:100
		ResourceDescriptor lFinalDesc;

		{
			// CgsClusteredMeshResourceType.cpp:93
			rw::collision::ClusteredMesh * lpClusteredMesh;

			// CgsClusteredMeshResourceType.cpp:94
			ResourceDescriptor lDesc;

			rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
			~ResourceDescriptor(/* parameters */);
			~BaseResourceDescriptors(/* parameters */);
		}
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	}
}

void CgsGraphics::MaterialAssembly::GetSamplers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::MaterialResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsMaterialResourceType.cpp:122
	ResourceDescriptor & lResourceDescriptior;

	{
		// CgsMaterialResourceType.cpp:99
		uint32_t luCurrSize;

		// CgsMaterialResourceType.cpp:100
		uint32_t luShaderConstantsTotal;

		// CgsMaterialResourceType.cpp:101
		MaterialAssembly * lpMaterial;

		// CgsMaterialResourceType.cpp:108
		int8_t lIndex;

		// CgsMaterialResourceType.cpp:122
		ResourceDescriptor lResourceDescriptior;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::BaseResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(/* parameters */);
	}
}

void CgsResource::ModelResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelResourceType.cpp:82
		uint32_t luSize;

		// CgsModelResourceType.cpp:83
		const Model * lpModel;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::BaseResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(/* parameters */);
	}
}

void CgsResource::RwRenderableResourceType::GetRenderableBasicResourceDescriptor(const Renderable *  lpRenderable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRwRenderableResourceType.cpp:738
		uint32_t luSize;

		alignsize(/* parameters */);
	}
	{
		// CgsRwRenderableResourceType.cpp:743
		Renderable::ObjectScopeTextureInfo * lpOstInfo;

		alignsize(/* parameters */);
		{
			// CgsRwRenderableResourceType.cpp:754
			uint32_t i;

		}
	}
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
}

void CgsResource::RwRenderableResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsRwRenderableResourceType.cpp:690
	ResourceDescriptor & lSerialResourceDescriptor;

	{
		// CgsRwRenderableResourceType.cpp:689
		const Renderable * lpRenderable;

		// CgsRwRenderableResourceType.cpp:690
		ResourceDescriptor lSerialResourceDescriptor;

		{
			// CgsRwRenderableResourceType.cpp:692
			uint32_t luI;

		}
	}
	{
		// CgsRwRenderableResourceType.cpp:694
		RenderableMesh * lpMesh;

		rw::BaseResourceDescriptors<6u>::operator+=(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptors<6u>::operator+=(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		{
			// CgsRwRenderableResourceType.cpp:701
			uint32_t luJ;

			rw::BaseResourceDescriptors<6u>::operator+=(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
	}
}

void CgsResource::RwRenderableResourceType::CalculateRenderableMeshOffset(const Renderable *  lpRenderable, uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRwRenderableResourceType.cpp:604
		uint32_t luOffset;

		// CgsRwRenderableResourceType.cpp:605
		uint32_t luRenderableMeshAlign;

		// CgsRwRenderableResourceType.cpp:607
		ResourceDescriptor lResDesc;

	}
	~ResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetAlignment(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetAlignment(/* parameters */);
	alignsize(/* parameters */);
	{
		// CgsRwRenderableResourceType.cpp:617
		uint32_t luI;

	}
	rw::BaseResourceDescriptor::GetAlignment(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	{
		// CgsRwRenderableResourceType.cpp:619
		RenderableMesh * lpMesh;

		~ResourceDescriptor(/* parameters */);
		rw::ResourceDescriptor::GetAlignment(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		rw::ResourceDescriptor::GetAlignment(/* parameters */);
		{
			// CgsRwRenderableResourceType.cpp:631
			uint32_t luJ;

		}
	}
	alignsize(/* parameters */);
	RenderableMesh::GetVertexBuffer(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetAlignment(/* parameters */);
}

void CgsResource::RwRenderableResourceType::GetDrawIndexParamResourceDescriptor(const DrawIndexedParameters *  lpDrawIndexParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsRwRenderableResourceType.cpp:779
	ResourceDescriptor & lSerialRasterDescriptor;

	{
		// CgsRwRenderableResourceType.cpp:779
		ResourceDescriptor lSerialRasterDescriptor;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	}
}

void CgsResource::MaterialTechniqueResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMaterialTechniqueResourceType.cpp:98
		const MaterialTechnique * lpMaterial;

		// CgsMaterialTechniqueResourceType.cpp:100
		uint32_t luSize;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::BaseResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(/* parameters */);
	}
}

void CgsResource::MaterialStateResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMaterialStateResourceTypePS3.cpp:80
		unsigned int luSize;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	}
}

void CgsResource::KdTreeResourceType::ReBase(void *  lpResource, const Resource &  lSource, const Resource &  lDest, const ResourceDescriptor &  lSize, int32_t  liMemType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Type::ReBaseTechniqueFixDownAndCopy(/* parameters */);
}

void CgsGraphics::Model::GetVersionNumber() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Type::FixUpPointer<Renderable*>(Renderable *const*  lpPointer, const void *  lpBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Type::FixUpPointer<std::uint8_t>(const uint8_t *  lpPointer, const void *  lpBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Type::FixUpPointer<float32_t>(const float32_t *  lpPointer, const void *  lpBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ModelResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelResourceType.cpp:215
		void * lpBase;

		// CgsModelResourceType.cpp:216
		Model * lpModel;

		rw::Resource::GetMemoryResource(/* parameters */);
		{
			// CgsModelResourceType.cpp:219
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsGraphics::Model::GetVersionNumber(/* parameters */);
		}
		Type::FixUpPointer<Renderable*>(/* parameters */);
	}
}

void RenderableMesh::GetNumVertexDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Model::GetNumRenderables() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Model::SetFlag(uint16_t  luFlag, bool  luValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ModelResourceType::PostFixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelResourceType.cpp:243
		Model * lpModel;

		// CgsModelResourceType.cpp:245
		bool lbUsesInstancingShader;

		{
			// CgsModelResourceType.cpp:247
			uint32_t luI;

			{
				// CgsModelResourceType.cpp:249
				Renderable * lpRenderable;

				// CgsModelResourceType.cpp:250
				const uint32_t num_meshes;

				{
					// CgsModelResourceType.cpp:252
					uint32_t lu32MeshId;

					{
						// CgsModelResourceType.cpp:254
						RenderableMesh * lpMesh;

						{
							// CgsModelResourceType.cpp:256
							CgsDev::StrStream lStrStream;

							CgsDev::StrStreamBase::operator<<(/* parameters */);
							CgsDev::StrStreamBase::operator<<(/* parameters */);
							CgsDev::StrStreamBase::operator<<(/* parameters */);
							RenderableMesh::GetNumVertexDescriptors(/* parameters */);
							CgsDev::StrStreamBase::operator<<(/* parameters */);
							CgsDev::StrStreamBase::operator<<(/* parameters */);
							CgsDev::StrStreamBase::operator<<(/* parameters */);
						}
					}
					CgsDev::StrStream::StrStream(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
				}
			}
		}
		CgsGraphics::Model::SetFlag(/* parameters */);
	}
}

void CgsResource::Type::FixUpPointer<Renderable::ObjectScopeTextureInfo>(const Renderable::ObjectScopeTextureInfo *  lpPointer, const void *  lpBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Type::FixUpPointer<std::int16_t>(const int16_t *  lpPointer, const void *  lpBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Type::FixUpPointer<renderengine::Texture*>(renderengine::Texture *const*  lpPointer, const void *  lpBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Type::FixUpPointer<char*>(char *const*  lpPointer, const void *  lpBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Type::FixUpPointer<char>(const char *  lpPointer, const void *  lpBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Type::FixUpPointer<RenderableMesh>(const RenderableMesh *  lpPointer, const void *  lpBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwRenderableResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRwRenderableResourceType.cpp:467
		Renderable * lpRenderable;

		// CgsRwRenderableResourceType.cpp:468
		uint8_t * lpBaseData;

	}
	{
		// CgsRwRenderableResourceType.cpp:501
		Renderable::ObjectScopeTextureInfo * lpOstInfo;

		Type::FixUpPointer<Renderable::ObjectScopeTextureInfo>(/* parameters */);
		{
			// CgsRwRenderableResourceType.cpp:506
			uint32_t i;

		}
	}
	{
		// CgsRwRenderableResourceType.cpp:513
		uint32_t luI;

	}
	{
		// CgsRwRenderableResourceType.cpp:491
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsRwRenderableResourceType.cpp:489
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

renderengine::PS3PIXELFORMAT_REMAP_MASK = -32768;

renderengine::PS3PIXELFORMAT_REMAPORDER_MASK = -2147483648;

renderengine::PS3VERTEXTYPE_NA = -1;

CgsDev::WarningSystem::Discipline::ALL = -1;

CgsDev::WarningSystem::Discipline::SOUND_DESIGN = -2147483648;

CgsDev::WarningSystem::Discipline::SOUND_ALL = -2147483648;

CgsDev::Message::ALL = -1;

EA::Thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

EA::Thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

EA::Thread::kThreadPriorityUnknown = -2147483648;

EA::Thread::kThreadPriorityMin = -128;

EA::Thread::kProcessorDefault = -1;

EA::Thread::kProcessorAny = -2;

rw::datacontainer::DEFAULTBATCHSIZE = -2147483648;

rw::math::fpu::TOP_BIT32 = -2147483648;

rw::math::fpu::NOT_TOP_BIT32 = 2147483647;

rw::math::fpu::TOP_BIT64 = -9223372036854775808;

rw::math::fpu::MIN_INT32 = -2147483648;

rw::math::fpu::MIN_FLOAT = [0, 128, 0, 0];

rw::math::fpu::MAX_FLOAT = [127, 127, 255, 255];

rw::math::fpu::SMALL_FLOAT = [55, 128, 0, 0];

rw::math::fpu::DEGREES_TO_RADIANS = [60, 142, 250, 53];

rw::math::fpu::RADIANS_TO_DEGREES = [66, 101, 46, 225];

rw::math::fpu::E = [64, 45, 248, 84];

rw::math::fpu::PI = [64, 73, 15, 219];

rw::math::fpu::TWO_PI = [64, 201, 15, 219];

rw::math::fpu::HALF_PI = [63, 201, 15, 219];

rw::math::fpu::QUARTER_PI = [63, 73, 15, 219];

rw::math::fpu::SQRT_PI = [63, 226, 223, 197];

rw::math::fpu::INV_PI = [62, 162, 249, 131];

rw::math::fpu::SQRT_2 = [63, 181, 4, 243];

rw::math::fpu::SQRT_HALF = [63, 53, 4, 243];

rw::math::fpu::SQRT_3 = [63, 221, 179, 215];

rw::math::fpu::ZERO_FLOAT = [0, 0, 0, 0];

rw::math::fpu::VECTOR_MIN_SLERP_ANGLE = [61, 178, 184, 195];

rw::math::fpu::MATRIX_MIN_SLERP_ANGLE = [61, 14, 250, 53];

rw::math::fpu::QUATERNION_SLERP_DOT_TOLERANCE = [63, 127, 190, 119];

rw::math::fpu::MINIMUM_RECIPROCAL = [0, 32, 0, 0];

rw::math::fpu::ONE_MINUS_EPSILON = [63, 127, 255, 254];

rw::math::fpu::TOLERANCE = [58, 131, 18, 111];

rw::collision::krGPFeatureSimplificationThreshold = [61, 76, 204, 205];

rw::collision::krGPMinimumAllowedClippingAngle = [58, 131, 18, 111];

rw::core::thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

rw::core::thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

rw::core::thread::kThreadPriorityUnknown = -2147483648;

rw::core::thread::kThreadPriorityMin = -128;

rw::core::thread::kProcessorDefault = -1;

rw::core::thread::kProcessorAny = -2;

