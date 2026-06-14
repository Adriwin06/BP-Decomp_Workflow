// BrnInterestManager.h:24
namespace BrnProgression {
	// BrnProgressionManager.cpp:49
	const int32_t KI_MAX_EVENT_RANK_DIFFERENCE = 2;

	// BrnProgressionManager.cpp:54
	float32_t KF_ALL_PS3_ACHIEVEMENTS;

	// BrnProgressionManager.cpp:55
	float32_t KF_TIMETRAIL_ROAD_RULES;

	// BrnProgressionManager.cpp:56
	float32_t KF_SHOWTIME_ROAD_RULES;

	// BrnProgressionManager.cpp:57
	float32_t KF_SHUT_DOWN_RIVALS;

	// BrnProgressionManager.cpp:58
	float32_t KF_JUMPS_SMASHES_BILLS;

	// BrnProgressionManager.cpp:59
	float32_t KF_FIND_ALL_EVENTS;

	// BrnProgressionManager.cpp:60
	float32_t KF_FIND_ALL_DRIVE_THRUS;

	// BrnProgressionManager.cpp:61
	float32_t KF_COMPLETE_ALL_EVENTS;

	// BrnProgressionManager.cpp:79
	float32_t[6] KFA_RANK_PERCENTAGES;

}

// BrnProgressionManager.cpp:285
void BrnProgression::ProgressionManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnProgressionManager.cpp:269
void BrnProgression::ProgressionManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnProgressionManager.cpp:1172
void BrnProgression::ProgressionManager::GetCustomRaceCountAtLandmark(LandmarkIndex  lLandmarkIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnProgressionManager.cpp:2576
void BrnProgression::ProgressionManager::GetRivalryStatus(CgsID  lRivalId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnProgressionManager.cpp:1371
void BrnProgression::ProgressionManager::OnTakedownFrom(BrnGameState::ETakedownType  leType, CgsID  lRivalId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnProgressionManager.cpp:3150
void BrnProgression::ProgressionManager::FindLandmarkAISectionIndex(CgsID  lLandmarkId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:3152
		int32_t liLandmarkIndex;

		BrnTrigger::TriggerData::GetLandmarkCount(/* parameters */);
	}
	{
		// BrnProgressionManager.cpp:3156
		const BrnProgression::ProgressionManager::LandmarkAISectionIndexPair * lpEntry;

	}
}

// BrnProgressionManager.cpp:4089
void BrnProgression::ProgressionManager::GetOnlineGameModeForEvent(const BrnProgression::RaceEventData *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnProgressionManager.cpp:434
void BrnProgression::ProgressionManager::GetVehicleList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnProgressionManager.cpp:2480
void BrnProgression::ProgressionManager::IsAtRoadRageLevel(CgsID  lRivalId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnProgressionManager.cpp:2556
void BrnProgression::ProgressionManager::HasBeenHit(CgsID  lRivalId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnProgressionManager.cpp:3653
void BrnProgression::ProgressionManager::SetDebugEventRankNumber(int32_t  liHackedProgressionRank) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnProgressionManager.cpp:4411
void BrnProgression::ProgressionManager::OnMugshotSent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnProgressionManager.cpp:4427
void BrnProgression::ProgressionManager::OnOnlineRaceComplete(int32_t  lnNumPlayers, bool  lbWonRace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnProgressionManager.cpp:3523
void BrnProgression::ProgressionManager::AddDistanceDriven(float32_t  lfDistance, bool  lbOnline) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::Abs<float>(/* parameters */);
	Profile::AddDistanceDrivenOffline(/* parameters */);
	Profile::AddDistanceDrivenOnline(/* parameters */);
}

// BrnProgressionManager.cpp:4069
void BrnProgression::ProgressionManager::GetGameModeForEvent(const BrnProgression::RaceEventData *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	RaceEventData::GetMode(/* parameters */);
}

// BrnProgressionManager.cpp:4343
void BrnProgression::ProgressionManager::HasEventBeenWonPreviously(uint32_t  luEventID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:4345
		ProfileEvent * lpEvent;

	}
}

// BrnProgressionManager.cpp:4441
void BrnProgression::ProgressionManager::DEBUG_ClearMedals() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	RequestMedalUpdate(/* parameters */);
	RequestUpdateRivals(/* parameters */);
}

// BrnProgressionManager.cpp:3209
void BrnProgression::ProgressionManager::RaceToSavedRace(const Race *  lpRace, SavedRace *  lpSavedRace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:3213
		uint8_t luLandmarkIndex;

		Race::GetNumLandmarks(/* parameters */);
		{
			// BrnProgressionManager.cpp:3219
			const Landmark * lpLandmark;

			BrnGameState::LandmarkIndex::operator std::int32_t(/* parameters */);
			BrnTrigger::TriggerData::GetLandmarkFromRegionIndex(/* parameters */);
			SavedRace::AddLandmarkCgsId(/* parameters */);
			BrnTrigger::TriggerRegion::GetId(/* parameters */);
		}
		Race::GetLandmarkIndex(/* parameters */);
	}
}

// BrnProgressionManager.cpp:2909
void BrnProgression::ProgressionManager::GetPS3AwardScoresPercentage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:2912
		uint32_t liNumAchievementsWritten;

		// BrnProgressionManager.cpp:2914
		float32_t lfPS3AchievementsSoFar;

		Profile::GetNumAchievementsWritten(/* parameters */);
		rw::math::fpu::Clamp<float>(/* parameters */);
	}
}

// BrnProgressionManager.cpp:116
void BrnProgression::ProgressionManager::Construct(BrnGameState::CarSelectManager *  lpCarSelectManager, StreetManager *  lpStreetManager, BrnGameState::TrainingManager *  lpTrainingManager, BrnGameState::StuntManager *  lpStuntManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<BrnProgression::Race,64u>::Construct(/* parameters */);
	ClearRankUpCache(/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u>::Construct(/* parameters */);
}

// BrnProgressionManager.cpp:3998
void BrnProgression::ProgressionManager::GetNumMugshots(BrnGameState::GameStateModuleIO::EImageGalleryType  leMugshotType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnProgressionManager.cpp:1119
void BrnProgression::ProgressionManager::PostWorldUpdate(float32_t  lfCurrentPlayerStatBoostingTime, bool  lbWasChainJustCompleted) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:4283
void BrnProgression::ProgressionManager::GetEventTypeUniqueWinCount(BrnProgression::RaceEventData::EModeType  leModeType, BrnProgression::ProfileEvent::Flags  leWinType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:4285
		uint32_t luIndex;

		// BrnProgressionManager.cpp:4286
		uint32_t luEventCount;

		// BrnProgressionManager.cpp:4287
		uint32_t luWinCount;

	}
	Profile::GetEventCount(/* parameters */);
	{
		// BrnProgressionManager.cpp:4293
		const ProfileEvent * lpProfileEvent;

		// BrnProgressionManager.cpp:4294
		const BrnProgression::RaceEventData * lpEventData;

		Profile::GetEvent(/* parameters */);
		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
		ProfileEvent::GetID(/* parameters */);
		ProgressionData::FindOfflineEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:1530
void BrnProgression::ProgressionManager::GetEventCountForType(BrnProgression::RaceEventData::EModeType  leModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:1532
		uint32_t luIndex;

		// BrnProgressionManager.cpp:1533
		uint32_t luEventCount;

		// BrnProgressionManager.cpp:1534
		uint32_t luEventTypeCount;

	}
	Profile::GetEventCount(/* parameters */);
	{
		// BrnProgressionManager.cpp:1540
		const ProfileEvent * lpProfileEvent;

		// BrnProgressionManager.cpp:1541
		const BrnProgression::RaceEventData * lpEventData;

		Profile::GetEvent(/* parameters */);
		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
		ProfileEvent::GetID(/* parameters */);
		ProgressionData::FindOfflineEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:3712
void BrnProgression::ProgressionManager::GetRankThresholdForEvent(int32_t  liProgressionRank, BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:3714
		const ProgressionRankData * lpProgressionRankData;

		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	}
	ProgressionData::GetProgressionRankData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:3667
void BrnProgression::ProgressionManager::GetProgressionRankForGameMode(BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:3669
		int32_t liNumWinsForGameMode;

		// BrnProgressionManager.cpp:3670
		int32_t liProgressionRank;

		// BrnProgressionManager.cpp:3671
		int32_t liNumRanks;

		// BrnProgressionManager.cpp:3673
		int32_t liRealProgressionRank;

		// BrnProgressionManager.cpp:3680
		int32_t liRankThreshold;

		DoesGameModeRankUpIndividually(/* parameters */);
	}
	Profile::GetNumRankWinsForGameMode(/* parameters */);
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:1800
void BrnProgression::ProgressionManager::FixRankForSingleEvent(BrnGameState::GameStateModuleIO::EGameModeType  leCurrentGameMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:1803
		int8_t liProgressionRankForGameMode;

		// BrnProgressionManager.cpp:1804
		int32_t liRealProgressionRank;

		// BrnProgressionManager.cpp:1805
		int32_t liEventRankDifference;

		// BrnProgressionManager.cpp:1806
		int32_t liTotalRankNumbersToAdd;

	}
	Profile::SetNumRankWinsForGameMode(/* parameters */);
}

// BrnProgressionManager.cpp:1784
void BrnProgression::ProgressionManager::FixGameModeRanks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnProgressionManager.cpp:3640
void BrnProgression::ProgressionManager::GetLastProgressionRank() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	{
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnProgressionManager.cpp:3616
void BrnProgression::ProgressionManager::GetProgressionRank() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	ProgressionData::GetProgressionRankCount(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:3603
void BrnProgression::ProgressionManager::PlayerHasFinishedLastRank() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	{
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnProgressionManager.cpp:4246
void BrnProgression::ProgressionManager::ClearMedalsOnRankUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:4248
		uint32_t luIndex;

		// BrnProgressionManager.cpp:4249
		uint32_t luEventCount;

		Profile::GetEventCount(/* parameters */);
		{
			// BrnProgressionManager.cpp:4261
			const ProfileEvent * lpProfileEvent;

			// BrnProgressionManager.cpp:4262
			const BrnProgression::RaceEventData * lpEventData;

			Profile::GetEvent(/* parameters */);
			CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
			ProfileEvent::GetID(/* parameters */);
			ProgressionData::FindOfflineEvent(/* parameters */);
			Profile::ResetEventMedals(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

// BrnProgressionManager.cpp:3833
void BrnProgression::ProgressionManager::GetProgressionRankForGameModeNormalised(BrnGameState::GameStateModuleIO::EGameModeType  leModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:3840
		int8_t liLastRankForGameMode;

		// BrnProgressionManager.cpp:3841
		float32_t lfCurrentRank;

		// BrnProgressionManager.cpp:3849
		float32_t lfTotalNumberOfWinsForThisRank;

		// BrnProgressionManager.cpp:3850
		float32_t lfTotalNumberOfWinsForNextRank;

		// BrnProgressionManager.cpp:3851
		float32_t lfCurrentEventWins;

		// BrnProgressionManager.cpp:3853
		float32_t lfTotalNumberOfWinsWithinThisRank;

		// BrnProgressionManager.cpp:3854
		float32_t lfDifficultyPerRankUp;

		// BrnProgressionManager.cpp:3855
		float32_t lfRatioForThisRank;

		// BrnProgressionManager.cpp:3856
		float32_t lfFinalDificulty;

		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	}
	Profile::GetNumRankWinsForGameMode(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:3056
void BrnProgression::ProgressionManager::GetPercentageOfEventsCompleted() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:3058
		float32_t lfPercentageSoFar;

		// BrnProgressionManager.cpp:3059
		int8_t liCurrentProgressionRank;

		// BrnProgressionManager.cpp:3061
		int8_t liCurrentLoopRank;

		// BrnProgressionManager.cpp:3070
		uint32_t luTotalWinsForCurrentRank;

		// BrnProgressionManager.cpp:3071
		uint32_t luEventCount;

		// BrnProgressionManager.cpp:3072
		uint32_t luRankWin;

		// BrnProgressionManager.cpp:3073
		uint32_t luNonRankWin;

		// BrnProgressionManager.cpp:3074
		uint32_t luSpecialEventsWonBefore;

		// BrnProgressionManager.cpp:3081
		float32_t lfTotalEvents;

		Profile::GetTotalWinCount(/* parameters */);
		{
		}
		ProfileEvent::IsFlagSet(/* parameters */);
		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
		ProgressionData::GetProgressionRankData(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:1997
void BrnProgression::ProgressionManager::GetNumberOfBeatenRivals() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:1999
		int32_t liRivalIndex;

		// BrnProgressionManager.cpp:2000
		int32_t liBeatenRivalCount;

		{
			// BrnProgressionManager.cpp:2006
			const RivalData * lpRivalData;

		}
		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
		ProgressionData::GetRival(/* parameters */);
		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
		ProgressionData::GetRival(/* parameters */);
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

// BrnProgressionManager.cpp:1975
void BrnProgression::ProgressionManager::GetTrueNumberOfRivals() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:1977
		int32_t liRivalIndex;

		// BrnProgressionManager.cpp:1978
		int32_t liRivalCount;

		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

// BrnProgressionManager.cpp:2421
void BrnProgression::ProgressionManager::CheckForAllRivalsUnlocked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:2423
		int32_t liNumberOfBeatenRivals;

		// BrnProgressionManager.cpp:2424
		int32_t liTrueNumberOfRivals;

	}
}

// BrnProgressionManager.cpp:734
void BrnProgression::ProgressionManager::CalculateRankFromMedalTotal(uint32_t  luMedalTotal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:736
		int8_t li8TestRank;

		// BrnProgressionManager.cpp:737
		int8_t li8RankCount;

		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	ProgressionData::GetProgressionRankData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:559
void BrnProgression::ProgressionManager::GetGiftCarId(BrnResource::ECarType  leLeastUsedCarType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:562
		const Rival * lpRival;

		// BrnProgressionManager.cpp:563
		int32_t liRival;

		// BrnProgressionManager.cpp:565
		uint32_t luWinsFromTheStart;

	}
	Profile::GetMedalCountFromTheStart(/* parameters */);
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	ProgressionData::GetRival(/* parameters */);
	{
		// BrnProgressionManager.cpp:578
		RivalData * lpSavedRival;

		{
			// BrnProgressionManager.cpp:585
			const VehicleListEntry * lPlayerCarVehicleListEntry;

			// BrnProgressionManager.cpp:588
			BrnResource::ECarType lECarType;

			Rival::GetCarId(/* parameters */);
			BrnResource::VehicleList::GetVehicleData(/* parameters */);
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

// BrnProgressionManager.cpp:4374
void BrnProgression::ProgressionManager::GetCarColourAndPalette(CgsID  lCarID, const uint32_t &  luOutCarColourIndex, const uint32_t &  luOutCarPaletteIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:4376
		const CarData * lpCarData;

	}
	{
		// BrnProgressionManager.cpp:4393
		const VehicleListEntry * lpVehicleListEntry;

		BrnResource::VehicleList::GetVehicleData(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

// BrnProgressionManager.cpp:1336
void BrnProgression::ProgressionManager::OnTakedownTo(InputBuffer::GameActionQueue *  lpOutputActionQueue, BrnGameState::ETakedownType  leType, CgsID  lRivalId, bool  lbMarkedManTakeDown) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Profile::AddTakedown(/* parameters */);
}

// BrnProgressionManager.cpp:3113
void BrnProgression::ProgressionManager::ComputeLandmarkAISectionIndices() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:3115
		int32_t liLandmarkIndex;

		// BrnProgressionManager.cpp:3117
		LinearMalloc lMalloc;

		// BrnProgressionManager.cpp:3118
		char * lpcTempBuffer;

		// BrnProgressionManager.cpp:3121
		AISectionPointMap * lpMap;

	}
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	{
		// BrnProgressionManager.cpp:3125
		const Landmark * lpLandmark;

		// BrnProgressionManager.cpp:3126
		BrnProgression::ProgressionManager::LandmarkAISectionIndexPair * lpEntry;

		CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
		BrnTrigger::BoxRegion::GetPosition(/* parameters */);
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

// BrnProgressionManager.cpp:3185
void BrnProgression::ProgressionManager::FindAISectionIndexForPosition(const rw::math::vpu::Vector3  lPosition, AISectionPointMap *  lpMap) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:3177
void BrnProgression::ProgressionManager::FindAISectionIndexForPosition(const rw::math::vpu::Vector3  lPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:3236
void BrnProgression::ProgressionManager::SavedRaceToRace(const SavedRace *  lpSavedRace, Race *  lpRace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:3241
		uint8_t luLandmarkIndex;

		SavedRace::GetNumLandmarks(/* parameters */);
		{
			// BrnProgressionManager.cpp:3247
			const Landmark * lpLandmark;

			BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
			Race::AddLandmark(/* parameters */);
			{
			}
		}
		SavedRace::GetLandmarkCgsId(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:2941
void BrnProgression::ProgressionManager::ComputeCompletionPercentage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:2943
		float32_t lfFinalPercentage;

		// BrnProgressionManager.cpp:2953
		float32_t lfTimeRoadsDone;

		// BrnProgressionManager.cpp:2961
		float32_t lfCrashRoadsDone;

		// BrnProgressionManager.cpp:2973
		float32_t lfRivalsBattered;

		// BrnProgressionManager.cpp:2974
		float32_t lfNumberOfBeatenRivals;

		// BrnProgressionManager.cpp:2975
		float32_t lfTrueNumberOfRivals;

		// BrnProgressionManager.cpp:2985
		float32_t lfJumps;

		// BrnProgressionManager.cpp:2992
		float32_t lfBills;

		// BrnProgressionManager.cpp:2999
		float32_t lfSmashes;

		// BrnProgressionManager.cpp:3009
		float32_t lfDriveThrus;

		// BrnProgressionManager.cpp:3019
		float32_t lfEventsFound;

		// BrnProgressionManager.cpp:3035
		const CarData * lpCarData;

	}
	BrnGameState::StreetManager::GetRoadCount(/* parameters */);
	Profile::GetStuntElementCount(/* parameters */);
	Profile::GetStuntElementCount(/* parameters */);
	CgsContainers::Set<CgsID,512u>::GetLength(/* parameters */);
	Profile::GetStuntElementCount(/* parameters */);
	CgsContainers::Set<CgsID,512u>::GetLength(/* parameters */);
	Profile::GetDriveThrusFound(/* parameters */);
	CgsContainers::Set<CgsID,5u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,11u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,5u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,14u>::GetLength(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::IsSimilar(/* parameters */);
	Profile::GetDriveThrusFound(/* parameters */);
	Profile::GetStuntElementCount(/* parameters */);
	Profile::GetStuntElementCount(/* parameters */);
	Profile::GetStuntElementCount(/* parameters */);
	BrnGameState::StreetManager::GetRoadCount(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:507
void BrnProgression::ProgressionManager::AddCar(CgsID  lId, BrnProgression::CarData::UnlockType  leType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:509
		CarData * lpCarData;

	}
	{
		// BrnProgressionManager.cpp:533
		DerivedCarArray laDerivedCarArray;

		// BrnProgressionManager.cpp:536
		uint32_t luCarIndex;

		DerivedCarArray(/* parameters */);
		CgsContainers::Array<BrnResource::VehicleListEntry::ELiveryType,8u>::Array(/* parameters */);
		CgsContainers::Array<CgsID,8u>::GetLength(/* parameters */);
		{
			// BrnProgressionManager.cpp:541
			CarData * lpSilverCarData;

			CarData::SetUnlockSequenceAlreadyShown(/* parameters */);
		}
		DerivedCarArray::GetLiveryType(/* parameters */);
		CgsContainers::Array<CgsID,8u>::operator[](/* parameters */);
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
}

// BrnProgressionManager.cpp:2213
void BrnProgression::ProgressionManager::UnlockCar(CgsID  lCarToUnlock) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnProgressionManager.cpp:4322
void BrnProgression::ProgressionManager::UnlockDefaultPlayerCars() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:4324
		uint32_t luFreeCarIndex;

		ProgressionData::GetPlayerCarId(/* parameters */);
		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
		ProgressionData::GetPlayerCarId(/* parameters */);
		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnProgressionManager.cpp:2027
void BrnProgression::ProgressionManager::UnlockSpecialCars(BrnResource::VehicleListEntry::ELiveryType  leLiveryType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:2029
		int32_t liCurrentVehicle;

	}
	{
		// BrnProgressionManager.cpp:2032
		const VehicleListEntry * lpVehicleListEntry;

		BrnResource::VehicleList::GetVehicleData(/* parameters */);
	}
	BrnResource::VehicleList::GetVehicleCount(/* parameters */);
	CgsResource::ResourcePtr<BrnResource::VehicleListResource>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnProgressionManager.cpp:2039
		CarData * lpCarData;

		CarData::SetUnlockSequenceAlreadyShown(/* parameters */);
		Profile::GetPlayerBaseDeformAmount(/* parameters */);
	}
}

// BrnProgressionManager.cpp:1215
void BrnProgression::ProgressionManager::OnPlayerCarChange(CgsID  lCarId, CgsID  lWheelId, bool  lbSetAsSpawnCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:1219
		CgsID lBaseCarID;

		// BrnProgressionManager.cpp:1236
		const VehicleListEntry * lpVehicleListEntry;

		Profile::SetSpawnWheelId(/* parameters */);
		Profile::SetSpawnCarId(/* parameters */);
		BrnResource::VehicleList::GetVehicleData(/* parameters */);
		BrnResource::VehicleListEntry::IsLiveryColour(/* parameters */);
		BrnResource::VehicleListEntry::GetParentId(/* parameters */);
		BrnResource::VehicleList::GetVehicleData(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

// BrnProgressionManager.cpp:1140
void BrnProgression::ProgressionManager::GetRacesAtLandmark(Race *  lpRaces, uint32_t  luMaxRaces, LandmarkIndex  lLandmarkIndex, bool  lbCustomRaces) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:1142
		uint32_t luRaceCount;

		// BrnProgressionManager.cpp:1143
		uint32_t luPresetRaceIndex;

	}
	{
		// BrnProgressionManager.cpp:1148
		const Race * lpPresetRace;

		CgsContainers::Array<BrnProgression::Race,64u>::operator[](/* parameters */);
		Race::GetStartLandmarkIndex(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:4016
void BrnProgression::ProgressionManager::GetMugshotInfo(BrnGameState::GameStateModuleIO::EImageGalleryType  leMugshotType, int32_t  liMugshotIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnProgressionManager.cpp:3981
void BrnProgression::ProgressionManager::LockOrUnlockMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType  leMugshotType, int32_t  liMugshotIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnProgressionManager.cpp:3963
void BrnProgression::ProgressionManager::RecaptureMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType  leMugshotType, int32_t  liMugshotIndex, DateAndTime  lCaptureDate, WorldRegion  lWorldRegion) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnProgressionManager.cpp:447
void BrnProgression::ProgressionManager::UnlockGiftCar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:449
		int32_t lCurrentCarType;

		// BrnProgressionManager.cpp:450
		const Rival * lpRival;

		// BrnProgressionManager.cpp:451
		RivalData * lpSavedRival;

		// BrnProgressionManager.cpp:460
		BrnResource::ECarType leLeastUsedCarType;

	}
	Profile::GetNextTypeOfCarTypeUnlock(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	RivalData::SetState(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	Rival::GetId(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	{
		// BrnProgressionManager.cpp:487
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:784
void BrnProgression::ProgressionManager::GetEventModeTypeFromRaceEventData(const BrnProgression::RaceEventData::EModeType  lEModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:886
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:768
void BrnProgression::ProgressionManager::AddEventTypeToEventTotals(const EventJunction *  lpEventJunction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:770
		BrnGameState::GameStateModuleIO::EGameModeType lEGameModeType;

		Profile::AddGameModeTypeToTotals(/* parameters */);
	}
}

// BrnProgressionManager.cpp:903
void BrnProgression::ProgressionManager::GetOnlineEventModeTypeFromRaceEventData(const BrnProgression::RaceEventData::EOnlineModeType  lEModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:927
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:1065
void BrnProgression::ProgressionManager::UnlockRivals(InputBuffer::GameActionQueue *  lpGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:1068
		const Rival * lpRival;

		// BrnProgressionManager.cpp:1069
		int32_t liRival;

		// BrnProgressionManager.cpp:1071
		uint32_t luWinsFromTheStart;

	}
	Profile::GetMedalCountFromTheStart(/* parameters */);
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	ProgressionData::GetRival(/* parameters */);
	{
		// BrnProgressionManager.cpp:1082
		RivalData * lpSavedRival;

		RivalData::SetState(/* parameters */);
		Rival::GetCarId(/* parameters */);
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
	Rival::GetId(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
}

// BrnProgressionManager.cpp:1185
void BrnProgression::ProgressionManager::LandmarkHasAvailableRaces(LandmarkIndex  lLandmarkIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:1188
		uint32_t luPresetRaceIndex;

	}
	{
		// BrnProgressionManager.cpp:1191
		const Race * lpPresetRace;

		CgsContainers::Array<BrnProgression::Race,64u>::operator[](/* parameters */);
		Race::GetStartLandmarkIndex(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:1266
void BrnProgression::ProgressionManager::OnLoadProfile() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:1268
		int32_t liIndex;

	}
	RequestUpdateRivals(/* parameters */);
	ClearRankUpCache(/* parameters */);
	Profile::GetCarData(/* parameters */);
	Profile::GetCarData(/* parameters */);
	CarData::GetId(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnProgressionManager.cpp:1468
void BrnProgression::ProgressionManager::ApplyVehicleList(const VehicleList *  lpVehicleList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:1470
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:1828
void BrnProgression::ProgressionManager::UnlockDerivedCarCollection(const const DerivedCarArray &  laDerivedCarArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<CgsID,8u>::GetLength(/* parameters */);
	{
		// BrnProgressionManager.cpp:1833
		uint8_t lCurrentCar;

		CgsContainers::Array<CgsID,8u>::operator[](/* parameters */);
		CgsContainers::Array<CgsID,8u>::GetLength(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// BrnProgressionManager.cpp:1841
			BrnResource::VehicleListEntry::ELiveryType leLiveryType;

			// BrnProgressionManager.cpp:1842
			bool lbIsSpecialColour;

			// BrnProgressionManager.cpp:1843
			bool lbAdd;

			DerivedCarArray::GetLiveryType(/* parameters */);
			CgsContainers::Array<CgsID,8u>::operator[](/* parameters */);
			CgsContainers::Array<CgsID,8u>::operator[](/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:1930
void BrnProgression::ProgressionManager::CheckForSpecialCarUnlocks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	Profile::ChromeCarsHaveBeenUnlocked(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	Profile::GoldCarsHaveBeenUnlocked(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:2231
void BrnProgression::ProgressionManager::UnlockCarFromTrophy(CgsID  lCarToUnlock, BrnProgression::TrophyUnlockData::UnlockType  leUnlockType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:2237
		CarData * lpCarData;

		// BrnProgressionManager.cpp:2242
		TrophyUnlockAction lTrophyUnlockAction;

		CarData::SetUnlockDeformationAmount(/* parameters */);
		CgsContainers::Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u>::Append(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:2060
void BrnProgression::ProgressionManager::OnTrophyUnlock(BrnProgression::TrophyUnlockData::UnlockType  leUnlockType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:2062
		uint32_t luTotalWinsForCurrentRank;

		// BrnProgressionManager.cpp:2063
		uint32_t luRankWin;

		// BrnProgressionManager.cpp:2064
		uint32_t luNonRankWin;

		// BrnProgressionManager.cpp:2065
		uint32_t luSpecialEventsWonBefore;

		// BrnProgressionManager.cpp:2070
		uint32_t luTrophyUnlockCount;

		// BrnProgressionManager.cpp:2071
		uint32_t lCurrentTrophyUnlockNo;

		// BrnProgressionManager.cpp:2073
		bool lbCarUnlocked;

	}
	Profile::GetTotalWinCount(/* parameters */);
	{
	}
	ProfileEvent::IsFlagSet(/* parameters */);
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	ProgressionData::GetTrophyUnlockCount(/* parameters */);
	{
		// BrnProgressionManager.cpp:2077
		TrophyUnlockData * lpCurrentTrophyUnlockData;

		// BrnProgressionManager.cpp:2080
		BrnProgression::TrophyUnlockData::UnlockType leDataUnlockType;

		ProgressionData::GetTrophyUnlock(/* parameters */);
		TrophyUnlockData::GetUnlockType(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	{
		// BrnProgressionManager.cpp:2084
		uint32_t luNumberForTrophyUnlock;

		// BrnProgressionManager.cpp:2085
		CgsID lCarToUnlock;

		TrophyUnlockData::GetNumberForTrophyUnlock(/* parameters */);
		TrophyUnlockData::GetCarUnlockID(/* parameters */);
		{
			// BrnProgressionManager.cpp:2094
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// BrnProgressionManager.cpp:2103
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnProgressionManager.cpp:2186
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnProgressionManager.cpp:2090
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnProgressionManager.cpp:2098
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnProgressionManager.cpp:2095
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnProgressionManager.cpp:2091
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnProgressionManager.cpp:2093
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnProgressionManager.cpp:2100
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnProgressionManager.cpp:2101
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnProgressionManager.cpp:2102
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnProgressionManager.cpp:2096
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnProgressionManager.cpp:2097
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnProgressionManager.cpp:2092
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Profile::CheckForOnlineEventCompletionTrophyUnlock(/* parameters */);
	Profile::GetStuntElementCount(/* parameters */);
	Profile::GetStuntElementCount(/* parameters */);
	Profile::GetStuntElementCount(/* parameters */);
}

// BrnProgressionManager.cpp:3502
void BrnProgression::ProgressionManager::OnPowerParkResult(int32_t  liResult, bool  lbBetweenOtherPlayers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Profile::RecordPowerParkingRating(/* parameters */);
}

// BrnProgressionManager.cpp:1881
void BrnProgression::ProgressionManager::UnlockTrophyForEventTypeAllCompleted(const BrnGameState::GameStateModuleIO::EGameModeType  lCurrentEGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnProgressionManager.cpp:2358
void BrnProgression::ProgressionManager::DefeatRivalAndUnlockCar(int32_t  liRivalIndex, BrnProgression::EUnlockSequenceType  leUnlockSequenceType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:2360
		RivalData * lpSavedRival;

		// BrnProgressionManager.cpp:2361
		const Rival * lpRival;

		// BrnProgressionManager.cpp:2362
		CgsID lCarId;

		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	}
	ProgressionData::GetRival(/* parameters */);
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	Rival::GetCarId(/* parameters */);
	RivalData::SetState(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	Rival::GetId(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	{
		// BrnProgressionManager.cpp:2390
		CarData * lpNewCar;

		CarData::SetUnlockDeformationAmount(/* parameters */);
	}
	CarData::SetUnlockSequenceAlreadyShown(/* parameters */);
}

// BrnProgressionManager.cpp:2443
void BrnProgression::ProgressionManager::IsAtFaceOffLevel(CgsID  lRivalId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:2454
		const RivalData * lpRivalData;

		{
			// BrnProgressionManager.cpp:2449
			const Rival * lpRival;

		}
	}
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	{
		// BrnProgressionManager.cpp:2450
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:2521
void BrnProgression::ProgressionManager::IsAtPursuitLevel(CgsID  lRivalId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:2531
		const RivalData * lpRivalData;

		{
			// BrnProgressionManager.cpp:2526
			const Rival * lpRival;

			CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnProgressionManager.cpp:2527
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:2630
void BrnProgression::ProgressionManager::LoadProgressionData(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, CgsModule::EventReceiverQueue<3072,16> *  lpReceiverQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnGameState::GameStateModuleIO::OutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<3072>::LoadBundle(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	BrnGameState::GameStateModuleIO::OutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<3072>::AcquireResource(/* parameters */);
	{
		// BrnProgressionManager.cpp:2671
		const CgsModule::Event * lpEvent;

		// BrnProgressionManager.cpp:2672
		const AcquireResourceResponse * lpAcquire;

		// BrnProgressionManager.cpp:2673
		int32_t liEventSize;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator=(/* parameters */);
		CgsModule::BaseEventReceiverQueue::GetNextEvent(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:2720
void BrnProgression::ProgressionManager::LoadAIData(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, CgsModule::EventReceiverQueue<3072,16> *  lpReceiverQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	BrnGameState::GameStateModuleIO::OutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<3072>::LoadAILanes(/* parameters */);
	{
		// BrnProgressionManager.cpp:2757
		const CgsModule::Event * lpEvent;

		// BrnProgressionManager.cpp:2758
		const GetAIDataResponse * lpAIDataResponse;

		// BrnProgressionManager.cpp:2759
		int32_t liEventSize;

	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	BrnGameState::GameStateModuleIO::OutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<3072>::GetAILanes(/* parameters */);
	CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:2843
void BrnProgression::ProgressionManager::FindPresetRace(CgsID  lRaceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:2845
		uint32_t luRaceIndex;

	}
	{
		// BrnProgressionManager.cpp:2849
		const Race * lpPresetRace;

	}
	CgsContainers::Array<BrnProgression::Race,64u>::operator[](/* parameters */);
}

// BrnProgressionManager.cpp:2868
void BrnProgression::ProgressionManager::SetupRoamingSections() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:2870
		int32_t liDistrictIndex;

		// BrnProgressionManager.cpp:2871
		int32_t liRoamingLocationIndex;

		// BrnProgressionManager.cpp:2873
		LinearMalloc lMalloc;

		// BrnProgressionManager.cpp:2874
		char * lpcTempBuffer;

		// BrnProgressionManager.cpp:2877
		AISectionPointMap * lpMap;

	}
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	CgsContainers::Array<std::uint16_t,8u>::Construct(/* parameters */);
	{
		// BrnProgressionManager.cpp:2885
		const RoamingLocation * lpRoamingLocation;

		BrnTrigger::TriggerData::GetRoamingLocation(/* parameters */);
		CgsContainers::Array<std::uint16_t,8u>::GetLength(/* parameters */);
		CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
		CgsContainers::Array<std::uint16_t,8u>::Append(/* parameters */);
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
}

// BrnProgressionManager.cpp:3192
void BrnProgression::ProgressionManager::BuildAISectionPointMap(LinearMalloc *  lpMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:3784
void BrnProgression::ProgressionManager::GetStuntRunScoreTarget(const GameModeParams *  lpGameModeParams, const StartGameModeParams *  lpStartGameModeParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:3786
		const BrnProgression::RaceEventData * lpStuntRunEventData;

		// BrnProgressionManager.cpp:3790
		int8_t liLastRankForGameMode;

		// BrnProgressionManager.cpp:3791
		int8_t liCurrentRank;

		// BrnProgressionManager.cpp:3799
		float32_t lfTotalNumberOfWinsForThisRank;

		// BrnProgressionManager.cpp:3800
		float32_t lfTotalNumberOfWinsForNextRank;

		// BrnProgressionManager.cpp:3801
		float32_t lfCurrentEventWins;

		// BrnProgressionManager.cpp:3803
		float32_t lfCurrentRelativeEventRatio;

		// BrnProgressionManager.cpp:3805
		float32_t lfCurrentRankStuntRunScore;

		// BrnProgressionManager.cpp:3806
		float32_t lfNextRankStuntRunScore;

		// BrnProgressionManager.cpp:3807
		float32_t lfCurrentStuntRunTarget;

		BrnGameState::StartGameModeParams::GetEventData(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	RaceEventData::GetRankScore(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	RaceEventData::GetRankScore(/* parameters */);
	RaceEventData::GetRankScore(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnMath::RoundWithNumSignificantFigures(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	std(/* parameters */);
	vec_and(/* parameters */);
	vec_sub(/* parameters */);
	vec_andc(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_sr(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	rw::math::fpu::Abs<float>(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_sub(/* parameters */);
	std(/* parameters */);
	vec_sel(/* parameters */);
	std(/* parameters */);
	vec_andc(/* parameters */);
	vec_ctf(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_andc(/* parameters */);
	vec_madd(/* parameters */);
	vec_ctu(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
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
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::fpu::Floor<float>(/* parameters */);
	rw::math::fpu::Sgn<float>(/* parameters */);
	rw::math::fpu::FastFloatToInt32<float>(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnMath::RoundWithNumSignificantFigures(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:3886
void BrnProgression::ProgressionManager::GetProgressionRankNormalised(float32_t  lfRank) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:3889
		float32_t lfMaxRank;

		// BrnProgressionManager.cpp:3893
		float32_t lfNormalisedRank;

		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::Max<float>(/* parameters */);
	}
	{
		// BrnProgressionManager.cpp:3891
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnProgressionManager.cpp:3759
void BrnProgression::ProgressionManager::GetProgressionRankNormalised() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:3761
		float32_t lfCurrentRank;

	}
}

// BrnProgressionManager.cpp:4048
void BrnProgression::ProgressionManager::GetTotalWinsForNextRank() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:4050
		const ProgressionRankData * lpProgressionRank;

	}
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	ProgressionData::GetProgressionRankData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:3343
void BrnProgression::ProgressionManager::GetGameStats(GameStats *  lpGameStats, BrnGameState::StuntManager *  lpStuntManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:3345
		const BrnProgression::Profile * lpProfile;

		// BrnProgressionManager.cpp:3347
		CgsID lFavouriteCar;

		// BrnProgressionManager.cpp:3348
		CgsID lForgottenCar;

		// BrnProgressionManager.cpp:3349
		CgsID lNemesis;

		// BrnProgressionManager.cpp:3351
		int32_t liRivalIndex;

		// BrnProgressionManager.cpp:3352
		int32_t liTakedownTypeIndex;

		// BrnProgressionManager.cpp:3353
		int32_t liMaxTakedownFromCount;

		// BrnProgressionManager.cpp:3354
		int32_t liIndex;

		// BrnProgressionManager.cpp:3355
		int32_t liCollectedCount;

		// BrnProgressionManager.cpp:3357
		BrnGameState::StuntElementType leStuntElementType;

		// BrnProgressionManager.cpp:3399
		uint32_t luRankWin;

		// BrnProgressionManager.cpp:3399
		uint32_t luNonRankWin;

		// BrnProgressionManager.cpp:3399
		uint32_t luSpecialEventsWonBefore;

		GetProfile(/* parameters */);
	}
	BrnGameState::GameStateModuleIO::GameStats::Construct(/* parameters */);
	{
		// BrnProgressionManager.cpp:3373
		bool lbIsSponsorUnlock;

		// BrnProgressionManager.cpp:3374
		const CarData * lpCarData;

		// BrnProgressionManager.cpp:3375
		const VehicleListEntry * lpVehicleData;

		Profile::GetCarData(/* parameters */);
		BrnResource::VehicleList::GetVehicleData(/* parameters */);
		CarData::GetId(/* parameters */);
		BrnResource::VehicleList::GetVehicleData(/* parameters */);
		{
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		BrnResource::VehicleList::GetVehicleData(/* parameters */);
		{
			// BrnProgressionManager.cpp:3381
			const VehicleListEntryGamePlayData * lpGameplayData;

		}
	}
	Profile::GetTotalWinCount(/* parameters */);
	{
	}
	ProfileEvent::IsFlagSet(/* parameters */);
	Profile::GetStuntElementCount(/* parameters */);
	Profile::GetStuntElementCount(/* parameters */);
	CgsContainers::Set<CgsID,512u>::GetLength(/* parameters */);
	Profile::GetStuntElementCount(/* parameters */);
	Profile::GetNumAchievementsWritten(/* parameters */);
	BrnGameState::operator++(/* parameters */);
	{
		// BrnProgressionManager.cpp:3425
		BrnWorld::ECounty leCounty;

		BrnGameState::StuntManager::GetMaxStuntElementCountByCounty(/* parameters */);
		BrnGameState::GameStateModuleIO::GameStats::SetMaxStuntElementPerCounty(/* parameters */);
		BrnWorld::operator++(/* parameters */);
		BrnGameState::GameStateModuleIO::GameStats::SetCurrentStuntElementPerCounty(/* parameters */);
	}
	{
		// BrnProgressionManager.cpp:3437
		BrnGameState::ETakedownType leTakedownType;

		BrnGameState::GameStateModuleIO::GameStats::SetTakedownTypeCount(/* parameters */);
	}
	Profile::GetTakedownTypeCount(/* parameters */);
	BrnGameState::GameStateModuleIO::GameStats::SetRoadsRuledCount(/* parameters */);
	BrnGameState::GameStateModuleIO::GameStats::SetRoadsRuledCount(/* parameters */);
	BrnGameState::StreetManager::GetRoadCount(/* parameters */);
	BrnGameState::GameStateModuleIO::GameStats::SetTotalRoads(/* parameters */);
	BrnGameState::GameStateModuleIO::GameStats::SetValue(/* parameters */);
	BrnGameState::GameStateModuleIO::GameStats::SetValue(/* parameters */);
	Profile::GetRivalCount(/* parameters */);
	{
		// BrnProgressionManager.cpp:3455
		const RivalData * lpRivalData;

		Profile::GetRivalData(/* parameters */);
		RivalData::GetTakedownFromCount(/* parameters */);
	}
	RivalData::GetRivalId(/* parameters */);
	BrnGameState::GameStateModuleIO::GameStats::SetValue(/* parameters */);
	BrnGameState::GameStateModuleIO::GameStats::SetValue(/* parameters */);
	BrnGameState::GameStateModuleIO::GameStats::SetValue(/* parameters */);
	Profile::GetTotalCarsToShutDown(/* parameters */);
	BrnGameState::GameStateModuleIO::GameStats::SetValue(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnResource::VehicleListEntry::IsSelectable(/* parameters */);
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

// BrnProgressionManager.cpp:4224
void BrnProgression::ProgressionManager::HACK_SetupRaceWithLandMarks(const Race &  lRace, CgsID *  laLandMarkCgsIDs, uint32_t  luCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:4226
		uint32_t luIndex;

	}
	{
		// BrnProgressionManager.cpp:4229
		const Landmark * lpLandmark;

		Race::AddLandmark(/* parameters */);
	}
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnProgressionManager.cpp:4099
void BrnProgression::ProgressionManager::HACK_SetupRaces(Race *  lpRaceArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:4102
		CgsID[2] laEvent01;

		// BrnProgressionManager.cpp:4103
		CgsID[2] laEvent02;

		// BrnProgressionManager.cpp:4104
		CgsID[2] laEvent03;

		// BrnProgressionManager.cpp:4105
		CgsID[2] laEvent04;

		// BrnProgressionManager.cpp:4106
		CgsID[2] laEvent05;

		// BrnProgressionManager.cpp:4120
		Race * lpRace;

	}
	BaseRace::SetName(/* parameters */);
	BaseRace::SetId(/* parameters */);
	BaseRace::SetId(/* parameters */);
	BaseRace::SetName(/* parameters */);
	BaseRace::SetId(/* parameters */);
	BaseRace::SetName(/* parameters */);
	BaseRace::SetId(/* parameters */);
	BaseRace::SetName(/* parameters */);
	BaseRace::SetId(/* parameters */);
	BaseRace::SetName(/* parameters */);
}

// BrnProgressionManager.cpp:2589
void BrnProgression::ProgressionManager::ProcessLoadedPresetRaces() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:2610
		Race[17] laRaces;

		// BrnProgressionManager.cpp:2613
		uint32_t luIndex;

		Race(/* parameters */);
		CgsContainers::Array<BrnProgression::Race,64u>::Append(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

// BrnProgressionManager.cpp:217
void BrnProgression::ProgressionManager::Prepare(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, BrnGameState::ModeManager *  lpModeManager, CgsModule::EventReceiverQueue<3072,16> *  lpReceiverQueue, const TriggerData *  lpTriggerData, StuntModeScoring::AchievementManager *  lpAchievementManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnProgressionManager.cpp:3918
void BrnProgression::ProgressionManager::AddMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType  leMugshotType, MugshotInfo::UniquePlayerID  lUniquePlayerID, DateAndTime  lCaptureDate, WorldRegion  lWorldRegion) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:3921
		int32_t liFileID;

	}
}

// BrnProgressionManager.cpp:3942
void BrnProgression::ProgressionManager::DeleteMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType  leMugshotType, int32_t  liMugshotIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnProgressionManager.cpp:4034
void BrnProgression::ProgressionManager::FindMugshotInfoByUniquePlayerID(BrnGameState::GameStateModuleIO::EImageGalleryType  leMugshotType, MugshotInfo::UniquePlayerID  lUniquePlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnProgressionManager.cpp:3560
void BrnProgression::ProgressionManager::AddRivalToWorld(const Rival *  lpRival, int32_t  liRivalIndex, InputBuffer::GameActionQueue *  lpGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:3566
		const RivalData * lpRivalSavedData;

		// BrnProgressionManager.cpp:3567
		BrnWorld::EDistrict leRivalDistrict;

		// BrnProgressionManager.cpp:3573
		AddRivalAction lAddRivalAction;

		// BrnProgressionManager.cpp:3584
		uint16_t luDistrictSectionIndex;

		// BrnProgressionManager.cpp:3585
		const AISection * lpAISection;

	}
	Rival::GetDistrict(/* parameters */);
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	ProgressionData::GetPersonality(/* parameters */);
	CgsContainers::Array<std::uint16_t,8u>::GetLength(/* parameters */);
	CgsContainers::Array<std::uint16_t,8u>::GetLength(/* parameters */);
	CgsContainers::Array<std::uint16_t,8u>::operator[](/* parameters */);
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	BrnAI::AISectionsData::GetAISection(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::AddRivalAction>(/* parameters */);
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
}

// BrnProgressionManager.cpp:3265
void BrnProgression::ProgressionManager::SendRivalryUpdateMessage(InputBuffer::GameActionQueue *  lpOutputActionQueue, BrnProgression::EOfflineRivalryStatus  leRivalryStatus, RivalData *  lpRivalData, CgsID  lRivalCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:3267
		CgsID lRivalId;

	}
	RivalData::GetRivalId(/* parameters */);
	{
		// BrnProgressionManager.cpp:3285
		HUDMessageFirstHitOnRivalAction lFirstHitAction;

		AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageFirstHitOnRivalAction>(/* parameters */);
	}
	{
		// BrnProgressionManager.cpp:3317
		HUDMessageRivalIsWreckedAction lRivalIsWreckedAction;

		AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageRivalIsWreckedAction>(/* parameters */);
	}
	{
		// BrnProgressionManager.cpp:3307
		HUDMessageRivalIsATargetAction lRivalIsTargetAction;

		AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageRivalIsATargetAction>(/* parameters */);
	}
	{
		// BrnProgressionManager.cpp:3297
		HUDMessageRivalIsARivalAction lRivalIsRivalAction;

		AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageRivalIsARivalAction>(/* parameters */);
	}
}

// BrnProgressionManager.cpp:2794
void BrnProgression::ProgressionManager::UpdateRivals(InputBuffer::GameActionQueue *  lpGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:2806
		const Rival * lpRival;

		// BrnProgressionManager.cpp:2807
		RivalData * lpSavedRival;

	}
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	ProgressionData::GetRival(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AddGameAction<BrnGameState::GameStateModuleIO::RemoveAllRivalsAction>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:2310
void BrnProgression::ProgressionManager::OnPursuitWon(CgsID  lRivalId, InputBuffer::GameActionQueue *  lpOutputGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:2312
		RivalStateChangeAction lStateChangeAction;

		// BrnProgressionManager.cpp:2313
		RivalData * lpSavedRival;

		// BrnProgressionManager.cpp:2314
		int32_t liRival;

		// BrnProgressionManager.cpp:2318
		const Rival * lpRival;

		// BrnProgressionManager.cpp:2343
		RequestAutoSaveAction lRequestAutosaveAction;

		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	ProgressionData::GetRival(/* parameters */);
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::RivalStateChangeAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::RequestAutoSaveAction>(/* parameters */);
	{
		// BrnProgressionManager.cpp:2316
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
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

// BrnProgressionManager.cpp:1486
void BrnProgression::ProgressionManager::CheckForAllModeTypeCompletion(InputBuffer::GameActionQueue *  lpGameActionQueue, BrnProgression::RaceEventData::EModeType  leModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:1488
		uint32_t luEventCountForType;

		// BrnProgressionManager.cpp:1489
		uint32_t luEventTypeUniqueWinCount;

		Profile::GetSeenAllEventTypeWonMessage(/* parameters */);
	}
	CgsContainers::BitArray<6u>::IsBitSet(/* parameters */);
	{
		// BrnProgressionManager.cpp:1511
		AllEventTypeWonAction lAllEventTypeWonAction;

		AddGameAction<BrnGameState::GameStateModuleIO::AllEventTypeWonAction>(/* parameters */);
		Profile::SetSeenAllEventTypeWonMessage(/* parameters */);
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

// BrnProgressionManager.cpp:1385
void BrnProgression::ProgressionManager::SendGameCompletionResults(InputBuffer::GameActionQueue *  lpOutputActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:1388
		OneHundredPercentCompleteAction lGameCompleteAction;

	}
	AddGameAction<BrnGameState::GameStateModuleIO::OneHundredPercentCompleteAction>(/* parameters */);
}

// BrnProgressionManager.cpp:609
void BrnProgression::ProgressionManager::SendTrophyUnlockUpdate(InputBuffer::GameActionQueue *  lpGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:611
		uint32_t lTrophyUnlockToSend;

	}
	CgsContainers::Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u>::operator[](/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u>::operator[](/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u>::operator[](/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::TrophyUnlockAction>(/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u>::Erase(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:2264
void BrnProgression::ProgressionManager::OnFaceOffWon(CgsID  lRivalId, InputBuffer::GameActionQueue *  lpOutputGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:2266
		RivalStateChangeAction lStateChangeAction;

		// BrnProgressionManager.cpp:2267
		RivalData * lpSavedRival;

		// BrnProgressionManager.cpp:2268
		int32_t liRival;

		// BrnProgressionManager.cpp:2276
		const Rival * lpRival;

		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	ProgressionData::GetRival(/* parameters */);
	RivalData::SetState(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::RivalStateChangeAction>(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
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

// BrnProgressionManager.cpp:1420
void BrnProgression::ProgressionManager::OnDriveThru(CgsID  lId, BrnTrigger::GenericRegion::Type  leDriveThruType, InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:1424
		BrnProgression::TrophyUnlockData::UnlockType leUnlockType;

		Profile::AddDriveThru(/* parameters */);
		Profile::AreAllDriveThrusCompleted(/* parameters */);
		Profile::AreAllDriveThrusCompleted(/* parameters */);
		BrnGameState::GameStateModuleIO::RequestAutoSaveAction::RequestAutoSaveAction(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::RequestAutoSaveAction>(/* parameters */);
	}
	CgsContainers::Set<CgsID,5u>::Insert(/* parameters */);
	CgsContainers::Set<CgsID,5u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,14u>::Insert(/* parameters */);
	CgsContainers::Set<CgsID,14u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,11u>::Insert(/* parameters */);
	CgsContainers::Set<CgsID,11u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,5u>::Insert(/* parameters */);
	CgsContainers::Set<CgsID,5u>::GetLength(/* parameters */);
	Profile::AreAllDriveThrusCompleted(/* parameters */);
	CgsContainers::Set<CgsID,11u>::Insert(/* parameters */);
	CgsContainers::Set<CgsID,11u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,5u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,14u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,11u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,11u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,5u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,14u>::GetLength(/* parameters */);
	CgsContainers::Set<CgsID,11u>::GetLength(/* parameters */);
}

// BrnProgressionManager.cpp:1042
void BrnProgression::ProgressionManager::UnlockAllJunkyards() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:1044
		int32_t liIndex;

	}
	BrnTrigger::TriggerData::GetGenericRegion(/* parameters */);
}

// BrnProgressionManager.cpp:943
void BrnProgression::ProgressionManager::UnlockToProgressionRank(int8_t  li8NewProgressionRank, InputBuffer::GameActionQueue *  lpGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:949
		uint32_t luEventJunctionIndex;

		// BrnProgressionManager.cpp:950
		uint32_t luEventJunctionCount;

		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
		ProgressionData::GetEventJunctionCount(/* parameters */);
	}
	Profile::GetCurrentCarTypeWithMinDistance(/* parameters */);
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	Profile::SetCurrentProgressionRank(/* parameters */);
	Profile::ResetCarTypeDistances(/* parameters */);
	Profile::ClearCurrentEventCompleteCounts(/* parameters */);
	ProgressionDebugComponent::SetProfileReadyForDisplay(/* parameters */);
	{
		// BrnProgressionManager.cpp:954
		const EventJunction * lpEventJunction;

		ProgressionData::GetEventJunction(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnProgressionManager.cpp:985
		TelemetryAction lTeleEvent;

		BrnNetwork::BrnNetworkModuleIO::TelemetryData::AddParameter(/* parameters */);
		BrnNetwork::BrnNetworkModuleIO::TelemetryData::Construct(/* parameters */);
		BrnNetwork::BrnNetworkModuleIO::TelemetryData::ClearParameter(/* parameters */);
		BrnNetwork::BrnNetworkModuleIO::TelemetryData::AddParameter(/* parameters */);
		CgsCore::StrCat(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::TelemetryAction>(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsCore::StrCat(/* parameters */);
}

// BrnProgressionManager.cpp:629
void BrnProgression::ProgressionManager::UpdatePlayerMedals(InputBuffer::GameActionQueue *  lpGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:631
		SendPlayerMedalAction lSendPlayerMedalAction;

		// BrnProgressionManager.cpp:632
		uint32_t luTotalWinsForCurrentRank;

		// BrnProgressionManager.cpp:633
		uint32_t luRankWin;

		// BrnProgressionManager.cpp:634
		uint32_t luNonRankWin;

		// BrnProgressionManager.cpp:635
		uint32_t luSpecialEventsWonBefore;

		// BrnProgressionManager.cpp:636
		int32_t liWinsForNextRank;

		// BrnProgressionManager.cpp:637
		int8_t li8TestRank;

		// BrnProgressionManager.cpp:638
		int8_t liTopRankIndex;

		Profile::GetTotalWinCount(/* parameters */);
	}
	{
	}
	ProfileEvent::IsFlagSet(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::SendPlayerMedalAction>(/* parameters */);
	Profile::GetTotalWinCount(/* parameters */);
	{
	}
	ProfileEvent::IsFlagSet(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnProgressionManager.cpp:304
void BrnProgression::ProgressionManager::PreWorldUpdate(float32_t  lfSimTimeStep, float32_t  lfGameTimeStep, BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutputBuffer, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, BrnUpdateSet  lUpdateSet, bool  lbIsInJunkyard) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:308
		InputBuffer::GameActionQueue * lpGameActionQueue;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	BrnGameState::GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	Profile::AddRealTimePlayed(/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u>::GetLength(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		// BrnProgressionManager.cpp:316
		const RaceCarState * lpRaceCarState;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerEngineOn(/* parameters */);
		Profile::AddInCarTimePlayed(/* parameters */);
		BrnGameState::ModeManager::IsOnlineGameMode(/* parameters */);
	}
	{
		// BrnProgressionManager.cpp:374
		AllRivalsShutDownAction lAllRivalsShutDownAction;

		AddGameAction<BrnGameState::GameStateModuleIO::AllRivalsShutDownAction>(/* parameters */);
	}
	{
		// BrnProgressionManager.cpp:413
		AchievementsEarnedAction lAction;

		CgsContainers::BitArray<60u>::SetBit(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::AchievementsEarnedAction>(/* parameters */);
	}
	{
		// BrnProgressionManager.cpp:387
		RequestAutoSaveAction lRequestAutosaveAction;

		AddGameAction<BrnGameState::GameStateModuleIO::RequestAutoSaveAction>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnGameState::ModeManager::IsOnlineGameMode(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnProgressionManager.cpp:1570
void BrnProgression::ProgressionManager::OnEventFinishUpdateProfile(InputBuffer::GameActionQueue *  lpGameActionQueue, uint32_t  luEventID, ShowModeResultsAction *  lpShowModeResultsAction, BrnGameState::GameStateModuleIO::EGameModeType  leModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionManager.cpp:1583
		ProfileEvent * lpEvent;

		// BrnProgressionManager.cpp:1593
		uint32_t luCurrentFlags;

		// BrnProgressionManager.cpp:1594
		uint32_t lCurrentMedal;

		ProfileEvent::EnableFlags(/* parameters */);
		CgsContainers::Array<CgsID,8u>::Construct(/* parameters */);
		{
			// BrnProgressionManager.cpp:1767
			SetTrafficScaleBasedOnRankAction lSetTrafficScaleBasedOnRankAction;

			AddGameAction<BrnGameState::GameStateModuleIO::SetTrafficScaleBasedOnRankAction>(/* parameters */);
		}
	}
	{
		// BrnProgressionManager.cpp:1618
		uint32_t luEventID;

		// BrnProgressionManager.cpp:1619
		const BrnProgression::RaceEventData * lpRaceEventData;

		// BrnProgressionManager.cpp:1620
		bool lbSpecialEventWonBefore;

		// BrnProgressionManager.cpp:1679
		uint32_t luMedalCount;

		// BrnProgressionManager.cpp:1680
		uint32_t luTotalWinsForCurrentRank;

		// BrnProgressionManager.cpp:1682
		uint32_t luRankWin;

		// BrnProgressionManager.cpp:1683
		uint32_t luNonRankWin;

		// BrnProgressionManager.cpp:1684
		uint32_t luSpecialEventsWonBefore;

		// BrnProgressionManager.cpp:1751
		RequestAutoSaveAction lRequestAutosaveAction;

		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
		ProfileEvent::GetID(/* parameters */);
		{
		}
		ProgressionData::FindOfflineEvent(/* parameters */);
		ProfileEvent::EnableFlags(/* parameters */);
		Profile::GetEventCount(/* parameters */);
		Profile::GetTotalWinCount(/* parameters */);
		{
		}
		Profile::AddGameModeTypeCompleted(/* parameters */);
		Profile::GetGameModeTypeAmount(/* parameters */);
		Profile::GetGameModeTypeCompletedAmountSinceTheStart(/* parameters */);
		Profile::AddToMedalCountFromTheStart(/* parameters */);
		Profile::AddWinForGameMode(/* parameters */);
		AddGameAction<BrnGameState::GameStateModuleIO::RequestAutoSaveAction>(/* parameters */);
	}
	{
	}
	EventJunction::GetID(/* parameters */);
	EventJunction::GetOfflineEvent(/* parameters */);
	ProfileEvent::ClearFlags(/* parameters */);
	{
		// BrnProgressionManager.cpp:1733
		CgsID lCarUnlockID;

		// BrnProgressionManager.cpp:1734
		CarData * lpCarData;

		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
		ProgressionData::GetProgressionRankData(/* parameters */);
		ProgressionRankData::GetFreeCarForRankUpID(/* parameters */);
		CarData::SetUnlockDeformationAmount(/* parameters */);
	}
	{
		// BrnProgressionManager.cpp:1629
		DerivedCarArray lDerivedCarArray;

		// BrnProgressionManager.cpp:1639
		CarData * lpCarData;

		GetDerivedPatternVehicleCollection(/* parameters */);
		ProfileEvent::EnableFlags(/* parameters */);
		DerivedCarArray(/* parameters */);
		CgsContainers::Array<BrnResource::VehicleListEntry::ELiveryType,8u>::Array(/* parameters */);
		CgsContainers::Array<CgsID,8u>::operator[](/* parameters */);
		CarData::SetUnlockDeformationAmount(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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

// BrnProgressionManager.cpp:47
// BrnProgressionManager.cpp:46
