struct _CGprogram;

struct _CGparameter;

struct PB_INSTANCE;

struct jpeg_comp_master;

struct jpeg_c_main_controller;

struct jpeg_c_prep_controller;

struct jpeg_c_coef_controller;

struct jpeg_marker_writer;

struct jpeg_color_converter;

struct jpeg_downsampler;

struct jpeg_forward_dct;

struct jpeg_entropy_encoder;

struct jvirt_sarray_control;

struct jvirt_barray_control;

void EA::Allocator::ICoreAllocator::~ICoreAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Allocator::ICoreAllocator::~ICoreAllocator(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void cellGcmSetVertexProgramParameterBlockInline(None, None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
	}
}

void CgsBlendStateFactory::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsBlendStateFactory::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDepthStencilStateFactory::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDepthStencilStateFactory::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRasterizerStateFactory::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRasterizerStateFactory::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::SPrintf(char *  lpcDest, unsigned int  luBytes, const char *  lpcFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:106
		va_list lArgument;

		// CgsStringUtils.h:107
		int32_t lNumBytesCopied;

	}
}

void UVOffsetAnimationShader::GetNumConstantInstances() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void UVOffsetAnimationShader::OnAttach(const CgsGraphics::MaterialAssembly *  lMaterial) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICPUShader::Attach(const CgsGraphics::MaterialAssembly *  lMaterial) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::PS3SetVertexProgram(const renderengine::ProgramBuffer *  vertexProgram) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::AllocVertices(uint32_t  luNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1326
		uint32_t luNewWritePos;

		{
			// CgsImRenderBuffer.h:1335
			Im3dVertex * lpVertexPtr;

			{
				// CgsImRenderBuffer.h:1334
				uintptr_t luAddress;

			}
		}
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocVertices(uint32_t  luNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1326
		uint32_t luNewWritePos;

		{
			// CgsImRenderBuffer.h:1335
			ImCommandBatchTransformTextureBlendRender::Im2dVertex * lpVertexPtr;

			{
				// CgsImRenderBuffer.h:1334
				uintptr_t luAddress;

			}
		}
	}
}

void CgsGraphics::ModelInstanceCollector::operator<(const const ModelInstanceInfo &  a, const const ModelInstanceInfo &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ModelInstanceCollector::AreCompatibleInstances(const const ModelInstanceInfo &  a, const const ModelInstanceInfo &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ModelInstanceCollector::BeginInstanceCollection(CgsGraphics::DispatchFrame *  lpDispatchFrame, const rw::math::vpu::Matrix44 *  lpCameraViewProjection, int32_t  liModelOnlyDisplayList, int32_t  liOpaqueList, int32_t  liTransparentList, uint8_t  lu8PreZList, bool  lbEnableZOnlyRenderPath) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::InstanceListResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::GetDepthStencilTexture() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::GetTexture() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::GetDepthTexture() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::GetDepthStencilTextureState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::GetTextureState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::GetDepthTextureState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::End(CgsGraphics::Im2dRenderBuffer *  lpRenderBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::Begin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::End() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::BufferedDispatchFrame::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::BufferedDispatchFrame::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::BufferedDispatchFrame::Swap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::BufferedDispatchFrame::GetDispatchFrameForWrite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::BufferedDispatchFrame::GetDispatchFrameForRead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::BufferedDispatchFrame::BufferedDispatchFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::BufferedDispatchFrame::BufferedDispatchFrame(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::BufferedDispatchFrame::~BufferedDispatchFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::BufferedDispatchFrame::~BufferedDispatchFrame(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::GetFirstCommand() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::GetNextCommand(const ImCommand *  lpCurrentCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1298
		uint32_t luCurrentCommandPos;

		// CgsImRenderBuffer.h:1299
		uint32_t luNextCommandPos;

	}
}

void renderengine::VertexProgramState::Parameters::SetVertexProgram(const renderengine::ProgramBuffer *  vp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexProgramState::Parameters::SetVertexDescriptor(const renderengine::VertexDescriptor *  vd) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::ResetShadowing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.h:817
		uint32_t uID;

	}
}

void rw::core::stdc::Min(unsigned int  a, unsigned int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::OcclusionQueryList::GetTrivialAcceptBit(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpl::VecLoadUnaligned(const void *  base, int  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchObjectContext_JobState::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchObjectContext_JobState::TransferLocalToMemoryAligned(void *  lpMainMemory, const void *  lpLocalMemory, size_t  luByteCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchObjectContext_JobState::TransferMemoryToLocal(void *  lpLocalMemory, const void *  lpMainMemory, size_t  luByteCount, uint32_t  luDmaChannel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::SetupBuiltinInterpreters(void (*)(DispatchCommand *, CgsGraphics::DispatchFrame *, void *, float32_t) *  paInterpreters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchPacketInterpreter::DispatchPacketInterpreter(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchBin::GetBinStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::BufferedDispatchFrame::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBufferedDispatchFrame.cpp:113
		uint32_t i;

	}
}

void Shader::ParameterBlock::ParameterBlock(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Shader::ParameterSemanticBlock::ParameterSemanticBlock(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ShaderTechniqueResourceType::GetImportCount(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ShaderTechniqueResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ShaderTechniqueResourceType::GetImportPointer(const void *  lpResource, uint32_t  luImportIndex, uint32_t *  lpuOutOffset, const void **  lppOutResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderTechniqueResourceType.cpp:543
		const CgsGraphics::ShaderTechnique * lpShaderTechnique;

	}
}

void CgsResource::ShaderTechniqueResourceType::DeSerialise(void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<6u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ShaderTechniqueResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderTechniqueResourceType.cpp:601
		CgsGraphics::ShaderTechnique * lpShaderTechnique;

		// CgsShaderTechniqueResourceType.cpp:602
		uint8_t * lpBaseData;

		// CgsShaderTechniqueResourceType.cpp:615
		int8_t liI;

	}
}

void rw::movie::IVideoRenderableOperations::~IVideoRenderableOperations() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::movie::IVideoRenderableOperations::~IVideoRenderableOperations(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::movie::IVideoRenderer::~IVideoRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::movie::IVideoRenderer::~IVideoRenderer(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::movie::IAudioRenderer::~IAudioRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::movie::IAudioRenderer::~IAudioRenderer(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderer::GetRenderingDelay() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderer::SetPositionX(float  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderer::SetPositionY(float  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderer::SetPositionZ(float  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderer::GetPositionX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderer::GetPositionY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderer::GetPositionZ() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderer::SetScaleX(float  sx) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderer::SetScaleY(float  sy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderer::GetScaleX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderer::GetScaleY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ChunkBuffer::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderer::SetParentMoviePlayer(MoviePlayer *  lpParentMoviePlayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::TextureState::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderer::~MovieVideoRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMovieVideoRenderer.cpp:138
		uint32_t i;

	}
}

void CgsGraphics::MovieVideoRenderer::~MovieVideoRenderer(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	rw::movie::IVideoRenderer::~IVideoRenderer(/* parameters */);
}

void CgsGraphics::MovieVideoRenderer::GetNumberOfVideoBuffers(rw::movie::VideoRenderable::VideoFormat  lVideoFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderer::SetReleaseRenderableCallback(MovieRenderer::ReleaseVideoRenderableFunc *  lReleaseFunc, rw::movie::MovieDecoder *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderableOperations::Init(EA::Allocator::ICoreAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderableOperations::Shutdown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderableOperations::~MovieVideoRenderableOperations() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderableOperations::~MovieVideoRenderableOperations(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::movie::IVideoRenderableOperations::~IVideoRenderableOperations(/* parameters */);
}

void CgsGraphics::MovieVideoRenderableOperations::PreModify(VideoRenderable *  lpVideoRenderable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderableOperations::PostModify(VideoRenderable *  lpVideoRenderable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieSoundRenderer::~MovieSoundRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieSoundRenderer::~MovieSoundRenderer(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::movie::IAudioRenderer::~IAudioRenderer(/* parameters */);
}

void CgsGraphics::MovieSoundRenderer::Init(EA::Allocator::ICoreAllocator *  lpAllocator, uint32_t  luSamplesPerSecond, uint32_t  luNumChannels) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieSoundRenderer::GetRenderingDelay() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieSoundRenderer::GetRenderingPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMovieSoundRenderer.cpp:169
		SNDREQUESTSTATUS status;

		// CgsMovieSoundRenderer.cpp:170
		SNDSTREAMSTATUS sndStrmsStatus;

	}
}

void CgsGraphics::MovieSoundRenderer::SetAudioDecodeCallback(MovieRenderer::AudioDecodeFunc *  lAudioDecodeCallbackFunc, rw::movie::IAudioDecoder *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieSoundRenderer::SetAudioFinishedCallback(MovieRenderer::AudioFinishedFunc *  lAudioFinishedCallbackFunc, void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieSoundRenderer::GetVolume() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieSoundRenderer::Begin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieSoundRenderer::SetSndHandles() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMovieSoundRenderer.cpp:309
		rw::movie::AudioDecoder_Snd9 * lpThat;

	}
}

void CgsGraphics::MovieSoundRenderer::Pause() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieSoundRenderer::UnPause() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieSoundRenderer::Stop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::VideoDataResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<const char>(const const char *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const uint32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::VideoDataResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVideoDataResource.cpp:209
		VideoDataResource * lpVideoDataResource;

	}
}

void rw::RwPtrToOffset<void>(const void *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<CgsGraphics::Instance>(Instance *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<CgsGraphics::Instance>(const Instance *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<CgsGraphics::Instance>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<CgsGraphics::Instance>(Instance *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator><VectorAxisX, VectorAxisW>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:334
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:336
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:338
		bool ret;

	}
}

void rw::math::vpu::operator< <VectorAxisX, VectorAxisW>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:492
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:494
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:496
		bool ret;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator><VectorAxisY, VectorAxisW>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:334
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:336
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:338
		bool ret;

	}
}

void rw::math::vpu::operator< <VectorAxisY, VectorAxisW>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:492
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:494
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:496
		bool ret;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator><VectorAxisZ, VectorAxisW>(VecFloatRef<VectorAxisZ> &  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:334
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:336
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:338
		bool ret;

	}
}

void rw::math::vpu::operator< <VectorAxisZ, VectorAxisW>(VecFloatRef<VectorAxisZ> &  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:492
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:494
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:496
		bool ret;

	}
}

void rw::math::vpu::IsSimilar(const const rw::math::vpu::VecFloatRefIndex &  a, const const float &  b, const VecFloat  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Subtract(const const rw::math::vpu::VecFloatRefIndex &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:777
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_platform_inline.h:778
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_platform_inline.h:780
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_platform_inline.h:779
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
		{
			// vec_float_operation_platform_inline.h:781
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::IsZero(const VecFloat  v, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Abs<rw::math::vpu::VecFloat>(const const VecFloat &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:114
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// scalar_operation_inline.h:115
			const VectorIntrinsicUnion::VectorIntrinsic mask;

			// scalar_operation_inline.h:115
			const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

		}
	}
}

void CgsGraphics::Camera::GetViewMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Inverse(const rw::math::vpu::Matrix44Affine &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_inline.h:497
		VecFloat determinant;

	}
}

void rw::math::vpu::Inverse(const rw::math::vpu::Matrix44Affine &  m, const VecFloat &  determinant) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic det;

		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic xAxisResult;

		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic yAxisResult;

		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic zAxisResult;

		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic wAxisResult;

		{
			// matrix44affine_operation_inline.h:488
			VectorIntrinsicUnion::VectorIntrinsic negatePos;

			// matrix44affine_operation_inline.h:488
			VectorIntrinsicUnion::VectorIntrinsic transX;

			// matrix44affine_operation_inline.h:488
			VectorIntrinsicUnion::VectorIntrinsic transY;

			// matrix44affine_operation_inline.h:488
			VectorIntrinsicUnion::VectorIntrinsic transZ;

			{
				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic signMask;

			}
			{
				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_crossYZ;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_crossZX;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_crossXY;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_x;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_y;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_z;

				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV2;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV1;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV3;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV2;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV1;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV3;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV2;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV1;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV3;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic yy;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic zz;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic temp0;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic temp1;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic temp2;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic temp3;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic reciprocal;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					{
						// matrix44affine_operation_inline.h:488
						VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

						// matrix44affine_operation_inline.h:488
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						{
							// matrix44affine_operation_inline.h:488
							VectorIntrinsicUnion::VectorIntrinsic estimate;

							// matrix44affine_operation_inline.h:488
							VectorIntrinsicUnion::VectorIntrinsic vOne;

						}
					}
				}
			}
		}
	}
}

void CgsGraphics::Camera::GetNearClipPlane() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::GetFarClipPlane() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::GetTanHalfFovHorizontal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::GetTanHalfFovVertical() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:453
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(float  f0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_macros.h:237
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_macros.h:238
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*=(const Vector3 &  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:435
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:393
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator+=(const Vector3 &  v, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1440
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1441
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1443
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator*(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1565
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1566
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1566
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator+<VectorAxisX>(const VecFloat  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1256
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1257
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(const VecFloat  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:298
		VectorIntrinsicUnion::VectorIntrinsic permuteControl;

	}
}

void rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1440
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1441
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1443
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator+<VectorAxisY>(const VecFloat  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1256
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1257
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(const VecFloat  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:298
		VectorIntrinsicUnion::VectorIntrinsic permuteControl;

	}
}

void rw::math::vpu::operator-<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1440
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1441
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1443
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator+<VectorAxisZ>(const VecFloat  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1256
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1257
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(const VecFloat  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:298
		VectorIntrinsicUnion::VectorIntrinsic permuteControl;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::operator=(float  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::SetFloat(float  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:240
		VectorIntrinsicUnion::VectorIntrinsic vec;

		{
			// vec_float_type_inline.h:241
			VectorIntrinsicUnion u;

		}
		{
			// vec_float_type_inline.h:242
			VectorIntrinsicUnion::VectorIntrinsic permuteControl;

		}
	}
}

void rw::math::vpu::Transform(const rw::math::vpu::Vector4  vec, const rw::math::vpu::Matrix44 &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44_operation_inline.h:329
		VectorIntrinsicUnion::VectorIntrinsic result;

		// matrix44_operation_inline.h:329
		VectorIntrinsicUnion::VectorIntrinsic xSplat;

		// matrix44_operation_inline.h:329
		VectorIntrinsicUnion::VectorIntrinsic ySplat;

		// matrix44_operation_inline.h:329
		VectorIntrinsicUnion::VectorIntrinsic zSplat;

		// matrix44_operation_inline.h:329
		VectorIntrinsicUnion::VectorIntrinsic wSplat;

		// matrix44_operation_inline.h:330
		VectorIntrinsicUnion::VectorIntrinsic inVec;

	}
}

void rw::math::vpu::Mult(const rw::math::vpu::Matrix44Affine &  m, const rw::math::vpu::Matrix44 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44_operation_platform_inline.h:92
		VectorIntrinsicUnion::VectorIntrinsic[4] vs;

		// matrix44_operation_platform_inline.h:92
		VectorIntrinsicUnion::VectorIntrinsic[4] temp;

		// matrix44_operation_platform_inline.h:92
		VectorIntrinsicUnion::VectorIntrinsic[4] result;

	}
}

void rw::math::fpu::Vector4Template<double>::Vector4Template(double  _x, double  _y, double  _z, double  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::GetVector4_WAxisTemplate<double>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Vector4Template<double>::Vector4Template(/* parameters */);
}

void rw::math::vpu::operator*(const rw::math::vpu::Matrix44 &  a, const rw::math::vpu::Matrix44 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Matrix44 &  m, const rw::math::vpu::Matrix44 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Vector4  v, const rw::math::vpu::Matrix44 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44_operation_platform_inline.h:64
		VectorIntrinsicUnion::VectorIntrinsic x;

		// matrix44_operation_platform_inline.h:64
		VectorIntrinsicUnion::VectorIntrinsic y;

		// matrix44_operation_platform_inline.h:64
		VectorIntrinsicUnion::VectorIntrinsic z;

		// matrix44_operation_platform_inline.h:64
		VectorIntrinsicUnion::VectorIntrinsic w;

		// matrix44_operation_platform_inline.h:64
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+<VectorAxisZ, VectorAxisW>(VecFloatRef<VectorAxisZ> &  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1294
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1295
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1297
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator+(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1248
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::CompLessThan(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:305
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::GetVector4_One() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector4_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Select(const MaskScalar  mask, const rw::math::vpu::Vector4  trueValue, const rw::math::vpu::Vector4  falseValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:823
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator!=(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsEqualV4(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:246
		bool ret;

	}
}

void rw::math::vpl::VecPermute(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1, VectorIntrinsicInParam  permuteConstant) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpl::VecShiftRightImm_UInt<1>(VectorIntrinsicInParam  v0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_operation_inline.h:547
		const VectorIntrinsicUnion::VectorIntrinsic shiftVec;

	}
}

void rw::math::vpl::VecConvertSignedFixedPointToFloat<31>(VectorIntrinsicInParam  v0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpl::VecConvertUnsignedFixedPointToFloat<24>(VectorIntrinsicInParam  v0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Normalize(const rw::math::vpu::Quaternion &  q) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// quaternion_operation_inline.h:155
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// quaternion_operation_inline.h:156
			VectorIntrinsicUnion::VectorIntrinsic temp_one_over_rqrt_dot;

			{
				// quaternion_operation_inline.h:156
				VectorIntrinsicUnion::VectorIntrinsic dotproduct;

				{
					// quaternion_operation_inline.h:156
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz_ww;

					// quaternion_operation_inline.h:156
					VectorIntrinsicUnion::VectorIntrinsic zz_ww;

					// quaternion_operation_inline.h:156
					VectorIntrinsicUnion::VectorIntrinsic xxpluszz_yyplusww;

					// quaternion_operation_inline.h:156
					VectorIntrinsicUnion::VectorIntrinsic yyplusww;

				}
				{
					// quaternion_operation_inline.h:156
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// quaternion_operation_inline.h:156
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// quaternion_operation_inline.h:156
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// quaternion_operation_inline.h:156
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// quaternion_operation_inline.h:156
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// quaternion_operation_inline.h:156
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// quaternion_operation_inline.h:156
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// quaternion_operation_inline.h:156
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void rw::math::vpu::Matrix44FromScaleQuaternionTranslation(const rw::math::vpu::Vector3  scale, const rw::math::vpu::Quaternion &  q, const rw::math::vpu::Vector3  trans, const Matrix44 &  result) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Matrix44FromScaleQuaternionTranslation(const rw::math::vpu::Vector3  scale, const rw::math::vpu::Quaternion &  q, const rw::math::vpu::Vector3  trans) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44_operation_inline.h:770
		VectorIntrinsicUnion::VectorIntrinsic xRow;

		// matrix44_operation_inline.h:770
		VectorIntrinsicUnion::VectorIntrinsic yRow;

		// matrix44_operation_inline.h:770
		VectorIntrinsicUnion::VectorIntrinsic zRow;

		// matrix44_operation_inline.h:770
		VectorIntrinsicUnion::VectorIntrinsic wRow;

		// matrix44_operation_inline.h:771
		VectorIntrinsicUnion::VectorIntrinsic xScale;

		// matrix44_operation_inline.h:771
		VectorIntrinsicUnion::VectorIntrinsic yScale;

		// matrix44_operation_inline.h:771
		VectorIntrinsicUnion::VectorIntrinsic zScale;

		// matrix44_operation_inline.h:772
		VectorIntrinsicUnion::VectorIntrinsic one;

		{
			// matrix44_operation_inline.h:776
			VectorIntrinsicUnion::VectorIntrinsic vZero;

			// matrix44_operation_inline.h:776
			VectorIntrinsicUnion::VectorIntrinsic sqrt2s;

			// matrix44_operation_inline.h:776
			VectorIntrinsicUnion::VectorIntrinsic scaled_q;

			// matrix44_operation_inline.h:776
			VectorIntrinsicUnion::VectorIntrinsic halves;

			// matrix44_operation_inline.h:776
			VectorIntrinsicUnion::VectorIntrinsic neg_qq;

			// matrix44_operation_inline.h:776
			VectorIntrinsicUnion::VectorIntrinsic scaled_q_yzx;

			// matrix44_operation_inline.h:776
			VectorIntrinsicUnion::VectorIntrinsic xy_yz_zx;

			// matrix44_operation_inline.h:776
			VectorIntrinsicUnion::VectorIntrinsic scaled_q_zxy;

			// matrix44_operation_inline.h:776
			VectorIntrinsicUnion::VectorIntrinsic scaled_q_w;

			// matrix44_operation_inline.h:776
			VectorIntrinsicUnion::VectorIntrinsic wz_wx_wy;

			// matrix44_operation_inline.h:776
			VectorIntrinsicUnion::VectorIntrinsic addVec;

			// matrix44_operation_inline.h:776
			VectorIntrinsicUnion::VectorIntrinsic subVec;

			// matrix44_operation_inline.h:776
			VectorIntrinsicUnion::VectorIntrinsic neg_yy_zz_xx;

			// matrix44_operation_inline.h:776
			VectorIntrinsicUnion::VectorIntrinsic diagonalValues;

			{
				// matrix44_operation_inline.h:776
				VectorIntrinsicUnion::VectorIntrinsic result;

				{
					// matrix44_operation_inline.h:776
					VectorIntrinsicUnion::VectorIntrinsic permuteControl;

				}
			}
			{
				// matrix44_operation_inline.h:776
				VectorIntrinsicUnion::VectorIntrinsic result;

				{
					// matrix44_operation_inline.h:776
					VectorIntrinsicUnion::VectorIntrinsic permuteControl;

				}
			}
			{
				// matrix44_operation_inline.h:776
				VectorIntrinsicUnion::VectorIntrinsic result;

				{
					// matrix44_operation_inline.h:776
					VectorIntrinsicUnion::VectorIntrinsic permuteControl;

				}
			}
		}
		{
			// matrix44_operation_inline.h:780
			VectorIntrinsicUnion::VectorIntrinsic permuteControl;

		}
	}
}

void rw::math::fpu::Vector2Template<float>::GetX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Max<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:222
		float test;

		// scalar.h:223
		float r;

	}
}

void rw::math::vpu::operator/<VectorAxisX>(const const float &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void rw::math::vpu::operator/<VectorAxisY>(const const float &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void rw::math::fpu::Vector2Template<float>::GetY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::X() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Y() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im3d::SaveMaskShaderConstants(const Im3dVertex *const  lpVertices, TextureState *const  lpTextureState, renderengine::Texture *const  lpTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3d.cpp:318
		int32_t liShader;

		// CgsIm3d.cpp:319
		uint32_t luMaskIndex;

		// CgsIm3d.cpp:321
		const const rw::math::vpu::Vector3 & lStartPos;

		// CgsIm3d.cpp:322
		const const rw::math::vpu::Vector3 & lEndPos;

		// CgsIm3d.cpp:323
		Vector3 lDifference;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
		Set<VectorAxisX, VectorAxisY, VectorAxisX, VectorAxisY>(/* parameters */);
	}
	rw::math::vpu::operator/<VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::Vector4::SetComponent(/* parameters */);
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void rw::math::fpu::Vector3Template<float>::Vector3Template(const const rw::math::vpu::Vector3 &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Vector3Template(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ShaderConstantTable::ClearDirtyConstants() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ShaderTechniqueResourceType::GetShaderSamplersSerialisedResourceDescriptorSize(CgsGraphics::ShaderTechnique *  lpShaderTechnique) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderTechniqueResourceType.cpp:233
		int8_t lIndex;

		// CgsShaderTechniqueResourceType.cpp:234
		uint32_t lTotalSize;

	}
}

void CgsResource::ShaderTechniqueResourceType::GetShaderConstantInternalSerialisedResourceDescriptorSize(ShaderConstantsInternal *  lpShaderConstants, uint32_t  luCurrentSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderTechniqueResourceType.cpp:251
		uint32_t luIndex;

		// CgsShaderTechniqueResourceType.cpp:252
		uint32_t luTotalSize;

		{
			// CgsShaderTechniqueResourceType.cpp:260
			uint32_t lu32AlignedSize;

			// CgsShaderTechniqueResourceType.cpp:261
			uint32_t lu32AlignedOffset;

		}
	}
}

void CgsResource::ShaderTechniqueResourceType::GetShaderConstantExternalSerialisedResourceDescriptorSize(const ShaderConstantsExternal *  lpShaderConstants) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderTechniqueResourceType.cpp:283
		uint32_t lIndex;

		// CgsShaderTechniqueResourceType.cpp:284
		uint32_t lTotalSize;

	}
}

void CgsResource::ShaderTechniqueResourceType::GetConstantHashTableSerialisedResourceDescriptorSize(const CgsGraphics::ShaderConstantHashTable *  lpHashTable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderTechniqueResourceType.cpp:730
		uint32_t luTotalSize;

	}
	{
		// CgsShaderTechniqueResourceType.cpp:732
		uint32_t luI;

	}
}

void CgsGraphics::DispatchCommand::GetCommandID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchCommand::GetCustomSection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchCommand::GetPacketLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchFrame::GetBin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::BufferedDispatchFrame::GetDispatchBinForWrite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchList::Verify() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<std::uint32_t>(const uint32_t *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<std::uint32_t*>(const uint32_t **&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<const char*>(const const char **&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const Matrix44Affine &  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const Vector3 &  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::detail::EndianSwapArray<float>(float *, uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const int16_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsGraphics::Instance>(const Instance *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Shader::ParameterSemanticBlock::operator[](unsigned int  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Shader::ParameterSemanticBlock::GetCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchBin::GetBinSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchList::SetDispatchBinMasterStart(DispatchCommand *  lpMasterStart) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MaterialAssembly::GetCPUParameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::fmod(float  _Left, float  _Right) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void SmoothLoopAnimation::OnCalculateOffset(const CgsGraphics::MaterialAssembly *  lMaterial, float32_t  lTime, const Vector4 &  lUVOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMaterialAnimation.h:61
		const ShaderConstantsCPU * lpCPUParams;

		// CgsMaterialAnimation.h:63
		Vector4 lValue;

		// CgsMaterialAnimation.h:67
		float32_t lAnimationLength;

		// CgsMaterialAnimation.h:69
		float lUOffset;

	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	std::fmod(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
}

void CgsGraphics::DrawRenderableMesh::SetMaterialShadowingAddress(uint32_t  lu32MaterialShadowingAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DrawRenderableMeshZOnly::SetMaterialShadowingAddress(uint32_t  lu32MaterialShadowingAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::ResetShadowingForShaders() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<Shader::ParameterSemantic>(const ParameterSemantic *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<void>(const void *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const uint16_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(const const ResourceHandle &  lOtherHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::CreateFromHandle(const ResourceHandle *  lpSrcHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::Construct(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::operator=(const const Vector2Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/(const const float &  a, const const rw::math::vpu::VecFloatRefIndex &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:686
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:687
			VectorIntrinsicUnion::VectorIntrinsic signMask;

		}
	}
}

void rw::math::vpu::Dot(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:146
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:147
			VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

			// vector3_operation_inline.h:147
			VectorIntrinsicUnion::VectorIntrinsic yy;

			// vector3_operation_inline.h:147
			VectorIntrinsicUnion::VectorIntrinsic zz;

		}
	}
}

void rw::math::vpu::operator-(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:967
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:968
			VectorIntrinsicUnion::VectorIntrinsic signMask;

		}
	}
}

void rw::collision::Plane::Plane(const rw::math::vpu::Vector3  normal, float32_t  distance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::collision::Frustum::SetPlane(uint32_t  index, const const Plane &  plane) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Cross(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:153
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic crossV2;

			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic crossV1;

			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic vZero;

			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic crossV3;

		}
	}
}

void rw::math::vpu::Normalize(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:195
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:196
			VectorIntrinsicUnion::VectorIntrinsic temp_one_over_rqrt_dot;

			{
				// vector3_operation_inline.h:196
				VectorIntrinsicUnion::VectorIntrinsic dotproduct;

				{
					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic yy;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic zz;

				}
				{
					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void rw::collision::Frustum::Frustum() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::collision::Plane::Plane() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::End() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::DeleteEntry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::shaderpatch::ParameterStream::Builder::End() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::movie::VideoRenderable::GetFormat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::movie::VideoRenderable::GetNumBuffersUsed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::movie::VideoRenderable::GetWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::movie::VideoRenderable::GetHeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::movie::VideoRenderable::GetData(unsigned int  bufNum) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::movie::VideoRenderable::GetStride(unsigned int  bufNum) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderer::EncodeYuvOntoRgbaTexture(VideoRenderable *  lpVideoRenderable, uint32_t *  lpuRgbaPixelData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMovieVideoRenderer.cpp:249
		uint32_t[3] laBufSizes;

		// CgsMovieVideoRenderer.cpp:268
		uint8_t * lpu8Y;

		// CgsMovieVideoRenderer.cpp:269
		uint8_t * lpu8Cb;

		// CgsMovieVideoRenderer.cpp:270
		uint8_t * lpu8Cr;

		// CgsMovieVideoRenderer.cpp:276
		uint32_t luLineIndex;

	}
	rw::movie::VideoRenderable::GetFormat(/* parameters */);
	rw::movie::VideoRenderable::GetData(/* parameters */);
	rw::movie::VideoRenderable::GetData(/* parameters */);
	rw::movie::VideoRenderable::GetData(/* parameters */);
	{
		// CgsMovieVideoRenderer.cpp:280
		uint8_t * lpu8YTemp;

		// CgsMovieVideoRenderer.cpp:281
		uint8_t * lpu8CbTemp;

		// CgsMovieVideoRenderer.cpp:282
		uint8_t * lpu8CrTemp;

		// CgsMovieVideoRenderer.cpp:284
		uint32_t luPixelIndex;

	}
	{
		// CgsMovieVideoRenderer.cpp:289
		uint8_t luY0;

		// CgsMovieVideoRenderer.cpp:290
		uint8_t luY1;

		// CgsMovieVideoRenderer.cpp:291
		uint8_t luY2;

		// CgsMovieVideoRenderer.cpp:292
		uint8_t luY3;

		// CgsMovieVideoRenderer.cpp:293
		uint8_t luY4;

		// CgsMovieVideoRenderer.cpp:294
		uint8_t luY5;

		// CgsMovieVideoRenderer.cpp:295
		uint8_t luY6;

		// CgsMovieVideoRenderer.cpp:296
		uint8_t luY7;

		// CgsMovieVideoRenderer.cpp:298
		uint8_t luCb0;

		// CgsMovieVideoRenderer.cpp:299
		uint8_t luCb1;

		// CgsMovieVideoRenderer.cpp:300
		uint8_t luCb2;

		// CgsMovieVideoRenderer.cpp:301
		uint8_t luCb3;

		// CgsMovieVideoRenderer.cpp:303
		uint8_t luCr0;

		// CgsMovieVideoRenderer.cpp:304
		uint8_t luCr1;

		// CgsMovieVideoRenderer.cpp:305
		uint8_t luCr2;

		// CgsMovieVideoRenderer.cpp:306
		uint8_t luCr3;

		// CgsMovieVideoRenderer.cpp:310
		uint32_t luEncodedYuvPixelPair0;

		// CgsMovieVideoRenderer.cpp:311
		uint32_t luEncodedYuvPixelPair1;

		// CgsMovieVideoRenderer.cpp:312
		uint32_t luEncodedYuvPixelPair2;

		// CgsMovieVideoRenderer.cpp:313
		uint32_t luEncodedYuvPixelPair3;

		// CgsMovieVideoRenderer.cpp:314
		uint32_t luEncodedYuvPixelPair4;

		// CgsMovieVideoRenderer.cpp:315
		uint32_t luEncodedYuvPixelPair5;

		// CgsMovieVideoRenderer.cpp:316
		uint32_t luEncodedYuvPixelPair6;

		// CgsMovieVideoRenderer.cpp:317
		uint32_t luEncodedYuvPixelPair7;

		// CgsMovieVideoRenderer.cpp:321
		unsigned int *[4] lpu4Pixels;

		// CgsMovieVideoRenderer.cpp:323
		union {
			// CgsMovieVideoRenderer.cpp:324
			unsigned int[4][2] mu128_8Pixels;

			// CgsMovieVideoRenderer.cpp:325
			uint32_t[8] mau_8Pixels;

		}
		// CgsMovieVideoRenderer.cpp:326
		union  lUnionOfPixels;

	}
}

void shadow::CellGcmHelper::BeginUnsafeBatch(CellGcmContextData *  lpLocalGcmContext, CellGcmContextData *  lpOriginalGcmContext, uint32_t  luWordsToReserve) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.cpp:780
		int32_t liResult;

	}
}

void renderengine::VertexDescriptor::PS3GetNumStreams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::CellGcmHelper::EndUnsafeBatch(CellGcmContextData *  lpUnsafeContext, CellGcmContextData *  lpOriginalGcmContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::Matrix33Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Vector3Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::GetRow(int  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::SetElem(int  row, int  column, float  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix33.h:254
		const Vector3Template<float> & vector;

	}
}

void rw::math::fpu::Mult<float>(const const Matrix33Template<float> &  m, const const Matrix33Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// matrix33_operation.h:74
	Matrix33Template<float> & result;

	{
		// matrix33_operation.h:74
		Matrix33Template<float> result;

		{
			// matrix33_operation.h:75
			int i;

			Matrix33Template<float>::GetRow(/* parameters */);
			Matrix33Template<float>::SetElem(/* parameters */);
			Matrix33Template<float>::SetElem(/* parameters */);
			Matrix33Template<float>::SetElem(/* parameters */);
		}
	}
}

void rw::math::fpu::operator*<float>(const const Matrix33Template<float> &  a, const const Matrix33Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::InstanceList::GetInstance(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Instance::GetModel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Model::GetNumLods() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Model::GetLodDistance(uint32_t  luLodIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::InstanceList::GetArraySize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::InstanceListResourceType::PostFixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInstanceListResourceType.cpp:239
		InstanceList * lpInstanceList;

		{
			// CgsInstanceListResourceType.cpp:240
			uint32_t luI;

		}
	}
	{
		// CgsInstanceListResourceType.cpp:242
		Instance * lpInstance;

		// CgsInstanceListResourceType.cpp:243
		Model * lpModel;

		InstanceList::GetInstance(/* parameters */);
		Instance::GetModel(/* parameters */);
		Model::GetLodDistance(/* parameters */);
	}
}

void rw::collision::Frustum::GetPlane(uint32_t  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::collision::Plane::GetDistance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void rw::collision::Plane::SetDistance(float32_t  distance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::collision::Plane::GetNormal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::collision::Plane::SetNormal(const rw::math::vpu::Vector3  normal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::GetTextureState(uint32_t  idx) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::GetTexture(uint32_t  lu32RenderTargetId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<renderengine::ProgramVariableHandle>(const ProgramVariableHandle *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::VideoDataResource::GetVideoFile(CgsResource::VideoDataResource::EVideoLanguage  leVideoLanguage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::VideoDataResource::VideoFile::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsResource::VideoDataResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVideoDataResource.cpp:81
		uint32_t luAlignment;

		// CgsVideoDataResource.cpp:83
		VideoDataResource * lpVideoDataResource;

		// CgsVideoDataResource.cpp:85
		uint32_t luSize;

		// CgsVideoDataResource.cpp:89
		uint32_t luVideoFileIndex;

	}
	{
		// CgsVideoDataResource.cpp:93
		CgsResource::VideoDataResource::VideoFile * lpVideoFile;

		VideoDataResource::GetVideoFile(/* parameters */);
	}
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
}

void CgsGraphics::InstanceListResourceType::CalculateSizeOfResource(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ShaderConstantTableElement::ShaderState::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<CgsGraphics::Instance>(Instance *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<CgsGraphics::Instance>(Instance *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::Resource(const const MemoryResource &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<6u>::BaseResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:307
		uint32_t i;

	}
}

void rw::IResourceAllocator::Free(const const Resource &  resource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::movie::VideoRenderable::SetData(uint8_t *  data, unsigned int  bufNum) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::movie::VideoRenderable::SetSize(uint32_t  size, unsigned int  bufNum) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::movie::VideoRenderable::SetStride(uint32_t  stride, unsigned int  bufNum) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::movie::VideoRenderable::SetWidth(unsigned int  width) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::movie::VideoRenderable::SetHeight(unsigned int  height) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::movie::VideoRenderable::SetFormat(rw::movie::VideoRenderable::VideoFormat  format) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderableOperations::Release(VideoRenderable *  lpVideoRenderable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMovieVideoRenderer.cpp:775
		unsigned int lNumVideoBuffersPerFrame;

	}
	rw::movie::VideoRenderable::GetNumBuffersUsed(/* parameters */);
	{
		// CgsMovieVideoRenderer.cpp:777
		unsigned int i;

		{
			// CgsMovieVideoRenderer.cpp:780
			uint8_t * buf;

			rw::movie::VideoRenderable::GetData(/* parameters */);
			rw::Resource::Resource(/* parameters */);
			rw::IResourceAllocator::Free(/* parameters */);
		}
		rw::movie::VideoRenderable::SetData(/* parameters */);
		rw::movie::VideoRenderable::SetSize(/* parameters */);
		rw::movie::VideoRenderable::SetStride(/* parameters */);
	}
	rw::movie::VideoRenderable::SetFormat(/* parameters */);
	rw::movie::VideoRenderable::SetWidth(/* parameters */);
	rw::movie::VideoRenderable::SetHeight(/* parameters */);
}

void CgsGraphics::InstanceListResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInstanceListResourceType.cpp:185
		InstanceList * lpInstanceList;

	}
}

void Shader::ParameterSemanticBlock::GetDataSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Renderable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::floor(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void SteppedLoopAnimation::OnCalculateOffset(const CgsGraphics::MaterialAssembly *  lMaterial, float32_t  lTime, const Vector4 &  lUVOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMaterialAnimation.h:81
		const ShaderConstantsCPU * lpCPUParams;

		// CgsMaterialAnimation.h:83
		Vector4 lValue;

		// CgsMaterialAnimation.h:86
		float32_t lAnimationLength;

		// CgsMaterialAnimation.h:88
		float32_t lAnimationSteps;

		// CgsMaterialAnimation.h:90
		float32_t lStepLength;

		// CgsMaterialAnimation.h:91
		float32_t lTimeSinceAnimationStart;

		// CgsMaterialAnimation.h:93
		float lUOffset;

	}
	CgsGraphics::MaterialAssembly::GetCPUParameters(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	std::fmod(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
}

void CgsGraphics::Camera::GetFrustum(const Frustum &  frustum) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator==(const const rw::math::vpu::VecFloatRefIndex &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:153
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:155
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:157
		bool ret;

		{
			// vec_float_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
		{
			// vec_float_operation_inline.h:156
			VectorIntrinsicUnion u;

		}
	}
}

void MaterialAnimationFactory::MaterialAnimationFactory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void MaterialAnimationFactory::Instance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMaterialAnimation.h:144
		extern MaterialAnimationFactory mInstance;

		{
			{
				(None)unknown_arg
				{
					(None)unknown_arg
					{
						(None)unknown_arg
					}
				}
			}
			{
				(None)unknown_arg
				{
					(None)unknown_arg
					{
						(None)unknown_arg
					}
				}
			}
			{
				(None)unknown_arg
				{
					(None)unknown_arg
					{
						(None)unknown_arg
					}
				}
			}
		}
	}
}

void MaterialAnimationFactory::Instance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		MaterialAnimationFactory::MaterialAnimationFactory(/* parameters */);
		SteppedLoopAnimation::SteppedLoopAnimation(/* parameters */);
	}
}

void rw::math::vpu::operator==(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::OcclusionQueryList::UnsetTrivialAcceptBit(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::OcclusionQueryList::SetTrivialAcceptBit(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::PS3CPUSetLabelValue(uint8_t  label, uint32_t  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// device.h:2282
		uint32_t volatile* labelAddress;

	}
}

void shadow::Device::ResetAllState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::TextureState::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::RGBA8(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::TextureState::Parameters::GetTexture() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(renderengine::PrimitiveType  primType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::FlushBeforeRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::FlushVertexProgramState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DrawParameters::SetStartVertex(uint32_t  start) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DrawParameters::SetPrimitiveType(renderengine::PrimitiveType  primType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator::GetStride() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::PS3GPUSetLabelBackEnd(uint8_t  label, uint32_t  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::Flush() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::PS3CPUGetLabelValue(uint8_t  label) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// device.h:2293
		uint32_t value;

		// device.h:2295
		uint32_t volatile* labelAddress;

	}
}

void renderengine::DrawParameters::SetVertexCount(uint32_t  count) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBuffer::PS3GetBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexIteratorBaseClass::SetBuffer(void *const  m_buf) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::SetResource(renderengine::VertexBuffer *  vertexBuffer, uint32_t  id, uint32_t  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator::Write(const const CgsGraphics::Basic2dColouredTexturedVertex &  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::Render(const renderengine::PrimitiveType  lePrimitiveType, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *const  lpVertices, const uint32_t  lnNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:669
		renderengine::Device::DirectDraw::BatchIterator lDirectDrawBatchIterator;

		// CgsImRenderer.h:670
		CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator lVertexIterator;

	}
	BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
	renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(/* parameters */);
	renderengine::DrawParameters::SetPrimitiveType(/* parameters */);
	BeginBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
	{
		// CgsImRenderer.h:678
		uint32_t i;

	}
	renderengine::Device::SetResource(/* parameters */);
	renderengine::DrawParameters::SetVertexCount(/* parameters */);
	renderengine::VertexIteratorBaseClass::SetBuffer(/* parameters */);
	Basic2dColouredTexturedVertex::VertexIterator::Write(/* parameters */);
	EndBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
}

void renderengine::ProgramBuffer::GetType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::GetFlags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::PS3GetMicrocode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::PS3GetMicrocodeSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::PS3GetParameterOffsetTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::SetMicrocode(const void *  microcode, uint32_t  microcodeSize, const ParameterOffsetTable *  table) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::ResetEntry(const void *  microcode, uint32_t  microcodeSize, const ParameterOffsetTable *  table) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::shaderpatch::ParameterOffsetTable::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::shaderpatch::ParameterStream::Builder::Begin(void *  buffer, uint32_t  bufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::BeginEntry(const void *  microcode, uint32_t  microcodeSize, const ParameterOffsetTable *  table) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::SetPixelProgram(const renderengine::ProgramBuffer *  pixelProgram) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::GetRenderTargetState(uint32_t  luDestSliceOrFace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::GetDefaultRenderTargetState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const RenderTargetState *  renderTargetState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.h:990
		const CellGcmSurface * internalState;

	}
}

void renderengine::ViewportParameters::ViewportParameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ViewportParameters::SetRectangle(uint32_t  x, uint32_t  y, uint32_t  w, uint32_t  h) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ScissorRectParameters::ScissorRectParameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ScissorRectParameters::SetRectangle(uint32_t  x, uint32_t  y, uint32_t  w, uint32_t  h) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::SetRenderTargetState(uint32_t  luDestSliceOrFace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRenderTarget.cpp:283
		const RenderTargetState * lpState;

		// CgsRenderTarget.cpp:292
		ViewportParameters lViewportParams;

		// CgsRenderTarget.cpp:296
		ScissorRectParameters lScissorParams;

	}
	renderengine::ViewportParameters::ViewportParameters(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	renderengine::ViewportParameters::SetRectangle(/* parameters */);
	renderengine::ScissorRectParameters::SetRectangle(/* parameters */);
	renderengine::Device::GetDefaultRenderTargetState(/* parameters */);
}

void rw::IResourceAllocator::FreeMemoryResource(MemoryResource  memoryResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resourceallocator.h:191
		Resource resource;

	}
}

void EA::Jobs::JobThreadHandle::Valid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::PS3GPUSetWaitLabel(uint8_t  label, uint32_t  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<double>::Vector3Template(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::operator-<double>(const const rw::math::fpu::Vector3Template<double> &  a, const const rw::math::fpu::Vector3Template<double> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector3_operation.h:141
	Vector3Template<double> & r;

	{
		// vector3_operation.h:141
		Vector3Template<double> r;

	}
}

void rw::math::fpu::Vector3Template<double>::Vector3Template(double  _x, double  _y, double  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Normalize<double>(const const rw::math::fpu::Vector3Template<double> &  vec) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector3_operation.h:325
	Vector3Template<double> & r;

	{
		// vector3_operation.h:325
		Vector3Template<double> r;

	}
}

void rw::math::fpu::MagnitudeRecip<double>(const const rw::math::fpu::Vector3Template<double> &  vec) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Sqrt<double>(double  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Mult<double>(const const rw::math::fpu::Vector3Template<double> &  vec, double  scalar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector3_operation.h:278
	Vector3Template<double> & r;

	{
		// vector3_operation.h:278
		Vector3Template<double> r;

	}
}

void rw::math::fpu::Vector3Template<double>::Vector3Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Cross<double>(const const rw::math::fpu::Vector3Template<double> &  v0, const const rw::math::fpu::Vector3Template<double> &  v1, const Vector3Template<double> &  r) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<double>::operator=(const const rw::math::fpu::Vector3Template<double> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Dot<double>(const const rw::math::fpu::Vector3Template<double> &  a, const const rw::math::fpu::Vector3Template<double> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::Vector4Template(const const rw::math::fpu::Vector3Template<double> &  v3, const double  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44Template<double>::SetXColumn(const const rw::math::fpu::Vector4Template<double> &  col) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44Template<double>::SetYColumn(const const rw::math::fpu::Vector4Template<double> &  col) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44Template<double>::SetZColumn(const const rw::math::fpu::Vector4Template<double> &  col) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::GetVector4_64_WAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44Template<double>::SetWColumn(const const rw::math::fpu::Vector4Template<double> &  col) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44Template<double>::GetX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::X() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::Y() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::Z() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44Template<double>::GetY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44Template<double>::GetZ() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44Template<double>::GetW() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::SetFovHorizontal(float32_t  lFovHorizontal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Tan(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::tanf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// tanf4.h:15
		float[4] xl;

		// tanf4.h:15
		float[4] xl2;

		// tanf4.h:15
		float[4] xl3;

		// tanf4.h:15
		float[4] res;

		// tanf4.h:16
		int[4] q;

		// tanf4.h:31
		float[4] qf;

		// tanf4.h:32
		float[4] p1;

		// tanf4.h:45
		float[4] ct2;

		// tanf4.h:47
		float[4] cx;

		// tanf4.h:48
		float[4] sx;

		// tanf4.h:53
		float[4] cxosx;

		// tanf4.h:54
		float[4] sxocx;

		// tanf4.h:56
		float[4] ncxosx;

		// tanf4.h:61
		unsigned int[4] mask;

	}
}

void std::divf4(float[4]  numer, float[4]  denom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// divf4.h:15
		float[4] y0;

		// divf4.h:15
		float[4] y0numer;

	}
}

void rw::math::vpu::operator/(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1714
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1715
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			// vec_float_operation_inline.h:1715
			float floatRecip;

			{
				// vec_float_operation_inline.h:1715
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::ATan(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::atanf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// atanf4.h:25
		float[4] bias;

		// atanf4.h:26
		float[4] x2;

		// atanf4.h:26
		float[4] x3;

		// atanf4.h:26
		float[4] x4;

		// atanf4.h:26
		float[4] x8;

		// atanf4.h:26
		float[4] x9;

		// atanf4.h:27
		float[4] hi;

		// atanf4.h:27
		float[4] lo;

		// atanf4.h:28
		float[4] result;

		// atanf4.h:29
		float[4] inv_x;

		// atanf4.h:30
		unsigned int[4] sign;

		// atanf4.h:31
		unsigned int[4] select;

		// atanf4.h:32
		float[4] xabs;

		// atanf4.h:33
		float[4] vzero;

	}
}

void std::recipf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// recipf4.h:15
		float[4] y0;

	}
}

void rw::math::fpu::Matrix33Template<float>::XAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsValid<float>(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsValid(float  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsNaN(float  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsNaN(double  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_platform.h:21
		bool result;

	}
}

void rw::math::fpu::Matrix33Template<float>::YAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::ZAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsValid<float>(const const Matrix33Template<float> &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::IsValid<float>(/* parameters */);
	rw::math::fpu::IsValid<float>(/* parameters */);
	IsValid(/* parameters */);
	Matrix33Template<float>::YAxis(/* parameters */);
	rw::math::fpu::IsValid<float>(/* parameters */);
	Matrix33Template<float>::ZAxis(/* parameters */);
	IsValid(/* parameters */);
	IsValid(/* parameters */);
	IsValid(/* parameters */);
}

extern Matrix33Template<float> & operator=(const const Matrix33Template<float> &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::operator=(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dTransform::Transform(const const Matrix33Template<float> &  lMatrix, const Im2dTransform &  lOutTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2dTransform.h:201
		Im2dTransform::Matrix33 lSrc;

		// CgsIm2dTransform.h:203
		Im2dTransform::Matrix33 lTrans;

		// CgsIm2dTransform.h:204
		Im2dTransform::Matrix33 lInverse;

		// CgsIm2dTransform.h:208
		float32_t a;

		// CgsIm2dTransform.h:209
		float32_t b;

		// CgsIm2dTransform.h:210
		float32_t c;

		// CgsIm2dTransform.h:211
		float32_t d;

	}
}

void rw::math::fpu::Vector3Template<float>::Vector3Template(float  _x, float  _y, float  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::SetX(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::SetY(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::SetZ(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dTransform::SetTransform(const const Matrix33Template<float> &  lSrc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::GetX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::GetX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::GetY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::GetY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::GetZ() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderableOperations::MovieVideoRenderableOperations() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderableOperations::MovieVideoRenderableOperations(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderableOperations::Initialize(const Resource &  resource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMovieVideoRenderer.cpp:636
		MovieVideoRenderableOperations * operations;

	}
}

void CgsGraphics::MovieVideoRenderer::TextureInfoType::TextureInfoType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderer::MovieVideoRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderer::MovieVideoRenderer(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGraphics::MovieVideoRenderer::TextureInfoType::TextureInfoType(/* parameters */);
}

void CgsGraphics::MovieVideoRenderer::Initialize(const Resource &  resource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMovieVideoRenderer.cpp:95
		CgsGraphics::MovieVideoRenderer * vrenderer;

	}
}

void CgsGraphics::MovieSoundRenderer::MovieSoundRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieSoundRenderer::MovieSoundRenderer(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieSoundRenderer::Initialize(const Resource &  lResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMovieSoundRenderer.cpp:75
		MovieSoundRenderer * lpMovieSoundRenderer;

	}
}

void shadow::Device::SetVertexProgram(const renderengine::ProgramBuffer *  lpVertexProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetPixelProgram(const renderengine::ProgramBuffer *  lpPixelProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::SetProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
}

void CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::SetProgram(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	shadow::Device::SetVertexProgram(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
}

void CgsGraphics::MaterialAssembly::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::InstanceListResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsInstanceListResourceType.cpp:64
	ResourceDescriptor & lResourceDescriptor;

	{
		// CgsInstanceListResourceType.cpp:62
		uint32_t luSize;

		// CgsInstanceListResourceType.cpp:64
		ResourceDescriptor lResourceDescriptor;

	}
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
}

void CgsResource::ShaderTechniqueResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderTechniqueResourceType.cpp:207
		uint32_t luSize;

		// CgsShaderTechniqueResourceType.cpp:208
		CgsGraphics::ShaderTechnique * lpShaderTechnique;

	}
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	rw::BaseResourceDescriptor::BaseResourceDescriptor(/* parameters */);
	rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(/* parameters */);
}

void rw::SizeAlign(uint32_t  size, uint32_t  align) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ostypes.h:401
		const uint32_t alignMask;

	}
}

void CgsGraphics::MovieVideoRenderer::GetResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMovieVideoRenderer.cpp:76
		uint32_t luAlignment;

		// CgsMovieVideoRenderer.cpp:77
		uint32_t luSize;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	}
}

void CgsGraphics::MovieVideoRenderableOperations::GetResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMovieVideoRenderer.cpp:617
		uint32_t luAlignment;

		// CgsMovieVideoRenderer.cpp:618
		uint32_t luSize;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	}
}

void CgsGraphics::MovieSoundRenderer::GetResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMovieSoundRenderer.cpp:55
		uint32_t luAlignment;

		// CgsMovieSoundRenderer.cpp:56
		uint32_t luSize;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	}
}

void CgsGraphics::ImRenderer<CgsGraphics::PositionOnlyVertex>::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredVertex>::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void SteppedGridLoopAnimation::StepFunction(float32_t  x, float32_t  lRepeatLength, float32_t  lNumSteps) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMaterialAnimation.h:129
		float32_t lStepLength;

		// CgsMaterialAnimation.h:130
		float32_t lTimeSinceAnimationStart;

		// CgsMaterialAnimation.h:132
		float y;

	}
}

void SteppedGridLoopAnimation::OnCalculateOffset(const CgsGraphics::MaterialAssembly *  lMaterial, float32_t  lTime, const Vector4 &  lUVOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMaterialAnimation.h:108
		const ShaderConstantsCPU * lpCPUParams;

		// CgsMaterialAnimation.h:110
		Vector4 lValue;

		// CgsMaterialAnimation.h:113
		float32_t lAnimationLength;

		// CgsMaterialAnimation.h:115
		float32_t lAnimationStepsU;

		// CgsMaterialAnimation.h:117
		float32_t lAnimationStepsV;

		// CgsMaterialAnimation.h:119
		float lUOffset;

		// CgsMaterialAnimation.h:120
		float lVOffset;

	}
	CgsGraphics::MaterialAssembly::GetCPUParameters(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	StepFunction(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	StepFunction(/* parameters */);
}

void rw::math::vpu::operator*<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1607
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1608
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:1610
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1610
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::core::stdc::Min(int  a, int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::stdc::Max(int  a, int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1607
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1608
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:1610
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1610
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator*<VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1607
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1608
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:1610
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1610
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator*<VectorAxisW>(VecFloatRef<VectorAxisW> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1607
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1608
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:1610
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1610
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::GetVecFloat_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Abs<VectorAxisX>(const const VecFloatRef<VectorAxisX> &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:122
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// scalar_operation_inline.h:123
		VectorIntrinsicUnion::VectorIntrinsic aVI;

		{
			// scalar_operation_inline.h:125
			const VectorIntrinsicUnion::VectorIntrinsic mask;

			// scalar_operation_inline.h:125
			const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

		}
	}
}

void rw::math::vpu::Abs<VectorAxisY>(const const VecFloatRef<VectorAxisY> &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:122
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// scalar_operation_inline.h:123
		VectorIntrinsicUnion::VectorIntrinsic aVI;

		{
			// scalar_operation_inline.h:125
			const VectorIntrinsicUnion::VectorIntrinsic mask;

			// scalar_operation_inline.h:125
			const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

		}
	}
}

void rw::math::vpu::Max<rw::math::vpu::VecFloat>(const const VecFloat &  a, const const VecFloat &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:149
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Abs<VectorAxisZ>(const const VecFloatRef<VectorAxisZ> &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:122
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// scalar_operation_inline.h:123
		VectorIntrinsicUnion::VectorIntrinsic aVI;

		{
			// scalar_operation_inline.h:125
			const VectorIntrinsicUnion::VectorIntrinsic mask;

			// scalar_operation_inline.h:125
			const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

		}
	}
}

void rw::math::vpu::operator<(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:514
		bool result;

	}
}

void rw::math::vpu::operator*=(const VecFloat &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1151
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1152
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1153
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator/(const rw::math::vpu::Vector3  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:407
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:408
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vector3_operation_inline.h:408
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vector3_operation_inline.h:408
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vector3_operation_inline.h:408
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector3_operation_inline.h:408
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void rw::math::vpu::operator+(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1274
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		// vec_float_operation_inline.h:1276
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1275
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::Magnitude(const rw::math::vpu::Vector4  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:243
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector4_operation_inline.h:244
			VectorIntrinsicUnion::VectorIntrinsic dotproduct;

			{
				// vector4_operation_inline.h:244
				VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz_ww;

				// vector4_operation_inline.h:244
				VectorIntrinsicUnion::VectorIntrinsic zz_ww;

				// vector4_operation_inline.h:244
				VectorIntrinsicUnion::VectorIntrinsic xxpluszz_yyplusww;

				// vector4_operation_inline.h:244
				VectorIntrinsicUnion::VectorIntrinsic yyplusww;

			}
			{
				// vector4_operation_inline.h:244
				const VectorIntrinsicUnion::VectorIntrinsic zero;

				// vector4_operation_inline.h:244
				VectorIntrinsicUnion::VectorIntrinsic isZeroMask;

				// vector4_operation_inline.h:244
				VectorIntrinsicUnion::VectorIntrinsic recipSqrt;

				// vector4_operation_inline.h:244
				VectorIntrinsicUnion::VectorIntrinsic result;

				{
					// vector4_operation_inline.h:244
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector4_operation_inline.h:244
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector4_operation_inline.h:244
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector4_operation_inline.h:244
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector4_operation_inline.h:244
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector4_operation_inline.h:244
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector4_operation_inline.h:244
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector4_operation_inline.h:244
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void rw::math::vpu::operator/<VectorAxisX>(const rw::math::vpu::Vector4  v, VecFloatRef<VectorAxisX> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:598
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector4_operation_inline.h:599
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			{
				// vector4_operation_inline.h:599
				VectorIntrinsicUnion::VectorIntrinsic reciprocal;

				{
					// vector4_operation_inline.h:599
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector4_operation_inline.h:599
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					{
						// vector4_operation_inline.h:599
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector4_operation_inline.h:599
						VectorIntrinsicUnion::VectorIntrinsic vOne;

					}
				}
			}
		}
	}
}

void rw::math::vpu::operator/<VectorAxisY>(const rw::math::vpu::Vector4  v, VecFloatRef<VectorAxisY> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:598
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector4_operation_inline.h:599
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			{
				// vector4_operation_inline.h:599
				VectorIntrinsicUnion::VectorIntrinsic reciprocal;

				{
					// vector4_operation_inline.h:599
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector4_operation_inline.h:599
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					{
						// vector4_operation_inline.h:599
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector4_operation_inline.h:599
						VectorIntrinsicUnion::VectorIntrinsic vOne;

					}
				}
			}
		}
	}
}

void rw::math::vpu::operator/<VectorAxisZ>(const rw::math::vpu::Vector4  v, VecFloatRef<VectorAxisZ> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:598
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector4_operation_inline.h:599
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			{
				// vector4_operation_inline.h:599
				VectorIntrinsicUnion::VectorIntrinsic reciprocal;

				{
					// vector4_operation_inline.h:599
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector4_operation_inline.h:599
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					{
						// vector4_operation_inline.h:599
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector4_operation_inline.h:599
						VectorIntrinsicUnion::VectorIntrinsic vOne;

					}
				}
			}
		}
	}
}

void rw::math::vpu::QuaternionFromMatrix44(const rw::math::vpu::Matrix44 &  m, const VecFloat  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::QuaternionFromMatrix33(const rw::math::vpu::Matrix33 &  m, const VecFloat  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// quaternion_operation_inline.h:303
		VectorIntrinsicUnion::VectorIntrinsic half;

		// quaternion_operation_inline.h:304
		VectorIntrinsicUnion::VectorIntrinsic one;

		// quaternion_operation_inline.h:305
		VectorIntrinsicUnion::VectorIntrinsic zero;

		// quaternion_operation_inline.h:306
		VectorIntrinsicUnion::VectorIntrinsic recipSqrt;

		// quaternion_operation_inline.h:308
		VectorIntrinsicUnion::VectorIntrinsic splatX;

		// quaternion_operation_inline.h:308
		VectorIntrinsicUnion::VectorIntrinsic splatY;

		// quaternion_operation_inline.h:308
		VectorIntrinsicUnion::VectorIntrinsic splatZ;

		// quaternion_operation_inline.h:313
		VectorIntrinsicUnion::VectorIntrinsic signedX;

		// quaternion_operation_inline.h:314
		VectorIntrinsicUnion::VectorIntrinsic signedY;

		// quaternion_operation_inline.h:315
		VectorIntrinsicUnion::VectorIntrinsic signedZ;

		// quaternion_operation_inline.h:316
		VectorIntrinsicUnion::VectorIntrinsic sumXY;

		// quaternion_operation_inline.h:317
		VectorIntrinsicUnion::VectorIntrinsic sumZOne;

		// quaternion_operation_inline.h:318
		VectorIntrinsicUnion::VectorIntrinsic valuesToSqrt;

		// quaternion_operation_inline.h:320
		VectorIntrinsicUnion::VectorIntrinsic trace;

		// quaternion_operation_inline.h:325
		VectorIntrinsicUnion::VectorIntrinsic s;

		// quaternion_operation_inline.h:325
		VectorIntrinsicUnion::VectorIntrinsic s2;

		// quaternion_operation_inline.h:329
		VectorIntrinsicUnion::VectorIntrinsic quat_from_mat_temp1;

		// quaternion_operation_inline.h:329
		VectorIntrinsicUnion::VectorIntrinsic quat_from_mat_temp2;

		// quaternion_operation_inline.h:332
		VectorIntrinsicUnion::VectorIntrinsic N;

		// quaternion_operation_inline.h:333
		VectorIntrinsicUnion::VectorIntrinsic S;

		// quaternion_operation_inline.h:336
		VectorIntrinsicUnion::VectorIntrinsic permuteScales0;

		// quaternion_operation_inline.h:337
		VectorIntrinsicUnion::VectorIntrinsic scale0;

		// quaternion_operation_inline.h:338
		VectorIntrinsicUnion::VectorIntrinsic unscaledQ0;

		// quaternion_operation_inline.h:339
		VectorIntrinsicUnion::VectorIntrinsic scaledQ0;

		// quaternion_operation_inline.h:343
		VectorIntrinsicUnion::VectorIntrinsic permuteScales1;

		// quaternion_operation_inline.h:344
		VectorIntrinsicUnion::VectorIntrinsic scale1;

		// quaternion_operation_inline.h:345
		VectorIntrinsicUnion::VectorIntrinsic permute1;

		// quaternion_operation_inline.h:346
		VectorIntrinsicUnion::VectorIntrinsic unscaledQ1;

		// quaternion_operation_inline.h:347
		VectorIntrinsicUnion::VectorIntrinsic scaledQ1;

		// quaternion_operation_inline.h:351
		VectorIntrinsicUnion::VectorIntrinsic permuteScales2;

		// quaternion_operation_inline.h:352
		VectorIntrinsicUnion::VectorIntrinsic scale2;

		// quaternion_operation_inline.h:353
		VectorIntrinsicUnion::VectorIntrinsic permute2;

		// quaternion_operation_inline.h:354
		VectorIntrinsicUnion::VectorIntrinsic unscaledQ2;

		// quaternion_operation_inline.h:355
		VectorIntrinsicUnion::VectorIntrinsic scaledQ2;

		// quaternion_operation_inline.h:359
		VectorIntrinsicUnion::VectorIntrinsic permuteScales3;

		// quaternion_operation_inline.h:360
		VectorIntrinsicUnion::VectorIntrinsic scale3;

		// quaternion_operation_inline.h:361
		VectorIntrinsicUnion::VectorIntrinsic permute3;

		// quaternion_operation_inline.h:362
		VectorIntrinsicUnion::VectorIntrinsic unscaledQ3;

		// quaternion_operation_inline.h:363
		VectorIntrinsicUnion::VectorIntrinsic scaledQ3;

		// quaternion_operation_inline.h:389
		VectorIntrinsicUnion::VectorIntrinsic condition1Mask;

		// quaternion_operation_inline.h:390
		VectorIntrinsicUnion::VectorIntrinsic condition2Mask;

		// quaternion_operation_inline.h:394
		VectorIntrinsicUnion::VectorIntrinsic condition3Mask;

		// quaternion_operation_inline.h:395
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// quaternion_operation_inline.h:324
			VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

			// quaternion_operation_inline.h:324
			VectorIntrinsicUnion::VectorIntrinsic vZero;

			// quaternion_operation_inline.h:324
			VectorIntrinsicUnion::VectorIntrinsic vOne;

			// quaternion_operation_inline.h:324
			VectorIntrinsicUnion::VectorIntrinsic vHalf;

			{
				// quaternion_operation_inline.h:324
				VectorIntrinsicUnion::VectorIntrinsic estimate;

				// quaternion_operation_inline.h:324
				VectorIntrinsicUnion::VectorIntrinsic vZero;

				// quaternion_operation_inline.h:324
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				// quaternion_operation_inline.h:324
				VectorIntrinsicUnion::VectorIntrinsic vHalf;

			}
		}
		{
			// quaternion_operation_inline.h:330
			VectorIntrinsicUnion::VectorIntrinsic temp0;

			// quaternion_operation_inline.h:330
			VectorIntrinsicUnion::VectorIntrinsic temp1;

		}
		{
			// quaternion_operation_inline.h:331
			VectorIntrinsicUnion::VectorIntrinsic temp0;

			// quaternion_operation_inline.h:331
			VectorIntrinsicUnion::VectorIntrinsic temp1;

		}
	}
}

void rw::math::vpu::Matrix44FromQuaternion(const rw::math::vpu::Quaternion &  q, const Matrix44 &  result) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Matrix44FromQuaternion(const rw::math::vpu::Quaternion &  q) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44_operation_inline.h:355
		VectorIntrinsicUnion::VectorIntrinsic zero;

		// matrix44_operation_inline.h:356
		VectorIntrinsicUnion::VectorIntrinsic x;

		// matrix44_operation_inline.h:357
		VectorIntrinsicUnion::VectorIntrinsic y;

		// matrix44_operation_inline.h:358
		VectorIntrinsicUnion::VectorIntrinsic z;

		// matrix44_operation_inline.h:359
		VectorIntrinsicUnion::VectorIntrinsic w;

		{
			// matrix44_operation_inline.h:361
			VectorIntrinsicUnion::VectorIntrinsic vZero;

			// matrix44_operation_inline.h:361
			VectorIntrinsicUnion::VectorIntrinsic sqrt2s;

			// matrix44_operation_inline.h:361
			VectorIntrinsicUnion::VectorIntrinsic scaled_q;

			// matrix44_operation_inline.h:361
			VectorIntrinsicUnion::VectorIntrinsic halves;

			// matrix44_operation_inline.h:361
			VectorIntrinsicUnion::VectorIntrinsic neg_qq;

			// matrix44_operation_inline.h:361
			VectorIntrinsicUnion::VectorIntrinsic scaled_q_yzx;

			// matrix44_operation_inline.h:361
			VectorIntrinsicUnion::VectorIntrinsic xy_yz_zx;

			// matrix44_operation_inline.h:361
			VectorIntrinsicUnion::VectorIntrinsic scaled_q_zxy;

			// matrix44_operation_inline.h:361
			VectorIntrinsicUnion::VectorIntrinsic scaled_q_w;

			// matrix44_operation_inline.h:361
			VectorIntrinsicUnion::VectorIntrinsic wz_wx_wy;

			// matrix44_operation_inline.h:361
			VectorIntrinsicUnion::VectorIntrinsic addVec;

			// matrix44_operation_inline.h:361
			VectorIntrinsicUnion::VectorIntrinsic subVec;

			// matrix44_operation_inline.h:361
			VectorIntrinsicUnion::VectorIntrinsic neg_yy_zz_xx;

			// matrix44_operation_inline.h:361
			VectorIntrinsicUnion::VectorIntrinsic diagonalValues;

			{
				// matrix44_operation_inline.h:361
				VectorIntrinsicUnion::VectorIntrinsic result;

				{
					// matrix44_operation_inline.h:361
					VectorIntrinsicUnion::VectorIntrinsic permuteControl;

				}
			}
			{
				// matrix44_operation_inline.h:361
				VectorIntrinsicUnion::VectorIntrinsic result;

				{
					// matrix44_operation_inline.h:361
					VectorIntrinsicUnion::VectorIntrinsic permuteControl;

				}
			}
			{
				// matrix44_operation_inline.h:361
				VectorIntrinsicUnion::VectorIntrinsic result;

				{
					// matrix44_operation_inline.h:361
					VectorIntrinsicUnion::VectorIntrinsic permuteControl;

				}
			}
		}
	}
}

void rw::math::vpu::_asmSwizzleStore<VectorAxisW, VectorAxisX>(VectorIntrinsicInParam  dest, VectorIntrinsicInParam  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:457
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:458
			VectorIntrinsicUnion::VectorIntrinsic permuteControl;

		}
	}
}

void rw::math::vpu::operator*<VectorAxisX>(const rw::math::vpu::Vector4  v, VecFloatRef<VectorAxisX> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:582
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector4_operation_inline.h:583
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector4_operation_inline.h:583
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void rw::math::vpu::operator*<VectorAxisY>(const rw::math::vpu::Vector4  v, VecFloatRef<VectorAxisY> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:582
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector4_operation_inline.h:583
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector4_operation_inline.h:583
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void rw::math::vpu::operator*<VectorAxisZ>(const rw::math::vpu::Vector4  v, VecFloatRef<VectorAxisZ> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:582
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector4_operation_inline.h:583
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector4_operation_inline.h:583
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void CgsCore::StrCpy(char *  lpcDest, unsigned int  luBytes, const char *  lpcSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ShaderConstantTableElement::SetSize(const uint8_t  lu8Size) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.h:146
		uint32_t luNumQwInArray;

	}
}

void ShaderConstantTableElement::SetNumEntries(uint8_t  lu8NumEntries) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.h:176
		uint32_t luNumQwInArray;

	}
}

void ShaderConstantTable::AddShaderConstant(uint32_t  luIndex, const char *  lpName, const uint8_t  luSizeInBytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.h:287
		char * lpHeapName;

	}
	CgsCore::StrCpy(/* parameters */);
	ShaderConstantTableElement::SetSize(/* parameters */);
	ShaderConstantTableElement::SetNumEntries(/* parameters */);
}

void CgsGraphics::ImRenderer<CgsGraphics::PositionOnlyVertex>::BeginRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetState(const renderengine::ProgramBuffer *const  lpVertexProgramBuffer, const renderengine::ProgramBuffer *const  lpPixelProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetVertexDescriptor(const renderengine::VertexDescriptor *  vdesc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.h:960
		uint32_t attributesToDisable;

		// shadowingdevice.h:961
		uint8_t attributeIndex;

	}
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredVertex>::BeginRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetResource(renderengine::VertexBuffer *const  lpVertexBuffer, const uint32_t  luId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetResource(IndexBuffer *const  lpIndexBuffer, const uint32_t  luId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::SetResource(IndexBuffer *  indexBuffer, uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Median<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(ModelInstanceInfo *  _First, ModelInstanceInfo *  _Mid, ModelInstanceInfo *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1886
		int _Step;

	}
}

void std::_Med3<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(ModelInstanceInfo *  _First, ModelInstanceInfo *  _Mid, ModelInstanceInfo *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::iter_swap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(ModelInstanceInfo *  _Left, ModelInstanceInfo *  _Right) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::swap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo>(const ModelInstanceInfo &  _Left, const ModelInstanceInfo &  _Right) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// utility:11
		ModelInstanceInfo _Tmp;

	}
}

void std::pair<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*,CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>::pair(const ModelInstanceInfo *const&  _Val1, const ModelInstanceInfo *const&  _Val2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Unguarded_partition<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(ModelInstanceInfo *  _First, ModelInstanceInfo *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1899
		ModelInstanceInfo * _Mid;

		// algorithm:1901
		ModelInstanceInfo * _Pfirst;

		// algorithm:1902
		ModelInstanceInfo * _Plast;

		// algorithm:1913
		ModelInstanceInfo * _Gfirst;

		// algorithm:1914
		ModelInstanceInfo * _Glast;

	}
	_Median<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	{
		_Med3<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
		_Med3<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
		_Med3<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
		_Med3<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	}
	iter_swap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	iter_swap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	iter_swap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	iter_swap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	iter_swap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	iter_swap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	iter_swap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	pair<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*,CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>::pair(/* parameters */);
	_Med3<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	iter_swap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	iter_swap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	iter_swap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	iter_swap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	iter_swap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	iter_swap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	iter_swap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	iter_swap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	iter_swap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	iter_swap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	iter_swap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	iter_swap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	iter_swap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	iter_swap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
}

void std::make_heap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(ModelInstanceInfo *  _First, ModelInstanceInfo *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Dist_type<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(ModelInstanceInfo *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Val_type<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(ModelInstanceInfo *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Make_heap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, std::ptrdiff_t, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo>(ModelInstanceInfo *  _First, ModelInstanceInfo *  _Last, ptrdiff_t *, ModelInstanceInfo *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1281
		ptrdiff_t _Bottom;

		{
			// algorithm:1283
			ptrdiff_t _Hole;

		}
	}
}

void std::_Adjust_heap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, int, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo>(ModelInstanceInfo *  _First, int  _Hole, int  _Bottom, ModelInstanceInfo  _Val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1176
		int _Top;

		// algorithm:1177
		int _Idx;

	}
}

void std::_Push_heap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, int, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo>(ModelInstanceInfo *  _First, int  _Hole, int  _Top, ModelInstanceInfo  _Val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1082
		int _Idx;

	}
}

void std::sort_heap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(ModelInstanceInfo *  _First, ModelInstanceInfo *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::pop_heap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(ModelInstanceInfo *  _First, ModelInstanceInfo *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Pop_heap_0<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo>(ModelInstanceInfo *  _First, ModelInstanceInfo *  _Last, ModelInstanceInfo *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Pop_heap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, std::ptrdiff_t, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo>(ModelInstanceInfo *  _First, ModelInstanceInfo *  _Last, ModelInstanceInfo *  _Dest, ModelInstanceInfo  _Val, ptrdiff_t *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Insertion_sort<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(ModelInstanceInfo *  _First, ModelInstanceInfo *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1851
		ModelInstanceInfo * _Next;

		{
			// algorithm:1854
			ModelInstanceInfo * _Next1;

		}
		{
			// algorithm:1859
			ModelInstanceInfo * _Dest;

			{
				// algorithm:1860
				ModelInstanceInfo * _Dest0;

			}
			{
				// algorithm:1864
				ModelInstanceInfo * _Next1;

			}
		}
	}
}

void std::rotate<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(ModelInstanceInfo *  _First, ModelInstanceInfo *  _Mid, ModelInstanceInfo *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Iter_cat<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(const ModelInstanceInfo *const&) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xutility:396
	random_access_iterator_tag _Cat;

	{
		// xutility:396
		random_access_iterator_tag _Cat;

	}
}

void std::_Rotate<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(ModelInstanceInfo *  _First, ModelInstanceInfo *  _Mid, ModelInstanceInfo *  _Last, random_access_iterator_tag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Rotate<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, std::ptrdiff_t, CgsGraphics::ModelInstanceCollector::ModelInstanceInfo>(ModelInstanceInfo *  _First, ModelInstanceInfo *  _Mid, ModelInstanceInfo *  _Last, ptrdiff_t *, ModelInstanceInfo *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:845
		ptrdiff_t _Shift;

		// algorithm:846
		ptrdiff_t _Count;

		{
			// algorithm:848
			ptrdiff_t _Factor;

			{
				// algorithm:850
				ptrdiff_t _Tmp;

			}
		}
		{
			// algorithm:857
			ModelInstanceInfo * _Hole;

			// algorithm:858
			ModelInstanceInfo * _Next;

			// algorithm:859
			ModelInstanceInfo _Holeval;

			// algorithm:860
			ModelInstanceInfo * _Next1;

		}
	}
}

void std::_Sort<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*, int>(ModelInstanceInfo *  _First, ModelInstanceInfo *  _Last, int  _Ideal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1957
		int _Count;

		{
			// algorithm:1960
			pair<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*,CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*> _Mid;

		}
		_Insertion_sort<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
	{
	}
	make_heap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	sort_heap<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
}

void renderengine::DepthStencilState::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DepthStencilState::Parameters::SetDepthEnable(bool  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DepthStencilState::Parameters::SetDepthFunction(renderengine::DepthStencilState::Function  function) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DepthStencilState::Parameters::SetDepthWriteEnable(bool  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::Allocate(const const ResourceDescriptor &  resourceDescriptor, const char8_t *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDepthStencilStateFactory::Construct(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDepthStencilStateFactory.cpp:47
		uint32_t i;

		// CgsDepthStencilStateFactory.cpp:49
		Parameters lDepthStencilStateParams;

		// CgsDepthStencilStateFactory.cpp:50
		Resource lResource;

		renderengine::DepthStencilState::Parameters::Parameters(/* parameters */);
	}
	rw::Resource::Resource(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthEnable(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthFunction(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthWriteEnable(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthEnable(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthFunction(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthWriteEnable(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthEnable(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthFunction(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthWriteEnable(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthEnable(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthFunction(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthWriteEnable(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthEnable(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthFunction(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthWriteEnable(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

void renderengine::RasterizerState::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RasterizerState::Parameters::SetScissorTestEnable(bool  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RasterizerState::Parameters::SetCullMode(renderengine::RasterizerState::CullMode  cm) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRasterizerStateFactory::Construct(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRasterizerStateFactory.cpp:47
		uint32_t i;

		// CgsRasterizerStateFactory.cpp:49
		Parameters lRasterizerStateParams;

		// CgsRasterizerStateFactory.cpp:50
		Resource lResource;

		renderengine::RasterizerState::Parameters::Parameters(/* parameters */);
	}
	rw::Resource::Resource(/* parameters */);
	renderengine::RasterizerState::Parameters::SetCullMode(/* parameters */);
	renderengine::RasterizerState::Parameters::SetScissorTestEnable(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	renderengine::RasterizerState::Parameters::SetCullMode(/* parameters */);
	renderengine::RasterizerState::Parameters::SetScissorTestEnable(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	renderengine::RasterizerState::Parameters::SetCullMode(/* parameters */);
	renderengine::RasterizerState::Parameters::SetScissorTestEnable(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

void renderengine::BlendState::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetBlendEnable(bool  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetAlphaTestEnable(bool  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetAlphaTestFunction(renderengine::BlendState::Function  func) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetMinFilter(renderengine::SamplerState::FilterMode  filter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetMagFilter(renderengine::SamplerState::FilterMode  filter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetMipFilter(renderengine::SamplerState::FilterMode  filter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetAddressU(renderengine::SamplerState::AddressingMode  addressMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetAddressV(renderengine::SamplerState::AddressingMode  addressMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::SetType(renderengine::Texture::Type  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::SetWidth(uint32_t  w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::SetHeight(uint32_t  h) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::SetDepth(uint32_t  d) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::SetMipLevels(uint32_t  ml) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::SetFormat(renderengine::PixelFormat  fmt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::GetGraphicsLocalResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::SetAlignment(uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::TextureState::Parameters::SetTexture(renderengine::Texture *  newTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetAddressW(renderengine::SamplerState::AddressingMode  addressMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBuffer::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBuffer::Parameters::SetBufferSize(uint32_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBuffer::Parameters::SetType(uint32_t  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBuffer::BatchIterator::BatchIterator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBuffer::BatchIterator::GetLockedBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBuffer::PS3GetOffset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::InstancingPrototype::StartupInstancingSupport(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.cpp:201
		const int InstancingArrayMax;

		// shadowingdevice.cpp:202
		const int InstancingArrayByteCount;

		// shadowingdevice.cpp:204
		renderengine::VertexBuffer::Parameters lVertexBufferParams;

		// shadowingdevice.cpp:208
		Resource lVertexBufferResource;

		// shadowingdevice.cpp:209
		renderengine::VertexBuffer * lpVertexBuffer;

		// shadowingdevice.cpp:211
		renderengine::VertexBuffer::BatchIterator lVertexBatchIterator;

		// shadowingdevice.cpp:213
		bool lbLockSuccess;

	}
	renderengine::VertexBuffer::Parameters::Parameters(/* parameters */);
	renderengine::VertexBuffer::Parameters::SetBufferSize(/* parameters */);
	renderengine::VertexBuffer::Parameters::SetType(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	{
		// shadowingdevice.cpp:221
		void * lpLockedBuffer;

		// shadowingdevice.cpp:222
		float * lpBufferAsFloats;

		{
			// shadowingdevice.cpp:224
			int liIndex;

		}
	}
}

void rw::RGBA::RGBA(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::RGBA8(const const RGBA &  rgba) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetRed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetGreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetBlue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetAlpha() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::PositionOnlyVertex>::GetVertexDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::StrideVertexIterator::StrideVertexIterator(const VertexDescriptor &  vbDesc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VertexIteratorBaseClass() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::StrideVertexIterator::RestartAtElementOffset(const renderengine::VertexBuffer::BatchIterator &  batchIt, uint32_t  elementIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::StrideVertexIterator::GetBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::StrideVertexIterator::Increment() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::IndexBuffer::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::IndexBuffer::Parameters::SetType(uint32_t  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::IndexBuffer::Parameters::SetNumIndices(uint32_t  num) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::IndexBuffer::Parameters::SetDepth(uint32_t  de) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DrawIndexedParameters::SetPrimitiveType(renderengine::PrimitiveType  primType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DrawIndexedParameters::SetBaseVertexIndex(uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DrawIndexedParameters::SetMinVertexIndex(uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DrawIndexedParameters::SetMaxVertexIndex(uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DrawIndexedParameters::SetStartIndex(uint32_t  start) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DrawIndexedParameters::SetIndexCount(uint32_t  count) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::AllocateMemoryResource(uint32_t  size, uint32_t  alignment, const char8_t *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::BufferedDispatchFrame::Construct(uint32_t  luNumDispatchLists, uint32_t  luBinCapacityBytes, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBufferedDispatchFrame.cpp:47
		uint32_t i;

	}
}

void EA::Jobs::JobThreadParameters::JobThreadParameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// job_thread_parameters.h:36
		ThreadParameters tp;

	}
}

void CgsSystem::JobManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MoviePlayerCoreAllocator::Construct(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ChunkBuffer::Construct(char *  lpcData, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::SetFlags(uint32_t  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::GetGraphicsLocalResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture2D::Lock(uint32_t  lockFlags, uint32_t  mipLevel, const renderengine::Texture::Locked &  locked) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderer::CreateOutputTexture(CgsGraphics::MovieVideoRenderer::TextureInfoType *  lpTextureTypeInfo, uint32_t  lWidth, uint32_t  lHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMovieVideoRenderer.cpp:551
		renderengine::Texture::Parameters lTextureParams;

		// CgsMovieVideoRenderer.cpp:560
		ResourceDescriptor lTextureResourceDescriptor;

		// CgsMovieVideoRenderer.cpp:577
		renderengine::Texture::Locked lLockedTexture;

		// CgsMovieVideoRenderer.cpp:584
		Parameters lTextureStateParams;

		// CgsMovieVideoRenderer.cpp:591
		ResourceDescriptor lTextureStateResourceDescriptor;

	}
	renderengine::Texture::Parameters::SetFormat(/* parameters */);
	renderengine::Texture::Parameters::Parameters(/* parameters */);
	renderengine::Texture::Parameters::SetFlags(/* parameters */);
	renderengine::Texture::Parameters::SetWidth(/* parameters */);
	renderengine::Texture::Parameters::SetHeight(/* parameters */);
	renderengine::Texture::Parameters::SetMipLevels(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::Texture2D::Lock(/* parameters */);
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	renderengine::TextureState::Parameters::Parameters(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

void CgsGraphics::MovieVideoRenderer::Init(EA::Allocator::ICoreAllocator *  lpAllocator, unsigned int  luWidth, unsigned int  luHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMovieVideoRenderer.cpp:173
		uint32_t luTextureIndex;

	}
}

void renderengine::BlendState::Parameters::SetSource(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Input  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetOperation(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Operation  op) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetDestination(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Input  dest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetColorWriteEnable(renderengine::RenderTargetState::TargetID  id, bool  red, bool  green, bool  blue, bool  alpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetSourceAlpha(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Input  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetDestinationAlpha(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Input  dest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetOperationAlpha(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Operation  op) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetAlphaTestReference(uint32_t  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsBlendStateFactory::Construct(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBlendStateFactory.cpp:46
		Resource lResource;

		// CgsBlendStateFactory.cpp:47
		uint32_t i;

		rw::Resource::Resource(/* parameters */);
		{
			// CgsBlendStateFactory.cpp:60
			Parameters lBlendStateParams;

			renderengine::BlendState::Parameters::Parameters(/* parameters */);
			renderengine::BlendState::Parameters::SetAlphaTestEnable(/* parameters */);
			renderengine::RGBA8::RGBA8(/* parameters */);
			renderengine::BlendState::Parameters::SetSource(/* parameters */);
			renderengine::BlendState::Parameters::SetDestination(/* parameters */);
			renderengine::BlendState::Parameters::SetOperation(/* parameters */);
			renderengine::BlendState::Parameters::SetBlendEnable(/* parameters */);
			renderengine::BlendState::Parameters::SetColorWriteEnable(/* parameters */);
			rw::IResourceAllocator::Allocate(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
		{
			// CgsBlendStateFactory.cpp:78
			Parameters lBlendStateParams;

			renderengine::BlendState::Parameters::Parameters(/* parameters */);
			renderengine::BlendState::Parameters::SetAlphaTestEnable(/* parameters */);
			renderengine::RGBA8::RGBA8(/* parameters */);
			renderengine::BlendState::Parameters::SetOperation(/* parameters */);
			renderengine::BlendState::Parameters::SetSource(/* parameters */);
			renderengine::BlendState::Parameters::SetDestination(/* parameters */);
			renderengine::BlendState::Parameters::SetBlendEnable(/* parameters */);
			renderengine::BlendState::Parameters::SetColorWriteEnable(/* parameters */);
			rw::IResourceAllocator::Allocate(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
		{
			// CgsBlendStateFactory.cpp:96
			Parameters lBlendStateParams;

			renderengine::BlendState::Parameters::Parameters(/* parameters */);
			renderengine::RGBA8::RGBA8(/* parameters */);
			renderengine::BlendState::Parameters::SetAlphaTestEnable(/* parameters */);
			renderengine::BlendState::Parameters::SetOperation(/* parameters */);
			renderengine::BlendState::Parameters::SetDestination(/* parameters */);
			renderengine::BlendState::Parameters::SetSource(/* parameters */);
			renderengine::BlendState::Parameters::SetBlendEnable(/* parameters */);
			renderengine::BlendState::Parameters::SetColorWriteEnable(/* parameters */);
			rw::IResourceAllocator::Allocate(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
		{
			// CgsBlendStateFactory.cpp:114
			Parameters lBlendStateParams;

			renderengine::BlendState::Parameters::Parameters(/* parameters */);
			renderengine::BlendState::Parameters::SetOperation(/* parameters */);
			renderengine::RGBA8::RGBA8(/* parameters */);
			renderengine::BlendState::Parameters::SetAlphaTestEnable(/* parameters */);
			renderengine::BlendState::Parameters::SetDestination(/* parameters */);
			renderengine::BlendState::Parameters::SetSource(/* parameters */);
			renderengine::BlendState::Parameters::SetBlendEnable(/* parameters */);
			renderengine::BlendState::Parameters::SetColorWriteEnable(/* parameters */);
			rw::IResourceAllocator::Allocate(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
		{
			// CgsBlendStateFactory.cpp:132
			Parameters lBlendStateParams;

			renderengine::BlendState::Parameters::Parameters(/* parameters */);
			renderengine::RGBA8::RGBA8(/* parameters */);
			renderengine::BlendState::Parameters::SetAlphaTestEnable(/* parameters */);
			renderengine::BlendState::Parameters::SetSource(/* parameters */);
			renderengine::BlendState::Parameters::SetOperation(/* parameters */);
			renderengine::BlendState::Parameters::SetDestination(/* parameters */);
			renderengine::BlendState::Parameters::SetBlendEnable(/* parameters */);
			renderengine::BlendState::Parameters::SetColorWriteEnable(/* parameters */);
			rw::IResourceAllocator::Allocate(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
		{
			// CgsBlendStateFactory.cpp:150
			Parameters lBlendStateParams;

			// CgsBlendStateFactory.cpp:151
			renderengine::RenderTargetState::TargetID lTargetID;

			renderengine::BlendState::Parameters::Parameters(/* parameters */);
			renderengine::RGBA8::RGBA8(/* parameters */);
			renderengine::BlendState::Parameters::SetAlphaTestEnable(/* parameters */);
			renderengine::BlendState::Parameters::SetDestination(/* parameters */);
			renderengine::BlendState::Parameters::SetOperationAlpha(/* parameters */);
			renderengine::BlendState::Parameters::SetSource(/* parameters */);
			renderengine::BlendState::Parameters::SetSourceAlpha(/* parameters */);
			renderengine::BlendState::Parameters::SetOperation(/* parameters */);
			renderengine::BlendState::Parameters::SetDestinationAlpha(/* parameters */);
			renderengine::BlendState::Parameters::SetBlendEnable(/* parameters */);
			renderengine::BlendState::Parameters::SetColorWriteEnable(/* parameters */);
			rw::IResourceAllocator::Allocate(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
		{
			// CgsBlendStateFactory.cpp:172
			Parameters lBlendStateParams;

			renderengine::BlendState::Parameters::Parameters(/* parameters */);
			renderengine::BlendState::Parameters::SetSource(/* parameters */);
			renderengine::BlendState::Parameters::SetAlphaTestEnable(/* parameters */);
			renderengine::RGBA8::RGBA8(/* parameters */);
			renderengine::BlendState::Parameters::SetOperation(/* parameters */);
			renderengine::BlendState::Parameters::SetDestination(/* parameters */);
			renderengine::BlendState::Parameters::SetBlendEnable(/* parameters */);
			renderengine::BlendState::Parameters::SetColorWriteEnable(/* parameters */);
			rw::IResourceAllocator::Allocate(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
		{
			// CgsBlendStateFactory.cpp:190
			Parameters lBlendStateParams;

			renderengine::BlendState::Parameters::Parameters(/* parameters */);
			renderengine::BlendState::Parameters::SetSource(/* parameters */);
			renderengine::BlendState::Parameters::SetAlphaTestEnable(/* parameters */);
			renderengine::RGBA8::RGBA8(/* parameters */);
			renderengine::BlendState::Parameters::SetOperation(/* parameters */);
			renderengine::BlendState::Parameters::SetBlendEnable(/* parameters */);
			renderengine::BlendState::Parameters::SetDestination(/* parameters */);
			renderengine::BlendState::Parameters::SetColorWriteEnable(/* parameters */);
			rw::IResourceAllocator::Allocate(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
		{
			// CgsBlendStateFactory.cpp:208
			Parameters lBlendStateParams;

			renderengine::BlendState::Parameters::SetAlphaTestReference(/* parameters */);
			renderengine::BlendState::Parameters::Parameters(/* parameters */);
			renderengine::BlendState::Parameters::SetSource(/* parameters */);
			renderengine::BlendState::Parameters::SetAlphaTestEnable(/* parameters */);
			renderengine::BlendState::Parameters::SetBlendEnable(/* parameters */);
			renderengine::RGBA8::RGBA8(/* parameters */);
			renderengine::BlendState::Parameters::SetOperation(/* parameters */);
			renderengine::BlendState::Parameters::SetAlphaTestFunction(/* parameters */);
			renderengine::BlendState::Parameters::SetDestination(/* parameters */);
			renderengine::BlendState::Parameters::SetColorWriteEnable(/* parameters */);
			rw::IResourceAllocator::Allocate(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
	}
}

void CgsGraphics::Im3dBase<CgsGraphics::PositionOnlyVertex>::Construct(rw::IResourceAllocator *const  lpAllocator, const void *const*  lapVertexProgramBinary, const uint32_t *  lauVertexProgramSize, const void *const*  lapPixelProgramBinary, const uint32_t *  lauPixelProgramSize, const int8_t  li8NumberPrograms) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::PositionOnlyVertex>::Construct(rw::IResourceAllocator *const  lpAllocator, const void *const*  lapVertexProgramBinary, const uint32_t *  lauVertexProgramSize, const void *const*  lapPixelProgramBinary, const uint32_t *  lauPixelProgramSize, const int8_t  li8NumberPrograms) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:418
		int32_t li8ProgramIndex;

		// CgsImRenderer.h:428
		renderengine::VertexDescriptor::Parameters lVertexDescriptorParameters;

		// CgsImRenderer.h:431
		ResourceDescriptor lVertexDescriptorResourceDescriptor;

		// CgsImRenderer.h:432
		Resource lVertexDescriptorResource;

	}
}

void renderengine::VertexDescriptor::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vertexdescriptor.h:181
		uint32_t n;

	}
}

void CgsGraphics::PositionOnlyVertex::FillVertexDescriptorParameters(const renderengine::VertexDescriptor::Parameters &  lVertexDescriptorParameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexDescriptor::Parameters::SetElementStream(uint32_t  elementIndex, uint32_t  stream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexDescriptor::Parameters::SetElementOffset(uint32_t  elementIndex, uint32_t  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexDescriptor::Parameters::SetElementFormat(uint32_t  elementIndex, renderengine::VertexFormat  format) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexDescriptor::Parameters::SetElementType(uint32_t  elementIndex, renderengine::VertexDescriptor::ElementType  type) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::PositionOnlyVertex>::AddProgram(rw::IResourceAllocator *const  lpAllocator, const void *const  lpVertexProgramBinary, const uint32_t  luVertexProgramSize, const void *const  lpPixelProgramBinary, const uint32_t  luPixelProgramSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:481
		int8_t li8ProgramIndex;

		// CgsImRenderer.h:494
		renderengine::ProgramBuffer::Parameters lVertexProgramBufferParams;

		// CgsImRenderer.h:498
		ResourceDescriptor lVertexProgramResDesc;

		// CgsImRenderer.h:499
		Resource lVertexProgramResource;

		// CgsImRenderer.h:503
		renderengine::ProgramBuffer::Parameters lPixelProgramBufferParams;

		// CgsImRenderer.h:507
		ResourceDescriptor lPixelProgramResDesc;

		// CgsImRenderer.h:508
		Resource lPixelProgramResource;

	}
}

void renderengine::ProgramBuffer::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::Parameters::SetType(renderengine::ProgramBuffer::Type  type) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::Parameters::SetBuffer(void *  buffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::Parameters::SetSize(uint32_t  size) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::PositionOnlyVertex>::GetVertexProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im3dZOnly::Construct(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3d.cpp:231
		const void *[8] lapVertexProgramBinary;

		// CgsIm3d.cpp:232
		uint32_t[8] lauVertexProgramSize;

		// CgsIm3d.cpp:233
		const void *[8] lapPixelProgramBinary;

		// CgsIm3d.cpp:234
		uint32_t[8] lauPixelProgramSize;

		Im3dBase<CgsGraphics::PositionOnlyVertex>::Construct(/* parameters */);
	}
	rw::math::vpu::Matrix44::SetIdentity(/* parameters */);
	renderengine::VertexDescriptor::Parameters::Parameters(/* parameters */);
	PositionOnlyVertex::FillVertexDescriptorParameters(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementOffset(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	ImRenderer<CgsGraphics::PositionOnlyVertex>::AddProgram(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	ImRenderer<CgsGraphics::PositionOnlyVertex>::GetVertexProgram(/* parameters */);
}

void CgsGraphics::Im3dBase<CgsGraphics::BasicColouredVertex>::Construct(rw::IResourceAllocator *const  lpAllocator, const void *const*  lapVertexProgramBinary, const uint32_t *  lauVertexProgramSize, const void *const*  lapPixelProgramBinary, const uint32_t *  lauPixelProgramSize, const int8_t  li8NumberPrograms) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredVertex>::Construct(rw::IResourceAllocator *const  lpAllocator, const void *const*  lapVertexProgramBinary, const uint32_t *  lauVertexProgramSize, const void *const*  lapPixelProgramBinary, const uint32_t *  lauPixelProgramSize, const int8_t  li8NumberPrograms) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:418
		int32_t li8ProgramIndex;

		// CgsImRenderer.h:428
		renderengine::VertexDescriptor::Parameters lVertexDescriptorParameters;

		// CgsImRenderer.h:431
		ResourceDescriptor lVertexDescriptorResourceDescriptor;

		// CgsImRenderer.h:432
		Resource lVertexDescriptorResource;

	}
}

void CgsGraphics::BasicColouredVertex::FillVertexDescriptorParameters(const renderengine::VertexDescriptor::Parameters &  lVertexDescriptorParameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredVertex>::AddProgram(rw::IResourceAllocator *const  lpAllocator, const void *const  lpVertexProgramBinary, const uint32_t  luVertexProgramSize, const void *const  lpPixelProgramBinary, const uint32_t  luPixelProgramSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:481
		int8_t li8ProgramIndex;

		// CgsImRenderer.h:494
		renderengine::ProgramBuffer::Parameters lVertexProgramBufferParams;

		// CgsImRenderer.h:498
		ResourceDescriptor lVertexProgramResDesc;

		// CgsImRenderer.h:499
		Resource lVertexProgramResource;

		// CgsImRenderer.h:503
		renderengine::ProgramBuffer::Parameters lPixelProgramBufferParams;

		// CgsImRenderer.h:507
		ResourceDescriptor lPixelProgramResDesc;

		// CgsImRenderer.h:508
		Resource lPixelProgramResource;

	}
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredVertex>::GetVertexProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im3dUntex::Construct(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3d.cpp:192
		const void *[8] lapVertexProgramBinary;

		// CgsIm3d.cpp:193
		uint32_t[8] lauVertexProgramSize;

		// CgsIm3d.cpp:194
		const void *[8] lapPixelProgramBinary;

		// CgsIm3d.cpp:195
		uint32_t[8] lauPixelProgramSize;

		Im3dBase<CgsGraphics::BasicColouredVertex>::Construct(/* parameters */);
	}
	rw::math::vpu::Matrix44::SetIdentity(/* parameters */);
	renderengine::VertexDescriptor::Parameters::Parameters(/* parameters */);
	BasicColouredVertex::FillVertexDescriptorParameters(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementOffset(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementOffset(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	ImRenderer<CgsGraphics::BasicColouredVertex>::AddProgram(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	ImRenderer<CgsGraphics::BasicColouredVertex>::GetVertexProgram(/* parameters */);
}

void CgsGraphics::Im3dBase<CgsGraphics::BasicColouredTexturedVertex>::Construct(rw::IResourceAllocator *const  lpAllocator, const void *const*  lapVertexProgramBinary, const uint32_t *  lauVertexProgramSize, const void *const*  lapPixelProgramBinary, const uint32_t *  lauPixelProgramSize, const int8_t  li8NumberPrograms) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::Construct(rw::IResourceAllocator *const  lpAllocator, const void *const*  lapVertexProgramBinary, const uint32_t *  lauVertexProgramSize, const void *const*  lapPixelProgramBinary, const uint32_t *  lauPixelProgramSize, const int8_t  li8NumberPrograms) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:418
		int32_t li8ProgramIndex;

		// CgsImRenderer.h:428
		renderengine::VertexDescriptor::Parameters lVertexDescriptorParameters;

		// CgsImRenderer.h:431
		ResourceDescriptor lVertexDescriptorResourceDescriptor;

		// CgsImRenderer.h:432
		Resource lVertexDescriptorResource;

	}
}

void CgsGraphics::BasicColouredTexturedVertex::FillVertexDescriptorParameters(const renderengine::VertexDescriptor::Parameters &  lVertexDescriptorParameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::AddProgram(rw::IResourceAllocator *const  lpAllocator, const void *const  lpVertexProgramBinary, const uint32_t  luVertexProgramSize, const void *const  lpPixelProgramBinary, const uint32_t  luPixelProgramSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:481
		int8_t li8ProgramIndex;

		// CgsImRenderer.h:494
		renderengine::ProgramBuffer::Parameters lVertexProgramBufferParams;

		// CgsImRenderer.h:498
		ResourceDescriptor lVertexProgramResDesc;

		// CgsImRenderer.h:499
		Resource lVertexProgramResource;

		// CgsImRenderer.h:503
		renderengine::ProgramBuffer::Parameters lPixelProgramBufferParams;

		// CgsImRenderer.h:507
		ResourceDescriptor lPixelProgramResDesc;

		// CgsImRenderer.h:508
		Resource lPixelProgramResource;

	}
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::GetVertexProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::GetPixelProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im3d::Construct(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3d.cpp:89
		uint32_t i;

		// CgsIm3d.cpp:90
		int32_t liShader;

		// CgsIm3d.cpp:92
		CgsGraphics::Im3d::EShaders leMaskShader;

		// CgsIm3d.cpp:93
		CgsGraphics::Im3d::EShaders leShader;

		// CgsIm3d.cpp:95
		const void *[8] lapVertexProgramBinary;

		// CgsIm3d.cpp:96
		uint32_t[8] lauVertexProgramSize;

		// CgsIm3d.cpp:97
		const void *[8] lapPixelProgramBinary;

		// CgsIm3d.cpp:98
		uint32_t[8] lauPixelProgramSize;

		Im3dBase<CgsGraphics::BasicColouredTexturedVertex>::Construct(/* parameters */);
	}
	ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::Construct(/* parameters */);
	renderengine::VertexDescriptor::Parameters::Parameters(/* parameters */);
	BasicColouredTexturedVertex::FillVertexDescriptorParameters(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementOffset(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementOffset(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::AddProgram(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::GetVertexProgram(/* parameters */);
	ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::GetVertexProgram(/* parameters */);
	ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::GetPixelProgram(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	{
		// CgsIm3d.cpp:147
		char[256] lacVarName;

		// CgsIm3d.cpp:148
		char lcMaskChar;

	}
	ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::GetVertexProgram(/* parameters */);
	ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::GetPixelProgram(/* parameters */);
	ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::GetVertexProgram(/* parameters */);
	ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::GetPixelProgram(/* parameters */);
	ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::GetVertexProgram(/* parameters */);
	ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::GetPixelProgram(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
}

void CgsGraphics::Im2dBase<CgsGraphics::Basic2dColouredVertex>::Construct(rw::IResourceAllocator *const  lpAllocator, const void *const*  lapVertexProgramBinary, const uint32_t *  lauVertexProgramSize, const void *const*  lapPixelProgramBinary, const uint32_t *  lauPixelProgramSize, const int8_t  li8NumberPrograms) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dTransform::GetDefault() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dTransform::operator=(const const Im2dTransform &  lOther) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredVertex>::Construct(rw::IResourceAllocator *const  lpAllocator, const void *const*  lapVertexProgramBinary, const uint32_t *  lauVertexProgramSize, const void *const*  lapPixelProgramBinary, const uint32_t *  lauPixelProgramSize, const int8_t  li8NumberPrograms) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:418
		int32_t li8ProgramIndex;

		// CgsImRenderer.h:428
		renderengine::VertexDescriptor::Parameters lVertexDescriptorParameters;

		// CgsImRenderer.h:431
		ResourceDescriptor lVertexDescriptorResourceDescriptor;

		// CgsImRenderer.h:432
		Resource lVertexDescriptorResource;

	}
}

void CgsGraphics::Basic2dColouredVertex::FillVertexDescriptorParameters(const renderengine::VertexDescriptor::Parameters &  lVertexDescriptorParameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredVertex>::AddProgram(rw::IResourceAllocator *const  lpAllocator, const void *const  lpVertexProgramBinary, const uint32_t  luVertexProgramSize, const void *const  lpPixelProgramBinary, const uint32_t  luPixelProgramSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:481
		int8_t li8ProgramIndex;

		// CgsImRenderer.h:494
		renderengine::ProgramBuffer::Parameters lVertexProgramBufferParams;

		// CgsImRenderer.h:498
		ResourceDescriptor lVertexProgramResDesc;

		// CgsImRenderer.h:499
		Resource lVertexProgramResource;

		// CgsImRenderer.h:503
		renderengine::ProgramBuffer::Parameters lPixelProgramBufferParams;

		// CgsImRenderer.h:507
		ResourceDescriptor lPixelProgramResDesc;

		// CgsImRenderer.h:508
		Resource lPixelProgramResource;

	}
}

void CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredVertex>::GetVertexProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dUntex::Construct(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2d.cpp:315
		const void *[8] lapVertexProgramBinary;

		// CgsIm2d.cpp:316
		uint32_t[8] lauVertexProgramSize;

		// CgsIm2d.cpp:317
		const void *[8] lapPixelProgramBinary;

		// CgsIm2d.cpp:318
		uint32_t[8] lauPixelProgramSize;

		Im2dBase<CgsGraphics::Basic2dColouredVertex>::Construct(/* parameters */);
	}
	renderengine::VertexDescriptor::Parameters::Parameters(/* parameters */);
	Basic2dColouredVertex::FillVertexDescriptorParameters(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementOffset(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementOffset(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	ImRenderer<CgsGraphics::Basic2dColouredVertex>::AddProgram(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	ImRenderer<CgsGraphics::Basic2dColouredVertex>::GetVertexProgram(/* parameters */);
	ImRenderer<CgsGraphics::Basic2dColouredVertex>::GetVertexProgram(/* parameters */);
	ImRenderer<CgsGraphics::Basic2dColouredVertex>::GetVertexProgram(/* parameters */);
	ImRenderer<CgsGraphics::Basic2dColouredVertex>::GetVertexProgram(/* parameters */);
}

void CgsGraphics::Im2dBase<CgsGraphics::Basic2dColouredTexturedVertex>::Construct(rw::IResourceAllocator *const  lpAllocator, const void *const*  lapVertexProgramBinary, const uint32_t *  lauVertexProgramSize, const void *const*  lapPixelProgramBinary, const uint32_t *  lauPixelProgramSize, const int8_t  li8NumberPrograms) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::Construct(rw::IResourceAllocator *const  lpAllocator, const void *const*  lapVertexProgramBinary, const uint32_t *  lauVertexProgramSize, const void *const*  lapPixelProgramBinary, const uint32_t *  lauPixelProgramSize, const int8_t  li8NumberPrograms) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:418
		int32_t li8ProgramIndex;

		// CgsImRenderer.h:428
		renderengine::VertexDescriptor::Parameters lVertexDescriptorParameters;

		// CgsImRenderer.h:431
		ResourceDescriptor lVertexDescriptorResourceDescriptor;

		// CgsImRenderer.h:432
		Resource lVertexDescriptorResource;

	}
}

void CgsGraphics::Basic2dColouredTexturedVertex::FillVertexDescriptorParameters(const renderengine::VertexDescriptor::Parameters &  lVertexDescriptorParameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::AddProgram(rw::IResourceAllocator *const  lpAllocator, const void *const  lpVertexProgramBinary, const uint32_t  luVertexProgramSize, const void *const  lpPixelProgramBinary, const uint32_t  luPixelProgramSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:481
		int8_t li8ProgramIndex;

		// CgsImRenderer.h:494
		renderengine::ProgramBuffer::Parameters lVertexProgramBufferParams;

		// CgsImRenderer.h:498
		ResourceDescriptor lVertexProgramResDesc;

		// CgsImRenderer.h:499
		Resource lVertexProgramResource;

		// CgsImRenderer.h:503
		renderengine::ProgramBuffer::Parameters lPixelProgramBufferParams;

		// CgsImRenderer.h:507
		ResourceDescriptor lPixelProgramResDesc;

		// CgsImRenderer.h:508
		Resource lPixelProgramResource;

	}
}

void CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::GetVertexProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::GetPixelProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2d::Construct(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2d.cpp:114
		uint8_t i;

		// CgsIm2d.cpp:115
		int32_t liShader;

		// CgsIm2d.cpp:116
		CgsGraphics::Im2d::EShaders leMaskShader;

		// CgsIm2d.cpp:117
		CgsGraphics::Im2d::EShaders leShader;

		// CgsIm2d.cpp:119
		const void *[8] lapVertexProgramBinary;

		// CgsIm2d.cpp:120
		uint32_t[8] lauVertexProgramSize;

		// CgsIm2d.cpp:121
		const void *[8] lapPixelProgramBinary;

		// CgsIm2d.cpp:122
		uint32_t[8] lauPixelProgramSize;

	}
	Im2dBase<CgsGraphics::Basic2dColouredTexturedVertex>::Construct(/* parameters */);
	ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::Construct(/* parameters */);
	renderengine::VertexDescriptor::Parameters::Parameters(/* parameters */);
	Basic2dColouredTexturedVertex::FillVertexDescriptorParameters(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementOffset(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementOffset(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementOffset(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::AddProgram(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::GetVertexProgram(/* parameters */);
	ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::GetVertexProgram(/* parameters */);
	ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::GetVertexProgram(/* parameters */);
	ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::GetVertexProgram(/* parameters */);
	ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::GetVertexProgram(/* parameters */);
	ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::GetPixelProgram(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	{
		// CgsIm2d.cpp:212
		char[256] lacVarName;

		// CgsIm2d.cpp:213
		char lcMaskChar;

	}
	ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::GetVertexProgram(/* parameters */);
	ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::GetPixelProgram(/* parameters */);
	ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::GetVertexProgram(/* parameters */);
	ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::GetPixelProgram(/* parameters */);
	ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::GetVertexProgram(/* parameters */);
	ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::GetPixelProgram(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::GetPixelProgram(/* parameters */);
	ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::GetPixelProgram(/* parameters */);
}

void renderengine::DrawIndexedParameters::GetIndexCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::OcclusionCullManager::StoreOccludeeBoundingBox_TrivialAccept() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void RenderableMesh::GetNumVertexDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MaterialAssembly::GetMaterial(uint32_t  lnIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void MaterialTechnique::GetShaderTechnique() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderTechnique::GetExternalObjectVertexShaderConstants() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::OcclusionCullManager::GetViewProjectionMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchList::GetCommandFromIndex_Sorted(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcher.h:624
		SortKey luKey;

		// CgsDispatcher.h:626
		uint64_t luOffset;

	}
}

void CgsGraphics::OcclusionCullManager::TrivialAcceptOccludeeBoundingBox() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ShaderConstantTable::AddShaderConstantArray(uint32_t  luIndex, const char *  lpName, const uint8_t  luSizeOfEachEntryInBytes, const uint8_t  luNumEntries) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.h:309
		char * lpHeapName;

	}
}

void ShaderConstantTable::ShaderConstantTable(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	ShaderConstantTable::AddShaderConstantArray(/* parameters */);
	ShaderConstantTable::AddShaderConstantArray(/* parameters */);
}

void CgsContainers::CgsHash::CalculateHash(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA32::RGBA32(float32_t  red, float32_t  green, float32_t  blue, float32_t  alpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Vector4Template(float  _x, float  _y, float  _z, float  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<double>::Vector2Template(double  _x, double  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResource::SmallResource(const const SmallMemoryResource &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<3u>::BaseResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:307
		uint32_t i;

	}
}

void rw::BaseResources<3u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Im2dTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextureScopeTable::TextureScopeTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextureScopeTable::AddTexturePurpose(const CgsGraphics::TexturePurpose  lePurpose, const char *  lpName, const CgsGraphics::TextureScope  leScope) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTextureScopeTable.h:244
		char * lpHeapName;

	}
}

void CgsGraphics::TextureScopeTableElement::SetPurposeName(const char *  lpName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextureScopeTableElement::SetPurpose(CgsGraphics::TexturePurpose  lePurpose) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextureScopeTableElement::SetScope(CgsGraphics::TextureScope  leScope) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextureScopeTableElement::SetTexture(const Texture *  lpTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextureScopeTableElement::SetDispatchBinPointer(const TextureState *  lpNewDispatchBinCopy, bool  lbUseDispatchThreadVersion) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextureScopeTableElement::SetTextureState(const TextureState *  lpTextureState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::~BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::RemoveFromCurrentList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void __static_initialization_and_destruction_0(int  __initialize_p, int  __priority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::BaseResourcePtr::~BaseResourcePtr(/* parameters */);
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	CgsGraphics::TextureScopeTable::TextureScopeTable(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetPurposeName(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetTexture(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetPurpose(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetDispatchBinPointer(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetTextureState(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetDispatchBinPointer(/* parameters */);
	CgsGraphics::TextureScopeTable::AddTexturePurpose(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetTexture(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetPurposeName(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetScope(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetPurpose(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetDispatchBinPointer(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetTextureState(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetDispatchBinPointer(/* parameters */);
	CgsGraphics::TextureScopeTable::AddTexturePurpose(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetPurpose(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetTexture(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetPurposeName(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetScope(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetDispatchBinPointer(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetTextureState(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetDispatchBinPointer(/* parameters */);
	CgsGraphics::TextureScopeTable::AddTexturePurpose(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetTexture(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetPurposeName(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetScope(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetPurpose(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetDispatchBinPointer(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetTextureState(/* parameters */);
	CgsGraphics::TextureScopeTable::AddTexturePurpose(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetDispatchBinPointer(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetPurposeName(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetPurpose(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetTexture(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetScope(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetDispatchBinPointer(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetTextureState(/* parameters */);
	CgsGraphics::TextureScopeTable::AddTexturePurpose(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetDispatchBinPointer(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetPurposeName(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetPurpose(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetTexture(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetScope(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetDispatchBinPointer(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetTextureState(/* parameters */);
	CgsGraphics::TextureScopeTable::AddTexturePurpose(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetDispatchBinPointer(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetPurposeName(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetPurpose(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetTexture(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetScope(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetDispatchBinPointer(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetTextureState(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetDispatchBinPointer(/* parameters */);
}

extern void FloatShaderStateIterator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramVariableHandle::ProgramVariableHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::FloatShaderStateIterator::Write(const const rw::math::vpu::Vector4 &  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramVariableHandle::GetProgramType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramVariableHandle::GetConstantIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramVariableHandle::GetNumConstants() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramVariableHandle::PS3GetProgramBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::PS3GetCgProgramBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToHostPtr<_CGprogram>(_CGprogram *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::PS3GetPixelProgramOffset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetState(const TextureState *const  lpTextureState, const uint32_t  luSamplerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const TextureState *  textureState, uint32_t  id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.h:924
		const SamplerState *const lpSamplerState;

		// shadowingdevice.h:925
		renderengine::Texture *const lpTexture;

	}
}

void CgsGraphics::ImRendererBase::SetTexture(renderengine::Texture *const  lpTexture, const uint32_t  luSamplerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetResource(renderengine::Texture *const  lpTexture, const uint32_t  luSamplerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2d::SetMaskPixelShaderState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2d.h:419
		FloatShaderStateIterator lShaderStateIterator;

		// CgsIm2d.h:420
		int8_t li8Shader;

		{
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			{
				(None)unknown_arg
			}
			{
				(None)unknown_arg
			}
			{
				(None)unknown_arg
			}
			{
				(None)unknown_arg
				(None)unknown_arg
				(None)unknown_arg
				(None)unknown_arg
				{
					{
					}
				}
			}
			{
				(None)unknown_arg
			}
			{
				{
					(None)unknown_arg
				}
				{
					(None)unknown_arg
					{
						(None)unknown_arg
						{
							(None)unknown_arg
						}
					}
				}
				{
					(None)unknown_arg
				}
				{
					(None)unknown_arg
				}
				{
					(None)unknown_arg
				}
				{
					(None)unknown_arg
					(None)unknown_arg
					{
						(None)unknown_arg
						(None)unknown_arg
					}
				}
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			{
				(None)unknown_arg
			}
			{
				(None)unknown_arg
			}
			{
				(None)unknown_arg
			}
			{
				(None)unknown_arg
				(None)unknown_arg
				(None)unknown_arg
				(None)unknown_arg
				{
					{
					}
				}
			}
			{
				(None)unknown_arg
			}
			{
				{
					(None)unknown_arg
				}
				{
					(None)unknown_arg
					{
						(None)unknown_arg
						{
							(None)unknown_arg
						}
					}
				}
				{
					(None)unknown_arg
				}
				{
					(None)unknown_arg
				}
				{
					(None)unknown_arg
				}
				{
					(None)unknown_arg
					(None)unknown_arg
					{
						(None)unknown_arg
						(None)unknown_arg
					}
				}
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			{
				(None)unknown_arg
			}
			{
				(None)unknown_arg
			}
			{
				(None)unknown_arg
			}
			{
				(None)unknown_arg
				(None)unknown_arg
				(None)unknown_arg
				(None)unknown_arg
				{
					{
					}
				}
			}
			{
				(None)unknown_arg
			}
			{
				{
					(None)unknown_arg
				}
				{
					(None)unknown_arg
					{
						(None)unknown_arg
						{
							(None)unknown_arg
						}
					}
				}
				{
					(None)unknown_arg
				}
				{
					(None)unknown_arg
				}
				{
					(None)unknown_arg
				}
				{
					(None)unknown_arg
					(None)unknown_arg
					{
						(None)unknown_arg
						(None)unknown_arg
					}
				}
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			{
				(None)unknown_arg
			}
			{
				(None)unknown_arg
			}
			{
				(None)unknown_arg
			}
			{
				(None)unknown_arg
				(None)unknown_arg
				(None)unknown_arg
				(None)unknown_arg
				{
					{
					}
				}
			}
			{
				(None)unknown_arg
			}
			{
				{
					(None)unknown_arg
				}
				{
					(None)unknown_arg
					{
						(None)unknown_arg
						{
							(None)unknown_arg
						}
					}
				}
				{
					(None)unknown_arg
				}
				{
					(None)unknown_arg
				}
				{
					(None)unknown_arg
				}
				{
					(None)unknown_arg
					(None)unknown_arg
					{
						(None)unknown_arg
						(None)unknown_arg
					}
				}
			}
		}
		{
			(None)unknown_arg
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
				(None)unknown_arg
				{
					{
						(None)unknown_arg
						{
						}
					}
					{
						(None)unknown_arg
						{
						}
					}
				}
			}
		}
		{
			(None)unknown_arg
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
				(None)unknown_arg
			}
		}
	}
}

void CgsGraphics::Im2d::SetMaskPixelShaderState(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	{
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	CgsGraphics::ImRendererBase::SetTexture(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
	{
	}
}

void CgsGraphics::Im2dBase<CgsGraphics::Basic2dColouredTexturedVertex>::SetTransform(const const Im2dTransform &  lTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2d.h:289
		FloatShaderStateIterator lShaderStateIterator;

	}
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	{
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	{
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY, VectorAxisX, VectorAxisY>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z, VectorIntrinsicInParam  w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:192
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:193
			VectorIntrinsicUnion::VectorIntrinsic temp0;

			// vector_intrinsic_operation_inline.h:193
			VectorIntrinsicUnion::VectorIntrinsic temp1;

		}
	}
}

void CgsGraphics::Im2dBase<CgsGraphics::Basic2dColouredTexturedVertex>::SetTransform(const rw::math::vpu::Vector2  lOrigin, const rw::math::vpu::Vector2  lRight, const rw::math::vpu::Vector2  lUp, float32_t  lfZ) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2d.h:347
		Vector4 lOriginXYZ;

		// CgsIm2d.h:348
		Vector4 lRightUp;

		// CgsIm2d.h:351
		Vector4 lColourShift;

		// CgsIm2d.h:352
		Vector4 lColourScale;

		// CgsIm2d.h:354
		Im2dTransform lTransform;

		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	Vector4<VectorAxisX, VectorAxisY, VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
}

void CgsGraphics::Im3d::SetMaskPixelShaderState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3d.cpp:372
		FloatShaderStateIterator lShaderStateIterator;

		// CgsIm3d.cpp:373
		int8_t li8Shader;

	}
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	{
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	ImRendererBase::SetState(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	ImRendererBase::SetTexture(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
	{
	}
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::SetProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im3dBase<CgsGraphics::BasicColouredTexturedVertex>::SetTransform(const rw::math::vpu::Matrix44 &  lViewProjectionMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3d.h:295
		FloatShaderStateIterator lShaderStateIterator;

	}
}

void renderengine::FloatShaderStateIterator::Write(const const rw::math::vpu::Matrix44 &  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im3d::SetProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3d.cpp:270
		bool lbProgramSet;

		// CgsIm3d.cpp:271
		bool lbUsingMask;

		// CgsIm3d.cpp:272
		CgsGraphics::Im3d::EShaders leShader;

	}
	ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::SetProgram(/* parameters */);
	Im3dBase<CgsGraphics::BasicColouredTexturedVertex>::SetTransform(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
	}
}

void CgsGraphics::Im3dBase<CgsGraphics::PositionOnlyVertex>::SetTransform(const rw::math::vpu::Matrix44 &  lViewProjectionMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3d.h:295
		FloatShaderStateIterator lShaderStateIterator;

	}
}

void CgsGraphics::Im3dBase<CgsGraphics::BasicColouredVertex>::SetTransform(const rw::math::vpu::Matrix44 &  lViewProjectionMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3d.h:295
		FloatShaderStateIterator lShaderStateIterator;

	}
}

void CgsGraphics::ImRenderer<CgsGraphics::PositionOnlyVertex>::Render(const renderengine::PrimitiveType  lePrimitiveType, const OcclusionCullManager::Im3dZOnlyVertex *const  lpVertices, const uint32_t  lnNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:669
		renderengine::Device::DirectDraw::BatchIterator lDirectDrawBatchIterator;

		// CgsImRenderer.h:670
		CgsGraphics::PositionOnlyVertex::VertexIterator lVertexIterator;

		{
			// CgsImRenderer.h:678
			uint32_t i;

		}
	}
}

void CgsGraphics::PositionOnlyVertex::VertexIterator::GetStride() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::PositionOnlyVertex::VertexIterator::Write(const const CgsGraphics::PositionOnlyVertex &  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredVertex>::Render(const renderengine::PrimitiveType  lePrimitiveType, const Im3dUntexVertex *const  lpVertices, const uint32_t  lnNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:669
		renderengine::Device::DirectDraw::BatchIterator lDirectDrawBatchIterator;

		// CgsImRenderer.h:670
		CgsGraphics::BasicColouredVertex::VertexIterator lVertexIterator;

		{
			// CgsImRenderer.h:678
			uint32_t i;

		}
	}
}

void CgsGraphics::BasicColouredVertex::VertexIterator::GetStride() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::BasicColouredVertex::VertexIterator::Write(const const CgsGraphics::BasicColouredVertex &  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2d::SetProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2d.cpp:267
		bool lbProgramSet;

		// CgsIm2d.cpp:268
		bool lbUsingMask;

		// CgsIm2d.cpp:269
		CgsGraphics::Im2d::EShaders leShader;

	}
	ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::SetProgram(/* parameters */);
	SetMaskPixelShaderState(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	ImRendererBase::SetTexture(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
}

void CgsGraphics::ShaderPatch::BeginShaderStatesPatch(const const ProgramVariableHandle &  handle, const FloatShaderStateIterator &  iterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.h:357
		void * dst;

	}
}

void renderengine::ProgramVariableHandle::GetDataType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::AddCommandSpace(uint32_t  parameterIndex, uint32_t  numRegisters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::shaderpatch::ParameterStream::Builder::AddCommandSpace(uint32_t  parameterIndex, uint32_t  numRegisters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shaderpatch.h:692
		void * dst;

		// shaderpatch.h:702
		uint8_t * base;

	}
}

void renderengine::FloatShaderStateIterator::Write(const rw::math::vpu::Vector4 *  values, uint32_t  numValues) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderPatch::EndShaderStatesPatch(const FloatShaderStateIterator &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EndShaderStates<renderengine::FloatShaderStateIterator>(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	renderengine::ProgramVariableHandle::GetProgramType(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	{
	}
}

void CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::BeginRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetState(const BlendState *const  lpBlendState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const BlendState *  blendState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetState(const DepthStencilState *const  lpDepthStencilState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const DepthStencilState *  depthStencilState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetState(const DepthStencilState *const  lpDepthStencilState, const uint32_t  luStencilRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const DepthStencilState *  depthStencilState, uint32_t  stencilRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetState(const RasterizerState *const  lpRasterizerState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const RasterizerState *  rasterizerState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetState(const RenderTargetState *const  lpRenderTargetState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetState(const SamplerState *const  lpSamplerState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const SamplerState *const  lpSamplerState, const uint32_t  luSamplerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetState(const TextureState *const  lpTextureState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetTexture(renderengine::Texture *const  lpTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2d::PushMask(TextureState *const  lpTextureState, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *const  lpVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2d::PushMask(TextureState *const  lpTextureState, renderengine::Texture *const  lpTexture, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *const  lpVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2d::SaveMaskShaderConstants(const ImCommandBatchTransformTextureBlendRender::Im2dVertex *const  lpVertices, TextureState *const  lpTextureState, renderengine::Texture *const  lpTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2d.h:378
		int32_t liShader;

		// CgsIm2d.h:379
		uint32_t luMaskIndex;

		// CgsIm2d.h:381
		Vector2 lStartPos;

		// CgsIm2d.h:382
		Vector2 lEndPos;

		// CgsIm2d.h:383
		Vector2 lDifference;

	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2d::PushMask(renderengine::Texture *const  lpTexture, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *const  lpVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2d::PopMask() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2d.h:532
		int8_t li8Shader;

		// CgsIm2d.h:533
		FloatShaderStateIterator lShaderStateIterator;

	}
}

void CgsGraphics::Im2d::PushBoostBarColours(Vector3  lOuterColour, Vector3  lInnerColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2d.h:572
		uint32_t luShaderIndex;

		// CgsIm2d.h:573
		FloatShaderStateIterator lShaderStateIterator;

	}
}

void CgsGraphics::Im2dRenderBuffer::Dispatch(CgsGraphics::Im2d *  lpImRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2dRenderBuffer.cpp:41
		const ImCommand * lpCurrentCommand;

	}
	{
		// CgsIm2dRenderBuffer.cpp:65
		const ImCommandSetStateBlend * lpCommand;

		ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
	ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::BeginRendering(/* parameters */);
	{
		// CgsIm2dRenderBuffer.cpp:187
		const ImCommandBatchTransformTextureBlendRender * lpCommand;

		ImRendererBase::SetTexture(/* parameters */);
		shadow::Device::SetResource(/* parameters */);
		ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
	{
		// CgsIm2dRenderBuffer.cpp:148
		const ImCommandPushBoostBarColours * lpCommand;

		Im2d::PushBoostBarColours(/* parameters */);
		BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
	}
	{
		// CgsIm2dRenderBuffer.cpp:141
		const ImCommandSetTransformBasic * lpCommand;

	}
	Im2d::PopMask(/* parameters */);
	{
		// CgsIm2dRenderBuffer.cpp:129
		const ImCommandPushMaskTexture<CgsGraphics::Basic2dColouredTexturedVertex> * lpCommand;

		Im2d::PushMask(/* parameters */);
		ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::SetProgram(/* parameters */);
		shadow::Device::SetVertexProgram(/* parameters */);
		shadow::Device::SetPixelProgram(/* parameters */);
		Im2d::SaveMaskShaderConstants(/* parameters */);
	}
	{
		// CgsIm2dRenderBuffer.cpp:122
		const ImCommandPushMaskTextureState<CgsGraphics::Basic2dColouredTexturedVertex> * lpCommand;

		Im2d::PushMask(/* parameters */);
		Im2d::SaveMaskShaderConstants(/* parameters */);
	}
	{
		// CgsIm2dRenderBuffer.cpp:115
		const ImCommandSetTransform * lpCommand;

	}
	{
		// CgsIm2dRenderBuffer.cpp:95
		const ImCommandSetStateSampler * lpCommand;

		ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
	{
		// CgsIm2dRenderBuffer.cpp:89
		const ImCommandSetStateRenderTarget * lpCommand;

		ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
	{
		// CgsIm2dRenderBuffer.cpp:83
		const ImCommandSetStateRasterizer * lpCommand;

		ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
	{
		// CgsIm2dRenderBuffer.cpp:77
		const ImCommandSetStateDepthStencilStencilRef * lpCommand;

		ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
	{
		// CgsIm2dRenderBuffer.cpp:71
		const ImCommandSetStateDepthStencil * lpCommand;

		ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
	{
		// CgsIm2dRenderBuffer.cpp:59
		const ImCommandRenderPrimitives<CgsGraphics::Basic2dColouredTexturedVertex> * lpCommand;

	}
	ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::EndRendering(/* parameters */);
	{
		// CgsIm2dRenderBuffer.cpp:164
		const ImCommandSetScissor * lpCommand;

		// CgsIm2dRenderBuffer.cpp:165
		ScissorRectParameters lScissorParams;

		renderengine::ScissorRectParameters::ScissorRectParameters(/* parameters */);
		renderengine::ScissorRectParameters::SetRectangle(/* parameters */);
	}
	{
		// CgsIm2dRenderBuffer.cpp:180
		const ImCommandSetShaderProgram * lpCommand;

	}
	{
		// CgsIm2dRenderBuffer.cpp:173
		const ImCommandSetClear * lpCommand;

	}
	{
		// CgsIm2dRenderBuffer.cpp:107
		const ImCommandSetTexture * lpCommand;

		ImRendererBase::SetTexture(/* parameters */);
		shadow::Device::SetResource(/* parameters */);
	}
	{
		// CgsIm2dRenderBuffer.cpp:101
		const ImCommandSetStateTexture * lpCommand;

		ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
	{
		// CgsIm2dRenderBuffer.cpp:155
		const ImCommandSetViewport * lpCommand;

		// CgsIm2dRenderBuffer.cpp:156
		ViewportParameters lViewportParams;

		renderengine::ViewportParameters::ViewportParameters(/* parameters */);
		renderengine::ViewportParameters::SetRectangle(/* parameters */);
	}
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
}

void CgsGraphics::ShaderPatch::BeginShaderStatesPatchRaw(const uint16_t  luConstantIndex, const uint8_t  luNumConstants) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.h:380
		Vector4 * lpResult;

	}
}

void CgsGraphics::ShaderPatch::EndShaderStatesPatchRaw() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MaterialAssembly::GetVertexShaderConstants() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void MaterialTechnique::GetVertexShaderConstantsHandles() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void MaterialTechnique::GetNumVertexShaderConstants() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICPUShader::SetShaderConstant(const CgsGraphics::MaterialAssembly *  lMaterial, MaterialTechnique *  lpMaterialTechnique, const const uint32_t &  lConstantNameHash, const const rw::math::vpu::Vector4 &  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMaterialAnimation.cpp:62
		const ShaderConstantsInternal * lpMaterialConsts;

		// CgsMaterialAnimation.cpp:64
		uint32_t luIndex2;

		// CgsMaterialAnimation.cpp:65
		const ShaderConstantHandle * lpShaderConstantHandle;

		CgsGraphics::MaterialAssembly::GetVertexShaderConstants(/* parameters */);
		MaterialTechnique::GetVertexShaderConstantsHandles(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	}
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
	}
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
}

void UVOffsetAnimationShader::Execute(float32_t  lTime, const CgsGraphics::MaterialAssembly *  lMaterial, MaterialTechnique *  lpMaterialTechnique) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMaterialAnimation.h:35
		Vector4 lUVOffset;

	}
}

void CgsGraphics::DispatchFrame::GetList(uint32_t  uID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcher.h:413
		CgsDev::StrStream lStrStream;

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

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::BufferedDispatchFrame::GetDispatchListForWrite(uint32_t  luDispatchListId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DispatchFrame::GetList(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsGraphics::ChunkBuffer::GetChunkId(uint32_t  luChunkIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ChunkBuffer::GetChunkDef(uint32_t  luChunkIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMoviePlayer.h:467
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsMoviePlayer.h:471
		CgsDev::StrStream lStrStream;

	}
}

void CgsGraphics::ChunkBuffer::GetChunk(uint32_t  luChunkIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MoviePlayer::ByteSwap(int32_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MoviePlayer::ByteSwap(int16_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MoviePlayer::ByteSwap(uint16_t  luValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ChunkBuffer::GetChunkSize(uint32_t  luChunkIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMoviePlayer.h:480
		uint32_t luLittleEndianSize;

	}
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHandle.h:419
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourceHandle::GetResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugInterface::DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeAquire() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Matrix44Affine &  a, const rw::math::vpu::Matrix44Affine &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Matrix44Affine &  m, const rw::math::vpu::Matrix44Affine &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:84
		VectorIntrinsicUnion::VectorIntrinsic sp0;

		// matrix44affine_operation_platform_inline.h:84
		VectorIntrinsicUnion::VectorIntrinsic sp1;

		// matrix44affine_operation_platform_inline.h:84
		VectorIntrinsicUnion::VectorIntrinsic sp2;

		// matrix44affine_operation_platform_inline.h:84
		VectorIntrinsicUnion::VectorIntrinsic sp3;

		// matrix44affine_operation_platform_inline.h:85
		VectorIntrinsicUnion::VectorIntrinsic ma0;

		// matrix44affine_operation_platform_inline.h:85
		VectorIntrinsicUnion::VectorIntrinsic ma1;

		// matrix44affine_operation_platform_inline.h:85
		VectorIntrinsicUnion::VectorIntrinsic ma2;

		// matrix44affine_operation_platform_inline.h:85
		VectorIntrinsicUnion::VectorIntrinsic ma3;

		// matrix44affine_operation_platform_inline.h:86
		VectorIntrinsicUnion::VectorIntrinsic bx;

		// matrix44affine_operation_platform_inline.h:87
		VectorIntrinsicUnion::VectorIntrinsic by;

		// matrix44affine_operation_platform_inline.h:88
		VectorIntrinsicUnion::VectorIntrinsic bz;

		// matrix44affine_operation_platform_inline.h:90
		VectorIntrinsicUnion::VectorIntrinsic zero;

	}
}

void CgsDev::DebugInterface::~DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeRelease(DebugManager *  lpDebugManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::InstanceListResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInstanceListResourceType.cpp:205
		InstanceList * lpInstanceList;

	}
}

void rw::graphics::postfx::RenderTarget::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxrendertarget.h:545
		uint32_t i;

	}
}

void rw::graphics::postfx::Target::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::Parameters::SetWidth(uint32_t  lu32Width) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::Parameters::SetHeight(uint32_t  lu32Height) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::Parameters::SetNumMipMaps(uint32_t  lu32NumMipMaps) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::Parameters::SetAllocator(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::Parameters::SetNumSections(uint32_t  luSections) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::Parameters::SetUseDepthStencilAsTexture(bool  lbUseDepthStencilAsTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::GetInUse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::GetUseDevice() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::Parameters::GetColorTargetParameters(uint32_t  lu32ColorTargetId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::SetWidth(uint32_t  lu32Width) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::SetHeight(uint32_t  lu32Height) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::GetBufferFormat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::SetBufferFormat(renderengine::PixelFormat  lBufferFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::GetTextureFormat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::SetTextureFormat(renderengine::PixelFormat  lTextureFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::GetTextureType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::SetTextureType(renderengine::Texture::Type  lTextureType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::SetMultisampleFormat(uint32_t  lu32MultiSampleFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::GetBaseEDRAM() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::SetBaseEDRAM(int32_t  ln32BaseEDRAM) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::SetAllocator(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::GetUseSystemMemory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::SetUseSystemMemory(bool  lbUseSystemMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::GetFilterMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::SetFilterMode(renderengine::SamplerState::FilterMode  lFilterMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::SetNumSections(uint32_t  luNumSections) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::GetPS3CompressionBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::SetPS3CompressionBase(int32_t  li32CompressionBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::GetSharedTarget() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::GetSharedAddress() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::ShareMemoryWithTarget(const rw::graphics::postfx::Target *  parentTarget, void *  address) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::SetBufferAddress(void *  lpBufferAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::SetTileIndex(int8_t  lTileIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::GetPixelBuffer(uint32_t  luDestSliceOrFace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelBuffer::PS3GetPitch() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::SetPitch(uint32_t  lu32Pitch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelBuffer::PS3GetLocation() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::GetTileIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::Parameters::SetColorMode(rw::graphics::postfx::RenderTarget::RenderTargetMode  lColorMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::GetTarget() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::Parameters::SetDepthStencilMode(rw::graphics::postfx::RenderTarget::RenderTargetMode  lDepthStencilMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::Parameters::SetProvidedDepthStencilTarget(Target *  lpTarget) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::Parameters::GetDepthStencilParameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::GetZCullIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::SetZCullIndex(int8_t  lzCullIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::GetZCullAddress() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::SetZCullAddress(int32_t  lzCullAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::Construct(rw::IResourceAllocator *  lpResourceAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRenderTarget.cpp:52
		uint32_t i;

		// CgsRenderTarget.cpp:54
		bool lbFoundColourTarget;

		// CgsRenderTarget.cpp:55
		bool lbFoundDeviceTarget;

		// CgsRenderTarget.cpp:57
		rw::graphics::postfx::RenderTarget::Parameters lRenderTargetParameters;

		// CgsRenderTarget.cpp:102
		rw::graphics::postfx::RenderTarget::RenderTargetMode lTargetMode;

		// CgsRenderTarget.cpp:140
		const rw::graphics::postfx::Target::Parameters & lDepthStencilParams;

	}
	rw::graphics::postfx::RenderTarget::Parameters::Parameters(/* parameters */);
	rw::graphics::postfx::Target::Parameters::Parameters(/* parameters */);
	rw::graphics::postfx::Target::Parameters::Parameters(/* parameters */);
	{
	}
	rw::graphics::postfx::RenderTarget::Parameters::SetNumSections(/* parameters */);
	rw::graphics::postfx::RenderTarget::Parameters::SetUseDepthStencilAsTexture(/* parameters */);
	rw::graphics::postfx::RenderTarget::Parameters::SetWidth(/* parameters */);
	rw::graphics::postfx::RenderTarget::Parameters::SetNumMipMaps(/* parameters */);
	rw::graphics::postfx::RenderTarget::Parameters::SetHeight(/* parameters */);
	rw::graphics::postfx::RenderTarget::Parameters::SetAllocator(/* parameters */);
	{
		// CgsRenderTarget.cpp:68
		const CgsRenderTarget::CgsRenderTargetSurface & lRenderTarget;

		// CgsRenderTarget.cpp:73
		const rw::graphics::postfx::Target::Parameters & lColourParams;

		rw::graphics::postfx::Target::Parameters::SetAllocator(/* parameters */);
		rw::graphics::postfx::RenderTarget::Parameters::GetColorTargetParameters(/* parameters */);
		rw::graphics::postfx::Target::Parameters::SetWidth(/* parameters */);
		rw::graphics::postfx::Target::Parameters::SetHeight(/* parameters */);
		rw::graphics::postfx::Target::Parameters::SetMultisampleFormat(/* parameters */);
		rw::graphics::postfx::Target::Parameters::SetTextureFormat(/* parameters */);
		rw::graphics::postfx::Target::Parameters::SetBufferFormat(/* parameters */);
		rw::graphics::postfx::Target::Parameters::SetBaseEDRAM(/* parameters */);
		rw::graphics::postfx::Target::Parameters::SetTextureType(/* parameters */);
		rw::graphics::postfx::Target::Parameters::SetFilterMode(/* parameters */);
		rw::graphics::postfx::Target::Parameters::SetUseSystemMemory(/* parameters */);
		rw::graphics::postfx::Target::Parameters::SetNumSections(/* parameters */);
		CgsRenderTargetSurface::GetSharedTarget(/* parameters */);
		rw::graphics::postfx::Target::Parameters::SetPS3CompressionBase(/* parameters */);
		rw::graphics::postfx::Target::Parameters::ShareMemoryWithTarget(/* parameters */);
		rw::graphics::postfx::Target::Parameters::SetTileIndex(/* parameters */);
	}
	rw::graphics::postfx::RenderTarget::Parameters::SetColorMode(/* parameters */);
	rw::graphics::postfx::RenderTarget::Parameters::SetProvidedDepthStencilTarget(/* parameters */);
	rw::graphics::postfx::RenderTarget::Parameters::SetDepthStencilMode(/* parameters */);
	rw::graphics::postfx::Target::Parameters::SetBufferFormat(/* parameters */);
	rw::graphics::postfx::Target::Parameters::SetTextureFormat(/* parameters */);
	rw::graphics::postfx::Target::Parameters::SetWidth(/* parameters */);
	rw::graphics::postfx::Target::Parameters::SetHeight(/* parameters */);
	rw::graphics::postfx::Target::Parameters::SetMultisampleFormat(/* parameters */);
	rw::graphics::postfx::Target::Parameters::SetBaseEDRAM(/* parameters */);
	rw::graphics::postfx::Target::Parameters::SetUseSystemMemory(/* parameters */);
	rw::graphics::postfx::Target::Parameters::SetAllocator(/* parameters */);
	rw::graphics::postfx::Target::Parameters::SetZCullIndex(/* parameters */);
	rw::graphics::postfx::Target::Parameters::SetNumSections(/* parameters */);
	rw::graphics::postfx::Target::Parameters::SetZCullAddress(/* parameters */);
	rw::graphics::postfx::Target::Parameters::SetPS3CompressionBase(/* parameters */);
	CgsRenderTargetSurface::GetSharedTarget(/* parameters */);
	rw::graphics::postfx::Target::Parameters::ShareMemoryWithTarget(/* parameters */);
	rw::graphics::postfx::RenderTarget::Parameters::SetDepthStencilMode(/* parameters */);
	rw::graphics::postfx::Target::Parameters::SetBufferFormat(/* parameters */);
	rw::graphics::postfx::Target::Parameters::SetTextureFormat(/* parameters */);
	rw::graphics::postfx::Target::Parameters::SetTileIndex(/* parameters */);
	rw::graphics::postfx::RenderTarget::Parameters::SetDepthStencilMode(/* parameters */);
	{
		// CgsRenderTarget.cpp:49
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void ShaderConstantTable::GetShaderConstantName(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ShaderConstantTableElement::GetNumEntries() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ShaderConstantTableElement::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ShaderConstantShadowing::DivideExact(uint32_t  numerator, uint32_t  denominator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramVariableHandle::SetNumConstants(uint32_t  numConstants) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::swap<const char*>(const const char *&  _Left, const const char *&  _Right) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// utility:11
		const char * _Tmp;

	}
}

void std::swap<unsigned int>(const unsigned int &  _Left, const unsigned int &  _Right) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// utility:11
		unsigned int _Tmp;

	}
}

void std::swap<renderengine::ProgramVariableHandle>(const renderengine::ProgramVariableHandle &  _Left, const renderengine::ProgramVariableHandle &  _Right) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// utility:11
		ProgramVariableHandle _Tmp;

	}
}

void CgsNumeric::Min(int32_t  li0, int32_t  li1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBranchlessOperations.h:57
		int64_t li64_0;

		// CgsBranchlessOperations.h:58
		int64_t li64_1;

		// CgsBranchlessOperations.h:59
		int64_t li64Diff;

		// CgsBranchlessOperations.h:60
		int64_t li64Sign;

		// CgsBranchlessOperations.h:61
		int32_t liResult;

	}
}

void CgsGraphics::DispatchPacketInterpreter::GetTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderTechnique::GetExternalObjectPixelShaderConstants() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderTechnique::GetExternalGlobalVertexShaderConstants() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderTechnique::GetExternalGlobalPixelShaderConstants() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ShaderConstantsExternal::GetNumConstantInstances() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderTechnique::GetVertexProgramBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderTechnique::GetPixelProgramBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void MaterialTechnique::GetBlendState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void MaterialTechnique::GetDepthStencilState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void MaterialTechnique::GetRasterizerState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void MaterialTechnique::GetNumPixelShaderConstants() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MaterialAssembly::GetPixelShaderConstants() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void MaterialTechnique::GetPixelShaderConstantsHandles() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MaterialAssembly::GetInternalSampler() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void MaterialTechnique::GetSamplers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void MaterialTechnique::GetNumInternalSamplers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderPatch::CommitPatchedMicrocode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.h:326
		void * rsxAddress;

		// shadowingdevice.h:327
		uint32_t rsxOffset;

		// shadowingdevice.h:328
		uint32_t microcodeSize;

	}
}

void rw::MemCalculateOffset(const void *  first, const void *  second) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::MemAlign<std::uint8_t>(uint8_t *  ptr, uint32_t  align) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ostypes.h:433
		const SPU::HostPtr alignMask;

	}
}

void renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::CommitMicrocode(void *  rsxAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::EndEntry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shaderpatch.h:1530
		renderengine::shaderpatch::ParameterStream * stream;

	}
}

void renderengine::shaderpatch::ParameterStream::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::PS3SetPixelProgram(const renderengine::ProgramBuffer *  pixelProgram, uint32_t  rsxOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void RenderableMesh::GetVertexDescriptor(uint32_t  luTechniqueIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void RenderableMesh::GetVertexDescriptorBufferIndex(uint32_t  luVertexDescriptorIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void RenderableMesh::GetNumVertexBuffers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetMeshBuffers(const RenderableMesh *  lpMesh) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.h:843
		uint32_t luNumVertexBuffers;

	}
}

void RenderableMesh::GetIndexBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void RenderableMesh::GetVertexBuffer(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::OcclusionCullManager::GetOcclusionMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::OcclusionCullManager::BeginMeshConditionalRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsOcclusionCullManager.h:294
		int32_t liQueryIndex;

	}
}

void MaterialTechnique::IsInstanced() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::OcclusionCullManager::EndMeshConditionalRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void MaterialTechnique::IsAlphaTested() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsBlendStateFactory::GetState(uint32_t  lu32StateId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchBin::AllocateMemoryFast(uint32_t  luNumQuadWords) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcher.h:446
		void * lpResult;

	}
}

void CgsGraphics::DispatchBin::Reserve(uint32_t  luNumQuadWords) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::GetDispatchObjectContextJobState(const DispatchObjectContext *  lpDispatchObjectContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ShaderConstantShadowing::DivideRoundUp(uint32_t  numerator, uint32_t  denominator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchBin::BeginAllocateMemory(uint32_t  uMaxQwords) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchBin::EndAllocateMemory(uint32_t  uActualQwords) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::AddShaderTechniqueConstantsToDispatchBin(CgsGraphics::DispatchBin *  lpBin, CgsGraphics::DispatchObjectContext *  lpDispatchObjectContext, const MaterialTechnique *  lpMaterial, const CgsGraphics::MaterialAssembly *  lpMaterialAssembly, bool  lbRenderZOnly) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:711
		const bool lbApplyPixelShaderConstants;

		// CgsDispatcherCommands.cpp:712
		CgsGraphics::DispatchObjectContext_JobState *const lpJobState;

		// CgsDispatcherCommands.cpp:714
		const CgsGraphics::ShaderTechnique * lpShaderTechnique;

		// CgsDispatcherCommands.cpp:716
		bool lbShaderTechniqueChanged;

		// CgsDispatcherCommands.cpp:731
		const ShaderConstantsExternal * lpVertexShaderConstantsExternalObject;

		// CgsDispatcherCommands.cpp:732
		const ShaderConstantsExternal * lpPixelShaderConstantsExternalObject;

		// CgsDispatcherCommands.cpp:734
		const ShaderConstantsExternal * lpVertexShaderConstantsExternalGlobal;

		// CgsDispatcherCommands.cpp:735
		const ShaderConstantsExternal * lpPixelShaderConstantsExternalGlobal;

		// CgsDispatcherCommands.cpp:780
		const uint32_t lNumVertexShaderConstantInstancesObject;

		// CgsDispatcherCommands.cpp:781
		const uint32_t lNumVertexShaderConstantInstancesGlobal;

		// CgsDispatcherCommands.cpp:782
		const uint32_t lNumPixelShaderConstantInstancesObject;

		// CgsDispatcherCommands.cpp:783
		const uint32_t lNumPixelShaderConstantInstancesGlobal;

		// CgsDispatcherCommands.cpp:785
		uint32_t lNumPointersRequired;

		// CgsDispatcherCommands.cpp:792
		const uint32_t luNumPointerQuadWordsRequired;

		// CgsDispatcherCommands.cpp:795
		void * lMemoryForShaderConstantsVoid;

		// CgsDispatcherCommands.cpp:798
		Vector4 ** lpMemoryForShaderConstantPointers;

		// CgsDispatcherCommands.cpp:799
		Vector4 * lpMemoryForShaderConstantData;

		// CgsDispatcherCommands.cpp:822
		Vector4 * lpCmdV;

	}
	MaterialTechnique::GetShaderTechnique(/* parameters */);
	ShaderTechnique::GetExternalObjectVertexShaderConstants(/* parameters */);
	ShaderTechnique::GetExternalGlobalVertexShaderConstants(/* parameters */);
	ShaderTechnique::GetExternalGlobalPixelShaderConstants(/* parameters */);
	ShaderTechnique::GetExternalObjectPixelShaderConstants(/* parameters */);
	ShaderConstantsExternal::GetNumConstantInstances(/* parameters */);
	ShaderConstantsExternal::GetNumConstantInstances(/* parameters */);
	ShaderConstantShadowing::DivideRoundUp(/* parameters */);
	DispatchBin::BeginAllocateMemory(/* parameters */);
	DispatchBin::EndAllocateMemory(/* parameters */);
}

void CgsGraphics::DispatchBin::AllocateCommand(uint32_t  uNumExtraQwords) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcher.h:494
		DispatchCommand * pAllocated;

	}
}

void CgsGraphics::DispatchCommand::SetupCommandWord(uint32_t  CommandID, uint32_t  Size) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchBin::GetBinCurrent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetMatrix44Affine_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ShaderConstantTable::SetShaderConstantArrayData(uint32_t  luIndex, const rw::math::vpu::Vector4 *  lpVectors) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.h:494
		Vector4 * lpDest;

		// CgsShaderConstants.h:499
		uint32_t luNumEntries;

	}
}

void ShaderConstantTable::UpdateShaderChangeTableAndGetConstantDestination(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.h:671
		uint8_t lu8NumDirtyConstants;

		// CgsShaderConstants.h:676
		const ShaderConstantTableElement & lTableElement;

		// CgsShaderConstants.h:680
		uint32_t luNumQuadWords;

		// CgsShaderConstants.h:685
		Vector4 * lpConstantsInDispatchBin;

	}
}

void ShaderConstantTableElement::GetSizeOfArrayInQw() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ShaderConstantTable::FastNonOverlappedVectorMemcpy(Vector4 *  lpaTarget, const rw::math::vpu::Vector4 *  lpaSource, const uint32_t  luNumConstants) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.h:238
		uint32_t lnNumIterations;

	}
}

void ShaderConstantTable::SetShaderConstantArrayData(uint32_t  luIndex, const rw::math::vpu::Matrix44Affine *  lpMatrices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.h:510
		Vector4 * lpDest;

		// CgsShaderConstants.h:511
		Matrix44 * lpDestMatrix;

		// CgsShaderConstants.h:513
		uint32_t luCount;

	}
}

void ShaderConstantTable::SetMatrixFromAffine(const Matrix44 &  lOutput, const const rw::math::vpu::Matrix44Affine &  lInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.h:265
		VectorIntrinsicUnion::VectorIntrinsic zero;

		// CgsShaderConstants.h:266
		VectorIntrinsicUnion::VectorIntrinsic one;

		{
			// CgsShaderConstants.h:268
			VectorIntrinsicUnion::VectorIntrinsic permuteControl;

		}
		{
			// CgsShaderConstants.h:269
			VectorIntrinsicUnion::VectorIntrinsic permuteControl;

		}
		{
			// CgsShaderConstants.h:270
			VectorIntrinsicUnion::VectorIntrinsic permuteControl;

		}
		{
			// CgsShaderConstants.h:271
			VectorIntrinsicUnion::VectorIntrinsic permuteControl;

		}
	}
}

void ShaderConstantTable::GetNumQWForDirtyHeaders() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.h:944
		uint16_t lu16NumBytes;

		// CgsShaderConstants.h:950
		uint16_t lu16NumQW;

	}
}

void CgsGraphics::Model::GetFlag(uint16_t  luFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ShaderConstantTable::SetShaderConstantData(uint32_t  luIndex, const rw::math::vpu::Matrix44Affine &  lMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.h:445
		Vector4 * lpDest;

		// CgsShaderConstants.h:446
		Matrix44 * lpDestMatrix;

	}
}

void CgsGraphics::DispatchList::ExposeKeyCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchBin::BeginPacket() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchBin::EndPacket() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcher.h:465
		DispatchPacket * pPacket;

	}
}

void CgsGraphics::DispatchList::Submit(uint64_t  luSortingKey, DispatchCommand *  lpPacket) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcher.h:578
		ptrdiff_t liPacketLocalOffset;

		// CgsDispatcher.h:580
		uint64_t luKeyWhole;

		// CgsDispatcher.h:584
		uint32_t luNextSlot;

	}
}

void CgsGraphics::DispatchList::ReserveKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Model::RenderModelOnly(CgsGraphics::Model::State  leState, CgsGraphics::DispatchFrame *  lpDispatchFrame, const rw::math::vpu::Matrix44Affine &  lTransform, int32_t  liModelOnlyList, int32_t  liOpaqueList, int32_t  liTransparentList, bool  lbFrustumTest, int32_t  liRequestedTechniqueIndex, bool  lbRenderZOnly, bool  lbInstancing, uint8_t  lu8PreZList, uint8_t  lu8PreZTechniqueIndex, int32_t  liModelInstanceCount, const rw::math::vpu::Matrix44Affine **  lpapModelInstancingArray, const rw::math::vpu::Vector4 *  lpaModelInstancingStreamData, uint8_t  lu8MeshExcludeBits) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModel.h:401
		Renderable * lpRenderable;

		// CgsModel.h:406
		CgsGraphics::DispatchBin * lpDispatchBin;

		// CgsModel.h:407
		DispatchList * lpDispatchList;

		// CgsModel.h:440
		bool lbFlushAllConstants;

		// CgsModel.h:460
		DispatchPacket * lpPacketEnd;

	}
	DispatchFrame::GetList(/* parameters */);
	DispatchFrame::GetBin(/* parameters */);
	{
		// CgsModel.h:419
		const rw::math::vpu::Matrix44Affine *[1] lapReplacementModelInstancingArray;

	}
	DispatchBin::BeginPacket(/* parameters */);
	DispatchBin::EndPacket(/* parameters */);
	DispatchList::Submit(/* parameters */);
	DispatchList::ReserveKey(/* parameters */);
	ShaderConstantTable::SetShaderConstantData(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	ShaderConstantTable::UpdateShaderChangeTableAndGetConstantDestination(/* parameters */);
	ShaderConstantTable::SetMatrixFromAffine(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsModel.h:403
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void std::sort<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(ModelInstanceInfo *  _First, ModelInstanceInfo *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ModelInstanceCollector::FlushInstanceCollection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModel.cpp:724
		int liInstanceBufferLength;

		// CgsModel.cpp:726
		int liGroupIndexStart;

	}
	std::sort<CgsGraphics::ModelInstanceCollector::ModelInstanceInfo*>(/* parameters */);
	{
		// CgsModel.cpp:730
		const ModelInstanceInfo & lFirstInstanceInGroup;

		// CgsModel.cpp:732
		int liGroupIndexEnd;

		// CgsModel.cpp:733
		int liGroupIndexMax;

		// CgsModel.cpp:744
		int liNumInstancesInGroup;

		// CgsModel.cpp:746
		Model * lpModel;

		// CgsModel.cpp:747
		const const rw::math::vpu::Matrix44Affine & lInstanceMatrix;

		// CgsModel.cpp:748
		CgsGraphics::Model::State leLodState;

		// CgsModel.cpp:749
		int32_t liTechniqueIndex;

		// CgsModel.cpp:759
		bool lbHasMultipleInstances;

	}
	{
		// CgsModel.cpp:763
		Vector4 lVectorZero;

		rw::math::vpu::GetVector4_Zero(/* parameters */);
	}
	{
		// CgsModel.cpp:764
		int liInstanceWithinGroup;

	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
}

void CgsGraphics::ModelInstanceCollector::EndInstanceCollection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ModelInstanceCollector::AddInstance(Model *  lpModel, const rw::math::vpu::Matrix44Affine *  lpModelToWorldMatrix, CgsGraphics::Model::State  leLodState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModel.cpp:691
		const ModelInstanceInfo & lInstanceBufferElement;

	}
}

void MaterialTechnique::GetNumExternalSamplers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::GetDispatchBinExternalTextureStateInQuadWords(uint32_t  luNumExternalSamplers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:1818
		uint32_t luByteCount;

	}
}

void CgsGraphics::ReceiveDirtyConstantsFromDispatchBinIntoContext(const rw::math::vpu::Vector4 *  lpBinHeaderSpace, CgsGraphics::DispatchObjectContext *  lpDispatchObjectContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:1266
		const uint8_t * lpau8CountAndIndexArray;

		// CgsDispatcherCommands.cpp:1267
		uint32_t lu8NumDirtyConstants;

		// CgsDispatcherCommands.cpp:1269
		uint16_t lu16NumBytesForIndexArray;

		// CgsDispatcherCommands.cpp:1272
		const uint32_t * lpau32PointerArray;

		// CgsDispatcherCommands.cpp:1276
		uint32_t luIndex;

		{
			// CgsDispatcherCommands.cpp:1279
			uint8_t lu8DirtyConstantIndex;

		}
	}
}

void rw::math::vpu::GetVecFloat_One() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector4  v, const rw::math::vpu::Matrix44 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*=(const Vector4 &  v, const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::FrustumTest_AnyOutside(const rw::math::vpu::Matrix44 &  lBoxToClipSpace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:1015
		Vector4 I;

		// CgsDispatcherCommands.cpp:1016
		Vector4 J;

		// CgsDispatcherCommands.cpp:1017
		Vector4 K;

		// CgsDispatcherCommands.cpp:1018
		Vector4 T;

		// CgsDispatcherCommands.cpp:1020
		const VecFloat IW;

		// CgsDispatcherCommands.cpp:1021
		const VecFloat JW;

		// CgsDispatcherCommands.cpp:1022
		const VecFloat KW;

		// CgsDispatcherCommands.cpp:1023
		const VecFloat TW;

		// CgsDispatcherCommands.cpp:1025
		const rw::math::vpu::Vector4 lOffsetForMinimum;

		// CgsDispatcherCommands.cpp:1030
		const rw::math::vpu::Vector4 lOffsetForMaximum;

		// CgsDispatcherCommands.cpp:1035
		Mask4 lvIsAnyOutsidePositive;

		// CgsDispatcherCommands.cpp:1036
		Mask4 lvIsAnyOutsideNegative;

		// CgsDispatcherCommands.cpp:1037
		Mask4 lvIsAnyOutside;

		// CgsDispatcherCommands.cpp:1041
		Vector4 lvAnyOutsideResult;

		// CgsDispatcherCommands.cpp:1043
		bool lbAnyOutside;

	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector4  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Abs(const rw::math::vpu::Vector4  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:108
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector4_operation_inline.h:109
			const VectorIntrinsicUnion::VectorIntrinsic mask;

			// vector4_operation_inline.h:109
			const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

		}
	}
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector4  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector4  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:737
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector4_operation_inline.h:738
			VectorIntrinsicUnion::VectorIntrinsic signMask;

		}
	}
}

void rw::math::vpu::CompGreaterThan(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:786
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::CompLessThan(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:778
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Or(const Mask4  a, const Mask4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// mask4_operation_inline.h:38
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Select(const Mask4  mask, const rw::math::vpu::Vector4  trueValue, const rw::math::vpu::Vector4  falseValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:830
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void CgsGraphics::PackedOobb::MultiplyByMatrix(const rw::math::vpu::Matrix44 &  lMatrixIn, const Matrix44 &  lMatrixOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPackedOobb.h:107
		Matrix44 lBoxMatrix;

	}
}

void CgsGraphics::FrustumTest(const rw::math::vpu::Matrix44 &  lBoxToClipSpace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcherCommands.cpp:1223
		Vector4 I;

		// CgsDispatcherCommands.cpp:1224
		Vector4 J;

		// CgsDispatcherCommands.cpp:1225
		Vector4 K;

		// CgsDispatcherCommands.cpp:1226
		Vector4 T;

		// CgsDispatcherCommands.cpp:1228
		VecFloat IW;

		// CgsDispatcherCommands.cpp:1229
		VecFloat JW;

		// CgsDispatcherCommands.cpp:1230
		VecFloat KW;

		// CgsDispatcherCommands.cpp:1231
		VecFloat TW;

		// CgsDispatcherCommands.cpp:1233
		Vector4 lOffsetForMinimum;

		// CgsDispatcherCommands.cpp:1238
		Vector4 lOffsetForMaximum;

		// CgsDispatcherCommands.cpp:1243
		Mask4 lvIsOutsidePositive;

		// CgsDispatcherCommands.cpp:1244
		Mask4 lvIsOutsideNegative;

		// CgsDispatcherCommands.cpp:1246
		Mask4 lvIsOutsideAny;

		// CgsDispatcherCommands.cpp:1250
		Vector4 lvNewResult;

	}
}

void MaterialTechnique::GetNumSamplers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void MaterialTechnique::IsTranslucent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(void *  lpPointer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:627
		CgsDev::PrintMode leSavedPrintMode;

	}
}

void CgsDev::StrStreamBase::operator<<(CgsDev::PrintMode  lePrintMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1573
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1574
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void rw::math::fpu::Clamp<int>(int  value, int  min, int  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Max<int>(const const int &  a, const const int &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Min<int>(const const int &  a, const const int &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator><VectorAxisW>(VecFloatRef<VectorAxisW> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:374
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:376
		bool ret;

	}
}

extern void DispatchObjectContext_JobState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ShaderTechnique() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ShaderConstantsCPU::ShaderConstantsCPU() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DispatchObjectContext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchList::GetFirstKeyBlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::strstr(char *  _Str1, const char *  _Str2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderTechnique::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ShaderTechniqueResourceType::PostFixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderTechniqueResourceType.cpp:640
		CgsGraphics::ShaderTechnique * lpShaderTechnique;

		// CgsShaderTechniqueResourceType.cpp:642
		const renderengine::ProgramBuffer * lpVertexProgramBuffer;

		// CgsShaderTechniqueResourceType.cpp:643
		const renderengine::ProgramBuffer * lpPixelProgramBuffer;

		// CgsShaderTechniqueResourceType.cpp:659
		uint32_t luHintCount;

		// CgsShaderTechniqueResourceType.cpp:661
		uint32_t luShaderPriority;

		// CgsShaderTechniqueResourceType.cpp:675
		bool lbIsValidInstanceShader;

		// CgsShaderTechniqueResourceType.cpp:679
		bool lbIsValidNonInstancedShader;

		// CgsShaderTechniqueResourceType.cpp:683
		bool lbHasWorldViewProjectionMatrix;

		CgsGraphics::ShaderTechnique::GetVertexProgramBuffer(/* parameters */);
	}
	CgsGraphics::ShaderTechnique::GetPixelProgramBuffer(/* parameters */);
	{
		// CgsShaderTechniqueResourceType.cpp:662
		uint32_t luShaderPriorityHint;

		std(/* parameters */);
	}
	{
		// CgsShaderTechniqueResourceType.cpp:685
		uint32_t luIndex;

		ShaderConstantsExternal::GetNumConstantInstances(/* parameters */);
	}
	{
		// CgsShaderTechniqueResourceType.cpp:700
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsGraphics::ShaderTechnique::GetName(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsShaderTechniqueResourceType.cpp:695
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsGraphics::ShaderTechnique::GetName(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsUnicode::ConvertUtf8CharToUtf16Char(const UnicodeBuffer::CgsUtf8 *  lpUtf8Char) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsUnicode.h:33
		typedef uint32_t CgsUtf32;

		// CgsUnicode.h:906
		CgsUtf32 lUtf32Char;

		// CgsUnicode.h:907
		uint8_t luExtraBytes;

		{
			// CgsUnicode.h:905
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsUnicode.h:908
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsResource::Font::FindFontChar(CgsUtf16  lUtf16Character) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFont.h:279
		uint32_t luHash;

		// CgsFont.h:281
		uint32_t luBeginIndex;

		// CgsFont.h:283
		uint32_t luEndIndex;

		// CgsFont.h:287
		uint32_t luGlyph;

		{
			// CgsFont.h:294
			CgsUtf16 lUtf16;

		}
	}
}

void CgsResource::Font::GetFontChar(const UnicodeBuffer::CgsUtf8 *  lpUtf8Char) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFont.h:204
		CgsUtf16 lUtf16UnicodeChar;

		// CgsFont.h:210
		const FontChar * lpFontChar;

	}
	CgsUnicode::ConvertUtf8CharToUtf16Char(/* parameters */);
	FindFontChar(/* parameters */);
	FindFontChar(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::RenderStart(uint32_t  luNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:759
		ImCommandBatchTransformTextureBlendRender::Im2dVertex * lpAllocatedVerts;

	}
	{
		// CgsImRenderBuffer.h:765
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::RenderStart(uint32_t  luNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:759
		Im3dVertex * lpAllocatedVerts;

	}
	{
		// CgsImRenderBuffer.h:765
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetBufferFullRewindToLastEndRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::AllocateCommand(int32_t  liCommandType, uint32_t  luCommandSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1222
		uint32_t luCommandBufferWritePos;

		// CgsImRenderBuffer.h:1223
		uint8_t * lpuCommandBuffer;

		// CgsImRenderBuffer.h:1226
		uint32_t luAlignedSize;

		{
			// CgsImRenderBuffer.h:1219
			uintptr_t luAddress;

		}
		{
			// CgsImRenderBuffer.h:1232
			ImCommand * lpCommand;

		}
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::RenderEnd(renderengine::PrimitiveType  lePrimitiveType, const Im3dVertex *  lpVerticesFromRenderStart, uint32_t  luNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:798
		ImCommandRenderPrimitives<CgsGraphics::BasicColouredTexturedVertex> * lpCommand;

	}
	AllocateCommand(/* parameters */);
	{
	}
}

void CgsFileSystem::StreamDeviceDiskRead::GetStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ChunkBuffer::GetChunkData(uint32_t  luChunkIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMoviePlayer.h:493
		CgsDev::StrStream lStrStream;

	}
}

void CgsNumeric::Max(int32_t  li0, int32_t  li1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBranchlessOperations.h:45
		int64_t li64_0;

		// CgsBranchlessOperations.h:46
		int64_t li64_1;

		// CgsBranchlessOperations.h:47
		int64_t li64Diff;

		// CgsBranchlessOperations.h:48
		int64_t li64Sign;

		// CgsBranchlessOperations.h:49
		int32_t liResult;

	}
}

void std::toupper(int  _Ch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ctype.h:135
		int __x;

	}
}

void std::islower(int  _Ch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetBufferFullRewindToLastEndRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(int32_t  liCommandType, uint32_t  luCommandSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1222
		uint32_t luCommandBufferWritePos;

		// CgsImRenderBuffer.h:1223
		uint8_t * lpuCommandBuffer;

		// CgsImRenderBuffer.h:1226
		uint32_t luAlignedSize;

		{
			// CgsImRenderBuffer.h:1219
			uintptr_t luAddress;

		}
		{
			// CgsImRenderBuffer.h:1232
			ImCommand * lpCommand;

		}
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::BeginRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AllocateCommand(/* parameters */);
	{
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(const BlendState *  lpBlendState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:850
		ImCommandSetStateBlend * lpCommand;

	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(const BlendState *  lpBlendState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:850
		ImCommandSetStateBlend * lpCommand;

	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(const TextureState *  lpTextureState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:998
		ImCommandSetStateTexture * lpCommand;

	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(const TextureState *  lpTextureState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:998
		ImCommandSetStateTexture * lpCommand;

	}
}

void rw::graphics::postfx::RenderTarget::GetColorMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(const RenderTargetState *  lpRenderTargetState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:948
		ImCommandSetStateRenderTarget * lpCommand;

	}
}

void CgsRasterizerStateFactory::GetState(uint32_t  lu32StateId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(const RasterizerState *  lpRasterizerState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:925
		ImCommandSetStateRasterizer * lpCommand;

	}
}

void CgsDepthStencilStateFactory::GetState(uint32_t  lu32StateId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(const DepthStencilState *  lpDepthStencilState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:875
		ImCommandSetStateDepthStencil * lpCommand;

	}
}

void rw::graphics::postfx::RenderTarget::GetColorTarget(uint32_t  idx) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelBuffer::GetWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelBuffer::GetHeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetViewport(uint32_t  lu32StartX, uint32_t  lu32StartY, uint32_t  lu32Width, uint32_t  lu32Height, uint32_t  lu32RenderTarget) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1024
		ImCommandSetViewport * lpCommand;

	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetScissor(uint32_t  lu32StartX, uint32_t  lu32StartY, uint32_t  lu32Width, uint32_t  lu32Height, uint32_t  lu32RenderTarget) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1055
		ImCommandSetScissor * lpCommand;

	}
}

void CgsRenderTarget::Begin(CgsGraphics::Im2dRenderBuffer *  lpRenderBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	rw::graphics::postfx::RenderTarget::GetColorTarget(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetViewport(/* parameters */);
	renderengine::PixelBuffer::GetWidth(/* parameters */);
	renderengine::PixelBuffer::GetHeight(/* parameters */);
	{
	}
	rw::graphics::postfx::RenderTarget::GetColorTarget(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetScissor(/* parameters */);
	renderengine::PixelBuffer::GetWidth(/* parameters */);
	renderengine::PixelBuffer::GetHeight(/* parameters */);
	{
	}
	renderengine::Device::GetDefaultRenderTargetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::RenderEnd(renderengine::PrimitiveType  lePrimitiveType, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *  lpVerticesFromRenderStart, uint32_t  luNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:798
		ImCommandRenderPrimitives<CgsGraphics::Basic2dColouredTexturedVertex> * lpCommand;

	}
	AllocateCommand(/* parameters */);
	{
	}
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY, VectorAxisZ>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:177
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:178
			VectorIntrinsicUnion::VectorIntrinsic result;

			{
				// vector_intrinsic_operation_inline.h:178
				VectorIntrinsicUnion::VectorIntrinsic permuteControl;

			}
		}
	}
}

void rw::math::fpu::operator+<float>(const const Vector2Template<float> &  a, const const Vector2Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector2_operation.h:120
	Vector2Template<float> & r;

	{
		// vector2_operation.h:120
		Vector2Template<float> r;

	}
}

void rw::math::fpu::Vector2Template<float>::Set(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::GetStateLibrary() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::operator+=<float>(const Vector2Template<float> &  a, const const Vector2Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Neg(RGBA8  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::GetRed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::GetGreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::GetBlue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::GetZ() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::operator!=(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::IsEqual(const const ResourceHandle &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextObject::GetText() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHandle.h:403
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::fpu::Abs<float>(const const float &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:108
		float r;

	}
}

void rw::math::fpu::operator*<float>(const const Vector2Template<float> &  vec, const const float &  scalar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector2_operation.h:85
	Vector2Template<float> & r;

	{
		// vector2_operation.h:85
		Vector2Template<float> r;

	}
}

void rw::math::fpu::Vector2Template<float>::SetY(float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsUnicode::IncrementUtf8Pointer(const UnicodeBuffer::CgsUtf8 *  lpUtf8StringPointer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsUnicode.h:864
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::fpu::Vector2Template<float>::SetX(float  _x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextObject::GetStringWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextObject::GetNumAlternateColours() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::FontChar::IsRenderable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template(const const Vector2Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::operator*<float>(const Vector2Template<float> &  a, const const Vector2Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector2_operation.h:99
	Vector2Template<float> & r;

	{
		// vector2_operation.h:99
		Vector2Template<float> r;

	}
}

void CgsGraphics::Interpolate(RGBA  lColourA, RGBA  lColourB, float32_t  lfT) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFontRenderer.cpp:426
		const float32_t KF_ONE_OVER_255;

		// CgsFontRenderer.cpp:428
		float32_t lfR1;

		// CgsFontRenderer.cpp:429
		float32_t lfG1;

		// CgsFontRenderer.cpp:430
		float32_t lfB1;

		// CgsFontRenderer.cpp:431
		float32_t lfA1;

		// CgsFontRenderer.cpp:433
		float32_t lfR2;

		// CgsFontRenderer.cpp:434
		float32_t lfG2;

		// CgsFontRenderer.cpp:435
		float32_t lfB2;

		// CgsFontRenderer.cpp:436
		float32_t lfA2;

	}
}

void CgsGraphics::Min(RGBA8  lColourA, RGBA8  lColourB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::GetAlpha() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::SetAlpha(uint8_t  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextObject::GetAlternateColour(int32_t  liAlternateColourIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AllocateCommand(/* parameters */);
	{
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1103
		ImCommandSetShaderProgram * lpCommand;

		AllocateCommand(/* parameters */);
	}
	{
	}
	{
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::Render(renderengine::PrimitiveType  lePrimitiveType, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *  lpVertices, uint32_t  luNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:689
		ImCommandBatchTransformTextureBlendRender::Im2dVertex * lpAllocatedVerts;

	}
	{
		// CgsImRenderBuffer.h:692
		ImCommandRenderPrimitives<CgsGraphics::Basic2dColouredTexturedVertex> * lpCommand;

		AllocateCommand(/* parameters */);
	}
	{
	}
}

void renderengine::Texture::GetWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Basic2dColouredTexturedVertex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::RGBA8() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::movie::VideoRenderable::GetFrameNumber() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Min<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:20
		float test;

		// scalar_operation_platform_inline.h:21
		float r;

	}
}

void CgsGraphics::Im2dTransform::GetAspectCorrected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dRenderBuffer::SetTransform(const const Im2dTransform &  lTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2dRenderBuffer.h:161
		ImCommandSetTransform * lpCommand;

	}
}

void CgsGraphics::MovieVideoRenderer::Render(int32_t  liStartRow, VideoRenderable *  lpNewVideoRenderable, bool  lbStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMovieVideoRenderer.cpp:398
		CgsGraphics::MovieVideoRenderer::TextureInfoType * lpTextureInfoType;

		// CgsMovieVideoRenderer.cpp:470
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[4] lVertexList;

		// CgsMovieVideoRenderer.cpp:483
		int32_t liNumVideoFrames;

		// CgsMovieVideoRenderer.cpp:485
		float32_t lfCrossfadeInAlpha;

		// CgsMovieVideoRenderer.cpp:486
		int32_t liFrameNumber;

		// CgsMovieVideoRenderer.cpp:492
		float32_t lfCrossfadeOutAlpha;

		// CgsMovieVideoRenderer.cpp:493
		int32_t liReverseFrameNumber;

		// CgsMovieVideoRenderer.cpp:501
		float32_t lfCrossfadeAlpha;

		// CgsMovieVideoRenderer.cpp:503
		RGBA lVertexColour;

	}
	ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
	ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
	rw::movie::VideoRenderable::GetFrameNumber(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
	Im2dRenderBuffer::SetTransform(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
}

void CgsGraphics::MovieVideoRenderer::Render(VideoRenderable *  lpNewVideoRenderable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::movie::VideoRenderable::SetNumBuffersUsed(unsigned int  numBuffers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::movie::VideoRenderable::SetDropFrameFlag(bool  flag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::movie::VideoRenderable::SetFrameNumber(VideoRenderable::FrameNumber  frameNumber) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::movie::VideoRenderable::SetReadyToRender(bool  ready) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::ResourceDescriptor(const const MemoryResourceDescriptor &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MovieVideoRenderableOperations::Prepare(VideoRenderable *  lpVideoRenderable, unsigned int  luWidth, unsigned int  luHeight, rw::movie::VideoRenderable::VideoFormat  lVideoFormat, unsigned int  luNumVideoBuffersPerFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMovieVideoRenderer.cpp:726
		uint32_t[3] lBufSizes;

		// CgsMovieVideoRenderer.cpp:752
		uint32_t luStride;

	}
	rw::movie::VideoRenderable::SetNumBuffersUsed(/* parameters */);
	{
		// CgsMovieVideoRenderer.cpp:731
		unsigned int i;

		{
			// CgsMovieVideoRenderer.cpp:733
			uint8_t * buf;

			rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
			rw::IResourceAllocator::Allocate(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
		rw::movie::VideoRenderable::SetData(/* parameters */);
		rw::movie::VideoRenderable::SetSize(/* parameters */);
	}
	rw::movie::VideoRenderable::SetFormat(/* parameters */);
	rw::movie::VideoRenderable::SetHeight(/* parameters */);
	rw::movie::VideoRenderable::SetWidth(/* parameters */);
	rw::movie::VideoRenderable::SetStride(/* parameters */);
	rw::movie::VideoRenderable::SetStride(/* parameters */);
	rw::movie::VideoRenderable::SetStride(/* parameters */);
	{
		// CgsMovieVideoRenderer.cpp:739
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGraphics::MovieSoundRenderer::SetVolume(float32_t  lfVolume) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMovieSoundRenderer.cpp:242
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMovieSoundRenderer.cpp:241
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

extern void HeapMalloc() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~HeapMalloc() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::MemCpy(void *  lpDestination, const void *  lpSource, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

::::KF_ASPECTRATIO_WIDESCREEN = [63, 227, 142, 57];

::::KF_ASPECTRATIO_STANDARD = [63, 170, 170, 171];

::::KF_ASPECTRATIO_SQUARE = [63, 128, 0, 0];

::::KF_ASPECTRATIO_STAND_IN_PLEASE_REMOVE_ME = [63, 227, 142, 57];

::::KF_DEFAULT_FOVHORIZONTAL = [63, 201, 15, 219];

::::KF_DEFAULT_ASPECTRATIO = [63, 227, 142, 57];

::::KF_DEFAULT_NEARCLIPPLANE = [61, 204, 204, 205];

::::KF_DEFAULT_FARCLIPPLANE = [68, 122, 0, 0];

::::KF_DEFAULT_DEPTHOFFIELD = [63, 128, 0, 0];

Snd9::AZIMUTH_DEFAULT = [201, 116, 36, 0];

Snd9::FILE_SIZE_UNKNOWN = -1;

CgsUnicode::KU_TRAILING_BYTE_MASK = -64;

CgsUnicode::KU_TRAILING_BYTE = -128;

CgsUnicode::KU_SINGLE_BYTE_CHAR_MASK = -128;

CgsUnicode::KU_TWO_BYTE_CHAR_MASK = -32;

CgsUnicode::KU_TWO_BYTE_CHAR = -64;

CgsUnicode::KU_THREE_BYTE_CHAR_MASK = -16;

CgsUnicode::KU_THREE_BYTE_CHAR = -32;

CgsUnicode::KU_FOUR_BYTE_CHAR_MASK = -8;

CgsUnicode::KU_FOUR_BYTE_CHAR = -16;

ShaderConstantShadowing::gbShadowingByValueIntoDispatchBin;

ShaderConstantShadowing::gbShadowingVertexConstantByValueIntoPushBuffer;

ShaderConstantShadowing::gbShadowingPixelConstantByValueIntoPushBuffer = 1;

CgsGraphics::KU_OUTLINE_COUNT;

CgsGraphics::KU_BORDER_COUNT;

CgsGraphics::KF_ITALIC_EXTENT = [62, 35, 215, 10];

CgsGraphics::KF_DROPSHADOW_X = [64, 0, 0, 0];

CgsGraphics::KF_DROPSHADOW_Y = [64, 64, 0, 0];

CgsGraphics::KF_EMBOSS_Y = [63, 128, 0, 0];

CgsGraphics::KF_GRADIENT_SCALE = [63, 58, 225, 72];

CgsGraphics::KF_EMBOSSED_CUTOFF_HEIGHT = [66, 12, 0, 0];

CgsGraphics::DefaultValues::mkDefault_float_t = [0, 0, 0, 0];

CgsGraphics::DefaultValues::mkDefault_double_t = [0, 0, 0, 0, 0, 0, 0, 0];

renderengine::PS3PIXELFORMAT_REMAP_MASK = -32768;

renderengine::PS3PIXELFORMAT_REMAPORDER_MASK = -2147483648;

renderengine::PS3VERTEXTYPE_NA = -1;

CgsDev::PI = [64, 73, 15, 219];

CgsDev::KC_DEBUG_CHARACTER_SQUARE = -128;

CgsDev::KC_DEBUG_CHARACTER_CROSS = -127;

CgsDev::KC_DEBUG_CHARACTER_CIRCLE = -126;

CgsDev::KC_DEBUG_CHARACTER_UP = -125;

CgsDev::KC_DEBUG_CHARACTER_DOWN = -124;

CgsDev::KC_DEBUG_CHARACTER_LEFT = -123;

CgsDev::KC_DEBUG_CHARACTER_RIGHT = -122;

CgsDev::KC_DEBUG_CHARACTER_DEBUG = -121;

CgsDev::WarningSystem::Discipline::ALL = -1;

CgsDev::WarningSystem::Discipline::SOUND_DESIGN = -2147483648;

CgsDev::WarningSystem::Discipline::SOUND_ALL = -2147483648;

CgsDev::Message::ALL = -1;

EA::Thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

EA::Thread::kThreadPriorityUnknown = -2147483648;

EA::Thread::kThreadPriorityMin = -128;

EA::Thread::kProcessorDefault = -1;

EA::Thread::kProcessorAny = -2;

rw::audio::core::PRIORITY_PERMANENT = [66, 200, 0, 0];

rw::audio::core::PI = [64, 73, 15, 219];

rw::audio::core::CPU_CLOCK_MULTIPLIER = [66, 32, 0, 0];

rw::audio::core::PROCESSINGSTAGE_MASTERINGVOICE = -1;

rw::audio::core::DECIBEL_MIN = [196, 122, 0, 0];

rw::audio::core::LINEARGAIN_MIN = [0, 0, 0, 0];

rw::audio::core::CENTS_MIN = [199, 195, 80, 0];

rw::audio::core::LINEARPITCH_MIN = [21, 141, 145, 46];

rw::audio::core::PITCHLINEARTOCENTSCONST = [69, 121, 37, 5];

rw::audio::core::CODAERR_NOT_READY = -1;

rw::audio::core::CODAERR_UNSUPPORTED = -2;

rw::audio::core::EAXMA_HEADER_BLOCKSIZE_BITMASK = -4;

rw::datacontainer::DEFAULTBATCHSIZE = -2147483648;

rw::math::fpu::TOP_BIT32 = -2147483648;

rw::math::fpu::NOT_TOP_BIT32 = 2147483647;

rw::math::fpu::TOP_BIT64 = -9223372036854775808;

rw::math::fpu::MIN_INT32 = -2147483648;

rw::math::fpu::MIN_FLOAT = [0, 128, 0, 0];

rw::math::fpu::MAX_FLOAT = [127, 127, 255, 255];

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

