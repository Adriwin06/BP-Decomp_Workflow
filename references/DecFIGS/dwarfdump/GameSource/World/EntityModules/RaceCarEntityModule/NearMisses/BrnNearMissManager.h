// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnNearMissManager.h:45
	const uint32_t KU_MAX_NEAR_VEHICLES = 4;

	// BrnNearMissManager.h:46
	const uint32_t KU_MAX_CRASHING_TRAFFIC_IN_VICINITY_OF_PLAYER = 8;

	// BrnNearMissManager.h:47
	const uint32_t KU_MAX_CRASHING_OTHER_RACE_CARS = 7;

}

// BrnNearMissManager.h:62
struct BrnWorld::NearMissManager {
	// BrnNearMissManager.h:65
	extern const float32_t KF_NEAR_MISS_CHAIN_TIME;

private:
	// BrnNearMissManager.h:136
	float32_t mfSpeed;

	// BrnNearMissManager.h:137
	float32_t mfNearMissTimeout;

	// BrnNearMissManager.h:138
	int32_t miNearMissCount;

	// Unknown accessibility
	// BrnNearMissManager.h:49
	typedef NearMissData<4u,8u> TrafficNearMissData;

	// BrnNearMissManager.h:140
	NearMissManager::TrafficNearMissData mTrafficNearMissData;

	// Unknown accessibility
	// BrnNearMissManager.h:50
	typedef NearMissData<4u,7u> RaceCarNearMissData;

	// BrnNearMissManager.h:141
	NearMissManager::RaceCarNearMissData mRaceCarNearMissData;

	// BrnNearMissManager.h:143
	bool mbFailedNearMissChain;

	// BrnNearMissManager.h:144
	bool mbCrashing;

public:
	// BrnNearMissManager.h:70
	bool Prepare();

	// BrnNearMissManager.h:75
	void SetSpeed(float32_t);

	// BrnNearMissManager.h:80
	void SetPlayerCrashing(bool);

	// BrnNearMissManager.h:83
	bool HasThereBeenARecentNearMiss() const;

	// BrnNearMissManager.h:89
	void Update(float32_t, OutputBuffer_PrePhysics::GameEventQueue *, BoostManager *);

	// BrnNearMissManager.h:95
	void AddCrashedTraffic(uint32_t);

	// BrnNearMissManager.h:99
	void AddNearTraffic(uint32_t);

	// BrnNearMissManager.h:103
	void AddContactedTraffic(uint32_t);

	// BrnNearMissManager.h:107
	void AddCheckedTraffic(uint32_t);

	// BrnNearMissManager.h:113
	void AddCrashedRaceCar(uint32_t);

	// BrnNearMissManager.h:117
	void AddNearRaceCar(uint32_t);

	// BrnNearMissManager.h:121
	void AddContactedRaceCar(uint32_t);

	// BrnNearMissManager.h:125
	void AddTakenDownRaceCar(uint32_t);

private:
	// BrnNearMissManager.h:134
	void NearMissEvent(BrnWorld::ENearMissType, uint32_t, OutputBuffer_PrePhysics::GameEventQueue *, BoostManager *);

}

// BrnNearMissManager.h:65
extern const float32_t KF_NEAR_MISS_CHAIN_TIME;

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnNearMissManager.h:45
	const uint32_t KU_MAX_NEAR_VEHICLES = 4;

	// BrnNearMissManager.h:46
	const uint32_t KU_MAX_CRASHING_TRAFFIC_IN_VICINITY_OF_PLAYER = 8;

	// BrnNearMissManager.h:47
	const uint32_t KU_MAX_CRASHING_OTHER_RACE_CARS = 7;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnNearMissManager.h:45
	const uint32_t KU_MAX_NEAR_VEHICLES = 4;

	// BrnNearMissManager.h:46
	const uint32_t KU_MAX_CRASHING_TRAFFIC_IN_VICINITY_OF_PLAYER = 8;

	// BrnNearMissManager.h:47
	const uint32_t KU_MAX_CRASHING_OTHER_RACE_CARS = 7;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnNearMissManager.h:45
	const uint32_t KU_MAX_NEAR_VEHICLES = 4;

	// BrnNearMissManager.h:46
	const uint32_t KU_MAX_CRASHING_TRAFFIC_IN_VICINITY_OF_PLAYER = 8;

	// BrnNearMissManager.h:47
	const uint32_t KU_MAX_CRASHING_OTHER_RACE_CARS = 7;

}

