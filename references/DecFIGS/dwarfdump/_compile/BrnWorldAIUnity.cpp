struct _CGprogram;

struct _CGparameter;

struct AptSharedPtr<AptFile>;

struct AptFloatArrayCXForm;

struct AptUint32CXForm;

struct AptSavedInputRecord;

// Declaration
struct AptValue {
	// AptValue.h:596
	enum CIH_ONLY {
		CO_CIH = 0,
	}

protected:
	// AptValue.h:554
	extern const uint32_t MAX_REFCOUNT = 4095;

}

struct cParticleEmitter;

// Declaration
struct LoadingScriptedState {
	// BrnGameMainFlowStates.h:81
	enum ELoadingStateStage {
		E_LOADINGSTATESTAGE_START = 0,
		E_LOADINGSTATESTAGE_SOUND_AGAIN = 1,
		E_LOADINGSTATESTAGE_EFFECTS = 2,
		E_LOADINGSTATESTAGE_WORLD = 3,
		E_LOADINGSTATESTAGE_SOUND_BINDPROPS = 4,
		E_LOADINGSTATESTAGE_WORLD_COLLISION = 5,
		E_LOADINGSTATESTAGE_DONE = 6,
		E_LOADINGSTATE_NUM = 7,
	}

}

struct SpliceSample;

void CgsDev::StrStreamBase::StrStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStream::StrStream(char *  lpcCharBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStream::StrStream(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::StrStreamBase(/* parameters */);
}

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(None, None) {
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

void BrnAI::Route::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Sqrt<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Magnitude<float>(const const Vector2Template<float> &  vec) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Sqrt<float>(/* parameters */);
}

void CgsContainers::BitArray<35u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<35u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::BitArray<8u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsSound::Playback::Object::~Object() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Object::~Object(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Content::DoOnPostLoad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Content::DoOnPreUnload() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Content::DoDispose() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsContent.h:484
		const CgsSound::Playback::Factory & lFactory;

	}
}

void BrnGui::Selectable::ClearFlag(BrnGui::Selectable::StateFlags  lxFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ClearFlag(/* parameters */);
}

void BrnGui::MenuItem::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TableCell::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TableRow::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ProfileHost::HandleProfileTaskResult() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::OnPlayerInShortCut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::FillInGameModeSpecificResults(const ScoringSystem *  lpScoringSystem, FinishedModeAction *  lpFinishedModeActionOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::HandleGameEvents(const CgsModule::Event *  lpEvent, int32_t  liEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::HasTimedIntro() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::ShouldCountdownEnd() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::GetOutroTimeout() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::GetGlobalRivalToShow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::GetActiveRivalToShow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::HasLoadingScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::OnPlayerUsesPaintShop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashMode::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashMode::GetIntroDurationSeconds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashMode::RequiresStreaming() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineShowtimeMode::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineShowtimeMode::GetIntroDurationSeconds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineShowtimeMode::RequiresStreaming() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::IsCrashing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::GenerateSceneQueries(OutputBuffer_PostScene *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::CurveToKeepLarge(float32_t  lfDistScale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AutoTunedPIDDebugData::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDebugComponent::Construct(BrnAI::AIModule *  lpAIModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AutoTunedPIDDebugData::Clear(/* parameters */);
}

void BrnAI::AIDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDebugComponent::DrawAIRacingLines(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDebugComponent::DrawFinishDebugData(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDebugComponent::StateTableBegin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDebugComponent::StateTableNextColumn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDebugComponent::DeactiveateDriversCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugComponent.cpp:1936
		int32_t liDriverIndex;

		// BrnAIDebugComponent.cpp:1938
		BrnAI::AIModule * lpAIModule;

	}
}

void BrnAI::BrnAIDebugUtils::DrawSectionExtraHNGGeometry(CgsDev::Debug3DImmediateRender *  lpDisplay, const AISection *  lpSection, bool  lbPlayerSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::BrnAIDebugUtils::DrawSectionBoundingBoxes(CgsDev::Debug3DImmediateRender *  lpDisplay, const AISection *  lpSection, bool  lbPlayerSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::BrnAIDebugUtils::DrawSectionClippedTris(CgsDev::Debug3DImmediateRender *  lpDisplay, const AISection *  lpSection, bool  lbPlayerSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::BrnAIDebugUtils::DrawSectionPreClippedTris(CgsDev::Debug3DImmediateRender *  lpDisplay, const AISection *  lpSection, bool  lbPlayerSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RaceBalancingDebugComponent::Construct(BrnAI::AIModule *  lpAIModule, RaceBalancingManager *  lpRaceBalancingManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RaceBalancingDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RaceBalancingDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RaceBalancingDebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RaceBalancingDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::operator==<float>(const const Vector2Template<float> &  a, const const Vector2Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapDebugComponent::Construct(BrnAI::RouteMapModule *  lpRouteMapModule, BrnAI::AIModule *  lpAIModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModule::Construct(BrnAI::AIModule *  lpAIModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventReceiverQueue<1024,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:294
		int32_t liAlignRem;

	}
}

void BrnAI::AIModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<1024,16>::Destruct(/* parameters */);
}

void CgsContainers::Array<BrnAI::AISectionId,16u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapDebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapDebugComponent::Advance100SectionsCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapDebugComponent::Back100SectionsCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::ResetOnTrackDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::ResetOnTrackDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::ResetOnTrackDebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::ResetOnTrackDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint32_t,8u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::GetSectionSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISectionsData::GetMinSectionSpeed(BrnAI::SectionSpeed  leSectionSpeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISectionsData::GetMaxSectionSpeed(BrnAI::SectionSpeed  leSectionSpeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::RaceBalancingGraph,7u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::RaceBalancingRoute,7u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FixedRingBuffer<BrnAI::ResetOnTrackDebugComponent::ResetEntry,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<BrnAI::ResetOnTrackDebugComponent::ResetEntry>::Construct(BrnAI::ResetOnTrackDebugComponent::ResetEntry *  lpBuffer, int32_t  liBufferLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<BrnAI::ResetOnTrackDebugComponent::ResetEntry>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FixedRingBuffer<BrnAI::ResetOnTrackDebugComponent::HngTestEntry,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<BrnAI::ResetOnTrackDebugComponent::HngTestEntry>::Construct(BrnAI::ResetOnTrackDebugComponent::HngTestEntry *  lpBuffer, int32_t  liBufferLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<BrnAI::ResetOnTrackDebugComponent::HngTestEntry>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::ResetOnTrackDebugComponent::Construct(ResetOnTrackManager *  lpResetOnTrackManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FixedRingBuffer<BrnAI::ResetOnTrackDebugComponent::ResetEntry,16>::Construct(/* parameters */);
	CgsContainers::FixedRingBuffer<BrnAI::ResetOnTrackDebugComponent::HngTestEntry,16>::Construct(/* parameters */);
	CgsContainers::RingBuffer<BrnAI::ResetOnTrackDebugComponent::HngTestEntry>::Clear(/* parameters */);
}

void rw::math::fpu::Abs<float>(const const float &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:108
		float r;

	}
}

void rw::math::vpu::Abs<float>(const const float &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:58
		float r;

	}
}

void BrnAI::StepTo(float32_t  lfFrom, float32_t  lfTo, float32_t  lfStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIUtils.cpp:174
		float32_t lfGap;

	}
	rw::math::vpu::Abs<float>(/* parameters */);
}

void rw::math::vpu::Lerp(const VecFloat  a, const VecFloat  b, const VecFloat  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// scalar_operation_inline.h:166
	VecFloat r;

	{
		// scalar_operation_inline.h:166
		VecFloat r;

	}
}

void rw::math::vpu::Subtract(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:664
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::Mult(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:809
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::Add(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:519
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnAI::AICar::GetBuzzFrequencyRatio() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsValid(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsValid(const VecFloat  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsNaN(const VecFloat  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsEqualV4(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:246
		bool ret;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			{
				(None)unknown_arg
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			{
				(None)unknown_arg
				{
					(None)unknown_arg
					(None)unknown_arg
					{
					}
				}
			}
		}
		{
			{
				(None)unknown_arg
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			{
				(None)unknown_arg
				{
					(None)unknown_arg
					(None)unknown_arg
					{
					}
				}
			}
		}
		{
			{
				(None)unknown_arg
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			{
				(None)unknown_arg
				{
					(None)unknown_arg
					(None)unknown_arg
					{
					}
				}
			}
		}
	}
}

void BrnAI::AICar::GetPosition(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-<VectorAxisY>(VecFloatRef<VectorAxisY> &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:975
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:976
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:978
			VectorIntrinsicUnion::VectorIntrinsic signMask;

		}
	}
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:164
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnAI::AISection::GetHNGLine(uint16_t  luHNGLineIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::BoundaryLine::GetStartPos() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::BoundaryLine::GetEndPos() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpl::VecPermuteSingleImm<9011>(VectorIntrinsicInParam  v0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-<VectorAxisX>(VecFloatRef<VectorAxisX> &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:975
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:976
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:978
			VectorIntrinsicUnion::VectorIntrinsic signMask;

		}
	}
}

void rw::math::vpu::Dot(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:107
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector2_operation_inline.h:108
			VectorIntrinsicUnion::VectorIntrinsic product;

			// vector2_operation_inline.h:108
			VectorIntrinsicUnion::VectorIntrinsic x_product;

			// vector2_operation_inline.h:108
			VectorIntrinsicUnion::VectorIntrinsic y_product;

		}
	}
}

void rw::math::vpu::GetVecFloat_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator==(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:40
		bool ret;

	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector2  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:666
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector2_operation_inline.h:667
			VectorIntrinsicUnion::VectorIntrinsic signMask;

		}
	}
}

void rw::math::vpu::operator/(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1688
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1689
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vec_float_operation_inline.h:1689
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vec_float_operation_inline.h:1689
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vec_float_operation_inline.h:1689
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vec_float_operation_inline.h:1689
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
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

void rw::math::vpu::GetVecFloat_One() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator>(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:356
		bool result;

	}
}

void rw::math::vpu::operator>=(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:673
		bool result;

	}
}

void rw::math::vpu::operator<=(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:832
		bool result;

	}
}

void BrnAI::LineTestSectionHNG(const AISection *  lpSection, const rw::math::vpu::Vector2  lLineStart, const rw::math::vpu::Vector2  lLineEnd) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHNGTest.cpp:50
		int32_t liHngLineIndex;

		// BrnHNGTest.cpp:51
		Vector2 lLineVector;

		// BrnHNGTest.cpp:52
		Vector2 lNegLineNormalVector;

	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	{
		// BrnHNGTest.cpp:57
		const BoundaryLine * lpHNGLine;

		// BrnHNGTest.cpp:58
		Vector2 lBoundaryStart;

		// BrnHNGTest.cpp:59
		Vector2 lBoundaryEnd;

		// BrnHNGTest.cpp:60
		Vector2 lBoundaryVector;

		// BrnHNGTest.cpp:61
		Vector2 lBoundaryNormalVector;

		// BrnHNGTest.cpp:62
		VecFloat lfDenominator;

		// BrnHNGTest.cpp:63
		Vector2 lLineBoundaryVector;

		// BrnHNGTest.cpp:64
		VecFloat lfR;

		// BrnHNGTest.cpp:65
		VecFloat lfS;

		BoundaryLine::GetStartPos(/* parameters */);
		BoundaryLine::GetEndPos(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		{
		}
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator==(/* parameters */);
	}
	AISection::GetHNGLine(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::operator<=(/* parameters */);
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapDebugComponent::DrawX(CgsDev::Debug2DImmediateRender *  lpDisplay, const rw::math::vpu::Vector2  lPosition, float32_t  lfSize, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector2  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:434
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

void BrnAI::RouteMapDebugComponent::ToMapCoords(const rw::math::vpu::Vector2  lPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
}

void BrnMath::IsNormal(const rw::math::vpu::Vector3  lVector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Magnitude(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:160
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:161
			VectorIntrinsicUnion::VectorIntrinsic dotproduct;

			{
				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic yy;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic zz;

			}
			{
				// vector3_operation_inline.h:161
				const VectorIntrinsicUnion::VectorIntrinsic zero;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic isZeroMask;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic recipSqrt;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic result;

				{
					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void rw::math::vpu::IsSimilar(const VecFloat  a, const const float &  b, const VecFloat  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Subtract(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:690
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		// vec_float_operation_platform_inline.h:692
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_platform_inline.h:691
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

void BrnAI::AICar::GetDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			{
				(None)unknown_arg
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			{
				(None)unknown_arg
				{
					(None)unknown_arg
					(None)unknown_arg
					{
					}
				}
			}
		}
		{
			{
				(None)unknown_arg
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			{
				(None)unknown_arg
				{
					(None)unknown_arg
					(None)unknown_arg
					{
					}
				}
			}
		}
		{
			{
				(None)unknown_arg
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			{
				(None)unknown_arg
				{
					(None)unknown_arg
					(None)unknown_arg
					{
					}
				}
			}
		}
	}
	{
		(None)unknown_arg
		{
			(None)unknown_arg
			{
				{
					{
					}
					{
						{
							{
							}
						}
					}
				}
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
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
				(None)unknown_arg
				{
					{
					}
					{
						(None)unknown_arg
					}
				}
			}
			{
				(None)unknown_arg
				(None)unknown_arg
				{
					{
						{
						}
						{
							(None)unknown_arg
						}
					}
				}
			}
		}
	}
}

void BrnAI::AICar::GetDirection(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	BrnMath::IsNormal(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::MagnitudeSquared(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:167
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic yy;

			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic zz;

		}
	}
}

void rw::math::vpu::IsSimilar(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b, const VecFloat  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsSimilarV3(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1, VectorIntrinsicInParam  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:401
		bool ret;

		{
			// vector_intrinsic_operation_inline.h:402
			VectorIntrinsicUnion::VectorIntrinsic difference;

			{
				// vector_intrinsic_operation_inline.h:402
				VectorIntrinsicUnion::VectorIntrinsic comparisonValue;

				{
					// vector_intrinsic_operation_inline.h:402
					const VectorIntrinsicUnion::VectorIntrinsic mask;

					// vector_intrinsic_operation_inline.h:402
					const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

				}
			}
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

void rw::math::vpu::operator>=(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:765
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:767
		bool ret;

		{
			// vec_float_operation_inline.h:766
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:453
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Clamp<float>(float  value, float  min, float  max) {
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

void rw::math::fpu::Min<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:155
		float test;

		// scalar.h:156
		float r;

	}
}

void rw::math::fpu::operator-<float>(const const Vector2Template<float> &  a, const const Vector2Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector2_operation.h:141
	Vector2Template<float> & r;

	{
		// vector2_operation.h:141
		Vector2Template<float> r;

	}
}

void rw::math::fpu::Vector2Template<float>::Vector2Template(float  _x, float  _y) {
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

void BrnAI::AStar::EuclideanDistanceYBiased(const const Vector2Template<float> &  lPosition0, const const Vector2Template<float> &  lPosition1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
}

void rw::math::fpu::Vector2Template<float>::X() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Y() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AStar::ManhattanDistance(const const Vector2Template<float> &  lPosition0, const const Vector2Template<float> &  lPosition1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::Abs<float>(/* parameters */);
	rw::math::fpu::Abs<float>(/* parameters */);
}

void BrnAI::AStar::DiagonalDistance(const const Vector2Template<float> &  lPosition0, const const Vector2Template<float> &  lPosition1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::Abs<float>(/* parameters */);
	rw::math::fpu::Abs<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
}

void rw::math::vpu::Magnitude(const rw::math::vpu::Vector2  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:168
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector2_operation_inline.h:169
			VectorIntrinsicUnion::VectorIntrinsic dotproduct;

			{
				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic product;

				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic x_product;

				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic y_product;

			}
			{
				// vector2_operation_inline.h:169
				const VectorIntrinsicUnion::VectorIntrinsic zero;

				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic isZeroMask;

				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic recipSqrt;

				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic result;

				{
					// vector2_operation_inline.h:169
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector2_operation_inline.h:169
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector2_operation_inline.h:169
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector2_operation_inline.h:169
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector2_operation_inline.h:169
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector2_operation_inline.h:169
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector2_operation_inline.h:169
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector2_operation_inline.h:169
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void rw::math::vpu::operator+=(const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Lerp<float>(float  a, float  b, float  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Min<int>(const const int &  a, const const int &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::Convert3DVectorTo2D(const rw::math::vpu::Vector3  l3DVector, const Vector2 &  l2DVector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetX<VectorAxisX>(/* parameters */);
	SetY<VectorAxisZ>(/* parameters */);
}

void BrnAI::AStarNode::Construct(const const Vector2Template<float> &  lPosition, uint16_t  luLinkSectionIndex, uint16_t  luSectionIndex, uint8_t  luPortalIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::operator=(const const Vector2Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AStar::EuclideanDistance(const const Vector2Template<float> &  lPosition0, const const Vector2Template<float> &  lPosition1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::operator-<float>(/* parameters */);
}

void BrnAI::AStar::EuclideanDistanceXBiased(const const Vector2Template<float> &  lPosition0, const const Vector2Template<float> &  lPosition1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::operator-<float>(/* parameters */);
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::operator float() {
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

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator float() {
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

void BrnAI::Calc2DIntersectionEquationData(const rw::math::vpu::Vector2  lLineOneStartPos, const rw::math::vpu::Vector2  lLineOneEndPos, const rw::math::vpu::Vector2  lLineTwoStartPos, const rw::math::vpu::Vector2  lLineTwoEndPos, float32_t *  lpfR, float32_t *  lpfS) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIUtils.cpp:233
		float32_t lfAX;

		// BrnAIUtils.cpp:234
		float32_t lfAY;

		// BrnAIUtils.cpp:236
		float32_t lfBX;

		// BrnAIUtils.cpp:237
		float32_t lfBY;

		// BrnAIUtils.cpp:239
		float32_t lfCX;

		// BrnAIUtils.cpp:240
		float32_t lfCY;

		// BrnAIUtils.cpp:242
		float32_t lfDX;

		// BrnAIUtils.cpp:243
		float32_t lfDY;

		// BrnAIUtils.cpp:245
		float32_t lfDenominator;

		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
}

void BrnAI::SwapXY(const Vector2 &  lVector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.cpp:484
		float32_t lTempX;

		SetX<VectorAxisY>(/* parameters */);
		rw::math::vpu::Vector2::SetY(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	}
}

void rw::math::fpu::IsZero(float  value, float  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnAI::Convert2DVectorTo3D(const rw::math::vpu::Vector2  l2DVector, float32_t  lfYValue, const Vector3 &  l3DVector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetX<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	SetZ<VectorAxisY>(/* parameters */);
}

void rw::math::vpu::operator-<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1464
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1465
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1467
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1468
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator-<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1464
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1465
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1467
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1468
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator+<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1318
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1319
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1321
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1322
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator+<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1318
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1319
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1321
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1322
			VectorIntrinsicUnion u;

		}
	}
}

void BrnAI::RouteMapDebugComponent::DrawPoint(CgsDev::Debug2DImmediateRender *  lpDisplay, const rw::math::vpu::Vector2  lPosition, float32_t  lfSize, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
}

void BrnAI::RacingLine::IsInitialised() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsZero(const rw::math::vpu::Vector2  v, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsZero<VectorAxisX>(VecFloatRef<VectorAxisX> &  value, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const const VecFloatRef<VectorAxisX> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsZero<VectorAxisY>(VecFloatRef<VectorAxisY> &  value, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const const VecFloatRef<VectorAxisY> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Normalize(const rw::math::vpu::Vector2  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:203
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector2_operation_inline.h:204
			VectorIntrinsicUnion::VectorIntrinsic temp_one_over_rqrt_dot;

			{
				// vector2_operation_inline.h:204
				VectorIntrinsicUnion::VectorIntrinsic dotproduct;

				{
					// vector2_operation_inline.h:204
					VectorIntrinsicUnion::VectorIntrinsic product;

					// vector2_operation_inline.h:204
					VectorIntrinsicUnion::VectorIntrinsic x_product;

					// vector2_operation_inline.h:204
					VectorIntrinsicUnion::VectorIntrinsic y_product;

				}
				{
					// vector2_operation_inline.h:204
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector2_operation_inline.h:204
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector2_operation_inline.h:204
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector2_operation_inline.h:204
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector2_operation_inline.h:204
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector2_operation_inline.h:204
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector2_operation_inline.h:204
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector2_operation_inline.h:204
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void rw::math::vpu::Clamp(const const float &  value, const const float &  min, const const float &  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Max<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:29
		float test;

		// scalar_operation_platform_inline.h:30
		float r;

	}
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

void rw::math::vpu::IsSimilar<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisX> &  b, const VecFloat  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Subtract<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:710
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_platform_inline.h:711
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_platform_inline.h:713
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::IsSimilar<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, VecFloatRef<VectorAxisZ> &  b, const VecFloat  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::VecFloatRef(const const VecFloatRef<VectorAxisZ> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Subtract<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:710
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_platform_inline.h:711
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_platform_inline.h:713
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisZ>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:164
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnAI::RouteMapDebugComponent::ToMapCoords(const rw::math::vpu::Vector3  lPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
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

void rw::RGBA::RGBA(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDebugComponent::StateTableDrawEntry(CgsDev::Debug2DImmediateRender *  lpDisplay, const char *  lpacText, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugComponent.cpp:1617
		Vector2 lTextPos;

		rw::RGBA::RGBA(/* parameters */);
	}
}

void rw::math::vpu::operator+<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisX> &  b) {
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

void BrnAI::RaceBalancingDebugComponent::DrawGraphFrame(CgsDev::Debug2DImmediateRender *  lpDisplay, const rw::math::vpu::Vector2  lPosition, const rw::math::vpu::Vector2  lSize, const char *  lpacLabelX, const char *  lpacLabelY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
}

void BrnAI::Route::GetNodeCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::Route::GetDefaultStartNode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::IsPlayerCar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::IsOnStartLine() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetRouteFindingStyle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetDistanceToPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::IsInEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetRaceTimer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::IsCurrentlyDrivenByPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugInterface::DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeAquire() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::RGBA() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugInterface::~DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeRelease(DebugManager *  lpDebugManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::IsInRange() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetDriver() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDebugComponent::DrawDriftingDebug(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugComponent.cpp:1915
		const AICar * lpAICar;

	}
}

void BrnAI::AICar::GetProximityIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetRelativePositionToPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::BoundaryLine::GetX(uint8_t  lu8VertIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::BoundaryLine::GetY(uint8_t  lu8VertIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::BrnAIDebugUtils::DrawBoundryLineWithY(CgsDev::Debug3DImmediateRender *  lpDisplay, const BoundaryLine *  lpBoundryLine, RGBA  luColour, float32_t *  lafTopY, float32_t *  lafBottomY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugUtils.cpp:487
		Vector3[2] laTopEdge;

		// BrnAIDebugUtils.cpp:488
		Vector3[2] laBottomEdge;

		// BrnAIDebugUtils.cpp:490
		uint8_t luVertIndex;

		BoundaryLine::GetX(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		BoundaryLine::GetX(/* parameters */);
	}
}

void BrnAI::BrnAIDebugUtils::DrawBoundryLine(CgsDev::Debug3DImmediateRender *  lpDisplay, const BoundaryLine *  lpBoundryLine, RGBA  luColour, float32_t  lfY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugUtils.cpp:522
		float32_t[2] lafTopY;

		// BrnAIDebugUtils.cpp:523
		float32_t[2] lafBottomY;

		// BrnAIDebugUtils.cpp:525
		uint8_t luVertIndex;

	}
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

void BrnAI::DistancePointToLine(const rw::math::vpu::Vector2  l2DPoint, const rw::math::vpu::Vector2  l2DStartLine, const rw::math::vpu::Vector2  l2DEndLine, const Vector2 &  l2DPointOnLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIUtils.h:182
		Vector2 lB;

		// BrnAIUtils.h:183
		Vector2 lA;

		// BrnAIUtils.h:185
		VecFloat lfSelfDot;

		// BrnAIUtils.h:197
		VecFloat lfLineLength;

		// BrnAIUtils.h:198
		VecFloat lfDot;

		// BrnAIUtils.h:200
		VecFloat lfParam;

	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector2  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:374
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::Cross(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:114
		VectorIntrinsicUnion::VectorIntrinsic a_x;

		// vector2_operation_inline.h:114
		VectorIntrinsicUnion::VectorIntrinsic a_y;

		// vector2_operation_inline.h:114
		VectorIntrinsicUnion::VectorIntrinsic b_x;

		// vector2_operation_inline.h:114
		VectorIntrinsicUnion::VectorIntrinsic b_y;

		// vector2_operation_inline.h:114
		VectorIntrinsicUnion::VectorIntrinsic prod1;

		// vector2_operation_inline.h:114
		VectorIntrinsicUnion::VectorIntrinsic prod2;

	}
}

void rw::math::vpu::operator>(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:480
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:482
		bool ret;

		{
			// vec_float_operation_inline.h:481
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator<(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:638
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:640
		bool ret;

		{
			// vec_float_operation_inline.h:639
			VectorIntrinsicUnion u;

		}
	}
}

void BrnAI::BoundaryLine::GetVert(uint8_t  lu8VertIndex, const Vector2 &  lVert) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1657
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1658
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1658
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator-(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1394
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator-(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1539
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator/=(const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator<(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:606
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:608
		bool ret;

		{
			// vec_float_operation_inline.h:607
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator>(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:448
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:450
		bool ret;

		{
			// vec_float_operation_inline.h:449
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator<=(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:924
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:926
		bool ret;

		{
			// vec_float_operation_inline.h:925
			VectorIntrinsicUnion u;

		}
	}
}

void BrnAI::LineTestTrafficHNG(const BrnAI::NearbyVehicles *  lpNearbyTraffic, const rw::math::vpu::Vector2  lAttemptStartPos, const rw::math::vpu::Vector2  lAttemptEndPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHNGTest.cpp:106
		float32_t lfR;

		// BrnHNGTest.cpp:107
		float32_t lfS;

		// BrnHNGTest.cpp:109
		float32_t lfAX;

		// BrnHNGTest.cpp:110
		float32_t lfAY;

		// BrnHNGTest.cpp:111
		float32_t lfBXMinuslfAX;

		// BrnHNGTest.cpp:112
		float32_t lfBYMinuslfAY;

		// BrnHNGTest.cpp:115
		int32_t liTrafficIndex;

		rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	}
	rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	{
		// BrnHNGTest.cpp:118
		const BrnAI::NearbyVehicle * lpTraffic;

		// BrnHNGTest.cpp:119
		uint16_t lu16HNGIndex;

		// BrnHNGTest.cpp:121
		Vector2 lPointOnLine;

		// BrnHNGTest.cpp:122
		float32_t lfDistance;

		// BrnHNGTest.cpp:125
		float32_t KF_TOO_CLOSE_TOO_TRAFFIC;

		DistancePointToLine(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator==(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	{
		// BrnHNGTest.cpp:139
		const BoundaryLine * lpHNGLine;

		// BrnHNGTest.cpp:141
		Vector2 lBoundryLineStartPos;

		// BrnHNGTest.cpp:142
		Vector2 lBoundryLineEndPos;

		// BrnHNGTest.cpp:147
		VecFloat lfCX;

		// BrnHNGTest.cpp:148
		VecFloat lfCY;

		// BrnHNGTest.cpp:150
		VecFloat lfDYMinusCY;

		// BrnHNGTest.cpp:151
		VecFloat lfDXMinusCX;

		// BrnHNGTest.cpp:153
		VecFloat lfDenominator;

		BoundaryLine::GetVert(/* parameters */);
		BoundaryLine::GetVert(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Vector2::Set(/* parameters */);
		rw::math::vpu::Vector2::Set(/* parameters */);
		rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator==(/* parameters */);
	}
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator/=(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/=(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	rw::math::vpu::operator<=(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
}

void BrnAI::AICar::HasValidSection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetBestSectionIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::Route::GetStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::HasValidRoute() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::IsStartingRace() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::RequestRoute() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::GetFlag(BrnGui::Selectable::StateFlags  lxFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::SetFlag(BrnGui::Selectable::StateFlags  lxFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::SetActive(bool  lbActive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetFlag(/* parameters */);
	ClearFlag(/* parameters */);
	SetFlag(/* parameters */);
}

void BrnGui::Selectable::SetHighlightable(bool  lbHighlightable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetFlag(/* parameters */);
	ClearFlag(/* parameters */);
	SetFlag(/* parameters */);
}

void BrnGui::Selectable::SetSelectable(bool  lbSelectable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetFlag(/* parameters */);
	ClearFlag(/* parameters */);
	SetFlag(/* parameters */);
}

void rw::math::vpu::GetVecFloat_Half() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::HardNoGoMap::GetCurrentLeft() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::HardNoGoMap::GetCurrentRight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::HardNoGoMap::GetPreviousLeft() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnHardNoGoMap.h:309
	Vector2 lPos;

	{
		// BrnHardNoGoMap.h:309
		Vector2 lPos;

	}
}

void BrnAI::HardNoGoMap::GetPreviousRight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnHardNoGoMap.h:326
	Vector2 lPos;

	{
		// BrnHardNoGoMap.h:326
		Vector2 lPos;

	}
}

void rw::math::vpu::Lerp(const rw::math::vpu::Vector2  v0, const rw::math::vpu::Vector2  v1, const VecFloat  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:247
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector2_operation_inline.h:248
			VectorIntrinsicUnion::VectorIntrinsic temp_lerp_v;

		}
	}
}

void rw::math::vpu::CompGreaterThan(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:313
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator+(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1248
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::Select(const MaskScalar  mask, const VecFloat  trueValue, const VecFloat  falseValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:350
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Lerp(const rw::math::vpu::Vector3  v0, const rw::math::vpu::Vector3  v1, const VecFloat  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:244
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:245
			VectorIntrinsicUnion::VectorIntrinsic temp_lerp_v;

		}
	}
}

void CgsContainers::RingBuffer<BrnAI::ResetOnTrackManager::RecentResetEntry>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<BrnAI::ResetOnTrackManager::RecentResetEntry>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::IsActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::IsInAir() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetAggressiveness() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::Aggressiveness::GetProximityToSpeedMatch() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::IsTouchingPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::RaceBalancingRoute,7u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::RaceBalancingGraph,7u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISectionsData::GetAISectionCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::RandomUInt(uint32_t  luMin, uint32_t  luMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:302
		uint32_t luMod;

		// CgsRandom.h:305
		uint32_t luResult;

	}
}

void CgsNumeric::Random::RandomUInt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:273
		uint32_t luResult;

	}
}

void BrnAI::AICar::SetDestination(uint16_t  luAISectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::IsInAir() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::IsShortcut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::IsNoReset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::IsAIShortcut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::IsSplit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::IsTerminator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapDebugComponent::GetSectionTypeColour(const AISection *  lpAISection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AISection::IsInAir(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
}

void BrnAI::AStarNodePool::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAStar.h:461
		uint16_t luPartitionIndex;

	}
}

void BrnAI::AStarNode::SetCost(float32_t  lfCost) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AStarNode::GetPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template(const const Vector2Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AStar::Distance(const const Vector2Template<float> &  lPosition0, const const Vector2Template<float> &  lPosition1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AStarNode::SetHeuristic(float32_t  lfHeuristic) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::SetSeed(uint64_t  luSeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:219
		uint32_t luPreflight;

	}
}

void CgsNumeric::Random::RandomFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:352
		float32_t lfRandomFractionPlusOne;

		// CgsRandom.h:356
		float32_t lfRandomFraction;

	}
}

void CgsNumeric::Random::AddRandomFloatToBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::ConvertUnsignedFixed32ToFloatRepresentation(uint32_t  lu32Random) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:230
		const uint32_t KU_IEEE_754_REPRESENTATION_FLOAT_ONE;

	}
}

void CgsNumeric::Random::RandomFloat(float_t  lfMin, float_t  lfMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDriver::ResetStuckTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDriver::ClearAIControls() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Sin(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sinf(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Cos(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::cosf(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnAI::Rotate2DVectorByAngle(const rw::math::vpu::Vector2  lVectorIn, float32_t  lfAngleInRadians, const Vector2 &  lVectorOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIUtils.cpp:120
		Vector2 lVectorInCopy;

		// BrnAIUtils.cpp:121
		float32_t lfSinAngle;

		// BrnAIUtils.cpp:122
		float32_t lfCosAngle;

	}
	rw::math::fpu::Sin(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	{
	}
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector2::SetX(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
}

void BrnAI::AIDriver::GetCar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetCarAssetAttribKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::burnoutcarasset::burnoutcarasset(Attribute::Key  collectionKey, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::burnoutcarasset::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Instance::SetDefaultLayout(unsigned int  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::burnoutcarasset::PhysicsVehicleHandlingAsset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Instance::GetLayoutPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::physicsvehiclehandling::physicsvehiclehandling(const Attrib::Collection *  collection, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::physicsvehiclehandling::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::physicsvehiclehandling::PhysicsVehicleSteeringAttribs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::physicsvehiclesteeringattribs::physicsvehiclesteeringattribs(const Attrib::Collection *  collection, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::physicsvehiclesteeringattribs::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::physicsvehiclesteeringattribs::~physicsvehiclesteeringattribs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::physicsvehiclehandling::~physicsvehiclehandling() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::burnoutcarasset::~burnoutcarasset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::ACos(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::acosf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// acosf4.h:23
		float[4] result;

		// acosf4.h:23
		float[4] xabs;

		// acosf4.h:24
		float[4] t1;

		// acosf4.h:25
		float[4] xabs2;

		// acosf4.h:25
		float[4] xabs4;

		// acosf4.h:26
		float[4] hi;

		// acosf4.h:26
		float[4] lo;

		// acosf4.h:27
		float[4] neg;

		// acosf4.h:27
		float[4] pos;

		// acosf4.h:28
		unsigned int[4] select;

	}
}

void std::sqrtf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// sqrtf4.h:16
		float[4] zero;

		// sqrtf4.h:17
		float[4] half;

		// sqrtf4.h:18
		float[4] one;

		// sqrtf4.h:19
		float[4] y0;

		// sqrtf4.h:19
		float[4] y0x;

		// sqrtf4.h:19
		float[4] y0xhalf;

		// sqrtf4.h:20
		unsigned int[4] cmp_zero;

	}
}

void BrnAI::FindUnsignedAngleBetween2DVectors(const rw::math::vpu::Vector2  lVector1, const rw::math::vpu::Vector2  lVector2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIUtils.cpp:91
		float32_t lfCosAngle;

		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
	rw::math::vpu::ACos(/* parameters */);
	rw::math::vpu::Abs<float>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	vec_sub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_abs(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_sra(/* parameters */);
	vec_rsqrte(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
}

void rw::math::vpu::operator*<VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1583
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1584
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1586
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator*<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1583
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1584
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1586
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::Sgn(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:91
		VectorIntrinsicUnion::VectorIntrinsic zero;

		// scalar_operation_platform_inline.h:92
		VectorIntrinsicUnion::VectorIntrinsic one;

		// scalar_operation_platform_inline.h:93
		VectorIntrinsicUnion::VectorIntrinsic negOne;

		// scalar_operation_platform_inline.h:96
		VectorIntrinsicUnion::VectorIntrinsic greaterThanZeroMask;

		// scalar_operation_platform_inline.h:98
		VectorIntrinsicUnion::VectorIntrinsic result0;

		// scalar_operation_platform_inline.h:100
		VectorIntrinsicUnion::VectorIntrinsic greaterEqualThanZeroMask;

	}
}

void rw::math::vpu::operator*=(const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::FindSignedAngleBetween2DVectors(const rw::math::vpu::Vector2  lVector1, const rw::math::vpu::Vector2  lVector2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIUtils.cpp:45
		float32_t lfAngle;

		// BrnAIUtils.cpp:63
		float32_t lfDet;

		rw::math::vpu::operator*<VectorAxisX, VectorAxisY>(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY, VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::IsNaN(/* parameters */);
	rw::math::vpu::Sgn(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsNaN(/* parameters */);
}

void CgsSound::MemBase::operator delete(void *  lpvMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::FreeMemoryResource(MemoryResource  memoryResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resourceallocator.h:191
		Resource resource;

	}
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

void rw::BaseResources<6u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::MemBase::~MemBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::MemBase::~MemBase(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::MemBase::operator delete(/* parameters */);
	rw::IResourceAllocator::FreeMemoryResource(/* parameters */);
}

void CgsSound::MemBase::~MemBase(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Environment::operator delete(void *  lpVoid, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Environment::DoDispose() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEnvironment.h:538
		rw::IResourceAllocator * lpAllocator;

		operator delete(/* parameters */);
	}
}

void CgsSound::Playback::Factory::operator delete(void *  lpVoid, const CgsSound::Playback::Environment &  lEnvironment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Environment::Free(void *  lpVoid) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Factory::DoDispose() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFactory.h:322
		const CgsSound::Playback::Environment & lEnvironment;

		operator delete(/* parameters */);
	}
}

void BrnAI::AICar::SetRouteFindingStyle(BrnAI::ERouteFindingStyle  leRouteFindingStyle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::SetSpeedSelectionMethod(BrnAI::EAISpeedSelectionMethod  leSpeedSelectionMethod) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapDebugComponent::GetSectionSpeedColour(const AISection *  lpAISection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AISection::GetSectionSpeed(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
}

void BrnAI::RouteMapDebugComponent::GetSectionColour(int32_t  liColourMode, const AISection *  lpAISection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::LandmarkIndex(int32_t  lTriggerRegionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::Construct(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
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

void renderengine::RGBA32::RGBA32(float32_t  red, float32_t  green, float32_t  blue, float32_t  alpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Vector3Template(float  _x, float  _y, float  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Vector4Template(float  _x, float  _y, float  _z, float  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<double>::Vector2Template(double  _x, double  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<double>::Vector3Template(double  _x, double  _y, double  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::Vector4Template(double  _x, double  _y, double  _z, double  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::EntityId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::VolumeInstanceId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeId::VolumeId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneQueryId::SceneQueryId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::RigidBodyId::RigidBodyId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::JointId::JointId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::DriveId::DriveId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::DegToRad<float>(float  angle_degrees) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactId::ContactId(uint32_t  luId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Cos(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::cosf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// cosf4.h:14
		float[4] xl;

		// cosf4.h:14
		float[4] xl2;

		// cosf4.h:14
		float[4] xl3;

		// cosf4.h:14
		float[4] res;

		// cosf4.h:15
		int[4] q;

		// cosf4.h:30
		int[4] offset;

		// cosf4.h:34
		float[4] qf;

		// cosf4.h:35
		float[4] p1;

		// cosf4.h:49
		float[4] ct1;

		// cosf4.h:50
		float[4] st1;

		// cosf4.h:52
		float[4] ct2;

		// cosf4.h:53
		float[4] st2;

		// cosf4.h:55
		float[4] cx;

		// cosf4.h:56
		float[4] sx;

		// cosf4.h:61
		unsigned int[4] mask1;

		// cosf4.h:68
		unsigned int[4] mask2;

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

void CgsResource::BaseResourcePtr::~BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::RemoveFromCurrentList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void __static_initialization_and_destruction_0(int  __initialize_p, int  __priority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::BaseResourcePtr::~BaseResourcePtr(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	CgsSceneManager::VolumeInstanceId::VolumeInstanceId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Cos(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	vec_and(/* parameters */);
	vec_add(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsSceneManager::VolumeId::VolumeId(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	CgsSceneManager::EntityId::EntityId(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	CgsPhysics::RigidBodyId::RigidBodyId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::JointId::JointId(/* parameters */);
	CgsPhysics::DriveId::DriveId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	BrnPhysics::ContactId::ContactId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	vec_sel(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_cts(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Cos(/* parameters */);
	rw::math::vpu::Cos(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_add(/* parameters */);
	vec_add(/* parameters */);
	vec_cts(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_add(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Cos(/* parameters */);
	rw::math::vpu::Cos(/* parameters */);
	rw::math::vpu::Cos(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_add(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	vec_add(/* parameters */);
	vec_add(/* parameters */);
	vec_cts(/* parameters */);
	vec_cts(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_ctf(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_add(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
}

void CgsSound::Playback::Handle<CgsSound::Playback::Voice>::~Handle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::Voice>::ReleaseObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Object::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Logic::Voice::~Voice() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Logic::Voice::~Voice(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Handle<CgsSound::Playback::Voice>::~Handle(/* parameters */);
	CgsSound::Playback::Object::Release(/* parameters */);
}

void CgsSound::Playback::Handle<CgsSound::Playback::Content>::~Handle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::Content>::ReleaseObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Logic::VoiceWrapper::~VoiceWrapper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Logic::VoiceWrapper::~VoiceWrapper(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Handle<CgsSound::Playback::Content>::~Handle(/* parameters */);
	CgsSound::Logic::Voice::~Voice(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::Voice>::~Handle(/* parameters */);
	CgsSound::MemBase::~MemBase(/* parameters */);
}

void CgsSound::Logic::VoiceWrapper::~VoiceWrapper(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Handle<CgsSound::Playback::Content>::~Handle(/* parameters */);
	CgsSound::Logic::Voice::~Voice(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::Voice>::~Handle(/* parameters */);
	CgsSound::MemBase::operator delete(/* parameters */);
	CgsSound::MemBase::~MemBase(/* parameters */);
	rw::IResourceAllocator::FreeMemoryResource(/* parameters */);
}

void BrnDirector::HookNameStringWrapper::operator=(const const HookNameStringWrapper &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::HookNameStringWrapper::Set(const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::StrCpy(char *  lpcDest, unsigned int  luBytes, const char *  lpcSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern BackgroundEffectRequest & operator=(const const BackgroundEffectRequest &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern CameraEffects & operator=(const const CameraEffects &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnDirector::HookNameStringWrapper::operator=(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	BrnDirector::HookNameStringWrapper::operator=(/* parameters */);
	BrnDirector::HookNameStringWrapper::Set(/* parameters */);
	operator=(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
}

void CgsModule::EventReceiverQueue<1024,16>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::operator++(const BrnAI::AIModule::EReleaseStage &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.h:418
		BrnAI::AIModule::EReleaseStage leOldEnumIndex;

	}
}

void BrnAI::AIModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<1024,16>::Release(/* parameters */);
	operator++(/* parameters */);
	operator++(/* parameters */);
	operator++(/* parameters */);
}

void CgsSound::Playback::Registry::~Registry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::RwacCommandQueue::~RwacCommandQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Factory::~Factory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Factory::operator delete(void *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::GenericRwacFactory::~GenericRwacFactory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::GenericRwacFactory::~GenericRwacFactory(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Factory::~Factory(/* parameters */);
	CgsSound::Playback::Factory::operator delete(/* parameters */);
}

void BrnAI::AICar::GetScheduleOffset(BrnAI::GraphType  leGraphType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetDistanceAheadOfPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetOpponentIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::Portal::GetPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::Portal::GetNumBoundryLines() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::Portal::GetBoundaryLine(uint8_t  lu8BoundryIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::BrnAIDebugUtils::DrawPortalGeometry(CgsDev::Debug3DImmediateRender *  lpDisplay, const Portal *  lpPortal, bool  lbPlayerSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugUtils.cpp:90
		float32_t lfY;

		// BrnAIDebugUtils.cpp:91
		uint8_t lu8NumBoundryLines;

		// BrnAIDebugUtils.cpp:92
		uint8_t lu8BoundryLineIndex;

		Portal::GetPosition(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	{
		// BrnAIDebugUtils.cpp:96
		const BoundaryLine * lpLine;

		Portal::GetBoundaryLine(/* parameters */);
	}
}

void CgsSound::Playback::GenericRwacFactory::~GenericRwacFactory(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Factory::~Factory(/* parameters */);
}

void CgsSound::Playback::Content::operator delete(void *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Content::~Content() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Content::~Content(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Object::~Object(/* parameters */);
}

void CgsSound::Playback::Content::~Content(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Object::~Object(/* parameters */);
	CgsSound::Playback::Content::operator delete(/* parameters */);
}

void CgsSound::Playback::Factory::~Factory(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Object::~Object(/* parameters */);
}

void CgsSound::Playback::Factory::~Factory(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Object::~Object(/* parameters */);
	CgsSound::Playback::Factory::operator delete(/* parameters */);
}

void Attrib::Gen::physicsvehiclehandling::PhysicsVehicleBoostAttribs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::physicsvehicleboostattribs::physicsvehicleboostattribs(const Attrib::Collection *  collection, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::physicsvehicleboostattribs::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::physicsvehicleboostattribs::MaxBoostSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::physicsvehicleboostattribs::~physicsvehicleboostattribs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::physicsvehiclesteeringattribs::AiLookAheadTimeForDrift() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::physicsvehiclesteeringattribs::AiMinLookAheadDistanceForDrift() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::GetCorner(int32_t  liCornerIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLocked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLockedForReading() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLockedForWriting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest,1>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::Construct(RaceRouteRequest *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::SetEventPointer(RaceRouteRequest *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest,12>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest>::Construct(ExtrapolatedRouteRequest *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest>::SetEventPointer(ExtrapolatedRouteRequest *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnAI::RouteMapModuleIO::RouteResponse,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::Construct(RouteResponse *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::SetEventPointer(RouteResponse *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::UnlockForWrite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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
	}
}

void CgsModule::IOBuffer::UnlockForWrite(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FlagSet<std::int8_t>::UnSetBit(/* parameters */);
}

void CgsModule::IOBuffer::UnlockForRead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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
	}
}

void CgsModule::IOBuffer::UnlockForRead(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FlagSet<std::int8_t>::UnSetBit(/* parameters */);
}

void CgsModule::IOBuffer::LockForRead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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
	}
}

void CgsModule::IOBuffer::LockForRead(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
}

void CgsResource::ResourcePtr<BrnAI::AISectionsData>::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:580
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::SmallResource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::GetMemoryResource(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator=(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModule::Prepare(ResourceHandle  lAISectionsDataHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator=(/* parameters */);
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::GetMemoryResource(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsResource::ResourcePtr<BrnAI::AISectionsData>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugComponent.cpp:464
		ResourcePtr<BrnAI::AISectionsData> lAISectionsDataPtr;

		CgsResource::ResourcePtr<BrnAI::AISectionsData>::ResourcePtr(/* parameters */);
		CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator=(/* parameters */);
		CgsResource::BaseResourcePtr::Reset(/* parameters */);
		CgsResource::ResourceHandle::Construct(/* parameters */);
		CgsResource::ResourcePtr<BrnAI::AISectionsData>::GetMemoryResource(/* parameters */);
		~ResourcePtr(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnAI::AIModule::GetAISectionsData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:2477
		ResourcePtr<BrnAI::AISectionsData> lAISectionsDataPtr;

		// BrnAIModule.cpp:2478
		AISectionsData * lpAISectionsData;

		CgsResource::ResourcePtr<BrnAI::AISectionsData>::ResourcePtr(/* parameters */);
		CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator=(/* parameters */);
		CgsResource::BaseResourcePtr::Reset(/* parameters */);
		CgsResource::ResourceHandle::Construct(/* parameters */);
		CgsResource::ResourcePtr<BrnAI::AISectionsData>::GetMemoryResource(/* parameters */);
		~ResourcePtr(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnAI::AIModuleIO::InputBuffer::GetRaceCarAIInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
		}
	}
	{
		// BrnAIModuleIO.h:366
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
	}
}

void BrnAI::AIModuleIO::InputBuffer::GetRaceCarAIInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnAI::RouteMapModuleIO::InputBuffer::GetRaceRouteRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteMapModuleIO.h:583
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AIModuleIO::InputBuffer::GetRaceRouteRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:138
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest,1>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::Append(const const BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::MemCpy(void *  lpDestination, const void *  lpSource, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::BridgeInputToRouteMapModule(InputBuffer *  lpRouteInputBuffer, const InputBuffer *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleBridges.cpp:50
		InputBuffer::RaceRouteRequestQueue * lpRaceRouteRequestQueue;

		RouteMapModuleIO::InputBuffer::GetRaceRouteRequestQueue(/* parameters */);
		AIModuleIO::InputBuffer::GetRaceRouteRequestQueue(/* parameters */);
		Append<1>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnAI::AIModuleIO::OutputBuffer::GetRouteMapResponseQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:430
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::RouteMapModuleIO::OutputBuffer::GetRouteResponseQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteMapModuleIO.h:624
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<BrnAI::RouteMapModuleIO::RouteResponse,16>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::Append(const const BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::BridgeRouteMapModuleToOutput(OutputBuffer *  lpOutputBuffer, const OutputBuffer *  lpRouteOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AIModuleIO::OutputBuffer::GetRouteMapResponseQueue(/* parameters */);
	RouteMapModuleIO::OutputBuffer::GetRouteResponseQueue(/* parameters */);
	Append<16>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnAI::AISection::GetCornerX(int32_t  liCornerIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::GetCornerZ(int32_t  liCornerIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsSimilar(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsSimilarV2(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1, VectorIntrinsicInParam  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:389
		bool ret;

		{
			// vector_intrinsic_operation_inline.h:390
			VectorIntrinsicUnion::VectorIntrinsic difference;

			{
				// vector_intrinsic_operation_inline.h:390
				VectorIntrinsicUnion::VectorIntrinsic comparisonValue;

				{
					// vector_intrinsic_operation_inline.h:390
					const VectorIntrinsicUnion::VectorIntrinsic mask;

					// vector_intrinsic_operation_inline.h:390
					const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

				}
			}
		}
	}
}

void rw::math::vpu::Sqrt(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:186
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// scalar_operation_inline.h:187
			const VectorIntrinsicUnion::VectorIntrinsic zero;

			// scalar_operation_inline.h:187
			VectorIntrinsicUnion::VectorIntrinsic isZeroMask;

			// scalar_operation_inline.h:187
			VectorIntrinsicUnion::VectorIntrinsic recipSqrt;

			// scalar_operation_inline.h:187
			VectorIntrinsicUnion::VectorIntrinsic result;

			{
				// scalar_operation_inline.h:187
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// scalar_operation_inline.h:187
				VectorIntrinsicUnion::VectorIntrinsic vZero;

				// scalar_operation_inline.h:187
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				// scalar_operation_inline.h:187
				VectorIntrinsicUnion::VectorIntrinsic vHalf;

				{
					// scalar_operation_inline.h:187
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// scalar_operation_inline.h:187
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// scalar_operation_inline.h:187
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// scalar_operation_inline.h:187
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

				}
			}
		}
	}
}

void BrnAI::GetHNGInterpFast(const rw::math::vpu::Vector2  lPoint, const rw::math::vpu::Vector2  lCurrentLeft, const rw::math::vpu::Vector2  lCurrentRight, const rw::math::vpu::Vector2  lPreviousLeft, const rw::math::vpu::Vector2  lPreviousRight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.cpp:508
		float32_t Bx;

		// BrnHardNoGoMap.cpp:509
		float32_t By;

		// BrnHardNoGoMap.cpp:510
		float32_t Cx;

		// BrnHardNoGoMap.cpp:511
		float32_t Cy;

		// BrnHardNoGoMap.cpp:512
		float32_t Dx;

		// BrnHardNoGoMap.cpp:513
		float32_t Dy;

		// BrnHardNoGoMap.cpp:514
		float32_t Px;

		// BrnHardNoGoMap.cpp:515
		float32_t Py;

		// BrnHardNoGoMap.cpp:517
		float32_t DyMinusByMinusCy;

		// BrnHardNoGoMap.cpp:518
		float32_t DxMinusBxMinusCx;

		// BrnHardNoGoMap.cpp:520
		float32_t a;

		// BrnHardNoGoMap.cpp:521
		float32_t b;

		// BrnHardNoGoMap.cpp:522
		float32_t c;

		// BrnHardNoGoMap.cpp:524
		float32_t lfRoot;

		// BrnHardNoGoMap.cpp:536
		float32_t t1;

		// BrnHardNoGoMap.cpp:537
		float32_t t2;

		// BrnHardNoGoMap.cpp:541
		bool T1InRange;

		// BrnHardNoGoMap.cpp:542
		bool T2InRange;

		rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Sqrt(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		// BrnHardNoGoMap.cpp:566
		CgsDev::StrStream lStrStream;

	}
	rw::math::vpu::Abs<float>(/* parameters */);
	rw::math::vpu::Abs<float>(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
}

void rw::math::fpu::Abs<rw::math::vpu::VecFloat>(const const VecFloat &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDriver::SetPerpendicularTarget(float32_t  lfPerpendicularTarget) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDriver::SetRelatedActiveCarIndex(EActiveRaceCarIndex  leRelatedActiveCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RacingLine::ClearSectionCache() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLine.h:452
		int32_t lu32SectionIndex;

		{
			// BrnRacingLine.h:456
			extern const int32_t KI_CACHE_ENTRY_UNUSED = 999;

		}
	}
}

void BrnAI::RacingLine::SetInitialised(bool  lbInitialised) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RacingLine::SetCentreLineAhead(float32_t  lfCentreLineAhead) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDriver::SetAggressionVictim(const AICar *  lpAggressionVictim) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetGlobalRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::PerfMonCpu::StartMonitor(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnGui::Selectable::SetHighlighted(bool  lbHighlighted) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ClearFlag(/* parameters */);
	SetFlag(/* parameters */);
	SetFlag(/* parameters */);
	{
		// BrnSelectable.h:395
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::DestroyInputDataStructure(DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:133
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::DestroyOutputDataStructure(DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:137
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::PrepareDataStructures(DataStructure *  lpInputDataStructure, DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:141
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::ReleaseDataStructures(DataStructure *  lpInputDataStructure, DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:145
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::CreateInputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:125
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::CreateOutputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:129
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnAI::AICar::GetVelocity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsContainers::Array<BrnAI::RaceBalancingRoute,7u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::RaceBalancingRoute,7u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RaceBalancingRoute::OnCheckpoint(int32_t  liCheckpointIndex, float32_t  lfRaceTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void CgsContainers::BitArray<8u>::IsBitSet(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsContainers::Array<BrnAI::AIModuleIO::ResetOnTrackRequest,35u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::AIModuleIO::ResetOnTrackRequest,35u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AIModuleIO::ResetOnTrackRequest::GetGlobalRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::AIModuleIO::ResetOnTrackRequest,35u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::AIModuleIO::ResetOnTrackRequest,35u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::AIModuleIO::ResetOnTrackRequest,35u>::Append(const const ResetOnTrackRequest &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<uint32_t,8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint32_t,8u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint32_t,8u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint32_t,8u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<uint32_t,8u>::Append(const const uint32_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnAI::RaceBalancingGraph,7u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::RaceBalancingGraph,7u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::RaceBalancingGraph,7u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnAI::RaceBalancingGraph,7u>::Append(const const RaceBalancingGraph &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnAI::RaceBalancingRoute,7u>::Construct(uint32_t  luLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RaceBalancingRoute::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::RaceBalancingRoute,7u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetFlag(uint64_t  lFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::RaceBalancingGraph,7u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetOpponentData(int32_t  liOpponentIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetOpponentCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::OpponentData,7u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::OpponentData,7u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::OpponentData::GetRaceBalanceData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RaceBalancingGraph::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceBalancingGraph.h:83
		int32_t liGraphPointIndex;

		// BrnRaceBalancingGraph.h:84
		int32_t liGraphTypeIndex;

	}
}

void BrnProgression::OpponentBalanceData::GetAheadTime(int32_t  liPointIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RaceBalancingGraph::SetPoint(BrnAI::GraphType  leGraphType, int32_t  liPointIndex, float32_t  lfPointValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::OpponentBalanceData::GetBehindTime(int32_t  liPointIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetCheckpointCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::CheckpointData,16u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::SetupRaceBalancingManager(const GameModeParams *  lpGameModeParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:206
		Array<BrnAI::RaceBalancingGraph,7u> lRaceBalancingGraphArray;

		// BrnAIModule.cpp:207
		int32_t liOpponentIndex;

		CgsContainers::Array<BrnAI::RaceBalancingGraph,7u>::Construct(/* parameters */);
		{
			// BrnAIModule.cpp:213
			int32_t liPointIndex;

			// BrnAIModule.cpp:214
			RaceBalancingGraph lRaceBalancingGraph;

			// BrnAIModule.cpp:215
			const OpponentBalanceData * lpRaceBalanceData;

			BrnGameState::GameModeParams::GetOpponentData(/* parameters */);
			BrnGameState::OpponentData::GetRaceBalanceData(/* parameters */);
			RaceBalancingGraph::Construct(/* parameters */);
			RaceBalancingGraph::SetPoint(/* parameters */);
			BrnProgression::OpponentBalanceData::GetBehindTime(/* parameters */);
			RaceBalancingGraph::SetPoint(/* parameters */);
			BrnProgression::OpponentBalanceData::GetAheadTime(/* parameters */);
			CgsContainers::Array<BrnAI::RaceBalancingGraph,7u>::Append(/* parameters */);
		}
		BrnGameState::GameModeParams::GetOpponentCount(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		BrnGameState::GameModeParams::GetCheckpointCount(/* parameters */);
		CgsContainers::Array<BrnGameState::CheckpointData,16u>::GetLength(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::GameModeParams::GetAStarDistanceFunction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteRequestManager::SetDefaultAStarDistanceFunction(BrnAI::AStarDistanceFunction  leDefaultAStarDistanceFunction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetCheckpointData(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::CheckpointData,16u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::CheckpointData,16u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::CheckpointData::GetBlockSectionIds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetAIAggresiveCarCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetDefaultPlayerRouteFindingStyle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetDefaultAIRouteFindingStyle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetAISpeedSelectionMethod() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::Route::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::BuzzBy::SetInGameMode(bool  lbIsInGameMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::OnModeStart(const GameModeParams *  lpGameModeParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:905
		int32_t liCheckpointIndex;

	}
	RouteRequestManager::SetDefaultAStarDistanceFunction(/* parameters */);
	BrnGameState::GameModeParams::GetCheckpointCount(/* parameters */);
	BrnGameState::GameModeParams::GetCheckpointData(/* parameters */);
	BuzzBy::SetInGameMode(/* parameters */);
	Route::Construct(/* parameters */);
}

void BrnAI::RaceBalancingRoute::OnTakenDown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::InputBuffer_PostPhysics::GetContactSpyInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyInterface::operator=(const const ContactSpyInterface &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::PostPhysicsUpdate(const InputBuffer_PostPhysics *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
	BrnPhysics::ContactSpy::ContactSpyInterface::Clear(/* parameters */);
	BrnPhysics::ContactSpy::ContactSpyInterface::operator=(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
}

void BrnAI::Aggressiveness::SetProximityToSpeedMatch(float32_t  lfProximitySpeedMatch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggressiveness.h:91
		CgsDev::StrStream lStrStream;

	}
}

void CgsDev::StrStreamBase::operator<<(float32_t  lfReal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:598
		union UFloatInt {
			// CgsStrStream.h:599
			float32_t mfReal;

			// CgsStrStream.h:600
			int32_t miInt;

		}
		// CgsStrStream.h:602
		UFloatInt lFloatInt;

	}
}

void BrnAI::Aggressiveness::SetTimeForSpeedMatch(float32_t  lfTimeForSpeedMatch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggressiveness.h:107
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::Aggressiveness::SetRelativeSpeedForMatch(float32_t  lfRelativeSpeedForSpeedMatch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::Aggressiveness::SetAcclerationRateForSpeedMatch(float32_t  lfAcclerationRateForSpeedMatch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggressiveness.h:99
		CgsDev::StrStream lStrStream;

	}
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

void BrnAI::AICar::SetDirection(Vector3  lDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	BrnMath::IsNormal(/* parameters */);
	{
		// BrnAICar.h:848
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void rw::math::vpu::GetVector3_YAxis() {
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

void rw::math::vpu::IsZero(const rw::math::vpu::Vector3  v, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsZeroV3(VectorIntrinsicInParam  v, VectorIntrinsicInParam  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:310
		bool ret;

		{
			// vector_intrinsic_operation_inline.h:311
			VectorIntrinsicUnion::VectorIntrinsic comparisonValue;

			{
				// vector_intrinsic_operation_inline.h:311
				const VectorIntrinsicUnion::VectorIntrinsic mask;

				// vector_intrinsic_operation_inline.h:311
				const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

			}
		}
	}
}

void rw::math::vpu::GetVector3_ZAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::SetRight(Vector3  lRight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICar.h:1312
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AICar::SetBuzzFrequencyRatio(float32_t  lfBuzzFrequencyRatio) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector3_XAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::InvalidateDestination() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::SetProximityIndex(int32_t  liProximityIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::SetIsInJunkyard(bool  lbIsInJunkYard) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnAI::DistancePointToLine(const rw::math::vpu::Vector2  lPoint, const rw::math::vpu::Vector2  lStart, const rw::math::vpu::Vector2  lEnd) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIUtils.h:97
		Vector2 lA;

		// BrnAIUtils.h:98
		Vector2 lB;

		// BrnAIUtils.h:100
		float32_t lfLineLength;

		// BrnAIUtils.h:102
		float32_t lfResult;

		rw::math::vpu::Magnitude(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		// BrnAIUtils.h:115
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
}

void rw::math::vpu::IsValid(const rw::math::vpu::Vector2  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVecFloat_Two() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const VecFloat  s, const rw::math::vpu::Vector2  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:381
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void CgsDev::StrStreamBase::operator<<(const rw::math::vpu::Vector2  lVec) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:710
		float32_t lfX;

		// CgsStrStream.h:711
		float32_t lfY;

	}
}

void BrnAI::GetInterpOnLine(const rw::math::vpu::Vector2  l2DPoint, const rw::math::vpu::Vector2  l2DStartLine, const rw::math::vpu::Vector2  l2DEndLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIUtils.h:258
		Vector2 lA;

		// BrnAIUtils.h:259
		float32_t lfSelfDot;

		// BrnAIUtils.h:268
		Vector2 lB;

		// BrnAIUtils.h:270
		float32_t lfDot;

		// BrnAIUtils.h:274
		float32_t lfParam;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnAIUtils.h:276
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnAIUtils.h:272
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
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
	{
	}
}

void BrnAI::AICar::SetBehaviour(BrnAI::EAIBehaviour  leBehaviour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDriver::ClearOffCentreBias() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetBehaviour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIAggression::IsTryingToSlam() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIAggression::IsVeeringExtreme() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::SgnNonZero<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::Aggressiveness::GetRelativeSpeedForMatch() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::ResetOnTrackManager::GetAICar(EGlobalRaceCarIndex  leGlobalRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::RaceCarAIInterface::GetActiveRaceCarSpeed(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AIModuleIO::RaceCarAIInterface::GetActiveRaceCarVelocity(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AIModuleIO::RaceCarAIInterface::GetActiveRaceCarMatrix(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::Array<BrnAI::RaceBalancingRoute,7u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::RaceBalancingRoute::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetNextRouteNodeIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RaceBalancingRoute::GetTime(BrnAI::GraphType  leGraphType, int32_t  liTimeIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISectionsData::GetAISection(uint32_t  luSectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::GetHNGLineCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapDebugComponent::DrawHNGSectionAsPlanes(CgsDev::Debug3DImmediateRender *  lpDisplay, uint16_t  luSectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteMapDebugComponent.cpp:1267
		const AISection * lpAISection;

		// BrnRouteMapDebugComponent.cpp:1268
		int32_t liHNGLineIndex;

	}
	AISectionsData::GetAISection(/* parameters */);
	AISection::GetHNGLineCount(/* parameters */);
	{
		// BrnRouteMapDebugComponent.cpp:1272
		const BoundaryLine * lpHNGLine;

		// BrnRouteMapDebugComponent.cpp:1273
		float32_t lfY;

		// BrnRouteMapDebugComponent.cpp:1274
		Vector3 lPosition0;

		// BrnRouteMapDebugComponent.cpp:1275
		Vector3 lPosition1;

		// BrnRouteMapDebugComponent.cpp:1276
		Vector3 lPosition2;

		// BrnRouteMapDebugComponent.cpp:1277
		Vector3 lPosition3;

		AISection::GetHNGLine(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		BoundaryLine::GetX(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		BoundaryLine::GetX(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		BoundaryLine::GetY(/* parameters */);
		BoundaryLine::GetX(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		BoundaryLine::GetX(/* parameters */);
	}
}

void CgsNumeric::Random::RandomInt(int32_t  liMin, int32_t  liMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:322
		uint32_t luMod;

		// CgsRandom.h:327
		int32_t liResult;

	}
}

void BrnMath::Flatten(const rw::math::vpu::Vector3  lVector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::GetAICar(EGlobalRaceCarIndex  leIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.h:444
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AICar::IsOpponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RaceBalancingDebugComponent::FindAICar(int32_t  liOpponentIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceBalancingDebugComponent.cpp:457
		int32_t liAICarIndex;

		{
			// BrnRaceBalancingDebugComponent.cpp:461
			AICar * lpCurrentAICar;

			AIModule::GetAICar(/* parameters */);
			AICar::IsOpponent(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AIModuleIO::OutputBuffer::GetAIRaceCarInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:444
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AIDriver::CanPassThroughTraffic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::AIRaceCarInterface::UpdateAllRaceCarData(EGlobalRaceCarIndex  leGlobalRaceCarIndex, bool  lCanPassThroughTraffic) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<35u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AIModule::ProcessInRangeVehicles(OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:2226
		EGlobalRaceCarIndex leGlobalRaceCarIndex;

		// BrnAIModule.cpp:2227
		AIRaceCarInterface * lpAIRaceCarInterface;

	}
	AIModuleIO::OutputBuffer::GetAIRaceCarInterface(/* parameters */);
	{
		// BrnAIModule.cpp:2239
		AICar * lpCar;

		GetAICar(/* parameters */);
		AICar::GetDriver(/* parameters */);
		AIModuleIO::AIRaceCarInterface::UpdateAllRaceCarData(/* parameters */);
	}
	operator++(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AICar::IsInGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::OnModeEnd(bool  lbSwitchToOffline) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:1018
		EGlobalRaceCarIndex leGlobalRaceCarIndex;

	}
	RouteRequestManager::SetDefaultAStarDistanceFunction(/* parameters */);
	{
		// BrnAIModule.cpp:1035
		AICar * lpAICar;

		GetAICar(/* parameters */);
	}
	operator++(/* parameters */);
	BuzzBy::SetInGameMode(/* parameters */);
	Route::Destruct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AIModule::OnRollingStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:995
		EGlobalRaceCarIndex leGlobalRaceCarIndex;

		{
			// BrnAIModule.cpp:999
			AICar * lpAICar;

			GetAICar(/* parameters */);
		}
		operator++(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AIModule::OnPlayerTakedown(const OnPlayerTakedownAction *  lpOnPlayerTakedownAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:886
		AICar * lpAICar;

	}
	GetAICar(/* parameters */);
	AICar::IsOpponent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AIModule::OnModeFinished(const FinishedModeAction *  lpFinishedModeAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:861
		EGlobalRaceCarIndex leIndex;

		{
			// BrnAIModule.cpp:866
			AICar * lpAICar;

			GetAICar(/* parameters */);
		}
		operator++(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AICar::OnReachedCheckpoint(int32_t  liCheckpointIndex, uint16_t  luDestinationAISectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::OnRaceCarReachedCheckpoint(const RaceCarReachedCheckpointAction *  lpRaceCarReachedCheckpointAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:837
		AICar * lpAICar;

	}
	GetAICar(/* parameters */);
	AICar::IsOpponent(/* parameters */);
	AICar::OnReachedCheckpoint(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AIModule::GetPlayerCar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::OnRaceCarReachedFinish(const RaceCarReachedFinishAction *  lpRaceCarReachedFinishAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetAICar(/* parameters */);
	GetPlayerCar(/* parameters */);
	GetAICar(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AICar::GetRoute() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::OnModeStartRacing(bool  lbIgnorePlayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:955
		EGlobalRaceCarIndex leGlobalRaceCarIndex;

	}
	{
		// BrnAIModule.cpp:961
		AICar * lpAICar;

		GetAICar(/* parameters */);
	}
	operator++(/* parameters */);
	GetPlayerCar(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AIModule::UpdateOneProximityIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:1056
		AICar * lpUs;

		// BrnAIModule.cpp:1067
		EGlobalRaceCarIndex leGlobalRaceCarIndex;

		// BrnAIModule.cpp:1068
		EGlobalRaceCarIndex lePlayerGlobalRaceCarIndex;

		// BrnAIModule.cpp:1072
		int32_t liCloser;

	}
	GetAICar(/* parameters */);
	operator++(/* parameters */);
	GetPlayerCar(/* parameters */);
	AICar::GetGlobalRaceCarIndex(/* parameters */);
	{
		// BrnAIModule.cpp:1079
		AICar * lpAICar;

		GetAICar(/* parameters */);
	}
	operator++(/* parameters */);
	AICar::SetProximityIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AIModule::GetAIDriver(EActiveRaceCarIndex  leIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.h:452
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AIDriver::IsActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::SetSuitabilityForAggression(EActiveRaceCarIndex  leDriverActiveRaceCarIndex, const RaceCarAIInterface *  lpCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:1246
		AICar * lpCar;

		// BrnAIModule.cpp:1247
		BrnAI::AIDriver * lpDriver;

		// BrnAIModule.cpp:1251
		AIAggression * lpAggression;

		GetAIDriver(/* parameters */);
	}
	AIDriver::GetCar(/* parameters */);
	AICar::GetSpeed(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnAIModule.cpp:1249
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnAI::RouteRequestManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventReceiverQueue<1024,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:150
		EGlobalRaceCarIndex leGlobalRaceCarIndex;

		// BrnAIModule.cpp:157
		EActiveRaceCarIndex leActiveRaceCarIndex;

	}
	RouteRequestManager::Construct(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	CgsModule::EventReceiverQueue<1024,16>::Construct(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	CgsNumeric::Random::Construct(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	GetAICar(/* parameters */);
	operator++(/* parameters */);
	GetAIDriver(/* parameters */);
	operator++(/* parameters */);
	Route::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AICar::SetNextRouteNodeIndex(int32_t  liNextRouteNodeIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICar.h:968
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::HardNoGoMap::MapSquareOccupiedFast(int32_t  liWidth, int32_t  liHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.h:270
		MapData lMapMask;

		{
			// BrnHardNoGoMap.h:264
			CgsDev::StrStream lStrStream;

		}
		{
			// BrnHardNoGoMap.h:265
			CgsDev::StrStream lStrStream;

		}
		{
			// BrnHardNoGoMap.h:266
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnAI::HardNoGoMap::SetMapSquare(int32_t  liWidth, int32_t  liHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHardNoGoMap.h:291
		MapData lMapBit;

		{
			// BrnHardNoGoMap.h:287
			CgsDev::StrStream lStrStream;

		}
		{
			// BrnHardNoGoMap.h:288
			CgsDev::StrStream lStrStream;

		}
		{
			// BrnHardNoGoMap.h:289
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnAI::AIModuleIO::ResetOnTrackRequest::Construct(EGlobalRaceCarIndex  leGlobalRaceCarIndex, float32_t  lfResetSpeed, float32_t  lfResetDistance, BrnAI::EResetType  leResetType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleRequestInterface.h:129
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::ResetOnTrackDebugComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackDebugComponent.cpp:151
		ResetOnTrackRequest lRequest;

		AIModuleIO::ResetOnTrackRequest::Construct(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AIModuleIO::InputBuffer::GetAIModuleRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:387
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AIModuleIO::AIModuleRequestInterface::GetResetOnTrackRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::ProcessRequestInterface(const InputBuffer *  lpInputBuffer, OutputBuffer *  lpOutputBuffer, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:2062
		const AIModuleRequestInterface::ResetOnTrackRequestQueue * lpResetOnTrackRequestQueue;

		// BrnAIModule.cpp:2065
		int32_t liEvent;

		// BrnAIModule.cpp:2066
		EActiveRaceCarIndex leDriverActiveRaceCarIndex;

		AIModuleIO::InputBuffer::GetAIModuleRequestInterface(/* parameters */);
		CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>::GetEvent(/* parameters */);
		{
			// BrnAIModule.cpp:2085
			bool lbSimPaused;

			{
				// BrnAIModule.cpp:2092
				ResetOnTrackRequest lRequest;

				// BrnAIModule.cpp:2093
				const AICar * lpAICar;

			}
			GetAIDriver(/* parameters */);
			GetAIDriver(/* parameters */);
			AIDriver::ResetStuckTime(/* parameters */);
		}
		operator++(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetAIDriver(/* parameters */);
	GetAIDriver(/* parameters */);
	AICar::GetGlobalRaceCarIndex(/* parameters */);
	AIModuleIO::ResetOnTrackRequest::Construct(/* parameters */);
	GetAIDriver(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AICar::GetGlobalRaceCarIndex(/* parameters */);
	AIModuleIO::ResetOnTrackRequest::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<16384,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<16384,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsDev::StrStreamBase::operator<<(CgsDev::PrintMode  lePrintMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(void *  lpPointer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:627
		CgsDev::PrintMode leSavedPrintMode;

	}
}

void CgsModule::VariableEventQueue<4096,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<4096,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<4096,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
}

void CgsModule::VariableEventQueue<4096,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<4096,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<4096,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[160] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

		GetEventPaddingSize(/* parameters */);
		OutputQueueContents(/* parameters */);
		{
			// CgsVariableEventQueue.h:464
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>::AddEvent(const const PlaceOnTrackRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[128] __PRETTY_FUNCTION__;

	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<1536,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<1536,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<1536,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
}

void CgsModule::VariableEventQueue<1536,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<1536,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<1536,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[160] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

		GetEventPaddingSize(/* parameters */);
		OutputQueueContents(/* parameters */);
		{
			// CgsVariableEventQueue.h:464
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<13312,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<13312,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AIModuleIO::InputBuffer::GetGameActionQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:148
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<13312,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void BrnGameState::GameStateModuleIO::PrepareForModeAction::GetGameModeParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::StopModeAction::IsNextRoundAvailable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RaceRouteRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Event() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::AISectionId,16u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::AddEventSafe(const const RaceRouteRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::BuzzBy::SetInJunkyard(bool  lbIsInJunkYard) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::HandleGameActions(const InputBuffer *  lpInputBuffer, OutputBuffer *  lpOutputBuffer, InputBuffer *  lpRouteInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:1556
		const InputBuffer::GameActionQueue * lpGameActionQueue;

		// BrnAIModule.cpp:1559
		const CgsModule::Event * lpAction;

		// BrnAIModule.cpp:1560
		int32_t liActionSize;

		// BrnAIModule.cpp:1561
		int32_t liActionType;

		AIModuleIO::InputBuffer::GetGameActionQueue(/* parameters */);
		CgsModule::VariableEventQueue<13312,16>::GetFirstEvent(/* parameters */);
		{
			// BrnAIModule.cpp:1705
			const JunkYardDriveThruAction * lpJunkYardDriveThruAction;

			BuzzBy::SetInJunkyard(/* parameters */);
			GetPlayerCar(/* parameters */);
			AICar::SetIsInJunkyard(/* parameters */);
		}
	}
	{
		// BrnAIModule.cpp:1723
		const SetPlayerCarDriverAction * lpPlayerCarDriverAction;

		{
			// BrnAIModule.cpp:1727
			AICar * lpPlayerCar;

			GetPlayerCar(/* parameters */);
			AICar::SetBehaviour(/* parameters */);
		}
	}
	{
		// BrnAIModule.cpp:1619
		const StopModeAction * lpStopModeAction;

		BrnGameState::GameStateModuleIO::StopModeAction::IsNextRoundAvailable(/* parameters */);
	}
	{
		// BrnAIModule.cpp:1644
		const RequestRouteInfoAction * lpRouteRequest;

		// BrnAIModule.cpp:1645
		RaceRouteRequest lRouteRequest;

		RaceRouteRequest(/* parameters */);
		RouteMapModuleIO::InputBuffer::GetRaceRouteRequestQueue(/* parameters */);
		CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::AddEventSafe(/* parameters */);
	}
	GetPlayerCar(/* parameters */);
	AICar::SetIsInJunkyard(/* parameters */);
	BuzzBy::SetInJunkyard(/* parameters */);
	GetPlayerCar(/* parameters */);
	AICar::SetBehaviour(/* parameters */);
	GetPlayerCar(/* parameters */);
	AICar::SetBehaviour(/* parameters */);
	{
		// BrnAIModule.cpp:1627
		const UpdateRoadRageMadnessAction * lpUpdateRoadRageMadnessAction;

		// BrnAIModule.cpp:1629
		BrnAI::AIDriver * lpDriver;

		GetAIDriver(/* parameters */);
		{
			// BrnAIModule.cpp:1633
			AICar * lpCar;

		}
	}
	GetPlayerCar(/* parameters */);
	AICar::SetBehaviour(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BuzzBy::SetInJunkyard(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AICar::SetRouteFindingStyle(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AICar::SetBehaviour(/* parameters */);
	AICar::SetRouteFindingStyle(/* parameters */);
}

void CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<16384,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<4920,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<4920,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<4920,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
}

void CgsModule::VariableEventQueue<4920,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<4920,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<4920,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[160] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

		GetEventPaddingSize(/* parameters */);
		OutputQueueContents(/* parameters */);
		{
			// CgsVariableEventQueue.h:464
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnPhysics::Vehicle::BrnAIDriverControls::BrnAIDriverControls() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::BrnPlayerDriverControls::BrnPlayerDriverControls() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::OutputBuffer::GetVehicleDriverInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:402
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::BrnAIDriverControls::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::BrnPlayerDriverControls::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDriver::GetBrake() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDriver::GetSteering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDriver::GetAccelerator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDriver::GetBoost() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDriver::IsInvulnerable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDriver::WantToExitDrift() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDriver::WantToEnterDrift() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDriver::GetForcedSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDriver::UseForcedSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDriver::GetHandBrake() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDriver::IsOnStartLine() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDriver::HasCar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleDriverInputInterface::UpdateAIDriver(const BrnAIDriverControls *  lpDriverControls) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::ProcessAIVehicleInputs(OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:2132
		BrnAIDriverControls lDriverControls;

		// BrnAIModule.cpp:2133
		OutputBuffer::VehicleDriverInputInterface * lpDriverInputInterface;

		// BrnAIModule.cpp:2134
		EActiveRaceCarIndex leDriverActiveRaceCarIndex;

	}
	BrnPhysics::Vehicle::BrnAIDriverControls::BrnAIDriverControls(/* parameters */);
	AIModuleIO::OutputBuffer::GetVehicleDriverInterface(/* parameters */);
	{
		// BrnAIModule.cpp:2152
		BrnAI::AIDriver * lpDriver;

		GetAIDriver(/* parameters */);
		BrnPhysics::Vehicle::BrnAIDriverControls::Clear(/* parameters */);
		{
			// BrnAIModule.cpp:2158
			bool lbIsPlayer;

			AIDriver::IsInvulnerable(/* parameters */);
			AIDriver::IsOnStartLine(/* parameters */);
			AICar::IsOnStartLine(/* parameters */);
		}
		BrnPhysics::Vehicle::VehicleDriverInputInterface::UpdateAIDriver(/* parameters */);
	}
	operator++(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::TrafficAIInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent,34>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent>::Construct(RivalInTrafficUpdateEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent>::SetEventPointer(RivalInTrafficUpdateEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<EGlobalRaceCarIndex,34u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatusInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::SetFraction(float32_t  lfFraction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTime.h:316
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::Time::SetSeconds(int32_t  liSeconds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::RaceCarAIInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::AIModuleRequestInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest,128>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>::Construct(ResetOnTrackRequest *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>::SetEventPointer(ResetOnTrackRequest *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<13312,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<13312,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<32768,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<32768,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Construct(TakedownEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::SetEventPointer(TakedownEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PlayerVehicleControls::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::ClearRouteRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::SimpleStrStream::SimpleStrStream() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::SimpleStrStream::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::SimpleStrStream::GetBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::SimpleStrStream::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::GetAIDriver(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnAI::AIModuleIO::RaceCarAIInterface::IsActiveRaceCarDataValid(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::RaceCarAIInterface::GetActiveRaceCarSection(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsValid(const rw::math::vpu::Matrix44Affine &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::GetAIDrivesPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::RaceCarAIInterface::IsActiveRaceCarInAir(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::RaceCarAIInterface::IsActiveRaceCarCrashing(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::RaceCarAIInterface::IsActiveRaceCarInShowtime(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::RaceCarAIInterface::IsActiveRaceCarOnStartLine(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::RaceCarAIInterface::IsActiveRaceCarDrifting(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::RaceCarAIInterface::IsActiveRaceCarTouchingAnother(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::RaceCarAIInterface::IsActiveRaceCarTouchingPlayer(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::StoreDrivenCarData(const InputBuffer *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:2003
		const RaceCarAIInterface * lpCarInterface;

		// BrnAIModule.cpp:2004
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnAIModule.cpp:2005
		bool lbIsPlayer;

		// BrnAIModule.cpp:2006
		bool lbIsPlayerControlled;

	}
	AIModuleIO::InputBuffer::GetRaceCarAIInterface(/* parameters */);
	{
		// BrnAIModule.cpp:2013
		BrnAI::AIDriver * lpDriver;

		{
			// BrnAIModule.cpp:2019
			AICar * lpCar;

			// BrnAIModule.cpp:2020
			uint16_t luAISection;

			AIModuleIO::RaceCarAIInterface::IsActiveRaceCarDataValid(/* parameters */);
			AIModuleIO::RaceCarAIInterface::GetActiveRaceCarSection(/* parameters */);
			AIDriver::GetCar(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			AIModuleIO::RaceCarAIInterface::IsActiveRaceCarInAir(/* parameters */);
			AIModuleIO::RaceCarAIInterface::IsActiveRaceCarCrashing(/* parameters */);
			AIModuleIO::RaceCarAIInterface::IsActiveRaceCarInShowtime(/* parameters */);
			AIModuleIO::RaceCarAIInterface::IsActiveRaceCarOnStartLine(/* parameters */);
			AIModuleIO::RaceCarAIInterface::IsActiveRaceCarDrifting(/* parameters */);
			AIModuleIO::RaceCarAIInterface::IsActiveRaceCarTouchingAnother(/* parameters */);
			AIModuleIO::RaceCarAIInterface::IsActiveRaceCarTouchingPlayer(/* parameters */);
		}
	}
	operator++(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnAIModule.cpp:2017
		CgsDev::StrStream lStrStream;

	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnAI::AIModule::GetAICar(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnAI::RouteNode::SetDistanceLeft(float32_t  lfDistanceLeft) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteNode::GetPositionWithZeroY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::Flags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::LockForWrite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBuffer.h:219
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
	{
		// CgsIOBuffer.h:218
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AIModuleIO::OutputBuffer::GetAIResourceRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:416
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::GameDataIO::RequestInterface<4096>::LoadBundle(BaseEventReceiverQueue *  lpEventReceiverQueue, int32_t  liUserEventId, int32_t  liPoolId, const char *  lpcBundleName, bool  lbUseHDCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataRequestQueue.h:904
		LoadBundleRequest lRequest;

	}
}

void CgsResource::Events::LoadBundleRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, const char *  lpcFileName, int32_t  liPoolId, bool  lbLiveUpdateReplace, bool  lbAllowFailiure, bool  lbUseHDCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, const char *  lpcFileName, int32_t  liPoolId, bool  lbLiveUpdateReplace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::SetUser(BaseEventReceiverQueue *  lpUser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::SetEventId(int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::SetFileName(const char *  lpcFileName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::SetPoolId(int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(bool  lbLiveUpdateReplace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::LoadBundleRequest::SetAllowFailiure(bool  lbAllowFailiure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::LoadBundleRequest::SetUseHDCache(bool  lbUseCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceIO::ResourceRequestQueue<4096>::LoadBundle(const const LoadBundleRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<4096>::AcquireResource(BaseEventReceiverQueue *  lpEventReceiverQueue, int32_t  liUserEventId, int32_t  liPoolId, const char *  lpcResourceName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataRequestQueue.h:962
		AcquireResourceRequest lRequest;

	}
}

extern void AcquireResourceRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PoolEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ID::ID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, int32_t  liPoolId, const char *  lpcResourceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceIOEvents.h:1646
		ID lId;

	}
}

void CgsResource::ID::Construct(const RwChar *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, int32_t  liPoolId, ID  lResourceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::SetUser(BaseEventReceiverQueue *  lpUser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::SetEventId(int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::SetPoolId(int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceRequest::SetResourceId(ID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceIO::ResourceRequestQueue<4096>::AcquireResource(const const AcquireResourceRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:355
		CgsModule::BaseEventReceiverQueue::CBufferEntry * lpBufferEntry;

	}
}

void CgsResource::Events::PoolEvent::GetEventId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceResponse::GetHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:390
		int32_t liPrevEntryPosition;

		// CgsEventReceiverQueue.h:394
		CgsModule::BaseEventReceiverQueue::CBufferEntry * lpPrevBufferEntry;

		// CgsEventReceiverQueue.h:397
		int32_t liNextEntryPosition;

		{
			// CgsEventReceiverQueue.h:391
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsEventReceiverQueue.h:400
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsEventReceiverQueue.h:401
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsEventReceiverQueue.h:407
			CgsModule::BaseEventReceiverQueue::CBufferEntry * lpNextBufferEntry;

		}
	}
}

void CgsModule::BaseEventReceiverQueue::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:590
		int32_t liRem;

		// CgsEventReceiverQueue.h:591
		int32_t liPaddingBytes;

	}
}

void BrnAI::AIModule::LoadMapData(OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:378
		OutputBuffer::AIResourceRequestInterface * lpResourceRequestInterface;

		AIModuleIO::OutputBuffer::GetAIResourceRequestInterface(/* parameters */);
		BrnResource::GameDataIO::RequestInterface<4096>::LoadBundle(/* parameters */);
		CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		// BrnAIModule.cpp:410
		OutputBuffer::AIResourceRequestInterface * lpResourceRequestInterface;

		AIModuleIO::OutputBuffer::GetAIResourceRequestInterface(/* parameters */);
		BrnResource::GameDataIO::RequestInterface<4096>::AcquireResource(/* parameters */);
		CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	}
	{
		// BrnAIModule.cpp:434
		const CgsModule::Event * lpEvent;

		// BrnAIModule.cpp:435
		const AcquireResourceResponse * lpAcquire;

		// BrnAIModule.cpp:436
		int32_t liEventSize;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsModule::BaseEventReceiverQueue::GetNextEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnAI::operator++(const BrnAI::AIModule::EPrepareStage &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.h:417
		BrnAI::AIModule::EPrepareStage leOldEnumIndex;

	}
}

void CgsModule::EventReceiverQueue<1024,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<float32_t,16u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnAI::AISectionsData>::ResourcePtr(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::ResetOnTrackManager::Construct(ResourcePtr<BrnAI::AISectionsData> &  lpAISectionData, AICar *  lpaAICars) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::AIModuleIO::ResetOnTrackRequest,35u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FixedRingBuffer<BrnAI::ResetOnTrackManager::RecentResetEntry,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<BrnAI::ResetOnTrackManager::RecentResetEntry>::Construct(BrnAI::ResetOnTrackManager::RecentResetEntry *  lpBuffer, int32_t  liBufferLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<BrnAI::ResetOnTrackManager::RecentResetEntry>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator=(const const ResourcePtr<BrnAI::AISectionsData> &  lOtherResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::CreateFromPointer(const BaseResourcePtr *  lpSrcPtr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::Prepare(const AllocatorList *  lpAllocatorList, OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:302
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnAIModule.cpp:303
		AISectionsData * lpAISectionsData;

		// BrnAIModule.cpp:304
		int32_t liRoundRobinIndex;

		operator++(/* parameters */);
		operator++(/* parameters */);
	}
	operator++(/* parameters */);
	CgsModule::EventReceiverQueue<1024,16>::Prepare(/* parameters */);
	operator++(/* parameters */);
	operator++(/* parameters */);
	CgsContainers::Array<float32_t,16u>::Construct(/* parameters */);
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::ResourcePtr(/* parameters */);
	ResetOnTrackManager::Construct(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator=(/* parameters */);
	CgsContainers::Array<BrnAI::AIModuleIO::ResetOnTrackRequest,35u>::Construct(/* parameters */);
	CgsContainers::FixedRingBuffer<BrnAI::ResetOnTrackManager::RecentResetEntry,8>::Construct(/* parameters */);
	~ResourcePtr(/* parameters */);
	CgsResource::BaseResourcePtr::~BaseResourcePtr(/* parameters */);
	operator++(/* parameters */);
	GetAIDriver(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::AddEvent(const const RouteResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[128] __PRETTY_FUNCTION__;

	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::Array<uint32_t,8u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsDev::SimpleStrStream::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::GetId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapDebugComponent::DrawEventBlockSectionsInMap(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteMapDebugComponent.cpp:715
		int32_t liCheckpointIndex;

		{
			// BrnRouteMapDebugComponent.cpp:719
			CgsDev::SimpleStrStream lStrStream;

			// BrnRouteMapDebugComponent.cpp:720
			int32_t liBlockSectionIndex;

			// BrnRouteMapDebugComponent.cpp:721
			int32_t liBlockSectionCount;

			CgsDev::SimpleStrStream::SimpleStrStream(/* parameters */);
			CgsContainers::Array<uint32_t,8u>::GetLength(/* parameters */);
			CgsDev::SimpleStrStream::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			{
				// BrnRouteMapDebugComponent.cpp:729
				int32_t liAISectionIndex;

				// BrnRouteMapDebugComponent.cpp:730
				AISection::AISectionId lAISectionId;

				CgsContainers::Array<uint32_t,8u>::operator[](/* parameters */);
				CgsDev::SimpleStrStream::operator<<(/* parameters */);
				{
					// BrnRouteMapDebugComponent.cpp:736
					const AISection * lpAISection;

				}
				AISectionsData::GetAISection(/* parameters */);
				{
					// BrnRouteMapDebugComponent.cpp:740
					Vector2 lMapPos;

					AISectionsData::GetAISection(/* parameters */);
				}
			}
			CgsDev::SimpleStrStream::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AStarNodePool::GetNode(uint16_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AStarNode::IsOpen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapDebugComponent::DrawAStarInMap(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteMapDebugComponent.cpp:767
		int32_t liBlockSectionIndex;

		// BrnRouteMapDebugComponent.cpp:768
		int32_t liNodeIndex;

		// BrnRouteMapDebugComponent.cpp:769
		int32_t liPartitionIndex;

		// BrnRouteMapDebugComponent.cpp:770
		int32_t liClosedNodeCount;

		// BrnRouteMapDebugComponent.cpp:771
		AStarNodePool * lpAStarNodePool;

		// BrnRouteMapDebugComponent.cpp:772
		CgsDev::SimpleStrStream lStrStream;

		CgsDev::SimpleStrStream::SimpleStrStream(/* parameters */);
	}
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	{
		// BrnRouteMapDebugComponent.cpp:784
		int32_t liGlobalIndex;

		// BrnRouteMapDebugComponent.cpp:785
		AStarNode * lpNode;

		// BrnRouteMapDebugComponent.cpp:786
		RGBA lColour;

		// BrnRouteMapDebugComponent.cpp:787
		Vector2 lPos2D;

		AStarNodePool::GetNode(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
	}
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnRouteMapDebugComponent.cpp:834
		int32_t liAISectionIndex;

		// BrnRouteMapDebugComponent.cpp:835
		AISection::AISectionId lAISectionId;

		CgsDev::SimpleStrStream::operator<<(/* parameters */);
		{
			// BrnRouteMapDebugComponent.cpp:841
			const AISection * lpAISection;

		}
		AISectionsData::GetAISection(/* parameters */);
		{
			// BrnRouteMapDebugComponent.cpp:845
			Vector2 lMapPos;

			AISectionsData::GetAISection(/* parameters */);
		}
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
	}
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	{
	}
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
}

void rw::math::vpu::IsSimilar(const const float &  a, const const float &  b, const VecFloat  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Subtract(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::Sign(float32_t  lfFloat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::SectionData::SetSectionExit(const rw::math::vpu::Vector2  lExit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::MagnitudeSquared(const rw::math::vpu::Vector2  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:175
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector2_operation_inline.h:176
			VectorIntrinsicUnion::VectorIntrinsic product;

			// vector2_operation_inline.h:176
			VectorIntrinsicUnion::VectorIntrinsic x_product;

			// vector2_operation_inline.h:176
			VectorIntrinsicUnion::VectorIntrinsic y_product;

		}
	}
}

void rw::math::vpu::operator/(const rw::math::vpu::Vector2  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:388
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector2_operation_inline.h:389
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vector2_operation_inline.h:389
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vector2_operation_inline.h:389
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vector2_operation_inline.h:389
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector2_operation_inline.h:389
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void rw::math::vpu::operator-(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1420
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		// vec_float_operation_inline.h:1422
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1421
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator-=(const VecFloat &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1058
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::Clamp(const VecFloat  value, const VecFloat  min, const VecFloat  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Max<rw::math::vpu::VecFloat>(const const VecFloat &  a, const const VecFloat &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:149
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Min<rw::math::vpu::VecFloat>(const const VecFloat &  a, const const VecFloat &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:132
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void CgsDev::StrStreamBase::operator<<(bool  lbValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>::AddEvent(const const ResetOnTrackResult &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[127] __PRETTY_FUNCTION__;

	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AICar::GetResetOnTrackSectionIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStream::GetBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<BrnAI::ResetOnTrackDebugComponent::ResetEntry>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::ResetOnTrackRequest::GetResetType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::ResetOnTrackRequest::GetResetDistance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::ResetOnTrackResult::GetResetSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::ResetOnTrackResult::GetState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<BrnAI::ResetOnTrackDebugComponent::ResetEntry>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::ResetOnTrackDebugComponent::RenderHUD(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackDebugComponent.cpp:190
		int32_t liIndex;

		// BrnResetOnTrackDebugComponent.cpp:191
		int32_t liLineIndex;

	}
	{
		// BrnResetOnTrackDebugComponent.cpp:195
		const BrnAI::ResetOnTrackDebugComponent::ResetEntry * lpResetEntry;

		// BrnResetOnTrackDebugComponent.cpp:196
		bool lbIsPlayer;

		{
			// BrnResetOnTrackDebugComponent.cpp:200
			char[512] lacBuffer;

			// BrnResetOnTrackDebugComponent.cpp:201
			CgsDev::StrStream lStrStream;

			// BrnResetOnTrackDebugComponent.cpp:202
			RGBA lTextColour;

			AIModuleIO::ResetOnTrackRequest::GetGlobalRaceCarIndex(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			AIModuleIO::ResetOnTrackResult::GetState(/* parameters */);
			CgsDev::StrStream::GetBuffer(/* parameters */);
		}
	}
	CgsContainers::RingBuffer<BrnAI::ResetOnTrackDebugComponent::ResetEntry>::operator[](/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		// BrnResetOnTrackDebugComponent.cpp:174
		char[512] lacBuffer;

		// BrnResetOnTrackDebugComponent.cpp:175
		CgsDev::StrStream lStrStream;

		// BrnResetOnTrackDebugComponent.cpp:176
		AICar * lpPlayerCar;

		CgsDev::StrStream::StrStream(/* parameters */);
		ResetOnTrackManager::GetAICar(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsContainers::RingBuffer<BrnAI::ResetOnTrackManager::RecentResetEntry>::GetLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::ResetOnTrackDebugComponent::ResetPlayerCarOnTrack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackDebugComponent.cpp:393
		ResetOnTrackRequest lRequest;

	}
	AIModuleIO::ResetOnTrackRequest::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::ResetOnTrackDebugComponent::ResetPlayerCarOnTrackCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RacingLineGenerator::GetSectionPointer(RacingLine *  lpRacingLine, int32_t  lIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.h:413
		int32_t lCacheIndex;

		{
			// BrnRacingLineGenerator.h:418
			CgsDev::StrStream lStrStream;

			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
			{
				(None)unknown_arg
				(None)unknown_arg
			}
			{
				(None)unknown_arg
				(None)unknown_arg
			}
		}
	}
}

void BrnAI::RacingLineGenerator::GetSectionPointer(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AISection::GetPortal(uint8_t  lu8PortalIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AISectionsData.h:880
		CgsDev::StrStream lStrStream;

	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:543
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AICar::GetResetOnTrackStartPortal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetResetOnTrackEndPortal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::ResetOnTrackDebugComponent::DrawResetOnTrackAISection(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackDebugComponent.cpp:431
		EGlobalRaceCarIndex leGlobalRaceCarIndex;

		{
			// BrnResetOnTrackDebugComponent.cpp:435
			bool lbIsPlayer;

			{
				// BrnResetOnTrackDebugComponent.cpp:439
				const AICar * lpAICar;

				ResetOnTrackManager::GetAICar(/* parameters */);
				{
					// BrnResetOnTrackDebugComponent.cpp:443
					const AISection * lpAISection;

					// BrnResetOnTrackDebugComponent.cpp:444
					Vector3 lStartPortalPosition;

					// BrnResetOnTrackDebugComponent.cpp:445
					Vector3 lEndPortalPosition;

					// BrnResetOnTrackDebugComponent.cpp:446
					RGBA lLineColour;

					CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
					AISectionsData::GetAISection(/* parameters */);
					Portal::GetPosition(/* parameters */);
					Portal::GetPosition(/* parameters */);
					rw::math::vpu::Vector3::Vector3(/* parameters */);
					rw::math::vpu::Vector3::Vector3(/* parameters */);
					rw::math::vpu::Vector3::Vector3(/* parameters */);
					rw::math::vpu::Vector3::Vector3(/* parameters */);
				}
			}
		}
		operator++(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnAI::RouteNode::GetSectionIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteNode::GetPortalIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetLastGoodPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+=(const Vector3 &  v, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnMath::MagnitudeSquared2D(const rw::math::vpu::Vector3  lVector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1583
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1584
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1586
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator*<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1583
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1584
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1586
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AISection::IsJunction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::Portal::GetLinkSectionIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::GetPortalCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(const rw::math::vpu::Vector3  lVec) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:720
		float32_t lfX;

		// CgsStrStream.h:721
		float32_t lfY;

		// CgsStrStream.h:722
		float32_t lfZ;

	}
}

void BrnAI::RouteMapDebugComponent::DrawAISectionInfo(CgsDev::Debug2DImmediateRender *  lpDisplay, uint16_t  luAISectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteMapDebugComponent.cpp:1298
		const AISection * lpAISection;

		// BrnRouteMapDebugComponent.cpp:1299
		Vector2 lMapPosition;

		// BrnRouteMapDebugComponent.cpp:1300
		CgsDev::SimpleStrStream lStrStream;

		// BrnRouteMapDebugComponent.cpp:1301
		int32_t liPortalIndex;

	}
	AISectionsData::GetAISection(/* parameters */);
	CgsDev::SimpleStrStream::SimpleStrStream(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	AISection::GetId(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
}

void CgsDev::Debug3DImmediateRender::GetCameraPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapDebugComponent::DrawAllPortalGeometry(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteMapDebugComponent.cpp:1025
		uint16_t luSectionIndex;

		// BrnRouteMapDebugComponent.cpp:1026
		Vector3 lCameraPos;

		// BrnRouteMapDebugComponent.cpp:1027
		Vector3 lDist;

	}
	{
		// BrnRouteMapDebugComponent.cpp:1032
		const AISection * lpAISection;

		// BrnRouteMapDebugComponent.cpp:1033
		uint8_t lu8NumPortals;

		// BrnRouteMapDebugComponent.cpp:1034
		uint8_t lu8PortalIndex;

		// BrnRouteMapDebugComponent.cpp:1048
		bool lbPlayerSection;

		AISectionsData::GetAISection(/* parameters */);
	}
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	AICar::GetBestSectionIndex(/* parameters */);
	{
		// BrnRouteMapDebugComponent.cpp:1058
		const Portal * lpPortal;

	}
}

void BrnAI::RouteMapDebugComponent::DrawHNGAsPlanes(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteMapDebugComponent.cpp:980
		uint16_t luPlayerSectionIndex;

	}
	AICar::GetBestSectionIndex(/* parameters */);
	{
		// BrnRouteMapDebugComponent.cpp:984
		int32_t liPortalIndex;

		// BrnRouteMapDebugComponent.cpp:985
		const AISection * lpAISection;

		AISectionsData::GetAISection(/* parameters */);
	}
	{
		// BrnRouteMapDebugComponent.cpp:996
		int32_t liSubPortalIndex;

		// BrnRouteMapDebugComponent.cpp:997
		uint16_t luSubSectionIndex;

		// BrnRouteMapDebugComponent.cpp:998
		const AISection * lpSubAISection;

		AISectionsData::GetAISection(/* parameters */);
	}
}

void BrnAI::RouteMapDebugComponent::DrawPortalIds(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteMapDebugComponent.cpp:935
		uint16_t luSectionIndex;

		// BrnRouteMapDebugComponent.cpp:936
		Vector3 lCameraPos;

		// BrnRouteMapDebugComponent.cpp:937
		Vector3 lDist;

	}
	{
		// BrnRouteMapDebugComponent.cpp:941
		const AISection * lpAISection;

		// BrnRouteMapDebugComponent.cpp:942
		const Portal * lpPortal;

		// BrnRouteMapDebugComponent.cpp:943
		Vector3 lPosition;

		// BrnRouteMapDebugComponent.cpp:944
		char[20] lacBuff;

		AISectionsData::GetAISection(/* parameters */);
	}
	rw::math::vpu::operator>(/* parameters */);
	Portal::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	Portal::GetPosition(/* parameters */);
}

void BrnAI::RouteMapDebugComponent::DrawPortals(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteMapDebugComponent.cpp:873
		uint16_t luSectionIndex;

		// BrnRouteMapDebugComponent.cpp:874
		Vector3 lCameraPos;

		// BrnRouteMapDebugComponent.cpp:875
		Vector3 lDist;

	}
	{
		// BrnRouteMapDebugComponent.cpp:880
		const AISection * lpAISection;

		// BrnRouteMapDebugComponent.cpp:881
		uint8_t lu8NumPortals;

		// BrnRouteMapDebugComponent.cpp:882
		uint8_t lu8PortalIndex;

		AISectionsData::GetAISection(/* parameters */);
	}
	Portal::GetPosition(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	{
		// BrnRouteMapDebugComponent.cpp:899
		const Portal * lpPortal;

		// BrnRouteMapDebugComponent.cpp:900
		Vector3 lPosition;

		// BrnRouteMapDebugComponent.cpp:901
		Vector3 lOffset;

		// BrnRouteMapDebugComponent.cpp:906
		const AISection * lpNextAISection;

		// BrnRouteMapDebugComponent.cpp:907
		uint8_t lu8NumNextPortals;

		// BrnRouteMapDebugComponent.cpp:908
		uint8_t lu8NextPortalIndex;

		AISectionsData::GetAISection(/* parameters */);
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	Portal::GetPosition(/* parameters */);
	{
		// BrnRouteMapDebugComponent.cpp:912
		const Portal * lpNextPortal;

		// BrnRouteMapDebugComponent.cpp:913
		Vector3 lNextPosition;

		Portal::GetPosition(/* parameters */);
	}
}

void BrnAI::RouteMapDebugComponent::RenderWorld(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapDebugComponent::DrawDeadEndsInMap(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteMapDebugComponent.cpp:488
		uint32_t luSectionIndex;

	}
	{
		// BrnRouteMapDebugComponent.cpp:492
		const AISection * lpAISection;

		// BrnRouteMapDebugComponent.cpp:493
		int32_t liPortalIndex0;

		// BrnRouteMapDebugComponent.cpp:494
		int32_t liPortalIndex1;

		// BrnRouteMapDebugComponent.cpp:495
		bool lbDrawSection;

		// BrnRouteMapDebugComponent.cpp:496
		RGBA lColour;

		AISectionsData::GetAISection(/* parameters */);
	}
	{
		// BrnRouteMapDebugComponent.cpp:556
		CgsDev::SimpleStrStream lStrStream;

		// BrnRouteMapDebugComponent.cpp:557
		Vector2 lMapPos;

		CgsDev::SimpleStrStream::SimpleStrStream(/* parameters */);
		CgsDev::SimpleStrStream::operator<<(/* parameters */);
		AISection::GetId(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	}
	{
		// BrnRouteMapDebugComponent.cpp:519
		bool lbBackPortalFound;

		// BrnRouteMapDebugComponent.cpp:520
		const AISection * lpLinkSectionIndex;

		AISectionsData::GetAISection(/* parameters */);
	}
	AISection::IsNoReset(/* parameters */);
}

void BrnAI::AISection::GetSpanIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::IsInterstateExit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator==(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsEqualV2(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:264
		bool ret;

		// vector_intrinsic_operation_inline.h:265
		VectorIntrinsicUnion::VectorIntrinsic v0comp;

		// vector_intrinsic_operation_inline.h:265
		VectorIntrinsicUnion::VectorIntrinsic v1comp;

	}
}

void BrnAI::RouteMapDebugComponent::DrawAISectionMap(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteMapDebugComponent.cpp:340
		CgsDev::SimpleStrStream lStrStream;

		// BrnRouteMapDebugComponent.cpp:341
		uint16_t luSectionIndex;

		// BrnRouteMapDebugComponent.cpp:342
		int32_t liLineCount;

	}
	CgsDev::SimpleStrStream::SimpleStrStream(/* parameters */);
	{
		// BrnRouteMapDebugComponent.cpp:346
		const AISection * lpAISection;

		AISectionsData::GetAISection(/* parameters */);
		{
			// BrnRouteMapDebugComponent.cpp:358
			float32_t lfSectionLength;

			Portal::GetPosition(/* parameters */);
			rw::math::vpu::Magnitude(/* parameters */);
			Portal::GetPosition(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			AISection::IsShortcut(/* parameters */);
			{
				// BrnRouteMapDebugComponent.cpp:442
				Vector2[4] laNonShortcutPoints;

				// BrnRouteMapDebugComponent.cpp:443
				int32_t liNonPortalPointCount;

				// BrnRouteMapDebugComponent.cpp:444
				uint32_t luPortalIndex;

			}
		}
	}
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnRouteMapDebugComponent.cpp:448
		const Portal * lpPortal;

		// BrnRouteMapDebugComponent.cpp:449
		const AISection * lpLinkAISection;

	}
	AISectionsData::GetAISection(/* parameters */);
	Portal::GetPosition(/* parameters */);
	{
		// BrnRouteMapDebugComponent.cpp:425
		Vector2 lCentre;

		// BrnRouteMapDebugComponent.cpp:426
		uint32_t luPortalIndex;

		{
			// BrnRouteMapDebugComponent.cpp:430
			const Portal * lpPortal;

			Portal::GetPosition(/* parameters */);
		}
	}
	{
		// BrnRouteMapDebugComponent.cpp:369
		Vector2 lPoint0;

		// BrnRouteMapDebugComponent.cpp:370
		Vector2 lPoint1;

		Portal::GetPosition(/* parameters */);
		Portal::GetPosition(/* parameters */);
		{
			// BrnRouteMapDebugComponent.cpp:375
			const AISection * lpNextSection;

			AISectionsData::GetAISection(/* parameters */);
		}
	}
	{
		// BrnRouteMapDebugComponent.cpp:379
		Vector2 lPoint00;

		// BrnRouteMapDebugComponent.cpp:380
		Vector2 lPoint01;

		// BrnRouteMapDebugComponent.cpp:381
		Vector2 lPoint10;

		// BrnRouteMapDebugComponent.cpp:382
		Vector2 lPoint11;

		Portal::GetPosition(/* parameters */);
		Portal::GetPosition(/* parameters */);
		Portal::GetPosition(/* parameters */);
		Portal::GetPosition(/* parameters */);
		rw::math::vpu::operator==(/* parameters */);
		rw::math::vpu::operator==(/* parameters */);
		rw::math::vpu::operator==(/* parameters */);
		rw::math::vpu::operator==(/* parameters */);
	}
}

void rw::RGBA::SetAlpha(uint8_t  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::GetEdgeLine(uint16_t  luEdgeIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// AISectionsData.h:1054
	BoundaryLine lEdge;

	{
		// AISectionsData.h:1054
		BoundaryLine lEdge;

		// AISectionsData.h:1055
		Vector2 lVertA;

		// AISectionsData.h:1056
		Vector2 lVertB;

	}
}

extern void BoundaryLine() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::BoundaryLine::SetVerts(const rw::math::vpu::Vector2  lVert1, const rw::math::vpu::Vector2  lVert2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::BrnAIDebugUtils::DrawSectionEdges(CgsDev::Debug3DImmediateRender *  lpDisplay, const AISection *  lpSection, bool  lbPlayerSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugUtils.cpp:232
		uint8_t luEdgeIndex;

		// BrnAIDebugUtils.cpp:233
		RGBA lColour;

		AISection::IsJunction(/* parameters */);
		rw::RGBA::SetAlpha(/* parameters */);
		{
			// BrnAIDebugUtils.cpp:253
			BoundaryLine lLine;

			// BrnAIDebugUtils.cpp:277
			float32_t lfY;

			AISection::GetEdgeLine(/* parameters */);
			SetY<VectorAxisY>(/* parameters */);
			SetZ<VectorAxisX>(/* parameters */);
			SetW<VectorAxisY>(/* parameters */);
			Portal::GetPosition(/* parameters */);
		}
	}
}

void BrnAI::BrnAIDebugUtils::DrawSectionHNGGeometry(CgsDev::Debug3DImmediateRender *  lpDisplay, const AISection *  lpSection, bool  lbPlayerSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugUtils.cpp:116
		uint16_t luHNGLineIndex;

		// BrnAIDebugUtils.cpp:117
		int32_t liNumHNGLines;

		// BrnAIDebugUtils.cpp:118
		RGBA lColour;

		// BrnAIDebugUtils.cpp:136
		int32_t liFrame;

		// BrnAIDebugUtils.cpp:137
		int32_t liNumLinesToDrawPerFrame;

		// BrnAIDebugUtils.cpp:139
		int32_t liNumGroupsToDraw;

		// BrnAIDebugUtils.cpp:140
		int32_t liGroupToDrawThisFrame;

		// BrnAIDebugUtils.cpp:141
		int32_t liGroupToDrawOffset;

		// BrnAIDebugUtils.cpp:142
		int32_t liNumLinesToDrawThisFrame;

	}
	rw::math::vpu::Min<int>(/* parameters */);
	{
		// BrnAIDebugUtils.cpp:145
		const BoundaryLine * lpLine;

		// BrnAIDebugUtils.cpp:210
		float32_t lfY;

		AISection::GetHNGLine(/* parameters */);
		rw::RGBA::SetAlpha(/* parameters */);
		rw::RGBA::SetAlpha(/* parameters */);
		Portal::GetPosition(/* parameters */);
	}
}

void BrnAI::BrnAIDebugUtils::DrawAllSectionData(CgsDev::Debug3DImmediateRender *  lpDisplay, const AISection *  lpSection, bool  lbPlayerSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugUtils.cpp:63
		uint8_t lu8NumPortals;

		// BrnAIDebugUtils.cpp:64
		uint8_t lu8PortalIndex;

	}
	{
		// BrnAIDebugUtils.cpp:70
		const Portal * lpPortal;

	}
}

void BrnAI::AIDebugComponent::DrawAISectionEdge(CgsDev::Debug3DImmediateRender *  lpDisplay, const AISection *  lpAISection, int32_t  liPortalIndex, const rw::math::vpu::Vector3  lRouteDirection, int32_t  liAlpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugComponent.cpp:1850
		Vector3 lPortalCenter;

		// BrnAIDebugComponent.cpp:1851
		Vector2 lPortalCenter2D;

		// BrnAIDebugComponent.cpp:1852
		Vector2 lRouteDirection2D;

		// BrnAIDebugComponent.cpp:1853
		int32_t liCornerIndex;

	}
	Portal::GetPosition(/* parameters */);
	Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
	Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
	{
		// BrnAIDebugComponent.cpp:1857
		int32_t liNextCornerIndex;

		// BrnAIDebugComponent.cpp:1858
		Vector2 lCornerPos;

		// BrnAIDebugComponent.cpp:1859
		Vector2 lNextCornerPos;

		// BrnAIDebugComponent.cpp:1860
		Vector2 lCornerDirection;

		// BrnAIDebugComponent.cpp:1861
		Vector2 lEdgeCenter;

		// BrnAIDebugComponent.cpp:1862
		float32_t lfAngleToRoute;

		// BrnAIDebugComponent.cpp:1863
		bool lbArrowLeft;

		AISection::GetCornerX(/* parameters */);
		AISection::GetCornerZ(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		AISection::GetCornerX(/* parameters */);
		AISection::GetCornerZ(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		{
			{
			}
		}
		{
			{
				{
				}
			}
		}
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
			// BrnAIDebugComponent.cpp:1867
			float32_t lfY;

			// BrnAIDebugComponent.cpp:1869
			Vector3 lPoint0;

			// BrnAIDebugComponent.cpp:1870
			Vector3 lPoint1;

			// BrnAIDebugComponent.cpp:1871
			Vector3 lPoint2;

			// BrnAIDebugComponent.cpp:1872
			Vector3 lPoint3;

		}
	}
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	Portal::GetPosition(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Abs<float>(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
}

void BrnAI::AIDebugComponent::DrawResetOnTrackAISection(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugComponent.cpp:1220
		const AICar * lpAICar;

	}
	{
		// BrnAIDebugComponent.cpp:1224
		const AISection * lpAISection;

		// BrnAIDebugComponent.cpp:1225
		Vector3 lStartPortalPosition;

		// BrnAIDebugComponent.cpp:1226
		Vector3 lEndPortalPosition;

		AISectionsData::GetAISection(/* parameters */);
		Portal::GetPosition(/* parameters */);
		Portal::GetPosition(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
}

void BrnAI::RouteMapModuleIO::RouteResponse::GetRoute() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest::GetOwnerId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest::GetEventId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::RouteResponse::Construct(uint16_t  luOwnerId, uint16_t  luEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::Construct(uint32_t  luLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest::GetCarDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest::GetCurrentSectionIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest::GetCarPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISectionsData::GetPortal(uint16_t  luSectionIndex, uint8_t  luPortalIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteNode::Construct(float32_t  lfPositionX, float32_t  lfPositionZ, uint16_t  luSectionIndex, uint8_t  luPortalIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::Route::AddNode(const const RouteNode &  lNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteNode::GetPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator!=(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest::GetRouteType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::Route::SetStatus(BrnAI::Route::Status  leStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModule::ProcessExtrapolatedRoute(const ExtrapolatedRouteRequest *  lpRouteRequest, OutputBuffer::RouteResponseQueue *  lpRouteResponseQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteMapModule.cpp:233
		RouteResponse lRouteResponse;

		// BrnRouteMapModule.cpp:234
		Route * lpRoute;

		// BrnRouteMapModule.cpp:240
		const AISectionsData * lpAISectionsData;

		// BrnRouteMapModule.cpp:243
		int32_t liNumSectionsToGenerate;

		// BrnRouteMapModule.cpp:245
		ExtrapolatedIndexArray lGeneratedIndices;

		// BrnRouteMapModule.cpp:251
		Vector2 lDirection;

		// BrnRouteMapModule.cpp:255
		int32_t liSectionsGenerated;

		// BrnRouteMapModule.cpp:257
		const int32_t kiBackwardsSections;

		// BrnRouteMapModule.cpp:269
		int32_t liGeneratedIndex;

		// BrnRouteMapModule.cpp:309
		int32_t liPlayerCurrentSectionInRoute;

		CgsResource::ResourcePtr<BrnAI::AISectionsData>::GetMemoryResource(/* parameters */);
	}
	RouteMapModuleIO::RouteResponse::Construct(/* parameters */);
	Route::Construct(/* parameters */);
	CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::Construct(/* parameters */);
	{
		// BrnRouteMapModule.cpp:272
		RouteNode lNewNode;

		// BrnRouteMapModule.cpp:273
		uint32_t luAISectionIndex;

		// BrnRouteMapModule.cpp:274
		uint8_t luPortalIndex;

		// BrnRouteMapModule.cpp:277
		Vector3 lPosition;

		CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
		CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
		AISectionsData::GetPortal(/* parameters */);
		AISectionsData::GetAISection(/* parameters */);
		Route::AddNode(/* parameters */);
		Portal::GetPosition(/* parameters */);
		RouteNode::Construct(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		RouteNode::GetPosition(/* parameters */);
		rw::math::vpu::operator!=(/* parameters */);
		RouteNode::GetPosition(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Route::GetNodeCount(/* parameters */);
	{
		// BrnRouteMapModule.cpp:327
		RouteNode lNewNode;

		// BrnRouteMapModule.cpp:328
		uint32_t luAISectionIndex;

		// BrnRouteMapModule.cpp:329
		uint8_t luPortalIndex;

		// BrnRouteMapModule.cpp:332
		Vector3 lPosition;

		CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
		CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
		AISectionsData::GetPortal(/* parameters */);
		AISectionsData::GetAISection(/* parameters */);
		Route::AddNode(/* parameters */);
		Portal::GetPosition(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		RouteNode::Construct(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		RouteNode::GetPosition(/* parameters */);
		rw::math::vpu::operator!=(/* parameters */);
		RouteNode::GetPosition(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Route::GetNodeCount(/* parameters */);
	Route::SetStatus(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnAI::Route::GetNode(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoute.h:325
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void BrnAI::Route::GetNode(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::Array<BrnAI::RaceBalancingGraph,7u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::RaceBalancingRoute::GetTotalTime(BrnAI::GraphType  leGraphType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteNode::GetDistanceLeft() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RaceBalancingGraph::ComputeSpeedRatio(BrnAI::GraphType  leGraphType, float32_t  lfT) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceBalancingGraph.h:111
		int32_t liIntervalCount;

		// BrnRaceBalancingGraph.h:112
		float32_t lfIntervalLength;

		// BrnRaceBalancingGraph.h:113
		int32_t liPrevPoint;

		// BrnRaceBalancingGraph.h:114
		int32_t liNextPoint;

		// BrnRaceBalancingGraph.h:119
		float32_t lfPrevValue;

		// BrnRaceBalancingGraph.h:120
		float32_t lfNextValue;

		// BrnRaceBalancingGraph.h:121
		float32_t lfLocalT;

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

void BrnAI::Route::GetDistance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::RouteResponse::GetOwnerId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::RouteResponse::GetEventId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::GetPlayerDriver() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::OutputBuffer::GetGameEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:233
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AIModule::UpdateCarRoutes(OutputBuffer *  lpOutputBuffer, const OutputBuffer *  lpRouteOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:1497
		int32_t liResponseQueueLength;

		// BrnAIModule.cpp:1498
		int32_t liResponseIndex;

		// BrnAIModule.cpp:1499
		const OutputBuffer::RouteResponseQueue * lpRouteResponseQueue;

	}
	RouteMapModuleIO::OutputBuffer::GetRouteResponseQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::GetLength(/* parameters */);
	{
		// BrnAIModule.cpp:1511
		const RouteResponse * lpRouteResponse;

		CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::GetEvent(/* parameters */);
		{
			// BrnAIModule.cpp:1520
			AICar * lpAICar;

			GetAICar(/* parameters */);
		}
	}
	GetPlayerDriver(/* parameters */);
	GetPlayerCar(/* parameters */);
	AICar::HasValidRoute(/* parameters */);
	{
		// BrnAIModule.cpp:1537
		PlayerRouteUpdatedEvent lPlayerRouteUpdated;

		AIModuleIO::OutputBuffer::GetGameEventQueue(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AICar::IsOpponent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataIO::RequestInterface<4096>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<4096,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<4096,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnResource::GameDataIO::RequestInterface<4096>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleDriverInputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<4920,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<4920,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnAI::AIModuleIO::AIRaceCarInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::AICarOutputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICarOutputInterface.h:111
		int32_t liAICarIndex;

	}
}

void BrnAI::AIModuleIO::AIModuleResultInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnAI::AIModuleIO::ResetOnTrackResult,128>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>::Construct(ResetOnTrackResult *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>::SetEventPointer(ResetOnTrackResult *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest,128>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>::Construct(PlaceOnTrackRequest *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>::SetEventPointer(PlaceOnTrackRequest *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<1536,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<1536,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnAI::AStarNode::GetHeuristic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AStarNode::GetCost() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AStarNode::Close() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AStarNode::GetSectionIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AStarNode::GetPortalIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AStarNode::GetLinkSectionIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::Portal::GetPositionX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::Portal::GetPositionZ() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AStar::IsBlockSection(AISection::AISectionId  luSectionId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAStar.h:556
		int32_t liBlockSectionIndex;

	}
}

void BrnAI::AStarNode::SetParentIndex(uint16_t  luParentIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AStarNodePool::GetNodeCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAStar.h:499
		int32_t liNodeCount;

		// BrnAStar.h:500
		int32_t liPartitionIndex;

	}
}

void BrnAI::IsInsideSectionFast(SectionData *  lpSectionData, float32_t  lfPX, float32_t  lfPY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:1335
		VecFloat lPointX;

		// BrnRacingLineGenerator.cpp:1336
		VecFloat lPointY;

		// BrnRacingLineGenerator.cpp:1338
		Vector4 lPoint4X;

		// BrnRacingLineGenerator.cpp:1339
		Vector4 lPoint4Y;

		// BrnRacingLineGenerator.cpp:1340
		Vector4 lResult;

		// BrnRacingLineGenerator.cpp:1342
		Mask4 lNegative;

	}
}

void rw::math::vpu::operator-(const VecFloat  s, const rw::math::vpu::Vector4  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector4  v, const rw::math::vpu::Vector4  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:131
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector4_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::CompLessThan(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:778
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void CgsNumeric::VecAllTrue(VectorIntrinsicInParam  lVector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMaskOperations.h:51
		VectorIntrinsicUnion::VectorIntrinsic lTrue;

		// CgsMaskOperations.h:52
		VectorIntrinsicUnion::VectorIntrinsic lResultVector;

	}
}

void rw::math::vpl::VecGetZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpl::VecNor(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpl::VecPermute(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1, VectorIntrinsicInParam  permuteConstant) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpl::VecCompEqual_UInt(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::ConvertVecToBool(VectorIntrinsicInParam  lVector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMaskOperations.h:37
		bool lbEqualToFalse;

	}
}

void BrnAI::AIModuleIO::OutputBuffer::GetAICarOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:458
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AICar::GetDistanceToCheckpoint() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::AICarOutputInterface::SetAICarDistanceToCheckpoint(int32_t  liAICarIndex, float32_t  lfDistToRouteEnd) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICarOutputInterface.h:213
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AIModuleIO::AICarOutputInterface::SetAISectionIndex(int32_t  liAICarIndex, uint16_t  luAISectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::AICarOutputInterface::SetPlayerRoute(const Route *  lpRoute, int32_t  liPlayerRouteNodeIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::IsInShortCut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::AICarOutputInterface::SetPlayerInShortcut(bool  lbPlayeIsInShortcut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::AIRaceCarInterface::SetPlayerRouteNodePositions(AICar *  lpAICar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarAIInterfaces.h:945
		const Route * lpPlayerRoute;

		// BrnRaceCarAIInterfaces.h:948
		int32_t liCurrentPlayerNodeIndex;

		{
			// BrnRaceCarAIInterfaces.h:952
			const RouteNode * lpRouteNode;

			// BrnRaceCarAIInterfaces.h:953
			const RouteNode * lpNextRouteNode;

		}
	}
}

void BrnAI::AIModule::ExportCarData(OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:2266
		AICar * lpPlayerCar;

	}
	GetPlayerCar(/* parameters */);
	{
		// BrnAIModule.cpp:2274
		int32_t liIndex;

		// BrnAIModule.cpp:2275
		AICarOutputInterface * lpCarOutputInterface;

		AIModuleIO::OutputBuffer::GetAICarOutputInterface(/* parameters */);
		{
			// BrnAIModule.cpp:2281
			const AICar * lpAICar;

			GetAICar(/* parameters */);
		}
		AIModuleIO::AICarOutputInterface::SetAICarDistanceToCheckpoint(/* parameters */);
		AICar::GetDistanceToCheckpoint(/* parameters */);
		AICar::GetBestSectionIndex(/* parameters */);
		AIModuleIO::AICarOutputInterface::SetAISectionIndex(/* parameters */);
		AIModuleIO::AICarOutputInterface::SetPlayerRoute(/* parameters */);
		AICar::GetNextRouteNodeIndex(/* parameters */);
		AICar::HasValidRoute(/* parameters */);
		AIModuleIO::AICarOutputInterface::SetPlayerInShortcut(/* parameters */);
		AIModuleIO::OutputBuffer::GetAIRaceCarInterface(/* parameters */);
		AIModuleIO::AIRaceCarInterface::SetPlayerRouteNodePositions(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void rw::math::vpu::Max<int32_t>(const const int32_t &  a, const const int32_t &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteNode::GetPositionX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteNode::GetPositionZ() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::HasValidDestination() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetCurrentCheckpoint() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetRight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::SgnNonZero<rw::math::vpu::VecFloat>(VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator>=(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:797
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:799
		bool ret;

		{
			// vec_float_operation_inline.h:798
			VectorIntrinsicUnion u;

		}
	}
}

void BrnAI::AICar::GetBehaviourTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDebugComponent::DrawAICarSection(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugComponent.cpp:1180
		const AICar * lpAICar;

		// BrnAIDebugComponent.cpp:1188
		int32_t liStartRouteNode;

		// BrnAIDebugComponent.cpp:1189
		int32_t liNumNodesAvailable;

		// BrnAIDebugComponent.cpp:1190
		int32_t liEndRouteNode;

		// BrnAIDebugComponent.cpp:1191
		uint16_t luNodeIndex;

	}
	AICar::HasValidRoute(/* parameters */);
	AICar::GetNextRouteNodeIndex(/* parameters */);
	rw::math::vpu::Min<int>(/* parameters */);
	{
		// BrnAIDebugComponent.cpp:1198
		const RouteNode * lpRouteNode;

		// BrnAIDebugComponent.cpp:1199
		bool lbPlayerSection;

		// BrnAIDebugComponent.cpp:1201
		const AISection * lpAISection;

	}
	Route::GetNode(/* parameters */);
	AICar::GetBestSectionIndex(/* parameters */);
	AISectionsData::GetAISection(/* parameters */);
}

void BrnAI::AStarNode::GetParentIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AStar::IsInProgress() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::RaceRouteRequest::GetStartPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::RaceRouteRequest::GetEndPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::RaceRouteRequest::GetOwnerId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::RaceRouteRequest::GetEventId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::RaceRouteRequest::GetStartSectionIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::RaceRouteRequest::GetEndSectionIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::RaceRouteRequest::GetQuality() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::RaceRouteRequest::GetDistanceFunction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::RaceRouteRequest::UseAIShortcuts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::RaceRouteRequest::GetBlockSectionId(int32_t  liBlockSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::AISectionId,16u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::AISectionId,16u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AStar::AddBlockSectionId(AISection::AISectionId  luSectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::RaceRouteRequest::GetBlockSectionIdCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::AISectionId,16u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModule::ProcessRaceRoute(const RaceRouteRequest *  lpRouteRequest, OutputBuffer::RouteResponseQueue *  lpRouteResponseQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteMapModule.cpp:207
		RouteResponse lRouteResponse;

		// BrnRouteMapModule.cpp:208
		Route * lpRoute;

		RouteMapModuleIO::RouteResponse::Construct(/* parameters */);
		Route::Construct(/* parameters */);
		CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::AddEvent(/* parameters */);
	}
	{
		// BrnRouteMapModule.cpp:178
		Vector3 lStartPosition;

		// BrnRouteMapModule.cpp:179
		Vector3 lEndPosition;

		// BrnRouteMapModule.cpp:180
		int32_t liBlockSectionIndex;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	RouteMapModuleIO::RaceRouteRequest::GetBlockSectionId(/* parameters */);
	AStar::AddBlockSectionId(/* parameters */);
	RouteMapModuleIO::RaceRouteRequest::GetBlockSectionIdCount(/* parameters */);
	CgsContainers::Array<BrnAI::AISectionId,16u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::RouteMapModuleIO::InputBuffer::GetRaceRouteRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteMapModuleIO.h:590
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::RouteMapModuleIO::InputBuffer::GetExtrapolatedRouteRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteMapModuleIO.h:604
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::RouteMapModuleIO::OutputBuffer::GetRouteResponseQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteMapModuleIO.h:617
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModule::Update(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const InputBuffer *  lpInputBuffer, OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteMapModule.cpp:92
		int32_t liRequestIndex;

		// BrnRouteMapModule.cpp:93
		const InputBuffer::RaceRouteRequestQueue * lpRaceRouteRequestQueue;

		// BrnRouteMapModule.cpp:94
		const InputBuffer::ExtrapolatedRouteRequestQueue * lpFollowPlayerRouteRequestQueue;

		// BrnRouteMapModule.cpp:95
		OutputBuffer::RouteResponseQueue * lpRouteResponseQueue;

	}
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	RouteMapModuleIO::InputBuffer::GetRaceRouteRequestQueue(/* parameters */);
	RouteMapModuleIO::InputBuffer::GetExtrapolatedRouteRequestQueue(/* parameters */);
	RouteMapModuleIO::OutputBuffer::GetRouteResponseQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::GetEvent(/* parameters */);
	{
		// BrnRouteMapModule.cpp:123
		const ExtrapolatedRouteRequest * lpRouteRequest;

		CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest>::GetEvent(/* parameters */);
	}
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnAI::RouteMapDebugComponent::DrawRouteInMap(CgsDev::Debug2DImmediateRender *  lpDisplay, const Route *  lpRoute, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteMapDebugComponent.cpp:691
		int32_t liNodeIndex;

		Route::GetNodeCount(/* parameters */);
		{
			// BrnRouteMapDebugComponent.cpp:695
			Vector2 lPos2D;

			// BrnRouteMapDebugComponent.cpp:696
			Vector2 lNextPos2D;

			Route::GetNode(/* parameters */);
			Route::GetNode(/* parameters */);
			RouteNode::GetPosition(/* parameters */);
			RouteNode::GetPosition(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::SectionData::SetFastSectionCorners(const AISection *  lpSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLine.h:196
		Vector4 lB4XCoords;

		// BrnRacingLine.h:197
		Vector4 lB4YCoords;

	}
}

void rw::math::vpl::VecPermuteSingleImm<12306>(VectorIntrinsicInParam  v0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetNextRouteNode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::IsAheadOfPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetMaxPlayerSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RaceBalancingRoute::GetTimeCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RaceBalancingRoute::GetDistance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RaceBalancingRoute::GetCurrentCheckpointIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector2_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RaceBalancingDebugComponent::RenderHUD(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceBalancingDebugComponent.cpp:123
		char[256] lacBuffer;

		// BrnRaceBalancingDebugComponent.cpp:124
		CgsDev::StrStream lStrStream;

		// BrnRaceBalancingDebugComponent.cpp:125
		const AICar * lpAICar;

		// BrnRaceBalancingDebugComponent.cpp:126
		const RGBA K_AHEAD_COLOUR;

		// BrnRaceBalancingDebugComponent.cpp:127
		const RGBA K_BEHIND_COLOUR;

		// BrnRaceBalancingDebugComponent.cpp:129
		float32_t lfFontSize;

		// BrnRaceBalancingDebugComponent.cpp:130
		float32_t lfGraphBaseX;

		// BrnRaceBalancingDebugComponent.cpp:131
		float32_t lfGraphBaseY;

		// BrnRaceBalancingDebugComponent.cpp:132
		float32_t lfGraphHeight;

		// BrnRaceBalancingDebugComponent.cpp:133
		float32_t lfGraphWidth;

		// BrnRaceBalancingDebugComponent.cpp:135
		float32_t lfRouteBaseX;

		// BrnRaceBalancingDebugComponent.cpp:136
		float32_t lfRouteBaseY;

		// BrnRaceBalancingDebugComponent.cpp:137
		float32_t lfRouteHeight;

		// BrnRaceBalancingDebugComponent.cpp:138
		float32_t lfRouteWidth;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsContainers::Array<BrnAI::RaceBalancingGraph,7u>::GetLength(/* parameters */);
		{
			// BrnRaceBalancingDebugComponent.cpp:143
			const RaceBalancingGraph * lpGraph;

			// BrnRaceBalancingDebugComponent.cpp:144
			const RaceBalancingRoute * lpRoute;

			// BrnRaceBalancingDebugComponent.cpp:146
			int32_t liSampleCount;

			// BrnRaceBalancingDebugComponent.cpp:147
			int32_t liSampleIndex;

			CgsContainers::Array<BrnAI::RaceBalancingGraph,7u>::operator[](/* parameters */);
			CgsContainers::Array<BrnAI::RaceBalancingRoute,7u>::operator[](/* parameters */);
			rw::math::vpu::Vector2::Vector2(/* parameters */);
			rw::math::vpu::Vector2::Vector2(/* parameters */);
			{
				// BrnRaceBalancingDebugComponent.cpp:160
				float32_t lfPrevT;

				// BrnRaceBalancingDebugComponent.cpp:161
				float32_t lfNextT;

				// BrnRaceBalancingDebugComponent.cpp:162
				float32_t lfPrevX;

				// BrnRaceBalancingDebugComponent.cpp:163
				float32_t lfNextX;

				// BrnRaceBalancingDebugComponent.cpp:164
				float32_t lfPrevMinY;

				// BrnRaceBalancingDebugComponent.cpp:165
				float32_t lfNextMinY;

				// BrnRaceBalancingDebugComponent.cpp:166
				float32_t lfPrevMaxY;

				// BrnRaceBalancingDebugComponent.cpp:167
				float32_t lfNextMaxY;

				RaceBalancingGraph::ComputeSpeedRatio(/* parameters */);
				rw::math::fpu::Clamp<int>(/* parameters */);
				rw::math::fpu::Clamp<int>(/* parameters */);
				RaceBalancingGraph::ComputeSpeedRatio(/* parameters */);
				rw::math::fpu::Clamp<int>(/* parameters */);
				rw::math::fpu::Clamp<float>(/* parameters */);
				rw::math::fpu::Clamp<int>(/* parameters */);
				rw::math::fpu::Clamp<float>(/* parameters */);
				RaceBalancingGraph::ComputeSpeedRatio(/* parameters */);
				rw::math::fpu::Clamp<float>(/* parameters */);
				RaceBalancingGraph::ComputeSpeedRatio(/* parameters */);
				rw::math::vpu::Vector2::Vector2(/* parameters */);
				rw::math::vpu::Vector2::Vector2(/* parameters */);
				rw::math::fpu::Clamp<float>(/* parameters */);
				rw::math::vpu::Vector2::Vector2(/* parameters */);
				rw::math::fpu::Min<float>(/* parameters */);
				rw::math::vpu::Vector2::Vector2(/* parameters */);
			}
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			AICar::HasValidRoute(/* parameters */);
			{
				// BrnRaceBalancingDebugComponent.cpp:188
				float32_t lfRaceCompletionRatio;

				AICar::GetNextRouteNode(/* parameters */);
				rw::math::vpu::Vector2::Vector2(/* parameters */);
				rw::math::vpu::Vector2::Vector2(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
		}
		CgsContainers::Array<BrnAI::RaceBalancingRoute,7u>::GetLength(/* parameters */);
		{
			// BrnRaceBalancingDebugComponent.cpp:215
			const RaceBalancingRoute * lpRoute;

			CgsContainers::Array<BrnAI::RaceBalancingRoute,7u>::operator[](/* parameters */);
			AICar::HasValidRoute(/* parameters */);
			{
				// BrnRaceBalancingDebugComponent.cpp:369
				CgsDev::SimpleStrStream lStrStream;

				CgsDev::SimpleStrStream::SimpleStrStream(/* parameters */);
				CgsDev::SimpleStrStream::operator<<(/* parameters */);
			}
		}
		rw::math::fpu::Min<int>(/* parameters */);
		rw::math::fpu::Min<int>(/* parameters */);
		rw::math::fpu::Min<int>(/* parameters */);
		rw::math::fpu::Min<int>(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsDev::SimpleStrStream::operator<<(/* parameters */);
		{
			// BrnRaceBalancingDebugComponent.cpp:222
			const AIDriver * lpAIDriver;

			// BrnRaceBalancingDebugComponent.cpp:223
			float32_t lfRouteScaleX;

			// BrnRaceBalancingDebugComponent.cpp:224
			float32_t lfRouteScaleY;

			// BrnRaceBalancingDebugComponent.cpp:225
			int32_t liNodeIndex;

			// BrnRaceBalancingDebugComponent.cpp:226
			float32_t lfY;

			// BrnRaceBalancingDebugComponent.cpp:227
			float32_t lfX;

			// BrnRaceBalancingDebugComponent.cpp:228
			RGBA lCarColour;

			AICar::GetDriver(/* parameters */);
			RaceBalancingRoute::GetTimeCount(/* parameters */);
			RaceBalancingRoute::GetTotalTime(/* parameters */);
			RaceBalancingRoute::GetTime(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			AICar::GetNextRouteNode(/* parameters */);
			Route::GetNode(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			RaceBalancingRoute::GetCurrentCheckpointIndex(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			rw::math::vpu::Vector2::Vector2(/* parameters */);
			rw::math::vpu::Vector2::Vector2(/* parameters */);
			AICar::GetSpeed(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			AICar::GetNextRouteNodeIndex(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			Route::GetNodeCount(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			AICar::GetNextRouteNodeIndex(/* parameters */);
			RaceBalancingRoute::GetTime(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			AICar::GetNextRouteNodeIndex(/* parameters */);
			RaceBalancingRoute::GetTime(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			rw::math::vpu::Vector2::Vector2(/* parameters */);
			rw::math::vpu::Vector2::Vector2(/* parameters */);
			rw::math::vpu::Vector2::Vector2(/* parameters */);
			rw::math::vpu::Vector2::Vector2(/* parameters */);
			rw::math::vpu::Vector2::Vector2(/* parameters */);
			{
				// BrnRaceBalancingDebugComponent.cpp:326
				float32_t lfPrevAheadTime;

				// BrnRaceBalancingDebugComponent.cpp:327
				float32_t lfPrevBehindTime;

				// BrnRaceBalancingDebugComponent.cpp:329
				Vector2 lAheadPos0;

				// BrnRaceBalancingDebugComponent.cpp:330
				Vector2 lAheadPos1;

				// BrnRaceBalancingDebugComponent.cpp:331
				Vector2 lBehindPos0;

				// BrnRaceBalancingDebugComponent.cpp:332
				Vector2 lBehindPos1;

				RaceBalancingRoute::GetTime(/* parameters */);
				RaceBalancingRoute::GetTime(/* parameters */);
				{
					// BrnRaceBalancingDebugComponent.cpp:337
					float32_t lfAheadTime;

					// BrnRaceBalancingDebugComponent.cpp:338
					float32_t lfBehindTime;

					RaceBalancingRoute::GetTime(/* parameters */);
					RaceBalancingRoute::GetTime(/* parameters */);
					rw::math::vpu::Vector2::Vector2(/* parameters */);
					rw::math::vpu::Vector2::Vector2(/* parameters */);
					rw::math::vpu::Vector2::Vector2(/* parameters */);
					rw::math::vpu::Vector2::Vector2(/* parameters */);
					RaceBalancingRoute::GetTimeCount(/* parameters */);
				}
			}
			RaceBalancingRoute::GetTime(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			RaceBalancingRoute::GetTime(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		rw::math::fpu::Max<int>(/* parameters */);
		rw::math::fpu::Max<int>(/* parameters */);
		rw::math::fpu::Max<int>(/* parameters */);
		rw::math::fpu::Max<int>(/* parameters */);
	}
}

extern void RacingLineNode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetPreviousBehaviour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::Camera::GetTransform() {
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

void BrnAI::SectionData::GetSectionExit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnRacingLine.h:211
	Vector2 mExit;

	{
		// BrnRacingLine.h:211
		Vector2 mExit;

	}
}

void BrnAI::SectionData::SetSectionEntrance(const rw::math::vpu::Vector2  lEntrance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::SectionData::GetSectionEntrance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator!=<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:300
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:302
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:304
		bool ret;

		{
			// vec_float_operation_inline.h:303
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator!=<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:300
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:302
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:304
		bool ret;

		{
			// vec_float_operation_inline.h:303
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator-=(const Vector3 &  v, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::IsPointOnLine(const rw::math::vpu::Vector2  l2DPoint, const rw::math::vpu::Vector2  l2DStartLine, const rw::math::vpu::Vector2  l2DEndLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIUtils.h:221
		Vector2 lA;

		// BrnAIUtils.h:222
		float32_t lfSelfDot;

		// BrnAIUtils.h:232
		Vector2 lB;

		// BrnAIUtils.h:234
		float32_t lfDot;

		// BrnAIUtils.h:235
		float32_t lfParam;

		{
			// BrnAIUtils.h:237
			CgsDev::StrStream lStrStream;

		}
	}
}

void rw::math::vpu::operator*(float  s, const rw::math::vpu::Vector2  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:441
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnAI::AIDriver::HasValidRacingLine() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDebugComponent::DrawHNGMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugComponent.cpp:1247
		BrnAI::AIDriver * lpDriver;

		// BrnAIDebugComponent.cpp:1255
		RacingLineGenerator * lpRacingLineGenerator;

	}
}

void BrnAI::AIModuleIO::AIRaceCarInterface::UpdateInactiveRaceCarData(EGlobalRaceCarIndex  leGlobalRaceCarIndex, const rw::math::vpu::Vector3  lPosition, const rw::math::vpu::Vector3  lAt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<35u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AIModule::ProcessOutOfRangeVehicles(OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:2191
		EGlobalRaceCarIndex leGlobalRaceCarIndex;

		// BrnAIModule.cpp:2192
		AIRaceCarInterface * lpAIRaceCarInterface;

	}
	AIModuleIO::OutputBuffer::GetAIRaceCarInterface(/* parameters */);
	{
		// BrnAIModule.cpp:2203
		AICar * lpCar;

		GetAICar(/* parameters */);
		AIModuleIO::AIRaceCarInterface::UpdateInactiveRaceCarData(/* parameters */);
	}
	operator++(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AICar::GetPosition(/* parameters */);
	AICar::GetDirection(/* parameters */);
	CgsContainers::BitArray<35u>::IsBitSet(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnAI::AICar::HasRouteWithMoreThanOneNode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::IsInShowtime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::UpdateCars(float32_t  lfSimTimeStep, InputBuffer *  lpRouteInputBuffer, OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:1122
		const AICar * lpPlayerCar;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	GetPlayerCar(/* parameters */);
	GetAICar(/* parameters */);
	{
		// BrnAIModule.cpp:1127
		EGlobalRaceCarIndex leGlobalRaceCarIndex;

		// BrnAIModule.cpp:1128
		EGlobalRaceCarIndex leLastGlobalRaceCarIndex;

		{
			// BrnAIModule.cpp:1139
			AICar * lpAICar;

			GetAICar(/* parameters */);
		}
		operator++(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnAI::AIAggression::IsTargetValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIAggression::GetTargetPos() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+=(const Vector2 &  v, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::IsDrifting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::InputBuffer::GetTrafficAIInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:373
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::TrafficAIInterface::GetTrafficEntityCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::TrafficAIInterface::GetTrafficEntity(uint16_t  lu16Index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::SortTrafficIntoAICars(const InputBuffer *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:2311
		const TrafficAIInterface * lpTrafficAIInterface;

		// BrnAIModule.cpp:2312
		int32_t liNumTraffic;

		// BrnAIModule.cpp:2313
		int32_t liTrafficIndex;

		// BrnAIModule.cpp:2314
		EActiveRaceCarIndex leDriverActiveRaceCarIndex;

		AIModuleIO::InputBuffer::GetTrafficAIInterface(/* parameters */);
		BrnTraffic::BrnTrafficIO::TrafficAIInterface::GetTrafficEntityCount(/* parameters */);
		GetAIDriver(/* parameters */);
		operator++(/* parameters */);
		{
			// BrnAIModule.cpp:2334
			const TrafficAIEntity * lpTraffic;

			// BrnAIModule.cpp:2338
			EActiveRaceCarIndex leActiveRaceCarIndex;

			// BrnAIModule.cpp:2339
			BrnAI::AIDriver * lpOwnerDriver;

			BrnTraffic::BrnTrafficIO::TrafficAIInterface::GetTrafficEntity(/* parameters */);
			GetAIDriver(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// BrnAIModule.cpp:2351
			BrnAI::AIDriver * lpOwnerDriver;

			// BrnAIModule.cpp:2359
			EActiveRaceCarIndex leNearbyRaceCarIndex;

			GetAIDriver(/* parameters */);
			{
				// BrnAIModule.cpp:2362
				AICar * lpNearbyCar;

				GetAIDriver(/* parameters */);
				GetAIDriver(/* parameters */);
				AIDriver::GetCar(/* parameters */);
			}
			operator++(/* parameters */);
		}
		operator++(/* parameters */);
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
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnAI::Aggressiveness::GetAcclerationRateForSpeedMatch() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetSpeedSelectionMethod() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIAggression::IsSpeedMatching() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::Aggressiveness::GetTimeForSpeedMatch() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDriver::GetRelatedActiveCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::SimpleStrStream::operator<<(float32_t  lfReal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetDesiredSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::UseBlockSections() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::CanDeviateFromRoute() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::CanUseAIShortcuts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetCurrentUnderSectionIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetNextSectionIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICar.h:907
		int32_t liNodeIndex;

	}
}

void BrnAI::AICar::GetDestination() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDebugComponent::DrawAIStatesTable(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugComponent.cpp:576
		CgsDev::SimpleStrStream lStrStream;

		// BrnAIDebugComponent.cpp:577
		EGlobalRaceCarIndex lGlobalRaceCarIndex;

		// BrnAIDebugComponent.cpp:578
		float32_t lfBestDistToPlayer;

		// BrnAIDebugComponent.cpp:579
		EGlobalRaceCarIndex leClosestCarToPlayer;

		// BrnAIDebugComponent.cpp:580
		int32_t liCarCount;

		CgsDev::SimpleStrStream::SimpleStrStream(/* parameters */);
	}
	{
		// BrnAIDebugComponent.cpp:585
		AICar * lpAICar;

		AIModule::GetAICar(/* parameters */);
		{
			// BrnAIDebugComponent.cpp:589
			float32_t lfDist2Player;

		}
	}
	operator++(/* parameters */);
	{
		// BrnAIDebugComponent.cpp:654
		AICar * lpAICar;

		// BrnAIDebugComponent.cpp:655
		BrnAI::AIDriver * lpDriver;

		// BrnAIDebugComponent.cpp:674
		RGBA lColour;

		// BrnAIDebugComponent.cpp:900
		Vector3 lPosition;

		AIModule::GetAICar(/* parameters */);
	}
	operator++(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AIModule::GetPlayerCar(/* parameters */);
	AICar::GetPosition(/* parameters */);
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AICar::GetDriver(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	AIDriver::GetRelatedActiveCarIndex(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	AICar::GetSpeed(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	AICar::HasValidRoute(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	Route::GetNodeCount(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	AICar::GetCurrentCheckpoint(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	AICar::GetDistanceToPlayer(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	AICar::GetAggressiveness(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	AICar::GetNextSectionIndex(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	Aggressiveness::GetProximityToSpeedMatch(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	{
	}
	{
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	AICar::GetNextSectionIndex(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
}

void BrnAI::AIDebugComponent::RenderHUD(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugComponent.cpp:389
		AICar * lpAICar;

		AIModule::GetPlayerCar(/* parameters */);
		{
			// BrnAIDebugComponent.cpp:400
			CgsDev::SimpleStrStream lStrStream;

			CgsDev::SimpleStrStream::SimpleStrStream(/* parameters */);
			CgsDev::SimpleStrStream::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AICar::IsInJunkYard() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::SimpleStrStream::operator<<(bool  lbValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDebugComponent::DrawAIStatesOnCar(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugComponent.cpp:1010
		EActiveRaceCarIndex leActiveRaceCarIndex;

		{
			// BrnAIDebugComponent.cpp:1015
			const AIDriver * lpAIDriver;

			AIModule::GetAIDriver(/* parameters */);
			{
				// BrnAIDebugComponent.cpp:1019
				const AICar * lpAICar;

				AIDriver::GetCar(/* parameters */);
				{
					// BrnAIDebugComponent.cpp:1036
					CgsDev::SimpleStrStream lStrStream;

					// BrnAIDebugComponent.cpp:1108
					float32_t lfFontSize;

				}
			}
		}
		operator++(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::SimpleStrStream::SimpleStrStream(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	AICar::GetScheduleOffset(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	AICar::GetScheduleOffset(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	AIDriver::IsInvulnerable(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	{
		// BrnAIDebugComponent.cpp:1027
		CgsDev::SimpleStrStream lStrStream;

		CgsDev::SimpleStrStream::SimpleStrStream(/* parameters */);
		CgsDev::SimpleStrStream::operator<<(/* parameters */);
		AICar::GetPosition(/* parameters */);
	}
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	AICar::GetSpeed(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	AICar::GetProximityIndex(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnAI::AIDebugComponent::DrawAICarRoute(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugComponent.cpp:1130
		Vector3 lRouteOffset;

		// BrnAIDebugComponent.cpp:1131
		const AICar * lpAICar;

		// BrnAIDebugComponent.cpp:1132
		const Route * lpRoute;

		// BrnAIDebugComponent.cpp:1133
		Vector3 lPreviousPosition;

		// BrnAIDebugComponent.cpp:1134
		Vector3 lPosition;

		// BrnAIDebugComponent.cpp:1142
		int32_t liNodeIndex;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		// BrnAIDebugComponent.cpp:1146
		const RouteNode * lpNode;

		// BrnAIDebugComponent.cpp:1148
		Vector3 lPosition;

		Route::GetNode(/* parameters */);
		RouteNode::GetPositionWithZeroY(/* parameters */);
		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		rw::math::vpu::Vector3::SetY(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnAI::AIDriver::GetRacingLineGenerator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDebugComponent::DrawPortalTargets(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugComponent.cpp:1286
		int32_t liDriverIndex;

		{
			// BrnAIDebugComponent.cpp:1290
			BrnAI::AIDriver * lpDriver;

			// BrnAIDebugComponent.cpp:1298
			int32_t liTargetIndex;

			// BrnAIDebugComponent.cpp:1300
			float32_t lfCarY;

		}
		AICar::GetPosition(/* parameters */);
		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
			// BrnAIDebugComponent.cpp:1304
			SectionData * lpCurrentSectionData;

			// BrnAIDebugComponent.cpp:1306
			Vector3 lPosition;

			RacingLineGenerator::GetSectionPointer(/* parameters */);
			SectionData::GetSectionExit(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
			rw::math::vpu::Vector3::Vector3(/* parameters */);
			rw::math::vpu::Vector4::GetVector(/* parameters */);
		}
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY, VectorAxisY>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z) {
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

void BrnAI::AIDebugComponent::DrawDirectDrivingVector(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugComponent.cpp:1327
		int32_t liDriverIndex;

		{
			// BrnAIDebugComponent.cpp:1331
			BrnAI::AIDriver * lpDriver;

			// BrnAIDebugComponent.cpp:1340
			Vector3 lCarPos;

			// BrnAIDebugComponent.cpp:1341
			Vector2 lSteeringPosition2D;

			// BrnAIDebugComponent.cpp:1342
			Vector3 lSteeringPosition3D;

			// BrnAIDebugComponent.cpp:1343
			Vector2 lBrakingPosition2D;

			// BrnAIDebugComponent.cpp:1344
			Vector3 lBrakingPosition3D;

			// BrnAIDebugComponent.cpp:1357
			Vector3 lLineEnd;

		}
		AICar::GetPosition(/* parameters */);
		Vector3<VectorAxisX, VectorAxisY, VectorAxisY>(/* parameters */);
		Vector3<VectorAxisX, VectorAxisY, VectorAxisY>(/* parameters */);
		{
		}
		{
		}
		AICar::GetDirection(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnAI::AICar::GetSectionIndexOfLastSectionInRoute() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDebugComponent::DrawDirectDestinationVector(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugComponent.cpp:1376
		int32_t liDriverIndex;

		{
			// BrnAIDebugComponent.cpp:1380
			BrnAI::AIDriver * lpDriver;

			// BrnAIDebugComponent.cpp:1387
			uint16_t luLastSectionIndex;

			// BrnAIDebugComponent.cpp:1389
			Vector3 lDestinationPos;

			// BrnAIDebugComponent.cpp:1390
			Vector3 lCarPos;

			AICar::HasRouteWithMoreThanOneNode(/* parameters */);
			AICar::GetSectionIndexOfLastSectionInRoute(/* parameters */);
			AISectionsData::GetAISection(/* parameters */);
			Portal::GetPosition(/* parameters */);
			AICar::GetPosition(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
		}
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnAI::AIDriver::GetDirectVector3D() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.h:898
		Vector3 lDir;

	}
}

void BrnAI::AIDebugComponent::DrawCarControlData(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugComponent.cpp:1408
		int32_t liDriverIndex;

		{
			// BrnAIDebugComponent.cpp:1412
			BrnAI::AIDriver * lpDriver;

			// BrnAIDebugComponent.cpp:1417
			Vector3 lCarPos;

			// BrnAIDebugComponent.cpp:1418
			Vector3 lLineStart;

			// BrnAIDebugComponent.cpp:1419
			Vector3 lLineEnd;

			// BrnAIDebugComponent.cpp:1429
			Vector3 lTargetVector;

			// BrnAIDebugComponent.cpp:1436
			Vector3 lVelocityVector;

			AICar::GetPosition(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
		}
		VecFloat<VectorAxisX>(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		VecFloat<VectorAxisZ>(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
	}
	AIDriver::GetDirectVector3D(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
	}
	rw::math::vpu::Normalize(/* parameters */);
	AICar::GetVelocity(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	rw::math::vpu::operator+(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnAI::AIDebugComponent::DrawAggressiveTargetPoints(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugComponent.cpp:1458
		int32_t liDriverIndex;

		{
			// BrnAIDebugComponent.cpp:1462
			BrnAI::AIDriver * lpDriver;

			// BrnAIDebugComponent.cpp:1471
			Vector3 lCarPos;

			// BrnAIDebugComponent.cpp:1472
			Vector3 lTargetPos;

			AIDriver::GetCar(/* parameters */);
		}
		AICar::GetPosition(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnAI::AIDebugComponent::DrawAggressiveWarning(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugComponent.cpp:1492
		int32_t liDriverIndex;

		{
			// BrnAIDebugComponent.cpp:1496
			BrnAI::AIDriver * lpDriver;

			// BrnAIDebugComponent.cpp:1506
			Vector3 lTargetPos;

		}
		AICar::GetPosition(/* parameters */);
		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		rw::math::vpu::Vector3::SetY(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnAI::AIDebugComponent::DrawNearbyVehicles(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugComponent.cpp:1527
		int32_t liDriverIndex;

		{
			// BrnAIDebugComponent.cpp:1531
			BrnAI::AIDriver * lpDriver;

			// BrnAIDebugComponent.cpp:1538
			Vector3 lCarPos;

			// BrnAIDebugComponent.cpp:1539
			int32_t liTrafficIndex;

			AICar::GetPosition(/* parameters */);
			{
				// BrnAIDebugComponent.cpp:1543
				NearbyVehicle * lpTraffic;

				// BrnAIDebugComponent.cpp:1544
				Vector2[2] laLineEnds2D;

				// BrnAIDebugComponent.cpp:1545
				Vector3[2] laLineEnds;

				AICar::GetPosition(/* parameters */);
				rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
				rw::math::vpu::IsValid(/* parameters */);
				rw::math::vpu::VecFloat::operator float(/* parameters */);
				AICar::GetPosition(/* parameters */);
				rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
				rw::math::vpu::VecFloat::operator float(/* parameters */);
				BoundaryLine::GetVert(/* parameters */);
				BoundaryLine::GetVert(/* parameters */);
				rw::math::vpu::Vector2::Set(/* parameters */);
				AICar::GetPosition(/* parameters */);
				BoundaryLine::GetX(/* parameters */);
				rw::math::vpu::IsValid(/* parameters */);
				rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
				rw::math::vpu::VecFloat::operator float(/* parameters */);
				AICar::GetPosition(/* parameters */);
				rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
				rw::math::vpu::VecFloat::operator float(/* parameters */);
				BoundaryLine::GetVert(/* parameters */);
				BoundaryLine::GetVert(/* parameters */);
				rw::math::vpu::Vector2::Set(/* parameters */);
				AICar::GetPosition(/* parameters */);
				BoundaryLine::GetX(/* parameters */);
				rw::math::vpu::IsValid(/* parameters */);
				rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
				rw::math::vpu::VecFloat::operator float(/* parameters */);
				AICar::GetPosition(/* parameters */);
				rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
				rw::math::vpu::VecFloat::operator float(/* parameters */);
				BoundaryLine::GetVert(/* parameters */);
				BoundaryLine::GetVert(/* parameters */);
				rw::math::vpu::Vector2::Set(/* parameters */);
				AICar::GetPosition(/* parameters */);
				BoundaryLine::GetX(/* parameters */);
				rw::math::vpu::IsValid(/* parameters */);
				rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
				rw::math::vpu::VecFloat::operator float(/* parameters */);
				AICar::GetPosition(/* parameters */);
				rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
				rw::math::vpu::VecFloat::operator float(/* parameters */);
			}
			BoundaryLine::GetVert(/* parameters */);
			BoundaryLine::GetVert(/* parameters */);
			rw::math::vpu::Vector2::Set(/* parameters */);
			VecFloat<VectorAxisX>(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			BoundaryLine::GetX(/* parameters */);
			VecFloat<VectorAxisY>(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			VecFloat<VectorAxisZ>(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			VecFloat<VectorAxisY>(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			VecFloat<VectorAxisZ>(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			VecFloat<VectorAxisY>(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			VecFloat<VectorAxisZ>(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			VecFloat<VectorAxisY>(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			VecFloat<VectorAxisZ>(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			VecFloat<VectorAxisY>(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			VecFloat<VectorAxisZ>(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			VecFloat<VectorAxisY>(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			VecFloat<VectorAxisZ>(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			VecFloat<VectorAxisY>(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			VecFloat<VectorAxisZ>(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			VecFloat<VectorAxisY>(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			VecFloat<VectorAxisZ>(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
		}
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnAI::AIDebugComponent::DrawCarIndices(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugComponent.cpp:1665
		int32_t liDriverIndex;

		{
			// BrnAIDebugComponent.cpp:1670
			BrnAI::AIDriver * lpDriver;

			// BrnAIDebugComponent.cpp:1671
			Vector3 lCarPos;

			// BrnAIDebugComponent.cpp:1672
			char[10] lacBuff;

			AICar::GetPosition(/* parameters */);
		}
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void rw::math::vpu::AngleBetweenVectors(const rw::math::vpu::Vector3  v0, const rw::math::vpu::Vector3  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:334
		VectorIntrinsicUnion::VectorIntrinsic nv0;

		// vector3_operation_inline.h:334
		VectorIntrinsicUnion::VectorIntrinsic nv1;

		{
			// vector3_operation_inline.h:335
			VectorIntrinsicUnion::VectorIntrinsic temp_one_over_rqrt_dot;

			{
				// vector3_operation_inline.h:335
				VectorIntrinsicUnion::VectorIntrinsic dotproduct;

				{
					// vector3_operation_inline.h:335
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

					// vector3_operation_inline.h:335
					VectorIntrinsicUnion::VectorIntrinsic yy;

					// vector3_operation_inline.h:335
					VectorIntrinsicUnion::VectorIntrinsic zz;

				}
				{
					// vector3_operation_inline.h:335
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector3_operation_inline.h:335
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:335
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:335
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

				}
			}
		}
		{
			// vector3_operation_inline.h:336
			VectorIntrinsicUnion::VectorIntrinsic temp_one_over_rqrt_dot;

			{
				// vector3_operation_inline.h:336
				VectorIntrinsicUnion::VectorIntrinsic dotproduct;

				{
					// vector3_operation_inline.h:336
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

					// vector3_operation_inline.h:336
					VectorIntrinsicUnion::VectorIntrinsic yy;

					// vector3_operation_inline.h:336
					VectorIntrinsicUnion::VectorIntrinsic zz;

				}
				{
					// vector3_operation_inline.h:336
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector3_operation_inline.h:336
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:336
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:336
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

				}
			}
		}
	}
}

void rw::math::vpu::CosAngleBetweenNormalizedVectors(const rw::math::vpu::Vector3  v0, const rw::math::vpu::Vector3  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:231
		VectorIntrinsicUnion::VectorIntrinsic dotProduct;

		// vector3_operation_inline.h:231
		VectorIntrinsicUnion::VectorIntrinsic temp0;

		// vector3_operation_inline.h:231
		VectorIntrinsicUnion::VectorIntrinsic result;

		// vector3_operation_inline.h:232
		VectorIntrinsicUnion::VectorIntrinsic one;

		// vector3_operation_inline.h:232
		VectorIntrinsicUnion::VectorIntrinsic negOne;

		{
			// vector3_operation_inline.h:235
			VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

			// vector3_operation_inline.h:235
			VectorIntrinsicUnion::VectorIntrinsic yy;

			// vector3_operation_inline.h:235
			VectorIntrinsicUnion::VectorIntrinsic zz;

		}
	}
}

void BrnAI::AIDebugComponent::DrawChevrons(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDebugComponent.cpp:1718
		const AICar * lpPlayerCar;

		// BrnAIDebugComponent.cpp:1719
		Vector3 lPlayerPos;

		// BrnAIDebugComponent.cpp:1720
		Vector3 lPlayerAt;

	}
	AICar::GetPosition(/* parameters */);
	AICar::GetDirection(/* parameters */);
	AICar::HasValidRoute(/* parameters */);
	{
		// BrnAIDebugComponent.cpp:1724
		int32_t liNodeIndex;

		// BrnAIDebugComponent.cpp:1725
		const Route * lpRoute;

		// BrnAIDebugComponent.cpp:1726
		Vector3 lPrevNodePosition;

		Route::GetNodeCount(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		{
			// BrnAIDebugComponent.cpp:1732
			const RouteNode * lpNode;

			// BrnAIDebugComponent.cpp:1733
			const RouteNode * lpNextNode;

			// BrnAIDebugComponent.cpp:1734
			const AISection * lpAISection;

			Route::GetNode(/* parameters */);
			Route::GetNode(/* parameters */);
			{
				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
			AISectionsData::GetAISection(/* parameters */);
			{
				// BrnAIDebugComponent.cpp:1738
				uint8_t luPortalIndex;

				{
					// BrnAIDebugComponent.cpp:1743
					Vector3 lPortalMidPosition;

					// BrnAIDebugComponent.cpp:1744
					float32_t lfDistFromEntrancePortal;

					Portal::GetPosition(/* parameters */);
					rw::math::vpu::operator-(/* parameters */);
					rw::math::vpu::Magnitude(/* parameters */);
					rw::math::vpu::VecFloat::operator float(/* parameters */);
					{
						// BrnAIDebugComponent.cpp:1750
						const BoundaryLine * lpBoundry;

						// BrnAIDebugComponent.cpp:1751
						Vector2 lVert1;

						// BrnAIDebugComponent.cpp:1752
						Vector2 lVert2;

						// BrnAIDebugComponent.cpp:1753
						Vector2 lPortalDir2D;

						// BrnAIDebugComponent.cpp:1755
						Vector3 lPortalDir3D;

						// BrnAIDebugComponent.cpp:1756
						float32_t lfAlphaProportion;

						// BrnAIDebugComponent.cpp:1757
						int32_t liAlpha;

						// BrnAIDebugComponent.cpp:1766
						Vector3 lDirToChevron;

						rw::math::vpu::operator-(/* parameters */);
						rw::math::vpu::operator*(/* parameters */);
						rw::math::vpu::operator>(/* parameters */);
						rw::math::vpu::AngleBetweenVectors(/* parameters */);
						{
							{
								{
								}
							}
						}
						rw::math::vpu::CosAngleBetweenNormalizedVectors(/* parameters */);
						vec_madd(/* parameters */);
						{
						}
						{
						}
						vec_sra(/* parameters */);
						vec_abs(/* parameters */);
						vec_madd(/* parameters */);
						vec_madd(/* parameters */);
						vec_madd(/* parameters */);
						vec_madd(/* parameters */);
						vec_madd(/* parameters */);
						vec_rsqrte(/* parameters */);
						vec_madd(/* parameters */);
						vec_madd(/* parameters */);
						vec_madd(/* parameters */);
						vec_madd(/* parameters */);
						vec_nmsub(/* parameters */);
						vec_nmsub(/* parameters */);
						vec_madd(/* parameters */);
						vec_madd(/* parameters */);
						vec_sel(/* parameters */);
						vec_madd(/* parameters */);
						vec_sel(/* parameters */);
						Portal::GetBoundaryLine(/* parameters */);
						BoundaryLine::GetVert(/* parameters */);
						rw::math::vpu::Vector3::Set(/* parameters */);
						rw::math::vpu::Vector2::Set(/* parameters */);
						rw::math::vpu::operator-(/* parameters */);
						rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
						rw::math::vpu::operator*(/* parameters */);
						BoundaryLine::GetVert(/* parameters */);
						rw::math::vpu::Vector2::Set(/* parameters */);
						rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
						rw::math::vpu::AngleBetweenVectors(/* parameters */);
						rw::math::vpu::CosAngleBetweenNormalizedVectors(/* parameters */);
						rw::math::vpu::Normalize(/* parameters */);
						vec_sra(/* parameters */);
						{
							{
							}
						}
						{
							{
								{
								}
								{
								}
							}
						}
						{
						}
						vec_abs(/* parameters */);
						vec_sub(/* parameters */);
						vec_madd(/* parameters */);
						vec_nmsub(/* parameters */);
						vec_madd(/* parameters */);
						vec_madd(/* parameters */);
						vec_madd(/* parameters */);
						std(/* parameters */);
						vec_madd(/* parameters */);
						vec_cmpeq(/* parameters */);
						vec_madd(/* parameters */);
						vec_madd(/* parameters */);
						vec_madd(/* parameters */);
						vec_nmsub(/* parameters */);
						vec_madd(/* parameters */);
						vec_madd(/* parameters */);
						vec_sel(/* parameters */);
						vec_madd(/* parameters */);
						rw::math::vpu::VecFloat::operator float(/* parameters */);
						vec_madd(/* parameters */);
						vec_sel(/* parameters */);
						RouteNode::GetPositionWithZeroY(/* parameters */);
						RouteNode::GetPositionWithZeroY(/* parameters */);
						rw::math::vpu::operator-(/* parameters */);
						rw::math::vpu::VecFloat::VecFloat(/* parameters */);
						rw::math::vpu::VecFloat::operator float(/* parameters */);
						rw::math::vpu::VecFloat::VecFloat(/* parameters */);
						rw::math::vpu::VecFloat::VecFloat(/* parameters */);
						rw::math::vpu::Lerp(/* parameters */);
						rw::math::vpu::Normalize(/* parameters */);
						rw::math::vpu::Mult(/* parameters */);
						{
							{
							}
						}
					}
				}
			}
		}
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	Portal::GetPosition(/* parameters */);
}

void BrnAI::AIDebugComponent::RenderWorld(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RaceBalancingDebugComponent::RenderWorld(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceBalancingDebugComponent.cpp:401
		const AICar * lpAICar;

		AICar::GetPosition(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnAI::RouteMapDebugComponent::DrawCarsInMap(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteMapDebugComponent.cpp:584
		int32_t liAICarIndex;

		{
			// BrnRouteMapDebugComponent.cpp:588
			const AICar * lpAICar;

		}
		{
			// BrnRouteMapDebugComponent.cpp:598
			Vector2 lPos2D;

			// BrnRouteMapDebugComponent.cpp:599
			Vector2 lDir2D;

			// BrnRouteMapDebugComponent.cpp:600
			Vector2 lNormal2D;

			// BrnRouteMapDebugComponent.cpp:601
			Vector2[4] laArrowPoints;

			// BrnRouteMapDebugComponent.cpp:603
			RGBA lColour;

			AICar::GetPosition(/* parameters */);
			AICar::GetDirection(/* parameters */);
			BrnMath::Flatten(/* parameters */);
			rw::math::vpu::Normalize(/* parameters */);
			rw::math::vpu::Vector2::Vector2(/* parameters */);
			rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
			{
			}
			VecFloat<VectorAxisY>(/* parameters */);
			AICar::GetState(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			{
				// BrnRouteMapDebugComponent.cpp:655
				uint16_t luDestinationSectionIndex;

				{
					// BrnRouteMapDebugComponent.cpp:659
					Vector3 lPos;

					AISectionsData::GetAISection(/* parameters */);
				}
				AICar::HasValidRoute(/* parameters */);
				{
					// BrnRouteMapDebugComponent.cpp:667
					RGBA lColour;

				}
			}
		}
	}
	{
		// BrnRouteMapDebugComponent.cpp:637
		CgsDev::SimpleStrStream lStrStream;

		CgsDev::SimpleStrStream::SimpleStrStream(/* parameters */);
		CgsDev::SimpleStrStream::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		AICar::HasValidDestination(/* parameters */);
		{
			// BrnRouteMapDebugComponent.cpp:644
			Vector3 lSectionPos;

			// BrnRouteMapDebugComponent.cpp:645
			Vector2 lSectionMapPos;

			AISectionsData::GetAISection(/* parameters */);
		}
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnAI::RouteMapDebugComponent::RenderHUD(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteMapDebugComponent.cpp:208
		CgsDev::SimpleStrStream lStrStream;

		CgsDev::SimpleStrStream::SimpleStrStream(/* parameters */);
		CgsDev::SimpleStrStream::operator<<(/* parameters */);
	}
}

void BrnAI::Route::IsInitialised() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetRouteTimeStamp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::SetState(BrnAI::EAICarState  leState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::RaceCarAIInterface::GetManagementQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void BrnAI::AICar::SetCarAssetAttribKey(Attribute::Key  lCarAssetAttribKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::BuzzBy::RequestResetBuzzTimers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDriver::GetGlobalRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDriver::Deactiveate(bool  lbIsInGameMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDriver::ResetRacingLine() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::HandleManagementEvents(const InputBuffer *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:1776
		const RaceCarAIInterface * lpCarInterface;

		// BrnAIModule.cpp:1777
		const VariableEventQueue<16384,16> * lpManagementQueue;

		// BrnAIModule.cpp:1778
		const CgsModule::Event * lpBaseEvent;

		// BrnAIModule.cpp:1779
		int32_t liEventSize;

		// BrnAIModule.cpp:1780
		BrnAI::AIModuleIO::EEvent leEventType;

	}
	AIModuleIO::InputBuffer::GetRaceCarAIInterface(/* parameters */);
	AIModuleIO::RaceCarAIInterface::GetManagementQueue(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
		// BrnAIModule.cpp:1981
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnAIModule.cpp:1802
		const AttachAIControlEvent * lpEvent;

		// BrnAIModule.cpp:1804
		EGlobalRaceCarIndex leGlobalRaceCarIndex;

		// BrnAIModule.cpp:1808
		AICar * lpCar;

		GetAICar(/* parameters */);
		BuzzBy::RequestResetBuzzTimers(/* parameters */);
		AICar::SetState(/* parameters */);
		AICar::SetCarAssetAttribKey(/* parameters */);
	}
	{
		// BrnAIModule.cpp:1826
		const ActivateRaceCarEvent * lpEvent;

		// BrnAIModule.cpp:1828
		EGlobalRaceCarIndex leGlobalRaceCarIndex;

		// BrnAIModule.cpp:1831
		EActiveRaceCarIndex leDriverActiveRaceCarIndex;

		// BrnAIModule.cpp:1835
		AICar * lpCar;

		// BrnAIModule.cpp:1838
		BrnAI::AIDriver * lpDriver;

		GetAICar(/* parameters */);
		GetAIDriver(/* parameters */);
	}
	{
		// BrnAIModule.cpp:1847
		const DeactivateRaceCarEvent * lpEvent;

		// BrnAIModule.cpp:1849
		EGlobalRaceCarIndex leGlobalRaceCarIndex;

		// BrnAIModule.cpp:1853
		AICar * lpCar;

		GetAICar(/* parameters */);
		{
			// BrnAIModule.cpp:1862
			BrnAI::AIDriver * lpDriver;

			AICar::GetDriver(/* parameters */);
			AIDriver::GetGlobalRaceCarIndex(/* parameters */);
			AIDriver::Deactiveate(/* parameters */);
		}
	}
	{
		// BrnAIModule.cpp:1881
		const DetachAIControlEvent * lpEvent;

		// BrnAIModule.cpp:1883
		EGlobalRaceCarIndex leGlobalRaceCarIndex;

		// BrnAIModule.cpp:1887
		AICar * lpCar;

		GetAICar(/* parameters */);
		BuzzBy::RequestResetBuzzTimers(/* parameters */);
		AICar::SetState(/* parameters */);
	}
	{
		// BrnAIModule.cpp:1899
		const PlayerControlChangedEvent * lpEvent;

		GetPlayerDriver(/* parameters */);
		GetPlayerDriver(/* parameters */);
		GetPlayerCar(/* parameters */);
		AIDriver::ResetRacingLine(/* parameters */);
		GetAICar(/* parameters */);
	}
	{
		// BrnAIModule.cpp:1912
		const SetUpOutOfRangeRaceCarEvent * lpEvent;

		// BrnAIModule.cpp:1918
		AICar * lpCar;

		GetAICar(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		BuzzBy::RequestResetBuzzTimers(/* parameters */);
	}
	{
		// BrnAIModule.cpp:1935
		const AddCarToCurrentModeEvent * lpEvent;

		// BrnAIModule.cpp:1936
		AICar * lpAICar;

		// BrnAIModule.cpp:1937
		bool lbDeviateFromRoute;

		// BrnAIModule.cpp:1938
		BrnAI::ERouteFindingStyle leRouteFindingStyle;

		GetAICar(/* parameters */);
		AICar::SetBehaviour(/* parameters */);
	}
	{
		// BrnAIModule.cpp:1874
		const RemoveCarFromCurrentModeEvent * lpEvent;

		GetAICar(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnAIModule.cpp:1860
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::IOHelper<BrnAI::RouteMapModuleIO::InputBuffer>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnAI::RouteMapModuleIO::InputBuffer>::operator BrnAI::RouteMapModuleIO::InputBuffer*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::LockBuffersForIO(IOBuffer *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::UnlockBuffersForIO(IOBuffer *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnAI::RouteMapModuleIO::OutputBuffer>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnAI::RouteMapModuleIO::OutputBuffer>::operator BrnAI::RouteMapModuleIO::OutputBuffer*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnAI::RouteMapModuleIO::OutputBuffer>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnAI::RouteMapModuleIO::OutputBuffer>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<BrnAI::RouteMapModuleIO::InputBuffer>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::PausedUpdate(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const InputBuffer *  lpInputBuffer, OutputBuffer *  lpOutputBuffer, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:771
		IOHelper<BrnAI::RouteMapModuleIO::InputBuffer> lpRouteInputBuffer;

	}
	CgsModule::IOHelper<BrnAI::RouteMapModuleIO::InputBuffer>::IOHelper(/* parameters */);
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	{
		// BrnAIModule.cpp:786
		IOHelper<BrnAI::RouteMapModuleIO::OutputBuffer> lpRouteOutputBuffer;

		CgsModule::IOHelper<BrnAI::RouteMapModuleIO::OutputBuffer>::IOHelper(/* parameters */);
		CgsModule::LockBuffersForIO(/* parameters */);
		CgsModule::UnlockBuffersForIO(/* parameters */);
		CgsContainers::FlagSet<std::int8_t>::UnSetBit(/* parameters */);
		CgsModule::IOBuffer::LockForRead(/* parameters */);
		CgsModule::IOHelper<BrnAI::RouteMapModuleIO::OutputBuffer>::~IOHelper(/* parameters */);
	}
	CgsModule::IOHelper<BrnAI::RouteMapModuleIO::InputBuffer>::~IOHelper(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnAI::AIDriver::CalcDistanceFromPlayer(const rw::math::vpu::Vector3  lPlayerCarPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetRandomNumber() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::Portal::GetPosition2D() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISectionsData::GetSectionResetPair(uint32_t  luSectionResetPair) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::SectionResetPair::GetStartSectionIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::IsInResetPairSection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::SectionResetPair::IgnoreForSubsequentPairs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::SetInResetPairSection(bool  lbIsInResetPairSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::SectionResetPair::GetResetSectionIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISectionsData::GetSectionResetPairCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AISection::IsUnsuitableForResetOnTrackLink() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::SectionResetPair::GetResetSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIDriver::GetNearbyVehicles() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<BrnAI::ResetOnTrackDebugComponent::HngTestEntry>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<BrnAI::ResetOnTrackDebugComponent::HngTestEntry>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::ResetOnTrackDebugComponent::RenderWorld(CgsDev::Debug3DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackDebugComponent.cpp:259
		int32_t liEntryIndex;

		// BrnResetOnTrackDebugComponent.cpp:260
		EGlobalRaceCarIndex leGlobalRaceCarIndex;

		{
			// BrnResetOnTrackDebugComponent.cpp:265
			const AICar * lpAICar;

			ResetOnTrackManager::GetAICar(/* parameters */);
			{
				// BrnResetOnTrackDebugComponent.cpp:271
				float32_t lfLookAheadDistance;

				// BrnResetOnTrackDebugComponent.cpp:272
				Vector2 lPosition2D;

				// BrnResetOnTrackDebugComponent.cpp:273
				Vector2 lDirection2D;

				// BrnResetOnTrackDebugComponent.cpp:274
				Vector3 lAheadPoint;

				// BrnResetOnTrackDebugComponent.cpp:275
				Vector2 lAheadPoint2D;

				// BrnResetOnTrackDebugComponent.cpp:276
				const AISection * lpCurrentAISection;

				// BrnResetOnTrackDebugComponent.cpp:277
				RGBA lLineColour;

			}
		}
		operator++(/* parameters */);
	}
	{
		// BrnResetOnTrackDebugComponent.cpp:307
		const BrnAI::ResetOnTrackDebugComponent::HngTestEntry * lpHngTestEntry;

		// BrnResetOnTrackDebugComponent.cpp:308
		RGBA lColour;

		CgsContainers::RingBuffer<BrnAI::ResetOnTrackDebugComponent::HngTestEntry>::operator[](/* parameters */);
	}
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	AICar::GetDirection(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	BrnMath::IsNormal(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	AICar::GetPosition(/* parameters */);
	AICar::GetDirection(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
	AISectionsData::GetAISection(/* parameters */);
	AICar::GetPosition(/* parameters */);
	AICar::GetDriver(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

extern void ResetEntry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ResetOnTrackResult() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::ResetOnTrackResult::GetResetDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::ResetOnTrackResult::GetResetPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<BrnAI::ResetOnTrackDebugComponent::ResetEntry>::Push(const BrnAI::ResetOnTrackDebugComponent::ResetEntry *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRingBuffer.h:137
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::ResetOnTrackDebugComponent::PushResetInfo(const ResetOnTrackRequest *  lpRequest, const ResetOnTrackResult *  lpResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AIModuleIO::ResetOnTrackRequest::GetGlobalRaceCarIndex(/* parameters */);
	{
		// BrnResetOnTrackDebugComponent.cpp:338
		BrnAI::ResetOnTrackDebugComponent::ResetEntry lResetEntry;

		// BrnResetOnTrackDebugComponent.cpp:339
		const AICar * lpAICar;

		// BrnResetOnTrackDebugComponent.cpp:340
		const AICar * lpPlayerCar;

		// BrnResetOnTrackDebugComponent.cpp:341
		Vector3 lCarDirection;

		ResetOnTrackManager::GetAICar(/* parameters */);
		ResetOnTrackManager::GetAICar(/* parameters */);
		AICar::GetDirection(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		BrnMath::IsNormal(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::IsSimilar(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::AngleBetweenVectors(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::ACos(/* parameters */);
		{
			{
				{
				}
			}
		}
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		vec_madd(/* parameters */);
		std(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_sra(/* parameters */);
		{
		}
		{
		}
		{
		}
		vec_abs(/* parameters */);
		vec_madd(/* parameters */);
		vec_rsqrte(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		AICar::GetPosition(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsContainers::RingBuffer<BrnAI::ResetOnTrackDebugComponent::ResetEntry>::Push(/* parameters */);
		{
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

extern void HngTestEntry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<BrnAI::ResetOnTrackDebugComponent::HngTestEntry>::Push(const BrnAI::ResetOnTrackDebugComponent::HngTestEntry *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRingBuffer.h:137
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::ResetOnTrackDebugComponent::PushHngTestInfo(const rw::math::vpu::Vector2  lStartPosition, const rw::math::vpu::Vector2  lEndPosition, bool  lbHit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackDebugComponent.cpp:368
		BrnAI::ResetOnTrackDebugComponent::HngTestEntry lHngTestEntry;

		// BrnResetOnTrackDebugComponent.cpp:369
		float32_t lPositionY;

		AICar::GetPosition(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	CgsContainers::RingBuffer<BrnAI::ResetOnTrackDebugComponent::HngTestEntry>::Push(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnMath::IsNormal(const rw::math::vpu::Vector2  lVector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::ResetOnTrackRequest::GetResetSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(float  s, const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:460
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

extern void ResetData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RecentResetEntry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::GetResetSpeedType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::AIModuleResultInterface::AddResetOnTrackResult(BrnAI::AIModuleIO::ResetOnTrackResult::State  leState, EGlobalRaceCarIndex  leGlobalRaceCarIndex, float32_t  lfResetSpeed, const rw::math::vpu::Vector3  lResetPosition, const rw::math::vpu::Vector3  lResetDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleResultInterface.h:300
		ResetOnTrackResult lResult;

	}
}

void BrnAI::AIModuleIO::ResetOnTrackResult::Construct(BrnAI::AIModuleIO::ResetOnTrackResult::State  leState, EGlobalRaceCarIndex  leGlobalActiveRaceCarIndex, float32_t  lfResetSpeed, Vector3  lResetPosition, Vector3  lResetDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<BrnAI::ResetOnTrackManager::RecentResetEntry>::Push(const BrnAI::ResetOnTrackManager::RecentResetEntry *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRingBuffer.h:137
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::vpu::GetVector3_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::AIModuleResultInterface::GetResetOnTrackResultQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern Camera & operator=(const const Camera &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<BrnAI::ResetOnTrackManager::RecentResetEntry>::Pop(BrnAI::ResetOnTrackManager::RecentResetEntry *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::AIModuleIO::ResetOnTrackRequest,35u>::Erase(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Camera(const const Camera &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::ResetOnTrackResult::GetGlobalRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::SetTransform(const rw::math::vpu::Vector3  lPosition, const rw::math::vpu::Vector3  lDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::AIModuleResultInterface::GetPlaceOnTrackRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::PlaceOnTrackRequest::GetGlobalRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::PlaceOnTrackRequest::GetResetPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::PlaceOnTrackRequest::GetResetDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::UpdateResetOnTrackManager(AIModuleResultInterface *  lpResultInterface, float32_t  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	GetPlayerCar(/* parameters */);
	GetAICar(/* parameters */);
	{
		// BrnAIModule.cpp:2417
		int32_t liResultIndex;

		// BrnAIModule.cpp:2418
		const AIModuleResultInterface::ResetOnTrackResultQueue * lpResetOnTrackResultQueue;

		// BrnAIModule.cpp:2445
		int32_t liRequestIndex;

		// BrnAIModule.cpp:2446
		const AIModuleResultInterface::PlaceOnTrackRequestQueue * lpPlaceOnTrackRequestQueue;

		GetPlayerCar(/* parameters */);
		GetAICar(/* parameters */);
		AICar::GetGlobalRaceCarIndex(/* parameters */);
		Camera(/* parameters */);
		{
			// BrnAIModule.cpp:2425
			const ResetOnTrackResult * lpResult;

			// BrnAIModule.cpp:2426
			AICar * lpAICar;

			CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>::GetEvent(/* parameters */);
			AIModuleIO::ResetOnTrackResult::GetGlobalRaceCarIndex(/* parameters */);
			GetAICar(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		AICar::SetTransform(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		{
			// BrnAIModule.cpp:2451
			const PlaceOnTrackRequest * lpRequest;

			// BrnAIModule.cpp:2452
			AICar * lpAICar;

			CgsModule::BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>::GetEvent(/* parameters */);
			AIModuleIO::PlaceOnTrackRequest::GetGlobalRaceCarIndex(/* parameters */);
			GetAICar(/* parameters */);
			AICar::SetTransform(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void rw::math::vpu::SinCosFast(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::SinCos(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Sin(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sinf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// sinf4.h:14
		float[4] xl;

		// sinf4.h:14
		float[4] xl2;

		// sinf4.h:14
		float[4] xl3;

		// sinf4.h:14
		float[4] res;

		// sinf4.h:15
		int[4] q;

		// sinf4.h:30
		int[4] offset;

		// sinf4.h:34
		float[4] qf;

		// sinf4.h:35
		float[4] p1;

		// sinf4.h:49
		float[4] ct1;

		// sinf4.h:50
		float[4] st1;

		// sinf4.h:52
		float[4] ct2;

		// sinf4.h:53
		float[4] st2;

		// sinf4.h:55
		float[4] cx;

		// sinf4.h:56
		float[4] sx;

		// sinf4.h:61
		unsigned int[4] mask1;

		// sinf4.h:68
		unsigned int[4] mask2;

	}
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY, VectorAxisZ, VectorAxisW>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z, VectorIntrinsicInParam  w) {
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

void rw::math::vpu::SqrtFast(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:193
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// scalar_operation_inline.h:194
			const VectorIntrinsicUnion::VectorIntrinsic zero;

			// scalar_operation_inline.h:194
			VectorIntrinsicUnion::VectorIntrinsic isZeroMask;

			// scalar_operation_inline.h:194
			VectorIntrinsicUnion::VectorIntrinsic recipSqrt;

			// scalar_operation_inline.h:194
			VectorIntrinsicUnion::VectorIntrinsic result;

			{
				// scalar_operation_inline.h:194
				VectorIntrinsicUnion::VectorIntrinsic estimate;

				// scalar_operation_inline.h:194
				VectorIntrinsicUnion::VectorIntrinsic vZero;

				// scalar_operation_inline.h:194
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				// scalar_operation_inline.h:194
				VectorIntrinsicUnion::VectorIntrinsic vHalf;

			}
		}
	}
}

void BrnAI::DistancePosVelToOrigin(const rw::math::vpu::Vector2  lStart, const rw::math::vpu::Vector2  lVel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIUtils.h:127
		float32_t lfLineLength;

		// BrnAIUtils.h:129
		float32_t lfResult;

		{
			// BrnAIUtils.h:141
			CgsDev::StrStream lStrStream;

		}
	}
}

void rw::math::vpu::operator-=(const Vector2 &  v, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::RoundRobinDrivers(int32_t  liRoundRobinsPerFrame, BrnAI::ERoundRobinType  liRoundRobinType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:1192
		EActiveRaceCarIndex leFirstUsed;

		// BrnAIModule.cpp:1193
		int32_t liBusyCount;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		// BrnAIModule.cpp:1176
		BrnAI::AIDriver * lpDriver;

		// BrnAIModule.cpp:1178
		int32_t liBusyCount;

		GetAIDriver(/* parameters */);
	}
	{
		// BrnAIModule.cpp:1210
		BrnAI::AIDriver * lpDriver;

		GetAIDriver(/* parameters */);
	}
	operator++(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AIModule::DoRoundRobins() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:1326
		bool lbUseOptimisations;

		{
			// BrnAIModule.cpp:1330
			int32_t liHNGTotal;

			// BrnAIModule.cpp:1331
			float32_t lfHNGTotal;

			// BrnAIModule.cpp:1333
			const float32_t KF_MAX_HGN_PER_FRAME;

			// BrnAIModule.cpp:1339
			int32_t liNumberOfFanProcesses;

		}
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Subtract(/* parameters */);
}

void BrnAI::AICar::PlaceOnTrackRequested(float32_t *  lpfResetSpeed, const Vector3 &  lResetPosition, const Vector3 &  lResetDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::OutputBuffer::GetAIModuleResultInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:472
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AIModuleIO::AIModuleResultInterface::AddPlaceOnTrackRequest(EGlobalRaceCarIndex  leGlobalRaceCarIndex, float32_t  lfResetSpeed, const rw::math::vpu::Vector3  lResetPosition, const rw::math::vpu::Vector3  lResetDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleResultInterface.h:322
		PlaceOnTrackRequest lRequest;

	}
}

extern void PlaceOnTrackRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::PlaceOnTrackRequest::Construct(EGlobalRaceCarIndex  leGlobalActiveRaceCarIndex, float32_t  lfResetSpeed, Vector3  lResetPosition, Vector3  lResetDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::UpdateDrivers(const InputBuffer *  lpInputBuffer, OutputBuffer *  lpOutputBuffer, const rw::math::vpu::Vector3  lPlayerPos, float32_t  lfSimTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:1378
		const RaceCarAIInterface * lpCarInterface;

		// BrnAIModule.cpp:1379
		AICar * lpPlayerCar;

		// BrnAIModule.cpp:1398
		EActiveRaceCarIndex leDriverActiveRaceCarIndex;

		// BrnAIModule.cpp:1401
		EActiveRaceCarIndex leDriverFirstActiveRaceCarIndex;

		// BrnAIModule.cpp:1402
		EActiveRaceCarIndex leDriverLastActiveRaceCarIndex;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	AIModuleIO::InputBuffer::GetRaceCarAIInterface(/* parameters */);
	GetPlayerDriver(/* parameters */);
	GetPlayerCar(/* parameters */);
	operator++(/* parameters */);
	{
		// BrnAIModule.cpp:1420
		BrnAI::AIDriver * lpDriver;

		// BrnAIModule.cpp:1445
		Vector3 lResetPosition;

		// BrnAIModule.cpp:1446
		Vector3 lResetDirection;

		// BrnAIModule.cpp:1447
		float32_t lfResetSpeed;

		GetAIDriver(/* parameters */);
		AIDriver::SetAggressionVictim(/* parameters */);
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		AIDriver::GetCar(/* parameters */);
		AICar::PlaceOnTrackRequested(/* parameters */);
		{
			// BrnAIModule.cpp:1457
			AIModuleResultInterface * lpAIModuleResultInterface;

			// BrnAIModule.cpp:1458
			EGlobalRaceCarIndex leGlobalRaceCarIndex;

			AIModuleIO::OutputBuffer::GetAIModuleResultInterface(/* parameters */);
		}
		GetAIDriver(/* parameters */);
		AIModuleIO::AIModuleResultInterface::AddPlaceOnTrackRequest(/* parameters */);
	}
	operator++(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void rw::math::vpu::Abs(const rw::math::vpu::Vector2  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Negate(const rw::math::vpu::Vector2  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:30
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector2_operation_inline.h:31
			VectorIntrinsicUnion::VectorIntrinsic signMask;

		}
	}
}

void rw::math::vpu::Max(const rw::math::vpu::Vector2  v0, const rw::math::vpu::Vector2  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:308
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator< <VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:616
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:618
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:620
		bool ret;

		{
			// vec_float_operation_inline.h:619
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator><VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisY> &  b) {
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

void rw::math::vpu::operator><VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:374
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:376
		bool ret;

	}
}

void rw::math::vpu::operator><VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:374
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:376
		bool ret;

	}
}

void rw::math::vpu::operator><VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisX> &  b) {
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

void BrnAI::AISectionsData::GetMiddle(uint16_t  luSectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AISectionsData.h:683
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::RouteMapModuleIO::RaceRouteRequest::SetUseAIShortcuts(bool  lbUseAIShortcuts) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::RaceRouteRequest::SetDistanceFunction(BrnAI::AStarDistanceFunction  leDistanceFunction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ExtrapolatedRouteRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest::Construct(uint16_t  luOwnerId, uint16_t  luEventId, uint8_t  luNumSectionsToGenerate, const rw::math::vpu::Vector3  lCarPosition, const rw::math::vpu::Vector3  lCarDirection, uint32_t  luCurrentSectionIndex, BrnAI::EExtrapolatedType  leRouteType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::InputBuffer::GetExtrapolatedRouteRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRouteMapModuleIO.h:597
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest>::AddEventSafe(const const ExtrapolatedRouteRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AICar::IsOnline() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::RaceRouteRequest::SetQuality(BrnAI::AStarQuality  leQuality) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::RouteMapModuleIO::RaceRouteRequest::AddBlockSectionId(AISection::AISectionId  luBlockSectionId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::AISectionId,16u>::Append(const const AISection::AISectionId &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AIModuleIO::RaceCarAIInterface::IsPlayerCarActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::InputBuffer::GetTimerInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:394
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::TimerStatusInterface::GetSimTimerStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::GetCurrentTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::RaceCarAIInterface::GetPlayerCarPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::RaceCarAIInterface::GetPlayerCarDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::RaceCarAIInterface::GetPlayerActiveRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::GetTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::Time(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::GetFloatVal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::Update(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const InputBuffer *  lpInputBuffer, OutputBuffer *  lpOutputBuffer, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModule.cpp:603
		Vector3 lPlayerPosition;

		// BrnAIModule.cpp:604
		Vector3 lPlayerDirection;

		// BrnAIModule.cpp:605
		float32_t lfSimTimeStep;

		// BrnAIModule.cpp:606
		bool lbBuzzByOccurred;

		// BrnAIModule.cpp:616
		IOHelper<BrnAI::RouteMapModuleIO::InputBuffer> lpRouteInputBuffer;

		// BrnAIModule.cpp:622
		bool lbIsPlayerActive;

	}
	CgsModule::IOHelper<BrnAI::RouteMapModuleIO::InputBuffer>::IOHelper(/* parameters */);
	AIModuleIO::InputBuffer::GetTimerInterface(/* parameters */);
	CgsSystem::TimerStatusInterface::GetSimTimerStatus(/* parameters */);
	CgsSystem::TimerStatus::GetCurrentTimeStep(/* parameters */);
	AIModuleIO::RaceCarAIInterface::GetPlayerCarPosition(/* parameters */);
	AIModuleIO::RaceCarAIInterface::GetPlayerCarDirection(/* parameters */);
	AIModuleIO::RaceCarAIInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	GetPlayerDriver(/* parameters */);
	GetPlayerDriver(/* parameters */);
	GetPlayerCar(/* parameters */);
	CgsModule::LockBuffersForIO(/* parameters */);
	CgsModule::UnlockBuffersForIO(/* parameters */);
	{
		// BrnAIModule.cpp:657
		IOHelper<BrnAI::RouteMapModuleIO::OutputBuffer> lpRouteOutputBuffer;

		CgsModule::IOHelper<BrnAI::RouteMapModuleIO::OutputBuffer>::IOHelper(/* parameters */);
		CgsModule::LockBuffersForIO(/* parameters */);
		GetPlayerCar(/* parameters */);
		CgsModule::UnlockBuffersForIO(/* parameters */);
		CgsModule::IOHelper<BrnAI::RouteMapModuleIO::OutputBuffer>::~IOHelper(/* parameters */);
	}
	AIModuleIO::OutputBuffer::GetAIModuleResultInterface(/* parameters */);
	AIModuleIO::InputBuffer::GetTimerInterface(/* parameters */);
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	GetPlayerCar(/* parameters */);
	{
		// BrnAIModule.cpp:712
		RequestGameTrainingEvent lTraining;

		AIModuleIO::OutputBuffer::GetGameEventQueue(/* parameters */);
	}
	CgsModule::IOHelper<BrnAI::RouteMapModuleIO::InputBuffer>::~IOHelper(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GetPlayerDriver(/* parameters */);
	AIDriver::GetGlobalRaceCarIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

::::KI_NETWORK_COMPRESSED_PICTURE_FORMAT = 1433534630;

::::KI_NETWORK_PHOTO_FORMAT = 1433536677;

::::K_GAMER_PICTURE_FORMAT = 1433536677;

::::K_NETWORK_PERF_CHANNEL = 8;

::::K_NETWORK2_PERF_CHANNEL = 9;

::::K_NETWORK3_PERF_CHANNEL = 18;

::::KU_INVALID_LANDMARK_INDEX = -1;

::::KF_ASPECTRATIO_WIDESCREEN = [63, 227, 142, 57];

::::KF_ASPECTRATIO_STANDARD = [63, 170, 170, 171];

::::KF_ASPECTRATIO_SQUARE = [63, 128, 0, 0];

::::KF_ASPECTRATIO_STAND_IN_PLEASE_REMOVE_ME = [63, 227, 142, 57];

::::KF_DEFAULT_FOVHORIZONTAL = [63, 201, 15, 219];

::::KF_DEFAULT_ASPECTRATIO = [63, 227, 142, 57];

::::KF_DEFAULT_NEARCLIPPLANE = [61, 204, 204, 205];

::::KF_DEFAULT_FARCLIPPLANE = [68, 122, 0, 0];

::::KF_DEFAULT_DEPTHOFFIELD = [63, 128, 0, 0];

::::KF_GRAVITY = [65, 28, 245, 195];

::::KE_PHYSICS_PERFMON_PAGE = 6;

::::KI_PIDCONTROLLER_NUM_SLOTS;

::::KF_CORONA_OFFSET = [63, 0, 0, 0];

::::KF_BLOBBY_SHADOW_ALPHA = [63, 51, 51, 51];

::::KF_DEFAULT_TIMESTEP = [60, 136, 136, 137];

::::KF_VECTOR_NORMALISED_TOLERANCE = [60, 35, 215, 10];

::::KF_DEFAULT_CONTACT_RELAXATION = [63, 0, 0, 0];

::::KF_DEFAULT_BAR_RELAXATION = [63, 128, 0, 0];

::::KF_DEFAULT_DEFORMABLE_BAR_RELAXATION = [63, 76, 204, 205];

::::fMAX_DEFORMATION = [61, 204, 204, 205];

::::KF_MAX_UNRESOLVED_ERROR_THRESHOLD = [61, 76, 204, 205];

::::msfTicksPerSecond = [69, 59, 128, 0];

::::msfOneOverTicksPerSecond = [57, 174, 195, 62];

::::KE_WORLD_PERFMON_PAGE = 4;

::::SPLICE_TYPE_UNKNOWN = -1;

::::kfSteeringPower = [63, 128, 0, 0];

BrnProgression_2007_10_04::KF_PLAYER_BOOST_THRESHOLD = [65, 160, 0, 0];

BrnProgression_2007_10_04::KF_PLAYERSTAT_OVERDRIVE_EARNER = [67, 250, 0, 0];

BrnProgression_2007_10_04::KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX = [66, 112, 0, 0];

BrnProgression_2007_10_04::KF_PLAYER_STAT_TEMPORARY_ACCELERATOR = [65, 32, 0, 0];

Snd9::AZIMUTH_DEFAULT = [201, 116, 36, 0];

Snd9::FILE_SIZE_UNKNOWN = -1;

ICE::TWO_PI_ANGLE = [71, 128, 0, 0];

ICE::TWO_PI_DEG = [67, 180, 0, 0];

ICE::TWO_PI = [64, 201, 15, 219];

ICE::MILE = [63, 205, 254, 252];

ICE::ICE_PARAMETER_MAX = -1;

ICE::ICE_LENS_DEFAULT = [65, 192, 0, 0];

ICE::ICE_NEAR_CLIP_DEFAULT = [63, 0, 0, 0];

ICE::ICE_TANGENT_LENGTH_DEFAULT = [63, 128, 0, 0];

ICE::ICE_INVALID_KEY = -1;

ICE::ICE_INVALID_INTERVAL = -1;

ICE::ICE_EPSILON = [55, 39, 197, 172];

ICE::ICE_DATA_SMALL_FLOAT = [58, 131, 18, 111];

ICE::ICEMath::ASPECT_X = [63, 170, 61, 113];

ICE::ICEMath::LENS_BASE = [65, 64, 0, 0];

CgsWorld::KU_INVALID_WORLD_MAP_VALUE = -1;

BrnDirector::KE_DIRECTOR_PERFMON_PAGE = 13;

BrnDirector::Camera::KF_SUPER_SLO_MO_FACTOR = [61, 8, 136, 137];

BrnDirector::Camera::KF_SLO_MO_FACTOR = [62, 146, 73, 37];

CgsInput::KF_BUTTONDOWNTHRESHOLD = [61, 204, 204, 205];

CgsNumeric::KU_RANDOM_DEFAULT_SEED = -1881117246;

BrnReplays::KF_REPLAY_START_TIME = [65, 112, 0, 0];

BrnReplays::KF_REPLAY_LENGTH = [65, 160, 0, 0];

BrnReplays::KAC_STREAM_MAGIC_NUMBER = "REPLAY ";

BrnEffects::SKID_FACTOR_THRESHOLD = [62, 153, 153, 154];

CgsSceneManager::KF_DEFAULT_MIN_PADDING = [61, 204, 204, 205];

CgsSceneManager::KF_DEFAULT_MAX_PADDING = [64, 0, 0, 0];

CgsSceneManager::KU16_INVALID_ENTITY_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INSTANCE_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INDEX = -1;

CgsSceneManager::KU_SPATIAL_PARTITION_INVALID_ID = -1;

CgsUnicode::KU_TRAILING_BYTE_MASK = -64;

CgsUnicode::KU_TRAILING_BYTE = -128;

CgsUnicode::KU_SINGLE_BYTE_CHAR_MASK = -128;

CgsUnicode::KU_TWO_BYTE_CHAR_MASK = -32;

CgsUnicode::KU_TWO_BYTE_CHAR = -64;

CgsUnicode::KU_THREE_BYTE_CHAR_MASK = -16;

CgsUnicode::KU_THREE_BYTE_CHAR = -32;

CgsUnicode::KU_FOUR_BYTE_CHAR_MASK = -8;

CgsUnicode::KU_FOUR_BYTE_CHAR = -16;

CgsGraphics::DefaultValues::mkDefault_float_t = [0, 0, 0, 0];

CgsGraphics::DefaultValues::mkDefault_double_t = [0, 0, 0, 0, 0, 0, 0, 0];

CgsFileSystem::KU_INVALID_FILE_ID = -1;

CgsSound::Playback::K_MIN_RESERVED_IDENT = -16;

CgsSound::Playback::K_INIT_SND9_SUBMIX_IDENT = -16;

Attrib::key_default = -2887443745685561006;

Attrib::h64_default = -2887443745685561006;

Attrib::Hash::junkyardlocators::LocatorData = -570084516953988955;

Attrib::Hash::sparkeffect::Bounciness = -3817220592226588377;

Attrib::Hash::sparkeffect::DragDuration = -5041530831918900097;

Attrib::Hash::sparkeffect::MotionBlurTime = -4706437283823970344;

Attrib::Hash::sparkeffect::NumParticlesPerImpactMin = -372394079317485815;

Attrib::Hash::sparkeffect::SparkRandomColour1 = -5500759238284303219;

Attrib::Hash::sparkeffect::SparkRandomColour2 = -377198750846029218;

Attrib::Hash::sparkeffect::SpawnLineLengthMax = -1484334559578632962;

Attrib::Hash::sparkeffect::T1_VelocityInheritanceMax = -1736401039282896638;

Attrib::Hash::burnoutglobaldata::EaTrax = -3928707850451763780;

Attrib::Hash::burnoutglobaldata::FatalFlagEnum = -1998159337474592529;

Attrib::Hash::burnoutglobaldata::MaterialTypeEnum = -2716257156762056581;

Attrib::Hash::burnoutglobaldata::mPassbyBins = -4188795827779376598;

Attrib::Hash::burnoutglobaldata::mPresentationActions = -3695537172128070359;

Attrib::Hash::burnoutglobaldata::NumShiftPatterns = -5246617198867624784;

Attrib::Hash::burnoutglobaldata::OrientationEnum = -6791005438007148636;

Attrib::Hash::burnoutglobaldata::ReverbSettings = -1487269786437321408;

Attrib::Hash::burnoutglobaldata::ReverbTypes = -4882948758934672803;

Attrib::Hash::burnoutglobaldata::SampleTags = -6421355425626342460;

Attrib::Hash::burnoutglobaldata::ShiftPatterns = -8770309864078353478;

Attrib::Hash::burnoutglobaldata::StreamMappings = -8414824317506067834;

Attrib::Hash::burnoutglobaldata::StreamSettings = -4887161515125358683;

Attrib::Hash::debrisparams::Burst_CameraDirectedBurstProbability = -4911020043565991649;

Attrib::Hash::debrisparams::Burst_EmissionAngleVariance = -7672718436091033875;

Attrib::Hash::debrisparams::Burst_MaximumPercentage = -4045720663554568892;

Attrib::Hash::debrisparams::Burst_MidPointEmissionSpeed = -2388339733728337238;

Attrib::Hash::debrisparams::Burst_MidPointPercentage = -6093098408262815203;

Attrib::Hash::debrisparams::Burst_NumParticles_Coloured = -1120747857703290747;

Attrib::Hash::debrisparams::Burst_NumParticles_HighDetail = -8797829737603133935;

Attrib::Hash::debrisparams::Burst_NumParticles_Shiny = -2097299715269661146;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_Coloured = -3250550009145791469;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_Dark = -1303149371335787807;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_HighDetail = -2112811013008378960;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_Shiny = -7404559354884103995;

Attrib::Hash::debrisparams::Burst_ParticleSizeMin_Coloured = -6589561312631380998;

Attrib::Hash::debrisparams::Burst_ParticleSizeMin_HighDetail = -1036632279311570142;

Attrib::Hash::debrisparams::Burst_VelocityMin = -6514586815391291054;

Attrib::Hash::debrisparams::EmitterHalfExtents = -7728054833146959017;

Attrib::Hash::debrisparams::Trail_EmissionThreshold_Dark = -6557622440413492218;

Attrib::Hash::debrisparams::Trail_EmissionThreshold_GlassChunk = -7044734835905075578;

Attrib::Hash::debrisparams::Trail_EmissionThreshold_HighDetail = -4321421017727861513;

Attrib::Hash::debrisparams::Trail_MasterEmissionRate_HighDetail = -1066284894708561365;

Attrib::Hash::debrisparams::Trail_MasterEmissionRate_Shiny = -3177573945560636980;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_Dark = -3104049988774297466;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_GlassChunk = -1130302925735451789;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_HighDetail = -2181416400992529396;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_Shiny = -3160118430803200590;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_Smoke = -50646744464768722;

Attrib::Hash::debrisparams::Trail_ParticleSizeMin_GlassChunk = -1113091167386479757;

Attrib::Hash::debrisparams::Trail_ParticleSizeMin_HighDetail = -3637246564704219172;

Attrib::Hash::debrisparams::Trail_VelocityMin = -2399476863096052342;

Attrib::Hash::nativeparticleparams::DragDuration = -5041530831918900097;

Attrib::Hash::nativeparticleparams::EndColour = -8627483912619234383;

Attrib::Hash::nativeparticleparams::EndSize = -8619726482830642788;

Attrib::Hash::nativeparticleparams::FarClip = -5692632252225236236;

Attrib::Hash::nativeparticleparams::LifeTime = -1608884447590013666;

Attrib::Hash::nativeparticleparams::LightingMin = -3106857269163792920;

Attrib::Hash::nativeparticleparams::MidColour = -6822591414946377124;

Attrib::Hash::nativeparticleparams::MidSize = -926488105834939848;

Attrib::Hash::nativeparticleparams::StartColour = -4735521137697763443;

Attrib::Hash::surface::AudioSurface = -2951005994454003311;

Attrib::Hash::boostparamsasset::AirEarning = -1891887715510008784;

Attrib::Hash::boostparamsasset::AirSpinEarning = -4352757040966857742;

Attrib::Hash::boostparamsasset::BarrelRollEarning = -1035108252361594191;

Attrib::Hash::boostparamsasset::BoostChainMin = -2343420446165730523;

Attrib::Hash::boostparamsasset::BoostSlamStrength = -7766274748171065765;

Attrib::Hash::boostparamsasset::BoostSpinIncrease = -6502808958254691887;

Attrib::Hash::boostparamsasset::BurnRateBoost = -3648956812362844215;

Attrib::Hash::boostparamsasset::CleanLanding = -6630060647361528260;

Attrib::Hash::boostparamsasset::ComboModifier = -4173559742227163691;

Attrib::Hash::boostparamsasset::GrindingEarning = -4363492811123288973;

Attrib::Hash::boostparamsasset::Handbrake180Earning = -103186127672983849;

Attrib::Hash::boostparamsasset::MaxSpeedBoostModifier = -9097027527144457540;

Attrib::Hash::boostparamsasset::NearMissBoostEarning = -8500197340308483883;

Attrib::Hash::boostparamsasset::OnComing = -8123106555570631457;

Attrib::Hash::boostparamsasset::RubbingEarning = -5657847537147772142;

Attrib::Hash::boostparamsasset::SlamEarning = -1643247501148292748;

Attrib::Hash::boostparamsasset::SpeedForMaxEarning = -1574127377284081412;

Attrib::Hash::boostparamsasset::StuntSmashEarning = -7010097363749819817;

Attrib::Hash::boostparamsasset::TailgatingEarning = -1992470372002763846;

Attrib::Hash::boostparamsasset::TradingPaintEarning = -6557756835454833620;

Attrib::Hash::boostparamsasset::TrafficCheck = -4306685691871961585;

Attrib::Hash::cameradefaults::ImpactShakeDecayRate = -7687775437294225719;

Attrib::Hash::cameradefaults::ImpactShakeScale = -842583479824379615;

Attrib::Hash::cameradefaults::ImpactShakeType = -5456835001829100036;

Attrib::Hash::cameradefaults::SpeedShakeThreshold = -2676194790771603092;

Attrib::Hash::cameradefaults::SpeedShakeType = -7084916540873237413;

Attrib::Hash::iceanim::Guid = -7097409704044230467;

Attrib::Hash::aftertouchcam::MaxDistance = -8557505899279475338;

Attrib::Hash::aftertouchcam::MinHeight = -4927329763252819482;

Attrib::Hash::aftertouchcam::Pitch = -4570886707007131269;

Attrib::Hash::cameraexternalbehaviour::BoostFieldOfView = -3982979552416833250;

Attrib::Hash::cameraexternalbehaviour::PivotLength = -5488398596126602666;

Attrib::Hash::cameraexternalbehaviour::TiltCameraScale = -2098857104130072476;

Attrib::Hash::cameraexternalbehaviour::ZAndTiltCutoffSpeedMPH = -4276768861718081255;

Attrib::Hash::camerabumperbehaviour::AccelerationResponse = -4777123151109968498;

Attrib::Hash::camerabumperbehaviour::BodyPitchScale = -6812158392904343490;

Attrib::Hash::camerabumperbehaviour::BoostFieldOfView = -3982979552416833250;

Attrib::Hash::camerabumperbehaviour::RollSpring = -2603261772359457364;

Attrib::Hash::camerabumperbehaviour::ZOffset = -2031833194172202669;

Attrib::Hash::physicsvehicledriftattribs::DriftAngularDamping = -7987274848054600901;

Attrib::Hash::physicsvehicledriftattribs::DriftMaxAngle = -2994767941176318032;

Attrib::Hash::physicsvehicledriftattribs::DriftSidewaysDamping = -2483459419315854033;

Attrib::Hash::physicsvehicledriftattribs::ForcedDriftStartSlip = -6912247002206191947;

Attrib::Hash::physicsvehicledriftattribs::ForcedDriftTimeToReachBaseSlip = -6629571209366667655;

Attrib::Hash::physicsvehicledriftattribs::GasDriftScaleFactor = -4333709530778156113;

Attrib::Hash::physicsvehicledriftattribs::GripFromBrake = -2382352998964909567;

Attrib::Hash::physicsvehicledriftattribs::GripFromGasLetOff = -639186851837051004;

Attrib::Hash::physicsvehicledriftattribs::InitialDriftPushBaseInc = -1687458581941323946;

Attrib::Hash::physicsvehicledriftattribs::InitialDriftPushTime = -2635178875663518084;

Attrib::Hash::physicsvehicledriftattribs::NaturalDriftScaleDecay = -701798028399705032;

Attrib::Hash::physicsvehicledriftattribs::NaturalYawTorque = -30919134522791338;

Attrib::Hash::physicsvehicledriftattribs::NaturalYawTorqueCutOffAngle = -327284094809810262;

Attrib::Hash::physicsvehicledriftattribs::NeutralTimeToReduceDrift = -1265753866060659382;

Attrib::Hash::physicsvehicledriftattribs::SideForceDirftScaleCutOff = -3301564056552839641;

Attrib::Hash::physicsvehicledriftattribs::SideForceDriftAngleCutOff = -2437558699454416996;

Attrib::Hash::physicsvehicledriftattribs::SideForceDriftSpeedCutOff = -7527846554673069815;

Attrib::Hash::physicsvehicledriftattribs::SideForcePeakDriftAngle = -1859027027580878885;

Attrib::Hash::physicsvehicledriftattribs::TimeForNaturalDrift = -2192670478953321175;

Attrib::Hash::physicsvehiclebodyrollattribs::FactorOfWeightX = -8854577714803822838;

Attrib::Hash::physicsvehiclebodyrollattribs::FactorOfWeightZ = -2898700536974267796;

Attrib::Hash::physicsvehiclebodyrollattribs::PitchSpringDampening = -2769872210820837534;

Attrib::Hash::physicsvehiclebodyrollattribs::RollSpringDampening = -8279220931350705981;

Attrib::Hash::physicsvehiclebodyrollattribs::WeightTransferDecayZ = -8641409400008704383;

Attrib::Hash::physicsvehiclesuspensionattribs::InAirDamping = -4391887702944398535;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxPitchDampingOnLanding = -5239064295522386902;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxRollDampingOnLanding = -2189969058134543695;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxVertVelocityDampingOnLanding = -7578424394703509952;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxYawDampingOnLanding = -9159666339184342346;

Attrib::Hash::physicsvehiclesteeringattribs::AiPidCoefficientDriftI = -2790084423631939863;

Attrib::Hash::physicsvehiclesteeringattribs::AiPidCoefficientP = -5300428111701324124;

Attrib::Hash::physicsvehiclesteeringattribs::SpeedForMaxAngle = -5882573263584155911;

Attrib::Hash::physicsvehiclesteeringattribs::SpeedForMinAngle = -703227396336610229;

Attrib::Hash::physicsvehiclesteeringattribs::StraightReactionBias = -153043821033732338;

Attrib::Hash::physicsvehicleengineattribs::Differential = -1187171424841002758;

Attrib::Hash::physicsvehicleengineattribs::EngineBraking = -7261967632121772986;

Attrib::Hash::physicsvehicleengineattribs::EngineLowEndTorqueFactor = -2588301351876699819;

Attrib::Hash::physicsvehicleengineattribs::FlyWheelInertia = -8061433635503997159;

Attrib::Hash::physicsvehicleengineattribs::GearRatios1 = -2125503289046983800;

Attrib::Hash::physicsvehicleengineattribs::GearRatios2 = -1019379010385919379;

Attrib::Hash::physicsvehicleengineattribs::GearUpRPMs1 = -8165513262891634271;

Attrib::Hash::physicsvehicleengineattribs::GearUpRPMs2 = -1326377965340261792;

Attrib::Hash::physicsvehicleengineattribs::MaxTorque = -4687445904566254869;

Attrib::Hash::physicsvehicleengineattribs::TorqueScales2 = -4818449724105158753;

Attrib::Hash::physicsvehicleengineattribs::TransmissionEfficiency = -2275951549147437131;

Attrib::Hash::physicsvehiclecollisionattribs::BodyBox = -7996561706975887698;

Attrib::Hash::physicsvehicleboostattribs::BlueBoostBase = -4153969524460304374;

Attrib::Hash::physicsvehicleboostattribs::BlueBoostKick = -6909139712711029827;

Attrib::Hash::physicsvehicleboostattribs::BlueMaxBoostSpeed = -2832201897230299495;

Attrib::Hash::physicsvehicleboostattribs::BoostBase = -1449587645724428634;

Attrib::Hash::physicsvehicleboostattribs::BoostKick = -7916157251067609346;

Attrib::Hash::physicsvehicleboostattribs::BoostKickHeightOffset = -7644159426826663967;

Attrib::Hash::physicsvehicleboostattribs::BoostKickMaxStartSpeed = -6769221666331370883;

Attrib::Hash::physicsvehicleboostattribs::BoostKickTime = -2762519771875884640;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleBaseAttribs = -3240169895484535073;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleBodyRollAttribs = -4714783353325512142;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleDriftAttribs = -1740125582048760770;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleEngineAttribs = -3611665628868408173;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleSteeringAttribs = -3941675927247818081;

Attrib::Hash::burnoutcarasset::CameraBumperBehaviourAsset = -2996460651824973746;

Attrib::Hash::burnoutcarasset::CarUnlockShot = -3361774045014665585;

Attrib::Hash::burnoutcarasset::DefaultWheel = -5763545711493309811;

Attrib::Hash::burnoutcarasset::EngineEntityKey = -8286362179805877589;

Attrib::Hash::burnoutcarasset::GameplayAsset = -4159014215320274250;

Attrib::Hash::burnoutcarasset::GraphicsAsset = -2452633230673053972;

Attrib::Hash::burnoutcarasset::MasterSceneMayaBinaryFile = -4033406791020503385;

Attrib::Hash::burnoutcarasset::SoundEngineAsset = -3616434373283268524;

Attrib::Hash::burnoutcarasset::SoundExhaustAsset = -6601183205448776399;

Attrib::Hash::physicsvehiclebaseattribs::AngularDrag = -2587998968637529485;

Attrib::Hash::physicsvehiclebaseattribs::BrakeScaleToFactor = -6724323949230824050;

Attrib::Hash::physicsvehiclebaseattribs::DownForceZOffset = -7435943572713341390;

Attrib::Hash::physicsvehiclebaseattribs::DriveTimeDeformLimitNegY = -3280670874417285740;

Attrib::Hash::physicsvehiclebaseattribs::DriveTimeDeformLimitPosZ = -1666416025769953155;

Attrib::Hash::physicsvehiclebaseattribs::DrivingMass = -3787790934024483857;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurveFloorSlipRatio = -1630393006643118008;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurvePeakCoefficient = -5067077354339468201;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurvePeakSlipRatio = -4731126951183549001;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireAdhesiveLimit = -1286355289157071958;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireDynamicFrictionCoefficient = -6349451596478070934;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireLongForceBias = -1377722699248955594;

Attrib::Hash::physicsvehiclebaseattribs::FrontWheelMass = -6833821662839661425;

Attrib::Hash::physicsvehiclebaseattribs::HighSpeedAngularDamping = -8330303592681147153;

Attrib::Hash::physicsvehiclebaseattribs::LinearDrag = -8487842249909718459;

Attrib::Hash::physicsvehiclebaseattribs::LockBrakeScale = -4714331935212091080;

Attrib::Hash::physicsvehiclebaseattribs::MagicBrakeFactorStraightLine = -2858441074664930156;

Attrib::Hash::physicsvehiclebaseattribs::MagicBrakeFactorTurning = -897565922227798600;

Attrib::Hash::physicsvehiclebaseattribs::PitchDampingOnTakeOff = -5137150473961999634;

Attrib::Hash::physicsvehiclebaseattribs::PowerToFront = -8388318914847005089;

Attrib::Hash::physicsvehiclebaseattribs::RearLatGripCurvePeakCoefficient = -753131893419114293;

Attrib::Hash::physicsvehiclebaseattribs::RearLatGripCurvePeakSlipRatio = -7653661541150633661;

Attrib::Hash::physicsvehiclebaseattribs::RearLongGripCurvePeakCoefficient = -412225798706036160;

Attrib::Hash::physicsvehiclebaseattribs::RearTireAdhesiveLimit = -9041112529150658;

Attrib::Hash::physicsvehiclebaseattribs::RearTireDynamicFrictionCoefficient = -5724009369781865567;

Attrib::Hash::physicsvehiclebaseattribs::RearTireLongForceBias = -8694020640479969529;

Attrib::Hash::physicsvehiclebaseattribs::RearWheelMass = -1977907534454313347;

Attrib::Hash::physicsvehiclebaseattribs::SurfaceFrontGripFactor = -179166364723212449;

Attrib::Hash::physicsvehiclebaseattribs::SurfaceRoughnessFactor = -2535698590537951711;

Attrib::Hash::physicsvehiclebaseattribs::TractionLineLength = -3299690291498919306;

Attrib::Hash::physicsvehiclebaseattribs::YawDampingOnTakeOff = -1675471727477182158;

Attrib::ClassName::physicsvehiclebaseattribs = -604515486933319770;

Attrib::ClassName::physicsvehiclehandling = -7610765364513722643;

Attrib::ClassName::physicsvehicleboostattribs = -1522656162225671394;

Attrib::ClassName::physicsvehiclecollisionattribs = -2335842357891624052;

Attrib::ClassName::physicsvehicleengineattribs = -553898650669114478;

Attrib::ClassName::camerabumperbehaviour = -872580195161256039;

Attrib::ClassName::cameraexternalbehaviour = -1590435079418921852;

Attrib::ClassName::boostparamsasset = -2728788314741784660;

Attrib::ClassName::sparkeffect = -3821321658093367652;

CgsAttribSys::KF_LOG_WINDOW_WIDTH = [67, 160, 0, 0];

CgsAttribSys::KF_LOG_WINDOW_HEIGHT = [66, 112, 0, 0];

BrnPhysics::KF_DEFAULT_RACE_CAR_CACHE_SPHERE_SIZE = [64, 160, 0, 0];

BrnPhysics::KF_DEFAULT_TRAFFIC_CACHE_SPHERE_SIZE = [64, 160, 0, 0];

BrnPhysics::KF_DEFAULT_PROP_CACHE_SPHERE_SIZE = [64, 32, 0, 0];

BrnPhysics::KR_MIN_TIMESTEP_MULTIPLIER = [63, 128, 0, 0];

BrnPhysics::Verlet::KF_DEFAULT_BAR_MAX_DISPLACEMENT = [65, 32, 0, 0];

BrnPhysics::Verlet::KF_DEFAULT_BAR_DEFORMATION_THRESHOLD = [59, 163, 215, 10];

BrnPhysics::RWPhysicsTypeData::K_DEFAULT_JOINT_SWING_DISPLACEMENT_LIMIT = [68, 122, 0, 0];

BrnPhysics::RWPhysicsTypeData::K_DEFAULT_JOINT_TWIST_DISPLACEMENT_LIMIT = [68, 122, 0, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MIN = [70, 28, 64, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MAX = [71, 67, 80, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_RANGE = [71, 28, 64, 0];

BrnPhysics::Deformation::KE_PMP_DEFORMATION = 15;

BrnPhysics::Deformation::KF_DEFORMATION_MODEL_DATA_WHEEL_OFFSET = [61, 204, 204, 205];

BrnPhysics::Deformation::KF_JOINT_DETACH_THRESHOLD_MODIFIER = [64, 0, 0, 0];

BrnPhysics::Deformation::KF_JOINT_DETACH_THRESHOLD_MODIFIER_SQUARED = [64, 128, 0, 0];

BrnPhysics::Deformation::KF_PART_EXTRA_GRAVITY = [0, 0, 0, 0];

BrnPhysics::Deformation::KF_MIN_SWEPT_SPHERE_SPEED = [64, 192, 0, 0];

BrnPhysics::Deformation::KF_PART_DYNAMIC_FRICTION = [62, 153, 153, 154];

BrnPhysics::Deformation::KF_PART_STATIC_FRICTION = [62, 153, 153, 154];

BrnPhysics::Props::KI_PROP_FLAG_MASK = -67108864;

BrnPhysics::Props::KI_PROP_ANIM_MINSPEED = [192, 201, 22, 135];

BrnPhysics::Props::KI_PROP_ANIM_MAXSPEED = [64, 201, 22, 135];

BrnPhysics::Props::KI_PROP_MAX_ANGULARCONSTRAINT = [64, 201, 22, 135];

BrnPhysics::Props::KI_PROP_MIN_ANGULARCONSTRAINT = [0, 0, 0, 0];

BrnPhysics::Props::knZAngularRotation = -128;

BrnPhysics::Props::knNoAngularRotation = -64;

BrnPhysics::Props::knAngularRotationBits = -64;

BrnPhysics::Vehicle::kfVehicleDefaultAngularDrag = [55, 39, 197, 172];

BrnPhysics::Vehicle::kfVehicleDefaultLinearDrag = [55, 39, 197, 172];

BrnPhysics::Vehicle::kfVehicleDefaultMaxLinearDisplacement = [68, 250, 0, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxAngularDisplacement = [63, 0, 0, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxLinearVelocity = [71, 234, 96, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxAngularVelocity = [65, 240, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultAngularDrag = [0, 0, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultLinearDrag = [0, 0, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultMaxLinearDisplacement = [68, 250, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultMaxAngularDisplacement = [64, 160, 0, 0];

BrnPhysics::Vehicle::krMPS2MPH = [64, 15, 41, 247];

BrnPhysics::Vehicle::krMPH2MPS = [62, 228, 226, 109];

BrnPhysics::Vehicle::KF_STICK_AFTERTOUCH_MODIFIER = [62, 128, 0, 0];

BrnPhysics::Vehicle::KF_STUCK_IN_COLLISION_TEST_INTERVAL = [64, 160, 0, 0];

BrnPhysics::Vehicle::KF_AIR_RAM_SCALE_FACTOR = [66, 72, 0, 0];

BrnPhysics::Vehicle::KF_SLAM_MAGNITUDE = [65, 200, 0, 0];

BrnPhysics::Vehicle::KF_POST_PLAYER_TD_INVULNERABILITY_TIME = [64, 0, 0, 0];

BrnPhysics::Vehicle::KF_JOINT_ANGLE_BREAK_EXTENT = [63, 76, 204, 205];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_SIZE_X = [67, 150, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_SIZE_Y = [67, 97, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_BORDER_X = [65, 160, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_BORDER_Y = [65, 160, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_TEXT_SIZE = [65, 144, 0, 0];

BrnPhysics::Vehicle::KF_SHOWTIME_UNCAP_SPEED_LIMIT_TIME = [62, 153, 153, 154];

BrnAI::KX_SECTION_FLAG_AI_INTERSTATE_EXIT = -128;

BrnAI::KF_MAX_TURN_ANGLE = [62, 178, 184, 194];

BrnAI::KF_AVERAGE_TURN_ANGLE = [62, 50, 184, 194];

BrnAI::KF_AI_MAX_SPEED_MULTIPLIER = [63, 153, 153, 154];

BrnAI::KF_AI_MAX_BOOST_SPEED_MULTIPLIER = [63, 140, 204, 205];

BrnAI::KF_IN_FRONT_OF_PLAYER_DISTANCE = [66, 160, 0, 0];

BrnAI::KI_RACING_LINE_MAX_AVAILABLE_SECTIONS;

BrnAI::KF_HNG_CROSSPIECE_LENGTH = [64, 160, 0, 0];

BrnAI::KF_AI_VULNERABILITY_RADIUS_BEHIND = [65, 240, 0, 0];

BrnAI::KF_AI_PASSTHROUGH_RADIUS = [66, 200, 0, 0];

BrnAI::KE_AI_PERFMON_PAGE = 7;

BrnAI::KF_MAX_RACING_LINE_OFFSET_STEP = [64, 0, 0, 0];

BrnAI::KF_START_LINE_WHEEL_SPIN_GAS = [63, 128, 0, 0];

BrnAI::KF_RACE_START_NO_FIGHTING_TIME = [65, 32, 0, 0];

BrnAI::KF_MAX_TIME_IN_BAD_SECTION = [63, 128, 0, 0];

BrnAI::KF_RECALCULATE_ROUTE_SEPERATION_PLAYER = [66, 72, 0, 0];

BrnAI::KF_RECALCULATE_ROUTE_SEPERATION_AI = [67, 72, 0, 0];

BrnAI::KU_INVALID_PORTAL_INDEX = -1;

BrnAI::KF_MIN_ALTERNATIVE_ROUTE_TIME = [65, 32, 0, 0];

BrnAI::KF_ALTERNATIVE_ROUTE_INTERVAL = [64, 64, 0, 0];

BrnAI::KF_OUT_OF_RANGE_PERSONALITY_SPEED_MULTIPLIER = [63, 0, 0, 0];

BrnAI::KF_FRAMES_TO_RECALC_ROUTE = [66, 112, 0, 0];

BrnAI::KF_FREE_ROAM_CAR_PROXIMITY_TO_GOAL = [67, 150, 0, 0];

BrnAI::KF_FREE_ROAM_CHASE_DISTANCE_FAR = [68, 22, 0, 0];

BrnAI::KF_FREE_ROAM_CHASE_DISTANCE_CLOSE = [65, 240, 0, 0];

BrnAI::KF_FREE_ROAM_DRIVE_AWAY_DISTANCE = [68, 187, 128, 0];

BrnAI::KF_FREE_ROAM_ROUTE_REFRESH_DISTANCE = [67, 122, 0, 0];

BrnAI::KF_DECENT_SPEED_RATIO = [63, 12, 204, 205];

BrnAI::KF_DECENT_ROAD_RAGE_SPEED_RATIO = [63, 0, 0, 0];

BrnAI::KF_DECENT_PURSUIT_SPEED_RATIO = [63, 25, 153, 154];

BrnAI::KF_DECENT_MARKED_MAN_MIN_SPEED_RATIO = [0, 0, 0, 0];

BrnAI::KF_DECENT_MARKED_MAN_MAX_SPEED_RATIO = [62, 204, 204, 205];

BrnAI::KF_DECENT_SPEED_START_TIME = [65, 112, 0, 0];

BrnAI::KF_NEAR_FINISH_DISTANCE = [68, 122, 0, 0];

BrnAI::KF_DRIVING_PLAYER_SPEED_RATIO = [63, 51, 51, 51];

BrnAI::KF_BLOCKED_ROUTE_RETRY_DISTANCE = [66, 200, 0, 0];

BrnAI::KF_ROAD_RAGE_MIN_AGGRESSION = [0, 0, 0, 0];

BrnAI::KF_ROAD_RAGE_MAX_AGGRESSION = [63, 25, 153, 154];

BrnAI::KF_MAX_MEDALS_TO_UNLOCK_A_CAR = [67, 2, 0, 0];

BrnAI::KF_WRONG_WAY_TIME_TO_INVALIDATE_ROUTE = [64, 128, 0, 0];

BrnAI::KF_ROAD_RAGE_SPEED_DISTANCE = [65, 160, 0, 0];

BrnAI::KF_MIN_BRAKING_ANGLE = [63, 6, 10, 146];

BrnAI::KF_SIGNIFICANT_BRAKING_ANGLE = [63, 73, 15, 219];

BrnAI::KF_MAX_BRAKING_ANGLE = [63, 201, 15, 219];

BrnAI::KF_AI_MAX_BRAKING_SPEED_PROPORTION = [63, 128, 0, 0];

BrnAI::KF_AI_MIN_BRAKING_SPEED_PROPORTION = [63, 64, 0, 0];

BrnAI::K_PROXIMITY_CLOSE = [64, 128, 0, 0];

BrnAI::K_PROXIMITY_FAR = [65, 0, 0, 0];

BrnAI::K_MIN_HARD_SHOULDER = [63, 89, 153, 154];

BrnAI::K_MAX_HARD_SHOULDER = [63, 115, 51, 51];

BrnAI::KF_AI_HARD_SHOULDER_PROPORTION = [63, 64, 0, 0];

BrnAI::KF_BRAKING_ANGLE_RANGE = [63, 134, 10, 146];

BrnAI::KF_MAX_BOOSTING_ANGLE = [61, 122, 53, 221];

BrnAI::KF_DONUT_VARIATION = [62, 128, 0, 0];

BrnAI::K_ROAD_RAGE_SPREAD_HNG = [65, 200, 0, 0];

BrnAI::K_NORMAL_SPREAD_HNG = [66, 72, 0, 0];

BrnAI::K_LOOK_AHEAD_IN_DRIFT = [66, 32, 0, 0];

BrnAI::KF_BE_KIND_AFTER_CRASH_DELAY = [65, 0, 0, 0];

BrnAI::KF_BE_KIND_AFTER_AI_DRIVEN_DELAY = [64, 64, 0, 0];

BrnAI::KF_BRAKING_ANTICIPATION_TIME = [63, 192, 0, 0];

BrnAI::KF_BRAKING_MIN_LOOK_AHEAD_DIST = [65, 128, 0, 0];

BrnAI::KF_BRAKING_MAX_LOOK_AHEAD_DIST = [66, 150, 0, 0];

BrnAI::KF_AI_TIME_TO_START_TURNING = [64, 0, 0, 0];

BrnAI::KF_AI_TIME_FOR_BEING_STUCK = [64, 160, 0, 0];

BrnAI::KF_PLAYER_TIME_FOR_BEING_STUCK = [63, 64, 0, 0];

BrnAI::KF_MAX_DIST_SQUARED_FOR_AI_AVOIDANCE = [71, 28, 64, 0];

BrnAI::KF_ACCELERATION_START_DIFF = [0, 0, 0, 0];

BrnAI::KF_RACE_STUCK_FREE_TIME = [65, 32, 0, 0];

BrnAI::KF_MOVE_OFF_LINE_TIME = [63, 192, 0, 0];

BrnAI::KF_MIN_DISTANT_LOOK_AHEAD_FOR_DRIFT = [65, 32, 0, 0];

BrnAI::KF_MAX_DIST_SQUARED_FROM_PARAM_BEFORE_RESET = [67, 200, 0, 0];

BrnAI::KF_SLOW_TURN_DIRECTION_CHANGE_TIME = [64, 64, 0, 0];

BrnAI::KF_AI_STEERING_STEP = [63, 128, 0, 0];

BrnAI::KF_PLAYER_STEERING_STEP = [61, 204, 204, 205];

BrnAI::KF_PLAYER_ROLLING_START_STEERING_STEP = [60, 163, 215, 10];

BrnAI::KF_PLAYER_DRIVE_THRU_STEERING_STEP = [60, 245, 194, 143];

BrnAI::KF_PRE_AGGRESSION_DELAY = [64, 160, 0, 0];

BrnAI::KF_MINIMUM_BOOST_TIME = [64, 64, 0, 0];

BrnAI::KF_DANGEROUS_DRIVING_SCHEDULE_OFFSET = [64, 64, 0, 0];

BrnAI::KF_ROAD_RAGE_MIN_SLAM_RIVALS_DISTANCE = [65, 112, 0, 0];

BrnAI::KF_ROAD_RAGE_MAX_SLAM_RIVALS_DISTANCE = [66, 200, 0, 0];

BrnAI::KF_MIN_SPEED_MATCH_SPEED_RATIO = [63, 25, 153, 154];

BrnAI::KF_DISTANCE_AWAY_FROM_PLAYER_TO_ALLOW_SWERVING = [64, 160, 0, 0];

BrnAI::KF_CRASH_DISTANCE = [66, 72, 0, 0];

BrnAI::KF_SCHEDULE_CRASH_OFFSET = [0, 0, 0, 0];

BrnAI::KF_SCHEDULE_CRASH_FACTOR = [61, 204, 204, 205];

BrnAI::KF_RACE_START_SLAM_TIME = [66, 72, 0, 0];

BrnAI::KF_P = [63, 192, 0, 0];

BrnAI::KF_I = [0, 0, 0, 0];

BrnAI::KF_D = [63, 0, 0, 0];

BrnAI::KF_DRIFTP = [64, 0, 0, 0];

BrnAI::KF_DRIFTI = [0, 0, 0, 0];

BrnAI::KF_DRIFTD = [63, 128, 0, 0];

BrnAI::KF_QUICK_PRE_SLAM_STATE_TIME = [63, 128, 0, 0];

BrnAI::KF_SLAM_MAX_MOVE_TO_POSITION_TIME = [65, 64, 0, 0];

BrnAI::KF_SLAM_DROP_BACK_TIME = [65, 32, 0, 0];

BrnAI::KF_SLAM_TIME = [64, 32, 0, 0];

BrnAI::KF_SLAM_STEER_OUT_TIME = [62, 76, 204, 205];

BrnAI::KF_TIME_TO_TARGET_POS = [63, 192, 0, 0];

BrnAI::KF_POST_ATTACK_VEER_TIME = [63, 192, 0, 0];

BrnAI::KF_PASSIVELY_PASS_PLAYER_TIME = [65, 64, 0, 0];

BrnAI::KF_GROUP_TARGET_ACTIVE_TIME = [62, 128, 0, 0];

BrnAI::KF_CLOSE_SO_ALMOST_MATCH_SPEED = [66, 32, 0, 0];

BrnAI::KF_POST_SLAM_AHEAD_POSITION = [64, 0, 0, 0];

BrnAI::KF_SLOW_OVERTAKE_DURATION = [65, 0, 0, 0];

BrnAI::KF_BEHIND_OTHER_CAR = [64, 160, 0, 0];

BrnAI::KF_MAX_LATERAL_SLAM_DIST = [65, 240, 0, 0];

BrnAI::KF_OVERTAKE_M_AHEAD = [65, 160, 0, 0];

BrnAI::KF_OVERTAKE_AHEAD_IN_ROAD_RAGE = [64, 160, 0, 0];

BrnAI::KF_SLOW_OVERTAKE_M_AHEAD = [65, 64, 0, 0];

BrnAI::KF_FALLEN_BEHIND_DURING_SLOW_OVERTAKE = [192, 160, 0, 0];

BrnAI::KF_OVERTAKE_TO_SLAM_DISTANCE = [64, 128, 0, 0];

BrnAI::KF_SLAM_POST_SLAM_ACROSS_SEPARATION = [64, 192, 0, 0];

BrnAI::KF_SLOW_SPEED_MATCH_ACCELERATION = [64, 160, 0, 0];

BrnAI::KF_FAST_SPEED_MATCH_ACCELERATION = [65, 160, 0, 0];

BrnAI::KF_FAST_MOVE_TOWARDS_MATCHING = [66, 180, 0, 0];

BrnAI::KF_SLOW_MOVE_TOWARDS_MATCHING = [65, 32, 0, 0];

BrnAI::KF_SHIFT_TO_SLAM_BACK_OF_CAR = [192, 64, 0, 0];

BrnAI::KF_SPEEDMATCH_ACROSS_FROM_PLAYER = [65, 160, 0, 0];

BrnAI::KF_PRE_SLAM_ACROSS_DISTANCE = [64, 240, 0, 0];

BrnAI::KF_ATTACKING_AI_FALLEN_BEHIND = [192, 64, 0, 0];

BrnAI::KF_SLAM_LONGITUDINAL_OVERLAP_BEHIND = [192, 64, 0, 0];

BrnAI::KF_SLAM_LONGITUDINAL_OVERLAP_AHEAD = [64, 0, 0, 0];

BrnAI::KF_FODDER_POSITION = [64, 0, 0, 0];

BrnAI::KF_DROP_BACK_TO_SLAM_TIME = [65, 128, 0, 0];

BrnAI::KF_ALLOWABLE_TIME_BETWEEN_CONTACTS = [62, 128, 0, 0];

BrnAI::KF_VEER_CONTACT_TIME = [62, 76, 204, 205];

BrnAI::KF_VEER_EXTREME_CONTACT_TIME = [63, 128, 0, 0];

BrnAI::KF_TIME_TO_STAY_CLIPPING_OFF = [64, 64, 0, 0];

BrnAI::KF_FIGHT_AHEAD_OF_PLAYER = [65, 240, 0, 0];

BrnAI::KF_PASS_CLOSE_SEPARATION = [64, 128, 0, 0];

BrnAI::KF_MINIMUM_AGGRESSION_STEP = [61, 204, 204, 205];

BrnAI::KF_MAXIMUM_AGGRESSION_STEP = [63, 128, 0, 0];

BrnAI::KF_TOO_CLOSE_TO_BUZZ = [67, 72, 0, 0];

BrnAI::KF_POST_EVENT_BUZZ_TIME = [63, 128, 0, 0];

BrnAI::KF_POST_JUNK_YARD_BUZZ_TIME = [65, 112, 0, 0];

BrnAI::KF_START_FAR_AHEAD = [67, 72, 0, 0];

BrnAI::KF_START_FAR_BEHIND = [194, 112, 0, 0];

BrnAI::KF_TIME_IN_FREE_ROAM_TO_SLOW_RESETS = [68, 22, 0, 0];

BrnAI::KF_POST_BUZZ_GRACE_TIME = [65, 32, 0, 0];

BrnAI::KF_SHORT_RETRY_TIME = [65, 32, 0, 0];

BrnAI::KF_CLOSE_ENOUGH_TO_SEE_BUZZ = [65, 240, 0, 0];

BrnAI::KF_START_BEHIND_PROBABLITY = [63, 0, 0, 0];

BrnAI::KF_SIDE_TURNING_PROBABILITY = [63, 76, 204, 205];

BrnAI::KF_MIN_BUZZ_AFTER_AI_CONTROL = [64, 0, 0, 0];

BrnAI::KF_STRAIGHT_ANGLE = [67, 52, 0, 0];

BrnAI::KF_DEFAULT_CRUISE_SPEED = [66, 160, 0, 0];

BrnAI::KF_APROX_CAR_WIDTH = [64, 64, 0, 0];

BrnAI::K_UNKNOWN_ROAD_WIDTH = [65, 32, 0, 0];

BrnAI::KF_STEP_AHEAD_FOR_PERPENDICULAR = [61, 204, 204, 205];

BrnAI::KF_STEP_TO_PLAYER = [61, 204, 204, 205];

BrnAI::KF_SPREAD_DISTANCE = [66, 32, 0, 0];

BrnAI::KF_MINIMUM_STEP = [60, 0, 0, 0];

BrnAI::KF_HNG_MAP_APROX_RADIUS = [65, 240, 0, 0];

BrnAI::KF_MIN_CHANGE_IN_COEFFICIENT = [58, 131, 18, 111];

BrnAI::KF_MIN_TERM_TO_TUNE = [58, 131, 18, 111];

BrnAI::KF_RESET_SIDE_STEP = [65, 0, 0, 0];

BrnAI::KF_TOO_CLOSE_TO_SPAWN_IN_VIEW = [66, 200, 0, 0];

BrnAI::KF_MIN_RESET_DISTANCE_BEHIND = [193, 200, 0, 0];

BrnAI::KF_START_OUT_OF_RANGE = [68, 250, 0, 0];

BrnAI::KF_START_BEHIND_AT_FIRST_TIME = [64, 128, 0, 0];

BrnAI::KF_STEER_AT_LOW_SPEED = [63, 178, 184, 194];

BrnAI::KF_STEER_AT_HIGH_SPEED = [63, 0, 0, 0];

BrnAI::KF_LOOK_AHEAD_RADIUS_SLOW = [65, 32, 0, 0];

BrnAI::KF_LOOK_AHEAD_RADIUS_FAST = [65, 200, 0, 0];

BrnAI::KF_RISK_LERP = [63, 0, 0, 0];

BrnAI::KF_CLOSE_PASSING_RANGE = [64, 0, 0, 0];

BrnAI::KF_DESIRED_CLOSE_PASSING_SEPERATION = [64, 96, 0, 0];

BrnAI::kfDriftLookAhead = [66, 32, 0, 0];

BrnAI::KF_MIN_DISTANCE_BIAS_SEPARATION = [67, 200, 0, 0];

BrnAI::KF_MIN_DISTANCE_BIAS_PROPORTION = [63, 192, 0, 0];

BrnAI::BrnAIDebugUtils::KF_BLINE_HALF_HEIGHT = [65, 160, 0, 0];

BrnParticle::kfNumberOfSecondsInTenYears = [77, 150, 96, 24];

BrnTraffic::KU_INVALID_SECTION = -1;

BrnTraffic::KU_INVALID_HULL = -1;

BrnTraffic::KU_INVALID_NEIGHBOUR = -1;

BrnTraffic::KU_INVALID_STOPLINE = -1;

BrnTraffic::KU_INVALID_FLOWTYPE = -1;

BrnTraffic::KU_INVALID_KILLZONEREGION = -1;

BrnTraffic::KU_INVALID_TRAFFIC_LIGHT_TRIGGER = -1;

BrnTraffic::KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE = [69, 204, 204, 0];

BrnTraffic::KU_INVALID_HULL_RUNTIME = -1;

BrnTraffic::KU_INVALID_UPDATE_FRAME = -1;

BrnTraffic::KF_UPDATE_TIME_DELTA_NO_SLOWMO = [61, 204, 204, 205];

BrnTraffic::KF_SECONDS_PER_MINUTE = [66, 112, 0, 0];

BrnTraffic::KF_HULL_CHANGE_PREDICTION_TIME = [64, 160, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_FEELERS_ANGLE = [62, 134, 10, 146];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_MAX = [64, 128, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_SCORE_FACTOR = [65, 32, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_PASSING_MAX_DISTANCE = [65, 32, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_HEIGHT_SKIP = [64, 64, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_MAX_RADIUS = [66, 112, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_SCORE_NEEDS_ACTION = [66, 130, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_ONLINE_SCORE_NEEDS_ACTION = [67, 72, 0, 0];

BrnTraffic::KF_DENSITY_BASE_SCALE = [63, 128, 0, 0];

BrnTraffic::KF_VEHICLE_BBOX_FATNESS = [62, 225, 71, 174];

BrnTraffic::KF_VEHICLE_COLLIDABILITY_RADIUS = [65, 160, 0, 0];

BrnTraffic::KF_VEHICLE_PARTIAL_UPDATE_DISTANCE = [67, 22, 0, 0];

BrnTraffic::KF_GENERATOR_PHASE_SHIFT = [63, 51, 51, 51];

BrnTraffic::KF_MIN_GENERATION_FACTOR = [63, 76, 204, 205];

BrnTraffic::KF_MAX_GENERATION_FACTOR = [63, 153, 153, 154];

BrnTraffic::KF_MAX_DIST_ACROSS_LANE_lhs = [63, 51, 51, 51];

BrnTraffic::KF_PARAM_END_OF_SECTION_APPROACH_DIST = [66, 160, 0, 0];

BrnTraffic::KF_PARAM_AVOIDANCE_BIAS = [64, 64, 0, 0];

BrnTraffic::KF_PARAM_SPACE_FACTOR = [64, 64, 0, 0];

BrnTraffic::KF_PARAM_NEXT_PARAM_TIME_THRESHOLD = [64, 0, 0, 0];

BrnTraffic::KF_PARAM_MIN_NEXT_PARAM_DIST_THRESHOLD = [65, 200, 0, 0];

BrnTraffic::KF_PARAM_MAX_ACCEL_FORCE = [62, 117, 194, 143];

BrnTraffic::KF_PARAM_MIN_MERGE_DISTANCE = [65, 96, 0, 0];

BrnTraffic::KF_PARAM_MIN_SPAWN_DISTANCE = [65, 160, 0, 0];

BrnTraffic::KF_PARAM_MIN_SPEED_FOR_STOPPED_AT_LIGHTS = [64, 160, 0, 0];

BrnTraffic::KF_PARAM_MIN_DIST_AHEAD_FOR_LANE_CHANGE = [65, 112, 0, 0];

BrnTraffic::KF_PARAM_MIN_DIST_BEHIND_FOR_LANE_CHANGE = [65, 160, 0, 0];

BrnTraffic::KF_PARAM_IMPATIENCE_PROB = [62, 153, 153, 154];

BrnTraffic::KF_PARAM_MIN_SWERVE_FOR_ANNOYANCE = [63, 0, 0, 0];

BrnTraffic::KF_PARAM_FLASH_LIGHTS_PROB = [63, 25, 153, 154];

BrnTraffic::KF_PARAM_BEEP_HORN_PROB = [63, 76, 204, 205];

BrnTraffic::KF_PARAM_BEEP_HORN_PROB_PANICKING = [63, 51, 51, 51];

BrnTraffic::KF_SPONTANEOUS_CONE_DEPTH_lhs = [65, 240, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_HALF_ANGLE_lhs = [65, 32, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_DEPTH_lhs = [66, 72, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_HALF_ANGLE_lhs = [65, 160, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_DEPTH_lhs = [66, 72, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_HALF_ANGLE_lhs = [64, 32, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_BRAKING_FACTOR = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_OPTIMAL_DISTANCE_FROM_TARGET_lhs = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_SPEED_BALANCE_FACTOR_lhs = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_START_DISTANCE_FROM_TARGET = [64, 64, 0, 0];

BrnTraffic::KF_VEHICLE_SLOW_FOR_PARAM_SPEED_FACTOR_lhs = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_STEERING_DELTA_lhs = [60, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_STEERING_ANGLE_lhs = [65, 200, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_SWERVE_COS_ANGLE = [63, 0, 0, 0];

BrnTraffic::KF_VEHICLE_DIRECTION_DAMPING_FACTOR_lhs = [64, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SWERVE_DISTANCE = [66, 112, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_SPONTANEOUS_CRASH_SPEED = [65, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SIDEWAYS_SWERVE_DISTANCE = [64, 192, 0, 0];

BrnTraffic::KF_VEHICLE_SAME_WAY_SWERVE_FACTOR = [62, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_INDICATOR_FLASH_TIME = [62, 76, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_INDICATOR_FLASH_TIME = [62, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MIN_HEADLIGHT_FLASH_TIME = [62, 25, 153, 154];

BrnTraffic::KF_VEHICLE_MAX_HEADLIGHT_FLASH_TIME = [62, 204, 204, 205];

BrnTraffic::KI_VEHICLE_MIN_BRAKELIGHT_DEBOUNCE = -6;

BrnTraffic::KF_VEHICLE_REACT_TO_PLAYER_CONE_BACK_BIAS = [64, 192, 0, 0];

BrnTraffic::KF_VEHICLE_REACT_TO_PLAYER_CONE_LENGTH = [66, 152, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_REACT_TO_PLAYER_SPEED = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DISTANCE_TO_MOVE_lhs = [62, 204, 204, 205];

BrnTraffic::KF_VEHICLE_STOPLINE_SIDE_SPACE_lhs = [63, 102, 102, 102];

BrnTraffic::KF_VEHICLE_STOPLINE_SIDE_VARIATION_lhs = [62, 128, 0, 0];

BrnTraffic::KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT = [65, 112, 0, 0];

BrnTraffic::KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT_SHOWTIME = [66, 32, 0, 0];

BrnTraffic::KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_SCALE = [61, 143, 92, 41];

BrnTraffic::KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_DECAY = [63, 51, 51, 51];

BrnTraffic::KF_VEHICLE_PHYSICAL_STEERING_SCALE = [63, 128, 0, 0];

BrnTraffic::KF_VEHICLE_PHYSICAL_STEERING_IF_RISK = [63, 166, 102, 102];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_SLAM_RECOVERY = [63, 192, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_COS_ANGLE_FOR_SLAM_RECOVERY = [63, 122, 225, 72];

BrnTraffic::KF_VEHICLE_MAX_DIST_TO_RECOVER_FROM_SLAM = [65, 240, 0, 0];

BrnTraffic::KF_VEHICLE_FLIPOUT_AND_SPINOUT_AIRRAMMAG_SCALE = [63, 25, 153, 154];

BrnTraffic::KF_VEHICLE_TIME_TO_STEER_FROM_SLAM = [64, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_TIME_FOR_RECOVERY = [64, 160, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_CLEANUP = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_TIME_FOR_REINSERTION = [65, 112, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_REINSERTION = [65, 32, 0, 0];

BrnTraffic::KF_VEHICLE_ROLL_FACTOR_lhs = [189, 204, 204, 205];

BrnTraffic::KF_VEHICLE_ROLL_FILTER_lhs = [67, 180, 0, 0];

BrnTraffic::KF_VEHICLE_PITCH_RECIP_MAX_DECEL_lhs = [62, 76, 204, 205];

BrnTraffic::KF_VEHICLE_PITCH_SCALE_lhs = [61, 76, 204, 205];

BrnTraffic::KF_VEHICLE_PITCH_DAMPING_FACTOR_lhs = [63, 115, 51, 51];

BrnTraffic::KF_APPROX_LANE_WIDTH_lhs = [64, 144, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_DIST_FROM_LANE_CENTRE_lhs = [63, 166, 102, 102];

BrnTraffic::KF_RIVAL_MAX_DIST_TO_LANE = [65, 112, 0, 0];

BrnTraffic::KF_RIVAL_MIN_COS_ANGLE_TO_LANE_DIR = [63, 76, 204, 205];

BrnTraffic::KF_VEHICLE_TIME_FOR_NEW_SWERVE = [63, 0, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_CHANGE_SWERVE_DIRECTION_TIME = [61, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_CHANGE_SWERVE_DIRECTION_TIME = [63, 128, 0, 0];

BrnTraffic::KF_BULB_WARMTH_DELTA_PER_SECOND = [69, 156, 64, 0];

BrnTraffic::KF_STOP_LINE_REACTION_DISTANCE = [66, 32, 0, 0];

BrnTraffic::KF_LANE_CHANGE_DICE_ROLL_SCALE = [64, 160, 0, 0];

BrnTraffic::KF_RENDER_CULL_DISTANCE = [67, 122, 0, 0];

BrnTraffic::KF_RENDER_CULL_CORONA_DISTANCE = [67, 250, 0, 0];

BrnTraffic::KF_CORONA_SCALE_DIST_AT_ONE = [65, 0, 0, 0];

BrnTraffic::KF_CORONA_SCALE_DIST_AT_TWO = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SWERVE_DISTANCE_SQ = [69, 97, 0, 0];

BrnTraffic::KF_RENDER_CULL_DISTANCE_SQ = [71, 116, 36, 0];

BrnTraffic::KF_RENDER_CULL_CORONA_DISTANCE_SQ = [72, 116, 36, 0];

BrnTraffic::KF_VEHICLE_PARTIAL_UPDATE_DISTANCE_SQ = [70, 175, 200, 0];

BrnTraffic::KF_VEHICLE_AVOIDABILITY_RADIUS = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_DEFAULT = [63, 0, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_THRESHOLD = [63, 128, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_DEFAULT = [63, 76, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_EVENTS = [62, 76, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_EVENTS = [63, 192, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_TRAFFIC = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_RACECAR = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_PLAYER = [66, 200, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_RANGE_MIN = [65, 32, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_RANGE_MAX = [66, 200, 0, 0];

BrnTraffic::KF_CRASHSLIDER_HOLLYWOOD_ACTION_THRESHOLD = [60, 35, 215, 10];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME = [61, 204, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME = [63, 192, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME_SPIKE = [0, 0, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME_SPIKE = [65, 32, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MIN = [65, 240, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MAX = [66, 52, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_TIME_AFTER_SPIKE_RELEVEL = [64, 160, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_SPIKE_AFTER_MISBOUNCE_TIME = [64, 64, 0, 0];

BrnTraffic::KF_VEHICLE_NOT_DRIVING_SO_SHOULD_GET_CLEARED_TIME = [65, 32, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_MIN_THRESHOLD_TO_WHACK = [63, 128, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_WHACK_HIM_CHANCE = [64, 160, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_WHACK_HIM_TIMER = [64, 160, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_CLEAR_TRAFFIC_TIME = [65, 240, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_HEIGHT = [68, 122, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS_IN_DRIVE_THRU = [67, 122, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP = [66, 180, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP_MIN_DISTSQ = [70, 28, 64, 0];

BrnTraffic::KE_TRAFFIC_PERFMON_PAGE = 2;

BrnProgression::KF_PLAYER_BOOST_THRESHOLD = [65, 160, 0, 0];

BrnProgression::KF_PLAYERSTAT_OVERDRIVE_EARNER = [67, 250, 0, 0];

BrnProgression::KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX = [66, 112, 0, 0];

BrnProgression::KF_PLAYER_STAT_TEMPORARY_ACCELERATOR = [65, 32, 0, 0];

BrnProgression::KE_GAMESTATE_PERFMON_PAGE = 5;

BrnWorld::KI_INVALID_OPPONENT = -1;

BrnWorld::KI_INVALID_RIVAL = -1;

BrnWorld::KF_AI_INACTIVE_DISTANCE_BIAS = [65, 240, 0, 0];

BrnWorld::KF_INVALID_DISTANCE = [127, 127, 255, 255];

BrnWorld::KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME = [64, 0, 0, 0];

BrnWorld::KI_INVALID_CAR_COLOUR = -1;

BrnWorld::KI_INVALID_CAR_COLOUR_PALETTE = -1;

BrnWorld::KE_RACEECAR_PERFMON_PAGE = 12;

BrnWorld::KF_MIN_SPEED_FOR_AIR_MPH = [64, 0, 0, 0];

BrnWorld::KU_COLLISION_MASK_TOP_BIT = -32768;

BrnWorld::KF_POWER_PARK_NEARBY_RADIUS = [65, 112, 0, 0];

BrnWorld::KF_BLUESTWOS_FLASH_DURATION = [63, 128, 0, 0];

BrnWorld::KF_BLUESTWOS_FLASH_HALF_DURATION = [63, 0, 0, 0];

BrnWorld::KF_BLUESTWOS_ONE_OVER_FLASH_DURATION = [63, 128, 0, 0];

BrnWorld::KF_BLUESTWOS_FLASH_TIMEOUT = [61, 204, 204, 205];

BrnWorld::KF_EVENT_START_RESET_DEFER_TIME = [62, 25, 153, 154];

BrnWorld::KF_BOOST_EFFECT_LOSS_MAX = [64, 0, 0, 0];

BrnWorld::KF_BOOST_EFFECT_LOSS_MIN = [63, 128, 0, 0];

BrnWorld::KF_MIN_BOOST_BEFORE_USE = [62, 25, 153, 154];

BrnWorld::KF_MIN_BOOST_BEFORE_BOUNCE = [60, 35, 215, 10];

BrnWorld::KF_MIN_SPIN_ANGLE = [66, 52, 0, 0];

BrnWorld::KF_BOUNCE_BOOST_FLASH_BAR_TIME = [63, 25, 153, 154];

BrnWorld::KF_MIN_BOOST_TIME = [63, 160, 0, 0];

BrnWorld::KF_MIN_AIR_TIME_FOR_BOOST = [63, 0, 0, 0];

BrnWorld::KF_INFORMATION_REMEMBER_TIME_GENERAL = [63, 0, 0, 0];

BrnWorld::KF_INFORMATION_REMEMBER_TIME_TAKEDOWNS = [65, 32, 0, 0];

BrnWorld::KF_MAX_BOOST = [66, 200, 0, 0];

BrnWorld::KF_PLAYER_NETWORK_CAR_RESET_SECONDS = [64, 160, 0, 0];

BrnWorld::KF_PLANE_SEGMENT_TRIGGER_DEPTH = [60, 35, 215, 10];

BrnNetwork::KF_NETWORK_TIME_ACCURACY = [58, 218, 116, 14];

BrnNetwork::KF_NETWORK_DISTANCE_ACCURACY = [59, 163, 215, 10];

BrnNetwork::KU16_INVALID_FRAME = -1;

BrnStreetData::KI_INTERSTATE_EXIT_ROAD_INDEX = -2;

BrnGameState::KF_OUT_OF_RANGE_TO_LOSE_TIME = [65, 160, 0, 0];

BrnGameState::KF_DONT_SHOW_RIVAL = [191, 128, 0, 0];

BrnGameState::KF_NO_INPUT_TIME_FOR_MODE_EXIT = [64, 128, 0, 0];

BrnGameState::KF_STATIONARY_TIME_FOR_MODE_EXIT = [64, 64, 0, 0];

BrnGameState::KF_MAX_STATIONARY_TIME_FOR_MODE_EXIT = [65, 32, 0, 0];

BrnGameState::KF_PURSUIT_INTRO_TIME = [63, 128, 0, 0];

BrnGameState::KE_GAMESTATE_PERFMON_PAGE = 5;

BrnGameState::GameStateModuleIO::KF_RACE_START_PRESSED_VALUE = [62, 128, 0, 0];

CgsNetwork::K_INVALID_PLAYER_ID = -1;

CgsNetwork::KU16_MAX_FRAMES = -2;

CgsNetwork::KU8_INVALID_GAME_ID = -1;

CgsNetwork::KI8_INVALID_TYPE = -1;

CgsNetwork::KU16_INVALID_FRAME = -1;

CgsNetwork::KU16_HALF_OF_FRAMES = -32768;

CgsNetwork::KU_INVALID_FRAME = -1;

CgsNetwork::KU_HALF_OF_FRAMES = -2147483648;

CgsNetwork::KI_MAX_UINT32 = -1;

CgsNetwork::KI_MIN_INT32 = -2147483648;

CgsNetwork::KI_MIN_PLAYER_ID = -1;

CgsNetwork::KF_DEFAULT_MIN_TIME = [0, 0, 0, 0];

CgsNetwork::KF_DEFAULT_MAX_TIME = [72, 125, 32, 0];

CgsNetwork::KF_DEFAULT_MAX_TIME_ERROR = [60, 163, 215, 10];

CgsNetwork::KE_ACK_OR_NACK;

CgsNetwork::KE_HEADER = 41;

CgsNetwork::KE_ALL_MESSAGE_TYPES = 42;

CgsNetwork::KF_ONLINE_TIME_DIFFERENCE_TOLERANCE = [61, 76, 204, 205];

CgsContainers::kxDictFlag_DuplicateDataReference = -2147483648;

CgsContainers::KI_DICTIONARY_INVALID_KEY = -1;

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

CgsDev::DebugUI::KF_OFFSET_TO_MIN_MAX = [63, 0, 0, 0];

CgsDev::WarningSystem::Discipline::ALL = -1;

CgsDev::WarningSystem::Discipline::SOUND_DESIGN = -2147483648;

CgsDev::WarningSystem::Discipline::SOUND_ALL = -2147483648;

CgsDev::Message::ALL = -1;

EA::Thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

EA::Thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

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

rw::math::fpu::E = [64, 45, 248, 84];

rw::math::fpu::TWO_PI = [64, 201, 15, 219];

rw::math::fpu::HALF_PI = [63, 201, 15, 219];

rw::math::fpu::QUARTER_PI = [63, 73, 15, 219];

rw::math::fpu::SQRT_PI = [63, 226, 223, 197];

rw::math::fpu::INV_PI = [62, 162, 249, 131];

rw::math::fpu::SQRT_2 = [63, 181, 4, 243];

rw::math::fpu::SQRT_HALF = [63, 53, 4, 243];

rw::math::fpu::SQRT_3 = [63, 221, 179, 215];

rw::math::fpu::ZERO_FLOAT = [0, 0, 0, 0];

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

BrnAI::AIDebugComponent::KI_NUM_SECTIONS_DISPLAYED;

