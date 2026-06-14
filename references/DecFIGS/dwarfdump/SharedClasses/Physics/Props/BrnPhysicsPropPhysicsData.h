// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnPropConstants.h:99
	namespace Props {
		// BrnPhysicsPropPhysicsData.h:35
		const int32_t KI_MAX_COLLISION_VOLUMES_PER_PROP = 8;

	}

}

// BrnPhysicsPropPhysicsData.h:50
struct BrnPhysics::Props::PropPhysicsData {
	// BrnPhysicsPropPhysicsData.h:69
	uint32_t muSizeInBytes;

	// BrnPhysicsPropPhysicsData.h:70
	uint32_t muPhysicsId;

	// BrnPhysicsPropPhysicsData.h:71
	BrnPhysics::RWPhysicsTypeData::VolumeSpec * maCollisionVolumes;

	// BrnPhysicsPropPhysicsData.h:72
	uint8_t muCollisionVolumesLength;

	// BrnPhysicsPropPhysicsData.h:73
	float32_t mfMass;

	// BrnPhysicsPropPhysicsData.h:74
	Vector3 mInertia;

	// BrnPhysicsPropPhysicsData.h:75
	Vector3 mCentreOfMass;

	// BrnPhysicsPropPhysicsData.h:76
	float32_t mfStaticFriction;

	// BrnPhysicsPropPhysicsData.h:77
	float32_t mfDynamicFriction;

	// BrnPhysicsPropPhysicsData.h:78
	float32_t mfLinearDrag;

	// BrnPhysicsPropPhysicsData.h:79
	float32_t mfAngularDrag;

public:
	// BrnPhysicsPropPhysicsData.h:55
	void Construct();

	// BrnPhysicsPropPhysicsData.h:59
	bool Prepare();

	// BrnPhysicsPropPhysicsData.h:63
	bool Release();

	// BrnPhysicsPropPhysicsData.h:67
	void Destruct();

}

