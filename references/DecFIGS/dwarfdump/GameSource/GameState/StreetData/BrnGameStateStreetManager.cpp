// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnGameStateStreetManager.cpp:881
	int32_t CompareSectionWalkData(const void *, const void *);

	// BrnGameStateStreetManager.cpp:39
	const char[12] KAC_LOCAL_PLAYER_NAME_TEXT;

	// BrnGameStateStreetManager.cpp:40
	const float32_t KF_TIME_BETWEEN_HIGH_SCORE_UNBUFFERS;

	// BrnGameStateStreetManager.cpp:43
	const int32_t KI_MAX_SECTION_WALK_DEPTH = 11;

	// BrnGameStateStreetManager.cpp:44
	const int32_t KI_MAX_PORTAL_WALK_DIRECTION_PERSISTANCE = 5;

	// BrnGameStateStreetManager.cpp:45
	const float32_t KF_UPCOMING_ROAD_SIDEWAYS_ANGLE;

	// BrnGameStateStreetManager.cpp:46
	const float32_t KF_UPCOMING_ROAD_SIGNIFICANT_ANGLE;

	// BrnGameStateStreetManager.cpp:47
	const float32_t KF_MAX_ROAD_LOOKAHEAD_DIST;

	// BrnGameStateStreetManager.cpp:48
	const float32_t KF_UPCOMING_ROADS_STICKY_TIME;

	// BrnGameStateStreetManager.cpp:49
	const float32_t KF_UPCOMING_ROADS_STICKY_TIME_RACE;

	// BrnGameStateStreetManager.cpp:50
	const int32_t KI_MIN_NODES_FOR_DECISION = 2;

	// BrnGameStateStreetManager.cpp:51
	const int32_t KI_ROUTE_ROAD_PREDICTION_LOOKAHEAD_NODES = 13;

	// BrnGameStateStreetManager.cpp:52
	const float32_t KF_MIN_DISTANCE_FOR_DECSION;

	// BrnGameStateStreetManager.cpp:53
	const float32_t KF_TIME_IN_JUNCTION_TO_KILL_UPCOMING;

	// BrnGameStateStreetManager.cpp:54
	const float32_t KI_MIN_TIME_GOING_WRONG_WAY;

	// BrnGameStateStreetManager.cpp:56
	const float32_t KF_MIN_TIME_BEFORE_WE_SHOW_SIGN;

	// BrnGameStateStreetManager.cpp:57
	const float32_t KF_MIN_DISTANCE_BEFORE_WE_SHOW_SIGN;

	// BrnGameStateStreetManager.cpp:59
	const float32_t KF_ROUTE_GUIDANCE_LOCK_TIME;

	// BrnGameStateStreetManager.cpp:61
	const SpanBase::RoadIndex KI_INTERSTATE_SECTION_1 = 52;

	// BrnGameStateStreetManager.cpp:62
	const SpanBase::RoadIndex KI_INTERSTATE_SECTION_2 = 54;

	// BrnGameStateStreetManager.cpp:63
	const SpanBase::RoadIndex KI_INTERSTATE_SECTION_3 = 48;

	// BrnGameStateStreetManager.cpp:64
	const SpanBase::RoadIndex KI_INTERSTATE_SECTION_4 = 49;

	// BrnGameStateStreetManager.cpp:67
	const int32_t KI_NUM_END_OF_ROUTE_IGNORE_NODES = 2;

	// BrnGameStateStreetManager.cpp:70
	const int32_t KI_NUM_ROADS_IN_A_PAIR = 2;

	// BrnGameStateStreetManager.cpp:71
	const int32_t KI_NUM_PAIRED_ROADS = 6;

	// BrnGameStateStreetManager.cpp:73
	const SpanBase::RoadIndex[6][2] KAA_FOLLOW_ON_ROAD_PAIRS;

}

// BrnGameStateStreetManager.cpp:317
void BrnGameState::StreetManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameStateStreetManager.cpp:491
void BrnGameState::StreetManager::UpdateWrongWayMessages(float32_t  lfTimeGoingTheWrongWay, float32_t  lfSimTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameStateStreetManager.cpp:1293
void BrnGameState::StreetManager::AreRoadsAFollowOnPair(SpanBase::RoadIndex  liRoadIndex1, SpanBase::RoadIndex  liRoadIndex2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:1295
		int32_t liHardCodedListIndex;

	}
}

// BrnGameStateStreetManager.cpp:1640
void BrnGameState::StreetManager::IsRoadOnTheInterState(SpanBase::RoadIndex  lCurrentRoadIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameStateStreetManager.cpp:1657
void BrnGameState::StreetManager::DrawPlayerRoute(PostWorldInputBuffer::AICarOutputInterface *  lpLastAICarOutputInterface, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameStateStreetManager.cpp:1700
void BrnGameState::StreetManager::DrawCurrentNodeRoute(PostWorldInputBuffer::AICarOutputInterface *  lpLastAICarOutputInterface, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameStateStreetManager.cpp:4236
void BrnGameState::StreetManager::GetSaveGameChallengeIndexByRoadID(CgsID  lRoadID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:4238
		int32_t liChallengeIndex;

	}
}

// BrnGameStateStreetManager.cpp:3700
void BrnGameState::StreetManager::SetChallengeFriendDownloadTimestamp(uint32_t  luTimestamp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameStateStreetManager.cpp:3038
void BrnGameState::StreetManager::ProcessDownloadEvent(const BrnGameState::GameStateModuleIO::OnlineRoadRulesDownloadedEvent *  lpDownloadedEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameStateStreetManager.cpp:4129
void BrnGameState::StreetManager::GetActiveRoadRuleType(BrnGameState::EActiveRoadRule  leNewActiveRoadRuleType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:4131
		BrnStreetData::ScoreType leScoreType;

	}
}

// BrnGameStateStreetManager.cpp:4172
void BrnGameState::StreetManager::ProcessActiveRoadRuleChange(BrnGameState::EActiveRoadRule  leNewActiveRoadRuleType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameStateStreetManager.cpp:1750
void BrnGameState::StreetManager::GetOverallAngleForRoadTurning(AICarOutputInterface *  lpLastAICarOutputInterface, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:1755
		Road::Vector3 lTarget;

		// BrnGameStateStreetManager.cpp:1756
		Road::Vector3 lPlayerDirection;

	}
	rw::math::fpu::IsZero<float>(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition(/* parameters */);
	rw::math::fpu::operator-<float>(/* parameters */);
	rw::math::fpu::Normalize<float>(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerDirection(/* parameters */);
	rw::math::fpu::Mult<float>(/* parameters */);
	rw::math::fpu::Normalize<float>(/* parameters */);
	rw::math::fpu::AngleBetweenVectors<float>(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::CosAngleBetweenNormalizedVectors<float>(/* parameters */);
	rw::math::fpu::Mult<float>(/* parameters */);
	rw::math::fpu::NormalizeFast<float>(/* parameters */);
	rw::math::fpu::Dot<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	rw::math::fpu::ACos(/* parameters */);
	rw::math::fpu::IsZero(/* parameters */);
	rw::math::fpu::IsZero(/* parameters */);
}

// BrnGameStateStreetManager.cpp:143
void BrnGameState::StreetManager::Construct(BrnGameState::GameStateModule *  lpGameStateModule, BrnProgression::ProgressionManager *  lpProgression, BrnGameState::RoadRulesManager *  lpRoadRulesManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:145
		BrnStreetData::ScoreType leScoreType;

	}
	CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::Clear(/* parameters */);
	BrnStreetData::operator++(/* parameters */);
	CgsContainers::BitArray<64u>::UnSetAll(/* parameters */);
	rw::math::fpu::Vector3Template<float>::SetZero(/* parameters */);
	ClearSectionWalkingData(/* parameters */);
	ClearUpcomingRoadStickiness(/* parameters */);
	rw::math::fpu::Vector3Template<float>::SetZero(/* parameters */);
	rw::math::fpu::Vector3Template<float>::SetZero(/* parameters */);
	ClearUpcomingRoadIds(/* parameters */);
	rw::math::fpu::Vector3Template<float>::SetZero(/* parameters */);
}

// BrnGameStateStreetManager.cpp:240
void BrnGameState::StreetManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:242
		BrnStreetData::ScoreType leScoreType;

	}
	BrnStreetData::operator++(/* parameters */);
	CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::Clear(/* parameters */);
}

// BrnGameStateStreetManager.cpp:3259
void BrnGameState::StreetManager::ProcessOnlineGameLaunchedEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:3261
		BrnStreetData::ScoreType leScoreType;

	}
	CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::Clear(/* parameters */);
	BrnStreetData::operator++(/* parameters */);
	CgsContainers::BitArray<64u>::UnSetAll(/* parameters */);
}

// BrnGameStateStreetManager.cpp:3723
void BrnGameState::StreetManager::GetChallengeParScore(Road::ChallengeIndex  liIndex, ChallengeParScoresEntry *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
	BrnStreetData::StreetData::GetChallengeParScore(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnGameStateStreetManager.cpp:3564
void BrnGameState::StreetManager::GetChallengeUserScore(Road::ChallengeIndex  liIndex, ChallengePlayerScoreEntry *  lpData, bool  lbIndexNeedsMappingToSaveGameIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:3566
		int32_t liChallengeIndex;

	}
	CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
	BrnStreetData::StreetData::GetRoad(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:3582
		const ChallengePlayerScoreEntry * lpChallenge;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnGameStateStreetManager.cpp:1915
void BrnGameState::StreetManager::CalculateDistanceToTurning(AICarOutputInterface *  lpLastAICarOutputInterface, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:1919
		SpanBase::RoadIndex liRoadRoadIndexToMarkDistance;

		// BrnGameStateStreetManager.cpp:1925
		const Route * lpPlayerRoute;

		// BrnGameStateStreetManager.cpp:1926
		const RouteNode * lpPlayerRoadTargetRouteNode;

		// BrnGameStateStreetManager.cpp:1940
		Vector3 lPlayerRoadTargetRouteNodePosition;

		// BrnGameStateStreetManager.cpp:1941
		Vector3 lCurrentPlayerPosition;

		// BrnGameStateStreetManager.cpp:1947
		float32_t lfResult;

	}
	BrnAI::Route::GetNodeCount(/* parameters */);
	BrnAI::Route::GetNode(/* parameters */);
	BrnAI::RouteNode::GetPositionWithZeroY(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnGameStateStreetManager.cpp:3894
void BrnGameState::StreetManager::CopyFriendHighScoreChallengeData(ChallengeHighScoreEntry *  lpDest, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:3904
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnGameStateStreetManager.cpp:3914
void BrnGameState::StreetManager::CopyUserChallengeData(ChallengePlayerScoreEntry *  lpDest, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:3924
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnGameStateStreetManager.cpp:4019
void BrnGameState::StreetManager::FindRivalsByDistrict(BrnWorld::EDistrict  leDistrict, CgsID *  lpaRivalIds, int32_t  liMaxRivalCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:4021
		int32_t liRivalCount;

		// BrnGameStateStreetManager.cpp:4022
		int32_t liRivalIndex;

		// BrnGameStateStreetManager.cpp:4023
		const BrnProgression::ProgressionData * lpProgressionData;

		BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
	}
	{
		// BrnGameStateStreetManager.cpp:4027
		const Rival * lpRival;

		BrnProgression::ProgressionData::GetRival(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnGameStateStreetManager.cpp:3625
void BrnGameState::StreetManager::SetChallengeUserScore(Road::ChallengeIndex  liIndex, const ChallengePlayerScoreEntry *  lpData, bool  lbIndexNeedsMappingToSaveGameIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:3627
		int32_t liChallengeIndex;

	}
	CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
	BrnStreetData::StreetData::GetRoad(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
}

// BrnGameStateStreetManager.cpp:3007
void BrnGameState::StreetManager::ProcessUploadEvent(const BrnGameState::GameStateModuleIO::OnlineRoadRulesUploadedEvent *  lpUploadedEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:3009
		ChallengePlayerScoreEntry lUserChallengeData;

		// BrnGameStateStreetManager.cpp:3010
		Road::ChallengeIndex lChallengeIndex;

	}
	BrnStreetData::ChallengeData::SetClean(/* parameters */);
}

// BrnGameStateStreetManager.cpp:3938
void BrnGameState::StreetManager::SetupParRivals(const BrnGameState::TriggerQueryManager *  lpTriggerQueryManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:3940
		WorldMap2D lWorldMap;

		// BrnGameStateStreetManager.cpp:3941
		const BinaryFileResource * lpBinaryFileResource;

		// BrnGameStateStreetManager.cpp:3942
		int32_t liRoadIndex;

		// BrnGameStateStreetManager.cpp:3943
		const TriggerData * lpTriggerData;

		// BrnGameStateStreetManager.cpp:3944
		const BrnProgression::ProgressionData * lpProgressionData;

		// BrnGameStateStreetManager.cpp:3945
		Random lRandom;

		TriggerQueryManager::GetTriggerData(/* parameters */);
	}
	BrnProgression::ProgressionManager::GetProgressionData(/* parameters */);
	CgsNumeric::Random::Construct(/* parameters */);
	CgsResource::BinaryFileResource::GetData(/* parameters */);
	CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
	CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:3958
		int32_t liGenericRegionIndex;

		// BrnGameStateStreetManager.cpp:3959
		const Road * lpRoad;

	}
	CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
	BrnStreetData::StreetData::GetRoad(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:3964
		const GenericRegion * lpGenericRegion;

		{
			// BrnGameStateStreetManager.cpp:3969
			int32_t liRivalCount;

			// BrnGameStateStreetManager.cpp:3970
			uint8_t luValue;

			// BrnGameStateStreetManager.cpp:3971
			CgsID[2] laRivalIds;

			// BrnGameStateStreetManager.cpp:3972
			int32_t liScoreTypeIndex;

			BrnTrigger::BoxRegion::GetPosition(/* parameters */);
			CgsWorld::WorldMap2D::GetValue(/* parameters */);
			BrnProgression::ProgressionData::GetRival(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsNumeric::Random::RandomInt(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
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

// BrnGameStateStreetManager.cpp:2521
void BrnGameState::StreetManager::CreateUserChallengeScoreFromRoadRulesData(const RoadRulesMessageData *  lpRecvRoadRulesData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGameStateStreetManager.cpp:2523
	ChallengePlayerScoreEntry lChallengeUserScore;

	{
		// BrnGameStateStreetManager.cpp:2523
		ChallengePlayerScoreEntry lChallengeUserScore;

		// BrnGameStateStreetManager.cpp:2524
		BrnStreetData::ScoreType leScoreType;

		// BrnGameStateStreetManager.cpp:2525
		int32_t liScoreValue;

	}
	BrnStreetData::operator++(/* parameters */);
}

// BrnGameStateStreetManager.cpp:119
void BrnGameState::NewHighScoreBuffer::EraseMatchingEntries(CgsID  lRoadID, BrnStreetData::ScoreType  leScoreType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:121
		uint32_t luIndex;

		CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::GetLength(/* parameters */);
	}
	CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::Erase(/* parameters */);
	CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::GetItem(/* parameters */);
	CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::GetItem(/* parameters */);
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

// BrnGameStateStreetManager.cpp:3469
void BrnGameState::StreetManager::LoadDistrictMap(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, CgsModule::EventReceiverQueue<3072,16> *  lpReceiverQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<3072>::AcquireResource(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:3526
		const CgsModule::Event * lpEvent;

		// BrnGameStateStreetManager.cpp:3527
		const AcquireResourceResponse * lpAcquireResourceEvent;

		// BrnGameStateStreetManager.cpp:3528
		int32_t liEventSize;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnGameStateStreetManager.cpp:3386
void BrnGameState::StreetManager::LoadAIData(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, CgsModule::EventReceiverQueue<3072,16> *  lpReceiverQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<3072>::GetAILanes(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:3433
		const CgsModule::Event * lpEvent;

		// BrnGameStateStreetManager.cpp:3434
		const GetAIDataResponse * lpAIDataResponse;

		// BrnGameStateStreetManager.cpp:3435
		int32_t liEventSize;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator=(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnGameStateStreetManager.cpp:3284
void BrnGameState::StreetManager::LoadStreetData(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, CgsModule::EventReceiverQueue<3072,16> *  lpReceiverQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModuleIO::OutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<3072>::LoadBundle(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<3072>::AcquireResource(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:3325
		const CgsModule::Event * lpEvent;

		// BrnGameStateStreetManager.cpp:3326
		const AcquireResourceResponse * lpAcquire;

		// BrnGameStateStreetManager.cpp:3327
		int32_t liEventSize;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		{
			// BrnGameStateStreetManager.cpp:3342
			int32_t liRoadIndex;

			CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator=(/* parameters */);
			CgsModule::BaseEventReceiverQueue::GetNextEvent(/* parameters */);
			CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
			{
				CgsDev::StrStream::StrStream(/* parameters */);
			}
		}
		CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
		{
		}
		BrnStreetData::StreetData::GetRoad(/* parameters */);
		BrnStreetData::Road::GetId(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
		CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
		{
		}
		BrnStreetData::StreetData::GetRoad(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
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

// BrnGameStateStreetManager.cpp:280
void BrnGameState::StreetManager::Prepare(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, CgsModule::EventReceiverQueue<3072,16> *  lpReceiverQueue, const BrnGameState::TriggerQueryManager *  lpTriggerQueryManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameStateStreetManager.cpp:2909
void BrnGameState::StreetManager::OnProfileLoaded(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:2911
		RoadRulesChallengeScoresAction lUserChallengeScoresAction;

	}
	BrnProgression::ProgressionManager::GetProfile(/* parameters */);
	GameStateModuleIO::RoadRulesChallengeScoresAction::Construct(/* parameters */);
	BrnProgression::Profile::GetNetworkChallengeDownloadTimestamp(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesChallengeScoresAction>(/* parameters */);
}

// BrnGameStateStreetManager.cpp:3740
void BrnGameState::StreetManager::HasPlayerBeatenParScore(Road::ChallengeIndex  liIndex, BrnStreetData::ScoreType  leScoreType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:3742
		ChallengePlayerScoreEntry lUserScoreData;

		// BrnGameStateStreetManager.cpp:3743
		ChallengeParScoresEntry lParScoreData;

	}
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	CgsContainers::BitArray<2u>::IsBitSet(/* parameters */);
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:3756
		CgsID lRivalId;

		// BrnGameStateStreetManager.cpp:3757
		int32_t liUserScore;

		// BrnGameStateStreetManager.cpp:3758
		int32_t liParScore;

		BrnStreetData::ChallengeData::GetScore(/* parameters */);
		BrnStreetData::ChallengeParScoresEntry::GetScore(/* parameters */);
	}
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	{
	}
}

// BrnGameStateStreetManager.cpp:2883
void BrnGameState::StreetManager::GetNumberOfCompleteRoadsRuledByLocalPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:2885
		int32_t liNumberOfCompleteRoadsRuledByLocalPlayer;

		// BrnGameStateStreetManager.cpp:2886
		int32_t liChallengeIndex;

		GetRoadCount(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnProgression::ProgressionManager::SetNumberOfCompleteRoadRulesRuledByPlayer(/* parameters */);
}

// BrnGameStateStreetManager.cpp:2860
void BrnGameState::StreetManager::GetNumberOfParTimeTrialRoadsRuledByLocalPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:2862
		int32_t liNumberOfParTimeTrialRoadsRuledByLocalPlayer;

		// BrnGameStateStreetManager.cpp:2863
		int32_t liChallengeIndex;

		GetRoadCount(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		BrnProgression::ProgressionManager::SetNumberOfParTimeRoadRulesRuledByPlayer(/* parameters */);
	}
}

// BrnGameStateStreetManager.cpp:2837
void BrnGameState::StreetManager::GetNumberOfParShowTimeRoadsRuledByLocalPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:2839
		int32_t liNumberOfParShowTimeRoadsRuledByLocalPlayer;

		// BrnGameStateStreetManager.cpp:2840
		int32_t liChallengeIndex;

		GetRoadCount(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		BrnProgression::ProgressionManager::SetNumberOfParCrashRoadRulesRuledByPlayer(/* parameters */);
	}
}

// BrnGameStateStreetManager.cpp:2774
void BrnGameState::StreetManager::UpdateTrophyUnlockOnRoadRuleWin(BrnStreetData::ScoreType  leScoreType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:2776
		int32_t liNumberOfShowTimeRoadsRuled;

		// BrnGameStateStreetManager.cpp:2777
		int32_t liNumberOfTimeTrailRoadsRuled;

		// BrnGameStateStreetManager.cpp:2778
		int32_t liNumberOfCompleteRoadsRuled;

		// BrnGameStateStreetManager.cpp:2780
		int32_t liTotalNumberOfRoads;

		GetRoadCount(/* parameters */);
		BrnStreetData::StreetData::GetRoadCount(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnGameStateStreetManager.cpp:2171
void BrnGameState::StreetManager::UpdateUserScoresFromServerRecords(const LocalRoadRulesDownloadedQueue *  lpRoadRulesDownloadedQueue, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:2173
		RoadRulesChallengeScoresAction lUserChallengeScoresAction;

		// BrnGameStateStreetManager.cpp:2174
		int32_t liIndex;

		// BrnGameStateStreetManager.cpp:2175
		bool lbForceRoadUpload;

		{
			// BrnGameStateStreetManager.cpp:2186
			ChallengePlayerScoreEntry lDownloadedUserChallengeData;

			// BrnGameStateStreetManager.cpp:2187
			ChallengePlayerScoreEntry lUserChallengeData;

			// BrnGameStateStreetManager.cpp:2188
			const RoadRulesMessageData lDownloadedRecord;

			// BrnGameStateStreetManager.cpp:2189
			BrnStreetData::ScoreType leScoreType;

			// BrnGameStateStreetManager.cpp:2190
			CgsID lDefaultCarID;

			CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::GetEvent(/* parameters */);
			BrnProgression::ProgressionManager::GetProfile(/* parameters */);
		}
		BrnProgression::ProgressionManager::GetProfile(/* parameters */);
		GameStateModuleIO::RoadRulesChallengeScoresAction::Construct(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesChallengeScoresAction>(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
	BrnStreetData::StreetData::GetRoad(/* parameters */);
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	BrnStreetData::operator++(/* parameters */);
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:2214
		int32_t liScore;

		BrnStreetData::ChallengeData::ContainsData(/* parameters */);
		BrnStreetData::ChallengePlayerScoreEntry::SetCarID(/* parameters */);
		BrnStreetData::ChallengeData::SetClean(/* parameters */);
		BrnStreetData::ChallengeData::SetClean(/* parameters */);
	}
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	BrnStreetData::ChallengePlayerScoreEntry::SetCarID(/* parameters */);
	CgsContainers::BitArray<2u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::OverwriteServerRoadRulesRecordAction>(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::BitArray<2u>::UnSetAll(/* parameters */);
}

// BrnGameStateStreetManager.cpp:913
void BrnGameState::StreetManager::WalkAISection(const const Vector3Template<float> &  lOriginalEntryDir, const const Vector3Template<float> &  lPlayerPos, const AISection *  lpSection, uint16_t  luAISectionIndex, const const Vector3Template<float> &  lEntryPos, const const Vector3Template<float> &  lEntryAt, BrnGameState::ESectionEntryDirection  leEntryDirection, int32_t  liDirectionPersistenceCount, int32_t  liOverallDepthCount, bool  lbHasLeftOriginalRoad) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:915
		SpanBase::RoadIndex liCurrentRoadIndex;

		// BrnGameStateStreetManager.cpp:916
		int32_t liPortalIndex;

		// BrnGameStateStreetManager.cpp:917
		bool lbSectionIsNotOnOriginalRoad;

		// BrnGameStateStreetManager.cpp:918
		bool lbCurrentSectionIsValid;

		// BrnGameStateStreetManager.cpp:919
		bool lbNewRoadIsInterStateExit;

	}
	PushSectionIndex(/* parameters */);
	GetRoadIndexFromAISectionIndex(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:1049
		int32_t liNumPortalsToExplore;

		// BrnGameStateStreetManager.cpp:1051
		SectionWalkData[5] laSectionWalkData;

		BrnAI::AISection::GetPortalCount(/* parameters */);
		{
			// BrnGameStateStreetManager.cpp:1056
			uint16_t luLinkSectionIndex;

			// BrnGameStateStreetManager.cpp:1057
			const AISection * lpLinkSection;

			// BrnGameStateStreetManager.cpp:1058
			const Portal * lpPortal;

			// BrnGameStateStreetManager.cpp:1059
			Road::Vector3 lEntryCrossProduct;

			// BrnGameStateStreetManager.cpp:1060
			Road::Vector3 lPlayerPosToNewPortal;

			// BrnGameStateStreetManager.cpp:1061
			Road::Vector3 lPortalPosition;

			BrnAI::AISection::GetPortal(/* parameters */);
			HasSectionAlreadyBeenWalked(/* parameters */);
		}
		{
			// BrnGameStateStreetManager.cpp:1168
			int32_t liSectionWalkIndex;

			CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
			CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
			{
				// BrnGameStateStreetManager.cpp:1181
				BrnGameState::ESectionEntryDirection leNextDirection;

			}
		}
	}
	BrnStreetData::SpanBase::GetRoadIndex(/* parameters */);
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	BrnAI::AISectionsData::GetAISection(/* parameters */);
	BrnAI::AISection::IsUnsuitableForRoadSigns(/* parameters */);
	BrnAI::Portal::GetPosition(/* parameters */);
	rw::math::fpu::operator-<float>(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Magnitude<float>(/* parameters */);
	rw::math::fpu::IsSimilar<float>(/* parameters */);
	rw::math::fpu::Normalize<float>(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator-<float>(/* parameters */);
	rw::math::fpu::Sqrt<float>(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Cross<float>(/* parameters */);
	rw::math::fpu::Magnitude<float>(/* parameters */);
	rw::math::fpu::Sgn<float>(/* parameters */);
	rw::math::fpu::ASin(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
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
		// BrnGameStateStreetManager.cpp:1147
		BrnGameState::ESectionEntryDirection leEntryDirectionToNextPortal;

	}
}

// BrnGameStateStreetManager.cpp:2424
void BrnGameState::StreetManager::UpdateRoadRulesProfileScores() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	BrnProgression::ProgressionManager::SetRoadRuleNetworkHighScores(/* parameters */);
	BrnProgression::Profile::SetRoadRuleNetworkHighScores(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	BrnProgression::ProgressionManager::SetRoadRuleChallengeData(/* parameters */);
	BrnProgression::Profile::SetRoadRuleChallengeData(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnGameStateStreetManager.cpp:4069
void BrnGameState::StreetManager::ClearAllChallengeDataForBuddy(const PlayerName *  lpBuddyName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:4071
		Road::ChallengeIndex lChallengeIndex;

		// BrnGameStateStreetManager.cpp:4072
		bool lbClearedScoreForCurrentRoad;

		{
			// BrnGameStateStreetManager.cpp:4082
			BrnStreetData::ScoreType leScoreType;

		}
	}
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	BrnStreetData::operator++(/* parameters */);
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:4090
		PlayerName lPlayerName;

		// BrnGameStateStreetManager.cpp:4091
		int32_t liScore;

		BrnStreetData::ChallengeHighScoreEntry::GetScore(/* parameters */);
		CgsNetwork::UsernameCompare(/* parameters */);
		RoadRulesManager::GetCurrentRoadID(/* parameters */);
		CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
		BrnStreetData::StreetData::GetRoad(/* parameters */);
		BrnStreetData::ChallengeHighScoreEntry::ClearScore(/* parameters */);
	}
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnGameStateStreetManager.cpp:4046
void BrnGameState::StreetManager::ClearAllChallengeData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:4048
		Road::ChallengeIndex lChallengeIndex;

	}
}

// BrnGameStateStreetManager.cpp:3056
void BrnGameState::StreetManager::ProcessConnectedOnlineEvent(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const BrnGameState::GameStateModuleIO::OnlineRoadRulesConnectInfoEvent *  lpConnectEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:3065
		RoadRulesChallengeScoresAction lUserChallengeScoresAction;

	}
	BrnProgression::ProgressionManager::GetProfile(/* parameters */);
	GameStateModuleIO::RoadRulesChallengeScoresAction::Construct(/* parameters */);
	BrnProgression::Profile::GetNetworkChallengeDownloadTimestamp(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesChallengeScoresAction>(/* parameters */);
	BrnProgression::Profile::SetLastRoadRulesResetTime(/* parameters */);
}

// BrnGameStateStreetManager.cpp:3595
void BrnGameState::StreetManager::GetChallengeFriendHighScore(Road::ChallengeIndex  liIndex, ChallengeHighScoreEntry *  lpData, bool  lbIndexNeedsMappingToSaveGameIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:3597
		int32_t liChallengeIndex;

	}
	CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
	BrnStreetData::StreetData::GetRoad(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:3613
		const ChallengeHighScoreEntry * lpChallenge;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnGameStateStreetManager.cpp:4188
void BrnGameState::StreetManager::ProcessBuddyRemoved(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const BrnGameState::GameStateModuleIO::BuddyRemovedEvent *  lpBuddyRemovedEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:4190
		bool lbClearedScoreForCurrentRoad;

	}
	{
		// BrnGameStateStreetManager.cpp:4203
		int32_t liSaveGameChallengeIndex;

		// BrnGameStateStreetManager.cpp:4204
		RoadRulesUpdateTargetScoreAction lAction;

		RoadRulesManager::GetCurrentRoadID(/* parameters */);
	}
	GetRoad(/* parameters */);
	BrnStreetData::StreetData::GetRoad(/* parameters */);
	BrnStreetData::Road::GetId(/* parameters */);
	RoadRulesManager::GetCurrentRoadID(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesUpdateTargetScoreAction>(/* parameters */);
	GameStateModuleIO::RequestAutoSaveAction::RequestAutoSaveAction(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::RequestAutoSaveAction>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnGameStateStreetManager.cpp:3831
void BrnGameState::StreetManager::HasPlayerBeatenParAndFriendScore(Road::ChallengeIndex  liIndex, BrnStreetData::ScoreType  leScoreType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:3833
		ChallengePlayerScoreEntry lUserScoreData;

		// BrnGameStateStreetManager.cpp:3834
		ChallengeParScoresEntry lParScoreData;

		// BrnGameStateStreetManager.cpp:3835
		ChallengeHighScoreEntry lHighScoreEntry;

	}
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	CgsContainers::BitArray<2u>::IsBitSet(/* parameters */);
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:3850
		CgsID lRivalId;

		// BrnGameStateStreetManager.cpp:3851
		int32_t liUserScore;

		// BrnGameStateStreetManager.cpp:3852
		int32_t liParScore;

		BrnStreetData::ChallengeData::GetScore(/* parameters */);
		BrnStreetData::ChallengeParScoresEntry::GetScore(/* parameters */);
		BrnStreetData::ChallengeData::ContainsData(/* parameters */);
		{
			// BrnGameStateStreetManager.cpp:3869
			PlayerName lPlayerName;

			// BrnGameStateStreetManager.cpp:3870
			int32_t liFriendScore;

			BrnStreetData::ChallengeHighScoreEntry::GetScore(/* parameters */);
		}
	}
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	{
	}
}

// BrnGameStateStreetManager.cpp:3782
void BrnGameState::StreetManager::HasPlayerBeatenFriendScore(Road::ChallengeIndex  liIndex, BrnStreetData::ScoreType  leScoreType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:3784
		ChallengePlayerScoreEntry lUserScoreData;

		// BrnGameStateStreetManager.cpp:3785
		ChallengeHighScoreEntry lHighScoreEntry;

	}
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	CgsContainers::BitArray<2u>::IsBitSet(/* parameters */);
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:3803
		PlayerName lPlayerName;

		// BrnGameStateStreetManager.cpp:3804
		int32_t liUserScore;

		// BrnGameStateStreetManager.cpp:3805
		int32_t liFriendScore;

		BrnStreetData::ChallengeData::GetScore(/* parameters */);
		BrnStreetData::ChallengeHighScoreEntry::GetScore(/* parameters */);
	}
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	{
	}
}

// BrnGameStateStreetManager.cpp:4263
void BrnGameState::StreetManager::FillInRoadRulesQuery(BrnGameState::GameStateModuleIO::RoadRulesBatchQueryAction *  lpRulesQueryAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:4265
		int32_t liRoadIndex;

		CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
	}
	BrnStreetData::StreetData::GetRoadCount(/* parameters */);
	BrnStreetData::StreetData::GetRoad(/* parameters */);
	CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnGameStateStreetManager.cpp:3666
void BrnGameState::StreetManager::GetHighScoreEntry(Road::ChallengeIndex  lChallengeIndex, ChallengeHighScoreEntry *  lpData, bool  lbIndexNeedsMappingToSaveGameIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:3668
		ChallengePlayerScoreEntry lLocalChallengeData;

		// BrnGameStateStreetManager.cpp:3669
		ChallengeHighScoreEntry lLocalPlayerHighScoreEntry;

		// BrnGameStateStreetManager.cpp:3670
		PlayerName lPlayerName;

		// BrnGameStateStreetManager.cpp:3671
		BrnStreetData::ScoreType leScoreType;

	}
	CgsNetwork::PlayerName::Construct(/* parameters */);
	BrnStreetData::operator++(/* parameters */);
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	BrnStreetData::ChallengeData::GetScore(/* parameters */);
	BrnStreetData::ChallengeHighScoreEntry::SetScore(/* parameters */);
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
}

// BrnGameStateStreetManager.cpp:3091
void BrnGameState::StreetManager::ProcessScoreRequestEvent(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const BrnGameState::GameStateModuleIO::RoadRulesScoreRequestEvent *  lpRequestEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:3096
		ChallengeHighScoreEntry lHighScoreEntry;

		// BrnGameStateStreetManager.cpp:3097
		ChallengePlayerScoreEntry lPlayerScoreEntry;

		// BrnGameStateStreetManager.cpp:3098
		ChallengeParScoresEntry lParScoresEntry;

		// BrnGameStateStreetManager.cpp:3099
		RoadRulesRoadScoreAction lRoadRulesScoreAction;

		// BrnGameStateStreetManager.cpp:3100
		CgsID lRivalId;

		// BrnGameStateStreetManager.cpp:3101
		int32_t liParScore;

		{
			// BrnGameStateStreetManager.cpp:3131
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		BrnStreetData::ChallengeParScoresEntry::GetScore(/* parameters */);
		BrnStreetData::ChallengeData::ContainsData(/* parameters */);
		CgsContainers::BitArray<2u>::IsBitSet(/* parameters */);
		{
			// BrnGameStateStreetManager.cpp:3177
			char[13] lacRulerName;

			GetParRivalId(/* parameters */);
		}
		BrnStreetData::ChallengeData::ContainsData(/* parameters */);
		{
			// BrnGameStateStreetManager.cpp:3234
			char[13] lacRulerName;

			GetParRivalId(/* parameters */);
		}
		AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesRoadScoreAction>(/* parameters */);
	}
	{
		// BrnGameStateStreetManager.cpp:3193
		PlayerName lPlayerName;

		// BrnGameStateStreetManager.cpp:3194
		int32_t liScore;

		{
			// BrnGameStateStreetManager.cpp:3219
			char[13] lacRulerName;

			GetParRivalId(/* parameters */);
		}
	}
	{
		// BrnGameStateStreetManager.cpp:3149
		int32_t liScore;

		{
			// BrnGameStateStreetManager.cpp:3162
			char[13] lacRulerName;

			GetParRivalId(/* parameters */);
		}
	}
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	{
	}
}

// BrnGameStateStreetManager.cpp:2378
void BrnGameState::StreetManager::GetNumberOfRoadsRulesByLocalPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:2380
		ChallengeHighScoreEntry lHighScoreEntry;

		// BrnGameStateStreetManager.cpp:2381
		int32_t liChallengeIndex;

		// BrnGameStateStreetManager.cpp:2382
		int32_t liNumRoadsRuledByLocalPlayer;

		{
			// BrnGameStateStreetManager.cpp:2389
			BrnStreetData::ScoreType leScoreType;

			BrnStreetData::operator++(/* parameters */);
			{
				// BrnGameStateStreetManager.cpp:2397
				PlayerName lPlayerName;

				// BrnGameStateStreetManager.cpp:2398
				int32_t liScore;

				BrnStreetData::ChallengeData::ContainsData(/* parameters */);
				BrnStreetData::ChallengeHighScoreEntry::GetScore(/* parameters */);
			}
			CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
			{
			}
		}
	}
}

// BrnGameStateStreetManager.cpp:2292
void BrnGameState::StreetManager::UpdateBufferedHighScores(float32_t  lfSimTimeStep, bool  lbIsAnythingPaused, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::GetLength(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:2325
		RoadRulesNewHighScoreAction lNewHighScoreAction;

		CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::operator[](/* parameters */);
		CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::operator[](/* parameters */);
		CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::operator[](/* parameters */);
		CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::operator[](/* parameters */);
		CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::operator[](/* parameters */);
		CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::Erase(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesNewHighScoreAction>(/* parameters */);
	}
	{
		// BrnGameStateStreetManager.cpp:2350
		RoadRulesNewRulersAction lNewRoadRulersAction;

		AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesNewRulersAction>(/* parameters */);
		CgsContainers::BitArray<64u>::UnSetAll(/* parameters */);
	}
	{
		// BrnGameStateStreetManager.cpp:2309
		RoadRulesNewHighScoreAction lNewHighScoreAction;

		CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::Clear(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesNewHighScoreAction>(/* parameters */);
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

// BrnGameStateStreetManager.cpp:2079
void BrnGameState::StreetManager::CheckForNewHighScore(int32_t  liSaveGameChallengeIndex, ChallengeHighScoreEntry *  lpNewScore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:2081
		ChallengeHighScoreEntry lCurrentHighScoreEntry;

		// BrnGameStateStreetManager.cpp:2082
		PlayerName lPlayerName;

		// BrnGameStateStreetManager.cpp:2083
		int32_t liScore;

		// BrnGameStateStreetManager.cpp:2084
		BrnStreetData::ScoreType leScoreType;

		// BrnGameStateStreetManager.cpp:2085
		FastBitArray<2> lNewHighScoreTypes;

		// BrnGameStateStreetManager.cpp:2086
		FastBitArray<2> lScoresRuledByLocalPlayer;

		// BrnGameStateStreetManager.cpp:2087
		bool lbNewHighScore;

	}
	CgsContainers::FastBitArray<2>::UnSetAll(/* parameters */);
	BrnStreetData::operator++(/* parameters */);
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	BrnStreetData::ChallengeHighScoreEntry::GetScore(/* parameters */);
	CgsContainers::FastBitArray<2>::SetBit(/* parameters */);
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	CgsContainers::FastBitArray<2>::UnSetAll(/* parameters */);
	BrnStreetData::operator++(/* parameters */);
	CgsContainers::FastBitArray<2>::IsBitSet(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:2122
		BufferedNewHighScore lNewHighScoreToBuffer;

		BrnStreetData::ChallengeHighScoreEntry::GetScore(/* parameters */);
		CgsContainers::FastBitArray<2>::IsBitSet(/* parameters */);
		CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::IsFull(/* parameters */);
		CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::Append(/* parameters */);
		CgsContainers::BitArray<64u>::SetBit(/* parameters */);
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

// BrnGameStateStreetManager.cpp:1782
void BrnGameState::StreetManager::SendUpcomingRoadMessage(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, PostWorldInputBuffer::AICarOutputInterface *  lpLastAICarOutputInterface, bool  lbDoRoadHighlighting, BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:1786
		UpcomingRoadChangeAction lRoadChangeAction;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	GameStateModuleIO::UpcomingRoadChangeAction::Construct(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	Vector3<float>(/* parameters */);
	Vector3<float>(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:1803
		int32_t liChallengeIndex;

		CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
		BrnStreetData::StreetData::GetRoad(/* parameters */);
	}
	{
		// BrnGameStateStreetManager.cpp:1832
		int32_t liChallengeIndex;

		CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
		BrnStreetData::StreetData::GetRoad(/* parameters */);
	}
	AddGameAction<BrnGameState::GameStateModuleIO::UpcomingRoadChangeAction>(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameStateStreetManager.cpp:1843
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGameStateStreetManager.cpp:1842
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGameStateStreetManager.cpp:1814
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGameStateStreetManager.cpp:1813
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnGameStateStreetManager.cpp:1334
void BrnGameState::StreetManager::FindUpcomingStreetsFromRoute(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, PostWorldInputBuffer::AICarOutputInterface *  lpLastAICarOutputInterface, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, float32_t  lfSimTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:1336
		const Route * lpPlayerRoute;

		// BrnGameStateStreetManager.cpp:1338
		SpanBase::RoadIndex liLeftRoadIndex;

		// BrnGameStateStreetManager.cpp:1339
		SpanBase::RoadIndex liRightRoadIndex;

		// BrnGameStateStreetManager.cpp:1341
		int32_t liCurrentPlayerNodeIndex;

		// BrnGameStateStreetManager.cpp:1342
		int32_t liNodeIndex;

		// BrnGameStateStreetManager.cpp:1343
		int32_t liRouteLength;

		// BrnGameStateStreetManager.cpp:1345
		int32_t liLeftCount;

		// BrnGameStateStreetManager.cpp:1346
		int32_t liRightCount;

		// BrnGameStateStreetManager.cpp:1348
		float32_t lfDistanceToRoadChange;

		// BrnGameStateStreetManager.cpp:1349
		float32_t lfPlayerSpeed;

		// BrnGameStateStreetManager.cpp:1351
		bool lbIsPlayerCurrentlyOnInterstate;

		BrnAI::Route::GetStatus(/* parameters */);
		BrnAI::AIModuleIO::AICarOutputInterface::GetPlayerRouteNodeIndex(/* parameters */);
		BrnAI::Route::GetNodeCount(/* parameters */);
		{
			// BrnGameStateStreetManager.cpp:1390
			const AISection * lpSection;

			// BrnGameStateStreetManager.cpp:1391
			const RouteNode * lpRouteNode;

			// BrnGameStateStreetManager.cpp:1392
			const RouteNode * lpNextRouteNode;

			// BrnGameStateStreetManager.cpp:1394
			SpanBase::RoadIndex liNodeRoadIndex;

			// BrnGameStateStreetManager.cpp:1396
			Road::Vector3 lNodePos;

			// BrnGameStateStreetManager.cpp:1397
			Road::Vector3 lNextNodePos;

			// BrnGameStateStreetManager.cpp:1399
			uint16_t luNodeSectionIndex;

			// BrnGameStateStreetManager.cpp:1401
			bool lbNodeIsOnInterstate;

			// BrnGameStateStreetManager.cpp:1402
			bool lbCurrentNodeIsInterstateExit;

			BrnAI::Route::GetNode(/* parameters */);
			BrnAI::Route::GetNode(/* parameters */);
			{
				CgsDev::StrStream::StrStream(/* parameters */);
			}
			CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
			BrnAI::AISectionsData::GetAISection(/* parameters */);
			GetRoadIndexFromAISectionIndex(/* parameters */);
			CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
			BrnAI::AISectionsData::GetAISection(/* parameters */);
			BrnAI::RouteNode::GetPositionWithZeroY(/* parameters */);
			BrnAI::RouteNode::GetPositionWithZeroY(/* parameters */);
			rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
			rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
			{
				// BrnGameStateStreetManager.cpp:1449
				Road::Vector3 lNodeVector;

				// BrnGameStateStreetManager.cpp:1451
				float32_t lfDot;

				// BrnGameStateStreetManager.cpp:1452
				float32_t lfDistanceLeft;

				rw::math::fpu::IsSimilar<float>(/* parameters */);
				rw::math::fpu::operator-<float>(/* parameters */);
				rw::math::fpu::Normalize<float>(/* parameters */);
				rw::math::fpu::Sqrt<float>(/* parameters */);
				rw::math::fpu::Mult<float>(/* parameters */);
				rw::math::fpu::IsValid<float>(/* parameters */);
				rw::math::fpu::Vector3Template<float>::SetZero(/* parameters */);
				rw::math::fpu::Vector3Template<float>::SetZero(/* parameters */);
			}
			{
				// BrnGameStateStreetManager.cpp:1592
				Road::Vector3 lCurrentNodeAxis;

				// BrnGameStateStreetManager.cpp:1593
				SpanBase::RoadIndex liNextNodeRoadIndex;

				// BrnGameStateStreetManager.cpp:1594
				uint16_t luNextNodeSectionIndex;

				rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
			}
			rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
			rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		}
	}
	GetRoadIndexFromAISectionIndex(/* parameters */);
	rw::math::fpu::Vector3Template<float>::SetX(/* parameters */);
	rw::math::fpu::IsZero<float>(/* parameters */);
	rw::math::fpu::Vector3Template<float>::SetZ(/* parameters */);
	rw::math::fpu::Vector3Template<float>::SetZero(/* parameters */);
	rw::math::fpu::IsZero(/* parameters */);
	rw::math::fpu::IsZero(/* parameters */);
	rw::math::fpu::Normalize<float>(/* parameters */);
	rw::math::fpu::Sqrt<float>(/* parameters */);
	rw::math::fpu::Vector3Template<float>::SetZero(/* parameters */);
	rw::math::fpu::Vector3Template<float>::SetZero(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

// BrnGameStateStreetManager.cpp:652
void BrnGameState::StreetManager::FindUpcomingStreetsByRecursiveWalking(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, AICarOutputInterface *  lpLastAICarOutputInterface, float32_t  lfSimTimeStep, uint16_t  luStartAISectionIndex, bool  lbSendResults) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:654
		const AISection * lpCurrentSection;

		// BrnGameStateStreetManager.cpp:655
		const AISection * lpStartSection;

		// BrnGameStateStreetManager.cpp:656
		Road::Vector3 lPlayerAt;

		// BrnGameStateStreetManager.cpp:657
		Road::Vector3 lPlayerPos;

		// BrnGameStateStreetManager.cpp:658
		Road::Vector3 lPlayerRight;

		// BrnGameStateStreetManager.cpp:659
		Road::Vector3 lSectionEntryPos;

		// BrnGameStateStreetManager.cpp:660
		Road::Vector3 lSectionEntryDir;

		// BrnGameStateStreetManager.cpp:662
		AISection::Vector2 lCornerPos1;

		// BrnGameStateStreetManager.cpp:663
		AISection::Vector2 lCornerPos2;

		// BrnGameStateStreetManager.cpp:664
		AISection::Vector2 lExitEdgeStart;

		// BrnGameStateStreetManager.cpp:665
		AISection::Vector2 lExitEdgeEnd;

		// BrnGameStateStreetManager.cpp:666
		AISection::Vector2 lSectionEntryPos2D;

		// BrnGameStateStreetManager.cpp:667
		AISection::Vector2 lPerp2D;

		// BrnGameStateStreetManager.cpp:669
		float32_t lfMaxForwardness;

		// BrnGameStateStreetManager.cpp:670
		int32_t liPortalIndex;

		// BrnGameStateStreetManager.cpp:671
		int32_t liCornerIndex;

		// BrnGameStateStreetManager.cpp:673
		float32_t lfStickyTime;

		// BrnGameStateStreetManager.cpp:674
		float32_t lfMaxDot;

		// BrnGameStateStreetManager.cpp:676
		uint16_t luFirstSectionIndex;

		// BrnGameStateStreetManager.cpp:768
		Road::Vector3 lPlayerToPortalVec;

		CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	}
	BrnAI::AISectionsData::GetAISection(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerDirection(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition(/* parameters */);
	ClearSectionWalkingData(/* parameters */);
	PushSectionIndex(/* parameters */);
	rw::math::fpu::Vector3Template<float>::SetZero(/* parameters */);
	rw::math::fpu::Vector3Template<float>::SetZero(/* parameters */);
	BrnAI::AISection::GetPortalCount(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:693
		const Portal * lpPortal;

		// BrnGameStateStreetManager.cpp:694
		const AISection * lpLinkSection;

		// BrnGameStateStreetManager.cpp:695
		Road::Vector3 lPortalPos;

		// BrnGameStateStreetManager.cpp:696
		Road::Vector3 lPlayerToPortalVec;

		// BrnGameStateStreetManager.cpp:697
		float32_t lfForwardNess;

		BrnAI::AISection::GetPortal(/* parameters */);
		CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
		BrnAI::AISectionsData::GetAISection(/* parameters */);
		BrnAI::AISection::IsUnsuitableForRoadSigns(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	BrnAI::AISectionsData::GetAISection(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:741
		float32_t lfDot;

		BrnAI::AISection::GetCorner(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		BrnAI::AISection::GetCorner(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::fpu::operator-<float>(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		rw::math::fpu::operator-<float>(/* parameters */);
	}
	rw::math::fpu::operator-<float>(/* parameters */);
	rw::math::fpu::Vector3Template<float>::SetZero(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Normalize<float>(/* parameters */);
	rw::math::fpu::Vector3Template<float>::SetX(/* parameters */);
	rw::math::fpu::Vector3Template<float>::SetZ(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Mult<float>(/* parameters */);
	rw::math::fpu::Normalize<float>(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	ClearUpcomingRoadStickiness(/* parameters */);
	ClearUpcomingRoadIds(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnAI::Portal::GetPosition(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator-<float>(/* parameters */);
	rw::math::fpu::Normalize<float>(/* parameters */);
	rw::math::fpu::Dot<float>(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator*=<float>(/* parameters */);
	rw::math::fpu::operator*=<float>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnGameStateStreetManager.cpp:526
void BrnGameState::StreetManager::UpdateUpcomingStreets(PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, PostWorldInputBuffer::AICarOutputInterface *  lpLastAICarOutputInterface, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, float32_t  lfSimTimeStep, bool  lbCurrentGameModeHasRoute) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:529
		const AISection * lpCurrentSection;

		// BrnGameStateStreetManager.cpp:530
		SpanBase::RoadIndex liCurrentRoadIndex;

		// BrnGameStateStreetManager.cpp:531
		EActiveRaceCarIndex lePlayerActiveRaceCarIndex;

		// BrnGameStateStreetManager.cpp:532
		uint16_t luAISectionIndex;

		// BrnGameStateStreetManager.cpp:533
		bool lbNeedToUpdateUpcoming;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarAISection(/* parameters */);
		GetRoadIndexFromAISectionIndex(/* parameters */);
		CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
		CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
		BrnAI::AISectionsData::GetAISection(/* parameters */);
	}
	{
		// BrnGameStateStreetManager.cpp:626
		PlayerInShortcutAction lPlayerInShortcutAction;

		AddGameAction<BrnGameState::GameStateModuleIO::PlayerInShortcutAction>(/* parameters */);
	}
	ClearSectionWalkingData(/* parameters */);
	ClearUpcomingRoadStickiness(/* parameters */);
	ClearUpcomingRoadIds(/* parameters */);
	BrnStreetData::SpanBase::GetRoadIndex(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:611
		PlayerInShortcutAction lPlayerInShortcutAction;

		AddGameAction<BrnGameState::GameStateModuleIO::PlayerInShortcutAction>(/* parameters */);
	}
	{
		// BrnGameStateStreetManager.cpp:578
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
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

// BrnGameStateStreetManager.cpp:3647
void BrnGameState::StreetManager::SetChallengeFriendHighScore(Road::ChallengeIndex  liIndex, const ChallengeHighScoreEntry *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameStateStreetManager.cpp:2941
void BrnGameState::StreetManager::ProcessNetworkHighScoreEvent(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, const BrnGameState::GameStateModuleIO::OnlineRoadRulesPersonalBestRecvEvent *  lpPersonalBestEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:2943
		ChallengeHighScoreEntry lPersonalBestScore;

		// BrnGameStateStreetManager.cpp:2944
		ChallengeHighScoreEntry lCurrentHighScoreEntry;

		// BrnGameStateStreetManager.cpp:2945
		Road::ChallengeIndex lChallengeIndex;

		// BrnGameStateStreetManager.cpp:2946
		int32_t liSaveGameChallengeIndex;

	}
	CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
	BrnStreetData::StreetData::GetRoad(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:2962
		bool lbNewHighScore;

		SetChallengeFriendHighScore(/* parameters */);
		RoadRulesManager::GetCurrentRoadID(/* parameters */);
		{
			// BrnGameStateStreetManager.cpp:2982
			RoadRulesUpdateTargetScoreAction lAction;

			AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesUpdateTargetScoreAction>(/* parameters */);
		}
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnGameStateStreetManager.cpp:2556
void BrnGameState::StreetManager::ProcessNewRoadScore(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutputBuffer, ChallengePlayerScoreEntry  lChallegeScore, BrnStreetData::ScoreType  leScoreType, Road::ChallengeIndex  lChallengeIndex, bool  lbIsOnlineMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:2558
		ChallengeHighScoreEntry lHighScoreEntry;

		// BrnGameStateStreetManager.cpp:2559
		ChallengeParScoresEntry lParScoreData;

		// BrnGameStateStreetManager.cpp:2560
		ChallengePlayerScoreEntry lUserChallengeData;

		// BrnGameStateStreetManager.cpp:2561
		ChallengePlayerScoreEntry lUserPersonalBest;

		// BrnGameStateStreetManager.cpp:2562
		int32_t liSaveGameChallengeIndex;

		// BrnGameStateStreetManager.cpp:2563
		bool lbUserSetNewPersonalBest;

		// BrnGameStateStreetManager.cpp:2564
		bool lbNewHighScore;

		// BrnGameStateStreetManager.cpp:2565
		bool lbOnlineLossButOfflineWin;

		CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
	}
	{
	}
	BrnStreetData::StreetData::GetRoad(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:2591
		CgsID lRivalID;

		// BrnGameStateStreetManager.cpp:2592
		int32_t liScore;

		// BrnGameStateStreetManager.cpp:2593
		int32_t liParScore;

		// BrnGameStateStreetManager.cpp:2594
		bool lbHasBeatenParScoreBefore;

		{
			// BrnGameStateStreetManager.cpp:2628
			CgsID lCurrentCarID;

			AddGameAction<BrnGameState::GameStateModuleIO::RequestAutoSaveAction>(/* parameters */);
		}
	}
	{
		// BrnGameStateStreetManager.cpp:2695
		ChallengeHighScoreEntry lCurrentHighScoreEntry;

		// BrnGameStateStreetManager.cpp:2696
		RoadRulesNewHighScoreAction lNewHighScoreAction;

		// BrnGameStateStreetManager.cpp:2697
		RoadRulesNewRulersAction lNewRoadRulersAction;

		GetRoad(/* parameters */);
		BrnStreetData::StreetData::GetRoad(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesNewHighScoreAction>(/* parameters */);
	}
	{
		// BrnGameStateStreetManager.cpp:2740
		RequestGameTrainingAction lRequestTraining;

		GetRoad(/* parameters */);
		BrnProgression::ProgressionManager::GetAchievementManager(/* parameters */);
		BrnStreetData::StreetData::GetRoad(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::RequestGameTrainingAction>(/* parameters */);
	}
	BrnStreetData::ChallengeParScoresEntry::GetScore(/* parameters */);
	GameStateModule::GetCurrentCarId(/* parameters */);
	BrnStreetData::ChallengePlayerScoreEntry::SetCarID(/* parameters */);
	BrnStreetData::ChallengePlayerScoreEntry::SetCarID(/* parameters */);
	GameStateModuleIO::RequestAutoSaveAction::RequestAutoSaveAction(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:2682
		RoadRulesPersonalBestAction lNewPBScoreAction;

		AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesPersonalBestAction>(/* parameters */);
	}
	{
		// BrnGameStateStreetManager.cpp:2598
		Profile * lpProfile;

		BrnProgression::ProgressionManager::GetProfile(/* parameters */);
		BrnProgression::Profile::SetNewHighShowtimeScore(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsContainers::BitArray<64u>::SetBit(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesNewRulersAction>(/* parameters */);
	CgsContainers::BitArray<64u>::UnSetBit(/* parameters */);
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
		// BrnGameStateStreetManager.cpp:2651
		PlayerName lPlayerName;

		// BrnGameStateStreetManager.cpp:2652
		int32_t liFriendHighScore;

		BrnStreetData::ChallengeHighScoreEntry::GetScore(/* parameters */);
	}
}

// BrnGameStateStreetManager.cpp:2481
void BrnGameState::StreetManager::CreateHighScoreEntryFromDownloadData(const PlayerName *  lpaPlayerNames, const RoadRulesMessageData *  lpRecvRoadRulesData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGameStateStreetManager.cpp:2483
	ChallengeHighScoreEntry lHighScoreEntry;

	{
		// BrnGameStateStreetManager.cpp:2483
		ChallengeHighScoreEntry lHighScoreEntry;

		// BrnGameStateStreetManager.cpp:2484
		BrnStreetData::ScoreType leScoreType;

		// BrnGameStateStreetManager.cpp:2485
		int32_t liScoreValue;

	}
	BrnStreetData::operator++(/* parameters */);
	BrnStreetData::ChallengeHighScoreEntry::SetScore(/* parameters */);
}

// BrnGameStateStreetManager.cpp:1960
void BrnGameState::StreetManager::UpdateFriendHighScores(const RoadRulesDownloadedQueue *  lpRoadRulesDownloadedQueue, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateStreetManager.cpp:1962
		PlayerName lHighScorePlayerName;

		// BrnGameStateStreetManager.cpp:1963
		Road::ChallengeIndex lHighScoreChallengeIndex;

		// BrnGameStateStreetManager.cpp:1964
		BrnStreetData::ScoreType leHighScoreType;

		// BrnGameStateStreetManager.cpp:1965
		BrnStreetData::ScoreType leScoreType;

		// BrnGameStateStreetManager.cpp:1966
		int32_t liIndex;

		// BrnGameStateStreetManager.cpp:1967
		int32_t liNumNewHighScores;

		// BrnGameStateStreetManager.cpp:1968
		bool lbHighScoreWhollyOwned;

		// BrnGameStateStreetManager.cpp:1969
		bool lbWasRulePlayersBefore;

	}
	CgsNetwork::PlayerName::Clear(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:1988
		ChallengeHighScoreEntry lNewHighScoreEntry;

		// BrnGameStateStreetManager.cpp:1989
		const RoadRulesDownloadEvent lRecvDataEvent;

		// BrnGameStateStreetManager.cpp:1990
		Road::ChallengeIndex lChallengeIndex;

		{
			// BrnGameStateStreetManager.cpp:1997
			bool lbNewHighScore;

			CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
		}
	}
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::GetEvent(/* parameters */);
	CgsResource::ResourcePtr<BrnStreetData::StreetData>::operator->(/* parameters */);
	{
	}
	BrnStreetData::StreetData::GetRoad(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:2018
		PlayerName lPlayerName;

		// BrnGameStateStreetManager.cpp:2019
		int32_t liScore;

		BrnStreetData::ChallengeHighScoreEntry::ClearScore(/* parameters */);
		BrnStreetData::ChallengeHighScoreEntry::SetScore(/* parameters */);
	}
	BrnStreetData::operator++(/* parameters */);
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	CgsContainers::BitArray<2u>::SetBit(/* parameters */);
	CgsContainers::BitArray<2u>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	RoadRulesManager::GetCurrentRoadID(/* parameters */);
	{
		// BrnGameStateStreetManager.cpp:2041
		RoadRulesUpdateTargetScoreAction lAction;

		AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesUpdateTargetScoreAction>(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnGameStateStreetManager.cpp:338
void BrnGameState::StreetManager::Update(bool  lbIsAnythingPaused, float32_t  lfSimTimeStep, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, PostWorldInputBuffer::AICarOutputInterface *  lpLastAICarOutputInterface, bool  lbCurrentGameModeHasRoute, bool  lbCurrentGameModeDisablesUpcoming, float32_t  lfTimeGoingTheWrongWay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModuleIO::PreWorldInputBuffer::GetNetworkToGameStateInterface(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetNetworkToGameStateInterface(/* parameters */);
	GameStateModuleIO::PreWorldInputBuffer::GetNetworkToGameStateInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnGameStateStreetManager.cpp:2447
void BrnGameState::StreetManager::CreateHighScoreEntryFromRoadRulesData(const PlayerName *  lpPlayerName, const RoadRulesMessageData *  lpRecvRoadRulesData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGameStateStreetManager.cpp:2449
	ChallengeHighScoreEntry lHighScoreEntry;

	{
		// BrnGameStateStreetManager.cpp:2449
		ChallengeHighScoreEntry lHighScoreEntry;

		// BrnGameStateStreetManager.cpp:2450
		int32_t liScoreType;

		// BrnGameStateStreetManager.cpp:2451
		int32_t liScoreValue;

	}
	BrnStreetData::ChallengeHighScoreEntry::SetScore(/* parameters */);
	CgsContainers::BitArray<2u>::SetBit(/* parameters */);
	CgsContainers::BitArray<2u>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

