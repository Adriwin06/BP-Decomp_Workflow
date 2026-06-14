// BrnPropInstance.h:151
extern const uint8_t KU_NOT_JOINTED = 255;

// BrnPropInstance.h:152
extern const uint8_t KU_ADDED_THIS_FRAME_FLAG = 1;

// BrnPropInstance.h:153
extern const uint8_t KU_HAS_EXTRA_COM_OFFSET_FLAG = 2;

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnPropConstants.h:99
	namespace Props {
		// BrnPropInstance.h:37
		enum EPropMovementState {
			E_PROP_MOVESTATE_STATIONARY = 0,
			E_PROP_MOVESTATE_JUST_MOVED = 1,
			E_PROP_MOVESTATE_MOVING = 2,
		}

	}

}

// BrnPropInstance.h:48
struct BrnPhysics::Props::PropInstance {
private:
	// BrnPropInstance.h:151
	extern const uint8_t KU_NOT_JOINTED = 255;

	// BrnPropInstance.h:152
	extern const uint8_t KU_ADDED_THIS_FRAME_FLAG = 1;

	// BrnPropInstance.h:153
	extern const uint8_t KU_HAS_EXTRA_COM_OFFSET_FLAG = 2;

	// BrnPropInstance.h:155
	Matrix44Affine mWorldTransform;

	// BrnPropInstance.h:156
	Vector3 mLinearVelocity;

	// BrnPropInstance.h:157
	Vector3 mAngularVelocity;

	// BrnPropInstance.h:158
	PropEntityID mEntityId;

	// BrnPropInstance.h:159
	uint32_t muTypeId;

	// BrnPropInstance.h:160
	uint32_t muInstanceId;

	// BrnPropInstance.h:161
	uint8_t mu8JointIndex;

	// BrnPropInstance.h:162
	bool mbIsStatic;

	// BrnPropInstance.h:163
	uint8_t muMovementState;

	// BrnPropInstance.h:164
	uint8_t mu8Flags;

public:
	// BrnPropInstance.h:53
	void Construct();

	// BrnPropInstance.h:57
	bool Prepare();

	// BrnPropInstance.h:61
	bool Release();

	// BrnPropInstance.h:65
	void Destruct();

	// BrnPropInstance.h:68
	uint32_t GetTypeId();

	// BrnPropInstance.h:71
	PropEntityID GetEntityId();

	// BrnPropInstance.h:74
	void SetEntityId(PropEntityID);

	// BrnPropInstance.h:77
	void SetTypeId(uint32_t);

	// BrnPropInstance.h:80
	Vector3 & GetPos();

	// BrnPropInstance.h:83
	const rw::math::vpu::Matrix44Affine & GetTransform() const;

	// BrnPropInstance.h:87
	void SetTransform(Matrix44Affine);

	// BrnPropInstance.h:91
	void SetLinearVelocity(Vector3);

	// BrnPropInstance.h:95
	void SetAngularVelocity(Vector3);

	// BrnPropInstance.h:98
	Vector3 GetLinearVelocity();

	// BrnPropInstance.h:101
	Vector3 GetAngularVelocity() const;

	// BrnPropInstance.h:104
	void SetInstanceID(uint32_t);

	// BrnPropInstance.h:107
	uint32_t GetInstanceID() const;

	// BrnPropInstance.h:111
	void SetJointIndex(int32_t);

	// BrnPropInstance.h:114
	void SetNotJointed();

	// BrnPropInstance.h:118
	void SetIsStatic(bool);

	// BrnPropInstance.h:122
	void SetExtraComOffsetFlag(bool);

	// BrnPropInstance.h:125
	bool HasExtraComOffset();

	// BrnPropInstance.h:128
	int32_t GetJointIndex() const;

	// BrnPropInstance.h:131
	bool IsJointed() const;

	// BrnPropInstance.h:134
	bool IsStatic() const;

	// BrnPropInstance.h:138
	void SetMovementState(BrnPhysics::Props::EPropMovementState);

	// BrnPropInstance.h:141
	BrnPhysics::Props::EPropMovementState GetMovementState() const;

	// BrnPropInstance.h:144
	bool WasAddedThisFrame() const;

	// BrnPropInstance.h:147
	void ClearAddedThisFrameFlag();

}

// Wheel.h:30
namespace BrnPhysics {
	// BrnPropConstants.h:99
	namespace Props {
		// BrnPropInstance.h:37
		enum EPropMovementState {
			E_PROP_MOVESTATE_STATIONARY = 0,
			E_PROP_MOVESTATE_JUST_MOVED = 1,
			E_PROP_MOVESTATE_MOVING = 2,
		}

	}

}

