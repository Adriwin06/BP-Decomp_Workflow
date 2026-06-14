// BrnTrafficHull.h:53
struct BrnTraffic::Hull {
	// BrnTrafficHull.h:55
	uint8_t muNumSections;

	// BrnTrafficHull.h:56
	uint8_t muNumSectionSpans;

	// BrnTrafficHull.h:57
	uint8_t muNumJunctions;

	// BrnTrafficHull.h:58
	uint8_t muNumStoplines;

	// BrnTrafficHull.h:59
	uint8_t muNumNeighbours;

	// BrnTrafficHull.h:60
	uint8_t muNumStaticTraffic;

	// BrnTrafficHull.h:61
	uint8_t muNumVehicleAssets;

	// BrnTrafficHull.h:62
	uint16_t muNumRungs;

	// BrnTrafficHull.h:64
	uint16_t muFirstTrafficLight;

	// BrnTrafficHull.h:65
	uint16_t muLastTrafficLight;

	// BrnTrafficHull.h:67
	uint8_t muNumLightTriggers;

	// BrnTrafficHull.h:68
	uint8_t muNumLightTriggersStartData;

	// BrnTrafficHull.h:71
	Section * mpaSections;

	// BrnTrafficHull.h:72
	LaneRung * mpaRungs;

private:
	// BrnTrafficHull.h:74
	float32_t * mpafCumulativeRungLengths;

	// Unknown accessibility
	// BrnTrafficHull.h:76
	Neighbour * mpaNeighbourData;

	// Unknown accessibility
	// BrnTrafficHull.h:77
	SectionSpan * mpaSectionSpans;

	// Unknown accessibility
	// BrnTrafficHull.h:79
	StaticTrafficVehicle * mpaStaticTrafficVehicles;

	// Unknown accessibility
	// BrnTrafficHull.h:81
	SectionFlow * mpaSectionFlows;

	// Unknown accessibility
	// BrnTrafficHull.h:83
	BrnTraffic::JunctionLogicBox * mpaJunctions;

	// Unknown accessibility
	// BrnTrafficHull.h:84
	StopLine * mpaStopLines;

	// Unknown accessibility
	// BrnTrafficHull.h:86
	LightTrigger * mpaLightTriggers;

	// Unknown accessibility
	// BrnTrafficHull.h:87
	LightTriggerStartData * mpaLightTriggerStartData;

	// Unknown accessibility
	// BrnTrafficHull.h:88
	uint8_t * mpaLightTriggerJunctionLookup;

	// Unknown accessibility
	// BrnTrafficHull.h:90
	uint8_t[16] mauVehicleAssets;

public:
	// BrnTrafficHull.h:98
	const Section * GetSection(uint32_t) const;

	// BrnTrafficHull.h:103
	const SectionSpan * GetSectionSpan(uint32_t) const;

	// BrnTrafficHull.h:108
	const float32_t * GetRungLengthsForSection(uint32_t) const;

	// BrnTrafficHull.h:112
	const Neighbour * GetNeighbours() const;

	// BrnTrafficHull.h:117
	const Neighbour * GetNeighbour(uint32_t) const;

	// BrnTrafficHull.h:122
	const SectionFlow * GetFlowData(uint32_t) const;

	// BrnTrafficHull.h:126
	const StopLine * GetStopLine(uint32_t) const;

	// BrnTrafficHull.h:130
	const StaticTrafficVehicle * GetStaticVehicle(uint32_t) const;

	// BrnTrafficHull.h:135
	void FixUp(const void *);

	// BrnTrafficHull.h:140
	void FixDown(const void *);

	// BrnTrafficHull.h:145
	const BrnTraffic::JunctionLogicBox * GetJunctionForLightTrigger(uint32_t) const;

	// BrnTrafficHull.h:151
	const LightTriggerStartData * GetLightTriggerStartDataForJunction(const BrnTraffic::JunctionLogicBox *, bool) const;

	// BrnTrafficHull.h:155
	const float32_t * ExposeCumulativeRungLengths() const;

}

