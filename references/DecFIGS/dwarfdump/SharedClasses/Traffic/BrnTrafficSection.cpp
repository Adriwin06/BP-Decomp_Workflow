// BrnTrafficSection.cpp:161
void BrnTraffic::Section::FindNeighbourForRung(uint32_t  luRung, BrnTraffic::Side  leSide, const BrnTraffic::Hull *  lpHull) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficSection.cpp:163
		uint32_t luNeighbourOffset;

		// BrnTrafficSection.cpp:164
		uint32_t luNeighbourCount;

		// BrnTrafficSection.cpp:165
		uint32_t luMaxNeighbour;

		// BrnTrafficSection.cpp:166
		const Neighbour * lpNeighbour;

		// BrnTrafficSection.cpp:167
		const Neighbour * lpaNeighbours;

		// BrnTrafficSection.cpp:168
		uint32_t luNeighbour;

	}
	Hull::GetNeighbours(/* parameters */);
}

// BrnTrafficSection.cpp:43
void BrnTraffic::LaneRung::EndianSwap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficSection.cpp:137
void BrnTraffic::Section::EndianSwap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficSection.cpp:59
void BrnTraffic::Section::FindNextStopLineIndex(float32_t  lfParamAlong, const BrnTraffic::Hull *  lpOwningHull) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficSection.cpp:61
		uint32_t luStopLine;

		// BrnTrafficSection.cpp:62
		uint16_t luParamFixed;

		// BrnTrafficSection.cpp:63
		const StopLine * lpStopLine;

		// BrnTrafficSection.cpp:64
		uint32_t luOutStopline;

		StopLine::ConvertToFixed(/* parameters */);
	}
	Hull::GetStopLine(/* parameters */);
	{
		// BrnTrafficSection.cpp:93
		uint32_t luTestStopline;

		// BrnTrafficSection.cpp:94
		uint16_t luNearestLine;

	}
	Hull::GetStopLine(/* parameters */);
}

