// BrnRaceBalance.h:52
struct BrnProgression::OpponentBalanceData {
	// BrnRaceBalance.h:85
	extern const int32_t KI_GRAPH_POINTS = 8;

	// BrnRaceBalance.h:87
	float32_t[8] mafAheadGraphPoints;

	// BrnRaceBalance.h:88
	float32_t[8] mafBehindGraphPoints;

	// BrnRaceBalance.h:89
	float32_t mfCatchUpCutOffRatio;

public:
	// BrnRaceBalance.h:57
	void Construct();

	// BrnRaceBalance.h:61
	void FixUp();

	// BrnRaceBalance.h:65
	void FixDown();

	// BrnRaceBalance.h:69
	float32_t GetAheadTime(int32_t) const;

	// BrnRaceBalance.h:73
	float32_t GetBehindTime(int32_t) const;

	// BrnRaceBalance.h:78
	void SetAheadTime(int32_t, float32_t);

	// BrnRaceBalance.h:83
	void SetBehindTime(int32_t, float32_t);

}

// BrnRaceBalance.h:85
extern const int32_t KI_GRAPH_POINTS = 8;

// BrnRaceBalance.h:119
extern const int32_t KI_MAX_OPPONENTS = 7;

// BrnRaceBalance.h:104
struct BrnProgression::RaceBalanceData {
	// BrnRaceBalance.h:119
	extern const int32_t KI_MAX_OPPONENTS = 7;

	// BrnRaceBalance.h:121
	OpponentBalanceData[7] maOpponentData;

public:
	// BrnRaceBalance.h:109
	void Construct();

	// BrnRaceBalance.h:113
	void FixUp();

	// BrnRaceBalance.h:117
	void FixDown();

}

