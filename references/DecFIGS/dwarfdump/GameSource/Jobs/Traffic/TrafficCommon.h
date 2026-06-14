// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// TrafficCommon.h:52
	enum JobProcess {
		E_JOBPROCESS_UPDATE_VEHICLES = 0,
		E_JOBPROCESS_COUNT = 1,
	}

}

// TrafficCommon.h:69
struct BrnTraffic::BaseTrafficJobParams {
	// TrafficCommon.h:73
	BrnTraffic::JobProcess meProcess;

	// TrafficCommon.h:74
	DebugRenderStreamReader * mpDebugStream;

public:
	// TrafficCommon.h:81
	void Construct(BrnTraffic::JobProcess, DebugRenderStreamReader *);

}

// TrafficCommon.h:95
struct BrnTraffic::UpdateVehiclesJobParams : public BaseTrafficJobParams {
	// TrafficCommon.h:99
	uint16_t muBeginVehicle;

	// TrafficCommon.h:100
	uint16_t muEndVehicle;

	// TrafficCommon.h:102
	BrnTraffic::Hull ** mpapHulls;

	// TrafficCommon.h:103
	uint16_t muNumHulls;

	// TrafficCommon.h:105
	const BrnTraffic::Param * mpaParams;

	// TrafficCommon.h:106
	const ParamTransform * mpaParamTransforms;

	// TrafficCommon.h:108
	Vehicle * mpaVehicles;

	// TrafficCommon.h:109
	Matrix44Affine * mpaVehicleTransforms;

	// TrafficCommon.h:110
	VehicleAxles * mpaVehicleAxles;

	// TrafficCommon.h:112
	const VehicleTypeRuntime * mpaVehicleRuntimeData;

	// TrafficCommon.h:114
	const RaceCarStateData * mpRaceCarState;

	// TrafficCommon.h:116
	float32_t mfSimTimeStep;

	// TrafficCommon.h:117
	float32_t mfSimTimeSinceLastDecision;

	// TrafficCommon.h:119
	Random mEffectRand;

	// TrafficCommon.h:121
	float32_t mfCrashSliderFinalValue;

	// TrafficCommon.h:123
	int8_t miLocalPlayerIndex;

	// TrafficCommon.h:125
	bool mbGameModeAllowsHardcoreSwerving;

	// TrafficCommon.h:126
	bool mbGameModeAllowsSwerving;

	// TrafficCommon.h:127
	bool mbDEBUGStopTrafficMoving;

	// TrafficCommon.h:130
	VectorIntrinsicUnion::VectorIntrinsic mBehaviourCentre;

	// TrafficCommon.h:134
	PhysicalRequestInfoList * mpOutNewPhysicalRequests;

public:
	// TrafficCommon.h:160
	void Construct(uint32_t, uint32_t, BrnTraffic::Hull **, uint16_t, const BrnTraffic::Param *, const ParamTransform *, Vehicle *, Matrix44Affine *, VehicleAxles *, const VehicleTypeRuntime *, const RaceCarStateData *, float32_t, float32_t, const Random *, EActiveRaceCarIndex, bool, bool, bool, Vector3, float32_t, DebugRenderStreamReader *);

	// TrafficCommon.h:165
	void SetOutputs(PhysicalRequestInfoList *);

}

// TrafficCommon.h:179
union BrnTraffic::JobParams {
	// TrafficCommon.h:180
	BrnTraffic::JobProcess meProcess;

	// TrafficCommon.h:182
	UpdateVehiclesJobParams mUpdateVehicles;

}
