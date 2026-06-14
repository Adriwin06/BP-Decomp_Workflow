// BrnRoute.h:26
namespace BrnAI {
	// BrnAIDriver.h:48
	enum EDriftDirectionSelection {
		E_DRIFT_DIRECTION_SELECTION_CAR_MOVING = 0,
		E_DRIFT_DIRECTION_SELECTION_CAR_FACING = 1,
	}

	// BrnAIDriver.h:56
	enum EDriftState {
		E_DRIFT_STATE_NORMAL_DRIVING = 0,
		E_DRIFT_STATE_START_DRIFT = 1,
		E_DRIFT_STATE_DRIFTING = 2,
		E_DRIFT_STATE_EXIT_DRIFTING = 3,
		E_DRIFT_STATE_COUNT = 4,
	}

	// BrnAIDriver.h:45
	const int32_t KI_MIN_NODES_FOR_VALID_LINE = 1;

	// BrnAIDriver.h:67
	const float32_t KF_AI_VULNERABILITY_RADIUS_BEHIND;

	// BrnAIDriver.h:70
	const float32_t KF_AI_PASSTHROUGH_RADIUS;

	// BrnAIDriver.h:72
	const CgsDev::PerfMonCpuPage KE_AI_PERFMON_PAGE;

}

// BrnAIDriver.h:88
struct BrnAI::NearbyVehicle {
	// BrnAIDriver.h:90
	extern const int32_t KI_TRAFFIC_NUM_HNG_LINES = 4;

	// BrnAIDriver.h:92
	Vector2 mVelocity;

	// BrnAIDriver.h:93
	Vector2 mCentre;

	// BrnAIDriver.h:94
	BrnAI::ENearbyType mType;

	// BrnAIDriver.h:95
	EGlobalRaceCarIndex meGlobalRaceCarIndex;

	// BrnAIDriver.h:96
	BoundaryLine[4] maHNGLines;

}

// BrnAIDriver.h:100
struct BrnAI::NearbyVehicles {
	// BrnAIDriver.h:121
	NearbyVehicle[16] mVehicle;

	// BrnAIDriver.h:123
	int32_t miCount;

public:
	// BrnAIDriver.h:104
	int32_t GetCount() const;

	// BrnAIDriver.h:107
	void Next();

	// BrnAIDriver.h:110
	void Reset();

	// BrnAIDriver.h:113
	bool IsFull() const;

	// BrnAIDriver.h:116
	NearbyVehicle * GetVehiclePointer(int32_t);

	// BrnAIDriver.h:119
	NearbyVehicle * GetHead();

}

// BrnAIDriver.h:161
struct BrnAI::AIDriver {
private:
	// BrnAIDriver.h:539
	NearbyVehicles mNearbyVehicles;

	// BrnAIDriver.h:540
	SteeringFan mSteeringFan;

	// BrnAIDriver.h:541
	RacingLine mRacingLine;

	// BrnAIDriver.h:542
	RacingLineGenerator mRacingLineGenerator;

	// BrnAIDriver.h:544
	PIDController mPIDController;

	// BrnAIDriver.h:545
	PIDController mPIDControllerDrift;

	// BrnAIDriver.h:547
	AIAggression mAggression;

	// BrnAIDriver.h:550
	Vector2 mSteeringTargetVector;

	// BrnAIDriver.h:552
	Vector2 mTargetRacingLinePos;

	// BrnAIDriver.h:553
	Vector2 mTargetRoadDir;

	// BrnAIDriver.h:554
	Vector2 mBrakingAnticipationPos;

	// BrnAIDriver.h:555
	Vector2 mBrakingRoadDir;

	// BrnAIDriver.h:557
	Vector2 mFinalFacing;

	// BrnAIDriver.h:559
	Vector2 m2DCarPos;

	// BrnAIDriver.h:562
	AICar * mpCar;

	// BrnAIDriver.h:563
	AISectionsData * mpSectionsData;

	// BrnAIDriver.h:564
	const AICar * mpAggressionVictim;

	// BrnAIDriver.h:566
	BrnAI::EDriftState meDriftState;

	// BrnAIDriver.h:567
	EGlobalRaceCarIndex meAggressionVictim;

	// BrnAIDriver.h:568
	EActiveRaceCarIndex meRelatedActiveCarIndex;

	// BrnAIDriver.h:570
	float32_t mQuickTurnSteeringLock;

	// BrnAIDriver.h:571
	float32_t mfAngleToBrakingTarget;

	// BrnAIDriver.h:572
	float32_t mfCarSpeed;

	// BrnAIDriver.h:574
	float32_t mfStuckTime;

	// BrnAIDriver.h:575
	float32_t mfDistanceToPlayer;

	// BrnAIDriver.h:576
	float32_t mfInvulnerableTime;

	// BrnAIDriver.h:577
	float32_t mfDesiredSpeed;

	// BrnAIDriver.h:578
	float32_t mfTopSpeed;

	// BrnAIDriver.h:579
	float32_t mfForcedSpeed;

	// BrnAIDriver.h:580
	float32_t mfFinishLineStateTime;

	// BrnAIDriver.h:581
	float32_t mfStartLineWheelSpinTime;

	// BrnAIDriver.h:583
	float32_t mfSteeringAngle;

	// BrnAIDriver.h:584
	float32_t mfAccelerator;

	// BrnAIDriver.h:585
	float32_t mfBrake;

	// BrnAIDriver.h:586
	float32_t mfHandBrake;

	// BrnAIDriver.h:588
	float32_t mfPlayerTimeSinceCrash;

	// BrnAIDriver.h:589
	float32_t mfPlayerTimeSinceAIDriven;

	// BrnAIDriver.h:591
	float32_t mfTimeToLookAheadForDrift;

	// BrnAIDriver.h:592
	float32_t mfMinDistanceToLookAheadForDrift;

	// BrnAIDriver.h:594
	float32_t mfBoostTimeRemaining;

	// BrnAIDriver.h:596
	float32_t mfPerpendicularTarget;

	// BrnAIDriver.h:598
	float32_t mfAngleForDrift;

	// BrnAIDriver.h:600
	float32_t mfCalculatedSteeringAngle;

	// BrnAIDriver.h:601
	float32_t mfPIDOutput;

	// BrnAIDriver.h:603
	float32_t mfPlayerSlowSpeedTime;

	// BrnAIDriver.h:605
	int32_t mActiveRouteTimeStamp;

	// BrnAIDriver.h:607
	int32_t miCurrentRacingLineNodeIndex;

	// BrnAIDriver.h:610
	bool mbWantToExitDrift;

	// BrnAIDriver.h:611
	bool mbWantToEnterDrift;

	// BrnAIDriver.h:612
	bool mbUseForcedSpeed;

	// BrnAIDriver.h:613
	bool mbDriftingRequired;

	// BrnAIDriver.h:615
	bool mbIsRacingLineInitialised;

	// BrnAIDriver.h:616
	bool mbIsActive;

	// BrnAIDriver.h:617
	bool mbCurrentRouteComplete;

	// BrnAIDriver.h:619
	bool mbBoosting;

	// BrnAIDriver.h:629
	extern int32_t miUpdateBehaviourPM;

	// BrnAIDriver.h:630
	extern int32_t miCalculateCarControlsPM;

public:
	// BrnAIDriver.h:167
	void Construct();

	// BrnAIDriver.h:173
	void Prepare(AISectionsData *, EActiveRaceCarIndex, Random *);

	// BrnAIDriver.h:182
	void Update(float32_t, bool, Vector3, AICar *, bool, Random *);

	// BrnAIDriver.h:187
	void SetAICar(AICar *);

	// BrnAIDriver.h:191
	void Deactiveate(bool);

	// BrnAIDriver.h:194
	bool IsActive() const;

	// BrnAIDriver.h:197
	bool HasValidRacingLine();

	// BrnAIDriver.h:201
	float32_t GetAccelerator();

	// BrnAIDriver.h:204
	float32_t GetSteering();

	// BrnAIDriver.h:207
	float32_t GetBrake();

	// BrnAIDriver.h:210
	float32_t GetHandBrake();

	// BrnAIDriver.h:213
	bool GetBoost();

	// BrnAIDriver.h:216
	EActiveRaceCarIndex GetRelatedActiveCarIndex() const;

	// BrnAIDriver.h:220
	void SetRelatedActiveCarIndex(EActiveRaceCarIndex);

	// BrnAIDriver.h:223
	bool WantToExitDrift();

	// BrnAIDriver.h:226
	bool WantToEnterDrift();

	// BrnAIDriver.h:229
	bool UseForcedSpeed() const;

	// BrnAIDriver.h:232
	float32_t GetForcedSpeed() const;

	// BrnAIDriver.h:236
	EGlobalRaceCarIndex GetGlobalRaceCarIndex();

	// BrnAIDriver.h:239
	Vector2 GetDirectVector();

	// BrnAIDriver.h:242
	Vector3 GetDirectVector3D();

	// BrnAIDriver.h:245
	AICar * GetCar();

	// BrnAIDriver.h:248
	const AICar * GetCar() const;

	// BrnAIDriver.h:251
	bool HasCar();

	// BrnAIDriver.h:254
	bool IsInvulnerable() const;

	// BrnAIDriver.h:257
	bool CanPassThroughTraffic();

	// BrnAIDriver.h:260
	bool IsStuck();

	// BrnAIDriver.h:263
	bool IsOnStartLine();

	// BrnAIDriver.h:266
	void ResetStuckTime();

	// BrnAIDriver.h:269
	float32_t GetDesiredSpeed();

	// BrnAIDriver.h:272
	void ResetRacingLine();

	// BrnAIDriver.h:275
	void ClearNearbyVehicles();

	// BrnAIDriver.h:279
	bool AddNearbyTrafficToAvoidance(const TrafficAIEntity *);

	// BrnAIDriver.h:283
	bool AddNearbyAIToAvoidance(const AICar *);

	// BrnAIDriver.h:286
	const BrnAI::NearbyVehicles * GetNearbyVehicles() const;

	// BrnAIDriver.h:289
	void SetPerpendicularTarget(float32_t);

	// BrnAIDriver.h:292
	float32_t GetPerpendicularTarget() const;

	// BrnAIDriver.h:295
	void StartDrift();

	// BrnAIDriver.h:298
	void DontDrift();

	// BrnAIDriver.h:301
	void AttemptToDriveAtDesiredSpeedInDrift();

	// BrnAIDriver.h:305
	void AttemptToDriveAtDesiredSpeed(float32_t);

	// BrnAIDriver.h:309
	bool IsPlayerProtected(AICar *);

	// BrnAIDriver.h:312
	bool CheckForBoosting();

	// BrnAIDriver.h:315
	RacingLineGenerator * GetRacingLineGenerator();

	// BrnAIDriver.h:318
	float32_t GetCalcualtedSteeringAngle();

	// BrnAIDriver.h:321
	void ResetAttribSysValues();

	// BrnAIDriver.h:324
	void ResetPIDTuningState();

	// BrnAIDriver.h:327
	int32_t DoRoundRobinWork(BrnAI::ERoundRobinType);

	// BrnAIDriver.h:330
	void RecordDriftVelocity();

	// BrnAIDriver.h:333
	AIAggression * GetAggression();

	// BrnAIDriver.h:336
	Vector2 GetTargetPosition();

	// BrnAIDriver.h:339
	void Determine180Turn();

	// BrnAIDriver.h:342
	void UpdateQuickTurn();

	// BrnAIDriver.h:345
	bool SwapToFighting();

	// BrnAIDriver.h:349
	void SetAggressionVictim(const AICar *);

	// BrnAIDriver.h:352
	const AICar * GetAggressionVictim() const;

	// BrnAIDriver.h:355
	bool IsSlammingPlayer() const;

	// BrnAIDriver.h:358
	void ClearOffCentreBias();

private:
	// BrnAIDriver.h:363
	bool ComputeRouteDirection(Vector2 &);

	// BrnAIDriver.h:367
	BrnAI::EBiasMode ChooseRaceSteeringFan(AICar *);

	// BrnAIDriver.h:371
	float32_t DetermineDriftSteeringAngle(BrnAI::EDriftDirectionSelection);

	// BrnAIDriver.h:375
	void GenerateRacingLine(float32_t);

	// BrnAIDriver.h:380
	void CalcDistanceFromPlayer(Vector3);

	// BrnAIDriver.h:385
	void CheckForRacingLineReset(bool);

	// BrnAIDriver.h:389
	void InitialiseRacingLine();

	// BrnAIDriver.h:393
	void UpdateBrakingAnticipationData();

	// BrnAIDriver.h:399
	float32_t CorneringTopSpeed(float32_t);

	// BrnAIDriver.h:405
	float32_t ProximitySpeed(float32_t);

	// BrnAIDriver.h:411
	float32_t HardShoulderSpeed(float32_t);

	// BrnAIDriver.h:417
	void UpdateBehaviour(float32_t, AICar *);

	// BrnAIDriver.h:422
	void UpdateStuck(float32_t);

	// BrnAIDriver.h:431
	bool FindPositionInFuture(Vector2 &, Vector2 &, float32_t, float32_t, float32_t);

	// BrnAIDriver.h:440
	void CalculateCarControls(float32_t, Vector3, bool, Random *);

	// BrnAIDriver.h:445
	void CalculateSteeringAngle(float32_t);

	// BrnAIDriver.h:451
	void CalculateDesiredSpeed(Vector3, bool);

	// BrnAIDriver.h:454
	bool CheckForSpeedMatch(float32_t);

	// BrnAIDriver.h:458
	void ClearAIControls();

	// BrnAIDriver.h:463
	int32_t GetIndexOfFurthestVehicle(Vector2);

	// BrnAIDriver.h:466
	void NoDriftRequired();

	// BrnAIDriver.h:469
	bool EstimateNeedForDrifting();

	// BrnAIDriver.h:473
	bool FindFinalDriftDirection(Vector2 &);

	// BrnAIDriver.h:476
	bool ExitDriftIfAlligned();

	// BrnAIDriver.h:480
	void SetDriftState(BrnAI::EDriftState);

	// BrnAIDriver.h:484
	void DoDrivingBehaviour(float32_t);

	// BrnAIDriver.h:487
	void AttemptToSlowDownFromDrift();

	// BrnAIDriver.h:491
	float32_t GetQuickTurnSteering(Vector2);

	// BrnAIDriver.h:495
	void DoSlowTurn(float32_t);

	// BrnAIDriver.h:498
	void DoSlowTurnBehaviour();

	// BrnAIDriver.h:502
	void UpdateSteeringAngle(float32_t);

	// BrnAIDriver.h:506
	void SetSteeringAngle(float32_t);

	// BrnAIDriver.h:510
	float32_t FlippedInReverse(float32_t);

	// BrnAIDriver.h:514
	void SetDrivingFanBiases(AICar *);

	// BrnAIDriver.h:517
	BrnAI::EBiasMode GetAttackPlayerBias();

	// BrnAIDriver.h:521
	BrnAI::EBiasMode ChooseAggressiveSteeringFan(AICar *);

	// BrnAIDriver.h:526
	void UpdatePlayerTimers(float32_t, AICar *);

}

// BrnAIDriver.h:90
extern const int32_t KI_TRAFFIC_NUM_HNG_LINES = 4;

// BrnRoute.h:26
namespace BrnAI {
	// BrnAIDriver.h:45
	const int32_t KI_MIN_NODES_FOR_VALID_LINE = 1;

	// BrnAIDriver.h:67
	const float32_t KF_AI_VULNERABILITY_RADIUS_BEHIND;

	// BrnAIDriver.h:70
	const float32_t KF_AI_PASSTHROUGH_RADIUS;

	// BrnAIDriver.h:72
	const CgsDev::PerfMonCpuPage KE_AI_PERFMON_PAGE;

}

