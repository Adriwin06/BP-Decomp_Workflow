// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct GameState {
		// BrnDirectorGameState.h:44
		enum EEventState {
			E_EVENT_STATE_PRE_INTRO = 0,
			E_EVENT_STATE_INTRO = 1,
			E_EVENT_STATE_COUNTDOWN = 2,
			E_EVENT_STATE_ACTIVE = 3,
			E_EVENT_STATE_POST_EVENT = 4,
		}

		// BrnDirectorGameState.h:53
		enum EDriveThru {
			E_DRIVETHRU_INVALID = 0,
			E_DRIVETHRU_AUTO_PARTS = 1,
			E_DRIVETHRU_BODY_SHOP = 2,
			E_DRIVETHRU_GAS_STATION = 3,
			E_DRIVETHRU_TUNING_SHOP = 4,
			E_DRIVETHRU_TIRE_SHOP = 5,
			E_DRIVETHRU_COUNT = 6,
		}

		// BrnDirectorGameState.h:77
		enum ECameraMode {
			E_CAMERA_MODE_FIRST_PERSON = 0,
			E_CAMERA_MODE_THIRD_PERSON = 1,
			E_CAMERA_MODE_COUNT = 2,
		}

		// BrnDirectorGameState.h:150
		enum EJunkyardState {
			E_JY_INACTIVE = 0,
			E_JY_INTRO_UNLOCKING_CARS = 1,
			E_JY_INTRO_NO_CARS = 2,
			E_JY_CAR_UNLOCK = 3,
			E_JY_CAR_SELECT = 4,
			E_JY_WAITING_FOR_AUDIO = 5,
		}

		// BrnDirectorGameState.h:214
		struct RankUpInfo {
			// BrnDirectorGameState.h:215
			bool mbDoingRankUp;

			// BrnDirectorGameState.h:216
			bool mbDoingRankUpIntro;

			// BrnDirectorGameState.h:217
			bool mbNewRivalFocusThisFrame;

			// BrnDirectorGameState.h:218
			EActiveRaceCarIndex meRivalIndex;

		}

		// BrnDirectorGameState.h:222
		struct ShowTimeInfo {
			// BrnDirectorGameState.h:229
			float32_t mfDeformationLevel;

			// BrnDirectorGameState.h:230
			int32_t miComboLevel;

			// BrnDirectorGameState.h:231
			int32_t miTotalVehiclesHit;

			// BrnDirectorGameState.h:232
			bool mbComboLevelIncreasedThisFrame;

			// BrnDirectorGameState.h:233
			bool mbVehicleImpactThisFrame;

			// BrnDirectorGameState.h:234
			bool mbCrushComboThisFrame;

			// BrnDirectorGameState.h:235
			bool mbEarntMultiplierThisFrame;

			// BrnDirectorGameState.h:236
			bool mbExtraSpinThisFrame;

			// BrnDirectorGameState.h:237
			bool mbInIntro;

		public:
			// BrnDirectorGameState.h:224
			void Clear();

			// BrnDirectorGameState.h:227
			void ResetPerFrameData();

		}

		// BrnDirectorGameState.h:241
		struct DirectorProfileData {
			// BrnDirectorGameState.h:247
			BrnDirector::GameState::ECameraMode meCameraMode;

		public:
			// BrnDirectorGameState.h:245
			void Construct();

		}

	}

}

// BrnDirectorGameState.h:41
struct BrnDirector::GameState {
	// BrnDirectorGameState.h:85
	const BrnTraffic::JunctionLogicBox * mpEventJLBox;

	// BrnDirectorGameState.h:86
	Matrix44Affine mTrafficLightSpace;

	// BrnDirectorGameState.h:88
	Matrix44Affine mBaseDriveThruTransform;

	// BrnDirectorGameState.h:89
	Matrix44Affine mDriveThruTransform;

	// BrnDirectorGameState.h:90
	bool mbDriveThruActive;

	// BrnDirectorGameState.h:91
	BrnDirector::GameState::EDriveThru meDriveThruType;

	// BrnDirectorGameState.h:93
	bool mbNewProfileIntroActive;

	// BrnDirectorGameState.h:94
	bool mbGameIntroFlybyActive;

	// BrnDirectorGameState.h:96
	bool mbTakedownActive;

	// BrnDirectorGameState.h:97
	bool mbIsRevengeTD;

	// BrnDirectorGameState.h:98
	bool mbIsShutdown;

	// BrnDirectorGameState.h:99
	bool mbIsSignatureTD;

	// BrnDirectorGameState.h:100
	EActiveRaceCarIndex meTakedownVictimID;

	// BrnDirectorGameState.h:102
	int32_t miThisFramesActionFlags;

	// BrnDirectorGameState.h:105
	int64_t miActionRequestedCamera;

	// BrnDirectorGameState.h:107
	bool mbPaybackActive;

	// BrnDirectorGameState.h:108
	BrnNetwork::EPaybackType meActivePaybackType;

	// BrnDirectorGameState.h:110
	bool mbPlayerInTunnel;

	// BrnDirectorGameState.h:111
	bool mbCrashActive;

	// BrnDirectorGameState.h:112
	bool mbCrashActiveWithSlomoSinceStart;

	// BrnDirectorGameState.h:113
	float32_t mfCrashTimeRemaining;

	// BrnDirectorGameState.h:115
	bool mbCanUseSlomo;

	// BrnDirectorGameState.h:117
	bool mbCrashNavShown;

	// BrnDirectorGameState.h:118
	bool mbColourCalibrationShown;

	// BrnDirectorGameState.h:120
	bool mbShortCutMenuShown;

	// BrnDirectorGameState.h:122
	bool mbWonLastEvent;

	// BrnDirectorGameState.h:124
	bool mbImpactTimeActive;

	// BrnDirectorGameState.h:125
	float32_t mfImpactTimeSloMoFactor;

	// BrnDirectorGameState.h:127
	uint32_t muNumberOfCarsInIntro;

	// BrnDirectorGameState.h:128
	EActiveRaceCarIndex[3] maeIntroCarID;

	// BrnDirectorGameState.h:130
	bool mbGoToCrashModeAfterIntro;

	// BrnDirectorGameState.h:131
	BrnGameState::GameStateModuleIO::EGameModeType meEventType;

	// BrnDirectorGameState.h:132
	DataJournal<BrnDirector::GameState::EEventState,2> mEventState;

	// BrnDirectorGameState.h:133
	int32_t miEventSpecificShotGroup;

	// BrnDirectorGameState.h:134
	BrnDirector::GameState::EEventState meEventStatePreviousFrame;

	// BrnDirectorGameState.h:135
	float32_t mfStateTimeLeft;

	// BrnDirectorGameState.h:136
	EActiveRaceCarIndex meTargetRaceCarIndex;

	// BrnDirectorGameState.h:137
	BrnDirector::VehicleRef::EType meTargetVehicleRefType;

	// BrnDirectorGameState.h:139
	float32_t mfPadInactiveTime;

	// BrnDirectorGameState.h:140
	float32_t mfPlayerInactiveTime;

	// BrnDirectorGameState.h:141
	bool mbPlayerBeenActive;

	// BrnDirectorGameState.h:143
	bool mbShouldResetPlayerCameraThisFrame;

	// BrnDirectorGameState.h:144
	bool mbNewCarAdded;

	// BrnDirectorGameState.h:145
	float32_t mfCarAddedPresentationTimeRemaining;

	// BrnDirectorGameState.h:146
	EActiveRaceCarIndex meAddedCarID;

	// BrnDirectorGameState.h:148
	EActiveRaceCarIndex meBeatenRivalRaceCarIndex;

	// BrnDirectorGameState.h:160
	CgsID mFinishLineID;

	// BrnDirectorGameState.h:161
	Vector3 mFinishLineNorthmostDir;

	// BrnDirectorGameState.h:163
	BrnDirector::GameState::EJunkyardState meJunkyardState;

	// BrnDirectorGameState.h:164
	bool mbIsRivalUnlock;

	// BrnDirectorGameState.h:165
	bool mbNewCarUnlockedThisFrame;

	// BrnDirectorGameState.h:166
	CgsID mUnlockedVehicleType;

	// BrnDirectorGameState.h:167
	CgsID mJunkyardId;

	// BrnDirectorGameState.h:168
	int32_t miJunkyardPosIndex;

	// BrnDirectorGameState.h:169
	bool mbJunkyardPosJustChanged;

	// BrnDirectorGameState.h:170
	bool mbJunkyardPosIsLeft;

	// BrnDirectorGameState.h:171
	bool mbJunkyardPlayerRespawnedThisFrame;

	// BrnDirectorGameState.h:172
	bool mbJunkyardSelectionChangedMessageReceivedThisFrame;

	// BrnDirectorGameState.h:173
	bool mbJunkyardSelectionChangedMessageWaiting;

	// BrnDirectorGameState.h:174
	bool mbJunkyardCarModActive;

	// BrnDirectorGameState.h:175
	bool mbOnlineCarSelectCarIsShowable;

	// BrnDirectorGameState.h:177
	bool mbJunkyardCarUnlockTickedClosedThisFrame;

	// BrnDirectorGameState.h:178
	bool mbJunkyardCarUnlockTickedClosedThisFrameMessageWaiting;

	// BrnDirectorGameState.h:180
	bool mbIsOnlineCarSelectActive;

	// BrnDirectorGameState.h:181
	bool mbHasOnlineCarSelectBeenAborted;

	// BrnDirectorGameState.h:182
	bool mbOnlineCarSelectCanStartRaceIntro;

	// BrnDirectorGameState.h:183
	bool mbOnlineCarSelectMustClampToCar;

	// BrnDirectorGameState.h:185
	bool mbOnlineRaceIntroCanUseBars;

	// BrnDirectorGameState.h:187
	bool mbRankUpMessageWaiting;

	// BrnDirectorGameState.h:188
	bool mbRankUpMessageReceivedThisFrame;

	// BrnDirectorGameState.h:189
	int32_t miRankUpNewRank;

	// BrnDirectorGameState.h:191
	bool mbDoing100PercentSequence;

	// BrnDirectorGameState.h:193
	bool mbPlayerAndRivalImpactOccured;

	// BrnDirectorGameState.h:194
	bool mbPlayerWonImpactAgainstRival;

	// BrnDirectorGameState.h:196
	bool mbPlayerCheckedTraffic;

	// BrnDirectorGameState.h:197
	bool mbPlayerHitCheckpointThisFrame;

	// BrnDirectorGameState.h:198
	bool mbPlayerPerformedStunt;

	// BrnDirectorGameState.h:199
	bool mbComboWarningActive;

	// BrnDirectorGameState.h:200
	float32_t mfPlayerBoostPercentage;

	// BrnDirectorGameState.h:202
	float32_t mfHowCloseToTotalled;

	// BrnDirectorGameState.h:203
	bool mbRoadRageOneMoreCrashToWrecked;

	// BrnDirectorGameState.h:204
	bool mbRoadRageTotalled;

	// BrnDirectorGameState.h:206
	bool mbTrainingPause;

	// BrnDirectorGameState.h:208
	bool mbPlayerWasTakenDown;

	// BrnDirectorGameState.h:209
	EActiveRaceCarIndex mePlayerKillerIndex;

	// BrnDirectorGameState.h:211
	bool mbStartingFreeburnDueToPlayerJoinThisFrame;

	// BrnDirectorGameState.h:250
	BrnDirector::GameState::RankUpInfo mRankUpInfo;

	// BrnDirectorGameState.h:251
	BrnDirector::GameState::ShowTimeInfo mShowTimeInfo;

	// BrnDirectorGameState.h:252
	BrnDirector::GameState::DirectorProfileData mDirectorProfileData;

public:
	// BrnDirectorGameState.h:255
	void Clear();

	// BrnDirectorGameState.h:258
	void ResetPerFrameData();

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct GameState {
		// BrnDirectorGameState.h:44
		enum EEventState {
			E_EVENT_STATE_PRE_INTRO = 0,
			E_EVENT_STATE_INTRO = 1,
			E_EVENT_STATE_COUNTDOWN = 2,
			E_EVENT_STATE_ACTIVE = 3,
			E_EVENT_STATE_POST_EVENT = 4,
		}

		// BrnDirectorGameState.h:53
		enum EDriveThru {
			E_DRIVETHRU_INVALID = 0,
			E_DRIVETHRU_AUTO_PARTS = 1,
			E_DRIVETHRU_BODY_SHOP = 2,
			E_DRIVETHRU_GAS_STATION = 3,
			E_DRIVETHRU_TUNING_SHOP = 4,
			E_DRIVETHRU_TIRE_SHOP = 5,
			E_DRIVETHRU_COUNT = 6,
		}

		// BrnDirectorGameState.h:77
		enum ECameraMode {
			E_CAMERA_MODE_FIRST_PERSON = 0,
			E_CAMERA_MODE_THIRD_PERSON = 1,
			E_CAMERA_MODE_COUNT = 2,
		}

		// BrnDirectorGameState.h:150
		enum EJunkyardState {
			E_JY_INACTIVE = 0,
			E_JY_INTRO_UNLOCKING_CARS = 1,
			E_JY_INTRO_NO_CARS = 2,
			E_JY_CAR_UNLOCK = 3,
			E_JY_CAR_SELECT = 4,
			E_JY_WAITING_FOR_AUDIO = 5,
		}

		// BrnDirectorGameState.h:214
		struct RankUpInfo {
			// BrnDirectorGameState.h:215
			bool mbDoingRankUp;

			// BrnDirectorGameState.h:216
			bool mbDoingRankUpIntro;

			// BrnDirectorGameState.h:217
			bool mbNewRivalFocusThisFrame;

			// BrnDirectorGameState.h:218
			EActiveRaceCarIndex meRivalIndex;

		}

		// BrnDirectorGameState.h:222
		struct ShowTimeInfo {
			// BrnDirectorGameState.h:229
			float32_t mfDeformationLevel;

			// BrnDirectorGameState.h:230
			int32_t miComboLevel;

			// BrnDirectorGameState.h:231
			int32_t miTotalVehiclesHit;

			// BrnDirectorGameState.h:232
			bool mbComboLevelIncreasedThisFrame;

			// BrnDirectorGameState.h:233
			bool mbVehicleImpactThisFrame;

			// BrnDirectorGameState.h:234
			bool mbCrushComboThisFrame;

			// BrnDirectorGameState.h:235
			bool mbEarntMultiplierThisFrame;

			// BrnDirectorGameState.h:236
			bool mbExtraSpinThisFrame;

			// BrnDirectorGameState.h:237
			bool mbInIntro;

		public:
			// BrnDirectorGameState.h:224
			void Clear();

			// BrnDirectorGameState.h:227
			void ResetPerFrameData();

		}

		// BrnDirectorGameState.h:241
		struct DirectorProfileData {
			// BrnDirectorGameState.h:247
			BrnDirector::GameState::ECameraMode meCameraMode;

		public:
			// BrnDirectorGameState.h:245
			void Construct();

		}

	}

}

