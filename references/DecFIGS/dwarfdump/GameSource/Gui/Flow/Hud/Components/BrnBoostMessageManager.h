// BrnBoostMessageManager.h:258
extern char[] macMessageSlotNameBase;

// BrnBoostMessageManager.h:260
extern const int32_t KI_MAX_BOOSTMESSAGE_SLOTS = 3;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct BoostMessageManager {
		// BrnBoostMessageManager.h:64
		enum MessageType {
			E_MESSAGETYPE_GOOD_BOOSTING = 0,
			E_MESSAGETYPE_ONCOMING = 1,
			E_MESSAGETYPE_AIR = 2,
			E_MESSAGETYPE_DRIFT = 3,
			E_MESSAGETYPE_SPIN = 4,
			E_MESSAGETYPE_TWO_WHEELS = 5,
			E_MESSAGETYPE_TAILGATING = 6,
			E_MESSAGETYPE_TRAFFIC_CHECK = 7,
			E_MESSAGETYPE_NEARMISS = 8,
			E_MESSAGETYPE_STUNT = 9,
			E_MESSAGETYPE_SHORTCUT = 10,
			E_MESSAGETYPE_CAR_HIT = 11,
			E_MESSAGETYPE_VAN_HIT = 12,
			E_MESSAGETYPE_TRUCK_HIT = 13,
			E_MESSAGETYPE_BUS_HIT = 14,
			E_MESSAGETYPE_RIG_HIT = 15,
			E_MESSAGETYPE_LIMO_HIT = 16,
			E_MESSAGETYPE_TAXI_HIT = 17,
			E_MESSAGETYPE_TARGET_VEHICLE_HIT = 18,
			E_MESSAGETYPE_N_CARS_HIT = 19,
			E_MESSAGETYPE_OVERHEAD_SIGN = 20,
			E_MESSAGETYPE_TRADING_PAINT = 21,
			E_MESSAGETYPE_NUDGE = 22,
			E_MESSAGETYPE_SLAM = 23,
			E_MESSAGETYPE_SHUNT = 24,
			E_MESSAGETYPE_BOOST_SLAM = 25,
			E_MESSAGETYPE_BOOST_SHUNT = 26,
			E_MESSAGETYPE_GRINDING = 27,
			E_MESSAGETYPE_RUBBING = 28,
			E_MESSAGETYPE_CRASH_ESCAPE = 29,
			E_MESSAGETYPE_SIGNATURE_STUNT = 30,
			E_MESSAGETYPE_BARREL_ROLL = 31,
			E_MESSAGETYPE_HANDBRAKE_TURN = 32,
			E_MESSAGETYPE_TAKEDOWN = 33,
			E_MESSAGETYPE_CLEANLANDING = 34,
			E_MESSAGETYPE_SUCCESSFUL_LANDING = 35,
			E_MESSAGETYPE_JUMPS = 36,
			E_MESSAGETYPE_STUNTS = 37,
			E_MESSAGETYPE_SMASHES = 38,
			E_MESSAGETYPE_MAX = 39,
		}

	}

}

// BrnBoostMessageManager.h:49
struct BrnGui::BaseBoostMessageManagerComponent : public BrnFlaptComponent {
}

// BrnBoostMessageManager.h:61
struct BrnGui::BoostMessageManager : public BaseBoostMessageManagerComponent {
private:
	// BrnBoostMessageManager.h:258
	extern char[] macMessageSlotNameBase;

	// BrnBoostMessageManager.h:259
	extern const char *[39] mpacMessageTypeStrings;

	// BrnBoostMessageManager.h:260
	extern const int32_t KI_MAX_BOOSTMESSAGE_SLOTS = 3;

	// BrnBoostMessageManager.h:261
	extern const CgsID K_SIGNATURE_STUNT_INVALID = [0, 0, 0, 0, 255, 255, 255, 255];

	// BrnBoostMessageManager.h:263
	BrnWorld::EBoostType meCurrentBoostType;

	// BrnBoostMessageManager.h:266
	bool mbChecking;

	// BrnBoostMessageManager.h:267
	int32_t miCheckingCount;

	// BrnBoostMessageManager.h:270
	bool mbNearMiss;

	// BrnBoostMessageManager.h:271
	bool mbIsCrashEscape;

	// BrnBoostMessageManager.h:272
	int32_t miNearMissCount;

	// BrnBoostMessageManager.h:275
	bool mbStuntDone;

	// BrnBoostMessageManager.h:276
	int32_t miStuntChain;

	// BrnBoostMessageManager.h:277
	CgsID mSignatureStuntId;

	// BrnBoostMessageManager.h:278
	CgsID mShortcutId;

	// BrnBoostMessageManager.h:281
	float32_t mfDriftingDist;

	// BrnBoostMessageManager.h:282
	float32_t mfPrevDriftDist;

	// BrnBoostMessageManager.h:285
	float32_t mfSpinAngle;

	// BrnBoostMessageManager.h:286
	float32_t mfPrevSpinAngle;

	// BrnBoostMessageManager.h:289
	float32_t mfOncomingDist;

	// BrnBoostMessageManager.h:290
	float32_t mfPrevOncomingDist;

	// BrnBoostMessageManager.h:293
	float32_t mfAirTime;

	// BrnBoostMessageManager.h:294
	float32_t mfPrevAirTime;

	// BrnBoostMessageManager.h:297
	float32_t mfTailDist;

	// BrnBoostMessageManager.h:298
	float32_t mfPrevTailDist;

	// BrnBoostMessageManager.h:301
	bool mbBarrelRollCompleted;

	// BrnBoostMessageManager.h:302
	int32_t miNumberOfCompletedBarrelRolls;

	// BrnBoostMessageManager.h:303
	float32_t mfCompletedBarrelRollAngle;

	// BrnBoostMessageManager.h:306
	bool mbAirSpinInProgress;

	// BrnBoostMessageManager.h:307
	float32_t mfInProgressAirSpinAngle;

	// BrnBoostMessageManager.h:308
	float32_t mfPrevAirSpinAngle;

	// BrnBoostMessageManager.h:311
	bool mbHandBreakTurnCompleted;

	// BrnBoostMessageManager.h:312
	float32_t mfHandBrakeTurnAngle;

	// BrnBoostMessageManager.h:313
	float32_t mfPrevHandBrakeTurnAngle;

	// BrnBoostMessageManager.h:316
	bool mbCleanLandingComplete;

	// BrnBoostMessageManager.h:317
	bool mbSuccessfulLandingComplete;

	// BrnBoostMessageManager.h:320
	bool mbImpactEventRecorded;

	// BrnBoostMessageManager.h:321
	BrnPhysics::Vehicle::EImpactType meImpactType;

	// BrnBoostMessageManager.h:324
	bool mbPlayerDoesTakedown;

	// BrnBoostMessageManager.h:327
	bool mbJumpMessagePending;

	// BrnBoostMessageManager.h:328
	int32_t miJumpCurrentCount;

	// BrnBoostMessageManager.h:329
	int32_t miJumpTotalCount;

	// BrnBoostMessageManager.h:332
	bool mbSmashesMessagePending;

	// BrnBoostMessageManager.h:333
	int32_t miSmashesCurrentCount;

	// BrnBoostMessageManager.h:334
	int32_t miSmashesTotalCount;

	// BrnBoostMessageManager.h:337
	bool mbBillBoardsMessagePending;

	// BrnBoostMessageManager.h:338
	int32_t miBillBoardsCurrentCount;

	// BrnBoostMessageManager.h:339
	int32_t miBillBoardsTotalCount;

	// BrnBoostMessageManager.h:342
	BrnTraffic::VehicleScoreCategory meHitVehicleCategory;

	// BrnBoostMessageManager.h:343
	int32_t miHitVehicleScore;

	// BrnBoostMessageManager.h:344
	int32_t miHitVehicleCount;

	// BrnBoostMessageManager.h:345
	bool mbHitOverheadSign;

	// BrnBoostMessageManager.h:347
	Array<BrnGui::BoostMessageSlot,3u> mSlots;

public:
	// BrnBoostMessageManager.h:125
	void Construct(const char *, StateInterface *, const char *);

	// BrnBoostMessageManager.h:132
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnBoostMessageManager.h:140
	void RecvEvent(const CgsModule::Event *, int32_t, BrnGui::GuiCache *);

	// BrnBoostMessageManager.h:148
	bool AddMessage(BrnGui::BoostMessageManager::MessageType, const char *, float32_t, int32_t);

	// BrnBoostMessageManager.h:155
	void Update(float32_t, bool);

private:
	// BrnBoostMessageManager.h:161
	void UpdateStunts();

	// BrnBoostMessageManager.h:165
	void UpdateVehicleImpacts();

	// BrnBoostMessageManager.h:169
	void UpdateTakdowns();

	// BrnBoostMessageManager.h:173
	void UpdateCrashEscape();

	// BrnBoostMessageManager.h:177
	void UpdateBarrelRolls();

	// BrnBoostMessageManager.h:181
	void UpdateHandBrake();

	// BrnBoostMessageManager.h:185
	void UpdateLandingsCheck();

	// BrnBoostMessageManager.h:189
	void UpdateSignatureStunts();

	// BrnBoostMessageManager.h:193
	void UpdateShortcuts();

	// BrnBoostMessageManager.h:197
	void UpdateBoosting();

	// BrnBoostMessageManager.h:201
	void UpdateAir();

	// BrnBoostMessageManager.h:206
	void HandleOnCompletedStunt(const GuiCompletedStuntEvent *);

	// BrnBoostMessageManager.h:211
	void HandleOnInProgressStunt(const GuiInProgressStuntEvent *);

	// BrnBoostMessageManager.h:215
	void UpdateOncoming();

	// BrnBoostMessageManager.h:219
	void UpdateDrift();

	// BrnBoostMessageManager.h:223
	void UpdateSpin();

	// BrnBoostMessageManager.h:227
	void UpdateTailgating();

	// BrnBoostMessageManager.h:231
	void UpdateChecking();

	// BrnBoostMessageManager.h:235
	void UpdateStuntsJumpsAndSmashes();

	// BrnBoostMessageManager.h:239
	void UpdateNearMiss();

	// BrnBoostMessageManager.h:243
	void UpdateShowtime();

	// BrnBoostMessageManager.h:247
	BoostMessageSlot * GetFreeSlot();

	// BrnBoostMessageManager.h:252
	BoostMessageSlot * FindMessageSlot(BrnGui::BoostMessageManager::MessageType);

	// BrnBoostMessageManager.h:256
	int32_t GetNumActiveSlots() const;

}

// BrnBoostMessageManager.h:261
extern const CgsID K_SIGNATURE_STUNT_INVALID = [0, 0, 0, 0, 255, 255, 255, 255];

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct BoostMessageManager {
		// BrnBoostMessageManager.h:64
		enum MessageType {
			E_MESSAGETYPE_GOOD_BOOSTING = 0,
			E_MESSAGETYPE_ONCOMING = 1,
			E_MESSAGETYPE_AIR = 2,
			E_MESSAGETYPE_DRIFT = 3,
			E_MESSAGETYPE_SPIN = 4,
			E_MESSAGETYPE_TWO_WHEELS = 5,
			E_MESSAGETYPE_TAILGATING = 6,
			E_MESSAGETYPE_TRAFFIC_CHECK = 7,
			E_MESSAGETYPE_NEARMISS = 8,
			E_MESSAGETYPE_STUNT = 9,
			E_MESSAGETYPE_SHORTCUT = 10,
			E_MESSAGETYPE_CAR_HIT = 11,
			E_MESSAGETYPE_VAN_HIT = 12,
			E_MESSAGETYPE_TRUCK_HIT = 13,
			E_MESSAGETYPE_BUS_HIT = 14,
			E_MESSAGETYPE_RIG_HIT = 15,
			E_MESSAGETYPE_LIMO_HIT = 16,
			E_MESSAGETYPE_TAXI_HIT = 17,
			E_MESSAGETYPE_TARGET_VEHICLE_HIT = 18,
			E_MESSAGETYPE_N_CARS_HIT = 19,
			E_MESSAGETYPE_OVERHEAD_SIGN = 20,
			E_MESSAGETYPE_TRADING_PAINT = 21,
			E_MESSAGETYPE_NUDGE = 22,
			E_MESSAGETYPE_SLAM = 23,
			E_MESSAGETYPE_SHUNT = 24,
			E_MESSAGETYPE_BOOST_SLAM = 25,
			E_MESSAGETYPE_BOOST_SHUNT = 26,
			E_MESSAGETYPE_GRINDING = 27,
			E_MESSAGETYPE_RUBBING = 28,
			E_MESSAGETYPE_CRASH_ESCAPE = 29,
			E_MESSAGETYPE_SIGNATURE_STUNT = 30,
			E_MESSAGETYPE_BARREL_ROLL = 31,
			E_MESSAGETYPE_HANDBRAKE_TURN = 32,
			E_MESSAGETYPE_TAKEDOWN = 33,
			E_MESSAGETYPE_CLEANLANDING = 34,
			E_MESSAGETYPE_SUCCESSFUL_LANDING = 35,
			E_MESSAGETYPE_JUMPS = 36,
			E_MESSAGETYPE_STUNTS = 37,
			E_MESSAGETYPE_SMASHES = 38,
			E_MESSAGETYPE_MAX = 39,
		}

	}

}

