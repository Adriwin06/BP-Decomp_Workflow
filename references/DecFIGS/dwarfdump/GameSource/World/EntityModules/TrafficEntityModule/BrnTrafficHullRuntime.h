// BrnTrafficHullRuntime.h:49
struct BrnTraffic::HullRuntime {
private:
	// BrnTrafficHullRuntime.h:96
	float32_t[16] mafJunctionStateChangeTimes;

	// BrnTrafficHullRuntime.h:97
	uint8_t[16] mauJunctionCurrentStates;

	// BrnTrafficHullRuntime.h:98
	uint16_t[256] mauFirstParamInSection;

	// BrnTrafficHullRuntime.h:99
	bool[64] mabStoplineRedState;

	// BrnTrafficHullRuntime.h:100
	uint16_t[256] mauSectionSpanVehicleCount;

	// BrnTrafficHullRuntime.h:102
	uint16_t muHullIndex;

	// BrnTrafficHullRuntime.h:103
	bool mbPrepared;

	// BrnTrafficHullRuntime.h:104
	uint8_t muNumSectionsInHull;

	// BrnTrafficHullRuntime.h:105
	uint8_t muNumStoplinesInHull;

public:
	// BrnTrafficHullRuntime.h:54
	void Construct();

	// BrnTrafficHullRuntime.h:60
	void Prepare(const BrnTraffic::Hull *, uint16_t);

	// BrnTrafficHullRuntime.h:64
	void Release();

	// BrnTrafficHullRuntime.h:68
	void Destruct();

	// BrnTrafficHullRuntime.h:72
	void SetFirstParamInSection(uint32_t, uint16_t, uint16_t);

	// BrnTrafficHullRuntime.h:73
	void SetStoplineRed(uint32_t, bool);

	// BrnTrafficHullRuntime.h:75
	uint16_t GetFirstParamInSection(uint32_t) const;

	// BrnTrafficHullRuntime.h:76
	bool IsStoplineRed(uint32_t) const;

	// BrnTrafficHullRuntime.h:79
	float32_t * GetJunctionStateChangeTimes();

	// BrnTrafficHullRuntime.h:80
	uint8_t * GetJunctionCurrentStates();

	// BrnTrafficHullRuntime.h:81
	const uint8_t * GetJunctionCurrentStates() const;

	// BrnTrafficHullRuntime.h:84
	void ResetSectionSpanVehicleCounts();

	// BrnTrafficHullRuntime.h:88
	void IncrementSectionSpanVehicleCount(uint32_t);

	// BrnTrafficHullRuntime.h:92
	uint16_t GetSectionSpanVehicleCount(uint32_t) const;

}

