// BrnInterestManager.h:24
namespace BrnProgression {
	// BrnProfile.h:57
	const float32_t KF_PLAYER_BOOST_THRESHOLD;

	// BrnProfile.h:58
	const float32_t KF_PLAYERSTAT_OVERDRIVE_EARNER;

	// BrnProfile.h:59
	const float32_t KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX;

	// BrnProfile.h:62
	const int32_t KI_MAX_PROFILE_CAR_COUNT = 512;

	// BrnProfile.h:65
	const float32_t KF_PLAYER_STAT_TEMPORARY_ACCELERATOR;

	// BrnProfile.h:68
	const int32_t KI_PS3_ACHIEVEMENT_COUNT = 60;

}

// BrnProfile.h:382
extern const int32_t KI_NAME_LENGTH = 32;

// BrnProfile.h:383
extern const int32_t KI_MAX_RIVAL_COUNT = 64;

// BrnProfile.h:384
extern const int32_t KI_MAX_EVENTS = 175;

// BrnProfile.h:1133
extern const int32_t KI_PLAYERLICENCEPICTURE_WIDTH = 160;

// BrnProfile.h:1134
extern const int32_t KI_PLAYERLICENCEPICTURE_HEIGHT = 120;

// BrnProfile.h:1135
extern const int32_t KI_PLAYERLICENCEPICTURE_BITS_PERPIXEL = 4;

// BrnProfile.h:1140
extern const int32_t KI_PLAYERLICENCEPICTURE_TEXTURESIZEINBYTES = 9600;

// BrnInterestManager.h:24
namespace BrnProgression {
	// BrnProfile.h:55
	using BrnGameState::GameStateModuleIO;

	// BrnProfile.h:57
	const float32_t KF_PLAYER_BOOST_THRESHOLD;

	// BrnProfile.h:58
	const float32_t KF_PLAYERSTAT_OVERDRIVE_EARNER;

	// BrnProfile.h:59
	const float32_t KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX;

	// BrnProfile.h:62
	const int32_t KI_MAX_PROFILE_CAR_COUNT = 512;

	// BrnProfile.h:65
	const float32_t KF_PLAYER_STAT_TEMPORARY_ACCELERATOR;

	// BrnProfile.h:68
	const int32_t KI_PS3_ACHIEVEMENT_COUNT = 60;

}

// BrnInterestManager.h:24
namespace BrnProgression {
	// Declaration
	struct CarData {
		// BrnProfile.h:92
		enum UnlockType {
			E_UNLOCK_TYPE_UNLOCK = 0,
			E_UNLOCK_TYPE_GIFT = 1,
			E_UNLOCK_TYPE_TROPHY = 2,
			E_UNLOCK_TYPE_SHUTDOWN_RIVAL = 3,
			E_UNLOCK_TYPE_GOLD_SILVER = 4,
			E_UNLOCK_TYPE_SPONSOR = 5,
		}

	}

	// Declaration
	struct RivalData {
		// BrnProfile.h:195
		enum EState {
			E_STATE_LOCKED = 0,
			E_STATE_UNLOCKED = 1,
			E_STATE_FLEEING = 2,
			E_STATE_BEATEN = 3,
			E_STATE_COUNT = 4,
		}

	}

	// Declaration
	struct ProfileEvent {
		// BrnProfile.h:296
		enum Flags {
			E_FLAG_UNDISCOVERED = 0,
			E_FLAG_DISCOVERED = 1,
			E_FLAG_FINISHED = 2,
			E_FLAG_RANK_WIN = 4,
			E_FLAG_NON_RANK_WIN = 8,
			E_FLAG_WON_SPECIAL_EVENT_BEFORE = 16,
			E_FLAG_WON_EVENT_BEFORE = 32,
		}

	}

	// BrnProfile.h:57
	const float32_t KF_PLAYER_BOOST_THRESHOLD;

	// BrnProfile.h:58
	const float32_t KF_PLAYERSTAT_OVERDRIVE_EARNER;

	// BrnProfile.h:59
	const float32_t KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX;

	// BrnProfile.h:62
	const int32_t KI_MAX_PROFILE_CAR_COUNT = 512;

	// BrnProfile.h:65
	const float32_t KF_PLAYER_STAT_TEMPORARY_ACCELERATOR;

	// BrnProfile.h:68
	const int32_t KI_PS3_ACHIEVEMENT_COUNT = 60;

}

// BrnProfile.h:86
struct BrnProgression::CarData {
private:
	// BrnProfile.h:151
	CgsID mId;

	// BrnProfile.h:153
	uint8_t mu8ColourIndex;

	// BrnProfile.h:154
	uint8_t mu8PaletteIndex;

	// BrnProfile.h:156
	bool mbUnlockSequenceAlreadyShown;

	// BrnProfile.h:157
	float32_t mfUnlockDeformedAmount;

	// BrnProfile.h:158
	BrnProgression::CarData::UnlockType meUnlockType;

public:
	// BrnProfile.h:106
	void Construct(CgsID);

	// BrnProfile.h:109
	CgsID GetId() const;

	// BrnProfile.h:112
	uint16_t GetEventCount() const;

	// BrnProfile.h:115
	bool IsUnlockType(BrnProgression::CarData::UnlockType) const;

	// BrnProfile.h:118
	BrnProgression::CarData::UnlockType GetUnlockType() const;

	// BrnProfile.h:121
	bool WasUnlockSequenceAlreadyShown() const;

	// BrnProfile.h:124
	void SetUnlockSequenceAlreadyShown();

	// BrnProfile.h:127
	float32_t GetUnlockDeformationAmount() const;

	// BrnProfile.h:130
	uint32_t GetColourIndex() const;

	// BrnProfile.h:133
	uint32_t GetPaletteIndex() const;

	// BrnProfile.h:137
	void SetUnlockDeformationAmount(float32_t);

	// BrnProfile.h:140
	void SetUnlockType(BrnProgression::CarData::UnlockType);

	// BrnProfile.h:144
	void SetColourIndex(uint32_t);

	// BrnProfile.h:148
	void SetPaletteIndex(uint32_t);

}

// BrnProfile.h:170
struct BrnProgression::LiveryData {
	// BrnProfile.h:172
	CgsID mBaseCarId;

	// BrnProfile.h:173
	CgsID mChosenLiveryCarId;

	// BrnProfile.h:175
	float32_t mfDistanceDriven;

}

// BrnProfile.h:188
struct BrnProgression::RivalData {
private:
	// BrnProfile.h:268
	CgsID mRivalId;

	// BrnProfile.h:269
	CgsID mCarId;

	// BrnProfile.h:270
	BrnProgression::RivalData::EState meState;

	// BrnProfile.h:272
	int32_t miEventCount;

	// BrnProfile.h:273
	int32_t miTakedownFromCount;

	// BrnProfile.h:274
	int32_t miVerticalTakedownFromCount;

	// BrnProfile.h:275
	int32_t miTakedownToCount;

	// BrnProfile.h:276
	int32_t miVerticalTakedownToCount;

	// BrnProfile.h:277
	int32_t miTakedownToInEventCount;

	// BrnProfile.h:278
	int32_t miTakedownToInLastEventCount;

	// BrnProfile.h:279
	int32_t miEventMissingCount;

	// BrnProfile.h:281
	bool mbHasBeenHit;

public:
	// BrnProfile.h:208
	void Construct(CgsID, CgsID);

	// BrnProfile.h:211
	CgsID GetCarId() const;

	// BrnProfile.h:214
	CgsID GetRivalId() const;

	// BrnProfile.h:217
	int32_t GetEventCount() const;

	// BrnProfile.h:220
	int32_t GetTakedownFromCount() const;

	// BrnProfile.h:223
	int32_t GetVerticalTakedownFromCount() const;

	// BrnProfile.h:226
	int32_t GetTakedownToCount() const;

	// BrnProfile.h:229
	int32_t GetVerticalTakedownToCount() const;

	// BrnProfile.h:232
	int32_t GetTakedownToInLastEventCount() const;

	// BrnProfile.h:235
	int32_t GetEventMissingCount() const;

	// BrnProfile.h:238
	bool HasBeenHit() const;

	// BrnProfile.h:241
	bool IsDefeated() const;

	// BrnProfile.h:244
	BrnProgression::RivalData::EState GetState() const;

	// BrnProfile.h:248
	void SetState(BrnProgression::RivalData::EState);

	// BrnProfile.h:252
	void AddTakedownFrom(bool);

	// BrnProfile.h:256
	void AddTakedownTo(bool);

	// BrnProfile.h:259
	void OnEventFinished();

	// BrnProfile.h:262
	void OnEventCompleted();

	// BrnProfile.h:265
	void SetHit();

}

// BrnProfile.h:293
struct BrnProgression::ProfileEvent {
private:
	// BrnProfile.h:335
	uint32_t muEventID;

	// BrnProfile.h:336
	uint16_t muFlags;

public:
	// BrnProfile.h:309
	void Construct(uint32_t);

	// BrnProfile.h:312
	uint32_t GetID() const;

	// BrnProfile.h:316
	uint16_t GetFlags() const;

	// BrnProfile.h:320
	void SetFlags(uint16_t);

	// BrnProfile.h:324
	bool IsFlagSet(BrnProgression::ProfileEvent::Flags) const;

	// BrnProfile.h:328
	void EnableFlags(uint16_t);

	// BrnProfile.h:332
	void ClearFlags(uint16_t);

}

// BrnProfile.h:348
struct BrnProgression::MugshotInfo {
	// CgsUniquePlayerID.h:47
	typedef UniquePlayerIDPS3 UniquePlayerID;

	// BrnProfile.h:351
	MugshotInfo::UniquePlayerID mUniquePlayerID;

	// BrnProfile.h:352
	DateAndTime mCaptureDate;

	// BrnProfile.h:353
	WorldRegion mWorldRegion;

	// BrnProfile.h:354
	int32_t miNumCaptures;

	// BrnProfile.h:355
	uint16_t mu16FileID;

	// BrnProfile.h:356
	bool mbLocked;

public:
	// BrnProfile.h:365
	void Construct(MugshotInfo::UniquePlayerID, DateAndTime, WorldRegion, uint16_t);

}

// BrnProfile.h:378
struct BrnProgression::Profile {
	// BrnProfile.h:382
	extern const int32_t KI_NAME_LENGTH = 32;

	// BrnProfile.h:383
	extern const int32_t KI_MAX_RIVAL_COUNT = 64;

	// BrnProfile.h:384
	extern const int32_t KI_MAX_EVENTS = 175;

	// BrnProfile.h:1133
	extern const int32_t KI_PLAYERLICENCEPICTURE_WIDTH = 160;

	// BrnProfile.h:1134
	extern const int32_t KI_PLAYERLICENCEPICTURE_HEIGHT = 120;

	// BrnProfile.h:1135
	extern const int32_t KI_PLAYERLICENCEPICTURE_BITS_PERPIXEL = 4;

	// BrnProfile.h:1136
	extern const renderengine::PixelFormat KE_PLAYERLICENCEPICTURE_PIXELFORMAT;

	// BrnProfile.h:1140
	extern const int32_t KI_PLAYERLICENCEPICTURE_TEXTURESIZEINBYTES = 9600;

private:
	// BrnProfile.h:1143
	extern const int32_t KI_DESCRIPTION_LENGTH = 256;

	// BrnProfile.h:1171
	int32_t miVersionNumber;

	// BrnProfile.h:1174
	char[32] macName;

	// BrnProfile.h:1175
	Vector3 mCarPosition;

	// BrnProfile.h:1176
	Vector3 mCarDirection;

	// BrnProfile.h:1177
	CgsID mSpawnCarId;

	// BrnProfile.h:1178
	CgsID mSpawnWheelId;

	// BrnProfile.h:1179
	uint32_t muTimeStampOfLastRoadRulesDownload;

	// BrnProfile.h:1180
	float32_t mfDistanceDrivenOnline;

	// BrnProfile.h:1181
	float32_t mfDistanceDrivenOffline;

	// BrnProfile.h:1182
	float32_t mfInCarTimePlayed;

	// BrnProfile.h:1183
	int8_t mi8CurrentProgressionRank;

	// BrnProfile.h:1184
	int8_t mi8PowerParkingBestRating;

	// BrnProfile.h:1185
	int8_t mi8PowerParkingBetweenOtherPlayersBestRating;

	// BrnProfile.h:1186
	uint32_t muBestNewBurnoutChainScore;

	// BrnProfile.h:1188
	int32_t[17] maGameModeTypeAmount;

	// BrnProfile.h:1189
	int32_t[17] maGameModeTypeAmountDiscovered;

	// BrnProfile.h:1190
	int32_t[17] maGameModeTypeAmountCompleted;

	// BrnProfile.h:1191
	int32_t[17] maGameModeTypeAmountCompletedSinceTheStart;

	// BrnProfile.h:1194
	int32_t miTotalTakedownCount;

	// BrnProfile.h:1195
	int32_t miTotalOnlineVerticleTakedownCount;

	// BrnProfile.h:1196
	int32_t[13] maiTakedownTypeCounts;

	// BrnProfile.h:1199
	int32_t[10] maiWinsPerOfflineGameMode;

	// BrnProfile.h:1200
	int32_t[10] maiRankWinsPerOfflineGameMode;

	// BrnProfile.h:1201
	int32_t[10] maiLossesPerOfflineGameMode;

	// BrnProfile.h:1204
	int32_t miCompletedBarrelRolls;

	// BrnProfile.h:1205
	float32_t mfCompletedAirSpinAngle;

	// BrnProfile.h:1206
	float32_t mfCompletedHandbreakTurnAngle;

	// BrnProfile.h:1207
	float32_t mfCompletedDriftDistance;

	// BrnProfile.h:1208
	float32_t mfOncomingDistance;

	// BrnProfile.h:1209
	float32_t mfAirMaximum;

	// BrnProfile.h:1210
	int32_t miHighestShowTimeScore;

	// BrnProfile.h:1211
	int32_t miBestStuntRunScore;

	// BrnProfile.h:1214
	int32_t miCarCount;

	// BrnProfile.h:1215
	int32_t miLiveryDataCount;

	// BrnProfile.h:1216
	int32_t miRivalCount;

	// BrnProfile.h:1217
	int32_t miEventCount;

	// BrnProfile.h:1220
	CarData[512] maCars;

	// BrnProfile.h:1221
	LiveryData[512] maLiveryChoices;

	// BrnProfile.h:1222
	RivalData[64] maRivals;

	// BrnProfile.h:1223
	ProfileEvent[175] maEvents;

	// BrnProfile.h:1224
	Set<CgsID,512u>[3] maStuntElements;

	// BrnProfile.h:1226
	uint32_t muMedalCountFromTheStart;

	// BrnProfile.h:1228
	bool mbGoldCarsUnlocked;

	// BrnProfile.h:1229
	bool mbSilverCarsUnlocked;

	// BrnProfile.h:1231
	Set<CgsID,5u> mJunkYardsDriveThruSet;

	// BrnProfile.h:1232
	Set<CgsID,11u> mBodyShopsDriveThruSet;

	// BrnProfile.h:1233
	Set<CgsID,5u> mPaintShopsDriveThruSet;

	// BrnProfile.h:1234
	Set<CgsID,14u> mGasStationsDriveThruSet;

	// BrnProfile.h:1235
	Set<CgsID,11u> mCarParksDriveThruSet;

	// BrnProfile.h:1237
	Array<CgsID,2000u> maFreeBurnChallengeData;

	// Unknown accessibility
	// BrnPropConstants.h:192
	typedef BitArray<300000u> HitPropsBitArray;

	// BrnProfile.h:1238
	Profile::HitPropsBitArray mabHitPropBitArray;

	// BrnProfile.h:1241
	int16_t[3][5] maaiStuntCountsByCounty;

	// BrnProfile.h:1244
	ChallengeHighScoreEntry[64] maNetworkChallengeData;

	// BrnProfile.h:1245
	ChallengePlayerScoreEntry[64] maChallengeData;

	// BrnProfile.h:1246
	uint32_t muLastRoadRulesResetTime;

	// BrnProfile.h:1250
	NetworkTexture mPlayerLicencePicture;

	// BrnProfile.h:1252
	char[9600] macPlayerLicenceTextureData;

	// BrnProfile.h:1253
	bool mbPlayerLicencePictureIsValid;

	// BrnProfile.h:1256
	Array<BrnProgression::MugshotInfo,30u>[5] maaMugshotInfo;

	// BrnProfile.h:1257
	BitArray<30u>[5] maAvailableMugshotFileIDs;

	// BrnProfile.h:1259
	float32_t[3] mafCarTypes;

	// BrnProfile.h:1260
	BrnResource::ECarType meCurrentCarType;

	// BrnProfile.h:1263
	BitArray<256u> maHasPlayerSeenTraining;

	// BrnProfile.h:1266
	int32_t miNumOnlineRacesDone;

	// BrnProfile.h:1267
	int32_t miNumOnlineRacesWon;

	// BrnProfile.h:1268
	int32_t miNumMugshotsSent;

	// BrnProfile.h:1271
	DateAndTime mDateLicenceIssued;

	// BrnProfile.h:1272
	DateAndTime mDate100PercentCompleted;

	// BrnProfile.h:1275
	int32_t miHighestNumberOfTakeDownsInRoadRage;

	// BrnProfile.h:1279
	BitArray<35u> mSeenTrophyAwardBitArray;

	// BrnProfile.h:1282
	BitArray<60u> mAchievementsEarnt;

	// BrnProfile.h:1287
	bool mb100PercentCompletionSequenceShown;

	// BrnProfile.h:1290
	bool mbIsNewProfile;

	// BrnProfile.h:1293
	bool mbCreditsSequenceViewed;

	// BrnProfile.h:1296
	bool mbOneHundredHudMessageViewed;

	// BrnProfile.h:1299
	bool mbHasUnlockedCredits;

	// BrnProfile.h:1301
	bool mbHaveSet100PercentCompletedDate;

	// BrnProfile.h:1302
	bool mbHaveSeenEliteCompletionSequence;

	// BrnProfile.h:1304
	bool mbRedundantBool4;

	// BrnProfile.h:1306
	int8_t miPad1;

	// BrnProfile.h:1307
	int16_t miPad2;

	// BrnProfile.h:1308
	uint32_t muRoadRulesIDLowBits;

	// BrnProfile.h:1310
	BitArray<6u> mSeenCompleteAllEventTypeArray;

	// BrnProfile.h:1312
	float32_t mfRealTimePlayed;

	// BrnProfile.h:1315
	float32_t mfRedundantFloat4;

	// BrnProfile.h:1317
	uint32_t muRoadRulesIDHighBits;

	// BrnProfile.h:1318
	int16_t miPad3;

	// BrnProfile.h:1319
	int8_t miPad4;

public:
	// BrnProfile.h:422
	void Construct();

	// BrnProfile.h:425
	void FixUp();

	// BrnProfile.h:429
	bool ValidateProfile(const BrnProgression::ProgressionData *) const;

	// BrnProfile.h:432
	bool IsIncorrectVersion() const;

	// BrnProfile.h:435
	bool IsUpgradable() const;

	// BrnProfile.h:440
	bool UpgradeFrom(const void *, int32_t *);

	// BrnProfile.h:443
	const char * GetName() const;

	// BrnProfile.h:446
	Vector3 GetCarPosition() const;

	// BrnProfile.h:449
	Vector3 GetCarDirection() const;

	// BrnProfile.h:452
	CgsID GetSpawnCarId() const;

	// BrnProfile.h:455
	CgsID GetSpawnWheelId() const;

	// BrnProfile.h:458
	const int32_t GetCarCount() const;

	// BrnProfile.h:462
	const CarData * GetCarData(int32_t) const;

	// BrnProfile.h:465
	int32_t GetRivalCount() const;

	// BrnProfile.h:469
	const RivalData * GetRivalData(int32_t) const;

	// BrnProfile.h:472
	int32_t GetTotalCarsToShutDown() const;

	// BrnProfile.h:476
	void SetNewHighShowtimeScore(int32_t);

	// BrnProfile.h:479
	int32_t GetNewHighShowtimeScore() const;

	// BrnProfile.h:483
	void SetNewOncomingMaximum(float32_t);

	// BrnProfile.h:486
	float32_t GetNewOncomingMaximum() const;

	// BrnProfile.h:490
	void SetNewAirMaximum(float32_t);

	// BrnProfile.h:493
	float32_t GetAirMaximum() const;

	// BrnProfile.h:496
	float32_t GetDistanceDrivenOnline() const;

	// BrnProfile.h:499
	float32_t GetDistanceDrivenOffline() const;

	// BrnProfile.h:502
	int32_t SetBestStuntRunScore() const;

	// BrnProfile.h:506
	void SetBestStuntRunScore(int32_t);

	// BrnProfile.h:510
	void AddGameModeTypeToTotals(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProfile.h:514
	int32_t GetGameModeTypeAmount(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProfile.h:518
	void AddGameModeTypeToDiscovered(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProfile.h:522
	int32_t GetGameModeTypeDiscovered(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProfile.h:526
	void AddGameModeTypeCompleted(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProfile.h:529
	void ClearCurrentEventCompleteCounts();

	// BrnProfile.h:533
	int32_t GetGameModeTypeCompletedAmountSinceTheStart(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProfile.h:537
	int32_t GetGameModeTypeCompletedAmountForThisRank(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProfile.h:541
	bool CheckForOnlineEventCompletionTrophyUnlock(uint32_t);

	// BrnProfile.h:544
	float32_t GetInCarTimePlayed() const;

	// BrnProfile.h:547
	float32_t GetRealTimePlayed() const;

	// BrnProfile.h:550
	int32_t GetTotalTakedownCount() const;

	// BrnProfile.h:553
	int8_t GetCurrentProgressionRank() const;

	// BrnProfile.h:556
	bool GetOneHundredHudMessageViewed() const;

	// BrnProfile.h:560
	void SetOneHundredHudMessageViewed(bool);

	// BrnProfile.h:564
	// Declaration
	int32_t GetTakedownTypeCount(TakedownType) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnProfile.h:74
		typedef BrnGameState::ETakedownType TakedownType;

	}

	// BrnProfile.h:567
	void RecordPlayerOnlineTakedown();

	// BrnProfile.h:570
	int32_t GetTotalPlayerOnlineVerticleTakdowns();

	// BrnProfile.h:574
	int32_t GetNumWinsForGameMode(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProfile.h:578
	int32_t GetNumRankWinsForGameMode(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProfile.h:583
	void SetNumRankWinsForGameMode(int32_t, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProfile.h:587
	int32_t GetNumLossesForGameMode(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProfile.h:591
	void SetCurrentCarType(BrnResource::ECarType);

	// BrnProfile.h:594
	BrnResource::ECarType GetCurrentCarType() const;

	// BrnProfile.h:597
	BrnResource::ECarType GetCurrentCarTypeWithMaxDistance() const;

	// BrnProfile.h:600
	BrnResource::ECarType GetCurrentCarTypeWithMinDistance() const;

	// BrnProfile.h:604
	BrnResource::ECarType GetNextTypeOfCarTypeUnlock(BrnResource::ECarType) const;

	// BrnProfile.h:607
	int32_t GetBestPowerParkingRating() const;

	// BrnProfile.h:610
	int32_t GetBestPowerParkingBetweenOtherPlayersRating() const;

	// BrnProfile.h:613
	void RecordPowerParkingRating(int32_t, bool);

	// BrnProfile.h:616
	uint32_t GetBestBurnoutChain() const;

	// BrnProfile.h:620
	void SetBestBurnoutChain(uint32_t);

	// BrnProfile.h:623
	void ResetCarTypeDistances();

	// BrnProfile.h:627
	void SetName(const char *);

	// BrnProfile.h:631
	void SetCarPosition(Vector3);

	// BrnProfile.h:635
	void SetCarDirection(Vector3);

	// BrnProfile.h:639
	void SetSpawnCarId(CgsID);

	// BrnProfile.h:643
	void SetSpawnWheelId(CgsID);

	// BrnProfile.h:647
	void AddDistanceDrivenOnline(float32_t);

	// BrnProfile.h:651
	void AddDistanceDrivenOffline(float32_t);

	// BrnProfile.h:655
	void AddInCarTimePlayed(float32_t);

	// BrnProfile.h:659
	void AddRealTimePlayed(float32_t);

	// BrnProfile.h:663
	void AddTakedown(TakedownType);

	// BrnProfile.h:667
	void AddWinForGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProfile.h:671
	void AddLossForGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProfile.h:675
	void SetCurrentProgressionRank(int8_t);

	// BrnProfile.h:680
	CarData * FindCar(CgsID);

	// BrnProfile.h:684
	const CarData * FindCar(CgsID) const;

	// BrnProfile.h:689
	void SetChosenLiveryIdForBaseCar(CgsID, CgsID);

	// BrnProfile.h:693
	CgsID GetChosenLiveryIdForBaseCar(CgsID) const;

	// BrnProfile.h:697
	LiveryData * GetChosenLiveryDataForBaseCar(CgsID);

	// BrnProfile.h:701
	RivalData * FindRival(CgsID);

	// BrnProfile.h:705
	const RivalData * FindRival(CgsID) const;

	// BrnProfile.h:709
	const ProfileEvent * FindEvent(uint32_t) const;

	// BrnProfile.h:713
	ProfileEvent * FindEvent(uint32_t);

	// BrnProfile.h:718
	CarData * AddCar(CgsID, BrnProgression::CarData::UnlockType);

	// BrnProfile.h:722
	void SetCarUnlockAlreadyShown(CgsID);

	// BrnProfile.h:727
	RivalData * AddRival(CgsID, CgsID);

	// BrnProfile.h:731
	ProfileEvent * AddEvent(uint32_t);

	// BrnProfile.h:737
	void AddStuntElement(BrnGameState::StuntElementType, CgsID, BrnWorld::ECounty);

	// BrnProfile.h:742
	BrnProgression::TrophyUnlockData::UnlockType AddDriveThru(CgsID, BrnTrigger::GenericRegion::Type);

	// BrnProfile.h:745
	bool AreAllDriveThrusCompleted();

	// BrnProfile.h:748
	int32_t GetDriveThruCount() const;

	// BrnProfile.h:751
	int32_t GetDriveThrusFound() const;

	// BrnProfile.h:754
	bool IsGameOneHundredPercentCompleted() const;

	// BrnProfile.h:757
	bool AreChromeCarsUnlocked() const;

	// BrnProfile.h:760
	bool AreGoldCarsUnlocked();

	// BrnProfile.h:763
	void ChromeCarsHaveBeenUnlocked();

	// BrnProfile.h:766
	void GoldCarsHaveBeenUnlocked();

	// BrnProfile.h:770
	int32_t GetStuntElementCount(BrnGameState::StuntElementType) const;

	// BrnProfile.h:775
	int32_t GetStuntElementCountByCounty(BrnGameState::StuntElementType, BrnWorld::ECounty) const;

	// BrnProfile.h:780
	bool IsStuntElementDone(BrnGameState::StuntElementType, CgsID) const;

	// BrnProfile.h:784
	int32_t GetNumDriveThrusDiscovered(BrnTrigger::GenericRegion::Type) const;

	// BrnProfile.h:789
	bool IsDriveThruDiscoverd(CgsID, BrnTrigger::GenericRegion::Type) const;

	// BrnProfile.h:792
	void OnEventFinished();

	// BrnProfile.h:795
	const ChallengeHighScoreEntry * GetNetworkChallengeData(int32_t) const;

	// BrnProfile.h:798
	const ChallengePlayerScoreEntry * GetUserChallengeData(int32_t) const;

	// BrnProfile.h:803
	void SetRoadRuleNetworkHighScores(ChallengeHighScoreEntry *);

	// BrnProfile.h:808
	void SetRoadRuleChallengeData(ChallengePlayerScoreEntry *);

	// BrnProfile.h:812
	uint32_t GetNetworkChallengeDownloadTimestamp() const;

	// BrnProfile.h:817
	void SetNetworkChallengeDownloadTimestamp(uint32_t);

	// BrnProfile.h:821
	uint32_t GetLastRoadRulesResetTime() const;

	// BrnProfile.h:826
	void SetLastRoadRulesResetTime(uint32_t);

	// BrnProfile.h:830
	uint64_t GetRoadRulesID();

	// BrnProfile.h:833
	uint32_t GetEventCount() const;

	// BrnProfile.h:837
	const ProfileEvent * GetEvent(uint32_t) const;

	// BrnProfile.h:841
	const ProfileEvent * GetEventWithID(int32_t) const;

	// BrnProfile.h:844
	void AddToMedalCountFromTheStart();

	// BrnProfile.h:847
	uint32_t GetMedalCountFromTheStart() const;

	// BrnProfile.h:853
	uint32_t GetTotalWinCount(uint32_t &, uint32_t &, uint32_t &) const;

	// BrnProfile.h:857
	int32_t GetMedalAchievedForEventWithID(int32_t) const;

	// BrnProfile.h:860
	const Profile::HitPropsBitArray & GetHitProps() const;

	// BrnProfile.h:865
	void RecordPropHit(int32_t, int32_t);

	// BrnProfile.h:873
	int32_t AddMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, MugshotInfo::UniquePlayerID, DateAndTime, WorldRegion);

	// BrnProfile.h:879
	int32_t DeleteMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProfile.h:887
	int32_t RecaptureMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t, DateAndTime, WorldRegion);

	// BrnProfile.h:893
	bool LockOrUnlockMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProfile.h:898
	int32_t GetNumMugshots(BrnGameState::GameStateModuleIO::EImageGalleryType);

	// BrnProfile.h:902
	int32_t GetNumAllMugshots();

	// BrnProfile.h:908
	MugshotInfo * GetMugshotInfo(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProfile.h:914
	int32_t FindMugshotInfoByUniquePlayerID(BrnGameState::GameStateModuleIO::EImageGalleryType, MugshotInfo::UniquePlayerID);

	// BrnProfile.h:919
	void SetHighestNumberOfTakeDownsInRoadRage(int32_t);

	// BrnProfile.h:923
	int32_t GetHighestNumberOfTakeDownsInRoadRage() const;

	// BrnProfile.h:926
	void OnMugshotSent();

	// BrnProfile.h:929
	int32_t GetNumMugshotsSent();

	// BrnProfile.h:934
	void ResetEventMedals(uint32_t, bool);

	// BrnProfile.h:942
	void SetBestStuntStats(int32_t, float32_t, float32_t, float32_t);

	// BrnProfile.h:947
	bool HasPlayerCompletedFreeburnChallenge(CgsID);

	// BrnProfile.h:952
	uint32_t CompleteFreeburnChallenge(CgsID);

	// BrnProfile.h:956
	void RepairUnlockedVehicle(CgsID);

	// BrnProfile.h:960
	float32_t GetPlayerBaseDeformAmount(CgsID) const;

	// BrnProfile.h:964
	void SetTrainingAlreadySeen(BrnProgression::ETrainingType);

	// BrnProfile.h:968
	bool HasPlayerSeenTrainingType(BrnProgression::ETrainingType) const;

	// BrnProfile.h:971
	void ClearTrainingFlags();

	// BrnProfile.h:975
	int32_t GetCompletedBarrelRolls() const;

	// BrnProfile.h:978
	float32_t GetCompletedAirSpinAngle() const;

	// BrnProfile.h:981
	float32_t GetCompletedHandbreakTurnAngle() const;

	// BrnProfile.h:984
	int32_t GetDiscoveredEventsCount() const;

	// BrnProfile.h:987
	int32_t GetCompletedDriftDistance() const;

	// BrnProfile.h:990
	int32_t GetNumOnlineRacesDone() const;

	// BrnProfile.h:993
	int32_t GetNumOnlineRacesWon() const;

	// BrnProfile.h:998
	void OnOnlineRaceComplete(int32_t, bool);

	// BrnProfile.h:1003
	NetworkTexture * GetPlayerLicencePicture();

	// BrnProfile.h:1010
	void SetPlayerLicencePicture(const NetworkTexture *);

	// BrnProfile.h:1016
	void SetIsNewProfile(bool);

	// BrnProfile.h:1020
	bool GetIsNewProfile() const;

	// BrnProfile.h:1024
	DateAndTime GetLicenceIssuedDate() const;

	// BrnProfile.h:1028
	void SetLicenceIssuedDateAsNow();

	// BrnProfile.h:1032
	DateAndTime Get100PercentCompletedDate() const;

	// BrnProfile.h:1036
	void Set100PercentCompletedDateAsNow();

	// BrnProfile.h:1040
	bool GetHaveSet100PercentCompletedDate() const;

	// BrnProfile.h:1044
	bool GetSeen100PercentCompletionSequence() const;

	// BrnProfile.h:1048
	void SetSeen100PercentCompletionSequence();

	// BrnProfile.h:1052
	bool GetSeenEliteCompletionSequence() const;

	// BrnProfile.h:1056
	void SetSeenEliteCompletionSequence();

	// BrnProfile.h:1061
	bool GetSeenTrophyUnlockSequence(BrnProgression::TrophyUnlockData::UnlockType) const;

	// BrnProfile.h:1066
	void SetSeenTrophyUnlockSequence(BrnProgression::TrophyUnlockData::UnlockType);

	// BrnProfile.h:1071
	bool GetSeenAllEventTypeWonMessage(BrnProgression::RaceEventData::EModeType) const;

	// BrnProfile.h:1076
	void SetSeenAllEventTypeWonMessage(BrnProgression::RaceEventData::EModeType);

	// BrnProfile.h:1080
	void OnCreditsSequenceViewed();

	// BrnProfile.h:1084
	bool HasCreditsSequenceBeenViewed() const;

	// BrnProfile.h:1088
	bool GetCreditsUnlocked() const;

	// BrnProfile.h:1092
	void SetCreditsUnlocked(bool);

	// BrnProfile.h:1100
	void WriteAchievement(int32_t);

	// BrnProfile.h:1105
	bool IsAchievementWritten(int32_t);

	// BrnProfile.h:1109
	uint32_t GetNumAchievementsWritten() const;

	// BrnProfile.h:1115
	void DEBUG_DiscoverAllEvents();

	// BrnProfile.h:1118
	void DEBUG_ClearMedals();

	// BrnProfile.h:1125
	void DEBUG_AddMedals(uint8_t, uint8_t, uint8_t, const BrnProgression::ProgressionData *);

	// BrnProfile.h:1129
	void DEBUG_LockUnlockAllRivals(bool);

}

// BrnInterestManager.h:24
namespace BrnProgression {
	// BrnProfile.h:55
	using BrnGameState::GameStateModuleIO;

	// Declaration
	struct CarData {
		// BrnProfile.h:92
		enum UnlockType {
			E_UNLOCK_TYPE_UNLOCK = 0,
			E_UNLOCK_TYPE_GIFT = 1,
			E_UNLOCK_TYPE_TROPHY = 2,
			E_UNLOCK_TYPE_SHUTDOWN_RIVAL = 3,
			E_UNLOCK_TYPE_GOLD_SILVER = 4,
			E_UNLOCK_TYPE_SPONSOR = 5,
		}

	}

	// Declaration
	struct RivalData {
		// BrnProfile.h:195
		enum EState {
			E_STATE_LOCKED = 0,
			E_STATE_UNLOCKED = 1,
			E_STATE_FLEEING = 2,
			E_STATE_BEATEN = 3,
			E_STATE_COUNT = 4,
		}

	}

	// Declaration
	struct ProfileEvent {
		// BrnProfile.h:296
		enum Flags {
			E_FLAG_UNDISCOVERED = 0,
			E_FLAG_DISCOVERED = 1,
			E_FLAG_FINISHED = 2,
			E_FLAG_RANK_WIN = 4,
			E_FLAG_NON_RANK_WIN = 8,
			E_FLAG_WON_SPECIAL_EVENT_BEFORE = 16,
			E_FLAG_WON_EVENT_BEFORE = 32,
		}

	}

	// BrnProfile.h:57
	const float32_t KF_PLAYER_BOOST_THRESHOLD;

	// BrnProfile.h:58
	const float32_t KF_PLAYERSTAT_OVERDRIVE_EARNER;

	// BrnProfile.h:59
	const float32_t KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX;

	// BrnProfile.h:62
	const int32_t KI_MAX_PROFILE_CAR_COUNT = 512;

	// BrnProfile.h:65
	const float32_t KF_PLAYER_STAT_TEMPORARY_ACCELERATOR;

	// BrnProfile.h:68
	const int32_t KI_PS3_ACHIEVEMENT_COUNT = 60;

}

// BrnProfile.h:378
struct BrnProgression::Profile {
	// BrnProfile.h:382
	extern const int32_t KI_NAME_LENGTH = 32;

	// BrnProfile.h:383
	extern const int32_t KI_MAX_RIVAL_COUNT = 64;

	// BrnProfile.h:384
	extern const int32_t KI_MAX_EVENTS = 175;

	// BrnProfile.h:1133
	extern const int32_t KI_PLAYERLICENCEPICTURE_WIDTH = 160;

	// BrnProfile.h:1134
	extern const int32_t KI_PLAYERLICENCEPICTURE_HEIGHT = 120;

	// BrnProfile.h:1135
	extern const int32_t KI_PLAYERLICENCEPICTURE_BITS_PERPIXEL = 4;

	// BrnProfile.h:1136
	extern const renderengine::PixelFormat KE_PLAYERLICENCEPICTURE_PIXELFORMAT;

	// BrnProfile.h:1140
	extern const int32_t KI_PLAYERLICENCEPICTURE_TEXTURESIZEINBYTES = 9600;

private:
	// BrnProfile.h:1143
	extern const int32_t KI_DESCRIPTION_LENGTH = 256;

	// BrnProfile.h:1171
	int32_t miVersionNumber;

	// BrnProfile.h:1174
	char[32] macName;

	// BrnProfile.h:1175
	Vector3 mCarPosition;

	// BrnProfile.h:1176
	Vector3 mCarDirection;

	// BrnProfile.h:1177
	CgsID mSpawnCarId;

	// BrnProfile.h:1178
	CgsID mSpawnWheelId;

	// BrnProfile.h:1179
	uint32_t muTimeStampOfLastRoadRulesDownload;

	// BrnProfile.h:1180
	float32_t mfDistanceDrivenOnline;

	// BrnProfile.h:1181
	float32_t mfDistanceDrivenOffline;

	// BrnProfile.h:1182
	float32_t mfInCarTimePlayed;

	// BrnProfile.h:1183
	int8_t mi8CurrentProgressionRank;

	// BrnProfile.h:1184
	int8_t mi8PowerParkingBestRating;

	// BrnProfile.h:1185
	int8_t mi8PowerParkingBetweenOtherPlayersBestRating;

	// BrnProfile.h:1186
	uint32_t muBestNewBurnoutChainScore;

	// BrnProfile.h:1188
	int32_t[17] maGameModeTypeAmount;

	// BrnProfile.h:1189
	int32_t[17] maGameModeTypeAmountDiscovered;

	// BrnProfile.h:1190
	int32_t[17] maGameModeTypeAmountCompleted;

	// BrnProfile.h:1191
	int32_t[17] maGameModeTypeAmountCompletedSinceTheStart;

	// BrnProfile.h:1194
	int32_t miTotalTakedownCount;

	// BrnProfile.h:1195
	int32_t miTotalOnlineVerticleTakedownCount;

	// BrnProfile.h:1196
	int32_t[13] maiTakedownTypeCounts;

	// BrnProfile.h:1199
	int32_t[10] maiWinsPerOfflineGameMode;

	// BrnProfile.h:1200
	int32_t[10] maiRankWinsPerOfflineGameMode;

	// BrnProfile.h:1201
	int32_t[10] maiLossesPerOfflineGameMode;

	// BrnProfile.h:1204
	int32_t miCompletedBarrelRolls;

	// BrnProfile.h:1205
	float32_t mfCompletedAirSpinAngle;

	// BrnProfile.h:1206
	float32_t mfCompletedHandbreakTurnAngle;

	// BrnProfile.h:1207
	float32_t mfCompletedDriftDistance;

	// BrnProfile.h:1208
	float32_t mfOncomingDistance;

	// BrnProfile.h:1209
	float32_t mfAirMaximum;

	// BrnProfile.h:1210
	int32_t miHighestShowTimeScore;

	// BrnProfile.h:1211
	int32_t miBestStuntRunScore;

	// BrnProfile.h:1214
	int32_t miCarCount;

	// BrnProfile.h:1215
	int32_t miLiveryDataCount;

	// BrnProfile.h:1216
	int32_t miRivalCount;

	// BrnProfile.h:1217
	int32_t miEventCount;

	// BrnProfile.h:1220
	CarData[512] maCars;

	// BrnProfile.h:1221
	LiveryData[512] maLiveryChoices;

	// BrnProfile.h:1222
	RivalData[64] maRivals;

	// BrnProfile.h:1223
	ProfileEvent[175] maEvents;

	// BrnProfile.h:1224
	Set<CgsID,512u>[3] maStuntElements;

	// BrnProfile.h:1226
	uint32_t muMedalCountFromTheStart;

	// BrnProfile.h:1228
	bool mbGoldCarsUnlocked;

	// BrnProfile.h:1229
	bool mbSilverCarsUnlocked;

	// BrnProfile.h:1231
	Set<CgsID,5u> mJunkYardsDriveThruSet;

	// BrnProfile.h:1232
	Set<CgsID,11u> mBodyShopsDriveThruSet;

	// BrnProfile.h:1233
	Set<CgsID,5u> mPaintShopsDriveThruSet;

	// BrnProfile.h:1234
	Set<CgsID,14u> mGasStationsDriveThruSet;

	// BrnProfile.h:1235
	Set<CgsID,11u> mCarParksDriveThruSet;

	// BrnProfile.h:1237
	Array<CgsID,2000u> maFreeBurnChallengeData;

	// Unknown accessibility
	// BrnPropConstants.h:192
	typedef BitArray<300000u> HitPropsBitArray;

	// BrnProfile.h:1238
	Profile::HitPropsBitArray mabHitPropBitArray;

	// BrnProfile.h:1241
	int16_t[3][5] maaiStuntCountsByCounty;

	// BrnProfile.h:1244
	ChallengeHighScoreEntry[64] maNetworkChallengeData;

	// BrnProfile.h:1245
	ChallengePlayerScoreEntry[64] maChallengeData;

	// BrnProfile.h:1246
	uint32_t muLastRoadRulesResetTime;

	// BrnProfile.h:1250
	NetworkTexture mPlayerLicencePicture;

	// BrnProfile.h:1252
	char[9600] macPlayerLicenceTextureData;

	// BrnProfile.h:1253
	bool mbPlayerLicencePictureIsValid;

	// BrnProfile.h:1256
	Array<BrnProgression::MugshotInfo,30u>[5] maaMugshotInfo;

	// BrnProfile.h:1257
	BitArray<30u>[5] maAvailableMugshotFileIDs;

	// BrnProfile.h:1259
	float32_t[3] mafCarTypes;

	// BrnProfile.h:1260
	BrnResource::ECarType meCurrentCarType;

	// BrnProfile.h:1263
	BitArray<256u> maHasPlayerSeenTraining;

	// BrnProfile.h:1266
	int32_t miNumOnlineRacesDone;

	// BrnProfile.h:1267
	int32_t miNumOnlineRacesWon;

	// BrnProfile.h:1268
	int32_t miNumMugshotsSent;

	// BrnProfile.h:1271
	DateAndTime mDateLicenceIssued;

	// BrnProfile.h:1272
	DateAndTime mDate100PercentCompleted;

	// BrnProfile.h:1275
	int32_t miHighestNumberOfTakeDownsInRoadRage;

	// BrnProfile.h:1279
	BitArray<35u> mSeenTrophyAwardBitArray;

	// BrnProfile.h:1282
	BitArray<60u> mAchievementsEarnt;

	// BrnProfile.h:1287
	bool mb100PercentCompletionSequenceShown;

	// BrnProfile.h:1290
	bool mbIsNewProfile;

	// BrnProfile.h:1293
	bool mbCreditsSequenceViewed;

	// BrnProfile.h:1296
	bool mbOneHundredHudMessageViewed;

	// BrnProfile.h:1299
	bool mbHasUnlockedCredits;

	// BrnProfile.h:1301
	bool mbHaveSet100PercentCompletedDate;

	// BrnProfile.h:1302
	bool mbHaveSeenEliteCompletionSequence;

	// BrnProfile.h:1304
	bool mbRedundantBool4;

	// BrnProfile.h:1306
	int8_t miPad1;

	// BrnProfile.h:1307
	int16_t miPad2;

	// BrnProfile.h:1308
	uint32_t muRoadRulesIDLowBits;

	// BrnProfile.h:1310
	BitArray<6u> mSeenCompleteAllEventTypeArray;

	// BrnProfile.h:1312
	float32_t mfRealTimePlayed;

	// BrnProfile.h:1315
	float32_t mfRedundantFloat4;

	// BrnProfile.h:1317
	uint32_t muRoadRulesIDHighBits;

	// BrnProfile.h:1318
	int16_t miPad3;

	// BrnProfile.h:1319
	int8_t miPad4;

public:
	// BrnProfile.h:422
	void Construct();

	// BrnProfile.h:425
	void FixUp();

	// BrnProfile.h:429
	// Declaration
	bool ValidateProfile(const BrnProgression::ProgressionData *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnProfile.cpp:1038
		using namespace CgsDev::Message;

	}

	// BrnProfile.h:432
	bool IsIncorrectVersion() const;

	// BrnProfile.h:435
	bool IsUpgradable() const;

	// BrnProfile.h:440
	bool UpgradeFrom(const void *, int32_t *);

	// BrnProfile.h:443
	const char * GetName() const;

	// BrnProfile.h:446
	Vector3 GetCarPosition() const;

	// BrnProfile.h:449
	Vector3 GetCarDirection() const;

	// BrnProfile.h:452
	CgsID GetSpawnCarId() const;

	// BrnProfile.h:455
	CgsID GetSpawnWheelId() const;

	// BrnProfile.h:458
	const int32_t GetCarCount() const;

	// BrnProfile.h:462
	const CarData * GetCarData(int32_t) const;

	// BrnProfile.h:465
	int32_t GetRivalCount() const;

	// BrnProfile.h:469
	const RivalData * GetRivalData(int32_t) const;

	// BrnProfile.h:472
	int32_t GetTotalCarsToShutDown() const;

	// BrnProfile.h:476
	void SetNewHighShowtimeScore(int32_t);

	// BrnProfile.h:479
	int32_t GetNewHighShowtimeScore() const;

	// BrnProfile.h:483
	void SetNewOncomingMaximum(float32_t);

	// BrnProfile.h:486
	float32_t GetNewOncomingMaximum() const;

	// BrnProfile.h:490
	void SetNewAirMaximum(float32_t);

	// BrnProfile.h:493
	float32_t GetAirMaximum() const;

	// BrnProfile.h:496
	float32_t GetDistanceDrivenOnline() const;

	// BrnProfile.h:499
	float32_t GetDistanceDrivenOffline() const;

	// BrnProfile.h:502
	int32_t SetBestStuntRunScore() const;

	// BrnProfile.h:506
	void SetBestStuntRunScore(int32_t);

	// BrnProfile.h:510
	void AddGameModeTypeToTotals(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProfile.h:514
	int32_t GetGameModeTypeAmount(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProfile.h:518
	void AddGameModeTypeToDiscovered(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProfile.h:522
	int32_t GetGameModeTypeDiscovered(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProfile.h:526
	void AddGameModeTypeCompleted(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProfile.h:529
	void ClearCurrentEventCompleteCounts();

	// BrnProfile.h:533
	int32_t GetGameModeTypeCompletedAmountSinceTheStart(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProfile.h:537
	int32_t GetGameModeTypeCompletedAmountForThisRank(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProfile.h:541
	bool CheckForOnlineEventCompletionTrophyUnlock(uint32_t);

	// BrnProfile.h:544
	float32_t GetInCarTimePlayed() const;

	// BrnProfile.h:547
	float32_t GetRealTimePlayed() const;

	// BrnProfile.h:550
	int32_t GetTotalTakedownCount() const;

	// BrnProfile.h:553
	int8_t GetCurrentProgressionRank() const;

	// BrnProfile.h:556
	bool GetOneHundredHudMessageViewed() const;

	// BrnProfile.h:560
	void SetOneHundredHudMessageViewed(bool);

	// BrnProfile.h:564
	// Declaration
	int32_t GetTakedownTypeCount(TakedownType) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnProfile.h:74
		typedef BrnGameState::ETakedownType TakedownType;

	}

	// BrnProfile.h:567
	void RecordPlayerOnlineTakedown();

	// BrnProfile.h:570
	int32_t GetTotalPlayerOnlineVerticleTakdowns();

	// BrnProfile.h:574
	int32_t GetNumWinsForGameMode(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProfile.h:578
	int32_t GetNumRankWinsForGameMode(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProfile.h:583
	void SetNumRankWinsForGameMode(int32_t, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProfile.h:587
	int32_t GetNumLossesForGameMode(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProfile.h:591
	void SetCurrentCarType(BrnResource::ECarType);

	// BrnProfile.h:594
	BrnResource::ECarType GetCurrentCarType() const;

	// BrnProfile.h:597
	BrnResource::ECarType GetCurrentCarTypeWithMaxDistance() const;

	// BrnProfile.h:600
	BrnResource::ECarType GetCurrentCarTypeWithMinDistance() const;

	// BrnProfile.h:604
	BrnResource::ECarType GetNextTypeOfCarTypeUnlock(BrnResource::ECarType) const;

	// BrnProfile.h:607
	int32_t GetBestPowerParkingRating() const;

	// BrnProfile.h:610
	int32_t GetBestPowerParkingBetweenOtherPlayersRating() const;

	// BrnProfile.h:613
	void RecordPowerParkingRating(int32_t, bool);

	// BrnProfile.h:616
	uint32_t GetBestBurnoutChain() const;

	// BrnProfile.h:620
	void SetBestBurnoutChain(uint32_t);

	// BrnProfile.h:623
	void ResetCarTypeDistances();

	// BrnProfile.h:627
	void SetName(const char *);

	// BrnProfile.h:631
	void SetCarPosition(Vector3);

	// BrnProfile.h:635
	void SetCarDirection(Vector3);

	// BrnProfile.h:639
	void SetSpawnCarId(CgsID);

	// BrnProfile.h:643
	void SetSpawnWheelId(CgsID);

	// BrnProfile.h:647
	void AddDistanceDrivenOnline(float32_t);

	// BrnProfile.h:651
	void AddDistanceDrivenOffline(float32_t);

	// BrnProfile.h:655
	void AddInCarTimePlayed(float32_t);

	// BrnProfile.h:659
	void AddRealTimePlayed(float32_t);

	// BrnProfile.h:663
	void AddTakedown(TakedownType);

	// BrnProfile.h:667
	void AddWinForGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProfile.h:671
	void AddLossForGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProfile.h:675
	void SetCurrentProgressionRank(int8_t);

	// BrnProfile.h:680
	CarData * FindCar(CgsID);

	// BrnProfile.h:684
	const CarData * FindCar(CgsID) const;

	// BrnProfile.h:689
	void SetChosenLiveryIdForBaseCar(CgsID, CgsID);

	// BrnProfile.h:693
	CgsID GetChosenLiveryIdForBaseCar(CgsID) const;

	// BrnProfile.h:697
	LiveryData * GetChosenLiveryDataForBaseCar(CgsID);

	// BrnProfile.h:701
	RivalData * FindRival(CgsID);

	// BrnProfile.h:705
	const RivalData * FindRival(CgsID) const;

	// BrnProfile.h:709
	const ProfileEvent * FindEvent(uint32_t) const;

	// BrnProfile.h:713
	ProfileEvent * FindEvent(uint32_t);

	// BrnProfile.h:718
	CarData * AddCar(CgsID, BrnProgression::CarData::UnlockType);

	// BrnProfile.h:722
	void SetCarUnlockAlreadyShown(CgsID);

	// BrnProfile.h:727
	RivalData * AddRival(CgsID, CgsID);

	// BrnProfile.h:731
	ProfileEvent * AddEvent(uint32_t);

	// BrnProfile.h:737
	void AddStuntElement(BrnGameState::StuntElementType, CgsID, BrnWorld::ECounty);

	// BrnProfile.h:742
	BrnProgression::TrophyUnlockData::UnlockType AddDriveThru(CgsID, BrnTrigger::GenericRegion::Type);

	// BrnProfile.h:745
	bool AreAllDriveThrusCompleted();

	// BrnProfile.h:748
	int32_t GetDriveThruCount() const;

	// BrnProfile.h:751
	int32_t GetDriveThrusFound() const;

	// BrnProfile.h:754
	bool IsGameOneHundredPercentCompleted() const;

	// BrnProfile.h:757
	bool AreChromeCarsUnlocked() const;

	// BrnProfile.h:760
	bool AreGoldCarsUnlocked();

	// BrnProfile.h:763
	void ChromeCarsHaveBeenUnlocked();

	// BrnProfile.h:766
	void GoldCarsHaveBeenUnlocked();

	// BrnProfile.h:770
	int32_t GetStuntElementCount(BrnGameState::StuntElementType) const;

	// BrnProfile.h:775
	int32_t GetStuntElementCountByCounty(BrnGameState::StuntElementType, BrnWorld::ECounty) const;

	// BrnProfile.h:780
	bool IsStuntElementDone(BrnGameState::StuntElementType, CgsID) const;

	// BrnProfile.h:784
	int32_t GetNumDriveThrusDiscovered(BrnTrigger::GenericRegion::Type) const;

	// BrnProfile.h:789
	bool IsDriveThruDiscoverd(CgsID, BrnTrigger::GenericRegion::Type) const;

	// BrnProfile.h:792
	void OnEventFinished();

	// BrnProfile.h:795
	const ChallengeHighScoreEntry * GetNetworkChallengeData(int32_t) const;

	// BrnProfile.h:798
	const ChallengePlayerScoreEntry * GetUserChallengeData(int32_t) const;

	// BrnProfile.h:803
	void SetRoadRuleNetworkHighScores(ChallengeHighScoreEntry *);

	// BrnProfile.h:808
	void SetRoadRuleChallengeData(ChallengePlayerScoreEntry *);

	// BrnProfile.h:812
	uint32_t GetNetworkChallengeDownloadTimestamp() const;

	// BrnProfile.h:817
	void SetNetworkChallengeDownloadTimestamp(uint32_t);

	// BrnProfile.h:821
	uint32_t GetLastRoadRulesResetTime() const;

	// BrnProfile.h:826
	void SetLastRoadRulesResetTime(uint32_t);

	// BrnProfile.h:830
	uint64_t GetRoadRulesID();

	// BrnProfile.h:833
	uint32_t GetEventCount() const;

	// BrnProfile.h:837
	const ProfileEvent * GetEvent(uint32_t) const;

	// BrnProfile.h:841
	const ProfileEvent * GetEventWithID(int32_t) const;

	// BrnProfile.h:844
	void AddToMedalCountFromTheStart();

	// BrnProfile.h:847
	uint32_t GetMedalCountFromTheStart() const;

	// BrnProfile.h:853
	uint32_t GetTotalWinCount(uint32_t &, uint32_t &, uint32_t &) const;

	// BrnProfile.h:857
	int32_t GetMedalAchievedForEventWithID(int32_t) const;

	// BrnProfile.h:860
	const Profile::HitPropsBitArray & GetHitProps() const;

	// BrnProfile.h:865
	void RecordPropHit(int32_t, int32_t);

	// BrnProfile.h:873
	int32_t AddMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, MugshotInfo::UniquePlayerID, DateAndTime, WorldRegion);

	// BrnProfile.h:879
	int32_t DeleteMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProfile.h:887
	int32_t RecaptureMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t, DateAndTime, WorldRegion);

	// BrnProfile.h:893
	bool LockOrUnlockMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProfile.h:898
	int32_t GetNumMugshots(BrnGameState::GameStateModuleIO::EImageGalleryType);

	// BrnProfile.h:902
	int32_t GetNumAllMugshots();

	// BrnProfile.h:908
	MugshotInfo * GetMugshotInfo(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProfile.h:914
	int32_t FindMugshotInfoByUniquePlayerID(BrnGameState::GameStateModuleIO::EImageGalleryType, MugshotInfo::UniquePlayerID);

	// BrnProfile.h:919
	void SetHighestNumberOfTakeDownsInRoadRage(int32_t);

	// BrnProfile.h:923
	int32_t GetHighestNumberOfTakeDownsInRoadRage() const;

	// BrnProfile.h:926
	void OnMugshotSent();

	// BrnProfile.h:929
	int32_t GetNumMugshotsSent();

	// BrnProfile.h:934
	void ResetEventMedals(uint32_t, bool);

	// BrnProfile.h:942
	void SetBestStuntStats(int32_t, float32_t, float32_t, float32_t);

	// BrnProfile.h:947
	bool HasPlayerCompletedFreeburnChallenge(CgsID);

	// BrnProfile.h:952
	uint32_t CompleteFreeburnChallenge(CgsID);

	// BrnProfile.h:956
	void RepairUnlockedVehicle(CgsID);

	// BrnProfile.h:960
	float32_t GetPlayerBaseDeformAmount(CgsID) const;

	// BrnProfile.h:964
	void SetTrainingAlreadySeen(BrnProgression::ETrainingType);

	// BrnProfile.h:968
	bool HasPlayerSeenTrainingType(BrnProgression::ETrainingType) const;

	// BrnProfile.h:971
	void ClearTrainingFlags();

	// BrnProfile.h:975
	int32_t GetCompletedBarrelRolls() const;

	// BrnProfile.h:978
	float32_t GetCompletedAirSpinAngle() const;

	// BrnProfile.h:981
	float32_t GetCompletedHandbreakTurnAngle() const;

	// BrnProfile.h:984
	int32_t GetDiscoveredEventsCount() const;

	// BrnProfile.h:987
	int32_t GetCompletedDriftDistance() const;

	// BrnProfile.h:990
	int32_t GetNumOnlineRacesDone() const;

	// BrnProfile.h:993
	int32_t GetNumOnlineRacesWon() const;

	// BrnProfile.h:998
	void OnOnlineRaceComplete(int32_t, bool);

	// BrnProfile.h:1003
	NetworkTexture * GetPlayerLicencePicture();

	// BrnProfile.h:1010
	void SetPlayerLicencePicture(const NetworkTexture *);

	// BrnProfile.h:1016
	void SetIsNewProfile(bool);

	// BrnProfile.h:1020
	bool GetIsNewProfile() const;

	// BrnProfile.h:1024
	DateAndTime GetLicenceIssuedDate() const;

	// BrnProfile.h:1028
	void SetLicenceIssuedDateAsNow();

	// BrnProfile.h:1032
	DateAndTime Get100PercentCompletedDate() const;

	// BrnProfile.h:1036
	void Set100PercentCompletedDateAsNow();

	// BrnProfile.h:1040
	bool GetHaveSet100PercentCompletedDate() const;

	// BrnProfile.h:1044
	bool GetSeen100PercentCompletionSequence() const;

	// BrnProfile.h:1048
	void SetSeen100PercentCompletionSequence();

	// BrnProfile.h:1052
	bool GetSeenEliteCompletionSequence() const;

	// BrnProfile.h:1056
	void SetSeenEliteCompletionSequence();

	// BrnProfile.h:1061
	bool GetSeenTrophyUnlockSequence(BrnProgression::TrophyUnlockData::UnlockType) const;

	// BrnProfile.h:1066
	void SetSeenTrophyUnlockSequence(BrnProgression::TrophyUnlockData::UnlockType);

	// BrnProfile.h:1071
	bool GetSeenAllEventTypeWonMessage(BrnProgression::RaceEventData::EModeType) const;

	// BrnProfile.h:1076
	void SetSeenAllEventTypeWonMessage(BrnProgression::RaceEventData::EModeType);

	// BrnProfile.h:1080
	void OnCreditsSequenceViewed();

	// BrnProfile.h:1084
	bool HasCreditsSequenceBeenViewed() const;

	// BrnProfile.h:1088
	bool GetCreditsUnlocked() const;

	// BrnProfile.h:1092
	void SetCreditsUnlocked(bool);

	// BrnProfile.h:1100
	void WriteAchievement(int32_t);

	// BrnProfile.h:1105
	bool IsAchievementWritten(int32_t);

	// BrnProfile.h:1109
	uint32_t GetNumAchievementsWritten() const;

	// BrnProfile.h:1115
	void DEBUG_DiscoverAllEvents();

	// BrnProfile.h:1118
	void DEBUG_ClearMedals();

	// BrnProfile.h:1125
	void DEBUG_AddMedals(uint8_t, uint8_t, uint8_t, const BrnProgression::ProgressionData *);

	// BrnProfile.h:1129
	void DEBUG_LockUnlockAllRivals(bool);

}

// BrnProfile.h:1136
extern const renderengine::PixelFormat KE_PLAYERLICENCEPICTURE_PIXELFORMAT;

// BrnProfile.h:348
struct BrnProgression::MugshotInfo {
	// BrnProfile.h:351
	LiveRevengeRelationship::UniquePlayerID mUniquePlayerID;

	// BrnProfile.h:352
	DateAndTime mCaptureDate;

	// BrnProfile.h:353
	WorldRegion mWorldRegion;

	// BrnProfile.h:354
	int32_t miNumCaptures;

	// BrnProfile.h:355
	uint16_t mu16FileID;

	// BrnProfile.h:356
	bool mbLocked;

public:
	// BrnProfile.h:365
	void Construct(LiveRevengeRelationship::UniquePlayerID, DateAndTime, WorldRegion, uint16_t);

}

// BrnProfile.h:378
struct BrnProgression::Profile {
	// BrnProfile.h:382
	extern const int32_t KI_NAME_LENGTH = 32;

	// BrnProfile.h:383
	extern const int32_t KI_MAX_RIVAL_COUNT = 64;

	// BrnProfile.h:384
	extern const int32_t KI_MAX_EVENTS = 175;

	// BrnProfile.h:1133
	extern const int32_t KI_PLAYERLICENCEPICTURE_WIDTH = 160;

	// BrnProfile.h:1134
	extern const int32_t KI_PLAYERLICENCEPICTURE_HEIGHT = 120;

	// BrnProfile.h:1135
	extern const int32_t KI_PLAYERLICENCEPICTURE_BITS_PERPIXEL = 4;

	// BrnProfile.h:1136
	extern const renderengine::PixelFormat KE_PLAYERLICENCEPICTURE_PIXELFORMAT;

	// BrnProfile.h:1140
	extern const int32_t KI_PLAYERLICENCEPICTURE_TEXTURESIZEINBYTES = 9600;

private:
	// BrnProfile.h:1143
	extern const int32_t KI_DESCRIPTION_LENGTH = 256;

	// BrnProfile.h:1171
	int32_t miVersionNumber;

	// BrnProfile.h:1174
	char[32] macName;

	// BrnProfile.h:1175
	Vector3 mCarPosition;

	// BrnProfile.h:1176
	Vector3 mCarDirection;

	// BrnProfile.h:1177
	CgsID mSpawnCarId;

	// BrnProfile.h:1178
	CgsID mSpawnWheelId;

	// BrnProfile.h:1179
	uint32_t muTimeStampOfLastRoadRulesDownload;

	// BrnProfile.h:1180
	float32_t mfDistanceDrivenOnline;

	// BrnProfile.h:1181
	float32_t mfDistanceDrivenOffline;

	// BrnProfile.h:1182
	float32_t mfInCarTimePlayed;

	// BrnProfile.h:1183
	int8_t mi8CurrentProgressionRank;

	// BrnProfile.h:1184
	int8_t mi8PowerParkingBestRating;

	// BrnProfile.h:1185
	int8_t mi8PowerParkingBetweenOtherPlayersBestRating;

	// BrnProfile.h:1186
	uint32_t muBestNewBurnoutChainScore;

	// BrnProfile.h:1188
	int32_t[17] maGameModeTypeAmount;

	// BrnProfile.h:1189
	int32_t[17] maGameModeTypeAmountDiscovered;

	// BrnProfile.h:1190
	int32_t[17] maGameModeTypeAmountCompleted;

	// BrnProfile.h:1191
	int32_t[17] maGameModeTypeAmountCompletedSinceTheStart;

	// BrnProfile.h:1194
	int32_t miTotalTakedownCount;

	// BrnProfile.h:1195
	int32_t miTotalOnlineVerticleTakedownCount;

	// BrnProfile.h:1196
	int32_t[13] maiTakedownTypeCounts;

	// BrnProfile.h:1199
	int32_t[10] maiWinsPerOfflineGameMode;

	// BrnProfile.h:1200
	int32_t[10] maiRankWinsPerOfflineGameMode;

	// BrnProfile.h:1201
	int32_t[10] maiLossesPerOfflineGameMode;

	// BrnProfile.h:1204
	int32_t miCompletedBarrelRolls;

	// BrnProfile.h:1205
	float32_t mfCompletedAirSpinAngle;

	// BrnProfile.h:1206
	float32_t mfCompletedHandbreakTurnAngle;

	// BrnProfile.h:1207
	float32_t mfCompletedDriftDistance;

	// BrnProfile.h:1208
	float32_t mfOncomingDistance;

	// BrnProfile.h:1209
	float32_t mfAirMaximum;

	// BrnProfile.h:1210
	int32_t miHighestShowTimeScore;

	// BrnProfile.h:1211
	int32_t miBestStuntRunScore;

	// BrnProfile.h:1214
	int32_t miCarCount;

	// BrnProfile.h:1215
	int32_t miLiveryDataCount;

	// BrnProfile.h:1216
	int32_t miRivalCount;

	// BrnProfile.h:1217
	int32_t miEventCount;

	// BrnProfile.h:1220
	CarData[512] maCars;

	// BrnProfile.h:1221
	LiveryData[512] maLiveryChoices;

	// BrnProfile.h:1222
	RivalData[64] maRivals;

	// BrnProfile.h:1223
	ProfileEvent[175] maEvents;

	// BrnProfile.h:1224
	Set<CgsID,512u>[3] maStuntElements;

	// BrnProfile.h:1226
	uint32_t muMedalCountFromTheStart;

	// BrnProfile.h:1228
	bool mbGoldCarsUnlocked;

	// BrnProfile.h:1229
	bool mbSilverCarsUnlocked;

	// BrnProfile.h:1231
	Set<CgsID,5u> mJunkYardsDriveThruSet;

	// BrnProfile.h:1232
	Set<CgsID,11u> mBodyShopsDriveThruSet;

	// BrnProfile.h:1233
	Set<CgsID,5u> mPaintShopsDriveThruSet;

	// BrnProfile.h:1234
	Set<CgsID,14u> mGasStationsDriveThruSet;

	// BrnProfile.h:1235
	Set<CgsID,11u> mCarParksDriveThruSet;

	// BrnProfile.h:1237
	Array<CgsID,2000u> maFreeBurnChallengeData;

	// Unknown accessibility
	// BrnPropConstants.h:192
	typedef BitArray<300000u> HitPropsBitArray;

	// BrnProfile.h:1238
	Profile::HitPropsBitArray mabHitPropBitArray;

	// BrnProfile.h:1241
	int16_t[3][5] maaiStuntCountsByCounty;

	// BrnProfile.h:1244
	ChallengeHighScoreEntry[64] maNetworkChallengeData;

	// BrnProfile.h:1245
	ChallengePlayerScoreEntry[64] maChallengeData;

	// BrnProfile.h:1246
	uint32_t muLastRoadRulesResetTime;

	// BrnProfile.h:1250
	NetworkTexture mPlayerLicencePicture;

	// BrnProfile.h:1252
	char[9600] macPlayerLicenceTextureData;

	// BrnProfile.h:1253
	bool mbPlayerLicencePictureIsValid;

	// BrnProfile.h:1256
	Array<BrnProgression::MugshotInfo,30u>[5] maaMugshotInfo;

	// BrnProfile.h:1257
	BitArray<30u>[5] maAvailableMugshotFileIDs;

	// BrnProfile.h:1259
	float32_t[3] mafCarTypes;

	// BrnProfile.h:1260
	BrnResource::ECarType meCurrentCarType;

	// BrnProfile.h:1263
	BitArray<256u> maHasPlayerSeenTraining;

	// BrnProfile.h:1266
	int32_t miNumOnlineRacesDone;

	// BrnProfile.h:1267
	int32_t miNumOnlineRacesWon;

	// BrnProfile.h:1268
	int32_t miNumMugshotsSent;

	// BrnProfile.h:1271
	DateAndTime mDateLicenceIssued;

	// BrnProfile.h:1272
	DateAndTime mDate100PercentCompleted;

	// BrnProfile.h:1275
	int32_t miHighestNumberOfTakeDownsInRoadRage;

	// BrnProfile.h:1279
	BitArray<35u> mSeenTrophyAwardBitArray;

	// BrnProfile.h:1282
	BitArray<60u> mAchievementsEarnt;

	// BrnProfile.h:1287
	bool mb100PercentCompletionSequenceShown;

	// BrnProfile.h:1290
	bool mbIsNewProfile;

	// BrnProfile.h:1293
	bool mbCreditsSequenceViewed;

	// BrnProfile.h:1296
	bool mbOneHundredHudMessageViewed;

	// BrnProfile.h:1299
	bool mbHasUnlockedCredits;

	// BrnProfile.h:1301
	bool mbHaveSet100PercentCompletedDate;

	// BrnProfile.h:1302
	bool mbHaveSeenEliteCompletionSequence;

	// BrnProfile.h:1304
	bool mbRedundantBool4;

	// BrnProfile.h:1306
	int8_t miPad1;

	// BrnProfile.h:1307
	int16_t miPad2;

	// BrnProfile.h:1308
	uint32_t muRoadRulesIDLowBits;

	// BrnProfile.h:1310
	BitArray<6u> mSeenCompleteAllEventTypeArray;

	// BrnProfile.h:1312
	float32_t mfRealTimePlayed;

	// BrnProfile.h:1315
	float32_t mfRedundantFloat4;

	// BrnProfile.h:1317
	uint32_t muRoadRulesIDHighBits;

	// BrnProfile.h:1318
	int16_t miPad3;

	// BrnProfile.h:1319
	int8_t miPad4;

public:
	// BrnProfile.h:422
	void Construct();

	// BrnProfile.h:425
	void FixUp();

	// BrnProfile.h:429
	bool ValidateProfile(const BrnProgression::ProgressionData *) const;

	// BrnProfile.h:432
	bool IsIncorrectVersion() const;

	// BrnProfile.h:435
	bool IsUpgradable() const;

	// BrnProfile.h:440
	bool UpgradeFrom(const void *, int32_t *);

	// BrnProfile.h:443
	const char * GetName() const;

	// BrnProfile.h:446
	Vector3 GetCarPosition() const;

	// BrnProfile.h:449
	Vector3 GetCarDirection() const;

	// BrnProfile.h:452
	CgsID GetSpawnCarId() const;

	// BrnProfile.h:455
	CgsID GetSpawnWheelId() const;

	// BrnProfile.h:458
	const int32_t GetCarCount() const;

	// BrnProfile.h:462
	const CarData * GetCarData(int32_t) const;

	// BrnProfile.h:465
	int32_t GetRivalCount() const;

	// BrnProfile.h:469
	const RivalData * GetRivalData(int32_t) const;

	// BrnProfile.h:472
	int32_t GetTotalCarsToShutDown() const;

	// BrnProfile.h:476
	void SetNewHighShowtimeScore(int32_t);

	// BrnProfile.h:479
	int32_t GetNewHighShowtimeScore() const;

	// BrnProfile.h:483
	void SetNewOncomingMaximum(float32_t);

	// BrnProfile.h:486
	float32_t GetNewOncomingMaximum() const;

	// BrnProfile.h:490
	void SetNewAirMaximum(float32_t);

	// BrnProfile.h:493
	float32_t GetAirMaximum() const;

	// BrnProfile.h:496
	float32_t GetDistanceDrivenOnline() const;

	// BrnProfile.h:499
	float32_t GetDistanceDrivenOffline() const;

	// BrnProfile.h:502
	int32_t SetBestStuntRunScore() const;

	// BrnProfile.h:506
	void SetBestStuntRunScore(int32_t);

	// BrnProfile.h:510
	void AddGameModeTypeToTotals(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProfile.h:514
	int32_t GetGameModeTypeAmount(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProfile.h:518
	void AddGameModeTypeToDiscovered(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProfile.h:522
	int32_t GetGameModeTypeDiscovered(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProfile.h:526
	void AddGameModeTypeCompleted(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProfile.h:529
	void ClearCurrentEventCompleteCounts();

	// BrnProfile.h:533
	int32_t GetGameModeTypeCompletedAmountSinceTheStart(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProfile.h:537
	int32_t GetGameModeTypeCompletedAmountForThisRank(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProfile.h:541
	bool CheckForOnlineEventCompletionTrophyUnlock(uint32_t);

	// BrnProfile.h:544
	float32_t GetInCarTimePlayed() const;

	// BrnProfile.h:547
	float32_t GetRealTimePlayed() const;

	// BrnProfile.h:550
	int32_t GetTotalTakedownCount() const;

	// BrnProfile.h:553
	int8_t GetCurrentProgressionRank() const;

	// BrnProfile.h:556
	bool GetOneHundredHudMessageViewed() const;

	// BrnProfile.h:560
	void SetOneHundredHudMessageViewed(bool);

	// BrnProfile.h:564
	// Declaration
	int32_t GetTakedownTypeCount(TakedownType) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnProfile.h:74
		typedef BrnGameState::ETakedownType TakedownType;

	}

	// BrnProfile.h:567
	void RecordPlayerOnlineTakedown();

	// BrnProfile.h:570
	int32_t GetTotalPlayerOnlineVerticleTakdowns();

	// BrnProfile.h:574
	int32_t GetNumWinsForGameMode(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProfile.h:578
	int32_t GetNumRankWinsForGameMode(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProfile.h:583
	void SetNumRankWinsForGameMode(int32_t, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProfile.h:587
	int32_t GetNumLossesForGameMode(BrnGameState::GameStateModuleIO::EGameModeType) const;

	// BrnProfile.h:591
	void SetCurrentCarType(BrnResource::ECarType);

	// BrnProfile.h:594
	BrnResource::ECarType GetCurrentCarType() const;

	// BrnProfile.h:597
	BrnResource::ECarType GetCurrentCarTypeWithMaxDistance() const;

	// BrnProfile.h:600
	BrnResource::ECarType GetCurrentCarTypeWithMinDistance() const;

	// BrnProfile.h:604
	BrnResource::ECarType GetNextTypeOfCarTypeUnlock(BrnResource::ECarType) const;

	// BrnProfile.h:607
	int32_t GetBestPowerParkingRating() const;

	// BrnProfile.h:610
	int32_t GetBestPowerParkingBetweenOtherPlayersRating() const;

	// BrnProfile.h:613
	void RecordPowerParkingRating(int32_t, bool);

	// BrnProfile.h:616
	uint32_t GetBestBurnoutChain() const;

	// BrnProfile.h:620
	void SetBestBurnoutChain(uint32_t);

	// BrnProfile.h:623
	void ResetCarTypeDistances();

	// BrnProfile.h:627
	void SetName(const char *);

	// BrnProfile.h:631
	void SetCarPosition(Vector3);

	// BrnProfile.h:635
	void SetCarDirection(Vector3);

	// BrnProfile.h:639
	void SetSpawnCarId(CgsID);

	// BrnProfile.h:643
	void SetSpawnWheelId(CgsID);

	// BrnProfile.h:647
	void AddDistanceDrivenOnline(float32_t);

	// BrnProfile.h:651
	void AddDistanceDrivenOffline(float32_t);

	// BrnProfile.h:655
	void AddInCarTimePlayed(float32_t);

	// BrnProfile.h:659
	void AddRealTimePlayed(float32_t);

	// BrnProfile.h:663
	void AddTakedown(TakedownType);

	// BrnProfile.h:667
	void AddWinForGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProfile.h:671
	void AddLossForGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnProfile.h:675
	void SetCurrentProgressionRank(int8_t);

	// BrnProfile.h:680
	CarData * FindCar(CgsID);

	// BrnProfile.h:684
	const CarData * FindCar(CgsID) const;

	// BrnProfile.h:689
	void SetChosenLiveryIdForBaseCar(CgsID, CgsID);

	// BrnProfile.h:693
	CgsID GetChosenLiveryIdForBaseCar(CgsID) const;

	// BrnProfile.h:697
	LiveryData * GetChosenLiveryDataForBaseCar(CgsID);

	// BrnProfile.h:701
	RivalData * FindRival(CgsID);

	// BrnProfile.h:705
	const RivalData * FindRival(CgsID) const;

	// BrnProfile.h:709
	const ProfileEvent * FindEvent(uint32_t) const;

	// BrnProfile.h:713
	ProfileEvent * FindEvent(uint32_t);

	// BrnProfile.h:718
	CarData * AddCar(CgsID, BrnProgression::CarData::UnlockType);

	// BrnProfile.h:722
	void SetCarUnlockAlreadyShown(CgsID);

	// BrnProfile.h:727
	RivalData * AddRival(CgsID, CgsID);

	// BrnProfile.h:731
	ProfileEvent * AddEvent(uint32_t);

	// BrnProfile.h:737
	void AddStuntElement(BrnGameState::StuntElementType, CgsID, BrnWorld::ECounty);

	// BrnProfile.h:742
	BrnProgression::TrophyUnlockData::UnlockType AddDriveThru(CgsID, BrnTrigger::GenericRegion::Type);

	// BrnProfile.h:745
	bool AreAllDriveThrusCompleted();

	// BrnProfile.h:748
	int32_t GetDriveThruCount() const;

	// BrnProfile.h:751
	int32_t GetDriveThrusFound() const;

	// BrnProfile.h:754
	bool IsGameOneHundredPercentCompleted() const;

	// BrnProfile.h:757
	bool AreChromeCarsUnlocked() const;

	// BrnProfile.h:760
	bool AreGoldCarsUnlocked();

	// BrnProfile.h:763
	void ChromeCarsHaveBeenUnlocked();

	// BrnProfile.h:766
	void GoldCarsHaveBeenUnlocked();

	// BrnProfile.h:770
	int32_t GetStuntElementCount(BrnGameState::StuntElementType) const;

	// BrnProfile.h:775
	int32_t GetStuntElementCountByCounty(BrnGameState::StuntElementType, BrnWorld::ECounty) const;

	// BrnProfile.h:780
	bool IsStuntElementDone(BrnGameState::StuntElementType, CgsID) const;

	// BrnProfile.h:784
	int32_t GetNumDriveThrusDiscovered(BrnTrigger::GenericRegion::Type) const;

	// BrnProfile.h:789
	bool IsDriveThruDiscoverd(CgsID, BrnTrigger::GenericRegion::Type) const;

	// BrnProfile.h:792
	void OnEventFinished();

	// BrnProfile.h:795
	const ChallengeHighScoreEntry * GetNetworkChallengeData(int32_t) const;

	// BrnProfile.h:798
	const ChallengePlayerScoreEntry * GetUserChallengeData(int32_t) const;

	// BrnProfile.h:803
	void SetRoadRuleNetworkHighScores(ChallengeHighScoreEntry *);

	// BrnProfile.h:808
	void SetRoadRuleChallengeData(ChallengePlayerScoreEntry *);

	// BrnProfile.h:812
	uint32_t GetNetworkChallengeDownloadTimestamp() const;

	// BrnProfile.h:817
	void SetNetworkChallengeDownloadTimestamp(uint32_t);

	// BrnProfile.h:821
	uint32_t GetLastRoadRulesResetTime() const;

	// BrnProfile.h:826
	void SetLastRoadRulesResetTime(uint32_t);

	// BrnProfile.h:830
	uint64_t GetRoadRulesID();

	// BrnProfile.h:833
	uint32_t GetEventCount() const;

	// BrnProfile.h:837
	const ProfileEvent * GetEvent(uint32_t) const;

	// BrnProfile.h:841
	const ProfileEvent * GetEventWithID(int32_t) const;

	// BrnProfile.h:844
	void AddToMedalCountFromTheStart();

	// BrnProfile.h:847
	uint32_t GetMedalCountFromTheStart() const;

	// BrnProfile.h:853
	uint32_t GetTotalWinCount(uint32_t &, uint32_t &, uint32_t &) const;

	// BrnProfile.h:857
	int32_t GetMedalAchievedForEventWithID(int32_t) const;

	// BrnProfile.h:860
	const Profile::HitPropsBitArray & GetHitProps() const;

	// BrnProfile.h:865
	void RecordPropHit(int32_t, int32_t);

	// BrnProfile.h:873
	int32_t AddMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, LiveRevengeRelationship::UniquePlayerID, DateAndTime, WorldRegion);

	// BrnProfile.h:879
	int32_t DeleteMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProfile.h:887
	int32_t RecaptureMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t, DateAndTime, WorldRegion);

	// BrnProfile.h:893
	bool LockOrUnlockMugshot(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProfile.h:898
	int32_t GetNumMugshots(BrnGameState::GameStateModuleIO::EImageGalleryType);

	// BrnProfile.h:902
	int32_t GetNumAllMugshots();

	// BrnProfile.h:908
	MugshotInfo * GetMugshotInfo(BrnGameState::GameStateModuleIO::EImageGalleryType, int32_t);

	// BrnProfile.h:914
	int32_t FindMugshotInfoByUniquePlayerID(BrnGameState::GameStateModuleIO::EImageGalleryType, LiveRevengeRelationship::UniquePlayerID);

	// BrnProfile.h:919
	void SetHighestNumberOfTakeDownsInRoadRage(int32_t);

	// BrnProfile.h:923
	int32_t GetHighestNumberOfTakeDownsInRoadRage() const;

	// BrnProfile.h:926
	void OnMugshotSent();

	// BrnProfile.h:929
	int32_t GetNumMugshotsSent();

	// BrnProfile.h:934
	void ResetEventMedals(uint32_t, bool);

	// BrnProfile.h:942
	void SetBestStuntStats(int32_t, float32_t, float32_t, float32_t);

	// BrnProfile.h:947
	bool HasPlayerCompletedFreeburnChallenge(CgsID);

	// BrnProfile.h:952
	uint32_t CompleteFreeburnChallenge(CgsID);

	// BrnProfile.h:956
	void RepairUnlockedVehicle(CgsID);

	// BrnProfile.h:960
	float32_t GetPlayerBaseDeformAmount(CgsID) const;

	// BrnProfile.h:964
	void SetTrainingAlreadySeen(BrnProgression::ETrainingType);

	// BrnProfile.h:968
	bool HasPlayerSeenTrainingType(BrnProgression::ETrainingType) const;

	// BrnProfile.h:971
	void ClearTrainingFlags();

	// BrnProfile.h:975
	int32_t GetCompletedBarrelRolls() const;

	// BrnProfile.h:978
	float32_t GetCompletedAirSpinAngle() const;

	// BrnProfile.h:981
	float32_t GetCompletedHandbreakTurnAngle() const;

	// BrnProfile.h:984
	int32_t GetDiscoveredEventsCount() const;

	// BrnProfile.h:987
	int32_t GetCompletedDriftDistance() const;

	// BrnProfile.h:990
	int32_t GetNumOnlineRacesDone() const;

	// BrnProfile.h:993
	int32_t GetNumOnlineRacesWon() const;

	// BrnProfile.h:998
	void OnOnlineRaceComplete(int32_t, bool);

	// BrnProfile.h:1003
	CgsNetwork::NetworkTexture * GetPlayerLicencePicture();

	// BrnProfile.h:1010
	void SetPlayerLicencePicture(const NetworkTexture *);

	// BrnProfile.h:1016
	void SetIsNewProfile(bool);

	// BrnProfile.h:1020
	bool GetIsNewProfile() const;

	// BrnProfile.h:1024
	DateAndTime GetLicenceIssuedDate() const;

	// BrnProfile.h:1028
	void SetLicenceIssuedDateAsNow();

	// BrnProfile.h:1032
	DateAndTime Get100PercentCompletedDate() const;

	// BrnProfile.h:1036
	void Set100PercentCompletedDateAsNow();

	// BrnProfile.h:1040
	bool GetHaveSet100PercentCompletedDate() const;

	// BrnProfile.h:1044
	bool GetSeen100PercentCompletionSequence() const;

	// BrnProfile.h:1048
	void SetSeen100PercentCompletionSequence();

	// BrnProfile.h:1052
	bool GetSeenEliteCompletionSequence() const;

	// BrnProfile.h:1056
	void SetSeenEliteCompletionSequence();

	// BrnProfile.h:1061
	bool GetSeenTrophyUnlockSequence(BrnProgression::TrophyUnlockData::UnlockType) const;

	// BrnProfile.h:1066
	void SetSeenTrophyUnlockSequence(BrnProgression::TrophyUnlockData::UnlockType);

	// BrnProfile.h:1071
	bool GetSeenAllEventTypeWonMessage(BrnProgression::RaceEventData::EModeType) const;

	// BrnProfile.h:1076
	void SetSeenAllEventTypeWonMessage(BrnProgression::RaceEventData::EModeType);

	// BrnProfile.h:1080
	void OnCreditsSequenceViewed();

	// BrnProfile.h:1084
	bool HasCreditsSequenceBeenViewed() const;

	// BrnProfile.h:1088
	bool GetCreditsUnlocked() const;

	// BrnProfile.h:1092
	void SetCreditsUnlocked(bool);

	// BrnProfile.h:1100
	void WriteAchievement(int32_t);

	// BrnProfile.h:1105
	bool IsAchievementWritten(int32_t);

	// BrnProfile.h:1109
	uint32_t GetNumAchievementsWritten() const;

	// BrnProfile.h:1115
	void DEBUG_DiscoverAllEvents();

	// BrnProfile.h:1118
	void DEBUG_ClearMedals();

	// BrnProfile.h:1125
	void DEBUG_AddMedals(uint8_t, uint8_t, uint8_t, const BrnProgression::ProgressionData *);

	// BrnProfile.h:1129
	void DEBUG_LockUnlockAllRivals(bool);

}

