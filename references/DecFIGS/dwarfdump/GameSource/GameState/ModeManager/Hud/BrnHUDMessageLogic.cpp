// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnHUDMessageLogic.cpp:25
	const float32_t KF_AVERAGE_RACE_SPEED_MPS;

	// BrnHUDMessageLogic.cpp:28
	const float32_t KF_RACE_TIME_BEFORE_LEADER_MESSAGES;

	// BrnHUDMessageLogic.cpp:29
	const float32_t KF_MIN_TIME_SEPARATION_FOR_LEADER_MESSAGES;

	// BrnHUDMessageLogic.cpp:30
	const float32_t KF_MAX_TIME_SEPARATION_FOR_LEADER_MESSAGES;

	// BrnHUDMessageLogic.cpp:33
	const float32_t KF_MAX_DIST_TO_FINISH_FOR_NECK_AND_NECK;

	// BrnHUDMessageLogic.cpp:34
	const float32_t KF_MAX_SEPARATION_FOR_NECK_AND_NECK;

	// BrnHUDMessageLogic.cpp:35
	const float32_t KF_MAX_NECK_AND_NECK_SPEED_DIFFERENCE;

	// BrnHUDMessageLogic.cpp:36
	const int32_t KI_MAX_RACE_POSTION_FOR_NECK_AND_NECK = 2;

	// BrnHUDMessageLogic.cpp:37
	const float32_t KF_MIN_NECK_AND_NECK_SPEED;

	// BrnHUDMessageLogic.cpp:40
	const int32_t KI_INVALID_RACE_CAR_INDEX = 4294967295;

	// BrnHUDMessageLogic.cpp:43
	const float32_t KF_MIN_CHECKPOINT_MESSAGE_SEPARATION;

	// BrnHUDMessageLogic.cpp:46
	const float32_t KF_RACE_START_NO_DISTANCE_MESSAGE_DISTANCE;

	// BrnHUDMessageLogic.cpp:47
	const float32_t KF_DISTANCE_TO_FINISH_MESSAGE_SEPARATION;

	// BrnHUDMessageLogic.cpp:50
	const float32_t KF_TIME_TO_BUFFER_CRASHING_CAR_MESSAGES;

	// BrnHUDMessageLogic.cpp:53
	const float32_t KF_TIME_FOR_WRONG_WAY_MESSAGE;

	// BrnHUDMessageLogic.cpp:54
	const float32_t KF_MIN_SPEED_FOR_WRONG_WAY_MESSAGE;

}

// BrnHUDMessageLogic.cpp:457
void BrnGameState::HUDMessageLogic::DetectNeckAndNeck(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnHUDMessageLogic.cpp:870
void BrnGameState::HUDMessageLogic::GenerateWrongWayMessage(BrnGameState::ScoringSystem *  lpScoringSystem, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, EActiveRaceCarIndex  lePlayerRaceCarIndex, float32_t  lfSimTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnHUDMessageLogic.cpp:219
void BrnGameState::HUDMessageLogic::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::Clear(/* parameters */);
	CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::Destruct(/* parameters */);
}

// BrnHUDMessageLogic.cpp:826
void BrnGameState::HUDMessageLogic::RemoveCrashingMessagesForTakendownPlayers(const InputBuffer::TakedownEventQueue *  lpTakedownQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHUDMessageLogic.cpp:828
		int32_t liEventIndex;

		{
			// BrnHUDMessageLogic.cpp:832
			int32_t liIndex;

			// BrnHUDMessageLogic.cpp:833
			EActiveRaceCarIndex leVictimRaceCarIndex;

			// BrnHUDMessageLogic.cpp:834
			const TakedownEvent * lpTakedownEvent;

			CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetEvent(/* parameters */);
			CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::IsObjectAllocated(/* parameters */);
			CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::operator[](/* parameters */);
			CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::FreeObject(/* parameters */);
			{
				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
			CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
		}
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
	}
}

// BrnHUDMessageLogic.cpp:310
void BrnGameState::HUDMessageLogic::OnGameModeChange() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::SetFloatVal(/* parameters */);
	CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::Clear(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	{
	}
}

// BrnHUDMessageLogic.cpp:76
void BrnGameState::HUDMessageLogic::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<256,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<256,16>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<256,16>::Prepare(/* parameters */);
	CgsModule::VariableEventQueue<256,16>::Clear(/* parameters */);
	CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::Construct(/* parameters */);
	CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::Prepare(/* parameters */);
	CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::Clear(/* parameters */);
	{
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

// BrnHUDMessageLogic.cpp:1439
void BrnGameState::HUDMessageLogic::GenerateCriticalDamageMessage(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ScoringSystem::GetRoadRageScoring(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarCrashing(/* parameters */);
	{
		// BrnHUDMessageLogic.cpp:1450
		DamageCriticalMessageAction lDamageAction;

		AddGameAction<BrnGameState::GameStateModuleIO::DamageCriticalMessageAction>(/* parameters */);
	}
	RoadRageModeScoring::ResetDamageCriticalMessageFlag(/* parameters */);
}

// BrnHUDMessageLogic.cpp:1387
void BrnGameState::HUDMessageLogic::GenerateDistanceToFinishMessage(BrnGameState::ScoringSystem *  lpScoringSystem, EActiveRaceCarIndex  lePlayerRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHUDMessageLogic.cpp:1389
		float32_t lfPlayerDistanceToFinish;

	}
	ScoringSystem::GetRaceCarDistanceToFinish(/* parameters */);
	{
		// BrnHUDMessageLogic.cpp:1417
		HUDMessageDistanceToFinishAction lDistToFinishAction;

		ScoringSystem::GetCarRacePosition(/* parameters */);
		ScoringSystem::GetCarData(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageDistanceToFinishAction>(/* parameters */);
	}
	{
		// BrnHUDMessageLogic.cpp:1408
		float32_t lfModRaceDist;

		// BrnHUDMessageLogic.cpp:1409
		float32_t lfEarliestMessageDistance;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Modulo(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
}

// BrnHUDMessageLogic.cpp:1317
void BrnGameState::HUDMessageLogic::GenerateFirstOrLastMessage(BrnGameState::ScoringSystem *  lpScoringSystem, float32_t  lfTimeStep, EActiveRaceCarIndex  lePlayerActiveRaceCarIndex, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpLastActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ScoringSystem::GetLast(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	CgsSystem::Time::operator<(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::operator+=(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::operator+(/* parameters */);
	CgsSystem::Time::operator>=(/* parameters */);
	{
		// BrnHUDMessageLogic.cpp:1363
		EActiveRaceCarIndex leLastCarIndex;

		ScoringSystem::GetLast(/* parameters */);
		{
			// BrnHUDMessageLogic.cpp:1369
			HUDMessageTookLastAction lTookLastAction;

			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRivalId(/* parameters */);
			AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageTookLastAction>(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsSystem::Time::operator<(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::operator+(/* parameters */);
	CgsSystem::Time::operator>=(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	ScoringSystem::GetLead(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	CgsSystem::Time::operator+=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnHUDMessageLogic.cpp:1336
		EActiveRaceCarIndex leLeadCarIndex;

		ScoringSystem::GetLead(/* parameters */);
		{
			// BrnHUDMessageLogic.cpp:1342
			HUDMessageTookLeadAction lTookLeadAction;

			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRivalId(/* parameters */);
			AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageTookLeadAction>(/* parameters */);
		}
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

// BrnHUDMessageLogic.cpp:1124
void BrnGameState::HUDMessageLogic::GenerateOnlineBlueTeamAreBehindYouMessage(BrnGameState::ScoringSystem *  lpScoringSystem, float32_t  lfTimeStep, EActiveRaceCarIndex  lePlayerActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHUDMessageLogic.cpp:1127
		int32_t liNumActiveCars;

		// BrnHUDMessageLogic.cpp:1128
		EActiveRaceCarIndex leRaceCarIndex;

		// BrnHUDMessageLogic.cpp:1129
		float_t lfDistanceToFinish;

		// BrnHUDMessageLogic.cpp:1130
		float_t lfLocalDistanceToFinish;

		// BrnHUDMessageLogic.cpp:1131
		bool lbBlueTeamIsBehindYou;

		// BrnHUDMessageLogic.cpp:1132
		bool lbFoundBlueTeam;

	}
	ScoringSystem::GetRaceCarDistanceToFinish(/* parameters */);
	ScoringSystem::GetRaceCarDistanceToFinish(/* parameters */);
	operator++(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::BlueTeamIsBehindYouAction>(/* parameters */);
}

// BrnHUDMessageLogic.cpp:1036
void BrnGameState::HUDMessageLogic::GenerateOnlineBlueTeamEscapingMessage(BrnGameState::ScoringSystem *  lpScoringSystem, float32_t  lfTimeStep, EActiveRaceCarIndex  lePlayerActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHUDMessageLogic.cpp:1039
		int32_t liNumActiveCars;

		// BrnHUDMessageLogic.cpp:1040
		EActiveRaceCarIndex leRaceCarIndex;

		// BrnHUDMessageLogic.cpp:1041
		float_t lfDistanceToFinish;

		// BrnHUDMessageLogic.cpp:1042
		float_t lfLocalDistanceToFinish;

		// BrnHUDMessageLogic.cpp:1043
		bool lbBlueTeamIsEscaping;

		// BrnHUDMessageLogic.cpp:1044
		bool lbFoundBlueTeam;

	}
	ScoringSystem::GetRaceCarDistanceToFinish(/* parameters */);
	ScoringSystem::GetRaceCarDistanceToFinish(/* parameters */);
	operator++(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::BlueTeamIsEscapingAction>(/* parameters */);
}

// BrnHUDMessageLogic.cpp:998
void BrnGameState::HUDMessageLogic::GenerateOnlineTeamChangeMessages(const VehicleOutputInterface *  lpVehicleOutputInterface, EActiveRaceCarIndex  lePlayerActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHUDMessageLogic.cpp:1000
		HUDMessageOnlineTeamChangeAction lOnlineTeamChangeAction;

		// BrnHUDMessageLogic.cpp:1001
		CrashingRaceCarInterface lCrashingVehicleInterface;

		// BrnHUDMessageLogic.cpp:1002
		EActiveRaceCarIndex leRaceCarIndex;

	}
	BrnPhysics::Vehicle::CrashingRaceCarInterface::SetFromVehicleOutputInterface(/* parameters */);
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<8u>::UnSetBit(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageOnlineTeamChangeAction>(/* parameters */);
	operator++(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnHUDMessageLogic.cpp:969
void BrnGameState::HUDMessageLogic::GenerateBurningHomeRunRunnerCrashMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHUDMessageLogic.cpp:971
		HUDMessageBHRRunnerCrashed lBHRRunnerCrashedAction;

		AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageBHRRunnerCrashed>(/* parameters */);
	}
}

// BrnHUDMessageLogic.cpp:940
void BrnGameState::HUDMessageLogic::GenerateStuntMessage(BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHUDMessageLogic.cpp:942
		HUDMessageStuntPerformed lStuntPerformedAction;

		// BrnHUDMessageLogic.cpp:943
		HUDMessageComboPerformed lComboOverAction;

		// BrnHUDMessageLogic.cpp:944
		HUDMessageStuntTimeUp lStuntTimeUpAction;

		ScoringSystem::GetStuntScorer(/* parameters */);
	}
	AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageComboPerformed>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageStuntPerformed>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageStuntTimeUp>(/* parameters */);
}

// BrnHUDMessageLogic.cpp:908
void BrnGameState::HUDMessageLogic::GenerateBurningHomeRunCheckpointMessage(BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHUDMessageLogic.cpp:910
		HUDMessageBHRCheckpointAction lBHRCheckpointAction;

	}
	ScoringSystem::GetOnlineLandmarksVisited(/* parameters */);
	ScoringSystem::GetTotalOnlineLandmarks(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageBHRCheckpointAction>(/* parameters */);
}

// BrnHUDMessageLogic.cpp:293
void BrnGameState::HUDMessageLogic::GenerateBurningHomeRunMessages(BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnHUDMessageLogic.cpp:748
void BrnGameState::HUDMessageLogic::DetectOnlineCrashes(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, const VehicleManagerOutputInterface::RaceCarCrashEventQueue *  lpRaceCarCrashQueue, float32_t  lfSimTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHUDMessageLogic.cpp:750
		int32_t liCrashedRaceCarQueueIndex;

		// BrnHUDMessageLogic.cpp:751
		int32_t liRaceCarCrashQueueLength;

		// BrnHUDMessageLogic.cpp:752
		int32_t liIndex;

		// BrnHUDMessageLogic.cpp:753
		EActiveRaceCarIndex leCrashedCarIndex;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetLength(/* parameters */);
		{
			// BrnHUDMessageLogic.cpp:760
			const const RaceCarCrashEvent & lRaceCarCrashEvent;

			CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetEvent(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
			{
				// BrnHUDMessageLogic.cpp:767
				int32_t liAllocatedIndex;

				CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::AllocateObject(/* parameters */);
				CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::operator[](/* parameters */);
				BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRivalId(/* parameters */);
				CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::operator[](/* parameters */);
				CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::operator[](/* parameters */);
			}
		}
		CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::IsObjectAllocated(/* parameters */);
		CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::operator[](/* parameters */);
		CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::FreeObject(/* parameters */);
		CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::FreeObject(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::operator[](/* parameters */);
		CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::operator[](/* parameters */);
		CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::operator[](/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsCarInShowtime(/* parameters */);
		{
			// BrnHUDMessageLogic.cpp:803
			HUDMessageXCrashesAction lCrashingEvent;

			CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::operator[](/* parameters */);
			CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>::operator[](/* parameters */);
			AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageXCrashesAction>(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnHUDMessageLogic.cpp:644
void BrnGameState::HUDMessageLogic::GenerateRivalCheckpointMessage(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHUDMessageLogic.cpp:646
		HUDMessageXReachesCheckpointAction lCheckpointAction;

		// BrnHUDMessageLogic.cpp:648
		EActiveRaceCarIndex leRaceCarIndex;

		// BrnHUDMessageLogic.cpp:649
		EActiveRaceCarIndex lePlayerCarIndex;

		// BrnHUDMessageLogic.cpp:651
		float32_t lfRaceCarDistToFinish;

		// BrnHUDMessageLogic.cpp:652
		float32_t lfPlayerDistToFinish;

		// BrnHUDMessageLogic.cpp:653
		float32_t lfCarSeparation;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	ScoringSystem::GetRaceCarDistanceToFinish(/* parameters */);
	ScoringSystem::GetRaceCarDistanceToFinish(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRivalId(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageXReachesCheckpointAction>(/* parameters */);
}

// BrnHUDMessageLogic.cpp:616
void BrnGameState::HUDMessageLogic::GeneratePlayerCheckpointMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHUDMessageLogic.cpp:618
		HUDMessagePlayerReachesCheckpointAction lPlayerCheckpointAction;

		AddGameAction<BrnGameState::GameStateModuleIO::HUDMessagePlayerReachesCheckpointAction>(/* parameters */);
	}
}

// BrnHUDMessageLogic.cpp:578
void BrnGameState::HUDMessageLogic::GenerateFinisherMessage(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHUDMessageLogic.cpp:580
		HUDMessageXFinishesAction lWinnerAction;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageXFinishesAction>(/* parameters */);
}

// BrnHUDMessageLogic.cpp:357
void BrnGameState::HUDMessageLogic::GenerateLeaderMessages(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHUDMessageLogic.cpp:359
		const RaceCarState * lpPlayerRaceCarState;

		// BrnHUDMessageLogic.cpp:361
		HUDMessageLeadingAction lLeadingMessageAction;

		// BrnHUDMessageLogic.cpp:363
		CgsID lLeaderCarId;

		// BrnHUDMessageLogic.cpp:365
		float32_t lfLeaderDistanceToFinish;

		// BrnHUDMessageLogic.cpp:366
		float32_t lfSecondDistanceToFinish;

		// BrnHUDMessageLogic.cpp:367
		float32_t lfDistanceSeparation;

		// BrnHUDMessageLogic.cpp:368
		float32_t lfTimeSeparation;

		// BrnHUDMessageLogic.cpp:370
		EActiveRaceCarIndex leLeaderCarIndex;

		// BrnHUDMessageLogic.cpp:371
		EActiveRaceCarIndex lePlayerIndex;

		// BrnHUDMessageLogic.cpp:373
		bool lbPlayerIsLeading;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	ScoringSystem::GetCarRacePosition(/* parameters */);
	ScoringSystem::GetPositionedCarDistanceToFinish(/* parameters */);
	ScoringSystem::GetPositionedCarDistanceToFinish(/* parameters */);
	ScoringSystem::GetPositionedCarIndex(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRivalId(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageLeadingAction>(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	ScoringSystem::GetRaceCarDistanceToFinish(/* parameters */);
}

// BrnHUDMessageLogic.cpp:1213
void BrnGameState::HUDMessageLogic::GenerateOnlineLeaderMilestoneMessage(BrnGameState::ScoringSystem *  lpScoringSystem, float32_t  lfTimeStep, EActiveRaceCarIndex  lePlayerActiveRaceCarIndex, bool  lbEventIsInProgress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHUDMessageLogic.cpp:1216
		int32_t liNumActiveCars;

		// BrnHUDMessageLogic.cpp:1217
		EActiveRaceCarIndex leRaceCarIndex;

		// BrnHUDMessageLogic.cpp:1218
		float_t lfBlueLeaderDistanceToFinish;

		// BrnHUDMessageLogic.cpp:1219
		int32_t liPosition;

		// BrnHUDMessageLogic.cpp:1220
		int32_t liBlueLeaderPosition;

		// BrnHUDMessageLogic.cpp:1221
		EActiveRaceCarIndex leBlueLeaderRaceCarIndex;

	}
	ScoringSystem::GetCarRacePosition(/* parameters */);
	operator++(/* parameters */);
	ScoringSystem::GetRaceCarDistanceToFinish(/* parameters */);
	{
		// BrnHUDMessageLogic.cpp:1293
		LeaderReachedBoundaryAction lBoundary;

		AddGameAction<BrnGameState::GameStateModuleIO::LeaderReachedBoundaryAction>(/* parameters */);
	}
	{
		// BrnHUDMessageLogic.cpp:1277
		LeaderReachedBoundaryAction lBoundary;

		AddGameAction<BrnGameState::GameStateModuleIO::LeaderReachedBoundaryAction>(/* parameters */);
	}
}

// BrnHUDMessageLogic.cpp:707
void BrnGameState::HUDMessageLogic::DetectCrashes(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, const VehicleManagerOutputInterface::RaceCarCrashEventQueue *  lpRaceCarCrashQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHUDMessageLogic.cpp:709
		int32_t liCrashedRaceCarQueueIndex;

		// BrnHUDMessageLogic.cpp:710
		int32_t liRaceCarCrashQueueLength;

		// BrnHUDMessageLogic.cpp:711
		EActiveRaceCarIndex leCrashedCarIndex;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetLength(/* parameters */);
	}
	{
		// BrnHUDMessageLogic.cpp:718
		const const RaceCarCrashEvent & lRaceCarCrashEvent;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetEvent(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
		{
			// BrnHUDMessageLogic.cpp:725
			HUDMessageXCrashesAction lCrashingEvent;

			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRivalId(/* parameters */);
			AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageXCrashesAction>(/* parameters */);
		}
	}
}

// BrnHUDMessageLogic.cpp:242
void BrnGameState::HUDMessageLogic::GenerateRaceModeMessages(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, BrnGameState::ScoringSystem *  lpScoringSystem, const VehicleManagerOutputInterface::RaceCarCrashEventQueue *  lpRaceCarCrashQueue, const InputBuffer::TakedownEventQueue *  lpTakedownQueue, EActiveRaceCarIndex  lePlayerRaceCarIndex, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnHUDMessageLogic.cpp:128
void BrnGameState::HUDMessageLogic::PostWorldUpdate(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, BrnGameState::GameStateModuleIO::EGameModeType  leCurrentGameModeType, BrnGameState::ScoringSystem *  lpScoringSystem, const VehicleManagerOutputInterface::RaceCarCrashEventQueue *  lpRaceCarCrashQueue, const VehicleOutputInterface *  lpVehicleOutputInterface, const InputBuffer::TakedownEventQueue *  lpTakedownQueue, float32_t  lfTimeStep, EActiveRaceCarIndex  lePlayerActiveRaceCarIndex, bool  lbEventIsInProgress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnHUDMessageLogic.cpp:101
void BrnGameState::HUDMessageLogic::PreWorldUpdate(InputBuffer::GameActionQueue *  lpOutputGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<13312,16>::Append<256, 16>(/* parameters */);
	CgsModule::VariableEventQueue<256,16>::Clear(/* parameters */);
	{
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

