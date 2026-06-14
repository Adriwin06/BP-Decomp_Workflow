// BrnRaceBalancingRoute.cpp:190
void BrnAI::RaceBalancingRoute::GetAISectionSpeed(const AISection *  lpAISection, const AISectionsData *  lpAISectionsData, float32_t  lfSpeedRatio) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceBalancingRoute.cpp:192
		BrnAI::SectionSpeed leSectionSpeed;

		// BrnRaceBalancingRoute.cpp:194
		float32_t lfMinSpeed;

		// BrnRaceBalancingRoute.cpp:195
		float32_t lfMaxSpeed;

		AISection::GetSectionSpeed(/* parameters */);
		AISectionsData::GetMinSectionSpeed(/* parameters */);
	}
}

// BrnRaceBalancingRoute.cpp:165
void BrnAI::RaceBalancingRoute::ComputeRaceCompletionRatio(float32_t  lfDistanceToNextCheckpoint, int32_t  liCheckpointCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceBalancingRoute.cpp:169
		float32_t lfCheckpointRatio;

		// BrnRaceBalancingRoute.cpp:170
		float32_t lfCheckpointStartRatio;

		// BrnRaceBalancingRoute.cpp:171
		float32_t lfCheckpointEndRatio;

	}
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
}

// BrnRaceBalancingRoute.cpp:114
void BrnAI::RaceBalancingRoute::Recalculate(const AISectionsData *  lpAISectionsData, const RaceBalancingGraph *  lpRaceBalancingGraph, const Route *  lpRoute, int32_t  liCheckpointCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceBalancingRoute.cpp:119
		int32_t liNodeIndex;

		// BrnRaceBalancingRoute.cpp:120
		float32_t lfAheadTotalTime;

		// BrnRaceBalancingRoute.cpp:121
		float32_t lfBehindTotalTime;

		{
			// BrnRaceBalancingRoute.cpp:132
			const RouteNode * lpNode;

			// BrnRaceBalancingRoute.cpp:133
			const RouteNode * lpPrevNode;

			// BrnRaceBalancingRoute.cpp:134
			const AISection * lpAISection;

			// BrnRaceBalancingRoute.cpp:135
			float32_t lfSectionLength;

			// BrnRaceBalancingRoute.cpp:136
			float32_t lfRaceCompletionRatio;

			// BrnRaceBalancingRoute.cpp:137
			float32_t lfAheadRatio;

			// BrnRaceBalancingRoute.cpp:138
			float32_t lfBehindRatio;

			// BrnRaceBalancingRoute.cpp:139
			float32_t lfAheadSpeed;

			// BrnRaceBalancingRoute.cpp:140
			float32_t lfBehindSpeed;

		}
	}
}

// BrnRaceBalancingRoute.cpp:55
void BrnAI::RaceBalancingRoute::Prepare(const rw::math::vpu::Vector3  lPosition, const AISectionsData *  lpAISectionsData, const RaceBalancingGraph *  lpRaceBalancingGraph, const Route *  lpRoute, int32_t  liCheckpointCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceBalancingRoute.cpp:59
		int32_t liNodeIndex;

		// BrnRaceBalancingRoute.cpp:60
		float32_t lfAheadTotalTime;

		// BrnRaceBalancingRoute.cpp:61
		float32_t lfBehindTotalTime;

		// BrnRaceBalancingRoute.cpp:62
		Vector2 lPrevPosition;

		{
			// BrnRaceBalancingRoute.cpp:78
			const RouteNode * lpNode;

			// BrnRaceBalancingRoute.cpp:79
			const AISection * lpAISection;

			// BrnRaceBalancingRoute.cpp:80
			float32_t lfSectionLength;

			// BrnRaceBalancingRoute.cpp:81
			float32_t lfRaceCompletionRatio;

			// BrnRaceBalancingRoute.cpp:82
			float32_t lfAheadRatio;

			// BrnRaceBalancingRoute.cpp:83
			float32_t lfBehindRatio;

			// BrnRaceBalancingRoute.cpp:84
			float32_t lfAheadSpeed;

			// BrnRaceBalancingRoute.cpp:85
			float32_t lfBehindSpeed;

		}
	}
}

// BrnRaceBalancingRoute.cpp:27
