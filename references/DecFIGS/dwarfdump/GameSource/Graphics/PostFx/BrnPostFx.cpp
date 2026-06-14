// BrnPostFx.cpp:38
using namespace rw;

// BrnPostFx.cpp:39
using namespace rw::math;

// BrnPostFx.cpp:40
using namespace rw::graphics::postfx;

// BrnPostFx.cpp:41
using namespace rw::graphics::postfx;

// BrnPostFx.cpp:42
using namespace rw::graphics::core;

// BrnPostFx.cpp:288
void BrnPostFx::EndTintBlend() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::graphics::postfx::Tint::EndBlendJob(/* parameters */);
}

// BrnPostFx.cpp:248
void BrnPostFx::BeginTintBlend() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPostFx.cpp:255
		const TintBlendParameters & blendParameters;

		rw::graphics::postfx::Tint::BeginBlendJob(/* parameters */);
		{
			// BrnPostFx.cpp:259
			uint32_t i;

		}
	}
}

// BrnPostFx.cpp:80
void BrnPostFx::BrnPostFx() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPostFx.cpp:87
		uint32_t i;

	}
}

// BrnPostFx.cpp:230
void BrnPostFx::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPostFx.cpp:240
		rw::IResourceAllocator *const lpAllocator;

		{
			// BrnPostFx.cpp:232
			uint32_t i;

		}
	}
}

// BrnPostFx.cpp:105
void BrnPostFx::Construct(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPostFx.cpp:116
		ResourceDescriptor resDesc;

		// BrnPostFx.cpp:119
		rw::graphics::postfx::PfxHelper::Parameters helperParams;

		// BrnPostFx.cpp:125
		rw::graphics::postfx::DepthOfField::Parameters dofParams;

		// BrnPostFx.cpp:129
		rw::graphics::postfx::DepthOfField::State m_dofState;

		// BrnPostFx.cpp:132
		rw::graphics::postfx::Vignette::Parameters vignetteParams;

		// BrnPostFx.cpp:137
		rw::graphics::postfx::Vignette::State m_vignetteState;

		// BrnPostFx.cpp:143
		rw::graphics::postfx::Tint::Parameters tintParams;

		// BrnPostFx.cpp:158
		rw::graphics::postfx::B4Blur::Parameters b4blurParams;

	}
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	rw::graphics::postfx::DepthOfField::Parameters::Parameters(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	rw::graphics::postfx::Vignette::Parameters::Parameters(/* parameters */);
	rw::graphics::postfx::Vignette::Parameters::SetAllocator(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	rw::graphics::postfx::Tint::SetBlendState(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	{
		// BrnPostFx.cpp:147
		uint32_t i;

		rw::IResourceAllocator::Allocate(/* parameters */);
	}
	rw::graphics::postfx::B4Blur::Parameters::Parameters(/* parameters */);
	EA::Jobs::Job::SetCode(/* parameters */);
	EA::Jobs::Job::SetName(/* parameters */);
	rw::graphics::postfx::B4Blur::State::State(/* parameters */);
	rw::graphics::postfx::B4Blur::State::State(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::graphics::postfx::B4Blur::Parameters::SetBlendState(/* parameters */);
	rw::graphics::postfx::B4Blur::Parameters::SetAllocator(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

// BrnPostFx.cpp:313
void BrnPostFx::PrepareDownSampleBuffers(const BrnRendererMemory &  lAllocatedMemory, RenderTarget *  lpResultRt, const float32_t  lfWhiteLevel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPostFx.cpp:359
void BrnPostFx::Render(const BrnRendererMemory &  lAllocatedMemory, RenderTarget *  lpSourceRenderTarget, RenderTarget *  lpDestinationRenderTarget, const rw::math::vpu::Vector4  lTintColour, const bool8_t  lbMotionBlurEnabled, const float32_t  lfBrightness, const float32_t  lfContrast, const float32_t  lfWhiteLevel, const float32_t  lfAspectCorrection, renderengine::Texture *const  lpOverrideSourceTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPostFx.cpp:374
		renderengine::Texture *const lpDefaultSourceTexture;

		// BrnPostFx.cpp:375
		renderengine::Texture *const lpSourceTexture;

		// BrnPostFx.cpp:376
		renderengine::Texture *const lpBloomTexture;

		// BrnPostFx.cpp:377
		renderengine::Texture *const lpDofTexture;

		// BrnPostFx.cpp:378
		const TextureState *const lp3dTintTexture;

		// BrnPostFx.cpp:381
		TextureState *const lpDepthStencilTexture;

		// BrnPostFx.cpp:386
		const rw::math::vpu::Vector4 lHalfPixelOffset4;

		// BrnPostFx.cpp:387
		const rw::math::vpu::Vector2 lHalfPixelOffset;

		// BrnPostFx.cpp:390
		const bool8_t lbInCalibrationScreen;

		// BrnPostFx.cpp:391
		const bool8_t lbEnablePostFx;

		// BrnPostFx.cpp:392
		const bool8_t lbBilinearSource;

		// BrnPostFx.cpp:393
		const float32_t lfAdjustedWhiteLevel;

		shadow::Device::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		rw::graphics::postfx::RenderTarget::GetTexture(/* parameters */);
		rw::graphics::postfx::RenderTarget::GetDepthStencilTextureState(/* parameters */);
		rw::graphics::postfx::RenderTarget::GetTexture(/* parameters */);
		rw::graphics::postfx::RenderTarget::GetTexture(/* parameters */);
		Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	}
}

// BrnPostFx.cpp:46
