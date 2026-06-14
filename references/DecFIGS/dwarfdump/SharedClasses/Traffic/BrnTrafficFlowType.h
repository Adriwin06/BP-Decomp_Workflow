// BrnTrafficFlowType.h:45
struct BrnTraffic::FlowType {
	// BrnTrafficFlowType.h:47
	uint16_t * mpauVehicleTypeIds;

	// BrnTrafficFlowType.h:48
	uint8_t * mpauCumulativeProb;

	// BrnTrafficFlowType.h:49
	uint8_t muNumVehicleTypes;

public:
	// BrnTrafficFlowType.h:56
	void FixUp(const void *);

	// BrnTrafficFlowType.h:61
	void FixDown(const void *);

}

