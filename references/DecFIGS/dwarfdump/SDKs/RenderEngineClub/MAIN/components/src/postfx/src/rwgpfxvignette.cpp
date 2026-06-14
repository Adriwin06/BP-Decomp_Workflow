// rwgpfxvignette.cpp:24
using namespace rw::math;

// rwgpfxvignette.cpp:25
using namespace rw::graphics::core;

// rwgpfxvignette.cpp:187
void rw::graphics::postfx::Vignette::GetAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rwgpfxvignette.cpp:263
void rw::graphics::postfx::Vignette::SetState(const const rw::graphics::postfx::Vignette::State &  state) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxvignette.cpp:265
		float32_t sharpParam;

		// rwgpfxvignette.cpp:266
		float32_t gradientSharpness;

		// rwgpfxvignette.cpp:267
		float32_t gradientMul;

		// rwgpfxvignette.cpp:268
		float32_t gradientAdd;

		math::vpu::operator*<VectorAxisX>(/* parameters */);
	}
	math::vpu::operator+(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::Vector4::Vector4(/* parameters */);
}

// rwgpfxvignette.cpp:55
void rw::graphics::postfx::Vignette::GetResourceDescriptor(const const rw::graphics::postfx::Vignette::Parameters &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ResourceDescriptor::ResourceDescriptor(/* parameters */);
}

// rwgpfxvignette.cpp:163
void rw::graphics::postfx::Vignette::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IResourceAllocator::Free(/* parameters */);
	IResourceAllocator::Free(/* parameters */);
	IResourceAllocator::Free(/* parameters */);
	IResourceAllocator::Free(/* parameters */);
}

// rwgpfxvignette.cpp:68
void rw::graphics::postfx::Vignette::Vignette(const const rw::graphics::postfx::Vignette::Parameters &  params) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxvignette.cpp:78
		Parameters blendStateParams;

		// rwgpfxvignette.cpp:85
		ResourceDescriptor blendStateResDesc;

		// rwgpfxvignette.cpp:92
		renderengine::VertexDescriptor::Parameters vertexDescriptorParams;

		// rwgpfxvignette.cpp:101
		ResourceDescriptor vertexDescriptorResDesc;

		// rwgpfxvignette.cpp:108
		Parameters dsParams;

		// rwgpfxvignette.cpp:113
		ResourceDescriptor dsResDesc;

		// rwgpfxvignette.cpp:120
		Parameters rasterizerStateParams;

		// rwgpfxvignette.cpp:124
		ResourceDescriptor rasterizerStateResDesc;

	}
}

// rwgpfxvignette.cpp:62
void rw::graphics::postfx::Vignette::Initialize(const const Resource &  resource, const const rw::graphics::postfx::Vignette::Parameters &  params) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxvignette.cpp:64
		Vignette * b4blur;

	}
}

// rwgpfxvignette.cpp:193
void rw::graphics::postfx::Vignette::RenderVignetteQuad(const rw::math::vpu::Vector4 *  uvOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxvignette.cpp:205
		FloatShaderStateIterator it;

		// rwgpfxvignette.cpp:219
		renderengine::Device::DirectDraw::Parameters directDrawParams;

		// rwgpfxvignette.cpp:220
		renderengine::Device::DirectDraw::BatchIterator directDrawBatchIterator;

		// rwgpfxvignette.cpp:52
		typedef VertexIterator2<renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat2> VignetteQuadVertexIterator;

		// rwgpfxvignette.cpp:221
		VignetteQuadVertexIterator vertexIterator;

		shadow::Device::SetState(/* parameters */);
	}
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetVertexProgram(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	shadow::Device::SetVertexDescriptor(/* parameters */);
	cellGcmSetVertexDataArrayInline(/* parameters */);
	BeginBatch<BrnSunCoronaVertexIterator>(/* parameters */);
	BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
	renderengine::DrawParameters::SetPrimitiveType(/* parameters */);
	{
		renderengine::Device::PS3GPUSetLabelBackEnd(/* parameters */);
		cellGcmSetWriteBackEndLabelInline(/* parameters */);
		renderengine::Device::Flush(/* parameters */);
		{
			sys_timer_usleep(/* parameters */);
			renderengine::Device::PS3CPUGetLabelValue(/* parameters */);
		}
	}
	renderengine::VertexIteratorBaseClass::SetBuffer(/* parameters */);
	{
		// rwgpfxvignette.cpp:231
		float32_t centerX;

		// rwgpfxvignette.cpp:232
		float32_t centerY;

		// rwgpfxvignette.cpp:235
		Matrix44Affine rotMatrix;

		// rwgpfxvignette.cpp:238
		Vector4 uv00;

		// rwgpfxvignette.cpp:239
		Vector4 uv01;

		// rwgpfxvignette.cpp:240
		Vector4 uv02;

		// rwgpfxvignette.cpp:241
		Vector4 uv03;

		math::vpu::VecFloat::VecFloat(/* parameters */);
	}
	renderengine::Device::SetResource(/* parameters */);
	renderengine::DrawParameters::SetVertexCount(/* parameters */);
	math::vpu::Matrix44AffineFromZRotationAngle(/* parameters */);
	math::vpu::Vector4::GetX(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_sel(/* parameters */);
	math::vpu::Vector3::Vector3(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	math::vpu::operator-(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	Write<rw::math::fpu::Vector3, rw::math::fpu::Vector2>(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator*(/* parameters */);
	vec_cts(/* parameters */);
	math::vpu::operator*(/* parameters */);
	math::vpu::Vector4::Vector4(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	math::vpu::GetVecFloat_One(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	vec_madd(/* parameters */);
	math::vpu::Vector4::Vector4(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	{
	}
	math::vpu::Mult(/* parameters */);
	math::vpu::Vector3::Vector3(/* parameters */);
	math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	math::vpu::Vector4::Vector4(/* parameters */);
	math::vpu::Vector3::Vector3(/* parameters */);
	math::vpu::Mult(/* parameters */);
	math::vpu::Vector4::Vector4(/* parameters */);
	math::vpu::_asmSwizzleStore<VectorAxisW, VectorAxisW>(/* parameters */);
	math::vpu::operator+<VectorAxisX>(/* parameters */);
	math::vpu::Mult(/* parameters */);
	math::vpu::operator+<VectorAxisX>(/* parameters */);
	math::vpu::Mult(/* parameters */);
	math::vpu::VecFloat::VecFloat(/* parameters */);
	math::vpu::operator+<VectorAxisY>(/* parameters */);
	Write<rw::math::fpu::Vector3>(/* parameters */);
	math::vpu::_asmSwizzleStore<VectorAxisW, VectorAxisW>(/* parameters */);
	math::vpu::VecFloat::VecFloat(/* parameters */);
	math::vpu::operator*<VectorAxisZ>(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::operator*<VectorAxisW>(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::_asmSwizzleStore<VectorAxisW, VectorAxisW>(/* parameters */);
	math::vpu::operator+<VectorAxisY>(/* parameters */);
	math::vpu::_asmSwizzleStore<VectorAxisW, VectorAxisW>(/* parameters */);
	Write<rw::math::fpu::Vector2U_32>(/* parameters */);
	math::vpu::VecFloat::VecFloat(/* parameters */);
	Write<rw::math::fpu::Vector3, rw::math::fpu::Vector2>(/* parameters */);
	math::vpu::VecFloat::VecFloat(/* parameters */);
	math::vpu::operator*<VectorAxisZ>(/* parameters */);
	math::vpu::operator+<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisW>(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::GetFloat(/* parameters */);
	Write<rw::math::fpu::Vector2U_32>(/* parameters */);
	math::vpu::operator+<VectorAxisY>(/* parameters */);
	math::vpu::VecFloat::VecFloat(/* parameters */);
	Write<rw::math::fpu::Vector3, rw::math::fpu::Vector2>(/* parameters */);
	math::vpu::operator+<VectorAxisX>(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	Write<rw::math::fpu::Vector3>(/* parameters */);
	math::vpu::operator*<VectorAxisZ>(/* parameters */);
	math::vpu::VecFloat::VecFloat(/* parameters */);
	math::vpu::operator*<VectorAxisW>(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::operator+<VectorAxisY>(/* parameters */);
	math::vpu::VecFloat::VecFloat(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	Write<rw::math::fpu::Vector3, rw::math::fpu::Vector2>(/* parameters */);
	Write<rw::math::fpu::Vector2U_32>(/* parameters */);
	math::vpu::operator*<VectorAxisZ>(/* parameters */);
	math::vpu::operator*<VectorAxisW>(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	EndBatch<BrnSunCoronaVertexIterator>(/* parameters */);
	{
		// rwgpfxvignette.cpp:213
		Vector4 vZero;

		math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
	}
	{
	}
}

// rwgpfxvignette.cpp:278
void rw::graphics::postfx::Vignette::Apply(RenderTarget *  renderTarget, bool  bResolveToTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxvignette.cpp:280
		FloatShaderStateIterator floatIt;

		// rwgpfxvignette.cpp:309
		Vector4 uvOffset;

	}
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	shadow::Device::SetState(/* parameters */);
	math::vpu::Vector4::SetZ(/* parameters */);
	math::vpu::Vector4::SetW(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
	}
	{
	}
	{
	}
}

