// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficPatternGenerator.cpp:26
	const uint32_t KU_MAX_STATES_IN_PATTERN = 9;

	// BrnTrafficPatternGenerator.cpp:28
	const float32_t[3][9] KAF_HEADLIGHTFLASH_TIMES;

}

// BrnTrafficPatternGenerator.cpp:59
void BrnTraffic::PatternGenerator::UpdateHeadlightFlash(uint32_t  luPattern, float32_t  lfTimeDelta, float32_t *  lpfUpdatedTime, uint8_t *  lpuUpdatedState, bool *  lpbUpdatedHeadlightOff) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficPatternGenerator.cpp:70
		uint32_t luState;

		// BrnTrafficPatternGenerator.cpp:71
		float32_t lfTime;

		// BrnTrafficPatternGenerator.cpp:73
		float32_t lfTimeForState;

	}
}

