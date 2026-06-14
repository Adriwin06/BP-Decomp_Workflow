// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct DirectorResourceManager {
		// BrnDirectorResourceManager.h:245
		enum EPrepareStage {
			E_PREPARESTAGE_CONSTRUCTED = 0,
			E_PREPARESTAGE_REQUEST_RESOURCES = 1,
			E_PREPARESTAGE_ACQUIRE_RESOURCES = 2,
			E_PREPARESTAGE_REGISTER_ATTRIBSYSVAULT = 3,
			E_PREPARESTAGE_REGISTER_ATTRIBSYSVAULT_WAIT = 4,
			E_PREPARESTAGE_PREPARED = 5,
		}

	}

	// BrnDirectorResourceManager.h:40
	enum EShotContext {
		E_HARDSTOP_WORLD = 0,
		E_HARDSTOP_CAR = 1,
	}

	// BrnDirectorResourceManager.h:46
	enum EShotDirection {
		E_SHOTDIRECTION_LEFT = 0,
		E_SHOTDIRECTION_RIGHT = 1,
	}

}

// BrnDirectorResourceManager.h:85
struct BrnDirector::DirectorResourceManager {
private:
	// BrnDirectorResourceManager.h:257
	EventReceiverQueue<512,16> mReceiverQueue;

	// BrnDirectorResourceManager.h:259
	ResourceHandle mAttribsysVaultResourceHandle;

	// BrnDirectorResourceManager.h:262
	const BrnResource::ICEList * mpICEDictionaryList;

	// BrnDirectorResourceManager.h:263
	BrnDirector::DirectorResourceManager::EPrepareStage mePrepareStage;

	// BrnDirectorResourceManager.h:266
	BrnDirector::ICEResourceMgr mICEResourceMgr;

	// BrnDirectorResourceManager.h:267
	BrnDirector::ICEWrapper * mpICEWrapper;

	// BrnDirectorResourceManager.h:269
	const VehicleList * mpVehicleList;

	// BrnDirectorResourceManager.h:273
	shotgroup mRaceStartGroup;

	// BrnDirectorResourceManager.h:274
	shotgroup mRoadRageStartGroup;

	// BrnDirectorResourceManager.h:275
	shotgroup mRaceStartRivalInFrontGroup;

	// BrnDirectorResourceManager.h:276
	shotgroup mOnlineRaceStart;

	// BrnDirectorResourceManager.h:277
	shotgroup mBurningRouteStartGroup;

	// BrnDirectorResourceManager.h:278
	shotgroup mSurvivorStartGroup;

	// BrnDirectorResourceManager.h:279
	shotgroup mEliminatorStartGroup;

	// BrnDirectorResourceManager.h:280
	shotgroup mTrafficAttackStartGroup;

	// BrnDirectorResourceManager.h:281
	shotgroup mOnlineLobbyStartGroup;

	// BrnDirectorResourceManager.h:282
	shotgroup mPursuitStartGroup;

	// BrnDirectorResourceManager.h:283
	shotgroup mStuntRaceStartGroup;

	// BrnDirectorResourceManager.h:284
	shotgroup mMarkedManStartGroup;

	// BrnDirectorResourceManager.h:286
	shotgroup mBurningRouteFinishGroup;

	// BrnDirectorResourceManager.h:287
	shotgroup mMarkedManFinishGroup;

	// BrnDirectorResourceManager.h:288
	shotgroup mRaceFinishGroup;

	// BrnDirectorResourceManager.h:289
	shotgroup mRoadRageFinishGroup;

	// BrnDirectorResourceManager.h:290
	shotgroup mStuntFinishGroup;

	// BrnDirectorResourceManager.h:292
	shotgroup mRaceFinishNorth;

	// BrnDirectorResourceManager.h:293
	shotgroup mRaceFinishNorthEast;

	// BrnDirectorResourceManager.h:294
	shotgroup mRaceFinishEast;

	// BrnDirectorResourceManager.h:295
	shotgroup mRaceFinishSouthEast;

	// BrnDirectorResourceManager.h:296
	shotgroup mRaceFinishSouth;

	// BrnDirectorResourceManager.h:297
	shotgroup mRaceFinishSouthWest;

	// BrnDirectorResourceManager.h:298
	shotgroup mRaceFinishWest;

	// BrnDirectorResourceManager.h:299
	shotgroup mRaceFinishNorthWest;

	// BrnDirectorResourceManager.h:302
	shotgroup mRankUpGroup;

	// BrnDirectorResourceManager.h:305
	shotgroup mDriveThruGasStationGroup;

	// BrnDirectorResourceManager.h:306
	shotgroup mDriveThruBodyShopGroup;

	// BrnDirectorResourceManager.h:307
	shotgroup mDriveThruTyreShopGroup;

	// BrnDirectorResourceManager.h:308
	shotgroup mDriveThruAutoPartsGroup;

	// BrnDirectorResourceManager.h:309
	shotgroup mDriveThruTuningShopGroup;

	// BrnDirectorResourceManager.h:312
	shotgroup mCarSelectMotorCity;

	// BrnDirectorResourceManager.h:313
	shotgroup mCarSelectMotorCityRivalUnlock;

	// BrnDirectorResourceManager.h:314
	shotgroup mCarSelectWestAcres;

	// BrnDirectorResourceManager.h:315
	shotgroup mCarSelectWestAcresRivalUnlock;

	// BrnDirectorResourceManager.h:316
	shotgroup mCarSelectSouthBay;

	// BrnDirectorResourceManager.h:317
	shotgroup mCarSelectSouthBayRivalUnlock;

	// BrnDirectorResourceManager.h:318
	shotgroup mCarSelectHeartbreak;

	// BrnDirectorResourceManager.h:319
	shotgroup mCarSelectHeartbreakRivalUnlock;

	// BrnDirectorResourceManager.h:320
	shotgroup mCarSelectLowerPeaks;

	// BrnDirectorResourceManager.h:321
	shotgroup mCarSelectLowerPeaksRivalUnlock;

	// BrnDirectorResourceManager.h:322
	shotgroup mCarSelectIdle;

	// BrnDirectorResourceManager.h:323
	shotgroup mCarSelectOutro;

	// BrnDirectorResourceManager.h:324
	shotgroup mCarUnlock;

	// BrnDirectorResourceManager.h:327
	shotgroup mGameIntroGroup;

	// BrnDirectorResourceManager.h:328
	shotgroup mBurnoutLicense;

	// BrnDirectorResourceManager.h:329
	shotgroup mShakeAnimsGroup;

	// BrnDirectorResourceManager.h:330
	shotgroup mJumpRig;

	// BrnDirectorResourceManager.h:331
	shotgroup mHardStopWorldLeft;

	// BrnDirectorResourceManager.h:332
	shotgroup mHardStopWorldRight;

	// BrnDirectorResourceManager.h:333
	shotgroup mHardStopCarLeft;

	// BrnDirectorResourceManager.h:334
	shotgroup mHardStopCarRight;

	// BrnDirectorResourceManager.h:335
	shotgroup mFastCrashShotGroup;

	// BrnDirectorResourceManager.h:336
	shotgroup mNormalCrashShotGroup;

	// BrnDirectorResourceManager.h:337
	shotgroup mSlowCrashShotGroup;

	// BrnDirectorResourceManager.h:339
	shotgroup mAfterCrash;

	// BrnDirectorResourceManager.h:340
	shotgroup mAfterCrashSafe;

	// BrnDirectorResourceManager.h:342
	shotgroup mOnlineCarSelect;

	// BrnDirectorResourceManager.h:344
	cameradefaults mCameraDefaults;

	// BrnDirectorResourceManager.h:346
	shotgroup mFailsafe;

	// BrnDirectorResourceManager.h:348
	shotgroup mTakedown;

	// BrnDirectorResourceManager.h:350
	shotgroup mCrashbreaker;

	// BrnDirectorResourceManager.h:352
	shotgroup mTakendown;

	// BrnDirectorResourceManager.h:354
	shotgroup mTestbed;

	// BrnDirectorResourceManager.h:355
	shotgroup mTestbed2;

	// BrnDirectorResourceManager.h:357
	RefSpec mAfterTouchCam;

public:
	// BrnDirectorResourceManager.h:88
	void Construct();

	// BrnDirectorResourceManager.h:93
	bool Prepare(OutputBuffer *, BrnDirector::ICEWrapper *);

	// BrnDirectorResourceManager.h:97
	const ICETakeData * GetKeyAnim(ID) const;

	// BrnDirectorResourceManager.h:101
	const ICETakeData * GetKeyAnimFromGuid(int32_t) const;

	// BrnDirectorResourceManager.h:105
	const BrnDirector::ICEResourceMgr * GetIceResourceManager() const;

	// BrnDirectorResourceManager.h:108
	const shotgroup & GetDriveThruGasStationsGroup() const;

	// BrnDirectorResourceManager.h:111
	const shotgroup & GetDriveThruBodyShopGroup() const;

	// BrnDirectorResourceManager.h:114
	const shotgroup & GetDriveThruTyreShopGroup() const;

	// BrnDirectorResourceManager.h:117
	const shotgroup & GetDriveThruAutoPartsGroup() const;

	// BrnDirectorResourceManager.h:120
	const shotgroup & GetDriveThruTuningShopGroup() const;

	// BrnDirectorResourceManager.h:123
	const shotgroup & GetShakeAnimGroup() const;

	// BrnDirectorResourceManager.h:126
	const Attrib::RefSpec & GetAfterTouchCam() const;

	// BrnDirectorResourceManager.h:129
	const cameradefaults & GetCameraDefaults() const;

	// BrnDirectorResourceManager.h:132
	const shotgroup & GetCarSelect_MotorCity() const;

	// BrnDirectorResourceManager.h:135
	const shotgroup & GetCarSelect_MotorCity_RivalUnlock() const;

	// BrnDirectorResourceManager.h:138
	const shotgroup & GetCarSelect_WestAcres() const;

	// BrnDirectorResourceManager.h:141
	const shotgroup & GetCarSelect_WestAcres_RivalUnlock() const;

	// BrnDirectorResourceManager.h:144
	const shotgroup & GetCarSelect_SouthBay() const;

	// BrnDirectorResourceManager.h:147
	const shotgroup & GetCarSelect_SouthBay_RivalUnlock() const;

	// BrnDirectorResourceManager.h:150
	const shotgroup & GetCarSelect_Heartbreak() const;

	// BrnDirectorResourceManager.h:153
	const shotgroup & GetCarSelect_Heartbreak_RivalUnlock() const;

	// BrnDirectorResourceManager.h:156
	const shotgroup & GetCarSelect_LowerPeaks() const;

	// BrnDirectorResourceManager.h:159
	const shotgroup & GetCarSelect_LowerPeaks_RivalUnlock() const;

	// BrnDirectorResourceManager.h:162
	const shotgroup & GetCarSelect_Outro() const;

	// BrnDirectorResourceManager.h:165
	const shotgroup & GetCarUnlock() const;

	// BrnDirectorResourceManager.h:168
	const shotgroup & GetCarSelect_Idle() const;

	// BrnDirectorResourceManager.h:171
	const shotgroup & GetGameIntro() const;

	// BrnDirectorResourceManager.h:174
	const shotgroup & GetBurnoutLicense() const;

	// BrnDirectorResourceManager.h:177
	const shotgroup & GetJumpRig() const;

	// BrnDirectorResourceManager.h:182
	const shotgroup & GetShots(BrnDirector::EShotContext, BrnDirector::EShotDirection) const;

	// BrnDirectorResourceManager.h:187
	const shotgroup & GetEventIntroShots(BrnGameState::GameStateModuleIO::EGameModeType, bool) const;

	// BrnDirectorResourceManager.h:192
	const shotgroup & GetEventCompletionShots(BrnGameState::GameStateModuleIO::EGameModeType, CgsID) const;

	// BrnDirectorResourceManager.h:195
	const shotgroup & GetFastCrashShots() const;

	// BrnDirectorResourceManager.h:198
	const shotgroup & GetSlowCrashShots() const;

	// BrnDirectorResourceManager.h:201
	const shotgroup & GetNormalCrashShots() const;

	// BrnDirectorResourceManager.h:204
	const shotgroup & GetAfterCrash() const;

	// BrnDirectorResourceManager.h:207
	const shotgroup & GetAfterCrashSafe() const;

	// BrnDirectorResourceManager.h:210
	const shotgroup & GetFailsafe() const;

	// BrnDirectorResourceManager.h:213
	const shotgroup & GetTakedown() const;

	// BrnDirectorResourceManager.h:216
	const shotgroup & GetCrashbreaker() const;

	// BrnDirectorResourceManager.h:219
	const shotgroup & GetTestbed() const;

	// BrnDirectorResourceManager.h:222
	const shotgroup & GetTestbed2() const;

	// BrnDirectorResourceManager.h:225
	const shotgroup & GetRankUp() const;

	// BrnDirectorResourceManager.h:228
	const shotgroup & GetTakendown() const;

	// BrnDirectorResourceManager.h:231
	const shotgroup & GetOnlineCarSelect() const;

	// BrnDirectorResourceManager.h:235
	const Attrib::RefSpec GetVehicleInfoRef(CgsID) const;

}

// BrnDirectorResourceManager.h:61
struct BrnDirector::ICEResourceMgr : public ICE::IResourceManager {
private:
	// BrnDirectorResourceManager.h:73
	DirectorResourceManager * mpResourceManager;

public:
	// BrnDirectorResourceManager.h:64
	void Construct(DirectorResourceManager *);

	// BrnDirectorResourceManager.cpp:454
	virtual const ICETakeData * GetTakeData(ID) const;

	// BrnDirectorResourceManager.cpp:468
	virtual const ICETakeData * GetTakeData(int32_t) const;

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct DirectorResourceManager {
		// BrnDirectorResourceManager.h:245
		enum EPrepareStage {
			E_PREPARESTAGE_CONSTRUCTED = 0,
			E_PREPARESTAGE_REQUEST_RESOURCES = 1,
			E_PREPARESTAGE_ACQUIRE_RESOURCES = 2,
			E_PREPARESTAGE_REGISTER_ATTRIBSYSVAULT = 3,
			E_PREPARESTAGE_REGISTER_ATTRIBSYSVAULT_WAIT = 4,
			E_PREPARESTAGE_PREPARED = 5,
		}

	}

	// BrnDirectorResourceManager.h:40
	enum EShotContext {
		E_HARDSTOP_WORLD = 0,
		E_HARDSTOP_CAR = 1,
	}

	// BrnDirectorResourceManager.h:46
	enum EShotDirection {
		E_SHOTDIRECTION_LEFT = 0,
		E_SHOTDIRECTION_RIGHT = 1,
	}

}

// BrnDirectorResourceManager.h:61
void BrnDirector::ICEResourceMgr::ICEResourceMgr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

