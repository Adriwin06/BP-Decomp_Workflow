// Wheel.h:30
namespace BrnPhysics {
	// BrnContactSpyEvents.h:39
	namespace ContactSpy {
		struct BaseContact;

		struct RaceCarContact;

		struct TrafficContact;

		struct HingedPartContact;

		struct PhysicalCarPartContact;

		struct PropContact;

		struct DiscardedContact;

		struct ContactSpyRunData;

		struct ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact,300>;

		struct ContactSpyQueue<BrnPhysics::ContactSpy::TrafficContact,400>;

		struct ContactSpyQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>;

		struct ContactSpyQueue<BrnPhysics::ContactSpy::HingedPartContact,50>;

		struct ContactSpyQueue<BrnPhysics::ContactSpy::PropContact,100>;

		struct ContactSpyRunList<8>;

		struct ContactSpyRunList<64>;

		struct ContactSpyRunList<50>;

		struct ContactSpyRunList<100>;

		struct ContactSpyData;

		struct ContactSpyInterface;

	}

}

// BrnContactSpyEvents.h:58
struct BrnPhysics::ContactSpy::BaseContact : public Event {
	// BrnContactSpyEvents.h:80
	EntityId mEntityIdA;

	// BrnContactSpyEvents.h:81
	EntityId mEntityIdB;

	// BrnContactSpyEvents.h:82
	CollisionTag mCollisionTagB;

	// BrnContactSpyEvents.h:83
	Vector3 mFrictionStress;

	// BrnContactSpyEvents.h:84
	Vector3 mNormalStress;

	// BrnContactSpyEvents.h:85
	Vector3 mNormal;

	// BrnContactSpyEvents.h:86
	Vector3 mPointOnA;

	// BrnContactSpyEvents.h:87
	Vector3 mPointOnB;

public:
	// BrnContactSpyEvents.h:63
	void Construct();

	// BrnContactSpyEvents.h:68
	void Construct(const OutContactSpy *, const PotentialContact *);

	// BrnContactSpyEvents.h:71
	bool IsContactWithWorld() const;

	// BrnContactSpyEvents.h:73
	bool operator<(const BaseContact &) const;

}

// BrnContactSpyEvents.h:101
struct BrnPhysics::ContactSpy::RaceCarContact : public BaseContact {
}

// BrnContactSpyEvents.h:117
struct BrnPhysics::ContactSpy::TrafficContact : public BaseContact {
}

// BrnContactSpyEvents.h:132
struct BrnPhysics::ContactSpy::HingedPartContact : public BaseContact {
	// BrnContactSpyEvents.h:134
	EBodyParts meType;

}

// BrnContactSpyEvents.h:147
struct BrnPhysics::ContactSpy::PhysicalCarPartContact : public BaseContact {
	// BrnContactSpyEvents.h:149
	Vector3 mVelocity;

	// BrnContactSpyEvents.h:150
	EBodyParts meType;

	// BrnContactSpyEvents.h:151
	bool mbIsHinged;

}

// BrnContactSpyEvents.h:165
struct BrnPhysics::ContactSpy::PropContact : public BaseContact {
	// BrnContactSpyEvents.h:167
	extern const uint16_t KU_UNKNOWN_PROP_TYPE = 65535;

	// BrnContactSpyEvents.h:169
	extern const uint8_t KU_FLAG_SMASH_GATE = 1;

	// BrnContactSpyEvents.h:170
	extern const uint8_t KU_FLAG_BILLBOARD = 2;

	// BrnContactSpyEvents.h:178
	uint16_t muType;

	// BrnContactSpyEvents.h:179
	uint8_t muState;

	// BrnContactSpyEvents.h:180
	uint8_t muFlags;

	// BrnContactSpyEvents.h:181
	uint8_t muBeganMoving;

public:
	// BrnContactSpyEvents.h:173
	bool IsSmashed() const;

	// BrnContactSpyEvents.h:176
	bool IsTypeIdValid() const;

}

// BrnContactSpyEvents.h:194
struct BrnPhysics::ContactSpy::DiscardedContact {
	// BrnContactSpyEvents.h:197
	EntityId mEntityIdA;

	// BrnContactSpyEvents.h:198
	EntityId mEntityIdB;

	// BrnContactSpyEvents.h:199
	float32_t mfClosingVelocity;

	// BrnContactSpyEvents.h:200
	Vector3 mNormal;

	// BrnContactSpyEvents.h:201
	Vector3 mPointOnA;

	// BrnContactSpyEvents.h:202
	Vector3 mPointOnB;

}

// BrnContactSpyEvents.h:167
extern const uint16_t KU_UNKNOWN_PROP_TYPE = 65535;

// BrnContactSpyEvents.h:169
extern const uint8_t KU_FLAG_SMASH_GATE = 1;

// BrnContactSpyEvents.h:170
extern const uint8_t KU_FLAG_BILLBOARD = 2;

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnContactSpyEvents.h:39
	namespace ContactSpy {
		struct BaseContact;

		struct RaceCarContact;

		struct TrafficContact;

		struct HingedPartContact;

		struct PhysicalCarPartContact;

		struct PropContact;

		struct DiscardedContact;

		struct ContactSpyRunData;

		struct ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact,300>;

		struct ContactSpyQueue<BrnPhysics::ContactSpy::TrafficContact,400>;

		struct ContactSpyQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150>;

		struct ContactSpyQueue<BrnPhysics::ContactSpy::HingedPartContact,50>;

		struct ContactSpyQueue<BrnPhysics::ContactSpy::PropContact,100>;

		struct ContactSpyRunList<8>;

		struct ContactSpyRunList<64>;

		struct ContactSpyRunList<50>;

		struct ContactSpyRunList<100>;

		struct ContactSpyData;

		struct ContactSpyInterface;

	}

}

// Wheel.h:30
namespace BrnPhysics {
	// BrnContactSpyEvents.h:39
	namespace ContactSpy {
	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnContactSpyEvents.h:39
	namespace ContactSpy {
	}

}

