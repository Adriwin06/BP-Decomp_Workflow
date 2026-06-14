// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnModeManager.cpp:49
	using GameStateModuleIO;

	// BrnModeManager.cpp:52
	const float32_t KF_OFFLINE_RACE_TRAFFIC_DENSITY_SCALE;

	// BrnModeManager.cpp:55
	const float32_t KF_ONLINE_ROAD_RAGE_SECONDS_PER_KM;

	// BrnModeManager.cpp:58
	const float32_t KI_TIME_TILL_FIRST_ELIMINATION;

	// BrnModeManager.cpp:61
	const float32_t KF_ONLINE_RACE_TIME_LIMIT_SECONDS;

	// BrnModeManager.cpp:64
	const float32_t KF_ONLINE_FREEBURN_TIME_LIMIT_SECONDS;

	// BrnModeManager.cpp:67
	const float32_t KF_TOTALLED_TIME_MODE_END;

	// BrnModeManager.cpp:70
	const float32_t[17] KAF_MODE_COUNTDOWN_TIME_SECONDS;

	// BrnModeManager.cpp:93
	const float32_t KF_ONLINE_ROAD_RAGE_BLUE_TEAM_HEADSTART;

	// BrnModeManager.cpp:94
	const float32_t KF_ONLINE_BURNING_HOME_RUN_BLUE_TEAM_HEADSTART;

	// BrnModeManager.cpp:97
	const int32_t KI_NUM_RIVALS_FINISHED_FOR_TIME_OUT = 3;

	// BrnModeManager.cpp:100
	const float32_t KF_PUSHED_FORWARD_GRID_DIST;

	// BrnModeManager.cpp:103
	const float32_t KF_TIME_UP_OUTRO_SECONDS;

	// BrnModeManager.cpp:105
	const float32_t KF_TIME_IN_FREEBURN_FOR_TRAINING_TIP;

	// BrnModeManager.cpp:107
	const float32_t KF_TIME_ONLINE_FOR_WIN_CAR_TIP;

}

// BrnModeManager.cpp:123
struct BrnGameState::GridPositionAndScoreData {
	// BrnModeManager.cpp:125
	int32_t liGridPosition;

	// BrnModeManager.cpp:126
	const CarData * lpCarData;

}

// BrnModeManager.cpp:139
void BrnGameState::ModeManager::ApplyVehicleList(const VehicleList *  lpVehicleList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:1552
void BrnGameState::ModeManager::UpdateConsecutiveLosses(bool  lbPlayerWonEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:3917
void BrnGameState::ModeManager::GetProgressionManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:3911
void BrnGameState::ModeManager::GetProgressionManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:4777
void BrnGameState::ModeManager::IsThisALandMarkBasedGameFlow(BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:5155
void BrnGameState::ModeManager::OnEnterRoad(SpanBase::RoadIndex  liRoadIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:5266
void BrnGameState::ModeManager::GetAchievementManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:356
void BrnGameState::ModeManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:4620
void BrnGameState::ModeManager::GetCurrentFreeburnChallengeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:2248
void BrnGameState::ModeManager::ResultsAccept() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:1648
void BrnGameState::ModeManager::UserCancelCurrentMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetAbortedDuringIntro(/* parameters */);
	SetAborted(/* parameters */);
}

// BrnModeManager.cpp:2297
void BrnGameState::ModeManager::FinishOfflineModeIntro() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsOnlineGameMode(/* parameters */);
}

// BrnModeManager.cpp:2264
void BrnGameState::ModeManager::FinishedSplashScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetCurrentGameModeState(/* parameters */);
}

// BrnModeManager.cpp:2634
void BrnGameState::ModeManager::SetTeamsGameParams(GameModeParams *  lpOnlineModeParams, const StartNetworkGameEvent *  lpStartNetworkGameEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:2636
		int32_t liGridPosition;

	}
}

// BrnModeManager.cpp:2654
void BrnGameState::ModeManager::SetOnlineRoadRageTeamsGameParams(GameModeParams *  lpOnlineModeParams, const StartNetworkGameEvent *  lpStartNetworkGameEvent, int32_t  liRoundNumber) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:2656
		int32_t liGridPosition;

		// BrnModeManager.cpp:2657
		BrnGameState::GameStateModuleIO::EPlayerTeam lePlayerTeam;

	}
	GameStateModuleIO::StartNetworkGameEvent::GetPlayerTeam(/* parameters */);
}

// BrnModeManager.cpp:2702
void BrnGameState::ModeManager::PlayerFinishedMode(const PlayerFinishedModeEvent *  lpPlayerFinishedModeEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetTimedOut(/* parameters */);
	SetCrashedOut(/* parameters */);
	GameStateModule::SetInActiveGameModeState(/* parameters */);
	FinishCurrentModeNextUpdate(/* parameters */);
}

// BrnModeManager.cpp:4151
void BrnGameState::ModeManager::SetOnlineRaceCars(GameModeParams *  lpGameModeParams, const StartNetworkGameEvent *  lpStartNetworkGameEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:4153
		int32_t liGridPosition;

		// BrnModeManager.cpp:4154
		BrnProgression::ProgressionManager * lpProgressionManager;

		GameStateModule::GetProgressionManager(/* parameters */);
	}
	{
		// BrnModeManager.cpp:4179
		float32_t lfBaseDeformationAmount;

		GameModeParams::SetOnlineFreeburnDeformationAmount(/* parameters */);
	}
	BrnProgression::ProgressionManager::GetPlayerBaseDeformAmount(/* parameters */);
	BrnProgression::CarData::GetUnlockDeformationAmount(/* parameters */);
}

// BrnModeManager.cpp:2472
void BrnGameState::ModeManager::PlayerTriggersLandmark(LandmarkIndex  lLandmarkIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModule::GetProgressionManager(/* parameters */);
	SetPlayerIsInStartRegion(/* parameters */);
}

// BrnModeManager.cpp:2106
void BrnGameState::ModeManager::HandleCheckpointDistanceResponse(const ModeManagerRouteInfoEvent *  lpRouteInfoEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ScoringSystem::SetCheckpointDistances(/* parameters */);
}

// BrnModeManager.cpp:3793
void BrnGameState::ModeManager::ChooseStartGridIndex(const Landmark *  lpStartLandmark, const Landmark *  lpNextLandmark) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:3795
		Vector3 lTargetPos;

		// BrnModeManager.cpp:3796
		int32_t liStartGridIndex;

		// BrnModeManager.cpp:3797
		int32_t liCurrentBestIndex;

		// BrnModeManager.cpp:3798
		float32_t lfMinAngle;

	}
	BrnTrigger::BoxRegion::GetPosition(/* parameters */);
	{
		// BrnModeManager.cpp:3809
		const StartingGrid * lpTestStartGrid;

		// BrnModeManager.cpp:3810
		Vector3 lStartAt;

		// BrnModeManager.cpp:3811
		Vector3 lStartToTarget;

		// BrnModeManager.cpp:3812
		float32_t lfCurrentAngle;

		// BrnModeManager.cpp:3819
		const rw::math::vpu::Vector3 lStartPos;

		BrnTrigger::Landmark::GetStartingGrid(/* parameters */);
		rw::math::vpu::AngleBetweenVectors(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		{
			{
			}
		}
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
		{
			{
				{
				}
			}
		}
		{
		}
		{
		}
		rw::math::vpu::CosAngleBetweenNormalizedVectors(/* parameters */);
		vec_abs(/* parameters */);
		vec_madd(/* parameters */);
		vec_sub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		std(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_nmsub(/* parameters */);
		rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	}
}

// BrnModeManager.cpp:3847
void BrnGameState::ModeManager::ResetNextLandmarks(bool  lbUseFirstWaypoint) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:3849
		int32_t liRaceCarIndex;

		// BrnModeManager.cpp:3850
		int32_t liFirstLandmarkIndex;

		CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
		CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	}
}

// BrnModeManager.cpp:3873
void BrnGameState::ModeManager::ClearLandmarkAndFinishLineData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:3880
		int32_t liLandmarkIndex;

	}
}

// BrnModeManager.cpp:305
void BrnGameState::ModeManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:316
		uint32_t luModeIndex;

	}
}

// BrnModeManager.cpp:2054
void BrnGameState::ModeManager::UpdateCheckpointDistanceRequests(InputBuffer::GameActionQueue *  lpGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:2059
		LandmarkRouteRequestEvent lRouteRequest;

		// BrnModeManager.cpp:2060
		const Landmark * lpCurrentLandmark;

		// BrnModeManager.cpp:2061
		const Landmark * lpDestinationLandmark;

		// BrnModeManager.cpp:2063
		uint32_t luStartCheckpointIndex;

		// BrnModeManager.cpp:2064
		uint32_t luDestinationCheckpointIndex;

		LandmarkRouteRequestEvent(/* parameters */);
		GetTriggerData(/* parameters */);
		LandmarkIndex::operator std::int32_t(/* parameters */);
		BrnTrigger::TriggerData::GetLandmarkFromRegionIndex(/* parameters */);
		GetTriggerData(/* parameters */);
		LandmarkIndex::operator std::int32_t(/* parameters */);
		BrnTrigger::TriggerData::GetLandmarkFromRegionIndex(/* parameters */);
		BrnTrigger::BoxRegion::GetPosition(/* parameters */);
		BrnTrigger::BoxRegion::GetPosition(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnModeManager.cpp:4665
void BrnGameState::ModeManager::GetPursuitTargetForGlobalRaceCar(EGlobalRaceCarIndex  leGlobalRaceCar, PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *  lpGlobalRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:4670
		CgsID lRivalId;

		// BrnModeManager.cpp:4673
		const Rival * lpRival;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::GetRivalId(/* parameters */);
	BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnModeManager.cpp:4691
void BrnGameState::ModeManager::GetPursuitTargetForActiveRaceCar(EActiveRaceCarIndex  leActiveRaceCar, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:4696
		CgsID lRivalId;

		// BrnModeManager.cpp:4699
		const Rival * lpRival;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRivalId(/* parameters */);
	BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnModeManager.cpp:793
void BrnGameState::ModeManager::ProcessPlayerCrashes(const PostWorldInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:795
		const VehicleManagerOutputInterface::RaceCarCrashEventQueue * lpCrashQueue;

		// BrnModeManager.cpp:796
		int32_t liEventIndex;

		GameStateModuleIO::PostWorldInputBuffer::GetRaceCarCrashEventQueue(/* parameters */);
		{
			// BrnModeManager.cpp:802
			const RaceCarCrashEvent * lpEvent;

			CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetEvent(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnModeManager.cpp:2279
void BrnGameState::ModeManager::FinishedMapPan() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:2283
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnModeManager.cpp:3897
void BrnGameState::ModeManager::GetNumberOfCarsInFlyby() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModule::GetFlybyManager(/* parameters */);
	IsOnlineGameMode(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnModeManager.cpp:4559
void BrnGameState::ModeManager::HandleSuccessUpdateEvent(const TimerStatusInterface *  lpTimerStatusInterface, const FburnChallengeSuccessUpdateEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:5188
void BrnGameState::ModeManager::NetworkPlayerAdded(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID, InputBuffer::GameActionQueue *  lpActionQueue, bool  lbIsLocalPlayerHost) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:4527
void BrnGameState::ModeManager::HandleRemoteTriggeredFreeburnChallengeMessage(CgsID  lChallengeID, InputBuffer::GameActionQueue *  lpOutputActionQueue, bool  lbIsHost) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:4510
void BrnGameState::ModeManager::HandleRemoteStartFreeburnChallengeMessage(CgsID  lChallengeID, InputBuffer::GameActionQueue *  lpOutputActionQueue, bool  lbLocalPlayerIsHost) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:4633
void BrnGameState::ModeManager::OnProfileLoaded() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:1146
void BrnGameState::ModeManager::GetRoadRageTakedownTarget() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:1148
		const BrnProgression::ProgressionData * lpProgressionData;

		// BrnModeManager.cpp:1152
		int8_t liLastRankForGameMode;

		// BrnModeManager.cpp:1153
		const ProgressionRankData * lpProgressionRankDataLastRank;

		// BrnModeManager.cpp:1156
		float32_t lfCurrentRank;

		// BrnModeManager.cpp:1163
		int8_t liThisRankForGameMode;

		// BrnModeManager.cpp:1164
		const ProgressionRankData * lpProgressionRankDataThisRank;

		// BrnModeManager.cpp:1167
		int8_t liNextRankForGameMode;

		// BrnModeManager.cpp:1168
		const ProgressionRankData * lpProgressionRankDataNextRank;

		// BrnModeManager.cpp:1174
		float32_t lfTotalNumberOfWinsForThisRank;

		// BrnModeManager.cpp:1175
		float32_t lfTotalNumberOfWinsForNextRank;

		// BrnModeManager.cpp:1176
		float32_t lfCurrentEventWins;

		// BrnModeManager.cpp:1178
		float32_t lfCurrentRelativeEventRatio;

		// BrnModeManager.cpp:1182
		float32_t lfThisRoadRageTakedownTarget;

		// BrnModeManager.cpp:1183
		float32_t lfNextRoadRageTakedownTarget;

		// BrnModeManager.cpp:1185
		float32_t lfRoadRageFinalTarget;

		BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
	}
	CgsResource::SmallResource::GetMemoryResource(/* parameters */);
	BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
	BrnProgression::ProgressionData::GetProgressionRankData(/* parameters */);
	BrnProgression::ProgressionData::GetProgressionRankData(/* parameters */);
	BrnProgression::ProgressionData::GetProgressionRankData(/* parameters */);
	rw::math::fpu::Round<float>(/* parameters */);
	__fsel(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	{
	}
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
}

// BrnModeManager.cpp:159
void BrnGameState::ModeManager::Construct(BrnGameState::GameStateModule *  lpGameStateModule, BrnProgression::ProgressionManager *  lpProgressionManager, TriggerQueryManager *  lpTriggerQueryManager, BrnGameState::NetworkRoundManager *  lpNetworkRoundManager, StreetManager *  lpStreetManager, BrnGameState::MugshotManager *  lpMugshotManager, const BrnGameState::RoadRulesManager *  lpRoadRulesManager, StuntModeScoring::AchievementManager *  lpAchievementManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:161
		uint32_t luModeIndex;

	}
	OnlineFreeBurnLobbyMode::SetStreetManager(/* parameters */);
	BurnoutSkillzManager::SetStreetManager(/* parameters */);
	OnlineFreeBurnLobbyMode::SetMugshotManager(/* parameters */);
	BurnoutSkillzManager::SetMugshotManager(/* parameters */);
	CgsNumeric::Random::Construct(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	SetAborted(/* parameters */);
	SetAbortedDuringIntro(/* parameters */);
	SetTimedOut(/* parameters */);
	SetBeenEliminated(/* parameters */);
	SetCrashedOut(/* parameters */);
}

// BrnModeManager.cpp:3932
void BrnGameState::ModeManager::SetStartingGrid(GameModeParams *  lpGameModeParams, int32_t  liCarCount, bool  lbPushForwards) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:3934
		int32_t liGridIndex;

	}
	BrnTraffic::LightTriggerId::IsValid(/* parameters */);
	{
		// BrnModeManager.cpp:3942
		const LightTriggerStartData * lpStartData;

		{
			// BrnModeManager.cpp:3950
			Vector3 lStartPositionModifier;

			// BrnModeManager.cpp:3951
			Vector3 lStartDirection;

			BrnTraffic::LightTriggerStartData::GetStartDirection(/* parameters */);
			rw::math::vpu::Vector3::SetZero(/* parameters */);
			BrnTraffic::LightTriggerStartData::GetStartPosition(/* parameters */);
			GameModeParams::AddStartLocation(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::IsZero(/* parameters */);
			{
				{
					{
					}
				}
			}
			CgsContainers::Array<BrnGameState::StartLocation,8u>::Append(/* parameters */);
		}
		VecFloat<VectorAxisY>(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		VecFloat<VectorAxisZ>(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		VecFloat<VectorAxisZ>(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnModeManager.cpp:4126
void BrnGameState::ModeManager::SetOnlineLandmarks(GameModeParams *  lpGameModeParams, const StartNetworkRoundEvent *  lpStartNetworkRoundEvent, int32_t  liRoundNumber) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:4128
		const TriggerData * lpTriggerData;

		// BrnModeManager.cpp:4129
		int32_t liLandmarkIndex;

		TriggerQueryManager::GetTriggerData(/* parameters */);
	}
	{
		// BrnModeManager.cpp:4133
		LandmarkIndex lLandmarkIndex;

		// BrnModeManager.cpp:4134
		const Landmark * lpLandmark;

		BrnTrigger::TriggerData::GetLandmarkFromRegionIndex(/* parameters */);
	}
	GameModeParams::AddCheckpoint(/* parameters */);
	TriggerQueryManager::AddLandmarkIndexForGameMode(/* parameters */);
	CgsContainers::Array<BrnGameState::LandmarkIndex,16u>::Contains(/* parameters */);
	CgsContainers::Array<BrnGameState::LandmarkIndex,16u>::Append(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnModeManager.cpp:4942
void BrnGameState::ModeManager::SetupCheckpointDistricts(GameModeParams *  lpGameModeParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:4949
		const WorldMap2D * lpWorldMap2D;

		// BrnModeManager.cpp:4950
		int32_t liCheckpointIndex;

	}
	GameStateModule::GetWorldMap2D(/* parameters */);
	GameModeParams::GetCheckpointCount(/* parameters */);
	{
		// BrnModeManager.cpp:4954
		CheckpointData * lpCheckpointData;

		// BrnModeManager.cpp:4955
		const Landmark * lpLandmark;

		// BrnModeManager.cpp:4956
		uint8_t luValue;

		CheckpointData::SetDistrict(/* parameters */);
	}
	GameModeParams::GetCheckpointData(/* parameters */);
	TriggerQueryManager::GetTriggerData(/* parameters */);
	LandmarkIndex::operator std::int32_t(/* parameters */);
	BrnTrigger::TriggerData::GetLandmarkFromRegionIndex(/* parameters */);
	BrnTrigger::BoxRegion::GetPosition(/* parameters */);
	CgsWorld::WorldMap2D::GetValue(/* parameters */);
	Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnModeManager.cpp:3979
void BrnGameState::ModeManager::SetupOnlineStartingGrid(GameModeParams *  lpGameModeParams, int32_t  liCarCount, Random *  lpRandom, bool  lbUseCurrentStandings) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:3983
		int32_t liPlayerTeam;

		// BrnModeManager.cpp:3984
		const LightTriggerStartData * lpStartData;

		// BrnModeManager.cpp:3985
		int32_t liCarIndex;

		// BrnModeManager.cpp:3988
		Array<BrnGameState::GridPositionAndScoreData,8u>[4] laaiTeamMembers;

		// BrnModeManager.cpp:3998
		const TrafficData * lpTrafficData;

		// BrnModeManager.cpp:4001
		const BrnTraffic::Hull * lpHull;

		CgsContainers::Array<BrnGameState::GridPositionAndScoreData,8u>::Array(/* parameters */);
		CgsContainers::Array<BrnGameState::GridPositionAndScoreData,8u>::Construct(/* parameters */);
		TriggerQueryManager::GetTrafficData(/* parameters */);
		{
			// BrnModeManager.cpp:4011
			GridPositionAndScoreData lPosAndScore;

			CgsContainers::Array<BrnGameState::GridPositionAndScoreData,8u>::Append(/* parameters */);
		}
		ScoringSystem::GetCarDataFromPlayerScoringIndex(/* parameters */);
		CgsContainers::Array<BrnGameState::GridPositionAndScoreData,8u>::Append(/* parameters */);
		{
			// BrnModeManager.cpp:4032
			uint32_t luArrayIndex1;

			// BrnModeManager.cpp:4033
			uint32_t luArrayIndex2;

		}
		CgsContainers::Array<BrnGameState::GridPositionAndScoreData,8u>::GetLength(/* parameters */);
		{
			// BrnModeManager.cpp:4081
			Array<CgsNetwork::NetworkPlayerID,8u> laiRaceCarOrder;

			CgsContainers::Array<CgsNetwork::NetworkPlayerID,8u>::Append(/* parameters */);
			CgsContainers::Array<BrnGameState::GridPositionAndScoreData,8u>::GetLength(/* parameters */);
			{
				CgsDev::StrStream::StrStream(/* parameters */);
			}
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		{
			// BrnModeManager.cpp:4041
			int32_t liPlayer1Points;

			// BrnModeManager.cpp:4042
			int32_t liPlayer2Points;

			CarData::GetCumulativePoints(/* parameters */);
			{
				// BrnModeManager.cpp:4053
				const GridPositionAndScoreData lTempScoreData;

			}
		}
		CgsContainers::Array<CgsNetwork::NetworkPlayerID,8u>::Append(/* parameters */);
		CgsContainers::Array<BrnGameState::GridPositionAndScoreData,8u>::GetLength(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		{
			// BrnModeManager.cpp:4104
			int32_t liGridPosition;

			CgsContainers::Array<CgsNetwork::NetworkPlayerID,8u>::FindFirstInstanceOf(/* parameters */);
		}
		CgsContainers::Array<CgsNetwork::NetworkPlayerID,8u>::GetLength(/* parameters */);
		BrnTraffic::LightTriggerStartData::GetStartPosition(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		BrnTraffic::LightTriggerStartData::GetStartDirection(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		GameModeParams::AddStartLocation(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		CgsContainers::Array<BrnGameState::StartLocation,8u>::Append(/* parameters */);
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
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnModeManager.cpp:4066
		int32_t liArrayIndex;

		CgsContainers::Array<BrnGameState::GridPositionAndScoreData,8u>::GetLength(/* parameters */);
		{
			// BrnModeManager.cpp:4070
			const int32_t liRandomIndex;

			// BrnModeManager.cpp:4071
			const GridPositionAndScoreData lTempData;

			CgsNumeric::Random::RandomInt(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnModeManager.cpp:4718
void BrnGameState::ModeManager::SetUpCheckPointsForGameMode(const StartGameModeParams *  lpStartGameModeParams, GameModeParams *  lpGameModeParams, BrnGameState::ScoringSystem *  lpScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:4720
		bool lbIsValidLandMarkBasedGameMode;

	}
	{
		// BrnModeManager.cpp:4725
		const TriggerData * lpTriggerData;

		// BrnModeManager.cpp:4729
		int32_t liCheckPointCount;

		// BrnModeManager.cpp:4732
		int32_t liCurrentCheckPoint;

		GetTriggerData(/* parameters */);
		BrnProgression::RaceEventData::GetCheckpointCount(/* parameters */);
		{
			// BrnModeManager.cpp:4738
			const Landmark * lpLandmark;

			// BrnModeManager.cpp:4741
			int32_t liCheckPointLandmarkId;

			// BrnModeManager.cpp:4749
			LandmarkIndex lLandmarkIndex;

			// BrnModeManager.cpp:4752
			uint16_t luLandmarkAISection;

			BrnProgression::RaceEventData::GetCheckpointData(/* parameters */);
			StartGameModeParams::GetEventData(/* parameters */);
			LandmarkIndex::LandmarkIndex(/* parameters */);
			GameModeParams::AddCheckpoint(/* parameters */);
			TriggerQueryManager::AddLandmarkIndexForGameMode(/* parameters */);
			CgsContainers::Array<BrnGameState::LandmarkIndex,16u>::Contains(/* parameters */);
		}
	}
	CgsContainers::Array<BrnGameState::LandmarkIndex,16u>::Append(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnModeManager.cpp:4793
void BrnGameState::ModeManager::SetupPathfinding(const StartGameModeParams *  lpStartGameModeParams, GameModeParams *  lpGameModeParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:4795
		const BrnProgression::RaceEventData * lpRaceEventData;

		StartGameModeParams::GetEventData(/* parameters */);
	}
	{
		// BrnModeManager.cpp:4828
		int32_t liCheckpointIndex;

		GameModeParams::SetAStarDistanceFunction(/* parameters */);
		GameModeParams::GetCheckpointCount(/* parameters */);
		BrnProgression::RaceEventData::GetCheckpointCount(/* parameters */);
		CgsContainers::Array<BrnGameState::CheckpointData,16u>::GetLength(/* parameters */);
		BrnProgression::RaceEventData::GetCheckpointCount(/* parameters */);
		{
			// BrnModeManager.cpp:4832
			const CheckpointData * lpCheckpointData;

			// BrnModeManager.cpp:4833
			CheckpointData * lpParamsCheckpointData;

			// BrnModeManager.cpp:4834
			int32_t liBlockSectionIndexIndex;

			BrnProgression::RaceEventData::GetCheckpointData(/* parameters */);
		}
		GameModeParams::GetCheckpointData(/* parameters */);
		CgsContainers::Array<BrnGameState::CheckpointData,16u>::operator[](/* parameters */);
		BrnProgression::CheckpointData::GetBlockSectionCount(/* parameters */);
		BrnProgression::CheckpointData::GetBlockSectionId(/* parameters */);
		CheckpointData::AddBlockSectionId(/* parameters */);
		CgsContainers::Array<std::uint32_t,8u>::Append(/* parameters */);
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
}

// BrnModeManager.cpp:4854
void BrnGameState::ModeManager::SetupOpponentData(const StartGameModeParams *  lpStartGameModeParams, GameModeParams *  lpGameModeParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:4856
		const BrnProgression::ProgressionData * lpProgressionData;

		// BrnModeManager.cpp:4857
		const BrnProgression::RaceEventData * lpRaceEventData;

		BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
		StartGameModeParams::GetEventData(/* parameters */);
		{
			// BrnModeManager.cpp:4863
			int32_t liOpponentCount;

			// BrnModeManager.cpp:4864
			CgsID lPlayerCarModelId;

			// BrnModeManager.cpp:4865
			int32_t liRank;

			// BrnModeManager.cpp:4868
			CgsID lCarId;

			// BrnModeManager.cpp:4870
			CarOpponentSet * lpOpponentSet;

			// BrnModeManager.cpp:4873
			int32_t liOpponentIndex;

			GameStateModule::GetCurrentCarId(/* parameters */);
			{
				// BrnModeManager.cpp:4877
				const EventStartGridSlot * lpStartGridSlot;

				// BrnModeManager.cpp:4878
				OpponentData lOpponentData;

				// BrnModeManager.cpp:4879
				CgsID lOpponentCarModelId;

				// BrnModeManager.cpp:4880
				EventRacerPersonality lOpponentPersonality;

				// BrnModeManager.cpp:4881
				int32_t liEasyGraphIndex;

				// BrnModeManager.cpp:4882
				int32_t liHardGraphIndex;

				// BrnModeManager.cpp:4883
				float32_t lfInterpolationValue;

				// BrnModeManager.cpp:4884
				OpponentBalanceData lRankedUpBalanceGraph;

				BrnProgression::ProgressionManager::DoesGameModeRankUpIndividually(/* parameters */);
				OpponentData::Construct(/* parameters */);
				GameModeParams::AddOpponentData(/* parameters */);
			}
			BrnProgression::RaceEventData::GetStartGridSlot(/* parameters */);
			{
				// BrnModeManager.cpp:4891
				const CarOpponent * lpCarOpponent;

				BrnProgression::CarOpponentSet::GetCarOpponent(/* parameters */);
				BrnProgression::CarOpponent::GetCarId(/* parameters */);
				BrnProgression::ProgressionData::GetPersonality(/* parameters */);
			}
			StartGameModeParams::GetGameModeType(/* parameters */);
			BrnProgression::EventStartGridSlot::GetSlowAIBalanceGraphIndex(/* parameters */);
			BrnProgression::EventStartGridSlot::GetFastAIBalanceGraphIndex(/* parameters */);
		}
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

// BrnModeManager.cpp:4541
void BrnGameState::ModeManager::HandleOnlineEndFreeburnChallengeMessage(InputBuffer::GameActionQueue *  lpOutputActionQueue, BrnGameState::EChallengeStatus  leChallengeStatus, bool  lbLocalPlayerIsHost) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:3765
void BrnGameState::ModeManager::MarkedManLoaded(InputBuffer::GameActionQueue *  lpGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:3773
		MarkedManLoadedAction lMarkedManLoadedAction;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::MarkedManLoadedAction>(/* parameters */);
}

// BrnModeManager.cpp:3742
void BrnGameState::ModeManager::StopModeIntro(InputBuffer::GameActionQueue *  lpGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:3750
		StopModeIntroAction lStopAction;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::StopModeIntroAction>(/* parameters */);
}

// BrnModeManager.cpp:2983
void BrnGameState::ModeManager::StartPlayingMode(InputBuffer::GameActionQueue *  lpGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:2989
		StartPlayingModeAction lStartModeEvent;

	}
	{
		// BrnModeManager.cpp:2996
		uint8_t luNextPlayerLandmarkIndex;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::StartPlayingModeAction>(/* parameters */);
}

// BrnModeManager.cpp:2225
void BrnGameState::ModeManager::CheckCountdownDisplay(InputBuffer::GameActionQueue *  lpOutputGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:2229
		int32_t liNewCountdownDisplay;

	}
	{
		// BrnModeManager.cpp:2233
		SetCountdownAction lSetCountdownAction;

		AddGameAction<BrnGameState::GameStateModuleIO::SetCountdownAction>(/* parameters */);
	}
	GameMode::HasCountdownDisplayChanged(/* parameters */);
}

// BrnModeManager.cpp:423
void BrnGameState::ModeManager::TransmitAndIncrementCheckPointsReached(InputBuffer::GameActionQueue *  lpOutputGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:427
		EGlobalRaceCarIndex leGlobalRaceCarIndex;

	}
	CgsContainers::BitArray<35u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	{
	}
	{
		// BrnModeManager.cpp:436
		RaceCarReachedCheckpointAction lReachedCheckpointAction;

		GameStateModule::GetLastGlobalRaceCarInterface(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::GetActiveRaceCarIndex(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::RaceCarReachedCheckpointAction>(/* parameters */);
	}
	CgsContainers::BitArray<35u>::GetNextNonZeroBit(/* parameters */);
	CgsContainers::BitArray<35u>::IsBitSet(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnModeManager.cpp:459
		PlayerReachedPenultimateCheckpointAction lPenultimateCheckpointAction;

		AddGameAction<BrnGameState::GameStateModuleIO::PlayerReachedPenultimateCheckpointAction>(/* parameters */);
	}
}

// BrnModeManager.cpp:376
void BrnGameState::ModeManager::TransmitCheckPointDistancesToFinishLine(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const ScoringSystem &  lScoringSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:392
		SetWayPointDistancesToFinishAction lDistanceEvent;

		// BrnModeManager.cpp:395
		int32_t liCheckPointIndex;

	}
	CgsContainers::Array<float32_t,16u>::Construct(/* parameters */);
	{
		// BrnModeManager.cpp:399
		float32_t lfRouteLength;

		ScoringSystem::GetCheckpointDistanceToFinish(/* parameters */);
		CgsContainers::Array<float32_t,16u>::Append(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AddGameAction<BrnGameState::GameStateModuleIO::SetWayPointDistancesToFinishAction>(/* parameters */);
}

// BrnModeManager.cpp:5236
void BrnGameState::ModeManager::LocalPlayerDisconnected(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ScoringSystem::ClearAllBurnoutSkillzData(/* parameters */);
	GameStateModuleIO::operator++(/* parameters */);
	BurnoutSkillzData::Clear(/* parameters */);
}

// BrnModeManager.cpp:5220
void BrnGameState::ModeManager::NetworkPlayerRemoved(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID, InputBuffer::GameActionQueue *  lpActionQueue, bool  lbIsChallengeArbitrator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ScoringSystem::ClearPlayersBurnoutSkillzData(/* parameters */);
}

// BrnModeManager.cpp:4606
void BrnGameState::ModeManager::CancelFreeburnChallenge(InputBuffer::GameActionQueue *  lpOutputActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:5204
void BrnGameState::ModeManager::NetworkPlayerFinalised(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID, InputBuffer::GameActionQueue *  lpActionQueue, bool  lbIsLocalPlayerHost) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:3631
void BrnGameState::ModeManager::SendGameResultsToNetwork(InputBuffer::GameActionQueue *  lpGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:3633
		int32_t liRoundIndex;

		// BrnModeManager.cpp:3634
		EActiveRaceCarIndex leRaceCarIndex;

		// BrnModeManager.cpp:3635
		NetworkRoundData * lpNetworkRoundData;

		// BrnModeManager.cpp:3636
		OnlineGameResults lResultsAction;

		// BrnModeManager.cpp:3637
		int32_t liNumberOfRounds;

		// BrnModeManager.cpp:3638
		int32_t liNumberOfRoundsPlayed;

		OnlineGameResults(/* parameters */);
	}
	GameStateModuleIO::OnlineGameResults::Clear(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	ScoringSystem::GetNetworkRoundData(/* parameters */);
	NetworkRoundManager::GetCurrentRound(/* parameters */);
	{
		// BrnModeManager.cpp:3658
		const CarData * lpCarData;

		{
			// BrnModeManager.cpp:3662
			bool lbIsLocalPlayer;

			// BrnModeManager.cpp:3663
			bool lbIsCarDataAvailable;

			// BrnModeManager.cpp:3664
			bool lbConnected;

			GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
			CarData::GetRoundDisconnected(/* parameters */);
			CarData::GetNetworkPlayerID(/* parameters */);
			GameStateModuleIO::OnlineGameResults::SetConnectedPlayerID(/* parameters */);
			NetworkRoundData::GetPosition(/* parameters */);
			GameStateModuleIO::OnlineGameResults::SetPosition(/* parameters */);
		}
	}
	operator++(/* parameters */);
	GameStateModule::GetLocalPlayerNetworkID(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::OnlineGameResults>(/* parameters */);
	GameStateModuleIO::OnlineGameResults::SetConnectedPlayerID(/* parameters */);
	GameStateModuleIO::OnlineGameResults::SetPosition(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnModeManager.cpp:4591
void BrnGameState::ModeManager::TriggerFreeburnChallenge(CgsID  lChallengeID, InputBuffer::GameActionQueue *  lpOutputActionQueue, bool  lbIsHost) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:3403
void BrnGameState::ModeManager::SendModeStopMessages(InputBuffer::GameActionQueue *  lpGameActionQueue, bool  lbHasAborted, BrnGameState::GameStateModuleIO::EGameModeType  leNewGameMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:3405
		StopModeAction lStopModeAction;

		// BrnModeManager.cpp:3462
		bool lbLobbyToLobby;

		// BrnModeManager.cpp:3608
		SetPlayerCarDriverAction lSetPlayerCarDriverAction;

		// BrnModeManager.cpp:3614
		ImpactTimeEndAction lImpactTimeAction;

		IsOnlineGameMode(/* parameters */);
		GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
		IsShowtimeGameMode(/* parameters */);
		GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
		IsShowtimeGameMode(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::StopModeAction>(/* parameters */);
		IsOnlineGameMode(/* parameters */);
		IsOnlineGameMode(/* parameters */);
		{
			// BrnModeManager.cpp:3467
			RoadRulesRecvData::NetworkPlayerID lNetworkPlayerID;

			GameStateModule::GetLocalPlayerNetworkID(/* parameters */);
			CgsSystem::TimerStatus::GetTime(/* parameters */);
			GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
			CgsSystem::Time::Time(/* parameters */);
			{
				// BrnModeManager.cpp:3488
				OnlineRoundResults lRoundResults;

				// BrnModeManager.cpp:3489
				EActiveRaceCarIndex leActiveRaceCarIndex;

				OnlineRoundResults(/* parameters */);
				GameStateModuleIO::OnlineRoundResults::Construct(/* parameters */);
				{
					// BrnModeManager.cpp:3497
					CarData * lpCarData;

					ScoringSystem::GetPlayerDisconnected(/* parameters */);
					ScoringSystem::GetOnlineFinishPosition(/* parameters */);
					CarData::GetNetworkPlayerID(/* parameters */);
					BaseOnlineModeScoring::GetPlayerPosition(/* parameters */);
					GameStateModuleIO::OnlineRoundResults::SetPosition(/* parameters */);
				}
				operator++(/* parameters */);
				AddGameAction<BrnGameState::GameStateModuleIO::OnlineRoundResults>(/* parameters */);
			}
			ScoringSystem::LocalPlayerQuit(/* parameters */);
		}
		ScoringSystem::ClearDisconnectedPlayers(/* parameters */);
		IsOnlineGameMode(/* parameters */);
		IsShowtimeGameMode(/* parameters */);
		{
			// BrnModeManager.cpp:3569
			FinishModeFinalOnlineAction lFinishModeFinalOnlineAction;

			AddGameAction<BrnGameState::GameStateModuleIO::FinishModeFinalOnlineAction>(/* parameters */);
		}
		{
			// BrnModeManager.cpp:3434
			ShowtimeModeSwitchAction lShowtimeModeSwitchAction;

			CrashModeScoring::GetOverallScore(/* parameters */);
			AddGameAction<BrnGameState::GameStateModuleIO::ShowtimeModeSwitchAction>(/* parameters */);
		}
		{
			// BrnModeManager.cpp:3585
			QuitModeOfflineAction lQuitModeOfflineAction;

			// BrnModeManager.cpp:3590
			RequestGameTrainingAction lTrainingRequest;

			AddGameAction<BrnGameState::GameStateModuleIO::QuitModeOfflineAction>(/* parameters */);
			AddGameAction<BrnGameState::GameStateModuleIO::RequestGameTrainingAction>(/* parameters */);
		}
		GameStateModule::SetNotInGameState(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::SetPlayerCarDriverAction>(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::ImpactTimeEndAction>(/* parameters */);
	}
	ScoringSystem::GetCarData(/* parameters */);
	CarData::GetNetworkPlayerID(/* parameters */);
	GameStateModuleIO::OnlineRoundResults::SetPosition(/* parameters */);
	{
		// BrnModeManager.cpp:3596
		StopModeOfflineAction lStopModeOfflineAction;

		AddGameAction<BrnGameState::GameStateModuleIO::StopModeOfflineAction>(/* parameters */);
	}
	{
		// BrnModeManager.cpp:3575
		FinishModeOnlineAction lFinishModeOnlineAction;

		AddGameAction<BrnGameState::GameStateModuleIO::FinishModeOnlineAction>(/* parameters */);
	}
	{
		// BrnModeManager.cpp:3477
		EActiveRaceCarIndex leLeadCarIndex;

		// BrnModeManager.cpp:3478
		bool lbLocalPlayerWon;

		ScoringSystem::GetLead(/* parameters */);
		ScoringSystem::GetCarData(/* parameters */);
	}
	{
		// BrnModeManager.cpp:3550
		QuitModeOnlineAction lQuitModeOnlineAction;

		AddGameAction<BrnGameState::GameStateModuleIO::QuitModeOnlineAction>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnModeManager.cpp:3559
		QuitModeOnlineAction lQuitModeOnlineAction;

		AddGameAction<BrnGameState::GameStateModuleIO::QuitModeOnlineAction>(/* parameters */);
	}
	CgsContainers::Array<CgsNetwork::NetworkPlayerID,8u>::Append(/* parameters */);
	CarData::SetRoundDisconnected(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	ScoringSystem::GetNumberOfNetworkPlayers(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnModeManager.cpp:2894
void BrnGameState::ModeManager::StartModeIntro(InputBuffer::GameActionQueue *  lpGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:2900
		EActiveRaceCarIndex leRaceCarIndex;

		// BrnModeManager.cpp:2901
		StartModeIntroAction lSmiAction;

		// BrnModeManager.cpp:2902
		SetInModeStartRegionAction lStartRegionAction;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::SetInModeStartRegionAction>(/* parameters */);
	GameStateModule::IsOnlineGameMode(/* parameters */);
	ScoringSystem::GetPlayerDisconnected(/* parameters */);
	{
		// BrnModeManager.cpp:2926
		RemotePlayerDisconnectedAction lPlayerDisconnectedAction;

		AddGameAction<BrnGameState::GameStateModuleIO::RemotePlayerDisconnectedAction>(/* parameters */);
	}
	operator++(/* parameters */);
	GameStateModule::GetFlybyManager(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::StartModeIntroAction>(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
	CarData::GetNetworkPlayerID(/* parameters */);
	GameStateModuleIO::RemotePlayerDisconnectedAction::SetNetworkPlayerID(/* parameters */);
	GameStateModuleIO::RemotePlayerDisconnectedAction::SetActiveRaceCarIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnModeManager.cpp:2143
void BrnGameState::ModeManager::FillInRaceDistanceInterface(RaceCarRaceDistanceInterface *  lpRaceCarRaceDistInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:2145
		int32_t liNumActiveCars;

		// BrnModeManager.cpp:2146
		EActiveRaceCarIndex leActiveCarIndex;

		GameStateModuleIO::RaceCarRaceDistanceInterface::SetNumActiveRaceCars(/* parameters */);
		GameStateModuleIO::RaceCarRaceDistanceInterface::SetTotalRaceDistance(/* parameters */);
		ScoringSystem::GetRaceCarDistanceToFinish(/* parameters */);
		GameStateModuleIO::RaceCarRaceDistanceInterface::SetRaceCarDistToFinish(/* parameters */);
		operator++(/* parameters */);
	}
}

// BrnModeManager.cpp:477
void BrnGameState::ModeManager::TransmitAndIncrementFinishReached(InputBuffer::GameActionQueue *  lpOutputGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:480
		EActiveRaceCarIndex leRaceCarIndex;

		// BrnModeManager.cpp:488
		const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface * lpGlobalRCOutputInterface;

	}
	GameStateModule::GetLastGlobalRaceCarInterface(/* parameters */);
	CgsContainers::BitArray<35u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	{
	}
	{
		// BrnModeManager.cpp:495
		RaceCarReachedFinishAction lReachedFinishAction;

		BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::GetGlobalRaceCarIndex(/* parameters */);
		ScoringSystem::GetCarRaceFinishPosition(/* parameters */);
		ScoringSystem::GetCarData(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::RaceCarReachedFinishAction>(/* parameters */);
	}
	CgsContainers::BitArray<35u>::GetNextNonZeroBit(/* parameters */);
	CgsContainers::BitArray<35u>::IsBitSet(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnModeManager.cpp:503
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnModeManager.cpp:3298
void BrnGameState::ModeManager::GetPlayersFinishPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:3312
		EActiveRaceCarIndex lePlayerActiveRaceCarIndex;

	}
	{
		// BrnModeManager.cpp:3306
		int32_t liFinshPosition;

	}
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	ScoringSystem::GetCarRaceFinishPosition(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
	ScoringSystem::HasTargetScoreBeenExceeded(/* parameters */);
}

// BrnModeManager.cpp:3071
void BrnGameState::ModeManager::ShowModeResults(const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *  lpGlobalCarInterface, InputBuffer::GameActionQueue *  lpGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:3073
		EActiveRaceCarIndex leLocalPlayerRaceCarIndex;

		// BrnModeManager.cpp:3074
		ShowModeResultsAction lShowModeResultsAction;

		// BrnModeManager.cpp:3165
		const GameModeParams * lpGameModeParams;

	}
	ShowModeResultsAction(/* parameters */);
	CgsContainers::Array<BrnResource::VehicleListEntry::ELiveryType,8u>::Array(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	IsOnlineGameMode(/* parameters */);
	GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
	BrnProgression::ProgressionManager::GetProfile(/* parameters */);
	BrnProgression::Profile::SetBestStuntRunScore(/* parameters */);
	{
		// BrnModeManager.cpp:3119
		const BrnProgression::ProgressionData * lpProgressionData;

		// BrnModeManager.cpp:3121
		const BrnProgression::RaceEventData * lpEventData;

		// BrnModeManager.cpp:3124
		bool lbEventHasBeenWonPreviously;

		BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
		BrnProgression::ProgressionData::FindOfflineEvent(/* parameters */);
		{
		}
		BrnProgression::EventJunction::GetID(/* parameters */);
	}
	GetCurrentGameModeParams(/* parameters */);
	BrnProgression::ProgressionManager::GetProfile(/* parameters */);
	BrnProgression::Profile::AddLossForGameMode(/* parameters */);
	BrnProgression::Profile::GetNumLossesForGameMode(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::ShowModeResultsAction>(/* parameters */);
	GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
	{
		// BrnModeManager.cpp:3276
		SetPlayerCarDriverAction lSetPlayerCarDriverAction;

		AddGameAction<BrnGameState::GameStateModuleIO::SetPlayerCarDriverAction>(/* parameters */);
	}
	{
		// BrnModeManager.cpp:3149
		float32_t lfResultTime;

		ScoringSystem::GetFinishTime(/* parameters */);
	}
	ScoringSystem::GetCarData(/* parameters */);
	CgsSystem::Time::GetFloatVal(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	BrnProgression::ProgressionManager::GetNewlyUnlockedCarID(/* parameters */);
	BrnProgression::ProgressionManager::ClearRankUpCache(/* parameters */);
	ScoringSystem::GetCrashScorer(/* parameters */);
	CrashModeScoring::GetOverallScore(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnModeManager.cpp:3285
		RequestGameTrainingAction lRequestTraining;

		AddGameAction<BrnGameState::GameStateModuleIO::RequestGameTrainingAction>(/* parameters */);
	}
	CgsSystem::Time::Time(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnModeManager.cpp:3018
void BrnGameState::ModeManager::SendFinishedModeAction(InputBuffer::GameActionQueue *  lpGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:3020
		EActiveRaceCarIndex leLocalPlayerRaceCarIndex;

		// BrnModeManager.cpp:3021
		FinishedModeAction lFinishedModeAction;

		FinishedModeAction(/* parameters */);
	}
	CgsSystem::Time::Time(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	IsOnlineGameMode(/* parameters */);
	ScoringSystem::GetFinishTime(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	ScoringSystem::GetNumberOfTakedowns(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
	ScoringSystem::GetRaceCarDistanceToFinishAtRoundEnd(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
	ScoringSystem::GetRaceCarEliminatorIndex(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
	ScoringSystem::GetNumberOfEliminations(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::FinishedModeAction>(/* parameters */);
	ScoringSystem::GetCarRacePosition(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnModeManager.cpp:4426
void BrnGameState::ModeManager::HandleOnlineBurningHomeRunCheckForModeFinished() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:4430
		bool lbLocalPlayerTimedOut;

		// BrnModeManager.cpp:4431
		EActiveRaceCarIndex leLocalPlayerRaceCarIndex;

		// BrnModeManager.cpp:4432
		BrnGameState::ScoringSystem * lpScoringSystem;

		// BrnModeManager.cpp:4434
		EActiveRaceCarIndex leRaceCarIndex;

		// BrnModeManager.cpp:4435
		int32_t liNumActiveCars;

		// BrnModeManager.cpp:4472
		PlayerFinishedModeEvent lPlayerFinishedModeEvent;

		GetScoringSystem(/* parameters */);
	}
	ScoringSystem::GetOnlineLandmarksVisited(/* parameters */);
	ScoringSystem::GetOnlineLandmarksVisited(/* parameters */);
	ScoringSystem::GetOnlineLandmarksVisited(/* parameters */);
	operator++(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnModeManager.cpp:4375
void BrnGameState::ModeManager::HandleOnlineTeamCheckForModeFinished() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:4379
		BrnGameState::ScoringSystem * lpScoringSystem;

		// BrnModeManager.cpp:4380
		EActiveRaceCarIndex leRaceCarIndex;

		// BrnModeManager.cpp:4381
		int32_t liNumActiveCars;

		// BrnModeManager.cpp:4412
		PlayerFinishedModeEvent lPlayerFinishedModeEvent;

		GetScoringSystem(/* parameters */);
	}
	ScoringSystem::GetPlayerDisconnected(/* parameters */);
	operator++(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
	ScoringSystem::HasRaceCarFinished(/* parameters */);
}

// BrnModeManager.cpp:4244
void BrnGameState::ModeManager::HandleOnlineTeamTakedowns(const InGamePlayerStatusInterface *  lpPlayerStatusInterface, const InputBuffer::TakedownEventQueue *  lpTakedownQueue, InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:4247
		BrnGameState::GameStateModuleIO::EPlayerTeam leAggrTeam;

		// BrnModeManager.cpp:4248
		BrnGameState::GameStateModuleIO::EPlayerTeam leVictimTeam;

		// BrnModeManager.cpp:4249
		TakedownEvent lTakedownEvent;

		// BrnModeManager.cpp:4251
		BrnGameState::ScoringSystem * lpScoringSystem;

		// BrnModeManager.cpp:4253
		int32_t liIndex;

		// BrnModeManager.cpp:4254
		EActiveRaceCarIndex leRaceCarIndex;

		// BrnModeManager.cpp:4255
		EActiveRaceCarIndex leVictimRaceCarIndex;

		// BrnModeManager.cpp:4256
		EActiveRaceCarIndex leAggrRaceCarIndex;

		// BrnModeManager.cpp:4257
		int32_t liBlueTeamMembers;

		GetScoringSystem(/* parameters */);
	}
	{
		// BrnModeManager.cpp:4267
		const InGamePlayerStatusData * lpPlayerStatusData;

		BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetPlayerStatusData(/* parameters */);
	}
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetEvent(/* parameters */);
	{
		// BrnModeManager.cpp:4359
		PlayerFinishedModeEvent lPlayerFinishedModeEvent;

	}
	{
		// BrnModeManager.cpp:4302
		TraitorousTakedownAction lTraitorousTakedownAction;

		AddGameAction<BrnGameState::GameStateModuleIO::TraitorousTakedownAction>(/* parameters */);
	}
	{
		// BrnModeManager.cpp:4320
		PlayerEliminatedAction lPlayerEliminatedAction;

		ScoringSystem::SetPlayerEliminated(/* parameters */);
		GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::PlayerEliminatedAction>(/* parameters */);
	}
	HUDMessageLogic::OnlineTeamChange(/* parameters */);
	{
		// BrnModeManager.cpp:4339
		SwitchBurningHomeRunRunnerAction lBurningHomeRunRunner;

		AddGameAction<BrnGameState::GameStateModuleIO::SwitchBurningHomeRunRunnerAction>(/* parameters */);
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

// BrnModeManager.cpp:4198
void BrnGameState::ModeManager::HandleOnlineTeamModes(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, InputBuffer::TakedownEventQueue *  lpTakedownQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsOnlineGameMode(/* parameters */);
	{
		// BrnModeManager.cpp:4207
		const InGamePlayerStatusInterface * lpPlayerStatusInterface;

		// BrnModeManager.cpp:4208
		InputBuffer::GameActionQueue * lpActionQueue;

		GameStateModuleIO::PreWorldInputBuffer::GetPlayerStatusInterface(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnModeManager.cpp:2499
void BrnGameState::ModeManager::RaceCarFinishes(EGlobalRaceCarIndex  leGlobalRaceCarIndex, EActiveRaceCarIndex  leActiveRaceCarIndex, bool  lbIsPlayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetCurrentGameModeType(/* parameters */);
	ScoringSystem::GetCarRaceFinishPosition(/* parameters */);
	HUDMessageLogic::HandleRaceCarFinishing(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	IsOnlineGameMode(/* parameters */);
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	ScoringSystem::HasRaceCarFinished(/* parameters */);
	CgsContainers::BitArray<35u>::SetBit(/* parameters */);
	FinishCurrentModeNextUpdate(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
	ScoringSystem::GetRaceCarEliminatorIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnModeManager.cpp:2349
void BrnGameState::ModeManager::RaceCarTriggersLandmark(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, EGlobalRaceCarIndex  leGlobalRaceCarIndex, EActiveRaceCarIndex  leActiveRaceCarIndex, LandmarkIndex  lLandmarkIndex, bool  lbIsPlayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:2351
		uint32_t luCheckpointIndex;

	}
	CgsContainers::BitArray<35u>::IsBitSet(/* parameters */);
	IsInProgress(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarCrashing(/* parameters */);
	IsInPostEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetCurrentGameModeType(/* parameters */);
	{
		// BrnModeManager.cpp:2414
		bool lbIsLandmarkInMode;

		ScoringSystem::IsOnlineLandmarkVisited(/* parameters */);
	}
	IsInProgress(/* parameters */);
	{
		// BrnModeManager.cpp:2384
		bool lbIsPenultimateLandmark;

		HUDMessageLogic::PlayerReachesCheckpoint(/* parameters */);
	}
	ScoringSystem::RaceCarHasReachedCheckPointWithinEvent(/* parameters */);
	CarData::IncrementCheckpointCount(/* parameters */);
	CgsContainers::BitArray<35u>::SetBit(/* parameters */);
	CgsContainers::BitArray<35u>::SetBit(/* parameters */);
	ScoringSystem::GetOnlineLandmarksVisited(/* parameters */);
	HUDMessageLogic::RaceCarReachesBHRCheckpoint(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	HUDMessageLogic::RaceCarReachesCheckpoint(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnModeManager.cpp:2314
void BrnGameState::ModeManager::RemoteRaceCarHitsCheckpoint(RoadRulesRecvData::NetworkPlayerID  lPlayerID, int32_t  liCheckpointIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsOnlineGameMode(/* parameters */);
	{
		// BrnModeManager.cpp:2319
		EActiveRaceCarIndex leRemotePlayersRaceCarIndex;

		// BrnModeManager.cpp:2320
		LandmarkIndex lLandmarkIndex;

		{
			// BrnModeManager.cpp:2326
			CgsDev::StrStream lStrStream;

		}
		GameStateModule::GetLastActiveRaceCarInterface(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetGlobalRaceCarIndex(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnModeManager.cpp:820
void BrnGameState::ModeManager::CheckForOutOfRangeCarsReachingFinish(const PostWorldInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:822
		const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface * lpGlobalCarInterface;

		// BrnModeManager.cpp:823
		const PostWorldInputBuffer::AICarOutputInterface * lpAICarOutputInterface;

		GameStateModuleIO::PostWorldInputBuffer::GetGlobalRaceCarOutputInterface(/* parameters */);
		GameStateModuleIO::PostWorldInputBuffer::GetAICarOutputInterface(/* parameters */);
	}
	{
		// BrnModeManager.cpp:828
		EGlobalRaceCarIndex leGlobalRaceCarIndex;

		// BrnModeManager.cpp:829
		uint16_t luFinishAISectionIndex;

		GameModeParams::GetCheckpointData(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::IsInRange(/* parameters */);
		BrnAI::AIModuleIO::AICarOutputInterface::GetAISectionIndex(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnModeManager.cpp:836
		EActiveRaceCarIndex leActiveRaceCarIndex;

		BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::GetActiveRaceCarIndex(/* parameters */);
		GameStateModuleIO::PostWorldInputBuffer::GetActiveRaceCarOutputInterface(/* parameters */);
		GameModeParams::GetCheckpointData(/* parameters */);
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
}

// BrnModeManager.cpp:659
void BrnGameState::ModeManager::PostWorldUpdate(const PostWorldInputBuffer *  lpInput, const InputBuffer::TakedownEventQueue *  lpTakedownQueue, float32_t  lfSimTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:666
		const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface * lpActiveCarInterface;

		// BrnModeManager.cpp:667
		const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface * lpGlobalCarInterface;

		// BrnModeManager.cpp:668
		const VehicleOutputInterface::PhysicalTrafficStateQueue * lpTrafficStateQueue;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	GameStateModuleIO::PostWorldInputBuffer::GetActiveRaceCarOutputInterface(/* parameters */);
	GameStateModuleIO::PostWorldInputBuffer::GetGlobalRaceCarOutputInterface(/* parameters */);
	GameStateModuleIO::PostWorldInputBuffer::GetVehicleOutputInterface(/* parameters */);
	BrnPhysics::Vehicle::VehicleOutputInterface::GetTrafficStateQueue(/* parameters */);
	{
		// BrnModeManager.cpp:672
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerScoringIndex;

		// BrnModeManager.cpp:673
		EActiveRaceCarIndex leActiveRaceCarIndex;

		GameStateModuleIO::PostWorldInputBuffer::GetRaceCarCrashEventQueue(/* parameters */);
		GameStateModuleIO::operator++(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetActiveRaceCarIndex(/* parameters */);
		ScoringSystem::IsPlayerInScoringSystem(/* parameters */);
		ScoringSystem::GetCarDataFromPlayerScoringIndex(/* parameters */);
		ScoringSystem::SetPlayerRaceCarIndex(/* parameters */);
		CurrentGameModeAllowsTakedowns(/* parameters */);
		IsInProgress(/* parameters */);
		CurrentGameModeHasRoute(/* parameters */);
		GameStateModuleIO::PostWorldInputBuffer::GetAICarOutputInterface(/* parameters */);
		IsShowtimeGameMode(/* parameters */);
	}
	IsInProgress(/* parameters */);
	GameStateModuleIO::PostWorldInputBuffer::GetRaceCarCrashEventQueue(/* parameters */);
	GameStateModuleIO::PostWorldInputBuffer::GetVehicleOutputInterface(/* parameters */);
	IsInProgress(/* parameters */);
	GameStateModuleIO::PostWorldInputBuffer::GetAICarOutputInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	ScoringSystem::SetPlayerRaceCarIndex(/* parameters */);
	GetCurrentGameMode(/* parameters */);
	IsInProgress(/* parameters */);
	GameStateModuleIO::PostWorldInputBuffer::GetRaceCarCrashEventQueue(/* parameters */);
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
	IsInProgress(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnModeManager.cpp:2177
void BrnGameState::ModeManager::GetCountdownTimeForMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:2181
		float32_t lfCountdownTimeForMode;

	}
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnModeManager.cpp:1233
void BrnGameState::ModeManager::FinishCurrentMode(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const const Time &  lCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:1235
		BrnGui::EFinishType leFinishType;

		// BrnModeManager.cpp:1236
		EActiveRaceCarIndex lePlayerCarIndex;

		// BrnModeManager.cpp:1238
		bool lbPlayerWonEvent;

	}
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameStateToGuiInterface(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	IsOnlineGameMode(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnProgression::ProgressionManager::GetProfile(/* parameters */);
	ScoringSystem::GetRoadRageScoring(/* parameters */);
	BrnProgression::Profile::SetHighestNumberOfTakeDownsInRoadRage(/* parameters */);
	RoadRageModeScoring::GetNumTakedownsAchieved(/* parameters */);
	{
		// BrnModeManager.cpp:1252
		uint32_t luFinishPosition;

	}
	ScoringSystem::HasTargetScoreBeenExceeded(/* parameters */);
	{
		// BrnModeManager.cpp:1314
		ImpactTimeEndAction lAction;

		AddGameAction<BrnGameState::GameStateModuleIO::ImpactTimeEndAction>(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetTimerRequestInterface(/* parameters */);
		CgsSystem::TimerRequestInterface::GetSimTimerRequests(/* parameters */);
		CgsSystem::TimerRequests::SetTimestepMultiplier(/* parameters */);
	}
	{
		// BrnModeManager.cpp:1452
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnModeManager.cpp:1400
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	ScoringSystem::GetCarRacePosition(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnModeManager.cpp:5076
void BrnGameState::ModeManager::SetPlayerDisconnected(RoadRulesRecvData::NetworkPlayerID  lPlayerID, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:5078
		const CarData * lpCarData;

	}
	ScoringSystem::GetCarData(/* parameters */);
	ScoringSystem::SetPlayerDisconnected(/* parameters */);
}

// BrnModeManager.cpp:5035
void BrnGameState::ModeManager::HandleNewHostEvent(const OnlineNewHostEvent *  lpEvent, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:5045
		EActiveRaceCarIndex leCurrentRunnerIndex;

		ScoringSystem::GetPlayerDisconnected(/* parameters */);
	}
}

// BrnModeManager.cpp:4974
void BrnGameState::ModeManager::HandleBurningHomeRunRunnerSwitch(const BurningHomeRunSwitchRunnerEvent *  lpEvent, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:4976
		EActiveRaceCarIndex leOldRunnerActiveRaceCarIndex;

		// BrnModeManager.cpp:4977
		EActiveRaceCarIndex leNewActiveRunnerRaceCarIndex;

	}
	{
		// BrnModeManager.cpp:4997
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnModeManager.cpp:5010
		EGlobalRaceCarIndex leOldRunnerGlobalRaceCarIndex;

		GameStateModule::GetLastGlobalRaceCarInterface(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::GetGlobalRaceCarIndex(/* parameters */);
	}
}

// BrnModeManager.cpp:4649
void BrnGameState::ModeManager::GetChallengeDescription(CgsID  lChallengeID, char *  lpcBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:4574
void BrnGameState::ModeManager::HandleChallengeSuccessEvent(const FburnChallengeSuccessEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:5172
void BrnGameState::ModeManager::HandleWorldStunt(BrnGameState::StuntElementType  leStuntType, CgsID  lStuntID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:5254
void BrnGameState::ModeManager::ProcessEvent(BrnGameState::GameStateModuleIO::EGameEventType  leEventType, const CgsModule::Event *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:4492
void BrnGameState::ModeManager::HandleLocalStartFreeburnChallengeMessage(CgsID  lChallengeID, InputBuffer::GameActionQueue *  lpOutput, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarOutputInterface, bool  lbIsHost, bool  lbSendAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:340
void BrnGameState::ModeManager::Prepare(const ChallengeList *  lpFreeburnChallengeList, HeapMalloc *  lpNetworkHeapMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:2737
void BrnGameState::ModeManager::PrepareForMode(InputBuffer::GameActionQueue *  lpGameActionQueue, GameModeParams *  lpGameModeParams, int32_t  liCurrentRound, StartGameModeParams *  lpStartGameModeParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:2751
		PrepareForModeAction lPFMAction;

		// BrnModeManager.cpp:2754
		bool lbMovingFromLobbyToLobby;

	}
	SetRivalShutDown(/* parameters */);
	SetTimedOut(/* parameters */);
	SetCrashedOut(/* parameters */);
	PrepareForModeAction(/* parameters */);
	CgsContainers::Array<BrnGameState::OpponentData,7u>::Array(/* parameters */);
	GameStateModuleIO::PrepareForModeAction::Construct(/* parameters */);
	GameStateModuleIO::PrepareForModeAction::SetStartingFreeburnLobbyDueToPlayerJoin(/* parameters */);
	{
		// BrnModeManager.cpp:2765
		int32_t liGridPosition;

		// BrnModeManager.cpp:2766
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerScoringIndex;

		// BrnModeManager.cpp:2767
		int32_t liNumPlayersInGame;

	}
	GameStateModuleIO::PrepareForModeAction::SetFinishedOnlineEvent(/* parameters */);
	GameStateModuleIO::PrepareForModeAction::SetShotGroup(/* parameters */);
	GameStateModuleIO::PrepareForModeAction::SetPlayerBoostEarning(/* parameters */);
	{
		// BrnModeManager.cpp:2782
		const RoadRulesRecvData::NetworkPlayerID lNetworkPlayerID;

		// BrnModeManager.cpp:2800
		const StartNetworkGameEvent * lpStartNetworkGameEvent;

		// BrnModeManager.cpp:2801
		CarData * lpCarData;

		ScoringSystem::IsNetworkPlayerInScoringSystem(/* parameters */);
		{
			// BrnModeManager.cpp:2790
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		ScoringSystem::IsNetworkPlayerInScoringSystem(/* parameters */);
		ScoringSystem::AddPlayer(/* parameters */);
		NetworkRoundManager::GetNetworkGameEvent(/* parameters */);
		ScoringSystem::GetCarData(/* parameters */);
		CarData::SetHasFever(/* parameters */);
		ScoringSystem::GetPlayerDisconnected(/* parameters */);
		GameStateModuleIO::PrepareForModeAction::SetPlayerDisconnected(/* parameters */);
	}
	GameStateModuleIO::PrepareForModeAction::SetPlayerScoringIndex(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::PrepareForModeAction>(/* parameters */);
	{
		// BrnModeManager.cpp:2852
		BroadcastModeFinishLinesAction lFinishLinesAction;

		// BrnModeManager.cpp:2853
		const Landmark * lpFinishLandmark;

		TriggerQueryManager::GetTriggerData(/* parameters */);
		GetLastLandmarkIndex(/* parameters */);
		BrnTrigger::TriggerData::GetLandmarkFromRegionIndex(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::BroadcastModeFinishLinesAction>(/* parameters */);
	}
	IsOnlineGameMode(/* parameters */);
	GameModeParams::GetCheckpointCount(/* parameters */);
	CgsContainers::Array<BrnGameState::CheckpointData,16u>::GetLength(/* parameters */);
	ScoringSystem::SetOnlineLandmarks(/* parameters */);
	GameStateModuleIO::operator++(/* parameters */);
	IsShowtimeGameMode(/* parameters */);
	ScoringSystem::AddPlayer(/* parameters */);
	CarData::SetStatus(/* parameters */);
	CarData::SetNetworkPlayerID(/* parameters */);
	CarData::SetActiveRaceCarIndex(/* parameters */);
	ScoringSystem::GetPlayerScoringIndex(/* parameters */);
	CarData::SetActiveRaceCarIndex(/* parameters */);
	CarData::SetStatus(/* parameters */);
	CarData::SetNetworkPlayerID(/* parameters */);
	GameStateModuleIO::PrepareForModeAction::SetPrepareStage(/* parameters */);
	GameStateModuleIO::PrepareForModeAction::SetPrepareStage(/* parameters */);
	GameStateModuleIO::PrepareForModeAction::SetPrepareStage(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnModeManager.cpp:1207
void BrnGameState::ModeManager::HandleLoadingScreenLoaded(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnModeManager.cpp:988
void BrnGameState::ModeManager::SetupGameMode(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, GameModeParams *  lpGameModeParams, StartGameModeParams *  lpStartGameModeParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:990
		const TriggerData * lpTriggerData;

		// BrnModeManager.cpp:991
		int32_t liCurrentRound;

		// BrnModeManager.cpp:993
		uint32_t luLandmarkIndex;

		// BrnModeManager.cpp:994
		bool lbIsRoadRageMode;

		TriggerQueryManager::GetTriggerData(/* parameters */);
		CgsResource::SmallResource::GetMemoryResource(/* parameters */);
		NetworkRoundManager::GetCurrentRound(/* parameters */);
		SetAborted(/* parameters */);
		SetAbortedDuringIntro(/* parameters */);
		SetTimedOut(/* parameters */);
		SetBeenEliminated(/* parameters */);
		SetCrashedOut(/* parameters */);
		ScoringSystem::SetTotalLaps(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetTimerRequestInterface(/* parameters */);
		CgsSystem::TimerRequestInterface::GetSimTimerRequests(/* parameters */);
		CgsSystem::TimerRequests::SetTimestepMultiplier(/* parameters */);
		GameModeParams::GetCheckpointCount(/* parameters */);
		{
			// BrnModeManager.cpp:1098
			const CheckpointData * lpCheckpointData;

			BrnTrigger::TriggerData::GetLandmarkFromRegionIndex(/* parameters */);
			LandmarkIndex::operator std::int32_t(/* parameters */);
		}
		GameModeParams::GetCheckpointData(/* parameters */);
		GameModeParams::GetCheckpointCount(/* parameters */);
		ScoringSystem::SetTotalCheckpoints(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::CheckForLoadingScreenAction>(/* parameters */);
	}
	{
		// BrnModeManager.cpp:1060
		uint32_t luRoadRageTakedownTarget;

		// BrnModeManager.cpp:1063
		const BrnProgression::ProgressionData * lpProgressionData;

		// BrnModeManager.cpp:1066
		int8_t liRoadRageRank;

		// BrnModeManager.cpp:1068
		const ProgressionRankData * lpProgressionRankDataRank;

		AddGameAction<BrnGameState::GameStateModuleIO::CheckForLoadingScreenAction>(/* parameters */);
		BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
		CgsResource::SmallResource::GetMemoryResource(/* parameters */);
		BrnProgression::ProgressionData::GetProgressionRankData(/* parameters */);
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

// BrnModeManager.cpp:899
void BrnGameState::ModeManager::StartGameMode(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, StartGameModeParams *  lpStartGameModeParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:901
		GameModeParams lGameModeParams;

		GameModeParams(/* parameters */);
		CgsContainers::Array<BrnGameState::OpponentData,7u>::Array(/* parameters */);
		StartGameModeParams::GetGameModeType(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetTriggerManagementInputInterface(/* parameters */);
		TriggerQueryManager::ClearLandmarkIndexesForGameMode(/* parameters */);
		CgsContainers::Array<BrnGameState::LandmarkIndex,16u>::Clear(/* parameters */);
		GameStateModuleIO::OutputBuffer::GetFrameRateTypeRequestInterface(/* parameters */);
		CgsSystem::FrameRateTypeRequestInterface::RequestFrameRateTypeChange(/* parameters */);
		ScoringSystem::SetCheckPointDistancesToFinishReady(/* parameters */);
	}
	{
		// BrnModeManager.cpp:965
		const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface * lpActiveRaceCarInterface;

		// BrnModeManager.cpp:966
		CgsID lPlayerCarID;

		GameStateModule::GetLastActiveRaceCarInterface(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetCarModelId(/* parameters */);
		BrnProgression::ProgressionManager::GetPlayerBaseDeformAmount(/* parameters */);
		ScoringSystem::ReducePlayerDurability(/* parameters */);
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

// BrnModeManager.cpp:1583
void BrnGameState::ModeManager::ExitCurrentMode(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, bool  lbHasAborted, BrnGameState::GameStateModuleIO::EGameModeType  leNewGameMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsOnlineGameMode(/* parameters */);
	IsShowtimeGameMode(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetFrameRateTypeRequestInterface(/* parameters */);
	CgsSystem::FrameRateTypeRequestInterface::RequestFrameRateTypeChange(/* parameters */);
	IsOnlineGameMode(/* parameters */);
	BrnProgression::ProgressionManager::RequestUpdateRivals(/* parameters */);
	{
		// BrnModeManager.cpp:1591
		StartGameModeParams lStartGameModeParams;

		StartGameModeParams(/* parameters */);
		rw::math::vpu::GetVector3_Zero(/* parameters */);
		StartGameModeParams::Construct(/* parameters */);
		BrnTraffic::LightTriggerId::SetInvalid(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnModeManager.cpp:1611
		StopModeIntroAction lStopAction;

		AddGameAction<BrnGameState::GameStateModuleIO::StopModeIntroAction>(/* parameters */);
	}
}

// BrnModeManager.cpp:860
void BrnGameState::ModeManager::PausedUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:865
		GameModeOutputInterface * lpGameModeOutputInterface;

	}
	GetCurrentGameModeState(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameModeOutputInterface(/* parameters */);
	GameStateModuleIO::GameModeOutputInterface::State::SetGameModeType(/* parameters */);
	GameStateModuleIO::GameModeOutputInterface::GetCurrentState(/* parameters */);
	GetCurrentGameModeState(/* parameters */);
	GameStateModuleIO::GameModeOutputInterface::State::SetGameModeType(/* parameters */);
	GameMode::GetCurrentState(/* parameters */);
	GameStateModuleIO::GameModeOutputInterface::State::SetGameModeState(/* parameters */);
	GameStateModuleIO::GameModeOutputInterface::State::SetGameModeState(/* parameters */);
	GameMode::GetCurrentState(/* parameters */);
}

// BrnModeManager.cpp:1675
void BrnGameState::ModeManager::UpdateCurrentMode(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, const InGamePlayerStatusInterface *  lpPlayerStatusInterface, EActiveRaceCarIndex  lePlayerActiveRaceCarIndex, bool  lbAllCarsReady, InputBuffer::GameActionQueue *  lpOutputGameActionQueue, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *  lpGlobalCarInterface, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, bool  lbTakedownCamActive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:1677
		const TimerStatus * lpSimTimerStatus;

		// BrnModeManager.cpp:1678
		float32_t lfSimTimeStep;

		// BrnModeManager.cpp:1679
		bool lbIsCrashMode;

		// BrnModeManager.cpp:1680
		bool lbUseDamageMechanics;

		// BrnModeManager.cpp:1796
		const const Time & lCurrentTime;

		CgsSystem::TimerStatus::GetCurrentTimeStep(/* parameters */);
		IsWaitingForActiveRaceCars(/* parameters */);
		GameMode::SetUpdateTimeStep(/* parameters */);
		IsShowtimeGameMode(/* parameters */);
		CgsSystem::TimerStatus::GetTime(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		IsInProgress(/* parameters */);
		IsInProgress(/* parameters */);
		IsOnlineGameMode(/* parameters */);
		ScoringSystem::HasModeTimeExpired(/* parameters */);
		{
			// BrnModeManager.cpp:2003
			PlayerFinishedModeEvent lPlayerFinishedModeEvent;

			ScoringSystem::HasModeTimeExpired(/* parameters */);
		}
		IsOnlineGameMode(/* parameters */);
		{
			// BrnModeManager.cpp:2039
			RequestGameTrainingAction lRequestTraining;

			AddGameAction<BrnGameState::GameStateModuleIO::RequestGameTrainingAction>(/* parameters */);
		}
	}
	{
		// BrnModeManager.cpp:1931
		RequestGameTrainingAction lRequestTraining;

		AddGameAction<BrnGameState::GameStateModuleIO::RequestGameTrainingAction>(/* parameters */);
	}
	GameMode::SetShowResultsRequest(/* parameters */);
	ScoringSystem::HasModeTimeExpired(/* parameters */);
	{
		// BrnModeManager.cpp:1963
		HUDMessageTimeUpAction lTimeUpAction;

		AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageTimeUpAction>(/* parameters */);
	}
	ScoringSystem::IsTimeLimitActive(/* parameters */);
	{
		// BrnModeManager.cpp:2030
		RequestGameTrainingAction lRequestTraining;

		AddGameAction<BrnGameState::GameStateModuleIO::RequestGameTrainingAction>(/* parameters */);
	}
	GameMode::SetTimerStartRequest(/* parameters */);
	ScoringSystem::StartModeTimer(/* parameters */);
	{
		// BrnModeManager.cpp:1778
		StopModeCountdownAction lStopAction;

		AddGameAction<BrnGameState::GameStateModuleIO::StopModeCountdownAction>(/* parameters */);
		GameStateModule::SetActiveGameModeState(/* parameters */);
		GameMode::SetCountdownJustFinished(/* parameters */);
	}
	GameMode::SetIntroJustFinished(/* parameters */);
	ScoringSystem::ClearHighestPositions(/* parameters */);
	ScoringSystem::HasStuntAttackModeEnded(/* parameters */);
	{
		// BrnModeManager.cpp:1689
		ShowtimeModeSwitchAction lShowtimeModeSwitchAction;

		AddGameAction<BrnGameState::GameStateModuleIO::ShowtimeModeSwitchAction>(/* parameters */);
	}
	{
		// BrnModeManager.cpp:1892
		PlayerFinishedModeEvent lPlayerFinishedModeEvent;

	}
	ScoringSystem::ClearModeTimer(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::PrepareForModeAction>(/* parameters */);
	{
		// BrnModeManager.cpp:1949
		PlayerFinishedModeEvent lPlayerFinishedModeEvent;

	}
	{
		// BrnModeManager.cpp:2012
		ModeTimeOutTimerEvent lModeTimeOutEvent;

		ModeTimeOutTimerEvent(/* parameters */);
		ScoringSystem::GetModeTimeRemaining(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::ModeTimeOutTimerEvent>(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
	}
	{
		// BrnModeManager.cpp:1991
		PlayerFinishedModeEvent lPlayerFinishedModeEvent;

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
		// BrnModeManager.cpp:1823
		const GameModeParams * lpGameModeParams;

		GetCurrentGameModeParams(/* parameters */);
		ScoringSystem::SetMedalModeTimer(/* parameters */);
		CgsSystem::Time::operator+(/* parameters */);
	}
	ScoringSystem::SetTimeLimitSeconds(/* parameters */);
	{
		// BrnModeManager.cpp:1853
		const GameModeParams * lpGameModeParams;

		GetCurrentGameModeParams(/* parameters */);
		ScoringSystem::SetTimeLimitSeconds(/* parameters */);
	}
	CgsSystem::Time::operator+(/* parameters */);
	ScoringSystem::SetTimeLimitSeconds(/* parameters */);
	CgsSystem::Time::operator+(/* parameters */);
	ScoringSystem::SetTimeLimitSeconds(/* parameters */);
	{
		// BrnModeManager.cpp:1920
		PlayerFinishedModeEvent lPlayerFinishedModeEvent;

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

// BrnModeManager.cpp:528
void BrnGameState::ModeManager::PreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, const const TimerStatusInterface &  lTimerStatusInterface, EActiveRaceCarIndex  lePlayerActiveRaceCarIndex, EGlobalRaceCarIndex  lePlayerGlobalRaceCarIndex, bool  lbAllCarsReady, InputBuffer::GameActionQueue *  lpOutputGameActionQueue, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *  lpGlobalCarInterface, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, bool  lbTakedownCamActive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnModeManager.cpp:634
		GameModeOutputInterface * lpGameModeOutputInterface;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsSystem::TimerStatusInterface::operator=(/* parameters */);
	CgsSystem::TimerStatus::operator=(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetPlayerStatusInterface(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetNetworkPlayerResultsInterface(/* parameters */);
	IsOnlineGameMode(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetNetworkToGameStateInterface(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameStateToNetworkInterface(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::NetworkToGameStateInterface::GetDirtyTrickQueue(/* parameters */);
	IsOnlineGameMode(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetNetworkToGameStateInterface(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetNetworkToGameStateInterface(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::NetworkToGameStateInterface::GetFramesSinceStart(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetPlayerStatusInterface(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::NetworkToGameStateInterface::GetCompletedChallengesQueue(/* parameters */);
	IsInProgress(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameModeOutputInterface(/* parameters */);
	GameStateModuleIO::GameModeOutputInterface::State::SetGameModeType(/* parameters */);
	GetCurrentGameModeState(/* parameters */);
	GameStateModuleIO::GameModeOutputInterface::GetCurrentState(/* parameters */);
	GameStateModuleIO::GameModeOutputInterface::State::SetGameModeType(/* parameters */);
	GameMode::GetCurrentState(/* parameters */);
	GetCurrentGameModeState(/* parameters */);
	GameStateModuleIO::GameModeOutputInterface::State::SetGameModeState(/* parameters */);
	GameStateModuleIO::GameModeOutputInterface::State::SetGameModeState(/* parameters */);
	GameMode::GetCurrentState(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
}

// BrnModeManager.cpp:5126
void BrnGameState::ModeManager::ProcessNewRoadScore(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutputBuffer, ChallengePlayerScoreEntry  lChallegeScore, BrnStreetData::ScoreType  leScoreType, CgsID  lRoadID, Road::ChallengeIndex  lChallengeIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnModeManager.cpp:112
// BrnModeManager.cpp:113
