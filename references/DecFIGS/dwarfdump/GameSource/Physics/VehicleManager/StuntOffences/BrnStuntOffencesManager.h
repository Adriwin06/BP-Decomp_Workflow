// BrnStuntOffencesManager.h:260
extern const float32_t KF_MIN_TIME_IN_THE_AIR;

// BrnStuntOffencesManager.h:261
extern const float32_t KF_MIN_ANGLE_FOR_AIR_SPIN;

// BrnStuntOffencesManager.h:262
extern const float32_t KF_MIN_ANGLE_FOR_BARREL_ROLL_COMPLETED;

// BrnStuntOffencesManager.h:263
extern const float32_t KF_MIN_ANGLE_FOR_BARREL_ROLL_IN_PROGRESS;

// BrnStuntOffencesManager.h:264
extern const float32_t KF_MAX_HANDBREAK_HOLD_TIME;

// BrnStuntOffencesManager.h:265
extern const float32_t KF_MIN_FOR_HANDBREAK_TURN;

// BrnStuntOffencesManager.h:266
extern const float32_t KF_HANDBRAKE_STABLE_END_TIME;

// BrnStuntOffencesManager.h:267
extern const float32_t KF_MAX_TIME_FOR_CLEAN_LANDING_CHECK;

// BrnStuntOffencesManager.h:268
extern const float32_t KF_MAX_TIME_FOR_SUCCESSFUL_LANDING_CHECK;

// BrnStuntOffencesManager.h:269
extern const float32_t KF_MAX_ANGLE_FOR_CLEAN_LANDING;

// BrnStuntOffencesManager.h:270
extern const float32_t KF_MIN_AMOUNT_AIR_TIME_FOR_CLEAN_LANDING;

// BrnStuntOffencesManager.h:271
extern const float32_t KF_MIN_AMOUNT_AIR_TIME_FOR_SUCCESSFUL_LANDING;

// BrnStuntOffencesManager.h:49
struct BrnPhysics::StuntOffencesManager {
private:
	// BrnStuntOffencesManager.h:200
	Vector3 mvCurrentInAirRotations;

	// BrnStuntOffencesManager.h:201
	Vector3 mvStuntRollInProgress;

	// BrnStuntOffencesManager.h:204
	float32_t mfTimeInTheAirSoFar;

	// BrnStuntOffencesManager.h:205
	float32_t mfLastAirTime;

	// BrnStuntOffencesManager.h:208
	uint32_t muCurrentRaceCarState;

	// BrnStuntOffencesManager.h:210
	uint32_t muStuntActionInProgress;

	// BrnStuntOffencesManager.h:211
	uint32_t muStuntActionComplete;

	// BrnStuntOffencesManager.h:214
	Vector3 mvRaceCarPositionLastFrame;

	// BrnStuntOffencesManager.h:215
	float32_t mfBearingLastFrame;

	// BrnStuntOffencesManager.h:216
	float32_t mfHandBreakAngleSoFar;

	// BrnStuntOffencesManager.h:217
	float32_t mfHandBrakeStabiliseTime;

	// BrnStuntOffencesManager.h:218
	bool mbHandbreakTurnAttempting;

	// BrnStuntOffencesManager.h:221
	Vector3 mvTakeOffVector;

	// BrnStuntOffencesManager.h:222
	Vector3 mvLandingVector;

	// BrnStuntOffencesManager.h:223
	bool mbKeepCheckingForCleanLanding;

	// BrnStuntOffencesManager.h:224
	float32_t mfCleanLandingCheckTimeSoFar;

	// BrnStuntOffencesManager.h:227
	Vector2 mvPositionAtTakeoff;

	// BrnStuntOffencesManager.h:228
	float32_t mfDistanceInAirSoFar;

	// BrnStuntOffencesManager.h:229
	float32_t mfDistanceOfLastJump;

	// BrnStuntOffencesManager.h:232
	float32_t mfSuccesssfulLandingCheckTimeSoFar;

	// BrnStuntOffencesManager.h:233
	bool mbKeepCheckingForSuccessfulLanding;

	// BrnStuntOffencesManager.h:234
	bool mbInAirLastFrame;

	// BrnStuntOffencesManager.h:235
	bool mbSuccessfulLanding;

	// BrnStuntOffencesManager.h:236
	bool mbTookOffInReverse;

	// BrnStuntOffencesManager.h:239
	bool mbWasDriftingLastFrame;

	// BrnStuntOffencesManager.h:240
	float32_t mfTimeDriftingLastFrame;

	// BrnStuntOffencesManager.h:243
	float32_t mfCompletedBarrelRollAngle;

	// BrnStuntOffencesManager.h:244
	float32_t mfCompletedAirSpinAngle;

	// BrnStuntOffencesManager.h:245
	float32_t mfCompletedHandbreakTurnAngle;

	// BrnStuntOffencesManager.h:246
	float32_t mfCompletedDriftTime;

	// BrnStuntOffencesManager.h:247
	float32_t mfCompletedDriftDistance;

	// BrnStuntOffencesManager.h:248
	int32_t miCompletedBarrelRolls;

	// BrnStuntOffencesManager.h:249
	float32_t mfCompletedAir;

	// BrnStuntOffencesManager.h:250
	float32_t mfCompletedAirDistance;

	// BrnStuntOffencesManager.h:253
	float32_t mfInProgressBarrelRollAngle;

	// BrnStuntOffencesManager.h:254
	float32_t mfInProgressAirSpinAngle;

	// BrnStuntOffencesManager.h:255
	float32_t mfInProgressHandbreakTurnAngle;

	// BrnStuntOffencesManager.h:256
	float32_t mfInProgressDriftTime;

	// BrnStuntOffencesManager.h:257
	float32_t mfInProgressDriftDistance;

	// BrnStuntOffencesManager.h:260
	extern const float32_t KF_MIN_TIME_IN_THE_AIR;

	// BrnStuntOffencesManager.h:261
	extern const float32_t KF_MIN_ANGLE_FOR_AIR_SPIN;

	// BrnStuntOffencesManager.h:262
	extern const float32_t KF_MIN_ANGLE_FOR_BARREL_ROLL_COMPLETED;

	// BrnStuntOffencesManager.h:263
	extern const float32_t KF_MIN_ANGLE_FOR_BARREL_ROLL_IN_PROGRESS;

	// BrnStuntOffencesManager.h:264
	extern const float32_t KF_MAX_HANDBREAK_HOLD_TIME;

	// BrnStuntOffencesManager.h:265
	extern const float32_t KF_MIN_FOR_HANDBREAK_TURN;

	// BrnStuntOffencesManager.h:266
	extern const float32_t KF_HANDBRAKE_STABLE_END_TIME;

	// BrnStuntOffencesManager.h:267
	extern const float32_t KF_MAX_TIME_FOR_CLEAN_LANDING_CHECK;

	// BrnStuntOffencesManager.h:268
	extern const float32_t KF_MAX_TIME_FOR_SUCCESSFUL_LANDING_CHECK;

	// BrnStuntOffencesManager.h:269
	extern const float32_t KF_MAX_ANGLE_FOR_CLEAN_LANDING;

	// BrnStuntOffencesManager.h:270
	extern const float32_t KF_MIN_AMOUNT_AIR_TIME_FOR_CLEAN_LANDING;

	// BrnStuntOffencesManager.h:271
	extern const float32_t KF_MIN_AMOUNT_AIR_TIME_FOR_SUCCESSFUL_LANDING;

public:
	// BrnStuntOffencesManager.h:56
	bool Prepare();

	// BrnStuntOffencesManager.h:60
	void Construct();

	// BrnStuntOffencesManager.h:64
	void ResetInProrgessOutputValues();

	// BrnStuntOffencesManager.h:73
	void Update(BrnPhysics::Vehicle::RaceCarPhysics *, BrnGameState::GameStateModuleIO::GameEventQueue *, float32_t);

	// BrnStuntOffencesManager.h:79
	void OutputStuntsInProgress(RaceCarState *, BrnGameState::GameStateModuleIO::GameEventQueue *);

	// BrnStuntOffencesManager.h:84
	void SetCarHasJustBeenReset(bool);

private:
	// BrnStuntOffencesManager.h:92
	void ResetStuntStatusComplete();

	// BrnStuntOffencesManager.h:96
	void ResetStuntStatusInProgress();

	// BrnStuntOffencesManager.h:100
	void ResetCompleteOutputValues();

	// BrnStuntOffencesManager.h:105
	void SetCurrentStuntInProgress(BrnPhysics::EStuntActionInProgress);

	// BrnStuntOffencesManager.h:110
	void ClearCurrentStuntInProgress(BrnPhysics::EStuntActionInProgress);

	// BrnStuntOffencesManager.h:115
	void SetCurrentStuntCompleted(BrnPhysics::EStuntActionComplete);

	// BrnStuntOffencesManager.h:120
	void SetCurrentRaceCarState(BrnPhysics::ECurrentCarState);

	// BrnStuntOffencesManager.h:124
	void ClearCurrentRaceCarStateFlags();

	// BrnStuntOffencesManager.h:129
	void UnSetCurrentRaceCarState(BrnPhysics::ECurrentCarState);

	// BrnStuntOffencesManager.h:134
	bool GetCurrentRaceCarState(BrnPhysics::ECurrentCarState);

	// BrnStuntOffencesManager.h:143
	void UpdateInAirRotations(BrnPhysics::Vehicle::RaceCarPhysics *, BrnGameState::GameStateModuleIO::GameEventQueue *, float32_t);

	// BrnStuntOffencesManager.h:149
	void CheckForDrift(BrnPhysics::Vehicle::RaceCarPhysics *, BrnGameState::GameStateModuleIO::GameEventQueue *, float32_t);

	// BrnStuntOffencesManager.h:155
	void SetCurrentCarInAirStatus(BrnPhysics::Vehicle::RaceCarPhysics *, float32_t);

	// BrnStuntOffencesManager.h:160
	void OutputStuntStatus(BrnGameState::GameStateModuleIO::GameEventQueue *);

	// BrnStuntOffencesManager.h:165
	void OutputStuntsCompleted(BrnGameState::GameStateModuleIO::GameEventQueue *);

	// BrnStuntOffencesManager.h:172
	void CheckForCleanLanding(BrnPhysics::Vehicle::RaceCarPhysics *, BrnGameState::GameStateModuleIO::GameEventQueue *, float32_t);

	// BrnStuntOffencesManager.h:178
	void CheckForSuccessfulLanding(BrnPhysics::Vehicle::RaceCarPhysics *, float32_t);

	// BrnStuntOffencesManager.h:185
	void CheckForRollsAndSpins(BrnPhysics::Vehicle::RaceCarPhysics *, BrnGameState::GameStateModuleIO::GameEventQueue *, float32_t);

	// BrnStuntOffencesManager.h:192
	void CheckForHandBreakTurns(BrnPhysics::Vehicle::RaceCarPhysics *, BrnGameState::GameStateModuleIO::GameEventQueue *, float32_t);

	// BrnStuntOffencesManager.h:197
	void CheckForTakenOffLanding(BrnPhysics::Vehicle::RaceCarPhysics *);

}

