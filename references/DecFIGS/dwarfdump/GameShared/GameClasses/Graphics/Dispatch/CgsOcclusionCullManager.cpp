// CgsMaterialState.h:37
namespace CgsGraphics {
	// CgsOcclusionCullManager.cpp:40
	const float32_t KF_OCCLUSION_BOUNDING_BOX_RADIUS;

}

// CgsOcclusionCullManager.cpp:438
void CgsGraphics::OcclusionCullManager::BeginConditionalRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsOcclusionCullManager.cpp:461
void CgsGraphics::OcclusionCullManager::EndConditionalRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	shadow::Device::ResetShadowing(/* parameters */);
}

// CgsOcclusionCullManager.cpp:714
void CgsGraphics::OcclusionCullManager::RenderQueryList(uint32_t  luStartIndex, uint32_t  luNumToDispatch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsOcclusionCullManager.cpp:716
		bool sbTrivialAcceptAll;

		// CgsOcclusionCullManager.cpp:718
		uint32_t luEndIndex;

	}
	rw::core::stdc::Min(/* parameters */);
	{
		// CgsOcclusionCullManager.cpp:720
		uint32_t luI;

		{
			// CgsOcclusionCullManager.cpp:741
			int32_t liQueryIndex;

			cellGcmSetVertexProgramConstantsInline(/* parameters */);
		}
	}
}

// CgsOcclusionCullManager.cpp:486
void CgsGraphics::OcclusionCullManager::RenderOccludeeBoundingBox(const rw::math::vpu::Matrix44 *  lpWorldViewProjection, const rw::math::vpu::Matrix44 &  lBoxMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsOcclusionCullManager.cpp:500
		Matrix44 lBoxToClip;

		// CgsOcclusionCullManager.cpp:538
		int32_t liQueryIndex;

	}
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		// CgsOcclusionCullManager.cpp:505
		Vector4 I;

		// CgsOcclusionCullManager.cpp:506
		Vector4 J;

		// CgsOcclusionCullManager.cpp:507
		Vector4 K;

		// CgsOcclusionCullManager.cpp:508
		Vector4 T;

		// CgsOcclusionCullManager.cpp:511
		VecFloat lOffsetForMaximum;

		// CgsOcclusionCullManager.cpp:515
		MaskScalar lvIsOutsideNegative;

		// CgsOcclusionCullManager.cpp:516
		Vector4 lvNewResult;

		rw::math::vpu::operator-(/* parameters */);
	}
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Matrix44::GetRow(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::GetVector4_One(/* parameters */);
	rw::math::vpu::operator+<VectorAxisZ, VectorAxisW>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisZ, VectorAxisW>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisZ, VectorAxisW>(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisZ, VectorAxisW>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::CompLessThan(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::operator!=(/* parameters */);
}

// CgsOcclusionCullManager.cpp:673
void CgsGraphics::OcclusionCullManager::StoreOccludeeBoundingBox(const rw::math::vpu::Matrix44 *  lpWorldViewProjection, const rw::math::vpu::Matrix44 &  lBoxMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsOcclusionCullManager.cpp:681
		Matrix44 lBoxToClip;

		// CgsOcclusionCullManager.cpp:685
		Vector4 I;

		// CgsOcclusionCullManager.cpp:686
		Vector4 J;

		// CgsOcclusionCullManager.cpp:687
		Vector4 K;

		// CgsOcclusionCullManager.cpp:688
		Vector4 T;

		// CgsOcclusionCullManager.cpp:691
		VecFloat lOffsetForMaximum;

		// CgsOcclusionCullManager.cpp:695
		MaskScalar lvIsOutsideNegative;

		// CgsOcclusionCullManager.cpp:696
		Vector4 lvNewResult;

	}
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Matrix44::GetRow(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::GetVector4_One(/* parameters */);
	rw::math::vpu::operator+<VectorAxisZ, VectorAxisW>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisZ, VectorAxisW>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisZ, VectorAxisW>(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisZ, VectorAxisW>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::CompLessThan(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::operator==(/* parameters */);
	OcclusionQueryList::UnsetTrivialAcceptBit(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	OcclusionQueryList::SetTrivialAcceptBit(/* parameters */);
}

// CgsOcclusionCullManager.cpp:369
void CgsGraphics::OcclusionCullManager::EndQueries() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ImRenderer<CgsGraphics::BasicColouredVertex>::EndRendering(/* parameters */);
	ImRenderer<CgsGraphics::PositionOnlyVertex>::EndRendering(/* parameters */);
	{
		// CgsOcclusionCullManager.cpp:405
		uint32_t liNumMeshesVisible;

		// CgsOcclusionCullManager.cpp:406
		uint32_t liNumMeshesTrivialAccepted;

		{
			// CgsOcclusionCullManager.cpp:407
			int32_t liI;

		}
	}
	shadow::Device::ResetShadowing(/* parameters */);
	ImRenderer<CgsGraphics::PositionOnlyVertex>::EndRendering(/* parameters */);
}

// CgsOcclusionCullManager.cpp:280
void CgsGraphics::OcclusionCullManager::BeginQueries() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ImRenderer<CgsGraphics::BasicColouredVertex>::BeginRendering(/* parameters */);
	ImRenderer<CgsGraphics::PositionOnlyVertex>::BeginRendering(/* parameters */);
	ImRenderer<CgsGraphics::PositionOnlyVertex>::BeginRendering(/* parameters */);
	shadow::Device::SetVertexDescriptor(/* parameters */);
	cellGcmSetVertexDataArrayInline(/* parameters */);
	shadow::Device::SetResource(/* parameters */);
	shadow::Device::SetResource(/* parameters */);
}

// CgsOcclusionCullManager.cpp:62
void CgsGraphics::OcclusionCullManager::Construct(CgsGraphics::Im3dUntex *  lpIm3d, CgsGraphics::Im3dZOnly *  lpIm3dZOnly, rw::IResourceAllocator *  lpAllocator, uint32_t  luQueryListSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsOcclusionCullManager.cpp:89
		int32_t liCount;

		rw::math::vpu::GetVector4_Zero(/* parameters */);
	}
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	{
		// CgsOcclusionCullManager.cpp:165
		renderengine::VertexBuffer::Parameters lVertexBufferParams;

		// CgsOcclusionCullManager.cpp:169
		ResourceDescriptor vbResDesc;

		// CgsOcclusionCullManager.cpp:170
		Resource vbResource;

		// CgsOcclusionCullManager.cpp:183
		renderengine::VertexBuffer::BatchIterator batchIterator;

		// CgsOcclusionCullManager.cpp:189
		uint32_t batchSize;

		// CgsOcclusionCullManager.cpp:190
		StrideVertexIterator lStrideVertexIterator;

	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Matrix44::SetRow(/* parameters */);
	rw::math::vpu::Matrix44::SetRow(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	renderengine::VertexBuffer::Parameters::Parameters(/* parameters */);
	renderengine::VertexBuffer::Parameters::SetBufferSize(/* parameters */);
	renderengine::VertexBuffer::Parameters::SetType(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::StrideVertexIterator::RestartAtElementOffset(/* parameters */);
	{
		// CgsOcclusionCullManager.cpp:196
		void * lpWritePos;

		renderengine::StrideVertexIterator::Increment(/* parameters */);
	}
	~ResourceDescriptor(/* parameters */);
	{
		// CgsOcclusionCullManager.cpp:207
		renderengine::IndexBuffer::Parameters lIndexBufferParams;

		// CgsOcclusionCullManager.cpp:212
		ResourceDescriptor ibResDesc;

		// CgsOcclusionCullManager.cpp:213
		Resource ibResource;

		// CgsOcclusionCullManager.cpp:226
		renderengine::IndexBuffer::Locked lLockedBuffer;

		// CgsOcclusionCullManager.cpp:232
		uint16_t * lpu16DestIndices;

		renderengine::IndexBuffer::Parameters::SetType(/* parameters */);
		renderengine::IndexBuffer::Parameters::SetNumIndices(/* parameters */);
		renderengine::IndexBuffer::Parameters::SetDepth(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~BaseResourceDescriptors(/* parameters */);
	}
	renderengine::DrawIndexedParameters::SetPrimitiveType(/* parameters */);
	renderengine::DrawIndexedParameters::SetIndexCount(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	renderengine::DrawIndexedParameters::SetStartIndex(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

// CgsOcclusionCullManager.cpp:569
void CgsGraphics::OcclusionCullManager::DebugRenderOccludeeBoundingBox(const rw::math::vpu::Matrix44 &  lWorldViewProjection, const rw::math::vpu::Matrix44 &  lBoxMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsOcclusionCullManager.cpp:577
		Matrix44 lBoxToClip;

		// CgsOcclusionCullManager.cpp:603
		bool sbAlwaysFail;

		// CgsOcclusionCullManager.cpp:626
		int32_t liQueryIndex;

	}
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		// CgsOcclusionCullManager.cpp:582
		Vector4 I;

		// CgsOcclusionCullManager.cpp:583
		Vector4 J;

		// CgsOcclusionCullManager.cpp:584
		Vector4 K;

		// CgsOcclusionCullManager.cpp:585
		Vector4 T;

		// CgsOcclusionCullManager.cpp:588
		VecFloat lOffsetForMaximum;

		// CgsOcclusionCullManager.cpp:592
		MaskScalar lvIsOutsideNegative;

		// CgsOcclusionCullManager.cpp:593
		Vector4 lvNewResult;

		rw::math::vpu::Matrix44::GetRow(/* parameters */);
	}
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::GetVector4_One(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisZ, VectorAxisW>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisZ, VectorAxisW>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisZ, VectorAxisW>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisZ, VectorAxisW>(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::CompLessThan(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::operator!=(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	Im3dBase<CgsGraphics::PositionOnlyVertex>::SetTransform(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	Im3dBase<CgsGraphics::BasicColouredVertex>::SetTransform(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	ImRenderer<CgsGraphics::BasicColouredVertex>::Render(/* parameters */);
	BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
	renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(/* parameters */);
	renderengine::DrawParameters::SetPrimitiveType(/* parameters */);
	BeginBatch<CgsGraphics::BasicColouredVertex::VertexIterator>(/* parameters */);
	{
		BasicColouredVertex::VertexIterator::Write(/* parameters */);
	}
	EndBatch<CgsGraphics::BasicColouredVertex::VertexIterator>(/* parameters */);
	ImRenderer<CgsGraphics::PositionOnlyVertex>::Render(/* parameters */);
	BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
	renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(/* parameters */);
	renderengine::DrawParameters::SetPrimitiveType(/* parameters */);
	BeginBatch<CgsGraphics::PositionOnlyVertex::VertexIterator>(/* parameters */);
	{
		PositionOnlyVertex::VertexIterator::Write(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
	}
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	Im3dBase<CgsGraphics::PositionOnlyVertex>::SetTransform(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
	}
	{
	}
	{
	}
}

