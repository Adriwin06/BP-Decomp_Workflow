// BrnGuiEffectsArbitrator.cpp:153
void BrnGui::EffectsArbitrator::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiEffectsArbitrator.cpp:1210
void BrnGui::EffectsArbitrator::LookupColourCube(uint64_t  luResourceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEffectsArbitrator.cpp:1212
		uint32_t luIndex;

	}
}

// BrnGuiEffectsArbitrator.cpp:104
void BrnGui::EffectsArbitrator::Debug_StopBackgroundHook(void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEffectsArbitrator.cpp:106
		EffectsArbitrator * lpEffectsArbitrator;

		PFXHookNodeBlender::IsActive(/* parameters */);
	}
}

// BrnGuiEffectsArbitrator.cpp:132
void BrnGui::EffectsArbitrator::Debug_StopHook(void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEffectsArbitrator.cpp:134
		EffectsArbitrator * lpEffectsArbitrator;

		PFXHookNodeBlender::IsActive(/* parameters */);
	}
}

// BrnGuiEffectsArbitrator.cpp:700
void BrnGui::EffectsArbitrator::StopHook(const PFXHook *  lpHook) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	PFXHookNodeBlender::IsActive(/* parameters */);
}

// BrnGuiEffectsArbitrator.cpp:722
void BrnGui::EffectsArbitrator::StopMenuHook() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	PFXHookNodeBlender::IsActive(/* parameters */);
}

// BrnGuiEffectsArbitrator.cpp:755
void BrnGui::EffectsArbitrator::UpdateHooks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEffectsArbitrator.cpp:757
		float32_t lfTimeNow;

		// BrnGuiEffectsArbitrator.cpp:758
		float32_t lfTimeStep;

		GuiCache::GetTime(/* parameters */);
	}
	PFXHookNodeBlender::IsActive(/* parameters */);
	PFXHookNodeBlender::IsActive(/* parameters */);
	PFXHookNodeBlender::IsActive(/* parameters */);
	PFXHookNodeBlender::IsActive(/* parameters */);
}

// BrnGuiEffectsArbitrator.cpp:42
void BrnGui::EffectsArbitrator::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEffectsArbitrator.cpp:72
		DebugInterface lDebugInterface;

		CgsResource::ResourcePtr<BrnGui::PFXHookBundle>::operator=(/* parameters */);
	}
	CgsDev::DebugInterface::DebugInterface(/* parameters */);
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
}

// BrnGuiEffectsArbitrator.cpp:525
void BrnGui::EffectsArbitrator::GetHookFromName(const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEffectsArbitrator.cpp:530
		int32_t liIndex;

	}
	CgsResource::ResourcePtr<BrnGui::PFXHookBundle>::operator!=(/* parameters */);
	CgsResource::ResourcePtr<BrnGui::PFXHookBundle>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnGui::PFXHookBundle>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiEffectsArbitrator.cpp:464
void BrnGui::EffectsArbitrator::Acquire3dTints(InputBuffer *  lpGuiModelInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEffectsArbitrator.cpp:466
		int32_t liIndex;

		// BrnGuiEffectsArbitrator.cpp:503
		DebugInterface lDebugInterface;

		CgsResource::ResourcePtr<BrnGui::PFXHookBundle>::operator->(/* parameters */);
	}
	{
		// BrnGuiEffectsArbitrator.cpp:469
		PFXGroup * lpGroup;

		{
			// BrnGuiEffectsArbitrator.cpp:485
			GuiEventLoadRequest lLoadRequest;

		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::DebugInterface::DebugInterface(/* parameters */);
	CgsResource::ResourcePtr<BrnGui::PFXHookBundle>::operator->(/* parameters */);
	CgsResource::ResourcePtr<BrnGui::PFXHookBundle>::operator->(/* parameters */);
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	CgsGui::ModelIO::InputBuffer::AddResourceRequests(/* parameters */);
	AddGuiEvent<const CgsGui::GuiEventLoadRequest>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiEffectsArbitrator.cpp:168
void BrnGui::EffectsArbitrator::ResourceUpdate(InputBuffer *  lpGuiModelInputBuffer, const OutputBuffer *  lpGuiModelOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEffectsArbitrator.cpp:175
		const GuiEventQueueSmall * lpLoadNotifications;

		// BrnGuiEffectsArbitrator.cpp:179
		const CgsModule::Event * lpEvent;

		// BrnGuiEffectsArbitrator.cpp:180
		int32_t liEventSize;

		// BrnGuiEffectsArbitrator.cpp:181
		int32_t liEventId;

	}
	CgsGui::ModelIO::OutputBuffer::GetLoadNotifications(/* parameters */);
	CgsGui::GuiEventQueueBase<4096,16>::GetFirstEvent(/* parameters */);
	CgsGui::GuiEventQueueBase<4096,16>::GetNextEvent(/* parameters */);
	{
		// BrnGuiEffectsArbitrator.cpp:191
		const GuiEventLoadNotification * lpLoadNotification;

		{
			// BrnGuiEffectsArbitrator.cpp:213
			uint32_t luIndex;

			CgsResource::ResourcePtr<rw::graphics::postfx::ColourCube>::operator=(/* parameters */);
		}
	}
	CgsResource::ResourcePtr<BrnGui::PFXHookBundle>::operator=(/* parameters */);
	CgsResource::ResourcePtr<BrnGui::PFXHookBundle>::operator!=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiEffectsArbitrator.cpp:177
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiEffectsArbitrator.cpp:552
void BrnGui::EffectsArbitrator::GetHookFromGUID(uint32_t  luGuid) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEffectsArbitrator.cpp:556
		int32_t liIndex;

	}
	CgsResource::ResourcePtr<BrnGui::PFXHookBundle>::operator!=(/* parameters */);
	CgsResource::ResourcePtr<BrnGui::PFXHookBundle>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiEffectsArbitrator.cpp:434
void BrnGui::EffectsArbitrator::StopBackgroundHook(const GuiPFXStopBackgroundHookEvent *  lpBackgroundStopEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEffectsArbitrator.cpp:436
		const PFXHook * lpHook;

	}
	PFXHookNodeBlender::IsActive(/* parameters */);
	{
		// BrnGuiEffectsArbitrator.cpp:443
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiEffectsArbitrator.cpp:857
void BrnGui::EffectsArbitrator::GenerateEffectFrameEvents(OutputBuffer *  lpRenderOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEffectsArbitrator.cpp:862
		BrnEffectsFrame * lpEffectsFrame1;

		// BrnGuiEffectsArbitrator.cpp:863
		BrnEffectsFrame * lpEffectsFrame2;

		// BrnGuiEffectsArbitrator.cpp:865
		PfxContainer<BrnEffects::BloomData> lFinalBloomData;

		// BrnGuiEffectsArbitrator.cpp:866
		PfxContainer<BrnEffects::VignetteData> lFinalVignetteData;

		// BrnGuiEffectsArbitrator.cpp:867
		PfxContainer<BrnEffects::BlurData> lFinalBlurData;

		// BrnGuiEffectsArbitrator.cpp:868
		PfxContainer<BrnEffects::DepthOfFieldData> lFinalDepthOfFieldData;

		// BrnGuiEffectsArbitrator.cpp:869
		PfxContainer<BrnEffects::TintData2d> lFinal2DTintData;

		// BrnGuiEffectsArbitrator.cpp:870
		PfxContainer<BrnEffects::TintData> lDefault3DTintData;

		// BrnGuiEffectsArbitrator.cpp:872
		bool lbUsed3DTint1;

		// BrnGuiEffectsArbitrator.cpp:873
		bool lbUsed3DTint2;

		// BrnGuiEffectsArbitrator.cpp:875
		float32_t lfFrame1Weight;

		// BrnGuiEffectsArbitrator.cpp:876
		float32_t lfFrame2Weight;

		// BrnGuiEffectsArbitrator.cpp:906
		float32_t lfFrame1BloomWeight;

		// BrnGuiEffectsArbitrator.cpp:907
		float32_t lfFrame1VignetteWeight;

		// BrnGuiEffectsArbitrator.cpp:908
		float32_t lfFrame1BlurWeight;

		// BrnGuiEffectsArbitrator.cpp:909
		float32_t lfFrame1DepthOfFieldWeight;

		// BrnGuiEffectsArbitrator.cpp:910
		float32_t lfFrame1Tint2DWeight;

		// BrnGuiEffectsArbitrator.cpp:911
		float32_t lfFrame1Tint3DWeight;

		// BrnGuiEffectsArbitrator.cpp:1022
		bool lbInMenu;

	}
	RendererIO::OutputBuffer::GetFXEventsEffectsFrame(/* parameters */);
	RendererIO::OutputBuffer::GetFXEventsEffectsFrame(/* parameters */);
	PFXHookNodeBlender::IsActive(/* parameters */);
	BrnEffectsFrame::SetTintData(/* parameters */);
	BrnEffectsFrame::SetBloomData(/* parameters */);
	BrnEffectsFrame::SetVignetteData(/* parameters */);
	BrnEffectsFrame::SetBlurData(/* parameters */);
	BrnEffectsFrame::SetDepthOfFieldData(/* parameters */);
	BrnEffectsFrame::SetTintData2d(/* parameters */);
	{
		// BrnGuiEffectsArbitrator.cpp:1047
		BloomData lDefault;

		BrnEffects::BloomData::Construct(/* parameters */);
		BrnEffectsFrame::SetBloomData(/* parameters */);
	}
	{
		// BrnGuiEffectsArbitrator.cpp:1075
		VignetteData lDefault;

		BrnEffects::VignetteData::Construct(/* parameters */);
		BrnEffectsFrame::SetVignetteData(/* parameters */);
	}
	{
		// BrnGuiEffectsArbitrator.cpp:1103
		BlurData lDefault;

		BrnEffects::BlurData::Construct(/* parameters */);
		BrnEffectsFrame::SetBlurData(/* parameters */);
	}
	{
		// BrnGuiEffectsArbitrator.cpp:1131
		DepthOfFieldData lDefault;

		BrnEffects::DepthOfFieldData::Construct(/* parameters */);
		BrnEffectsFrame::SetDepthOfFieldData(/* parameters */);
	}
	{
		// BrnGuiEffectsArbitrator.cpp:1161
		TintData2d lDefault;

		BrnEffectsFrame::SetTintData2d(/* parameters */);
	}
	BrnEffectsFrame::SetTintData(/* parameters */);
	PFXHookNodeBlender::HasActiveBloom(/* parameters */);
	BrnEffectsFrame::SetBloomData(/* parameters */);
	PFXHookNodeBlender::HasActiveVignette(/* parameters */);
	BrnEffectsFrame::SetVignetteData(/* parameters */);
	PFXHookNodeBlender::HasActiveBlur(/* parameters */);
	BrnEffectsFrame::SetBlurData(/* parameters */);
	PFXHookNodeBlender::HasActiveDepthOfField(/* parameters */);
	BrnEffectsFrame::SetDepthOfFieldData(/* parameters */);
	PFXHookNodeBlender::HasActive2DTint(/* parameters */);
	BrnEffectsFrame::SetTintData2d(/* parameters */);
	BrnEffectsFrame::SetTintData(/* parameters */);
	BrnEffectsFrame::SetTintData(/* parameters */);
	PFXHookNodeBlender::HasActiveBloom(/* parameters */);
	PFXHookNodeBlender::HasActiveVignette(/* parameters */);
	PFXHookNodeBlender::HasActiveBlur(/* parameters */);
	PFXHookNodeBlender::HasActiveDepthOfField(/* parameters */);
	PFXHookNodeBlender::HasActive2DTint(/* parameters */);
	BrnEffectsFrame::SetTintData(/* parameters */);
	BrnEffectsFrame::SetTintData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	PFXHookNodeBlender::HasActiveBloom(/* parameters */);
	BrnEffectsFrame::SetBloomData(/* parameters */);
	PFXHookNodeBlender::HasActiveBlur(/* parameters */);
	BrnEffectsFrame::SetBlurData(/* parameters */);
	PFXHookNodeBlender::HasActiveDepthOfField(/* parameters */);
	BrnEffectsFrame::SetDepthOfFieldData(/* parameters */);
	PFXHookNodeBlender::HasActive2DTint(/* parameters */);
	BrnEffectsFrame::SetTintData2d(/* parameters */);
	PFXHookNodeBlender::HasActiveVignette(/* parameters */);
	BrnEffectsFrame::SetVignetteData(/* parameters */);
	PFXHookNodeBlender::HasActiveVignette(/* parameters */);
	PFXHookNodeBlender::HasActiveBloom(/* parameters */);
	BrnEffectsFrame::SetTintData(/* parameters */);
	PFXHookNodeBlender::HasActive2DTint(/* parameters */);
	PFXHookNodeBlender::HasActiveDepthOfField(/* parameters */);
	PFXHookNodeBlender::HasActiveBlur(/* parameters */);
	PFXHookNodeBlender::HasActiveBloom(/* parameters */);
	{
		// BrnGuiEffectsArbitrator.cpp:1034
		PfxContainer<BrnEffects::BloomData> lBloom;

		BrnEffectsFrame::SetBloomData(/* parameters */);
	}
	PFXHookNodeBlender::HasActiveBlur(/* parameters */);
	{
		// BrnGuiEffectsArbitrator.cpp:1090
		PfxContainer<BrnEffects::BlurData> lBlur;

		BrnEffectsFrame::SetBlurData(/* parameters */);
	}
	PFXHookNodeBlender::HasActiveDepthOfField(/* parameters */);
	{
		// BrnGuiEffectsArbitrator.cpp:1118
		PfxContainer<BrnEffects::DepthOfFieldData> lDepthOfField;

		BrnEffectsFrame::SetDepthOfFieldData(/* parameters */);
	}
	PFXHookNodeBlender::HasActive2DTint(/* parameters */);
	{
		// BrnGuiEffectsArbitrator.cpp:1148
		PfxContainer<BrnEffects::TintData2d> l2DTint;

		BrnEffectsFrame::SetTintData2d(/* parameters */);
	}
	BrnEffectsFrame::SetTintData(/* parameters */);
	BrnEffectsFrame::SetTintData(/* parameters */);
	PFXHookNodeBlender::HasActiveVignette(/* parameters */);
	{
		// BrnGuiEffectsArbitrator.cpp:1062
		PfxContainer<BrnEffects::VignetteData> lVignette;

		BrnEffectsFrame::SetVignetteData(/* parameters */);
	}
}

// BrnGuiEffectsArbitrator.cpp:579
void BrnGui::EffectsArbitrator::StartHook(const GuiPFXHookEvent *  lpHookStartEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEffectsArbitrator.cpp:581
		const PFXHook * lpHook;

		// BrnGuiEffectsArbitrator.cpp:600
		bool lbCurrentActive;

	}
	PFXHookNodeBlender::IsActive(/* parameters */);
	PFXHookNodeBlender::IsActive(/* parameters */);
	{
		// BrnGuiEffectsArbitrator.cpp:651
		PFXHookNodeBlender * lpTemp;

	}
	{
		// BrnGuiEffectsArbitrator.cpp:596
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnGuiEffectsArbitrator.cpp:115
void BrnGui::EffectsArbitrator::Debug_StartHook(void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEffectsArbitrator.cpp:117
		EffectsArbitrator * lpEffectsArbitrator;

		// BrnGuiEffectsArbitrator.cpp:119
		GuiPFXHookEvent lEvent;

	}
}

// BrnGuiEffectsArbitrator.cpp:383
void BrnGui::EffectsArbitrator::StartBackgroundHook(const GuiPFXStartBackgroundHookEvent *  lpBackgroundStartEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEffectsArbitrator.cpp:385
		const PFXHook * lpHook;

	}
	PFXHookNodeBlender::IsActive(/* parameters */);
	{
		// BrnGuiEffectsArbitrator.cpp:396
		PFXHookNodeBlender * lpTemp;

	}
	{
		// BrnGuiEffectsArbitrator.cpp:392
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiEffectsArbitrator.cpp:254
void BrnGui::EffectsArbitrator::EventUpdate(BrnUpdateSet  lUpdateSet, const InputBuffer *  lpGuiInputBuffer, CgsGui::CgsGuiModuleIO::OutputBuffer *  lpGuiOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEffectsArbitrator.cpp:259
		const CgsModule::Event * lpEvent;

		// BrnGuiEffectsArbitrator.cpp:260
		int32_t liEventSize;

		// BrnGuiEffectsArbitrator.cpp:261
		int32_t liEventId;

		// BrnGuiEffectsArbitrator.cpp:264
		const InputBuffer::GuiEventInputQueue * lpEventQueue;

	}
	CgsGui::GuiEventQueueBase<32768,16>::GetFirstEvent(/* parameters */);
	CgsGui::GuiEventQueueBase<32768,16>::GetNextEvent(/* parameters */);
	{
		// BrnGuiEffectsArbitrator.cpp:351
		GuiPFXHookEnumeration lPFXEnumeration;

		CgsResource::ResourcePtr<BrnGui::PFXHookBundle>::operator!=(/* parameters */);
		{
			// BrnGuiEffectsArbitrator.cpp:357
			int32_t liIndex;

			CgsResource::ResourcePtr<BrnGui::PFXHookBundle>::operator->(/* parameters */);
			CgsResource::ResourcePtr<BrnGui::PFXHookBundle>::operator->(/* parameters */);
			{
				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
		}
		AddGuiOutEvent<BrnGui::GuiPFXHookEnumeration>(/* parameters */);
	}
	{
		// BrnGuiEffectsArbitrator.cpp:296
		const GuiPFXHookStopEvent * lpGuiPFXHookEvent;

		// BrnGuiEffectsArbitrator.cpp:298
		const PFXHook * lpHook;

	}
	{
		// BrnGuiEffectsArbitrator.cpp:333
		const GuiPFXStartBackgroundHookEvent * lpGuiPFXStartBackgroundHook;

	}
	{
		// BrnGuiEffectsArbitrator.cpp:287
		const GuiPFXHookEvent * lpGuiPFXHookEvent;

	}
	{
		// BrnGuiEffectsArbitrator.cpp:342
		const GuiPFXStopBackgroundHookEvent * lpGuiPFXStopBackgroundHook;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiEffectsArbitrator.cpp:313
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnGuiEffectsArbitrator.cpp:92
void BrnGui::EffectsArbitrator::Debug_StartBackgroundHook(void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEffectsArbitrator.cpp:94
		EffectsArbitrator * lpEffectsArbitrator;

		// BrnGuiEffectsArbitrator.cpp:96
		GuiPFXStartBackgroundHookEvent lEvent;

	}
}

