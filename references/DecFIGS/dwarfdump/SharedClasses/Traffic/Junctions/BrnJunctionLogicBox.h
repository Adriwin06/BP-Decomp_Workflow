// BrnJunctionLogicBox.h:51
struct BrnTraffic::TrafficLightController {
	// BrnJunctionLogicBox.h:53
	uint16_t[2] mauTrafficLightIds;

	// BrnJunctionLogicBox.h:54
	uint8_t[6] mauStopLineIds;

	// BrnJunctionLogicBox.h:55
	uint16_t[6] mauStopLineHulls;

	// BrnJunctionLogicBox.h:56
	uint8_t muNumStopLines;

	// BrnJunctionLogicBox.h:57
	uint8_t muNumTrafficLights;

public:
	// BrnJunctionLogicBox.h:61
	void EndianSwap();

}

// BrnJunctionLogicBox.h:77
struct BrnTraffic::JunctionLogicBox {
private:
	// BrnJunctionLogicBox.h:128
	uint32_t muID;

	// BrnJunctionLogicBox.h:129
	uint16_t[16] mauStateTimings;

	// BrnJunctionLogicBox.h:130
	uint8_t[16] mauStoppedLightStates;

	// BrnJunctionLogicBox.h:131
	uint8_t muNumStates;

	// BrnJunctionLogicBox.h:132
	uint8_t muNumLights;

	// BrnJunctionLogicBox.h:135
	uint32_t muEventJunctionID;

	// BrnJunctionLogicBox.h:136
	int32_t miOfflineStartDataIndex;

	// BrnJunctionLogicBox.h:137
	int32_t miOnlineStartDataIndex;

	// BrnJunctionLogicBox.h:139
	TrafficLightController[8] maTrafficLightControllers;

	// BrnJunctionLogicBox.h:141
	Vector3 mPosition;

public:
	// BrnJunctionLogicBox.h:83
	uint32_t GetID() const;

	// BrnJunctionLogicBox.h:84
	uint8_t GetNumStates() const;

	// BrnJunctionLogicBox.h:85
	float32_t GetTimeInState(uint32_t) const;

	// BrnJunctionLogicBox.h:86
	uint8_t GetNumLights() const;

	// BrnJunctionLogicBox.h:87
	const TrafficLightController * GetLight(uint32_t) const;

	// BrnJunctionLogicBox.h:88
	bool IsLightRed(uint32_t, uint32_t) const;

	// BrnJunctionLogicBox.h:90
	uint32_t GetEventJunctionID() const;

	// BrnJunctionLogicBox.h:91
	int32_t GetOfflineStartDataIndex() const;

	// BrnJunctionLogicBox.h:92
	int32_t GetOnlineStartDataIndex() const;

	// BrnJunctionLogicBox.h:94
	Vector3 GetPosition() const;

	// BrnJunctionLogicBox.h:119
	void FixUp(const void *);

	// BrnJunctionLogicBox.h:124
	void FixDown(const void *);

}

