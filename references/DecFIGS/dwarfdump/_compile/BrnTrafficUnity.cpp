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

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::Set(uint32_t  luOwner, uint32_t  luEntityIndex, uint32_t  luPartIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::Set(None, None, None, None) {
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

void BrnTraffic::GetVehicleSpecies(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::GetVehicleSpecies(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Hull::GetSection(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Hull::GetSection(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BaseTrafficJobParams::Construct(BrnTraffic::JobProcess  leProcess, DebugRenderStreamReader *  lpDebugStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::UpdateVehiclesJobParams::Construct(uint32_t  luBeginVehicle, uint32_t  luEndVehicle, BrnTraffic::Hull **  lpapHulls, uint16_t  luNumHulls, const BrnTraffic::Param *  lpaParams, const ParamTransform *  lpaParamTransforms, Vehicle *  lpaVehicles, Matrix44Affine *  lpaVehicleTransforms, VehicleAxles *  lpaVehicleAxles, const VehicleTypeRuntime *  lpaVehicleRuntimeData, const RaceCarStateData *  lpRaceCarState, float32_t  lfSimTimeStep, float32_t  lfSimTimeSinceLastDecision, const Random *  lpEffectRand, EActiveRaceCarIndex  leActiveRaceCarIndex, bool  lbGameModeAllowsHardcoreSwerving, bool  lbGameModeAllowsSwerving, bool  lbDEBUGStopTrafficMoving, const rw::math::vpu::Vector3  lBehaviourCentre, float32_t  lfCrashSliderFinalValue, DebugRenderStreamReader *  lpDebugStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BaseTrafficJobParams::Construct(/* parameters */);
}

void BrnTraffic::TrafficEntityModule::IsDecisionFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::IsDecisionFrame(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetParam(uint32_t  luParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetParam(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetVehicle(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetVehicle(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsModule::EventReceiverQueue<4096,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:294
		int32_t liAlignRem;

	}
}

void BrnTraffic::TrafficEntityModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<4096,16>::Destruct(/* parameters */);
}

void BrnTraffic::TrafficEntityModule::EnterRunningState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::EnterTearingDownState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<uint16_t,72u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<uint16_t,72u>::GetLength(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<uint16_t,72u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<uint16_t,72u>::GetItem(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::_CompareRenderInfos(const const VehicleRenderInfo &  lRenderInfo0, const const VehicleRenderInfo &  lRenderInfo1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::DebugMemoryInit(BrnTraffic::TrafficEntityModule *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<uint16_t,72u>::Find(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSet.h:308
		uint32_t luElement;

	}
}

void CgsContainers::Set<uint16_t,72u>::Contains(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		(None)unknown_arg
		{
		}
	}
}

void CgsContainers::Set<uint16_t,72u>::Contains(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Set<uint16_t,72u>::Find(/* parameters */);
}

void BrnTraffic::TrafficEntityModule::GetVehicleTransform(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		(None)unknown_arg
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
}

void BrnTraffic::TrafficEntityModule::GetVehicleTransform(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
}

void BrnTraffic::Logger::SetAllowDivergentBehaviour(bool  lbAllowDivergentBehaviour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTriggerId::SetInvalid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::TriggerId::SetIndex(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector3_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::ResetEventData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:9585
		int32_t liIndex;

		LightTriggerId::SetInvalid(/* parameters */);
		Logger::SetAllowDivergentBehaviour(/* parameters */);
		rw::math::vpu::GetVector3_Zero(/* parameters */);
	}
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

void BrnTraffic::ParamTransform::Update(const rw::math::vpu::Vector3  lPos, const rw::math::vpu::Vector3  lDir, const rw::math::vpu::Vector3  lRight, const VecFloat  lfSpeed, const VecFloat  lfAcceleration) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
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

void BrnTraffic::ParamTransform::GetDeterministicPos() {
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

void BrnTraffic::ParamTransform::GetDeterministicPos(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnTraffic::ParamTransform::GetDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
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
	}
}

void BrnTraffic::ParamTransform::GetDirection(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisW>(VecFloatRef<VectorAxisW> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1573
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1574
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void rw::math::vpu::operator+(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1248
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::GetVecFloat_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Max<rw::math::vpu::VecFloat>(const const VecFloat &  a, const const VecFloat &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:149
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:393
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::ParamTransform::UpdateLerpedPosition(const VecFloat  lfSimTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficParam.h:639
		Vector3 lOldPos;

		// BrnTrafficParam.h:640
		VecFloat lfOldSpeed;

		// BrnTrafficParam.h:641
		VecFloat lfNewSpeed0;

		// BrnTrafficParam.h:642
		VecFloat lfNewSpeed;

		// BrnTrafficParam.h:643
		Vector3 lNewPos;

	}
	rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator*<VectorAxisW>(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void rw::math::fpu::Vector2Template<float>::Vector2Template(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::GetVector2_OneTemplate<float>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Vector2Template<float>::Vector2Template(/* parameters */);
}

void rw::math::fpu::GetVector2_ZeroTemplate<float>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Vector2Template<float>::Vector2Template(/* parameters */);
}

void BrnTraffic::Vehicle::IsAlive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::GetVehicleType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
}

void BrnTraffic::Vehicle::GetVehicleType(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::GetCurrentManoeuvre() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
}

void BrnTraffic::Vehicle::GetCurrentManoeuvre(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::AllowDivergentBehaviour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::HandleStopModeAction(const InputBuffer_PostPhysics *  lpInput, const StopModeAction *  lpStopModeAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsOfStandardSpecies() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::GetTrailerIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
}

void BrnTraffic::Vehicle::GetTrailerIndex(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsOfTrailerSpecies() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::GetCabIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
}

void BrnTraffic::Vehicle::GetCabIndex(None) {
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

void BrnTraffic::TrafficEntityModule::PrecalculateAvoidanceFeelerData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:17697
		int32_t liIndex;

		// BrnTrafficEntityModule.cpp:17698
		float32_t lfAngle;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Vector2::Set(/* parameters */);
		rw::math::vpu::Cos(/* parameters */);
		vec_sel(/* parameters */);
		vec_add(/* parameters */);
		vec_cts(/* parameters */);
		rw::math::vpu::Sin(/* parameters */);
		vec_ctf(/* parameters */);
		vec_and(/* parameters */);
		vec_add(/* parameters */);
		vec_and(/* parameters */);
		vec_and(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_nmsub(/* parameters */);
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
	}
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

void rw::BaseResources<3u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::operator==<3u>(const const BaseResources<3u> &  lhs, const const BaseResources<3u> &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:503
		uint32_t i;

	}
}

void BrnTraffic::TrafficEntityModule::IsPlayingOnlineGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::IsPlayingShowtimeGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::EnterStartingUpState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Logger::SetAllowDivergentBehaviour(/* parameters */);
}

void rw::math::vpu::operator/(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::EntityId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::VolumeInstanceId(uint64_t  lId) {
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

void CgsResource::ResourceHandle::ResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::RGBA(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
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

void rw::math::fpu::Cos(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::cosf(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1394
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator*(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1539
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnPhysics::ContactId::ContactId(uint32_t  luId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneQueryId::operator uint32_t() {
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
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::EntityId::EntityId(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	CgsSceneManager::VolumeInstanceId::VolumeInstanceId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsPhysics::RigidBodyId::RigidBodyId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	CgsSceneManager::VolumeId::VolumeId(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::JointId::JointId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::DriveId::DriveId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	BrnPhysics::ContactId::ContactId(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
}

void CgsNumeric::Random::RandomFloat(float_t  lfMin, float_t  lfMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsNumeric::Random::RandomUInt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:273
		uint32_t luResult;

	}
}

void CgsNumeric::Random::ConvertUnsignedFixed32ToFloatRepresentation(uint32_t  lu32Random) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:230
		const uint32_t KU_IEEE_754_REPRESENTATION_FLOAT_ONE;

	}
}

void rw::math::fpu::Lerp<float>(float  a, float  b, float  t) {
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

void BrnTraffic::TrafficEntityModule::UpdateCrashSlider() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNumeric::Random::RandomFloat(/* parameters */);
	CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
}

void CgsModule::EventQueue<BrnTraffic::DetachedPartRenderEvent,20>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::DetachedPartRenderEvent>::Construct(DetachedPartRenderEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::DetachedPartRenderEvent>::SetEventPointer(DetachedPartRenderEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::DetachedPartRenderEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventReceiverQueue<4096,16>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<25u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<4096,16>::Release(/* parameters */);
	CgsContainers::BitArray<25u>::UnSetAll(/* parameters */);
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

void std::_Unguarded_partition<uint16_t*>(uint16_t *  _First, uint16_t *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1899
		uint16_t * _Mid;

		// algorithm:1901
		uint16_t * _Pfirst;

		// algorithm:1902
		uint16_t * _Plast;

		// algorithm:1913
		uint16_t * _Gfirst;

		// algorithm:1914
		uint16_t * _Glast;

	}
}

void std::_Median<uint16_t*>(uint16_t *  _First, uint16_t *  _Mid, uint16_t *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1886
		int _Step;

	}
}

void std::_Med3<uint16_t*>(uint16_t *  _First, uint16_t *  _Mid, uint16_t *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::iter_swap<uint16_t*, uint16_t*>(uint16_t *  _Left, uint16_t *  _Right) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::swap<short unsigned int>(const short unsigned int &  _Left, const short unsigned int &  _Right) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// utility:11
		short unsigned int _Tmp;

	}
}

void std::pair<uint16_t*,uint16_t*>::pair(const uint16_t *const&  _Val1, const uint16_t *const&  _Val2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::make_heap<uint16_t*>(uint16_t *  _First, uint16_t *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Dist_type<uint16_t*>(uint16_t *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Val_type<uint16_t*>(uint16_t *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Make_heap<uint16_t*, std::ptrdiff_t, uint16_t>(uint16_t *  _First, uint16_t *  _Last, ptrdiff_t *, uint16_t *) {
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

void std::_Adjust_heap<uint16_t*, int, short unsigned int>(uint16_t *  _First, int  _Hole, int  _Bottom, short unsigned int  _Val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1176
		int _Top;

		// algorithm:1177
		int _Idx;

	}
}

void std::_Push_heap<uint16_t*, int, short unsigned int>(uint16_t *  _First, int  _Hole, int  _Top, short unsigned int  _Val) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1082
		int _Idx;

	}
}

void std::sort_heap<uint16_t*>(uint16_t *  _First, uint16_t *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::pop_heap<uint16_t*>(uint16_t *  _First, uint16_t *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Pop_heap_0<uint16_t*, uint16_t>(uint16_t *  _First, uint16_t *  _Last, uint16_t *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Pop_heap<uint16_t*, std::ptrdiff_t, short unsigned int>(uint16_t *  _First, uint16_t *  _Last, uint16_t *  _Dest, short unsigned int  _Val, ptrdiff_t *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Insertion_sort<uint16_t*>(uint16_t *  _First, uint16_t *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1851
		uint16_t * _Next;

		{
			// algorithm:1854
			uint16_t * _Next1;

		}
		{
			// algorithm:1859
			uint16_t * _Dest;

			{
				// algorithm:1860
				uint16_t * _Dest0;

			}
			{
				// algorithm:1864
				uint16_t * _Next1;

			}
		}
	}
}

void std::rotate<uint16_t*>(uint16_t *  _First, uint16_t *  _Mid, uint16_t *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Iter_cat<uint16_t*>(const uint16_t *const&) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xutility:396
	random_access_iterator_tag _Cat;

	{
		// xutility:396
		random_access_iterator_tag _Cat;

	}
}

void std::_Rotate<uint16_t*>(uint16_t *  _First, uint16_t *  _Mid, uint16_t *  _Last, random_access_iterator_tag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Rotate<uint16_t*, std::ptrdiff_t, uint16_t>(uint16_t *  _First, uint16_t *  _Mid, uint16_t *  _Last, ptrdiff_t *, uint16_t *) {
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
			uint16_t * _Hole;

			// algorithm:858
			uint16_t * _Next;

			// algorithm:859
			uint16_t _Holeval;

			// algorithm:860
			uint16_t * _Next1;

		}
	}
}

void std::_Sort<uint16_t*, int>(uint16_t *  _First, uint16_t *  _Last, int  _Ideal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1957
		int _Count;

		{
			// algorithm:1960
			pair<uint16_t*,uint16_t*> _Mid;

			_Unguarded_partition<uint16_t*>(/* parameters */);
		}
		_Insertion_sort<uint16_t*>(/* parameters */);
	}
	_Med3<uint16_t*>(/* parameters */);
	iter_swap<uint16_t*, uint16_t*>(/* parameters */);
	make_heap<uint16_t*>(/* parameters */);
	sort_heap<uint16_t*>(/* parameters */);
	{
	}
	{
		{
		}
	}
	{
	}
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

void BrnTraffic::Vehicle::IsAlarmOn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::SetHeadlightsFlashed(bool  lbOn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::SetLeftIndicatorOn(bool  lbOn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::SetRightIndicatorOn(bool  lbOn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::SetHornOn(bool  lbOn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::SetAlarmOn(bool  lbOn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsAlarmOn(/* parameters */);
	SetHeadlightsFlashed(/* parameters */);
	SetHeadlightsFlashed(/* parameters */);
	SetLeftIndicatorOn(/* parameters */);
	SetRightIndicatorOn(/* parameters */);
	SetHornOn(/* parameters */);
}

void BrnTraffic::Hull::GetNeighbour(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateParams_UpdateNeighbours(Param *  lpParam, const Section *  lpSection, const BrnTraffic::Hull *  lpHull) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:10207
		uint32_t luSide;

		// BrnTrafficEntityModule.cpp:10208
		uint32_t luRung;

	}
	{
		// BrnTrafficEntityModule.cpp:10232
		const Neighbour * lpNeighbour;

	}
	Hull::GetNeighbour(/* parameters */);
}

void std::_Median<BrnTraffic::VehicleRenderInfo*, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(VehicleRenderInfo *  _First, VehicleRenderInfo *  _Mid, VehicleRenderInfo *  _Last, bool (*)(const VehicleRenderInfo &, const VehicleRenderInfo &)  _Pred) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:2029
		int _Step;

	}
}

void std::_Med3<BrnTraffic::VehicleRenderInfo*, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(VehicleRenderInfo *  _First, VehicleRenderInfo *  _Mid, VehicleRenderInfo *  _Last, bool (*)(const VehicleRenderInfo &, const VehicleRenderInfo &)  _Pred) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::iter_swap<BrnTraffic::VehicleRenderInfo*, BrnTraffic::VehicleRenderInfo*>(VehicleRenderInfo *  _Left, VehicleRenderInfo *  _Right) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::swap<BrnTraffic::VehicleRenderInfo>(const VehicleRenderInfo &  _Left, const VehicleRenderInfo &  _Right) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// utility:11
		VehicleRenderInfo _Tmp;

	}
}

void std::pair<BrnTraffic::VehicleRenderInfo*,BrnTraffic::VehicleRenderInfo*>::pair(const VehicleRenderInfo *const&  _Val1, const VehicleRenderInfo *const&  _Val2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Unguarded_partition<BrnTraffic::VehicleRenderInfo*, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(VehicleRenderInfo *  _First, VehicleRenderInfo *  _Last, bool (*)(const VehicleRenderInfo &, const VehicleRenderInfo &)  _Pred) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:2044
		VehicleRenderInfo * _Mid;

		// algorithm:2046
		VehicleRenderInfo * _Pfirst;

		// algorithm:2047
		VehicleRenderInfo * _Plast;

		// algorithm:2058
		VehicleRenderInfo * _Gfirst;

		// algorithm:2059
		VehicleRenderInfo * _Glast;

	}
	_Median<BrnTraffic::VehicleRenderInfo*, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(/* parameters */);
	{
		_Med3<BrnTraffic::VehicleRenderInfo*, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(/* parameters */);
		_Med3<BrnTraffic::VehicleRenderInfo*, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(/* parameters */);
		_Med3<BrnTraffic::VehicleRenderInfo*, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(/* parameters */);
		_Med3<BrnTraffic::VehicleRenderInfo*, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(/* parameters */);
	}
	iter_swap<BrnTraffic::VehicleRenderInfo*, BrnTraffic::VehicleRenderInfo*>(/* parameters */);
	iter_swap<BrnTraffic::VehicleRenderInfo*, BrnTraffic::VehicleRenderInfo*>(/* parameters */);
	iter_swap<BrnTraffic::VehicleRenderInfo*, BrnTraffic::VehicleRenderInfo*>(/* parameters */);
	iter_swap<BrnTraffic::VehicleRenderInfo*, BrnTraffic::VehicleRenderInfo*>(/* parameters */);
	iter_swap<BrnTraffic::VehicleRenderInfo*, BrnTraffic::VehicleRenderInfo*>(/* parameters */);
	iter_swap<BrnTraffic::VehicleRenderInfo*, BrnTraffic::VehicleRenderInfo*>(/* parameters */);
	iter_swap<BrnTraffic::VehicleRenderInfo*, BrnTraffic::VehicleRenderInfo*>(/* parameters */);
	pair<BrnTraffic::VehicleRenderInfo*,BrnTraffic::VehicleRenderInfo*>::pair(/* parameters */);
	_Med3<BrnTraffic::VehicleRenderInfo*, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(/* parameters */);
	iter_swap<BrnTraffic::VehicleRenderInfo*, BrnTraffic::VehicleRenderInfo*>(/* parameters */);
	iter_swap<BrnTraffic::VehicleRenderInfo*, BrnTraffic::VehicleRenderInfo*>(/* parameters */);
	iter_swap<BrnTraffic::VehicleRenderInfo*, BrnTraffic::VehicleRenderInfo*>(/* parameters */);
	iter_swap<BrnTraffic::VehicleRenderInfo*, BrnTraffic::VehicleRenderInfo*>(/* parameters */);
	iter_swap<BrnTraffic::VehicleRenderInfo*, BrnTraffic::VehicleRenderInfo*>(/* parameters */);
	iter_swap<BrnTraffic::VehicleRenderInfo*, BrnTraffic::VehicleRenderInfo*>(/* parameters */);
	iter_swap<BrnTraffic::VehicleRenderInfo*, BrnTraffic::VehicleRenderInfo*>(/* parameters */);
	iter_swap<BrnTraffic::VehicleRenderInfo*, BrnTraffic::VehicleRenderInfo*>(/* parameters */);
	iter_swap<BrnTraffic::VehicleRenderInfo*, BrnTraffic::VehicleRenderInfo*>(/* parameters */);
	iter_swap<BrnTraffic::VehicleRenderInfo*, BrnTraffic::VehicleRenderInfo*>(/* parameters */);
	iter_swap<BrnTraffic::VehicleRenderInfo*, BrnTraffic::VehicleRenderInfo*>(/* parameters */);
	iter_swap<BrnTraffic::VehicleRenderInfo*, BrnTraffic::VehicleRenderInfo*>(/* parameters */);
	iter_swap<BrnTraffic::VehicleRenderInfo*, BrnTraffic::VehicleRenderInfo*>(/* parameters */);
	iter_swap<BrnTraffic::VehicleRenderInfo*, BrnTraffic::VehicleRenderInfo*>(/* parameters */);
}

void std::make_heap<BrnTraffic::VehicleRenderInfo*, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(VehicleRenderInfo *  _First, VehicleRenderInfo *  _Last, bool (*)(const VehicleRenderInfo &, const VehicleRenderInfo &)  _Pred) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Dist_type<BrnTraffic::VehicleRenderInfo*>(VehicleRenderInfo *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Val_type<BrnTraffic::VehicleRenderInfo*>(VehicleRenderInfo *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Make_heap<BrnTraffic::VehicleRenderInfo*, std::ptrdiff_t, BrnTraffic::VehicleRenderInfo, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(VehicleRenderInfo *  _First, VehicleRenderInfo *  _Last, bool (*)(const VehicleRenderInfo &, const VehicleRenderInfo &)  _Pred, ptrdiff_t *, VehicleRenderInfo *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1305
		ptrdiff_t _Bottom;

		{
			// algorithm:1306
			ptrdiff_t _Hole;

		}
	}
}

void std::_Adjust_heap<BrnTraffic::VehicleRenderInfo*, int, BrnTraffic::VehicleRenderInfo, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(VehicleRenderInfo *  _First, int  _Hole, int  _Bottom, VehicleRenderInfo  _Val, bool (*)(const VehicleRenderInfo &, const VehicleRenderInfo &)  _Pred) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1228
		int _Top;

		// algorithm:1229
		int _Idx;

	}
}

void std::_Push_heap<BrnTraffic::VehicleRenderInfo*, int, BrnTraffic::VehicleRenderInfo, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(VehicleRenderInfo *  _First, int  _Hole, int  _Top, VehicleRenderInfo  _Val, bool (*)(const VehicleRenderInfo &, const VehicleRenderInfo &)  _Pred) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1129
		int _Idx;

	}
}

void std::sort_heap<BrnTraffic::VehicleRenderInfo*, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(VehicleRenderInfo *  _First, VehicleRenderInfo *  _Last, bool (*)(const VehicleRenderInfo &, const VehicleRenderInfo &)  _Pred) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::pop_heap<BrnTraffic::VehicleRenderInfo*, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(VehicleRenderInfo *  _First, VehicleRenderInfo *  _Last, bool (*)(const VehicleRenderInfo &, const VehicleRenderInfo &)  _Pred) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Pop_heap_0<BrnTraffic::VehicleRenderInfo*, BrnTraffic::VehicleRenderInfo, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(VehicleRenderInfo *  _First, VehicleRenderInfo *  _Last, bool (*)(const VehicleRenderInfo &, const VehicleRenderInfo &)  _Pred, VehicleRenderInfo *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Pop_heap<BrnTraffic::VehicleRenderInfo*, std::ptrdiff_t, BrnTraffic::VehicleRenderInfo, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(VehicleRenderInfo *  _First, VehicleRenderInfo *  _Last, VehicleRenderInfo *  _Dest, VehicleRenderInfo  _Val, bool (*)(const VehicleRenderInfo &, const VehicleRenderInfo &)  _Pred, ptrdiff_t *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Insertion_sort<BrnTraffic::VehicleRenderInfo*, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(VehicleRenderInfo *  _First, VehicleRenderInfo *  _Last, bool (*)(const VehicleRenderInfo &, const VehicleRenderInfo &)  _Pred) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:1991
		VehicleRenderInfo * _Next;

		{
			// algorithm:1994
			VehicleRenderInfo * _Next1;

		}
		{
			// algorithm:1999
			VehicleRenderInfo * _Dest;

			{
				// algorithm:2000
				VehicleRenderInfo * _Dest0;

			}
			{
				// algorithm:2005
				VehicleRenderInfo * _Next1;

			}
		}
	}
}

void std::rotate<BrnTraffic::VehicleRenderInfo*>(VehicleRenderInfo *  _First, VehicleRenderInfo *  _Mid, VehicleRenderInfo *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Iter_cat<BrnTraffic::VehicleRenderInfo*>(const VehicleRenderInfo *const&) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xutility:396
	random_access_iterator_tag _Cat;

	{
		// xutility:396
		random_access_iterator_tag _Cat;

	}
}

void std::_Rotate<BrnTraffic::VehicleRenderInfo*>(VehicleRenderInfo *  _First, VehicleRenderInfo *  _Mid, VehicleRenderInfo *  _Last, random_access_iterator_tag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::_Rotate<BrnTraffic::VehicleRenderInfo*, std::ptrdiff_t, BrnTraffic::VehicleRenderInfo>(VehicleRenderInfo *  _First, VehicleRenderInfo *  _Mid, VehicleRenderInfo *  _Last, ptrdiff_t *, VehicleRenderInfo *) {
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
			VehicleRenderInfo * _Hole;

			// algorithm:858
			VehicleRenderInfo * _Next;

			// algorithm:859
			VehicleRenderInfo _Holeval;

			// algorithm:860
			VehicleRenderInfo * _Next1;

		}
	}
}

void std::_Sort<BrnTraffic::VehicleRenderInfo*, int, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(VehicleRenderInfo *  _First, VehicleRenderInfo *  _Last, int  _Ideal, bool (*)(const VehicleRenderInfo &, const VehicleRenderInfo &)  _Pred) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm:2103
		int _Count;

		{
			// algorithm:2106
			pair<BrnTraffic::VehicleRenderInfo*,BrnTraffic::VehicleRenderInfo*> _Mid;

		}
		_Insertion_sort<BrnTraffic::VehicleRenderInfo*, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
	{
	}
	make_heap<BrnTraffic::VehicleRenderInfo*, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(/* parameters */);
	sort_heap<BrnTraffic::VehicleRenderInfo*, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(/* parameters */);
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

void ShaderConstantTableElement::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ShaderConstantTable::SetShaderConstantData(uint32_t  luIndex, const rw::math::vpu::Vector4  lData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.h:398
		Vector4 * lpDest;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				{
					(None)unknown_arg
				}
				{
					(None)unknown_arg
					(None)unknown_arg
					{
						{
							(None)unknown_arg
							(None)unknown_arg
						}
					}
				}
			}
		}
		{
			(None)unknown_arg
		}
		{
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void ShaderConstantTable::SetShaderConstantData(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		ShaderConstantTable::UpdateShaderChangeTableAndGetConstantDestination(/* parameters */);
	}
	rw::math::vpu::Vector4::operator=(/* parameters */);
}

void CgsContainers::Set<uint16_t,72u>::Insert(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Contains(/* parameters */);
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

void BrnTraffic::TrafficEntityModule::UpdateDensity(const InputBuffer_PostPhysics *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:8209
		float32_t lfNumActiveHulls;

		// BrnTrafficEntityModule.cpp:8210
		float32_t lfActiveHullProportion;

		CgsContainers::Set<uint16_t,72u>::GetLength(/* parameters */);
	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		(None)unknown_arg
	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
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

void CgsContainers::Stack<uint16_t,1>::operator[](int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAlgorithms::Shuffle<uint16_t, CgsContainers::Stack<uint16_t, 1> >(const Stack<uint16_t,1> &  lArray, int32_t  liStart, int32_t  liEndPlusOne, const Random &  lRandom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShuffle.h:111
		int32_t liCurrent;

		// CgsShuffle.h:112
		uint16_t lTemp;

	}
	{
		// CgsShuffle.h:115
		int32_t liSwapWith;

		CgsNumeric::Random::RandomInt(/* parameters */);
		CgsContainers::Stack<uint16_t,1>::operator[](/* parameters */);
		CgsContainers::Stack<uint16_t,1>::operator[](/* parameters */);
		CgsContainers::Stack<uint16_t,1>::operator[](/* parameters */);
		CgsContainers::Stack<uint16_t,1>::operator[](/* parameters */);
	}
}

void CgsContainers::Stack<uint8_t,200>::operator[](int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAlgorithms::Shuffle<uint8_t, CgsContainers::Stack<uint8_t, 200> >(const Stack<uint8_t,200> &  lArray, int32_t  liStart, int32_t  liEndPlusOne, const Random &  lRandom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShuffle.h:111
		int32_t liCurrent;

		// CgsShuffle.h:112
		uint8_t lTemp;

	}
	{
		// CgsShuffle.h:115
		int32_t liSwapWith;

		CgsNumeric::Random::RandomInt(/* parameters */);
		CgsContainers::Stack<uint8_t,200>::operator[](/* parameters */);
		CgsContainers::Stack<uint8_t,200>::operator[](/* parameters */);
		CgsContainers::Stack<uint8_t,200>::operator[](/* parameters */);
		CgsContainers::Stack<uint8_t,200>::operator[](/* parameters */);
	}
}

void CgsContainers::Stack<uint16_t,400>::operator[](int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAlgorithms::Shuffle<uint16_t, CgsContainers::Stack<uint16_t, 400> >(const Stack<uint16_t,400> &  lArray, int32_t  liStart, int32_t  liEndPlusOne, const Random &  lRandom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShuffle.h:111
		int32_t liCurrent;

		// CgsShuffle.h:112
		uint16_t lTemp;

	}
	{
		// CgsShuffle.h:115
		int32_t liSwapWith;

		CgsNumeric::Random::RandomInt(/* parameters */);
		CgsContainers::Stack<uint16_t,400>::operator[](/* parameters */);
		CgsContainers::Stack<uint16_t,400>::operator[](/* parameters */);
		CgsContainers::Stack<uint16_t,400>::operator[](/* parameters */);
		CgsContainers::Stack<uint16_t,400>::operator[](/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PreScene::GetTrafficToRaceCarInterface_PreScene() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:186
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::IOBuffer::IsBufferLockedForWriting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::TrafficToRaceCarInterface_PreScene::AddTrafficCarNearMiss(TrafficToRaceCarInterface_PreScene::NearMissTrafficCollection *  lpNearMissTrafficCollection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::TrafficToRaceCarInterface_PreScene::AddRaceCarNearMiss(TrafficToRaceCarInterface_PreScene::NearMissRaceCarCollection *  lpNearMissRaceCarCollection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GenerateNearMissOutput(const InputBuffer_PreScene *  lpInput, OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnTrafficIO::OutputBuffer_PreScene::GetTrafficToRaceCarInterface_PreScene(/* parameters */);
	BrnTrafficIO::TrafficToRaceCarInterface_PreScene::AddTrafficCarNearMiss(/* parameters */);
	BrnTrafficIO::OutputBuffer_PreScene::GetTrafficToRaceCarInterface_PreScene(/* parameters */);
	BrnTrafficIO::TrafficToRaceCarInterface_PreScene::AddRaceCarNearMiss(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:562
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::SmallResource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetHull(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
			{
				(None)unknown_arg
				(None)unknown_arg
			}
		}
		{
			{
				(None)unknown_arg
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
				(None)unknown_arg
			}
		}
		{
			{
				(None)unknown_arg
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
				(None)unknown_arg
			}
		}
	}
}

void BrnTraffic::TrafficEntityModule::GetHull(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PreScene::GetTimerStatusInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:150
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::IOBuffer::IsBufferLockedForReading() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatusInterface::GetSimTimerStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::GetCurrentTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::GetTimeStepMultiplier() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatusInterface::IsSimTimerFrequency50Hz() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateTimers(const InputBuffer_PreScene *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsDecisionFrame(/* parameters */);
	BrnTrafficIO::InputBuffer_PreScene::GetTimerStatusInterface(/* parameters */);
	CgsSystem::TimerStatusInterface::GetSimTimerStatus(/* parameters */);
	BrnTrafficIO::InputBuffer_PreScene::GetTimerStatusInterface(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::VecFloat::SetFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	BrnTrafficIO::InputBuffer_PreScene::GetTimerStatusInterface(/* parameters */);
	BrnTrafficIO::InputBuffer_PreScene::GetTimerStatusInterface(/* parameters */);
	IsDecisionFrame(/* parameters */);
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
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PreScene::GetSceneInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
		}
	}
	{
		// BrnTrafficEntityModuleIO.h:183
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

void BrnTraffic::BrnTrafficIO::OutputBuffer_PreScene::GetSceneInputInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetCrashTrafficInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
		}
	}
	{
		// BrnTrafficEntityModuleIO.h:388
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

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetCrashTrafficInputInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::GetActiveRaceCarOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
		}
	}
	{
		// BrnTrafficEntityModuleIO.h:358
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

void BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::GetActiveRaceCarOutputInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::TrafficEntityModule::DEBUG_ValidateEmDriverControls(const BrnTrafficDriverControls &  lDriverControls, const char *  lpszWhosFault) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:17836
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:17835
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:17834
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:17833
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsDev::PerfMonCpu::StartMonitor(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::VehicleAsset::GetVehicleId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleList::IsVehicleInList(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleList::GetVehicleIndex(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// VehicleList.h:230
		int32_t liIndex;

	}
}

void BrnResource::VehicleList::GetVehicleData(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// VehicleList.h:191
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourcePtr<BrnResource::VehicleListResource>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:562
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::VehicleListEntry::GetId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleList::GetVehicleData(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// VehicleList.h:207
		int32_t liIndex;

	}
}

void CgsDev::StrStreamBase::operator<<(uint64_t  lu64Int) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::Append64IntDecimal(uint64_t  lu64Int) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:822
		char[22] lacNumber;

	}
}

void CgsDev::StrStreamBase::Append64IntHex(uint64_t  lu64Int) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:847
		uint32_t lA;

		// CgsStrStream.h:848
		uint32_t lB;

	}
}

void BrnResource::VehicleListEntry::GetAttribCollectionKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleList::GetVehicleCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::FindVehicleTypeAttribKey_EXPENSIVE(uint32_t  luVehicleType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:16953
		uint8_t lu8VehicleAssetIndex;

		// BrnTrafficEntityModule.cpp:16956
		CgsID lModelId;

		// BrnTrafficEntityModule.cpp:16960
		const VehicleListEntry * lpVehicleListEntry;

		CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	}
	VehicleAsset::GetVehicleId(/* parameters */);
	BrnResource::VehicleList::IsVehicleInList(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:16965
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:16966
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:16970
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:543
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::TrafficEntityModule::GetHullRuntime(uint32_t  luHull) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.h:2321
		uint32_t luHullRuntime;

	}
}

void BrnTraffic::TrafficEntityModule::GetHullRuntime(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PrePhysics::GetPropToTrafficInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:289
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::PropEntityIO::PropToTrafficInterface::GetTrafficLightKnockDownQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::TrafficLightKnockDownEvent::GetInstanceID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::PropToTrafficInterface::GetTrafficLightRestoreQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::TrafficLightRestoreEvent::GetInstanceID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::HandlePropModuleRequests(const InputBuffer_PrePhysics *  lpInput, OutputBuffer_PrePhysics *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:6387
		const EventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent,32> * lpTrafficLightKnockDownQueue;

		// BrnTrafficEntityModule.cpp:6391
		int32_t liEvent;

		// BrnTrafficEntityModule.cpp:6401
		const EventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent,80> * lpTrafficLightRestoreQueue;

	}
	BrnTrafficIO::InputBuffer_PrePhysics::GetPropToTrafficInterface(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:6394
		const TrafficLightKnockDownEvent * lpEvent;

		CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent>::GetEvent(/* parameters */);
	}
	BrnTrafficIO::InputBuffer_PrePhysics::GetPropToTrafficInterface(/* parameters */);
	BrnWorld::PropEntityIO::PropToTrafficInterface::GetTrafficLightRestoreQueue(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:6407
		const TrafficLightRestoreEvent * lpEvent;

		CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent>::GetEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsContainers::Set<uint16_t,72u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::HullRuntime::ResetSectionSpanVehicleCounts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdatePressure_Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:16991
		uint32_t luIndex;

		{
			// BrnTrafficEntityModule.cpp:16995
			HullRuntime * lpHullRuntime;

			GetHullRuntime(/* parameters */);
			HullRuntime::ResetSectionSpanVehicleCounts(/* parameters */);
		}
		CgsContainers::Set<uint16_t,72u>::GetLength(/* parameters */);
		CgsContainers::Set<uint16_t,72u>::operator[](/* parameters */);
	}
}

void CgsContainers::FastBitArray<601>::Iterator::operator++() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:250
		uint64_t luTempSourceMask;

		// CgsFastBitArray.h:251
		uint64_t luStartMaskIndex;

		// CgsFastBitArray.h:252
		uint64_t luStartMaskMod;

		// CgsFastBitArray.h:253
		uint64_t luMaskIndex;

		// CgsFastBitArray.h:254
		const uint64_t * lpxSourceMasks;

		// CgsFastBitArray.h:256
		int32_t liCurrIndex;

		// CgsFastBitArray.h:257
		uint64_t lxCurrMask;

	}
	{
		// CgsFastBitArray.h:279
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsFastBitArray.h:311
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsFastBitArray.h:247
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsFastBitArray.h:281
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsFastBitArray.h:313
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsFastBitArray.h:248
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsContainers::FastBitArray<601>::Iterator::GetIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:232
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

void CgsContainers::FastBitArray<601>::Iterator::GetIndex(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsModule::ModuleSingleBuffered::DestroyInputDataStructure(CgsModule::DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:133
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::DestroyOutputDataStructure(CgsModule::DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:137
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::PrepareDataStructures(CgsModule::DataStructure *  lpInputDataStructure, CgsModule::DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:141
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::ReleaseDataStructures(CgsModule::DataStructure *  lpInputDataStructure, CgsModule::DataStructure *  lpOutputDataStructure) {
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

void BrnTraffic::TrafficEntityModule::GetParamTransform(uint32_t  luParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator!=(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsEqualV3(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:255
		bool ret;

		// vector_intrinsic_operation_inline.h:256
		VectorIntrinsicUnion::VectorIntrinsic v0comp;

		// vector_intrinsic_operation_inline.h:256
		VectorIntrinsicUnion::VectorIntrinsic v1comp;

	}
}

void BrnTraffic::ParamTransform::GetLerpedPos() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::IsPointWithinSquishedCone(const rw::math::vpu::Vector3  lConeStart, const rw::math::vpu::Vector3  lConeDirection, const VecFloat  lfCosConeAngle, const VecFloat  lfConeLength, const VecFloat  lfRecipConeYScale, const rw::math::vpu::Vector3  lTestPoint) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficMathsUtils.h:82
		Vector3 lDiff;

		// BrnTrafficMathsUtils.h:83
		VecFloat lfDot;

		// BrnTrafficMathsUtils.h:84
		Vector3 lDiffDir;

	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1573
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1574
		VectorIntrinsicUnion::VectorIntrinsic aVF;

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

void rw::math::vpu::operator>(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:356
		bool result;

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

void rw::math::vpu::operator<(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:514
		bool result;

	}
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

void BrnTraffic::ParamTransform::CalcUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnTrafficParam.h:594
	Vector3 lUp;

	{
		// BrnTrafficParam.h:594
		Vector3 lUp;

	}
}

void BrnTraffic::ParamTransform::GetRight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnTraffic::ParamTransform::GetSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::CalcRaceCarOnStartGridFuzzyScores(uint32_t  luParam, const VecFloat &  lfRCDistance, const VecFloat &  lfRCHeight, const VecFloat &  lfRCClosingSpeed, const VecFloat &  lfRCLanePos, const VecFloat &  lfRCSpeedInOurLane) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:10731
		const ParamTransform * lpParamTransform;

		// BrnTrafficEntityModule.cpp:10733
		float32_t lfNearestDistance;

		// BrnTrafficEntityModule.cpp:10734
		Vector3 lNearestStartingPosition;

		// BrnTrafficEntityModule.cpp:10736
		uint8_t luiIndex;

		GetParamTransform(/* parameters */);
		rw::math::vpu::GetVector3_Zero(/* parameters */);
		rw::math::vpu::operator!=(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:10764
		Vector3 lDiff;

		// BrnTrafficEntityModule.cpp:10771
		Vector3 lParamLinearVel;

		// BrnTrafficEntityModule.cpp:10772
		Vector3 lClosingVel;

		// BrnTrafficEntityModule.cpp:10773
		Vector3 lRCDirection;

		ParamTransform::GetLerpedPos(/* parameters */);
		ParamTransform::GetDirection(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		ParamTransform::CalcUp(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::GetVecFloat_Zero(/* parameters */);
		ParamTransform::GetDirection(/* parameters */);
		ParamTransform::GetSpeed(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		VecFloat<VectorAxisW>(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:10741
		bool lbIsCurrentRaceCarPositionWithinTrafficCone;

		ParamTransform::GetLerpedPos(/* parameters */);
		ParamTransform::GetDirection(/* parameters */);
		IsPointWithinSquishedCone(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Vector3::SetY(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
	}
	rw::math::vpu::operator!=(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:10729
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:10751
		Vector3 lDiff;

		// BrnTrafficEntityModule.cpp:10752
		float32_t lfDistance;

		ParamTransform::GetLerpedPos(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
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
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnTraffic::Param::SetNeedsNewPlan() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Param::IsAlive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::EatParamsNextPlan(uint32_t  luParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:9333
		uint32_t luPlan;

		// BrnTrafficEntityModule.cpp:9334
		Param * lpParam;

		GetParam(/* parameters */);
	}
	Param::SetNeedsNewPlan(/* parameters */);
}

void BrnTraffic::TrafficEntityModule::GetDeterministicParamPos(uint32_t  luParam) {
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

void rw::math::vpu::operator< <VectorAxisX>(const VecFloat  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:522
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:524
		bool ret;

	}
}

void rw::math::vpu::operator< <VectorAxisY>(const VecFloat  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:522
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:524
		bool ret;

	}
}

void BrnTraffic::Param::SetShouldBeRemoved() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator< <VectorAxisZ>(const VecFloat  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:522
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:524
		bool ret;

	}
}

void BrnTraffic::TrafficEntityModule::UpdateParam_CheckIfInsideParamInFront(uint32_t  luParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:11211
		Param * lpParam;

		// BrnTrafficEntityModule.cpp:11212
		Vector3 lParamPos;

		// BrnTrafficEntityModule.cpp:11218
		ParamNeedToSlowData * lpNeedToSlowData;

	}
	GetParam(/* parameters */);
	GetDeterministicParamPos(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:11224
		Vector3 lParamInFrontPos;

		// BrnTrafficEntityModule.cpp:11225
		Vector3 lDiff;

		// BrnTrafficEntityModule.cpp:11226
		VecFloat lfDistSq;

		GetDeterministicParamPos(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::operator< <VectorAxisX>(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:11233
			Matrix44Affine lVehicleXForm;

			// BrnTrafficEntityModule.cpp:11234
			Matrix44Affine lVehicleInFrontXForm;

			// BrnTrafficEntityModule.cpp:11236
			Vector3 lVehicleDiff;

			// BrnTrafficEntityModule.cpp:11237
			VecFloat lfVehicleDistSq;

			GetVehicleTransform(/* parameters */);
			GetVehicleTransform(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator< <VectorAxisY>(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
		}
		Param::SetShouldBeRemoved(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator< <VectorAxisZ>(/* parameters */);
}

void CgsContainers::FastBitArray<601>::Iterator::Iterator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<601>::Begin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<601>::Iterator::Iterator(const uint64_t *  lpxSourceMasks) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<601>::End() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<601>::Iterator::operator!=(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateLerpedParamTransforms() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:13003
		Iterator lItParam;

		CgsContainers::FastBitArray<601>::Begin(/* parameters */);
	}
	CgsContainers::FastBitArray<601>::Iterator::Iterator(/* parameters */);
	CgsContainers::FastBitArray<601>::Iterator::operator!=(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:13009
		uint32_t luParam;

		// BrnTrafficEntityModule.cpp:13012
		ParamTransform * lpTransform;

		CgsContainers::FastBitArray<601>::Iterator::GetIndex(/* parameters */);
		GetParam(/* parameters */);
		GetParamTransform(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::TrafficEntityModule::GetStaticVehicle(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsCrashing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsPhysical() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetStaticTrafficParam(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::StaticTrafficParam::GetHull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::StaticTrafficParam::IsAlive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::StaticTrafficParam::GetIndexInHull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Hull::GetStaticVehicle(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetVehicleIndexFromStaticIndex(uint32_t  luStaticVehicle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PreScene::GetActiveRaceCarOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:153
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CheckVehicleForPowerPark(const rw::math::vpu::Vector3  lPlayerPos, const rw::math::vpu::Vector3  lPlayerDir, const rw::math::vpu::Vector3  lVehiclePos, const rw::math::vpu::Vector3  lVehicleDir, const float32_t &  lfClosestDistanceSq, const float32_t &  lfSecondClosestDistanceSq, const float32_t &  lfClosestAngleDiff, const float32_t &  lfClosestPerpendicularDist) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPowerParkingManager.h:184
		const rw::math::vpu::Vector3 lPlayerToVehicle;

		// BrnPowerParkingManager.h:186
		const float32_t lfDistanceSq;

		{
			// BrnPowerParkingManager.h:199
			float32_t lfPlayerAngle;

			// BrnPowerParkingManager.h:201
			float32_t lfTrafficAngle;

		}
	}
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

void rw::math::vpu::ATan2(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// trig_operation_inline.h:60
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic zeroVec;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic signBit;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic a_signBit;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic bNeg;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic bZero;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic res1;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic bRecip;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic res2;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic b_signBit;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic newRes;

			{
				// trig_operation_inline.h:61
				VectorIntrinsicUnion::VectorIntrinsic estimate;

				// trig_operation_inline.h:61
				VectorIntrinsicUnion::VectorIntrinsic vOne;

			}
		}
	}
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

void rw::math::fpu::Abs<float>(const const float &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:108
		float r;

	}
}

void BrnTraffic::BrnTrafficIO::TrafficToRaceCarInterface_PreScene::SetNearbyParkedTrafficData(uint32_t  luNearbyStaticVehicleCount, float32_t  lfClosestDistanceSq, float32_t  lfSecondClosestDistanceSq, float32_t  lfClosestAngleDiff, float32_t  lfClosestPerpendicularDist) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GenerateNearbyParkedTrafficOutput(const InputBuffer_PreScene *  lpInput, OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:3848
		uint32_t luNearbyStaticVehicleCount;

		// BrnTrafficEntityModule.cpp:3849
		uint32_t luStaticVehicleIdx;

		// BrnTrafficEntityModule.cpp:3850
		float32_t lfClosestDistanceSq;

		// BrnTrafficEntityModule.cpp:3851
		float32_t lfSecondClosestDistanceSq;

		// BrnTrafficEntityModule.cpp:3852
		float32_t lfClosestAngleDiff;

		// BrnTrafficEntityModule.cpp:3853
		float32_t lfClosestPerpendicularDist;

	}
	{
		// BrnTrafficEntityModule.cpp:3857
		const Vehicle * lpStaticVehicle;

		Vehicle::IsCrashing(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:3862
			const StaticTrafficParam * lpStaticParam;

			// BrnTrafficEntityModule.cpp:3864
			uint8_t luFlags;

			// BrnTrafficEntityModule.cpp:3871
			uint32_t luVehicleIdx;

			// BrnTrafficEntityModule.cpp:3873
			const const rw::math::vpu::Vector3 & lPlayerPos;

			// BrnTrafficEntityModule.cpp:3875
			const const rw::math::vpu::Vector3 & lPlayerDir;

			// BrnTrafficEntityModule.cpp:3877
			const const rw::math::vpu::Vector3 & lVehiclePos;

			// BrnTrafficEntityModule.cpp:3879
			const const rw::math::vpu::Vector3 & lVehicleDir;

		}
	}
	Vehicle::IsAlive(/* parameters */);
	StaticTrafficParam::GetHull(/* parameters */);
	GetHull(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	StaticTrafficParam::GetIndexInHull(/* parameters */);
	Hull::GetStaticVehicle(/* parameters */);
	BrnTrafficIO::InputBuffer_PreScene::GetActiveRaceCarOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition(/* parameters */);
	BrnTrafficIO::InputBuffer_PreScene::GetActiveRaceCarOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerDirection(/* parameters */);
	BrnWorld::CheckVehicleForPowerPark(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ, VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX, VectorAxisX>(/* parameters */);
	BrnTrafficIO::OutputBuffer_PreScene::GetTrafficToRaceCarInterface_PreScene(/* parameters */);
	BrnTrafficIO::TrafficToRaceCarInterface_PreScene::SetNearbyParkedTrafficData(/* parameters */);
	{
		VecFloat<VectorAxisX>(/* parameters */);
		rw::math::vpu::ATan2(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		VecFloat<VectorAxisZ>(/* parameters */);
		std(/* parameters */);
		VecFloat<VectorAxisZ>(/* parameters */);
		{
		}
		rw::math::vpu::ATan2(/* parameters */);
		vec_madd(/* parameters */);
		std(/* parameters */);
		std(/* parameters */);
		vec_andc(/* parameters */);
		vec_andc(/* parameters */);
		vec_and(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpgt(/* parameters */);
		vec_cmpgt(/* parameters */);
		vec_and(/* parameters */);
		vec_and(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_add(/* parameters */);
		vec_add(/* parameters */);
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
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::fpu::Abs<float>(/* parameters */);
		rw::math::fpu::Min<float>(/* parameters */);
		rw::math::fpu::Min<float>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::Hull::GetFlowData(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::CalcModifiedDensity(uint32_t  luVehiclesPerMinute) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:8230
		float32_t lfVehiclesPerMinute;

		// BrnTrafficEntityModule.cpp:8231
		float32_t lfMinDensity;

		// BrnTrafficEntityModule.cpp:8233
		float32_t lfDensity;

	}
}

void BrnTraffic::TrafficEntityModule::CalcTimeToNextGeneration(uint32_t  luHull, uint32_t  luSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:7682
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficEntityModule.cpp:7683
		const SectionFlow * lpFlowData;

		// BrnTrafficEntityModule.cpp:7685
		float32_t lfVehiclesPerMinute;

		// BrnTrafficEntityModule.cpp:7688
		float32_t lfBaseTime;

		// BrnTrafficEntityModule.cpp:7689
		float32_t lfModulation;

		GetHull(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	Hull::GetFlowData(/* parameters */);
	CalcModifiedDensity(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void rw::math::fpu::Floor<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:45
		const double maxMantissa;

		// scalar.h:46
		const double doubleInput;

		// scalar.h:47
		double c;

		// scalar.h:48
		double result;

	}
}

void BrnTraffic::TrafficEntityModule::AddGenerator(uint32_t  luHull, uint32_t  luSection, float32_t *  lpUpdatedPhase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:7666
		float32_t lfNewPhase;

	}
	rw::math::fpu::Floor<float>(/* parameters */);
	__fsel(/* parameters */);
}

void BrnTraffic::TrafficEntityModule::GetHullRuntimeSafe(uint32_t  luHull) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.h:2388
		uint32_t luHullRuntime;

	}
}

void BrnTraffic::Hull::GetSectionSpan(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::HullRuntime::GetSectionSpanVehicleCount(uint32_t  luSpanIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::SectionSpan::GetMaxVehicleCountReciprocal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::Pressure_PickSplitToTake(const Section *  lpCurrentSection, uint8_t *  lpOutSection, uint16_t *  lpOutHull, uint8_t *  lpOutDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:17029
		uint8_t luIndex;

		// BrnTrafficEntityModule.cpp:17031
		uint8_t luBestIndex;

		// BrnTrafficEntityModule.cpp:17032
		float32_t lfBest;

		// BrnTrafficEntityModule.cpp:17033
		uint8_t luBestSectionIndex;

		// BrnTrafficEntityModule.cpp:17034
		uint16_t luBestHullIndex;

		// BrnTrafficEntityModule.cpp:17035
		float32_t[3] lafBaseFullness;

	}
	{
		// BrnTrafficEntityModule.cpp:17056
		uint8_t luSectionIndex;

		// BrnTrafficEntityModule.cpp:17057
		uint16_t luHullIndex;

	}
	{
		// BrnTrafficEntityModule.cpp:17061
		float32_t lfSpanFullness;

		// BrnTrafficEntityModule.cpp:17062
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficEntityModule.cpp:17063
		const HullRuntime * lpHullRuntime;

		GetHull(/* parameters */);
		GetHullRuntimeSafe(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:17067
			const Section * lpSection;

			// BrnTrafficEntityModule.cpp:17068
			const SectionSpan * lpSpan;

			Hull::GetSection(/* parameters */);
			Hull::GetSectionSpan(/* parameters */);
			HullRuntime::GetSectionSpanVehicleCount(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::VehicleTypeRuntime::GetBBoxOffset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::VehicleTypeRuntime::GetBBoxHalfSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::vpu::operator+<VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, VecFloatRef<VectorAxisZ> &  b) {
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

void BrnTraffic::Vehicle::GetSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1573
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1574
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
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

void rw::math::vpu::TransformPoints(const rw::math::vpu::Vector3 *const  pts, int  numPoints, const rw::math::vpu::Matrix44Affine &  matrix, Vector3 *  transformedPts) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_inline.h:503
		int point;

	}
}

void rw::math::vpu::TransformPoint(const rw::math::vpu::Vector3  pt, const rw::math::vpu::Matrix44Affine &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:50
		VectorIntrinsicUnion::VectorIntrinsic tmp;

		// matrix44affine_operation_platform_inline.h:51
		VectorIntrinsicUnion::VectorIntrinsic xSplat;

		// matrix44affine_operation_platform_inline.h:51
		VectorIntrinsicUnion::VectorIntrinsic ySplat;

		// matrix44affine_operation_platform_inline.h:51
		VectorIntrinsicUnion::VectorIntrinsic zSplat;

		// matrix44affine_operation_platform_inline.h:51
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void BrnTraffic::TrafficEntityModule::CreateTrafficAIEntity(uint32_t  luVehicle, const VehicleTypeRuntime *  lpRuntime, EActiveRaceCarIndex  leAICarIndex, TrafficAIEntity *  lpResultTrafficEntity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:14680
		const Vehicle * lpVehicle;

		// BrnTrafficEntityModule.cpp:14681
		Matrix44Affine lVehicleTransform;

		// BrnTrafficEntityModule.cpp:14689
		Vector3 lBBOffset;

		// BrnTrafficEntityModule.cpp:14690
		Vector3 lXAddition;

		// BrnTrafficEntityModule.cpp:14691
		Vector3 lYAddition;

		// BrnTrafficEntityModule.cpp:14692
		Vector3 lZAddition;

		GetVehicle(/* parameters */);
	}
	GetVehicleTransform(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX, VectorAxisX>(/* parameters */);
	SetX<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::SetX(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::operator+<VectorAxisZ, VectorAxisZ>(/* parameters */);
	SetY<VectorAxisY>(/* parameters */);
	SetZ<VectorAxisZ>(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	Vehicle::GetSpeed(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::SetX(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	Vehicle::GetSpeed(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::TransformPoints(/* parameters */);
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

void BrnTraffic::Vehicle::GetSteering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::vpu::Clamp(const VecFloat  value, const VecFloat  min, const VecFloat  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Min<rw::math::vpu::VecFloat>(const const VecFloat &  a, const const VecFloat &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:132
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator>=<VectorAxisW>(const VecFloat  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:681
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:683
		bool ret;

	}
}

void BrnTraffic::Vehicle::SetSteering(const VecFloat  lfValue) {
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

void BrnTraffic::TrafficEntityModule::CalculateAndSetSteering(uint32_t  luVehicle, const rw::math::vpu::Vector3  lNewDirection, BrnTrafficDriverControls *  lpOutControls, const VecFloat  lfOverallRisk) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:15976
		Vehicle * lpVehicle;

		// BrnTrafficEntityModule.cpp:15979
		Vector3 lVehicleDir;

		// BrnTrafficEntityModule.cpp:15982
		Vector3 lCrossProduct;

		// BrnTrafficEntityModule.cpp:15983
		VecFloat lfSinTheta;

		// BrnTrafficEntityModule.cpp:15984
		VecFloat lfOldSteering;

		// BrnTrafficEntityModule.cpp:15985
		VecFloat lfSinSteeringDelta;

		// BrnTrafficEntityModule.cpp:15990
		float32_t lfPhysicalSteeringScale;

	}
	GetVehicle(/* parameters */);
	GetVehicleTransform(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	Vehicle::GetSteering(/* parameters */);
	rw::math::vpu::Sgn(/* parameters */);
	{
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator>=<VectorAxisW>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	Vehicle::SetSteering(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
}

void rw::math::vpu::IsValid(const rw::math::vpu::Matrix44Affine &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CreatePhysicalTrafficEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::VolumeInstanceId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::EntityId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::AddEvent(const const CreatePhysicalTrafficEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[137] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern CreatePhysicalTrafficEvent & operator=(const const CreatePhysicalTrafficEvent &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleInputInterface::CreatePhysicalTraffic(VolumeInstanceId  lVolumeInstanceID, EntityId  lCrasherID, const rw::math::vpu::Matrix44Affine &  lInitialTransform, const rw::math::vpu::Vector3  lInitialVelocity, const rw::math::vpu::Vector3  lAngularVelocity, Attribute::Key  lCarAssetAttribKey, ResourceHandle  lModelHandle, BrnPhysics::Vehicle::ETrafficType  leTrafficType, bool  lbIsCab, CgsID  lCgsID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleInputInterface.h:488
		CreatePhysicalTrafficEvent lEvent;

	}
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
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::AddEvent(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
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
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::GetMaxLength(/* parameters */);
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

void CgsSceneManager::VolumeInstanceId::operator std::uint64_t() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CreateArticulatedTrafficEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::AddEvent(const const CreateArticulatedTrafficEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[140] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern CreateArticulatedTrafficEvent & operator=(const const CreateArticulatedTrafficEvent &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleInputInterface::CreateArticulatedTraffic(VolumeInstanceId  lVolumeInstanceID_Cab, const rw::math::vpu::Matrix44Affine &  lInitialTransform_Cab, const rw::math::vpu::Vector3  lInitialVelocity_Cab, const rw::math::vpu::Vector3  lAngularVelocity_Cab, Attribute::Key  lAssetAttribKey_Cab, ResourceHandle  lModelHandle_Cab, CgsID  lCgsId_Cab, VolumeInstanceId  lVolumeInstanceID_Trailer, const rw::math::vpu::Matrix44Affine &  lInitialTransform_Trailer, const rw::math::vpu::Vector3  lInitialVelocity_Trailer, const rw::math::vpu::Vector3  lAngularVelocity_Trailer, Attribute::Key  lAssetAttribKey_Trailer, ResourceHandle  lModelHandle_Trailer, CgsID  lCgsId_Trailer, BrnPhysics::Vehicle::ETrafficType  leTrafficType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleInputInterface.h:538
		CreateArticulatedTrafficEvent lEvent;

	}
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
	rw::math::vpu::IsValid(/* parameters */);
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
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::AddEvent(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
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
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::GetMaxLength(/* parameters */);
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
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetSceneInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:403
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::FastBitArray<601>::SetAnd(const const FastBitArray<601> &  lA, const const FastBitArray<601> &  lB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:547
		uint64_t luIndex;

	}
}

void CgsContainers::FastBitArray<601>::SetInverse(const const FastBitArray<601> &  lOther) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:536
		uint64_t luIndex;

	}
}

void BrnTraffic::MakeTrafficEntityId(uint32_t  luVehicle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnTrafficConstants.h:149
	EntityId lEntityId;

	{
		// BrnTrafficConstants.h:149
		EntityId lEntityId;

	}
}

void CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::SetEntityPosition(EntityId  lEntityId, const rw::math::vpu::Vector3  lPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerIO_SceneUpdate.h:881
		InEventSetEntityPosition lEvent;

		{
			// CgsSceneManagerIO_SceneUpdate.h:884
			CgsDev::StrStream lStrStream;

		}
	}
}

extern void InEventSetEntityPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Event() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::AddEvent(const const InEventSetEntityPosition &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[147] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::Vehicle::HasEntity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsCollidable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsFrozen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetVehicleTypeRuntime(uint32_t  luVehicleType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.h:2642
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::vpu::Matrix44AffineFromTranslation(const rw::math::vpu::Vector3  trans) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_inline.h:620
		VectorIntrinsicUnion::VectorIntrinsic row0;

		// matrix44affine_operation_inline.h:621
		VectorIntrinsicUnion::VectorIntrinsic row1;

		// matrix44affine_operation_inline.h:622
		VectorIntrinsicUnion::VectorIntrinsic row2;

		// matrix44affine_operation_inline.h:623
		VectorIntrinsicUnion::VectorIntrinsic row3;

		// matrix44affine_operation_inline.h:625
		VectorIntrinsicUnion::VectorIntrinsic one;

	}
}

void rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(VectorIntrinsicInParam  dest, VectorIntrinsicInParam  src) {
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

void rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(VectorIntrinsicInParam  dest, VectorIntrinsicInParam  src) {
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

void rw::math::vpu::_asmSwizzleStore<VectorAxisZ, VectorAxisZ>(VectorIntrinsicInParam  dest, VectorIntrinsicInParam  src) {
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

void BrnTraffic::MakeTrafficVolumeInstanceId(uint32_t  luVehicle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnTrafficConstants.h:165
	VolumeInstanceId lVolumeInstanceId;

	{
		// BrnTrafficConstants.h:165
		VolumeInstanceId lVolumeInstanceId;

	}
}

void CgsSceneManager::VolumeInstanceId::SetEntityIDOwner(uint8_t  luOwner) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVolumeInstanceId.h:221
		EntityId lEntityId;

	}
}

void CgsSceneManager::VolumeInstanceId::GetEntityId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::SetOwner(uint8_t  luOwner) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::SetEntityId(EntityId  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVolumeInstanceId.h:201
		uint64_t lu64Id;

	}
}

void CgsSceneManager::EntityId::operator std::uint32_t() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::SetEntityIDEntityIndex(uint32_t  luEntityIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVolumeInstanceId.h:229
		EntityId lEntityId;

	}
}

void CgsSceneManager::EntityId::SetEntityIndex(uint32_t  luEntityIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::SetVolumeInstanceTransform(VolumeInstanceId  lVolumeInstanceId, const const rw::math::vpu::Matrix44Affine &  lTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerIO_SceneUpdate.h:1037
		InEventSetVolumeInstanceTransform lEvent;

		{
			// CgsSceneManagerIO_SceneUpdate.h:1040
			CgsDev::StrStream lStrStream;

		}
	}
}

extern void InEventSetVolumeInstanceTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::AddEvent(const const InEventSetVolumeInstanceTransform &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[156] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

extern InEventSetVolumeInstanceTransform & operator=(const const InEventSetVolumeInstanceTransform &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GenerateSceneUpdateEvents(OutputBuffer_PostPhysics *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:13987
		Iterator lItVehicle;

		// BrnTrafficEntityModule.cpp:13988
		FastBitArray<601> lVehicles_AE_NonCollidable;

		// BrnTrafficEntityModule.cpp:13989
		FastBitArray<601> lVehicles_AE_Collidable;

		// BrnTrafficEntityModule.cpp:13990
		FastBitArray<601> lVehicles_NonCollidable;

		// BrnTrafficEntityModule.cpp:13992
		OutputBuffer_Prepare::SceneInputInterface * lpSceneInputInterface;

	}
	CgsContainers::FastBitArray<601>::Iterator::Iterator(/* parameters */);
	BrnTrafficIO::OutputBuffer_PostPhysics::GetSceneInputInterface(/* parameters */);
	CgsContainers::FastBitArray<601>::SetAnd(/* parameters */);
	CgsContainers::FastBitArray<601>::SetAnd(/* parameters */);
	CgsContainers::FastBitArray<601>::SetInverse(/* parameters */);
	CgsContainers::FastBitArray<601>::SetAnd(/* parameters */);
	CgsContainers::FastBitArray<601>::Begin(/* parameters */);
	CgsContainers::FastBitArray<601>::Iterator::operator!=(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:14010
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:14019
		Matrix44Affine lTransform;

		MakeTrafficEntityId(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::SetEntityPosition(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::AddEvent(/* parameters */);
	}
	CgsContainers::FastBitArray<601>::Iterator::GetIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::FastBitArray<601>::Begin(/* parameters */);
	CgsContainers::FastBitArray<601>::Iterator::operator!=(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:14028
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:14029
		const Vehicle * lpVehicle;

		// BrnTrafficEntityModule.cpp:14037
		const VehicleTypeRuntime * lpVehicleTypeRuntime;

		// BrnTrafficEntityModule.cpp:14038
		Matrix44Affine lTransform;

		// BrnTrafficEntityModule.cpp:14039
		Matrix44Affine lTranslate;

		Vehicle::IsFrozen(/* parameters */);
		Vehicle::GetVehicleType(/* parameters */);
		GetVehicleTypeRuntime(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44AffineFromTranslation(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
		MakeTrafficEntityId(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::SetEntityPosition(/* parameters */);
		MakeTrafficVolumeInstanceId(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::SetVolumeInstanceTransform(/* parameters */);
		CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::AddEvent(/* parameters */);
	}
	CgsContainers::FastBitArray<601>::Iterator::GetIndex(/* parameters */);
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

void rw::math::vpu::operator><VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:374
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:376
		bool ret;

	}
}

void BrnTraffic::Pvs::GetHullIndexForPoint(const rw::math::vpu::Vector3  lPoint) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficPvs.h:128
		Vector3 lGridSpace;

		// BrnTrafficPvs.h:129
		Vector3 lScaled;

		// BrnTrafficPvs.h:131
		int32_t liIndexX;

		// BrnTrafficPvs.h:132
		int32_t liIndexZ;

		// BrnTrafficPvs.h:140
		uint32_t luIndex;

	}
}

void rw::math::vpu::Mult(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:104
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
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

void rw::core::stdc::Max(int  a, int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::stdc::Min(int  a, int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetNetworkInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:391
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::TrafficNetworkOutputInterface::SetActiveHull(EActiveRaceCarIndex  leActiveRaceCarIndex, uint16_t  lu16ActiveHull) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::TrafficNetworkOutputInterface::SetDetectedHullSyncDivergence(bool  lbDetected) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::TrafficNetworkOutputInterface::ActivateHull(EActiveRaceCarIndex  leActiveRaceCarIndex, uint32_t  luNewActiveHull, uint32_t  luUpdateFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficNetworkInterfaces.h:314
		ActivateHullEvent lEvent;

	}
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::AddEvent(const const ActivateHullEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[133] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::TrafficNetworkOutputInterface::SetDataHash(uint32_t  luUpdateFrame, uint16_t  luHash) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GenerateNetworkUpdateEvents(const InputBuffer_PostPhysics *  lpInput, OutputBuffer_PostPhysics *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:14794
		EActiveRaceCarIndex leActiveRaceCarIndex;

	}
	{
		// BrnTrafficEntityModule.cpp:14802
		uint16_t lu16ActiveHull;

		BrnTrafficIO::InputBuffer_PostPhysics::GetActiveRaceCarOutputInterface(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:14808
			const RCEntityActiveRaceCarOutputInterface::RaceCarState * lpRaceCarState;

			// BrnTrafficEntityModule.cpp:14816
			Vector3 lRaceCarPos;

			// BrnTrafficEntityModule.cpp:14817
			Vector3 lXZPos;

			// BrnTrafficEntityModule.cpp:14819
			Vector3 lDiff;

			// BrnTrafficEntityModule.cpp:14820
			VecFloat lfDistSq;

			BrnTrafficIO::InputBuffer_PostPhysics::GetActiveRaceCarOutputInterface(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
			rw::math::vpu::Vector3::SetY(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator>(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
		}
		BrnTrafficIO::OutputBuffer_PostPhysics::GetNetworkInterface(/* parameters */);
		BrnTrafficIO::TrafficNetworkOutputInterface::SetActiveHull(/* parameters */);
	}
	operator++(/* parameters */);
	BrnTrafficIO::OutputBuffer_PostPhysics::GetNetworkInterface(/* parameters */);
	BrnTrafficIO::TrafficNetworkOutputInterface::SetDetectedHullSyncDivergence(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::operator><VectorAxisY>(/* parameters */);
	Pvs::GetHullIndexForPoint(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	BrnTrafficIO::OutputBuffer_PostPhysics::GetNetworkInterface(/* parameters */);
	BrnTrafficIO::TrafficNetworkOutputInterface::ActivateHull(/* parameters */);
	IsDecisionFrame(/* parameters */);
	BrnTrafficIO::OutputBuffer_PostPhysics::GetNetworkInterface(/* parameters */);
	BrnTrafficIO::TrafficNetworkOutputInterface::SetDataHash(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<uint16_t>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<uint16_t>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::AddEvent(const const TrafficTypeResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[135] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::ProcessTrafficTypeRequests(const VehicleManagerOutputInterface::TrafficTypeRequestQueue *  lpRequestQueue, OutputBuffer_PostPhysics::TrafficTypeResponseQueue *  lpResponseQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:15536
		int32_t liRequestIndex;

	}
	{
		// BrnTrafficEntityModule.cpp:15540
		TrafficTypeResponse lResponse;

		// BrnTrafficEntityModule.cpp:15543
		Vehicle * lpVehicle;

		CgsModule::BaseEventQueue<uint16_t>::GetEvent(/* parameters */);
		GetVehicle(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:15551
			const VehicleTypeData * lpVehicleType;

			Vehicle::GetVehicleType(/* parameters */);
			VehicleAsset::GetVehicleId(/* parameters */);
		}
		CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::AddEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::AddEvent(const const InEventAddDynamicVolume &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[146] __PRETTY_FUNCTION__;

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

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsDev::StrStreamBase::operator<<(CgsDev::PrintMode  lePrintMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::Flags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::SetBit(const uint32_t  luIndex) {
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

void CgsModule::BaseEventQueue<BrnTraffic::DetachedPartRenderEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::DetachedPartRenderEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern DetachedPartRenderEvent & operator=(const const DetachedPartRenderEvent &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::DetachedPartRenderEvent>::AddEvent(const const DetachedPartRenderEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[125] __PRETTY_FUNCTION__;

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
	{
		(None)unknown_arg
		(None)unknown_arg
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void CgsModule::BaseEventQueue<BrnTraffic::DetachedPartRenderEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnTraffic::DetachedPartRenderEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::AddEvent(const const InEventRemoveEntity &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[142] __PRETTY_FUNCTION__;

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

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::AddEvent(const const InEventAddEntity &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[139] __PRETTY_FUNCTION__;

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

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::AddEvent(const const InRemoveTriggerEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[143] __PRETTY_FUNCTION__;

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

void CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::AddEvent(const const InEventRemoveVolumeInstance &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[150] __PRETTY_FUNCTION__;

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

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::AddEvent(const const InEventRemoveForCollision &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[148] __PRETTY_FUNCTION__;

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

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::AddEvent(const const InEventAddForCollision &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[145] __PRETTY_FUNCTION__;

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

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern InEventAddVolumeInstance & operator=(const const InEventAddVolumeInstance &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::AddEvent(const const InEventAddVolumeInstance &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[147] __PRETTY_FUNCTION__;

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
	{
		(None)unknown_arg
		(None)unknown_arg
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::AddEvent(const const InEventAddVolumeInstanceForCaching &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[157] __PRETTY_FUNCTION__;

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

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::AddEvent(const const InEventSetVolumeInstanceCullingGroup &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[159] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>::AddEvent(const const RemoveCrashedTrafficEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[134] __PRETTY_FUNCTION__;

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

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>::AddEvent(const const RemoveSlammedTrafficEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[134] __PRETTY_FUNCTION__;

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

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::AddEvent(const const RemoveTrafficEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[129] __PRETTY_FUNCTION__;

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

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::FastBitArray<601>::UnSetBit(const int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:451
		int32_t liMaskIndex;

		// CgsFastBitArray.h:452
		int32_t liBitIndex;

		{
			// CgsFastBitArray.h:449
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

void CgsContainers::FastBitArray<601>::UnSetBit(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>::AddEvent(const const AddCrashingTrafficEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[132] __PRETTY_FUNCTION__;

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

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::Vehicle::GetTargetPos() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::CompNotEqual(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:342
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Select(const MaskScalar  mask, const rw::math::vpu::Vector3  trueValue, const rw::math::vpu::Vector3  falseValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:772
		VectorIntrinsicUnion::VectorIntrinsic result;

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

void BrnTraffic::Vehicle::SetCurrentManoeuvre(BrnTraffic::Vehicle::Manoeuvre  leManoeuvre) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::GetCurrentManoeuvrePhase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::SetCurrentManoeuvrePhase(int8_t  liPhase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::Update3PointTurnManoeuvre(uint32_t  luVehicle, BrnTrafficDriverControls *  lpDriverControls) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:16616
		Vehicle * lpVehicle;

		// BrnTrafficEntityModule.cpp:16624
		Vector3 lTargetPos;

		// BrnTrafficEntityModule.cpp:16625
		Vector3 lDiff;

		// BrnTrafficEntityModule.cpp:16626
		Vector3 lDirToTarget;

	}
	GetVehicle(/* parameters */);
	Vehicle::GetCurrentManoeuvre(/* parameters */);
	Vehicle::GetTargetPos(/* parameters */);
	GetVehicleTransform(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
	}
	rw::math::vpu::CompNotEqual(/* parameters */);
	GetVehicleTransform(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	GetVehicleTransform(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	Vehicle::SetCurrentManoeuvre(/* parameters */);
	Vehicle::GetCurrentManoeuvrePhase(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:16643
		Vector3 lVehicleRight;

		// BrnTrafficEntityModule.cpp:16644
		float32_t lfSteering;

		GetVehicleTransform(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::fpu::Abs<float>(/* parameters */);
		Vehicle::SetCurrentManoeuvrePhase(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:16662
		Vector3 lVehicleRight;

		// BrnTrafficEntityModule.cpp:16663
		float32_t lfSteering;

		GetVehicleTransform(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:16673
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		Vehicle::GetCurrentManoeuvrePhase(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::AddEvent(const const SetTrafficCrashingEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[134] __PRETTY_FUNCTION__;

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

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::FastBitArray<601>::SetBit(const int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:430
		int32_t liMaskIndex;

		// CgsFastBitArray.h:431
		int32_t liBitIndex;

		{
			// CgsFastBitArray.h:428
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

void CgsContainers::FastBitArray<601>::SetBit(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::FastBitArray<601>::Iterator::GetMask() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:371
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::FastBitArray<601>::IsBitSet(const const FastBitArray<601>::Iterator &  lIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:414
		int32_t liIndex;

		// CgsFastBitArray.h:415
		int32_t liMaskIndex;

		Iterator::GetIndex(/* parameters */);
	}
	Iterator::GetIndex(/* parameters */);
	Iterator::GetMask(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsFastBitArray.h:412
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		Iterator::GetIndex(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsContainers::FastBitArray<601>::SetBit(const const FastBitArray<601>::Iterator &  lIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:441
		int32_t liMaskIndex;

		{
			// CgsFastBitArray.h:439
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::FastBitArray<601>::UnSetBit(const const FastBitArray<601>::Iterator &  lIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:462
		int32_t liMaskIndex;

		{
			// CgsFastBitArray.h:460
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnTraffic::Vehicle::SetCollidable(bool  lbCollidable, const const FastBitArray<601>::Iterator &  lItVehicle, const VehicleSoaData &  lSoaData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FastBitArray<601>::SetBit(/* parameters */);
	CgsContainers::FastBitArray<601>::UnSetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsContainers::FastBitArray<601>::Iterator::GetIndex(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsContainers::FastBitArray<601>::Iterator::GetIndex(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	}
}

void CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsSceneManager::EntityId::GetEntityIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Param::IsDying() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Param::ShouldBeRemoved() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Param::IsZombie() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Param::DEBUG_GetFlags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::DEBUG_GetFlags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetStaticTrafficParamFromFullVehicleIndex(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::StaticTrafficParam::IsDying() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::StaticTrafficParam::IsZombie() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::StaticTrafficParam::ShouldBeRemoved() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::SetVolumeInstanceCullingGroup(VolumeInstanceId  lVolumeInstanceId, SetRaceCarCullingGroupEvent::CullingGroup  lCullingGroup) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerIO_SceneUpdate.h:1107
		InEventSetVolumeInstanceCullingGroup lEvent;

		{
			// CgsSceneManagerIO_SceneUpdate.h:1110
			CgsDev::StrStream lStrStream;

		}
	}
}

extern void InEventSetVolumeInstanceCullingGroup() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddVolumeInstanceForCaching(VolumeInstanceId  lVolumeInstanceId, CgsSceneManager::SceneManagerIO::EAddForCollisionCacheOptions  leCacheOptions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerIO_SceneUpdate.h:1235
		InEventAddVolumeInstanceForCaching lEvent;

		{
			// CgsSceneManagerIO_SceneUpdate.h:1240
			CgsDev::StrStream lStrStream;

		}
	}
}

extern void InEventAddVolumeInstanceForCaching() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddVolumeInstance(VolumeInstanceId  lVolumeInstanceId, VolumeId  lVolumeId, const const rw::math::vpu::Matrix44Affine &  lTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerIO_SceneUpdate.h:996
		InEventAddVolumeInstance lEvent;

		{
			// CgsSceneManagerIO_SceneUpdate.h:994
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsSceneManagerIO_SceneUpdate.h:1000
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsSceneManager::VolumeInstanceId::GetEntityIDOwner() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::GetOwner() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void InEventAddVolumeInstance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeId::VolumeId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const VecFloat  s, const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:400
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddForCollision(VolumeInstanceId  lVolumeInstanceId, SetRaceCarCullingGroupEvent::CullingGroup  lCullGroup, rw::physics::BodyState  leBodyState, const rw::math::vpu::Vector3  lPadding, CgsSceneManager::SceneManagerIO::EAddForCollisionCacheOptions  leCacheOptions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerIO_SceneUpdate.h:1064
		InEventAddForCollision lEvent;

		{
			// CgsSceneManagerIO_SceneUpdate.h:1070
			CgsDev::StrStream lStrStream;

		}
	}
}

extern void InEventAddForCollision() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneManagerIO::InEventAddForCollision::SetBodyState(rw::physics::BodyState  leBodyState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneManagerIO::InEventAddForCollision::SetCacheOptions(CgsSceneManager::SceneManagerIO::EAddForCollisionCacheOptions  leOptions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<601>::Iterator::ConstructOrphan(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GenerateCrashedVehicleEvents(OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:5023
		uint32_t luCrashedVehicle;

		CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::GetLength(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:5025
			const TrafficCrashInfo * lpCrashInfo;

			// BrnTrafficEntityModule.cpp:5026
			EntityId lVictimId;

			// BrnTrafficEntityModule.cpp:5027
			EntityId lCauserId;

			// BrnTrafficEntityModule.cpp:5031
			uint32_t luVehicle;

			// BrnTrafficEntityModule.cpp:5040
			VolumeInstanceId lVictimVolume;

			// BrnTrafficEntityModule.cpp:5043
			bool lbShouldSetCullingGroup;

			{
				// BrnTrafficEntityModule.cpp:5080
				Vehicle * lpVehicle;

				{
					// BrnTrafficEntityModule.cpp:5098
					uint32_t luVolumeId;

					// BrnTrafficEntityModule.cpp:5112
					Iterator lItVehicle;

				}
			}
		}
		CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::operator[](/* parameters */);
	}
	CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::Clear(/* parameters */);
	CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:5047
		const BrnTraffic::Param * lpParam;

		Param::IsAlive(/* parameters */);
	}
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::SetVolumeInstanceCullingGroup(/* parameters */);
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddVolumeInstanceForCaching(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:5029
		CgsDev::StrStream lStrStream;

	}
	{
	}
	{
		// BrnTrafficEntityModule.cpp:5057
		const StaticTrafficParam * lpStaticParam;

		GetStaticTrafficParamFromFullVehicleIndex(/* parameters */);
		StaticTrafficParam::IsAlive(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:5074
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnTrafficEntityModule.cpp:5066
		const Vehicle * lpTrailer;

	}
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddVolumeInstance(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::AddEvent(/* parameters */);
	operator=(/* parameters */);
	Vehicle::GetSpeed(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddForCollision(/* parameters */);
	CgsSceneManager::SceneManagerIO::InEventAddForCollision::SetCacheOptions(/* parameters */);
	CgsSceneManager::SceneManagerIO::InEventAddForCollision::SetBodyState(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::AddEvent(/* parameters */);
	CgsContainers::FastBitArray<601>::Iterator::ConstructOrphan(/* parameters */);
	CgsContainers::FastBitArray<601>::Iterator::Iterator(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:5051
		CgsDev::StrStream lStrStream;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
	{
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	{
	}
}

void CgsContainers::FastBitArray<601>::IsBitSet(const int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:395
		int32_t liMaskIndex;

		// CgsFastBitArray.h:396
		int32_t liBitIndex;

		{
			// CgsFastBitArray.h:393
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

void CgsContainers::FastBitArray<601>::IsBitSet(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::TrafficToRaceCarInterface_PreScene::ClearStompees() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator-=(const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:392
		VectorIntrinsicUnion::VectorIntrinsic r;

		// vec_float_type_inline.h:392
		VectorIntrinsicUnion::VectorIntrinsic bVI;

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

void CgsNumeric::SolveQuadratic(const VecFloat  lfA, const VecFloat  lfB, const VecFloat  lfC, const VecFloat &  lfOutX0, const VecFloat &  lfOutX1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPolynomial.h:50
		MaskScalar lDenominatorValid;

		// CgsPolynomial.h:53
		VecFloat lfSqrtTerm;

		// CgsPolynomial.h:56
		MaskScalar lSqrtTermValid;

		// CgsPolynomial.h:59
		VecFloat lfRecipDenominator;

	}
}

void rw::math::vpu::GetVecFloat_Two() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::CompGreaterEqual(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:328
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Reciprocal(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:172
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// scalar_operation_inline.h:173
			VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

			// scalar_operation_inline.h:173
			VectorIntrinsicUnion::VectorIntrinsic vOne;

			{
				// scalar_operation_inline.h:173
				VectorIntrinsicUnion::VectorIntrinsic estimate;

				// scalar_operation_inline.h:173
				VectorIntrinsicUnion::VectorIntrinsic vOne;

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

void rw::math::vpu::GetVecFloat_NegativeOne() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::And(const MaskScalar  a, const MaskScalar  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// maskscalar_operation_inline.h:31
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void BrnMath::Magnitude2D(const rw::math::vpu::Vector3  lVector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(float  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::SetFloat(float  f) {
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

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:453
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void CgsDev::DebugInterface::DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeAquire() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Sqrt<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugInterface::~DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeRelease(DebugManager *  lpDebugManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetFirstUnusedShowtimeVehicleInfo(const uint32_t &  luInfoIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.h:2746
		ShowtimeVehicleInfo * lpInfo;

	}
}

void BrnTraffic::Vehicle::GetLinearVelocity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(float  s, const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:460
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator+=(const Vector3 &  v, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:344
		VectorIntrinsicUnion::VectorIntrinsic r;

		// vec_float_type_inline.h:344
		VectorIntrinsicUnion::VectorIntrinsic bVI;

	}
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PreScene::AddPotentialScoree(const rw::math::vpu::Vector3  lVehiclePosition, float32_t  lfDistanceSquared, int32_t  liVehicleScore, int32_t  liVehicleMultiplier, uint16_t  luVehicleIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:514
		VehicleScoreData * lpData;

		{
			// BrnTrafficEntityModuleIO.h:522
			int32_t liIndex;

			// BrnTrafficEntityModuleIO.h:523
			int32_t liEndIndex;

		}
	}
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>::IsFull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>::Grow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:284
		VehicleScoreData * lpNew;

		{
			// CgsArray.h:282
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::TrafficToRaceCarInterface_PreScene::AddPotentialStompee(uint32_t  liTrafficCarIndex, const rw::math::vpu::Vector3  lTrafficCarPosition, float32_t  lfDistanceSquared) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficToRaceCarInterface.h:332
		int32_t liIndex;

	}
}

void BrnTraffic::TrafficEntityModule::GeneratePotentialLeapedAndStompedCarsOutput(const InputBuffer_PreScene *  lpInput, OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnTrafficIO::OutputBuffer_PreScene::GetTrafficToRaceCarInterface_PreScene(/* parameters */);
	BrnTrafficIO::TrafficToRaceCarInterface_PreScene::ClearStompees(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:3656
		const RaceCarState * lpPlayerRaceCarState;

		// BrnTrafficEntityModule.cpp:3657
		float32_t lfGroundHeight;

		// BrnTrafficEntityModule.cpp:3658
		VecFloat lfT0;

		// BrnTrafficEntityModule.cpp:3658
		VecFloat lfT1;

		// BrnTrafficEntityModule.cpp:3659
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:3660
		float32_t lfMinDistSq;

		// BrnTrafficEntityModule.cpp:3661
		float32_t lfMaxDistSq;

		// BrnTrafficEntityModule.cpp:3662
		float32_t lfTimeUntilLanding;

		// BrnTrafficEntityModule.cpp:3738
		Vector3 lPlayerPosition;

		BrnTrafficIO::InputBuffer_PreScene::GetActiveRaceCarOutputInterface(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
		CgsNumeric::SolveQuadratic(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::GetVecFloat_Zero(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Reciprocal(/* parameters */);
		rw::math::vpu::CompNotEqual(/* parameters */);
		rw::math::vpu::GetVecFloat_NegativeOne(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Sqrt(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::And(/* parameters */);
		rw::math::vpu::MaskScalar::GetBool(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		BrnTrafficIO::InputBuffer_PreScene::GetActiveRaceCarOutputInterface(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:3742
			Vehicle * lpVehicle;

			{
				// BrnTrafficEntityModule.cpp:3747
				uint32_t luShowtimeInfoIndex;

				// BrnTrafficEntityModule.cpp:3748
				ShowtimeVehicleInfo * lpShowtimeInfo;

				// BrnTrafficEntityModule.cpp:3756
				Vector3 lTrafficStompPos;

				// BrnTrafficEntityModule.cpp:3759
				Vector3 lPlayerToVehicle;

				// BrnTrafficEntityModule.cpp:3760
				Vector3 lPlayerToStompPos;

				// BrnTrafficEntityModule.cpp:3762
				float32_t lfDistanceSq;

				// BrnTrafficEntityModule.cpp:3763
				float32_t lfDistanceStompSq;

				// BrnTrafficEntityModule.cpp:3766
				bool lbOnScreenVehicle;

				GetFirstUnusedShowtimeVehicleInfo(/* parameters */);
				rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
				Vehicle::GetLinearVelocity(/* parameters */);
				rw::math::vpu::IsValid(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::operator*<VectorAxisZ, VectorAxisZ>(/* parameters */);
				rw::math::vpu::operator*<VectorAxisX, VectorAxisX>(/* parameters */);
				rw::math::vpu::operator+=(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::VecFloat::operator float(/* parameters */);
				rw::math::vpu::operator*<VectorAxisZ, VectorAxisZ>(/* parameters */);
				rw::math::vpu::operator*<VectorAxisX, VectorAxisX>(/* parameters */);
				rw::math::vpu::VecFloat::operator float(/* parameters */);
				BrnTrafficIO::OutputBuffer_PreScene::GetTrafficToRaceCarInterface_PreScene(/* parameters */);
				BrnTrafficIO::TrafficToRaceCarInterface_PreScene::AddPotentialStompee(/* parameters */);
			}
		}
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:3772
		int32_t liScore;

		// BrnTrafficEntityModule.cpp:3773
		int32_t liMultiplier;

		// BrnTrafficEntityModule.cpp:3774
		BrnTraffic::VehicleScoreCategory leCategory;

		// BrnTrafficEntityModule.cpp:3776
		const VehicleTypeData * lpVehicleType;

		// BrnTrafficEntityModule.cpp:3777
		BrnTraffic::VehicleClass leClass;

		// BrnTrafficEntityModule.cpp:3778
		CgsID lTypeID;

		// BrnTrafficEntityModule.cpp:3782
		Vector3 lVehiclePos;

		Vehicle::GetVehicleType(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
		BrnTrafficIO::OutputBuffer_PreScene::AddPotentialScoree(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
		rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
		CgsContainers::Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>::IsFull(/* parameters */);
		CgsContainers::Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>::Grow(/* parameters */);
		{
		}
	}
	{
	}
	CgsContainers::Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:3727
		DebugInterface lDebugInterface;

		// BrnTrafficEntityModule.cpp:3728
		const DebugRender & lDebugRender;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
		rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
		rw::math::fpu::Sqrt<float>(/* parameters */);
		CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::Vector3::Y(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator-=(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:3703
		float32_t lfDistanceTravelledXZ;

		// BrnTrafficEntityModule.cpp:3712
		Vector3 lLinearVelocityXZ;

		BrnMath::Magnitude2D(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX, VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Sqrt(/* parameters */);
		{
		}
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::fpu::Max<float>(/* parameters */);
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnTraffic::TrafficEntityModule::IsVehiclesParamAZombie(uint32_t  luVehicle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:4675
		uint32_t luCab;

	}
	{
		// BrnTrafficEntityModule.cpp:4682
		CgsDev::StrStream lStrStream;

	}
}

void CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddEntity(EntityId  lEntityId, InEventLineTestFine::EntityTypeFlags  lx32EntityTypeFlags, const rw::math::vpu::Vector3  lPosition, float32_t  lfRadius) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerIO_SceneUpdate.h:820
		InEventAddEntity lEvent;

		{
			// CgsSceneManagerIO_SceneUpdate.h:825
			CgsDev::StrStream lStrStream;

		}
	}
}

extern void InEventAddEntity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::SetHasEntity(bool  lbHasEntity, uint32_t  luVehicle, const VehicleSoaData &  lSoaData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::CreateNewVehicleEntities(OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:4529
		FastBitArray<601> lVehicles_NoEntity;

		// BrnTrafficEntityModule.cpp:4530
		FastBitArray<601> lVehicles_Alive_And_NoEntity;

		// BrnTrafficEntityModule.cpp:4531
		Iterator lItVehicle;

	}
	CgsContainers::FastBitArray<601>::Iterator::Iterator(/* parameters */);
	CgsContainers::FastBitArray<601>::SetInverse(/* parameters */);
	CgsContainers::FastBitArray<601>::SetAnd(/* parameters */);
	CgsContainers::FastBitArray<601>::Begin(/* parameters */);
	CgsContainers::FastBitArray<601>::Iterator::operator!=(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:4541
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:4542
		Vehicle * lpVehicle;

		IsVehiclesParamAZombie(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:4558
			const VehicleTypeRuntime * lpVehicleTypeRuntime;

			// BrnTrafficEntityModule.cpp:4561
			float32_t lfRadius;

			// BrnTrafficEntityModule.cpp:4564
			Matrix44Affine lTransform;

			// BrnTrafficEntityModule.cpp:4565
			Matrix44Affine lTranslate;

			Vehicle::GetVehicleType(/* parameters */);
			GetVehicleTypeRuntime(/* parameters */);
			rw::math::vpu::Magnitude(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			GetVehicleTransform(/* parameters */);
			{
			}
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			BrnTrafficIO::OutputBuffer_PreScene::GetSceneInputInterface(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			MakeTrafficEntityId(/* parameters */);
			CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddEntity(/* parameters */);
			CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::AddEvent(/* parameters */);
			Vehicle::SetHasEntity(/* parameters */);
		}
	}
	CgsContainers::FastBitArray<601>::Iterator::GetIndex(/* parameters */);
	GetVehicleSpecies(/* parameters */);
	{
		GetVehicle(/* parameters */);
		Vehicle::GetCabIndex(/* parameters */);
		GetParam(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::GetMaxLength(/* parameters */);
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

extern void Camera() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44Template<double>::Matrix44Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::Vector4Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::SetFarClipPlane(float32_t  lFarClipPlane) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Min(const rw::math::vpu::Vector3  v0, const rw::math::vpu::Vector3  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:305
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Max(const rw::math::vpu::Vector3  v0, const rw::math::vpu::Vector3  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:312
		VectorIntrinsicUnion::VectorIntrinsic r;

	}
}

void BrnTraffic::Pvs::GetHullIndexForPoint(const rw::math::vpu::Vector3  lPoint, const int32_t &  liIndexX, const int32_t &  liIndexZ) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficPvs.h:158
		Vector3 lGridSpace;

		// BrnTrafficPvs.h:159
		Vector3 lScaled;

		// BrnTrafficPvs.h:170
		uint32_t luIndex;

	}
}

void BrnTraffic::Pvs::GetHullIndexForIndices(int32_t  liIndexX, int32_t  liIndexZ) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficPvs.h:187
		uint32_t luIndex;

	}
}

void BrnTraffic::TrafficEntityModule::IsHullActive(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::RenderTrafficLightCoronas(BrnCoronaManager::BrnSubmissionInterface *  lpCoronaSubmissionInterface, const rw::math::vpu::Vector3  lCameraPosition, const rw::math::vpu::Vector3  lCameraDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:3394
		Vector3[8] laFrustrumPoints;

		// BrnTrafficEntityModule.cpp:3395
		Vector3 lFrustrumMin;

		// BrnTrafficEntityModule.cpp:3396
		Vector3 lFrustrumMax;

		// BrnTrafficEntityModule.cpp:3397
		Camera lCamera;

		// BrnTrafficEntityModule.cpp:3398
		uint32_t luIndex;

		// BrnTrafficEntityModule.cpp:3414
		int32_t liHullIndexMinX;

		// BrnTrafficEntityModule.cpp:3415
		int32_t liHullIndexMinZ;

		// BrnTrafficEntityModule.cpp:3416
		int32_t liHullIndexMaxX;

		// BrnTrafficEntityModule.cpp:3417
		int32_t liHullIndexMaxZ;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:3378
		uint32_t luActiveHull;

		{
			// BrnTrafficEntityModule.cpp:3380
			const BrnTraffic::Hull * lpHull;

			GetHull(/* parameters */);
			CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		}
		CgsContainers::Set<uint16_t,72u>::GetLength(/* parameters */);
		CgsContainers::Set<uint16_t,72u>::operator[](/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsGraphics::Camera::SetFarClipPlane(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Max(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	Pvs::GetHullIndexForPoint(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	Pvs::GetHullIndexForPoint(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:3423
		int32_t liHullZ;

		{
			// BrnTrafficEntityModule.cpp:3425
			int32_t liHullX;

		}
	}
	{
		// BrnTrafficEntityModule.cpp:3427
		uint32_t luHullIndex;

		// BrnTrafficEntityModule.cpp:3428
		const BrnTraffic::Hull * lpHull;

	}
	Pvs::GetHullIndexForIndices(/* parameters */);
	GetHull(/* parameters */);
	IsHullActive(/* parameters */);
	CgsContainers::Set<uint16_t,72u>::Contains(/* parameters */);
	CgsContainers::Set<uint16_t,72u>::Find(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::TrafficEntityModule::DEBUGValidateSoaData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:1869
		uint32_t luParam;

		// BrnTrafficEntityModule.cpp:1881
		uint32_t luVehicle;

		GetParam(/* parameters */);
		CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
		CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
		CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
		GetVehicle(/* parameters */);
		CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
		CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
		CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
		CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
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
}

void BrnTraffic::Vehicle::SetHasEntity(None, None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
	CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
	CgsContainers::FastBitArray<601>::SetBit(/* parameters */);
	CgsContainers::FastBitArray<601>::UnSetBit(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::Vehicle::DetachArticulation(uint32_t  luVehicle, const VehicleSoaData &  lSoaData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
	CgsContainers::FastBitArray<601>::UnSetBit(/* parameters */);
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
}

void BrnTraffic::Vehicle::IsRecoveringFromSlam() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsExtremeSwerving() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetRaceCarState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::NormalizeReturnMagnitude(const rw::math::vpu::Vector3  v, const Vector3 &  result) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:209
		VectorIntrinsicUnion::VectorIntrinsic magnitude;

		{
			// vector3_operation_inline.h:210
			VectorIntrinsicUnion::VectorIntrinsic temp_dot;

			// vector3_operation_inline.h:210
			VectorIntrinsicUnion::VectorIntrinsic one_over_rqrt;

			// vector3_operation_inline.h:210
			VectorIntrinsicUnion::VectorIntrinsic result_mag;

			// vector3_operation_inline.h:210
			VectorIntrinsicUnion::VectorIntrinsic zero;

			// vector3_operation_inline.h:210
			VectorIntrinsicUnion::VectorIntrinsic input_is_zero;

			{
				// vector3_operation_inline.h:210
				VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

				// vector3_operation_inline.h:210
				VectorIntrinsicUnion::VectorIntrinsic yy;

				// vector3_operation_inline.h:210
				VectorIntrinsicUnion::VectorIntrinsic zz;

			}
			{
				// vector3_operation_inline.h:210
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vector3_operation_inline.h:210
				VectorIntrinsicUnion::VectorIntrinsic vZero;

				// vector3_operation_inline.h:210
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				// vector3_operation_inline.h:210
				VectorIntrinsicUnion::VectorIntrinsic vHalf;

				{
					// vector3_operation_inline.h:210
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector3_operation_inline.h:210
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:210
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:210
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

				}
			}
		}
	}
}

void rw::math::vpu::GetVecFloat_One() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVecFloat_Half() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnTraffic::TweakValues::GetMinNormalAcceleration() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TweakValues::GetMaxNormalAcceleration() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TweakValues::GetMinStopDist() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TweakValues::GetMinAcceleration() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TweakValues::GetMaxAcceleration() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateParams_CalcAcceleration(uint32_t  luParam, const BrnTraffic::Param *  lpParam, const Section *  lpSection, const const FastBitArray<601> &  lVehicles_Alive_And_Physical) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:10795
		float32_t lfAcceleration;

		// BrnTrafficEntityModule.cpp:10796
		float32_t lfSectionSpeed;

		// BrnTrafficEntityModule.cpp:10797
		float32_t lfTargetSpeedScale;

		// BrnTrafficEntityModule.cpp:10798
		float32_t lfMaxSpeed;

	}
	CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:10809
		const Vehicle * lpVehicle;

		GetVehicle(/* parameters */);
		Vehicle::IsRecoveringFromSlam(/* parameters */);
		Vehicle::IsExtremeSwerving(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:10835
		const ParamTransform * lpParamTransform;

		// BrnTrafficEntityModule.cpp:10836
		Vector3 lDiff;

		// BrnTrafficEntityModule.cpp:10837
		Vector3 lDir;

		// BrnTrafficEntityModule.cpp:10838
		VecFloat lfDist;

		// BrnTrafficEntityModule.cpp:10839
		VecFloat lfDot;

		// BrnTrafficEntityModule.cpp:10843
		VecFloat lfDirSpeed;

		// BrnTrafficEntityModule.cpp:10846
		VecFloat lfDistScale;

		// BrnTrafficEntityModule.cpp:10847
		VecFloat lfDistSpeed;

		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
	TweakValues::GetMinAcceleration(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:10904
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetParamTransform(/* parameters */);
	ParamTransform::GetLerpedPos(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::NormalizeReturnMagnitude(/* parameters */);
	ParamTransform::GetDirection(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Subtract(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Add(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:10880
		float32_t lfTarget;

		// BrnTrafficEntityModule.cpp:10881
		float32_t lfCurrent;

		rw::math::fpu::Clamp<float>(/* parameters */);
		TweakValues::GetMaxAcceleration(/* parameters */);
		TweakValues::GetMinAcceleration(/* parameters */);
		rw::math::fpu::Min<float>(/* parameters */);
		rw::math::fpu::Clamp<float>(/* parameters */);
	}
	rw::math::fpu::Clamp<float>(/* parameters */);
	TweakValues::GetMaxNormalAcceleration(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	TweakValues::GetMinNormalAcceleration(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
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
	{
		// BrnTrafficEntityModule.cpp:10812
		const ParamTransform * lpParamTransform;

		// BrnTrafficEntityModule.cpp:10813
		Vector3 lDiff;

		// BrnTrafficEntityModule.cpp:10815
		float32_t lfSignedDist;

		// BrnTrafficEntityModule.cpp:10816
		float32_t lfScaledDist;

		GetParamTransform(/* parameters */);
		GetVehicleTransform(/* parameters */);
		ParamTransform::GetLerpedPos(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		ParamTransform::GetDirection(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
	rw::math::fpu::Clamp<float>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnTraffic::BrnTrafficIO::TrafficAIEntity::TrafficAIEntity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostScene::GetTrafficAIInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:256
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::TrafficAIInterface::AddTrafficEntity(const const TrafficAIEntity &  lEntity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::ConvertSceneResultsToTrafficDataForAI(OutputBuffer_PostScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:14740
		EActiveRaceCarIndex leAICarIndex;

	}
	{
		// BrnTrafficEntityModule.cpp:14745
		StoredAITrafficData * lpCurrentAICar;

		// BrnTrafficEntityModule.cpp:14746
		int32_t liNearbyTraffic;

		{
			// BrnTrafficEntityModule.cpp:14750
			EntityId lTrafficID;

			// BrnTrafficEntityModule.cpp:14757
			uint32_t luVehicle;

			// BrnTrafficEntityModule.cpp:14758
			const Vehicle * lpVehicle;

			Vehicle::IsAlive(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:14764
				uint16_t luTypeIndex;

				// BrnTrafficEntityModule.cpp:14765
				const VehicleTypeRuntime * lpRuntime;

				// BrnTrafficEntityModule.cpp:14766
				TrafficAIEntity lTrafficEntity;

				Vehicle::GetVehicleType(/* parameters */);
				GetVehicleTypeRuntime(/* parameters */);
				BrnTrafficIO::TrafficAIEntity::TrafficAIEntity(/* parameters */);
				BrnTrafficIO::OutputBuffer_PostScene::GetTrafficAIInterface(/* parameters */);
				BrnTrafficIO::TrafficAIInterface::AddTrafficEntity(/* parameters */);
			}
		}
	}
	operator++(/* parameters */);
	GetVehicle(/* parameters */);
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

extern void CollidableVehicleInfo4() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<rw::math::vpu::Vector3,33u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<rw::math::vpu::Vector3,33u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<rw::math::vpu::Vector3,33u>::Append(const const rw::math::vpu::Vector3 &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::vpu::operator+=(const VecFloat &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:996
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::IsFull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::Append(const const CollidableVehicleInfo4 &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::vpu::ReciprocalFast(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:179
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// scalar_operation_inline.h:180
			VectorIntrinsicUnion::VectorIntrinsic estimate;

			// scalar_operation_inline.h:180
			VectorIntrinsicUnion::VectorIntrinsic vOne;

		}
	}
}

void BrnDirector::Camera::Camera::GetState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::CameraState::IsFlagSet(BrnDirector::Camera::CameraState::EFlag  leFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<30u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void BrnDirector::Camera::Camera::GetTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<601>::SetOr(const const FastBitArray<601> &  lA, const const FastBitArray<601> &  lB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:558
		uint64_t luIndex;

	}
}

void CgsContainers::Array<rw::math::vpu::Vector3,33u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<rw::math::vpu::Vector3,33u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<rw::math::vpu::Vector3,33u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator<(const VecFloat  a, const const rw::math::vpu::VecFloatRefIndex &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:565
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:567
		bool ret;

		{
			// vec_float_operation_inline.h:566
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
	}
}

void rw::math::vpu::operator<(const const rw::math::vpu::VecFloatRefIndex &  a, const const rw::math::vpu::VecFloatRefIndex &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:503
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:505
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:507
		bool ret;

		{
			// vec_float_operation_inline.h:504
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
		{
			// vec_float_operation_inline.h:506
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
	}
}

void CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::RemoveForCollision(VolumeInstanceId  lVolumeInstanceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerIO_SceneUpdate.h:1087
		InEventRemoveForCollision lEvent;

		{
			// CgsSceneManagerIO_SceneUpdate.h:1089
			CgsDev::StrStream lStrStream;

		}
	}
}

extern void InEventRemoveForCollision() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::RemoveVolumeInstance(VolumeInstanceId  lVolumeInstanceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerIO_SceneUpdate.h:1017
		InEventRemoveVolumeInstance lEvent;

		{
			// CgsSceneManagerIO_SceneUpdate.h:1019
			CgsDev::StrStream lStrStream;

		}
	}
}

extern void InEventRemoveVolumeInstance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateCollidableVehicles(const InputBuffer_PreScene *  lpInput, OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:4700
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnTrafficEntityModule.cpp:4701
		Iterator lItVehicle;

		// BrnTrafficEntityModule.cpp:4706
		uint32_t luCachedVehicleCount;

		// BrnTrafficEntityModule.cpp:4707
		CollidableVehicleInfo4 lCachedVehicle;

		// BrnTrafficEntityModule.cpp:4715
		VecFloat lfPhysicalCentreCount;

		// BrnTrafficEntityModule.cpp:4720
		VolumeInstanceId lVolumeInstanceID;

		// BrnTrafficEntityModule.cpp:4725
		Array<rw::math::vpu::Vector3,33u> lPhysicalCentres;

		// BrnTrafficEntityModule.cpp:4728
		const InputBuffer_PreScene::ActiveRaceCarOutputInterface * lpActiveRaceCarOutputInterface;

		// BrnTrafficEntityModule.cpp:4777
		FastBitArray<601> lVehicles_Alive_And_Physical;

		// BrnTrafficEntityModule.cpp:4801
		FastBitArray<601> lVehicles_Alive_And_HasEntities;

		// BrnTrafficEntityModule.cpp:4805
		FastBitArray<601> lVehicle_HalfUpdate_Or_Physical;

		// BrnTrafficEntityModule.cpp:4981
		uint32_t luCachedMod;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsContainers::FastBitArray<601>::Iterator::Iterator(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::Clear(/* parameters */);
	CgsContainers::Array<rw::math::vpu::Vector3,33u>::Array(/* parameters */);
	BrnTrafficIO::InputBuffer_PreScene::GetActiveRaceCarOutputInterface(/* parameters */);
	CgsContainers::Array<rw::math::vpu::Vector3,33u>::Construct(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:4734
		const RaceCarState * lpRaceCarState;

		// BrnTrafficEntityModule.cpp:4736
		Vector3 lRaceCarPos;

		// BrnTrafficEntityModule.cpp:4744
		uint32_t luCachedIndex;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		CgsContainers::Array<rw::math::vpu::Vector3,33u>::Append(/* parameters */);
		{
		}
		operator=<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		operator=<VectorAxisZ>(/* parameters */);
		operator=<VectorAxisY>(/* parameters */);
		rw::math::vpu::IsSimilar(/* parameters */);
		rw::math::vpu::GetVector3_Zero(/* parameters */);
		rw::math::vpu::GetVecFloat_One(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		{
		}
		{
			// BrnTrafficEntityModule.cpp:4752
			Vector3 lRaceCarDirection;

			operator=<VectorAxisX>(/* parameters */);
			operator=<VectorAxisZ>(/* parameters */);
		}
		operator=<VectorAxisY>(/* parameters */);
		rw::math::vpu::Vector3::GetZ(/* parameters */);
		operator=<VectorAxisZ>(/* parameters */);
		operator=<VectorAxisX>(/* parameters */);
	}
	operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	CgsContainers::FastBitArray<601>::SetAnd(/* parameters */);
	CgsContainers::FastBitArray<601>::Begin(/* parameters */);
	CgsContainers::FastBitArray<601>::Iterator::operator!=(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:4783
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:4784
		Vector3 lVehiclePos;

		GetVehicleTransform(/* parameters */);
		CgsContainers::Array<rw::math::vpu::Vector3,33u>::Append(/* parameters */);
		{
		}
		rw::math::vpu::GetVecFloat_One(/* parameters */);
	}
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	CgsContainers::FastBitArray<601>::Iterator::GetIndex(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	rw::math::vpu::ReciprocalFast(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	CgsContainers::Array<rw::math::vpu::Vector3,33u>::Append(/* parameters */);
	{
	}
	CgsContainers::FastBitArray<601>::SetAnd(/* parameters */);
	CgsContainers::FastBitArray<601>::SetAnd(/* parameters */);
	CgsContainers::FastBitArray<601>::SetOr(/* parameters */);
	CgsContainers::FastBitArray<601>::Begin(/* parameters */);
	CgsContainers::FastBitArray<601>::Iterator::operator!=(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:4814
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:4816
		bool lbShouldBeCollidable;

		// BrnTrafficEntityModule.cpp:4817
		bool lbShouldBeAvoidable;

		// BrnTrafficEntityModule.cpp:4818
		bool lbFullUpdate;

		// BrnTrafficEntityModule.cpp:4882
		Vehicle * lpVehicle;

		CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
		CgsContainers::FastBitArray<601>::UnSetBit(/* parameters */);
		GetVehicle(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:4889
			Matrix44Affine lTransform;

			// BrnTrafficEntityModule.cpp:4890
			Vector3 lVehiclePosition;

			// BrnTrafficEntityModule.cpp:4891
			Vector3 lVehicleVelocity;

			// BrnTrafficEntityModule.cpp:4894
			uint32_t luCachedIndex;

			// BrnTrafficEntityModule.cpp:4915
			const VehicleTypeRuntime * lpVehicleTypeRuntime;

			// BrnTrafficEntityModule.cpp:4918
			Vector3 lBBoxHalfSize;

			GetVehicleTransform(/* parameters */);
			Vehicle::GetSpeed(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			VecFloat<VectorAxisX>(/* parameters */);
			rw::math::vpu::IsSimilar(/* parameters */);
			operator=<VectorAxisX>(/* parameters */);
			operator=<VectorAxisY>(/* parameters */);
			rw::math::vpu::GetVector3_Zero(/* parameters */);
			operator=<VectorAxisZ>(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:4902
				Vector3 lVehicleDirection;

				operator=<VectorAxisZ>(/* parameters */);
				operator=<VectorAxisX>(/* parameters */);
				operator=<VectorAxisY>(/* parameters */);
			}
			operator=<VectorAxisX>(/* parameters */);
			operator=<VectorAxisZ>(/* parameters */);
			operator=<VectorAxisY>(/* parameters */);
			Vehicle::GetVehicleType(/* parameters */);
			GetVehicleTypeRuntime(/* parameters */);
			operator=<VectorAxisZ>(/* parameters */);
			operator=<VectorAxisX>(/* parameters */);
		}
		CgsSceneManager::VolumeInstanceId::SetEntityIDEntityIndex(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:4947
			const VehicleTypeRuntime * lpVehicleTypeRuntime;

			// BrnTrafficEntityModule.cpp:4948
			Matrix44Affine lTransform;

			// BrnTrafficEntityModule.cpp:4949
			Matrix44Affine lTranslate;

			// BrnTrafficEntityModule.cpp:4953
			uint32_t luVolumeId;

			Vehicle::GetVehicleType(/* parameters */);
			GetVehicleTypeRuntime(/* parameters */);
			GetVehicleTransform(/* parameters */);
			rw::math::vpu::Matrix44AffineFromTranslation(/* parameters */);
			rw::math::vpu::_asmSwizzleStore<VectorAxisZ, VectorAxisZ>(/* parameters */);
			rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
			Vehicle::GetVehicleType(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			BrnTrafficIO::OutputBuffer_PreScene::GetSceneInputInterface(/* parameters */);
			CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddVolumeInstance(/* parameters */);
			BrnTrafficIO::OutputBuffer_PreScene::GetSceneInputInterface(/* parameters */);
			operator=(/* parameters */);
			Vehicle::GetSpeed(/* parameters */);
			CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddForCollision(/* parameters */);
			CgsSceneManager::SceneManagerIO::InEventAddForCollision::SetBodyState(/* parameters */);
			CgsSceneManager::SceneManagerIO::InEventAddForCollision::SetCacheOptions(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::AddEvent(/* parameters */);
		}
	}
	CgsContainers::FastBitArray<601>::Iterator::GetIndex(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:4829
		Vector3 lVehiclePos;

		// BrnTrafficEntityModule.cpp:4831
		VecFloat lfMinDistSq;

		// BrnTrafficEntityModule.cpp:4832
		const rw::math::vpu::Vector3 * lpPhysicalCentre;

		// BrnTrafficEntityModule.cpp:4833
		uint32_t luPhysicalCentre;

		GetVehicleTransform(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		CgsContainers::Array<rw::math::vpu::Vector3,33u>::operator[](/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:4837
			Vector3 lObjectPos;

			// BrnTrafficEntityModule.cpp:4838
			VecFloat lfDistSq;

			rw::math::vpu::operator-(/* parameters */);
		}
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		CgsContainers::Array<rw::math::vpu::Vector3,33u>::GetLength(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		CgsContainers::FastBitArray<601>::SetBit(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		{
		}
		rw::math::vpu::operator<(/* parameters */);
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
	BrnTrafficIO::OutputBuffer_PreScene::GetSceneInputInterface(/* parameters */);
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::RemoveForCollision(/* parameters */);
	BrnTrafficIO::OutputBuffer_PreScene::GetSceneInputInterface(/* parameters */);
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::RemoveVolumeInstance(/* parameters */);
	CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::IsFull(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:4985
		uint32_t luCachedIndex;

		CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::Append(/* parameters */);
	}
	CgsContainers::FastBitArray<601>::SetInverse(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetVehicle(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:4937
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::FastBitArray<601>::SetBit(/* parameters */);
	CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::IsFull(/* parameters */);
	CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::Append(/* parameters */);
	rw::math::vpu::Vector3::GetX(/* parameters */);
	operator=<VectorAxisX>(/* parameters */);
	operator=<VectorAxisY>(/* parameters */);
	operator=<VectorAxisZ>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::GetMaxLength(/* parameters */);
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
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::GetMaxLength(/* parameters */);
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
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::GetMaxLength(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::IsFull(/* parameters */);
	CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::Append(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::TrafficEntityModule::CalculateInitialPhysicalState(const Vehicle *  lpInVehicle, const rw::math::vpu::Matrix44Affine &  lVehicleTransform, const Vector3 &  lOutInitialVelocity, const Vector3 &  lOutAngularVelocity, uint8_t *  lpuOutAttribsId, const Matrix44Affine &  lOutTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:2399
		const VehicleTypeRuntime * lpVehicleTypeRuntime;

		// BrnTrafficEntityModule.cpp:2400
		Matrix44Affine lBBoxTranslate;

		Vehicle::GetSpeed(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		Vehicle::GetVehicleType(/* parameters */);
		GetVehicleTypeRuntime(/* parameters */);
		rw::math::vpu::Matrix44AffineFromTranslation(/* parameters */);
		{
		}
		rw::math::vpu::_asmSwizzleStore<VectorAxisZ, VectorAxisZ>(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
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

void CgsContainers::Stack<uint16_t,400>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,400u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint8_t,200>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,200u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,1>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,1u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,160u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<601>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<601>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:511
		uint64_t luIndex;

	}
}

void CgsContainers::Array<uint16_t,160u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,1u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::ParamSoaData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::VehicleSoaData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::ParamNeedToSlowData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::ParamNeedToSlowData::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,400>::Push(const const uint16_t &  lEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,400>::IsFull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint8_t,200>::Push(const const uint8_t &  lEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint8_t,200>::IsFull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,1>::Push(const const uint16_t &  lEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,1>::IsFull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,400>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint8_t,200>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,1>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetVehicleAxles(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::SetVehicleTransform(uint32_t  luIndex, const rw::math::vpu::Matrix44Affine &  lTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,72u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,72u>::Append(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Set<uint16_t,72u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<72u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,9u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,9u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,9u>::Append(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::Pvs::GetHullPvs(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<uint16_t,8u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<uint16_t,8u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<uint16_t,8u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::Construct(uint32_t  luLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:1560
		uint32_t luParam;

		// BrnTrafficEntityModule.cpp:1581
		uint32_t luTrailer;

		// BrnTrafficEntityModule.cpp:1621
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:1622
		Matrix44Affine lVehicleTransform;

		// BrnTrafficEntityModule.cpp:1636
		uint32_t luHull;

		// BrnTrafficEntityModule.cpp:1650
		EActiveRaceCarIndex leActiveRaceCar;

		// BrnTrafficEntityModule.cpp:1660
		int32_t liRaceCar;

		// BrnTrafficEntityModule.cpp:1717
		uint32_t luCachedColIndex;

		// BrnTrafficEntityModule.cpp:1747
		uint32_t luBitArrayIndex;

		CgsNumeric::Random::Construct(/* parameters */);
	}
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	CgsNumeric::Random::Construct(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::Clear(/* parameters */);
	CgsContainers::Array<BrnTraffic::PurgatoryInfo,400u>::Clear(/* parameters */);
	CgsContainers::Array<uint16_t,160u>::Clear(/* parameters */);
	CgsContainers::Stack<uint16_t,400>::Clear(/* parameters */);
	CgsContainers::Stack<uint16_t,1>::Clear(/* parameters */);
	CgsContainers::Stack<uint8_t,200>::Clear(/* parameters */);
	CgsContainers::Array<BrnTraffic::PurgatoryInfo,200u>::Clear(/* parameters */);
	CgsContainers::Array<BrnTraffic::PurgatoryInfo,1u>::Clear(/* parameters */);
	CgsContainers::Array<uint16_t,160u>::Clear(/* parameters */);
	CgsContainers::Array<uint16_t,160u>::Clear(/* parameters */);
	CgsContainers::FastBitArray<601>::Construct(/* parameters */);
	CgsContainers::BitArray<25u>::UnSetAll(/* parameters */);
	CgsContainers::Array<uint16_t,160u>::Construct(/* parameters */);
	CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::Construct(/* parameters */);
	CgsContainers::Array<uint16_t,1u>::Clear(/* parameters */);
	ParamSoaData::Construct(/* parameters */);
	VehicleSoaData::Construct(/* parameters */);
	CgsContainers::Stack<uint16_t,400>::Push(/* parameters */);
	ParamNeedToSlowData::Construct(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:1575
		uint32_t luStaticIdx;

		CgsContainers::Stack<uint8_t,200>::Push(/* parameters */);
	}
	CgsContainers::Stack<uint16_t,1>::Push(/* parameters */);
	CgsContainers::Stack<uint16_t,400>::GetLength(/* parameters */);
	CgsContainers::Stack<uint8_t,200>::GetLength(/* parameters */);
	CgsContainers::Stack<uint16_t,1>::GetLength(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	SetVehicleTransform(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	CgsContainers::Array<uint16_t,72u>::Clear(/* parameters */);
	CgsContainers::Array<uint16_t,72u>::Clear(/* parameters */);
	AppendSet<72u>(/* parameters */);
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
	CgsContainers::Set<uint16_t,72u>::Clear(/* parameters */);
	CgsContainers::Set<uint16_t,72u>::Clear(/* parameters */);
	CgsContainers::BitArray<72u>::UnSetAll(/* parameters */);
	operator++(/* parameters */);
	CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::Clear(/* parameters */);
	CgsContainers::Array<uint16_t,9u>::Construct(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:1676
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnTrafficEntityModule.cpp:1677
		int32_t liIndex;

		{
			// BrnTrafficEntityModule.cpp:1682
			uint32_t luPVHull;

			// BrnTrafficEntityModule.cpp:1683
			uint16_t luRaceCarHull;

			CgsContainers::Array<uint16_t,9u>::Clear(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:1698
				const const CgsContainers::Set<uint16_t,8u> & lPvs;

				CgsContainers::Array<uint16_t,9u>::Append(/* parameters */);
				Pvs::GetHullPvs(/* parameters */);
				CgsContainers::Array<uint16_t,9u>::Append(/* parameters */);
				CgsContainers::Set<uint16_t,8u>::operator[](/* parameters */);
				CgsContainers::Set<uint16_t,8u>::GetLength(/* parameters */);
				{
					CgsDev::StrStream::StrStream(/* parameters */);
				}
			}
		}
	}
	operator++(/* parameters */);
	CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::Construct(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:1720
		CollidableVehicleInfo4 * lpInfo;

		CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::operator[](/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	}
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	CgsContainers::FastBitArray<601>::Construct(/* parameters */);
	CgsContainers::FastBitArray<601>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::FastBitArray<601>::Construct(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
}

void rw::math::vpu::DegToRad(const VecFloat  angle_degrees) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:835
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_platform_inline.h:836
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_platform_inline.h:836
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const const VecFloatRef<VectorAxisX> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventReceiverQueue<4096,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator=(const const BaseResourcePtr &  lOtherResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::CreateFromPointer(const BaseResourcePtr *  lpSrcPtr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Set<uint16_t,72u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,72u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GetDebugAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::AllocateMemoryResource(uint32_t  size, uint32_t  alignment, const char8_t *  name) {
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

extern void ~ResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DebugInternal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,16u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:587
		int32_t liIndex;

		// BrnTrafficEntityModule.cpp:655
		uint32_t luJob;

		// BrnTrafficEntityModule.cpp:718
		BrnTraffic::DebugComponent * lpTempComponent;

		// BrnTrafficEntityModule.cpp:926
		uint32_t luBitArrayIndex;

		rw::math::vpu::DegToRad(/* parameters */);
	}
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::Sin(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	vec_and(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	vec_cmpeq(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::VecFloat::SetFloat(/* parameters */);
	rw::math::vpu::VecFloat::SetFloat(/* parameters */);
	rw::math::vpu::VecFloat::SetFloat(/* parameters */);
	rw::math::vpu::VecFloat::SetFloat(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::VecFloat::SetFloat(/* parameters */);
	rw::math::vpu::VecFloat::SetFloat(/* parameters */);
	rw::math::vpu::VecFloat::SetFloat(/* parameters */);
	rw::math::vpu::VecFloat::SetFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::VecFloat::SetFloat(/* parameters */);
	rw::math::vpu::VecFloat::SetFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	rw::math::vpu::VecFloat::SetFloat(/* parameters */);
	rw::math::vpu::VecFloat::SetFloat(/* parameters */);
	vec_cts(/* parameters */);
	rw::math::vpu::VecFloat::SetFloat(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	operator=<VectorAxisX>(/* parameters */);
	CgsModule::EventReceiverQueue<4096,16>::Construct(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator=(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:688
		uint32_t luIndex;

		CgsModule::EventQueue<BrnTraffic::DetachedPartRenderEvent,20>::Construct(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:694
		uint32_t luIndex;

	}
	BrnResource::GetDebugAllocator(/* parameters */);
	CgsContainers::Set<uint16_t,72u>::Construct(/* parameters */);
	CgsContainers::Array<uint16_t,72u>::Construct(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	CgsContainers::Set<uint16_t,72u>::Construct(/* parameters */);
	CgsContainers::Array<uint16_t,72u>::Construct(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	DebugComponent::DebugComponent(/* parameters */);
	BrnResource::GetDebugAllocator(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u>::Construct(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:879
		uint32_t luVehicleType;

	}
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,8u>::Construct(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,16u>::Construct(/* parameters */);
	CgsContainers::FastBitArray<601>::Construct(/* parameters */);
	CgsContainers::FastBitArray<601>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::FastBitArray<601>::Construct(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PostScene::GetCrashTrafficOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:228
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::CrashIO::TrafficOutputInterface::GetStartCrashingNetworkTrafficQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,160u>::Append(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::HandleCrashingNetworkTraffic(const InputBuffer_PostScene *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:5206
		const TrafficOutputInterface::CrashNetworkTrafficQueue * lpCrashingNetworkTraffic;

		// BrnTrafficEntityModule.cpp:5207
		int32_t liEvent;

	}
	BrnTrafficIO::InputBuffer_PostScene::GetCrashTrafficOutputInterface(/* parameters */);
	BrnWorld::CrashIO::TrafficOutputInterface::GetStartCrashingNetworkTrafficQueue(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:5214
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:5215
		int32_t liTestIndex;

		CgsModule::BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>::GetEvent(/* parameters */);
		CgsModule::BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>::GetEvent(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:5230
		uint32_t luVehicle;

		CgsModule::BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>::GetEvent(/* parameters */);
		CgsContainers::Array<uint16_t,160u>::Append(/* parameters */);
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

void BrnTraffic::HullRuntime::GetJunctionStateChangeTimes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::HullRuntime::GetJunctionCurrentStates() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTriggerId::GetHull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::TriggerId::GetIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTriggerId::GetLightTriggerIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::JunctionLogicBox::GetNumStates() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::JunctionLogicBox::GetTimeInState(uint32_t  luState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::JunctionLogicBox::GetLight(uint32_t  luLight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::JunctionLogicBox::IsLightRed(uint32_t  luState, uint32_t  luLight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnJunctionLogicBox.h:191
		uint8_t luMask;

	}
}

void BrnTraffic::TrafficEntityModule::GetHullRuntimeSafe(uint32_t  luHull) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.h:2363
		uint32_t luHullRuntime;

	}
}

void BrnTraffic::HullRuntime::SetStoplineRed(uint32_t  luStopline, bool  lbRed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficHullRuntime.h:142
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::JunctionLogicBox::GetNumLights() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateJunctions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:9358
		uint32_t luActiveHullIndex;

		// BrnTrafficEntityModule.cpp:9359
		uint32_t luHull;

		// BrnTrafficEntityModule.cpp:9360
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficEntityModule.cpp:9361
		HullRuntime * lpHullRuntime;

		// BrnTrafficEntityModule.cpp:9362
		float32_t * lpafChangeTimes;

		// BrnTrafficEntityModule.cpp:9363
		uint8_t * lpauJunctionStates;

		// BrnTrafficEntityModule.cpp:9364
		uint32_t luJunction;

		// BrnTrafficEntityModule.cpp:9365
		const BrnTraffic::JunctionLogicBox * lpJunction;

		// BrnTrafficEntityModule.cpp:9366
		uint8_t luNewState;

		// BrnTrafficEntityModule.cpp:9367
		uint32_t luLight;

		// BrnTrafficEntityModule.cpp:9368
		const TrafficLightController * lpLight;

		// BrnTrafficEntityModule.cpp:9369
		bool lbLightIsRed;

		// BrnTrafficEntityModule.cpp:9370
		uint32_t luStopLine;

		// BrnTrafficEntityModule.cpp:9371
		uint32_t luStopLineHull;

		// BrnTrafficEntityModule.cpp:9372
		uint32_t luStopLineIndex;

		// BrnTrafficEntityModule.cpp:9373
		HullRuntime * lpStopLineHullRuntime;

		// BrnTrafficEntityModule.cpp:9374
		uint32_t luTrafficLight;

		// BrnTrafficEntityModule.cpp:9375
		uint32_t luTrafficLightInstance;

		// BrnTrafficEntityModule.cpp:9376
		float32_t lfTimeSinceLastDecision;

	}
	CgsContainers::Set<uint16_t,72u>::GetLength(/* parameters */);
	CgsContainers::Set<uint16_t,72u>::operator[](/* parameters */);
	GetHull(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	GetHullRuntime(/* parameters */);
	HullRuntime::GetJunctionStateChangeTimes(/* parameters */);
	HullRuntime::GetJunctionCurrentStates(/* parameters */);
	JunctionLogicBox::GetTimeInState(/* parameters */);
	JunctionLogicBox::GetNumLights(/* parameters */);
	JunctionLogicBox::GetLight(/* parameters */);
	JunctionLogicBox::IsLightRed(/* parameters */);
	GetHullRuntimeSafe(/* parameters */);
	HullRuntime::SetStoplineRed(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:9399
		uint32_t luLightTrigger;

		// BrnTrafficEntityModule.cpp:9400
		uint8_t lu8JunctionIndex;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsContainers::BitArray<25u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<25u>::CountSetBits() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:824
		uint32_t luSetBits;

		{
			// CgsBitArray.h:826
			uint64_t luIndex;

			{
				// CgsBitArray.h:828
				uint64_t luCount;

			}
		}
	}
}

void BrnTraffic::TrafficEntityModule::GetBehaviourCentre() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::CompLessThan(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:305
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator>=<VectorAxisY>(const VecFloat  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:681
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:683
		bool ret;

	}
}

void rw::math::vpu::operator>=<VectorAxisX>(const VecFloat  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:681
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:683
		bool ret;

	}
}

void CgsContainers::Array<BrnTraffic::CrashingThingData,168u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnTraffic::CrashingThingData,168u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateParams_TryStartSympatheticCrashing(uint32_t  luParam, const Array<BrnTraffic::CrashingThingData,168u> *  lpCurrentCrashingThings) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:10257
		uint32_t luFreePhysics;

		// BrnTrafficEntityModule.cpp:10263
		Param * lpParam;

		// BrnTrafficEntityModule.cpp:10277
		Vector4 lConeParams;

		// BrnTrafficEntityModule.cpp:10278
		Vector3 lVehiclePos;

		// BrnTrafficEntityModule.cpp:10279
		Vector3 lCameraToVehicle;

		// BrnTrafficEntityModule.cpp:10280
		VecFloat lfDistanceFromCamera;

		// BrnTrafficEntityModule.cpp:10281
		bool lbVehicleBehindCamera;

		// BrnTrafficEntityModule.cpp:10308
		const ParamTransform * lpParamTransform;

		// BrnTrafficEntityModule.cpp:10311
		uint32_t luCrashingThing;

		// BrnTrafficEntityModule.cpp:10312
		EntityId lParamEntityId;

	}
	CgsContainers::BitArray<25u>::CountSetBits(/* parameters */);
	GetParam(/* parameters */);
	GetVehicleTransform(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::CompLessThan(/* parameters */);
	rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	rw::math::vpu::operator>=<VectorAxisX>(/* parameters */);
	GetParamTransform(/* parameters */);
	MakeTrafficEntityId(/* parameters */);
	CgsContainers::Array<BrnTraffic::CrashingThingData,168u>::GetLength(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:10315
		const const CrashingThingData & lCrashingThing;

		// BrnTrafficEntityModule.cpp:10316
		Vector3 lCrasherPos;

		VecFloat<VectorAxisZ>(/* parameters */);
	}
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	CgsContainers::Array<BrnTraffic::CrashingThingData,168u>::GetItem(/* parameters */);
	ParamTransform::GetDeterministicPos(/* parameters */);
	ParamTransform::GetDirection(/* parameters */);
	IsPointWithinSquishedCone(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:10335
		Matrix44Affine lCrashThingMatrix;

		GetVehicleTransform(/* parameters */);
		ParamTransform::GetDirection(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
	}
	rw::math::vpu::operator>=<VectorAxisY>(/* parameters */);
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
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnTraffic::TrafficEntityModule::GetSympCrashingTargetPos(EntityId  lTargetId, const Vector3 &  lOutTargetPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:16279
		const Vehicle * lpTargetVehicle;

	}
	{
		// BrnTrafficEntityModule.cpp:16291
		EActiveRaceCarIndex leActiveRaceCarIndex;

	}
	{
		// BrnTrafficEntityModule.cpp:16303
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::vpu::operator<=(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:956
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:958
		bool ret;

		{
			// vec_float_operation_inline.h:957
			VectorIntrinsicUnion u;

		}
	}
}

void BrnTraffic::Fuzzy::FuzzyBehaviourLogic::DEBUGSetCurrentParamPos(const rw::math::vpu::Vector3  lPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::DEBUG_AddFuzzyLogicData(uint32_t  luVehicle, VecFloat *  lpafFuzzyOutputs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:6618
		extern const float32_t KF_RADIUS;

		{
			// BrnTrafficEntityModule.cpp:6621
			DEBUG_VehicleFuzzyLogic * lpDebugData;

			// BrnTrafficEntityModule.cpp:6622
			uint32_t luCurrentIndex;

			// BrnTrafficEntityModule.cpp:6642
			Matrix44Affine lVehicleTransform;

			// BrnTrafficEntityModule.cpp:6646
			uint32_t luScore;

		}
	}
}

void BrnTraffic::TrafficEntityModule::ShouldBeHollywoodAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.h:2261
		bool lbResult;

	}
}

void BrnTraffic::TrafficEntityModule::NeedToTakeActionAgainstJunctionFUP() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpl::VecGetZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpl::VecLoad5BitImm_Int<1>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::CompGreaterThan(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:313
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Select(const MaskScalar  mask, const VecFloat  trueValue, const VecFloat  falseValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:350
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpl::VecSelect(VectorIntrinsicInParam  if0Result, VectorIntrinsicInParam  if1Result, VectorIntrinsicInParam  selectionMask) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_operation_inline.h:361
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpl::VecAdd_Int(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TweakValues::GetRaceCarStopDist() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TweakValues::GetGapClosingFactor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TweakValues::GetStoplineVariation() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateParams_PrecalcBehaviourParams(uint32_t  luParam, const Section *  lpSection, const BrnTraffic::Hull *  lpHull, const rw::math::vpu::Vector4  lf_RCDistance_RCHeight_RCClosingSpeed_RCLanePos, const rw::math::vpu::Vector4  lf_TLDistance_NPDistance_NPClosingSpeed_RCSpeedInOurLane, const rw::math::vpu::Vector4  lf_TimeQueueing_Obstructedness_DriveAroundStickiness_W) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:11272
		const BrnTraffic::Param * lpParam;

		// BrnTrafficEntityModule.cpp:11273
		ParamNeedToSlowData * lpNeedToSlowData;

		// BrnTrafficEntityModule.cpp:11359
		VecFloat[6] lafFuzzyOutputs;

		// BrnTrafficEntityModule.cpp:11425
		int32_t liNewAction;

		// BrnTrafficEntityModule.cpp:11458
		float32_t lfSectionSpeed;

		GetParam(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:11286
		Vector3 lUnusedPos;

		GetSympCrashingTargetPos(/* parameters */);
	}
	GetParamTransform(/* parameters */);
	ParamTransform::GetDeterministicPos(/* parameters */);
	DEBUG_AddFuzzyLogicData(/* parameters */);
	ShouldBeHollywoodAction(/* parameters */);
	NeedToTakeActionAgainstJunctionFUP(/* parameters */);
	CgsContainers::BitArray<25u>::CountSetBits(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:11427
		VecFloat lfMaxOutput;

		// BrnTrafficEntityModule.cpp:11428
		VecFloat KF_FUZZY_BIAS;

		// BrnTrafficEntityModule.cpp:11429
		VectorIntrinsicUnion::VectorIntrinsic liBestAction;

		// BrnTrafficEntityModule.cpp:11430
		VectorIntrinsicUnion::VectorIntrinsic liAction;

		// BrnTrafficEntityModule.cpp:11431
		VectorIntrinsicUnion::VectorIntrinsic KI_ONE;

		// BrnTrafficEntityModule.cpp:11433
		int32_t liOutput;

		// BrnTrafficEntityModule.cpp:11447
		union {
			// BrnTrafficEntityModule.cpp:11448
			VectorIntrinsicUnion::VectorIntrinsic mVector;

			// BrnTrafficEntityModule.cpp:11449
			int32_t[4] maiInts;

		}
		// BrnTrafficEntityModule.cpp:11450
		union  lPpuVpuUnion;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpl::VecLoad5BitImm_Int<1>(/* parameters */);
		rw::math::vpu::GetVecFloat_Zero(/* parameters */);
		rw::math::vpl::VecGetZero(/* parameters */);
		rw::math::vpl::VecGetZero(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:11436
			MaskScalar lMaskCurrentIsMax;

			rw::math::vpl::VecAdd_Int(/* parameters */);
		}
		rw::math::vpu::CompGreaterThan(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpl::VecSelect(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:11541
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:11380
		VecFloat lfFuzzyValue;

		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:11307
		const Vehicle * lpVehicle;

		GetVehicle(/* parameters */);
		Vehicle::IsAlive(/* parameters */);
		Vehicle::GetCurrentManoeuvre(/* parameters */);
	}
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
	}
	{
		GetVehicle(/* parameters */);
		GetVehicleTransform(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:11507
		const BrnTraffic::Param * lpNextParam;

		// BrnTrafficEntityModule.cpp:11508
		float32_t lfTargetSpeed1;

		// BrnTrafficEntityModule.cpp:11510
		float32_t lfNPDistance;

		// BrnTrafficEntityModule.cpp:11511
		float32_t lfTargetSpeed2;

		// BrnTrafficEntityModule.cpp:11512
		float32_t lfTargetSpeed;

		GetParam(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::fpu::Min<float>(/* parameters */);
		rw::math::fpu::Max<float>(/* parameters */);
		rw::math::fpu::Min<float>(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:11463
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:11476
		float32_t lfRCDistance;

		// BrnTrafficEntityModule.cpp:11477
		float32_t lfStopForPlayerDist;

		{
			// BrnTrafficEntityModule.cpp:11473
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::fpu::Max<float>(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:11489
		VecFloat lfRCDistance;

		// BrnTrafficEntityModule.cpp:11490
		VecFloat lfNPDistance;

		// BrnTrafficEntityModule.cpp:11491
		VecFloat lfRCSpeedInOurLane;

		// BrnTrafficEntityModule.cpp:11493
		VecFloat lfFollowPlayerDist;

		// BrnTrafficEntityModule.cpp:11494
		VecFloat lfTargetSpeed1;

		// BrnTrafficEntityModule.cpp:11495
		VecFloat lfTargetSpeed2;

		// BrnTrafficEntityModule.cpp:11496
		VecFloat lfTargetSpeed;

		{
			// BrnTrafficEntityModule.cpp:11487
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		TweakValues::GetGapClosingFactor(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::fpu::Min<float>(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:11523
		float32_t lfTLDistance;

		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:11321
		Vector3 lDiff;

		GetParamTransform(/* parameters */);
		ParamTransform::GetLerpedPos(/* parameters */);
		GetVehicleTransform(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::operator<=(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnTraffic::TrafficEntityModule::GetTrailerVehicle(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.h:2528
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::GetVehicleIndexFromTrailerIndex(uint32_t  luTrailer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetStandardVehicle(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::CalcTowBarPos(const rw::math::vpu::Matrix44Affine &  lTransform, const VehicleTypeRuntime *  lpVehicleTypeRuntime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnTrafficVehicle.h:1378
	Vector3 lWorldPos;

	{
		// BrnTrafficVehicle.h:1377
		Vector3 lLocalPos;

		// BrnTrafficVehicle.h:1378
		Vector3 lWorldPos;

	}
}

void BrnTraffic::VehicleTypeRuntime::GetCabPivotDistance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::VehicleTypeRuntime::GetTrailerPivotDistance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::VehicleTypeRuntime::GetBackAxleOffset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Axle::GetUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Axle::SetUp(const rw::math::vpu::Vector3  lUp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::VehicleTypeRuntime::GetForwardAxleOffset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::GetWheelRot() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::SetWheelRot(const VecFloat  lfValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateTrailers_MoveToCab(uint32_t  luTrailer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:13603
		uint32_t luTrailerVehicle;

		// BrnTrafficEntityModule.cpp:13604
		Vehicle * lpTrailer;

		// BrnTrafficEntityModule.cpp:13605
		VehicleAxles * lpTrailerAxles;

		// BrnTrafficEntityModule.cpp:13606
		Matrix44Affine lTrailerTransform;

		// BrnTrafficEntityModule.cpp:13607
		const Vehicle * lpCab;

		// BrnTrafficEntityModule.cpp:13608
		Matrix44Affine lCabTransform;

		// BrnTrafficEntityModule.cpp:13609
		const BrnTraffic::Param * lpCabParam;

		// BrnTrafficEntityModule.cpp:13610
		uint16_t luCabVehicleType;

		// BrnTrafficEntityModule.cpp:13611
		uint16_t luTrailerVehicleType;

		// BrnTrafficEntityModule.cpp:13612
		const VehicleTypeUpdateData * lpCabVehicleType;

		// BrnTrafficEntityModule.cpp:13613
		const VehicleTypeUpdateData * lpTrailerVehicleType;

		// BrnTrafficEntityModule.cpp:13614
		const VehicleTypeRuntime * lpCabVehicleTypeRuntime;

		// BrnTrafficEntityModule.cpp:13615
		const VehicleTypeRuntime * lpTrailerVehicleTypeRuntime;

		// BrnTrafficEntityModule.cpp:13616
		Vector3 lOldFrontAxlePos;

		// BrnTrafficEntityModule.cpp:13617
		Vector3 lOldBackAxlePos;

		// BrnTrafficEntityModule.cpp:13618
		Vector3 lNewPivotPosition;

		// BrnTrafficEntityModule.cpp:13619
		Vector3 lBackAxleDiff;

		// BrnTrafficEntityModule.cpp:13620
		Vector3 lBackAxleToPivot;

		// BrnTrafficEntityModule.cpp:13621
		Vector3 lNewAt;

		// BrnTrafficEntityModule.cpp:13622
		Vector3 lPivotToOrigin;

		// BrnTrafficEntityModule.cpp:13623
		Vector3 lNewPos;

		// BrnTrafficEntityModule.cpp:13624
		Vector3 lNewUp;

		// BrnTrafficEntityModule.cpp:13625
		Vector3 lNewRight;

		// BrnTrafficEntityModule.cpp:13626
		Vector3 lMoveVector;

		// BrnTrafficEntityModule.cpp:13627
		VecFloat lfDistanceMoved;

		GetTrailerVehicle(/* parameters */);
	}
	Vehicle::GetCabIndex(/* parameters */);
	GetVehicleIndexFromTrailerIndex(/* parameters */);
	GetVehicleAxles(/* parameters */);
	Vehicle::GetCabIndex(/* parameters */);
	GetStandardVehicle(/* parameters */);
	Vehicle::GetTrailerIndex(/* parameters */);
	Vehicle::GetCabIndex(/* parameters */);
	GetParam(/* parameters */);
	Vehicle::GetCabIndex(/* parameters */);
	GetVehicleTransform(/* parameters */);
	Vehicle::GetVehicleType(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	Vehicle::GetVehicleType(/* parameters */);
	GetVehicleTypeRuntime(/* parameters */);
	GetVehicleTypeRuntime(/* parameters */);
	Vehicle::CalcTowBarPos(/* parameters */);
	rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VehicleTypeRuntime::GetCabPivotDistance(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	VehicleTypeRuntime::GetTrailerPivotDistance(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	VehicleTypeRuntime::GetBackAxleOffset(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	{
	}
	rw::math::vpu::CompNotEqual(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	VehicleTypeRuntime::GetTrailerPivotDistance(/* parameters */);
	rw::math::vpu::Matrix44Affine::Set(/* parameters */);
	SetVehicleTransform(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::CompNotEqual(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::CompNotEqual(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::CompNotEqual(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::CompNotEqual(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	Axle::SetUp(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	VehicleTypeRuntime::GetForwardAxleOffset(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	Vehicle::GetWheelRot(/* parameters */);
	Vehicle::SetWheelRot(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsDev::StrStreamBase::operator<<(void *  lpPointer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:627
		CgsDev::PrintMode leSavedPrintMode;

	}
}

void CgsModule::VariableEventQueue<32768,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<32768,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PrePhysics::GetSceneResultQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:286
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<32768,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<32768,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsSceneManager::SceneManagerIO::OutEventCoarseTestResult::GetEntityIds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::StoreAISceneResultsForNextFrame(const InputBuffer_PrePhysics *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:14627
		const InputBuffer_PrePhysics::SceneResultQueue * lpSceneResultQueue;

	}
	BrnTrafficIO::InputBuffer_PrePhysics::GetSceneResultQueue(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::GetLength(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:14632
		const CgsModule::Event * lpEvent;

		// BrnTrafficEntityModule.cpp:14633
		const OutEventCoarseTestResult * lpCoarseTestResult;

		// BrnTrafficEntityModule.cpp:14634
		int32_t liSize;

		CgsModule::VariableEventQueue<32768,16>::GetFirstEvent(/* parameters */);
		{
		}
		CgsSceneManager::SceneQueryId::operator uint32_t(/* parameters */);
		CgsSceneManager::SceneQueryId::operator uint32_t(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:14647
			int32_t liRaceCarIndex;

			// BrnTrafficEntityModule.cpp:14648
			int32_t liNumResultsToCopy;

		}
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
}

void CgsModule::VariableEventQueue<32768,16>::OutputQueueContents() {
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

void CgsModule::VariableEventQueue<32768,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[161] __PRETTY_FUNCTION__;

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
	GetFirstEvent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:464
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_Prepare::GetResourceRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:126
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::GameDataIO::RequestInterface<4096>::LoadTrafficLanes(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId, int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataRequestQueue.h:1441
		LoadGameDataEvent lRequest;

	}
}

void BrnResource::MakeTrafficLaneId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataAssetEvent::Construct(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId, int32_t  liPoolId, CgsID  lAssetId, BrnResource::EAssetSet  lAssetType, bool  lbFailiureFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataEvent::Construct(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataEvent::SetReceiverQueue(BaseEventReceiverQueue *  lpReceiverQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataEvent::SetEventId(int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataId(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataType(BrnResource::EAssetSet  leAssetType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataAssetEvent::SetPoolId(int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataAssetEvent::SetFailureFlag(bool  lbFailureFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:355
		CgsModule::BaseEventReceiverQueue::CBufferEntry * lpBufferEntry;

	}
}

void BrnResource::GameDataIO::GameDataEvent::GetEventId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetTrafficLaneDataResponse::GetTrafficLaneHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator=(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<4096>::GetVehicleList(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataRequestQueue.h:1676
		GetVehicleListRequest lRequest;

	}
}

void BrnResource::GameDataIO::GetVehicleListRequest::Construct(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::MakeVehicleListId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetVehicleListResponse::GetVehicleListPtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::strstr(char *  _Str1, const char *  _Str2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<4096>::LoadVehicle(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId, int32_t  liPoolId, const char *  lpcVehicleName, BrnResource::EAssetSet  lAssetType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataRequestQueue.h:1385
		LoadGameDataEvent lRequest;

	}
}

void BrnResource::MakeVehicleId(const char *  lpcVehicleName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAssetIds.h:275
		char[13] lacFullName;

		{
			// BrnAssetIds.h:274
			CgsDev::StrStream lStrStream;

		}
	}
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

void BrnResource::GameDataIO::GetVehiclePhysicsResponse::GetVehiclePhysicsObjectHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator=(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:580
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::LoadData(OutputBuffer_Prepare *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnTrafficIO::OutputBuffer_Prepare::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::LoadTrafficLanes(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:1276
		const CgsModule::Event * lpEvent;

		// BrnTrafficEntityModule.cpp:1277
		int32_t liEventSize;

		// BrnTrafficEntityModule.cpp:1278
		int32_t liEventType;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsModule::BaseEventReceiverQueue::GetNextEvent(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:1288
			CgsDev::StrStream lStrStream;

		}
		{
		}
		CgsModule::BaseEventReceiverQueue::GetEventPaddingSize(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:1227
		uint32_t luVehicleType;

		{
			// BrnTrafficEntityModule.cpp:1230
			char[13] lacIDBuffer;

			// BrnTrafficEntityModule.cpp:1231
			char * lpcLastChar;

			// BrnTrafficEntityModule.cpp:1232
			CgsID lVehicleId;

			// BrnTrafficEntityModule.cpp:1240
			uint32_t luAssetId;

			BrnResource::GameDataIO::RequestInterface<4096>::LoadVehicle(/* parameters */);
			BrnResource::GameDataIO::GameDataAssetEvent::Construct(/* parameters */);
			AddEvent<BrnResource::GameDataIO::LoadGameDataEvent>(/* parameters */);
			BrnResource::GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
			BrnResource::GameDataIO::GameDataEvent::Construct(/* parameters */);
			BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
			BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
			BrnResource::GameDataIO::GameDataEvent::SetReceiverQueue(/* parameters */);
		}
		std(/* parameters */);
		BrnTrafficIO::OutputBuffer_Prepare::GetResourceRequestInterface(/* parameters */);
		{
		}
	}
	{
		// BrnTrafficEntityModule.cpp:1352
		const CgsModule::Event * lpEvent;

		// BrnTrafficEntityModule.cpp:1353
		int32_t liEventSize;

		// BrnTrafficEntityModule.cpp:1354
		int32_t liEventType;

		// BrnTrafficEntityModule.cpp:1355
		int32_t liEventId;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsModule::BaseEventReceiverQueue::GetNextEvent(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:1369
			const GetVehiclePhysicsResponse * lpResponse;

			// BrnTrafficEntityModule.cpp:1378
			const StreamedDeformationSpec * lpModel;

			// BrnTrafficEntityModule.cpp:1379
			VehicleTypeRuntime * lpRuntimeData;

			{
				// BrnTrafficEntityModule.cpp:1365
				CgsDev::StrStream lStrStream;

			}
			BrnResource::GameDataIO::GameDataEvent::GetEventId(/* parameters */);
			CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator=(/* parameters */);
			CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::GetMemoryResource(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsModule::BaseEventReceiverQueue::GetEventPaddingSize(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:1303
		uint32_t luVehicleType;

		{
			// BrnTrafficEntityModule.cpp:1306
			char[13] lacIDBuffer;

			// BrnTrafficEntityModule.cpp:1307
			char * lpcLastChar;

			// BrnTrafficEntityModule.cpp:1308
			CgsID lVehicleId;

			// BrnTrafficEntityModule.cpp:1316
			uint32_t luAssetId;

			BrnResource::GameDataIO::RequestInterface<4096>::LoadVehicle(/* parameters */);
			BrnResource::GameDataIO::GameDataAssetEvent::Construct(/* parameters */);
			AddEvent<BrnResource::GameDataIO::LoadGameDataEvent>(/* parameters */);
			BrnResource::GameDataIO::GameDataEvent::Construct(/* parameters */);
			BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
			BrnResource::GameDataIO::GameDataEvent::SetReceiverQueue(/* parameters */);
			BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
			BrnResource::GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
		}
		std(/* parameters */);
		BrnTrafficIO::OutputBuffer_Prepare::GetResourceRequestInterface(/* parameters */);
		{
		}
	}
	{
		// BrnTrafficEntityModule.cpp:1173
		int32_t liEventSize;

		// BrnTrafficEntityModule.cpp:1174
		const CgsModule::Event * lpEvent;

		// BrnTrafficEntityModule.cpp:1179
		const GetVehicleListResponse * lpResponse;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	}
	BrnTrafficIO::OutputBuffer_Prepare::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::GetVehicleList(/* parameters */);
	BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
	BrnResource::GameDataIO::GameDataEvent::SetReceiverQueue(/* parameters */);
	AddEvent<BrnResource::GameDataIO::GetVehicleListRequest>(/* parameters */);
	BrnResource::GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
	}
	{
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
	}
	{
	}
	{
		// BrnTrafficEntityModule.cpp:1182
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnTrafficEntityModule.cpp:1122
		const CgsModule::Event * lpEvent;

		// BrnTrafficEntityModule.cpp:1123
		int32_t liEventSize;

		// BrnTrafficEntityModule.cpp:1124
		int32_t liEventType;

		// BrnTrafficEntityModule.cpp:1129
		const GetTrafficLaneDataResponse * lpAcquire;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator=(/* parameters */);
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
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
}

void CgsModule::EventReceiverQueue<4096,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-=(const Vector3 &  v, const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator>=<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:775
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:777
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:779
		bool ret;

		{
			// vec_float_operation_inline.h:778
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator>=<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:775
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:777
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:779
		bool ret;

		{
			// vec_float_operation_inline.h:778
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator>=<VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:775
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:777
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:779
		bool ret;

		{
			// vec_float_operation_inline.h:778
			VectorIntrinsicUnion u;

		}
	}
}

void rw::collision::BoxVolume::GetResourceDescriptor(float32_t, float32_t, float32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::GetMemoryResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::collision::Volume::SetRadius(float32_t  rad) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_Prepare::GetSceneInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:123
		CgsDev::StrStream lStrStream;

	}
}

void CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddDynamicVolume(VolumeId  lID, const VolRef::Volume *  lpVolume, InEventLineTestFine::VolumeTypeFlags  lxVolumeTypeFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerIO_SceneUpdate.h:929
		InEventAddDynamicVolume lEvent;

		{
			// CgsSceneManagerIO_SceneUpdate.h:933
			CgsDev::StrStream lStrStream;

		}
	}
}

extern void InEventAddDynamicVolume() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeSlot::SetVolume(const VolRef::Volume *  lpVolume, int32_t  miSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::Prepare(OutputBuffer_Prepare *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<4096,16>::Prepare(/* parameters */);
	CgsContainers::BitArray<25u>::UnSetAll(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:1004
		Vector3[256] laResourceBuffer;

		// BrnTrafficEntityModule.cpp:1006
		uint32_t luVehicleType;

		{
			// BrnTrafficEntityModule.cpp:1009
			uint32_t luVolumeId;

			// BrnTrafficEntityModule.cpp:1010
			Vector3 lBBoxHalfSize;

			// BrnTrafficEntityModule.cpp:1011
			InEventLineTestFine::VolumeTypeFlags lxVolumeTypeFlags;

			// BrnTrafficEntityModule.cpp:1014
			VecFloat lfX;

			// BrnTrafficEntityModule.cpp:1015
			VecFloat lfY;

			// BrnTrafficEntityModule.cpp:1016
			VecFloat lfZ;

			// BrnTrafficEntityModule.cpp:1017
			VecFloat lfMinXY;

			// BrnTrafficEntityModule.cpp:1018
			VecFloat lfMinAxis;

			// BrnTrafficEntityModule.cpp:1019
			VecFloat lfFatness;

			// BrnTrafficEntityModule.cpp:1026
			ResourceDescriptor lResDesc;

			// BrnTrafficEntityModule.cpp:1028
			Resource lRes;

			// BrnTrafficEntityModule.cpp:1030
			VolRef::Volume * lpBoxVolume;

			~ResourceDescriptor(/* parameters */);
		}
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator>=<VectorAxisX>(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		VecFloat<VectorAxisZ>(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
		rw::math::vpu::operator>=<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator>=<VectorAxisZ>(/* parameters */);
		rw::collision::BoxVolume::GetResourceDescriptor(/* parameters */);
		rw::Resource::Resource(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::collision::Volume::SetRadius(/* parameters */);
		BrnTrafficIO::OutputBuffer_Prepare::GetSceneInputInterface(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddDynamicVolume(/* parameters */);
		{
		}
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::AddEvent(/* parameters */);
		~BaseResourceDescriptors(/* parameters */);
		CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::GetMaxLength(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:1054
		EActiveRaceCarIndex leRaceCarIndex;

		operator++(/* parameters */);
		BrnResource::GetDebugAllocator(/* parameters */);
		rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	}
	BrnResource::GetDebugAllocator(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
}

void CgsModule::VariableEventQueue<2048,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<2048,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<16384,16>::OutputQueueContents() {
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

void CgsModule::VariableEventQueue<16384,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
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

void CgsModule::VariableEventQueue<16384,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[161] __PRETTY_FUNCTION__;

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

void BrnTraffic::BrnTrafficIO::InputBuffer_PostScene::GetActiveRaceCarOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:231
		CgsDev::StrStream lStrStream;

	}
}

extern void Frustum() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::GetViewProjectionMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostScene::GetSceneCoarseQueryQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:253
		CgsDev::StrStream lStrStream;

	}
}

void CgsSceneManager::SceneManagerIO::InCoarseQueryQueue<16384>::FrustumTestVp(SceneQueryId  lQueryId, InEventLineTestFine::EntityTypeFlags  lx32EntityTypeFlags, const const Frustum &  lFrustum, const const rw::math::vpu::Matrix44 &  lViewProjection, uint32_t  lxQueryFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerIO_CoarseQuery.h:231
		InEventFrustumTestVp lEvent;

	}
}

extern void InEventFrustumTestVp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneQueryId::SceneQueryId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::AIPostSceneQueryRequests(const InputBuffer_PostScene *  lpInput, OutputBuffer_PostScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:5311
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnTrafficEntityModule.cpp:5313
		VecFloat KF_VEC_PULL_FRUSTUM_BACK_FROM_CAR;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:5317
		int32_t liQueryID;

		// BrnTrafficEntityModule.cpp:5324
		const RaceCarState * lpRaceCarState;

		// BrnTrafficEntityModule.cpp:5329
		Camera lCamera;

		// BrnTrafficEntityModule.cpp:5334
		Vector3 lOrigin;

		// BrnTrafficEntityModule.cpp:5335
		Vector3 lAhead;

		// BrnTrafficEntityModule.cpp:5344
		Frustum lFrustum;

		// BrnTrafficEntityModule.cpp:5345
		Matrix44 lViewProjection;

		BrnTrafficIO::InputBuffer_PostScene::GetActiveRaceCarOutputInterface(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
		BrnTrafficIO::InputBuffer_PostScene::GetActiveRaceCarOutputInterface(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Matrix44Affine::At(/* parameters */);
		rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
		Frustum(/* parameters */);
		BrnTrafficIO::OutputBuffer_PostScene::GetSceneCoarseQueryQueue(/* parameters */);
		rw::math::vpu::Matrix44::operator=(/* parameters */);
		CgsSceneManager::SceneManagerIO::InCoarseQueryQueue<16384>::FrustumTestVp(/* parameters */);
	}
	operator++(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsSceneManager::SceneManagerIO::InCoarseQueryQueue<16384>::SphereTest(SceneQueryId  lQueryId, InEventLineTestFine::EntityTypeFlags  lx32EntityTypeFlags, const rw::math::vpu::Vector3  lPosition, float32_t  lfRadius) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerIO_CoarseQuery.h:184
		InEventSphereTest lEvent;

	}
}

extern void InEventSphereTest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::PostNearbyTrafficSceneQueryRequest(const InputBuffer_PostScene *  lpInput, OutputBuffer_PostScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnTrafficIO::InputBuffer_PostScene::GetActiveRaceCarOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	BrnTrafficIO::OutputBuffer_PostScene::GetSceneCoarseQueryQueue(/* parameters */);
	CgsSceneManager::SceneManagerIO::InCoarseQueryQueue<16384>::SphereTest(/* parameters */);
	{
	}
	AddEvent<CgsSceneManager::SceneManagerIO::InEventSphereTest>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<131072,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<131072,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<131072,16>::OutputQueueContents() {
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

void CgsModule::VariableEventQueue<131072,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<131072,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<131072,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[162] __PRETTY_FUNCTION__;

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

void CgsContainers::Array<rw::math::vpu::Vector3,8u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<rw::math::vpu::Vector3,8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<rw::math::vpu::Vector3,8u>::Append(const const rw::math::vpu::Vector3 &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::StaticTrafficParam::GetVehicleType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<rw::math::vpu::Vector3,8u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<rw::math::vpu::Vector3,8u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<rw::math::vpu::Vector3,8u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::StaticTrafficParam::SetZombie() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::StaticTrafficParam::SetDivorced() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::StaticVehicles_CreateNewVehicles(const InputBuffer_PostPhysics *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:8692
		Array<rw::math::vpu::Vector3,8u> lRaceCarPositions;

	}
	CgsContainers::Array<rw::math::vpu::Vector3,8u>::Array(/* parameters */);
	CgsContainers::Array<rw::math::vpu::Vector3,8u>::Construct(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:8697
		const InputBuffer_PreScene::ActiveRaceCarOutputInterface * lpActiveRaceCarOutputInterface;

		// BrnTrafficEntityModule.cpp:8698
		EActiveRaceCarIndex leActiveRaceCarIndex;

	}
	{
		// BrnTrafficEntityModule.cpp:8712
		uint32_t luStaticDataIdx;

		{
			// BrnTrafficEntityModule.cpp:8714
			StaticTrafficParam * lpStaticParam;

			{
				// BrnTrafficEntityModule.cpp:8720
				Vehicle * lpStaticVehicle;

				// BrnTrafficEntityModule.cpp:8728
				const VehicleTypeUpdateData * lpVehicleTypeUpdate;

				// BrnTrafficEntityModule.cpp:8729
				const VehicleTypeRuntime * lpVehicleTypeRuntime;

				// BrnTrafficEntityModule.cpp:8731
				Matrix44Affine lTransform;

				// BrnTrafficEntityModule.cpp:8760
				uint32_t luVehicle;

				// BrnTrafficEntityModule.cpp:8761
				VehicleAxles * lpAxles;

				// BrnTrafficEntityModule.cpp:8762
				Matrix44Affine lVehicleTransform;

				SetVehicleTransform(/* parameters */);
			}
		}
	}
	GetStaticVehicle(/* parameters */);
	StaticTrafficParam::GetVehicleType(/* parameters */);
	StaticTrafficParam::GetVehicleType(/* parameters */);
	GetVehicleTypeRuntime(/* parameters */);
	StaticTrafficParam::GetHull(/* parameters */);
	StaticTrafficParam::GetIndexInHull(/* parameters */);
	Hull::GetStaticVehicle(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetW(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:8739
		bool lbSkipVehicle;

		// BrnTrafficEntityModule.cpp:8740
		uint32_t luRaceCar;

		{
			// BrnTrafficEntityModule.cpp:8743
			Vector3 lfDiff;

			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
			rw::math::vpu::operator< <VectorAxisY>(/* parameters */);
		}
		CgsContainers::Array<rw::math::vpu::Vector3,8u>::GetLength(/* parameters */);
		CgsContainers::Array<rw::math::vpu::Vector3,8u>::operator[](/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetVehicleAxles(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	StaticTrafficParam::GetVehicleType(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	StaticTrafficParam::SetZombie(/* parameters */);
	StaticTrafficParam::SetDivorced(/* parameters */);
	BrnTrafficIO::InputBuffer_PostPhysics::GetActiveRaceCarOutputInterface(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:8704
		const RaceCarState * lpRaceCarState;

		// BrnTrafficEntityModule.cpp:8706
		Vector3 lRaceCarPos;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		CgsContainers::Array<rw::math::vpu::Vector3,8u>::Append(/* parameters */);
		{
		}
	}
	operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

void BrnTraffic::TrafficEntityModule::StaticVehicles_UpdateVehicles(const InputBuffer_PostPhysics *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:8823
		int32_t liBulbWarmthDelta;

		// BrnTrafficEntityModule.cpp:8826
		uint32_t luVehicle;

	}
	CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
	CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:8832
		Vehicle * lpVehicle;

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
}

void CgsContainers::Array<uint16_t,160u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,160u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::CrashIO::TrafficInputInterface::RemoveCrashedTraffic(uint16_t  luVehicleIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleTrafficIOInterfaces.h:316
		RemoveCrashedTrafficEvent lEvent;

	}
}

void CgsContainers::Array<uint16_t,160u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GenerateRemovedVehicleEvents(OutputBuffer_PostPhysics::CrashTrafficInputInterface *  lpCrashInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:5134
		uint32_t luIndex;

	}
	{
		// BrnTrafficEntityModule.cpp:5140
		uint32_t luVehicle;

		BrnWorld::CrashIO::TrafficInputInterface::RemoveCrashedTraffic(/* parameters */);
	}
	CgsContainers::Array<uint16_t,160u>::GetLength(/* parameters */);
	CgsContainers::Array<uint16_t,160u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<uint16_t,160u>::Clear(/* parameters */);
}

void BrnTraffic::Vehicle::IsSympatheticallyCrashing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::TrafficInputInterface::RemoveSlammedTraffic(uint16_t  luVehicleIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleTrafficIOInterfaces.h:296
		RemoveSlammedTrafficEvent lEvent;

	}
}

void BrnTraffic::TrafficEntityModule::GenerateSlamRecoveryEvents(OutputBuffer_PostPhysics::CrashTrafficInputInterface *  lpCrashInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:5162
		uint32_t luIndex;

	}
	CgsContainers::Array<uint16_t,160u>::GetLength(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:5168
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:5170
		const Vehicle * lpVehicle;

		BrnWorld::CrashIO::TrafficInputInterface::RemoveSlammedTraffic(/* parameters */);
	}
	CgsContainers::Array<uint16_t,160u>::operator[](/* parameters */);
	GetVehicle(/* parameters */);
	CgsContainers::Array<uint16_t,160u>::Clear(/* parameters */);
	Vehicle::IsAlive(/* parameters */);
	Vehicle::IsCrashing(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Vehicle::IsSympatheticallyCrashing(/* parameters */);
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics::GetVehicleInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:311
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleInputInterface::RemovePhysicalTraffic(VolumeInstanceId  lVolumeInstanceID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleInputInterface.h:593
		RemoveTrafficEvent lEvent;

	}
}

extern void RemoveTrafficEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::CleanUpCrashedVehiclePhysics(OutputBuffer_PrePhysics *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:5657
		VolumeInstanceId lVolumeInstanceID;

		// BrnTrafficEntityModule.cpp:5661
		uint32_t luRemovedVehicle;

	}
	{
		// BrnTrafficEntityModule.cpp:5664
		uint32_t luVehicle;

		CgsSceneManager::VolumeInstanceId::SetEntityIDEntityIndex(/* parameters */);
		CgsSceneManager::EntityId::SetEntityIndex(/* parameters */);
		CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
		BrnTrafficIO::OutputBuffer_PrePhysics::GetVehicleInputInterface(/* parameters */);
		BrnPhysics::Vehicle::VehicleInputInterface::RemovePhysicalTraffic(/* parameters */);
	}
	CgsContainers::Array<uint16_t,160u>::GetLength(/* parameters */);
	CgsContainers::Array<uint16_t,160u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<uint16_t,160u>::Clear(/* parameters */);
}

void CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u>::Erase(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateDEBUG() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:1841
		uint32_t luFiredKillZone;

		CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u>::GetLength(/* parameters */);
	}
	CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u>::operator[](/* parameters */);
	CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u>::operator[](/* parameters */);
	CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u>::Erase(/* parameters */);
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
}

void BrnTraffic::Vehicle::IsSympatheticCrasher() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::TrafficToRaceCarInterface_PreScene::SetSympatheticCrasher(int32_t  liTrafficCarIndex, bool  lbIsSympatheticallyCrashing) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<400u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::BitArray<400u>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GenerateSympatheticCrasherOutput(const InputBuffer_PreScene *  lpInput, OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:3612
		uint32_t luVehicle;

		{
			// BrnTrafficEntityModule.cpp:3615
			Vehicle * lpVehicle;

			Vehicle::IsCrashing(/* parameters */);
			BrnTrafficIO::TrafficToRaceCarInterface_PreScene::SetSympatheticCrasher(/* parameters */);
		}
	}
	BrnTrafficIO::OutputBuffer_PreScene::GetTrafficToRaceCarInterface_PreScene(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::Array<uint16_t,72u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,72u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::LightTriggerId::Set(uint32_t  luHull, uint32_t  luLightTriggerIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficLightTrigger.h:209
		uint32_t luIndex;

	}
}

void BrnWorld::TriggerId::Set(uint8_t  lu8Owner, uint32_t  lu32Index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PreScene::GetTriggerManagementInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:189
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::TriggerEntityModuleIO::TriggerManagementInputInterface::RemoveTrigger(TriggerId  lTriggerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerEntityModuleInputInterface.h:297
		InRemoveTriggerEvent lEvent;

	}
}

void CgsContainers::Array<uint16_t,72u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTrigger::GetDimensions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTrigger::GetTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::ExpandPosPlusYRotToTransform(const rw::math::vpu::Vector3Plus  lPosPlusYRot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnTrafficSharedMaths.h:87
	Matrix44Affine & lTransform;

	{
		// BrnTrafficSharedMaths.h:87
		Matrix44Affine lTransform;

	}
}

void rw::math::vpu::Matrix44AffineFromYRotationAngle(const VecFloat  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:248
		VecFloat s;

		// matrix44affine_operation_platform_inline.h:248
		VecFloat c;

		// matrix44affine_operation_platform_inline.h:250
		const VecFloat zero;

		// matrix44affine_operation_platform_inline.h:251
		const VecFloat one;

		// matrix44affine_operation_platform_inline.h:253
		Vector3 lRow0;

		// matrix44affine_operation_platform_inline.h:254
		Vector3 lRow1;

		// matrix44affine_operation_platform_inline.h:255
		Vector3 lRow2;

		// matrix44affine_operation_platform_inline.h:256
		Vector3 lRow3;

	}
}

void rw::math::vpu::SinCos(const VecFloat  a, const VecFloat &  s_out, const VecFloat &  c_out) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sincosf4(float[4]  x, float *[4]  s, float *[4]  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// sincosf4.h:14
		float[4] xl;

		// sincosf4.h:14
		float[4] xl2;

		// sincosf4.h:14
		float[4] xl3;

		// sincosf4.h:15
		int[4] q;

		// sincosf4.h:16
		int[4] offsetSin;

		// sincosf4.h:16
		int[4] offsetCos;

		// sincosf4.h:37
		float[4] qf;

		// sincosf4.h:38
		float[4] p1;

		// sincosf4.h:52
		float[4] ct1;

		// sincosf4.h:53
		float[4] st1;

		// sincosf4.h:55
		float[4] ct2;

		// sincosf4.h:56
		float[4] st2;

		// sincosf4.h:58
		float[4] cx;

		// sincosf4.h:59
		float[4] sx;

		// sincosf4.h:64
		unsigned int[4] sinMask;

		// sincosf4.h:65
		unsigned int[4] cosMask;

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

void BrnWorld::TriggerEntityModuleIO::TriggerManagementInputInterface::AddBoxTrigger(TriggerId  lTriggerID, Vector3  lDimensions, const rw::math::vpu::Matrix44Affine &  lTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerEntityModuleInputInterface.h:258
		InAddBoxTriggerEvent lEvent;

	}
}

extern void InAddBoxTriggerEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void InAddTriggerEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Abs(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:327
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:328
			const VectorIntrinsicUnion::VectorIntrinsic mask;

			// vector3_operation_inline.h:328
			const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

		}
	}
}

void BrnTraffic::TrafficEntityModule::ManageTriggers(OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:4592
		uint32_t luIndex;

		// BrnTrafficEntityModule.cpp:4593
		uint32_t luHull;

		// BrnTrafficEntityModule.cpp:4594
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficEntityModule.cpp:4595
		uint32_t luTrigger;

		// BrnTrafficEntityModule.cpp:4596
		LightTriggerId lTriggerId;

		// BrnTrafficEntityModule.cpp:4597
		const LightTrigger * lpLightTrigger;

	}
	CgsContainers::Array<uint16_t,72u>::GetLength(/* parameters */);
	CgsContainers::Array<uint16_t,72u>::operator[](/* parameters */);
	GetHull(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	LightTriggerId::Set(/* parameters */);
	BrnWorld::TriggerId::Set(/* parameters */);
	BrnTrafficIO::OutputBuffer_PreScene::GetTriggerManagementInputInterface(/* parameters */);
	BrnWorld::TriggerEntityModuleIO::TriggerManagementInputInterface::RemoveTrigger(/* parameters */);
	CgsContainers::Array<uint16_t,72u>::GetLength(/* parameters */);
	CgsContainers::Array<uint16_t,72u>::operator[](/* parameters */);
	GetHull(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	LightTriggerId::Set(/* parameters */);
	BrnWorld::TriggerId::Set(/* parameters */);
	BrnTrafficIO::OutputBuffer_PreScene::GetTriggerManagementInputInterface(/* parameters */);
	LightTrigger::GetTransform(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	rw::math::vpu::Matrix44AffineFromYRotationAngle(/* parameters */);
	BrnWorld::TriggerEntityModuleIO::TriggerManagementInputInterface::AddBoxTrigger(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	vec_sel(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetW(/* parameters */);
	{
	}
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	AddEvent<BrnWorld::TriggerEntityModuleIO::InAddBoxTriggerEvent>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::GetMaxLength(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::Array<uint16_t,72u>::Clear(/* parameters */);
	CgsContainers::Array<uint16_t,72u>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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

void AppendSet<72u>(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsContainers::Set<uint16_t,72u>::GetLength(/* parameters */);
	CgsContainers::Array<uint16_t,72u>::Append(/* parameters */);
	CgsContainers::Set<uint16_t,72u>::operator[](/* parameters */);
	CgsContainers::Set<uint16_t,72u>::GetLength(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::Array<uint16_t,9u>::Append(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::DEBUGDumpHullPredictions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:7399
		uint32_t luInfo;

	}
	{
		// BrnTrafficEntityModule.cpp:7402
		const const HullChangeInfo & lInfo;

	}
	CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::operator[](/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnTraffic::UInt16IsLargerOrEqualWrapped(uint16_t  lu16A, uint16_t  lu16B) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::IsFull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::EraseFast(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::Append(const const HullChangeInfo &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::AddPredictedHullChange(const const HullChangeInfo &  lInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::IsFull(/* parameters */);
	CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::Append(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:7357
		uint32_t luIndex;

		// BrnTrafficEntityModule.cpp:7358
		uint32_t luOldestIndex;

		CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::GetLength(/* parameters */);
		CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::operator[](/* parameters */);
		CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::operator[](/* parameters */);
		CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::operator[](/* parameters */);
		CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::EraseFast(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::PredictHullChanges(const InputBuffer_PostPhysics *  lpInput, OutputBuffer_PostPhysics *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnTrafficIO::InputBuffer_PostPhysics::GetActiveRaceCarOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:7428
		EActiveRaceCarIndex lePlayerActiveRaceCarIndex;

		// BrnTrafficEntityModule.cpp:7432
		const RaceCarState * lpPlayerState;

		// BrnTrafficEntityModule.cpp:7433
		Vector3 lCurrentPos;

		// BrnTrafficEntityModule.cpp:7434
		Vector3 lLinearVelocity;

		// BrnTrafficEntityModule.cpp:7435
		Vector3 lPredictedPos;

		// BrnTrafficEntityModule.cpp:7437
		uint32_t luPredictedHull;

		BrnTrafficIO::InputBuffer_PostPhysics::GetActiveRaceCarOutputInterface(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
		BrnTrafficIO::InputBuffer_PostPhysics::GetActiveRaceCarOutputInterface(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		Pvs::GetHullIndexForPoint(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:7443
			uint32_t luUpdateFrame;

			// BrnTrafficEntityModule.cpp:7446
			HullChangeInfo lInfo;

		}
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
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PreScene::GetTrafficNetworkInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:159
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::TrafficNetworkInputInterface::HasDiverged() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::TrafficNetworkInputInterface::GetActivateHullQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::HandleIncomingNetworkData(const InputBuffer_PreScene *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:3917
		const TrafficNetworkInputInterface::ActivateHullQueue * lpActivateHullEvents;

		// BrnTrafficEntityModule.cpp:3918
		int32_t liEvent;

		BrnTrafficIO::InputBuffer_PreScene::GetTrafficNetworkInputInterface(/* parameters */);
		BrnTrafficIO::InputBuffer_PreScene::GetTrafficNetworkInputInterface(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:3921
			const ActivateHullEvent lEvent;

			// BrnTrafficEntityModule.cpp:3925
			HullChangeInfo lInfo;

			CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::GetEvent(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::DebugComponent::UseCameraPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,9u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateRaceCarHulls(const InputBuffer_PostPhysics *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:7476
		const InputBuffer_PreScene::ActiveRaceCarOutputInterface * lpActiveRaceCarOutputInterface;

		// BrnTrafficEntityModule.cpp:7477
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnTrafficEntityModule.cpp:7478
		EActiveRaceCarIndex leLocalPlayerIndex;

		{
			// BrnTrafficEntityModule.cpp:7543
			uint32_t luInfoIndex;

			CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::GetLength(/* parameters */);
			CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::operator[](/* parameters */);
			CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::operator[](/* parameters */);
			CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::EraseFast(/* parameters */);
		}
	}
	CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::operator[](/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:7564
		uint32_t luRaceCarHull;

		// BrnTrafficEntityModule.cpp:7571
		const const CgsContainers::Set<uint16_t,8u> & lPvs;

		// BrnTrafficEntityModule.cpp:7572
		uint32_t luPVHull;

		CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::operator[](/* parameters */);
		CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::operator[](/* parameters */);
		CgsContainers::Array<uint16_t,9u>::Clear(/* parameters */);
		Pvs::GetHullPvs(/* parameters */);
		CgsContainers::Set<uint16_t,8u>::GetLength(/* parameters */);
		CgsContainers::Set<uint16_t,8u>::operator[](/* parameters */);
	}
	{
	}
	CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::EraseFast(/* parameters */);
	{
	}
	{
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:7493
		Vector3 lRaceCarPos;

		// BrnTrafficEntityModule.cpp:7512
		int32_t liMinXHull;

		// BrnTrafficEntityModule.cpp:7513
		int32_t liMaxXHull;

		// BrnTrafficEntityModule.cpp:7514
		int32_t liMinZHull;

		// BrnTrafficEntityModule.cpp:7515
		int32_t liMaxZHull;

		// BrnTrafficEntityModule.cpp:7516
		Vector3 lDiag;

		// BrnTrafficEntityModule.cpp:7520
		int32_t liHullX;

		CgsContainers::Array<uint16_t,9u>::Clear(/* parameters */);
		operator++(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::GetVecFloat_Zero(/* parameters */);
		{
		}
		Pvs::GetHullIndexForPoint(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Mult(/* parameters */);
		rw::core::stdc::Max(/* parameters */);
		rw::core::stdc::Min(/* parameters */);
		rw::core::stdc::Max(/* parameters */);
		rw::core::stdc::Min(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		Pvs::GetHullIndexForPoint(/* parameters */);
		CgsContainers::Array<uint16_t,9u>::GetLength(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:7534
			CgsDev::StrStream lStrStream;

			CgsContainers::Array<uint16_t,9u>::GetLength(/* parameters */);
		}
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:7523
		int32_t liHullZ;

	}
	{
		// BrnTrafficEntityModule.cpp:7526
		uint32_t luRaceCarHull;

	}
	Pvs::GetHullIndexForIndices(/* parameters */);
}

void BrnTraffic::Vehicle::GetCrashTrafficType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,160u>::Contains(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,160u>::FindFirstInstanceOf(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:474
		uint32_t luElement;

	}
}

void BrnTraffic::Vehicle::SetCrashTrafficType(BrnPhysics::Vehicle::eCrashTrafficType  leType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::EnsureVehicleRemovedFromCrashModule(uint32_t  luVehicle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:4281
		Vehicle * lpVehicle;

	}
	CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
	GetVehicle(/* parameters */);
	CgsContainers::FastBitArray<601>::UnSetBit(/* parameters */);
	CgsContainers::Array<uint16_t,160u>::Append(/* parameters */);
	CgsContainers::Array<uint16_t,160u>::Contains(/* parameters */);
	CgsContainers::Array<uint16_t,160u>::Append(/* parameters */);
	Vehicle::SetCrashTrafficType(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::Param::DEBUG_GetEffectHistory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(bool  lbValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Param::IsDivorced() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsOrphan() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Param::SetDyingState(uint32_t  luParam, const ParamSoaData &  lSoaData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Param::HasDied() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::SetDead(uint32_t  luVehicle, const VehicleSoaData &  lSoaData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::SetOrphan() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Param::ClearDying(uint32_t  luParam, const ParamSoaData &  lSoaData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::PutParamInPurgatory(uint32_t  luParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:9716
		Param * lpParam;

		{
			// BrnTrafficEntityModule.cpp:9721
			PurgatoryInfo lPurgatoryInfo;

		}
	}
}

void BrnTraffic::Param::IsInPurgatory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetDecisionFramesToSpendInPurgatory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,400u>::Append(const const PurgatoryInfo &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::Param::SetInPurgatory(bool  lbInPurgatory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::KillParam(uint32_t  luParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:7817
		Param * lpParam;

		// BrnTrafficEntityModule.cpp:7818
		Vehicle * lpVehicle;

		// BrnTrafficEntityModule.cpp:7822
		bool lbOrphanVehicle;

		// BrnTrafficEntityModule.cpp:7830
		bool lbParamWasDivorced;

	}
	IsDecisionFrame(/* parameters */);
	Param::SetDyingState(/* parameters */);
	Param::IsDivorced(/* parameters */);
	Param::ClearDying(/* parameters */);
	PutParamInPurgatory(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:7808
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Vehicle::SetDead(/* parameters */);
	GetVehicleSpecies(/* parameters */);
	Vehicle::GetTrailerIndex(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:7850
		uint32_t luTrailer;

		// BrnTrafficEntityModule.cpp:7851
		Vehicle * lpTrailer;

		Vehicle::GetTrailerIndex(/* parameters */);
		Vehicle::SetDead(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:7894
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:7881
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Vehicle::SetOrphan(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::TrafficEntityModule::KillAllZombies() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:7911
		Iterator lItZombie;

		CgsContainers::FastBitArray<601>::Begin(/* parameters */);
	}
	CgsContainers::FastBitArray<601>::Iterator::Iterator(/* parameters */);
	CgsContainers::FastBitArray<601>::Iterator::operator!=(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:7916
		uint32_t luParam;

		GetParam(/* parameters */);
	}
	CgsContainers::FastBitArray<601>::Iterator::GetIndex(/* parameters */);
}

void BrnTraffic::StaticTrafficParam::SetDyingState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::StaticTrafficParam::IsDivorced() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::StaticVehicles_KillParam(uint32_t  luParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:7758
		StaticTrafficParam * lpStaticParam;

		// BrnTrafficEntityModule.cpp:7760
		bool lbWasZombie;

		// BrnTrafficEntityModule.cpp:7761
		Vehicle * lpVehicle;

	}
	GetVehicleSpecies(/* parameters */);
	GetStaticVehicle(/* parameters */);
	GetStaticTrafficParam(/* parameters */);
	GetStaticTrafficParam(/* parameters */);
	StaticTrafficParam::IsZombie(/* parameters */);
	GetStaticVehicle(/* parameters */);
	StaticTrafficParam::SetDyingState(/* parameters */);
	GetVehicleIndexFromStaticIndex(/* parameters */);
	Vehicle::SetDead(/* parameters */);
	CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
	CgsContainers::FastBitArray<601>::UnSetBit(/* parameters */);
	GetVehicleIndexFromStaticIndex(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:7785
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		GetVehicleIndexFromStaticIndex(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:7781
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		GetVehicleIndexFromStaticIndex(/* parameters */);
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
}

void BrnTraffic::TrafficEntityModule::KillOutOfAreaTraffic(Set<uint16_t,72u> *  lpOldHulls) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:7714
		uint32_t luParam;

		// BrnTrafficEntityModule.cpp:7728
		uint32_t luStaticParam;

	}
	CgsContainers::Set<uint16_t,72u>::GetLength(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:7717
		Param * lpParam;

		GetParam(/* parameters */);
		CgsContainers::Set<uint16_t,72u>::Contains(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:7731
		const StaticTrafficParam * lpStaticParam;

		CgsContainers::Set<uint16_t,72u>::Contains(/* parameters */);
		CgsContainers::Set<uint16_t,72u>::Find(/* parameters */);
	}
}

void BrnTraffic::Vehicle::GetPhysicalPartsIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<25u>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::SetNotPhysical(uint32_t  luVehicle, const VehicleSoaData &  lSoaData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::StopVehicleBeingPhysical(uint32_t  luVehicle, bool  lbWasRecycled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:4488
		Vehicle * lpVehicle;

		// BrnTrafficEntityModule.cpp:4507
		int8_t liPartIndex;

		GetVehicle(/* parameters */);
	}
	CgsContainers::Array<uint16_t,160u>::Append(/* parameters */);
	Vehicle::GetPhysicalPartsIndex(/* parameters */);
	CgsContainers::BitArray<25u>::UnSetBit(/* parameters */);
	Vehicle::SetNotPhysical(/* parameters */);
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
}

void CgsContainers::Array<uint16_t,160u>::EraseInstancesOf(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:420
		uint32_t luIndex;

	}
}

void CgsContainers::Array<uint16_t,160u>::Erase(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::RemoveEntity(EntityId  lEntityId, bool  lbRemoveAllVolumeInstances) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerIO_SceneUpdate.h:860
		InEventRemoveEntity lEvent;

		{
			// CgsSceneManagerIO_SceneUpdate.h:863
			CgsDev::StrStream lStrStream;

		}
	}
}

extern void InEventRemoveEntity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,1u>::Append(const const PurgatoryInfo &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::KillDyingVehicleEntity(uint32_t  luVehicle, const const FastBitArray<601>::Iterator &  lItVehicle, OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:4357
		bool lbRemovedThings;

	}
	CgsContainers::Array<uint16_t,160u>::EraseInstancesOf(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:4454
		Vehicle * lpVehicle;

		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::RemoveEntity(/* parameters */);
		MakeTrafficEntityId(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::AddEvent(/* parameters */);
	}
	GetVehicleSpecies(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:4469
		PurgatoryInfo lInfo;

		CgsContainers::Array<BrnTraffic::PurgatoryInfo,1u>::Append(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:4369
		Vehicle * lpVehicle;

		{
			// BrnTrafficEntityModule.cpp:4389
			uint32_t luCab;

			// BrnTrafficEntityModule.cpp:4390
			Vehicle * lpCab;

			GetStandardVehicle(/* parameters */);
		}
	}
	{
		// BrnTrafficEntityModule.cpp:4429
		Vehicle * lpVehicle;

		MakeTrafficVolumeInstanceId(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::RemoveForCollision(/* parameters */);
		CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::AddEvent(/* parameters */);
		MakeTrafficVolumeInstanceId(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::RemoveVolumeInstance(/* parameters */);
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
		// BrnTrafficEntityModule.cpp:4376
		uint32_t luTrailer;

		// BrnTrafficEntityModule.cpp:4377
		Vehicle * lpTrailer;

		Vehicle::SetOrphan(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::IOBuffer::LockForRead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::IsPaused() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::KillDyingVehicleEntities(OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:4311
		bool lbAllVehiclesDead;

		// BrnTrafficEntityModule.cpp:4313
		FastBitArray<601> lVehicles_NotAlive;

		// BrnTrafficEntityModule.cpp:4314
		Iterator lItVehicle;

		// BrnTrafficEntityModule.cpp:4319
		FastBitArray<601> lVehicles_Interesting;

		{
			// BrnTrafficEntityModule.cpp:4329
			uint32_t luVehicle;

		}
	}
}

void CgsContainers::FastBitArray<601>::IsZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:521
		uint64_t luIndex;

	}
}

void BrnTraffic::TrafficEntityModule::PreSceneUpdate(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const InputBuffer_PreScene *  lpInput, OutputBuffer_PreScene *  lpOutput, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:2063
		bool lbSimPaused;

	}
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:2076
		DebugInterface lDebugInterface;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
		CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	}
	BrnTrafficIO::InputBuffer_PreScene::GetActiveRaceCarOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	BrnTrafficIO::InputBuffer_PreScene::GetActiveRaceCarOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	IsPaused(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
	KillDyingVehicleEntities(/* parameters */);
	KillDyingVehicleEntities(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnTrafficIO::InputBuffer_PreScene::GetActiveRaceCarOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::StaticTrafficParam::SetShouldBeRemoved() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Param::SetZombie(uint32_t  luParam, const ParamSoaData &  lSoaData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::RemoveVehicle(uint32_t  luVehicle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:4088
		Vehicle * lpVehicle;

	}
	GetVehicleSpecies(/* parameters */);
	GetStaticTrafficParamFromFullVehicleIndex(/* parameters */);
	StaticTrafficParam::SetZombie(/* parameters */);
	Vehicle::SetDead(/* parameters */);
	Vehicle::SetDead(/* parameters */);
	GetVehicleSpecies(/* parameters */);
	Vehicle::GetTrailerIndex(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:4241
		uint32_t luTrailer;

		// BrnTrafficEntityModule.cpp:4245
		Vehicle * lpTrailer;

		Vehicle::GetTrailerIndex(/* parameters */);
		Vehicle::GetCabIndex(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:4246
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			Vehicle::GetCabIndex(/* parameters */);
		}
		Vehicle::SetDead(/* parameters */);
	}
	GetVehicleSpecies(/* parameters */);
	GetStaticTrafficParamFromFullVehicleIndex(/* parameters */);
	StaticTrafficParam::SetShouldBeRemoved(/* parameters */);
	Vehicle::GetCabIndex(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:4202
		uint32_t luCab;

		// BrnTrafficEntityModule.cpp:4206
		Vehicle * lpCab;

		Vehicle::GetCabIndex(/* parameters */);
		Vehicle::GetTrailerIndex(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:4207
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			Vehicle::GetTrailerIndex(/* parameters */);
		}
		Vehicle::SetOrphan(/* parameters */);
	}
	Vehicle::GetCabIndex(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:4137
		Vehicle * lpTrailer;

		// BrnTrafficEntityModule.cpp:4138
		uint32_t luCab;

		// BrnTrafficEntityModule.cpp:4141
		Vehicle * lpCab;

		Vehicle::GetCabIndex(/* parameters */);
		Vehicle::GetTrailerIndex(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:4142
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			Vehicle::GetCabIndex(/* parameters */);
			Vehicle::GetTrailerIndex(/* parameters */);
		}
	}
	Vehicle::SetDead(/* parameters */);
	CgsContainers::FastBitArray<601>::UnSetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	Param::SetZombie(/* parameters */);
	Vehicle::GetTrailerIndex(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:4178
		uint32_t luTrailer;

		// BrnTrafficEntityModule.cpp:4179
		Vehicle * lpTrailer;

		Vehicle::GetTrailerIndex(/* parameters */);
		Vehicle::SetDead(/* parameters */);
	}
	Param::SetShouldBeRemoved(/* parameters */);
	Vehicle::GetTrailerIndex(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:4106
		Vehicle * lpCab;

		// BrnTrafficEntityModule.cpp:4107
		uint32_t luTrailer;

		// BrnTrafficEntityModule.cpp:4111
		Vehicle * lpTrailer;

		Vehicle::GetTrailerIndex(/* parameters */);
		Vehicle::GetCabIndex(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:4112
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			Vehicle::GetTrailerIndex(/* parameters */);
			Vehicle::GetCabIndex(/* parameters */);
		}
		Vehicle::SetDead(/* parameters */);
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

void BrnTraffic::TrafficEntityModule::TryClearupOffscreenTraffic(const const FastBitArray<601>::Iterator &  lItVehicle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:15796
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:15797
		Vector3 lVehiclePos;

		// BrnTrafficEntityModule.cpp:15798
		Vector3 lDiff;

		// BrnTrafficEntityModule.cpp:15799
		float32_t lfDiffSq;

		// BrnTrafficEntityModule.cpp:15801
		bool lbKillVehicle;

		// BrnTrafficEntityModule.cpp:15802
		bool lbFarFromPlayer;

		CgsContainers::FastBitArray<601>::Iterator::GetIndex(/* parameters */);
		GetVehicleTransform(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:15823
			const VehicleTypeData * lpVehicleType;

			// BrnTrafficEntityModule.cpp:15824
			CgsID lTypeID;

			// BrnTrafficEntityModule.cpp:15826
			bool lbBus;

		}
		CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
	}
	CgsContainers::FastBitArray<601>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	GetVehicle(/* parameters */);
	Vehicle::GetVehicleType(/* parameters */);
	VehicleAsset::GetVehicleId(/* parameters */);
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
}

void BrnTraffic::KillZone::GetOffset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficData::GetKillZoneRegions(uint32_t  luOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficData.h:194
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::KillZoneRegion::GetHull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::KillZoneRegion::GetSection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::FindFirstParamOnSection(uint32_t  luHull, uint32_t  luSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:9099
		const HullRuntime * lpHullRuntime;

	}
}

void BrnTraffic::TrafficEntityModule::GetHullRuntime(uint32_t  luHull) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.h:2342
		uint32_t luHullRuntime;

	}
}

void BrnTraffic::HullRuntime::GetFirstParamInSection(uint32_t  luSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficHullRuntime.h:152
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::KillZoneRegion::GetStartRung() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::KillZoneRegion::GetEndRung() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::KillZone::GetCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u>::IsFull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u>::Append(const const FiredKillZoneInfo &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::FireKillZone(TrafficData::KillZoneId  luId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:6951
		const KillZone * lpKillZone;

		// BrnTrafficEntityModule.cpp:6952
		uint32_t luRegion;

		// BrnTrafficEntityModule.cpp:6953
		const KillZoneRegion * lpRegion;

		// BrnTrafficEntityModule.cpp:6954
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficEntityModule.cpp:6955
		uint32_t luParam;

		// BrnTrafficEntityModule.cpp:6956
		const ParamListNode * lpParamNode;

		// BrnTrafficEntityModule.cpp:6957
		float32_t lfStartParam;

		// BrnTrafficEntityModule.cpp:6958
		float32_t lfEndParam;

	}
	KillZone::GetOffset(/* parameters */);
	TrafficData::GetKillZoneRegions(/* parameters */);
	IsHullActive(/* parameters */);
	FindFirstParamOnSection(/* parameters */);
	HullRuntime::GetFirstParamInSection(/* parameters */);
	GetHull(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:7028
		FiredKillZoneInfo lInfo;

		CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u>::IsFull(/* parameters */);
		CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u>::Append(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:7001
		const Vehicle * lpVehicle;

		Vehicle::IsAlive(/* parameters */);
	}
	GetVehicle(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u>::Erase(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnWorld::CrashIO::TrafficOutputInterface::GetCleanupTrafficEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::CleanUpCrashedVehicles(const InputBuffer_PostScene *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:5254
		const TrafficOutputInterface::CleanupTrafficEventQueue * lpCleanupTrafficEvents;

		// BrnTrafficEntityModule.cpp:5257
		int32_t liEvent;

	}
	BrnTrafficIO::InputBuffer_PostScene::GetCrashTrafficOutputInterface(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:5260
		EntityId lEntityId;

		// BrnTrafficEntityModule.cpp:5261
		uint32_t luVehicle;

		CgsModule::BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>::GetEvent(/* parameters */);
	}
	CgsContainers::FastBitArray<601>::UnSetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PostScene::GetRaceCarToTrafficInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:234
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RaceCarToTrafficInterface::IsFlagSet(BrnWorld::RaceCarEntityModuleIO::RaceCarToTrafficInterface::Flag  leFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RaceCarToTrafficInterface::GetShowtimeTrafficDensityScale() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::PostSceneUpdate(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const InputBuffer_PostScene *  lpInput, OutputBuffer_PostScene *  lpOutput, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:2260
		bool lbSimPaused;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	BrnTrafficIO::InputBuffer_PostScene::GetRaceCarToTrafficInterface(/* parameters */);
	BrnTrafficIO::InputBuffer_PostScene::GetRaceCarToTrafficInterface(/* parameters */);
	BrnTrafficIO::InputBuffer_PostScene::GetRaceCarToTrafficInterface(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
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
}

void BrnTraffic::Vehicle::IsOfStaticSpecies() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnTraffic::TrafficEntityModule::KillAllTrafficInCylinder(const rw::math::vpu::Vector3  lCentre, float32_t  lfRadius, float32_t  lfHalfHeight, bool  lbKillStatic) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:4005
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:4006
		float32_t lfRadiusSquared;

	}
	{
		// BrnTrafficEntityModule.cpp:4010
		Vehicle * lpVehicle;

		// BrnTrafficEntityModule.cpp:4012
		bool lbKillVehicle;

		{
			// BrnTrafficEntityModule.cpp:4028
			Vector3 lVehiclePos;

			// BrnTrafficEntityModule.cpp:4031
			Vector3 lDiffXZ;

			rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
		}
	}
	GetVehicle(/* parameters */);
	GetVehicleTransform(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	{
	}
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
}

void BrnTraffic::LightTriggerId::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateEventStarts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:9477
		uint32_t luHull;

		LightTriggerId::IsValid(/* parameters */);
		LightTriggerId::GetHull(/* parameters */);
		IsHullActive(/* parameters */);
		LightTriggerId::GetHull(/* parameters */);
		CgsContainers::Set<uint16_t,72u>::Contains(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:9501
			const BrnTraffic::Hull * lpHull;

			// BrnTrafficEntityModule.cpp:9503
			uint32_t luJunction;

			GetHull(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:9506
				const BrnTraffic::JunctionLogicBox * lpJunction;

				// BrnTrafficEntityModule.cpp:9509
				bool lbChangeToRed;

				// BrnTrafficEntityModule.cpp:9511
				uint32_t luLight;

				JunctionLogicBox::GetNumLights(/* parameters */);
				{
					// BrnTrafficEntityModule.cpp:9514
					const TrafficLightController * lpLight;

					// BrnTrafficEntityModule.cpp:9517
					uint32_t luStopLine;

					// BrnTrafficEntityModule.cpp:9531
					uint32_t luTrafficLight;

					JunctionLogicBox::GetLight(/* parameters */);
				}
				{
					// BrnTrafficEntityModule.cpp:9520
					uint32_t luStopLineHull;

					// BrnTrafficEntityModule.cpp:9521
					HullRuntime * lpStopLineHullRuntime;

					GetHullRuntimeSafe(/* parameters */);
					{
						// BrnTrafficEntityModule.cpp:9526
						uint32_t luStopLineIndex;

						HullRuntime::SetStoplineRed(/* parameters */);
					}
				}
			}
		}
	}
	{
		// BrnTrafficEntityModule.cpp:9488
		uint32_t luParticipant;

		rw::math::vpu::IsValid(/* parameters */);
	}
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:9534
		uint32_t luTrafficLightInstance;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::GetVehicleManagerOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:352
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleManagerOutputInterface::GetRaceCarResetEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::HandleResetRaceCarEvents(const InputBuffer_PostPhysics *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:6667
		const InputBuffer_PostPhysics::VehicleManagerOutputInterface * lpVehicleManagerInterface;

		// BrnTrafficEntityModule.cpp:6668
		const VehicleManagerOutputInterface::RaceCarResetEventQueue * lpResetEventQueue;

		// BrnTrafficEntityModule.cpp:6670
		bool lbOnline;

		// BrnTrafficEntityModule.cpp:6672
		int32_t liEvent;

	}
	BrnTrafficIO::InputBuffer_PostPhysics::GetVehicleManagerOutputInterface(/* parameters */);
	IsPlayingOnlineGameMode(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:6675
		const RaceCarResetEvent * lpEvent;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>::GetEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::TrafficEntityModule::KillTrafficOnStartGridWholeSale(Vector3  lPlayerPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PrepareForModeAction::GetGameModeParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetGameModeType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnMath::IntMax(int32_t  liA, int32_t  liB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMathUtils.h:241
		int32_t liSign;

		// BrnMathUtils.h:242
		int32_t liMask;

	}
}

void BrnMath::IntMin(int32_t  liA, int32_t  liB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMathUtils.h:220
		int32_t liSign;

		// BrnMathUtils.h:221
		int32_t liMask;

	}
}

void BrnGameState::GameModeParams::GetFlag(uint64_t  lFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::IsShowtimeGameMode(const BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetStartLocationCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::StartLocation,8u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetStartPosition(int32_t  liOpponentIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::StartLocation,8u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::StartLocation,8u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::HandlePrepareForModeAction(const InputBuffer_PostPhysics *  lpInput, const PrepareForModeAction *  lpPFMAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:6709
		const GameModeParams * lpGameModeParams;

		// BrnTrafficEntityModule.cpp:6745
		bool lbResettingTraffic;

	}
	BrnGameState::GameStateModuleIO::PrepareForModeAction::GetGameModeParams(/* parameters */);
	BrnGameState::GameModeParams::GetGameModeType(/* parameters */);
	BrnGameState::GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
	BrnMath::IntMax(/* parameters */);
	BrnMath::IntMin(/* parameters */);
	LightTriggerId::IsValid(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:6801
		int32_t liCurrentRaceCarInGameMode;

		BrnGameState::GameModeParams::GetStartPosition(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnTrafficIO::InputBuffer_PostPhysics::GetActiveRaceCarOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:6797
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnGameState::GameModeParams::GetStartLocationCount(/* parameters */);
	CgsContainers::Array<BrnGameState::StartLocation,8u>::GetLength(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:6757
		uint32_t luStartPosition;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnGameState::GameModeParams::GetStartPosition(/* parameters */);
	Pvs::GetHullIndexForPoint(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Pvs::GetHullIndexForPoint(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
}

void BrnTraffic::TrafficEntityModule::KillTrafficOnStartGrid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:3954
		int32_t liCurrentRaceCarInGameMode;

	}
}

extern void TrafficRemovedEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::Erase(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::HandleRecycledTraffic(const VehicleManagerOutputInterface::RemovedTrafficEventQueue *  lpRemovedTrafficQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:3515
		TrafficRemovedEvent lTrafficRemovedEvent;

		// BrnTrafficEntityModule.cpp:3517
		int32_t liEvent;

	}
	{
		// BrnTrafficEntityModule.cpp:3526
		uint16_t luVehicle;

		// BrnTrafficEntityModule.cpp:3529
		const Vehicle * lpVehicle;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::GetEvent(/* parameters */);
		GetVehicle(/* parameters */);
		Vehicle::IsAlive(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:3573
		uint32_t luI;

		CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::Erase(/* parameters */);
		CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
		GetVehicle(/* parameters */);
	}
	CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::operator[](/* parameters */);
	CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::GetLength(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::Array<uint16_t,64u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,64u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,64u>::IsFull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,64u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,64u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,64u>::Append(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::GetParamListNode(uint32_t  luParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,64u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,64u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,64u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::NukeTrafficJams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:7936
		FastBitArray<601> lTouchedParams;

		// BrnTrafficEntityModule.cpp:7939
		Array<uint16_t,64u> lQueueingParams;

		// BrnTrafficEntityModule.cpp:7942
		Iterator lItParam;

		CgsContainers::FastBitArray<601>::UnSetAll(/* parameters */);
		CgsContainers::FastBitArray<601>::Begin(/* parameters */);
		CgsContainers::FastBitArray<601>::Iterator::Iterator(/* parameters */);
		CgsContainers::Array<uint16_t,64u>::Construct(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:7953
			uint32_t luCurrParam;

			// BrnTrafficEntityModule.cpp:7956
			uint32_t luParam;

			// BrnTrafficEntityModule.cpp:7957
			const BrnTraffic::Param * lpParam;

			// BrnTrafficEntityModule.cpp:7958
			const ParamListNode * lpNode;

			// BrnTrafficEntityModule.cpp:8025
			uint32_t luQueueingParam;

			CgsContainers::FastBitArray<601>::Iterator::GetIndex(/* parameters */);
			GetParamListNode(/* parameters */);
			GetParam(/* parameters */);
			CgsContainers::Array<uint16_t,64u>::GetLength(/* parameters */);
			CgsContainers::Array<uint16_t,64u>::GetLength(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:8047
				Param * lpParamToKill;

				CgsContainers::Array<uint16_t,64u>::operator[](/* parameters */);
				{
					// BrnTrafficEntityModule.cpp:8039
					Vector3 lDiff;

					CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
					GetParamTransform(/* parameters */);
					ParamTransform::GetLerpedPos(/* parameters */);
					rw::math::vpu::operator-(/* parameters */);
					rw::math::vpu::Magnitude(/* parameters */);
					rw::math::vpu::operator<(/* parameters */);
					{
					}
				}
				GetParam(/* parameters */);
				Param::SetShouldBeRemoved(/* parameters */);
			}
			CgsContainers::Array<uint16_t,64u>::Clear(/* parameters */);
		}
	}
	CgsContainers::Array<uint16_t,64u>::IsFull(/* parameters */);
	CgsContainers::Array<uint16_t,64u>::Append(/* parameters */);
	CgsContainers::FastBitArray<601>::SetBit(/* parameters */);
	GetParamListNode(/* parameters */);
	GetParam(/* parameters */);
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
	GetParam(/* parameters */);
	CgsContainers::Array<uint16_t,64u>::Append(/* parameters */);
	CgsContainers::FastBitArray<601>::SetBit(/* parameters */);
	GetParamListNode(/* parameters */);
	GetParam(/* parameters */);
	CgsContainers::Array<uint16_t,64u>::IsFull(/* parameters */);
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
}

void CgsContainers::Array<uint16_t,9u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,9u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<uint8_t,16u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint8_t,16u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint8_t,16u>::Contains(const const uint8_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint8_t,16u>::FindFirstInstanceOf(const const uint8_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:474
		uint32_t luElement;

	}
}

void CgsContainers::Array<uint8_t,16u>::Append(const const uint8_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<uint8_t,16u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint8_t,16u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint8_t,16u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::AddVehiclesToTargetList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:8143
		uint32_t luRaceCarHull;

		// BrnTrafficEntityModule.cpp:8144
		const BrnTraffic::Hull * lpHull;

	}
	CgsContainers::Array<uint16_t,9u>::GetLength(/* parameters */);
	CgsContainers::Array<uint16_t,9u>::operator[](/* parameters */);
	GetHull(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:8170
		const FlowType * lpFlowType;

		// BrnTrafficEntityModule.cpp:8172
		Array<uint8_t,16u> lAssetIds;

		// BrnTrafficEntityModule.cpp:8175
		uint32_t luVehicleTypeIndex;

		CgsContainers::Array<uint8_t,16u>::Construct(/* parameters */);
		CgsContainers::Array<uint8_t,16u>::GetLength(/* parameters */);
		CgsContainers::Array<uint8_t,16u>::operator[](/* parameters */);
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
	{
		// BrnTrafficEntityModule.cpp:8178
		uint32_t luVehicleType;

		// BrnTrafficEntityModule.cpp:8180
		const VehicleTypeData * lpVehicleType;

		CgsContainers::Array<uint8_t,16u>::Contains(/* parameters */);
		CgsContainers::Array<uint8_t,16u>::FindFirstInstanceOf(/* parameters */);
	}
	CgsContainers::Array<uint8_t,16u>::Append(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::TrafficCarStreamer::ClearAssetList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficCarStreamer.h:201
		uint32_t luAsset;

	}
}

void BrnTraffic::TrafficCarStreamer::AreAllAssetsUnloaded() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficCarStreamer.h:277
		uint32_t luAsset;

	}
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetGuiEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:412
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<502>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficCarStreamer::AreAllAssetsLoaded() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficCarStreamer.h:252
		uint32_t luAsset;

	}
}

void BrnTraffic::TrafficCarStreamer::IsTrafficAssetLoaded(uint32_t  luAssetId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficCarStreamer.h:237
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetResourceRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:409
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::InternalBaseStreamer::GetGameDataRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<2048>::GetRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<4096,16>::Append<2048, 16>(const const VariableEventQueue<2048,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

		{
			// CgsVariableEventQueue.h:759
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<2048,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<2048,16>::OutputQueueContents() {
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

void CgsModule::VariableEventQueue<2048,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<2048,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<2048,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void CgsCore::MemCpy(void *  lpDestination, const void *  lpSource, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateStreaming(OutputBuffer_PostPhysics *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	TrafficCarStreamer::ClearAssetList(/* parameters */);
	BrnTrafficIO::OutputBuffer_PostPhysics::GetResourceRequestInterface(/* parameters */);
	Append<2048>(/* parameters */);
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
	{
		// BrnTrafficEntityModule.cpp:8081
		GuiEventTrafficPoolEmptied lTrafficPoolEmptiedEvent;

		TrafficCarStreamer::AreAllAssetsUnloaded(/* parameters */);
	}
	CgsModule::VariableEventQueue<2048,16>::GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnTrafficIO::OutputBuffer_PostPhysics::GetGuiEventQueue(/* parameters */);
	AddGuiEvent<BrnGui::GuiEventTrafficPoolEmptied>(/* parameters */);
	TrafficCarStreamer::AreAllAssetsLoaded(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:8101
		GuiEventTrafficPoolEmptied lTrafficPoolEmptiedEvent;

		BrnTrafficIO::OutputBuffer_PostPhysics::GetGuiEventQueue(/* parameters */);
		AddGuiEvent<BrnGui::GuiEventTrafficPoolEmptied>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	}
}

void CgsContainers::Array<uint16_t,9u>::GetItem(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnTraffic::Section::GetNumSegments() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnTraffic::Section::CalcParamFromStartParamAndDistanceAlongSection(float32_t  lfStartParam, float32_t  lfDistanceForward, const float32_t *  lpafCumulativeLengths) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficSection.h:430
		float32_t lfReturnParam;

		// BrnTrafficSection.h:431
		float32_t lfSegmentLength;

		// BrnTrafficSection.h:432
		float32_t lfLength;

		// BrnTrafficSection.h:437
		uint32_t luStartRung;

		// BrnTrafficSection.h:438
		float32_t lfLocalParam;

	}
	GetNumSegments(/* parameters */);
	rw::math::fpu::Floor<float>(/* parameters */);
	{
		// BrnTrafficSection.h:445
		uint32_t luRung;

		GetNumSegments(/* parameters */);
		GetNumSegments(/* parameters */);
		{
			// BrnTrafficSection.h:459
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			GetNumSegments(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		GetNumSegments(/* parameters */);
		rw::math::fpu::Clamp<float>(/* parameters */);
		rw::math::fpu::Max<float>(/* parameters */);
		{
			// BrnTrafficSection.h:472
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			GetNumSegments(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnTrafficSection.h:483
		int32_t liRung;

		{
			// BrnTrafficSection.h:511
			CgsDev::StrStream lStrStream;

		}
	}
	{
		// BrnTrafficSection.h:434
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	GetNumSegments(/* parameters */);
	{
		// BrnTrafficSection.h:478
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetNumSegments(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetNumSegments(/* parameters */);
	{
		// BrnTrafficSection.h:498
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		GetNumSegments(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetNumSegments(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetNumSegments(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	{
	}
}

void CgsContainers::Stack<uint8_t,200>::IsEmpty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint8_t,200>::Peek() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint8_t,200>::Pop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::StaticVehicles_Generate(uint8_t  luVehicleType, uint16_t  luHull, uint8_t  luIndexOnHull) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:8617
		uint16_t luStaticParam;

		// BrnTrafficEntityModule.cpp:8620
		StaticTrafficParam * lpNewParam;

	}
	CgsContainers::Stack<uint8_t,200>::IsEmpty(/* parameters */);
	CgsContainers::Stack<uint8_t,200>::Peek(/* parameters */);
	CgsContainers::Stack<uint8_t,200>::Pop(/* parameters */);
	CgsContainers::Stack<uint8_t,200>::IsEmpty(/* parameters */);
	GetStaticVehicle(/* parameters */);
	GetStaticVehicle(/* parameters */);
	StaticTrafficParam::SetZombie(/* parameters */);
	StaticTrafficParam::SetDivorced(/* parameters */);
	GetStaticVehicle(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:8638
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		GetVehicleIndexFromStaticIndex(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:8622
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,200u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,200u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,200u>::Erase(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,200u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::StaticVehicles_UpdatePurgatory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:8653
		uint32_t luPurgIdx;

		CgsContainers::Array<BrnTraffic::PurgatoryInfo,200u>::GetLength(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:8655
		const PurgatoryInfo & lInfo;

		CgsContainers::Array<BrnTraffic::PurgatoryInfo,200u>::operator[](/* parameters */);
		CgsContainers::Stack<uint8_t,200>::Push(/* parameters */);
		CgsContainers::Stack<uint8_t,200>::IsFull(/* parameters */);
		CgsContainers::Array<BrnTraffic::PurgatoryInfo,200u>::Erase(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::Stack<uint16_t,400>::IsEmpty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,400>::Peek() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,400>::Pop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::TryAllocateParamId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Stack<uint16_t,400>::IsEmpty(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:8965
		uint32_t luFreeParam;

		CgsContainers::Stack<uint16_t,400>::Peek(/* parameters */);
		GetParam(/* parameters */);
		CgsContainers::Stack<uint16_t,400>::Pop(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:8969
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

void CgsContainers::Stack<uint16_t,1>::IsEmpty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,1>::Peek() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,1>::Pop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::TryAllocateTrailerId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Stack<uint16_t,1>::IsEmpty(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:9000
		uint32_t luFreeTrailer;

		CgsContainers::Stack<uint16_t,1>::Peek(/* parameters */);
		GetVehicleSpecies(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:9001
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		GetVehicle(/* parameters */);
		CgsContainers::Stack<uint16_t,1>::Pop(/* parameters */);
	}
}

void BrnTraffic::TrafficEntityModule::PickVehicleToSpawn(uint32_t  luFlowTypeId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:9036
		const FlowType * lpFlowType;

		// BrnTrafficEntityModule.cpp:9039
		uint32_t luRand;

		// BrnTrafficEntityModule.cpp:9040
		uint8_t luVehicleType;

	}
	CgsNumeric::Random::RandomInt(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:9045
		bool lbAcceptVehicle;

		// BrnTrafficEntityModule.cpp:9047
		uint8_t luVehicleTypeId;

		// BrnTrafficEntityModule.cpp:9050
		const VehicleTypeData * lpVehicleType;

	}
	{
		// BrnTrafficEntityModule.cpp:9055
		int32_t liBigVehicleRand;

	}
	{
		// BrnTrafficEntityModule.cpp:9083
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsNumeric::Random::RandomInt(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:9066
		CgsID lTypeId;

	}
}

void BrnTraffic::TrafficEntityModule::FindNextParamRelative(uint32_t  luStartParamIndex, float32_t  lfParamAlong) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:9167
		uint32_t luCurrParam;

	}
	{
		// BrnTrafficEntityModule.cpp:9170
		const ParamListNode * lpNode;

		// BrnTrafficEntityModule.cpp:9171
		float32_t lfNodeParamAlong;

		{
			// BrnTrafficEntityModule.cpp:9178
			uint32_t luPrevParam;

			// BrnTrafficEntityModule.cpp:9187
			const ParamListNode * lpPrevNode;

			// BrnTrafficEntityModule.cpp:9188
			float32_t lfPrevNodeParamAlong;

		}
	}
	{
		// BrnTrafficEntityModule.cpp:9212
		uint32_t luNextParam;

		// BrnTrafficEntityModule.cpp:9221
		const ParamListNode * lpNextNode;

		// BrnTrafficEntityModule.cpp:9222
		float32_t lfNextNodeParamAlong;

	}
	{
		// BrnTrafficEntityModule.cpp:9219
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:9185
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:9164
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::TrafficEntityModule::CountParamsOnSection(uint32_t  luHull, uint32_t  luSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:9302
		uint32_t luParamCount;

		// BrnTrafficEntityModule.cpp:9305
		uint32_t luParamIndex;

		FindFirstParamOnSection(/* parameters */);
	}
	HullRuntime::GetFirstParamInSection(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:9315
		const ParamListNode * lpNode;

	}
	{
		// BrnTrafficEntityModule.cpp:9309
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:9310
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::HullRuntime::SetStoplineRed(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void std::sort<uint16_t*>(uint16_t *  _First, uint16_t *  _Last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<72u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::BitArray<72u>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<72u>::GetFirstZeroBit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:590
		uint32_t liIndex;

		{
			// CgsBitArray.h:600
			int32_t liFirstZeroBit;

			{
				// CgsBitArray.h:601
				CgsDev::StrStream lStrStream;

			}
		}
		{
			// CgsBitArray.h:606
			int32_t liFirstZeroBit;

		}
	}
}

void CgsContainers::BitArray<72u>::GetZeroBitInInt(int64_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:796
		uint32_t liLeadingZeros;

	}
}

void CgsContainers::_CountLeadingZeros64(uint64_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:169
		uint64_t luRes;

	}
}

void CgsContainers::BitArray<72u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::RebuildGeneratorList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:7597
		uint32_t luActiveHull;

		// BrnTrafficEntityModule.cpp:7598
		float32_t lfPhase;

		{
			// BrnTrafficEntityModule.cpp:7610
			uint32_t luHull;

			// BrnTrafficEntityModule.cpp:7611
			const BrnTraffic::Hull * lpHull;

			// BrnTrafficEntityModule.cpp:7613
			uint32_t luSection;

			{
				// BrnTrafficEntityModule.cpp:7616
				const SectionFlow * lpFlow;

				// BrnTrafficEntityModule.cpp:7624
				const Section * lpSection;

			}
		}
	}
}

void BrnTraffic::TrafficEntityModule::RecalculateActiveHulls(const InputBuffer_PostPhysics *  lpInput, OutputBuffer_PostPhysics *  lpOutput, Set<uint16_t,72u> *  lpOutNewHulls, Set<uint16_t,72u> *  lpOutOldHulls) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:7166
		int32_t liRaceCar;

		// BrnTrafficEntityModule.cpp:7167
		Set<uint16_t,72u> lPrevActiveHulls;

		// BrnTrafficEntityModule.cpp:7168
		Set<uint16_t,72u> lPrevActiveHullsForLocalPlayer;

		// BrnTrafficEntityModule.cpp:7169
		Set<uint16_t,72u> lNewHullsForLocalPlayer;

		// BrnTrafficEntityModule.cpp:7170
		Set<uint16_t,72u> lOldHullsForLocalPlayer;

		// BrnTrafficEntityModule.cpp:7171
		uint32_t luChangedHull;

		CgsContainers::Set<uint16_t,72u>::Clear(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:7196
			uint32_t luHullIndex;

			{
				// BrnTrafficEntityModule.cpp:7200
				uint32_t luRaceCarHull;

			}
			CgsContainers::Array<uint16_t,9u>::GetLength(/* parameters */);
		}
		SetDifference<72u, 72u>(/* parameters */);
		SetDifference<72u, 72u>(/* parameters */);
		CgsContainers::Set<uint16_t,72u>::Clear(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:7243
			uint32_t luHullIndex;

			{
				// BrnTrafficEntityModule.cpp:7247
				uint32_t luRaceCarHull;

			}
			CgsContainers::Array<uint16_t,9u>::GetLength(/* parameters */);
		}
		SetDifference<72u, 72u>(/* parameters */);
		SetDifference<72u, 72u>(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:7262
			uint32_t luHull;

			// BrnTrafficEntityModule.cpp:7263
			uint32_t luHullRuntime;

		}
		CgsContainers::BitArray<72u>::IsBitSet(/* parameters */);
		CgsContainers::BitArray<72u>::UnSetBit(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:7275
			uint32_t luHull;

			// BrnTrafficEntityModule.cpp:7278
			int32_t liHullRuntime;

		}
		CgsContainers::BitArray<72u>::GetFirstZeroBit(/* parameters */);
		CgsContainers::BitArray<72u>::SetBit(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:7290
			uint32_t luHull;

			// BrnTrafficEntityModule.cpp:7291
			const BrnTraffic::Hull * lpHull;

			// BrnTrafficEntityModule.cpp:7293
			uint32_t luJunction;

		}
		{
			// BrnTrafficEntityModule.cpp:7296
			const BrnTraffic::JunctionLogicBox * lpJunction;

			// BrnTrafficEntityModule.cpp:7298
			uint32_t luLight;

			JunctionLogicBox::GetNumLights(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:7301
				const TrafficLightController * lpLight;

				// BrnTrafficEntityModule.cpp:7303
				uint32_t luStopline;

				JunctionLogicBox::GetLight(/* parameters */);
			}
			{
				// BrnTrafficEntityModule.cpp:7306
				uint32_t luStoplineHull;

				// BrnTrafficEntityModule.cpp:7314
				HullRuntime * lpStoplineHullRuntime;

			}
			IsHullActive(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		RebuildGeneratorList(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:7208
		int32_t liWorstCaseHullIndex;

		// BrnTrafficEntityModule.cpp:7209
		int32_t liNumWorstCaseHulls;

	}
	{
		// BrnTrafficEntityModule.cpp:7221
		uint16_t * lpBegin;

		// BrnTrafficEntityModule.cpp:7222
		uint16_t * lpEnd;

		CgsContainers::Set<uint16_t,72u>::operator[](/* parameters */);
		std::sort<uint16_t*>(/* parameters */);
	}
}

void BrnTraffic::StaticTrafficParam::ClearDying() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,200u>::Append(const const PurgatoryInfo &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::StaticVehicles_RemoveDeadParam(uint32_t  luStaticParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsDecisionFrame(/* parameters */);
	GetStaticTrafficParam(/* parameters */);
	GetStaticTrafficParam(/* parameters */);
	GetStaticVehicle(/* parameters */);
	GetStaticVehicle(/* parameters */);
	GetStaticVehicle(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:9628
		PurgatoryInfo lPurgatoryInfo;

		GetStaticTrafficParam(/* parameters */);
		StaticTrafficParam::ClearDying(/* parameters */);
		CgsContainers::Array<BrnTraffic::PurgatoryInfo,200u>::Append(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::TrafficEntityModule::StaticVehicles_UpdateStaticParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:8790
		uint32_t luStaticParam;

		// BrnTrafficEntityModule.cpp:8791
		StaticTrafficParam * lpStaticParam;

	}
}

void BrnTraffic::LaneRung::GetCentrePos() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::vpu::Floor(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:24
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void BrnTraffic::LaneRung::GetRightVector() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficSection.h:327
		Vector3 lDiff;

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

void BrnTraffic::Section::CalcTransformAtParameter(const const BrnTraffic::LaneRung &  lRung0, const const BrnTraffic::LaneRung &  lRung1, const VecFloat  lfParamAlong, uint32_t  luSegment, const Vector3 &  lOutPosition, const Vector3 &  lOutDirection, const Vector3 &  lOutRight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficSection.h:706
		Vector3 lPoint0;

		// BrnTrafficSection.h:707
		Vector3 lPoint1;

		// BrnTrafficSection.h:709
		VecFloat lfSegmentParam;

		// BrnTrafficSection.h:711
		Vector3 lRight0;

		// BrnTrafficSection.h:712
		Vector3 lRight1;

		// BrnTrafficSection.h:714
		Vector3 lRight;

		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
	{
		// BrnTrafficSection.h:703
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetNumSegments(/* parameters */);
	{
		// BrnTrafficSection.h:704
		CgsDev::StrStream lStrStream;

	}
	LaneRung::GetRightVector(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	LaneRung::GetCentrePos(/* parameters */);
	rw::math::vpu::Floor(/* parameters */);
	LaneRung::GetCentrePos(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	LaneRung::GetRightVector(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	{
		{
		}
	}
	{
		{
		}
	}
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnTrafficSection.h:723
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
		{
		}
	}
	{
		// BrnTrafficSection.h:724
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnTrafficSection.h:720
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetNumSegments(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	{
	}
}

void BrnTraffic::Section::GetGlobalRungForSegment(const VecFloat  lfParamAlong, uint32_t  luSegment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficSection.h:652
		int32_t liRungId;

		{
			// BrnTrafficSection.h:648
			CgsDev::StrStream lStrStream;

		}
		{
			// BrnTrafficSection.h:649
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnTraffic::Section::CalcTransformAtParameter(const BrnTraffic::LaneRung *  lpaGlobalRungs, const VecFloat  lfParamAlong, uint32_t  luSegment, const Vector3 &  lOutPosition, const Vector3 &  lOutDirection, const Vector3 &  lOutRight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficSection.h:678
		int32_t liRungId;

		// BrnTrafficSection.h:680
		LaneRung lRung0;

		// BrnTrafficSection.h:681
		LaneRung lRung1;

	}
	GetGlobalRungForSegment(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetNumSegments(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	{
	}
}

void BrnTraffic::Section::CalcPositionAtParameter(const BrnTraffic::LaneRung *  lpaGlobalRungs, const VecFloat  lfParamAlong, uint32_t  luSegment, const Vector3 &  lOutPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficSection.h:599
		uint32_t luRungId;

		// BrnTrafficSection.h:601
		Vector3 lRung0Pt;

		// BrnTrafficSection.h:602
		Vector3 lRung1Pt;

		// BrnTrafficSection.h:603
		VecFloat lfSegmentParam;

		{
			// BrnTrafficSection.h:597
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnTraffic::TrafficData::GetVehicleTraitsForVehicleType(uint32_t  luVehicleType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficData.h:210
		uint32_t luTraitsIndex;

		{
			// BrnTrafficData.h:212
			CgsDev::StrStream lStrStream;

		}
		{
			// BrnTrafficData.h:215
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnTraffic::ParamTransform::Initialise(const rw::math::vpu::Vector3  lPos, const rw::math::vpu::Vector3  lDir, const rw::math::vpu::Vector3  lRight, const VecFloat  lfSpeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Param::SetDivorced() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GenerateNewVehicle(uint32_t  luVehicleTypeId, uint32_t  luHullIndex, uint32_t  luSectionIndex, float32_t  lfParamAlong) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:8857
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficEntityModule.cpp:8859
		Vector3 lStartPos;

		// BrnTrafficEntityModule.cpp:8861
		const Section * lpSection;

		// BrnTrafficEntityModule.cpp:8891
		uint32_t luParam;

		// BrnTrafficEntityModule.cpp:8902
		Param * lpNewParam;

		// BrnTrafficEntityModule.cpp:8903
		float32_t lfRandomVal;

		// BrnTrafficEntityModule.cpp:8904
		const VehicleTypeData * lpVehicleType;

		// BrnTrafficEntityModule.cpp:8905
		const VehicleTypeRuntime * lpVehicleTypeRuntime;

		// BrnTrafficEntityModule.cpp:8906
		const BrnTraffic::VehicleTraits * lpVehicleTraits;

	}
	Hull::GetSection(/* parameters */);
	Hull::GetSection(/* parameters */);
	GetParam(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	GetVehicleTypeRuntime(/* parameters */);
	TrafficData::GetVehicleTraitsForVehicleType(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:8920
		Vector3 lParamPos;

		// BrnTrafficEntityModule.cpp:8921
		Vector3 lParamDir;

		// BrnTrafficEntityModule.cpp:8922
		Vector3 lParamRight;

		// BrnTrafficEntityModule.cpp:8930
		ParamTransform * lpTransform;

	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	GetParamTransform(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	ParamTransform::Initialise(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	Param::SetZombie(/* parameters */);
	Param::SetDivorced(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:8946
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	Section::CalcPositionAtParameter(/* parameters */);
	Section::GetNumSegments(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	LaneRung::GetCentrePos(/* parameters */);
	rw::math::vpu::Floor(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	LaneRung::GetCentrePos(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:8899
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::Hull::GetRungLengthsForSection(uint32_t  luSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficHull.h:216
		const Section * lpSection;

	}
}

void BrnTraffic::TrafficEntityModule::FillNewHull(uint32_t  luHullIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:8478
		uint32_t luSection;

		// BrnTrafficEntityModule.cpp:8479
		float32_t lfTimeToDrive;

		// BrnTrafficEntityModule.cpp:8480
		float32_t lfSecondsPerVehicle;

		// BrnTrafficEntityModule.cpp:8481
		float32_t lfVehiclesToSpawn;

		// BrnTrafficEntityModule.cpp:8482
		float32_t lfVehiclesLeftToSpawn;

		// BrnTrafficEntityModule.cpp:8483
		uint32_t luVehiclesToSpawn;

		// BrnTrafficEntityModule.cpp:8484
		float32_t lfNumSegments;

		// BrnTrafficEntityModule.cpp:8485
		float32_t lfDistancePerParam;

		// BrnTrafficEntityModule.cpp:8486
		float32_t lfParamAlong;

		// BrnTrafficEntityModule.cpp:8487
		float32_t lfMaxParamJitter;

		// BrnTrafficEntityModule.cpp:8488
		float32_t lfJitteredParam;

		// BrnTrafficEntityModule.cpp:8489
		float32_t lfVehiclesPerMinute;

		// BrnTrafficEntityModule.cpp:8490
		const Section * lpSection;

		// BrnTrafficEntityModule.cpp:8491
		const SectionFlow * lpFlowData;

		// BrnTrafficEntityModule.cpp:8492
		const BrnTraffic::Hull * lpHull;

		GetHull(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	Hull::GetFlowData(/* parameters */);
	Hull::GetSection(/* parameters */);
	Section::GetNumSegments(/* parameters */);
	CalcModifiedDensity(/* parameters */);
	{
		rw::math::fpu::Min<float>(/* parameters */);
		rw::math::fpu::Max<float>(/* parameters */);
	}
	rw::math::fpu::Floor<float>(/* parameters */);
	__fsel(/* parameters */);
	Hull::GetRungLengthsForSection(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:8539
		float32_t lfParamJitter;

		// BrnTrafficEntityModule.cpp:8543
		uint16_t luVehicleType;

		Hull::GetRungLengthsForSection(/* parameters */);
	}
	CgsNumeric::Random::RandomFloat(/* parameters */);
	Hull::GetRungLengthsForSection(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:8559
		uint8_t luStaticVehicle;

		{
			// BrnTrafficEntityModule.cpp:8561
			const StaticTrafficVehicle * lpNewStaticVehicle;

			// BrnTrafficEntityModule.cpp:8594
			uint8_t luVehicleType;

			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator<(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
		}
		CgsNumeric::Random::RandomInt(/* parameters */);
		Hull::GetStaticVehicle(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::Param::GetParamAlong() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::DEBUGGetStopTrafficMoving() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetParamPlan(uint32_t  luParam, uint32_t  luPlan) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Param::SetChangedSection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Param::PushHistory(uint32_t  luSegmentIndex, uint32_t  luHullIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficParam.h:738
		uint32_t luLastEntry;

	}
}

void BrnTraffic::Param::SetParamAlong(float32_t  lfParamAlong) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateParams_IncrementParam(uint32_t  luParam, const BrnTraffic::Hull **  lppHull, const Section **  lppSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:11980
		Param * lpParam;

		// BrnTrafficEntityModule.cpp:11981
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficEntityModule.cpp:11982
		const Section * lpSection;

		// BrnTrafficEntityModule.cpp:11984
		float32_t lfParamAlong;

		// BrnTrafficEntityModule.cpp:11985
		uint32_t luCurrentRung;

		// BrnTrafficEntityModule.cpp:11987
		const float32_t * lpaCumulativeLengths;

		// BrnTrafficEntityModule.cpp:11988
		float32_t lfSegmentLength;

		// BrnTrafficEntityModule.cpp:11990
		uint32_t luNumSegments;

		// BrnTrafficEntityModule.cpp:11992
		bool lbDoNeighbourUpdate;

		// BrnTrafficEntityModule.cpp:11995
		float32_t lfOldSpeed;

		// BrnTrafficEntityModule.cpp:11996
		float32_t lfAcceleration;

		// BrnTrafficEntityModule.cpp:11997
		float32_t lfDistToMove0;

		// BrnTrafficEntityModule.cpp:11998
		float32_t lfDistToMove1;

		// BrnTrafficEntityModule.cpp:11999
		float32_t lfDistToMove;

		GetParam(/* parameters */);
	}
	Hull::GetRungLengthsForSection(/* parameters */);
	Param::GetParamAlong(/* parameters */);
	Section::GetNumSegments(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:12041
		float32_t lfLocalParam;

		// BrnTrafficEntityModule.cpp:12043
		float32_t lfRemainingInCurrentSegment;

		{
			// BrnTrafficEntityModule.cpp:12038
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		rw::math::fpu::Floor<float>(/* parameters */);
		__fsel(/* parameters */);
		rw::math::fpu::Floor<float>(/* parameters */);
		__fsel(/* parameters */);
		__fsel(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:12076
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		Param::PushHistory(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:12084
			ParamPlan * lpPlan;

			// BrnTrafficEntityModule.cpp:12085
			uint8_t luNewSection;

			// BrnTrafficEntityModule.cpp:12086
			uint16_t luNewHull;

			GetParamPlan(/* parameters */);
			GetParamPlan(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:12107
				uint8_t luNewDirection;

			}
			IsHullActive(/* parameters */);
			Param::SetChangedSection(/* parameters */);
			GetHull(/* parameters */);
			CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
			Hull::GetSection(/* parameters */);
			Hull::GetRungLengthsForSection(/* parameters */);
			Section::GetNumSegments(/* parameters */);
		}
	}
	{
	}
	{
	}
	{
		// BrnTrafficEntityModule.cpp:12048
		float32_t lfLocalParamDelta;

		// BrnTrafficEntityModule.cpp:12049
		float32_t lfNewParam;

		// BrnTrafficEntityModule.cpp:12051
		Vector3 lNewPosition;

		// BrnTrafficEntityModule.cpp:12052
		Vector3 lNewAt;

		// BrnTrafficEntityModule.cpp:12053
		Vector3 lNewRight;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		Section::GetNumSegments(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	}
	Param::SetParamAlong(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	Param::PushHistory(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::TrafficEntityModule::GetParamNeedToSlowData(uint32_t  luParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Param::IsQueueing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficParam.h:529
		extern const float32_t KF_MIN_SPEED_FOR_QUEUEING;

	}
}

void BrnTraffic::TrafficEntityModule::UpdateParams_UpdateBehaviour(uint32_t  luParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:10678
		Param * lpParam;

		// BrnTrafficEntityModule.cpp:10679
		const ParamNeedToSlowData * lpParamNeedToSlowData;

		GetParam(/* parameters */);
	}
	GetParamNeedToSlowData(/* parameters */);
	Param::IsQueueing(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:10684
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:10690
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::TrafficEntityModule::UpdateParams_UpdateDead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:9649
		FastBitArray<601> lParams_Dying_And_CleanedUpVehicles;

		// BrnTrafficEntityModule.cpp:9650
		FastBitArray<601> lVehicles_Temp;

		// BrnTrafficEntityModule.cpp:9659
		Iterator lItParam;

		IsDecisionFrame(/* parameters */);
		CgsContainers::FastBitArray<601>::SetInverse(/* parameters */);
		CgsContainers::FastBitArray<601>::SetAnd(/* parameters */);
		CgsContainers::FastBitArray<601>::SetInverse(/* parameters */);
		CgsContainers::FastBitArray<601>::SetAnd(/* parameters */);
		CgsContainers::FastBitArray<601>::SetInverse(/* parameters */);
		CgsContainers::FastBitArray<601>::SetAnd(/* parameters */);
		CgsContainers::FastBitArray<601>::Begin(/* parameters */);
		CgsContainers::FastBitArray<601>::Iterator::Iterator(/* parameters */);
		CgsContainers::FastBitArray<601>::Iterator::operator!=(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:9664
			uint32_t luParam;

			// BrnTrafficEntityModule.cpp:9667
			Param * lpParam;

			CgsContainers::FastBitArray<601>::Iterator::GetIndex(/* parameters */);
			GetParam(/* parameters */);
			GetVehicle(/* parameters */);
			GetVehicle(/* parameters */);
			GetVehicle(/* parameters */);
			Param::ClearDying(/* parameters */);
			PutParamInPurgatory(/* parameters */);
		}
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
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,400u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,400u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Stack<uint16_t,400>::Contains(const const uint16_t &  lThing) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStack.h:134
		int32_t liElement;

	}
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,400u>::Erase(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,400u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateParams_UpdatePurgatoryList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:10166
		uint32_t luPurgatoryParam;

		CgsContainers::Array<BrnTraffic::PurgatoryInfo,400u>::GetLength(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:10169
		const PurgatoryInfo & lInfo;

		// BrnTrafficEntityModule.cpp:10177
		uint32_t luParam;

		// BrnTrafficEntityModule.cpp:10178
		Param * lpParam;

		CgsContainers::Array<BrnTraffic::PurgatoryInfo,400u>::operator[](/* parameters */);
		GetParam(/* parameters */);
		CgsContainers::Stack<uint16_t,400>::Contains(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:10183
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsContainers::Stack<uint16_t,400>::Push(/* parameters */);
		Param::SetInPurgatory(/* parameters */);
		CgsContainers::Array<BrnTraffic::PurgatoryInfo,400u>::Erase(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:10182
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::HullRuntime::SetFirstParamInSection(uint32_t  luSection, uint16_t  luParam, uint16_t  luOldParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficHullRuntime.h:128
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficHullRuntime.h:123
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::TrafficEntityModule::RemoveParamFromList(uint32_t  luParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:12878
		ParamListNode * lpNode;

	}
	{
		// BrnTrafficEntityModule.cpp:12882
		ParamListNode * lpNextNode;

	}
	{
		// BrnTrafficEntityModule.cpp:12890
		ParamListNode * lpPrevNode;

	}
	{
		// BrnTrafficEntityModule.cpp:12898
		const BrnTraffic::Param * lpParam;

		GetParam(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:12901
			HullRuntime * lpHullRuntime;

			GetHullRuntimeSafe(/* parameters */);
		}
	}
}

void BrnTraffic::TrafficEntityModule::SwapParamsInList(uint32_t  luParam, uint32_t  luNextParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:12829
		ParamListNode * lpNode;

		// BrnTrafficEntityModule.cpp:12830
		ParamListNode * lpNextNode;

		// BrnTrafficEntityModule.cpp:12836
		uint32_t luPrevParam;

		// BrnTrafficEntityModule.cpp:12852
		uint32_t luNextNextParam;

	}
	{
		// BrnTrafficEntityModule.cpp:12840
		ParamListNode * lpPrevNode;

	}
	{
		// BrnTrafficEntityModule.cpp:12856
		ParamListNode * lpNextNextNode;

	}
	{
		// BrnTrafficEntityModule.cpp:12846
		const BrnTraffic::Param * lpParam;

		// BrnTrafficEntityModule.cpp:12847
		HullRuntime * lpHullRuntime;

		GetParam(/* parameters */);
		GetHullRuntime(/* parameters */);
	}
}

void BrnTraffic::Section::CalcDistanceAlongSection(float32_t  lfParam, uint32_t  luSegment, const float32_t *  lpafCumulativeLengths) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficSection.h:391
		uint32_t luRung;

		// BrnTrafficSection.h:392
		float32_t lfLength;

		// BrnTrafficSection.h:393
		float32_t lfSegmentLength;

		// BrnTrafficSection.h:395
		float32_t lfLocalParam;

	}
	GetNumSegments(/* parameters */);
	{
		// BrnTrafficSection.h:386
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	{
		// BrnTrafficSection.h:388
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetNumSegments(/* parameters */);
	rw::math::fpu::Floor<float>(/* parameters */);
	__fsel(/* parameters */);
	{
	}
}

void BrnTraffic::TrafficEntityModule::SpawnNewTraffic(Set<uint16_t,72u> *  lpNewHulls) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:8261
		uint32_t luNewHull;

		// BrnTrafficEntityModule.cpp:8268
		uint32_t luGenerator;

		IsDecisionFrame(/* parameters */);
	}
	NeedToTakeActionAgainstJunctionFUP(/* parameters */);
	CgsContainers::Set<uint16_t,72u>::GetLength(/* parameters */);
	CgsContainers::Set<uint16_t,72u>::GetItem(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:8275
		uint32_t luHull;

		// BrnTrafficEntityModule.cpp:8276
		uint32_t luSection;

		// BrnTrafficEntityModule.cpp:8278
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficEntityModule.cpp:8279
		const SectionFlow * lpFlowData;

		// BrnTrafficEntityModule.cpp:8280
		const Section * lpSection;

		// BrnTrafficEntityModule.cpp:8283
		uint16_t luVehicleType;

		// BrnTrafficEntityModule.cpp:8286
		float32_t lfDistAlong;

		// BrnTrafficEntityModule.cpp:8287
		float32_t lfParamAlong;

		// BrnTrafficEntityModule.cpp:8290
		uint32_t luNextParam;

		// BrnTrafficEntityModule.cpp:8291
		bool lbSpawn;

		GetHull(/* parameters */);
		CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
		Hull::GetFlowData(/* parameters */);
		Hull::GetSection(/* parameters */);
		Hull::GetRungLengthsForSection(/* parameters */);
		FindFirstParamOnSection(/* parameters */);
		HullRuntime::GetFirstParamInSection(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:8294
			const BrnTraffic::Param * lpNextParam;

			// BrnTrafficEntityModule.cpp:8295
			float32_t lfNextParamDistAlong;

			// BrnTrafficEntityModule.cpp:8298
			float32_t lfMinSpawnDistance;

			GetParam(/* parameters */);
			Hull::GetRungLengthsForSection(/* parameters */);
			Param::GetParamAlong(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	}
}

void BrnTraffic::Section::CalcDistanceFromEndOfSection(float32_t  lfParamAlong, uint32_t  luSegment, const float32_t *  lpafCumulativeLengths) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::FindFirstParamAfterPos(uint32_t  luHull, uint32_t  luSection, float32_t  lfDistanceFromEndOfLane, float32_t *  lpfOutParamDistFromEndOfLane) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:9262
		const HullRuntime * lpHullRuntime;

	}
	GetHullRuntimeSafe(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:9265
		uint32_t luParam;

		// BrnTrafficEntityModule.cpp:9266
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficEntityModule.cpp:9267
		const Section * lpSection;

		HullRuntime::GetFirstParamInSection(/* parameters */);
		GetHull(/* parameters */);
		CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
		Hull::GetSection(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:9272
			const ParamListNode * lpNode;

			// BrnTrafficEntityModule.cpp:9273
			float32_t lfParamDistFromEnd;

			GetParamListNode(/* parameters */);
			Hull::GetRungLengthsForSection(/* parameters */);
			Section::CalcDistanceFromEndOfSection(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	}
}

void BrnTraffic::Section::CalcSignedDistanceAlongSection(float32_t  lfParamA, uint32_t  luSegmentA, float32_t  lfParamB, uint32_t  luSegmentB, const float32_t *  lpafCumulativeLengths) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::FindNearestParamInFront(uint32_t  luParam, float32_t  lfDistanceLimit, float32_t *  lpfOutDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:11732
		float32_t lfMinDistance;

		// BrnTrafficEntityModule.cpp:11733
		uint32_t luNearestParam;

		// BrnTrafficEntityModule.cpp:11735
		const BrnTraffic::Param * lpParam;

		// BrnTrafficEntityModule.cpp:11736
		uint32_t luCurrentHull;

		// BrnTrafficEntityModule.cpp:11737
		uint32_t luCurrentSection;

		// BrnTrafficEntityModule.cpp:11738
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficEntityModule.cpp:11739
		const Section * lpSection;

		// BrnTrafficEntityModule.cpp:11741
		const ParamListNode * lpParamNode;

		// BrnTrafficEntityModule.cpp:11742
		uint32_t luNextParam;

		// BrnTrafficEntityModule.cpp:11772
		float32_t lfDistanceFromEnd;

	}
	GetParam(/* parameters */);
	Hull::GetSection(/* parameters */);
	GetParamListNode(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:11752
		const BrnTraffic::Param * lpNextParam;

		GetParam(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:11756
			float32_t lfDistance;

		}
	}
	Hull::GetRungLengthsForSection(/* parameters */);
	Param::GetParamAlong(/* parameters */);
	Section::CalcDistanceFromEndOfSection(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:11777
		uint32_t luDirection;

		// BrnTrafficEntityModule.cpp:11780
		uint32_t[9] lauExtraHullsToCheck;

		// BrnTrafficEntityModule.cpp:11781
		uint32_t[9] lauExtraSectionsToCheck;

		// BrnTrafficEntityModule.cpp:11782
		float32_t[9] lafExtraSectionStartDistances;

		// BrnTrafficEntityModule.cpp:11783
		uint32_t luNumExtraSectionsToCheck;

		// BrnTrafficEntityModule.cpp:11784
		uint32_t[3] lauMergingHullsToCheck;

		// BrnTrafficEntityModule.cpp:11785
		uint32_t[3] lauMergingSectionsToCheck;

		// BrnTrafficEntityModule.cpp:11786
		uint32_t luNumMergingSectionsToCheck;

		// BrnTrafficEntityModule.cpp:11879
		uint32_t luExtraSectionIndex;

		// BrnTrafficEntityModule.cpp:11919
		uint32_t luMergingSection;

		{
			// BrnTrafficEntityModule.cpp:11790
			uint32_t luNextHull;

			// BrnTrafficEntityModule.cpp:11798
			uint32_t luNextSection;

			// BrnTrafficEntityModule.cpp:11802
			const HullRuntime * lpHullRuntime;

			// BrnTrafficEntityModule.cpp:11834
			const BrnTraffic::Hull * lpNextHull;

			// BrnTrafficEntityModule.cpp:11835
			const Section * lpNextSection;

			GetHullRuntimeSafe(/* parameters */);
			HullRuntime::GetFirstParamInSection(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:11809
				const BrnTraffic::Hull * lpNextHull;

				// BrnTrafficEntityModule.cpp:11810
				const Section * lpNextSection;

				// BrnTrafficEntityModule.cpp:11811
				const BrnTraffic::Param * lpNextParam;

				// BrnTrafficEntityModule.cpp:11813
				float32_t lfDistance;

				Hull::GetSection(/* parameters */);
				GetParam(/* parameters */);
				Hull::GetRungLengthsForSection(/* parameters */);
				Param::GetParamAlong(/* parameters */);
			}
			Hull::GetSection(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:11838
				uint32_t luNextDirection;

			}
			{
				// BrnTrafficEntityModule.cpp:11856
				int32_t liBackDirection;

				{
					// BrnTrafficEntityModule.cpp:11859
					uint32_t luMergerHull;

					{
						// BrnTrafficEntityModule.cpp:11862
						uint32_t luMergerSection;

					}
				}
			}
		}
		{
			// BrnTrafficEntityModule.cpp:11882
			uint32_t luExtraHull;

			// BrnTrafficEntityModule.cpp:11883
			uint32_t luExtraSection;

			// BrnTrafficEntityModule.cpp:11884
			float32_t lfExtraStartDist;

			// BrnTrafficEntityModule.cpp:11887
			const HullRuntime * lpHullRuntime;

			GetHullRuntimeSafe(/* parameters */);
			HullRuntime::GetFirstParamInSection(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:11893
				const BrnTraffic::Hull * lpExtraHull;

				// BrnTrafficEntityModule.cpp:11894
				const Section * lpExtraSection;

				// BrnTrafficEntityModule.cpp:11895
				const BrnTraffic::Param * lpNextParam;

				// BrnTrafficEntityModule.cpp:11897
				float32_t lfDistance;

				Hull::GetSection(/* parameters */);
				GetParam(/* parameters */);
				Hull::GetRungLengthsForSection(/* parameters */);
				Param::GetParamAlong(/* parameters */);
			}
		}
		CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:11922
			float32_t lfOtherParamDistFromEndOfLane;

			{
				// BrnTrafficEntityModule.cpp:11933
				float32_t lfDistance;

				// BrnTrafficEntityModule.cpp:11936
				const BrnTraffic::Param * lpNextParam;

				GetParam(/* parameters */);
			}
		}
	}
	Hull::GetRungLengthsForSection(/* parameters */);
	Param::GetParamAlong(/* parameters */);
	Param::GetParamAlong(/* parameters */);
	Section::CalcSignedDistanceAlongSection(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
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

void BrnTraffic::Neighbour::ConvertOurParameterToTheirs(float32_t  lfOurParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficSection.h:348
		float32_t lfTheirParam;

		// BrnTrafficSection.h:349
		int32_t liDelta;

		{
			// BrnTrafficSection.h:345
			CgsDev::StrStream lStrStream;

		}
		{
			// BrnTrafficSection.h:346
			CgsDev::StrStream lStrStream;

		}
		{
			// BrnTrafficSection.h:352
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnTraffic::Param::ClearNeedsNewPlan() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateParams_UpdatePlan(uint32_t  luParam, uint32_t  luMaxLaneChangeDiceRoll) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:10503
		uint32_t luPlan;

		// BrnTrafficEntityModule.cpp:10504
		Param * lpParam;

		// BrnTrafficEntityModule.cpp:10505
		uint32_t luHull;

		// BrnTrafficEntityModule.cpp:10506
		uint32_t luSection;

		// BrnTrafficEntityModule.cpp:10507
		float32_t lfParamAlong;

		// BrnTrafficEntityModule.cpp:10508
		uint32_t luSegmentAlong;

		// BrnTrafficEntityModule.cpp:10509
		float32_t lfAccumulatedDistFromChange;

		GetParam(/* parameters */);
	}
	Param::GetParamAlong(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:10513
		ParamPlan * lpPlan;

		// BrnTrafficEntityModule.cpp:10514
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficEntityModule.cpp:10515
		const Section * lpSection;

		GetParamPlan(/* parameters */);
	}
	GetHull(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	Hull::GetSection(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:10635
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Param::ClearNeedsNewPlan(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:10523
		float32_t lfDistFromEndOfSection;

		// BrnTrafficEntityModule.cpp:10524
		float32_t lfDistAlongCurrentSection;

		Hull::GetRungLengthsForSection(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:10549
			BrnTraffic::Side leSide;

			// BrnTrafficEntityModule.cpp:10550
			BrnTraffic::Directions leDirection;

			// BrnTrafficEntityModule.cpp:10552
			uint32_t luDiceRoll;

			// BrnTrafficEntityModule.cpp:10573
			float32_t lfParamToChangeLane;

			// BrnTrafficEntityModule.cpp:10574
			uint32_t luSegmentToChangeLane;

			CgsNumeric::Random::RandomUInt(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	Section::GetNumSegments(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:10577
		uint32_t luNeighbour;

		{
			// BrnTrafficEntityModule.cpp:10580
			const Neighbour * lpNeighbour;

			// BrnTrafficEntityModule.cpp:10584
			float32_t lfEndOfSharedSection;

			Hull::GetNeighbour(/* parameters */);
			Hull::GetRungLengthsForSection(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:10588
				float32_t lfParamAlongNewSection;

				Neighbour::ConvertOurParameterToTheirs(/* parameters */);
			}
		}
	}
	Hull::GetRungLengthsForSection(/* parameters */);
	Section::CalcDistanceFromEndOfSection(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:10536
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	Param::ClearNeedsNewPlan(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:10581
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	{
		// BrnTrafficEntityModule.cpp:10596
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::Hull::GetStopLine(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::StopLine::GetParameterAlongSection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::StopLine::ConvertToFloat(uint16_t  luFixed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::StopLine::GetSegmentAlongSection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::HullRuntime::IsStoplineRed(uint32_t  luStopline) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficHullRuntime.h:162
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::DoesParamNeedToStopForStopline(uint32_t  luParam, uint32_t  luSection, const Section *  lpSection, const BrnTraffic::Hull *  lpHull, float32_t *  lpfOutStopDist) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:11561
		const BrnTraffic::Param * lpParam;

		// BrnTrafficEntityModule.cpp:11562
		uint32_t luCachedStopline;

		// BrnTrafficEntityModule.cpp:11563
		uint32_t luStopline;

		// BrnTrafficEntityModule.cpp:11564
		float32_t lfDistFromEndOfSection;

		// BrnTrafficEntityModule.cpp:11565
		float32_t lfStoplineSpeed;

		// BrnTrafficEntityModule.cpp:11566
		float32_t lfParamAlongSection;

		// BrnTrafficEntityModule.cpp:11567
		float32_t lfStoplineParam;

		// BrnTrafficEntityModule.cpp:11568
		uint32_t luStoplineSegment;

		// BrnTrafficEntityModule.cpp:11569
		float32_t lfStopLineAlongSection;

		// BrnTrafficEntityModule.cpp:11570
		float32_t lfCarFromStopLine;

		// BrnTrafficEntityModule.cpp:11626
		const float32_t * lpafRungLengths;

		Hull::GetSection(/* parameters */);
		GetParam(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:11579
			const Vehicle * lpVehicle;

			GetVehicle(/* parameters */);
			Vehicle::IsAlive(/* parameters */);
		}
		Hull::GetSection(/* parameters */);
		Hull::GetRungLengthsForSection(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:11632
			const HullRuntime * lpHullRuntime;

			GetHullRuntime(/* parameters */);
			HullRuntime::IsStoplineRed(/* parameters */);
		}
		Vehicle::IsExtremeSwerving(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:11608
		const StopLine * lpStopline;

		Hull::GetStopLine(/* parameters */);
		StopLine::GetParameterAlongSection(/* parameters */);
		StopLine::ConvertToFloat(/* parameters */);
	}
	Hull::GetSection(/* parameters */);
	Hull::GetRungLengthsForSection(/* parameters */);
	Param::GetParamAlong(/* parameters */);
	Vehicle::IsRecoveringFromSlam(/* parameters */);
	Section::CalcDistanceFromEndOfSection(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:11647
		const StopLine * lpStopline;

		// BrnTrafficEntityModule.cpp:11648
		float32_t lfDistFromStartOfSection;

		// BrnTrafficEntityModule.cpp:11650
		uint32_t luPlan;

		{
			// BrnTrafficEntityModule.cpp:11654
			const ParamPlan * lpPlan;

			GetParamPlan(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:11703
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		Param::GetParamAlong(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	{
		// BrnTrafficEntityModule.cpp:11706
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	{
		// BrnTrafficEntityModule.cpp:11638
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:11659
		const BrnTraffic::Hull * lpNextHull;

		// BrnTrafficEntityModule.cpp:11660
		uint32_t luNextSection;

		// BrnTrafficEntityModule.cpp:11661
		const Section * lpNextSection;

		Hull::GetSection(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:11667
			const HullRuntime * lpNextHullRuntime;

			GetHullRuntimeSafe(/* parameters */);
			HullRuntime::IsStoplineRed(/* parameters */);
			Hull::GetStopLine(/* parameters */);
			StopLine::GetParameterAlongSection(/* parameters */);
			StopLine::ConvertToFloat(/* parameters */);
			Hull::GetRungLengthsForSection(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:11679
				CgsDev::StrStream lStrStream;

				CgsDev::StrStream::StrStream(/* parameters */);
			}
		}
	}
	{
		// BrnTrafficEntityModule.cpp:11644
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsContainers::Array<BrnTraffic::PhysicalVehicleInfo,33u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnTraffic::PhysicalVehicleInfo,33u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*=(const VecFloat &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1122
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnTraffic::TrafficEntityModule::UpdateParam_CheckIfNeedToSlow(uint32_t  luParam, const BrnTraffic::Hull *  lpHull, uint32_t  luSection, const Section *  lpSection, const Array<BrnTraffic::PhysicalVehicleInfo,33u> *  lpPhysicalVehicleArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:10979
		Vector3 lParamPos;

		// BrnTrafficEntityModule.cpp:10980
		float32_t lfStoplineStopDist;

		// BrnTrafficEntityModule.cpp:10981
		Param * lpParam;

		// BrnTrafficEntityModule.cpp:10982
		ParamNeedToSlowData * lpNeedToSlowData;

		// BrnTrafficEntityModule.cpp:10997
		float32_t lfNextParamDist;

		// BrnTrafficEntityModule.cpp:10998
		float32_t lfParamLookaheadDist;

		// BrnTrafficEntityModule.cpp:10999
		uint32_t luNextParam;

		// BrnTrafficEntityModule.cpp:11028
		Vector4 lf_RCDistance_RCHeight_RCClosingSpeed_RCLanePos;

		// BrnTrafficEntityModule.cpp:11029
		Vector4 lf_TLDistance_NPDistance_NPClosingSpeed_RCSpeedInOurLane;

		// BrnTrafficEntityModule.cpp:11030
		Vector4 lf_TimeQueueing_Obstructedness_DriveAroundStickiness_W;

		// BrnTrafficEntityModule.cpp:11061
		VecFloat KF_PHYSICAL_INTEREST_CONE_ANGLE;

		// BrnTrafficEntityModule.cpp:11062
		VecFloat KF_PHYSICAL_INTEREST_CONE_LENGTH;

		// BrnTrafficEntityModule.cpp:11063
		VecFloat KF_PHYSICAL_INTEREST_CONE_RECIP_Y;

	}
	GetParam(/* parameters */);
	GetDeterministicParamPos(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:11034
		float32_t lfTLDistanceFPU;

		// BrnTrafficEntityModule.cpp:11035
		float32_t lfNPDistanceFPU;

		// BrnTrafficEntityModule.cpp:11036
		float32_t lfNPClosingSpeedFPU;

	}
	{
		// BrnTrafficEntityModule.cpp:11050
		const BrnTraffic::Param * lpNextParam;

		GetParam(/* parameters */);
		rw::math::fpu::Max<float>(/* parameters */);
	}
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:11065
		VecFloat lfRCDistance;

		// BrnTrafficEntityModule.cpp:11066
		VecFloat lfRCHeight;

		// BrnTrafficEntityModule.cpp:11067
		VecFloat lfRCClosingSpeed;

		// BrnTrafficEntityModule.cpp:11068
		VecFloat lfRCLanePos;

		// BrnTrafficEntityModule.cpp:11069
		VecFloat lfRCSpeedInOurLane;

	}
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::SetW(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:11170
		int32_t liNextParamBehaviour;

		rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:11076
		const Vehicle * lpVehicle;

		GetVehicle(/* parameters */);
		Vehicle::IsAlive(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:11079
			const ParamTransform * lpParamTransform;

			// BrnTrafficEntityModule.cpp:11082
			uint32_t luBestVehicle;

			// BrnTrafficEntityModule.cpp:11083
			VecFloat lfBestScore;

			// BrnTrafficEntityModule.cpp:11084
			uint32_t luPhysicalVehicle;

			GetParamTransform(/* parameters */);
			CgsContainers::Array<BrnTraffic::PhysicalVehicleInfo,33u>::GetLength(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:11087
				Vector3 lTargetPos;

				// BrnTrafficEntityModule.cpp:11100
				Vector3 lDiff;

				// BrnTrafficEntityModule.cpp:11101
				VecFloat lfImportance;

				// BrnTrafficEntityModule.cpp:11102
				VecFloat lfScore;

			}
			CgsContainers::Array<BrnTraffic::PhysicalVehicleInfo,33u>::GetItem(/* parameters */);
			ParamTransform::GetDeterministicPos(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			ParamTransform::GetDirection(/* parameters */);
			IsPointWithinSquishedCone(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:11113
				const const PhysicalVehicleInfo & lInfo;

				// BrnTrafficEntityModule.cpp:11115
				Vector3 lDiff;

				// BrnTrafficEntityModule.cpp:11122
				VecFloat lfAlignment;

				// BrnTrafficEntityModule.cpp:11125
				Vector3 lParamLinearVel;

				// BrnTrafficEntityModule.cpp:11126
				Vector3 lClosingVel;

				// BrnTrafficEntityModule.cpp:11127
				Vector3 lRCDirection;

				CgsContainers::Array<BrnTraffic::PhysicalVehicleInfo,33u>::GetItem(/* parameters */);
				ParamTransform::GetDeterministicPos(/* parameters */);
				rw::math::vpu::IsValid(/* parameters */);
				ParamTransform::GetDirection(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::IsValid(/* parameters */);
				rw::math::vpu::Dot(/* parameters */);
				ParamTransform::GetRight(/* parameters */);
				rw::math::vpu::Dot(/* parameters */);
				ParamTransform::CalcUp(/* parameters */);
				rw::math::vpu::Dot(/* parameters */);
				{
				}
				ParamTransform::GetRight(/* parameters */);
				rw::math::vpu::GetVecFloat_Half(/* parameters */);
				rw::math::vpu::GetVecFloat_One(/* parameters */);
				rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
				rw::math::vpu::operator*=(/* parameters */);
				rw::math::vpu::Dot(/* parameters */);
				rw::math::vpu::Lerp(/* parameters */);
				rw::math::vpu::Mult(/* parameters */);
				rw::math::vpu::Add(/* parameters */);
				ParamTransform::GetDirection(/* parameters */);
				ParamTransform::GetSpeed(/* parameters */);
				rw::math::vpu::Normalize(/* parameters */);
				VecFloat<VectorAxisW>(/* parameters */);
				{
					{
					}
				}
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::Dot(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				ParamTransform::GetDirection(/* parameters */);
				rw::math::vpu::Dot(/* parameters */);
			}
		}
	}
	{
		// BrnTrafficEntityModule.cpp:11176
		const BrnTraffic::Param * lpNextParam;

		GetParam(/* parameters */);
	}
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	ParamTransform::GetDeterministicPos(/* parameters */);
	CgsContainers::Array<BrnTraffic::PhysicalVehicleInfo,33u>::GetItem(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	Vehicle::IsExtremeSwerving(/* parameters */);
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
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void CgsContainers::Array<BrnTraffic::PhysicalVehicleInfo,33u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PhysicalVehicleInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PhysicalVehicleInfo,33u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarRival(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarPlayer(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PhysicalVehicleInfo,33u>::Append(const const PhysicalVehicleInfo &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::Param::WasBornThisFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateParams_DoTimeSlicedLogic(uint32_t  luBeginParam, uint32_t  luEndParam, const InputBuffer_PreScene::ActiveRaceCarOutputInterface *  lpActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:9770
		uint32_t luParam;

		// BrnTrafficEntityModule.cpp:9771
		ParamNeedToSlowData * lpNeedToSlowData;

		// BrnTrafficEntityModule.cpp:9778
		Array<BrnTraffic::PhysicalVehicleInfo,33u> lPhysicalVehicleInfo;

	}
	CgsContainers::Array<BrnTraffic::PhysicalVehicleInfo,33u>::Array(/* parameters */);
	CgsContainers::Array<BrnTraffic::PhysicalVehicleInfo,33u>::Construct(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:9785
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnTrafficEntityModule.cpp:9823
		FastBitArray<601> lVehiclesAlive_And_Physical;

		// BrnTrafficEntityModule.cpp:9825
		Iterator lItVehicle;

		{
			// BrnTrafficEntityModule.cpp:9801
			const RaceCarState * lpRaceCarState;

			// BrnTrafficEntityModule.cpp:9802
			PhysicalVehicleInfo lInfo;

			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarRival(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
			rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarPlayer(/* parameters */);
			rw::math::vpu::GetVecFloat_One(/* parameters */);
			rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
			CgsContainers::Array<BrnTraffic::PhysicalVehicleInfo,33u>::Append(/* parameters */);
			rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
		}
		operator++(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
		CgsContainers::FastBitArray<601>::SetAnd(/* parameters */);
		CgsContainers::FastBitArray<601>::Begin(/* parameters */);
		CgsContainers::FastBitArray<601>::Iterator::Iterator(/* parameters */);
		CgsContainers::FastBitArray<601>::Iterator::operator!=(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:9851
		Param * lpParam;

		// BrnTrafficEntityModule.cpp:9868
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficEntityModule.cpp:9869
		const Section * lpSection;

		GetParam(/* parameters */);
		ParamNeedToSlowData::Clear(/* parameters */);
		GetHull(/* parameters */);
		CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
		Hull::GetSection(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:9830
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:9832
		const Vehicle * lpVehicle;

		// BrnTrafficEntityModule.cpp:9835
		Matrix44Affine lVehicleTransform;

		// BrnTrafficEntityModule.cpp:9837
		PhysicalVehicleInfo lInfo;

		CgsContainers::FastBitArray<601>::Iterator::GetIndex(/* parameters */);
		GetVehicle(/* parameters */);
		GetVehicleTransform(/* parameters */);
		rw::math::vpu::GetVecFloat_One(/* parameters */);
		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		Vehicle::GetLinearVelocity(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		CgsContainers::Array<BrnTraffic::PhysicalVehicleInfo,33u>::Append(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

void BrnTraffic::TrafficEntityModule::UpdateParamsNonDecision(const InputBuffer_PreScene::ActiveRaceCarOutputInterface *  lpActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:9742
		uint32_t luStartParam;

		// BrnTrafficEntityModule.cpp:9743
		uint32_t luEndParam;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::TrafficEntityModule::FindNextParam(uint32_t  luHull, uint32_t  luSection, float32_t  lfParamAlong) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:9117
		uint32_t luStartingParam;

		FindFirstParamOnSection(/* parameters */);
	}
	HullRuntime::GetFirstParamInSection(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:9124
		uint32_t luNextParamId;

	}
	{
		// BrnTrafficEntityModule.cpp:9127
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:9121
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::TrafficEntityModule::GetParamBehind(uint32_t  luParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:9146
		const ParamListNode * lpParamNode;

	}
}

void BrnTraffic::TrafficEntityModule::IsParamTooClose(uint32_t  luHullIndex, uint32_t  luSectionIndex, float32_t  lfParamAlongNewSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:12928
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficEntityModule.cpp:12929
		const Section * lpSection;

		// BrnTrafficEntityModule.cpp:12931
		uint32_t luNextParamOnNewLane;

		// BrnTrafficEntityModule.cpp:12933
		uint32_t luSegmentAlongNewSection;

		// BrnTrafficEntityModule.cpp:12934
		float32_t lfDistAlongNewSection;

		GetHull(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	Hull::GetSection(/* parameters */);
	Hull::GetRungLengthsForSection(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:12940
		const BrnTraffic::Param * lpNextParamOnNewLane;

		// BrnTrafficEntityModule.cpp:12942
		float32_t lfDistToNextParam;

		GetParam(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:12964
			uint32_t luPrevParamOnNewLane;

			GetParamBehind(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:12967
				const BrnTraffic::Param * lpPrevParamOnNewLane;

				// BrnTrafficEntityModule.cpp:12969
				float32_t lfDistToPrevParam;

				GetParam(/* parameters */);
			}
		}
	}
	{
		// BrnTrafficEntityModule.cpp:12947
		float32_t lfNextParamDistAlong;

		Hull::GetRungLengthsForSection(/* parameters */);
		Param::GetParamAlong(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:12974
		float32_t lfPrevParamDistAlong;

		Hull::GetRungLengthsForSection(/* parameters */);
		Param::GetParamAlong(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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

void BrnTraffic::TrafficEntityModule::SpawnShowtimeTraffic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:8327
		float32_t lfVehiclesToSpawn;

		// BrnTrafficEntityModule.cpp:8328
		float32_t lfNumSegments;

		// BrnTrafficEntityModule.cpp:8329
		float32_t lfTimeToDrive;

		// BrnTrafficEntityModule.cpp:8330
		float32_t lfVehiclesPerMinute;

		// BrnTrafficEntityModule.cpp:8331
		float32_t lfSecondsPerVehicle;

		// BrnTrafficEntityModule.cpp:8332
		float32_t lfVehiclesLeftToSpawn;

		// BrnTrafficEntityModule.cpp:8333
		float32_t lfParamPerVehicle;

		// BrnTrafficEntityModule.cpp:8334
		float32_t lfParamAlong;

		// BrnTrafficEntityModule.cpp:8335
		float32_t lfMaxParamJitter;

		// BrnTrafficEntityModule.cpp:8336
		float32_t lfJitteredParam;

		// BrnTrafficEntityModule.cpp:8337
		const SectionFlow * lpFlowData;

		// BrnTrafficEntityModule.cpp:8338
		const Section * lpSection;

		// BrnTrafficEntityModule.cpp:8339
		uint32_t luActiveHull;

		// BrnTrafficEntityModule.cpp:8340
		uint32_t luVehiclesToSpawn;

		IsDecisionFrame(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:8361
		uint32_t luHullIndex;

		// BrnTrafficEntityModule.cpp:8362
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficEntityModule.cpp:8366
		uint32_t luSectionIndex;

	}
	CgsContainers::Set<uint16_t,72u>::GetLength(/* parameters */);
	CgsContainers::Set<uint16_t,72u>::operator[](/* parameters */);
	GetHull(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:8393
		uint32_t luExistingVehicles;

		Hull::GetFlowData(/* parameters */);
		Hull::GetSection(/* parameters */);
	}
	Section::GetNumSegments(/* parameters */);
	rw::math::fpu::Floor<float>(/* parameters */);
	__fsel(/* parameters */);
	rw::math::fpu::Floor<float>(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:8409
		float32_t lfParamJitter;

		// BrnTrafficEntityModule.cpp:8413
		bool lbTooClose;

	}
	CgsNumeric::Random::RandomFloat(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:8418
		Vector3 lStartPos;

		// BrnTrafficEntityModule.cpp:8419
		Vector3 lSpawnDirUnitVector;

		// BrnTrafficEntityModule.cpp:8420
		Vector3 lSpawnDir;

		// BrnTrafficEntityModule.cpp:8421
		VecFloat lfCameraDistance;

		// BrnTrafficEntityModule.cpp:8430
		bool lbShouldSpawn;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		Section::CalcPositionAtParameter(/* parameters */);
		Section::GetNumSegments(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			{
			}
		}
		rw::math::vpu::Floor(/* parameters */);
		BrnDirector::Camera::Camera::GetTransform(/* parameters */);
		rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		LaneRung::GetCentrePos(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		LaneRung::GetCentrePos(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::NormalizeReturnMagnitude(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:8440
			VecFloat lfCosAngle;

			rw::math::vpu::operator>=(/* parameters */);
		}
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator<=(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:8451
			uint16_t luVehicleType;

		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::operator<(/* parameters */);
}

void BrnTraffic::TrafficEntityModule::InsertParamIntoList(uint32_t  luParam, uint32_t  luHull, uint32_t  luSection, float32_t  lfParamAlong) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:12733
		uint32_t luNextParamId;

		// BrnTrafficEntityModule.cpp:12736
		ParamListNode * lpParamNode;

	}
	{
		// BrnTrafficEntityModule.cpp:12744
		ParamListNode * lpNextParamNode;

		GetParam(/* parameters */);
		GetParam(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:12745
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			GetParam(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			GetParam(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// BrnTrafficEntityModule.cpp:12778
			ParamListNode * lpPrevParamNode;

			// BrnTrafficEntityModule.cpp:12779
			uint32_t luPrevParamId;

			GetParam(/* parameters */);
			GetParam(/* parameters */);
		}
		{
			// BrnTrafficEntityModule.cpp:12758
			ParamListNode * lpPrevParamNode;

			GetParam(/* parameters */);
			GetParam(/* parameters */);
		}
	}
	{
		// BrnTrafficEntityModule.cpp:12809
		HullRuntime * lpHullRuntime;

		GetHullRuntime(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:12742
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:12771
		HullRuntime * lpHullRuntime;

		GetHullRuntime(/* parameters */);
	}
}

void BrnTraffic::Param::HasChangedSection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::HullRuntime::IncrementSectionSpanVehicleCount(uint32_t  luSpanIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Param::ClearHistoryState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateParams_UpdateLinkedList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:12340
		uint32_t luParam;

		// BrnTrafficEntityModule.cpp:12341
		uint16_t[400] lauParamHulls;

		// BrnTrafficEntityModule.cpp:12342
		uint8_t[400] lauParamSections;

		// BrnTrafficEntityModule.cpp:12343
		uint8_t[400] lauValidNodes;

		// BrnTrafficEntityModule.cpp:12344
		uint16_t[400] lauAliveParams;

		// BrnTrafficEntityModule.cpp:12345
		uint16_t[400] lauBornParams;

		// BrnTrafficEntityModule.cpp:12346
		uint16_t[400] lauDiedParams;

		// BrnTrafficEntityModule.cpp:12347
		uint16_t[400] lauChangedSectionParams;

		// BrnTrafficEntityModule.cpp:12348
		uint32_t luNumAliveParams;

		// BrnTrafficEntityModule.cpp:12349
		uint32_t luNumBornParams;

		// BrnTrafficEntityModule.cpp:12350
		uint32_t luNumDiedParams;

		// BrnTrafficEntityModule.cpp:12351
		uint32_t luNumChangedSectionParams;

		{
			// BrnTrafficEntityModule.cpp:12361
			Param * lpParam;

			// BrnTrafficEntityModule.cpp:12362
			ParamListNode * lpParamNode;

		}
		Param::ClearHistoryState(/* parameters */);
		GetParam(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:12411
			const BrnTraffic::Hull * lpHull;

			// BrnTrafficEntityModule.cpp:12414
			const Section * lpSection;

			// BrnTrafficEntityModule.cpp:12417
			HullRuntime * lpHullRuntime;

			GetHull(/* parameters */);
			Hull::GetSection(/* parameters */);
			GetHullRuntime(/* parameters */);
			HullRuntime::IncrementSectionSpanVehicleCount(/* parameters */);
		}
		{
			// BrnTrafficEntityModule.cpp:12430
			uint32_t luParamIndex;

		}
		{
			// BrnTrafficEntityModule.cpp:12470
			uint32_t luParamIndex;

		}
		{
			// BrnTrafficEntityModule.cpp:12512
			uint32_t luParamIndex;

			// BrnTrafficEntityModule.cpp:12514
			ParamListNode * lpParamNode;

			// BrnTrafficEntityModule.cpp:12521
			bool lbSwapped;

			// BrnTrafficEntityModule.cpp:12522
			uint32_t luNextParam;

			// BrnTrafficEntityModule.cpp:12533
			uint32_t luPrevParam;

			{
				// BrnTrafficEntityModule.cpp:12525
				ParamListNode * lpNextParamNode;

			}
			{
				// BrnTrafficEntityModule.cpp:12536
				ParamListNode * lpPrevParamNode;

			}
		}
		{
			// BrnTrafficEntityModule.cpp:12554
			uint32_t luParamIndex;

			// BrnTrafficEntityModule.cpp:12556
			ParamListNode * lpParamNode;

		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		{
			// BrnTrafficEntityModule.cpp:12574
			uint32_t luParamIndex;

			// BrnTrafficEntityModule.cpp:12576
			ParamListNode * lpParamNode;

		}
	}
}

void BrnTraffic::TrafficEntityModule::UpdateParams_HandleLaneChanges(uint32_t  luParam, const BrnTraffic::Hull *  lpHull, const Section **  lppSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:12199
		Param * lpParam;

		// BrnTrafficEntityModule.cpp:12200
		ParamPlan * lpPlan;

		// BrnTrafficEntityModule.cpp:12246
		uint32_t luNewSection;

		// BrnTrafficEntityModule.cpp:12248
		const Section * lpNewSection;

		// BrnTrafficEntityModule.cpp:12249
		const Neighbour * lpNeighbour;

		// BrnTrafficEntityModule.cpp:12250
		float32_t lfParamAlongNewSection;

		// BrnTrafficEntityModule.cpp:12252
		uint32_t luSegmentAlongNewSection;

		// BrnTrafficEntityModule.cpp:12253
		float32_t lfDistAlongNewSection;

		// BrnTrafficEntityModule.cpp:12256
		uint32_t luNextParamOnNewLane;

	}
	GetParam(/* parameters */);
	GetParamPlan(/* parameters */);
	Hull::GetSection(/* parameters */);
	Hull::GetNeighbour(/* parameters */);
	Param::GetParamAlong(/* parameters */);
	Neighbour::ConvertOurParameterToTheirs(/* parameters */);
	Hull::GetRungLengthsForSection(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:12259
		const BrnTraffic::Param * lpNextParamOnNewLane;

		// BrnTrafficEntityModule.cpp:12261
		float32_t lfDistToNextParam;

		// BrnTrafficEntityModule.cpp:12283
		uint32_t luPrevParamOnNewLane;

		GetParam(/* parameters */);
		GetParamBehind(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:12286
			const BrnTraffic::Param * lpPrevParamOnNewLane;

			// BrnTrafficEntityModule.cpp:12288
			float32_t lfDistToPrevParam;

			GetParam(/* parameters */);
		}
	}
	Param::SetParamAlong(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	Param::SetChangedSection(/* parameters */);
	Param::PushHistory(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:12233
		Vector3 lDiff;

		// BrnTrafficEntityModule.cpp:12234
		Vector3 lDir;

		// BrnTrafficEntityModule.cpp:12235
		VecFloat lfDist;

		// BrnTrafficEntityModule.cpp:12236
		VecFloat lfDot;

		GetDeterministicParamPos(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::NormalizeReturnMagnitude(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:12266
		float32_t lfNextParamDistAlong;

		Hull::GetRungLengthsForSection(/* parameters */);
		Param::GetParamAlong(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:12293
		float32_t lfPrevParamDistAlong;

		Hull::GetRungLengthsForSection(/* parameters */);
		Param::GetParamAlong(/* parameters */);
	}
}

void CgsContainers::Array<rw::math::vpu::VecFloat,8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<rw::math::vpu::VecFloat,8u>::Append(const const VecFloat &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::CacheRaceCarState(const InputBuffer_PreScene::ActiveRaceCarOutputInterface *  lpActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:13205
		EActiveRaceCarIndex leActiveRaceCarIndex;

	}
	CgsContainers::Array<rw::math::vpu::Vector3,8u>::Construct(/* parameters */);
	CgsContainers::Array<rw::math::vpu::Vector3,8u>::Construct(/* parameters */);
	CgsContainers::Array<rw::math::vpu::Vector3,8u>::Construct(/* parameters */);
	CgsContainers::Array<rw::math::vpu::VecFloat,8u>::Construct(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:13210
		const RaceCarState * lpRaceCarState;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarRival(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:13221
			Vector3 lXZVelocity;

			CgsContainers::Array<rw::math::vpu::Vector3,8u>::Append(/* parameters */);
			CgsContainers::Array<rw::math::vpu::Vector3,8u>::Append(/* parameters */);
			{
			}
			rw::math::vpu::Vector3::SetY(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::IsZero(/* parameters */);
			{
			}
			{
				// BrnTrafficEntityModule.cpp:13226
				Vector3 lVelocityDir;

				// BrnTrafficEntityModule.cpp:13227
				VecFloat lfSpeed;

				rw::math::vpu::NormalizeReturnMagnitude(/* parameters */);
				CgsContainers::Array<rw::math::vpu::Vector3,8u>::Append(/* parameters */);
				{
					{
					}
				}
				{
				}
				CgsContainers::Array<rw::math::vpu::VecFloat,8u>::Append(/* parameters */);
				{
				}
			}
		}
	}
	operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	rw::math::vpu::Matrix44Affine::At(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	CgsContainers::Array<rw::math::vpu::Vector3,8u>::Append(/* parameters */);
	CgsContainers::Array<rw::math::vpu::VecFloat,8u>::Append(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	CgsContainers::Array<rw::math::vpu::Vector3,8u>::Append(/* parameters */);
	{
		{
		}
	}
	{
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,1u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,1u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,1u>::Erase(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,1u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateTrailers_UpdatePurgatory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:13568
		uint32_t luIndex;

		CgsContainers::Array<BrnTraffic::PurgatoryInfo,1u>::GetLength(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:13572
		const PurgatoryInfo & lInfo;

		CgsContainers::Array<BrnTraffic::PurgatoryInfo,1u>::operator[](/* parameters */);
		GetVehicle(/* parameters */);
		CgsContainers::Stack<uint16_t,1>::Push(/* parameters */);
		CgsContainers::Array<BrnTraffic::PurgatoryInfo,1u>::Erase(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::Vehicle::CopyEffectsFromCab(const Vehicle *  lpCab) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateTrailers(const InputBuffer_PostPhysics *  lpInput, OutputBuffer_PostPhysics *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:13523
		uint32_t luTrailer;

		// BrnTrafficEntityModule.cpp:13524
		Vehicle * lpTrailer;

		GetTrailerVehicle(/* parameters */);
		Vehicle::GetCabIndex(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:13544
			const Vehicle * lpCab;

			Vehicle::GetCabIndex(/* parameters */);
			GetVehicle(/* parameters */);
			Vehicle::CopyEffectsFromCab(/* parameters */);
		}
	}
}

void CgsContainers::Array<CgsSceneManager::EntityId,650u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsSceneManager::EntityId,650u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsSceneManager::EntityId,650u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void CgsNumeric::Min(uint32_t  lu0, uint32_t  lu1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBranchlessOperations.h:81
		int64_t li64_0;

		// CgsBranchlessOperations.h:82
		int64_t li64_1;

		// CgsBranchlessOperations.h:83
		int64_t li64Diff;

		// CgsBranchlessOperations.h:84
		int64_t li64Sign;

		// CgsBranchlessOperations.h:85
		uint32_t luResult;

	}
}

void rw::core::stdc::Min(unsigned int  a, unsigned int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sort<BrnTraffic::VehicleRenderInfo*, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(VehicleRenderInfo *  _First, VehicleRenderInfo *  _Last, bool (*)(const VehicleRenderInfo &, const VehicleRenderInfo &)  _Pred) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::VehicleRenderInfo,64u>::Append(const const VehicleRenderInfo &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::PreDispatchUpdate(const InputBuffer_PreDispatch *  lpInput, OutputBuffer_PreDispatch *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:13738
		uint32_t luCount;

		// BrnTrafficEntityModule.cpp:13739
		VehicleRenderInfo[650] laRenderInfos;

		// BrnTrafficEntityModule.cpp:13740
		const const rw::math::vpu::Vector3 & lCameraPosition;

		// BrnTrafficEntityModule.cpp:13741
		uint32_t luRenderInfoCount;

		CgsContainers::Array<CgsSceneManager::EntityId,650u>::GetLength(/* parameters */);
		CgsContainers::FastBitArray<601>::UnSetAll(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:13748
			uint32_t luIndex;

			{
				// BrnTrafficEntityModule.cpp:13750
				uint32_t luVehicleIndex;

				CgsContainers::Array<CgsSceneManager::EntityId,650u>::operator[](/* parameters */);
				CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
				{
					// BrnTrafficEntityModule.cpp:13755
					Vector3 lPosition;

					// BrnTrafficEntityModule.cpp:13756
					float32_t lfDistanceSq;

					GetVehicleTransform(/* parameters */);
					rw::math::vpu::operator-(/* parameters */);
					rw::math::vpu::VecFloat::operator float(/* parameters */);
					rw::math::vpu::MagnitudeSquared(/* parameters */);
					{
						// BrnTrafficEntityModule.cpp:13765
						bool lbAboutToDie;

						CgsContainers::FastBitArray<601>::SetBit(/* parameters */);
						GetVehicleSpecies(/* parameters */);
						{
							// BrnTrafficEntityModule.cpp:13768
							const BrnTraffic::Param * lpParam;

							Param::IsAlive(/* parameters */);
						}
						{
							// BrnTrafficEntityModule.cpp:13776
							const StaticTrafficParam * lpParam;

							GetStaticTrafficParamFromFullVehicleIndex(/* parameters */);
							StaticTrafficParam::IsAlive(/* parameters */);
						}
						{
							// BrnTrafficEntityModule.cpp:13800
							const VehicleRenderInfo & lRenderInfo;

						}
					}
				}
			}
		}
		{
			// BrnTrafficEntityModule.cpp:13818
			uint32_t luVisibleCount;

			CgsNumeric::Min(/* parameters */);
			std::sort<BrnTraffic::VehicleRenderInfo*, bool (*)(const BrnTraffic::VehicleRenderInfo&, const BrnTraffic::VehicleRenderInfo&)>(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:13823
				uint32_t luIndex;

				CgsContainers::Array<BrnTraffic::VehicleRenderInfo,64u>::Append(/* parameters */);
				{
					CgsDev::StrStream::StrStream(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
				}
			}
		}
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
	GetVehicleSpecies(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:13786
		uint32_t luCab;

		GetVehicleSpecies(/* parameters */);
		GetVehicle(/* parameters */);
	}
	Vehicle::GetCabIndex(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:13789
		const BrnTraffic::Param * lpParam;

		GetParam(/* parameters */);
		Param::IsAlive(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGraphics::DispatchFrame::GetBin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchFrame::GetList(uint32_t  uID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcher.h:413
		CgsDev::StrStream lStrStream;

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
	}
	{
		// CgsModel.h:403
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsResource::ResourcePtr<BrnTraffic::GraphicsStub>::operator!=(const const BaseResourcePtr &  lOtherResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::IsEqual(const ResourceHandle::Resource *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnTraffic::GraphicsStub>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:562
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficCarStreamer::GetWheelGraphicsSpec(uint32_t  luAssetId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsTrafficAssetLoaded(/* parameters */);
	{
		// BrnTrafficCarStreamer.h:321
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnTraffic::GraphicsStub>::operator!=(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::GraphicsStub>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficCarStreamer.h:320
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficCarStreamer.h:322
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
}

void BrnTraffic::TrafficCarStreamer::GetGraphicsSpec(uint32_t  luAssetId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsTrafficAssetLoaded(/* parameters */);
	{
		// BrnTrafficCarStreamer.h:302
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnTraffic::GraphicsStub>::operator!=(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::GraphicsStub>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficCarStreamer.h:301
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficCarStreamer.h:303
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::GetSceneResultQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:349
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::vpu::TransformVector(const rw::math::vpu::Vector3  vec, const rw::math::vpu::Matrix44Affine &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:34
		VectorIntrinsicUnion::VectorIntrinsic tmp;

		// matrix44affine_operation_platform_inline.h:35
		VectorIntrinsicUnion::VectorIntrinsic xSplat;

		// matrix44affine_operation_platform_inline.h:35
		VectorIntrinsicUnion::VectorIntrinsic ySplat;

		// matrix44affine_operation_platform_inline.h:35
		VectorIntrinsicUnion::VectorIntrinsic zSplat;

		// matrix44affine_operation_platform_inline.h:35
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void BrnTraffic::BrnTrafficIO::TrafficDirectorEntity::TrafficDirectorEntity(const rw::math::vpu::Matrix44Affine &  lTransform, Vector3  lVelocity, Vector3  lHalfExtents, CgsID  lId, uint16_t  lu16EntityIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetTrafficDirectorOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:397
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::TrafficDirectorOutputInterface::AddTrafficEntity(const const TrafficDirectorEntity &  lEntity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>::IsFull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>::Append(const const TrafficDirectorEntity &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

extern TrafficDirectorEntity & operator=(const const TrafficDirectorEntity &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsHornOn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator><VectorAxisX>(const VecFloat  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:364
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:366
		bool ret;

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

void rw::math::vpu::operator><VectorAxisY>(const VecFloat  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:364
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:366
		bool ret;

	}
}

void BrnTraffic::BrnTrafficIO::TrafficSoundEntity::TrafficSoundEntity(const rw::math::vpu::Matrix44Affine &  lTransform, EntityId  lEntityId, float32_t  lfSpeed, uint8_t  luVehicleClass, uint16_t  lu16EntityIndex, bool  lbIsEngineOn, bool  lbIsHooting, bool  lbIsCrashed, bool  lbIsPhysical, BrnTraffic::BrnTrafficIO::TrafficSoundEntity::AlarmType  leAlarmType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetTrafficSoundOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:394
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::TrafficSoundOutputInterface::AddTrafficEntity(const const TrafficSoundEntity &  lEntity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern TrafficSoundEntity & operator=(const const TrafficSoundEntity &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,16u>::IsFull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,16u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,16u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,16u>::Append(const const NearMissData &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::GetVehicleOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:346
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleOutputInterface::GetRaceCarState(int32_t  liRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,8u>::IsFull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,8u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,8u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,8u>::Append(const const NearMissData &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::ProcessNearbyTrafficSceneQueryResults(const InputBuffer_PostPhysics *  lpInput, OutputBuffer_PostPhysics *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:14068
		const InputBuffer_PrePhysics::SceneResultQueue * lpSceneResultQueue;

		// BrnTrafficEntityModule.cpp:14076
		uint32_t luHornCount;

		// BrnTrafficEntityModule.cpp:14079
		const CgsModule::Event * lpEvent;

		// BrnTrafficEntityModule.cpp:14080
		const OutEventCoarseTestResult * lpCoarseTestResult;

		// BrnTrafficEntityModule.cpp:14081
		int32_t liSize;

	}
	BrnTrafficIO::InputBuffer_PostPhysics::GetSceneResultQueue(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::GetLength(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::GetFirstEvent(/* parameters */);
	{
	}
	{
		// BrnTrafficEntityModule.cpp:14094
		Vector3 lPlayerPosition;

		// BrnTrafficEntityModule.cpp:14095
		EActiveRaceCarIndex lPlayerActiveRaceCarIndex;

		// BrnTrafficEntityModule.cpp:14096
		float32_t lfPlayerSpeed;

		// BrnTrafficEntityModule.cpp:14097
		uint16_t lPlayerEntityId;

		BrnTrafficIO::InputBuffer_PostPhysics::GetActiveRaceCarOutputInterface(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition(/* parameters */);
		BrnTrafficIO::InputBuffer_PostPhysics::GetActiveRaceCarOutputInterface(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
		BrnTrafficIO::InputBuffer_PostPhysics::GetActiveRaceCarOutputInterface(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,16u>::Construct(/* parameters */);
		CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,8u>::Construct(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:14102
			int32_t liIndex;

		}
		{
			// BrnTrafficEntityModule.cpp:14104
			EntityId lEntityId;

			// BrnTrafficEntityModule.cpp:14105
			uint32_t luVehicle;

		}
	}
	{
		// BrnTrafficEntityModule.cpp:14258
		Vector3 lActiveRaceCarPosition;

		// BrnTrafficEntityModule.cpp:14267
		float32_t lfDistanceForNearMiss;

		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		BrnTrafficIO::InputBuffer_PostPhysics::GetVehicleOutputInterface(/* parameters */);
		BrnPhysics::Vehicle::VehicleOutputInterface::GetRaceCarState(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
			{
				{
				}
			}
		}
		{
			// BrnTrafficEntityModule.cpp:14272
			NearMissData lNearMissData;

			CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,8u>::IsFull(/* parameters */);
			CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,8u>::Append(/* parameters */);
		}
	}
	{
		// BrnTrafficEntityModule.cpp:14119
		const Vehicle * lpVehicle;

		{
			// BrnTrafficEntityModule.cpp:14113
			int32_t liTestIndex;

			{
				// BrnTrafficEntityModule.cpp:14115
				CgsDev::StrStream lStrStream;

				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
		}
		GetVehicle(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:14123
			Matrix44Affine lTransform;

			GetVehicleTransform(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:14129
				uint32_t luAssetId;

				// BrnTrafficEntityModule.cpp:14130
				CgsID lVehicleId;

				// BrnTrafficEntityModule.cpp:14132
				uint16_t luTypeIndex;

				// BrnTrafficEntityModule.cpp:14133
				const VehicleTypeRuntime * lpRuntime;

				// BrnTrafficEntityModule.cpp:14135
				Matrix44Affine lAdjustedLocalTransform;

				// BrnTrafficEntityModule.cpp:14140
				TrafficDirectorEntity lTrafficEntity;

			}
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			Vehicle::GetVehicleType(/* parameters */);
			Vehicle::GetVehicleType(/* parameters */);
			VehicleAsset::GetVehicleId(/* parameters */);
			GetVehicleTypeRuntime(/* parameters */);
			Vehicle::GetSpeed(/* parameters */);
			rw::math::vpu::TransformVector(/* parameters */);
			rw::math::vpu::operator+=(/* parameters */);
			rw::math::vpu::Vector4::GetX(/* parameters */);
			BrnTrafficIO::OutputBuffer_PostPhysics::GetTrafficDirectorOutputInterface(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			VecFloat<VectorAxisX>(/* parameters */);
			BrnTrafficIO::TrafficDirectorOutputInterface::AddTrafficEntity(/* parameters */);
			GetVehicleSpecies(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:14154
				uint8_t lu8VehicleClass;

				// BrnTrafficEntityModule.cpp:14155
				bool lbIsEngineOn;

				// BrnTrafficEntityModule.cpp:14156
				bool lbIsHornOn;

				// BrnTrafficEntityModule.cpp:14158
				BrnTraffic::BrnTrafficIO::TrafficSoundEntity::AlarmType leAlarmType;

				// BrnTrafficEntityModule.cpp:14215
				TrafficSoundEntity lTrafficEntity;

				Vehicle::GetVehicleType(/* parameters */);
				Vehicle::IsHornOn(/* parameters */);
				Vehicle::GetSpeed(/* parameters */);
				rw::math::vpu::VecFloat::operator float(/* parameters */);
				Vehicle::IsCrashing(/* parameters */);
				BrnTrafficIO::OutputBuffer_PostPhysics::GetTrafficSoundOutputInterface(/* parameters */);
				BrnTrafficIO::TrafficSoundOutputInterface::AddTrafficEntity(/* parameters */);
			}
		}
		{
			// BrnTrafficEntityModule.cpp:14233
			float32_t lfDistanceForNearMiss;

			GetVehicleTransform(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::Magnitude(/* parameters */);
			{
				{
					{
					}
				}
			}
			{
				// BrnTrafficEntityModule.cpp:14238
				NearMissData lNearMissData;

				CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,16u>::IsFull(/* parameters */);
				CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,16u>::Append(/* parameters */);
			}
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Vehicle::IsAlarmOn(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:14170
		uint32_t luAlarmVal;

		Vehicle::IsHornOn(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:14196
		Vector3 lVehiclePos;

		// BrnTrafficEntityModule.cpp:14197
		Vector3 lDiff;

		// BrnTrafficEntityModule.cpp:14198
		VecFloat lfDistFromPlayerSq;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator><VectorAxisX>(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::Abs<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator><VectorAxisY>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::CrashIO::TrafficInputInterface::AddCrashingTraffic(VolumeInstanceId  lVolumeInstanceId, EntityId  lCrasherEntityId, BrnPhysics::Vehicle::eCrashTrafficType  leCrashTrafficType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleTrafficIOInterfaces.h:274
		AddCrashingTrafficEvent lEvent;

	}
}

extern void AddCrashingTrafficEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GenerateVehicleCrashedEvents(OutputBuffer_PostPhysics *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:14303
		uint32_t luCrashedVehicle;

		CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::GetLength(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:14305
			TrafficCrashInfo * lpCrashInfo;

			// BrnTrafficEntityModule.cpp:14316
			EntityId lVictimId;

			// BrnTrafficEntityModule.cpp:14317
			EntityId lCauserId;

			// BrnTrafficEntityModule.cpp:14318
			BrnPhysics::Vehicle::eCrashTrafficType leCrashTrafficType;

			// BrnTrafficEntityModule.cpp:14324
			uint32_t luVehicle;

			// BrnTrafficEntityModule.cpp:14333
			VolumeInstanceId lVictimVolume;

			CgsContainers::FastBitArray<601>::SetBit(/* parameters */);
		}
		CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::operator[](/* parameters */);
		CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
		CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
		BrnTrafficIO::OutputBuffer_PostPhysics::GetCrashTrafficInputInterface(/* parameters */);
		BrnWorld::CrashIO::TrafficInputInterface::AddCrashingTraffic(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetVehicle(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:14320
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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

void BrnTraffic::TrafficEntityModule::GetVehicleTypeRuntime(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::operator->(/* parameters */);
	{
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::TrafficEntityModule::UpdateVehicles_CreateNewVehicles(const InputBuffer_PostPhysics *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:13329
		Param * lpParam;

		// BrnTrafficEntityModule.cpp:13330
		const ParamTransform * lpParamTransform;

		// BrnTrafficEntityModule.cpp:13331
		Vehicle * lpVehicle;

		// BrnTrafficEntityModule.cpp:13332
		VehicleAxles * lpVehicleAxles;

		// BrnTrafficEntityModule.cpp:13333
		Vector3 lParamPos;

		// BrnTrafficEntityModule.cpp:13334
		Vector3 lParamDirection;

		// BrnTrafficEntityModule.cpp:13335
		Matrix44Affine lVehicleTransform;

		// BrnTrafficEntityModule.cpp:13336
		float32_t lfDistAcrossLane;

		// BrnTrafficEntityModule.cpp:13337
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficEntityModule.cpp:13338
		const Section * lpSection;

		// BrnTrafficEntityModule.cpp:13339
		const VehicleTypeData * lpVehicleType;

		// BrnTrafficEntityModule.cpp:13340
		const VehicleTypeUpdateData * lpVehicleTypeUpdate;

		// BrnTrafficEntityModule.cpp:13341
		const VehicleTypeRuntime * lpVehicleTypeRuntime;

		// BrnTrafficEntityModule.cpp:13342
		const BrnTraffic::VehicleTraits * lpVehicleTraits;

		// BrnTrafficEntityModule.cpp:13343
		uint32_t luTrailer;

		// BrnTrafficEntityModule.cpp:13344
		Vehicle * lpTrailer;

		// BrnTrafficEntityModule.cpp:13345
		VehicleAxles * lpTrailerAxles;

		// BrnTrafficEntityModule.cpp:13346
		Matrix44Affine lTrailerTransform;

		// BrnTrafficEntityModule.cpp:13347
		uint32_t luTrailerTypeToSpawn;

		// BrnTrafficEntityModule.cpp:13348
		const VehicleTypeUpdateData * lpTrailerTypeUpdate;

		// BrnTrafficEntityModule.cpp:13349
		const VehicleTypeRuntime * lpTrailerTypeRuntime;

		// BrnTrafficEntityModule.cpp:13353
		FastBitArray<601> lParams_Alive_And_NotZombie;

		// BrnTrafficEntityModule.cpp:13354
		FastBitArray<601> lParams_NotZombie;

		// BrnTrafficEntityModule.cpp:13355
		FastBitArray<601> lVehicles_NotAlive;

		// BrnTrafficEntityModule.cpp:13356
		FastBitArray<601> lVehicles_NotAlive_And_ShouldBe;

		// BrnTrafficEntityModule.cpp:13357
		Iterator lItVehicle;

		// BrnTrafficEntityModule.cpp:13366
		Array<rw::math::vpu::Vector3,8u> lRaceCarPositions;

		IsDecisionFrame(/* parameters */);
		CgsContainers::FastBitArray<601>::Iterator::Iterator(/* parameters */);
		CgsContainers::Array<rw::math::vpu::Vector3,8u>::Array(/* parameters */);
		CgsContainers::Array<rw::math::vpu::Vector3,8u>::Construct(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:13371
			const InputBuffer_PreScene::ActiveRaceCarOutputInterface * lpActiveRaceCarOutputInterface;

			// BrnTrafficEntityModule.cpp:13372
			EActiveRaceCarIndex leActiveRaceCarIndex;

		}
		CgsContainers::FastBitArray<601>::SetInverse(/* parameters */);
		CgsContainers::FastBitArray<601>::SetAnd(/* parameters */);
		CgsContainers::FastBitArray<601>::SetInverse(/* parameters */);
		CgsContainers::FastBitArray<601>::SetAnd(/* parameters */);
		CgsContainers::FastBitArray<601>::Begin(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:13396
			uint32_t luVehicle;

			GetParamTransform(/* parameters */);
			ParamTransform::GetLerpedPos(/* parameters */);
			ParamTransform::GetDirection(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:13410
				bool lbSkipVehicle;

				// BrnTrafficEntityModule.cpp:13411
				uint32_t luRaceCar;

				{
					// BrnTrafficEntityModule.cpp:13414
					Vector3 lfDiff;

					rw::math::vpu::operator-(/* parameters */);
					rw::math::vpu::MagnitudeSquared(/* parameters */);
					rw::math::vpu::operator< <VectorAxisX>(/* parameters */);
				}
				CgsContainers::Array<rw::math::vpu::Vector3,8u>::GetLength(/* parameters */);
				CgsContainers::Array<rw::math::vpu::Vector3,8u>::operator[](/* parameters */);
				{
					CgsDev::StrStream::StrStream(/* parameters */);
				}
			}
			Hull::GetSection(/* parameters */);
			TrafficData::GetVehicleTraitsForVehicleType(/* parameters */);
			GetVehicleAxles(/* parameters */);
			CgsNumeric::Random::RandomFloat(/* parameters */);
			rw::math::fpu::Lerp<float>(/* parameters */);
			CgsNumeric::Random::RandomFloat(/* parameters */);
			CgsNumeric::Random::RandomUInt(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			SetVehicleTransform(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
			GetVehicleAxles(/* parameters */);
			CgsNumeric::Random::RandomFloat(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			SetVehicleTransform(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	Param::SetZombie(/* parameters */);
	Param::SetDivorced(/* parameters */);
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
	operator++(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:13378
		const RaceCarState * lpRaceCarState;

		// BrnTrafficEntityModule.cpp:13380
		Vector3 lRaceCarPos;

		CgsContainers::Array<rw::math::vpu::Vector3,8u>::Append(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	{
	}
	CgsDev::StrStream::StrStream(/* parameters */);
}

void BrnTraffic::TrafficEntityModule::UpdateVehicles(const InputBuffer_PostPhysics *  lpInput, OutputBuffer_PostPhysics *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:13045
		DebugRenderStreamReader * lpDebugStream;

		// BrnTrafficEntityModule.cpp:13053
		uint32_t luJob;

		// BrnTrafficEntityModule.cpp:13054
		uint32_t luStartVehicle;

		// BrnTrafficEntityModule.cpp:13055
		uint32_t luNumVehiclesPerJob;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	IsDecisionFrame(/* parameters */);
	BrnTrafficIO::InputBuffer_PostPhysics::GetActiveRaceCarOutputInterface(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:13058
		uint32_t luEndVehicle;

		// BrnTrafficEntityModule.cpp:13066
		JobParams lJobParams;

	}
	CgsNumeric::Random::RandomUInt(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::TrafficEntityModule::UpdateNonDecisionFrame(const InputBuffer_PostPhysics *  lpInput, OutputBuffer_PostPhysics *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsDecisionFrame(/* parameters */);
	BrnTrafficIO::InputBuffer_PostPhysics::GetActiveRaceCarOutputInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::Vehicle::IsArticulated() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleInputInterface::IsRoomForPhysicalTraffic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetCarAssetAttribKey(uint32_t  luVehicle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:16919
		uint8_t lu8VehicleType;

	}
}

void BrnTraffic::TrafficEntityModule::GetVehicleTypeAttribKey(uint32_t  luVehicleType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::VehicleTypeRuntime::GetAttribKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::GetResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsCab() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<601u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleInputInterface::IsRoomForArticulatedTraffic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::AddVehicleToPhysics(uint32_t  luVehicle, EntityId  lCrasherID, OutputBuffer_PrePhysics::VehicleInputInterface *  lpVehicleInputInterface, BrnPhysics::Vehicle::ETrafficType  leTrafficType, BitArray<601u> *  lpCreatedBodies) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:5531
		Vehicle * lpVehicle;

	}
	BrnPhysics::Vehicle::VehicleInputInterface::IsRoomForArticulatedTraffic(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:5575
		uint32_t luCab;

		// BrnTrafficEntityModule.cpp:5576
		uint32_t luTrailer;

		// BrnTrafficEntityModule.cpp:5589
		Vehicle * lpCab;

		// BrnTrafficEntityModule.cpp:5590
		Vehicle * lpTrailer;

		// BrnTrafficEntityModule.cpp:5591
		Matrix44Affine lTransform_Cab;

		// BrnTrafficEntityModule.cpp:5592
		Vector3 lInitialVelocity_Cab;

		// BrnTrafficEntityModule.cpp:5593
		Vector3 lAngularVelocity_Cab;

		// BrnTrafficEntityModule.cpp:5594
		uint8_t luAttribsId_Cab;

		// BrnTrafficEntityModule.cpp:5595
		CgsID lVehicleCgsID_Cab;

		// BrnTrafficEntityModule.cpp:5596
		uint32_t luAssetId_Cab;

		// BrnTrafficEntityModule.cpp:5597
		Matrix44Affine lTransform_Trailer;

		// BrnTrafficEntityModule.cpp:5598
		Vector3 lInitialVelocity_Trailer;

		// BrnTrafficEntityModule.cpp:5599
		Vector3 lAngularVelocity_Trailer;

		// BrnTrafficEntityModule.cpp:5600
		uint8_t luAttribsId_Trailer;

		// BrnTrafficEntityModule.cpp:5601
		CgsID lVehicleCgsID_Trailer;

		// BrnTrafficEntityModule.cpp:5602
		uint32_t luAssetId_Trailer;

		Vehicle::GetTrailerIndex(/* parameters */);
		Vehicle::GetVehicleType(/* parameters */);
		VehicleAsset::GetVehicleId(/* parameters */);
		Vehicle::GetVehicleType(/* parameters */);
		MakeTrafficVolumeInstanceId(/* parameters */);
		VehicleAsset::GetVehicleId(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
		GetCarAssetAttribKey(/* parameters */);
		GetVehicle(/* parameters */);
		Vehicle::GetVehicleType(/* parameters */);
		GetVehicleTypeAttribKey(/* parameters */);
		Vehicle::GetVehicleType(/* parameters */);
		VehicleTypeRuntime::GetAttribKey(/* parameters */);
		MakeTrafficVolumeInstanceId(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
		GetCarAssetAttribKey(/* parameters */);
		GetVehicle(/* parameters */);
		Vehicle::GetVehicleType(/* parameters */);
		GetVehicleTypeAttribKey(/* parameters */);
		Vehicle::GetVehicleType(/* parameters */);
		VehicleTypeRuntime::GetAttribKey(/* parameters */);
		CgsContainers::BitArray<601u>::SetBit(/* parameters */);
		CgsContainers::BitArray<601u>::SetBit(/* parameters */);
	}
	BrnPhysics::Vehicle::VehicleInputInterface::IsRoomForPhysicalTraffic(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:5538
		Vector3 lInitialVelocity;

		// BrnTrafficEntityModule.cpp:5539
		Vector3 lAngularVelocity;

		// BrnTrafficEntityModule.cpp:5540
		uint8_t luAttribsId;

		// BrnTrafficEntityModule.cpp:5541
		Matrix44Affine lTransform;

		// BrnTrafficEntityModule.cpp:5542
		CgsID lVehicleCgsID;

		// BrnTrafficEntityModule.cpp:5543
		uint32_t luAssetId;

		Vehicle::GetVehicleType(/* parameters */);
		MakeTrafficVolumeInstanceId(/* parameters */);
		VehicleAsset::GetVehicleId(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
		GetCarAssetAttribKey(/* parameters */);
		GetVehicle(/* parameters */);
		Vehicle::GetVehicleType(/* parameters */);
		GetVehicleTypeAttribKey(/* parameters */);
		Vehicle::GetVehicleType(/* parameters */);
		VehicleTypeRuntime::GetAttribKey(/* parameters */);
		Vehicle::IsCab(/* parameters */);
		CgsContainers::BitArray<601u>::SetBit(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsContainers::BitArray<601u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::HandleHalfPotentialContact(EntityId  lVehicleEntity, VolumeInstanceId  lVehicleVolumeId, EntityId  lOtherEntity, OutputBuffer_PrePhysics *  lpOutput, BitArray<601u> *  lpCreatedBodies) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:5499
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:5500
		const Vehicle * lpVehicle;

	}
	GetVehicle(/* parameters */);
	Vehicle::IsAlive(/* parameters */);
	CgsContainers::BitArray<601u>::IsBitSet(/* parameters */);
	BrnTrafficIO::OutputBuffer_PrePhysics::GetVehicleInputInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PrePhysics::GetOverlapPairsQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:280
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::BuildPotentialCollisionList(const InputBuffer_PrePhysics *  lpInput, OutputBuffer_PrePhysics *  lpOutput, BitArray<601u> *  lpCreatedBodies) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:5450
		int32_t liOverlap;

		// BrnTrafficEntityModule.cpp:5451
		int32_t liOverlapQueueLen;

	}
	BrnTrafficIO::InputBuffer_PrePhysics::GetOverlapPairsQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>::GetLength(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:5455
		const OutOverlapPair * lpPair;

		// BrnTrafficEntityModule.cpp:5457
		EntityId lEntityIdA;

		// BrnTrafficEntityModule.cpp:5458
		EntityId lEntityIdB;

		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>::GetEvent(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
	}
	BrnTrafficIO::InputBuffer_PrePhysics::GetOverlapPairsQueue(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::TrafficEntityModule::ReturnPhysicalVehicleToTraffic(uint32_t  luVehicle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:16322
		Vehicle * lpVehicle;

		// BrnTrafficEntityModule.cpp:16327
		const VehicleTypeUpdateData * lpVehicleTypeUpdate;

		// BrnTrafficEntityModule.cpp:16328
		const VehicleTypeRuntime * lpVehicleTypeRuntime;

		// BrnTrafficEntityModule.cpp:16330
		VehicleAxles * lpAxles;

		// BrnTrafficEntityModule.cpp:16337
		Param * lpParam;

		GetVehicle(/* parameters */);
	}
	Vehicle::GetVehicleType(/* parameters */);
	Vehicle::GetVehicleType(/* parameters */);
	GetVehicleTypeRuntime(/* parameters */);
	GetVehicleAxles(/* parameters */);
	GetVehicleTransform(/* parameters */);
	GetParam(/* parameters */);
	Vehicle::IsCab(/* parameters */);
	Vehicle::GetTrailerIndex(/* parameters */);
	GetParam(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:16338
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

extern void TrafficCrashInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::Append(const const TrafficCrashInfo &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::BitArray<25u>::GetFirstZeroBit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:590
		uint32_t liIndex;

		{
			// CgsBitArray.h:600
			int32_t liFirstZeroBit;

			{
				// CgsBitArray.h:601
				CgsDev::StrStream lStrStream;

			}
		}
		{
			// CgsBitArray.h:606
			int32_t liFirstZeroBit;

		}
	}
}

void CgsContainers::BitArray<25u>::GetZeroBitInInt(int64_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:796
		uint32_t liLeadingZeros;

	}
}

void CgsContainers::BitArray<25u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::Vehicle::SetPhysical(int8_t  liPartsIndex, uint32_t  luVehicle, const VehicleSoaData &  lSoaData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::RecordTrafficVehicleIsPhysical(uint32_t  luVehicle, EntityId  lVictimId, EntityId  lCauserId, BrnPhysics::Vehicle::eCrashTrafficType  leCrashingTrafficType, float32_t  lfSteeringDirection, float32_t  lfDriveDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:6884
		Vehicle * lpVehicle;

		GetVehicle(/* parameters */);
	}
	Vehicle::IsRecoveringFromSlam(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:6922
		int8_t liPartsIndex;

		CgsContainers::BitArray<25u>::GetFirstZeroBit(/* parameters */);
		CgsContainers::BitArray<25u>::SetBit(/* parameters */);
		Vehicle::SetPhysical(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:6895
		TrafficCrashInfo lCrashInfo;

	}
	CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::Append(/* parameters */);
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
}

void BrnTraffic::Vehicle::SetPhysicalReason(BrnTraffic::PhysicalReason  leReason) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::SetInvalid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleInputInterface::SetTrafficCrashing(EntityId  lEntityId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleInputInterface.h:567
		SetTrafficCrashingEvent lEvent;

	}
}

extern void SetTrafficCrashingEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::CrashVehicleForSympatheticCrashState(uint32_t  luVehicle, OutputBuffer_PrePhysics *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:16875
		Vehicle * lpVehicle;

		GetVehicle(/* parameters */);
	}
	Vehicle::SetPhysicalReason(/* parameters */);
	Vehicle::IsRecoveringFromSlam(/* parameters */);
	BrnTrafficIO::OutputBuffer_PrePhysics::GetVehicleInputInterface(/* parameters */);
	MakeTrafficEntityId(/* parameters */);
	BrnPhysics::Vehicle::VehicleInputInterface::SetTrafficCrashing(/* parameters */);
	Vehicle::SetCrashTrafficType(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:16888
		EntityId lInvalidId;

		MakeTrafficEntityId(/* parameters */);
	}
}

void BrnTraffic::TrafficEntityModule::MakeVehiclePhysical(uint32_t  luVehicle, OutputBuffer_PrePhysics *  lpOutput, BitArray<601u> *  lpCreatedBodies, EntityId  lCauserEntityId, BrnPhysics::Vehicle::ETrafficType  leTrafficType, BrnPhysics::Vehicle::eCrashTrafficType  leCrashTrafficType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	MakeTrafficEntityId(/* parameters */);
	GetVehicle(/* parameters */);
	GetVehicle(/* parameters */);
	BrnTrafficIO::OutputBuffer_PrePhysics::GetVehicleInputInterface(/* parameters */);
	MakeTrafficEntityId(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:2592
		Vehicle * lpVehicle;

		GetVehicle(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:2596
			uint32_t luOtherHalf;

			Vehicle::GetTrailerIndex(/* parameters */);
			MakeTrafficEntityId(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::TrafficEntityModule::SendEmergencyCrashEvents(OutputBuffer_PrePhysics *  lpOutput, BitArray<601u> *  lpCreatedBodies) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:5375
		uint32_t luIndex;

	}
	CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::GetLength(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:5378
		const TrafficCrashInfo * lpInfo;

		// BrnTrafficEntityModule.cpp:5379
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:5389
		Vehicle * lpVehicle;

	}
	CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::operator[](/* parameters */);
	CgsSceneManager::EntityId::GetEntityIndex(/* parameters */);
	CgsContainers::BitArray<601u>::IsBitSet(/* parameters */);
	GetVehicle(/* parameters */);
	Vehicle::IsCrashing(/* parameters */);
	CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::Clear(/* parameters */);
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
	Vehicle::IsRecoveringFromSlam(/* parameters */);
	BrnTrafficIO::OutputBuffer_PrePhysics::GetVehicleInputInterface(/* parameters */);
	BrnPhysics::Vehicle::VehicleInputInterface::SetTrafficCrashing(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::Vehicle::GetPhysicalReason() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::SetSympatheticCrashTarget(EntityId  lEntityId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::SetSympatheticCrashState(BrnTraffic::Vehicle::SympatheticCrashState  leState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::SafeRequestMakeVehiclePhysical(uint32_t  luVehicle, BrnTraffic::PhysicalReason  leReason, EntityId  lCauserId, BrnPhysics::Vehicle::ETrafficType  leTrafficType, BrnPhysics::Vehicle::eCrashTrafficType  leCrashTrafficType, OutputBuffer_PrePhysics *  lpOutput, BitArray<601u> *  lpCreatedBodies) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:2500
		Vehicle * lpVehicle;

	}
	CgsContainers::BitArray<601u>::IsBitSet(/* parameters */);
	GetVehicle(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:2522
		uint32_t luVehiclesUsed;

		CgsContainers::BitArray<25u>::CountSetBits(/* parameters */);
	}
	Vehicle::SetPhysicalReason(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:2545
		int32_t liRand;

		Vehicle::SetSympatheticCrashTarget(/* parameters */);
		CgsNumeric::Random::RandomInt(/* parameters */);
		Vehicle::SetSympatheticCrashState(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::BitArray<25u>::GetFirstZeroBit(/* parameters */);
	Vehicle::SetSympatheticCrashState(/* parameters */);
}

void BrnTraffic::TrafficEntityModule::CreateBodiesForCrashingNetworkTraffic(OutputBuffer_PrePhysics *  lpOutput, BitArray<601u> *  lpCreatedBodies) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:5695
		EntityId lPlayerId;

		// BrnTrafficEntityModule.cpp:5698
		uint32_t luCrashedVehicle;

	}
	CgsContainers::Array<uint16_t,160u>::GetLength(/* parameters */);
	CgsSceneManager::EntityId::Set(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:5701
		uint32_t luVehicle;

	}
	CgsContainers::Array<uint16_t,160u>::GetLength(/* parameters */);
	CgsContainers::Array<uint16_t,160u>::operator[](/* parameters */);
	CgsContainers::Array<uint16_t,160u>::Clear(/* parameters */);
}

void BrnTraffic::TrafficJobStub::GetNewPhysicalRequests() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PhysicalRequestInfo,25u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnTraffic::PhysicalRequestInfo,25u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PhysicalRequestInfo,25u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::SendPhysicalRequests(OutputBuffer_PrePhysics *  lpOutput, BitArray<601u> *  lpCreatedBodies) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:2417
		uint32_t luJob;

		// BrnTrafficEntityModule.cpp:2418
		uint32_t luCommand;

	}
	CgsContainers::Array<BrnTraffic::PhysicalRequestInfo,25u>::GetLength(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:2426
		PhysicalRequestInfo lInfo;

		TrafficJobStub::GetNewPhysicalRequests(/* parameters */);
		CgsContainers::Array<BrnTraffic::PhysicalRequestInfo,25u>::GetItem(/* parameters */);
	}
	TrafficJobStub::GetNewPhysicalRequests(/* parameters */);
	TrafficJobStub::GetNewPhysicalRequests(/* parameters */);
	CgsContainers::Array<BrnTraffic::PhysicalRequestInfo,25u>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::BitArray<25u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::GetTrafficPhysicsInfoForVehicle(uint32_t  luVehicle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.h:2580
		int32_t liPartsIndex;

		// BrnTrafficEntityModule.h:2585
		TrafficPhysicsInfo * lpPhysicsInfo;

	}
	GetVehicle(/* parameters */);
	GetVehicle(/* parameters */);
	Vehicle::GetPhysicalPartsIndex(/* parameters */);
	CgsContainers::BitArray<25u>::IsBitSet(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void rw::math::vpu::operator+=(const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::NeedToTakeActionAgainstOnlineJunctionFUP() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::JunctionFUP_StopOffscreenTraffic(const const FastBitArray<601>::Iterator &  lItVehicle, bool  lbRenderedLastFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:17346
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:17347
		Vector3 lVehiclePos;

		// BrnTrafficEntityModule.cpp:17348
		Vector3 lBCToVehicle;

		// BrnTrafficEntityModule.cpp:17349
		VecFloat lfDistanceFromBCSq;

		{
			// BrnTrafficEntityModule.cpp:17353
			Param * lpParam;

		}
	}
}

void BrnTraffic::TrafficEntityModule::JunctionFUP_TryClearupNonMovingPhysical(const const FastBitArray<601>::Iterator &  lItVehicle, bool  lbRenderedLastFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:17380
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:17381
		const TrafficPhysicsInfo * lpPhysInfo;

	}
}

void BrnTraffic::TrafficEntityModule::UpdateJunctionFUP() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:17229
		VecFloat lfFurthestDistance;

		// BrnTrafficEntityModule.cpp:17230
		uint32_t luNextKillVehicle;

		// BrnTrafficEntityModule.cpp:17232
		Iterator lItVehicle;

		// BrnTrafficEntityModule.cpp:17233
		FastBitArray<601> lVehicles_Alive_And_Physical;

	}
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	CgsContainers::FastBitArray<601>::Iterator::Iterator(/* parameters */);
	CgsContainers::FastBitArray<601>::SetAnd(/* parameters */);
	CgsContainers::FastBitArray<601>::Begin(/* parameters */);
	CgsContainers::FastBitArray<601>::Iterator::operator!=(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:17240
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:17241
		TrafficPhysicsInfo * lpPhysInfo;

		// BrnTrafficEntityModule.cpp:17244
		Matrix44Affine lVehicleTransform;

		// BrnTrafficEntityModule.cpp:17245
		Vector3 lVehiclePosition;

		// BrnTrafficEntityModule.cpp:17248
		Vector3 lVehicleToCentre;

		// BrnTrafficEntityModule.cpp:17249
		VecFloat lfDistanceFromCentreSq;

		CgsContainers::FastBitArray<601>::Iterator::GetIndex(/* parameters */);
		GetVehicleTransform(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator<=(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
	}
	NeedToTakeActionAgainstJunctionFUP(/* parameters */);
	NeedToTakeActionAgainstJunctionFUP(/* parameters */);
	CgsContainers::FastBitArray<601>::Begin(/* parameters */);
	CgsContainers::FastBitArray<601>::Iterator::operator!=(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:17307
		uint32_t luVehicle;

	}
	CgsContainers::FastBitArray<601>::Iterator::GetIndex(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:17311
		bool lbRenderedLastFrame;

		JunctionFUP_StopOffscreenTraffic(/* parameters */);
		JunctionFUP_TryClearupNonMovingPhysical(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		GetParam(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::Vehicle::StartGiveUpManoeuvre() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::CheckIfPhysicalVehicleIsStuck(uint32_t  luVehicle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:17118
		TrafficPhysicsInfo * lpPhysicsInfo;

		// BrnTrafficEntityModule.cpp:17130
		Vehicle * lpVehicle;

		// BrnTrafficEntityModule.cpp:17133
		bool lbFrontStuck;

		// BrnTrafficEntityModule.cpp:17134
		bool lbBackStuck;

		// BrnTrafficEntityModule.cpp:17135
		BrnTraffic::Vehicle::Manoeuvre leResponse;

		NeedToTakeActionAgainstJunctionFUP(/* parameters */);
		GetVehicle(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		Vehicle::SetCurrentManoeuvre(/* parameters */);
	}
	Vehicle::StartGiveUpManoeuvre(/* parameters */);
	Vehicle::SetCurrentManoeuvrePhase(/* parameters */);
}

void rw::math::vpu::operator< <VectorAxisY>(const const float &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:584
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:586
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:588
		bool ret;

		{
			// vec_float_operation_inline.h:585
			VectorIntrinsicUnion u;

		}
	}
}

void BrnTraffic::Vehicle::GetManoeuvreTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator>=<VectorAxisX>(const const float &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:743
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:745
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:747
		bool ret;

		{
			// vec_float_operation_inline.h:744
			VectorIntrinsicUnion u;

		}
	}
}

void BrnTraffic::Vehicle::ResetManoeuvreTime(float32_t  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator><VectorAxisZ>(const VecFloat  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:364
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:366
		bool ret;

	}
}

void rw::math::vpu::operator< <VectorAxisX>(const const float &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:584
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:586
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:588
		bool ret;

		{
			// vec_float_operation_inline.h:585
			VectorIntrinsicUnion u;

		}
	}
}

void BrnTraffic::TrafficEntityModule::UpdateStuckReverseManoeuvre(uint32_t  luVehicle, BrnTrafficDriverControls *  lpDriverControls) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:16775
		Vehicle * lpVehicle;

		// BrnTrafficEntityModule.cpp:16781
		TrafficPhysicsInfo * lpPhysInfo;

		// BrnTrafficEntityModule.cpp:16784
		Matrix44Affine lVehicleTransform;

		// BrnTrafficEntityModule.cpp:16787
		Vector3 lTargetPos;

		// BrnTrafficEntityModule.cpp:16788
		Vector3 lDiffPos;

		// BrnTrafficEntityModule.cpp:16789
		Vector3 lDirToTarget;

	}
	GetVehicle(/* parameters */);
	Vehicle::GetCurrentManoeuvre(/* parameters */);
	GetVehicleTransform(/* parameters */);
	Vehicle::GetTargetPos(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	Vehicle::GetCurrentManoeuvrePhase(/* parameters */);
	{
	}
	rw::math::vpu::CompNotEqual(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:16838
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		Vehicle::GetCurrentManoeuvrePhase(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:16799
		Vector3 lVehicleAt;

		// BrnTrafficEntityModule.cpp:16800
		float32_t lfSteering;

		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		Vehicle::SetCurrentManoeuvrePhase(/* parameters */);
		Vehicle::ResetManoeuvreTime(/* parameters */);
	}
	rw::math::vpu::operator< <VectorAxisY>(/* parameters */);
	Vehicle::GetManoeuvreTime(/* parameters */);
	rw::math::vpu::operator>=<VectorAxisX>(/* parameters */);
	Vehicle::GetSpeed(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator><VectorAxisZ>(/* parameters */);
	Vehicle::SetCurrentManoeuvre(/* parameters */);
	Vehicle::GetManoeuvreTime(/* parameters */);
	rw::math::vpu::operator< <VectorAxisX>(/* parameters */);
}

void BrnTraffic::Vehicle::SetIndicatingLeft(bool  lbOn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsIndicatingRight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsIndicatingLeft() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::SetIndicatingRight(bool  lbOn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateGiveUpManoeuvre(uint32_t  luVehicle, BrnTrafficDriverControls *  lpDriverControls) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:16690
		Vehicle * lpVehicle;

	}
	GetVehicle(/* parameters */);
	Vehicle::GetCurrentManoeuvre(/* parameters */);
	Vehicle::GetCurrentManoeuvrePhase(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:16758
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		Vehicle::GetCurrentManoeuvrePhase(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Vehicle::GetSpeed(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	Vehicle::SetCurrentManoeuvrePhase(/* parameters */);
	Vehicle::ResetManoeuvreTime(/* parameters */);
	Vehicle::GetSpeed(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	Vehicle::GetSpeed(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:16722
		TrafficPhysicsInfo * lpPhysInfo;

		// BrnTrafficEntityModule.cpp:16725
		bool lbStuckFront;

		// BrnTrafficEntityModule.cpp:16726
		bool lbStuckBack;

		// BrnTrafficEntityModule.cpp:16736
		bool lbStillStuck;

		TrafficPhysicsInfo::IsStuckFront(/* parameters */);
		Vehicle::GetCurrentManoeuvre(/* parameters */);
		Vehicle::SetIndicatingLeft(/* parameters */);
		Vehicle::SetIndicatingRight(/* parameters */);
		Vehicle::SetPhysicalReason(/* parameters */);
	}
	Vehicle::ResetManoeuvreTime(/* parameters */);
}

void BrnTraffic::Vehicle::SetTargetPos(const rw::math::vpu::Vector3  lTargetPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::AddSympatheticTime(float32_t  lfTimeDelta) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleInputInterface::SetTrafficNotCrashing(EntityId  lEntityId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleInputInterface.h:581
		SetTrafficCrashingEvent lEvent;

	}
}

void BrnTraffic::Vehicle::GetSympatheticCrashState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::CalculateDriverGasBrake(uint32_t  luVehicle, const VecFloat  lfDistAhead, const rw::math::vpu::Vector3  lfTargetLinearVel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnTrafficEntityModule.cpp:15920
	VecFloat lfGasBrake;

	{
		// BrnTrafficEntityModule.cpp:15901
		const Vehicle * lpVehicle;

		// BrnTrafficEntityModule.cpp:15904
		VecFloat KF_VEHICLE_TIME_TO_TARGET_THRESH;

		// BrnTrafficEntityModule.cpp:15905
		VecFloat KF_VEHICLE_GASBRAKE_FACTOR;

		// BrnTrafficEntityModule.cpp:15906
		VecFloat KF_VEHICLE_MIN_CLOSING_SPEED;

		// BrnTrafficEntityModule.cpp:15907
		VecFloat KF_VEHICLE_BIG_TIME;

		// BrnTrafficEntityModule.cpp:15908
		VecFloat KF_VEHICLE_CONTROL_CUTOFF;

		// BrnTrafficEntityModule.cpp:15911
		Vector3 lClosingVelocity;

		// BrnTrafficEntityModule.cpp:15912
		VecFloat lfClosingSpeed;

		// BrnTrafficEntityModule.cpp:15915
		VecFloat lfTimeToTarget0;

		// BrnTrafficEntityModule.cpp:15916
		VecFloat lfTimeToTarget;

		// BrnTrafficEntityModule.cpp:15920
		VecFloat lfGasBrake;

	}
}

void BrnTraffic::Vehicle::GetSympatheticTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateSympatheticCrashing(uint32_t  luVehicle, EntityId  lTarget, OutputBuffer_PrePhysics *  lpOutputBuffer, BrnTrafficDriverControls *  lpOutControls, float32_t  lfSimTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:16071
		Vehicle * lpVehicle;

		// BrnTrafficEntityModule.cpp:16080
		Vector3 lTargetPos;

		// BrnTrafficEntityModule.cpp:16085
		Vector3 lVehiclePos;

		// BrnTrafficEntityModule.cpp:16086
		Vector3 lVehicleDir;

		// BrnTrafficEntityModule.cpp:16087
		Vector3 lMoveVector;

		// BrnTrafficEntityModule.cpp:16088
		VecFloat lfDistAhead;

		// BrnTrafficEntityModule.cpp:16089
		VecFloat lfGasBrake;

		// BrnTrafficEntityModule.cpp:16094
		TrafficPhysicsInfo * lpPhysicsInfo;

		// BrnTrafficEntityModule.cpp:16108
		Param * lpParam;

	}
	Vehicle::GetTargetPos(/* parameters */);
	GetSympCrashingTargetPos(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	Vehicle::SetTargetPos(/* parameters */);
	Vehicle::GetTargetPos(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	Vehicle::GetTargetPos(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	Vehicle::AddSympatheticTime(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	Vehicle::GetSpeed(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	Vehicle::SetPhysicalReason(/* parameters */);
	Vehicle::SetCrashTrafficType(/* parameters */);
	BrnTrafficIO::OutputBuffer_PrePhysics::GetVehicleInputInterface(/* parameters */);
	MakeTrafficEntityId(/* parameters */);
	BrnPhysics::Vehicle::VehicleInputInterface::SetTrafficNotCrashing(/* parameters */);
	{
		GetRaceCarState(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:16260
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:16123
		Vector3 lNewDirection;

		// BrnTrafficEntityModule.cpp:16128
		Vector3 lCameraToVehicle;

		// BrnTrafficEntityModule.cpp:16146
		bool lbDistanceForFlipOut;

		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		CalculateDriverGasBrake(/* parameters */);
		rw::math::vpu::GetVector3_Zero(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		Vehicle::GetLinearVelocity(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:16138
			ParamTransform * lpParamTransform;

			CalculateDriverGasBrake(/* parameters */);
		}
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::GetVecFloat_NegativeOne(/* parameters */);
		{
		}
		rw::math::vpu::GetVecFloat_One(/* parameters */);
		rw::math::vpu::ReciprocalFast(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator<=(/* parameters */);
		CgsNumeric::Random::RandomInt(/* parameters */);
		Vehicle::SetSympatheticCrashState(/* parameters */);
	}
	{
		GetVehicle(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	Vehicle::GetPhysicalReason(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:16175
		float32_t lfSteering;

		Vehicle::GetSteering(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:16203
		Vector3 lNewDirection;

		rw::math::vpu::Normalize(/* parameters */);
		Vehicle::GetPhysicalReason(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Vehicle::SetSympatheticCrashState(/* parameters */);
	rw::math::vpu::operator<=(/* parameters */);
	Vehicle::SetSympatheticCrashState(/* parameters */);
	GetParamTransform(/* parameters */);
	ParamTransform::GetDirection(/* parameters */);
	ParamTransform::GetSpeed(/* parameters */);
	GetVehicle(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:16221
		Vector3 lCameraToVehicle;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		CalculateDriverGasBrake(/* parameters */);
		rw::math::vpu::GetVector3_Zero(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		Vehicle::GetLinearVelocity(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:16231
			ParamTransform * lpParamTransform;

			CalculateDriverGasBrake(/* parameters */);
		}
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::GetVecFloat_NegativeOne(/* parameters */);
		{
		}
		rw::math::vpu::GetVecFloat_One(/* parameters */);
		rw::math::vpu::ReciprocalFast(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
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
	GetParamTransform(/* parameters */);
	ParamTransform::GetDirection(/* parameters */);
	ParamTransform::GetSpeed(/* parameters */);
	GetVehicle(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

void BrnTraffic::TrafficEntityModule::ClearupCrashedTraffic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:15860
		FastBitArray<601> lVehicles_Alive_And_Physical;

		// BrnTrafficEntityModule.cpp:15861
		Iterator lItVehicle;

		CgsContainers::FastBitArray<601>::Iterator::Iterator(/* parameters */);
	}
	CgsContainers::FastBitArray<601>::SetAnd(/* parameters */);
	CgsContainers::FastBitArray<601>::Begin(/* parameters */);
	CgsContainers::FastBitArray<601>::Iterator::operator!=(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:15871
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:15872
		Vehicle * lpVehicle;

		// BrnTrafficEntityModule.cpp:15876
		TrafficPhysicsInfo * lpPhysInfo;

		GetVehicle(/* parameters */);
		Vehicle::GetCurrentManoeuvre(/* parameters */);
	}
	CgsContainers::FastBitArray<601>::Iterator::GetIndex(/* parameters */);
}

void CgsContainers::Array<rw::math::vpu::VecFloat,8u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<rw::math::vpu::VecFloat,8u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<rw::math::vpu::VecFloat,8u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::UpdatePlayerIdle(const InputBuffer_PreScene::ActiveRaceCarOutputInterface *  lpActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:13277
		EActiveRaceCarIndex lePlayerActiveRaceCarIndex;

		// BrnTrafficEntityModule.cpp:13281
		VecFloat lfPlayerSpeed;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	CgsContainers::Array<rw::math::vpu::VecFloat,8u>::GetLength(/* parameters */);
	CgsContainers::Array<rw::math::vpu::VecFloat,8u>::operator[](/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::GetGameActionQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:355
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

void BrnGameState::GameStateModuleIO::PrepareForModeAction::IsFirstPrepareForMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetGameEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:400
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::RestartTraffic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,32u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,32u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<CgsID,32u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::HideAllTraffic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:17766
		FastBitArray<601> lVehicles_Alive_And_Physical;

		// BrnTrafficEntityModule.cpp:17767
		Iterator lItVehicle;

		{
			// BrnTrafficEntityModule.cpp:17775
			uint32_t luVehicle;

		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const const VecFloatRef<VectorAxisY> &  v) {
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

void BrnTraffic::TrafficEntityModule::UnhideAllTraffic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::KillAllTrafficNearPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::KillAllTrafficInCylinderWhenCameraIsNotLooking(const rw::math::vpu::Vector3  lCentre, float32_t  lfRadius, float32_t  lfHalfHeight, bool  lbKillStatic, const VecFloat  lfMinDistFromCameraSq) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:4064
		Matrix44Affine lCameraMatrix;

		// BrnTrafficEntityModule.cpp:4065
		Vector3 lDiff;

		// BrnTrafficEntityModule.cpp:4066
		VecFloat lfDistSq;

	}
}

void BrnTraffic::TrafficEntityModule::HandleExternalRequests(const InputBuffer_PostPhysics *  lpInput, OutputBuffer_PostPhysics *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:5735
		const InputBuffer_PostPhysics::GameActionQueue * lpGameActionQueue;

		// BrnTrafficEntityModule.cpp:5738
		const CgsModule::Event * lpAction;

		// BrnTrafficEntityModule.cpp:5739
		int32_t liActionSize;

		// BrnTrafficEntityModule.cpp:5740
		int32_t liActionType;

		// BrnTrafficEntityModule.cpp:6085
		bool lbLastPictureParadise;

	}
	BrnTrafficIO::InputBuffer_PostPhysics::GetGameActionQueue(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::GetFirstEvent(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:5802
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnTrafficEntityModule.cpp:5803
		const InputBuffer_PreScene::ActiveRaceCarOutputInterface * lpActiveRaceCarInterface;

		BrnTrafficIO::InputBuffer_PostPhysics::GetActiveRaceCarOutputInterface(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		operator++(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:6002
		const ShowtimeModeSwitchAction * lpShowtimeAction;

	}
	{
		// BrnTrafficEntityModule.cpp:6044
		const CarSelectExitAction * lpCarSelectAction;

		UnhideAllTraffic(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:6016
		const CarSelectReadyAction * lpCarSelectAction;

		HideAllTraffic(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:5970
		const HUDMessageDistanceToFinishAction * lpDistToFinishAction;

	}
	{
		// BrnTrafficEntityModule.cpp:5784
		StreamingCompleteEvent lEvent;

		BrnTrafficIO::OutputBuffer_PostPhysics::GetGameEventQueue(/* parameters */);
	}
	operator=<VectorAxisX>(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:5829
		const EmptyTrafficMemoryPool * lEmptyTrafficPoolEvent;

	}
	RestartTraffic(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:5897
		const StopModeAction * lpStopModeAction;

	}
	KillAllTrafficInCylinderWhenCameraIsNotLooking(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:5931
		const KillzoneAction * lpKZAction;

		// BrnTrafficEntityModule.cpp:5933
		uint32_t luKillzone;

		CgsContainers::Array<CgsID,32u>::GetLength(/* parameters */);
		CgsContainers::Array<CgsID,32u>::operator[](/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:5848
		const SetCountdownAction * lpSetCountdownAction;

		// BrnTrafficEntityModule.cpp:5849
		int32_t liCountdownDisplay;

	}
	{
		// BrnTrafficEntityModule.cpp:5747
		const PrepareForModeAction * lpPFMAction;

	}
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:5759
		const SetTrafficScaleBasedOnRankAction * lpSetTrafficScaleBasedOnRankAction;

	}
	{
		// BrnTrafficEntityModule.cpp:5948
		const RestartTrafficAction * lpRestartTrafficAction;

		RestartTraffic(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:6028
		const CarSelectTransitionInAction * lpCarSelectTransitionAction;

		operator=<VectorAxisY>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
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

void BrnTraffic::Vehicle::GetHeadlightWarmth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::GetIndicatorBulbWarmth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::AreBrakelightsOn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsLeftIndicatorOn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsRightIndicatorOn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::ResourcePtr(const const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &  lOtherResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:543
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Deformation::StreamedDeformationSpec::GetCarModelSpaceToHandlingBodySpaceTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(const rw::math::vpu::Matrix44Affine &  in) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:204
		VectorIntrinsicUnion::VectorIntrinsic zero;

		// matrix44affine_operation_platform_inline.h:206
		VectorIntrinsicUnion::VectorIntrinsic negatePos;

		// matrix44affine_operation_platform_inline.h:208
		VectorIntrinsicUnion::VectorIntrinsic[4] tempT;

		// matrix44affine_operation_platform_inline.h:214
		VectorIntrinsicUnion::VectorIntrinsic[4] transposedTransform;

		// matrix44affine_operation_platform_inline.h:219
		VectorIntrinsicUnion::VectorIntrinsic Z;

		// matrix44affine_operation_platform_inline.h:220
		VectorIntrinsicUnion::VectorIntrinsic Y;

		// matrix44affine_operation_platform_inline.h:221
		VectorIntrinsicUnion::VectorIntrinsic X;

	}
}

void BrnPhysics::Deformation::StreamedDeformationSpec::GetLightLocators() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::LocatorPointSpecList::GetNumLocatorPoints() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::LocatorPointSpecList::GetLocatorType(uint32_t  luTag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::LocatorPointSpecList::GetLocatorXform(uint32_t  luTag) {
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

extern void ~ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::SubmitCoronasForVehicle(BrnCoronaManager::BrnSubmissionInterface *  lpCoronaSubmissionInterface, uint32_t  luVehicle, const rw::math::vpu::Vector3  lCameraPosition, const rw::math::vpu::Vector3  lCameraDirection, const Vector4 &  lFrontLights, const Vector4 &  lRearLights) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:14377
		Vector3 lCoronaDirection;

		// BrnTrafficEntityModule.cpp:14381
		const Vehicle * lpVehicle;

		// BrnTrafficEntityModule.cpp:14393
		Matrix44Affine lTransform;

		// BrnTrafficEntityModule.cpp:14395
		VecFloat lfDistFromCamera;

		// BrnTrafficEntityModule.cpp:14396
		VecFloat lfClampedDist;

		// BrnTrafficEntityModule.cpp:14397
		VecFloat lfSizeParam;

		// BrnTrafficEntityModule.cpp:14398
		VecFloat lfSizeScale;

		// BrnTrafficEntityModule.cpp:14400
		float32_t lfLightScale;

		// BrnTrafficEntityModule.cpp:14402
		float32_t lfBrakeLightOpacity;

		// BrnTrafficEntityModule.cpp:14403
		float32_t lfFrontRunningLightOpacity;

		// BrnTrafficEntityModule.cpp:14404
		float32_t lfHiBeamLightOpacity;

		// BrnTrafficEntityModule.cpp:14405
		float32_t lfIndicatorLightOpacity;

		// BrnTrafficEntityModule.cpp:14406
		float32_t lfTailRunningLightOpacity;

		// BrnTrafficEntityModule.cpp:14407
		float32_t lfSpotLightOpacity;

	}
	GetVehicle(/* parameters */);
	GetVehicleTransform(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::GetVecFloat_Two(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	Vehicle::GetHeadlightWarmth(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	Vehicle::GetIndicatorBulbWarmth(/* parameters */);
	Vehicle::GetHeadlightWarmth(/* parameters */);
	Vehicle::HasEntity(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:14411
		bool lbShouldHaveRunningLightsOn;

		// BrnTrafficEntityModule.cpp:14412
		bool lbShouldHaveRearLightsOn;

		// BrnTrafficEntityModule.cpp:14413
		bool lbShouldHaveBrakeLightsOn;

		// BrnTrafficEntityModule.cpp:14414
		bool lbShouldHaveLeftIndicatorOn;

		// BrnTrafficEntityModule.cpp:14415
		bool lbShouldHaveRightIndicatorOn;

		// BrnTrafficEntityModule.cpp:14452
		int32_t liModelId;

		// BrnTrafficEntityModule.cpp:14453
		ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> lpPhysicsSpec;

		// BrnTrafficEntityModule.cpp:14455
		Matrix44Affine lHandlingToModelTransform;

		// BrnTrafficEntityModule.cpp:14456
		Matrix44Affine lTagPointToWorldMat;

		// BrnTrafficEntityModule.cpp:14458
		const const LocatorPointSpecList & lLightLocators;

		// BrnTrafficEntityModule.cpp:14459
		uint32_t luTagPoint;

		// BrnTrafficEntityModule.cpp:14461
		int32_t liNumLocators;

		// BrnTrafficEntityModule.cpp:14462
		int8_t liPhysicsIndex;

		Vehicle::AreBrakelightsOn(/* parameters */);
		Vehicle::IsLeftIndicatorOn(/* parameters */);
		Vehicle::IsRightIndicatorOn(/* parameters */);
		rw::math::vpu::GetVecFloat_One(/* parameters */);
		rw::math::vpu::Vector4::SetY(/* parameters */);
		Vehicle::GetVehicleType(/* parameters */);
		CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::ResourcePtr(/* parameters */);
		CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator->(/* parameters */);
		BrnPhysics::Deformation::StreamedDeformationSpec::GetCarModelSpaceToHandlingBodySpaceTransform(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator->(/* parameters */);
		rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		BrnPhysics::Deformation::StreamedDeformationSpec::GetLightLocators(/* parameters */);
		Vehicle::GetPhysicalPartsIndex(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:14476
			BrnPhysics::Deformation::ETagPointType leLocatorType;

			// BrnTrafficEntityModule.cpp:14477
			Vector3 lLocatorPos;

		}
		{
			// BrnTrafficEntityModule.cpp:14589
			Vector3 lCoronaPosition;

			BrnPhysics::Deformation::LocatorPointSpecList::GetLocatorXform(/* parameters */);
			rw::math::vpu::TransformPoint(/* parameters */);
		}
		~ResourcePtr(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:14386
		const TrafficPhysicsInfo * lpPhysicsInfo;

	}
	BrnPhysics::Deformation::LocatorPointSpecList::GetLocatorType(/* parameters */);
	BrnPhysics::Deformation::LocatorPointSpecList::GetLocatorXform(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:14499
		Vector3 lCoronaPosition;

		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:14555
		Vector3 lCoronaPosition;

		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::Vector4::SetY(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:14577
		Vector3 lCoronaPosition;

		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:14520
		Vector3 lCoronaPosition;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:14541
		Vector3 lCoronaPosition;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
	}
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::Vector4::SetX(/* parameters */);
	Vehicle::IsAlarmOn(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:14430
		bool lbAlarmFlash;

		Vehicle::IsLeftIndicatorOn(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsResource::ResourcePtr<BrnTraffic::GraphicsStub>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Max<int32_t>(const const int32_t &  a, const const int32_t &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficCarStreamer::NotifyAssetRenderedThisFrame(uint32_t  luAssetId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficCarStreamer.h:338
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator=(const const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &  lOtherResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficData::GetNumPaintColours() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::VehicleTypeRuntime::PickPaintColourForVehicle(uint32_t  luVehicleIndex, uint32_t  luNumPaintColours, const rw::math::vpu::Vector4 *  lpaPaintColours) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficVehicleTypeRuntime.h:134
		int32_t liVehicleColour;

		// BrnTrafficVehicleTypeRuntime.h:135
		int32_t liColourIndex;

	}
}

void BrnTraffic::Vehicle::GetPitch() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::RotateAroundXAxis(const rw::math::vpu::Matrix44Affine &  m, const VecFloat  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_inline.h:692
		VecFloat s;

		// matrix44affine_operation_inline.h:692
		VecFloat c;

	}
}

void BrnTraffic::Vehicle::GetRoll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::RotateAroundZAxis(const rw::math::vpu::Matrix44Affine &  m, const VecFloat  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_inline.h:737
		VecFloat s;

		// matrix44affine_operation_inline.h:737
		VecFloat c;

	}
}

void rw::math::vpu::operator*=(const Matrix44Affine &  m, const rw::math::vpu::Matrix44Affine &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ShadowMap::GetRenderingShadowMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::VehicleTypeRuntime::GetCabPivot_TrailerPivot_BackAxle_FwdAxle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::math::vpu::GetVector3_YAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisX>(const VecFloat  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1547
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1548
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator-<VectorAxisY>(const VecFloat  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1402
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1403
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::Pow(const VecFloat  base, const VecFloat  exponent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::powf4(float[4]  x, float[4]  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// powf4.h:8
		int[4] zeros;

		// powf4.h:9
		unsigned int[4] zeromask;

		// powf4.h:11
		unsigned int[4] negmask;

		// powf4.h:13
		float[4] sbit;

		// powf4.h:14
		float[4] absx;

		// powf4.h:15
		float[4] absy;

		// powf4.h:16
		unsigned int[4] oddy;

		// powf4.h:19
		float[4] res;

	}
}

void std::log2f4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// log2f4.h:16
		int[4] zeros;

		// log2f4.h:17
		float[4] ones;

		// log2f4.h:20
		int[4] expmask;

		// log2f4.h:21
		int[4] xexp;

		// log2f4.h:24
		unsigned int[4] mask;

		// log2f4.h:28
		float[4] x1;

		// log2f4.h:29
		float[4] z;

		// log2f4.h:30
		float[4] w;

		// log2f4.h:31
		float[4] polywneg;

		// log2f4.h:35
		float[4] y;

		// log2f4.h:36
		float[4] zz1;

		// log2f4.h:37
		float[4] zz2;

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

void std::exp2f4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// exp2f4.h:62
		int[4] ix;

		// exp2f4.h:63
		unsigned int[4] overflow;

		// exp2f4.h:64
		unsigned int[4] underflow;

		// exp2f4.h:65
		float[4] frac;

		// exp2f4.h:65
		float[4] frac2;

		// exp2f4.h:65
		float[4] frac4;

		// exp2f4.h:66
		float[4] exp_int;

		// exp2f4.h:66
		float[4] exp_frac;

		// exp2f4.h:67
		float[4] result;

		// exp2f4.h:68
		float[4] hi;

		// exp2f4.h:68
		float[4] lo;

		// exp2f4.h:69
		float[4] zeros;

		// exp2f4.h:70
		float[4] bias;

	}
}

void rw::math::vpu::operator*<VectorAxisW>(const VecFloat  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1547
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1548
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector4  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:445
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnWorld::ShadowMap::UseZOnlyRenderingPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::GetVector2_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector4_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::SetGlassFractureConstants(float32_t  lfFractureStrength, float32_t  lfEqualisationFactor, const const Vector2Template<float> &  lvUVScale, const rw::math::vpu::Vector4  lvUVOffsets) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:434
		float32_t lfRangeNormaliser;

	}
}

void rw::math::fpu::Vector2Template<float>::X() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Y() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ShaderConstantTable::SetShaderConstantArrayData(uint32_t  luIndex, const rw::math::vpu::Vector3Plus *  lpVectors) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.h:476
		Vector4 * lpDest;

		// CgsShaderConstants.h:483
		uint32_t luNumEntries;

	}
}

void ShaderConstantTableElement::GetNumEntries() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ShaderConstantTable::FastNonOverlappedVectorMemcpy(Vector4 *  lpaTarget, const rw::math::vpu::Vector4 *  lpaSource, const uint32_t  luNumConstants) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.h:238
		uint32_t lnNumIterations;

	}
}

void CgsGraphics::Model::DoesStateExist(CgsGraphics::Model::State  leState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModel.h:345
		int32_t liStateClamped;

		// CgsModel.h:346
		int32_t liClampedStateExists;

	}
}

void CgsGraphics::Model::RenderZOnly(CgsGraphics::Model::State  leState, CgsGraphics::DispatchFrame *  lpDispatchFrame, const rw::math::vpu::Matrix44Affine &  lTransform, int32_t  liModelOnlyList, int32_t  liList, int32_t  liRequestedTechniqueIndex, bool  lbUseInstancing, uint8_t  lu8MeshExcludeBits) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::DetachedPartRenderEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::GetVector2_One() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Matrix44AffineFromXRotationAngle(const VecFloat  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:231
		VecFloat s;

		// matrix44affine_operation_platform_inline.h:231
		VecFloat c;

		// matrix44affine_operation_platform_inline.h:235
		const VecFloat zero;

		// matrix44affine_operation_platform_inline.h:236
		const VecFloat one;

		// matrix44affine_operation_platform_inline.h:238
		Vector3 lRow0;

		// matrix44affine_operation_platform_inline.h:239
		Vector3 lRow1;

		// matrix44affine_operation_platform_inline.h:240
		Vector3 lRow2;

		// matrix44affine_operation_platform_inline.h:241
		Vector3 lRow3;

	}
}

void rw::math::vpu::operator*=(const Vector3 &  v, const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::StreamedDeformationSpec::GetWheelSpec(int32_t  liWheel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::RandomSignedVecFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:517
		VecFloat lvResult;

	}
}

void CgsNumeric::Random::RandomVecFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:432
		uint32_t luOldestBufferIndex;

		// CgsRandom.h:434
		VecFloat lvResultPlusOne;

	}
}

void rw::math::vpu::Matrix44AffineFromScale(const rw::math::vpu::Vector3  scale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_inline.h:602
		VectorIntrinsicUnion::VectorIntrinsic row0;

		// matrix44affine_operation_inline.h:603
		VectorIntrinsicUnion::VectorIntrinsic row1;

		// matrix44affine_operation_inline.h:604
		VectorIntrinsicUnion::VectorIntrinsic row2;

		// matrix44affine_operation_inline.h:605
		VectorIntrinsicUnion::VectorIntrinsic row3;

	}
}

void BrnTraffic::TrafficEntityModule::RenderTrafficCar(CgsGraphics::DispatchFrame *  lpDispatchFrame, uint32_t  luEntityIdx, const rw::math::vpu::Vector3  lCameraPosition, const rw::math::vpu::Vector4  lFogScattering, const rw::math::vpu::Vector4  lFogColourPlusWhiteLevel, BrnBlobbyShadowManager::BrnBlobbyShadowBuffer *  lpBlobbyShadowRenderer, int32_t  liModelOnlyDisplayList, int32_t  liOpaqueList, int32_t  liTransparentList, BrnWorld::ShadowMap *  lpShadowMap, CgsGraphics::Model::State  lLOD, const rw::math::vpu::Vector4  lFrontLights, const rw::math::vpu::Vector4  lRearLights, int32_t *  lpiUpdatedNumDamagedVehiclesRendered) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:14885
		int32_t liModelId;

		// BrnTrafficEntityModule.cpp:14886
		uint32_t luAssetId;

		// BrnTrafficEntityModule.cpp:14887
		ResourcePtr<BrnTraffic::GraphicsStub> lpGraphicsStub;

		// BrnTrafficEntityModule.cpp:14888
		const GraphicsSpec * lpGraphicsSpec;

		// BrnTrafficEntityModule.cpp:14889
		ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> lpPhysicsSpec;

		// BrnTrafficEntityModule.cpp:14890
		const GraphicsSpec * lpWheelGraphicsSpec;

		// BrnTrafficEntityModule.cpp:14891
		Model * lpWheelModel;

		// BrnTrafficEntityModule.cpp:14892
		uint32_t luPartIdx;

		// BrnTrafficEntityModule.cpp:14893
		uint32_t luPartCount;

		// BrnTrafficEntityModule.cpp:14894
		uint8_t lu8Wheel;

		// BrnTrafficEntityModule.cpp:14895
		uint8_t lu8RenderDamageFlags;

		// BrnTrafficEntityModule.cpp:14896
		int32_t liTechnique;

		// BrnTrafficEntityModule.cpp:14897
		CgsGraphics::Model::State lWheelLOD;

		// BrnTrafficEntityModule.cpp:14898
		bool lbIsPhysical;

		// BrnTrafficEntityModule.cpp:14906
		const Vehicle * lpVehicle;

		// BrnTrafficEntityModule.cpp:14938
		Matrix44Affine lBodyTransform;

		// BrnTrafficEntityModule.cpp:14939
		Matrix44Affine lBodyRollTransform;

		// BrnTrafficEntityModule.cpp:14941
		uint32_t luVehicleType;

		// BrnTrafficEntityModule.cpp:14942
		const VehicleTypeRuntime * lpVehicleTypeRuntime;

		// BrnTrafficEntityModule.cpp:14944
		Vector4 lColour;

		// BrnTrafficEntityModule.cpp:14953
		TrafficPhysicsInfo * lpPhysicsInfo;

		// BrnTrafficEntityModule.cpp:15026
		bool lbUseZOnlyPath;

		CgsResource::ResourcePtr<BrnTraffic::GraphicsStub>::ResourcePtr(/* parameters */);
		CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::ResourcePtr(/* parameters */);
		CgsResource::BaseResourcePtr::Reset(/* parameters */);
		CgsResource::ResourceHandle::Construct(/* parameters */);
		GetVehicle(/* parameters */);
		Vehicle::GetVehicleType(/* parameters */);
		Vehicle::GetVehicleType(/* parameters */);
		rw::math::fpu::Max<int32_t>(/* parameters */);
		TrafficCarStreamer::NotifyAssetRenderedThisFrame(/* parameters */);
		TrafficCarStreamer::IsTrafficAssetLoaded(/* parameters */);
		~ResourcePtr(/* parameters */);
		~ResourcePtr(/* parameters */);
		CgsResource::BaseResourcePtr::~BaseResourcePtr(/* parameters */);
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
	CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator=(/* parameters */);
	GetVehicleTransform(/* parameters */);
	Vehicle::GetVehicleType(/* parameters */);
	GetVehicleTypeRuntime(/* parameters */);
	TrafficData::GetNumPaintColours(/* parameters */);
	VehicleTypeRuntime::PickPaintColourForVehicle(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	BrnMath::IntMin(/* parameters */);
	Vehicle::GetPitch(/* parameters */);
	rw::math::vpu::Vector4::GetX(/* parameters */);
	rw::math::vpu::RotateAroundXAxis(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	vec_cmpeq(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_and(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_madd(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	Vehicle::GetRoll(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::RotateAroundZAxis(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::GetVector4_Zero(/* parameters */);
	rw::math::fpu::GetVector2_Zero(/* parameters */);
	SetGlassFractureConstants(/* parameters */);
	rw::math::vpu::Vector4::operator=(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:15148
		const rw::math::vpu::Matrix44Affine *[128] lapDetatchedPartMatricesForRendering;

		{
			// BrnTrafficEntityModule.cpp:15153
			int32_t liDetachedPartEventIndex;

			{
				// BrnTrafficEntityModule.cpp:15155
				const DetachedPartRenderEvent * lpDetachedPart;

				CgsModule::BaseEventQueue<BrnTraffic::DetachedPartRenderEvent>::GetEvent(/* parameters */);
			}
		}
	}
	{
		// BrnTrafficEntityModule.cpp:15164
		Model * lpModel;

		CgsGraphics::Model::DoesStateExist(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:15169
			Matrix44Affine lPartMatrix;

			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
			CgsGraphics::Model::RenderZOnly(/* parameters */);
		}
	}
	{
		// BrnTrafficEntityModule.cpp:15252
		uint32_t luPart;

		{
			// BrnTrafficEntityModule.cpp:15254
			ShatteredGlassPart * lpPart;

			// BrnTrafficEntityModule.cpp:15257
			uint32_t luGlassIndex;

			// BrnTrafficEntityModule.cpp:15260
			uint8_t lu8PartDamageFlag;

			// BrnTrafficEntityModule.cpp:15263
			float32_t lfFractureAmount;

		}
	}
	CgsGraphics::Model::DoesStateExist(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:15310
		const int kiMaxWheelsPerCar;

		// BrnTrafficEntityModule.cpp:15312
		Matrix44Affine[4] laWheelTransforms;

		// BrnTrafficEntityModule.cpp:15313
		Matrix44Affine lWheelScaleMatrix;

		// BrnTrafficEntityModule.cpp:15314
		Vector4[4] laWheelInstancingStreamDataArray;

		// BrnTrafficEntityModule.cpp:15315
		Vector4 lvWheelBlur;

		// BrnTrafficEntityModule.cpp:15316
		VecFloat lvfMaxRoadNoiseAmplitude;

		// BrnTrafficEntityModule.cpp:15317
		VecFloat lvfWheelAngularVelocity;

		// BrnTrafficEntityModule.cpp:15318
		const rw::math::vpu::Matrix44Affine *[4] laWheelInstancingMatrixPointers;

		// BrnTrafficEntityModule.cpp:15319
		int liWheelInstancingCount;

		// BrnTrafficEntityModule.cpp:15320
		int liInstancingTechnique;

		Vehicle::GetSpeed(/* parameters */);
		rw::math::vpu::Vector4::GetX(/* parameters */);
		rw::math::vpu::GetVecFloat_One(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		rw::math::vpu::Vector4::SetX(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Vector4::SetZero(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:15342
			Matrix44Affine lRotationMatrix;

			// BrnTrafficEntityModule.cpp:15343
			Matrix44Affine lSteeringMatrix;

			// BrnTrafficEntityModule.cpp:15344
			Vector3 lHandlingSpaceToModelSpaceOffset;

			// BrnTrafficEntityModule.cpp:15345
			VecFloat lvfBiasedSpeed;

			// BrnTrafficEntityModule.cpp:15346
			VecFloat lvfWheelRotation;

			// BrnTrafficEntityModule.cpp:15347
			VecFloat lvfFrontWheelRotation;

			CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator->(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			{
			}
			Vehicle::GetSpeed(/* parameters */);
			VecFloat<VectorAxisX>(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			Vehicle::GetWheelRot(/* parameters */);
			rw::math::vpu::Clamp(/* parameters */);
			rw::math::vpu::operator*=(/* parameters */);
			rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
			VecFloat<VectorAxisW>(/* parameters */);
			Vehicle::GetSteering(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::GetVecFloat_NegativeOne(/* parameters */);
			VecFloat<VectorAxisZ>(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::Matrix44AffineFromYRotationAngle(/* parameters */);
			vec_and(/* parameters */);
			vec_add(/* parameters */);
			vec_and(/* parameters */);
			rw::math::vpu::Matrix44AffineFromXRotationAngle(/* parameters */);
			vec_cmpeq(/* parameters */);
			vec_nmsub(/* parameters */);
			vec_nmsub(/* parameters */);
			rw::math::vpu::GetVecFloat_One(/* parameters */);
			rw::math::vpu::Vector3::Vector3(/* parameters */);
			vec_madd(/* parameters */);
			rw::math::vpu::Matrix44AffineFromXRotationAngle(/* parameters */);
			{
			}
			vec_madd(/* parameters */);
			vec_sel(/* parameters */);
			vec_sel(/* parameters */);
			vec_add(/* parameters */);
			vec_add(/* parameters */);
			rw::math::vpu::Vector3::Vector3(/* parameters */);
			rw::math::vpu::Vector3::Vector3(/* parameters */);
			{
			}
			vec_cts(/* parameters */);
			vec_cts(/* parameters */);
			{
			}
			rw::math::vpu::Vector3::Vector3(/* parameters */);
			vec_sel(/* parameters */);
			rw::math::vpu::Vector3::Vector3(/* parameters */);
			vec_add(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			vec_ctf(/* parameters */);
			vec_ctf(/* parameters */);
			{
			}
			vec_and(/* parameters */);
			vec_and(/* parameters */);
			vec_add(/* parameters */);
			vec_cmpeq(/* parameters */);
			vec_cts(/* parameters */);
			vec_and(/* parameters */);
			vec_nmsub(/* parameters */);
			vec_and(/* parameters */);
			vec_and(/* parameters */);
			vec_and(/* parameters */);
			vec_cmpeq(/* parameters */);
			vec_and(/* parameters */);
			vec_cmpeq(/* parameters */);
			vec_cmpeq(/* parameters */);
			vec_ctf(/* parameters */);
			vec_and(/* parameters */);
			vec_nmsub(/* parameters */);
			vec_cmpeq(/* parameters */);
			vec_cmpeq(/* parameters */);
			vec_and(/* parameters */);
			vec_madd(/* parameters */);
			vec_cmpeq(/* parameters */);
			vec_add(/* parameters */);
			vec_madd(/* parameters */);
			vec_madd(/* parameters */);
			vec_madd(/* parameters */);
			vec_madd(/* parameters */);
			vec_madd(/* parameters */);
			vec_nmsub(/* parameters */);
			vec_and(/* parameters */);
			vec_and(/* parameters */);
			vec_and(/* parameters */);
			vec_and(/* parameters */);
			vec_cmpeq(/* parameters */);
			vec_madd(/* parameters */);
			vec_cmpeq(/* parameters */);
			vec_nmsub(/* parameters */);
			vec_cmpeq(/* parameters */);
			vec_madd(/* parameters */);
			vec_madd(/* parameters */);
			vec_cmpeq(/* parameters */);
			vec_madd(/* parameters */);
			rw::math::vpu::operator+=(/* parameters */);
			rw::math::vpu::operator*=(/* parameters */);
			vec_madd(/* parameters */);
			vec_madd(/* parameters */);
			vec_madd(/* parameters */);
			vec_madd(/* parameters */);
			vec_madd(/* parameters */);
			vec_sel(/* parameters */);
			vec_sel(/* parameters */);
			vec_sel(/* parameters */);
			vec_madd(/* parameters */);
			vec_sel(/* parameters */);
			vec_madd(/* parameters */);
			vec_madd(/* parameters */);
			vec_xor(/* parameters */);
			vec_sel(/* parameters */);
			vec_madd(/* parameters */);
			vec_xor(/* parameters */);
			vec_sel(/* parameters */);
			vec_madd(/* parameters */);
			rw::math::vpu::operator*=(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::Vector3::Vector3(/* parameters */);
			vec_xor(/* parameters */);
			vec_madd(/* parameters */);
			vec_sel(/* parameters */);
			vec_madd(/* parameters */);
			{
			}
			vec_xor(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
			rw::math::vpu::Vector3::Vector3(/* parameters */);
			rw::math::vpu::Vector3::Vector3(/* parameters */);
			vec_sel(/* parameters */);
			{
			}
			{
			}
			rw::math::vpu::operator+=(/* parameters */);
			rw::math::vpu::operator*=(/* parameters */);
			vec_sel(/* parameters */);
			rw::math::vpu::operator*=(/* parameters */);
			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
			rw::math::vpu::operator*=(/* parameters */);
			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
			vec_xor(/* parameters */);
			vec_sel(/* parameters */);
			vec_xor(/* parameters */);
			vec_sel(/* parameters */);
			rw::math::vpu::Vector3::Vector3(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::Vector3::Vector3(/* parameters */);
			rw::math::vpu::Vector3::Vector3(/* parameters */);
			{
			}
			{
			}
			rw::math::vpu::operator*=(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:15398
				Vector3 lvWheelPosition;

				// BrnTrafficEntityModule.cpp:15399
				VecFloat lvfRoadNoiseAmplitude;

				CgsNumeric::Random::RandomSignedVecFloat(/* parameters */);
				BrnPhysics::Deformation::StreamedDeformationSpec::GetWheelSpec(/* parameters */);
				CgsNumeric::Random::RandomUInt(/* parameters */);
				rw::math::vpu::GetVector3_YAxis(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator->(/* parameters */);
				rw::math::vpu::operator+(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::operator*=(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::operator+=(/* parameters */);
				{
				}
				BrnPhysics::Deformation::StreamedDeformationSpec::GetWheelSpec(/* parameters */);
				rw::math::vpu::Matrix44AffineFromScale(/* parameters */);
				rw::math::vpu::_asmSwizzleStore<VectorAxisZ, VectorAxisZ>(/* parameters */);
				rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
				rw::math::vpu::TransformVector(/* parameters */);
				rw::math::vpu::operator+=(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
			}
			rw::math::vpu::Matrix44Affine::WAxis(/* parameters */);
			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
			CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator->(/* parameters */);
		}
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:15205
		Model * lpModel;

		CgsGraphics::Model::DoesStateExist(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:15210
			Matrix44Affine lPartMatrix;

			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		}
	}
	{
		// BrnTrafficEntityModule.cpp:14964
		Vector4 lvFwdLength_RearLength_BackAxle_FrontAxle;

		rw::math::vpu::operator< <VectorAxisX>(/* parameters */);
	}
	rw::math::vpu::operator+<VectorAxisZ, VectorAxisZ>(/* parameters */);
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisZ>(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:14982
		Matrix44Affine lShadowTransform;

		// BrnTrafficEntityModule.cpp:14984
		Vector3 lvWorldNormal;

		// BrnTrafficEntityModule.cpp:14985
		VecFloat lfHeightOffGround;

		rw::math::vpu::Cross(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		VecFloat<VectorAxisW>(/* parameters */);
		rw::math::vpu::GetVector3_YAxis(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Cross(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:14998
		Vector3 lDistanceDiffVector;

		// BrnTrafficEntityModule.cpp:14999
		VecFloat lDistanceDiffSq;

		// BrnTrafficEntityModule.cpp:15000
		VecFloat lDistanceDiff;

		// BrnTrafficEntityModule.cpp:15001
		Vector4 lPerVehicleData;

		// BrnTrafficEntityModule.cpp:15002
		VecFloat lClampedRange;

		// BrnTrafficEntityModule.cpp:15003
		VecFloat lFogAmount;

		// BrnTrafficEntityModule.cpp:15004
		VecFloat lOneMinusFogAmount;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Sqrt(/* parameters */);
		rw::math::vpu::Pow(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		std(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpgt(/* parameters */);
		vec_sub(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		vec_madd(/* parameters */);
		vec_sr(/* parameters */);
		vec_add(/* parameters */);
		std(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		VecFloat<VectorAxisZ>(/* parameters */);
		vec_sra(/* parameters */);
		vec_sel(/* parameters */);
		vec_andc(/* parameters */);
		vec_ctu(/* parameters */);
		rw::math::vpu::Vector4::SetW(/* parameters */);
		vec_cmpgt(/* parameters */);
		rw::math::vpu::operator*<VectorAxisW>(/* parameters */);
		vec_cmpgt(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		vec_andc(/* parameters */);
		vec_cmpgt(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_sel(/* parameters */);
		vec_and(/* parameters */);
		vec_add(/* parameters */);
		vec_sub(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
		vec_add(/* parameters */);
		vec_ctf(/* parameters */);
		std(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_add(/* parameters */);
		vec_madd(/* parameters */);
		vec_add(/* parameters */);
		vec_madd(/* parameters */);
		vec_cmpgt(/* parameters */);
		vec_add(/* parameters */);
		vec_cts(/* parameters */);
		vec_ctf(/* parameters */);
		vec_sub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:15476
		int liIndex;

		{
			// BrnTrafficEntityModule.cpp:15478
			Matrix44Affine lWheelMatrix;

			rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
			rw::math::vpu::Vector4::Vector4(/* parameters */);
		}
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator->(/* parameters */);
	BrnPhysics::Deformation::StreamedDeformationSpec::GetWheelSpec(/* parameters */);
	{
	}
	rw::math::vpu::Matrix44AffineFromScale(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:15078
		Model * lpModel;

		CgsGraphics::Model::DoesStateExist(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	rw::math::fpu::GetVector2_Zero(/* parameters */);
	SetGlassFractureConstants(/* parameters */);
	rw::math::vpu::GetVector4_Zero(/* parameters */);
	ShaderConstantTable::UpdateShaderChangeTableAndGetConstantDestination(/* parameters */);
	rw::math::vpu::Vector4::operator=(/* parameters */);
	ShaderConstantTable::SetShaderConstantData(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	ShaderConstantTable::SetShaderConstantData(/* parameters */);
	ShaderConstantTable::UpdateShaderChangeTableAndGetConstantDestination(/* parameters */);
	rw::math::vpu::Vector4::operator=(/* parameters */);
	ShaderConstantTable::SetShaderConstantArrayData(/* parameters */);
	ShaderConstantTable::UpdateShaderChangeTableAndGetConstantDestination(/* parameters */);
	ShaderConstantTableElement::GetNumEntries(/* parameters */);
	ShaderConstantTable::FastNonOverlappedVectorMemcpy(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:15082
		Matrix44Affine lPartMatrix;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		CgsGraphics::Model::RenderZOnly(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Mult(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:15102
		Model * lpModel;

		CgsGraphics::Model::DoesStateExist(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:15106
		Matrix44Affine lPartMatrix;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Mult(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:15274
		Matrix44Affine lPartMatrix;

		rw::math::fpu::GetVector2_One(/* parameters */);
		SetGlassFractureConstants(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		ShaderConstantTable::SetShaderConstantData(/* parameters */);
		ShaderConstantTable::UpdateShaderChangeTableAndGetConstantDestination(/* parameters */);
		rw::math::vpu::Vector4::operator=(/* parameters */);
		ShaderConstantTable::SetShaderConstantData(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		ShaderConstantTable::SetShaderConstantData(/* parameters */);
		ShaderConstantTable::UpdateShaderChangeTableAndGetConstantDestination(/* parameters */);
		rw::math::vpu::Vector4::operator=(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
}

extern Camera & operator=(const const Camera &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern CameraEffects & operator=(const const CameraEffects &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnTraffic::Fuzzy::FuzzyBehaviourLogic::DEBUGSetLastCameraPos(const rw::math::vpu::Vector3  lPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::VehicleRenderInfo,64u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::InputBuffer_Dispatch::GetDispatchFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:474
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_Dispatch::GetShadowMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:486
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_Dispatch::GetBlobbyShadowBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:480
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_Dispatch::GetCoronaSubmissionInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:483
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnTraffic::VehicleRenderInfo,64u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::VehicleRenderInfo,64u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::GenerateDispatchLists(const InputBuffer_Dispatch *  lpInput, const const Array<BrnTraffic::VehicleRenderInfo,64u> &  laTrafficRenderInfos, const rw::math::vpu::Vector4  lFogScattering, const rw::math::vpu::Vector4  lFogColourPlusWhiteLevel, const rw::math::vpu::Vector3  lCameraPosition, const rw::math::vpu::Vector3  lCameraDirection, int32_t  liModelOnlyDisplayList, int32_t  liOpaqueList, int32_t  liTransparentList, const const Camera &  lBrnCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:13890
		int32_t liVisibleEntityCount;

		// BrnTrafficEntityModule.cpp:13892
		CgsGraphics::DispatchFrame * lpDispatchFrame;

		// BrnTrafficEntityModule.cpp:13893
		BrnWorld::ShadowMap * lpShadowMap;

		// BrnTrafficEntityModule.cpp:13894
		Vector4[64] laFrontLights;

		// BrnTrafficEntityModule.cpp:13895
		Vector4[64] laRearLights;

		// BrnTrafficEntityModule.cpp:13900
		BrnBlobbyShadowManager::BrnBlobbyShadowBuffer * lpBlobbyShadowRenderer;

		// BrnTrafficEntityModule.cpp:13906
		BrnCoronaManager::BrnSubmissionInterface * lpCoronaSubmissionInterface;

		// BrnTrafficEntityModule.cpp:13911
		const rw::math::vpu::Vector4 lZero;

		// BrnTrafficEntityModule.cpp:13940
		int32_t liNumDamagedVehiclesRendered;

	}
	operator=(/* parameters */);
	operator=(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	BrnDirector::HookNameStringWrapper::operator=(/* parameters */);
	BrnDirector::HookNameStringWrapper::Set(/* parameters */);
	operator=(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsContainers::Array<BrnTraffic::VehicleRenderInfo,64u>::GetLength(/* parameters */);
	BrnTrafficIO::InputBuffer_Dispatch::GetDispatchFrame(/* parameters */);
	BrnTrafficIO::InputBuffer_Dispatch::GetShadowMap(/* parameters */);
	BrnTrafficIO::InputBuffer_Dispatch::GetBlobbyShadowBuffer(/* parameters */);
	BrnTrafficIO::InputBuffer_Dispatch::GetCoronaSubmissionInterface(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:13912
		int32_t liEntity;

	}
	rw::math::vpu::GetVector4_Zero(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:13941
		int32_t liEntityIdx;

		{
			// BrnTrafficEntityModule.cpp:13943
			const const VehicleRenderInfo & lRenderInfo;

			// BrnTrafficEntityModule.cpp:13945
			const Vehicle * lpVehicle;

			CgsContainers::Array<BrnTraffic::VehicleRenderInfo,64u>::operator[](/* parameters */);
			GetVehicle(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	{
		// BrnTrafficEntityModule.cpp:13922
		int32_t liEntityIdx;

		CgsContainers::Array<BrnTraffic::VehicleRenderInfo,64u>::operator[](/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

extern void CrashingThingData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::CrashingThingData,168u>::Append(const const CrashingThingData &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::UpdateParams_BuildListOfCrashingThings(Array<BrnTraffic::CrashingThingData,168u> *  lpOutCurrentCrashingThings, const InputBuffer_PostPhysics *  lpInput, const const FastBitArray<601> &  lVehicles_Alive_And_Physical) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:10050
		CrashingThingData lCrashingThingData;

		// BrnTrafficEntityModule.cpp:10051
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnTrafficEntityModule.cpp:10069
		Iterator lItVehicle;

	}
	BrnTrafficIO::InputBuffer_PostPhysics::GetActiveRaceCarOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	CgsContainers::FastBitArray<601>::Begin(/* parameters */);
	CgsContainers::FastBitArray<601>::Iterator::Iterator(/* parameters */);
	CgsContainers::FastBitArray<601>::Iterator::operator!=(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:10075
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:10076
		const Vehicle * lpTargetVehicle;

		// BrnTrafficEntityModule.cpp:10080
		bool lbAddToList;

		Vehicle::IsCrashing(/* parameters */);
		MakeTrafficEntityId(/* parameters */);
		CgsContainers::Array<BrnTraffic::CrashingThingData,168u>::Append(/* parameters */);
	}
	CgsContainers::FastBitArray<601>::Iterator::GetIndex(/* parameters */);
	GetVehicle(/* parameters */);
	NeedToTakeActionAgainstJunctionFUP(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:10090
		Vector3 lVehicleToCentre;

		// BrnTrafficEntityModule.cpp:10091
		VecFloat lfDistanceFromCentreSq;

	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator<=(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:10095
		const TrafficPhysicsInfo * lpPhysInfo;

	}
	operator++(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:10140
		uint32_t luIndex;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnTrafficIO::InputBuffer_PostPhysics::GetActiveRaceCarOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:10120
		const RaceCarState * lpRaceCarState;

		BrnTrafficIO::InputBuffer_PostPhysics::GetActiveRaceCarOutputInterface(/* parameters */);
		CgsSceneManager::EntityId::Set(/* parameters */);
		CgsContainers::Array<BrnTraffic::CrashingThingData,168u>::Append(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:10143
		ShowtimeVehicleInfo * lpShowtimeInfo;

		MakeTrafficEntityId(/* parameters */);
		CgsContainers::Array<BrnTraffic::CrashingThingData,168u>::Append(/* parameters */);
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
}

void CgsContainers::Array<BrnTraffic::CrashingThingData,168u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::CrashingThingData,168u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Param::UpdatePreUpdateLocation() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Param::NeedsNewPlan() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateParams_CalcDesiredSpeed(uint32_t  luParam, const Section *  lpSection, const BrnTraffic::Hull *  lpHull, const const FastBitArray<601> &  lVehicles_Alive_And_Physical) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:10929
		Param * lpParam;

		// BrnTrafficEntityModule.cpp:10935
		float32_t lfAcceleration;

		// BrnTrafficEntityModule.cpp:10938
		float32_t lfOldSpeed;

		// BrnTrafficEntityModule.cpp:10940
		float32_t lfNewSpeed;

	}
}

void BrnTraffic::TweakValues::GetMinSpeedForCutoff() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Param::SetBraking(bool  lbBraking) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateParams_TryAvoidCrashing(uint32_t  luParam, const Array<BrnTraffic::CrashingThingData,168u> *  lpCurrentCrashingThings) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:10377
		uint32_t luFreePhysics;

		// BrnTrafficEntityModule.cpp:10383
		Param * lpParam;

		// BrnTrafficEntityModule.cpp:10384
		const ParamTransform * lpParamTransform;

		// BrnTrafficEntityModule.cpp:10387
		uint32_t luCrashingThing;

		// BrnTrafficEntityModule.cpp:10388
		EntityId lParamEntityId;

		{
			// BrnTrafficEntityModule.cpp:10391
			Vector3 lCrasherPos;

		}
	}
}

void CgsContainers::Array<uint16_t,1u>::Contains(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,1u>::FindFirstInstanceOf(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:474
		uint32_t luElement;

	}
}

void BrnTraffic::TrafficEntityModule::UpdateParams_TryToReinsertParam(uint32_t  luParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:10434
		uint32_t luHull;

		// BrnTrafficEntityModule.cpp:10435
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficEntityModule.cpp:10436
		uint32_t luSection;

		// BrnTrafficEntityModule.cpp:10437
		const Section * lpSection;

		// BrnTrafficEntityModule.cpp:10438
		float32_t lfParamAlong;

		// BrnTrafficEntityModule.cpp:10439
		uint32_t luSegmentAlong;

		// BrnTrafficEntityModule.cpp:10440
		bool lbFound;

		// BrnTrafficEntityModule.cpp:10442
		Param * lpParam;

		// BrnTrafficEntityModule.cpp:10443
		Vector3 lVehiclePos;

		// BrnTrafficEntityModule.cpp:10444
		Vector3 lVehicleDir;

		{
			// BrnTrafficEntityModule.cpp:10470
			Vector3 lParamPos;

			// BrnTrafficEntityModule.cpp:10471
			Vector3 lParamDir;

			// BrnTrafficEntityModule.cpp:10472
			Vector3 lParamRight;

			// BrnTrafficEntityModule.cpp:10479
			ParamTransform * lpTransform;

			// BrnTrafficEntityModule.cpp:10483
			Vehicle * lpVehicle;

		}
	}
}

void BrnTraffic::Vehicle::ResetPhysicalTime(float32_t  lfNewTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateParams(const InputBuffer_PostPhysics *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:9909
		FastBitArray<601> lVehicles_Alive_And_Physical;

		// BrnTrafficEntityModule.cpp:9913
		Array<BrnTraffic::CrashingThingData,168u> lCurrentCrashingThings;

		// BrnTrafficEntityModule.cpp:9917
		uint32_t luParam;

		// BrnTrafficEntityModule.cpp:9920
		uint32_t luMaxLaneChangeDiceRoll;

	}
	CgsContainers::FastBitArray<601>::SetAnd(/* parameters */);
	CgsContainers::Array<BrnTraffic::CrashingThingData,168u>::Array(/* parameters */);
	CgsContainers::Array<BrnTraffic::CrashingThingData,168u>::Construct(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:9925
		uintptr_t luAddress;

	}
	{
		// BrnTrafficEntityModule.cpp:9932
		Param * lpParam;

		// BrnTrafficEntityModule.cpp:9959
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficEntityModule.cpp:9960
		const Section * lpSection;

		// BrnTrafficEntityModule.cpp:9963
		uint32_t luOriginalSection;

	}
	Param::UpdatePreUpdateLocation(/* parameters */);
	Param::NeedsNewPlan(/* parameters */);
	UpdateParams_CalcDesiredSpeed(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	Param::SetBraking(/* parameters */);
	NeedToTakeActionAgainstJunctionFUP(/* parameters */);
	ShouldBeHollywoodAction(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:10000
		uintptr_t luAddress;

	}
	CgsContainers::Array<uint16_t,1u>::Contains(/* parameters */);
	UpdateParams_TryToReinsertParam(/* parameters */);
	Param::PushHistory(/* parameters */);
	CgsContainers::Array<uint16_t,1u>::Clear(/* parameters */);
	UpdateParams_TryAvoidCrashing(/* parameters */);
	Param::SetBraking(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	IsHullActive(/* parameters */);
	{
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		GetParamTransform(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		ParamTransform::Initialise(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
		Vehicle::ResetPhysicalTime(/* parameters */);
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

void BrnTraffic::TrafficEntityModule::UpdateDecisionFrame(const InputBuffer_PostPhysics *  lpInput, OutputBuffer_PostPhysics *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:7050
		Set<uint16_t,72u> lNewActiveHulls;

		// BrnTrafficEntityModule.cpp:7051
		Set<uint16_t,72u> lOldActiveHulls;

		IsDecisionFrame(/* parameters */);
	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	BrnTrafficIO::InputBuffer_PostPhysics::GetActiveRaceCarOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
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

void BrnTraffic::TrafficEntityModule::ProcessContactPoint(const TrafficContact *  lpContact, const const EntityId &  lEntityId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:6497
		Vector3 lPointOnA;

		// BrnTrafficEntityModule.cpp:6498
		Vector3 lPointOnB;

		// BrnTrafficEntityModule.cpp:6499
		Vector3 lNormal;

		// BrnTrafficEntityModule.cpp:6516
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:6517
		const Vehicle * lpVehicle;

		// BrnTrafficEntityModule.cpp:6528
		TrafficPhysicsInfo * lpPhysInfo;

		// BrnTrafficEntityModule.cpp:6532
		const VehicleTypeRuntime * lpVehicleTypeRuntime;

		// BrnTrafficEntityModule.cpp:6535
		Matrix44Affine lVehicleTransform;

		// BrnTrafficEntityModule.cpp:6536
		Vector3 lVehicleHalfSize;

		// BrnTrafficEntityModule.cpp:6537
		Vector3 lVehiclePosition;

		// BrnTrafficEntityModule.cpp:6538
		Vector3 lVehicleDir;

		// BrnTrafficEntityModule.cpp:6539
		Vector3 lVehicleRight;

		// BrnTrafficEntityModule.cpp:6541
		Vector3 lPointInLocalSpace;

		// BrnTrafficEntityModule.cpp:6542
		VecFloat lfDirDot;

		// BrnTrafficEntityModule.cpp:6543
		VecFloat lfRightDot;

	}
	CgsSceneManager::EntityId::GetOwner(/* parameters */);
	GetVehicle(/* parameters */);
	Vehicle::IsPhysical(/* parameters */);
	Vehicle::GetVehicleType(/* parameters */);
	GetVehicleTypeRuntime(/* parameters */);
	GetVehicleTransform(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator<=(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator<=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::GetContactSpyInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:365
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::ContactSpy::ContactSpyInterface::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyInterface::GetTrafficContacts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyData::GetTrafficContacts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::DEBUG_RenderContactPoint(const TrafficContact *  lpContact) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:6578
		DebugInterface lDebugInterface;

		// BrnTrafficEntityModule.cpp:6579
		const DebugRender & lDebugRender;

		// BrnTrafficEntityModule.cpp:6581
		RGBA lArrowColour;

	}
}

void rw::RGBA::RGBA() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::BaseContact::IsContactWithWorld() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::TrafficContact,400>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::HandleContactPoints(const InputBuffer_PostPhysics *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:6428
		uint32_t luPhysInfoBit;

	}
	{
		// BrnTrafficEntityModule.cpp:6433
		TrafficPhysicsInfo * lpPhysInfo;

	}
	{
		// BrnTrafficEntityModule.cpp:6449
		const InputBuffer_PostPhysics::ContactSpyInterface * lpContactSpyInterface;

		BrnTrafficIO::InputBuffer_PostPhysics::GetContactSpyInterface(/* parameters */);
		BrnPhysics::ContactSpy::ContactSpyInterface::IsValid(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:6454
			const ContactSpyData::TrafficContactQueue * lpTrafficContacts;

			// BrnTrafficEntityModule.cpp:6457
			int32_t liIndex;

			BrnPhysics::ContactSpy::ContactSpyInterface::GetTrafficContacts(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:6461
				const TrafficContact * lpContact;

				CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::GetEvent(/* parameters */);
				DEBUG_RenderContactPoint(/* parameters */);
			}
		}
	}
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnPhysics::Vehicle::VehicleManagerOutputInterface::GetCrashedTrafficEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManagerOutputInterface::GetSlammedTrafficEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleOutputInterface::GetTrafficStateQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Negate(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:298
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:299
			VectorIntrinsicUnion::VectorIntrinsic signMask;

		}
	}
}

void BrnTraffic::Vehicle::SetFrozen(bool  lbFrozen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::SetLinearVelocity(const rw::math::vpu::Vector3  lLinearVelocity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::SetSpeed(const VecFloat  lfValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManagerOutputInterface::GetRaceCarCrashEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::HandleExternalResponses(const InputBuffer_PostPhysics *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:6113
		int32_t liEvent;

		// BrnTrafficEntityModule.cpp:6116
		const VehicleManagerOutputInterface::TrafficCrashedEventQueue * lpCrashedTrafficEvents;

		// BrnTrafficEntityModule.cpp:6229
		const VehicleManagerOutputInterface::TrafficSlammedEventQueue * lpSlammedTrafficEvents;

		// BrnTrafficEntityModule.cpp:6286
		const VehicleOutputInterface::PhysicalTrafficStateQueue * lpPhysicalTrafficStateQueue;

		// BrnTrafficEntityModule.cpp:6352
		const VehicleManagerOutputInterface::RaceCarCrashEventQueue * lpCrashedRaceCarEvents;

	}
	BrnTrafficIO::InputBuffer_PostPhysics::GetVehicleManagerOutputInterface(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:6119
		const TrafficCrashedEvent * lpEvent;

		// BrnTrafficEntityModule.cpp:6120
		VolumeInstanceId lVolumeInstanceId;

		// BrnTrafficEntityModule.cpp:6121
		EntityId lCrasherEntityId;

		// BrnTrafficEntityModule.cpp:6128
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:6131
		Vehicle * lpVehicle;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::GetEvent(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:6126
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		GetVehicle(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:6123
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:6167
		Vehicle * lpCab;

		// BrnTrafficEntityModule.cpp:6168
		uint32_t luTrailer;

		// BrnTrafficEntityModule.cpp:6170
		Vehicle * lpTrailer;

		GetVehicle(/* parameters */);
		Vehicle::GetCabIndex(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:6171
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			Vehicle::GetCabIndex(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		Vehicle::IsCrashing(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:6198
		Vehicle * lpTrailer;

		// BrnTrafficEntityModule.cpp:6199
		uint32_t luCab;

		// BrnTrafficEntityModule.cpp:6201
		Vehicle * lpCab;

		Vehicle::IsCrashing(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:6129
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnTrafficIO::InputBuffer_PostPhysics::GetVehicleManagerOutputInterface(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:6232
		const TrafficSlammedEvent * lpEvent;

		// BrnTrafficEntityModule.cpp:6233
		EntityId lTrafficId;

		// BrnTrafficEntityModule.cpp:6234
		EntityId lEntityThatSlammedIt;

		// BrnTrafficEntityModule.cpp:6235
		BrnPhysics::Vehicle::eCrashTrafficType leCrashTrafficType;

		// BrnTrafficEntityModule.cpp:6242
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:6249
		Vehicle * lpVehicle;

	}
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::GetEvent(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:6240
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetVehicle(/* parameters */);
	BrnTrafficIO::InputBuffer_PostPhysics::GetVehicleOutputInterface(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:6289
		const PhysicalTrafficState * lpEvent;

		// BrnTrafficEntityModule.cpp:6291
		EntityId lEntityId;

		// BrnTrafficEntityModule.cpp:6294
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:6297
		Vehicle * lpVehicle;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetEvent(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:6292
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// BrnTrafficEntityModule.cpp:6303
			TrafficPhysicsInfo * lpPhysicsInfo;

			// BrnTrafficEntityModule.cpp:6306
			const VehicleTypeRuntime * lpVehicleTypeRuntime;

			// BrnTrafficEntityModule.cpp:6307
			Matrix44Affine lTransform;

			// BrnTrafficEntityModule.cpp:6308
			Matrix44Affine lInvTranslate;

			Vehicle::GetVehicleType(/* parameters */);
			GetVehicleTypeRuntime(/* parameters */);
			rw::math::vpu::Matrix44AffineFromTranslation(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			rw::math::vpu::Negate(/* parameters */);
			rw::math::vpu::_asmSwizzleStore<VectorAxisZ, VectorAxisZ>(/* parameters */);
			rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
			SetVehicleTransform(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:6331
				Vector3 lPositionOffset;

				// BrnTrafficEntityModule.cpp:6332
				VecFloat lHeightAboveRoad;

				VecFloat<VectorAxisW>(/* parameters */);
			}
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
			rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
			Vehicle::SetFrozen(/* parameters */);
			Vehicle::SetLinearVelocity(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			Vehicle::SetSpeed(/* parameters */);
			rw::math::vpu::Dot(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			rw::math::vpu::Vector4::SetX(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			Vehicle::SetSteering(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			rw::math::vpu::Vector4::SetZ(/* parameters */);
		}
	}
	BrnTrafficIO::InputBuffer_PostPhysics::GetVehicleManagerOutputInterface(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:6355
		const RaceCarCrashEvent * lpEvent;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetEvent(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:6243
		CgsDev::StrStream lStrStream;

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
		// BrnTrafficEntityModule.cpp:6295
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:6301
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetVehicle(/* parameters */);
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
	{
		// BrnTrafficEntityModule.cpp:6176
		TrafficCrashInfo lCrashInfo;

		MakeTrafficEntityId(/* parameters */);
		CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::Append(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:6208
		TrafficCrashInfo lCrashInfo;

		Vehicle::GetTrailerIndex(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:6206
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			Vehicle::GetTrailerIndex(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		MakeTrafficEntityId(/* parameters */);
		CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::Append(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	MakeTrafficEntityId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	MakeTrafficEntityId(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:6220
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:6188
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::Deformation::DeformationOutputInterfaceForEntityModules::GetNumSkinnedModels() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationOutputInterfaceForEntityModules::GetSkinData(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator>=<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:691
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:693
		bool ret;

	}
}

void rw::math::vpu::operator>=<VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:691
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:693
		bool ret;

	}
}

void BrnPhysics::Deformation::DeformationOutputInterfaceForEntityModules::GetBaseIDs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationOutputInterfaceForEntityModules::GetWheelPhysicsStates() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationOutputInterfaceForEntityModules::GetLocatorData(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationOutputInterfaceForEntityModules::GetDetachedPartRenderQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DetachedPartRenderEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationOutputInterfaceForEntityModules::GetSmashOrCrackEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GlassSmashOrCrackEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern GlassSmashOrCrackEvent & operator=(const const GlassSmashOrCrackEvent &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::ProcessDeformationData(const DeformationOutputInterfaceForEntityModules *  lpDefInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:3169
		int32_t liNumModels;

		// BrnTrafficEntityModule.cpp:3277
		int32_t liNumParts;

		// BrnTrafficEntityModule.cpp:3278
		DetachedPartRenderEvent lEvent;

		// BrnTrafficEntityModule.cpp:3298
		int32_t liNumGlassEvents;

		// BrnTrafficEntityModule.cpp:3299
		GlassSmashOrCrackEvent lGlassEvent;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:3170
		int32_t liIndex;

	}
	BrnPhysics::Deformation::DeformationOutputInterfaceForEntityModules::GetNumSkinnedModels(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:3172
		const SkinData * lpSkinData;

		// BrnTrafficEntityModule.cpp:3248
		const VehicleLocatorOutput * lpLocatorOutput;

		// BrnTrafficEntityModule.cpp:3249
		const VehicleLocatorData * lpLocatorData;

		BrnPhysics::Deformation::DeformationOutputInterfaceForEntityModules::GetSkinData(/* parameters */);
		CgsSceneManager::EntityId::GetOwner(/* parameters */);
		BrnPhysics::Deformation::DeformationOutputInterfaceForEntityModules::GetLocatorData(/* parameters */);
		CgsSceneManager::EntityId::GetOwner(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:3176
		uint32_t luTrafficIndex;

		// BrnTrafficEntityModule.cpp:3177
		Vehicle * lpVehicle;

		GetVehicle(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:3181
			int8_t liPhysicalIndex;

			// BrnTrafficEntityModule.cpp:3185
			TrafficPhysicsInfo * lpPhysInfo;

			// BrnTrafficEntityModule.cpp:3189
			Vector3 lMaxOffset;

			Vehicle::GetPhysicalPartsIndex(/* parameters */);
			CgsContainers::BitArray<25u>::IsBitSet(/* parameters */);
			rw::math::vpu::GetVector3_Zero(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:3190
				int32_t liVecLoop;

				rw::math::vpu::Max(/* parameters */);
			}
			{
				// BrnTrafficEntityModule.cpp:3201
				const VehicleTypeRuntime * lpVehicleRuntime;

				// BrnTrafficEntityModule.cpp:3204
				Vector3 lVehicleBBox;

				// BrnTrafficEntityModule.cpp:3205
				VecFloat lVehicleMaxWidthOffset;

				// BrnTrafficEntityModule.cpp:3206
				VecFloat lVehicleMaxLengthOffset;

				GetVehicleTypeRuntime(/* parameters */);
				rw::math::vpu::GetVecFloat_Two(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::operator>=<VectorAxisX>(/* parameters */);
				rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
				rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
			}
		}
	}
	{
		// BrnTrafficEntityModule.cpp:3220
		uint32_t luTrafficIndex;

		GetVehicle(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:3223
			int8_t liPhysicalIndex;

			GetVehicle(/* parameters */);
			Vehicle::GetPhysicalPartsIndex(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:3227
				TrafficPhysicsInfo * lpPhysInfo;

				{
					// BrnTrafficEntityModule.cpp:3230
					int32_t liWheelIndex;

					CgsContainers::BitArray<25u>::IsBitSet(/* parameters */);
				}
				rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
				{
					CgsDev::StrStream::StrStream(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
				}
			}
		}
	}
	{
		// BrnTrafficEntityModule.cpp:3253
		uint32_t luTrafficIndex;

		GetVehicle(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:3256
			int8_t liPhysicalIndex;

			GetVehicle(/* parameters */);
			Vehicle::GetPhysicalPartsIndex(/* parameters */);
			CgsContainers::BitArray<25u>::IsBitSet(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:3261
				int32_t liLightLoop;

			}
		}
	}
	{
		// BrnTrafficEntityModule.cpp:3271
		uint32_t luPhysLoop;

		CgsModule::BaseEventQueue<BrnTraffic::DetachedPartRenderEvent>::Clear(/* parameters */);
	}
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::GetLength(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:3279
		int32_t liPartLoop;

		CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::GetEvent(/* parameters */);
		operator=(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:3284
			uint32_t luIndex;

			// BrnTrafficEntityModule.cpp:3285
			Vehicle * lpVehicle;

			GetVehicle(/* parameters */);
			{
				// BrnTrafficEntityModule.cpp:3288
				int32_t liPhysicalIndex;

				// BrnTrafficEntityModule.cpp:3289
				DetachedPartRenderEvent lRenderEvent;

				Vehicle::GetPhysicalPartsIndex(/* parameters */);
				CgsModule::BaseEventQueue<BrnTraffic::DetachedPartRenderEvent>::AddEvent(/* parameters */);
			}
		}
	}
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::GetLength(/* parameters */);
	GlassSmashOrCrackEvent(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:3301
		int32_t liGlassLoop;

	}
	{
		// BrnTrafficEntityModule.cpp:3315
		uint32_t luIndex;

		// BrnTrafficEntityModule.cpp:3316
		Vehicle * lpVehicle;

		CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::GetEvent(/* parameters */);
		operator=(/* parameters */);
	}
	GetVehicle(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:3321
		uint32_t luOffset;

		// BrnTrafficEntityModule.cpp:3325
		TrafficPhysicsInfo * lpPhysicsInfo;

		{
			// BrnTrafficEntityModule.cpp:3349
			uint8_t lu8GlassPaneOffset;

		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnTraffic::DetachedPartRenderEvent>::GetMaxLength(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:3329
		float32_t lfPreviousCrackAmount;

		// BrnTrafficEntityModule.cpp:3330
		float32_t lfNewCrackAmount;

		// BrnTrafficEntityModule.cpp:3337
		uint8_t lu8GlassPaneOffset;

		rw::math::fpu::Max<float>(/* parameters */);
		rw::math::fpu::Min<float>(/* parameters */);
	}
	rw::math::vpu::operator>=<VectorAxisZ>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:3182
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:3257
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnPhysics::Vehicle::VehicleManagerOutputInterface::GetRemovedTrafficEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::GetDeformationOutputInterfaceForEntityModules() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:361
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::CrashIO::TrafficInputInterface::SetRenderingBits(const TrafficInputInterface::TrafficVehicleBits *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::TrafficInputInterface::SetFarFromCameraBits(const TrafficInputInterface::TrafficVehicleBits *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::TrafficInputInterface::SetPhysicalBits(const TrafficInputInterface::TrafficVehicleBits *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleManagerOutputInterface::GetTrafficTypeRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetTrafficTypeResponseQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:406
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::TrafficEntityModule::PostPhysicsUpdate(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const InputBuffer_PostPhysics *  lpInput, OutputBuffer_PostPhysics *  lpOutput, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:2791
		bool lbSimPaused;

		// BrnTrafficEntityModule.cpp:3132
		PerfMonCpuMonitorData lTempUpdateParams;

	}
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	TrafficCarStreamer::AreAllAssetsLoaded(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:2810
		StreamingCompleteEvent lEvent;

		BrnTrafficIO::OutputBuffer_PostPhysics::GetGameEventQueue(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	BrnTrafficIO::InputBuffer_PostPhysics::GetVehicleManagerOutputInterface(/* parameters */);
	BrnTrafficIO::OutputBuffer_PostPhysics::GetTrafficTypeResponseQueue(/* parameters */);
	BrnPhysics::Vehicle::VehicleManagerOutputInterface::GetTrafficTypeRequestQueue(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	BrnTrafficIO::InputBuffer_PostPhysics::GetVehicleManagerOutputInterface(/* parameters */);
	BrnTrafficIO::InputBuffer_PostPhysics::GetDeformationOutputInterfaceForEntityModules(/* parameters */);
	IsPaused(/* parameters */);
	BrnWorld::CrashIO::TrafficInputInterface::SetRenderingBits(/* parameters */);
	BrnWorld::CrashIO::TrafficInputInterface::SetFarFromCameraBits(/* parameters */);
	BrnWorld::CrashIO::TrafficInputInterface::SetPhysicalBits(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:3009
		uint32_t luParam;

		// BrnTrafficEntityModule.cpp:3019
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:3029
		uint32_t luStaticVehicle;

		BrnTrafficIO::InputBuffer_PostPhysics::GetVehicleManagerOutputInterface(/* parameters */);
		BrnTrafficIO::InputBuffer_PostPhysics::GetDeformationOutputInterfaceForEntityModules(/* parameters */);
	}
	IsDecisionFrame(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:2922
		Set<uint16_t,72u> lNewActiveHulls;

		// BrnTrafficEntityModule.cpp:2923
		Set<uint16_t,72u> lOldActiveHulls;

		CgsContainers::Set<uint16_t,72u>::GetLength(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	TrafficCarStreamer::AreAllAssetsLoaded(/* parameters */);
	TrafficCarStreamer::AreAllAssetsLoaded(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	{
		// BrnTrafficEntityModule.cpp:2977
		StreamingCompleteEvent lEvent;

		BrnTrafficIO::OutputBuffer_PostPhysics::GetGameEventQueue(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
}

void BrnTraffic::TrafficEntityModule::Avoidance_CalculateFeelers(const rw::math::vpu::Vector3  lDirection, const rw::math::vpu::Vector3  lRight, Vector3 *  laFeelers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:17724
		int32_t liIndex;

		// BrnTrafficEntityModule.cpp:17725
		int32_t liFeelCosSin;

		// BrnTrafficEntityModule.cpp:17726
		VecFloat lfContrib;

	}
}

void rw::math::vpu::operator*<VectorAxisY>(const rw::math::vpu::Vector3  v, VecFloatRef<VectorAxisY> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:531
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void rw::math::vpu::operator*<VectorAxisX>(const rw::math::vpu::Vector3  v, VecFloatRef<VectorAxisX> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:531
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void BrnTraffic::TrafficEntityModule::GetAvoidOffcourseScoreFactor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::Avoidance_CalculatePassingScore(const rw::math::vpu::Vector3  lPositionA, const rw::math::vpu::Vector3  lVelocityA, const rw::math::vpu::Vector3  lPositionB, const rw::math::vpu::Vector3  lVelocityB, VecFloat  lfObjectBHalfLength, VecFloat  lfObjectBHalfWidth) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:17414
		Vector3 lRelativePosition;

		// BrnTrafficEntityModule.cpp:17415
		Vector3 lRelativeVelocity;

		// BrnTrafficEntityModule.cpp:17416
		VecFloat lfRelativeVelocitySizeSq;

		// BrnTrafficEntityModule.cpp:17417
		VecFloat lfRelativePositionSizeSq;

		// BrnTrafficEntityModule.cpp:17418
		VecFloat lfPassingSpace;

		// BrnTrafficEntityModule.cpp:17419
		VecFloat lfTimeToImpact;

		// BrnTrafficEntityModule.cpp:17420
		VecFloat lfPassingScore;

		// BrnTrafficEntityModule.cpp:17421
		VecFloat lfTimeToImpactScore;

		// BrnTrafficEntityModule.cpp:17473
		VecFloat lfTotalScore;

		{
			// BrnTrafficEntityModule.cpp:17456
			Vector2 lRelativePosition2D;

			// BrnTrafficEntityModule.cpp:17457
			Vector2 lRelativeVelocity2D;

		}
	}
}

void BrnTraffic::TrafficEntityModule::GetAvoidPassHeightSkip() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator==(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:40
		bool ret;

	}
}

void BrnTraffic::TrafficEntityModule::GetAvoidPassImpactTimeMax() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Convert3DVectorTo2D(const rw::math::vpu::Vector3  l3DVector, const Vector2 &  l2DVector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::Avoidance_CalculateDistancePosVelToOrigin(const rw::math::vpu::Vector2  lStart, const rw::math::vpu::Vector2  lVel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:17498
		VecFloat lfLineLengthSq;

		// BrnTrafficEntityModule.cpp:17499
		VecFloat lfCrossResultSq;

		// BrnTrafficEntityModule.cpp:17500
		VecFloat lfResult;

	}
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

void rw::math::vpu::CompEqual(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:335
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void BrnTraffic::TrafficEntityModule::GetAvoidPassMaxDistance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GetAvoidPassImpactTimeScoreFactor() {
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

void BrnTraffic::TrafficEntityModule::GetAvoidMaxOverallRisk() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::Avoidance_GetBestVehicleDirection(uint32_t  luVehicle, const Vector3 &  lNewDirection, const VecFloat &  lfOverallRisk) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:17526
		Vehicle * lpVehicle;

		// BrnTrafficEntityModule.cpp:17529
		VecFloat lfVehicleSpeed;

		// BrnTrafficEntityModule.cpp:17531
		Vector3 lTargetDir;

		// BrnTrafficEntityModule.cpp:17532
		Matrix44Affine lTransform;

		// BrnTrafficEntityModule.cpp:17533
		Vector3 lPosition;

		// BrnTrafficEntityModule.cpp:17534
		Vector3 lDirection;

		// BrnTrafficEntityModule.cpp:17535
		Vector3 lRight;

		// BrnTrafficEntityModule.cpp:17544
		Vector3[5] laFeelers;

		// BrnTrafficEntityModule.cpp:17545
		Vector3[5] laFeelerVelocity;

		// BrnTrafficEntityModule.cpp:17546
		VecFloat[5] lafFeelerScore;

		// BrnTrafficEntityModule.cpp:17547
		VecFloat[5] lafOffcourseScore;

		// BrnTrafficEntityModule.cpp:17550
		float32_t[5] laDEBUG_PassScore;

		// BrnTrafficEntityModule.cpp:17552
		int32_t liDEBUG_Index;

		// BrnTrafficEntityModule.cpp:17562
		int32_t liBestFeeler;

		// BrnTrafficEntityModule.cpp:17563
		VecFloat lfBestFeelerScore;

		// BrnTrafficEntityModule.cpp:17564
		VecFloat lfBestDotFeelerDir;

		// BrnTrafficEntityModule.cpp:17569
		int32_t liFeelerIndex;

		// BrnTrafficEntityModule.cpp:17584
		uint32_t luCachedIndex;

		// BrnTrafficEntityModule.cpp:17585
		uint32_t luCachedStructIndex;

		// BrnTrafficEntityModule.cpp:17652
		bool lbDebugAddStuff;

		GetVehicle(/* parameters */);
	}
	Vehicle::GetSpeed(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	GetVehicleTransform(/* parameters */);
	Vehicle::GetSpeed(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	Avoidance_CalculateFeelers(/* parameters */);
	rw::math::vpu::Vector2::GetY(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::Vector2::GetY(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:17577
		VecFloat lfDotFeelerDir;

		// BrnTrafficEntityModule.cpp:17578
		VecFloat lfDotFeelerDirPositive;

		rw::math::vpu::operator*(/* parameters */);
	}
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	GetAvoidOffcourseScoreFactor(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:17588
		CollidableVehicleInfo4 * lpCachedCollidableInfo;

	}
	CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::operator[](/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:17592
		Vector3 lCachedPosition;

		// BrnTrafficEntityModule.cpp:17596
		Vector3 lCachedVelocity;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		{
		}
		{
		}
		{
		}
		{
		}
		{
			{
			}
		}
		{
			// BrnTrafficEntityModule.cpp:17603
			VecFloat lfPassingScore;

			Avoidance_CalculatePassingScore(/* parameters */);
		}
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::operator==(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::operator==(/* parameters */);
		rw::math::vpu::ReciprocalFast(/* parameters */);
		GetAvoidPassImpactTimeMax(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::GetVecFloat_Zero(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::Max<float>(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:17622
		VecFloat lfOffcourse;

		rw::math::vpu::operator+(/* parameters */);
	}
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::ReciprocalFast(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	GetAvoidMaxOverallRisk(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:17664
		DEBUG_VehicleAvoidance * lpDebugVehicle;

		// BrnTrafficEntityModule.cpp:17673
		int32_t liDebugIndex;

		Vehicle::GetTargetPos(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
	{
		Convert3DVectorTo2D(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	GetAvoidPassImpactTimeScoreFactor(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	Convert3DVectorTo2D(/* parameters */);
	GetAvoidPassMaxDistance(/* parameters */);
	Avoidance_CalculateDistancePosVelToOrigin(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::ReciprocalFast(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Sqrt(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::Negate(/* parameters */);
}

void BrnTraffic::Vehicle::GetRandomVal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::GetPhysicalTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::CalculateAndSetSteeringUsingAvoidance(uint32_t  luVehicle, const Vector3 &  lNewDirection, const VecFloat  lfDistFromTarget, BrnTrafficDriverControls *  lpOutControls, const VecFloat &  lfOverallRisk) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:16022
		Vector3 lAvoidDirection;

		// BrnTrafficEntityModule.cpp:16023
		VecFloat lfAvoidDotTargetDir;

	}
}

void rw::math::fpu::Sgn<rw::math::vpu::VecFloat>(VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator==(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:164
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:166
		bool ret;

		{
			// vec_float_operation_inline.h:165
			VectorIntrinsicUnion u;

		}
	}
}

void BrnTraffic::TrafficEntityModule::DriveTowardsTarget(uint32_t  luVehicle, bool  lbAllowRecovery, BrnTrafficDriverControls *  lpOutControls) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:16377
		Vehicle * lpVehicle;

		// BrnTrafficEntityModule.cpp:16404
		Vector3 lTargetPos;

		// BrnTrafficEntityModule.cpp:16405
		Vector3 lVehiclePos;

		// BrnTrafficEntityModule.cpp:16407
		Vector3 lMoveVector;

		// BrnTrafficEntityModule.cpp:16408
		Vector3 lMoveDir;

		// BrnTrafficEntityModule.cpp:16410
		VecFloat lfDistFromTarget;

		// BrnTrafficEntityModule.cpp:16412
		ParamTransform * lpParamTransform;

		// BrnTrafficEntityModule.cpp:16415
		const float KF_VEHICLE_FLAG_AS_FAR_AWAY_DISTANCE;

		// BrnTrafficEntityModule.cpp:16442
		Vector3 lVehicleDir;

		// BrnTrafficEntityModule.cpp:16443
		VecFloat lfDistAhead;

		// BrnTrafficEntityModule.cpp:16444
		Vector3 lNewDirection;

		// BrnTrafficEntityModule.cpp:16445
		VecFloat lfAvoidOverallRisk;

		// BrnTrafficEntityModule.cpp:16468
		VecFloat lfGasBrake;

	}
	Vehicle::IsRecoveringFromSlam(/* parameters */);
	Vehicle::GetTargetPos(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	Vehicle::GetTargetPos(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::NormalizeReturnMagnitude(/* parameters */);
	{
		{
		}
	}
	GetParamTransform(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	CgsContainers::FastBitArray<601>::SetBit(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
		{
		}
	}
	Vehicle::IsExtremeSwerving(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:16430
		Vector3 lTargetDir;

		ParamTransform::GetDirection(/* parameters */);
	}
	CalculateAndSetSteeringUsingAvoidance(/* parameters */);
	rw::math::vpu::operator>=<VectorAxisX>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	ParamTransform::GetDirection(/* parameters */);
	ParamTransform::GetSpeed(/* parameters */);
	CalculateDriverGasBrake(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	Vehicle::GetLinearVelocity(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::GetVecFloat_NegativeOne(/* parameters */);
	{
	}
	rw::math::vpu::ReciprocalFast(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:16476
		Vector3 lTargetDir;

		GetParamTransform(/* parameters */);
		ParamTransform::GetDirection(/* parameters */);
		Vehicle::GetCurrentManoeuvre(/* parameters */);
	}
	Vehicle::GetSpeed(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::fpu::Sgn<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	Vehicle::IsExtremeSwerving(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	Vehicle::GetRandomVal(/* parameters */);
	Vehicle::GetSpeed(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	Vehicle::StartGiveUpManoeuvre(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:16481
		BrnTraffic::Vehicle::Manoeuvre leTurn;

		Vehicle::SetCurrentManoeuvre(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator>=<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator< <VectorAxisZ>(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CalculateAndSetSteeringUsingAvoidance(/* parameters */);
	rw::math::vpu::operator>=<VectorAxisX>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator>=<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator< <VectorAxisZ>(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

void BrnTraffic::Vehicle::WantsToExtremeSwerve() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateExtremeSwerving(uint32_t  luVehicle, OutputBuffer_PrePhysics *  lpOutputBuffer, BrnTrafficDriverControls *  lpDriverControls) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:16552
		Vehicle * lpVehicle;

		GetVehicle(/* parameters */);
	}
	Vehicle::IsExtremeSwerving(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:16568
		Vector3 lTrafficPos;

		// BrnTrafficEntityModule.cpp:16569
		Vector3 lVecToPlayer;

		GetVehicleTransform(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		Vehicle::GetRandomVal(/* parameters */);
		Vehicle::WantsToExtremeSwerve(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:16578
		EntityId lTarget;

		CgsSceneManager::EntityId::Set(/* parameters */);
		Vehicle::IsSympatheticallyCrashing(/* parameters */);
		{
			// BrnTrafficEntityModule.cpp:16588
			int32_t liRand;

			// BrnTrafficEntityModule.cpp:16589
			int32_t liRandForAccel;

			Vehicle::SetPhysicalReason(/* parameters */);
			Vehicle::SetSympatheticCrashTarget(/* parameters */);
			CgsNumeric::Random::RandomInt(/* parameters */);
			Vehicle::SetSympatheticCrashState(/* parameters */);
		}
	}
	Vehicle::SetSympatheticCrashState(/* parameters */);
}

void BrnTraffic::TrafficEntityModule::UpdateRecoveringFromSlam(uint32_t  luVehicle, BrnTrafficDriverControls *  lpDriverControls) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:16515
		Vehicle * lpVehicle;

	}
	GetVehicle(/* parameters */);
	Vehicle::IsRecoveringFromSlam(/* parameters */);
	Vehicle::IsRecoveringFromSlam(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:16525
		const TrafficPhysicsInfo * lpPhysicsInfo;

	}
	rw::math::fpu::Max<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
}

void BrnPhysics::Vehicle::BrnTrafficDriverControls::BrnTrafficDriverControls() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::BrnPlayerDriverControls::BrnPlayerDriverControls() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics::GetVehicleDriverInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:317
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::Vehicle::AddPhysicalTime(float32_t  lfTimeDelta) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::AddManoeuvreTime(float32_t  lfTimeDelta) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateVehicleStuckTimers(TrafficPhysicsInfo *  lpPhysicsInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateVehicleStuckSideTime(uint32_t  luContactSideFlags, BrnTraffic::TrafficPhysicsInfo::EContactSideFlag  leSide, float32_t  lfRampUp, float32_t  lfRampUpThreshold, float32_t *  lpfTimer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::BrnTrafficDriverControls::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::BrnPlayerDriverControls::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleDriverInputInterface::UpdateTrafficDriver(const BrnTrafficDriverControls *  lpDriverControls) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::GetSympatheticCrashTarget() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::Vehicle::IsNormalPhysical() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::UpdateNormalPhysical(uint32_t  luVehicle, BrnTrafficDriverControls *  lpDriverControls) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:16855
		Vehicle * lpVehicle;

	}
}

void BrnTraffic::Vehicle::IsBeingChecked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::GenerateDriverInputs(OutputBuffer_PrePhysics *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:15581
		BrnTrafficDriverControls lDriverControls;

		// BrnTrafficEntityModule.cpp:15584
		OutputBuffer_PrePhysics::VehicleDriverInputInterface * lpDriverInputInterface;

		// BrnTrafficEntityModule.cpp:15588
		FastBitArray<601> lVehicles_Alive_And_Physical;

		// BrnTrafficEntityModule.cpp:15589
		Iterator lItVehicle;

	}
	BrnPhysics::Vehicle::BrnTrafficDriverControls::BrnTrafficDriverControls(/* parameters */);
	BrnTrafficIO::OutputBuffer_PrePhysics::GetVehicleDriverInterface(/* parameters */);
	CgsContainers::FastBitArray<601>::Iterator::Iterator(/* parameters */);
	CgsContainers::FastBitArray<601>::SetAnd(/* parameters */);
	CgsContainers::FastBitArray<601>::UnSetAll(/* parameters */);
	CgsContainers::FastBitArray<601>::UnSetAll(/* parameters */);
	CgsContainers::FastBitArray<601>::Begin(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:15599
		uint32_t luVehicle;

		// BrnTrafficEntityModule.cpp:15617
		Vehicle * lpVehicle;

		// BrnTrafficEntityModule.cpp:15624
		TrafficPhysicsInfo * lpPhysicsInfo;

		// BrnTrafficEntityModule.cpp:15635
		bool lbGeneratedControls;

		// BrnTrafficEntityModule.cpp:15637
		BrnTraffic::Vehicle::Manoeuvre leVehicleCurrentManoeuvre;

		GetStandardVehicle(/* parameters */);
		Vehicle::AddPhysicalTime(/* parameters */);
		Vehicle::AddManoeuvreTime(/* parameters */);
		UpdateVehicleStuckTimers(/* parameters */);
		UpdateVehicleStuckSideTime(/* parameters */);
		UpdateVehicleStuckSideTime(/* parameters */);
		BrnPhysics::Vehicle::BrnTrafficDriverControls::Clear(/* parameters */);
		Vehicle::GetPhysicalReason(/* parameters */);
		BrnTrafficIO::OutputBuffer_PrePhysics::GetVehicleDriverInterface(/* parameters */);
		BrnPhysics::Vehicle::VehicleDriverInputInterface::UpdateTrafficDriver(/* parameters */);
	}
	CgsContainers::FastBitArray<601>::SetAnd(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	Vehicle::IsExtremeSwerving(/* parameters */);
	Vehicle::IsSympatheticallyCrashing(/* parameters */);
	Vehicle::IsRecoveringFromSlam(/* parameters */);
	Vehicle::IsNormalPhysical(/* parameters */);
	Vehicle::IsBeingChecked(/* parameters */);
	{
		// BrnTrafficEntityModule.cpp:15710
		CgsDev::StrStream lStrStream;

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
	{
		// BrnTrafficEntityModule.cpp:15687
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnTrafficIO::OutputBuffer_PrePhysics::GetVehicleDriverInterface(/* parameters */);
	BrnPhysics::Vehicle::VehicleDriverInputInterface::UpdateTrafficDriver(/* parameters */);
	Vehicle::SetCurrentManoeuvre(/* parameters */);
	Vehicle::SetCurrentManoeuvrePhase(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	Vehicle::GetSympatheticCrashTarget(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	UpdateNormalPhysical(/* parameters */);
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics::SetPlayingShowtime(bool  lbPlayingShowtime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<601u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::PrePhysicsUpdate(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const InputBuffer_PrePhysics *  lpInput, OutputBuffer_PrePhysics *  lpOutput, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModule.cpp:2641
		bool lbSimPaused;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	BrnTrafficIO::OutputBuffer_PrePhysics::SetPlayingShowtime(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnTrafficEntityModule.cpp:2661
		BitArray<601u> lCreatedBodies;

		CgsContainers::BitArray<601u>::UnSetAll(/* parameters */);
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

::::KF_BLOBBY_SHADOW_ALPHA = [63, 51, 51, 51];

::::KF_CORONA_OFFSET = [63, 0, 0, 0];

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

BrnReplays::KF_REPLAY_START_TIME = [65, 112, 0, 0];

BrnReplays::KF_REPLAY_LENGTH = [65, 160, 0, 0];

BrnReplays::KAC_STREAM_MAGIC_NUMBER = "REPLAY ";

BrnEffects::SKID_FACTOR_THRESHOLD = [62, 153, 153, 154];

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

Attrib::Hash::burnoutcargraphicsasset::Liveries = -619886396057111195;

Attrib::Hash::burnoutcargraphicsasset::PlayerColourIndex = -6433504252631697867;

Attrib::Hash::burnoutcargraphicsasset::RandomTrafficColours = -6065725164615729054;

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

Attrib::ClassName::burnoutcargraphicsasset = -1081059634811282860;

CgsAttribSys::KF_LOG_WINDOW_WIDTH = [67, 160, 0, 0];

CgsAttribSys::KF_LOG_WINDOW_HEIGHT = [66, 112, 0, 0];

BrnAI::KF_MAX_TURN_ANGLE = [62, 178, 184, 194];

BrnAI::KF_AVERAGE_TURN_ANGLE = [62, 50, 184, 194];

BrnAI::KF_AI_MAX_SPEED_MULTIPLIER = [63, 153, 153, 154];

BrnAI::KF_AI_MAX_BOOST_SPEED_MULTIPLIER = [63, 140, 204, 205];

BrnAI::KF_IN_FRONT_OF_PLAYER_DISTANCE = [66, 160, 0, 0];

BrnAI::KX_SECTION_FLAG_AI_INTERSTATE_EXIT = -128;

BrnAI::KF_CENTRE_LINE_AHEAD_CLOSE = [63, 127, 92, 41];

BrnAI::KF_CENTRE_LINE_AHEAD_FAR = [63, 124, 40, 246];

BrnAI::KF_HNG_CROSSPIECE_LENGTH = [64, 160, 0, 0];

BrnAI::KF_AI_VULNERABILITY_RADIUS_BEHIND = [65, 240, 0, 0];

BrnAI::KF_AI_PASSTHROUGH_RADIUS = [66, 200, 0, 0];

BrnAI::KE_AI_PERFMON_PAGE = 7;

BrnParticle::kfNumberOfSecondsInTenYears = [77, 150, 96, 24];

BrnProgression::KF_PLAYER_BOOST_THRESHOLD = [65, 160, 0, 0];

BrnProgression::KF_PLAYERSTAT_OVERDRIVE_EARNER = [67, 250, 0, 0];

BrnProgression::KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX = [66, 112, 0, 0];

BrnProgression::KF_PLAYER_STAT_TEMPORARY_ACCELERATOR = [65, 32, 0, 0];

BrnProgression::KE_GAMESTATE_PERFMON_PAGE = 5;

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

CgsSceneManager::KF_DEFAULT_MIN_PADDING = [61, 204, 204, 205];

CgsSceneManager::KF_DEFAULT_MAX_PADDING = [64, 0, 0, 0];

CgsSceneManager::KU16_INVALID_ENTITY_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INSTANCE_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INDEX = -1;

CgsSceneManager::KU_SPATIAL_PARTITION_INVALID_ID = -1;

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

BrnWorld::KI_INVALID_OPPONENT = -1;

BrnWorld::KI_INVALID_RIVAL = -1;

BrnWorld::KF_AI_INACTIVE_DISTANCE_BIAS = [65, 240, 0, 0];

BrnWorld::KF_INVALID_DISTANCE = [127, 127, 255, 255];

BrnWorld::KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME = [64, 0, 0, 0];

BrnWorld::KI_INVALID_CAR_COLOUR = -1;

BrnWorld::KI_INVALID_CAR_COLOUR_PALETTE = -1;

BrnWorld::KE_RACEECAR_PERFMON_PAGE = 12;

BrnWorld::KI_BLURRED_TECHNIQUE;

BrnWorld::KI_DEFAULT_TECHNIQUE;

BrnWorld::KF_MIN_SPEED_FOR_AIR_MPH = [64, 0, 0, 0];

BrnWorld::KU_COLLISION_MASK_TOP_BIT = -32768;

BrnWorld::KF_POWER_PARK_NEARBY_RADIUS = [65, 112, 0, 0];

BrnWorld::KF_PLAYER_NETWORK_CAR_RESET_SECONDS = [64, 160, 0, 0];

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

BrnWorld::KF_PLANE_SEGMENT_TRIGGER_DEPTH = [60, 35, 215, 10];

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

BrnTraffic::KF_VEHICLE_COLLIDABILITY_RADIUS = [65, 160, 0, 0];

BrnTraffic::KF_VEHICLE_PARTIAL_UPDATE_DISTANCE = [67, 22, 0, 0];

BrnTraffic::KF_GENERATOR_PHASE_SHIFT = [63, 51, 51, 51];

BrnTraffic::KF_MIN_GENERATION_FACTOR = [63, 76, 204, 205];

BrnTraffic::KF_MAX_GENERATION_FACTOR = [63, 153, 153, 154];

BrnTraffic::KF_PARAM_END_OF_SECTION_APPROACH_DIST = [66, 160, 0, 0];

BrnTraffic::KF_PARAM_AVOIDANCE_BIAS = [64, 64, 0, 0];

BrnTraffic::KF_PARAM_SPACE_FACTOR = [64, 64, 0, 0];

BrnTraffic::KF_PARAM_NEXT_PARAM_TIME_THRESHOLD = [64, 0, 0, 0];

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

BrnTraffic::KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_SCALE = [61, 143, 92, 41];

BrnTraffic::KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_DECAY = [63, 51, 51, 51];

BrnTraffic::KF_VEHICLE_PHYSICAL_STEERING_SCALE = [63, 128, 0, 0];

BrnTraffic::KF_VEHICLE_PHYSICAL_STEERING_IF_RISK = [63, 166, 102, 102];

BrnTraffic::KF_VEHICLE_MAX_DIST_TO_RECOVER_FROM_SLAM = [65, 240, 0, 0];

BrnTraffic::KF_VEHICLE_FLIPOUT_AND_SPINOUT_AIRRAMMAG_SCALE = [63, 25, 153, 154];

BrnTraffic::KF_VEHICLE_TIME_TO_STEER_FROM_SLAM = [64, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_TIME_FOR_RECOVERY = [64, 160, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_CLEANUP = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_TIME_FOR_REINSERTION = [65, 112, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_REINSERTION = [65, 32, 0, 0];

BrnTraffic::KF_VEHICLE_ROLL_FILTER_lhs = [67, 180, 0, 0];

BrnTraffic::KF_RIVAL_MAX_DIST_TO_LANE = [65, 112, 0, 0];

BrnTraffic::KF_VEHICLE_TIME_FOR_NEW_SWERVE = [63, 0, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_CHANGE_SWERVE_DIRECTION_TIME = [61, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_CHANGE_SWERVE_DIRECTION_TIME = [63, 128, 0, 0];

BrnTraffic::KF_BULB_WARMTH_DELTA_PER_SECOND = [69, 156, 64, 0];

BrnTraffic::KF_STOP_LINE_REACTION_DISTANCE = [66, 32, 0, 0];

BrnTraffic::KF_LANE_CHANGE_DICE_ROLL_SCALE = [64, 160, 0, 0];

BrnTraffic::KF_RENDER_CULL_DISTANCE = [67, 122, 0, 0];

BrnTraffic::KF_RENDER_CULL_CORONA_DISTANCE = [67, 250, 0, 0];

BrnTraffic::KF_CORONA_SCALE_DIST_AT_TWO = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SWERVE_DISTANCE_SQ = [69, 97, 0, 0];

BrnTraffic::KF_RENDER_CULL_DISTANCE_SQ = [71, 116, 36, 0];

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

BrnTraffic::KE_TRAFFIC_PERFMON_PAGE = 2;

BrnTraffic::KF_HULL_SYNC_ERROR_TEXT_SIZE = [65, 224, 0, 0];

BrnTraffic::KF_HULL_SYNC_ERROR_TEXT_POS_X = [67, 199, 0, 0];

BrnTraffic::KF_HULL_SYNC_ERROR_TEXT_POS_Y = [66, 244, 0, 0];

BrnTraffic::K_MIN_TRAFFIC_PROXIMITY_AS_RACE_STARTING_SQUARED = [71, 116, 36, 0];

BrnTraffic::KF_RESET_ON_TRACK_KILL_RADIUS = [66, 150, 0, 0];

BrnTraffic::KF_RESET_ON_TRACK_KILL_HALFHEIGHT = [65, 32, 0, 0];

BrnTraffic::KF_RESET_ON_TRACK_KILL_RADIUS_ONLINE = [65, 64, 0, 0];

BrnTraffic::KF_START_GAME_MODE_KILL_RADIUS = [65, 240, 0, 0];

BrnTraffic::KF_START_GAME_MODE_KILL_RADIUS_WHOLESALE = [67, 72, 0, 0];

BrnTraffic::KF_TRAFFIC_LIGHT_DELAY = [64, 160, 0, 0];

BrnTraffic::KF_SHOWTIME_SHOW_SCORE_RADIUS = [66, 52, 0, 0];

BrnTraffic::KF_TRAFFIC_STOMP_DISTANCE = [65, 160, 0, 0];

BrnTraffic::K_ID_CITY_BUS = -4670722471405551616;

BrnTraffic::K_ID_TOUR_BUS = -4670722467309551616;

BrnTraffic::KF_NEARY_TRAFFIC_MAX_DISTANCE = [66, 200, 0, 0];

BrnTraffic::KF_TRAFFIC_DETECTINON_ASPECT_RATIO = [64, 192, 0, 0];

BrnTraffic::KF_NEARBY_TRAFFIC_FOV = [63, 0, 0, 0];

BrnTraffic::KF_TRAFFIC_DETECTION_NEAR_CLIP = [192, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_SHOWTIME_CLEANUP_SQ = [67, 97, 0, 0];

BrnTraffic::KF_BUS_MIN_DIST_FOR_SHOWTIME_CLEANUP_SQ = [68, 200, 0, 0];

BrnTraffic::KF_RACE_END_RAMP_DOWN_DIST = [68, 188, 32, 0];

BrnTraffic::KF_RACE_END_RAMP_DOWN_SCALE = [63, 0, 0, 0];

BrnTraffic::KF_MIN_PLAYER_SPEED_FOR_NEAR_MISS = [65, 240, 0, 0];

BrnTraffic::KF_MIN_PLAYER_DISTANCE_FOR_NEAR_MISS = [64, 160, 0, 0];

BrnTraffic::KF_MIN_PLAYER_DISTANCE_AGAINST_OTHER_PLAYER_FOR_NEAR_MISS = [65, 32, 0, 0];

BrnTraffic::KF_AVOID_OFFCOURSE_SCORE_FACTOR = [65, 32, 0, 0];

BrnTraffic::KF_AVOID_MAX_OVERALL_RISK = [66, 72, 0, 0];

BrnTraffic::KF_AVOID_CONE_DEPTH_lhs = [65, 112, 0, 0];

BrnTraffic::KF_AVOID_CONE_HALF_ANGLE_lhs = [65, 32, 0, 0];

BrnTraffic::KF_AVOID_CONE_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_SHOWTIME_CRASHMAGNET_DISTANCESQ = [69, 28, 64, 0];

BrnTraffic::KF_SHOWTIME_MISBOUNCE_MIN_HEIGHT = [64, 128, 0, 0];

BrnTraffic::KF_CONTACT_SIDE_DEBOUNCE_TIMER = [63, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_STUCK_TIME = [61, 76, 204, 205];

BrnTraffic::KF_MIN_TIME_FOR_STUCK = [64, 76, 204, 205];

BrnTraffic::KF_VEHICLE_STUCK_TIME_RAMP_UP = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_STUCK_TIME_RAMP_UP_THRES = [61, 204, 204, 205];

BrnTraffic::KF_VEHICLE_IS_STUCK_TIME = [63, 0, 0, 0];

BrnTraffic::KF_VEHICLE_STUCK_REVERSE_CHANCE = [62, 204, 204, 205];

BrnTraffic::KF_SYMPATHETIC_TIMEOUT = [64, 192, 0, 0];

BrnTraffic::KF_VEHICLE_HANDBRAKE_TILL_CRASH_TIME = [61, 204, 204, 205];

BrnTraffic::KF_VEHICLE_STUCK_TIME_MIN = [61, 76, 204, 205];

BrnTraffic::KF_VEHICLE_HANDBRAKE_TILL_CRASH_TIME_LOCKUP = [63, 140, 204, 205];

BrnTraffic::KF_SYMP_RAND_ACCEL_MIN = [65, 240, 0, 0];

BrnTraffic::KF_SYMP_RAND_ACCEL_MAX = [66, 130, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SYMPATHETIC_THRESHOLD = [62, 204, 204, 205];

BrnTraffic::KF_NEARBY_TRAFFIC_SPHERE_VOLUME_RADIUS = [66, 140, 0, 0];

BrnTraffic::KF_NUKER_MIN_SPEED_FOR_QUEUEING = [64, 160, 0, 0];

BrnTraffic::KF_DENSITY_MIN_ACTIVE_HULLS = [65, 16, 0, 0];

BrnTraffic::KF_DENSITY_MAX_ACTIVE_HULLS = [66, 144, 0, 0];

BrnTraffic::KF_PARAM_MIN_SPAWN_TIME = [64, 0, 0, 0];

BrnTraffic::KF_SHOWTIME_TRAFFIC_DENSITY = [65, 160, 0, 0];

BrnTraffic::KF_SHOWTIME_SPAWN_CHECK_FREQUENCY = [64, 0, 0, 0];

BrnTraffic::KF_SHOWTIME_RANDOM_JITTER_AMOUNT = [61, 204, 204, 205];

BrnTraffic::K_ID_LARGE_RV = -4670612538451951616;

BrnTraffic::KF_FILL_RANDOM_JITTER_AMOUNT = [62, 153, 153, 154];

BrnTraffic::KF_CALCACCEL_MIN_MULT_SPEED_DIST = [194, 72, 0, 0];

BrnTraffic::KF_CALCACCEL_MAX_MULT_SPEED_DIST = [65, 32, 0, 0];

BrnTraffic::KF_CALCACCEL_MIN_MULT = [62, 76, 204, 205];

BrnTraffic::KF_CALCACCEL_MAX_MULT = [64, 32, 0, 0];

BrnTraffic::KF_NEED_TO_SLOW_IMPATIENCE_MODIFIER = [64, 32, 0, 0];

BrnTraffic::KF_NEED_TO_SLOW_DRIVE_AROUND_STICKINESS = [62, 25, 153, 154];

BrnTraffic::KF_PRECALC_MIN_DRIVE_AROUND_SPEED = [64, 128, 0, 0];

BrnTraffic::KF_PRECALC_MAX_DRIVE_AROUND_SPEED = [65, 0, 0, 0];

BrnTraffic::KF_PRECALC_DIST_TO_CHANGE_SPEED = [64, 0, 0, 0];

BrnTraffic::KF_D2T_GIVE_UP_ON_SLAM_PROB = [61, 76, 204, 205];

BrnTraffic::KF_SHOWTIME_SYMP_CRASH_PROB = [63, 76, 204, 205];

BrnTraffic::KF_UNGIVEUP_TIME = [64, 128, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_VEHICLE_NOT_DRIVING_TIME = [64, 192, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_TIME_TILL_NEXT_PHYSICAL_KILL = [63, 128, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_TIME_TILL_NEXT_ONLINE_PHYSICAL_KILL = [63, 0, 0, 0];

BrnTraffic::KF_AVOID_CRASH_CONE_DEPTH_lhs = [65, 240, 0, 0];

BrnTraffic::KF_AVOID_CRASH_CONE_HALF_ANGLE_lhs = [65, 32, 0, 0];

BrnTraffic::KF_AVOID_CRASH_CONE_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_CALCACCEL_MIN_DIST_FOR_NO_SCALE = [193, 160, 0, 0];

BrnTraffic::KF_EXTREME_SWERVE_DONT_USE_AVOIDANCE_TIME = [64, 64, 0, 0];

CgsNumeric::KU_RANDOM_DEFAULT_SEED = -1881117246;

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

rw::math::fpu::RADIANS_TO_DEGREES = [66, 101, 46, 225];

rw::math::fpu::E = [64, 45, 248, 84];

rw::math::fpu::PI = [64, 73, 15, 219];

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

