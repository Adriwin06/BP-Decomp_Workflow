// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnScoringSystem.cpp:40
	const int32_t KI_NEAREST_SECONDS_BOUNDARY_FOR_TIME_OUT = 30;

	// BrnScoringSystem.cpp:43
	const float32_t KF_MAX_SPEED_FOR_INACTIVITY_MPH;

	// BrnScoringSystem.cpp:44
	const float32_t KF_MAX_BRAKE_FOR_INACTIVITY;

	// BrnScoringSystem.cpp:45
	const float32_t KF_MAX_GAS_FOR_INACTIVITY;

	// BrnScoringSystem.cpp:46
	const float32_t KF_MAX_STEERING_FOR_INACTIVITY;

	// BrnScoringSystem.cpp:49
	const float32_t KF_DIST_TO_FINISH_FUDGE_FACTOR;

}

// BrnScoringSystem.cpp:155
void BrnGameState::ScoringSystem::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:157
		int32_t liCarIndex;

		CarData::Release(/* parameters */);
	}
}

// BrnScoringSystem.cpp:439
void BrnGameState::ScoringSystem::SetCheckPointsForCarsWithinRace(int32_t  liNumCheckpoints) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:441
		int32_t liCurrentCarInMode;

	}
}

// BrnScoringSystem.cpp:1634
void BrnGameState::ScoringSystem::StartOnlineGameModeScoring(BrnGameState::GameStateModuleIO::EGameModeType  leModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnScoringSystem.cpp:310
void BrnGameState::ScoringSystem::ProcessFinishDistances(int32_t  liDistanceCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:312
		int32_t liDistanceIndex;

		SetCheckPointDistancesToFinishReady(/* parameters */);
	}
}

// BrnScoringSystem.cpp:64
void BrnGameState::RaceCarPositioningData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnScoringSystem.cpp:2250
void BrnGameState::ScoringSystem::SetRoadRageDetails(uint32_t  luGoldCount, uint32_t  luTimeExtension) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	PrepareRoadRageScoring(/* parameters */);
}

// BrnScoringSystem.cpp:2196
void BrnGameState::ScoringSystem::ClearNetworkRoundData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnScoringSystem.cpp:356
void BrnGameState::ScoringSystem::OnPlayerHitsRival(BrnPhysics::Vehicle::EImpactType  leImpactType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnScoringSystem.cpp:533
void BrnGameState::ScoringSystem::CompareRaceCarDistances(const void *  lpElem1, const void *  lpElem2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:535
		const RaceCarPositioningData * lpPosData1;

		// BrnScoringSystem.cpp:536
		const RaceCarPositioningData * lpPosData2;

	}
}

// BrnScoringSystem.cpp:809
void BrnGameState::ScoringSystem::SetNumberOfCarsForEliminator(uint32_t  luCarsThatHaventBeenEliminated) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnScoringSystem.cpp:1933
void BrnGameState::ScoringSystem::UpdateRoadRageModeScore(const ActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, float32_t  lfSimTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnScoringSystem.cpp:2270
void BrnGameState::ScoringSystem::AcheivedGold() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnScoringSystem.cpp:2390
void BrnGameState::ScoringSystem::DidPlayerFinishOnlineEventFirst(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:2392
		int32_t liPlayerFinishPosition;

	}
	BaseOnlineModeScoring::GetPlayerPosition(/* parameters */);
}

// BrnScoringSystem.cpp:290
void BrnGameState::ScoringSystem::ClearCumulativeData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:292
		int32_t liCarIndex;

		CarData::ClearCumulativeData(/* parameters */);
	}
}

// BrnScoringSystem.cpp:625
void BrnGameState::ScoringSystem::UpdateNumberOfCarsInMode(const ActiveRaceCarOutputInterface *  lpActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::GetLength(/* parameters */);
}

// BrnScoringSystem.cpp:820
void BrnGameState::ScoringSystem::GetCurrentLastPlaceActiveRaceCar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:822
		uint32_t lui;

		CgsContainers::Array<EActiveRaceCarIndex,7u>::Contains(/* parameters */);
		CgsContainers::Array<EActiveRaceCarIndex,7u>::FindFirstInstanceOf(/* parameters */);
	}
}

// BrnScoringSystem.cpp:1947
void BrnGameState::ScoringSystem::SetTimeLimitPerKm(float32_t  lfTimePerKmInSeconds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1949
		float32_t lfTimeLimitSeconds;

		// BrnScoringSystem.cpp:1950
		int32_t liTimeLimitSeconds;

	}
	CgsSystem::Time::operator+(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsSystem::Time::operator=(/* parameters */);
}

// BrnScoringSystem.cpp:2283
void BrnGameState::ScoringSystem::CheckRoadRageMedalAwarded(uint32_t  luTakedownCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	RoadRageModeScoring::SetTakeDownTarget(/* parameters */);
	{
		// BrnScoringSystem.cpp:2322
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnScoringSystem.cpp:1468
void BrnGameState::ScoringSystem::GetPointsLeader() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1470
		int32_t liHighestPoints;

		// BrnScoringSystem.cpp:1471
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex leScoreIndex;

		// BrnScoringSystem.cpp:1472
		RoadRulesRecvData::NetworkPlayerID lPlayerIDWithMostPoints;

	}
	GameStateModuleIO::operator++(/* parameters */);
	{
		// BrnScoringSystem.cpp:1476
		int32_t liPoints;

		CarData::GetCumulativePoints(/* parameters */);
		CarData::GetNetworkPlayerID(/* parameters */);
	}
}

// BrnScoringSystem.cpp:2459
void BrnGameState::ScoringSystem::ResetOnlineCheckpointsVisited(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:2461
		CarData * lpCarData;

		// BrnScoringSystem.cpp:2462
		CarScoreData * lpScoreData;

		// BrnScoringSystem.cpp:2463
		int32_t liLandmarkIndex;

	}
}

// BrnScoringSystem.cpp:2125
void BrnGameState::ScoringSystem::SaveNetworkRoundData(RoadRulesRecvData::NetworkPlayerID  lLocalPlayerID, Time &  lSystemTime, EActiveRaceCarIndex  leLocalPlayerRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:2127
		CarData * lpCarData;

	}
	GetCarData(/* parameters */);
	CgsSystem::Time::operator+=(/* parameters */);
	GetOnlineFinishPosition(/* parameters */);
	BaseOnlineModeScoring::GetPlayerPosition(/* parameters */);
	NetworkRoundData::SetPosition(/* parameters */);
	CgsSystem::Time::operator-(/* parameters */);
	CgsSystem::Time::operator+=(/* parameters */);
	NetworkRoundData::SetPosition(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnScoringSystem.cpp:1612
void BrnGameState::ScoringSystem::SetRoundStartPlayerTeam(EActiveRaceCarIndex  leActiveRaceCarIndex, BrnGameState::GameStateModuleIO::EPlayerTeam  lePlayerTeam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1616
		CarData * lpCarData;

	}
	CarData::SetRoundStartTeam(/* parameters */);
}

// BrnScoringSystem.cpp:1560
void BrnGameState::ScoringSystem::SetPlayerTeam(EActiveRaceCarIndex  leActiveRaceCarIndex, BrnGameState::GameStateModuleIO::EPlayerTeam  lePlayerTeam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1562
		CarData * lpCarData;

	}
	CgsSystem::Time::SetFloatVal(/* parameters */);
	CarData::SetTeam(/* parameters */);
}

// BrnScoringSystem.cpp:1519
void BrnGameState::ScoringSystem::SetPlayerStatus(EActiveRaceCarIndex  leActiveRaceCarIndex, BrnGameState::CarData::EPlayerStatus  lePlayerStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1522
		CarData * lpCarData;

	}
	CarData::SetStatus(/* parameters */);
}

// BrnScoringSystem.cpp:1115
void BrnGameState::ScoringSystem::UpdateCrashes(const VehicleManagerOutputInterface::RaceCarCrashEventQueue *  lpRaceCarCrashQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1119
		int32_t liCrashIndex;

		// BrnScoringSystem.cpp:1120
		CarData * lpCarData;

	}
	{
		// BrnScoringSystem.cpp:1124
		const RaceCarCrashEvent * lpCrashEvent;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetEvent(/* parameters */);
	}
	{
		// BrnScoringSystem.cpp:1131
		EActiveRaceCarIndex leCrashedActiveRaceCarIndex;

	}
}

// BrnScoringSystem.cpp:1061
void BrnGameState::ScoringSystem::UpdatePaybackTakedowns(const GameStateToNetworkInterface::DirtyTrickQueue *  lpInputPaybackEventQueue, const GameStateToNetworkInterface::DirtyTrickQueue *  lpOutputPaybackEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1063
		CarData * lpAggressorCarData;

		// BrnScoringSystem.cpp:1064
		CarData * lpVictimCarData;

		// BrnScoringSystem.cpp:1065
		GameStateToNetworkInterface::DirtyTrickQueue lPaybackEventQueue;

		// BrnScoringSystem.cpp:1072
		int32_t liPaybackQueueIndex;

		CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Clear(/* parameters */);
	}
	CgsModule::EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28>::Construct(/* parameters */);
	Append<28>(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Append<28>(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	{
		// BrnScoringSystem.cpp:1075
		DirtyTrickEvent lEvent;

		CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetEvent(/* parameters */);
	}
}

// BrnScoringSystem.cpp:1776
void BrnGameState::ScoringSystem::UpdateCrashModeScore(const ActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, const VehicleOutputInterface::PhysicalTrafficStateQueue *  lpTrafficStateQueue, float32_t  lfSimTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnScoringSystem.cpp:1789
void BrnGameState::ScoringSystem::UpdateStuntAttackModeScore(const ActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, float32_t  lfSimTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnScoringSystem.cpp:224
void BrnGameState::ScoringSystem::ClearData(bool  lbResetCarData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:226
		int32_t liCarIndex;

		// BrnScoringSystem.cpp:227
		uint32_t luCheckpointIndex;

	}
	ClearModeTimer(/* parameters */);
	ClearTimeLimit(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	CarData::Clear(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	CarData::SetStatus(/* parameters */);
	CarData::SetDriftDistance(/* parameters */);
	CarData::SetNetworkPlayerID(/* parameters */);
	CarData::SetCarID(/* parameters */);
	CarData::SetCurrentCheckPoint(/* parameters */);
	CarData::SetTeam(/* parameters */);
	CarData::SetRoundStartTeam(/* parameters */);
	CarData::SetActiveRaceCarIndex(/* parameters */);
	SetCheckPointDistancesToFinishReady(/* parameters */);
	CgsContainers::Array<EActiveRaceCarIndex,7u>::Construct(/* parameters */);
}

// BrnScoringSystem.cpp:212
void BrnGameState::ScoringSystem::OnModeEnd(bool  lbResetCarData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnScoringSystem.cpp:179
void BrnGameState::ScoringSystem::OnModeStart(const BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType, const GameModeParams *  lpGameModeParams, const bool  lbResetCarData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnScoringSystem.cpp:82
void BrnGameState::ScoringSystem::Construct(StuntModeScoring::AchievementManager *  lpAchievementManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:84
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerScoringIndex;

	}
	ClearDisconnectedPlayers(/* parameters */);
	GameStateModuleIO::operator++(/* parameters */);
	BurnoutSkillzData::Clear(/* parameters */);
}

// BrnScoringSystem.cpp:371
void BrnGameState::ScoringSystem::RegisterFinishForCar(bool  lbIsOnline, EActiveRaceCarIndex  leActiveRaceCarIndex, const const Time &  lCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:373
		CarData * lpCarData;

		// BrnScoringSystem.cpp:381
		CarScoreData * lpCarScoreData;

		// BrnScoringSystem.cpp:384
		uint32_t luCompletedLaps;

	}
	{
		// BrnScoringSystem.cpp:390
		Time lLapTime;

		// BrnScoringSystem.cpp:391
		uint32_t luLapIndex;

		CgsSystem::Time::operator-(/* parameters */);
		CgsSystem::Time::operator-=(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
		CgsSystem::Time::operator+=(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnScoringSystem.cpp:1802
void BrnGameState::ScoringSystem::UpdateDistanceToPlayer(const ActiveRaceCarOutputInterface *  lpActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1804
		uint32_t luCarIndex;

		// BrnScoringSystem.cpp:1805
		Vector3 lPlayerPos;

		// BrnScoringSystem.cpp:1806
		Vector3 lRaceCarPos;

		// BrnScoringSystem.cpp:1807
		Vector3 lDifference;

		// BrnScoringSystem.cpp:1808
		CarData * lpCarData;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition(/* parameters */);
	}
	CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::GetLength(/* parameters */);
	{
		// BrnScoringSystem.cpp:1814
		EActiveRaceCarIndex leActiveRaceCarIndex;

	}
	CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::operator[](/* parameters */);
	CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::operator[](/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		// BrnScoringSystem.cpp:1818
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::GetLength(/* parameters */);
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

// BrnScoringSystem.cpp:341
void BrnGameState::ScoringSystem::OnPlayerDoesATakedown(Time &  lCurrentTime, InputBuffer::GameActionQueue *  lpOutputActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::Time(/* parameters */);
}

// BrnScoringSystem.cpp:2414
void BrnGameState::ScoringSystem::OnRoadRagePlayerCrashed(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, BrnGameState::GameStateModuleIO::ERoadRageCrashType  leRoadRageCrashType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:2416
		RoadRagePlayerDamageAction lRoadRagePlayerDamageAction;

		// BrnScoringSystem.cpp:2417
		float32_t lfAmountWrecked;

		// BrnScoringSystem.cpp:2418
		int8_t liAmountOfCrashesLeft;

	}
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::RoadRagePlayerDamageAction>(/* parameters */);
	{
		// BrnScoringSystem.cpp:2436
		RequestGameTrainingAction lRequestTraining;

		AddGameAction<BrnGameState::GameStateModuleIO::RequestGameTrainingAction>(/* parameters */);
	}
}

// BrnScoringSystem.cpp:1879
void BrnGameState::ScoringSystem::DetectPlayerStationary(const ActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, float32_t  lfSimTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1881
		EActiveRaceCarIndex lePlayerActiveRaceCarIndex;

		// BrnScoringSystem.cpp:1883
		const RCEntityActiveRaceCarOutputInterface::RaceCarState * lpPlayerState;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
	rw::math::vpu::Abs<float>(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

// BrnScoringSystem.cpp:2014
void BrnGameState::ScoringSystem::UpdateGeneralStats(const ActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, float32_t  lfSimTimeStep, bool  lbHasCountdownFinished) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:2016
		int32_t liRaceCarIndex;

		// BrnScoringSystem.cpp:2017
		const int32_t liNumberOfActiveRaceCars;

		CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::GetLength(/* parameters */);
		HaveCarsBeenSortedIntoRacePositions(/* parameters */);
		{
			// BrnScoringSystem.cpp:2032
			CarData * lpLeadCarData;

			// BrnScoringSystem.cpp:2033
			CarData * lpLastCarData;

			CgsSystem::Time::Time(/* parameters */);
			CgsSystem::Time::operator+=(/* parameters */);
		}
		{
			// BrnScoringSystem.cpp:2066
			const RCEntityActiveRaceCarOutputInterface::RaceCarState * lpState;

			// BrnScoringSystem.cpp:2067
			CarData * lpCarData;

			// BrnScoringSystem.cpp:2068
			CarScoreData * lpCarScoreData;

			// BrnScoringSystem.cpp:2069
			EActiveRaceCarIndex leActiveCarIndex;

			CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::operator[](/* parameters */);
		}
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		rw::math::fpu::Abs<float>(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		CgsSystem::Time::operator+=(/* parameters */);
		CarData::SetDriftDistance(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CarData::IncrementDriftDistance(/* parameters */);
	rw::math::fpu::Abs<float>(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	{
		// BrnScoringSystem.cpp:2022
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::operator+=(/* parameters */);
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

// BrnScoringSystem.cpp:643
void BrnGameState::ScoringSystem::UpdateRacePositions(const ActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, const GlobalRaceCarOutputInterface *  lpGlobalRaceCarInterface, const AICarOutputInterface *  lpAICarOutputInterface, BrnGameState::ModeManager *  lpModeManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:647
		uint8_t luCarIndex;

		// BrnScoringSystem.cpp:648
		CarData * lpCarData;

		// BrnScoringSystem.cpp:719
		uint32_t liCurrentCarInMode;

		// BrnScoringSystem.cpp:724
		int32_t liActualCarsLeftInMode;

		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		{
			// BrnScoringSystem.cpp:652
			EActiveRaceCarIndex leActiveRaceCarIndex;

			// BrnScoringSystem.cpp:653
			RaceCarPositioningData * lpRaceCarPositioningData;

			// BrnScoringSystem.cpp:665
			float32_t lfDistanceToNextCheckpoint;

			// BrnScoringSystem.cpp:666
			float32_t lfCheckpointDistanceToFinish;

			{
				// BrnScoringSystem.cpp:708
				CgsDev::StrStream lStrStream;

			}
		}
		CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::GetLength(/* parameters */);
		CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::operator[](/* parameters */);
		BrnAI::AIModuleIO::AICarOutputInterface::GetAICarDistanceToCheckpoint(/* parameters */);
		rw::math::fpu::IsValid(/* parameters */);
		rw::math::fpu::IsValid(/* parameters */);
		CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::GetLength(/* parameters */);
		CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnScoringSystem.cpp:687
		float32_t lfGuessDistToCheckpoint;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	}
	{
		// BrnScoringSystem.cpp:707
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	ModeManager::GetCheckpointPosition(/* parameters */);
	ModeManager::GetTriggerData(/* parameters */);
	LandmarkIndex::operator std::int32_t(/* parameters */);
	BrnTrigger::TriggerData::GetLandmarkFromRegionIndex(/* parameters */);
	BrnTrigger::BoxRegion::GetPosition(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		// BrnScoringSystem.cpp:730
		EActiveRaceCarIndex leActiveRaceCarIndex;

	}
	CgsContainers::Array<EActiveRaceCarIndex,7u>::Contains(/* parameters */);
	{
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnScoringSystem.cpp:598
void BrnGameState::ScoringSystem::UpdateTeamStats(float_t  lfTimestep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:600
		EActiveRaceCarIndex leRaceCarIndex;

		// BrnScoringSystem.cpp:601
		CarData * lpCarData;

		{
			// BrnScoringSystem.cpp:609
			CarScoreData * lpCarScoreData;

			CgsSystem::Time::Time(/* parameters */);
			CgsSystem::Time::operator+=(/* parameters */);
			CgsSystem::Time::Time(/* parameters */);
			CgsSystem::Time::operator+=(/* parameters */);
		}
		operator++(/* parameters */);
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
	CgsDev::StrStream::StrStream(/* parameters */);
}

// BrnScoringSystem.cpp:894
void BrnGameState::ScoringSystem::StopModeTimer(const const Time &  lCurrentTime, EActiveRaceCarIndex  leLocalPlayerActiveRaceCarIndex, bool  lbIsOnline) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:898
		CarData * lpCarData;

		// BrnScoringSystem.cpp:899
		CarScoreData * lpCarScore;

		// BrnScoringSystem.cpp:901
		Time lTotalTime;

		// BrnScoringSystem.cpp:913
		EActiveRaceCarIndex leRaceCarIndex;

	}
	CgsSystem::Time::operator-(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	operator++(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	ClearModeTimer(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	{
		// BrnScoringSystem.cpp:917
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnScoringSystem.cpp:918
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
}

// BrnScoringSystem.cpp:1208
void BrnGameState::ScoringSystem::UpdateCumulativeResults(uint32_t  luSeed, int32_t  liCurrentRound, bool  lbIsOnlineGameMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1210
		EActiveRaceCarIndex leRaceCarIndex;

		// BrnScoringSystem.cpp:1211
		CarData * lpCarData;

		CarData::IncrementCumulativePoints(/* parameters */);
		CarData::SetRoundDisconnected(/* parameters */);
		operator++(/* parameters */);
	}
	CarData::GetNetworkPlayerID(/* parameters */);
	GetPlayerDisconnected(/* parameters */);
}

// BrnScoringSystem.cpp:1250
void BrnGameState::ScoringSystem::WriteDataToOutput(ScoringOutputInterface *  lpScoringOutputInterface, OnlineScoringOutputInterface *  lpOnlineScoringOutputInterface, bool  lbIsOnlineGameMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1253
		EActiveRaceCarIndex leRaceCarIndex;

		// BrnScoringSystem.cpp:1254
		const CarData * lpCarData;

		// BrnScoringSystem.cpp:1255
		CarData lEmptyCarData;

		CarData(/* parameters */);
	}
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CarData::Construct(/* parameters */);
	operator++(/* parameters */);
	CrashModeScoring::GetNumCarsCrashed(/* parameters */);
	StuntModeScoring::GetCurrentStunts(/* parameters */);
}

// BrnScoringSystem.cpp:1710
void BrnGameState::ScoringSystem::AreAllRemotePlayersDisconnected(EActiveRaceCarIndex  leLocalPlayerActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1713
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnScoringSystem.cpp:1714
		CarData * lpCarData;

	}
	operator++(/* parameters */);
}

// BrnScoringSystem.cpp:1743
void BrnGameState::ScoringSystem::GetNumberOfNonDisconnectedPlayers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1745
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnScoringSystem.cpp:1746
		int32_t liNumPlayers;

		// BrnScoringSystem.cpp:1747
		CarData * lpCarData;

		operator++(/* parameters */);
	}
}

// BrnScoringSystem.cpp:1974
void BrnGameState::ScoringSystem::StoreCarIds(const ActiveRaceCarOutputInterface *  lpActiveRcOutputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1976
		CarData * lpCarData;

		// BrnScoringSystem.cpp:1979
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnScoringSystem.cpp:1990
		uint8_t luCarIndex;

		// BrnScoringSystem.cpp:1991
		uint8_t luNumCars;

		CarData::SetCarID(/* parameters */);
		operator++(/* parameters */);
		CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::GetLength(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetCarModelId(/* parameters */);
		CarData::SetCarID(/* parameters */);
		CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::operator[](/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnScoringSystem.cpp:1372
void BrnGameState::ScoringSystem::GetHighestLobbyRoadRuleScore(Road::ChallengeIndex  liIndex, BrnStreetData::ScoreType  leScoreType, int32_t *  lpiScore, EActiveRaceCarIndex *  lpeActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1374
		ChallengeHighScoreEntry lPlayerHighScore;

		// BrnScoringSystem.cpp:1375
		int32_t liHighScore;

		// BrnScoringSystem.cpp:1376
		EActiveRaceCarIndex leHighScoreRaceCarIndex;

		// BrnScoringSystem.cpp:1377
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerIndex;

	}
	CarData::GetRoadRulesScores(/* parameters */);
	GameStateModuleIO::operator++(/* parameters */);
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	{
		// BrnScoringSystem.cpp:1406
		int32_t liScore;

		// BrnScoringSystem.cpp:1407
		PlayerName lPlayerName;

		BrnStreetData::ChallengeHighScoreEntry::GetScore(/* parameters */);
	}
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	CarData::GetActiveRaceCarIndex(/* parameters */);
}

// BrnScoringSystem.cpp:1844
void BrnGameState::ScoringSystem::DetectPlayerDrivingWrongWay(const ActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, float32_t  lfSimTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1846
		float32_t lfPrevDistanceToFinish;

		// BrnScoringSystem.cpp:1847
		EActiveRaceCarIndex lePlayerActiveRaceCarIndex;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	GetRaceCarDistanceToFinish(/* parameters */);
	GetCarData(/* parameters */);
}

// BrnScoringSystem.cpp:846
void BrnGameState::ScoringSystem::GetRaceCarTotalTime(EActiveRaceCarIndex  leActiveRaceCarIndex, const const Time &  lCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:849
		const CarData * lpCarData;

		// BrnScoringSystem.cpp:850
		const CarScoreData * lpCarScore;

		// BrnScoringSystem.cpp:852
		Time lTotalTime;

		// BrnScoringSystem.cpp:853
		uint32_t luLapIndex;

	}
	GetCarData(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::operator-(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::operator+=(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
}

// BrnScoringSystem.cpp:963
void BrnGameState::ScoringSystem::GetRaceCarFastestLapTime(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnScoringSystem.cpp:967
	Time & lFastestTime;

	{
		// BrnScoringSystem.cpp:967
		Time lFastestTime;

		// BrnScoringSystem.cpp:968
		const CarData * lpCarData;

		// BrnScoringSystem.cpp:969
		const CarScoreData * lpCarScore;

		// BrnScoringSystem.cpp:982
		uint32_t luLapIndex;

	}
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	GetCarData(/* parameters */);
	CgsSystem::Time::operator<(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
}

// BrnScoringSystem.cpp:1153
void BrnGameState::ScoringSystem::UpdateNetworkPlayerResults(const PlayerResultsInterface *  lpNetworkResultsInterface, bool  lbIsOnlineGameMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1155
		uint32_t luResultIndex;

		// BrnScoringSystem.cpp:1156
		bool lbDisconnected;

		// BrnScoringSystem.cpp:1157
		CarData * lpCarData;

	}
	{
		// BrnScoringSystem.cpp:1163
		const PlayerResultsData * lpPlayerResultsData;

		BrnNetwork::BrnNetworkModuleIO::PlayerResultsInterface::GetPlayerResultsData(/* parameters */);
		GetPlayerDisconnected(/* parameters */);
		CgsSystem::Time::GetFloatVal(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
	}
	GetCarData(/* parameters */);
}

// BrnScoringSystem.cpp:1434
void BrnGameState::ScoringSystem::GetPointsLoser() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1436
		int32_t liLowestPoints;

		// BrnScoringSystem.cpp:1437
		EActiveRaceCarIndex leLowestRaceCarIndex;

		// BrnScoringSystem.cpp:1438
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnScoringSystem.cpp:1439
		const CarData * lpCarData;

		GetCarData(/* parameters */);
		operator++(/* parameters */);
	}
	CarData::GetCumulativePoints(/* parameters */);
}

// BrnScoringSystem.cpp:1497
void BrnGameState::ScoringSystem::GetPlayerStatus(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1500
		const CarData * lpCarData;

	}
	GetCarData(/* parameters */);
	GetCarData(/* parameters */);
	CarData::GetStatus(/* parameters */);
}

// BrnScoringSystem.cpp:1538
void BrnGameState::ScoringSystem::GetPlayerTeam(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1541
		const CarData * lpCarData;

	}
	GetCarData(/* parameters */);
	CarData::GetTeam(/* parameters */);
}

// BrnScoringSystem.cpp:1003
void BrnGameState::ScoringSystem::UpdateTakedowns(const InputBuffer::TakedownEventQueue *  lpTakedownQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1008
		int32_t liTakedownQueueIndex;

	}
	{
		// BrnScoringSystem.cpp:1011
		TakedownEvent lAggressorTakedownEvent;

		// BrnScoringSystem.cpp:1013
		EActiveRaceCarIndex leAggressorRaceCarIndex;

		// BrnScoringSystem.cpp:1017
		EActiveRaceCarIndex leVictimRaceCarIndex;

		// BrnScoringSystem.cpp:1021
		CarData * lpAggressorCarData;

		// BrnScoringSystem.cpp:1022
		CarData * lpVictimCarData;

		CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetEvent(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetEvent(/* parameters */);
	}
}

// BrnScoringSystem.cpp:458
void BrnGameState::ScoringSystem::RegisterCheckpointForCar(BrnGameState::GameStateModuleIO::EGameModeType  leModeType, int32_t  liCheckpointIndex, LandmarkIndex  lLandmarkIndex, EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[25] __FUNCTION__;

	{
		// BrnScoringSystem.cpp:465
		CarData * lpCarData;

		// BrnScoringSystem.cpp:473
		CarScoreData * lpCarScoreData;

	}
	{
		// BrnScoringSystem.cpp:482
		int32_t liIndex;

		IsOnlineLandmarkVisited(/* parameters */);
		{
			// BrnScoringSystem.cpp:486
			int32_t liLandmarksVisited;

		}
	}
}

// BrnScoringSystem.cpp:1588
void BrnGameState::ScoringSystem::GetRoundStartPlayerTeam(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1591
		const CarData * lpCarData;

	}
	GetCarData(/* parameters */);
	CarData::GetRoundStartTeam(/* parameters */);
}

// BrnScoringSystem.cpp:1676
void BrnGameState::ScoringSystem::IsBlueTeamEliminated() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1678
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnScoringSystem.cpp:1679
		const CarData * lpCarData;

		GetCarData(/* parameters */);
		operator++(/* parameters */);
	}
}

// BrnScoringSystem.cpp:2209
void BrnGameState::ScoringSystem::GetRaceCarStandingsPosition(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:2211
		int32_t liRaceCarPoints;

		// BrnScoringSystem.cpp:2212
		int32_t liRaceCarPosition;

		// BrnScoringSystem.cpp:2213
		const CarData * lpCarData;

	}
	GetCarData(/* parameters */);
	CarData::GetCumulativePoints(/* parameters */);
	GetCarData(/* parameters */);
	GameStateModuleIO::operator++(/* parameters */);
	operator++(/* parameters */);
}

// BrnScoringSystem.cpp:2343
void BrnGameState::ScoringSystem::GetNextTeamMember(EActiveRaceCarIndex  leLastActiveRaceCarIndex, BrnGameState::GameStateModuleIO::EPlayerTeam  leTeam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:2345
		EActiveRaceCarIndex leActiveRaceCarIndex;

	}
	operator++(/* parameters */);
	{
		// BrnScoringSystem.cpp:2367
		const CarData * lpCarData;

		GetCarData(/* parameters */);
	}
	operator++(/* parameters */);
}

// BrnScoringSystem.cpp:1332
void BrnGameState::ScoringSystem::GetOnlinePlayersChallengeHighScores(Road::ChallengeIndex  liIndex, ChallengeHighScoreEntry *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:1334
		ChallengeHighScoreEntry lPlayerHighScore;

		// BrnScoringSystem.cpp:1335
		ChallengeHighScoreEntry lCombinedHighScore;

		// BrnScoringSystem.cpp:1336
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerIndex;

	}
	CarData::GetRoadRulesScores(/* parameters */);
	GameStateModuleIO::operator++(/* parameters */);
}

// BrnScoringSystem.cpp:132
void BrnGameState::ScoringSystem::Prepare(HeapMalloc *  lpNetworkHeapMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnScoringSystem.cpp:134
		int32_t liCarIndex;

	}
	CarData::Prepare(/* parameters */);
	CarData::ResetRoadRulesScores(/* parameters */);
}

