// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// BrnEffectsData.h:40
		namespace postfx {
			// rwgpfxhelper.cpp:74
			Vector3[4] Vertex;

			// rwgpfxhelper.cpp:285
			float32_t[36] g_blur9SampleOffsets;

			// rwgpfxhelper.cpp:286
			float32_t[64] g_blur16SampleOffsets;

			// rwgpfxhelper.cpp:287
			float32_t[16] g_blur4SampleOffsets;

		}

	}

}

// rwgpfxhelper.cpp:33
using namespace rw::math;

// rwgpfxhelper.cpp:34
using namespace rw::graphics::core;

// rwgpfxhelper.cpp:280
void rw::graphics::postfx::PfxHelper::GetAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rwgpfxhelper.cpp:448
void rw::graphics::postfx::PfxHelper::InitWeights_Blur16WithBilinear(float32_t *  blurWeights, int  width, int  height) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxhelper.cpp:450
		int idx;

		// rwgpfxhelper.cpp:451
		float32_t invWidth;

		// rwgpfxhelper.cpp:452
		float32_t invHeight;

	}
	{
		// rwgpfxhelper.cpp:455
		int y;

		{
			// rwgpfxhelper.cpp:457
			float32_t offsetY;

			{
				// rwgpfxhelper.cpp:459
				int x;

				{
					// rwgpfxhelper.cpp:462
					float32_t offsetX;

				}
			}
		}
	}
}

// rwgpfxhelper.cpp:481
void rw::graphics::postfx::PfxHelper::InitWeights_Blur16(float32_t *  blurWeights, int  width, int  height) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxhelper.cpp:483
		int idx;

		// rwgpfxhelper.cpp:485
		float32_t totalWeight;

		{
			// rwgpfxhelper.cpp:487
			int y;

			{
				// rwgpfxhelper.cpp:489
				float32_t offsetY;

				{
					// rwgpfxhelper.cpp:491
					int x;

					{
						// rwgpfxhelper.cpp:494
						float32_t offsetX;

						// rwgpfxhelper.cpp:502
						float32_t weight;

					}
				}
			}
		}
		{
			// rwgpfxhelper.cpp:515
			int i;

		}
	}
}

// rwgpfxhelper.cpp:388
void rw::graphics::postfx::PfxHelper::InitWeights_DirBlur16(float32_t *  blurWeights, int  width, int  height, float32_t  angle, float32_t  radius, float32_t  weightFactor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxhelper.cpp:390
		int idx;

		// rwgpfxhelper.cpp:391
		float32_t invWidth;

		// rwgpfxhelper.cpp:392
		float32_t invHeight;

		// rwgpfxhelper.cpp:394
		float32_t ca;

		// rwgpfxhelper.cpp:395
		float32_t sa;

		// rwgpfxhelper.cpp:403
		float32_t totalWeight;

	}
	math::vpu::VecFloat::VecFloat(/* parameters */);
	math::vpu::Cos(/* parameters */);
	vec_add(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_cts(/* parameters */);
	math::vpu::Sin(/* parameters */);
	vec_and(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::Abs<float>(/* parameters */);
	math::vpu::Abs<float>(/* parameters */);
	{
		// rwgpfxhelper.cpp:406
		int x;

		{
			// rwgpfxhelper.cpp:409
			float32_t offset;

			// rwgpfxhelper.cpp:420
			float32_t dist;

			// rwgpfxhelper.cpp:421
			float32_t weight;

		}
	}
	{
		// rwgpfxhelper.cpp:433
		int i;

	}
}

// rwgpfxhelper.cpp:330
void rw::graphics::postfx::PfxHelper::InitWeights_DirBlur9Quadratic(float32_t *  blurWeights, int  width, int  height, float32_t  angle, float32_t  radius, float32_t  weightFactor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxhelper.cpp:332
		int idx;

		// rwgpfxhelper.cpp:333
		float32_t invWidth;

		// rwgpfxhelper.cpp:334
		float32_t invHeight;

		// rwgpfxhelper.cpp:337
		float32_t ca;

		// rwgpfxhelper.cpp:338
		float32_t sa;

		// rwgpfxhelper.cpp:346
		float32_t totalWeight;

	}
	math::vpu::VecFloat::VecFloat(/* parameters */);
	math::vpu::Cos(/* parameters */);
	vec_add(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_cts(/* parameters */);
	math::vpu::Sin(/* parameters */);
	vec_and(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::Abs<float>(/* parameters */);
	math::vpu::Abs<float>(/* parameters */);
	{
		// rwgpfxhelper.cpp:348
		int x;

		{
			// rwgpfxhelper.cpp:351
			float32_t offset;

			// rwgpfxhelper.cpp:363
			float32_t dist;

			// rwgpfxhelper.cpp:364
			float32_t weight;

		}
	}
	{
		// rwgpfxhelper.cpp:376
		int i;

	}
}

// rwgpfxhelper.cpp:290
void rw::graphics::postfx::PfxHelper::InitWeights_DirBlur9(float32_t *  blurWeights, int  width, int  height, float32_t  angle, float32_t  radius) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxhelper.cpp:292
		int idx;

		// rwgpfxhelper.cpp:293
		float32_t invWidth;

		// rwgpfxhelper.cpp:294
		float32_t invHeight;

		// rwgpfxhelper.cpp:296
		float32_t ca;

		// rwgpfxhelper.cpp:297
		float32_t sa;

	}
	math::vpu::VecFloat::VecFloat(/* parameters */);
	math::vpu::Cos(/* parameters */);
	vec_add(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_cts(/* parameters */);
	math::vpu::Sin(/* parameters */);
	vec_and(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::Abs<float>(/* parameters */);
	math::vpu::Abs<float>(/* parameters */);
	{
		// rwgpfxhelper.cpp:306
		int x;

		{
			// rwgpfxhelper.cpp:309
			float32_t offset;

			// rwgpfxhelper.cpp:318
			float32_t weight;

		}
	}
}

// rwgpfxhelper.cpp:46
void rw::graphics::postfx::PfxHelper::GetResourceDescriptor(const const rw::graphics::postfx::PfxHelper::Parameters &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ResourceDescriptor::ResourceDescriptor(/* parameters */);
}

// rwgpfxhelper.cpp:252
void rw::graphics::postfx::PfxHelper::DestroyStates() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rwgpfxhelper.cpp:258
void rw::graphics::postfx::PfxHelper::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rwgpfxhelper.cpp:83
void rw::graphics::postfx::PfxHelper::CreateProgram(renderengine::ProgramBuffer::Type  type, void *  buffer, uint32_t  size, rw::IResourceAllocator *  allocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxhelper.cpp:86
		renderengine::ProgramBuffer::Parameters pbParams;

		// rwgpfxhelper.cpp:96
		ResourceDescriptor pbResDesc;

		// rwgpfxhelper.cpp:97
		Resource pbResource;

		// rwgpfxhelper.cpp:98
		ProgramBuffer * program;

	}
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

// rwgpfxhelper.cpp:238
void rw::graphics::postfx::PfxHelper::CreateStates() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxhelper.cpp:240
		ResourceDescriptor resDesc;

		// rwgpfxhelper.cpp:243
		Parameters blendStateOpaqueParams;

		// rwgpfxhelper.cpp:245
		ResourceDescriptor blendStateOpaqueResDesc;

		// rwgpfxhelper.cpp:246
		Resource blendStateOpaqueResource;

		ResourceDescriptor::ResourceDescriptor(/* parameters */);
		renderengine::BlendState::Parameters::Parameters(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		renderengine::BlendState::Parameters::SetBlendEnable(/* parameters */);
		IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
}

// rwgpfxhelper.cpp:102
void rw::graphics::postfx::PfxHelper::PfxHelper(const const rw::graphics::postfx::PfxHelper::Parameters &  params) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxhelper.cpp:108
		renderengine::VertexDescriptor::Parameters vertexDescriptorParams;

		// rwgpfxhelper.cpp:118
		ResourceDescriptor vertexDescriptorResDesc;

		// rwgpfxhelper.cpp:119
		Resource vertexDescriptorResource;

		// rwgpfxhelper.cpp:123
		renderengine::VertexBufferHelper::Parameters vbHelperParams;

		// rwgpfxhelper.cpp:133
		ResourceDescriptor vertexBufferResDesc;

		// rwgpfxhelper.cpp:134
		Resource vertexBufferResource;

		// rwgpfxhelper.cpp:135
		VertexBufferHelper * vbHelper;

		// rwgpfxhelper.cpp:141
		renderengine::VertexBuffer::BatchIterator vertexBufferBatch;

		// rwgpfxhelper.cpp:161
		renderengine::MeshHelper::Parameters meshStateParams;

		// rwgpfxhelper.cpp:165
		ResourceDescriptor meshStateResDesc;

		// rwgpfxhelper.cpp:166
		Resource meshStateResource;

		// rwgpfxhelper.cpp:179
		Parameters dsParams;

		// rwgpfxhelper.cpp:182
		ResourceDescriptor dsResDesc;

		// rwgpfxhelper.cpp:183
		Resource dsResource;

		{
			// rwgpfxhelper.cpp:144
			uint32_t batchSize;

			// rwgpfxhelper.cpp:145
			QuadVertexIterator iterator;

		}
		{
			// rwgpfxhelper.cpp:230
			ResourceDescriptor resDesc;

			// rwgpfxhelper.cpp:232
			rw::graphics::postfx::RenderTargetDebugger * debugger;

		}
	}
}

// rwgpfxhelper.cpp:53
void rw::graphics::postfx::PfxHelper::Initialize(const const Resource &  resource, const const rw::graphics::postfx::PfxHelper::Parameters &  params) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxhelper.cpp:55
		PfxHelper * helper;

	}
}

// rwgpfxhelper.cpp:637
void rw::graphics::postfx::PfxHelper::RenderQuad(const rw::math::vpu::Vector4 *  uvOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxhelper.cpp:652
		FloatShaderStateIterator it;

		// rwgpfxhelper.cpp:666
		DrawParameters quadDraw;

		shadow::Device::SetState(/* parameters */);
	}
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetVertexProgram(/* parameters */);
	shadow::Device::SetVertexDescriptor(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::DrawParameters::SetStartVertex(/* parameters */);
	shadow::Device::Draw(/* parameters */);
	renderengine::DrawParameters::SetPrimitiveType(/* parameters */);
	renderengine::DrawParameters::SetVertexCount(/* parameters */);
	cellGcmSetVertexDataArrayInline(/* parameters */);
	renderengine::Device::SetResource(/* parameters */);
	{
	}
	{
		// rwgpfxhelper.cpp:660
		Vector4 vZero;

		math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
	}
}

// rwgpfxhelper.cpp:598
void rw::graphics::postfx::PfxHelper::DownSample(RenderTarget *  destRenderTarget, RenderTarget *  sourceRenderTarget, rw::graphics::postfx::PfxHelper::Method  method) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxhelper.cpp:602
		FloatShaderStateIterator it;

	}
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	renderengine::TextureState::NativeGetTexture(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	{
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	renderengine::TextureState::NativeGetTexture(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	{
	}
	{
	}
}

// rwgpfxhelper.cpp:551
void rw::graphics::postfx::PfxHelper::Blur16(RenderTarget *  destRenderTarget, RenderTarget *  sourceRenderTarget, float32_t  angle, float32_t  radius, float32_t  weightFactor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxhelper.cpp:561
		FloatShaderStateIterator it;

		// rwgpfxhelper.cpp:592
		Vector4 uvOffset;

	}
	shadow::Device::SetPixelProgram(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	renderengine::TextureState::NativeGetTexture(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
}

// rwgpfxhelper.cpp:524
void rw::graphics::postfx::PfxHelper::Blur9(RenderTarget *  destRenderTarget, RenderTarget *  sourceRenderTarget, float32_t  angle, float32_t  radius, float32_t  weightFactor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxhelper.cpp:531
		FloatShaderStateIterator it;

		// rwgpfxhelper.cpp:545
		Vector4 uvOffset;

	}
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	{
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	renderengine::TextureState::NativeGetTexture(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	{
	}
	{
	}
	{
	}
}

// rwgpfxhelper.cpp:43
