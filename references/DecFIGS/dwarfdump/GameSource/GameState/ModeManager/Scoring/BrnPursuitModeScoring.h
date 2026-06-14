// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnPursuitModeScoring.h:30
	const float32_t KF_OUT_OF_RANGE_TO_LOSE_TIME;

}

// BrnPursuitModeScoring.h:48
struct BrnGameState::PursuitModeScoring {
private:
	// BrnPursuitModeScoring.h:131
	EGlobalRaceCarIndex mePursuedCarIndex;

	// BrnPursuitModeScoring.h:133
	float32_t mfSeparationFromRival;

	// BrnPursuitModeScoring.h:134
	float32_t mfTimeOutOfRange;

	// BrnPursuitModeScoring.h:136
	int32_t miRivalCarDamage;

	// BrnPursuitModeScoring.h:137
	bool mbGameModeActive;

	// BrnPursuitModeScoring.h:138
	bool mbNeedToDoLosingYouMessage;

public:
	// BrnPursuitModeScoring.h:55
	void Construct();

	// BrnPursuitModeScoring.h:61
	bool Prepare(int32_t, EGlobalRaceCarIndex);

	// BrnPursuitModeScoring.h:67
	void Update(const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, float32_t);

	// BrnPursuitModeScoring.h:71
	bool Release();

	// BrnPursuitModeScoring.h:75
	void Destruct();

	// BrnPursuitModeScoring.h:79
	void ClearData();

	// BrnPursuitModeScoring.h:86
	void OnPlayerDoesATakedown(BrnGameState::ScoringSystem *, Time, InputBuffer::GameActionQueue *);

	// BrnPursuitModeScoring.h:91
	void OnPlayerHitsRival(BrnPhysics::Vehicle::EImpactType);

	// BrnPursuitModeScoring.h:95
	bool HasPursuitModeEnded() const;

	// BrnPursuitModeScoring.h:99
	int32_t GetRivalDamageRemaining();

	// BrnPursuitModeScoring.h:103
	float32_t GetRivalDistanceFromPlayer();

	// BrnPursuitModeScoring.h:107
	bool IsRivalDestroyed() const;

	// BrnPursuitModeScoring.h:111
	bool IsActive();

	// BrnPursuitModeScoring.h:115
	bool IsRivalOutOfRange() const;

	// BrnPursuitModeScoring.h:119
	bool NeedToDoWarningMessage();

	// BrnPursuitModeScoring.h:123
	void ResetWarningMessage();

	// BrnPursuitModeScoring.h:127
	EGlobalRaceCarIndex GetPursuedCarGlobalIndex();

}

