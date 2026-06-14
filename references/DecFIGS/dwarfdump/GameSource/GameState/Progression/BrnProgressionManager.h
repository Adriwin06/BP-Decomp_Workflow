// BrnInterestManager.h:24
namespace BrnProgression {
	// Declaration
	struct ProgressionManager {
		// BrnProgressionManager.h:786
		enum LoadStage {
			E_LOAD_NOT_STARTED = 0,
			E_LOAD_REQUESTED = 1,
			E_ACQUIRE_NOT_STARTED = 2,
			E_ACQUIRE_REQUESTED = 3,
			E_LOAD_COMPLETE = 4,
		}

		// BrnProgressionManager.h:796
		enum AILoadStage {
			E_AI_DATA_LOAD_NOT_STARTED = 0,
			E_AI_DATA_LOAD_REQUESTED = 1,
			E_AI_DATA_ACQUIRE_NOT_STARTED = 2,
			E_AI_DATA_ACQUIRE_REQUESTED = 3,
			E_AI_DATA_LOAD_COMPLETE = 4,
		}

		// BrnProgressionManager.h:807
		struct LandmarkAISectionIndexPair {
			// BrnProgressionManager.h:809
			uint32_t mId;

			// BrnProgressionManager.h:810
			uint16_t muAISectionIndex;

		}

	}

	// BrnProgressionManager.h:81
	enum EOfflineRivalryStatus {
		E_OFFLINE_RIVALRY_STATUS_UNKNOWN = 0,
		E_OFFLINE_RIVALRY_STATUS_NORMAL = 1,
		E_OFFLINE_RIVALRY_STATUS_RIVAL = 2,
		E_OFFLINE_RIVALRY_STATUS_TARGET = 3,
		E_OFFLINE_RIVALRY_STATUS_WRECKED = 4,
		E_OFFLINE_RIVALRY_STATUS_COUNT = 5,
	}

	// BrnProgressionManager.h:92
	enum EUnlockSequenceType {
		E_UNLOCK_SEQUENCE_TYPE_DEFAULT = 0,
		E_UNLOCK_SEQUENCE_TYPE_NONE = 1,
		E_UNLOCK_SEQUENCE_TYPE_COUNT = 2,
	}

	// BrnProgressionManager.h:101
	const CgsDev::PerfMonCpuPage KE_GAMESTATE_PERFMON_PAGE;

	// BrnProgressionManager.h:103
	const int32_t KI_MAX_TROPHY_UNLOCK_QUEUE = 12;

}

// BrnProgressionManager.h:118
struct BrnProgression::ProgressionManager {
	// BrnProgressionManager.h:125
	extern const float32_t KF_PROGRESSION_UNLOCK_RIVAL_DEFORM_AMOUNT;

private:
	// BrnProgressionManager.h:661
	extern const float32_t KF_RIVALS_PROGRESSION_WEIGHT;

	// Unknown accessibility
	// BrnGameStateTypes.h:202
	typedef Array<std::uint16_t,8u> RoamingSections;

	// BrnProgressionManager.h:822
	ProgressionManager::RoamingSections[18] maRoamingSections;

	// BrnProgressionManager.h:823
	Profile mProfile;

	// BrnProgressionManager.h:824
	Array<BrnProgression::Race,64u> maPresetRaces;

	// BrnProgressionManager.h:825
	BrnProgression::ProgressionManager::LandmarkAISectionIndexPair[512] maLandmarkAISectionIndices;

	// BrnProgressionManager.h:827
	BrnProgression::ProgressionDebugComponent mDebugComponent;

	// BrnProgressionManager.h:828
	bool mbSendAchievementAwardedEvent_DEBUG;

	// BrnProgressionManager.h:829
	int32_t miAchievementToAward_DEBUG;

	// BrnProgressionManager.h:831
	Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u> mQueueOfTrophyCarUnLocks;

	// BrnProgressionManager.h:832
	CarData * mpCurrentCarData;

	// BrnProgressionManager.h:833
	LiveryData * mpCurrentLiveryData;

	// BrnProgressionManager.h:834
	uint32_t muNumPresetRaces;

	// BrnProgressionManager.h:835
	BrnProgression::ProgressionManager::LoadStage meLoadStage;

	// BrnProgressionManager.h:836
	BrnProgression::ProgressionManager::AILoadStage meAILoadStage;

	// BrnProgressionManager.h:837
	ResourcePtr<BrnProgression::ProgressionData> mpProgressionData;

	// BrnProgressionManager.h:838
	ResourcePtr<BrnAI::AISectionsData> mpAISectionData;

	// BrnProgressionManager.h:839
	const TriggerData * mpTriggerData;

	// BrnProgressionManager.h:841
	int32_t miLastUpdatedRival;

	// BrnProgressionManager.h:842
	int32_t miLastReturnedRival;

	// BrnProgressionManager.h:844
	StreetManager * mpStreetManager;

	// BrnProgressionManager.h:845
	BrnGameState::CarSelectManager * mpCarSelectManager;

	// BrnProgressionManager.h:846
	StuntModeScoring::AchievementManager * mpAchievementManager;

	// BrnProgressionManager.h:847
	BrnGameState::ModeManager * mpModeManager;

	// BrnProgressionManager.h:848
	BrnGameState::TrainingManager * mpTrainingManager;

	// BrnProgressionManager.h:849
	BrnGameState::StuntManager * mpStuntManager;

	// BrnProgressionManager.h:851
	const BrnResource::VehicleList * mpVehicleList;

	// BrnProgressionManager.h:853
	BrnWorld::EDistrict meLastPlayerDistrict;

	// BrnProgressionManager.h:855
	int32_t miNumberOfParCrashRoadRulesRuledByPlayer;

	// BrnProgressionManager.h:856
	int32_t miNumberOfParTimeRoadRulesRuledByPlayer;

	// BrnProgressionManager.h:857
	int32_t miNumberOfNumberOfCompleteRoadRulesRuledByPlayer;

	// BrnProgressionManager.h:859
	int32_t miMaxCarCount;

	// BrnProgressionManager.h:862
	CgsID mNewlyUnlockedCarID;

	// BrnProgressionManager.h:863
	BrnResource::ECarType meLeastUsedCarType;

	// BrnProgressionManager.h:865
	int8_t mi8CurrentProgressionRank;

	// BrnProgressionManager.h:866
	int8_t mi8HackEventRankNumber;

	// BrnProgressionManager.h:867
	bool mbHackEventNumberActive;

	// BrnProgressionManager.h:868
	bool mbForceAutoSaveForOneHundredPercent;

	// BrnProgressionManager.h:870
	bool mbHasJustRankedUp;

	// BrnProgressionManager.h:872
	bool mbUpdateRivals;

	// BrnProgressionManager.h:873
	bool mbReturnRivals;

	// BrnProgressionManager.h:875
	bool mbPlayerMedalsUpdateRequired;

	// BrnProgressionManager.h:876
	bool mbPlayerJustWonATrophyUpdateRequired;

	// BrnProgressionManager.h:879
	bool mbCheckForAllEventTypeComplete;

	// BrnProgressionManager.h:880
	bool mbNeedCheckForAllWinTypes;

	// BrnProgressionManager.h:881
	BrnProgression::RaceEventData::EModeType meModeToCheckForAllWinTypes;

	// BrnProgressionManager.h:882
	float32_t mfTimeTillAllEventTypeCompleteHudMessage;

	// BrnProgressionManager.h:885
	bool mbNeedToShowAllRivalsBeatenMessage;

	// BrnProgressionManager.h:886
	bool mbShowShutDownAllIfNeeded;

	// BrnProgressionManager.h:887
	float32_t mfTimeTillShowAllRivalsBeatenMessage;

	// BrnProgressionManager.h:890
	bool mbDriveThruDataDirtyFlag;

	// BrnProgressionManager.h:893
	int32_t miPreWorldUpdate;

	// BrnProgressionManager.h:894
	int32_t miPostWorldUpdate;

	// BrnProgressionManager.h:895
	int32_t miInterestManagerUpdate;

	// BrnProgressionManager.h:896
	int32_t miSendRivalaryUpdateMessage;

public:
	// BrnProgressionManager.h:133
	void Construct(BrnGameState::CarSelectManager *, StreetManager *, BrnGameState::TrainingManager *, BrnGameState::StuntManager *);

	// BrnProgressionManager.h:142
	bool Prepare(BrnGameState::GameStateModuleIO::OutputBuffer *, BrnGameState::ModeManager *, CgsModule::EventReceiverQueue<3072,16> *, const TriggerData *, StuntModeScoring::AchievementManager *);

	// BrnProgressionManager.h:146
	bool Release();

	// BrnProgressionManager.h:150
	void Destruct();

	// BrnProgressionManager.h:160
	void PreWorldUpdate(float32_t, float32_t, BrnGameState::GameStateModuleIO::OutputBuffer *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnUpdateSet, bool);

	// BrnProgressionManager.h:166
	void PostWorldUpdate(float32_t, bool);

	// BrnProgressionManager.h:170
	const Rival * GetGiftCarId(BrnResource::ECarType);

	// BrnProgressionManager.h:175
	CarData * AddCar(CgsID, BrnProgression::CarData::UnlockType);

	// BrnProgressionManager.h:178
	const BrnResource::VehicleList * GetVehicleList() const;

	// BrnProgressionManager.h:181
	void SetCheckForAllEventTypeComplete();

	// BrnProgressionManager.h:184
	void ShowShutDownAllIfNeeded();

	// BrnProgressionManager.h:187
	void UnlockGiftCar();

	// BrnProgressionManager.h:190
	bool PlayerHasFinishedLastRank() const;

	// BrnProgressionManager.h:193
	int8_t GetProgressionRank() const;

	// BrnProgressionManager.h:196
	int8_t GetLastProgressionRank() const;

	// BrnProgressionManager.h:200
	void SetDebugEventRankNumber(int32_t);

	// BrnProgressionManager.h:204
	int8_t GetProgressionRankForGameMode(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:209
	int32_t GetRankThresholdForEvent(int32_t, BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:212
	float32_t GetProgressionRankNormalised() const;

	// BrnProgressionManager.h:216
	float32_t GetProgressionRankForGameModeNormalised(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:221
	int32_t GetStuntRunScoreTarget(const GameModeParams *, const StartGameModeParams *) const;

	// BrnProgressionManager.h:229
	uint32_t GetRacesAtLandmark(Race *, uint32_t, LandmarkIndex, bool) const;

	// BrnProgressionManager.h:233
	int32_t GetCustomRaceCountAtLandmark(LandmarkIndex) const;

	// BrnProgressionManager.h:238
	bool LandmarkHasAvailableRaces(LandmarkIndex) const;

	// BrnProgressionManager.h:244
	void OnPlayerCarChange(CgsID, CgsID, bool);

	// BrnProgressionManager.h:247
	void OnLoadProfile();

	// BrnProgressionManager.h:254
	void OnTakedownTo(InputBuffer::GameActionQueue *, BrnGameState::ETakedownType, CgsID, bool);

	// BrnProgressionManager.h:259
	void OnTakedownFrom(BrnGameState::ETakedownType, CgsID);

	// BrnProgressionManager.h:264
	void GetDerivedPatternVehicleCollection(CgsID, DerivedCarArray &);

	// BrnProgressionManager.h:269
	void GetDerivedColourVehicleCollection(CgsID, DerivedCarArray &);

	// BrnProgressionManager.h:275
	void OnDriveThru(CgsID, BrnTrigger::GenericRegion::Type, InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:279
	void SendGameCompletionResults(InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:286
	void OnEventFinishUpdateProfile(InputBuffer::GameActionQueue *, uint32_t, ShowModeResultsAction *, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProgressionManager.h:290
	void ApplyVehicleList(const BrnResource::VehicleList *);

	// BrnProgressionManager.h:295
	void CheckForAllModeTypeCompletion(InputBuffer::GameActionQueue *, BrnProgression::RaceEventData::EModeType);

	// BrnProgressionManager.h:299
	uint32_t GetEventCountForType(BrnProgression::RaceEventData::EModeType);

	// BrnProgressionManager.h:304
	void OnFaceOffWon(CgsID, InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:308
	void OnTrophyUnlock(BrnProgression::TrophyUnlockData::UnlockType);

	// BrnProgressionManager.h:311
	void CheckForSpecialCarUnlocks();

	// BrnProgressionManager.h:315
	void UnlockTrophyForEventTypeAllCompleted(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProgressionManager.h:319
	void UnlockCar(CgsID);

	// BrnProgressionManager.h:324
	bool UnlockCarFromTrophy(CgsID, BrnProgression::TrophyUnlockData::UnlockType);

	// BrnProgressionManager.h:329
	void OnPursuitWon(CgsID, InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:334
	void DefeatRivalAndUnlockCar(int32_t, BrnProgression::EUnlockSequenceType);

	// BrnProgressionManager.h:338
	bool IsAtFaceOffLevel(CgsID);

	// BrnProgressionManager.h:341
	void CheckForAllRivalsUnlocked();

	// BrnProgressionManager.h:345
	bool IsAtRoadRageLevel(CgsID);

	// BrnProgressionManager.h:349
	bool IsAtPursuitLevel(CgsID);

	// BrnProgressionManager.h:353
	bool HasBeenHit(CgsID);

	// BrnProgressionManager.h:357
	BrnProgression::EOfflineRivalryStatus GetRivalryStatus(CgsID);

	// BrnProgressionManager.h:361
	void ResetProfile();

	// BrnProgressionManager.h:364
	const BrnProgression::Profile * GetProfile() const;

	// BrnProgressionManager.h:367
	Profile * GetProfile();

	// BrnProgressionManager.h:370
	const CarData * GetCurrentCarData() const;

	// BrnProgressionManager.h:373
	CarData * GetCurrentCarData();

	// BrnProgressionManager.h:377
	const Race * FindPresetRace(CgsID);

	// BrnProgressionManager.h:381
	bool IsCarUnlocked(CgsID) const;

	// BrnProgressionManager.h:385
	uint16_t FindLandmarkAISectionIndex(CgsID) const;

	// BrnProgressionManager.h:389
	uint16_t FindAISectionIndexForPosition(Vector3) const;

	// BrnProgressionManager.h:394
	uint16_t FindAISectionIndexForPosition(Vector3, AISectionPointMap *) const;

	// BrnProgressionManager.h:398
	AISectionPointMap * BuildAISectionPointMap(LinearMalloc *) const;

	// BrnProgressionManager.h:403
	void OnPropHit(uint16_t, uint16_t);

	// BrnProgressionManager.h:407
	void RequestUpdateRivals();

	// BrnProgressionManager.h:411
	void RequestReturnRivals();

	// BrnProgressionManager.h:415
	const BrnProgression::ProgressionData * GetProgressionData() const;

	// BrnProgressionManager.h:418
	int32_t GetMaxCarCount();

	// BrnProgressionManager.h:424
	void AddStuntElement(BrnGameState::StuntElementType, CgsID, BrnWorld::ECounty);

	// BrnProgressionManager.h:428
	void AddStunt(CgsID);

	// BrnProgressionManager.h:432
	int32_t GetStuntElementCount(BrnGameState::StuntElementType) const;

	// BrnProgressionManager.h:437
	int32_t GetStuntElementCountByCounty(BrnGameState::StuntElementType, BrnWorld::ECounty) const;

	// BrnProgressionManager.h:440
	int32_t GetStuntCount() const;

	// BrnProgressionManager.h:445
	bool IsStuntElementDone(BrnGameState::StuntElementType, CgsID) const;

	// BrnProgressionManager.h:449
	bool IsStuntDone(CgsID) const;

	// BrnProgressionManager.h:454
	void GetGameStats(GameStats *, BrnGameState::StuntManager *) const;

	// BrnProgressionManager.h:457
	void OnPowerParkResult(int32_t, bool);

	// BrnProgressionManager.h:460
	void OnMugshotSent();

	// BrnProgressionManager.h:465
	void OnOnlineRaceComplete(int32_t, bool);

	// BrnProgressionManager.h:469
	void SetDriveThrusDirtyFlag();

	// BrnProgressionManager.h:473
	bool TestAndResetDriveThrusDirtyFlag();

	// BrnProgressionManager.h:478
	void SetRoadRuleNetworkHighScores(ChallengeHighScoreEntry *);

	// BrnProgressionManager.h:483
	void SetRoadRuleChallengeData(ChallengePlayerScoreEntry *);

	// BrnProgressionManager.h:486
	void RequestMedalUpdate();

	// BrnProgressionManager.h:494
	int32_t AddMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, MugshotInfo::UniquePlayerID, DateAndTime, WorldRegion);

	// BrnProgressionManager.h:500
	int32_t DeleteMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProgressionManager.h:508
	int32_t RecaptureMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t, DateAndTime, WorldRegion);

	// BrnProgressionManager.h:514
	bool LockOrUnlockMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProgressionManager.h:519
	int32_t GetNumMugshots(BrnGameState::GameStateModuleIO::EImageGalleryType);

	// BrnProgressionManager.h:525
	MugshotInfo * GetMugshotInfo(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProgressionManager.h:531
	int32_t FindMugshotInfoByUniquePlayerID(BrnGameState::GameStateModuleIO::EImageGalleryType, MugshotInfo::UniquePlayerID);

	// BrnProgressionManager.h:536
	bool HasPlayerCompletedFreeburnChallenge(CgsID);

	// BrnProgressionManager.h:541
	void CompleteFreeburnChallenge(CgsID);

	// BrnProgressionManager.h:546
	void CompleteFreeburnChallengeBlock(int32_t);

	// BrnProgressionManager.h:550
	uint32_t HACK_SetupRaces(Race *);

	// BrnProgressionManager.h:556
	void HACK_SetupRaceWithLandMarks(Race &, CgsID *, uint32_t);

	// BrnProgressionManager.h:559
	uint32_t GetNumberOfParCrashRoadRulesRuledByPlayer() const;

	// BrnProgressionManager.h:563
	void SetNumberOfParCrashRoadRulesRuledByPlayer(uint32_t);

	// BrnProgressionManager.h:566
	uint32_t GetNumberOfParTimeRoadRulesRuledByPlayer() const;

	// BrnProgressionManager.h:570
	void SetNumberOfParTimeRoadRulesRuledByPlayer(uint32_t);

	// BrnProgressionManager.h:573
	uint32_t GetNumberOfCompleteRoadRulesRuledByPlayer();

	// BrnProgressionManager.h:577
	void SetNumberOfCompleteRoadRulesRuledByPlayer(uint32_t);

	// BrnProgressionManager.h:580
	CgsID GetNewlyUnlockedCarID();

	// BrnProgressionManager.h:583
	bool HasJustRankedUp();

	// BrnProgressionManager.h:586
	void ClearRankUpCache();

	// BrnProgressionManager.h:589
	uint32_t GetTotalWinsForNextRank() const;

	// BrnProgressionManager.h:592
	BrnProgression::RaceEventData::EModeType GetGameModeForEvent(const BrnProgression::RaceEventData *) const;

	// BrnProgressionManager.h:595
	BrnProgression::RaceEventData::EOnlineModeType GetOnlineGameModeForEvent(const BrnProgression::RaceEventData *) const;

	// BrnProgressionManager.h:599
	BrnGameState::GameStateModuleIO::EGameModeType GetEventModeTypeFromRaceEventData(BrnProgression::RaceEventData::EModeType);

	// BrnProgressionManager.h:603
	BrnGameState::GameStateModuleIO::EGameModeType GetOnlineEventModeTypeFromRaceEventData(BrnProgression::RaceEventData::EOnlineModeType);

	// BrnProgressionManager.h:608
	uint32_t GetEventTypeUniqueWinCount(BrnProgression::RaceEventData::EModeType, BrnProgression::ProfileEvent::Flags);

	// BrnProgressionManager.h:612
	bool DoesGameModeRankUpIndividually(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:616
	bool HasEventBeenWonPreviously(uint32_t);

	// BrnProgressionManager.h:620
	void RepairUnlockedVehicle(CgsID);

	// BrnProgressionManager.h:624
	float32_t GetPlayerBaseDeformAmount(CgsID) const;

	// BrnProgressionManager.h:630
	void GetCarColourAndPalette(CgsID, uint32_t &, uint32_t &) const;

	// BrnProgressionManager.h:634
	void UnlockDerivedCarCollection(const DerivedCarArray &);

	// BrnProgressionManager.h:637
	void FixGameModeRanks();

	// BrnProgressionManager.h:641
	void FixRankForSingleEvent(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProgressionManager.h:644
	int32_t GetTrueNumberOfRivals() const;

	// BrnProgressionManager.h:647
	StuntModeScoring::AchievementManager * GetAchievementManager();

	// BrnProgressionManager.h:650
	StreetManager * GetStreetManager() const;

	// BrnProgressionManager.h:653
	float32_t GetDistanceDrivenInCurrentCar();

	// BrnProgressionManager.h:657
	bool AreRoadRulesAvailable() const;

private:
	// BrnProgressionManager.h:665
	float32_t GetProgressionRankNormalised(float32_t) const;

	// BrnProgressionManager.h:669
	int8_t CalculateRankFromMedalTotal(uint32_t) const;

	// BrnProgressionManager.h:674
	void UnlockToProgressionRank(int8_t, InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:678
	void AddEventTypeToEventTotals(const EventJunction *);

	// BrnProgressionManager.h:681
	int32_t GetNumberOfBeatenRivals() const;

	// BrnProgressionManager.h:685
	void UnlockSpecialCars(BrnResource::VehicleListEntry::ELiveryType);

	// BrnProgressionManager.h:688
	void ClearMedalsOnRankUp();

	// BrnProgressionManager.h:691
	void SetupRoamingSections();

	// BrnProgressionManager.h:694
	float32_t ComputeCompletionPercentage() const;

	// BrnProgressionManager.h:699
	float32_t GetPS3AwardScoresPercentage() const;

	// BrnProgressionManager.h:704
	void ComputeLandmarkAISectionIndices();

	// BrnProgressionManager.h:707
	float32_t GetPercentageOfEventsCompleted() const;

	// BrnProgressionManager.h:712
	bool LoadProgressionData(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnProgressionManager.h:717
	bool LoadAIData(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnProgressionManager.h:721
	void UpdateRivals(InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:725
	void ProcessLoadedPresetRaces();

	// BrnProgressionManager.h:729
	void UpdatePlayerStatsLevels(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnProgressionManager.h:733
	void SendTrophyUnlockUpdate(InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:737
	CgsID GetGifCarId(BrnResource::ECarType);

	// BrnProgressionManager.h:741
	void UpdatePlayerMedals(InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:745
	CgsID UnlockRivals(InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:750
	void RaceToSavedRace(const Race *, SavedRace *) const;

	// BrnProgressionManager.h:755
	void SavedRaceToRace(const SavedRace *, Race *) const;

	// BrnProgressionManager.h:762
	void SendRivalryUpdateMessage(InputBuffer::GameActionQueue *, BrnProgression::EOfflineRivalryStatus, RivalData *, CgsID);

	// BrnProgressionManager.h:767
	void AddDistanceDriven(float32_t, bool);

	// BrnProgressionManager.h:773
	void AddRivalToWorld(const Rival *, int32_t, InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:776
	void UnlockDefaultPlayerCars();

	// BrnProgressionManager.h:779
	void UnlockAllJunkyards();

	// BrnProgressionManager.h:783
	void DEBUG_ClearMedals();

}

// BrnProgressionManager.h:125
extern const float32_t KF_PROGRESSION_UNLOCK_RIVAL_DEFORM_AMOUNT;

// BrnProgressionManager.h:661
extern const float32_t KF_RIVALS_PROGRESSION_WEIGHT;

// BrnInterestManager.h:24
namespace BrnProgression {
	// Declaration
	struct ProgressionManager {
		// BrnProgressionManager.h:786
		enum LoadStage {
			E_LOAD_NOT_STARTED = 0,
			E_LOAD_REQUESTED = 1,
			E_ACQUIRE_NOT_STARTED = 2,
			E_ACQUIRE_REQUESTED = 3,
			E_LOAD_COMPLETE = 4,
		}

		// BrnProgressionManager.h:796
		enum AILoadStage {
			E_AI_DATA_LOAD_NOT_STARTED = 0,
			E_AI_DATA_LOAD_REQUESTED = 1,
			E_AI_DATA_ACQUIRE_NOT_STARTED = 2,
			E_AI_DATA_ACQUIRE_REQUESTED = 3,
			E_AI_DATA_LOAD_COMPLETE = 4,
		}

		// BrnProgressionManager.h:807
		struct LandmarkAISectionIndexPair {
			// BrnProgressionManager.h:809
			uint32_t mId;

			// BrnProgressionManager.h:810
			uint16_t muAISectionIndex;

		}

	}

	// BrnProgressionManager.h:79
	using BrnGameState::GameStateModuleIO;

	// BrnProgressionManager.h:81
	enum EOfflineRivalryStatus {
		E_OFFLINE_RIVALRY_STATUS_UNKNOWN = 0,
		E_OFFLINE_RIVALRY_STATUS_NORMAL = 1,
		E_OFFLINE_RIVALRY_STATUS_RIVAL = 2,
		E_OFFLINE_RIVALRY_STATUS_TARGET = 3,
		E_OFFLINE_RIVALRY_STATUS_WRECKED = 4,
		E_OFFLINE_RIVALRY_STATUS_COUNT = 5,
	}

	// BrnProgressionManager.h:92
	enum EUnlockSequenceType {
		E_UNLOCK_SEQUENCE_TYPE_DEFAULT = 0,
		E_UNLOCK_SEQUENCE_TYPE_NONE = 1,
		E_UNLOCK_SEQUENCE_TYPE_COUNT = 2,
	}

	// BrnProgressionManager.h:101
	const CgsDev::PerfMonCpuPage KE_GAMESTATE_PERFMON_PAGE;

	// BrnProgressionManager.h:103
	const int32_t KI_MAX_TROPHY_UNLOCK_QUEUE = 12;

}

// BrnProgressionManager.h:118
struct BrnProgression::ProgressionManager {
	// BrnProgressionManager.h:125
	extern const float32_t KF_PROGRESSION_UNLOCK_RIVAL_DEFORM_AMOUNT;

private:
	// BrnProgressionManager.h:661
	extern const float32_t KF_RIVALS_PROGRESSION_WEIGHT;

	// Unknown accessibility
	// BrnGameStateTypes.h:202
	typedef Array<std::uint16_t,8u> RoamingSections;

	// BrnProgressionManager.h:822
	ProgressionManager::RoamingSections[18] maRoamingSections;

	// BrnProgressionManager.h:823
	Profile mProfile;

	// BrnProgressionManager.h:824
	Array<BrnProgression::Race,64u> maPresetRaces;

	// BrnProgressionManager.h:825
	BrnProgression::ProgressionManager::LandmarkAISectionIndexPair[512] maLandmarkAISectionIndices;

	// BrnProgressionManager.h:827
	BrnProgression::ProgressionDebugComponent mDebugComponent;

	// BrnProgressionManager.h:828
	bool mbSendAchievementAwardedEvent_DEBUG;

	// BrnProgressionManager.h:829
	int32_t miAchievementToAward_DEBUG;

	// BrnProgressionManager.h:831
	Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u> mQueueOfTrophyCarUnLocks;

	// BrnProgressionManager.h:832
	CarData * mpCurrentCarData;

	// BrnProgressionManager.h:833
	LiveryData * mpCurrentLiveryData;

	// BrnProgressionManager.h:834
	uint32_t muNumPresetRaces;

	// BrnProgressionManager.h:835
	BrnProgression::ProgressionManager::LoadStage meLoadStage;

	// BrnProgressionManager.h:836
	BrnProgression::ProgressionManager::AILoadStage meAILoadStage;

	// BrnProgressionManager.h:837
	ResourcePtr<BrnProgression::ProgressionData> mpProgressionData;

	// BrnProgressionManager.h:838
	ResourcePtr<BrnAI::AISectionsData> mpAISectionData;

	// BrnProgressionManager.h:839
	const TriggerData * mpTriggerData;

	// BrnProgressionManager.h:841
	int32_t miLastUpdatedRival;

	// BrnProgressionManager.h:842
	int32_t miLastReturnedRival;

	// BrnProgressionManager.h:844
	StreetManager * mpStreetManager;

	// BrnProgressionManager.h:845
	BrnGameState::CarSelectManager * mpCarSelectManager;

	// BrnProgressionManager.h:846
	StuntModeScoring::AchievementManager * mpAchievementManager;

	// BrnProgressionManager.h:847
	BrnGameState::ModeManager * mpModeManager;

	// BrnProgressionManager.h:848
	BrnGameState::TrainingManager * mpTrainingManager;

	// BrnProgressionManager.h:849
	BrnGameState::StuntManager * mpStuntManager;

	// BrnProgressionManager.h:851
	const VehicleList * mpVehicleList;

	// BrnProgressionManager.h:853
	BrnWorld::EDistrict meLastPlayerDistrict;

	// BrnProgressionManager.h:855
	int32_t miNumberOfParCrashRoadRulesRuledByPlayer;

	// BrnProgressionManager.h:856
	int32_t miNumberOfParTimeRoadRulesRuledByPlayer;

	// BrnProgressionManager.h:857
	int32_t miNumberOfNumberOfCompleteRoadRulesRuledByPlayer;

	// BrnProgressionManager.h:859
	int32_t miMaxCarCount;

	// BrnProgressionManager.h:862
	CgsID mNewlyUnlockedCarID;

	// BrnProgressionManager.h:863
	BrnResource::ECarType meLeastUsedCarType;

	// BrnProgressionManager.h:865
	int8_t mi8CurrentProgressionRank;

	// BrnProgressionManager.h:866
	int8_t mi8HackEventRankNumber;

	// BrnProgressionManager.h:867
	bool mbHackEventNumberActive;

	// BrnProgressionManager.h:868
	bool mbForceAutoSaveForOneHundredPercent;

	// BrnProgressionManager.h:870
	bool mbHasJustRankedUp;

	// BrnProgressionManager.h:872
	bool mbUpdateRivals;

	// BrnProgressionManager.h:873
	bool mbReturnRivals;

	// BrnProgressionManager.h:875
	bool mbPlayerMedalsUpdateRequired;

	// BrnProgressionManager.h:876
	bool mbPlayerJustWonATrophyUpdateRequired;

	// BrnProgressionManager.h:879
	bool mbCheckForAllEventTypeComplete;

	// BrnProgressionManager.h:880
	bool mbNeedCheckForAllWinTypes;

	// BrnProgressionManager.h:881
	BrnProgression::RaceEventData::EModeType meModeToCheckForAllWinTypes;

	// BrnProgressionManager.h:882
	float32_t mfTimeTillAllEventTypeCompleteHudMessage;

	// BrnProgressionManager.h:885
	bool mbNeedToShowAllRivalsBeatenMessage;

	// BrnProgressionManager.h:886
	bool mbShowShutDownAllIfNeeded;

	// BrnProgressionManager.h:887
	float32_t mfTimeTillShowAllRivalsBeatenMessage;

	// BrnProgressionManager.h:890
	bool mbDriveThruDataDirtyFlag;

	// BrnProgressionManager.h:893
	int32_t miPreWorldUpdate;

	// BrnProgressionManager.h:894
	int32_t miPostWorldUpdate;

	// BrnProgressionManager.h:895
	int32_t miInterestManagerUpdate;

	// BrnProgressionManager.h:896
	int32_t miSendRivalaryUpdateMessage;

public:
	// BrnProgressionManager.h:133
	void Construct(BrnGameState::CarSelectManager *, StreetManager *, BrnGameState::TrainingManager *, BrnGameState::StuntManager *);

	// BrnProgressionManager.h:142
	bool Prepare(BrnGameState::GameStateModuleIO::OutputBuffer *, BrnGameState::ModeManager *, CgsModule::EventReceiverQueue<3072,16> *, const TriggerData *, StuntModeScoring::AchievementManager *);

	// BrnProgressionManager.h:146
	bool Release();

	// BrnProgressionManager.h:150
	void Destruct();

	// BrnProgressionManager.h:160
	void PreWorldUpdate(float32_t, float32_t, BrnGameState::GameStateModuleIO::OutputBuffer *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnUpdateSet, bool);

	// BrnProgressionManager.h:166
	void PostWorldUpdate(float32_t, bool);

	// BrnProgressionManager.h:170
	const Rival * GetGiftCarId(BrnResource::ECarType);

	// BrnProgressionManager.h:175
	CarData * AddCar(CgsID, BrnProgression::CarData::UnlockType);

	// BrnProgressionManager.h:178
	const VehicleList * GetVehicleList() const;

	// BrnProgressionManager.h:181
	void SetCheckForAllEventTypeComplete();

	// BrnProgressionManager.h:184
	void ShowShutDownAllIfNeeded();

	// BrnProgressionManager.h:187
	void UnlockGiftCar();

	// BrnProgressionManager.h:190
	bool PlayerHasFinishedLastRank() const;

	// BrnProgressionManager.h:193
	int8_t GetProgressionRank() const;

	// BrnProgressionManager.h:196
	int8_t GetLastProgressionRank() const;

	// BrnProgressionManager.h:200
	void SetDebugEventRankNumber(int32_t);

	// BrnProgressionManager.h:204
	int8_t GetProgressionRankForGameMode(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:209
	int32_t GetRankThresholdForEvent(int32_t, BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:212
	float32_t GetProgressionRankNormalised() const;

	// BrnProgressionManager.h:216
	float32_t GetProgressionRankForGameModeNormalised(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:221
	int32_t GetStuntRunScoreTarget(const GameModeParams *, const StartGameModeParams *) const;

	// BrnProgressionManager.h:229
	uint32_t GetRacesAtLandmark(Race *, uint32_t, LandmarkIndex, bool) const;

	// BrnProgressionManager.h:233
	int32_t GetCustomRaceCountAtLandmark(LandmarkIndex) const;

	// BrnProgressionManager.h:238
	bool LandmarkHasAvailableRaces(LandmarkIndex) const;

	// BrnProgressionManager.h:244
	void OnPlayerCarChange(CgsID, CgsID, bool);

	// BrnProgressionManager.h:247
	void OnLoadProfile();

	// BrnProgressionManager.h:254
	void OnTakedownTo(InputBuffer::GameActionQueue *, BrnGameState::ETakedownType, CgsID, bool);

	// BrnProgressionManager.h:259
	void OnTakedownFrom(BrnGameState::ETakedownType, CgsID);

	// BrnProgressionManager.h:264
	void GetDerivedPatternVehicleCollection(CgsID, DerivedCarArray &);

	// BrnProgressionManager.h:269
	void GetDerivedColourVehicleCollection(CgsID, DerivedCarArray &);

	// BrnProgressionManager.h:275
	void OnDriveThru(CgsID, BrnTrigger::GenericRegion::Type, InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:279
	void SendGameCompletionResults(InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:286
	void OnEventFinishUpdateProfile(InputBuffer::GameActionQueue *, uint32_t, ShowModeResultsAction *, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProgressionManager.h:290
	void ApplyVehicleList(const VehicleList *);

	// BrnProgressionManager.h:295
	void CheckForAllModeTypeCompletion(InputBuffer::GameActionQueue *, BrnProgression::RaceEventData::EModeType);

	// BrnProgressionManager.h:299
	uint32_t GetEventCountForType(BrnProgression::RaceEventData::EModeType);

	// BrnProgressionManager.h:304
	void OnFaceOffWon(CgsID, InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:308
	void OnTrophyUnlock(BrnProgression::TrophyUnlockData::UnlockType);

	// BrnProgressionManager.h:311
	void CheckForSpecialCarUnlocks();

	// BrnProgressionManager.h:315
	void UnlockTrophyForEventTypeAllCompleted(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProgressionManager.h:319
	void UnlockCar(CgsID);

	// BrnProgressionManager.h:324
	bool UnlockCarFromTrophy(CgsID, BrnProgression::TrophyUnlockData::UnlockType);

	// BrnProgressionManager.h:329
	void OnPursuitWon(CgsID, InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:334
	void DefeatRivalAndUnlockCar(int32_t, BrnProgression::EUnlockSequenceType);

	// BrnProgressionManager.h:338
	bool IsAtFaceOffLevel(CgsID);

	// BrnProgressionManager.h:341
	void CheckForAllRivalsUnlocked();

	// BrnProgressionManager.h:345
	bool IsAtRoadRageLevel(CgsID);

	// BrnProgressionManager.h:349
	bool IsAtPursuitLevel(CgsID);

	// BrnProgressionManager.h:353
	bool HasBeenHit(CgsID);

	// BrnProgressionManager.h:357
	BrnProgression::EOfflineRivalryStatus GetRivalryStatus(CgsID);

	// BrnProgressionManager.h:361
	void ResetProfile();

	// BrnProgressionManager.h:364
	const BrnProgression::Profile * GetProfile() const;

	// BrnProgressionManager.h:367
	Profile * GetProfile();

	// BrnProgressionManager.h:370
	const CarData * GetCurrentCarData() const;

	// BrnProgressionManager.h:373
	CarData * GetCurrentCarData();

	// BrnProgressionManager.h:377
	const Race * FindPresetRace(CgsID);

	// BrnProgressionManager.h:381
	bool IsCarUnlocked(CgsID) const;

	// BrnProgressionManager.h:385
	uint16_t FindLandmarkAISectionIndex(CgsID) const;

	// BrnProgressionManager.h:389
	uint16_t FindAISectionIndexForPosition(Vector3) const;

	// BrnProgressionManager.h:394
	uint16_t FindAISectionIndexForPosition(Vector3, AISectionPointMap *) const;

	// BrnProgressionManager.h:398
	AISectionPointMap * BuildAISectionPointMap(LinearMalloc *) const;

	// BrnProgressionManager.h:403
	void OnPropHit(uint16_t, uint16_t);

	// BrnProgressionManager.h:407
	void RequestUpdateRivals();

	// BrnProgressionManager.h:411
	void RequestReturnRivals();

	// BrnProgressionManager.h:415
	const BrnProgression::ProgressionData * GetProgressionData() const;

	// BrnProgressionManager.h:418
	int32_t GetMaxCarCount();

	// BrnProgressionManager.h:424
	void AddStuntElement(BrnGameState::StuntElementType, CgsID, BrnWorld::ECounty);

	// BrnProgressionManager.h:428
	void AddStunt(CgsID);

	// BrnProgressionManager.h:432
	int32_t GetStuntElementCount(BrnGameState::StuntElementType) const;

	// BrnProgressionManager.h:437
	int32_t GetStuntElementCountByCounty(BrnGameState::StuntElementType, BrnWorld::ECounty) const;

	// BrnProgressionManager.h:440
	int32_t GetStuntCount() const;

	// BrnProgressionManager.h:445
	bool IsStuntElementDone(BrnGameState::StuntElementType, CgsID) const;

	// BrnProgressionManager.h:449
	bool IsStuntDone(CgsID) const;

	// BrnProgressionManager.h:454
	void GetGameStats(GameStats *, BrnGameState::StuntManager *) const;

	// BrnProgressionManager.h:457
	void OnPowerParkResult(int32_t, bool);

	// BrnProgressionManager.h:460
	void OnMugshotSent();

	// BrnProgressionManager.h:465
	void OnOnlineRaceComplete(int32_t, bool);

	// BrnProgressionManager.h:469
	void SetDriveThrusDirtyFlag();

	// BrnProgressionManager.h:473
	bool TestAndResetDriveThrusDirtyFlag();

	// BrnProgressionManager.h:478
	void SetRoadRuleNetworkHighScores(ChallengeHighScoreEntry *);

	// BrnProgressionManager.h:483
	void SetRoadRuleChallengeData(ChallengePlayerScoreEntry *);

	// BrnProgressionManager.h:486
	void RequestMedalUpdate();

	// BrnProgressionManager.h:494
	int32_t AddMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, MugshotInfo::UniquePlayerID, DateAndTime, WorldRegion);

	// BrnProgressionManager.h:500
	int32_t DeleteMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProgressionManager.h:508
	int32_t RecaptureMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t, DateAndTime, WorldRegion);

	// BrnProgressionManager.h:514
	bool LockOrUnlockMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProgressionManager.h:519
	int32_t GetNumMugshots(BrnGameState::GameStateModuleIO::EImageGalleryType);

	// BrnProgressionManager.h:525
	MugshotInfo * GetMugshotInfo(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProgressionManager.h:531
	int32_t FindMugshotInfoByUniquePlayerID(BrnGameState::GameStateModuleIO::EImageGalleryType, MugshotInfo::UniquePlayerID);

	// BrnProgressionManager.h:536
	bool HasPlayerCompletedFreeburnChallenge(CgsID);

	// BrnProgressionManager.h:541
	void CompleteFreeburnChallenge(CgsID);

	// BrnProgressionManager.h:546
	void CompleteFreeburnChallengeBlock(int32_t);

	// BrnProgressionManager.h:550
	uint32_t HACK_SetupRaces(Race *);

	// BrnProgressionManager.h:556
	void HACK_SetupRaceWithLandMarks(Race &, CgsID *, uint32_t);

	// BrnProgressionManager.h:559
	uint32_t GetNumberOfParCrashRoadRulesRuledByPlayer() const;

	// BrnProgressionManager.h:563
	void SetNumberOfParCrashRoadRulesRuledByPlayer(uint32_t);

	// BrnProgressionManager.h:566
	uint32_t GetNumberOfParTimeRoadRulesRuledByPlayer() const;

	// BrnProgressionManager.h:570
	void SetNumberOfParTimeRoadRulesRuledByPlayer(uint32_t);

	// BrnProgressionManager.h:573
	uint32_t GetNumberOfCompleteRoadRulesRuledByPlayer();

	// BrnProgressionManager.h:577
	void SetNumberOfCompleteRoadRulesRuledByPlayer(uint32_t);

	// BrnProgressionManager.h:580
	CgsID GetNewlyUnlockedCarID();

	// BrnProgressionManager.h:583
	bool HasJustRankedUp();

	// BrnProgressionManager.h:586
	void ClearRankUpCache();

	// BrnProgressionManager.h:589
	uint32_t GetTotalWinsForNextRank() const;

	// BrnProgressionManager.h:592
	BrnProgression::RaceEventData::EModeType GetGameModeForEvent(const BrnProgression::RaceEventData *) const;

	// BrnProgressionManager.h:595
	BrnProgression::RaceEventData::EOnlineModeType GetOnlineGameModeForEvent(const BrnProgression::RaceEventData *) const;

	// BrnProgressionManager.h:599
	BrnGameState::GameStateModuleIO::EGameModeType GetEventModeTypeFromRaceEventData(BrnProgression::RaceEventData::EModeType);

	// BrnProgressionManager.h:603
	BrnGameState::GameStateModuleIO::EGameModeType GetOnlineEventModeTypeFromRaceEventData(BrnProgression::RaceEventData::EOnlineModeType);

	// BrnProgressionManager.h:608
	uint32_t GetEventTypeUniqueWinCount(BrnProgression::RaceEventData::EModeType, BrnProgression::ProfileEvent::Flags);

	// BrnProgressionManager.h:612
	bool DoesGameModeRankUpIndividually(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:616
	bool HasEventBeenWonPreviously(uint32_t);

	// BrnProgressionManager.h:620
	void RepairUnlockedVehicle(CgsID);

	// BrnProgressionManager.h:624
	float32_t GetPlayerBaseDeformAmount(CgsID) const;

	// BrnProgressionManager.h:630
	void GetCarColourAndPalette(CgsID, uint32_t &, uint32_t &) const;

	// BrnProgressionManager.h:634
	void UnlockDerivedCarCollection(const DerivedCarArray &);

	// BrnProgressionManager.h:637
	void FixGameModeRanks();

	// BrnProgressionManager.h:641
	void FixRankForSingleEvent(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProgressionManager.h:644
	int32_t GetTrueNumberOfRivals() const;

	// BrnProgressionManager.h:647
	StuntModeScoring::AchievementManager * GetAchievementManager();

	// BrnProgressionManager.h:650
	StreetManager * GetStreetManager() const;

	// BrnProgressionManager.h:653
	float32_t GetDistanceDrivenInCurrentCar();

	// BrnProgressionManager.h:657
	bool AreRoadRulesAvailable() const;

private:
	// BrnProgressionManager.h:665
	float32_t GetProgressionRankNormalised(float32_t) const;

	// BrnProgressionManager.h:669
	int8_t CalculateRankFromMedalTotal(uint32_t) const;

	// BrnProgressionManager.h:674
	void UnlockToProgressionRank(int8_t, InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:678
	void AddEventTypeToEventTotals(const EventJunction *);

	// BrnProgressionManager.h:681
	int32_t GetNumberOfBeatenRivals() const;

	// BrnProgressionManager.h:685
	void UnlockSpecialCars(BrnResource::VehicleListEntry::ELiveryType);

	// BrnProgressionManager.h:688
	void ClearMedalsOnRankUp();

	// BrnProgressionManager.h:691
	void SetupRoamingSections();

	// BrnProgressionManager.h:694
	float32_t ComputeCompletionPercentage() const;

	// BrnProgressionManager.h:699
	float32_t GetPS3AwardScoresPercentage() const;

	// BrnProgressionManager.h:704
	void ComputeLandmarkAISectionIndices();

	// BrnProgressionManager.h:707
	float32_t GetPercentageOfEventsCompleted() const;

	// BrnProgressionManager.h:712
	bool LoadProgressionData(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnProgressionManager.h:717
	bool LoadAIData(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnProgressionManager.h:721
	void UpdateRivals(InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:725
	void ProcessLoadedPresetRaces();

	// BrnProgressionManager.h:729
	void UpdatePlayerStatsLevels(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnProgressionManager.h:733
	void SendTrophyUnlockUpdate(InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:737
	CgsID GetGifCarId(BrnResource::ECarType);

	// BrnProgressionManager.h:741
	void UpdatePlayerMedals(InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:745
	CgsID UnlockRivals(InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:750
	void RaceToSavedRace(const Race *, SavedRace *) const;

	// BrnProgressionManager.h:755
	void SavedRaceToRace(const SavedRace *, Race *) const;

	// BrnProgressionManager.h:762
	void SendRivalryUpdateMessage(InputBuffer::GameActionQueue *, BrnProgression::EOfflineRivalryStatus, RivalData *, CgsID);

	// BrnProgressionManager.h:767
	void AddDistanceDriven(float32_t, bool);

	// BrnProgressionManager.h:773
	void AddRivalToWorld(const Rival *, int32_t, InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:776
	void UnlockDefaultPlayerCars();

	// BrnProgressionManager.h:779
	void UnlockAllJunkyards();

	// BrnProgressionManager.h:783
	void DEBUG_ClearMedals();

}

// BrnProgressionManager.h:118
struct BrnProgression::ProgressionManager {
	// BrnProgressionManager.h:125
	extern const float32_t KF_PROGRESSION_UNLOCK_RIVAL_DEFORM_AMOUNT;

private:
	// BrnProgressionManager.h:661
	extern const float32_t KF_RIVALS_PROGRESSION_WEIGHT;

	// Unknown accessibility
	// BrnGameStateTypes.h:202
	typedef Array<std::uint16_t,8u> RoamingSections;

	// BrnProgressionManager.h:822
	ProgressionManager::RoamingSections[18] maRoamingSections;

	// BrnProgressionManager.h:823
	Profile mProfile;

	// BrnProgressionManager.h:824
	Array<BrnProgression::Race,64u> maPresetRaces;

	// BrnProgressionManager.h:825
	BrnProgression::ProgressionManager::LandmarkAISectionIndexPair[512] maLandmarkAISectionIndices;

	// BrnProgressionManager.h:827
	BrnProgression::ProgressionDebugComponent mDebugComponent;

	// BrnProgressionManager.h:828
	bool mbSendAchievementAwardedEvent_DEBUG;

	// BrnProgressionManager.h:829
	int32_t miAchievementToAward_DEBUG;

	// BrnProgressionManager.h:831
	Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u> mQueueOfTrophyCarUnLocks;

	// BrnProgressionManager.h:832
	CarData * mpCurrentCarData;

	// BrnProgressionManager.h:833
	LiveryData * mpCurrentLiveryData;

	// BrnProgressionManager.h:834
	uint32_t muNumPresetRaces;

	// BrnProgressionManager.h:835
	BrnProgression::ProgressionManager::LoadStage meLoadStage;

	// BrnProgressionManager.h:836
	BrnProgression::ProgressionManager::AILoadStage meAILoadStage;

	// BrnProgressionManager.h:837
	ResourcePtr<BrnProgression::ProgressionData> mpProgressionData;

	// BrnProgressionManager.h:838
	ResourcePtr<BrnAI::AISectionsData> mpAISectionData;

	// BrnProgressionManager.h:839
	const TriggerData * mpTriggerData;

	// BrnProgressionManager.h:841
	int32_t miLastUpdatedRival;

	// BrnProgressionManager.h:842
	int32_t miLastReturnedRival;

	// BrnProgressionManager.h:844
	StreetManager * mpStreetManager;

	// BrnProgressionManager.h:845
	BrnGameState::CarSelectManager * mpCarSelectManager;

	// BrnProgressionManager.h:846
	StuntModeScoring::AchievementManager * mpAchievementManager;

	// BrnProgressionManager.h:847
	BrnGameState::ModeManager * mpModeManager;

	// BrnProgressionManager.h:848
	BrnGameState::TrainingManager * mpTrainingManager;

	// BrnProgressionManager.h:849
	BrnGameState::StuntManager * mpStuntManager;

	// BrnProgressionManager.h:851
	const VehicleList * mpVehicleList;

	// BrnProgressionManager.h:853
	BrnWorld::EDistrict meLastPlayerDistrict;

	// BrnProgressionManager.h:855
	int32_t miNumberOfParCrashRoadRulesRuledByPlayer;

	// BrnProgressionManager.h:856
	int32_t miNumberOfParTimeRoadRulesRuledByPlayer;

	// BrnProgressionManager.h:857
	int32_t miNumberOfNumberOfCompleteRoadRulesRuledByPlayer;

	// BrnProgressionManager.h:859
	int32_t miMaxCarCount;

	// BrnProgressionManager.h:862
	CgsID mNewlyUnlockedCarID;

	// BrnProgressionManager.h:863
	BrnResource::ECarType meLeastUsedCarType;

	// BrnProgressionManager.h:865
	int8_t mi8CurrentProgressionRank;

	// BrnProgressionManager.h:866
	int8_t mi8HackEventRankNumber;

	// BrnProgressionManager.h:867
	bool mbHackEventNumberActive;

	// BrnProgressionManager.h:868
	bool mbForceAutoSaveForOneHundredPercent;

	// BrnProgressionManager.h:870
	bool mbHasJustRankedUp;

	// BrnProgressionManager.h:872
	bool mbUpdateRivals;

	// BrnProgressionManager.h:873
	bool mbReturnRivals;

	// BrnProgressionManager.h:875
	bool mbPlayerMedalsUpdateRequired;

	// BrnProgressionManager.h:876
	bool mbPlayerJustWonATrophyUpdateRequired;

	// BrnProgressionManager.h:879
	bool mbCheckForAllEventTypeComplete;

	// BrnProgressionManager.h:880
	bool mbNeedCheckForAllWinTypes;

	// BrnProgressionManager.h:881
	BrnProgression::RaceEventData::EModeType meModeToCheckForAllWinTypes;

	// BrnProgressionManager.h:882
	float32_t mfTimeTillAllEventTypeCompleteHudMessage;

	// BrnProgressionManager.h:885
	bool mbNeedToShowAllRivalsBeatenMessage;

	// BrnProgressionManager.h:886
	bool mbShowShutDownAllIfNeeded;

	// BrnProgressionManager.h:887
	float32_t mfTimeTillShowAllRivalsBeatenMessage;

	// BrnProgressionManager.h:890
	bool mbDriveThruDataDirtyFlag;

	// BrnProgressionManager.h:893
	int32_t miPreWorldUpdate;

	// BrnProgressionManager.h:894
	int32_t miPostWorldUpdate;

	// BrnProgressionManager.h:895
	int32_t miInterestManagerUpdate;

	// BrnProgressionManager.h:896
	int32_t miSendRivalaryUpdateMessage;

public:
	// BrnProgressionManager.h:133
	void Construct(BrnGameState::CarSelectManager *, StreetManager *, BrnGameState::TrainingManager *, BrnGameState::StuntManager *);

	// BrnProgressionManager.h:142
	bool Prepare(BrnGameState::GameStateModuleIO::OutputBuffer *, BrnGameState::ModeManager *, CgsModule::EventReceiverQueue<3072,16> *, const TriggerData *, StuntModeScoring::AchievementManager *);

	// BrnProgressionManager.h:146
	bool Release();

	// BrnProgressionManager.h:150
	void Destruct();

	// BrnProgressionManager.h:160
	void PreWorldUpdate(float32_t, float32_t, BrnGameState::GameStateModuleIO::OutputBuffer *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnUpdateSet, bool);

	// BrnProgressionManager.h:166
	void PostWorldUpdate(float32_t, bool);

	// BrnProgressionManager.h:170
	const Rival * GetGiftCarId(BrnResource::ECarType);

	// BrnProgressionManager.h:175
	CarData * AddCar(CgsID, BrnProgression::CarData::UnlockType);

	// BrnProgressionManager.h:178
	const VehicleList * GetVehicleList() const;

	// BrnProgressionManager.h:181
	void SetCheckForAllEventTypeComplete();

	// BrnProgressionManager.h:184
	void ShowShutDownAllIfNeeded();

	// BrnProgressionManager.h:187
	// Declaration
	void UnlockGiftCar() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnProgressionManager.cpp:476
		using namespace CgsDev::Message;

		// BrnProgressionManager.cpp:480
		using namespace CgsDev::Message;

	}

	// BrnProgressionManager.h:190
	bool PlayerHasFinishedLastRank() const;

	// BrnProgressionManager.h:193
	int8_t GetProgressionRank() const;

	// BrnProgressionManager.h:196
	int8_t GetLastProgressionRank() const;

	// BrnProgressionManager.h:200
	void SetDebugEventRankNumber(int32_t);

	// BrnProgressionManager.h:204
	int8_t GetProgressionRankForGameMode(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:209
	int32_t GetRankThresholdForEvent(int32_t, BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:212
	float32_t GetProgressionRankNormalised() const;

	// BrnProgressionManager.h:216
	float32_t GetProgressionRankForGameModeNormalised(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:221
	// Declaration
	int32_t GetStuntRunScoreTarget(const GameModeParams *, const StartGameModeParams *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnProgressionManager.cpp:3810
		using namespace CgsDev::Message;

		// BrnProgressionManager.cpp:3811
		using namespace CgsDev::Message;

		// BrnProgressionManager.cpp:3812
		using namespace CgsDev::Message;

		// BrnProgressionManager.cpp:3813
		using namespace CgsDev::Message;

		// BrnProgressionManager.cpp:3814
		using namespace CgsDev::Message;

		// BrnProgressionManager.cpp:3815
		using namespace CgsDev::Message;

		// BrnProgressionManager.cpp:3816
		using namespace CgsDev::Message;

		// BrnProgressionManager.cpp:3817
		using namespace CgsDev::Message;

		// BrnProgressionManager.cpp:3818
		using namespace CgsDev::Message;

		// BrnProgressionManager.cpp:3819
		using namespace CgsDev::Message;

		// BrnProgressionManager.cpp:3820
		using namespace CgsDev::Message;

		// BrnProgressionManager.cpp:3821
		using namespace CgsDev::Message;

	}

	// BrnProgressionManager.h:229
	uint32_t GetRacesAtLandmark(Race *, uint32_t, LandmarkIndex, bool) const;

	// BrnProgressionManager.h:233
	int32_t GetCustomRaceCountAtLandmark(LandmarkIndex) const;

	// BrnProgressionManager.h:238
	bool LandmarkHasAvailableRaces(LandmarkIndex) const;

	// BrnProgressionManager.h:244
	void OnPlayerCarChange(CgsID, CgsID, bool);

	// BrnProgressionManager.h:247
	// Declaration
	void OnLoadProfile() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnProgressionManager.cpp:1304
		using namespace CgsDev::Message;

		// BrnProgressionManager.cpp:1312
		using namespace CgsDev::Message;

	}

	// BrnProgressionManager.h:254
	void OnTakedownTo(InputBuffer::GameActionQueue *, BrnGameState::ETakedownType, CgsID, bool);

	// BrnProgressionManager.h:259
	void OnTakedownFrom(BrnGameState::ETakedownType, CgsID);

	// BrnProgressionManager.h:264
	void GetDerivedPatternVehicleCollection(CgsID, DerivedCarArray &);

	// BrnProgressionManager.h:269
	void GetDerivedColourVehicleCollection(CgsID, DerivedCarArray &);

	// BrnProgressionManager.h:275
	void OnDriveThru(CgsID, BrnTrigger::GenericRegion::Type, InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:279
	void SendGameCompletionResults(InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:286
	void OnEventFinishUpdateProfile(InputBuffer::GameActionQueue *, uint32_t, ShowModeResultsAction *, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProgressionManager.h:290
	void ApplyVehicleList(const VehicleList *);

	// BrnProgressionManager.h:295
	void CheckForAllModeTypeCompletion(InputBuffer::GameActionQueue *, BrnProgression::RaceEventData::EModeType);

	// BrnProgressionManager.h:299
	uint32_t GetEventCountForType(BrnProgression::RaceEventData::EModeType);

	// BrnProgressionManager.h:304
	// Declaration
	void OnFaceOffWon(CgsID, InputBuffer::GameActionQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnProgressionManager.cpp:2286
		using namespace CgsDev::Message;

	}

	// BrnProgressionManager.h:308
	void OnTrophyUnlock(BrnProgression::TrophyUnlockData::UnlockType);

	// BrnProgressionManager.h:311
	// Declaration
	void CheckForSpecialCarUnlocks() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnProgressionManager.cpp:1932
		using namespace CgsDev::Message;

		// BrnProgressionManager.cpp:1936
		using namespace CgsDev::Message;

		// BrnProgressionManager.cpp:1946
		using namespace CgsDev::Message;

		// BrnProgressionManager.cpp:1952
		using namespace CgsDev::Message;

	}

	// BrnProgressionManager.h:315
	void UnlockTrophyForEventTypeAllCompleted(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProgressionManager.h:319
	void UnlockCar(CgsID);

	// BrnProgressionManager.h:324
	bool UnlockCarFromTrophy(CgsID, BrnProgression::TrophyUnlockData::UnlockType);

	// BrnProgressionManager.h:329
	void OnPursuitWon(CgsID, InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:334
	// Declaration
	void DefeatRivalAndUnlockCar(int32_t, BrnProgression::EUnlockSequenceType) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnProgressionManager.cpp:2384
		using namespace CgsDev::Message;

	}

	// BrnProgressionManager.h:338
	bool IsAtFaceOffLevel(CgsID);

	// BrnProgressionManager.h:341
	void CheckForAllRivalsUnlocked();

	// BrnProgressionManager.h:345
	bool IsAtRoadRageLevel(CgsID);

	// BrnProgressionManager.h:349
	bool IsAtPursuitLevel(CgsID);

	// BrnProgressionManager.h:353
	bool HasBeenHit(CgsID);

	// BrnProgressionManager.h:357
	BrnProgression::EOfflineRivalryStatus GetRivalryStatus(CgsID);

	// BrnProgressionManager.h:361
	void ResetProfile();

	// BrnProgressionManager.h:364
	const BrnProgression::Profile * GetProfile() const;

	// BrnProgressionManager.h:367
	Profile * GetProfile();

	// BrnProgressionManager.h:370
	const CarData * GetCurrentCarData() const;

	// BrnProgressionManager.h:373
	CarData * GetCurrentCarData();

	// BrnProgressionManager.h:377
	const Race * FindPresetRace(CgsID);

	// BrnProgressionManager.h:381
	bool IsCarUnlocked(CgsID) const;

	// BrnProgressionManager.h:385
	uint16_t FindLandmarkAISectionIndex(CgsID) const;

	// BrnProgressionManager.h:389
	uint16_t FindAISectionIndexForPosition(Vector3) const;

	// BrnProgressionManager.h:394
	uint16_t FindAISectionIndexForPosition(Vector3, AISectionPointMap *) const;

	// BrnProgressionManager.h:398
	AISectionPointMap * BuildAISectionPointMap(LinearMalloc *) const;

	// BrnProgressionManager.h:403
	void OnPropHit(uint16_t, uint16_t);

	// BrnProgressionManager.h:407
	void RequestUpdateRivals();

	// BrnProgressionManager.h:411
	void RequestReturnRivals();

	// BrnProgressionManager.h:415
	const BrnProgression::ProgressionData * GetProgressionData() const;

	// BrnProgressionManager.h:418
	int32_t GetMaxCarCount();

	// BrnProgressionManager.h:424
	void AddStuntElement(BrnGameState::StuntElementType, CgsID, BrnWorld::ECounty);

	// BrnProgressionManager.h:428
	void AddStunt(CgsID);

	// BrnProgressionManager.h:432
	int32_t GetStuntElementCount(BrnGameState::StuntElementType) const;

	// BrnProgressionManager.h:437
	int32_t GetStuntElementCountByCounty(BrnGameState::StuntElementType, BrnWorld::ECounty) const;

	// BrnProgressionManager.h:440
	int32_t GetStuntCount() const;

	// BrnProgressionManager.h:445
	bool IsStuntElementDone(BrnGameState::StuntElementType, CgsID) const;

	// BrnProgressionManager.h:449
	bool IsStuntDone(CgsID) const;

	// BrnProgressionManager.h:454
	void GetGameStats(GameStats *, BrnGameState::StuntManager *) const;

	// BrnProgressionManager.h:457
	void OnPowerParkResult(int32_t, bool);

	// BrnProgressionManager.h:460
	void OnMugshotSent();

	// BrnProgressionManager.h:465
	void OnOnlineRaceComplete(int32_t, bool);

	// BrnProgressionManager.h:469
	void SetDriveThrusDirtyFlag();

	// BrnProgressionManager.h:473
	bool TestAndResetDriveThrusDirtyFlag();

	// BrnProgressionManager.h:478
	void SetRoadRuleNetworkHighScores(ChallengeHighScoreEntry *);

	// BrnProgressionManager.h:483
	void SetRoadRuleChallengeData(ChallengePlayerScoreEntry *);

	// BrnProgressionManager.h:486
	void RequestMedalUpdate();

	// BrnProgressionManager.h:494
	int32_t AddMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, MugshotInfo::UniquePlayerID, DateAndTime, WorldRegion);

	// BrnProgressionManager.h:500
	int32_t DeleteMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProgressionManager.h:508
	int32_t RecaptureMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t, DateAndTime, WorldRegion);

	// BrnProgressionManager.h:514
	bool LockOrUnlockMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProgressionManager.h:519
	int32_t GetNumMugshots(BrnGameState::GameStateModuleIO::EImageGalleryType);

	// BrnProgressionManager.h:525
	MugshotInfo * GetMugshotInfo(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProgressionManager.h:531
	int32_t FindMugshotInfoByUniquePlayerID(BrnGameState::GameStateModuleIO::EImageGalleryType, MugshotInfo::UniquePlayerID);

	// BrnProgressionManager.h:536
	bool HasPlayerCompletedFreeburnChallenge(CgsID);

	// BrnProgressionManager.h:541
	void CompleteFreeburnChallenge(CgsID);

	// BrnProgressionManager.h:546
	void CompleteFreeburnChallengeBlock(int32_t);

	// BrnProgressionManager.h:550
	uint32_t HACK_SetupRaces(Race *);

	// BrnProgressionManager.h:556
	void HACK_SetupRaceWithLandMarks(Race &, CgsID *, uint32_t);

	// BrnProgressionManager.h:559
	uint32_t GetNumberOfParCrashRoadRulesRuledByPlayer() const;

	// BrnProgressionManager.h:563
	void SetNumberOfParCrashRoadRulesRuledByPlayer(uint32_t);

	// BrnProgressionManager.h:566
	uint32_t GetNumberOfParTimeRoadRulesRuledByPlayer() const;

	// BrnProgressionManager.h:570
	void SetNumberOfParTimeRoadRulesRuledByPlayer(uint32_t);

	// BrnProgressionManager.h:573
	uint32_t GetNumberOfCompleteRoadRulesRuledByPlayer();

	// BrnProgressionManager.h:577
	void SetNumberOfCompleteRoadRulesRuledByPlayer(uint32_t);

	// BrnProgressionManager.h:580
	CgsID GetNewlyUnlockedCarID();

	// BrnProgressionManager.h:583
	bool HasJustRankedUp();

	// BrnProgressionManager.h:586
	void ClearRankUpCache();

	// BrnProgressionManager.h:589
	uint32_t GetTotalWinsForNextRank() const;

	// BrnProgressionManager.h:592
	BrnProgression::RaceEventData::EModeType GetGameModeForEvent(const BrnProgression::RaceEventData *) const;

	// BrnProgressionManager.h:595
	BrnProgression::RaceEventData::EOnlineModeType GetOnlineGameModeForEvent(const BrnProgression::RaceEventData *) const;

	// BrnProgressionManager.h:599
	BrnGameState::GameStateModuleIO::EGameModeType GetEventModeTypeFromRaceEventData(BrnProgression::RaceEventData::EModeType);

	// BrnProgressionManager.h:603
	BrnGameState::GameStateModuleIO::EGameModeType GetOnlineEventModeTypeFromRaceEventData(BrnProgression::RaceEventData::EOnlineModeType);

	// BrnProgressionManager.h:608
	uint32_t GetEventTypeUniqueWinCount(BrnProgression::RaceEventData::EModeType, BrnProgression::ProfileEvent::Flags);

	// BrnProgressionManager.h:612
	bool DoesGameModeRankUpIndividually(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:616
	bool HasEventBeenWonPreviously(uint32_t);

	// BrnProgressionManager.h:620
	void RepairUnlockedVehicle(CgsID);

	// BrnProgressionManager.h:624
	float32_t GetPlayerBaseDeformAmount(CgsID) const;

	// BrnProgressionManager.h:630
	void GetCarColourAndPalette(CgsID, uint32_t &, uint32_t &) const;

	// BrnProgressionManager.h:634
	void UnlockDerivedCarCollection(const DerivedCarArray &);

	// BrnProgressionManager.h:637
	void FixGameModeRanks();

	// BrnProgressionManager.h:641
	void FixRankForSingleEvent(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProgressionManager.h:644
	int32_t GetTrueNumberOfRivals() const;

	// BrnProgressionManager.h:647
	StuntModeScoring::AchievementManager * GetAchievementManager();

	// BrnProgressionManager.h:650
	StreetManager * GetStreetManager() const;

	// BrnProgressionManager.h:653
	float32_t GetDistanceDrivenInCurrentCar();

	// BrnProgressionManager.h:657
	bool AreRoadRulesAvailable() const;

private:
	// BrnProgressionManager.h:665
	// Declaration
	float32_t GetProgressionRankNormalised(float32_t) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnProgressionManager.cpp:3899
		using namespace CgsDev::Message;

	}

	// BrnProgressionManager.h:669
	int8_t CalculateRankFromMedalTotal(uint32_t) const;

	// BrnProgressionManager.h:674
	void UnlockToProgressionRank(int8_t, InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:678
	void AddEventTypeToEventTotals(const EventJunction *);

	// BrnProgressionManager.h:681
	int32_t GetNumberOfBeatenRivals() const;

	// BrnProgressionManager.h:685
	void UnlockSpecialCars(BrnResource::VehicleListEntry::ELiveryType);

	// BrnProgressionManager.h:688
	void ClearMedalsOnRankUp();

	// BrnProgressionManager.h:691
	void SetupRoamingSections();

	// BrnProgressionManager.h:694
	float32_t ComputeCompletionPercentage() const;

	// BrnProgressionManager.h:699
	float32_t GetPS3AwardScoresPercentage() const;

	// BrnProgressionManager.h:704
	void ComputeLandmarkAISectionIndices();

	// BrnProgressionManager.h:707
	float32_t GetPercentageOfEventsCompleted() const;

	// BrnProgressionManager.h:712
	bool LoadProgressionData(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnProgressionManager.h:717
	bool LoadAIData(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnProgressionManager.h:721
	void UpdateRivals(InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:725
	void ProcessLoadedPresetRaces();

	// BrnProgressionManager.h:729
	void UpdatePlayerStatsLevels(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnProgressionManager.h:733
	void SendTrophyUnlockUpdate(InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:737
	CgsID GetGifCarId(BrnResource::ECarType);

	// BrnProgressionManager.h:741
	// Declaration
	void UpdatePlayerMedals(InputBuffer::GameActionQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnProgressionManager.cpp:685
		using namespace CgsDev::Message;

	}

	// BrnProgressionManager.h:745
	// Declaration
	CgsID UnlockRivals(InputBuffer::GameActionQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnProgressionManager.cpp:1094
		using namespace CgsDev::Message;

	}

	// BrnProgressionManager.h:750
	void RaceToSavedRace(const Race *, SavedRace *) const;

	// BrnProgressionManager.h:755
	void SavedRaceToRace(const SavedRace *, Race *) const;

	// BrnProgressionManager.h:762
	void SendRivalryUpdateMessage(InputBuffer::GameActionQueue *, BrnProgression::EOfflineRivalryStatus, RivalData *, CgsID);

	// BrnProgressionManager.h:767
	void AddDistanceDriven(float32_t, bool);

	// BrnProgressionManager.h:773
	void AddRivalToWorld(const Rival *, int32_t, InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:776
	void UnlockDefaultPlayerCars();

	// BrnProgressionManager.h:779
	void UnlockAllJunkyards();

	// BrnProgressionManager.h:783
	void DEBUG_ClearMedals();

}

// BrnProgressionManager.h:118
struct BrnProgression::ProgressionManager {
	// BrnProgressionManager.h:125
	extern const float32_t KF_PROGRESSION_UNLOCK_RIVAL_DEFORM_AMOUNT;

private:
	// BrnProgressionManager.h:661
	extern const float32_t KF_RIVALS_PROGRESSION_WEIGHT;

	// Unknown accessibility
	// BrnGameStateTypes.h:202
	typedef Array<std::uint16_t,8u> RoamingSections;

	// BrnProgressionManager.h:822
	ProgressionManager::RoamingSections[18] maRoamingSections;

	// BrnProgressionManager.h:823
	Profile mProfile;

	// BrnProgressionManager.h:824
	Array<BrnProgression::Race,64u> maPresetRaces;

	// BrnProgressionManager.h:825
	BrnProgression::ProgressionManager::LandmarkAISectionIndexPair[512] maLandmarkAISectionIndices;

	// BrnProgressionManager.h:827
	BrnProgression::ProgressionDebugComponent mDebugComponent;

	// BrnProgressionManager.h:828
	bool mbSendAchievementAwardedEvent_DEBUG;

	// BrnProgressionManager.h:829
	int32_t miAchievementToAward_DEBUG;

	// BrnProgressionManager.h:831
	Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u> mQueueOfTrophyCarUnLocks;

	// BrnProgressionManager.h:832
	CarData * mpCurrentCarData;

	// BrnProgressionManager.h:833
	LiveryData * mpCurrentLiveryData;

	// BrnProgressionManager.h:834
	uint32_t muNumPresetRaces;

	// BrnProgressionManager.h:835
	BrnProgression::ProgressionManager::LoadStage meLoadStage;

	// BrnProgressionManager.h:836
	BrnProgression::ProgressionManager::AILoadStage meAILoadStage;

	// BrnProgressionManager.h:837
	ResourcePtr<BrnProgression::ProgressionData> mpProgressionData;

	// BrnProgressionManager.h:838
	ResourcePtr<BrnAI::AISectionsData> mpAISectionData;

	// BrnProgressionManager.h:839
	const TriggerData * mpTriggerData;

	// BrnProgressionManager.h:841
	int32_t miLastUpdatedRival;

	// BrnProgressionManager.h:842
	int32_t miLastReturnedRival;

	// BrnProgressionManager.h:844
	StreetManager * mpStreetManager;

	// BrnProgressionManager.h:845
	BrnGameState::CarSelectManager * mpCarSelectManager;

	// BrnProgressionManager.h:846
	StuntModeScoring::AchievementManager * mpAchievementManager;

	// BrnProgressionManager.h:847
	BrnGameState::ModeManager * mpModeManager;

	// BrnProgressionManager.h:848
	BrnGameState::TrainingManager * mpTrainingManager;

	// BrnProgressionManager.h:849
	BrnGameState::StuntManager * mpStuntManager;

	// BrnProgressionManager.h:851
	const VehicleList * mpVehicleList;

	// BrnProgressionManager.h:853
	BrnWorld::EDistrict meLastPlayerDistrict;

	// BrnProgressionManager.h:855
	int32_t miNumberOfParCrashRoadRulesRuledByPlayer;

	// BrnProgressionManager.h:856
	int32_t miNumberOfParTimeRoadRulesRuledByPlayer;

	// BrnProgressionManager.h:857
	int32_t miNumberOfNumberOfCompleteRoadRulesRuledByPlayer;

	// BrnProgressionManager.h:859
	int32_t miMaxCarCount;

	// BrnProgressionManager.h:862
	CgsID mNewlyUnlockedCarID;

	// BrnProgressionManager.h:863
	BrnResource::ECarType meLeastUsedCarType;

	// BrnProgressionManager.h:865
	int8_t mi8CurrentProgressionRank;

	// BrnProgressionManager.h:866
	int8_t mi8HackEventRankNumber;

	// BrnProgressionManager.h:867
	bool mbHackEventNumberActive;

	// BrnProgressionManager.h:868
	bool mbForceAutoSaveForOneHundredPercent;

	// BrnProgressionManager.h:870
	bool mbHasJustRankedUp;

	// BrnProgressionManager.h:872
	bool mbUpdateRivals;

	// BrnProgressionManager.h:873
	bool mbReturnRivals;

	// BrnProgressionManager.h:875
	bool mbPlayerMedalsUpdateRequired;

	// BrnProgressionManager.h:876
	bool mbPlayerJustWonATrophyUpdateRequired;

	// BrnProgressionManager.h:879
	bool mbCheckForAllEventTypeComplete;

	// BrnProgressionManager.h:880
	bool mbNeedCheckForAllWinTypes;

	// BrnProgressionManager.h:881
	BrnProgression::RaceEventData::EModeType meModeToCheckForAllWinTypes;

	// BrnProgressionManager.h:882
	float32_t mfTimeTillAllEventTypeCompleteHudMessage;

	// BrnProgressionManager.h:885
	bool mbNeedToShowAllRivalsBeatenMessage;

	// BrnProgressionManager.h:886
	bool mbShowShutDownAllIfNeeded;

	// BrnProgressionManager.h:887
	float32_t mfTimeTillShowAllRivalsBeatenMessage;

	// BrnProgressionManager.h:890
	bool mbDriveThruDataDirtyFlag;

	// BrnProgressionManager.h:893
	int32_t miPreWorldUpdate;

	// BrnProgressionManager.h:894
	int32_t miPostWorldUpdate;

	// BrnProgressionManager.h:895
	int32_t miInterestManagerUpdate;

	// BrnProgressionManager.h:896
	int32_t miSendRivalaryUpdateMessage;

public:
	// BrnProgressionManager.h:133
	void Construct(BrnGameState::CarSelectManager *, StreetManager *, BrnGameState::TrainingManager *, BrnGameState::StuntManager *);

	// BrnProgressionManager.h:142
	bool Prepare(BrnGameState::GameStateModuleIO::OutputBuffer *, BrnGameState::ModeManager *, CgsModule::EventReceiverQueue<3072,16> *, const TriggerData *, StuntModeScoring::AchievementManager *);

	// BrnProgressionManager.h:146
	bool Release();

	// BrnProgressionManager.h:150
	void Destruct();

	// BrnProgressionManager.h:160
	void PreWorldUpdate(float32_t, float32_t, BrnGameState::GameStateModuleIO::OutputBuffer *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnUpdateSet, bool);

	// BrnProgressionManager.h:166
	void PostWorldUpdate(float32_t, bool);

	// BrnProgressionManager.h:170
	const Rival * GetGiftCarId(BrnResource::ECarType);

	// BrnProgressionManager.h:175
	CarData * AddCar(CgsID, BrnProgression::CarData::UnlockType);

	// BrnProgressionManager.h:178
	const VehicleList * GetVehicleList() const;

	// BrnProgressionManager.h:181
	void SetCheckForAllEventTypeComplete();

	// BrnProgressionManager.h:184
	void ShowShutDownAllIfNeeded();

	// BrnProgressionManager.h:187
	void UnlockGiftCar();

	// BrnProgressionManager.h:190
	bool PlayerHasFinishedLastRank() const;

	// BrnProgressionManager.h:193
	int8_t GetProgressionRank() const;

	// BrnProgressionManager.h:196
	int8_t GetLastProgressionRank() const;

	// BrnProgressionManager.h:200
	void SetDebugEventRankNumber(int32_t);

	// BrnProgressionManager.h:204
	int8_t GetProgressionRankForGameMode(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:209
	int32_t GetRankThresholdForEvent(int32_t, BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:212
	float32_t GetProgressionRankNormalised() const;

	// BrnProgressionManager.h:216
	float32_t GetProgressionRankForGameModeNormalised(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:221
	int32_t GetStuntRunScoreTarget(const GameModeParams *, const StartGameModeParams *) const;

	// BrnProgressionManager.h:229
	uint32_t GetRacesAtLandmark(Race *, uint32_t, LandmarkIndex, bool) const;

	// BrnProgressionManager.h:233
	int32_t GetCustomRaceCountAtLandmark(LandmarkIndex) const;

	// BrnProgressionManager.h:238
	bool LandmarkHasAvailableRaces(LandmarkIndex) const;

	// BrnProgressionManager.h:244
	void OnPlayerCarChange(CgsID, CgsID, bool);

	// BrnProgressionManager.h:247
	void OnLoadProfile();

	// BrnProgressionManager.h:254
	void OnTakedownTo(OutputBuffer::GameActionQueue *, BrnGameState::ETakedownType, CgsID, bool);

	// BrnProgressionManager.h:259
	void OnTakedownFrom(BrnGameState::ETakedownType, CgsID);

	// BrnProgressionManager.h:264
	void GetDerivedPatternVehicleCollection(CgsID, DerivedCarArray &);

	// BrnProgressionManager.h:269
	void GetDerivedColourVehicleCollection(CgsID, DerivedCarArray &);

	// BrnProgressionManager.h:275
	void OnDriveThru(CgsID, BrnTrigger::GenericRegion::Type, OutputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:279
	void SendGameCompletionResults(OutputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:286
	void OnEventFinishUpdateProfile(OutputBuffer::GameActionQueue *, uint32_t, ShowModeResultsAction *, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProgressionManager.h:290
	void ApplyVehicleList(const VehicleList *);

	// BrnProgressionManager.h:295
	void CheckForAllModeTypeCompletion(OutputBuffer::GameActionQueue *, BrnProgression::RaceEventData::EModeType);

	// BrnProgressionManager.h:299
	uint32_t GetEventCountForType(BrnProgression::RaceEventData::EModeType);

	// BrnProgressionManager.h:304
	void OnFaceOffWon(CgsID, OutputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:308
	void OnTrophyUnlock(BrnProgression::TrophyUnlockData::UnlockType);

	// BrnProgressionManager.h:311
	void CheckForSpecialCarUnlocks();

	// BrnProgressionManager.h:315
	void UnlockTrophyForEventTypeAllCompleted(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProgressionManager.h:319
	void UnlockCar(CgsID);

	// BrnProgressionManager.h:324
	bool UnlockCarFromTrophy(CgsID, BrnProgression::TrophyUnlockData::UnlockType);

	// BrnProgressionManager.h:329
	void OnPursuitWon(CgsID, OutputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:334
	void DefeatRivalAndUnlockCar(int32_t, BrnProgression::EUnlockSequenceType);

	// BrnProgressionManager.h:338
	bool IsAtFaceOffLevel(CgsID);

	// BrnProgressionManager.h:341
	void CheckForAllRivalsUnlocked();

	// BrnProgressionManager.h:345
	bool IsAtRoadRageLevel(CgsID);

	// BrnProgressionManager.h:349
	bool IsAtPursuitLevel(CgsID);

	// BrnProgressionManager.h:353
	bool HasBeenHit(CgsID);

	// BrnProgressionManager.h:357
	BrnProgression::EOfflineRivalryStatus GetRivalryStatus(CgsID);

	// BrnProgressionManager.h:361
	void ResetProfile();

	// BrnProgressionManager.h:364
	const BrnProgression::Profile * GetProfile() const;

	// BrnProgressionManager.h:367
	Profile * GetProfile();

	// BrnProgressionManager.h:370
	const CarData * GetCurrentCarData() const;

	// BrnProgressionManager.h:373
	CarData * GetCurrentCarData();

	// BrnProgressionManager.h:377
	const Race * FindPresetRace(CgsID);

	// BrnProgressionManager.h:381
	bool IsCarUnlocked(CgsID) const;

	// BrnProgressionManager.h:385
	uint16_t FindLandmarkAISectionIndex(CgsID) const;

	// BrnProgressionManager.h:389
	uint16_t FindAISectionIndexForPosition(Vector3) const;

	// BrnProgressionManager.h:394
	uint16_t FindAISectionIndexForPosition(Vector3, AISectionPointMap *) const;

	// BrnProgressionManager.h:398
	AISectionPointMap * BuildAISectionPointMap(LinearMalloc *) const;

	// BrnProgressionManager.h:403
	void OnPropHit(uint16_t, uint16_t);

	// BrnProgressionManager.h:407
	void RequestUpdateRivals();

	// BrnProgressionManager.h:411
	void RequestReturnRivals();

	// BrnProgressionManager.h:415
	const BrnProgression::ProgressionData * GetProgressionData() const;

	// BrnProgressionManager.h:418
	int32_t GetMaxCarCount();

	// BrnProgressionManager.h:424
	void AddStuntElement(BrnGameState::StuntElementType, CgsID, BrnWorld::ECounty);

	// BrnProgressionManager.h:428
	void AddStunt(CgsID);

	// BrnProgressionManager.h:432
	int32_t GetStuntElementCount(BrnGameState::StuntElementType) const;

	// BrnProgressionManager.h:437
	int32_t GetStuntElementCountByCounty(BrnGameState::StuntElementType, BrnWorld::ECounty) const;

	// BrnProgressionManager.h:440
	int32_t GetStuntCount() const;

	// BrnProgressionManager.h:445
	bool IsStuntElementDone(BrnGameState::StuntElementType, CgsID) const;

	// BrnProgressionManager.h:449
	bool IsStuntDone(CgsID) const;

	// BrnProgressionManager.h:454
	void GetGameStats(GameStats *, BrnGameState::StuntManager *) const;

	// BrnProgressionManager.h:457
	void OnPowerParkResult(int32_t, bool);

	// BrnProgressionManager.h:460
	void OnMugshotSent();

	// BrnProgressionManager.h:465
	void OnOnlineRaceComplete(int32_t, bool);

	// BrnProgressionManager.h:469
	void SetDriveThrusDirtyFlag();

	// BrnProgressionManager.h:473
	bool TestAndResetDriveThrusDirtyFlag();

	// BrnProgressionManager.h:478
	void SetRoadRuleNetworkHighScores(ChallengeHighScoreEntry *);

	// BrnProgressionManager.h:483
	void SetRoadRuleChallengeData(ChallengePlayerScoreEntry *);

	// BrnProgressionManager.h:486
	void RequestMedalUpdate();

	// BrnProgressionManager.h:494
	int32_t AddMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, MugshotInfo::UniquePlayerID, DateAndTime, WorldRegion);

	// BrnProgressionManager.h:500
	int32_t DeleteMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProgressionManager.h:508
	int32_t RecaptureMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t, DateAndTime, WorldRegion);

	// BrnProgressionManager.h:514
	bool LockOrUnlockMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProgressionManager.h:519
	int32_t GetNumMugshots(BrnGameState::GameStateModuleIO::EImageGalleryType);

	// BrnProgressionManager.h:525
	MugshotInfo * GetMugshotInfo(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProgressionManager.h:531
	int32_t FindMugshotInfoByUniquePlayerID(BrnGameState::GameStateModuleIO::EImageGalleryType, MugshotInfo::UniquePlayerID);

	// BrnProgressionManager.h:536
	bool HasPlayerCompletedFreeburnChallenge(CgsID);

	// BrnProgressionManager.h:541
	void CompleteFreeburnChallenge(CgsID);

	// BrnProgressionManager.h:546
	void CompleteFreeburnChallengeBlock(int32_t);

	// BrnProgressionManager.h:550
	uint32_t HACK_SetupRaces(Race *);

	// BrnProgressionManager.h:556
	void HACK_SetupRaceWithLandMarks(Race &, CgsID *, uint32_t);

	// BrnProgressionManager.h:559
	uint32_t GetNumberOfParCrashRoadRulesRuledByPlayer() const;

	// BrnProgressionManager.h:563
	void SetNumberOfParCrashRoadRulesRuledByPlayer(uint32_t);

	// BrnProgressionManager.h:566
	uint32_t GetNumberOfParTimeRoadRulesRuledByPlayer() const;

	// BrnProgressionManager.h:570
	void SetNumberOfParTimeRoadRulesRuledByPlayer(uint32_t);

	// BrnProgressionManager.h:573
	uint32_t GetNumberOfCompleteRoadRulesRuledByPlayer();

	// BrnProgressionManager.h:577
	void SetNumberOfCompleteRoadRulesRuledByPlayer(uint32_t);

	// BrnProgressionManager.h:580
	CgsID GetNewlyUnlockedCarID();

	// BrnProgressionManager.h:583
	bool HasJustRankedUp();

	// BrnProgressionManager.h:586
	void ClearRankUpCache();

	// BrnProgressionManager.h:589
	uint32_t GetTotalWinsForNextRank() const;

	// BrnProgressionManager.h:592
	BrnProgression::RaceEventData::EModeType GetGameModeForEvent(const BrnProgression::RaceEventData *) const;

	// BrnProgressionManager.h:595
	BrnProgression::RaceEventData::EOnlineModeType GetOnlineGameModeForEvent(const BrnProgression::RaceEventData *) const;

	// BrnProgressionManager.h:599
	BrnGameState::GameStateModuleIO::EGameModeType GetEventModeTypeFromRaceEventData(BrnProgression::RaceEventData::EModeType);

	// BrnProgressionManager.h:603
	BrnGameState::GameStateModuleIO::EGameModeType GetOnlineEventModeTypeFromRaceEventData(BrnProgression::RaceEventData::EOnlineModeType);

	// BrnProgressionManager.h:608
	uint32_t GetEventTypeUniqueWinCount(BrnProgression::RaceEventData::EModeType, BrnProgression::ProfileEvent::Flags);

	// BrnProgressionManager.h:612
	bool DoesGameModeRankUpIndividually(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:616
	bool HasEventBeenWonPreviously(uint32_t);

	// BrnProgressionManager.h:620
	void RepairUnlockedVehicle(CgsID);

	// BrnProgressionManager.h:624
	float32_t GetPlayerBaseDeformAmount(CgsID) const;

	// BrnProgressionManager.h:630
	void GetCarColourAndPalette(CgsID, uint32_t &, uint32_t &) const;

	// BrnProgressionManager.h:634
	void UnlockDerivedCarCollection(const DerivedCarArray &);

	// BrnProgressionManager.h:637
	void FixGameModeRanks();

	// BrnProgressionManager.h:641
	void FixRankForSingleEvent(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProgressionManager.h:644
	int32_t GetTrueNumberOfRivals() const;

	// BrnProgressionManager.h:647
	StuntModeScoring::AchievementManager * GetAchievementManager();

	// BrnProgressionManager.h:650
	StreetManager * GetStreetManager() const;

	// BrnProgressionManager.h:653
	float32_t GetDistanceDrivenInCurrentCar();

	// BrnProgressionManager.h:657
	bool AreRoadRulesAvailable() const;

private:
	// BrnProgressionManager.h:665
	float32_t GetProgressionRankNormalised(float32_t) const;

	// BrnProgressionManager.h:669
	int8_t CalculateRankFromMedalTotal(uint32_t) const;

	// BrnProgressionManager.h:674
	void UnlockToProgressionRank(int8_t, OutputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:678
	void AddEventTypeToEventTotals(const EventJunction *);

	// BrnProgressionManager.h:681
	int32_t GetNumberOfBeatenRivals() const;

	// BrnProgressionManager.h:685
	void UnlockSpecialCars(BrnResource::VehicleListEntry::ELiveryType);

	// BrnProgressionManager.h:688
	void ClearMedalsOnRankUp();

	// BrnProgressionManager.h:691
	void SetupRoamingSections();

	// BrnProgressionManager.h:694
	float32_t ComputeCompletionPercentage() const;

	// BrnProgressionManager.h:699
	float32_t GetPS3AwardScoresPercentage() const;

	// BrnProgressionManager.h:704
	void ComputeLandmarkAISectionIndices();

	// BrnProgressionManager.h:707
	float32_t GetPercentageOfEventsCompleted() const;

	// BrnProgressionManager.h:712
	bool LoadProgressionData(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnProgressionManager.h:717
	bool LoadAIData(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnProgressionManager.h:721
	void UpdateRivals(OutputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:725
	void ProcessLoadedPresetRaces();

	// BrnProgressionManager.h:729
	void UpdatePlayerStatsLevels(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnProgressionManager.h:733
	void SendTrophyUnlockUpdate(OutputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:737
	CgsID GetGifCarId(BrnResource::ECarType);

	// BrnProgressionManager.h:741
	void UpdatePlayerMedals(OutputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:745
	CgsID UnlockRivals(OutputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:750
	void RaceToSavedRace(const Race *, SavedRace *) const;

	// BrnProgressionManager.h:755
	void SavedRaceToRace(const SavedRace *, Race *) const;

	// BrnProgressionManager.h:762
	void SendRivalryUpdateMessage(OutputBuffer::GameActionQueue *, BrnProgression::EOfflineRivalryStatus, RivalData *, CgsID);

	// BrnProgressionManager.h:767
	void AddDistanceDriven(float32_t, bool);

	// BrnProgressionManager.h:773
	void AddRivalToWorld(const Rival *, int32_t, OutputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:776
	void UnlockDefaultPlayerCars();

	// BrnProgressionManager.h:779
	void UnlockAllJunkyards();

	// BrnProgressionManager.h:783
	void DEBUG_ClearMedals();

}

// BrnProgressionManager.h:118
struct BrnProgression::ProgressionManager {
	// BrnProgressionManager.h:125
	extern const float32_t KF_PROGRESSION_UNLOCK_RIVAL_DEFORM_AMOUNT;

private:
	// BrnProgressionManager.h:661
	extern const float32_t KF_RIVALS_PROGRESSION_WEIGHT;

	// Unknown accessibility
	// BrnGameStateTypes.h:202
	typedef Array<std::uint16_t,8u> RoamingSections;

	// BrnProgressionManager.h:822
	ProgressionManager::RoamingSections[18] maRoamingSections;

	// BrnProgressionManager.h:823
	Profile mProfile;

	// BrnProgressionManager.h:824
	Array<BrnProgression::Race,64u> maPresetRaces;

	// BrnProgressionManager.h:825
	BrnProgression::ProgressionManager::LandmarkAISectionIndexPair[512] maLandmarkAISectionIndices;

	// BrnProgressionManager.h:827
	BrnProgression::ProgressionDebugComponent mDebugComponent;

	// BrnProgressionManager.h:828
	bool mbSendAchievementAwardedEvent_DEBUG;

	// BrnProgressionManager.h:829
	int32_t miAchievementToAward_DEBUG;

	// BrnProgressionManager.h:831
	Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u> mQueueOfTrophyCarUnLocks;

	// BrnProgressionManager.h:832
	CarData * mpCurrentCarData;

	// BrnProgressionManager.h:833
	LiveryData * mpCurrentLiveryData;

	// BrnProgressionManager.h:834
	uint32_t muNumPresetRaces;

	// BrnProgressionManager.h:835
	BrnProgression::ProgressionManager::LoadStage meLoadStage;

	// BrnProgressionManager.h:836
	BrnProgression::ProgressionManager::AILoadStage meAILoadStage;

	// BrnProgressionManager.h:837
	ResourcePtr<BrnProgression::ProgressionData> mpProgressionData;

	// BrnProgressionManager.h:838
	ResourcePtr<BrnAI::AISectionsData> mpAISectionData;

	// BrnProgressionManager.h:839
	const TriggerData * mpTriggerData;

	// BrnProgressionManager.h:841
	int32_t miLastUpdatedRival;

	// BrnProgressionManager.h:842
	int32_t miLastReturnedRival;

	// BrnProgressionManager.h:844
	StreetManager * mpStreetManager;

	// BrnProgressionManager.h:845
	BrnGameState::CarSelectManager * mpCarSelectManager;

	// BrnProgressionManager.h:846
	StuntModeScoring::AchievementManager * mpAchievementManager;

	// BrnProgressionManager.h:847
	BrnGameState::ModeManager * mpModeManager;

	// BrnProgressionManager.h:848
	BrnGameState::TrainingManager * mpTrainingManager;

	// BrnProgressionManager.h:849
	BrnGameState::StuntManager * mpStuntManager;

	// BrnProgressionManager.h:851
	const BrnResource::VehicleList * mpVehicleList;

	// BrnProgressionManager.h:853
	BrnWorld::EDistrict meLastPlayerDistrict;

	// BrnProgressionManager.h:855
	int32_t miNumberOfParCrashRoadRulesRuledByPlayer;

	// BrnProgressionManager.h:856
	int32_t miNumberOfParTimeRoadRulesRuledByPlayer;

	// BrnProgressionManager.h:857
	int32_t miNumberOfNumberOfCompleteRoadRulesRuledByPlayer;

	// BrnProgressionManager.h:859
	int32_t miMaxCarCount;

	// BrnProgressionManager.h:862
	CgsID mNewlyUnlockedCarID;

	// BrnProgressionManager.h:863
	BrnResource::ECarType meLeastUsedCarType;

	// BrnProgressionManager.h:865
	int8_t mi8CurrentProgressionRank;

	// BrnProgressionManager.h:866
	int8_t mi8HackEventRankNumber;

	// BrnProgressionManager.h:867
	bool mbHackEventNumberActive;

	// BrnProgressionManager.h:868
	bool mbForceAutoSaveForOneHundredPercent;

	// BrnProgressionManager.h:870
	bool mbHasJustRankedUp;

	// BrnProgressionManager.h:872
	bool mbUpdateRivals;

	// BrnProgressionManager.h:873
	bool mbReturnRivals;

	// BrnProgressionManager.h:875
	bool mbPlayerMedalsUpdateRequired;

	// BrnProgressionManager.h:876
	bool mbPlayerJustWonATrophyUpdateRequired;

	// BrnProgressionManager.h:879
	bool mbCheckForAllEventTypeComplete;

	// BrnProgressionManager.h:880
	bool mbNeedCheckForAllWinTypes;

	// BrnProgressionManager.h:881
	BrnProgression::RaceEventData::EModeType meModeToCheckForAllWinTypes;

	// BrnProgressionManager.h:882
	float32_t mfTimeTillAllEventTypeCompleteHudMessage;

	// BrnProgressionManager.h:885
	bool mbNeedToShowAllRivalsBeatenMessage;

	// BrnProgressionManager.h:886
	bool mbShowShutDownAllIfNeeded;

	// BrnProgressionManager.h:887
	float32_t mfTimeTillShowAllRivalsBeatenMessage;

	// BrnProgressionManager.h:890
	bool mbDriveThruDataDirtyFlag;

	// BrnProgressionManager.h:893
	int32_t miPreWorldUpdate;

	// BrnProgressionManager.h:894
	int32_t miPostWorldUpdate;

	// BrnProgressionManager.h:895
	int32_t miInterestManagerUpdate;

	// BrnProgressionManager.h:896
	int32_t miSendRivalaryUpdateMessage;

public:
	// BrnProgressionManager.h:133
	void Construct(BrnGameState::CarSelectManager *, StreetManager *, BrnGameState::TrainingManager *, BrnGameState::StuntManager *);

	// BrnProgressionManager.h:142
	bool Prepare(BrnGameState::GameStateModuleIO::OutputBuffer *, BrnGameState::ModeManager *, CgsModule::EventReceiverQueue<3072,16> *, const TriggerData *, StuntModeScoring::AchievementManager *);

	// BrnProgressionManager.h:146
	bool Release();

	// BrnProgressionManager.h:150
	void Destruct();

	// BrnProgressionManager.h:160
	void PreWorldUpdate(float32_t, float32_t, BrnGameState::GameStateModuleIO::OutputBuffer *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnUpdateSet, bool);

	// BrnProgressionManager.h:166
	void PostWorldUpdate(float32_t, bool);

	// BrnProgressionManager.h:170
	const Rival * GetGiftCarId(BrnResource::ECarType);

	// BrnProgressionManager.h:175
	CarData * AddCar(CgsID, BrnProgression::CarData::UnlockType);

	// BrnProgressionManager.h:178
	const BrnResource::VehicleList * GetVehicleList() const;

	// BrnProgressionManager.h:181
	void SetCheckForAllEventTypeComplete();

	// BrnProgressionManager.h:184
	void ShowShutDownAllIfNeeded();

	// BrnProgressionManager.h:187
	void UnlockGiftCar();

	// BrnProgressionManager.h:190
	bool PlayerHasFinishedLastRank() const;

	// BrnProgressionManager.h:193
	int8_t GetProgressionRank() const;

	// BrnProgressionManager.h:196
	int8_t GetLastProgressionRank() const;

	// BrnProgressionManager.h:200
	void SetDebugEventRankNumber(int32_t);

	// BrnProgressionManager.h:204
	int8_t GetProgressionRankForGameMode(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:209
	int32_t GetRankThresholdForEvent(int32_t, BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:212
	float32_t GetProgressionRankNormalised() const;

	// BrnProgressionManager.h:216
	float32_t GetProgressionRankForGameModeNormalised(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:221
	int32_t GetStuntRunScoreTarget(const GameModeParams *, const StartGameModeParams *) const;

	// BrnProgressionManager.h:229
	uint32_t GetRacesAtLandmark(Race *, uint32_t, LandmarkIndex, bool) const;

	// BrnProgressionManager.h:233
	int32_t GetCustomRaceCountAtLandmark(LandmarkIndex) const;

	// BrnProgressionManager.h:238
	bool LandmarkHasAvailableRaces(LandmarkIndex) const;

	// BrnProgressionManager.h:244
	void OnPlayerCarChange(CgsID, CgsID, bool);

	// BrnProgressionManager.h:247
	void OnLoadProfile();

	// BrnProgressionManager.h:254
	void OnTakedownTo(OutputBuffer::GameActionQueue *, BrnGameState::ETakedownType, CgsID, bool);

	// BrnProgressionManager.h:259
	void OnTakedownFrom(BrnGameState::ETakedownType, CgsID);

	// BrnProgressionManager.h:264
	void GetDerivedPatternVehicleCollection(CgsID, DerivedCarArray &);

	// BrnProgressionManager.h:269
	void GetDerivedColourVehicleCollection(CgsID, DerivedCarArray &);

	// BrnProgressionManager.h:275
	void OnDriveThru(CgsID, BrnTrigger::GenericRegion::Type, OutputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:279
	void SendGameCompletionResults(OutputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:286
	void OnEventFinishUpdateProfile(OutputBuffer::GameActionQueue *, uint32_t, ShowModeResultsAction *, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProgressionManager.h:290
	void ApplyVehicleList(const BrnResource::VehicleList *);

	// BrnProgressionManager.h:295
	void CheckForAllModeTypeCompletion(OutputBuffer::GameActionQueue *, BrnProgression::RaceEventData::EModeType);

	// BrnProgressionManager.h:299
	uint32_t GetEventCountForType(BrnProgression::RaceEventData::EModeType);

	// BrnProgressionManager.h:304
	void OnFaceOffWon(CgsID, OutputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:308
	void OnTrophyUnlock(BrnProgression::TrophyUnlockData::UnlockType);

	// BrnProgressionManager.h:311
	void CheckForSpecialCarUnlocks();

	// BrnProgressionManager.h:315
	void UnlockTrophyForEventTypeAllCompleted(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProgressionManager.h:319
	void UnlockCar(CgsID);

	// BrnProgressionManager.h:324
	bool UnlockCarFromTrophy(CgsID, BrnProgression::TrophyUnlockData::UnlockType);

	// BrnProgressionManager.h:329
	void OnPursuitWon(CgsID, OutputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:334
	void DefeatRivalAndUnlockCar(int32_t, BrnProgression::EUnlockSequenceType);

	// BrnProgressionManager.h:338
	bool IsAtFaceOffLevel(CgsID);

	// BrnProgressionManager.h:341
	void CheckForAllRivalsUnlocked();

	// BrnProgressionManager.h:345
	bool IsAtRoadRageLevel(CgsID);

	// BrnProgressionManager.h:349
	bool IsAtPursuitLevel(CgsID);

	// BrnProgressionManager.h:353
	bool HasBeenHit(CgsID);

	// BrnProgressionManager.h:357
	BrnProgression::EOfflineRivalryStatus GetRivalryStatus(CgsID);

	// BrnProgressionManager.h:361
	void ResetProfile();

	// BrnProgressionManager.h:364
	const BrnProgression::Profile * GetProfile() const;

	// BrnProgressionManager.h:367
	Profile * GetProfile();

	// BrnProgressionManager.h:370
	const CarData * GetCurrentCarData() const;

	// BrnProgressionManager.h:373
	CarData * GetCurrentCarData();

	// BrnProgressionManager.h:377
	const Race * FindPresetRace(CgsID);

	// BrnProgressionManager.h:381
	bool IsCarUnlocked(CgsID) const;

	// BrnProgressionManager.h:385
	uint16_t FindLandmarkAISectionIndex(CgsID) const;

	// BrnProgressionManager.h:389
	uint16_t FindAISectionIndexForPosition(Vector3) const;

	// BrnProgressionManager.h:394
	uint16_t FindAISectionIndexForPosition(Vector3, AISectionPointMap *) const;

	// BrnProgressionManager.h:398
	AISectionPointMap * BuildAISectionPointMap(LinearMalloc *) const;

	// BrnProgressionManager.h:403
	void OnPropHit(uint16_t, uint16_t);

	// BrnProgressionManager.h:407
	void RequestUpdateRivals();

	// BrnProgressionManager.h:411
	void RequestReturnRivals();

	// BrnProgressionManager.h:415
	const BrnProgression::ProgressionData * GetProgressionData() const;

	// BrnProgressionManager.h:418
	int32_t GetMaxCarCount();

	// BrnProgressionManager.h:424
	void AddStuntElement(BrnGameState::StuntElementType, CgsID, BrnWorld::ECounty);

	// BrnProgressionManager.h:428
	void AddStunt(CgsID);

	// BrnProgressionManager.h:432
	int32_t GetStuntElementCount(BrnGameState::StuntElementType) const;

	// BrnProgressionManager.h:437
	int32_t GetStuntElementCountByCounty(BrnGameState::StuntElementType, BrnWorld::ECounty) const;

	// BrnProgressionManager.h:440
	int32_t GetStuntCount() const;

	// BrnProgressionManager.h:445
	bool IsStuntElementDone(BrnGameState::StuntElementType, CgsID) const;

	// BrnProgressionManager.h:449
	bool IsStuntDone(CgsID) const;

	// BrnProgressionManager.h:454
	void GetGameStats(GameStats *, BrnGameState::StuntManager *) const;

	// BrnProgressionManager.h:457
	void OnPowerParkResult(int32_t, bool);

	// BrnProgressionManager.h:460
	void OnMugshotSent();

	// BrnProgressionManager.h:465
	void OnOnlineRaceComplete(int32_t, bool);

	// BrnProgressionManager.h:469
	void SetDriveThrusDirtyFlag();

	// BrnProgressionManager.h:473
	bool TestAndResetDriveThrusDirtyFlag();

	// BrnProgressionManager.h:478
	void SetRoadRuleNetworkHighScores(ChallengeHighScoreEntry *);

	// BrnProgressionManager.h:483
	void SetRoadRuleChallengeData(ChallengePlayerScoreEntry *);

	// BrnProgressionManager.h:486
	void RequestMedalUpdate();

	// BrnProgressionManager.h:494
	int32_t AddMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, MugshotInfo::UniquePlayerID, DateAndTime, WorldRegion);

	// BrnProgressionManager.h:500
	int32_t DeleteMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProgressionManager.h:508
	int32_t RecaptureMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t, DateAndTime, WorldRegion);

	// BrnProgressionManager.h:514
	bool LockOrUnlockMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProgressionManager.h:519
	int32_t GetNumMugshots(BrnGameState::GameStateModuleIO::EImageGalleryType);

	// BrnProgressionManager.h:525
	MugshotInfo * GetMugshotInfo(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProgressionManager.h:531
	int32_t FindMugshotInfoByUniquePlayerID(BrnGameState::GameStateModuleIO::EImageGalleryType, MugshotInfo::UniquePlayerID);

	// BrnProgressionManager.h:536
	bool HasPlayerCompletedFreeburnChallenge(CgsID);

	// BrnProgressionManager.h:541
	void CompleteFreeburnChallenge(CgsID);

	// BrnProgressionManager.h:546
	void CompleteFreeburnChallengeBlock(int32_t);

	// BrnProgressionManager.h:550
	uint32_t HACK_SetupRaces(Race *);

	// BrnProgressionManager.h:556
	void HACK_SetupRaceWithLandMarks(Race &, CgsID *, uint32_t);

	// BrnProgressionManager.h:559
	uint32_t GetNumberOfParCrashRoadRulesRuledByPlayer() const;

	// BrnProgressionManager.h:563
	void SetNumberOfParCrashRoadRulesRuledByPlayer(uint32_t);

	// BrnProgressionManager.h:566
	uint32_t GetNumberOfParTimeRoadRulesRuledByPlayer() const;

	// BrnProgressionManager.h:570
	void SetNumberOfParTimeRoadRulesRuledByPlayer(uint32_t);

	// BrnProgressionManager.h:573
	uint32_t GetNumberOfCompleteRoadRulesRuledByPlayer();

	// BrnProgressionManager.h:577
	void SetNumberOfCompleteRoadRulesRuledByPlayer(uint32_t);

	// BrnProgressionManager.h:580
	CgsID GetNewlyUnlockedCarID();

	// BrnProgressionManager.h:583
	bool HasJustRankedUp();

	// BrnProgressionManager.h:586
	void ClearRankUpCache();

	// BrnProgressionManager.h:589
	uint32_t GetTotalWinsForNextRank() const;

	// BrnProgressionManager.h:592
	BrnProgression::RaceEventData::EModeType GetGameModeForEvent(const BrnProgression::RaceEventData *) const;

	// BrnProgressionManager.h:595
	BrnProgression::RaceEventData::EOnlineModeType GetOnlineGameModeForEvent(const BrnProgression::RaceEventData *) const;

	// BrnProgressionManager.h:599
	BrnGameState::GameStateModuleIO::EGameModeType GetEventModeTypeFromRaceEventData(BrnProgression::RaceEventData::EModeType);

	// BrnProgressionManager.h:603
	BrnGameState::GameStateModuleIO::EGameModeType GetOnlineEventModeTypeFromRaceEventData(BrnProgression::RaceEventData::EOnlineModeType);

	// BrnProgressionManager.h:608
	uint32_t GetEventTypeUniqueWinCount(BrnProgression::RaceEventData::EModeType, BrnProgression::ProfileEvent::Flags);

	// BrnProgressionManager.h:612
	bool DoesGameModeRankUpIndividually(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:616
	bool HasEventBeenWonPreviously(uint32_t);

	// BrnProgressionManager.h:620
	void RepairUnlockedVehicle(CgsID);

	// BrnProgressionManager.h:624
	float32_t GetPlayerBaseDeformAmount(CgsID) const;

	// BrnProgressionManager.h:630
	void GetCarColourAndPalette(CgsID, uint32_t &, uint32_t &) const;

	// BrnProgressionManager.h:634
	void UnlockDerivedCarCollection(const DerivedCarArray &);

	// BrnProgressionManager.h:637
	void FixGameModeRanks();

	// BrnProgressionManager.h:641
	void FixRankForSingleEvent(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProgressionManager.h:644
	int32_t GetTrueNumberOfRivals() const;

	// BrnProgressionManager.h:647
	StuntModeScoring::AchievementManager * GetAchievementManager();

	// BrnProgressionManager.h:650
	StreetManager * GetStreetManager() const;

	// BrnProgressionManager.h:653
	float32_t GetDistanceDrivenInCurrentCar();

	// BrnProgressionManager.h:657
	bool AreRoadRulesAvailable() const;

private:
	// BrnProgressionManager.h:665
	float32_t GetProgressionRankNormalised(float32_t) const;

	// BrnProgressionManager.h:669
	int8_t CalculateRankFromMedalTotal(uint32_t) const;

	// BrnProgressionManager.h:674
	void UnlockToProgressionRank(int8_t, OutputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:678
	void AddEventTypeToEventTotals(const EventJunction *);

	// BrnProgressionManager.h:681
	int32_t GetNumberOfBeatenRivals() const;

	// BrnProgressionManager.h:685
	void UnlockSpecialCars(BrnResource::VehicleListEntry::ELiveryType);

	// BrnProgressionManager.h:688
	void ClearMedalsOnRankUp();

	// BrnProgressionManager.h:691
	void SetupRoamingSections();

	// BrnProgressionManager.h:694
	float32_t ComputeCompletionPercentage() const;

	// BrnProgressionManager.h:699
	float32_t GetPS3AwardScoresPercentage() const;

	// BrnProgressionManager.h:704
	void ComputeLandmarkAISectionIndices();

	// BrnProgressionManager.h:707
	float32_t GetPercentageOfEventsCompleted() const;

	// BrnProgressionManager.h:712
	bool LoadProgressionData(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnProgressionManager.h:717
	bool LoadAIData(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnProgressionManager.h:721
	void UpdateRivals(OutputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:725
	void ProcessLoadedPresetRaces();

	// BrnProgressionManager.h:729
	void UpdatePlayerStatsLevels(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnProgressionManager.h:733
	void SendTrophyUnlockUpdate(OutputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:737
	CgsID GetGifCarId(BrnResource::ECarType);

	// BrnProgressionManager.h:741
	void UpdatePlayerMedals(OutputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:745
	CgsID UnlockRivals(OutputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:750
	void RaceToSavedRace(const Race *, SavedRace *) const;

	// BrnProgressionManager.h:755
	void SavedRaceToRace(const SavedRace *, Race *) const;

	// BrnProgressionManager.h:762
	void SendRivalryUpdateMessage(OutputBuffer::GameActionQueue *, BrnProgression::EOfflineRivalryStatus, RivalData *, CgsID);

	// BrnProgressionManager.h:767
	void AddDistanceDriven(float32_t, bool);

	// BrnProgressionManager.h:773
	void AddRivalToWorld(const Rival *, int32_t, OutputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:776
	void UnlockDefaultPlayerCars();

	// BrnProgressionManager.h:779
	void UnlockAllJunkyards();

	// BrnProgressionManager.h:783
	void DEBUG_ClearMedals();

}

// BrnProgressionManager.h:118
struct BrnProgression::ProgressionManager {
	// BrnProgressionManager.h:125
	extern const float32_t KF_PROGRESSION_UNLOCK_RIVAL_DEFORM_AMOUNT;

private:
	// BrnProgressionManager.h:661
	extern const float32_t KF_RIVALS_PROGRESSION_WEIGHT;

	// Unknown accessibility
	// BrnGameStateTypes.h:202
	typedef Array<std::uint16_t,8u> RoamingSections;

	// BrnProgressionManager.h:822
	ProgressionManager::RoamingSections[18] maRoamingSections;

	// BrnProgressionManager.h:823
	Profile mProfile;

	// BrnProgressionManager.h:824
	Array<BrnProgression::Race,64u> maPresetRaces;

	// BrnProgressionManager.h:825
	BrnProgression::ProgressionManager::LandmarkAISectionIndexPair[512] maLandmarkAISectionIndices;

	// BrnProgressionManager.h:827
	BrnProgression::ProgressionDebugComponent mDebugComponent;

	// BrnProgressionManager.h:828
	bool mbSendAchievementAwardedEvent_DEBUG;

	// BrnProgressionManager.h:829
	int32_t miAchievementToAward_DEBUG;

	// BrnProgressionManager.h:831
	Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u> mQueueOfTrophyCarUnLocks;

	// BrnProgressionManager.h:832
	CarData * mpCurrentCarData;

	// BrnProgressionManager.h:833
	LiveryData * mpCurrentLiveryData;

	// BrnProgressionManager.h:834
	uint32_t muNumPresetRaces;

	// BrnProgressionManager.h:835
	BrnProgression::ProgressionManager::LoadStage meLoadStage;

	// BrnProgressionManager.h:836
	BrnProgression::ProgressionManager::AILoadStage meAILoadStage;

	// BrnProgressionManager.h:837
	ResourcePtr<BrnProgression::ProgressionData> mpProgressionData;

	// BrnProgressionManager.h:838
	ResourcePtr<BrnAI::AISectionsData> mpAISectionData;

	// BrnProgressionManager.h:839
	const TriggerData * mpTriggerData;

	// BrnProgressionManager.h:841
	int32_t miLastUpdatedRival;

	// BrnProgressionManager.h:842
	int32_t miLastReturnedRival;

	// BrnProgressionManager.h:844
	StreetManager * mpStreetManager;

	// BrnProgressionManager.h:845
	BrnGameState::CarSelectManager * mpCarSelectManager;

	// BrnProgressionManager.h:846
	StuntModeScoring::AchievementManager * mpAchievementManager;

	// BrnProgressionManager.h:847
	BrnGameState::ModeManager * mpModeManager;

	// BrnProgressionManager.h:848
	BrnGameState::TrainingManager * mpTrainingManager;

	// BrnProgressionManager.h:849
	BrnGameState::StuntManager * mpStuntManager;

	// BrnProgressionManager.h:851
	const VehicleList * mpVehicleList;

	// BrnProgressionManager.h:853
	BrnWorld::EDistrict meLastPlayerDistrict;

	// BrnProgressionManager.h:855
	int32_t miNumberOfParCrashRoadRulesRuledByPlayer;

	// BrnProgressionManager.h:856
	int32_t miNumberOfParTimeRoadRulesRuledByPlayer;

	// BrnProgressionManager.h:857
	int32_t miNumberOfNumberOfCompleteRoadRulesRuledByPlayer;

	// BrnProgressionManager.h:859
	int32_t miMaxCarCount;

	// BrnProgressionManager.h:862
	CgsID mNewlyUnlockedCarID;

	// BrnProgressionManager.h:863
	BrnResource::ECarType meLeastUsedCarType;

	// BrnProgressionManager.h:865
	int8_t mi8CurrentProgressionRank;

	// BrnProgressionManager.h:866
	int8_t mi8HackEventRankNumber;

	// BrnProgressionManager.h:867
	bool mbHackEventNumberActive;

	// BrnProgressionManager.h:868
	bool mbForceAutoSaveForOneHundredPercent;

	// BrnProgressionManager.h:870
	bool mbHasJustRankedUp;

	// BrnProgressionManager.h:872
	bool mbUpdateRivals;

	// BrnProgressionManager.h:873
	bool mbReturnRivals;

	// BrnProgressionManager.h:875
	bool mbPlayerMedalsUpdateRequired;

	// BrnProgressionManager.h:876
	bool mbPlayerJustWonATrophyUpdateRequired;

	// BrnProgressionManager.h:879
	bool mbCheckForAllEventTypeComplete;

	// BrnProgressionManager.h:880
	bool mbNeedCheckForAllWinTypes;

	// BrnProgressionManager.h:881
	BrnProgression::RaceEventData::EModeType meModeToCheckForAllWinTypes;

	// BrnProgressionManager.h:882
	float32_t mfTimeTillAllEventTypeCompleteHudMessage;

	// BrnProgressionManager.h:885
	bool mbNeedToShowAllRivalsBeatenMessage;

	// BrnProgressionManager.h:886
	bool mbShowShutDownAllIfNeeded;

	// BrnProgressionManager.h:887
	float32_t mfTimeTillShowAllRivalsBeatenMessage;

	// BrnProgressionManager.h:890
	bool mbDriveThruDataDirtyFlag;

	// BrnProgressionManager.h:893
	int32_t miPreWorldUpdate;

	// BrnProgressionManager.h:894
	int32_t miPostWorldUpdate;

	// BrnProgressionManager.h:895
	int32_t miInterestManagerUpdate;

	// BrnProgressionManager.h:896
	int32_t miSendRivalaryUpdateMessage;

public:
	// BrnProgressionManager.h:133
	void Construct(BrnGameState::CarSelectManager *, StreetManager *, BrnGameState::TrainingManager *, BrnGameState::StuntManager *);

	// BrnProgressionManager.h:142
	bool Prepare(BrnGameState::GameStateModuleIO::OutputBuffer *, BrnGameState::ModeManager *, CgsModule::EventReceiverQueue<3072,16> *, const TriggerData *, StuntModeScoring::AchievementManager *);

	// BrnProgressionManager.h:146
	bool Release();

	// BrnProgressionManager.h:150
	void Destruct();

	// BrnProgressionManager.h:160
	void PreWorldUpdate(float32_t, float32_t, BrnGameState::GameStateModuleIO::OutputBuffer *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, BrnUpdateSet, bool);

	// BrnProgressionManager.h:166
	void PostWorldUpdate(float32_t, bool);

	// BrnProgressionManager.h:170
	const Rival * GetGiftCarId(BrnResource::ECarType);

	// BrnProgressionManager.h:175
	CarData * AddCar(CgsID, BrnProgression::CarData::UnlockType);

	// BrnProgressionManager.h:178
	const VehicleList * GetVehicleList() const;

	// BrnProgressionManager.h:181
	void SetCheckForAllEventTypeComplete();

	// BrnProgressionManager.h:184
	void ShowShutDownAllIfNeeded();

	// BrnProgressionManager.h:187
	void UnlockGiftCar();

	// BrnProgressionManager.h:190
	bool PlayerHasFinishedLastRank() const;

	// BrnProgressionManager.h:193
	int8_t GetProgressionRank() const;

	// BrnProgressionManager.h:196
	int8_t GetLastProgressionRank() const;

	// BrnProgressionManager.h:200
	void SetDebugEventRankNumber(int32_t);

	// BrnProgressionManager.h:204
	int8_t GetProgressionRankForGameMode(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:209
	int32_t GetRankThresholdForEvent(int32_t, BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:212
	float32_t GetProgressionRankNormalised() const;

	// BrnProgressionManager.h:216
	float32_t GetProgressionRankForGameModeNormalised(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:221
	int32_t GetStuntRunScoreTarget(const GameModeParams *, const StartGameModeParams *) const;

	// BrnProgressionManager.h:229
	uint32_t GetRacesAtLandmark(Race *, uint32_t, LandmarkIndex, bool) const;

	// BrnProgressionManager.h:233
	int32_t GetCustomRaceCountAtLandmark(LandmarkIndex) const;

	// BrnProgressionManager.h:238
	bool LandmarkHasAvailableRaces(LandmarkIndex) const;

	// BrnProgressionManager.h:244
	void OnPlayerCarChange(CgsID, CgsID, bool);

	// BrnProgressionManager.h:247
	void OnLoadProfile();

	// BrnProgressionManager.h:254
	void OnTakedownTo(InputBuffer::GameActionQueue *, BrnGameState::ETakedownType, CgsID, bool);

	// BrnProgressionManager.h:259
	void OnTakedownFrom(BrnGameState::ETakedownType, CgsID);

	// BrnProgressionManager.h:264
	void GetDerivedPatternVehicleCollection(CgsID, DerivedCarArray &);

	// BrnProgressionManager.h:269
	void GetDerivedColourVehicleCollection(CgsID, DerivedCarArray &);

	// BrnProgressionManager.h:275
	void OnDriveThru(CgsID, BrnTrigger::GenericRegion::Type, InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:279
	void SendGameCompletionResults(InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:286
	void OnEventFinishUpdateProfile(InputBuffer::GameActionQueue *, uint32_t, ShowModeResultsAction *, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProgressionManager.h:290
	void ApplyVehicleList(const VehicleList *);

	// BrnProgressionManager.h:295
	void CheckForAllModeTypeCompletion(InputBuffer::GameActionQueue *, BrnProgression::RaceEventData::EModeType);

	// BrnProgressionManager.h:299
	uint32_t GetEventCountForType(BrnProgression::RaceEventData::EModeType);

	// BrnProgressionManager.h:304
	void OnFaceOffWon(CgsID, InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:308
	void OnTrophyUnlock(BrnProgression::TrophyUnlockData::UnlockType);

	// BrnProgressionManager.h:311
	void CheckForSpecialCarUnlocks();

	// BrnProgressionManager.h:315
	void UnlockTrophyForEventTypeAllCompleted(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProgressionManager.h:319
	void UnlockCar(CgsID);

	// BrnProgressionManager.h:324
	bool UnlockCarFromTrophy(CgsID, BrnProgression::TrophyUnlockData::UnlockType);

	// BrnProgressionManager.h:329
	void OnPursuitWon(CgsID, InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:334
	void DefeatRivalAndUnlockCar(int32_t, BrnProgression::EUnlockSequenceType);

	// BrnProgressionManager.h:338
	bool IsAtFaceOffLevel(CgsID);

	// BrnProgressionManager.h:341
	void CheckForAllRivalsUnlocked();

	// BrnProgressionManager.h:345
	bool IsAtRoadRageLevel(CgsID);

	// BrnProgressionManager.h:349
	bool IsAtPursuitLevel(CgsID);

	// BrnProgressionManager.h:353
	bool HasBeenHit(CgsID);

	// BrnProgressionManager.h:357
	BrnProgression::EOfflineRivalryStatus GetRivalryStatus(CgsID);

	// BrnProgressionManager.h:361
	void ResetProfile();

	// BrnProgressionManager.h:364
	const BrnProgression::Profile * GetProfile() const;

	// BrnProgressionManager.h:367
	Profile * GetProfile();

	// BrnProgressionManager.h:370
	const CarData * GetCurrentCarData() const;

	// BrnProgressionManager.h:373
	CarData * GetCurrentCarData();

	// BrnProgressionManager.h:377
	const Race * FindPresetRace(CgsID);

	// BrnProgressionManager.h:381
	bool IsCarUnlocked(CgsID) const;

	// BrnProgressionManager.h:385
	uint16_t FindLandmarkAISectionIndex(CgsID) const;

	// BrnProgressionManager.h:389
	uint16_t FindAISectionIndexForPosition(Vector3) const;

	// BrnProgressionManager.h:394
	uint16_t FindAISectionIndexForPosition(Vector3, AISectionPointMap *) const;

	// BrnProgressionManager.h:398
	AISectionPointMap * BuildAISectionPointMap(LinearMalloc *) const;

	// BrnProgressionManager.h:403
	void OnPropHit(uint16_t, uint16_t);

	// BrnProgressionManager.h:407
	void RequestUpdateRivals();

	// BrnProgressionManager.h:411
	void RequestReturnRivals();

	// BrnProgressionManager.h:415
	const BrnProgression::ProgressionData * GetProgressionData() const;

	// BrnProgressionManager.h:418
	int32_t GetMaxCarCount();

	// BrnProgressionManager.h:424
	void AddStuntElement(BrnGameState::StuntElementType, CgsID, BrnWorld::ECounty);

	// BrnProgressionManager.h:428
	void AddStunt(CgsID);

	// BrnProgressionManager.h:432
	int32_t GetStuntElementCount(BrnGameState::StuntElementType) const;

	// BrnProgressionManager.h:437
	int32_t GetStuntElementCountByCounty(BrnGameState::StuntElementType, BrnWorld::ECounty) const;

	// BrnProgressionManager.h:440
	int32_t GetStuntCount() const;

	// BrnProgressionManager.h:445
	bool IsStuntElementDone(BrnGameState::StuntElementType, CgsID) const;

	// BrnProgressionManager.h:449
	bool IsStuntDone(CgsID) const;

	// BrnProgressionManager.h:454
	void GetGameStats(GameStats *, BrnGameState::StuntManager *) const;

	// BrnProgressionManager.h:457
	void OnPowerParkResult(int32_t, bool);

	// BrnProgressionManager.h:460
	void OnMugshotSent();

	// BrnProgressionManager.h:465
	void OnOnlineRaceComplete(int32_t, bool);

	// BrnProgressionManager.h:469
	void SetDriveThrusDirtyFlag();

	// BrnProgressionManager.h:473
	bool TestAndResetDriveThrusDirtyFlag();

	// BrnProgressionManager.h:478
	void SetRoadRuleNetworkHighScores(ChallengeHighScoreEntry *);

	// BrnProgressionManager.h:483
	void SetRoadRuleChallengeData(ChallengePlayerScoreEntry *);

	// BrnProgressionManager.h:486
	void RequestMedalUpdate();

	// BrnProgressionManager.h:494
	int32_t AddMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, LiveRevengeRelationship::UniquePlayerID, DateAndTime, WorldRegion);

	// BrnProgressionManager.h:500
	int32_t DeleteMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProgressionManager.h:508
	int32_t RecaptureMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t, DateAndTime, WorldRegion);

	// BrnProgressionManager.h:514
	bool LockOrUnlockMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProgressionManager.h:519
	int32_t GetNumMugshots(BrnGameState::GameStateModuleIO::EImageGalleryType);

	// BrnProgressionManager.h:525
	MugshotInfo * GetMugshotInfo(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProgressionManager.h:531
	int32_t FindMugshotInfoByUniquePlayerID(BrnGameState::GameStateModuleIO::EImageGalleryType, LiveRevengeRelationship::UniquePlayerID);

	// BrnProgressionManager.h:536
	bool HasPlayerCompletedFreeburnChallenge(CgsID);

	// BrnProgressionManager.h:541
	void CompleteFreeburnChallenge(CgsID);

	// BrnProgressionManager.h:546
	void CompleteFreeburnChallengeBlock(int32_t);

	// BrnProgressionManager.h:550
	uint32_t HACK_SetupRaces(Race *);

	// BrnProgressionManager.h:556
	void HACK_SetupRaceWithLandMarks(Race &, CgsID *, uint32_t);

	// BrnProgressionManager.h:559
	uint32_t GetNumberOfParCrashRoadRulesRuledByPlayer() const;

	// BrnProgressionManager.h:563
	void SetNumberOfParCrashRoadRulesRuledByPlayer(uint32_t);

	// BrnProgressionManager.h:566
	uint32_t GetNumberOfParTimeRoadRulesRuledByPlayer() const;

	// BrnProgressionManager.h:570
	void SetNumberOfParTimeRoadRulesRuledByPlayer(uint32_t);

	// BrnProgressionManager.h:573
	uint32_t GetNumberOfCompleteRoadRulesRuledByPlayer();

	// BrnProgressionManager.h:577
	void SetNumberOfCompleteRoadRulesRuledByPlayer(uint32_t);

	// BrnProgressionManager.h:580
	CgsID GetNewlyUnlockedCarID();

	// BrnProgressionManager.h:583
	bool HasJustRankedUp();

	// BrnProgressionManager.h:586
	void ClearRankUpCache();

	// BrnProgressionManager.h:589
	uint32_t GetTotalWinsForNextRank() const;

	// BrnProgressionManager.h:592
	BrnProgression::RaceEventData::EModeType GetGameModeForEvent(const BrnProgression::RaceEventData *) const;

	// BrnProgressionManager.h:595
	BrnProgression::RaceEventData::EOnlineModeType GetOnlineGameModeForEvent(const BrnProgression::RaceEventData *) const;

	// BrnProgressionManager.h:599
	BrnGameState::GameStateModuleIO::EGameModeType GetEventModeTypeFromRaceEventData(BrnProgression::RaceEventData::EModeType);

	// BrnProgressionManager.h:603
	BrnGameState::GameStateModuleIO::EGameModeType GetOnlineEventModeTypeFromRaceEventData(BrnProgression::RaceEventData::EOnlineModeType);

	// BrnProgressionManager.h:608
	uint32_t GetEventTypeUniqueWinCount(BrnProgression::RaceEventData::EModeType, BrnProgression::ProfileEvent::Flags);

	// BrnProgressionManager.h:612
	bool DoesGameModeRankUpIndividually(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProgressionManager.h:616
	bool HasEventBeenWonPreviously(uint32_t);

	// BrnProgressionManager.h:620
	void RepairUnlockedVehicle(CgsID);

	// BrnProgressionManager.h:624
	float32_t GetPlayerBaseDeformAmount(CgsID) const;

	// BrnProgressionManager.h:630
	void GetCarColourAndPalette(CgsID, uint32_t &, uint32_t &) const;

	// BrnProgressionManager.h:634
	void UnlockDerivedCarCollection(const DerivedCarArray &);

	// BrnProgressionManager.h:637
	void FixGameModeRanks();

	// BrnProgressionManager.h:641
	void FixRankForSingleEvent(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProgressionManager.h:644
	int32_t GetTrueNumberOfRivals() const;

	// BrnProgressionManager.h:647
	StuntModeScoring::AchievementManager * GetAchievementManager();

	// BrnProgressionManager.h:650
	StreetManager * GetStreetManager() const;

	// BrnProgressionManager.h:653
	float32_t GetDistanceDrivenInCurrentCar();

	// BrnProgressionManager.h:657
	bool AreRoadRulesAvailable() const;

private:
	// BrnProgressionManager.h:665
	float32_t GetProgressionRankNormalised(float32_t) const;

	// BrnProgressionManager.h:669
	int8_t CalculateRankFromMedalTotal(uint32_t) const;

	// BrnProgressionManager.h:674
	void UnlockToProgressionRank(int8_t, InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:678
	void AddEventTypeToEventTotals(const EventJunction *);

	// BrnProgressionManager.h:681
	int32_t GetNumberOfBeatenRivals() const;

	// BrnProgressionManager.h:685
	void UnlockSpecialCars(BrnResource::VehicleListEntry::ELiveryType);

	// BrnProgressionManager.h:688
	void ClearMedalsOnRankUp();

	// BrnProgressionManager.h:691
	void SetupRoamingSections();

	// BrnProgressionManager.h:694
	float32_t ComputeCompletionPercentage() const;

	// BrnProgressionManager.h:699
	float32_t GetPS3AwardScoresPercentage() const;

	// BrnProgressionManager.h:704
	void ComputeLandmarkAISectionIndices();

	// BrnProgressionManager.h:707
	float32_t GetPercentageOfEventsCompleted() const;

	// BrnProgressionManager.h:712
	bool LoadProgressionData(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnProgressionManager.h:717
	bool LoadAIData(BrnGameState::GameStateModuleIO::OutputBuffer *, CgsModule::EventReceiverQueue<3072,16> *);

	// BrnProgressionManager.h:721
	void UpdateRivals(InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:725
	void ProcessLoadedPresetRaces();

	// BrnProgressionManager.h:729
	void UpdatePlayerStatsLevels(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnProgressionManager.h:733
	void SendTrophyUnlockUpdate(InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:737
	CgsID GetGifCarId(BrnResource::ECarType);

	// BrnProgressionManager.h:741
	void UpdatePlayerMedals(InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:745
	CgsID UnlockRivals(InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:750
	void RaceToSavedRace(const Race *, SavedRace *) const;

	// BrnProgressionManager.h:755
	void SavedRaceToRace(const SavedRace *, Race *) const;

	// BrnProgressionManager.h:762
	void SendRivalryUpdateMessage(InputBuffer::GameActionQueue *, BrnProgression::EOfflineRivalryStatus, RivalData *, CgsID);

	// BrnProgressionManager.h:767
	void AddDistanceDriven(float32_t, bool);

	// BrnProgressionManager.h:773
	void AddRivalToWorld(const Rival *, int32_t, InputBuffer::GameActionQueue *);

	// BrnProgressionManager.h:776
	void UnlockDefaultPlayerCars();

	// BrnProgressionManager.h:779
	void UnlockAllJunkyards();

	// BrnProgressionManager.h:783
	void DEBUG_ClearMedals();

}

