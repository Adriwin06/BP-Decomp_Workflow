// BrnRoute.h:26
namespace BrnAI {
	// BrnAIAggression.h:31
	enum ESpeedMatch {
		ESpeedMatch_Disabled = 0,
		ESpeedMatch_Enabled = 1,
		ESpeedMatch_Slower = 2,
		ESpeedMatch_SlowToClip = 3,
		ESpeedMatch_OvertakeFast = 4,
		ESpeedMatch_OvertakeSlowly = 5,
		ESpeedMatch_Count = 6,
	}

	// BrnAIAggression.h:43
	enum EAIAggressionState {
		E_AI_AGGRESSION_STATE_OUT_OF_RANGE = 0,
		E_AI_AGGRESSION_STATE_OVERTAKE_TO_SLAM = 1,
		E_AI_AGGRESSION_STATE_DROP_BACK_TO_SLAM = 2,
		E_AI_AGGRESSION_STATE_ATTACK_SLAM = 3,
		E_AI_AGGRESSION_STATE_WAIT = 4,
		E_AI_AGGRESSION_STATE_VEER = 5,
		E_AI_AGGRESSION_STATE_PASSIVE = 6,
		E_AI_AGGRESSION_STATE_FALL_PAST = 7,
		E_AI_AGGRESSION_STATE_BE_FODDER = 8,
		E_AI_AGGRESSION_STATE_CLIP_OFF_BEHIND = 9,
		E_AI_AGGRESSION_STATE_OVERTAKE_FAST = 10,
		E_AI_AGGRESSION_STATE_OVERTAKE_SLOWLY = 11,
		E_AI_AGGRESSION_STATE_SPURT_FORWARD = 12,
		E_AI_AGGRESSION_STATE_VEER_EXTREME = 13,
		E_AI_AGGRESSION_STATE_HANG_AROUND_AHEAD = 14,
		E_AI_AGGRESSION_STATE_COUNT = 15,
	}

	// BrnAIAggression.h:64
	enum EStopAttack {
		E_AGGRESSION_STEERAWAY = 0,
		E_AGGRESSION_DELAYEDATTACK = 1,
		E_AGGRESSION_ATTACKAGAIN = 2,
	}

}

// BrnAIAggression.h:84
struct BrnAI::AIAggression {
private:
	// BrnAIAggression.h:370
	extern Random mRandom;

	// BrnAIAggression.h:372
	BrnAI::EAIAggressionState meAggressionState;

	// BrnAIAggression.h:374
	BrnAI::AIDriver * mpDriver;

	// BrnAIAggression.h:376
	AICar * mpCar;

	// BrnAIAggression.h:377
	const AICar * mpTargetCar;

	// BrnAIAggression.h:378
	const AICar * mpPlayerCar;

	// BrnAIAggression.h:380
	float32_t mfStateTime;

	// BrnAIAggression.h:383
	AICar * mpPrevSpeedMatchTarget;

	// BrnAIAggression.h:384
	float32_t mfLastSpeed;

	// BrnAIAggression.h:385
	float32_t mfLastSpeedTarget;

	// BrnAIAggression.h:388
	Vector3 mTargetPos;

	// BrnAIAggression.h:389
	float32_t mfTargetSeparationAlong;

	// BrnAIAggression.h:390
	bool mbTargetPosValid;

	// BrnAIAggression.h:391
	float32_t mFixedPassingSpeed;

	// BrnAIAggression.h:393
	float32_t mfRecentHitTimer;

	// BrnAIAggression.h:394
	float32_t mfContinuousContactTimer;

	// BrnAIAggression.h:397
	bool mbWantToBoost;

	// BrnAIAggression.h:399
	BrnAI::ESpeedMatch meSpeedMatchType;

	// BrnAIAggression.h:401
	float32_t mfRelativePositionAhead;

	// BrnAIAggression.h:403
	bool mbIsSuitableForAggression;

	// BrnAIAggression.h:405
	float32_t mfNonSpeedMatchedSpeed;

	// BrnAIAggression.h:407
	float32_t mfHangingAroundTimer;

public:
	// BrnAIAggression.h:91
	void Construct(BrnAI::AIDriver *);

	// BrnAIAggression.h:95
	void Prepare(AICar *);

	// BrnAIAggression.h:100
	void Update(float32_t, const AICar *);

	// BrnAIAggression.h:103
	void Release();

	// BrnAIAggression.h:106
	void Destruct();

	// BrnAIAggression.h:111
	float32_t GetSpeedMatchSpeed(float32_t);

	// BrnAIAggression.h:116
	float32_t CalcSpeedMatchSpeed(float32_t, float32_t);

	// BrnAIAggression.h:119
	bool IsTargetValid();

	// BrnAIAggression.h:122
	Vector3 GetTargetPos();

	// BrnAIAggression.h:125
	bool IsSpeedMatching();

	// BrnAIAggression.h:128
	bool IsTryingToSlam();

	// BrnAIAggression.h:131
	bool IsVeering();

	// BrnAIAggression.h:134
	bool IsVeeringExtreme();

	// BrnAIAggression.h:137
	float32_t GetMinFallBackSpeed();

	// BrnAIAggression.h:144
	void Write(const char *, float32_t, RGBA);

	// BrnAIAggression.h:148
	void SetSuitabilityForAggression(bool);

	// BrnAIAggression.h:151
	bool IsSuitableForAggression();

	// BrnAIAggression.h:156
	bool BehindOtherCar(const AICar *, const AICar *);

	// BrnAIAggression.h:159
	bool BoostWouldLookGood();

private:
	// BrnAIAggression.h:166
	float32_t GetAheadness(const AICar *, Vector3);

	// BrnAIAggression.h:169
	bool IsInAggressiveMode();

	// BrnAIAggression.h:172
	bool IsInMarkedMan();

	// BrnAIAggression.h:175
	bool IsInPursuit();

	// BrnAIAggression.h:178
	bool IsInRace();

	// BrnAIAggression.h:182
	void SetSpeedMatch(BrnAI::ESpeedMatch);

	// BrnAIAggression.h:186
	bool CarIsTooSlow(const AICar *);

	// BrnAIAggression.h:189
	bool RelativeSpeedDifferenceIsTooBig();

	// BrnAIAggression.h:192
	bool NotSuitableForAggression();

	// BrnAIAggression.h:195
	bool StateHasTimedOut();

	// BrnAIAggression.h:199
	bool UpdateTargetPosition(float32_t);

	// BrnAIAggression.h:203
	void RunStateTimer(float32_t);

	// BrnAIAggression.h:209
	float32_t DetermineAttackSide(const AICar *, const AICar *);

	// BrnAIAggression.h:214
	bool OutOfSpeedMatchRange(const AICar *, const AICar *);

	// BrnAIAggression.h:220
	Vector3 GetPositionNextToTarget(const AICar *, const AICar *, float32_t);

	// BrnAIAggression.h:225
	void UpdateAggressionStateOutOfRange(const AICar *);

	// BrnAIAggression.h:230
	void UpdateAggressionStateOvertakeToSlam(const AICar *, float32_t);

	// BrnAIAggression.h:234
	void UpdateAggressionStateHangAboutAhead(const AICar *);

	// BrnAIAggression.h:238
	void CheckForCarVeeringAwayFromPlayer(float32_t);

	// BrnAIAggression.h:243
	void UpdateAggressionStateDropBackToSlam(const AICar *, float32_t);

	// BrnAIAggression.h:246
	void UpdateAggressionStateSteerAwayPreSlam();

	// BrnAIAggression.h:249
	void UpdateAggressionStateAttackSlam();

	// BrnAIAggression.h:252
	void UpdateAggressionStateSpurtForward();

	// BrnAIAggression.h:255
	void UpdateAggressionStateWait();

	// BrnAIAggression.h:258
	void UpdateAggressionStateVeer();

	// BrnAIAggression.h:261
	void UpdateAggressionStateVeerExtreme();

	// BrnAIAggression.h:265
	void UpdateAggressionPassive(const AICar *);

	// BrnAIAggression.h:269
	void UpdateAggressionStateFallPast(const AICar *);

	// BrnAIAggression.h:272
	void UpdateAggressionStateClipOffBehind();

	// BrnAIAggression.h:275
	void UpdateAggressionStateOvertakeFast();

	// BrnAIAggression.h:278
	void UpdateAggressionStateComeSlowFromBehind();

	// BrnAIAggression.h:281
	void UpdateAggressionStateBeFodder();

	// BrnAIAggression.h:284
	bool DecideToAttack();

	// BrnAIAggression.h:288
	void UpdateTargetData();

	// BrnAIAggression.h:292
	void UpdateSlam();

	// BrnAIAggression.h:297
	bool FindTarget(const AICar *);

	// BrnAIAggression.h:303
	void SetState(BrnAI::EAIAggressionState, float32_t);

	// BrnAIAggression.h:307
	void ClearState();

	// BrnAIAggression.h:312
	void StopAttacking(BrnAI::EStopAttack);

	// BrnAIAggression.h:316
	bool CanSlam();

	// BrnAIAggression.h:320
	float32_t CalcSeparationAcrossToTarget();

	// BrnAIAggression.h:324
	float32_t CalcSeparationAlongToTarget();

	// BrnAIAggression.h:330
	float32_t GetLeadingSeparation(const AICar *, const AICar *) const;

	// BrnAIAggression.h:335
	float32_t GetAcrossSeparation(const AICar *, const AICar *);

	// BrnAIAggression.h:340
	float32_t GetSeparation(const AICar *, const AICar *);

	// BrnAIAggression.h:345
	bool AcrossSeparationTooBig(const AICar *, const AICar *);

	// BrnAIAggression.h:348
	bool IsSlamInProgress();

	// BrnAIAggression.h:351
	void SetSlowOvertakingSpeed();

	// BrnAIAggression.h:354
	void SetSlowFallbackSpeed();

	// BrnAIAggression.h:357
	float32_t GetSpeedMatchStartDistanceAhead();

	// BrnAIAggression.h:360
	float32_t GetSpeedMatchStartDistanceBehind();

	// BrnAIAggression.h:365
	void CheckForStayingAhead(const AICar *, float32_t);

	// BrnAIAggression.h:368
	float32_t GetMaxOvertakeSpeed() const;

}

// BrnAIAggression.h:84
struct BrnAI::AIAggression {
private:
	// BrnAIAggression.h:370
	extern Random mRandom;

	// BrnAIAggression.h:372
	BrnAI::EAIAggressionState meAggressionState;

	// BrnAIAggression.h:374
	BrnAI::AIDriver * mpDriver;

	// BrnAIAggression.h:376
	AICar * mpCar;

	// BrnAIAggression.h:377
	const AICar * mpTargetCar;

	// BrnAIAggression.h:378
	const AICar * mpPlayerCar;

	// BrnAIAggression.h:380
	float32_t mfStateTime;

	// BrnAIAggression.h:383
	AICar * mpPrevSpeedMatchTarget;

	// BrnAIAggression.h:384
	float32_t mfLastSpeed;

	// BrnAIAggression.h:385
	float32_t mfLastSpeedTarget;

	// BrnAIAggression.h:388
	Vector3 mTargetPos;

	// BrnAIAggression.h:389
	float32_t mfTargetSeparationAlong;

	// BrnAIAggression.h:390
	bool mbTargetPosValid;

	// BrnAIAggression.h:391
	float32_t mFixedPassingSpeed;

	// BrnAIAggression.h:393
	float32_t mfRecentHitTimer;

	// BrnAIAggression.h:394
	float32_t mfContinuousContactTimer;

	// BrnAIAggression.h:397
	bool mbWantToBoost;

	// BrnAIAggression.h:399
	BrnAI::ESpeedMatch meSpeedMatchType;

	// BrnAIAggression.h:401
	float32_t mfRelativePositionAhead;

	// BrnAIAggression.h:403
	bool mbIsSuitableForAggression;

	// BrnAIAggression.h:405
	float32_t mfNonSpeedMatchedSpeed;

	// BrnAIAggression.h:407
	float32_t mfHangingAroundTimer;

public:
	// BrnAIAggression.h:91
	void Construct(BrnAI::AIDriver *);

	// BrnAIAggression.h:95
	void Prepare(AICar *);

	// BrnAIAggression.h:100
	void Update(float32_t, const AICar *);

	// BrnAIAggression.h:103
	void Release();

	// BrnAIAggression.h:106
	void Destruct();

	// BrnAIAggression.h:111
	float32_t GetSpeedMatchSpeed(float32_t);

	// BrnAIAggression.h:116
	float32_t CalcSpeedMatchSpeed(float32_t, float32_t);

	// BrnAIAggression.h:119
	bool IsTargetValid();

	// BrnAIAggression.h:122
	Vector3 GetTargetPos();

	// BrnAIAggression.h:125
	bool IsSpeedMatching();

	// BrnAIAggression.h:128
	bool IsTryingToSlam();

	// BrnAIAggression.h:131
	bool IsVeering();

	// BrnAIAggression.h:134
	bool IsVeeringExtreme();

	// BrnAIAggression.h:137
	float32_t GetMinFallBackSpeed();

	// BrnAIAggression.h:144
	void Write(const char *, float32_t, RGBA);

	// BrnAIAggression.h:148
	void SetSuitabilityForAggression(bool);

	// BrnAIAggression.h:151
	bool IsSuitableForAggression();

	// BrnAIAggression.h:156
	bool BehindOtherCar(const AICar *, const AICar *);

	// BrnAIAggression.h:159
	bool BoostWouldLookGood();

private:
	// BrnAIAggression.h:166
	float32_t GetAheadness(const AICar *, Vector3);

	// BrnAIAggression.h:169
	bool IsInAggressiveMode();

	// BrnAIAggression.h:172
	bool IsInMarkedMan();

	// BrnAIAggression.h:175
	bool IsInPursuit();

	// BrnAIAggression.h:178
	bool IsInRace();

	// BrnAIAggression.h:182
	void SetSpeedMatch(BrnAI::ESpeedMatch);

	// BrnAIAggression.h:186
	bool CarIsTooSlow(const AICar *);

	// BrnAIAggression.h:189
	bool RelativeSpeedDifferenceIsTooBig();

	// BrnAIAggression.h:192
	bool NotSuitableForAggression();

	// BrnAIAggression.h:195
	bool StateHasTimedOut();

	// BrnAIAggression.h:199
	bool UpdateTargetPosition(float32_t);

	// BrnAIAggression.h:203
	void RunStateTimer(float32_t);

	// BrnAIAggression.h:209
	float32_t DetermineAttackSide(const AICar *, const AICar *);

	// BrnAIAggression.h:214
	bool OutOfSpeedMatchRange(const AICar *, const AICar *);

	// BrnAIAggression.h:220
	Vector3 GetPositionNextToTarget(const AICar *, const AICar *, float32_t);

	// BrnAIAggression.h:225
	void UpdateAggressionStateOutOfRange(const AICar *);

	// BrnAIAggression.h:230
	void UpdateAggressionStateOvertakeToSlam(const AICar *, float32_t);

	// BrnAIAggression.h:234
	void UpdateAggressionStateHangAboutAhead(const AICar *);

	// BrnAIAggression.h:238
	void CheckForCarVeeringAwayFromPlayer(float32_t);

	// BrnAIAggression.h:243
	void UpdateAggressionStateDropBackToSlam(const AICar *, float32_t);

	// BrnAIAggression.h:246
	void UpdateAggressionStateSteerAwayPreSlam();

	// BrnAIAggression.h:249
	void UpdateAggressionStateAttackSlam();

	// BrnAIAggression.h:252
	void UpdateAggressionStateSpurtForward();

	// BrnAIAggression.h:255
	void UpdateAggressionStateWait();

	// BrnAIAggression.h:258
	void UpdateAggressionStateVeer();

	// BrnAIAggression.h:261
	void UpdateAggressionStateVeerExtreme();

	// BrnAIAggression.h:265
	void UpdateAggressionPassive(const AICar *);

	// BrnAIAggression.h:269
	void UpdateAggressionStateFallPast(const AICar *);

	// BrnAIAggression.h:272
	void UpdateAggressionStateClipOffBehind();

	// BrnAIAggression.h:275
	void UpdateAggressionStateOvertakeFast();

	// BrnAIAggression.h:278
	// Declaration
	void UpdateAggressionStateComeSlowFromBehind() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAIAggression.cpp:1346
		using namespace CgsDev::Message;

	}

	// BrnAIAggression.h:281
	void UpdateAggressionStateBeFodder();

	// BrnAIAggression.h:284
	bool DecideToAttack();

	// BrnAIAggression.h:288
	void UpdateTargetData();

	// BrnAIAggression.h:292
	void UpdateSlam();

	// BrnAIAggression.h:297
	bool FindTarget(const AICar *);

	// BrnAIAggression.h:303
	void SetState(BrnAI::EAIAggressionState, float32_t);

	// BrnAIAggression.h:307
	void ClearState();

	// BrnAIAggression.h:312
	void StopAttacking(BrnAI::EStopAttack);

	// BrnAIAggression.h:316
	bool CanSlam();

	// BrnAIAggression.h:320
	float32_t CalcSeparationAcrossToTarget();

	// BrnAIAggression.h:324
	float32_t CalcSeparationAlongToTarget();

	// BrnAIAggression.h:330
	float32_t GetLeadingSeparation(const AICar *, const AICar *) const;

	// BrnAIAggression.h:335
	float32_t GetAcrossSeparation(const AICar *, const AICar *);

	// BrnAIAggression.h:340
	float32_t GetSeparation(const AICar *, const AICar *);

	// BrnAIAggression.h:345
	bool AcrossSeparationTooBig(const AICar *, const AICar *);

	// BrnAIAggression.h:348
	bool IsSlamInProgress();

	// BrnAIAggression.h:351
	void SetSlowOvertakingSpeed();

	// BrnAIAggression.h:354
	void SetSlowFallbackSpeed();

	// BrnAIAggression.h:357
	float32_t GetSpeedMatchStartDistanceAhead();

	// BrnAIAggression.h:360
	float32_t GetSpeedMatchStartDistanceBehind();

	// BrnAIAggression.h:365
	void CheckForStayingAhead(const AICar *, float32_t);

	// BrnAIAggression.h:368
	float32_t GetMaxOvertakeSpeed() const;

}

