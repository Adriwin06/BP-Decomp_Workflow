// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntManager.cpp:35
	const float32_t KF_JUMP_LANDING_TIME;

}

// BrnStuntManager.cpp:471
void BrnGameState::StuntManager::OnStuntElement(const GenericRegion *  lpStuntElement, BrnGameState::StuntElementType  leStuntElementType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntManager.cpp:559
void BrnGameState::StuntManager::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntManager.cpp:580
void BrnGameState::StuntManager::StuntElementTriggered() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntManager.cpp:344
void BrnGameState::StuntManager::CompleteAllJumps() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntManager.cpp:361
void BrnGameState::StuntManager::CompleteAllStunts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntManager.cpp:378
void BrnGameState::StuntManager::CompleteAllSmashes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntManager.cpp:545
void BrnGameState::StuntManager::OnCrash() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntManager.cpp:1031
void BrnGameState::StuntManager::IsStuntElement(const GenericRegion *  lpGenericRegion, BrnGameState::StuntElementType *  lpOutStuntElementType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntManager.cpp:58
void BrnGameState::StuntManager::Construct(BrnProgression::ProgressionManager *  lpProgressionManager, TriggerQueryManager *  lpTriggerQueryManager, BrnGameState::ModeManager *  lpModeManager, BrnGameState::TrainingManager *  lpTrainingManager, BrnGameState::GameStateModule *  lpGameStateModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<512,16>::Construct(/* parameters */);
	CgsModule::EventReceiverQueue<512,16>::Prepare(/* parameters */);
}

// BrnStuntManager.cpp:248
void BrnGameState::StuntManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<512,16>::Release(/* parameters */);
	CgsModule::EventReceiverQueue<512,16>::Destruct(/* parameters */);
}

// BrnStuntManager.cpp:497
void BrnGameState::StuntManager::OnPropHit(uint16_t  luZoneId, uint16_t  luPropId, const rw::math::vpu::Vector3  lPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntManager.cpp:499
		int32_t liTriggerIndex;

		TriggerQueryManager::GetActiveTriggerCount(/* parameters */);
	}
	{
		// BrnStuntManager.cpp:503
		uint16_t luTriggerIndex;

		// BrnStuntManager.cpp:505
		const TriggerRegion * lpTriggerRegion;

		// BrnStuntManager.cpp:506
		BrnGameState::StuntElementType leStuntElementType;

		{
			// BrnStuntManager.cpp:511
			const GenericRegion * lpGenericRegion;

			// BrnStuntManager.cpp:512
			const BoxRegion * lpTriggerRegion;

			{
				// BrnStuntManager.cpp:517
				float32_t lfRadius;

			}
		}
	}
	CgsContainers::Array<uint16_t,256u>::GetLength(/* parameters */);
	TriggerQueryManager::GetActiveTrigger(/* parameters */);
	TriggerQueryManager::GetTriggerData(/* parameters */);
	BrnTrigger::TriggerData::GetRegion(/* parameters */);
	BrnTrigger::BoxRegion::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	BrnTrigger::BoxRegion::GetDimensionX(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	BrnTrigger::BoxRegion::GetDimensionY(/* parameters */);
	BrnTrigger::BoxRegion::GetDimensionZ(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	BrnTrigger::BoxRegion::GetDimensions(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnStuntManager.cpp:751
void BrnGameState::StuntManager::CheckForTrophyUnlocks(OnStuntElementCompleteAction *  lpOnStuntElementAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntManager.cpp:942
void BrnGameState::StuntManager::LoadDistrictMap(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<3072>::LoadBundle(/* parameters */);
	{
		// BrnStuntManager.cpp:992
		const CgsModule::Event * lpEvent;

		// BrnStuntManager.cpp:993
		const AcquireResourceResponse * lpAcquireResourceEvent;

		// BrnStuntManager.cpp:994
		int32_t liEventSize;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<3072>::AcquireResource(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnStuntManager.cpp:104
void BrnGameState::StuntManager::Prepare(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntManager.cpp:106
		const int32_t KI_MAX_GROUPS;

		// BrnStuntManager.cpp:108
		int32_t[200] laCompressedGroupIds;

		// BrnStuntManager.cpp:109
		int32_t lnCompressedGroupIdCount;

		// BrnStuntManager.cpp:110
		int32_t liGenericRegionIndex;

		// BrnStuntManager.cpp:112
		const TriggerData * lpTriggerData;

		// BrnStuntManager.cpp:113
		const BinaryFileResource * lpBinaryFileResource;

		// BrnStuntManager.cpp:115
		BrnGameState::StuntElementType leStuntElementType;

		CgsResource::BinaryFileResource::GetData(/* parameters */);
		TriggerQueryManager::GetTriggerData(/* parameters */);
		operator++(/* parameters */);
		{
			// BrnStuntManager.cpp:136
			BrnWorld::ECounty leCounty;

			BrnWorld::operator++(/* parameters */);
		}
		{
			// BrnStuntManager.cpp:151
			const GenericRegion * lpGenericRegion;

			// BrnStuntManager.cpp:152
			BrnWorld::ECounty leCounty;

			BrnTrigger::TriggerData::GetGenericRegion(/* parameters */);
			BrnTrigger::GenericRegion::GetType(/* parameters */);
			FindTriggersCounty(/* parameters */);
		}
	}
	{
		// BrnStuntManager.cpp:158
		CgsID lnGroupId;

		BrnTrigger::GenericRegion::GetGroupId(/* parameters */);
		{
			// BrnStuntManager.cpp:163
			int32_t lnCompressedGroupId;

			// BrnStuntManager.cpp:164
			int32_t lnGroupIndex;

		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnStuntManager.cpp:605
void BrnGameState::StuntManager::ProcessStuntElement(InputBuffer::GameActionQueue *  lpActionQueue, bool  lbIsJump, bool  lbIsAGameModeActive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntManager.cpp:607
		OnStuntElementCompleteAction lOnStuntElementAction;

		// BrnStuntManager.cpp:608
		const GenericRegion * lpStuntElement;

		// BrnStuntManager.cpp:609
		BrnGameState::StuntElementType leElementType;

		// BrnStuntManager.cpp:610
		BrnWorld::ECounty leCounty;

		// BrnStuntManager.cpp:611
		bool lbHasBeenDoneBefore;

		// BrnStuntManager.cpp:627
		WorldStuntAction lStuntAction;

	}
	BrnTrigger::GenericRegion::GetGroupId(/* parameters */);
	BrnTrigger::TriggerRegion::GetId(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::WorldStuntAction>(/* parameters */);
	BrnTrigger::GenericRegion::GetGroupId(/* parameters */);
	BrnTrigger::TriggerRegion::GetId(/* parameters */);
	BrnProgression::ProgressionManager::OnPropHit(/* parameters */);
	BrnTrigger::GenericRegion::GetGroupId(/* parameters */);
	BrnTrigger::TriggerRegion::GetId(/* parameters */);
	BrnProgression::ProgressionManager::IsStuntElementDone(/* parameters */);
	FindTriggersCounty(/* parameters */);
	BrnTrigger::GenericRegion::GetGroupId(/* parameters */);
	BrnTrigger::TriggerRegion::GetId(/* parameters */);
	BrnProgression::ProgressionManager::AddStuntElement(/* parameters */);
	BrnTrigger::GenericRegion::GetGroupId(/* parameters */);
	BrnProgression::ProgressionManager::GetStuntElementCount(/* parameters */);
	CgsContainers::Set<CgsID,512u>::GetLength(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::OnStuntElementCompleteAction>(/* parameters */);
	BrnProgression::ProgressionManager::GetStuntElementCountByCounty(/* parameters */);
	BrnProgression::ProgressionManager::GetStuntElementCount(/* parameters */);
	{
		// BrnStuntManager.cpp:731
		OnAllStuntElementsCompleteByTypeAction lAllStuntsOfTypeAction;

		AddGameAction<BrnGameState::GameStateModuleIO::OnAllStuntElementsCompleteByTypeAction>(/* parameters */);
	}
	{
		// BrnStuntManager.cpp:675
		OnStuntElementBoostAction lStuntBoostAction;

		AddGameAction<BrnGameState::GameStateModuleIO::OnStuntElementBoostAction>(/* parameters */);
	}
	{
		// BrnStuntManager.cpp:719
		OnAllStuntElementsCompleteForCountyAction lAllStuntsForCountyAction;

		AddGameAction<BrnGameState::GameStateModuleIO::OnAllStuntElementsCompleteForCountyAction>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnStuntManager.cpp:800
void BrnGameState::StuntManager::UpdateJumps(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, InputBuffer::GameActionQueue *  lpActionQueue, float32_t  lfTimeStep, bool  lbIsAGameModeActive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntManager.cpp:802
		int32_t liWheelIndex;

		// BrnStuntManager.cpp:803
		bool lbPlayerInAir;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarCrashing(/* parameters */);
	ClearActiveJump(/* parameters */);
	{
		// BrnStuntManager.cpp:819
		bool lbHasBeenDoneBefore;

		BrnTrigger::GenericRegion::GetGroupId(/* parameters */);
		BrnProgression::ProgressionManager::IsStuntElementDone(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
		rw::math::vpu::Abs<float>(/* parameters */);
		{
			// BrnStuntManager.cpp:832
			Vector3 lPlayerDir;

			// BrnStuntManager.cpp:833
			Vector3 lTriggerDir;

			// BrnStuntManager.cpp:835
			float32_t lfDot;

			// BrnStuntManager.cpp:836
			bool lbEnteredJumpForwards;

			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
			rw::math::vpu::Dot(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			{
				// BrnStuntManager.cpp:852
				OnJumpStartAction lJumpStartAction;

				BrnTrigger::GenericRegion::GetGroupId(/* parameters */);
				AddGameAction<BrnGameState::GameStateModuleIO::OnJumpStartAction>(/* parameters */);
			}
		}
	}
	{
		// BrnStuntManager.cpp:889
		ShowJumpNameAction lShowJumpNameAction;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
	BrnTrigger::GenericRegion::GetGroupId(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::ShowJumpNameAction>(/* parameters */);
	BrnTrigger::TriggerRegion::GetId(/* parameters */);
}

// BrnStuntManager.cpp:397
void BrnGameState::StuntManager::CompleteAllStuntType(BrnGameState::StuntElementType  leStuntElementType, InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntManager.cpp:399
		BrnTrigger::GenericRegion::Type leType;

		// BrnStuntManager.cpp:400
		BrnProgression::TrophyUnlockData::UnlockType leUnlockType;

		// BrnStuntManager.cpp:430
		const TriggerData * lpTriggerData;

		// BrnStuntManager.cpp:442
		OnAllStuntElementsCompleteByTypeAction lAllStuntsOfTypeAction;

	}
	TriggerQueryManager::GetTriggerData(/* parameters */);
	{
		// BrnStuntManager.cpp:431
		int32_t liGenericRegionIndex;

		{
			// BrnStuntManager.cpp:433
			const GenericRegion * lpGenericRegion;

			// BrnStuntManager.cpp:434
			BrnWorld::ECounty leCounty;

			BrnTrigger::TriggerData::GetGenericRegion(/* parameters */);
			FindTriggersCounty(/* parameters */);
			BrnTrigger::BoxRegion::GetPosition(/* parameters */);
			BrnWorld::WorldRegion::Construct(/* parameters */);
			BrnTrigger::GenericRegion::GetGroupId(/* parameters */);
			BrnTrigger::TriggerRegion::GetId(/* parameters */);
			BrnProgression::ProgressionManager::AddStuntElement(/* parameters */);
		}
	}
	AddGameAction<BrnGameState::GameStateModuleIO::OnAllStuntElementsCompleteByTypeAction>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnStuntManager.cpp:271
void BrnGameState::StuntManager::Update(InputBuffer::GameActionQueue *  lpActionQueue, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, float32_t  lfTimeStep, bool  lbIsAGameModeActive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarCrashing(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarCrashing(/* parameters */);
	{
		// BrnStuntManager.cpp:291
		HUDMessageJumpFailedAction lJumpFailedAction;

		AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageJumpFailedAction>(/* parameters */);
	}
}

// BrnStuntManager.cpp:32
