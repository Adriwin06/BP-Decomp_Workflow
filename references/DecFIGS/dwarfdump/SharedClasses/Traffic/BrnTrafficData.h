// BrnTrafficData.h:54
struct BrnTraffic::TrafficData {
	// BrnTrafficData.h:56
	uint8_t muDataVersion;

	// BrnTrafficData.h:59
	uint16_t muNumHulls;

	// BrnTrafficData.h:60
	uint32_t muSizeInBytes;

	// BrnTrafficData.h:62
	BrnTraffic::Pvs * mpPvs;

	// BrnTrafficData.h:63
	BrnTraffic::Hull ** mpapHulls;

	// BrnTrafficData.h:65
	BrnTraffic::FlowType ** mpapFlowTypes;

	// BrnTrafficData.h:67
	uint16_t muNumFlowTypes;

	// BrnTrafficData.h:68
	uint16_t muNumVehicleTypes;

	// BrnTrafficData.h:69
	uint8_t muNumVehicleAssets;

	// BrnTrafficData.h:70
	uint8_t muNumVehicleTraits;

	// BrnTrafficData.h:72
	uint16_t muNumKillZones;

	// BrnTrafficData.h:73
	uint16_t muNumKillZoneRegions;

	// BrnTrafficKillZone.h:37
	typedef uint64_t KillZoneId;

	// BrnTrafficData.h:76
	TrafficData::KillZoneId * mpaKillZoneIds;

	// BrnTrafficData.h:77
	KillZone * mpaKillZones;

	// BrnTrafficData.h:78
	KillZoneRegion * mpaKillZoneRegions;

	// BrnTrafficData.h:80
	VehicleTypeData * mpaVehicleTypes;

	// BrnTrafficData.h:81
	VehicleTypeUpdateData * mpaVehicleTypesUpdate;

	// BrnTrafficData.h:82
	BrnTraffic::VehicleAsset * mpaVehicleAssets;

	// BrnTrafficData.h:83
	VehicleTraits * mpaVehicleTraits;

	// BrnTrafficData.h:85
	TrafficLightCollection mTrafficLights;

	// BrnTrafficData.h:87
	uint8_t muNumPaintColours;

	// BrnTrafficData.h:89
	Vector4 * mpaPaintColours;

public:
	// BrnTrafficData.h:95
	void FixUp(const void *);

	// BrnTrafficData.h:100
	void FixDown(const void *);

	// BrnTrafficData.h:106
	const KillZone * FindKillZone(TrafficData::KillZoneId) const;

	// BrnTrafficData.h:111
	const KillZoneRegion * GetKillZoneRegions(uint32_t) const;

	// BrnTrafficData.h:116
	const BrnTraffic::VehicleTraits * GetVehicleTraitsForVehicleType(uint32_t) const;

	// BrnTrafficData.h:122
	Vector4 GetPaintColour(uint32_t) const;

	// BrnTrafficData.h:126
	int32_t GetNumPaintColours() const;

	// BrnTrafficData.h:134
	const LightTriggerStartData * GetStartDataForTrafficLight(LightTriggerId, bool) const;

	// BrnTrafficData.h:139
	const BrnTraffic::JunctionLogicBox * GetJunctionLogicBoxForTrafficLight(LightTriggerId) const;

	// BrnTrafficData.h:153
	bool FindNearestLaneForPoint(Vector3, VecFloat, Vector3, VecFloat, uint32_t *, uint32_t *, float32_t *, uint32_t *) const;

private:
	// BrnTrafficData.h:177
	bool FindNearestLaneForPointInHull(uint32_t, Vector3, VecFloat, Vector3, VecFloat, uint32_t *, float32_t *, uint32_t *, VecFloat &) const;

}

// BrnTrafficData.h:54
struct BrnTraffic::TrafficData {
	// BrnTrafficData.h:56
	uint8_t muDataVersion;

	// BrnTrafficData.h:59
	uint16_t muNumHulls;

	// BrnTrafficData.h:60
	uint32_t muSizeInBytes;

	// BrnTrafficData.h:62
	BrnTraffic::Pvs * mpPvs;

	// BrnTrafficData.h:63
	Hull ** mpapHulls;

	// BrnTrafficData.h:65
	BrnTraffic::FlowType ** mpapFlowTypes;

	// BrnTrafficData.h:67
	uint16_t muNumFlowTypes;

	// BrnTrafficData.h:68
	uint16_t muNumVehicleTypes;

	// BrnTrafficData.h:69
	uint8_t muNumVehicleAssets;

	// BrnTrafficData.h:70
	uint8_t muNumVehicleTraits;

	// BrnTrafficData.h:72
	uint16_t muNumKillZones;

	// BrnTrafficData.h:73
	uint16_t muNumKillZoneRegions;

	// BrnTrafficKillZone.h:37
	typedef uint64_t KillZoneId;

	// BrnTrafficData.h:76
	TrafficData::KillZoneId * mpaKillZoneIds;

	// BrnTrafficData.h:77
	KillZone * mpaKillZones;

	// BrnTrafficData.h:78
	KillZoneRegion * mpaKillZoneRegions;

	// BrnTrafficData.h:80
	VehicleTypeData * mpaVehicleTypes;

	// BrnTrafficData.h:81
	VehicleTypeUpdateData * mpaVehicleTypesUpdate;

	// BrnTrafficData.h:82
	BrnTraffic::VehicleAsset * mpaVehicleAssets;

	// BrnTrafficData.h:83
	VehicleTraits * mpaVehicleTraits;

	// BrnTrafficData.h:85
	TrafficLightCollection mTrafficLights;

	// BrnTrafficData.h:87
	uint8_t muNumPaintColours;

	// BrnTrafficData.h:89
	Vector4 * mpaPaintColours;

public:
	// BrnTrafficData.h:95
	void FixUp(const void *);

	// BrnTrafficData.h:100
	void FixDown(const void *);

	// BrnTrafficData.h:106
	const KillZone * FindKillZone(TrafficData::KillZoneId) const;

	// BrnTrafficData.h:111
	const KillZoneRegion * GetKillZoneRegions(uint32_t) const;

	// BrnTrafficData.h:116
	const VehicleTraits * GetVehicleTraitsForVehicleType(uint32_t) const;

	// BrnTrafficData.h:122
	Vector4 GetPaintColour(uint32_t) const;

	// BrnTrafficData.h:126
	int32_t GetNumPaintColours() const;

	// BrnTrafficData.h:134
	const LightTriggerStartData * GetStartDataForTrafficLight(LightTriggerId, bool) const;

	// BrnTrafficData.h:139
	const BrnTraffic::JunctionLogicBox * GetJunctionLogicBoxForTrafficLight(LightTriggerId) const;

	// BrnTrafficData.h:153
	bool FindNearestLaneForPoint(Vector3, VecFloat, Vector3, VecFloat, uint32_t *, uint32_t *, float32_t *, uint32_t *) const;

private:
	// BrnTrafficData.h:177
	bool FindNearestLaneForPointInHull(uint32_t, Vector3, VecFloat, Vector3, VecFloat, uint32_t *, float32_t *, uint32_t *, VecFloat &) const;

}

