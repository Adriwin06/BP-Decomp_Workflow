// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficMiscRuntimeClasses.h:37
	enum PhysicalReason {
		E_PHYSICALREASON_INVALID = -1,
		E_PHYSICALREASON_CRASHED = 0,
		E_PHYSICALREASON_CHECKED = 1,
		E_PHYSICALREASON_SLAMMED = 2,
		E_PHYSICALREASON_SYMPATHETIC_CRASHING = 3,
		E_PHYSICALREASON_SWERVING = 4,
		E_PHYSICALREASON_NORMAL = 5,
	}

}

// BrnTrafficMiscRuntimeClasses.h:61
struct BrnTraffic::PhysicalRequestInfo {
	// BrnTrafficMiscRuntimeClasses.h:63
	uint16_t muVehicle;

	// BrnTrafficMiscRuntimeClasses.h:64
	int8_t miReason;

	// BrnTrafficMiscRuntimeClasses.h:65
	EntityId mTargetEntityId;

public:
	// BrnTrafficMiscRuntimeClasses.h:73
	void Construct(uint16_t, BrnTraffic::PhysicalReason, EntityId);

}

// BrnTrafficMiscRuntimeClasses.h:80
struct BrnTraffic::PhysicalRequestInfoList : public Array<BrnTraffic::PhysicalRequestInfo,25u> {
}

// BrnTrafficMiscRuntimeClasses.h:94
struct BrnTraffic::PurgatoryInfo {
	// BrnTrafficMiscRuntimeClasses.h:96
	uint16_t muIndex;

	// BrnTrafficMiscRuntimeClasses.h:97
	uint16_t muDecisionFramesLeft;

}

// BrnTrafficMiscRuntimeClasses.h:110
struct BrnTraffic::HullChangeInfo {
	// BrnTrafficMiscRuntimeClasses.h:112
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnTrafficMiscRuntimeClasses.h:113
	uint16_t muNewActiveHull;

	// BrnTrafficMiscRuntimeClasses.h:114
	uint16_t muUpdateFrame;

}

