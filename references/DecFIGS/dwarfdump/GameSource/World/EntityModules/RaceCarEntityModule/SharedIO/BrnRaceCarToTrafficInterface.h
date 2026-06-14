// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		// Declaration
		struct RaceCarToTrafficInterface {
			// BrnRaceCarToTrafficInterface.h:120
			enum Flag {
				E_FLAG_PLAYER_IS_POWER_PARKING = 0,
				E_FLAG_PLAYER_IS_IN_SHOWTIME_ON_GROUND = 1,
				E_FLAG_COUNT = 2,
			}

		}

	}

}

// BrnRaceCarToTrafficInterface.h:49
struct BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent {
private:
	// BrnRaceCarToTrafficInterface.h:70
	Vector3 mSpawnPosition;

	// BrnRaceCarToTrafficInterface.h:71
	Vector3 mSpawnDirection;

	// BrnRaceCarToTrafficInterface.h:72
	BrnWorld::EDistrict meDistrict;

	// BrnRaceCarToTrafficInterface.h:73
	EGlobalRaceCarIndex meRaceCarIndex;

	// BrnRaceCarToTrafficInterface.h:74
	int8_t miRivalIndex;

public:
	// BrnRaceCarToTrafficInterface.h:59
	void Construct(Vector3, Vector3, BrnWorld::EDistrict, EGlobalRaceCarIndex, int8_t);

	// BrnRaceCarToTrafficInterface.h:62
	Vector3 GetSpawnPosition() const;

	// BrnRaceCarToTrafficInterface.h:63
	Vector3 GetSpawnDirection() const;

	// BrnRaceCarToTrafficInterface.h:64
	BrnWorld::EDistrict GetDistrict() const;

	// BrnRaceCarToTrafficInterface.h:65
	EGlobalRaceCarIndex GetRaceCarIndex() const;

	// BrnRaceCarToTrafficInterface.h:66
	int8_t GetRivalIndex() const;

}

// BrnRaceCarToTrafficInterface.h:87
struct BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent {
private:
	// BrnRaceCarToTrafficInterface.h:100
	int8_t miRivalIndex;

public:
	// BrnRaceCarToTrafficInterface.h:93
	void Construct(int8_t);

	// BrnRaceCarToTrafficInterface.h:96
	int8_t GetRivalIndex() const;

}

// BrnRaceCarToTrafficInterface.h:114
struct BrnWorld::RaceCarEntityModuleIO::RaceCarToTrafficInterface {
private:
	// BrnRaceCarToTrafficInterface.h:171
	EventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent,34> mCreateRivalQueue;

	// BrnRaceCarToTrafficInterface.h:172
	EventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent,34> mRemoveRivalQueue;

	// BrnRaceCarToTrafficInterface.h:174
	uint32_t muFlags;

	// BrnRaceCarToTrafficInterface.h:175
	float32_t mfShowtimeTrafficDensityScale;

public:
	// BrnRaceCarToTrafficInterface.h:130
	void Construct();

	// BrnRaceCarToTrafficInterface.h:140
	void RequestCreateRival(Vector3, Vector3, BrnWorld::EDistrict, EGlobalRaceCarIndex, int8_t);

	// BrnRaceCarToTrafficInterface.h:145
	void RemoveRival(int8_t);

	// BrnRaceCarToTrafficInterface.h:151
	void SetFlag(BrnWorld::RaceCarEntityModuleIO::RaceCarToTrafficInterface::Flag, bool);

	// BrnRaceCarToTrafficInterface.h:155
	bool IsFlagSet(BrnWorld::RaceCarEntityModuleIO::RaceCarToTrafficInterface::Flag) const;

	// BrnRaceCarToTrafficInterface.h:160
	void SetShowtimeTrafficDensityScale(float32_t);

	// BrnRaceCarToTrafficInterface.h:163
	float32_t GetShowtimeTrafficDensityScale() const;

	// BrnRaceCarToTrafficInterface.h:166
	const EventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent,34> * GetCreateRivalQueue() const;

	// BrnRaceCarToTrafficInterface.h:167
	const EventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent,34> * GetRemoveRivalQueue() const;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		// Declaration
		struct RaceCarToTrafficInterface {
			// BrnRaceCarToTrafficInterface.h:120
			enum Flag {
				E_FLAG_PLAYER_IS_POWER_PARKING = 0,
				E_FLAG_PLAYER_IS_IN_SHOWTIME_ON_GROUND = 1,
				E_FLAG_COUNT = 2,
			}

		}

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		// Declaration
		struct RaceCarToTrafficInterface {
			// BrnRaceCarToTrafficInterface.h:120
			enum Flag {
				E_FLAG_PLAYER_IS_POWER_PARKING = 0,
				E_FLAG_PLAYER_IS_IN_SHOWTIME_ON_GROUND = 1,
				E_FLAG_COUNT = 2,
			}

		}

	}

}

