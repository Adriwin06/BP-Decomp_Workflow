// BrnPfxHookBlender.cpp:150
void BrnGui::PfxContainer<BrnEffects::TintData>::GetCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPfxHookBlender.cpp:503
void BrnGui::PFXHookNodeBlender::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPfxHookBlender.cpp:610
void BrnGui::PFXHookNodeBlender::ForceTime(float32_t  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPfxHookBlender.cpp:181
void BrnGui::PfxContainer<BrnEffects::TintData>::GetWeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPfxHookBlender.cpp:212
void BrnGui::PfxContainer<BrnEffects::TintData>::GetData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPfxHookBlender.cpp:114
void BrnGui::PfxContainer<BrnEffects::TintData>::Add(const TintData *  lpEffectsData, float32_t  lfWeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPfxHookBlender.cpp:311
void BrnGui::PFXNodeFader::Update(float32_t  lfTime, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPfxHookBlender.cpp:316
		float32_t lfStartTime;

		// BrnPfxHookBlender.cpp:317
		float32_t lfFadeIn;

		// BrnPfxHookBlender.cpp:318
		float32_t lfDuration;

		// BrnPfxHookBlender.cpp:319
		float32_t lfFadeOut;

	}
	PFXGroup::GetFadeIn(/* parameters */);
	PFXGroup::GetDuration(/* parameters */);
	PFXGroup::GetFadeOut(/* parameters */);
}

// BrnPfxHookBlender.cpp:456
void BrnGui::PFXNodeFader::StartFadeOut(float32_t  lfFadeOutTimeOverride) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPfxHookBlender.cpp:625
void BrnGui::PFXHookNodeBlender::StartFadeOut(float32_t  lfFadeOutTimeOverride) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPfxHookBlender.cpp:627
		int32_t liIndex;

	}
}

// BrnPfxHookBlender.cpp:645
void BrnGui::PFXHookNodeBlender::Stop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPfxHookBlender.cpp:57
void BrnGui::PfxContainer<BrnEffects::TintData>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPfxHookBlender.cpp:567
void BrnGui::PFXHookNodeBlender::Update(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPfxHookBlender.cpp:571
		int32_t liIndex;

	}
	{
		// BrnPfxHookBlender.cpp:583
		const PFXNodeFader & lMyFader;

		{
			// BrnPfxHookBlender.cpp:593
			float32_t lfWeight;

			PFXNodeFader::GetBloom(/* parameters */);
			rw::math::fpu::Min<float>(/* parameters */);
			PFXNodeFader::GetVignette(/* parameters */);
			rw::math::fpu::Min<float>(/* parameters */);
			PFXNodeFader::GetBlur(/* parameters */);
			rw::math::fpu::Min<float>(/* parameters */);
			PFXNodeFader::GetDepthOfField(/* parameters */);
			rw::math::fpu::Min<float>(/* parameters */);
			PFXNodeFader::Get2DTint(/* parameters */);
			rw::math::fpu::Min<float>(/* parameters */);
			PFXNodeFader::Get3DTint(/* parameters */);
			rw::math::fpu::Min<float>(/* parameters */);
		}
	}
	PFXNodeFader::IsActive(/* parameters */);
	PFXNodeFader::GetWeight(/* parameters */);
}

// BrnPfxHookBlender.cpp:230
void BrnGui::PFXNodeFader::LookupColourCube(ColourCubeInfo *  lpaColourCubes, uint32_t  luCubeCount, uint64_t  luResourceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPfxHookBlender.cpp:232
		uint32_t luIndex;

	}
	CgsResource::ResourcePtr<rw::graphics::postfx::ColourCube>::operator!=(/* parameters */);
	CgsResource::ResourcePtr<rw::graphics::postfx::ColourCube>::GetMemoryResource(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPfxHookBlender.cpp:259
void BrnGui::PFXNodeFader::Initialise(ColourCubeInfo *  lpaColourCubes, uint32_t  luCubeCount, PFXHookNode *  lpPfxNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPfxHookBlender.cpp:263
		PFXGroup * lpGroup;

	}
	BrnEffects::TintData::Construct(/* parameters */);
}

// BrnPfxHookBlender.cpp:527
void BrnGui::PFXHookNodeBlender::Initialise(const PFXHook *  lpHook, ColourCubeInfo *  lpaColourCubes, uint32_t  luCubeCount, float32_t  lfMaximumBloomWeight, float32_t  lfMaximumVignetteWeight, float32_t  lfMaximumBlurWeight, float32_t  lfMaximumDepthOfFieldWeight, float32_t  lfMaximum2DTintWeight, float32_t  lfMaximum3DTintWeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPfxHookBlender.cpp:531
		int32_t liIndex;

	}
}

