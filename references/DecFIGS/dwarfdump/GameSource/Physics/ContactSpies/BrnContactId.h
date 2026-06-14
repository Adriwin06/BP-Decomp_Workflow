// Wheel.h:30
namespace BrnPhysics {
	// BrnContactId.h:35
	namespace PhysicsModuleIO {
		// BrnContactId.h:37
		enum ECustomQueueTypes {
			E_QUEUE_TYPE_EXTERNAL_FROM_SCENE_CONTACTS = 0,
			E_QUEUE_TYPE_HINGED_BODYPART_WITH_WORLD = 1,
			E_QUEUE_TYPE_HINGED_BODYPART_WITH_CAR = 2,
			E_QUEUE_TYPE_DETACHED_BODYPART_WITH_CAR = 3,
			E_QUEUE_TYPE_DETACHED_WHEEL_WITH_CAR = 4,
			E_QUEUE_TYPE_RACECAR_WITH_WORLD = 5,
			E_QUEUE_TYPE_RACECAR_WITH_WORLD_VALIDATED = 6,
			E_QUEUE_TYPE_RACECAR_WITH_RACECAR = 7,
			E_QUEUE_TYPE_RACECAR_WITH_TRAFFIC = 8,
			E_QUEUE_TYPE_TRAFFIC_WITH_WORLD = 9,
			E_QUEUE_TYPE_SIMPLE_TRAFFIC_WITH_WORLD = 10,
			E_QUEUE_TYPE_SIMPLE_TRAFFIC_WITH_CAR = 11,
			E_QUEUE_TYPE_TRAFFIC_ARTICULATED_JOINTS = 12,
			E_QUEUE_TYPE_TRAFFIC_WITH_TRAFFIC = 13,
			E_NUM_CUSTOM_QUEUE_TYPES = 14,
		}

	}

	// BrnContactId.h:111
	const ContactId K_INVALID_CONTACT_ID;

}

// BrnContactId.h:66
struct BrnPhysics::ContactId {
private:
	// BrnContactId.h:104
	extern const uint32_t KU_QUEUE_ID_MASK = 4278190080;

	// BrnContactId.h:105
	extern const uint32_t KU_USER_DATA_MASK = 16711680;

	// BrnContactId.h:106
	extern const uint32_t KU_EVENT_INDEX_MASK = 65535;

	// BrnContactId.h:108
	uint32_t muId;

public:
	// BrnContactId.h:73
	void Set(BrnPhysics::PhysicsModuleIO::ECustomQueueTypes, int32_t, uint8_t);

	// BrnContactId.h:77
	void SetQueueId(BrnPhysics::PhysicsModuleIO::ECustomQueueTypes);

	// BrnContactId.h:81
	void SetEventIndex(uint16_t);

	// BrnContactId.h:85
	void SetUserData(uint8_t);

	// BrnContactId.h:88
	BrnPhysics::PhysicsModuleIO::ECustomQueueTypes GetQueueId() const;

	// BrnContactId.h:91
	uint16_t GetEventIndex() const;

	// BrnContactId.h:94
	uint8_t GetUserData() const;

	// BrnContactId.h:98
	void ContactId();

	// BrnContactId.h:99
	void ContactId(uint32_t);

	// BrnContactId.h:100
	uint32_t operator uint32_t() const;

}

// BrnContactId.h:104
extern const uint32_t KU_QUEUE_ID_MASK = 4278190080;

// BrnContactId.h:105
extern const uint32_t KU_USER_DATA_MASK = 16711680;

// BrnContactId.h:106
extern const uint32_t KU_EVENT_INDEX_MASK = 65535;

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnContactId.h:35
	namespace PhysicsModuleIO {
		// BrnContactId.h:37
		enum ECustomQueueTypes {
			E_QUEUE_TYPE_EXTERNAL_FROM_SCENE_CONTACTS = 0,
			E_QUEUE_TYPE_HINGED_BODYPART_WITH_WORLD = 1,
			E_QUEUE_TYPE_HINGED_BODYPART_WITH_CAR = 2,
			E_QUEUE_TYPE_DETACHED_BODYPART_WITH_CAR = 3,
			E_QUEUE_TYPE_DETACHED_WHEEL_WITH_CAR = 4,
			E_QUEUE_TYPE_RACECAR_WITH_WORLD = 5,
			E_QUEUE_TYPE_RACECAR_WITH_WORLD_VALIDATED = 6,
			E_QUEUE_TYPE_RACECAR_WITH_RACECAR = 7,
			E_QUEUE_TYPE_RACECAR_WITH_TRAFFIC = 8,
			E_QUEUE_TYPE_TRAFFIC_WITH_WORLD = 9,
			E_QUEUE_TYPE_SIMPLE_TRAFFIC_WITH_WORLD = 10,
			E_QUEUE_TYPE_SIMPLE_TRAFFIC_WITH_CAR = 11,
			E_QUEUE_TYPE_TRAFFIC_ARTICULATED_JOINTS = 12,
			E_QUEUE_TYPE_TRAFFIC_WITH_TRAFFIC = 13,
			E_NUM_CUSTOM_QUEUE_TYPES = 14,
		}

	}

	// BrnContactId.h:111
	const ContactId K_INVALID_CONTACT_ID;

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnContactId.h:35
	namespace PhysicsModuleIO {
		// BrnContactId.h:37
		enum ECustomQueueTypes {
			E_QUEUE_TYPE_EXTERNAL_FROM_SCENE_CONTACTS = 0,
			E_QUEUE_TYPE_HINGED_BODYPART_WITH_WORLD = 1,
			E_QUEUE_TYPE_HINGED_BODYPART_WITH_CAR = 2,
			E_QUEUE_TYPE_DETACHED_BODYPART_WITH_CAR = 3,
			E_QUEUE_TYPE_DETACHED_WHEEL_WITH_CAR = 4,
			E_QUEUE_TYPE_RACECAR_WITH_WORLD = 5,
			E_QUEUE_TYPE_RACECAR_WITH_WORLD_VALIDATED = 6,
			E_QUEUE_TYPE_RACECAR_WITH_RACECAR = 7,
			E_QUEUE_TYPE_RACECAR_WITH_TRAFFIC = 8,
			E_QUEUE_TYPE_TRAFFIC_WITH_WORLD = 9,
			E_QUEUE_TYPE_SIMPLE_TRAFFIC_WITH_WORLD = 10,
			E_QUEUE_TYPE_SIMPLE_TRAFFIC_WITH_CAR = 11,
			E_QUEUE_TYPE_TRAFFIC_ARTICULATED_JOINTS = 12,
			E_QUEUE_TYPE_TRAFFIC_WITH_TRAFFIC = 13,
			E_NUM_CUSTOM_QUEUE_TYPES = 14,
		}

		struct PotentialContactInterface;

		struct InputBuffer;

		struct OutputBuffer;

		struct InternalBuffer;

	}

	// BrnContactId.h:111
	const ContactId K_INVALID_CONTACT_ID;

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnContactId.h:35
	namespace PhysicsModuleIO {
		// BrnContactId.h:37
		enum ECustomQueueTypes {
			E_QUEUE_TYPE_EXTERNAL_FROM_SCENE_CONTACTS = 0,
			E_QUEUE_TYPE_HINGED_BODYPART_WITH_WORLD = 1,
			E_QUEUE_TYPE_HINGED_BODYPART_WITH_CAR = 2,
			E_QUEUE_TYPE_DETACHED_BODYPART_WITH_CAR = 3,
			E_QUEUE_TYPE_DETACHED_WHEEL_WITH_CAR = 4,
			E_QUEUE_TYPE_RACECAR_WITH_WORLD = 5,
			E_QUEUE_TYPE_RACECAR_WITH_WORLD_VALIDATED = 6,
			E_QUEUE_TYPE_RACECAR_WITH_RACECAR = 7,
			E_QUEUE_TYPE_RACECAR_WITH_TRAFFIC = 8,
			E_QUEUE_TYPE_TRAFFIC_WITH_WORLD = 9,
			E_QUEUE_TYPE_SIMPLE_TRAFFIC_WITH_WORLD = 10,
			E_QUEUE_TYPE_SIMPLE_TRAFFIC_WITH_CAR = 11,
			E_QUEUE_TYPE_TRAFFIC_ARTICULATED_JOINTS = 12,
			E_QUEUE_TYPE_TRAFFIC_WITH_TRAFFIC = 13,
			E_NUM_CUSTOM_QUEUE_TYPES = 14,
		}

		struct PotentialContactInterface;

		struct InputBuffer;

		struct OutputBuffer;

	}

	// BrnContactId.h:111
	const ContactId K_INVALID_CONTACT_ID;

}

// Wheel.h:30
namespace BrnPhysics {
	// BrnContactId.h:35
	namespace PhysicsModuleIO {
		// BrnContactId.h:37
		enum ECustomQueueTypes {
			E_QUEUE_TYPE_EXTERNAL_FROM_SCENE_CONTACTS = 0,
			E_QUEUE_TYPE_HINGED_BODYPART_WITH_WORLD = 1,
			E_QUEUE_TYPE_HINGED_BODYPART_WITH_CAR = 2,
			E_QUEUE_TYPE_DETACHED_BODYPART_WITH_CAR = 3,
			E_QUEUE_TYPE_DETACHED_WHEEL_WITH_CAR = 4,
			E_QUEUE_TYPE_RACECAR_WITH_WORLD = 5,
			E_QUEUE_TYPE_RACECAR_WITH_WORLD_VALIDATED = 6,
			E_QUEUE_TYPE_RACECAR_WITH_RACECAR = 7,
			E_QUEUE_TYPE_RACECAR_WITH_TRAFFIC = 8,
			E_QUEUE_TYPE_TRAFFIC_WITH_WORLD = 9,
			E_QUEUE_TYPE_SIMPLE_TRAFFIC_WITH_WORLD = 10,
			E_QUEUE_TYPE_SIMPLE_TRAFFIC_WITH_CAR = 11,
			E_QUEUE_TYPE_TRAFFIC_ARTICULATED_JOINTS = 12,
			E_QUEUE_TYPE_TRAFFIC_WITH_TRAFFIC = 13,
			E_NUM_CUSTOM_QUEUE_TYPES = 14,
		}

		struct PotentialContactInterface;

		struct InputBuffer;

		struct OutputBuffer;

	}

	// BrnContactId.h:111
	const ContactId K_INVALID_CONTACT_ID;

}

