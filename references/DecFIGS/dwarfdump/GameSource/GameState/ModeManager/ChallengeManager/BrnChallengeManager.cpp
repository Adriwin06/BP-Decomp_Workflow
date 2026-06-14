// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnChallengeManager.cpp:31
	const float32_t KF_DIST_SQUARED_LEAP_RADIUS;

	// BrnChallengeManager.cpp:32
	const float32_t KF_CLEARANCE_FOR_VALID_LEAP;

	// BrnChallengeManager.cpp:33
	const float32_t KF_MILLISECONDS_TO_SECONDS_MULTIPLIER;

	// BrnChallengeManager.cpp:34
	const float32_t KF_SECONDS_TO_MILLISECONDS_MULTIPLIER;

	// BrnChallengeManager.cpp:35
	const float32_t KF_RESULTS_TIME_OUT;

	// BrnChallengeManager.cpp:36
	const float32_t KF_LEAPT_CARS_TIMER;

	// BrnChallengeManager.cpp:38
	const BrnGameState::EFreeburnSkill[22] KAE_CHALLENGE_ACTION_TYPE_TO_FREEBURN_SKILL_MAPPING;

	// BrnChallengeManager.cpp:66
	const bool[19] KAB_CACHE_SKILL_IF_NOT_IN_CORRECT_LOCATION;

	// BrnChallengeManager.cpp:92
	const bool[19] KAB_BANK_SKILL_ON_LEAVING_LOCATION;

}

// BrnChallengeManager.cpp:131
void BrnGameState::ChallengeManager::ApplyVehicleList(const VehicleList *  lpVehicleList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnChallengeManager.cpp:472
void BrnGameState::ChallengeManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnChallengeManager.cpp:3934
void BrnGameState::ChallengeManager::IsChallengeCountdownTimerDone() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnChallengeManager.cpp:3947
void BrnGameState::ChallengeManager::IsConvoyTimerDone() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnChallengeManager.cpp:3963
void BrnGameState::ChallengeManager::IsResultsTimerDone() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnChallengeManager.cpp:726
void BrnGameState::ChallengeManager::RenderHUD() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnChallengeManager.cpp:3989
void BrnGameState::ChallengeManager::ResetConvoyTimer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnChallengeManager.cpp:4572
void BrnGameState::ChallengeManager::GetNumPlayersContributing(int32_t  liActionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:4574
		int32_t liNumPlayersContributing;

		// BrnChallengeManager.cpp:4575
		int32_t liIndex;

	}
}

// BrnChallengeManager.cpp:3976
void BrnGameState::ChallengeManager::ResetChallengeCountdownTimer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnChallengeManager.cpp:4002
void BrnGameState::ChallengeManager::ResetChallengeResultsTimer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnChallengeManager.cpp:4413
void BrnGameState::ChallengeManager::GetChallengeCompletionData(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:4415
		int32_t liIndex;

		// BrnChallengeManager.cpp:4416
		BrnGameState::ChallengeManager::ChallengeCompletionData * lpEntry;

	}
}

// BrnChallengeManager.cpp:541
void BrnGameState::ChallengeManager::UpdateConvoyTimer(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::Max<float>(/* parameters */);
}

// BrnChallengeManager.cpp:571
void BrnGameState::ChallengeManager::UpdateResultsTimer(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::Max<float>(/* parameters */);
}

// BrnChallengeManager.cpp:4477
void BrnGameState::ChallengeManager::GetCurrentFreeburnChallengeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnResource::ChallengeListEntry::GetChallengeID(/* parameters */);
}

// BrnChallengeManager.cpp:4503
void BrnGameState::ChallengeManager::ReceivedSuccessUpdatesFromAllPlayers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:4505
		int32_t liIndex;

		// BrnChallengeManager.cpp:4506
		int32_t liNumUpdatesReceived;

	}
}

// BrnChallengeManager.cpp:4541
void BrnGameState::ChallengeManager::GetNumPlayerSucceeding(int32_t  liActionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:4543
		int32_t liNumPlayersSucceeding;

		// BrnChallengeManager.cpp:4544
		int32_t liIndex;

	}
}

// BrnChallengeManager.cpp:242
void BrnGameState::ChallengeManager::ClearPlayerSuccessData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:244
		int32_t liIndex;

		{
			// BrnChallengeManager.cpp:248
			int32_t liActionIndex;

			CgsContainers::FastBitArray<120>::UnSetAll(/* parameters */);
			{
				// BrnChallengeManager.cpp:257
				BrnGameState::EFreeburnSkill leFreeburnSkillType;

				operator++(/* parameters */);
			}
		}
	}
}

// BrnChallengeManager.cpp:283
void BrnGameState::ChallengeManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:285
		int32_t liIndex;

		// BrnChallengeManager.cpp:286
		BrnGameState::EFreeburnSkill leFreeburnSkill;

	}
	CgsContainers::FastBitArray<2000>::UnSetAll(/* parameters */);
	CgsContainers::ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>::Destruct(/* parameters */);
	CgsContainers::FastBitArray<60>::UnSetAll(/* parameters */);
	CgsContainers::Array<CgsID,80u>::Clear(/* parameters */);
	operator++(/* parameters */);
	CgsContainers::FastBitArray<19>::UnSetAll(/* parameters */);
}

// BrnChallengeManager.cpp:2220
void BrnGameState::ChallengeManager::SetRemotePlayersChallengeCompleted(int32_t  liChallengeIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:2222
		int32_t liPlayerIndex;

		{
			// BrnChallengeManager.cpp:2228
			EActiveRaceCarIndex leActiveRaceCarIndex;

			CgsContainers::FastBitArray<2000>::SetBit(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnChallengeManager.cpp:987
void BrnGameState::ChallengeManager::ClearFreeburnSkillsThisFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:989
		BrnGameState::EFreeburnSkill leFreeburnSkill;

		CgsContainers::FastBitArray<19>::IsBitSet(/* parameters */);
		operator++(/* parameters */);
	}
	CgsContainers::FastBitArray<19>::UnSetAll(/* parameters */);
}

// BrnChallengeManager.cpp:149
void BrnGameState::ChallengeManager::Construct(BrnGameState::GameStateModule *  lpGameStateModule, BrnProgression::ProgressionManager *  lpProgression, const BrnGameState::RoadRulesManager *  lpRoadRulesManager, const BrnGameState::TriggerQueryManager *  lpTriggerQueryManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:151
		int32_t liIndex;

		// BrnChallengeManager.cpp:152
		BrnGameState::EFreeburnSkill leFreeburnSkill;

	}
	CgsContainers::FastBitArray<2000>::Construct(/* parameters */);
	CgsContainers::FastBitArray<120>::Construct(/* parameters */);
	CgsContainers::FastBitArray<2000>::Construct(/* parameters */);
	CgsContainers::ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>::Construct(/* parameters */);
	CgsContainers::FastBitArray<60>::Construct(/* parameters */);
	CgsContainers::Array<CgsID,80u>::Clear(/* parameters */);
	operator++(/* parameters */);
	CgsContainers::FastBitArray<19>::UnSetAll(/* parameters */);
}

// BrnChallengeManager.cpp:4055
void BrnGameState::ChallengeManager::HandleSuccessUpdateEvent(const TimerStatusInterface *  lpTimerStatusInterface, const FburnChallengeSuccessUpdateEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:4063
		FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess lChallengeSuccessUpdate;

		// BrnChallengeManager.cpp:4064
		Iterator lIterator;

		// BrnChallengeManager.cpp:4065
		EActiveRaceCarIndex leActiveRaceCarIndex;

		CgsContainers::FastBitArray<60>::Iterator::Iterator(/* parameters */);
		CgsContainers::FastBitArray<60>::Construct(/* parameters */);
		CgsContainers::FastBitArray<60>::Begin(/* parameters */);
		CgsContainers::FastBitArray<60>::Iterator::operator!=(/* parameters */);
		{
			// BrnChallengeManager.cpp:4084
			int32_t liSetIndex;

			CgsContainers::FastBitArray<60>::Iterator::GetIndex(/* parameters */);
			CgsContainers::FastBitArray<120>::SetBit(/* parameters */);
		}
		CgsContainers::FastBitArray<60>::Iterator::GetIndex(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsSystem::TimerStatusInterface::IsSimTimerFrequency50Hz(/* parameters */);
		CgsContainers::FastBitArray<60>::IsBitSet(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsContainers::FastBitArray<60>::IsBitSet(/* parameters */);
	}
}

// BrnChallengeManager.cpp:4272
void BrnGameState::ChallengeManager::NetworkPlayerAdded(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID, InputBuffer::GameActionQueue *  lpActionQueue, bool  lbArbitrator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:4274
		BrnGameState::ChallengeManager::ChallengeCompletionData * lpEntry;

		{
			// BrnChallengeManager.cpp:4276
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsContainers::FastBitArray<2000>::UnSetAll(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:4281
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnChallengeManager.cpp:2456
void BrnGameState::ChallengeManager::CheckCurrentCar(const ChallengeListEntry *  lpChallenge, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarOutputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:2458
		CgsID lCarModelID;

		// BrnChallengeManager.cpp:2459
		int32_t liModelIndex;

		// BrnChallengeManager.cpp:2479
		const VehicleListEntry * lpListEntry;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetCarModelId(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetCarModelId(/* parameters */);
	BrnResource::VehicleList::GetVehicleIndex(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	BrnResource::VehicleListEntry::GetCarType(/* parameters */);
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

// BrnChallengeManager.cpp:2335
void BrnGameState::ChallengeManager::GetChallengeFromID(CgsID  lChallengeID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:2339
		const ChallengeListEntry * lpResult;

	}
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		// BrnChallengeManager.cpp:2341
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnChallengeManager.cpp:2269
void BrnGameState::ChallengeManager::RemoteTriggerFreeburnChallenge(CgsID  lChallengeID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnChallengeManager.cpp:2252
void BrnGameState::ChallengeManager::RemoteBeginChallenge(CgsID  lChallengeID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnChallengeManager.cpp:2357
void BrnGameState::ChallengeManager::GetChallengeIndex(CgsID  lChallengeID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:2359
		int32_t liResult;

	}
	BrnResource::ChallengeList::GetChallengeIndex(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		// BrnChallengeManager.cpp:2365
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
}

// BrnChallengeManager.cpp:1016
void BrnGameState::ChallengeManager::GetScaleFactor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:1019
		float32_t lfScaleFactor;

	}
	ChallengesAreAllTwoPlayer(/* parameters */);
	{
		// BrnChallengeManager.cpp:1030
		int32_t liChallengeIndex;

	}
	{
		// BrnChallengeManager.cpp:1023
		int32_t liChallengeIndex;

	}
}

// BrnChallengeManager.cpp:364
void BrnGameState::ChallengeManager::Prepare(const ChallengeList *  lpFreeburnChallengeList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:369
		int32_t liIndex;

		// BrnChallengeManager.cpp:376
		int32_t liCurrentChallenge;

	}
	{
		// BrnChallengeManager.cpp:379
		const ChallengeListEntry * lpChallengeListEntry;

		BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	}
	BrnResource::ChallengeList::GetChallengeCount(/* parameters */);
	CgsResource::ResourcePtr<BrnResource::ChallengeListResource>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>::Prepare(/* parameters */);
}

// BrnChallengeManager.cpp:836
void BrnGameState::ChallengeManager::HackAllChallenges(int32_t  liNumPlayers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:838
		int32_t liIndex;

		// BrnChallengeManager.cpp:839
		ChallengeListEntry * lpChallenge;

		BrnResource::ChallengeList::GetChallengeCount(/* parameters */);
		BrnResource::ChallengeList::GetChallengeData(/* parameters */);
		BrnResource::ChallengeListEntry::SetNewNumPlayers(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnChallengeManager.cpp:854
void BrnGameState::ChallengeManager::UnHackAllChallenges() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:856
		int32_t liIndex;

		// BrnChallengeManager.cpp:857
		ChallengeListEntry * lpChallenge;

	}
	BrnResource::ChallengeList::GetChallengeCount(/* parameters */);
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	BrnResource::ChallengeListEntry::ResetNumPlayers(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnChallengeManager.cpp:2172
void BrnGameState::ChallengeManager::CheckForOnlineChallengeUnlocks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:2174
		int32_t[8] laCompletedChallengePlayerCounts;

		// BrnChallengeManager.cpp:2176
		int32_t liIndex;

		// BrnChallengeManager.cpp:2183
		int32_t liCurrentChallenge;

		// BrnChallengeManager.cpp:2196
		int32_t liCurrentNumberOfSets;

		// BrnChallengeManager.cpp:2197
		int32_t liCurrentNumberOfPlayers;

		{
			// BrnChallengeManager.cpp:2186
			const ChallengeListEntry * lpChallengeListEntry;

			BrnResource::ChallengeList::GetChallengeData(/* parameters */);
			BrnProgression::ProgressionManager::HasPlayerCompletedFreeburnChallenge(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		BrnProgression::ProgressionManager::CompleteFreeburnChallengeBlock(/* parameters */);
	}
}

// BrnChallengeManager.cpp:4240
void BrnGameState::ChallengeManager::OnProfileLoaded() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:4242
		int32_t liChallengeIndex;

	}
	{
		// BrnChallengeManager.cpp:4250
		CgsID lFreeburnChallengeID;

		BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	}
	BrnResource::ChallengeList::GetChallengeCount(/* parameters */);
	CgsResource::ResourcePtr<BrnResource::ChallengeListResource>::operator->(/* parameters */);
	BrnProgression::ProgressionManager::HasPlayerCompletedFreeburnChallenge(/* parameters */);
	CgsContainers::FastBitArray<2000>::SetBit(/* parameters */);
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

// BrnChallengeManager.cpp:2735
void BrnGameState::ChallengeManager::IsSkillScoreCurrentlySuccessful(float32_t  lfScore, const ChallengeListEntryAction *  lpAction, bool  lbIsCumulativeArbitration, int32_t  liTargetValueIndex, bool  lbLargerScoresAreBetter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnResource::ChallengeListEntryAction::GetTargetValue(/* parameters */);
	BrnResource::ChallengeListEntryAction::GetCoopType(/* parameters */);
	BrnResource::ChallengeListEntryAction::GetTargetValue(/* parameters */);
	BrnResource::ChallengeListEntryAction::GetCoopType(/* parameters */);
}

// BrnChallengeManager.cpp:2609
void BrnGameState::ChallengeManager::CheckForModifiers(const ChallengeListEntryAction *  lpAction, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarOutputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:2611
		bool lbMeetingModifiers;

	}
	{
		// BrnChallengeManager.cpp:2623
		const RaceCarState * lpRaceCarState;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
	}
}

// BrnChallengeManager.cpp:2383
void BrnGameState::ChallengeManager::IsPointInTriggerRegion(const rw::math::vpu::Vector3 *  lpPosition, CgsID  lTriggerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:2385
		const TriggerRegion * lpTriggerRegion;

		// BrnChallengeManager.cpp:2386
		int32_t liTriggerIndex;

		// BrnChallengeManager.cpp:2387
		uint16_t lu16RegionIndex;

	}
	TriggerQueryManager::GetTriggerData(/* parameters */);
	BrnTrigger::TriggerData::GetRegion(/* parameters */);
	TriggerQueryManager::GetActiveTriggerCount(/* parameters */);
	CgsContainers::Array<uint16_t,256u>::GetLength(/* parameters */);
	TriggerQueryManager::GetActiveTrigger(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	TriggerQueryManager::GetActiveTriggerCount(/* parameters */);
	{
		// BrnChallengeManager.cpp:2437
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:2412
		const GenericRegion * lpGenericRegion;

		{
			// BrnChallengeManager.cpp:2418
			const BoxRegion * lpBoxRegion;

			// BrnChallengeManager.cpp:2419
			float32_t lfRadius;

			BrnTrigger::BoxRegion::GetPosition(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			BrnTrigger::BoxRegion::GetDimensionX(/* parameters */);
			BrnTrigger::BoxRegion::GetDimensionY(/* parameters */);
			BrnTrigger::BoxRegion::GetDimensionZ(/* parameters */);
			rw::math::fpu::Max<float>(/* parameters */);
			rw::math::fpu::Max<float>(/* parameters */);
			rw::math::vpu::operator<(/* parameters */);
		}
	}
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	BrnTrigger::BoxRegion::ComputeTransform(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	vec_cts(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
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
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::RotateAroundYAxis(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::RotateAroundZAxis(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	BrnTrigger::BoxRegion::GetDimensions(/* parameters */);
}

// BrnChallengeManager.cpp:2511
void BrnGameState::ChallengeManager::CheckCurrentLocation(const ChallengeListEntryAction *  lpAction, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarOutputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:2513
		uint8_t luLocationIndex;

		// BrnChallengeManager.cpp:2514
		BrnWorld::EDistrict leDistrict;

		// BrnChallengeManager.cpp:2515
		const RaceCarState * lpRaceCarState;

		// BrnChallengeManager.cpp:2516
		const WorldMap2D * lpWorldMap;

		// BrnChallengeManager.cpp:2534
		CgsID lCurrentRoadID;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetWorldMap2D(/* parameters */);
	rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
	CgsWorld::WorldMap2D::GetValue(/* parameters */);
	RoadRulesManager::GetCurrentRoadID(/* parameters */);
	StreetManager::GetRoad(/* parameters */);
	BrnStreetData::StreetData::GetRoad(/* parameters */);
	BrnStreetData::Road::GetId(/* parameters */);
	BrnResource::ChallengeListEntryAction::GetRoadID(/* parameters */);
	{
		// BrnChallengeManager.cpp:2586
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		BrnResource::ChallengeListEntryAction::GetLocationType(/* parameters */);
	}
	BrnResource::ChallengeListEntryAction::GetLocationType(/* parameters */);
	BrnResource::ChallengeListEntryAction::GetDistrict(/* parameters */);
	{
		// BrnChallengeManager.cpp:2565
		Vector3 lPosition;

		BrnResource::ChallengeListEntryAction::GetTriggerID(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnChallengeManager.cpp:4444
void BrnGameState::ChallengeManager::OutputFreeburnChallengeEveryPlayerStatusEvent(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:4446
		int32_t liIndex;

		// BrnChallengeManager.cpp:4447
		FburnChallengeEveryPlayerStatusAction lEveryPlayerStatusEvent;

		GameStateModuleIO::FburnChallengeEveryPlayerStatusData::Construct(/* parameters */);
		GameStateModuleIO::FburnChallengeEveryPlayerStatusData::AddLocalPlayerCompletionStatus(/* parameters */);
		GameStateModuleIO::FburnChallengeEveryPlayerStatusData::AddCompletionStatus(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::FburnChallengeEveryPlayerStatusAction>(/* parameters */);
	}
	CgsContainers::FastBitArray<2000>::Construct(/* parameters */);
}

// BrnChallengeManager.cpp:4017
void BrnGameState::ChallengeManager::UpdateRemotePlayerSuccessStatus(const NetworkToGameStateInterface::CompletedFburnChallengesQueue *  lpCompletedChallengeStatusQueue, InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:4019
		int32_t liIndex;

	}
	{
		// BrnChallengeManager.cpp:4025
		const CompletedFburnChallengesData lCompletedChallengeDataEvent;

		// BrnChallengeManager.cpp:4026
		BrnGameState::ChallengeManager::ChallengeCompletionData * lpStatusData;

		CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::GetEvent(/* parameters */);
	}
	CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::GetLength(/* parameters */);
	{
		// BrnChallengeManager.cpp:4030
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnChallengeManager.cpp:2287
void BrnGameState::ChallengeManager::RemoteEndChallenge(InputBuffer::GameActionQueue *  lpActionQueue, BrnGameState::EChallengeStatus  leChallengeStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:2315
		FburnChallengeEndNotActiveAction lChallengeEndNotActiveAction;

		AddGameAction<BrnGameState::GameStateModuleIO::FburnChallengeEndNotActiveAction>(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:2302
		int32_t liChallengeIndex;

	}
}

// BrnChallengeManager.cpp:793
void BrnGameState::ChallengeManager::UpdateResults(float32_t  lfSimTimerTimeStep, InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:800
		FreeburnChallengeAction lResultsAction;

	}
	GameStateModuleIO::FreeburnChallengeAction::Construct(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::FreeburnChallengeAction>(/* parameters */);
	CgsContainers::FastBitArray<60>::UnSetAll(/* parameters */);
}

// BrnChallengeManager.cpp:2056
void BrnGameState::ChallengeManager::EndChallenge(BrnGameState::EChallengeStatus  leOutcome, InputBuffer::GameActionQueue *  lpOutput, bool  lbAbortingToStartNewChallenge) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:2058
		FreeburnChallengeAction lEndMessage;

		// BrnChallengeManager.cpp:2059
		bool lbSuccess;

		// BrnChallengeManager.cpp:2060
		CgsID lActiveChallengeID;

		// BrnChallengeManager.cpp:2061
		int32_t liNumCompletedChallenges;

		// BrnChallengeManager.cpp:2062
		BrnGameState::EFreeburnSkill leFreeburnSkill;

	}
	BrnResource::ChallengeListEntry::GetChallengeID(/* parameters */);
	{
		// BrnChallengeManager.cpp:2080
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnChallengeManager.cpp:2081
		int32_t liChallengeIndex;

		// BrnChallengeManager.cpp:2082
		Iterator lIterator;

	}
	GameStateModuleIO::FreeburnChallengeAction::Construct(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::FreeburnChallengeAction>(/* parameters */);
	operator++(/* parameters */);
	CgsContainers::FastBitArray<2000>::Iterator::Iterator(/* parameters */);
	BrnProgression::ProgressionManager::HasPlayerCompletedFreeburnChallenge(/* parameters */);
	CgsContainers::FastBitArray<2000>::SetBit(/* parameters */);
	GameStateModuleIO::RequestAutoSaveAction::RequestAutoSaveAction(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::RequestAutoSaveAction>(/* parameters */);
	{
		// BrnChallengeManager.cpp:2113
		int32_t liActionIndex;

	}
	operator++(/* parameters */);
	CgsContainers::FastBitArray<2000>::Begin(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnProgression::ProgressionManager::CompleteFreeburnChallenge(/* parameters */);
}

// BrnChallengeManager.cpp:4602
void BrnGameState::ChallengeManager::Disconnected(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:4604
		int32_t liPlayerIndex;

		CgsContainers::FastBitArray<2000>::UnSetAll(/* parameters */);
	}
}

// BrnChallengeManager.cpp:4353
void BrnGameState::ChallengeManager::NetworkPlayerRemoved(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID, InputBuffer::GameActionQueue *  lpOutput, bool  lbIsChallengeArbitrator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:4355
		BrnGameState::ChallengeManager::ChallengeCompletionData * lpEntry;

		CgsContainers::FastBitArray<2000>::UnSetAll(/* parameters */);
		{
			// BrnChallengeManager.cpp:4372
			EActiveRaceCarIndex leRemovedActiveRaceCarIndex;

			{
				// BrnChallengeManager.cpp:4386
				FburnChallengeShowSelectorAction lShowSelectorAction;

				AddGameAction<BrnGameState::GameStateModuleIO::FburnChallengeShowSelectorAction>(/* parameters */);
			}
		}
	}
}

// BrnChallengeManager.cpp:2018
void BrnGameState::ChallengeManager::CancelFreeburnChallenge(InputBuffer::GameActionQueue *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:2034
		FburnChallengeEndNotActiveAction lChallengeEndNotActiveAction;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::FburnChallengeEndNotActiveAction>(/* parameters */);
}

// BrnChallengeManager.cpp:4300
void BrnGameState::ChallengeManager::NetworkPlayerFinalised(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID, InputBuffer::GameActionQueue *  lpActionQueue, bool  lbArbitrator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:4302
		FburnChallengeStatusAction lChallengeStatusAction;

		// BrnChallengeManager.cpp:4303
		BrnGameState::ChallengeManager::ChallengeCompletionData * lpEntry;

		AddGameAction<BrnGameState::GameStateModuleIO::FburnChallengeStatusAction>(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:4320
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnChallengeManager.cpp:4321
		ActiveFburnChallengeAction lActiveChallengeAction;

		operator++(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::ActiveFburnChallengeAction>(/* parameters */);
	}
}

// BrnChallengeManager.cpp:659
void BrnGameState::ChallengeManager::PostWorldUpdate(const VehicleManagerOutputInterface::RaceCarCrashEventQueue *  lpRaceCarCrashEventQueue, const TimerStatusInterface *  lpTimerStatusInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:661
		int32_t liRaceCarCrashQueueLength;

		// BrnChallengeManager.cpp:662
		int32_t liCrashedRaceCarQueueIndex;

	}
	{
		// BrnChallengeManager.cpp:666
		int32_t liOldestSuccessBit;

		// BrnChallengeManager.cpp:667
		EActiveRaceCarIndex leActiveRaceCarIndex;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetLength(/* parameters */);
		{
			// BrnChallengeManager.cpp:675
			const const RaceCarCrashEvent & lRaceCarCrashEvent;

			CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetEvent(/* parameters */);
			CgsSceneManager::EntityId::GetOwner(/* parameters */);
		}
		{
			// BrnChallengeManager.cpp:680
			EActiveRaceCarIndex leCrasherActiveRaceCarIndex;

			// BrnChallengeManager.cpp:681
			EActiveRaceCarIndex leCrashedActiveRaceCarIndex;

		}
		CgsSystem::TimerStatusInterface::IsSimTimerFrequency50Hz(/* parameters */);
		GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
		CgsContainers::FastBitArray<120>::UnSetBit(/* parameters */);
		operator++(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
}

// BrnChallengeManager.cpp:1965
void BrnGameState::ChallengeManager::TriggerFreeburnChallenge(CgsID  lChallengeID, InputBuffer::GameActionQueue *  lpOutput, bool  lbIsHost) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:1967
		int32_t liChallengeDataIndex;

		// BrnChallengeManager.cpp:1968
		FreeburnChallengeAction lAction;

	}
	{
		// BrnChallengeManager.cpp:1970
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:1980
		EActiveRaceCarIndex leActiveRaceCarIndex;

	}
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	GameStateModuleIO::FreeburnChallengeAction::Construct(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::FreeburnChallengeAction>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnChallengeManager.cpp:495
void BrnGameState::ChallengeManager::UpdateTimer(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:497
		const ChallengeListEntryAction * lpAction;

	}
	BrnResource::ChallengeListEntry::GetAction(/* parameters */);
	BrnResource::ChallengeListEntryAction::HasTimeLimit(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
}

// BrnChallengeManager.cpp:1056
void BrnGameState::ChallengeManager::UpdateActionSuccess(const ChallengeListEntryAction *  lpAction, int32_t  liActionIndex, BrnGameState::EChallengeStatus  leChallengeStatus, EActiveRaceCarIndex  lePlayerActiveRaceCarIndex, int32_t  liFramesSinceNetworkStart, InputBuffer::GameActionQueue *  lpActionQueue, bool  lbIs50Hz) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnResource::ChallengeListEntryAction::GetCoopType(/* parameters */);
	{
		// BrnChallengeManager.cpp:1194
		BrnGameState::EFreeburnSkill leCurrentSkill;

		BrnResource::ChallengeListEntryAction::GetActionType(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:1217
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:1067
		FburnChallengeSuccessUpdateAction lSuccessUpdateAction;

		// BrnChallengeManager.cpp:1068
		int32_t liLastSecondSuccessBit;

		// BrnChallengeManager.cpp:1069
		int32_t liPlayerSuccessBit;

		CgsContainers::FastBitArray<60>::UnSetBit(/* parameters */);
		CgsContainers::FastBitArray<120>::UnSetBit(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::FburnChallengeSuccessUpdateAction>(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:1122
		const ChallengeListEntryAction * lpAction;

		BrnResource::ChallengeListEntry::GetAction(/* parameters */);
		BrnResource::ChallengeListEntryAction::HasConvoyTime(/* parameters */);
		BrnResource::ChallengeListEntryAction::GetCoopType(/* parameters */);
	}
	rw::math::fpu::Max<float>(/* parameters */);
	{
		// BrnChallengeManager.cpp:1176
		BrnGameState::EFreeburnSkill leCurrentSkill;

		BrnResource::ChallengeListEntryAction::GetActionType(/* parameters */);
	}
	CgsContainers::FastBitArray<60>::SetBit(/* parameters */);
	CgsContainers::FastBitArray<120>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::core::stdc::Max(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnChallengeManager.cpp:1461
void BrnGameState::ChallengeManager::UpdateArbitrationSuccess(int32_t  liActionIndex, InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:1463
		const ChallengeListEntryAction * lpAction;

		// BrnChallengeManager.cpp:1464
		bool lbChallengeCompleted;

	}
	BrnResource::ChallengeListEntry::GetAction(/* parameters */);
	{
		// BrnChallengeManager.cpp:1514
		FburnChallengeShowSelectorAction lShowSelectorAction;

		AddGameAction<BrnGameState::GameStateModuleIO::FburnChallengeShowSelectorAction>(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:1478
		int32_t liActionIndex;

		{
			// BrnChallengeManager.cpp:1485
			EActiveRaceCarIndex leActiveRaceCarIndex;

			operator++(/* parameters */);
		}
	}
	{
		// BrnChallengeManager.cpp:1529
		FreeburnChallengeAction lFreeburnChallengeAction;

		GameStateModuleIO::FreeburnChallengeAction::Construct(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::FreeburnChallengeAction>(/* parameters */);
		rw::core::stdc::Min(/* parameters */);
		rw::core::stdc::Min(/* parameters */);
	}
}

// BrnChallengeManager.cpp:1660
void BrnGameState::ChallengeManager::WriteDataToOutputForTarget(FreeburnChallengeUpdateAction *  lpOutEvent, int32_t  liTargetIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:1662
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnChallengeManager.cpp:1663
		const ChallengeListEntryAction * lpAction;

		BrnResource::ChallengeListEntry::GetAction(/* parameters */);
	}
	BrnResource::ChallengeListEntryAction::GetCoopType(/* parameters */);
	CgsCore::MemSet(/* parameters */);
	CgsCore::MemSet(/* parameters */);
	{
		// BrnChallengeManager.cpp:1830
		int32_t liIndex;

	}
	{
		// BrnChallengeManager.cpp:1853
		const ScoringSystem * lpScoringSystem;

	}
	operator++(/* parameters */);
	ModeManager::GetScoringSystem(/* parameters */);
	ScoringSystem::GetCarData(/* parameters */);
	BrnResource::ChallengeListEntry::GetAction(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	operator++(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:1680
		BrnGameState::EFreeburnSkill leFreeburnSkill;

		BrnResource::ChallengeListEntryAction::GetActionType(/* parameters */);
	}
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	operator++(/* parameters */);
	operator++(/* parameters */);
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	{
		// BrnChallengeManager.cpp:1787
		BrnGameState::EFreeburnSkill leFreeburnSkill;

		BrnResource::ChallengeListEntryAction::GetActionType(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:1720
		BrnGameState::EFreeburnSkill leFreeburnSkill;

		BrnResource::ChallengeListEntryAction::GetActionType(/* parameters */);
	}
	GameStateModule::GetPlayerActiveRaceCarIndex(/* parameters */);
	operator++(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:1755
		BrnGameState::EFreeburnSkill leFreeburnSkill;

		BrnResource::ChallengeListEntryAction::GetActionType(/* parameters */);
	}
}

// BrnChallengeManager.cpp:1573
void BrnGameState::ChallengeManager::WriteDataToOutput(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:1575
		EActiveRaceCarIndex leActiveRaceCarIndex;

	}
	{
		// BrnChallengeManager.cpp:1583
		FreeburnChallengeUpdateAction lChallengeUpdateAction;

		// BrnChallengeManager.cpp:1584
		int32_t liCurrentActionIndex;

		// BrnChallengeManager.cpp:1585
		const ChallengeListEntryAction * lpAction;

		AddGameAction<BrnGameState::GameStateModuleIO::FreeburnChallengeUpdateAction>(/* parameters */);
	}
	GameStateModuleIO::OutputBuffer::GetGameStateToNetworkInterface(/* parameters */);
	GameStateModuleIO::OutputBuffer::GetGameStateToNetworkInterface(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::SetPlayerInFreeburnChallenge(/* parameters */);
	operator++(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnResource::ChallengeListEntry::GetAction(/* parameters */);
	BrnResource::ChallengeListEntryAction::GetCombineAction(/* parameters */);
	{
		// BrnChallengeManager.cpp:1619
		int32_t liActionIndex;

	}
	{
		// BrnChallengeManager.cpp:1596
		int32_t liIndex;

	}
	BrnResource::ChallengeListEntry::GetAction(/* parameters */);
}

// BrnChallengeManager.cpp:2674
void BrnGameState::ChallengeManager::GetCurrentSkillScore(int32_t  liActionIndex, bool  lbIsCumulativeArbitration, BrnGameState::EFreeburnSkill  leFreeburnSkill, BrnResource::ChallengeListEntryAction::EChallengeCoopType  leCoopType, bool  lbLargerScoresAreBetter, float32_t  lfMultiplier) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnResource::ChallengeListEntry::GetAction(/* parameters */);
}

// BrnChallengeManager.cpp:3336
void BrnGameState::ChallengeManager::UpdateCurrentActionScore(int32_t  liActionIndex, bool  lbCumulativeArbitration, BrnGameState::EFreeburnSkill  leFreeburnSkill, EActiveRaceCarIndex  leActiveRaceCarIndex, float32_t  lfMultiplier) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnResource::ChallengeListEntry::GetAction(/* parameters */);
	BrnResource::ChallengeListEntry::GetAction(/* parameters */);
}

// BrnChallengeManager.cpp:3898
void BrnGameState::ChallengeManager::GetChallengeDescription(CgsID  lChallengeID, char *  lpcBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:3900
		const ChallengeListEntry * lpChallenge;

		// BrnChallengeManager.cpp:3901
		const ChallengeListEntryAction * lpAction;

		// BrnChallengeManager.cpp:3902
		int32_t liActionIndex;

		// BrnChallengeManager.cpp:3903
		int32_t[2] laiTargets;

		// BrnChallengeManager.cpp:3904
		int32_t liNumTargets;

		// BrnChallengeManager.cpp:3905
		int32_t liTargetIndex;

		BrnResource::ChallengeListEntry::GetAction(/* parameters */);
		BrnResource::ChallengeListEntryAction::GetTargetValue(/* parameters */);
	}
}

// BrnChallengeManager.cpp:4135
void BrnGameState::ChallengeManager::HandleChallengeSuccessEvent(const FburnChallengeSuccessEvent *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:4142
		int32_t liActionIndex;

		// BrnChallengeManager.cpp:4143
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnChallengeManager.cpp:4144
		const ChallengeListEntryAction * lpAction;

		BrnResource::ChallengeListEntry::GetAction(/* parameters */);
		BrnResource::ChallengeListEntryAction::GetCoopType(/* parameters */);
		rw::core::stdc::Max(/* parameters */);
		BrnResource::ChallengeListEntryAction::HasConvoyTime(/* parameters */);
	}
}

// BrnChallengeManager.cpp:5124
void BrnGameState::ChallengeManager::BankSkillScore(BrnGameState::EFreeburnSkill  leFreeburnSkill, float32_t  lfScore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnResource::ChallengeListEntry::GetAction(/* parameters */);
}

// BrnChallengeManager.cpp:5065
void BrnGameState::ChallengeManager::SetCurrentSkillScore(BrnGameState::EFreeburnSkill  leFreeburnSkill, float32_t  lfScore, bool  lbSkillCompleted) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FastBitArray<19>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnChallengeManager.cpp:5034
void BrnGameState::ChallengeManager::HandleWorldStunt(BrnGameState::StuntElementType  leStuntType, CgsID  lStuntID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<CgsID,80u>::Contains(/* parameters */);
	CgsContainers::Array<CgsID,80u>::IsFull(/* parameters */);
	CgsContainers::Array<CgsID,80u>::Append(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnChallengeManager.cpp:4984
void BrnGameState::ChallengeManager::HandleRoadRuleScore(ChallengePlayerScoreEntry  lChallegeScore, BrnStreetData::ScoreType  leScoreType, CgsID  lRoadID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:4989
		const ChallengeListEntryAction * lpAction;

		BrnResource::ChallengeListEntry::GetAction(/* parameters */);
		BrnResource::ChallengeListEntryAction::GetActionType(/* parameters */);
		BrnResource::ChallengeListEntryAction::GetActionType(/* parameters */);
		BrnResource::ChallengeListEntryAction::GetCgsIDTarget(/* parameters */);
	}
	BrnResource::ChallengeListEntryAction::GetCgsIDTarget(/* parameters */);
}

// BrnChallengeManager.cpp:3600
void BrnGameState::ChallengeManager::UpdateBurnouts(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarOutputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:3602
		EActiveRaceCarIndex lePlayerRaceCarIndex;

		// BrnChallengeManager.cpp:3603
		const BoostOutputInfo * lpBoostInfo;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfoN(/* parameters */);
}

// BrnChallengeManager.cpp:3392
void BrnGameState::ChallengeManager::UpdateLeaptCars(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarOutputInterface, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:3394
		ObjectPool<BrnGameState::ChallengeManager::CarLeapingData,7,int32_t> lCurrentlyLeaptCars;

		// BrnChallengeManager.cpp:3395
		BitArray<7u> lStillLeaping;

		// BrnChallengeManager.cpp:3396
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnChallengeManager.cpp:3397
		int32_t liIndex;

		// BrnChallengeManager.cpp:3398
		int32_t liStoredLeapeeIndex;

		// BrnChallengeManager.cpp:3399
		const RaceCarState * lpPlayerRaceCarState;

		ObjectPool(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
	}
	CgsContainers::ObjectPool<BrnGameState::ChallengeManager::CarLeapingData,7,int32_t>::Construct(/* parameters */);
	CgsContainers::ObjectPool<BrnGameState::ChallengeManager::CarLeapingData,7,int32_t>::Clear(/* parameters */);
	{
		// BrnChallengeManager.cpp:3466
		const RaceCarState * lpRaceCarState;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarNetwork(/* parameters */);
	{
		// BrnChallengeManager.cpp:3478
		float32_t lfHeightAboveOtherCar;

		rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
			// BrnChallengeManager.cpp:3489
			Vector3 lPlayerToCar;

			// BrnChallengeManager.cpp:3490
			float32_t lfDistanceSq;

			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator*<VectorAxisX, VectorAxisX>(/* parameters */);
			rw::math::vpu::operator*<VectorAxisZ, VectorAxisZ>(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			{
				// BrnChallengeManager.cpp:3499
				int32_t liAllocatedIndex;

				CgsContainers::ObjectPool<BrnGameState::ChallengeManager::CarLeapingData,7,int32_t>::AllocateObject(/* parameters */);
				CgsContainers::ObjectPool<BrnGameState::ChallengeManager::CarLeapingData,7,int32_t>::operator[](/* parameters */);
				CgsContainers::ObjectPool<BrnGameState::ChallengeManager::CarLeapingData,7,int32_t>::operator[](/* parameters */);
			}
		}
	}
	CgsContainers::ObjectPool<BrnGameState::ChallengeManager::CarLeapingData,7,int32_t>::IsObjectAllocated(/* parameters */);
	{
		// BrnChallengeManager.cpp:3523
		const const BrnGameState::ChallengeManager::CarLeapingData & lLeapee;

		CgsContainers::ObjectPool<BrnGameState::ChallengeManager::CarLeapingData,7,int32_t>::operator[](/* parameters */);
		CgsContainers::ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>::IsObjectAllocated(/* parameters */);
		{
			// BrnChallengeManager.cpp:3530
			const const BrnGameState::ChallengeManager::StoredLeapingData & lStoredLeapee;

			CgsContainers::ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>::operator[](/* parameters */);
		}
		{
			// BrnChallengeManager.cpp:3535
			float32_t lfDot;

			// BrnChallengeManager.cpp:3538
			const rw::math::vpu::Vector3 lEntryVec;

			CgsContainers::BitArray<7u>::SetBit(/* parameters */);
		}
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX, VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisZ, VectorAxisZ>(/* parameters */);
		{
			// BrnChallengeManager.cpp:3561
			int32_t liAllocatedIndex;

			CgsContainers::ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>::AllocateObject(/* parameters */);
			CgsContainers::ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>::operator[](/* parameters */);
			CgsContainers::ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>::operator[](/* parameters */);
			CgsContainers::BitArray<7u>::SetBit(/* parameters */);
		}
	}
	CgsContainers::ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>::IsObjectAllocated(/* parameters */);
	CgsContainers::ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>::FreeObject(/* parameters */);
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
	CgsContainers::ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnChallengeManager.cpp:961
void BrnGameState::ChallengeManager::UpdateFreeburnSkillsThisFrame(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarOutputInterface, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnChallengeManager.cpp:3293
void BrnGameState::ChallengeManager::UpdateLocationOKStatusChange(bool  lbWasLocationOKLastFrame, bool  lbIsLocationOK) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:3295
		bool lbScoresBanked;

	}
	{
		// BrnChallengeManager.cpp:3303
		BrnGameState::EFreeburnSkill leFreeburnSkillIndex;

		operator++(/* parameters */);
	}
}

// BrnChallengeManager.cpp:2776
void BrnGameState::ChallengeManager::UpdateAction(int32_t  liActionIndex, const ChallengeListEntryAction *  lpAction, float32_t  lfSimTimerTimeStep, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarOutputInterface, bool  lbIsCumulativeArbitration) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:2778
		EActiveRaceCarIndex lePlayerRaceCarIndex;

		// BrnChallengeManager.cpp:2779
		BrnGameState::EChallengeStatus leStatus;

		// BrnChallengeManager.cpp:2780
		const RaceCarState * lpRaceCarState;

		// BrnChallengeManager.cpp:2781
		bool lbModifierOK;

		// BrnChallengeManager.cpp:2782
		bool lbIsCarOK;

		// BrnChallengeManager.cpp:2783
		bool lbLocationWasOKLastFrame;

		// BrnChallengeManager.cpp:2784
		bool lbBankedScoresDueToLeavingLocation;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	BrnResource::ChallengeListEntryAction::GetCoopType(/* parameters */);
	BrnResource::ChallengeListEntryAction::GetActionType(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	{
		// BrnChallengeManager.cpp:3080
		float32_t lfScore;

		BrnResource::ChallengeListEntryAction::GetCoopType(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:3186
		float32_t lfScore;

	}
	{
		// BrnChallengeManager.cpp:3235
		float32_t lfScore;

	}
	{
		// BrnChallengeManager.cpp:2988
		float32_t lfScore;

	}
	{
		// BrnChallengeManager.cpp:2866
		float32_t lfScore;

	}
	{
		// BrnChallengeManager.cpp:3059
		float32_t lfScore;

	}
	{
		// BrnChallengeManager.cpp:2881
		float32_t lfScore;

		BrnResource::ChallengeListEntryAction::GetCoopType(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:2927
		int32_t liScore;

	}
	BrnResource::ChallengeListEntryAction::GetCoopType(/* parameters */);
	{
		// BrnChallengeManager.cpp:3155
		float32_t lfScore;

		// BrnChallengeManager.cpp:3156
		int32_t liTargetIndex;

	}
	{
		// BrnChallengeManager.cpp:3038
		float32_t lfScore;

	}
	{
		// BrnChallengeManager.cpp:3200
		float32_t lfScore;

	}
	{
		// BrnChallengeManager.cpp:3221
		float32_t lfScore;

	}
	{
		// BrnChallengeManager.cpp:2831
		float32_t lfScore;

	}
	{
		// BrnChallengeManager.cpp:3124
		float32_t lfScore;

		// BrnChallengeManager.cpp:3125
		int32_t liTargetIndex;

	}
	{
		// BrnChallengeManager.cpp:3102
		float32_t lfScore;

		BrnResource::ChallengeListEntryAction::GetCoopType(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:2848
		float32_t lfScore;

	}
	{
		// BrnChallengeManager.cpp:3023
		float32_t lfScore;

	}
	{
		// BrnChallengeManager.cpp:2974
		float32_t lfScore;

	}
	{
		// BrnChallengeManager.cpp:2960
		float32_t lfScore;

	}
	{
		// BrnChallengeManager.cpp:3005
		float32_t lfScore;

	}
	{
		// BrnChallengeManager.cpp:2913
		float32_t lfScore;

	}
	{
		// BrnChallengeManager.cpp:2883
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:2929
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:3104
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:3082
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:3127
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:3158
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnChallengeManager.cpp:5155
void BrnGameState::ChallengeManager::ResetCurrentChallengeData(int32_t  liActionIndexToResetFrom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:5157
		int32_t liActionIndex;

		// BrnChallengeManager.cpp:5158
		EActiveRaceCarIndex leActiveRaceCarIndex;

		{
			// BrnChallengeManager.cpp:5163
			const ChallengeListEntryAction * lpAction;

			BrnResource::ChallengeListEntry::GetAction(/* parameters */);
		}
		{
			// BrnChallengeManager.cpp:5178
			BrnGameState::EFreeburnSkill leFreeburnSkillType;

			operator++(/* parameters */);
		}
		operator++(/* parameters */);
		CgsContainers::Array<CgsID,80u>::Clear(/* parameters */);
	}
}

// BrnChallengeManager.cpp:4639
void BrnGameState::ChallengeManager::ProcessEvent(BrnGameState::GameStateModuleIO::EGameEventType  leEventType, const CgsModule::Event *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:4823
		const CompletedStuntEvent * lpCompletedStuntEvent;

	}
	{
		// BrnChallengeManager.cpp:4908
		const PowerParkResultEvent * lpPowerParkEvent;

	}
	{
		// BrnChallengeManager.cpp:4954
		const BoostTimeCompleteEvent * lpBoostTimeComplete;

	}
	{
		// BrnChallengeManager.cpp:4748
		const NearMissEvent * lpNearMissEvent;

	}
	{
		// BrnChallengeManager.cpp:4759
		const NearMissChainCompleteEvent * lpNearMissCompleteEvent;

	}
	{
		// BrnChallengeManager.cpp:4737
		const DriftingEvent * lpDriftEvent;

	}
	{
		// BrnChallengeManager.cpp:4721
		const OncomingEvent * lpOncomingEvent;

	}
	{
		// BrnChallengeManager.cpp:4729
		const OncomingCompletedEvent * lpOncomingEvent;

	}
	{
		// BrnChallengeManager.cpp:4770
		const InProgressStuntEvent * lpInProgressStuntEvent;

	}
	{
		// BrnChallengeManager.cpp:4697
		const FreeburnChallengeResetEvent * lpResetEvent;

	}
	{
		// BrnChallengeManager.cpp:4926
		const ActiveFburnChallengeEvent * lpActiveChallengeEvent;

		{
			// BrnChallengeManager.cpp:4935
			int32_t liIndex;

		}
	}
	{
		// BrnChallengeManager.cpp:4645
		const FreeburnChallengeActionSuccessEvent * lpActionSuccessEvent;

		{
			// BrnChallengeManager.cpp:4656
			const ChallengeListEntryAction * lpAction;

			BrnResource::ChallengeListEntry::GetAction(/* parameters */);
			rw::core::stdc::Min(/* parameters */);
			rw::core::stdc::Min(/* parameters */);
			{
				// BrnChallengeManager.cpp:4680
				EActiveRaceCarIndex leActiveRaceCarIndex;

				operator++(/* parameters */);
			}
		}
	}
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	{
		// BrnChallengeManager.cpp:4780
		float32_t lfCompletedRolls;

		rw::math::fpu::Round<float>(/* parameters */);
		__fsel(/* parameters */);
		__fsel(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnResource::ChallengeListResource>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnChallengeManager.cpp:3651
void BrnGameState::ChallengeManager::UpdateChallenge(float32_t  lfSimTimerTimeStep, int32_t  liFramesSinceNetworkStart, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarOutputInterface, InputBuffer::GameActionQueue *  lpActionQueue, bool  lbIs50Hz) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:3653
		FburnChallengeSuccessAction lSuccessAction;

		// BrnChallengeManager.cpp:3654
		EActiveRaceCarIndex lePlayerActiveRaceCarIndex;

		// BrnChallengeManager.cpp:3655
		int32_t liActionIndex;

		// BrnChallengeManager.cpp:3656
		bool lbOutputSuccess;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
		{
			// BrnChallengeManager.cpp:3670
			BrnGameState::EChallengeStatus leActionStatus;

			// BrnChallengeManager.cpp:3671
			const ChallengeListEntryAction * lpAction;

			BrnResource::ChallengeListEntry::GetAction(/* parameters */);
			{
				// BrnChallengeManager.cpp:3725
				BrnGameState::EFreeburnSkill leSkillForAction;

				{
					// BrnChallengeManager.cpp:3747
					CgsDev::StrStream lStrStream;

				}
			}
			BrnResource::ChallengeListEntryAction::GetCombineAction(/* parameters */);
			BrnResource::ChallengeListEntry::GetAction(/* parameters */);
		}
		{
			// BrnChallengeManager.cpp:3871
			int32_t liSuccessActionIndex;

			CgsCore::MemCpy(/* parameters */);
			AddGameAction<BrnGameState::GameStateModuleIO::FburnChallengeSuccessAction>(/* parameters */);
		}
	}
	BrnResource::ChallengeListEntryAction::GetActionType(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	BrnResource::ChallengeListEntry::GetChallengeID(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	{
		// BrnChallengeManager.cpp:3700
		BrnGameState::EFreeburnSkill leSkillForAction;

		BrnResource::ChallengeListEntryAction::GetActionType(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:3689
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		BrnResource::ChallengeListEntry::GetChallengeID(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:3814
		FreeburnChallengeAction lResetAction;

		GameStateModuleIO::FreeburnChallengeAction::Construct(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::FreeburnChallengeAction>(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:3844
		int32_t liResetActionIndex;

	}
	{
		// BrnChallengeManager.cpp:3876
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		BrnResource::ChallengeListEntry::GetChallengeID(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	{
		// BrnChallengeManager.cpp:3780
		int32_t liActionIndex;

		{
			// BrnChallengeManager.cpp:3789
			const ChallengeListEntryAction * lpAction;

		}
		BrnResource::ChallengeListEntry::GetAction(/* parameters */);
		{
			// BrnChallengeManager.cpp:3800
			BrnGameState::EFreeburnSkill leFreeburnSkillType;

			operator++(/* parameters */);
		}
	}
	{
		// BrnChallengeManager.cpp:3736
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		BrnResource::ChallengeListEntry::GetChallengeID(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:3707
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		BrnResource::ChallengeListEntry::GetChallengeID(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
		CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
}

// BrnChallengeManager.cpp:1889
void BrnGameState::ChallengeManager::BeginChallenge(CgsID  lChallengeID, InputBuffer::GameActionQueue *  lpOutput, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarOutputInterface, bool  lbIsHost, bool  lbSendAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:1891
		FreeburnChallengeAction lStartMessage;

		// BrnChallengeManager.cpp:1892
		int32_t liActionIndex;

		// BrnChallengeManager.cpp:1893
		const ChallengeListEntry * lpChallenge;

	}
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	GameStateModuleIO::FreeburnChallengeAction::Construct(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::FreeburnChallengeAction>(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsContainers::FastBitArray<60>::UnSetAll(/* parameters */);
	{
		// BrnChallengeManager.cpp:1936
		const ChallengeListEntryAction * lpAction;

		BrnResource::ChallengeListEntry::GetAction(/* parameters */);
		BrnResource::ChallengeListEntryAction::GetActionType(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnChallengeManager.cpp:741
void BrnGameState::ChallengeManager::UpdateRemoteRequests(InputBuffer::GameActionQueue *  lpActionQueue, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarOutputInterface, bool  lbIsArbitrator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnChallengeManager.cpp:1235
void BrnGameState::ChallengeManager::UpdateArbitration(float32_t  lfSimTimerTimeStep, InputBuffer::GameActionQueue *  lpActionQueue, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarOutputInterface, bool  lbChallengeFailed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:1240
		FburnChallengeShowSelectorAction lShowSelectorAction;

		AddGameAction<BrnGameState::GameStateModuleIO::FburnChallengeShowSelectorAction>(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:1277
		int32_t liActionIndex;

		{
			// BrnChallengeManager.cpp:1283
			BrnResource::ChallengeListEntryAction::EChallengeCoopType leCoopType;

			BrnResource::ChallengeListEntry::GetAction(/* parameters */);
		}
	}
	{
		// BrnChallengeManager.cpp:1251
		FreeburnChallengeAction lResetAction;

		GameStateModuleIO::FreeburnChallengeAction::Construct(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::FreeburnChallengeAction>(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:1339
		int32_t liNumPlayersSucceeding;

	}
	{
		// BrnChallengeManager.cpp:1418
		int32_t liNumPlayersSucceeding;

	}
	{
		// BrnChallengeManager.cpp:1440
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:1296
		FastBitArray<120> lOverallSuccessArray;

		// BrnChallengeManager.cpp:1297
		int32_t liIndex;

		// BrnChallengeManager.cpp:1298
		bool lbChallengeComplete;

		CgsContainers::FastBitArray<120>::Construct(/* parameters */);
		CgsContainers::FastBitArray<120>::SetAll(/* parameters */);
		CgsContainers::FastBitArray<120>::SetAnd(/* parameters */);
		CgsContainers::FastBitArray<120>::IsZero(/* parameters */);
	}
	{
		// BrnChallengeManager.cpp:1358
		int32_t liNumPlayersContributing;

		// BrnChallengeManager.cpp:1359
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnChallengeManager.cpp:1360
		BrnGameState::EChallengeStatus leActionStatus;

		operator++(/* parameters */);
		BrnResource::ChallengeListEntry::GetAction(/* parameters */);
		{
			// BrnChallengeManager.cpp:1395
			EActiveRaceCarIndex leActiveRaceCarIndex;

			operator++(/* parameters */);
		}
	}
}

// BrnChallengeManager.cpp:882
void BrnGameState::ChallengeManager::UpdateRunning(float32_t  lfSimTimerTimeStep, int32_t  liFramesSinceNetworkStart, InputBuffer::GameActionQueue *  lpActionQueue, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarOutputInterface, bool  lbIs50Hz, const bool  lbIsArbitrator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ChallengesAreAllTwoPlayer(/* parameters */);
	ChallengesAreAllTwoPlayer(/* parameters */);
	ChallengesAreAllTwoPlayer(/* parameters */);
	{
		// BrnChallengeManager.cpp:916
		EActiveRaceCarIndex lePlayerActiveRaceCarIndex;

		// BrnChallengeManager.cpp:917
		bool lbChallengeFailed;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	}
}

// BrnChallengeManager.cpp:616
void BrnGameState::ChallengeManager::PreWorldUpdate(const TimerStatusInterface *  lpTimerStatusInterface, int32_t  liFramesSinceNetworkStart, const NetworkToGameStateInterface::CompletedFburnChallengesQueue *  lpCompletedChallengeStatusQueue, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarOutputInterface, const bool  lbIsArbitrator, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeManager.cpp:618
		float32_t lfSimTimerTimeStep;

	}
	CgsSystem::TimerStatusInterface::GetSimTimerStatus(/* parameters */);
	CgsSystem::TimerStatus::GetCurrentTimeStep(/* parameters */);
}

// BrnChallengeManager.cpp:26
// BrnChallengeManager.cpp:27
