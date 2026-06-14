// BrnProfile_2007_10_04.h:51
namespace BrnProgression_2007_10_04 {
	// BrnProfile_2007_10_04.h:54
	using BrnGameState::GameStateModuleIO;

	// BrnProfile_2007_10_04.h:56
	const float32_t KF_PLAYER_BOOST_THRESHOLD;

	// BrnProfile_2007_10_04.h:57
	const float32_t KF_PLAYERSTAT_OVERDRIVE_EARNER;

	// BrnProfile_2007_10_04.h:58
	const float32_t KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX;

	// BrnProfile_2007_10_04.h:61
	const int32_t KI_MAX_PROFILE_CAR_COUNT = 512;

	// BrnProfile_2007_10_04.h:64
	const float32_t KF_PLAYER_STAT_TEMPORARY_ACCELERATOR;

}

// BrnProfile_2007_10_04.h:218
extern const int32_t KI_NAME_LENGTH = 32;

// BrnProfile_2007_10_04.h:219
extern const int32_t KI_MAX_RIVAL_COUNT = 64;

// BrnProfile_2007_10_04.h:220
extern const int32_t KI_MAX_EVENTS = 175;

// BrnProfile_2007_10_04.h:254
extern const int32_t KI_PLAYERLICENCEPICTURE_WIDTH = 160;

// BrnProfile_2007_10_04.h:255
extern const int32_t KI_PLAYERLICENCEPICTURE_HEIGHT = 120;

// BrnProfile_2007_10_04.h:256
extern const int32_t KI_PLAYERLICENCEPICTURE_BITS_PERPIXEL = 4;

// BrnProfile_2007_10_04.h:261
extern const int32_t KI_PLAYERLICENCEPICTURE_TEXTURESIZEINBYTES = 9600;

// BrnProfile_2007_10_04.h:51
namespace BrnProgression_2007_10_04 {
	// BrnProfile_2007_10_04.h:54
	using BrnGameState::GameStateModuleIO;

	// Declaration
	struct CarData {
		// BrnProfile_2007_10_04.h:88
		enum UnlockType {
			E_UNLOCK_TYPE_UNLOCK = 0,
			E_UNLOCK_TYPE_GIFT = 1,
			E_UNLOCK_TYPE_TROPHY = 2,
			E_UNLOCK_TYPE_SHUTDOWN_RIVAL = 3,
			E_UNLOCK_TYPE_GOLD_SILVER = 4,
			E_UNLOCK_TYPE_SPONSOR = 5,
		}

	}

	struct LiveryData;

	// Declaration
	struct RivalData {
		// BrnProfile_2007_10_04.h:141
		enum EState {
			E_STATE_LOCKED = 0,
			E_STATE_UNLOCKED = 1,
			E_STATE_FLEEING = 2,
			E_STATE_BEATEN = 3,
			E_STATE_COUNT = 4,
		}

	}

	struct ProfileEvent;

	struct MugshotInfo;

	struct Profile;

	// BrnProfile_2007_10_04.h:56
	const float32_t KF_PLAYER_BOOST_THRESHOLD;

	// BrnProfile_2007_10_04.h:57
	const float32_t KF_PLAYERSTAT_OVERDRIVE_EARNER;

	// BrnProfile_2007_10_04.h:58
	const float32_t KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX;

	// BrnProfile_2007_10_04.h:61
	const int32_t KI_MAX_PROFILE_CAR_COUNT = 512;

	// BrnProfile_2007_10_04.h:64
	const float32_t KF_PLAYER_STAT_TEMPORARY_ACCELERATOR;

}

// BrnProfile_2007_10_04.h:82
struct BrnProgression_2007_10_04::CarData {
	// BrnProfile_2007_10_04.h:100
	CgsID mId;

	// BrnProfile_2007_10_04.h:102
	uint8_t mu8ColourIndex;

	// BrnProfile_2007_10_04.h:103
	uint8_t mu8PaletteIndex;

	// BrnProfile_2007_10_04.h:105
	bool mbUnlockSequenceAlreadyShown;

	// BrnProfile_2007_10_04.h:106
	float32_t mfUnlockDeformedAmount;

	// BrnProfile_2007_10_04.h:107
	BrnProgression_2007_10_04::CarData::UnlockType meUnlockType;

}

// BrnProfile_2007_10_04.h:119
struct BrnProgression_2007_10_04::LiveryData {
	// BrnProfile_2007_10_04.h:121
	CgsID mBaseCarId;

	// BrnProfile_2007_10_04.h:122
	CgsID mChosenLiveryCarId;

	// BrnProfile_2007_10_04.h:124
	bool mbHasBeenDriven;

}

// BrnProfile_2007_10_04.h:137
struct BrnProgression_2007_10_04::RivalData {
	// BrnProfile_2007_10_04.h:151
	CgsID mRivalId;

	// BrnProfile_2007_10_04.h:152
	CgsID mCarId;

	// BrnProfile_2007_10_04.h:153
	BrnProgression_2007_10_04::RivalData::EState meState;

	// BrnProfile_2007_10_04.h:155
	int32_t miEventCount;

	// BrnProfile_2007_10_04.h:156
	int32_t miTakedownFromCount;

	// BrnProfile_2007_10_04.h:157
	int32_t miVerticalTakedownFromCount;

	// BrnProfile_2007_10_04.h:158
	int32_t miTakedownToCount;

	// BrnProfile_2007_10_04.h:159
	int32_t miVerticalTakedownToCount;

	// BrnProfile_2007_10_04.h:160
	int32_t miTakedownToInEventCount;

	// BrnProfile_2007_10_04.h:161
	int32_t miTakedownToInLastEventCount;

	// BrnProfile_2007_10_04.h:162
	int32_t miEventMissingCount;

	// BrnProfile_2007_10_04.h:164
	bool mbHasBeenHit;

}

// BrnProfile_2007_10_04.h:176
struct BrnProgression_2007_10_04::ProfileEvent {
	// BrnProfile_2007_10_04.h:179
	uint32_t muEventID;

	// BrnProfile_2007_10_04.h:180
	uint16_t muFlags;

}

// BrnProfile_2007_10_04.h:192
struct BrnProgression_2007_10_04::MugshotInfo {
	// BrnProfile_2007_10_04.h:195
	MugshotInfo::UniquePlayerID mUniquePlayerID;

	// BrnProfile_2007_10_04.h:196
	DateAndTime mCaptureDate;

	// BrnProfile_2007_10_04.h:197
	WorldRegion mWorldRegion;

	// BrnProfile_2007_10_04.h:198
	int32_t miNumCaptures;

	// BrnProfile_2007_10_04.h:199
	uint16_t mu16FileID;

	// BrnProfile_2007_10_04.h:200
	bool mbLocked;

}

// BrnProfile_2007_10_04.h:215
struct BrnProgression_2007_10_04::Profile {
	// BrnProfile_2007_10_04.h:218
	extern const int32_t KI_NAME_LENGTH = 32;

	// BrnProfile_2007_10_04.h:219
	extern const int32_t KI_MAX_RIVAL_COUNT = 64;

	// BrnProfile_2007_10_04.h:220
	extern const int32_t KI_MAX_EVENTS = 175;

	// BrnProfile_2007_10_04.h:254
	extern const int32_t KI_PLAYERLICENCEPICTURE_WIDTH = 160;

	// BrnProfile_2007_10_04.h:255
	extern const int32_t KI_PLAYERLICENCEPICTURE_HEIGHT = 120;

	// BrnProfile_2007_10_04.h:256
	extern const int32_t KI_PLAYERLICENCEPICTURE_BITS_PERPIXEL = 4;

	// BrnProfile_2007_10_04.h:257
	extern const renderengine::PixelFormat KE_PLAYERLICENCEPICTURE_PIXELFORMAT;

	// BrnProfile_2007_10_04.h:261
	extern const int32_t KI_PLAYERLICENCEPICTURE_TEXTURESIZEINBYTES = 9600;

	// BrnProfile_2007_10_04.h:263
	extern const int32_t KI_DESCRIPTION_LENGTH = 256;

	// BrnProfile_2007_10_04.h:281
	int32_t miVersionNumber;

	// BrnProfile_2007_10_04.h:284
	char[32] macName;

	// BrnProfile_2007_10_04.h:285
	Vector3 mCarPosition;

	// BrnProfile_2007_10_04.h:286
	Vector3 mCarDirection;

	// BrnProfile_2007_10_04.h:287
	CgsID mSpawnCarId;

	// BrnProfile_2007_10_04.h:288
	CgsID mSpawnWheelId;

	// BrnProfile_2007_10_04.h:289
	uint32_t muTimeStampOfLastRoadRulesDownload;

	// BrnProfile_2007_10_04.h:290
	float32_t mfDistanceDrivenOnline;

	// BrnProfile_2007_10_04.h:291
	float32_t mfDistanceDrivenOffline;

	// BrnProfile_2007_10_04.h:292
	float32_t mfTimePlayed;

	// BrnProfile_2007_10_04.h:293
	int8_t mi8CurrentProgressionRank;

	// BrnProfile_2007_10_04.h:294
	int8_t mi8PowerParkingBestRating;

	// BrnProfile_2007_10_04.h:295
	int8_t mi8PowerParkingBetweenOtherPlayersBestRating;

	// BrnProfile_2007_10_04.h:296
	uint32_t muBestNewBurnoutChainScore;

	// BrnProfile_2007_10_04.h:298
	int32_t[17] maGameModeTypeAmount;

	// BrnProfile_2007_10_04.h:299
	int32_t[17] maGameModeTypeAmountDiscovered;

	// BrnProfile_2007_10_04.h:300
	int32_t[17] maGameModeTypeAmountCompleted;

	// BrnProfile_2007_10_04.h:301
	int32_t[17] maGameModeTypeAmountCompletedSinceTheStart;

	// BrnProfile_2007_10_04.h:304
	int32_t miTotalTakedownCount;

	// BrnProfile_2007_10_04.h:305
	int32_t miTotalOnlineVerticleTakedownCount;

	// BrnProfile_2007_10_04.h:306
	int32_t[13] maiTakedownTypeCounts;

	// BrnProfile_2007_10_04.h:309
	int32_t[10] maiWinsPerOfflineGameMode;

	// BrnProfile_2007_10_04.h:310
	int32_t[10] maiRankWinsPerOfflineGameMode;

	// BrnProfile_2007_10_04.h:313
	int32_t miCompletedBarrelRolls;

	// BrnProfile_2007_10_04.h:314
	float32_t mfCompletedAirSpinAngle;

	// BrnProfile_2007_10_04.h:315
	float32_t mfCompletedHandbreakTurnAngle;

	// BrnProfile_2007_10_04.h:316
	float32_t mfCompletedDriftDistance;

	// BrnProfile_2007_10_04.h:317
	float32_t mfOncomingDistance;

	// BrnProfile_2007_10_04.h:318
	float32_t mfAirMaximum;

	// BrnProfile_2007_10_04.h:319
	int32_t miHighestShowTimeScore;

	// BrnProfile_2007_10_04.h:320
	int32_t miBestStuntRunScore;

	// BrnProfile_2007_10_04.h:323
	int32_t miCarCount;

	// BrnProfile_2007_10_04.h:324
	int32_t miLiveryDataCount;

	// BrnProfile_2007_10_04.h:325
	int32_t miRivalCount;

	// BrnProfile_2007_10_04.h:326
	int32_t miEventCount;

	// BrnProfile_2007_10_04.h:329
	CarData[512] maCars;

	// BrnProfile_2007_10_04.h:330
	LiveryData[512] maLiveryChoices;

	// BrnProfile_2007_10_04.h:331
	RivalData[64] maRivals;

	// BrnProfile_2007_10_04.h:332
	ProfileEvent[175] maEvents;

	// BrnProfile_2007_10_04.h:333
	Set<CgsID,512u>[3] maStuntElements;

	// BrnProfile_2007_10_04.h:335
	uint32_t muMedalCountFromTheStart;

	// BrnProfile_2007_10_04.h:337
	bool mbGoldCarsUnlocked;

	// BrnProfile_2007_10_04.h:338
	bool mbSilverCarsUnlocked;

	// BrnProfile_2007_10_04.h:340
	Set<CgsID,5u> mJunkYardsDriveThruSet;

	// BrnProfile_2007_10_04.h:341
	Set<CgsID,11u> mBodyShopsDriveThruSet;

	// BrnProfile_2007_10_04.h:342
	Set<CgsID,5u> mPaintShopsDriveThruSet;

	// BrnProfile_2007_10_04.h:343
	Set<CgsID,14u> mGasStationsDriveThruSet;

	// BrnProfile_2007_10_04.h:344
	Set<CgsID,11u> mCarParksDriveThruSet;

	// BrnProfile_2007_10_04.h:346
	Array<CgsID,2000u> maFreeBurnChallengeData;

	// BrnProfile_2007_10_04.h:347
	Profile::HitPropsBitArray mabHitPropBitArray;

	// BrnProfile_2007_10_04.h:350
	int16_t[3][5] maaiStuntCountsByCounty;

	// BrnProfile_2007_10_04.h:353
	ChallengeHighScoreEntry[64] maNetworkChallengeData;

	// BrnProfile_2007_10_04.h:354
	ChallengePlayerScoreEntry[64] maChallengeData;

	// BrnProfile_2007_10_04.h:355
	uint32_t muLastRoadRulesResetTime;

	// BrnProfile_2007_10_04.h:359
	NetworkTexture mPlayerLicencePicture;

	// BrnProfile_2007_10_04.h:361
	char[9600] macPlayerLicenceTextureData;

	// BrnProfile_2007_10_04.h:362
	bool mbPlayerLicencePictureIsValid;

	// BrnProfile_2007_10_04.h:365
	Array<BrnProgression_2007_10_04::MugshotInfo,30u>[5] maaMugshotInfo;

	// BrnProfile_2007_10_04.h:366
	BitArray<30u>[5] maAvailableMugshotFileIDs;

	// BrnProfile_2007_10_04.h:368
	float32_t[3] mafCarTypes;

	// BrnProfile_2007_10_04.h:369
	BrnResource::ECarType meCurrentCarType;

	// BrnProfile_2007_10_04.h:372
	BitArray<256u> maHasPlayerSeenTraining;

	// BrnProfile_2007_10_04.h:375
	int32_t miNumOnlineRacesDone;

	// BrnProfile_2007_10_04.h:376
	int32_t miNumOnlineRacesWon;

	// BrnProfile_2007_10_04.h:377
	int32_t miNumMugshotsSent;

	// BrnProfile_2007_10_04.h:380
	DateAndTime mDateLicenceIssued;

	// BrnProfile_2007_10_04.h:381
	DateAndTime mDate100PercentCompleted;

	// BrnProfile_2007_10_04.h:384
	bool mbCompletionSequenceShown;

	// BrnProfile_2007_10_04.h:387
	bool mbIsNewProfile;

	// BrnProfile_2007_10_04.h:390
	float32_t mfRedundantFloat1;

	// BrnProfile_2007_10_04.h:395
	BitArray<35u> mSeenTrophyAwardBitArray;

	// BrnProfile_2007_10_04.h:398
	float32_t mfRedundantFloat2;

	// BrnProfile_2007_10_04.h:401
	int32_t miHighestNumberOfTakeDownsInRoadRage;

	// BrnProfile_2007_10_04.h:402
	int32_t miRedundantInt2;

	// BrnProfile_2007_10_04.h:403
	int32_t miRedundantInt3;

	// BrnProfile_2007_10_04.h:404
	int32_t miRedundantInt4;

	// BrnProfile_2007_10_04.h:406
	bool mbRedundantBool1;

	// BrnProfile_2007_10_04.h:407
	bool mbRedundantBool2;

	// BrnProfile_2007_10_04.h:408
	bool mbRedundantBool3;

	// BrnProfile_2007_10_04.h:409
	bool mbRedundantBool4;

}

