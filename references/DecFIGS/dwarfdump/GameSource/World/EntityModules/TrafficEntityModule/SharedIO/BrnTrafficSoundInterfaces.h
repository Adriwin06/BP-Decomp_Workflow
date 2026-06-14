// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficTypeInterface.h:30
	namespace BrnTrafficIO {
		// Declaration
		struct TrafficSoundEntity {
			// BrnTrafficSoundInterfaces.h:49
			enum AlarmType {
				E_ALARM_NONE = 0,
				E_ALARM_CLASSIC = 1,
				E_ALARM_HORN = 2,
			}

		}

	}

}

// BrnTrafficSoundInterfaces.h:46
struct BrnTraffic::BrnTrafficIO::TrafficSoundEntity {
	// BrnTrafficSoundInterfaces.h:90
	Matrix44Affine mLocalTransform;

	// BrnTrafficSoundInterfaces.h:91
	EntityId mEntityId;

	// BrnTrafficSoundInterfaces.h:92
	float32_t mfSpeed;

	// BrnTrafficSoundInterfaces.h:93
	uint16_t mu16EntityIndex;

	// BrnTrafficSoundInterfaces.h:94
	uint8_t muVehicleClass;

	// BrnTrafficSoundInterfaces.h:95
	bool mbIsEngineOn;

	// BrnTrafficSoundInterfaces.h:96
	bool mbIsHooting;

	// BrnTrafficSoundInterfaces.h:97
	bool mbIsCrashed;

	// BrnTrafficSoundInterfaces.h:98
	bool mbIsPhysical;

	// BrnTrafficSoundInterfaces.h:99
	uint8_t muAlarmType;

public:
	// BrnTrafficSoundInterfaces.h:57
	void TrafficSoundEntity();

	// BrnTrafficSoundInterfaces.h:69
	void TrafficSoundEntity(Matrix44Affine, EntityId, float32_t, uint8_t, uint16_t, bool, bool, bool, bool, BrnTraffic::BrnTrafficIO::TrafficSoundEntity::AlarmType);

	// BrnTrafficSoundInterfaces.h:87
	BrnTraffic::BrnTrafficIO::TrafficSoundEntity::AlarmType GetAlarmType() const;

}

// BrnTrafficSoundInterfaces.h:111
struct BrnTraffic::BrnTrafficIO::TrafficSoundOutputInterface {
	// BrnTrafficSoundInterfaces.h:113
	extern const uint32_t KU_MAX_ENTITIES = 32;

private:
	// BrnTrafficSoundInterfaces.h:138
	uint16_t mu16EntityCount;

	// BrnTrafficSoundInterfaces.h:139
	TrafficSoundEntity[32] maActiveEntityList;

public:
	// BrnTrafficSoundInterfaces.h:117
	void Construct();

	// BrnTrafficSoundInterfaces.h:121
	void Clear();

	// BrnTrafficSoundInterfaces.h:125
	void AddTrafficEntity(const TrafficSoundEntity &);

	// BrnTrafficSoundInterfaces.h:128
	const TrafficSoundEntity & GetTrafficEntity(uint16_t) const;

	// BrnTrafficSoundInterfaces.h:131
	const TrafficSoundEntity * GetTrafficEntityIndex(uint16_t) const;

	// BrnTrafficSoundInterfaces.h:134
	uint16_t GetTrafficEntityCount() const;

}

// BrnTrafficSoundInterfaces.h:113
extern const uint32_t KU_MAX_ENTITIES = 32;

