// BrnAIAggressiveness.h:28
struct BrnAI::Aggressiveness {
private:
	// BrnAIAggressiveness.h:77
	extern Random mRandom;

	// BrnAIAggressiveness.h:79
	float32_t mfAggressionLevel;

	// BrnAIAggressiveness.h:80
	bool mbAggressionLevelSet;

	// BrnAIAggressiveness.h:82
	float32_t mfProximitySpeedMatch;

	// BrnAIAggressiveness.h:83
	float32_t mfTimeForSpeedMatch;

	// BrnAIAggressiveness.h:84
	float32_t mfRelativeSpeedForSpeedMatch;

	// BrnAIAggressiveness.h:85
	float32_t mfAcclerationRateForSpeedMatch;

public:
	// BrnAIAggressiveness.h:32
	void Construct();

	// BrnAIAggressiveness.h:35
	bool Prepare();

	// BrnAIAggressiveness.h:39
	void SetAggression(float32_t);

	// BrnAIAggressiveness.h:42
	int32_t GetTakedownCount();

	// BrnAIAggressiveness.h:45
	float32_t GetAggressionLevel() const;

	// BrnAIAggressiveness.h:48
	float32_t GetRandomNumber() const;

	// BrnAIAggressiveness.h:52
	void SetProximityToSpeedMatch(float32_t);

	// BrnAIAggressiveness.h:56
	void SetTimeForSpeedMatch(float32_t);

	// BrnAIAggressiveness.h:59
	float32_t GetProximityToSpeedMatch() const;

	// BrnAIAggressiveness.h:62
	float32_t GetTimeForSpeedMatch() const;

	// BrnAIAggressiveness.h:65
	float32_t GetRelativeSpeedForMatch() const;

	// BrnAIAggressiveness.h:68
	void SetRelativeSpeedForMatch(float32_t);

	// BrnAIAggressiveness.h:71
	float32_t GetAcclerationRateForSpeedMatch() const;

	// BrnAIAggressiveness.h:74
	void SetAcclerationRateForSpeedMatch(float32_t);

}

