// BrnProgressionData.cpp:54
void BrnProgression::ProgressionData::Construct(uint32_t  luPlayerCarCount, uint32_t  luProgressionRankCount, uint32_t  luEventJunctionCount, uint32_t  luEventCount, int32_t  liRivalCount, uint32_t  luAIBalanceGraphCount, uint32_t  luPersonalityCount, uint32_t  luTrophyUnlockCount, uint32_t  luCarOpponentsCount, LinearMalloc *  lpLinearMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	MallocArray<CgsID>(/* parameters */);
	MallocArray<BrnProgression::ProgressionRankData>(/* parameters */);
	MallocArray<BrnProgression::EventJunction>(/* parameters */);
	MallocArray<BrnProgression::RaceEventData>(/* parameters */);
	MallocArray<BrnProgression::Rival>(/* parameters */);
	MallocArray<BrnProgression::OpponentBalanceData>(/* parameters */);
	MallocArray<BrnProgression::EventRacerPersonality>(/* parameters */);
	MallocArray<BrnProgression::TrophyUnlockData>(/* parameters */);
	MallocArray<BrnProgression::CarOpponentSet>(/* parameters */);
}

// BrnProgressionData.cpp:135
void BrnProgression::ProgressionData::FindRivalIndexFromId(CgsID  lRivalId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionData.cpp:137
		int32_t liRivalIndex;

		Rival::GetId(/* parameters */);
	}
}

// BrnProgressionData.cpp:159
void BrnProgression::ProgressionData::FindRival(CgsID  lRivalId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionData.cpp:161
		int32_t liRivalIndex;

	}
}

// BrnProgressionData.cpp:179
void BrnProgression::ProgressionData::FindCarOpponentSet(CgsID  lCarModelId, int32_t  liPlayerRaceRank) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionData.cpp:181
		CarOpponentSet * lpNearestCarOpponentSet;

		// BrnProgressionData.cpp:182
		int32_t liNearestRankFound;

		// BrnProgressionData.cpp:183
		uint32_t luIndex;

		{
			// BrnProgressionData.cpp:187
			CarOpponentSet * lpCarOpponentSet;

		}
	}
	{
		// BrnProgressionData.cpp:191
		int32_t liOpponentSetRank;

		CarOpponentSet::GetRank(/* parameters */);
	}
}

// BrnProgressionData.cpp:339
void BrnProgression::ProgressionData::FixUp(MemoryResource  lpBaseData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionData.cpp:341
		uint32_t luPlayerCarIDIndex;

		// BrnProgressionData.cpp:342
		uint32_t luProgressionRankIndex;

		// BrnProgressionData.cpp:343
		uint32_t luEventJunctionIndex;

		// BrnProgressionData.cpp:344
		uint32_t luEventIndex;

		// BrnProgressionData.cpp:345
		int32_t liRivalIndex;

		// BrnProgressionData.cpp:346
		uint32_t luGraphIndex;

		// BrnProgressionData.cpp:347
		uint32_t luPersonalityIndex;

		// BrnProgressionData.cpp:348
		uint32_t luTrophyUnlockIndex;

		// BrnProgressionData.cpp:349
		uint32_t luCarOpponentsCount;

	}
}

// BrnProgressionData.cpp:221
void BrnProgression::ProgressionData::FixDown(MemoryResource  lpBaseData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressionData.cpp:224
		uint32_t luPlayerCarIDIndex;

		// BrnProgressionData.cpp:225
		uint32_t luProgressionRankIndex;

		// BrnProgressionData.cpp:226
		uint32_t luEventJunctionIndex;

		// BrnProgressionData.cpp:227
		uint32_t luEventIndex;

		// BrnProgressionData.cpp:228
		int32_t liRivalIndex;

		// BrnProgressionData.cpp:229
		uint32_t luGraphIndex;

		// BrnProgressionData.cpp:230
		uint32_t luPersonalityIndex;

		// BrnProgressionData.cpp:231
		uint32_t luTrophyUnlockIndex;

		// BrnProgressionData.cpp:232
		uint32_t luCarOpponentsCount;

	}
}

// BrnProgressionData.cpp:100
void BrnProgression::ProgressionData::GetInterpolatedAIBalanceGraph(int32_t  liEasyIndex, int32_t  liHardIndex, float32_t  lfInterpolationValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnProgressionData.cpp:105
	OpponentBalanceData lNewGraph;

	{
		// BrnProgressionData.cpp:102
		const OpponentBalanceData * lEasyGraph;

		// BrnProgressionData.cpp:103
		const OpponentBalanceData * lHardGraph;

		// BrnProgressionData.cpp:105
		OpponentBalanceData lNewGraph;

		// BrnProgressionData.cpp:108
		int32_t liIndex;

	}
	GetAIBalanceGraph(/* parameters */);
	GetAIBalanceGraph(/* parameters */);
	OpponentBalanceData::Construct(/* parameters */);
	{
		// BrnProgressionData.cpp:114
		float32_t lfAheadTime;

		// BrnProgressionData.cpp:115
		float32_t lfBehindTime;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		OpponentBalanceData::GetAheadTime(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		OpponentBalanceData::GetBehindTime(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		OpponentBalanceData::GetBehindTime(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		OpponentBalanceData::SetAheadTime(/* parameters */);
		OpponentBalanceData::SetBehindTime(/* parameters */);
	}
	OpponentBalanceData::GetAheadTime(/* parameters */);
}

