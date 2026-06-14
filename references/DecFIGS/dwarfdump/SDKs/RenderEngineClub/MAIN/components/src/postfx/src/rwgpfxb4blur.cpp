// rwgpfxb4blur.cpp:34
using namespace rw::math;

// rwgpfxb4blur.cpp:35
using namespace rw::graphics;

// rwgpfxb4blur.cpp:36
using namespace rw::graphics::core;

// rwgpfxb4blur.cpp:881
void rw::graphics::postfx::B4Blur::SetState(const const rw::graphics::postfx::B4Blur::State &  state) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rwgpfxb4blur.cpp:253
void rw::graphics::postfx::B4Blur::GetAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rwgpfxb4blur.cpp:813
void rw::graphics::postfx::B4Blur::CalculateDownSampleTaps(float32_t *  blurWeights, int  width, int  height) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxb4blur.cpp:815
		int idx;

		// rwgpfxb4blur.cpp:816
		float32_t invWidth;

		// rwgpfxb4blur.cpp:817
		float32_t invHeight;

	}
	{
		// rwgpfxb4blur.cpp:820
		int y;

		{
			// rwgpfxb4blur.cpp:822
			float32_t offsetY;

			{
				// rwgpfxb4blur.cpp:824
				int x;

				{
					// rwgpfxb4blur.cpp:827
					float32_t offsetX;

				}
			}
		}
	}
}

// rwgpfxb4blur.cpp:46
void rw::graphics::postfx::B4Blur::GetResourceDescriptor(const const rw::graphics::postfx::B4Blur::Parameters &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ResourceDescriptor::ResourceDescriptor(/* parameters */);
}

// rwgpfxb4blur.cpp:231
void rw::graphics::postfx::B4Blur::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IResourceAllocator::Free(/* parameters */);
	IResourceAllocator::Free(/* parameters */);
}

// rwgpfxb4blur.cpp:940
void _GLOBAL__D__ZN17BrnRendererModule28mbIsRenderingAtFullFrameRateE() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rwgpfxb4blur.cpp:939
void _GLOBAL__I__ZN17BrnRendererModule28mbIsRenderingAtFullFrameRateE() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rwgpfxb4blur.cpp:259
void rw::graphics::postfx::B4Blur::RenderBlurQuad(const rw::math::vpu::Vector4 *  uvOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxb4blur.cpp:268
		renderengine::Device::DirectDraw::Parameters directDrawParams;

		// rwgpfxb4blur.cpp:269
		renderengine::Device::DirectDraw::BatchIterator directDrawBatchIterator;

		// rwgpfxb4blur.cpp:270
		VertexIterator5<renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat4> vertexIterator;

		shadow::Device::SetState(/* parameters */);
	}
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetVertexProgram(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	shadow::Device::SetVertexDescriptor(/* parameters */);
	cellGcmSetVertexDataArrayInline(/* parameters */);
	BeginBatch<renderengine::VertexIterator5<renderengine::VertexTypeFloat3, renderengine::VertexTypeFloat4, renderengine::VertexTypeFloat4, renderengine::VertexTypeFloat4, renderengine::VertexTypeFloat4> >(/* parameters */);
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
		// rwgpfxb4blur.cpp:280
		float32_t lrUVLeft;

		// rwgpfxb4blur.cpp:281
		float32_t lrUVTop;

		// rwgpfxb4blur.cpp:282
		float32_t lrUVRight;

		// rwgpfxb4blur.cpp:283
		float32_t lrUVBottom;

		// rwgpfxb4blur.cpp:285
		Vector2 lTopLeft;

		// rwgpfxb4blur.cpp:286
		Vector2 lTopRight;

		// rwgpfxb4blur.cpp:287
		Vector2 lBottomRight;

		// rwgpfxb4blur.cpp:288
		Vector2 lBottomLeft;

		// rwgpfxb4blur.cpp:290
		Vector2 lUVTopLeftA;

		// rwgpfxb4blur.cpp:291
		Vector2 lUVTopLeftB;

		// rwgpfxb4blur.cpp:293
		Vector2 lUVTopRightA;

		// rwgpfxb4blur.cpp:294
		Vector2 lUVTopRightB;

		// rwgpfxb4blur.cpp:296
		Vector2 lUVBottomRightA;

		// rwgpfxb4blur.cpp:297
		Vector2 lUVBottomRightB;

		// rwgpfxb4blur.cpp:299
		Vector2 lUVBottomLeftA;

		// rwgpfxb4blur.cpp:300
		Vector2 lUVBottomLeftB;

		// rwgpfxb4blur.cpp:302
		Vector4[4][4] uvBlur;

		// rwgpfxb4blur.cpp:304
		float32_t krPowB;

		// rwgpfxb4blur.cpp:305
		float32_t krPowA;

		// rwgpfxb4blur.cpp:307
		Vector2 lFocus;

		// rwgpfxb4blur.cpp:310
		Vector2 lUVScaleA;

		// rwgpfxb4blur.cpp:313
		Vector2 lUVScaleB;

		math::vpu::Vector2::Vector2(/* parameters */);
		math::vpu::Vector2::Vector2(/* parameters */);
		math::vpu::Vector2::Vector2(/* parameters */);
	}
	renderengine::Device::SetResource(/* parameters */);
	math::vpu::Vector2::Vector2(/* parameters */);
	renderengine::DrawParameters::SetVertexCount(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	math::vpu::Vector2::Vector2(/* parameters */);
	math::vpu::Vector2::Vector2(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	Max(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	math::vpu::Vector4::SetX(/* parameters */);
	Min(/* parameters */);
	math::vpu::Vector4::SetY(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	Min(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	math::vpu::Vector4::SetX(/* parameters */);
	Min(/* parameters */);
	math::vpu::Vector4::SetY(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	Max(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	math::vpu::Vector4::SetX(/* parameters */);
	Max(/* parameters */);
	math::vpu::Vector4::SetY(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	Min(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	math::vpu::Vector4::SetX(/* parameters */);
	Max(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	math::vpu::Vector4::SetY(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	Max(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	math::vpu::Vector4::SetX(/* parameters */);
	Min(/* parameters */);
	math::vpu::Vector4::SetY(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	Min(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	math::vpu::Vector4::SetX(/* parameters */);
	Min(/* parameters */);
	math::vpu::Vector4::SetY(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	Max(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	math::vpu::Vector4::SetX(/* parameters */);
	Max(/* parameters */);
	math::vpu::Vector4::SetY(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	Min(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	math::vpu::Vector4::SetX(/* parameters */);
	Max(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	math::vpu::Vector4::SetY(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	Max(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	math::vpu::Vector4::SetX(/* parameters */);
	Min(/* parameters */);
	math::vpu::Vector4::SetY(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	Min(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	math::vpu::Vector4::SetX(/* parameters */);
	Min(/* parameters */);
	math::vpu::Vector4::SetY(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	Max(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	math::vpu::Vector4::SetX(/* parameters */);
	Max(/* parameters */);
	math::vpu::Vector4::SetY(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	Min(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	math::vpu::Vector4::SetX(/* parameters */);
	Max(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	math::vpu::Vector4::SetY(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	Max(/* parameters */);
	math::vpu::Vector2::SetX(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::Vector2::SetY(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	math::vpu::Vector4::SetX(/* parameters */);
	Min(/* parameters */);
	math::vpu::Vector4::SetY(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	Min(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	math::vpu::Vector4::SetX(/* parameters */);
	Min(/* parameters */);
	math::vpu::Vector4::SetY(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	Max(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	math::vpu::Vector4::SetX(/* parameters */);
	Max(/* parameters */);
	math::vpu::Vector4::SetY(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	Min(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	math::vpu::Vector4::SetX(/* parameters */);
	Max(/* parameters */);
	math::vpu::Vector4::SetY(/* parameters */);
	Write<rw::math::fpu::Vector3, rw::math::vpu::Vector4, rw::math::vpu::Vector4, rw::math::vpu::Vector4, rw::math::vpu::Vector4>(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	Write<rw::math::vpu::Vector4>(/* parameters */);
	Write<rw::math::vpu::Vector4>(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	math::fpu::Vector4Template<float>::Y(/* parameters */);
	math::fpu::Vector4Template<float>::X(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	math::fpu::Vector4Template<float>::Z(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	math::fpu::Vector4Template<float>::W(/* parameters */);
	Write<rw::math::vpu::Vector4>(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	math::fpu::Vector4Template<float>::Y(/* parameters */);
	math::fpu::Vector4Template<float>::Z(/* parameters */);
	math::fpu::Vector4Template<float>::W(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	Write<rw::math::fpu::Vector3, rw::math::vpu::Vector4, rw::math::vpu::Vector4, rw::math::vpu::Vector4, rw::math::vpu::Vector4>(/* parameters */);
	math::fpu::Vector4Template<float>::Y(/* parameters */);
	math::fpu::Vector4Template<float>::Z(/* parameters */);
	math::fpu::Vector4Template<float>::W(/* parameters */);
	Write<rw::math::vpu::Vector4>(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
	math::fpu::Vector4Template<float>::Y(/* parameters */);
	math::fpu::Vector4Template<float>::Z(/* parameters */);
	math::fpu::Vector4Template<float>::W(/* parameters */);
	Write<rw::math::fpu::Vector3>(/* parameters */);
	math::fpu::Vector4Template<float>::W(/* parameters */);
	math::fpu::Vector4Template<float>::X(/* parameters */);
	math::fpu::Vector4Template<float>::Y(/* parameters */);
	math::fpu::Vector4Template<float>::Z(/* parameters */);
	Write<rw::math::vpu::Vector4>(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	math::fpu::Vector4Template<float>::Z(/* parameters */);
	math::fpu::Vector4Template<float>::W(/* parameters */);
	Write<rw::math::vpu::Vector4>(/* parameters */);
	math::fpu::Vector4Template<float>::Y(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	Write<rw::math::fpu::Vector3, rw::math::vpu::Vector4, rw::math::vpu::Vector4, rw::math::vpu::Vector4, rw::math::vpu::Vector4>(/* parameters */);
	math::fpu::Vector4Template<float>::Y(/* parameters */);
	math::fpu::Vector4Template<float>::Z(/* parameters */);
	math::fpu::Vector4Template<float>::W(/* parameters */);
	Write<rw::math::vpu::Vector4>(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
	math::fpu::Vector4Template<float>::Y(/* parameters */);
	math::fpu::Vector4Template<float>::Z(/* parameters */);
	math::fpu::Vector4Template<float>::W(/* parameters */);
	Write<rw::math::fpu::Vector3>(/* parameters */);
	math::fpu::Vector4Template<float>::W(/* parameters */);
	math::fpu::Vector4Template<float>::X(/* parameters */);
	math::fpu::Vector4Template<float>::Y(/* parameters */);
	math::fpu::Vector4Template<float>::Z(/* parameters */);
	Write<rw::math::vpu::Vector4>(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	math::fpu::Vector4Template<float>::Z(/* parameters */);
	math::fpu::Vector4Template<float>::W(/* parameters */);
	Write<rw::math::vpu::Vector4>(/* parameters */);
	math::fpu::Vector4Template<float>::Y(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	Write<rw::math::fpu::Vector3, rw::math::vpu::Vector4, rw::math::vpu::Vector4, rw::math::vpu::Vector4, rw::math::vpu::Vector4>(/* parameters */);
	math::fpu::Vector4Template<float>::Y(/* parameters */);
	math::fpu::Vector4Template<float>::Z(/* parameters */);
	math::fpu::Vector4Template<float>::W(/* parameters */);
	Write<rw::math::vpu::Vector4>(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
	math::fpu::Vector4Template<float>::Y(/* parameters */);
	math::fpu::Vector4Template<float>::Z(/* parameters */);
	math::fpu::Vector4Template<float>::W(/* parameters */);
	Write<rw::math::fpu::Vector3>(/* parameters */);
	math::fpu::Vector4Template<float>::W(/* parameters */);
	math::fpu::Vector4Template<float>::X(/* parameters */);
	math::fpu::Vector4Template<float>::Y(/* parameters */);
	math::fpu::Vector4Template<float>::Z(/* parameters */);
	Write<rw::math::vpu::Vector4>(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	math::fpu::Vector4Template<float>::W(/* parameters */);
	math::fpu::Vector4Template<float>::Z(/* parameters */);
	Write<rw::math::vpu::Vector4>(/* parameters */);
	math::fpu::Vector4Template<float>::Y(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	math::fpu::Vector4Template<float>::Y(/* parameters */);
	math::fpu::Vector4Template<float>::Z(/* parameters */);
	math::fpu::Vector4Template<float>::W(/* parameters */);
	Write<rw::math::vpu::Vector4>(/* parameters */);
	math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	EndBatch<renderengine::VertexIterator5<renderengine::VertexTypeFloat3, renderengine::VertexTypeFloat4, renderengine::VertexTypeFloat4, renderengine::VertexTypeFloat4, renderengine::VertexTypeFloat4> >(/* parameters */);
	math::fpu::Vector4Template<float>::Y(/* parameters */);
	math::fpu::Vector4Template<float>::Z(/* parameters */);
	math::fpu::Vector4Template<float>::W(/* parameters */);
}

// rwgpfxb4blur.cpp:60
void rw::graphics::postfx::B4Blur::B4Blur(const const rw::graphics::postfx::B4Blur::Parameters &  params) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxb4blur.cpp:72
		renderengine::VertexDescriptor::Parameters quadVtxDescParams;

		// rwgpfxb4blur.cpp:94
		ResourceDescriptor quadVtxDescResDesc;

		// rwgpfxb4blur.cpp:101
		Parameters quadDepthStencilParams;

		// rwgpfxb4blur.cpp:106
		ResourceDescriptor quadDepthStencilResDesc;

		// rwgpfxb4blur.cpp:120
		renderengine::VertexDescriptor::Parameters scatterVtxDescParams;

		// rwgpfxb4blur.cpp:134
		ResourceDescriptor scatterVtxDescResDesc;

		// rwgpfxb4blur.cpp:141
		Parameters scatterDepthStencilParams;

		// rwgpfxb4blur.cpp:146
		ResourceDescriptor scatterDepthStencilResDesc;

		// rwgpfxb4blur.cpp:201
		Parameters rasterizerStateParams;

		// rwgpfxb4blur.cpp:205
		ResourceDescriptor rasterizerStateResDesc;

	}
}

// rwgpfxb4blur.cpp:53
void rw::graphics::postfx::B4Blur::Initialize(const const Resource &  resource, const const rw::graphics::postfx::B4Blur::Parameters &  params) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxb4blur.cpp:55
		B4Blur * b4blur;

	}
}

// rwgpfxb4blur.cpp:543
void rw::graphics::postfx::B4Blur::RenderRadialQuad(const rw::math::vpu::Vector4 *  uvOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxb4blur.cpp:608
		renderengine::Device::DirectDraw::Parameters directDrawParams;

		// rwgpfxb4blur.cpp:609
		renderengine::Device::DirectDraw::BatchIterator directDrawBatchIterator;

		// rwgpfxb4blur.cpp:610
		VertexIterator3<renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat2,renderengine::VertexTypeFloat4> vertexIterator;

		shadow::Device::SetState(/* parameters */);
	}
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetVertexProgram(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	{
		// rwgpfxb4blur.cpp:553
		FloatShaderStateIterator it;

		BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	}
	{
		// rwgpfxb4blur.cpp:573
		Vector4 radialScalars1;

		// rwgpfxb4blur.cpp:578
		FloatShaderStateIterator floatIt;

		math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		{
			renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
			cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
		}
	}
	{
		// rwgpfxb4blur.cpp:591
		float32_t clampedBlurOpacity;

		// rwgpfxb4blur.cpp:596
		Vector4 radialScalars2;

		// rwgpfxb4blur.cpp:601
		FloatShaderStateIterator floatIt;

		BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	}
	shadow::Device::SetVertexDescriptor(/* parameters */);
	{
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	cellGcmSetVertexDataArrayInline(/* parameters */);
	BeginBatch<renderengine::VertexIterator3<renderengine::VertexTypeFloat3, renderengine::VertexTypeFloat2, renderengine::VertexTypeFloat4> >(/* parameters */);
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
	{
		// rwgpfxb4blur.cpp:620
		float32_t centerBlurX;

		// rwgpfxb4blur.cpp:621
		float32_t centerBlurY;

		// rwgpfxb4blur.cpp:623
		float32_t centerBlendX;

		// rwgpfxb4blur.cpp:624
		float32_t centerBlendY;

		math::vpu::Vector2::GetX(/* parameters */);
		math::vpu::operator-<VectorAxisX>(/* parameters */);
		math::vpu::operator-<VectorAxisY>(/* parameters */);
		math::vpu::operator*(/* parameters */);
		math::vpu::operator-<VectorAxisX>(/* parameters */);
		{
		}
		math::vpu::operator-<VectorAxisY>(/* parameters */);
		math::vpu::Vector2::GetX(/* parameters */);
		math::vpu::operator*(/* parameters */);
		math::vpu::operator*(/* parameters */);
		{
		}
		Write<rw::math::fpu::Vector3, rw::math::fpu::Vector2, rw::math::fpu::Vector4>(/* parameters */);
		math::vpu::operator*(/* parameters */);
		math::vpu::VecFloat::operator float(/* parameters */);
		math::vpu::VecFloat::operator float(/* parameters */);
		math::vpu::Vector2::GetX(/* parameters */);
	}
	renderengine::VertexIteratorBaseClass::SetBuffer(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	{
		{
		}
	}
	{
		{
		}
	}
	{
		{
		}
	}
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	renderengine::Device::SetResource(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	Write<rw::math::fpu::Vector3>(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	Write<rw::math::fpu::Vector2U_32>(/* parameters */);
	Write<rw::math::fpu::Vector4U_32>(/* parameters */);
	renderengine::DrawParameters::SetVertexCount(/* parameters */);
	Write<rw::math::fpu::Vector3, rw::math::fpu::Vector2, rw::math::fpu::Vector4>(/* parameters */);
	Write<rw::math::fpu::Vector2U_32>(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	Write<rw::math::fpu::Vector4U_32>(/* parameters */);
	Write<rw::math::fpu::Vector3, rw::math::fpu::Vector2, rw::math::fpu::Vector4>(/* parameters */);
	Write<rw::math::fpu::Vector4U_32>(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	Write<rw::math::fpu::Vector3, rw::math::fpu::Vector2, rw::math::fpu::Vector4>(/* parameters */);
	Write<rw::math::fpu::Vector4U_32>(/* parameters */);
	Write<rw::math::fpu::Vector3>(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	Write<rw::math::fpu::Vector3>(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	EndBatch<renderengine::VertexIterator3<renderengine::VertexTypeFloat3, renderengine::VertexTypeFloat2, renderengine::VertexTypeFloat4> >(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	{
		// rwgpfxb4blur.cpp:561
		Vector4 vZero;

		math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
}

// rwgpfxb4blur.cpp:666
void rw::graphics::postfx::B4Blur::RenderScatterQuad(const rw::math::vpu::Vector4 *  uvOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxb4blur.cpp:690
		float32_t clampedBlurVelocity;

		// rwgpfxb4blur.cpp:738
		renderengine::Device::DirectDraw::Parameters directDrawParams;

		// rwgpfxb4blur.cpp:739
		renderengine::Device::DirectDraw::BatchIterator directDrawBatchIterator;

		// rwgpfxb4blur.cpp:740
		VertexIterator3<renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat2,renderengine::VertexTypeFloat4> vertexIterator;

		shadow::Device::SetState(/* parameters */);
	}
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetVertexProgram(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	{
		// rwgpfxb4blur.cpp:676
		FloatShaderStateIterator it;

		BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	}
	{
		// rwgpfxb4blur.cpp:701
		Vector4 scatterScalars1;

		// rwgpfxb4blur.cpp:706
		FloatShaderStateIterator floatIt;

		math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		{
			renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
			cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
		}
	}
	{
		// rwgpfxb4blur.cpp:719
		float32_t clampedBlurOpacity;

		// rwgpfxb4blur.cpp:726
		Vector4 scatterScalars2;

		// rwgpfxb4blur.cpp:731
		FloatShaderStateIterator floatIt;

		BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		{
			renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
			cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
		}
	}
	shadow::Device::SetVertexDescriptor(/* parameters */);
	cellGcmSetVertexDataArrayInline(/* parameters */);
	BeginBatch<renderengine::VertexIterator3<renderengine::VertexTypeFloat3, renderengine::VertexTypeFloat2, renderengine::VertexTypeFloat4> >(/* parameters */);
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
	renderengine::DrawParameters::SetVertexCount(/* parameters */);
	renderengine::Device::SetResource(/* parameters */);
	{
		// rwgpfxb4blur.cpp:750
		float32_t centerBlurX;

		// rwgpfxb4blur.cpp:751
		float32_t centerBlurY;

		// rwgpfxb4blur.cpp:753
		float32_t centerBlendX;

		// rwgpfxb4blur.cpp:754
		float32_t centerBlendY;

		// rwgpfxb4blur.cpp:756
		Matrix44Affine rotMatrix;

		// rwgpfxb4blur.cpp:759
		Vector4 uv00;

		// rwgpfxb4blur.cpp:760
		Vector4 uv01;

		// rwgpfxb4blur.cpp:761
		Vector4 uv02;

		// rwgpfxb4blur.cpp:762
		Vector4 uv03;

		math::vpu::Matrix44AffineFromZRotationAngle(/* parameters */);
		math::vpu::VecFloat::VecFloat(/* parameters */);
		vec_add(/* parameters */);
	}
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
	math::vpu::Vector3::Vector3(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	math::vpu::Vector2::GetX(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	math::vpu::Vector2::GetX(/* parameters */);
	math::vpu::operator*(/* parameters */);
	math::vpu::operator-<VectorAxisX>(/* parameters */);
	vec_cts(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	{
	}
	math::vpu::operator*(/* parameters */);
	math::vpu::operator-<VectorAxisY>(/* parameters */);
	vec_ctf(/* parameters */);
	math::vpu::operator*(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	math::vpu::operator-(/* parameters */);
	math::vpu::operator*(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	math::vpu::Vector4::Vector4(/* parameters */);
	math::vpu::Vector4::Vector4(/* parameters */);
	vec_madd(/* parameters */);
	math::vpu::GetVecFloat_One(/* parameters */);
	vec_madd(/* parameters */);
	{
	}
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	math::vpu::Mult(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	math::vpu::Vector3::Vector3(/* parameters */);
	math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	math::vpu::Vector3::Vector3(/* parameters */);
	math::vpu::Vector4::Vector4(/* parameters */);
	math::vpu::Mult(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::operator+<VectorAxisX>(/* parameters */);
	Write<rw::math::fpu::Vector3, rw::math::fpu::Vector2, rw::math::fpu::Vector4>(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::_asmSwizzleStore<VectorAxisW, VectorAxisW>(/* parameters */);
	math::vpu::Mult(/* parameters */);
	math::vpu::operator+<VectorAxisX>(/* parameters */);
	math::vpu::operator+<VectorAxisY>(/* parameters */);
	math::vpu::operator+<VectorAxisY>(/* parameters */);
	math::vpu::Vector4::Vector4(/* parameters */);
	math::vpu::_asmSwizzleStore<VectorAxisW, VectorAxisW>(/* parameters */);
	math::vpu::Vector2::GetX(/* parameters */);
	math::vpu::VecFloat::VecFloat(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::VecFloat::VecFloat(/* parameters */);
	math::vpu::VecFloat::VecFloat(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::VecFloat::VecFloat(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::Mult(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	Write<rw::math::fpu::Vector2U_32>(/* parameters */);
	math::vpu::operator+<VectorAxisX>(/* parameters */);
	math::vpu::operator+<VectorAxisX>(/* parameters */);
	math::vpu::operator+<VectorAxisY>(/* parameters */);
	math::vpu::operator+<VectorAxisY>(/* parameters */);
	Write<rw::math::fpu::Vector3>(/* parameters */);
	Write<rw::math::fpu::Vector4U_32>(/* parameters */);
	math::vpu::_asmSwizzleStore<VectorAxisW, VectorAxisW>(/* parameters */);
	math::vpu::VecFloat::VecFloat(/* parameters */);
	Write<rw::math::fpu::Vector3, rw::math::fpu::Vector2, rw::math::fpu::Vector4>(/* parameters */);
	Write<rw::math::fpu::Vector3, rw::math::fpu::Vector2, rw::math::fpu::Vector4>(/* parameters */);
	Write<rw::math::fpu::Vector2U_32>(/* parameters */);
	math::vpu::VecFloat::VecFloat(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	Write<rw::math::fpu::Vector3>(/* parameters */);
	math::vpu::VecFloat::VecFloat(/* parameters */);
	math::vpu::VecFloat::VecFloat(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::operator+<VectorAxisX>(/* parameters */);
	math::vpu::operator+<VectorAxisX>(/* parameters */);
	Write<rw::math::fpu::Vector2U_32>(/* parameters */);
	math::vpu::operator+<VectorAxisY>(/* parameters */);
	math::vpu::operator+<VectorAxisY>(/* parameters */);
	math::vpu::VecFloat::VecFloat(/* parameters */);
	math::vpu::_asmSwizzleStore<VectorAxisW, VectorAxisW>(/* parameters */);
	math::vpu::VecFloat::VecFloat(/* parameters */);
	Write<rw::math::fpu::Vector3, rw::math::fpu::Vector2, rw::math::fpu::Vector4>(/* parameters */);
	math::vpu::VecFloat::VecFloat(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloat::VecFloat(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	Write<rw::math::fpu::Vector4U_32>(/* parameters */);
	math::vpu::operator+<VectorAxisX>(/* parameters */);
	math::vpu::operator+<VectorAxisX>(/* parameters */);
	Write<rw::math::fpu::Vector2U_32>(/* parameters */);
	math::vpu::operator+<VectorAxisY>(/* parameters */);
	math::vpu::operator+<VectorAxisY>(/* parameters */);
	math::vpu::VecFloat::VecFloat(/* parameters */);
	math::vpu::VecFloat::VecFloat(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	math::vpu::VecFloat::VecFloat(/* parameters */);
	math::vpu::operator*<VectorAxisX>(/* parameters */);
	EndBatch<renderengine::VertexIterator3<renderengine::VertexTypeFloat3, renderengine::VertexTypeFloat2, renderengine::VertexTypeFloat4> >(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloat::VecFloat(/* parameters */);
	Write<rw::math::fpu::Vector4U_32>(/* parameters */);
	math::vpu::operator*<VectorAxisY>(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	math::vpu::VecFloat::operator float(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	{
		// rwgpfxb4blur.cpp:684
		Vector4 vZero;

		math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
}

// rwgpfxb4blur.cpp:889
void rw::graphics::postfx::B4Blur::Apply(RenderTarget *  destRenderTarget, RenderTarget *  radialRenderTarget, RenderTarget *  sourceRenderTarget) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxb4blur.cpp:891
		Vector4 uvOffset;

		// rwgpfxb4blur.cpp:892
		PfxHelper * helper;

		// rwgpfxb4blur.cpp:894
		bool bResolveToTexture;

		PfxHelper::GetInstance(/* parameters */);
	}
	shadow::Device::SetState(/* parameters */);
	PfxHelper::GetOpaqueBlendState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	math::vpu::Vector4::SetW(/* parameters */);
	math::vpu::Vector4::SetZ(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	math::vpu::Vector4::SetZ(/* parameters */);
	math::vpu::Vector4::SetW(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	PfxHelper::GetOpaqueBlendState(/* parameters */);
}

// rwgpfxb4blur.cpp:847
void rw::graphics::postfx::B4Blur::DownSample(RenderTarget *  destRenderTarget, RenderTarget *  sourceRenderTarget) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxb4blur.cpp:849
		float[16] blur4SampleOffsets;

		// rwgpfxb4blur.cpp:850
		PfxHelper * helper;

		// rwgpfxb4blur.cpp:874
		Vector4 uvOffset;

		PfxHelper::GetInstance(/* parameters */);
	}
	shadow::Device::SetPixelProgram(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	PfxHelper::GetOpaqueBlendState(/* parameters */);
	{
		// rwgpfxb4blur.cpp:861
		FloatShaderStateIterator it;

		BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		{
			renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
			cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
		}
	}
	shadow::Device::SetState(/* parameters */);
	renderengine::TextureState::NativeGetTexture(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
	}
}

