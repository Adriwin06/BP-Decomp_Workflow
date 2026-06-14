// BrnTrafficSection.h:50
struct BrnTraffic::LaneRung {
	// BrnTrafficSection.h:52
	Vector3[2] maPoints;

public:
	// BrnTrafficSection.h:57
	Vector3 GetCentrePos() const;

	// BrnTrafficSection.h:61
	Vector3 GetRightVector() const;

	// BrnTrafficSection.h:65
	void EndianSwap();

}

// BrnTrafficSection.h:81
struct BrnTraffic::Neighbour {
	// BrnTrafficSection.h:83
	uint8_t muSection;

	// BrnTrafficSection.h:84
	uint8_t muSharedLength;

	// BrnTrafficSection.h:85
	uint8_t muOurStartRung;

	// BrnTrafficSection.h:86
	uint8_t muTheirStartRung;

public:
	// BrnTrafficSection.h:92
	float32_t ConvertOurParameterToTheirs(float32_t) const;

}

// BrnTrafficSection.h:106
struct BrnTraffic::Section {
	// BrnTrafficSection.h:108
	uint32_t muRungOffset;

	// BrnTrafficSection.h:109
	uint8_t muNumRungs;

	// BrnTrafficSection.h:111
	uint8_t muStopLineOffset;

	// BrnTrafficSection.h:112
	uint8_t muNumStopLines;

	// BrnTrafficSection.h:113
	uint8_t muSpanIndex;

	// BrnTrafficSection.h:115
	uint16_t[3] mauForwardHulls;

	// BrnTrafficSection.h:116
	uint16_t[3] mauBackwardHulls;

	// BrnTrafficSection.h:117
	uint8_t[3] mauForwardSections;

	// BrnTrafficSection.h:118
	uint8_t[3] mauBackwardSections;

	// BrnTrafficSection.h:120
	uint8_t muTurnLeftProb;

	// BrnTrafficSection.h:121
	uint8_t muTurnRightProb;

	// BrnTrafficSection.h:123
	uint16_t muNeighbourOffset;

	// BrnTrafficSection.h:124
	uint8_t muLeftNeighbourCount;

	// BrnTrafficSection.h:125
	uint8_t muRightNeighbourCount;

	// BrnTrafficSection.h:126
	uint8_t muChangeLeftProb;

	// BrnTrafficSection.h:127
	uint8_t muChangeRightProb;

	// BrnTrafficSection.h:129
	float32_t mfSpeed;

	// BrnTrafficSection.h:130
	float32_t mfLength;

public:
	// BrnTrafficSection.h:138
	uint32_t GetNumSegments() const;

	// BrnTrafficSection.h:146
	void CalcPositionAtParameter(const BrnTraffic::LaneRung *, VecFloat, uint32_t, Vector3 &) const;

	// BrnTrafficSection.h:154
	void CalcDirectionAtParameter(const BrnTraffic::LaneRung *, VecFloat, uint32_t, Vector3 &) const;

	// BrnTrafficSection.h:160
	int32_t GetGlobalRungForSegment(VecFloat, uint32_t) const;

	// BrnTrafficSection.h:170
	void CalcTransformAtParameter(const BrnTraffic::LaneRung *, VecFloat, uint32_t, Vector3 &, Vector3 &, Vector3 &) const;

	// BrnTrafficSection.h:181
	void CalcTransformAtParameter(const BrnTraffic::LaneRung &, const BrnTraffic::LaneRung &, VecFloat, uint32_t, Vector3 &, Vector3 &, Vector3 &) const;

	// BrnTrafficSection.h:188
	float32_t CalcDistanceAlongSection(float32_t, uint32_t, const float32_t *) const;

	// BrnTrafficSection.h:195
	float32_t CalcDistanceFromEndOfSection(float32_t, uint32_t, const float32_t *) const;

	// BrnTrafficSection.h:204
	float32_t CalcSignedDistanceAlongSection(float32_t, uint32_t, float32_t, uint32_t, const float32_t *) const;

	// BrnTrafficSection.h:210
	float32_t CalcParamFromStartParamAndDistanceAlongSection(float32_t, float32_t, const float32_t *) const;

	// BrnTrafficSection.h:218
	void PickSplitToTake(Random *, uint8_t *, uint16_t *, uint8_t *) const;

	// BrnTrafficSection.h:225
	uint16_t FindNeighbourForRung(uint32_t, BrnTraffic::Side, const BrnTraffic::Hull *) const;

	// BrnTrafficSection.h:231
	const uint32_t FindNextStopLineIndex(float32_t, const BrnTraffic::Hull *) const;

	// BrnTrafficSection.h:236
	void EndianSwap();

}

// BrnTrafficSection.h:260
struct BrnTraffic::SectionSpan {
private:
	// BrnTrafficSection.h:294
	uint16_t muMaxVehicles;

	// BrnTrafficSection.h:295
	float32_t mfMaxVehicleRecip;

public:
	// BrnTrafficSection.h:265
	uint16_t GetMaxVehicleCount() const;

	// BrnTrafficSection.h:269
	float32_t GetMaxVehicleCountReciprocal() const;

	// BrnTrafficSection.h:274
	void FixUp(const void *);

	// BrnTrafficSection.h:279
	void FixDown(const void *);

}

// BrnTrafficSection.h:106
struct BrnTraffic::Section {
	// BrnTrafficSection.h:108
	uint32_t muRungOffset;

	// BrnTrafficSection.h:109
	uint8_t muNumRungs;

	// BrnTrafficSection.h:111
	uint8_t muStopLineOffset;

	// BrnTrafficSection.h:112
	uint8_t muNumStopLines;

	// BrnTrafficSection.h:113
	uint8_t muSpanIndex;

	// BrnTrafficSection.h:115
	uint16_t[3] mauForwardHulls;

	// BrnTrafficSection.h:116
	uint16_t[3] mauBackwardHulls;

	// BrnTrafficSection.h:117
	uint8_t[3] mauForwardSections;

	// BrnTrafficSection.h:118
	uint8_t[3] mauBackwardSections;

	// BrnTrafficSection.h:120
	uint8_t muTurnLeftProb;

	// BrnTrafficSection.h:121
	uint8_t muTurnRightProb;

	// BrnTrafficSection.h:123
	uint16_t muNeighbourOffset;

	// BrnTrafficSection.h:124
	uint8_t muLeftNeighbourCount;

	// BrnTrafficSection.h:125
	uint8_t muRightNeighbourCount;

	// BrnTrafficSection.h:126
	uint8_t muChangeLeftProb;

	// BrnTrafficSection.h:127
	uint8_t muChangeRightProb;

	// BrnTrafficSection.h:129
	float32_t mfSpeed;

	// BrnTrafficSection.h:130
	float32_t mfLength;

public:
	// BrnTrafficSection.h:138
	uint32_t GetNumSegments() const;

	// BrnTrafficSection.h:146
	void CalcPositionAtParameter(const LaneRung *, VecFloat, uint32_t, Vector3 &) const;

	// BrnTrafficSection.h:154
	void CalcDirectionAtParameter(const LaneRung *, VecFloat, uint32_t, Vector3 &) const;

	// BrnTrafficSection.h:160
	int32_t GetGlobalRungForSegment(VecFloat, uint32_t) const;

	// BrnTrafficSection.h:170
	void CalcTransformAtParameter(const LaneRung *, VecFloat, uint32_t, Vector3 &, Vector3 &, Vector3 &) const;

	// BrnTrafficSection.h:181
	void CalcTransformAtParameter(const LaneRung &, const LaneRung &, VecFloat, uint32_t, Vector3 &, Vector3 &, Vector3 &) const;

	// BrnTrafficSection.h:188
	float32_t CalcDistanceAlongSection(float32_t, uint32_t, const float32_t *) const;

	// BrnTrafficSection.h:195
	float32_t CalcDistanceFromEndOfSection(float32_t, uint32_t, const float32_t *) const;

	// BrnTrafficSection.h:204
	float32_t CalcSignedDistanceAlongSection(float32_t, uint32_t, float32_t, uint32_t, const float32_t *) const;

	// BrnTrafficSection.h:210
	float32_t CalcParamFromStartParamAndDistanceAlongSection(float32_t, float32_t, const float32_t *) const;

	// BrnTrafficSection.h:218
	void PickSplitToTake(Random *, uint8_t *, uint16_t *, uint8_t *) const;

	// BrnTrafficSection.h:225
	uint16_t FindNeighbourForRung(uint32_t, BrnTraffic::Side, const BrnTraffic::Hull *) const;

	// BrnTrafficSection.h:231
	const uint32_t FindNextStopLineIndex(float32_t, const BrnTraffic::Hull *) const;

	// BrnTrafficSection.h:236
	void EndianSwap();

}

