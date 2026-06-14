// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugManager.cpp:470
	extern RGBA _InterpolateColour(const RGBA &, const RGBA &, float32_t);

	// CgsDebugManager.cpp:67
	const RGBA gAssertTextColour;

	// CgsDebugManager.cpp:85
	DebugUI gInternalDebugUI;

	// CgsDebugManager.cpp:89
	Debug3DImmediateRender g3dInternalDebugRender;

	// CgsDebugManager.cpp:90
	Debug2DImmediateRender g2dInternalDebugRender;

}

// CgsDebugManager.cpp:119
void CgsDev::DebugManager::~DebugManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugManager.cpp:881
void CgsDev::DebugManager::IsComponentRegistered(CgsDev::DebugComponent *  lpDebugComponent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Internal::DebugLinkedList<CgsDev::DebugComponent>::IsAdded(/* parameters */);
}

// CgsDebugManager.cpp:1052
void CgsDev::DebugManager::SetGamePad(DebugManagerPad *  lpDebugManagerPad) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DebugUI::DebugUI::SetGamePad(/* parameters */);
}

// CgsDebugManager.cpp:1069
void CgsDev::DebugManager::SetMetrics(const const Metrics &  lMetrics) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DebugUI::DebugUI::SetMetrics(/* parameters */);
}

// CgsDebugManager.cpp:1086
void CgsDev::DebugManager::SetPalette(const const Palette &  lPalette) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DebugUI::DebugUI::SetPalette(/* parameters */);
}

// CgsDebugManager.cpp:320
void CgsDev::DebugManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugManager.cpp:248
void CgsDev::DebugManager::ConstructRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugManager.cpp:253
		const const Metrics & lMetrics;

		// CgsDebugManager.cpp:254
		float32_t lfScreenWidth;

		// CgsDebugManager.cpp:255
		float32_t lfScreenHeight;

		DebugUI::DebugUI::GetMetrics(/* parameters */);
		DebugUI::DebugUI::Set2DRenderer(/* parameters */);
		Assert::Manager::SetRenderer(/* parameters */);
	}
}

// CgsDebugManager.cpp:1173
void CgsDev::DebugManager::GetJuiceInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugManager.cpp:1177
		int SessionID;

		StrStreamBase::operator<<(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugManager.cpp:1102
void CgsDev::DebugManager::CalculateBuildDate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugManager.cpp:104
void CgsDev::DebugManager::DebugManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugManager.cpp:1002
void CgsDev::DebugManager::FindComponentByName(const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugManager.cpp:1011
		CgsDev::DebugComponent * lpComponent;

		Internal::DebugLinkedList<CgsDev::DebugComponent>::GetFirst(/* parameters */);
		{
			// CgsDebugManager.cpp:1015
			char[256] lacBuffer;

			// CgsDebugManager.cpp:1018
			char * lpcCompare;

			Internal::DebugLinkedList<CgsDev::DebugComponent>::GetNext(/* parameters */);
		}
	}
}

// CgsDebugManager.cpp:981
void CgsDev::DebugManager::DeactivateComponent(const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugManager.cpp:983
		CgsDev::DebugComponent * lpComponent;

	}
}

// CgsDebugManager.cpp:842
void CgsDev::DebugManager::RegisterComponentSimple(CgsDev::DebugComponent *  lpDebugComponent, const char *  lpcPath, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Internal::DebugLinkedList<CgsDev::DebugComponent>::Add(/* parameters */);
	Internal::DebugLinkedList<CgsDev::DebugComponent>::IsAdded(/* parameters */);
	{
	}
	DebugUI::DebugUI::GetVariableManager(/* parameters */);
	DebugUI::VariableManager::RegisterVariable(/* parameters */);
}

// CgsDebugManager.cpp:896
void CgsDev::DebugManager::ActivateComponent(CgsDev::DebugComponent *  lpDebugComponent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugManager.cpp:922
		char[256] lacCompletePath;

		// CgsDebugManager.cpp:926
		CgsDev::DebugUI::Menu * lpComponentVariablePath;

	}
	{
		// CgsDebugManager.cpp:930
		Function * lpFunction;

	}
	{
		// CgsDebugManager.cpp:934
		CgsDev::DebugUI::MenuItem * lpMenuItemComponent;

	}
}

// CgsDebugManager.cpp:963
void CgsDev::DebugManager::ActivateComponent(const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugManager.cpp:965
		CgsDev::DebugComponent * lpComponent;

	}
}

// CgsDebugManager.cpp:807
void CgsDev::DebugManager::RegisterComponent(CgsDev::DebugComponent *  lpDebugComponent, const char *  lpcPath, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Internal::DebugLinkedList<CgsDev::DebugComponent>::Add(/* parameters */);
	Internal::DebugLinkedList<CgsDev::DebugComponent>::IsAdded(/* parameters */);
	{
	}
}

// CgsDebugManager.cpp:286
void CgsDev::DebugManager::Update(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugManager.cpp:291
		CgsDev::DebugComponent * lpDebugComponent;

	}
	Internal::DebugLinkedList<CgsDev::DebugComponent>::GetFirst(/* parameters */);
	Internal::DebugLinkedList<CgsDev::DebugComponent>::GetNext(/* parameters */);
}

// CgsDebugManager.cpp:759
void CgsDev::DebugManager::RenderHUD() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugManager.cpp:773
		CgsDev::DebugComponent * lpDebugComponent;

		Internal::DebugLinkedList<CgsDev::DebugComponent>::GetFirst(/* parameters */);
		Internal::DebugLinkedList<CgsDev::DebugComponent>::GetNext(/* parameters */);
	}
}

// CgsDebugManager.cpp:720
void CgsDev::DebugManager::RenderWorld(const const rw::math::vpu::Matrix44 &  lViewProjectionMatrix, const rw::math::vpu::Vector3  lCameraPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugManager.cpp:732
		CgsDev::DebugComponent * lpDebugComponent;

		Internal::DebugLinkedList<CgsDev::DebugComponent>::GetFirst(/* parameters */);
		Internal::DebugLinkedList<CgsDev::DebugComponent>::GetNext(/* parameters */);
	}
}

// CgsDebugManager.cpp:376
void CgsDev::DebugManager::Render(const const rw::math::vpu::Matrix44 &  lViewProjectionMatrix, const rw::math::vpu::Vector3  lCameraPosition, CgsGraphics::Im3dRenderBuffer *  lp3dRenderBuffer, CgsGraphics::Im2dRenderBuffer *  lp2dRenderBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Debug3DImmediateRender::SetRenderBuffer(/* parameters */);
	Debug2DImmediateRender::SetRenderBuffer(/* parameters */);
}

// CgsDebugManager.cpp:1217
void CgsDev::DebugManager::ForceClearRenderBuffer(bool  lbThreadSafe) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	LockForRendering(/* parameters */);
	UnlockForRendering(/* parameters */);
}

// CgsDebugManager.cpp:1199
void CgsDev::DebugManager::CallFunction(const char *  lpFunction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugManager.cpp
void CgsDev::DebugManager::Construct(const DebugManagerConstructParameters *  lpConstructParameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::GetDefaultAllocator(/* parameters */);
	Internal::DebugLinkedList<CgsDev::DebugComponent>::Clear(/* parameters */);
	{
		// CgsDebugManager.cpp:188
		void * lpBuffer;

		rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	rw::GetDefaultAllocator(/* parameters */);
}

// CgsDebugManager.cpp:660
void CgsDev::DebugManager::RenderAssert(const AssertData *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugManager.cpp:662
		float32_t lfYOffset;

		// CgsDebugManager.cpp:664
		char[1024] lacLineFileBuffer;

		// CgsDebugManager.cpp:678
		int32_t liIndex;

	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	{
		// CgsDebugManager.cpp:683
		const char * lpcString;

		// CgsDebugManager.cpp:686
		char[16] lacBuffer;

		{
			// CgsDebugManager.cpp:694
			const char * lpcDecodedString;

		}
		rw::math::vpu::Vector2::Vector2(/* parameters */);
	}
}

// CgsDebugManager.cpp:604
void CgsDev::DebugManager::RenderMemory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugManager.cpp:609
		uint32_t luAvail;

		// CgsDebugManager.cpp:618
		sys_memory_info_t lMemInfo;

		// CgsDebugManager.cpp:625
		uint32_t luAvailMB;

		// CgsDebugManager.cpp:625
		uint32_t luAvailKB;

		// CgsDebugManager.cpp:625
		uint32_t luAvailB;

		// CgsDebugManager.cpp:634
		char[512] lacText;

		// CgsDebugManager.cpp:635
		float32_t lfYOffset;

		// CgsDebugManager.cpp:636
		float32_t lfXMiddle;

		sys_memory_get_user_memory_size(/* parameters */);
	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
}

// CgsDebugManager.cpp:514
void CgsDev::DebugManager::RenderFrameRateColouredWithAverage(float32_t  lfFramerate, float32_t  lfAverageFramerate, const const RGBA &  lHighColour, const const RGBA &  lLowColour, const const RGBA &  lMidColour, float32_t  lfHighFramerate, float32_t  lfLowFramerate, char *  lpacAverageFramerateString, float32_t  lfAverageFramerateHighlight, bool  lbIsSimulationRunningInRealTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugManager.cpp:519
		float32_t lfYOffset;

		// CgsDebugManager.cpp:520
		float32_t lfXMiddle;

		// CgsDebugManager.cpp:521
		float32_t lfTextSize;

		// CgsDebugManager.cpp:522
		float32_t lfTextOffset;

		// CgsDebugManager.cpp:528
		RGBA lFramerateColour;

		// CgsDebugManager.cpp:530
		float32_t lfFramerateMidPoint;

		// CgsDebugManager.cpp:531
		float32_t lfRange;

		// CgsDebugManager.cpp:548
		int32_t liFrameRate;

		// CgsDebugManager.cpp:549
		const uint32_t KU_STACK_STRING_LENGTH;

		// CgsDebugManager.cpp:550
		char[48] lacFramerate;

		// CgsDebugManager.cpp:587
		RGBA lUpdatedColour;

	}
	rw::math::fpu::Lerp<float>(/* parameters */);
	{
		// CgsDebugManager.cpp:535
		float32_t lfLerp;

	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	{
		// CgsDebugManager.cpp:567
		float32_t lfLerp;

	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::RGBA::SetAlpha(/* parameters */);
	{
		// CgsDebugManager.cpp:542
		float32_t lfLerp;

	}
	{
		// CgsDebugManager.cpp:574
		float32_t lfLerp;

	}
}

// CgsDebugManager.cpp:432
void CgsDev::DebugManager::RenderFrameRate(float32_t  lfFramerate, bool  lbIsSimulationRunningInRealTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugManager.cpp:437
		float32_t lfYOffset;

		// CgsDebugManager.cpp:438
		float32_t lfXMiddle;

		// CgsDebugManager.cpp:444
		int32_t liFrameRate;

		// CgsDebugManager.cpp:445
		char[16] lacFramerate;

	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
}

// CgsDebugManager.cpp:400
void CgsDev::DebugManager::RenderBuildInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugManager.cpp:405
		float32_t lfYOffset;

	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
}

// CgsDebugManager.cpp:49
// CgsDebugManager.cpp:65
// CgsDebugManager.cpp:78
// CgsDebugManager.cpp:81
