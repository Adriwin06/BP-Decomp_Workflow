// BrnTrafficToRaceCarInterface.h:48
struct BrnTraffic::BrnTrafficIO::VehicleStompingData {
	// BrnTrafficToRaceCarInterface.h:50
	Vector3 mStompeePosition;

	// BrnTrafficToRaceCarInterface.h:51
	EntityId mStompeeEntityId;

	// BrnTrafficToRaceCarInterface.h:52
	float32_t mfDistanceSquared;

}

// BrnTrafficToRaceCarInterface.h:57
struct BrnTraffic::BrnTrafficIO::NearMissData {
	// BrnTrafficToRaceCarInterface.h:59
	uint32_t muCarId;

	// BrnTrafficToRaceCarInterface.h:60
	float32_t mfDistance;

}

// BrnTrafficToRaceCarInterface.h:77
struct BrnTraffic::BrnTrafficIO::TrafficToRaceCarInterface_PreScene {
private:
	// BrnTrafficToRaceCarInterface.h:150
	BitArray<400u> mSympatheticCrashers;

	// BrnTrafficToRaceCarInterface.h:151
	VehicleStompingData[8] mPotentialStompees;

	// Unknown accessibility
	// BrnTrafficToRaceCarInterface.h:65
	typedef Array<BrnTraffic::BrnTrafficIO::NearMissData,16u> NearMissTrafficCollection;

	// BrnTrafficToRaceCarInterface.h:153
	TrafficToRaceCarInterface_PreScene::NearMissTrafficCollection mNearMissTrafficCollection;

	// Unknown accessibility
	// BrnTrafficToRaceCarInterface.h:66
	typedef Array<BrnTraffic::BrnTrafficIO::NearMissData,8u> NearMissRaceCarCollection;

	// BrnTrafficToRaceCarInterface.h:154
	TrafficToRaceCarInterface_PreScene::NearMissRaceCarCollection mNearMissRaceCarCollection;

	// BrnTrafficToRaceCarInterface.h:156
	int32_t miPotentialStompeeCount;

	// BrnTrafficToRaceCarInterface.h:158
	uint32_t muNearbyStaticVehicleCount;

	// BrnTrafficToRaceCarInterface.h:159
	float32_t mfClosestDistanceSq;

	// BrnTrafficToRaceCarInterface.h:160
	float32_t mfSecondClosestDistanceSq;

	// BrnTrafficToRaceCarInterface.h:161
	float32_t mfClosestAngleDiff;

	// BrnTrafficToRaceCarInterface.h:162
	float32_t mfClosestPerpendicularDist;

public:
	// BrnTrafficToRaceCarInterface.h:82
	void Construct();

	// BrnTrafficToRaceCarInterface.h:88
	void SetSympatheticCrasher(int32_t, bool);

	// BrnTrafficToRaceCarInterface.h:93
	bool IsSympatheticCrasher(int32_t) const;

	// BrnTrafficToRaceCarInterface.h:97
	const TrafficToRaceCarInterface_PreScene::NearMissTrafficCollection * GetTrafficCarNearMissCollection() const;

	// BrnTrafficToRaceCarInterface.h:101
	const TrafficToRaceCarInterface_PreScene::NearMissRaceCarCollection * GetNearMissRaceCarCollection() const;

	// BrnTrafficToRaceCarInterface.h:106
	void AddTrafficCarNearMiss(TrafficToRaceCarInterface_PreScene::NearMissTrafficCollection *);

	// BrnTrafficToRaceCarInterface.h:111
	void AddRaceCarNearMiss(TrafficToRaceCarInterface_PreScene::NearMissRaceCarCollection *);

	// BrnTrafficToRaceCarInterface.h:118
	void AddPotentialStompee(uint32_t, Vector3, float32_t);

	// BrnTrafficToRaceCarInterface.h:122
	const VehicleStompingData * GetPotentialStompees(int32_t *) const;

	// BrnTrafficToRaceCarInterface.h:126
	void ClearStompees();

	// BrnTrafficToRaceCarInterface.h:135
	void SetNearbyParkedTrafficData(uint32_t, float32_t, float32_t, float32_t, float32_t);

	// BrnTrafficToRaceCarInterface.h:144
	void GetNearbyParkedTrafficData(uint32_t *, float32_t *, float32_t *, float32_t *, float32_t *) const;

}

// BrnTrafficToRaceCarInterface.h:175
struct BrnTraffic::BrnTrafficIO::TrafficToRaceCarInterface_PostScene {
private:
	// BrnTrafficToRaceCarInterface.h:187
	uint8_t muDUMMY;

public:
	// BrnTrafficToRaceCarInterface.h:180
	void Construct();

}

