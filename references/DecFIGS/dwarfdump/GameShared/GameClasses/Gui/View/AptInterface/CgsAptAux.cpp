// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsAptAux.h:63
	namespace AptCallbackDebug {
		// CgsAptAux.cpp:771
		// Declaration
		extern void Print(const char *, ...) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsAptAux.cpp:785
			using namespace CgsDev::Message;

		}

		// CgsAptAux.cpp:797
		extern void AddSavedInput(AptSavedInputRecord *, int32_t);

		// CgsAptAux.cpp:810
		extern void SetScreenGrabPending(const char *);

		// CgsAptAux.cpp:759
		extern void AssertFail(const char *, const char *, uint32_t);

	}

	// CgsAptAux.h:88
	namespace AptCallbackFile {
		// CgsAptAux.cpp:858
		extern void FreeAnimation(void *);

		// CgsAptAux.cpp:873
		extern void FreeConstantTable(void *);

		// CgsAptAux.cpp:887
		extern void LoadAnimationCompleted(const char *, const char *);

		// CgsAptAux.cpp:919
		extern int GetBytesTotal(const char *, AptGetBytesEnum);

		// CgsAptAux.cpp:934
		extern int GetBytesLoaded(const char *, AptGetBytesEnum);

		// CgsAptAux.cpp:904
		extern void OnUnload(AptValue *);

		// CgsAptAux.cpp:825
		extern void LoadAnimation(const char *, AptFilePtr);

	}

	// CgsAptAux.h:128
	namespace AptCallbackVariable {
		// CgsAptAux.cpp:949
		extern void SetExternVariable(const char *, const char *);

		// CgsAptAux.cpp:962
		extern AptValue * GetExternVariable(const char *);

	}

	// CgsAptAux.h:143
	namespace AptCallbackCustom {
		// CgsAptAux.cpp:1069
		extern bool ControlUpdate(AptAssetRenderingUnit);

		// CgsAptAux.cpp:983
		extern void ControlRender(char *, char *, AptAssetRenderingUnit, const char *, AptMaskRenderOperation, int32_t);

	}

	// CgsAptAux.h:162
	namespace AptCallbackRenderFlags {
		// CgsAptAux.cpp:1082
		extern void Push(const char *);

		// CgsAptAux.cpp:1094
		extern void Pop(const char *);

	}

	// CgsAptAux.h:203
	namespace AptCallbackDeprecated {
		// CgsAptAux.cpp:1112
		extern void SendVariables(const char *, const char *, const char *, const char *, int32_t);

		// CgsAptAux.cpp:1126
		extern void FsCommand(const char *, const char *);

		// CgsAptAux.cpp:1139
		extern AptValue * LoadVariables(const char *);

		// CgsAptAux.cpp:1152
		extern AptValue * LoadVariablesNULL();

		// CgsAptAux.cpp:1165
		extern AptAnalogStickInfo GetAnalogStickInfo(int32_t);

		// CgsAptAux.cpp:1181
		extern void UninitializedVarAccess(const char *);

		// CgsAptAux.cpp:1202
		extern int PointHitTest(float, float, AptAssetMoiveClip);

		// CgsAptAux.cpp:1222
		extern void GetRealTimeClock(AptSysClock *, bool);

	}

	// CgsAptAux.h:48
	namespace AptCallbackMemory {
		// CgsAptAux.cpp:705
		extern void * Alloc(size_t);

		// CgsAptAux.cpp:725
		extern void Free(void *);

		// CgsAptAux.cpp:741
		extern void Free(void *, size_t);

	}

	// CgsAptAux.cpp:55
	const char[7] KAC_CUSTOM_CONTROL_TEXTURE_INDEX_NAME;

	// CgsAptAux.h:43
	namespace AptAuxPointer {
		// CgsAptAux.cpp:33
		extern CgsGui::AptAux * mpAptAuxInst;

	}

}

// CgsAptAux.cpp:136
void CgsGui::AptAux::ConstructApt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAptAux.cpp:397
void CgsGui::AptAux::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAptAux.cpp:412
void CgsGui::AptAux::InitializeApt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAux.cpp:414
		AptInitParmsT lAptInitParms;

		// CgsAptAux.cpp:426
		AptTargetInitParams lAptTargetInitParms;

		AptInitParmsT::AptInitParmsT(/* parameters */);
	}
	AptCommunicator::AptCommunicator(/* parameters */);
}

// CgsAptAux.cpp:465
void CgsGui::AptAux::UnInitializeApt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAptAux.cpp:263
void CgsGui::AptAux::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAptAux.cpp:598
void CgsGui::AptAux::LoadFlashAnimation(const char *  lpacFileName, int32_t  liTargetLevel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAux.cpp:606
		const int32_t KI_NUM_LEVEL_CHARS;

		// CgsAptAux.cpp:607
		const char[9] lpacLevelTemplate;

		// CgsAptAux.cpp:608
		char[16] lpacTargetLevel;

	}
	{
		// CgsAptAux.cpp:604
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptAux.cpp:602
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsAptAux.cpp:658
void CgsGui::AptAux::UpdateComponents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAux.cpp:660
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsAptAux.cpp:673
void CgsGui::AptAux::HideAllComponents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAux.cpp:675
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsAptAux.cpp:689
void CgsGui::AptAux::ShowAllComponents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAux.cpp:691
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsAptAux.cpp:209
void CgsGui::AptAux::Prepare(HeapMalloc *  lpAptAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAptAux.cpp:566
void CgsGui::AptAux::AddNewAptDataHeader(AptDataHeader *  lpNewDataHeader) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAptAux.cpp:583
void CgsGui::AptAux::RemoveAptDataHeader(uint32_t  luMovieNameHashValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAptAux.cpp:81
void CgsGui::AptAux::Construct(ImRendererSet *  lpImRenderers, TextRenderer *  lpTextRenderer, LanguageManager *  lpLanguageManager, const CgsGui::FontCollection *  lpFonts, float32_t  lfAspectRatio, const RGBA *  lpAlternateTextColours, int32_t  liNumAlternateColours) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAux.cpp:117
		MutexParameters lAptMutexParams;

	}
	{
		// CgsAptAux.cpp:113
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptAux.cpp:88
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptAux.cpp:101
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsAptAux.cpp:485
void CgsGui::AptAux::Update(uint32_t  lnDelta) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAux.cpp:487
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsAptAux.cpp:541
void CgsGui::AptAux::Render(uint32_t  lnDelta) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAux.cpp:543
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsAptAux.cpp:627
void CgsGui::AptAux::UpdateFlashComponent(const char *  lpacName, const char *  lpacKey, const char *  lpacValue, const bool  lbIsReservedVar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptAux.cpp:630
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptAux.cpp:631
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptAux.cpp:633
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAptAux.cpp:629
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsAptAux.cpp:39
// CgsAptAux.cpp:40
// CgsAptAux.cpp:41
// CgsAptAux.cpp:42
// CgsAptAux.cpp:43
