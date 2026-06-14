// BrnInterestManager.h:24
namespace BrnProgression {
	// BrnPlayerStats.h:30
	const int32_t KI_NUMBER_OF_LEVELS = 10;

	// BrnPlayerStats.h:31
	const int32_t KI_NUMBER_OF_LEVEL_TYPES = 4;

	// BrnPlayerStats.h:32
	const int32_t KI_NUMBER_OF_EFFECTORS = 18;

	// BrnPlayerStats.h:33
	const int32_t KI_NUMBER_OF_FEEDERS = 21;

}

// BrnPlayerStats.h:105
struct BrnProgression::PlayerStats {
	// BrnPlayerStats.h:114
	float32_t[4][10] mfLevels;

	// BrnPlayerStats.h:115
	float32_t[21] mfPlayerStatFeeders;

	// BrnPlayerStats.h:116
	float32_t[18] mfPlayerStatEffectorsMin;

	// BrnPlayerStats.h:117
	float32_t[18] mfPlayerStatEffectorsMax;

public:
	// BrnPlayerStats.h:109
	void FixUp();

	// BrnPlayerStats.h:112
	void FixDown();

}

