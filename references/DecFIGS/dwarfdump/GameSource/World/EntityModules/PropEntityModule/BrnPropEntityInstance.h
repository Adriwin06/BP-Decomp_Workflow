// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnPropEntityInstance.h:35
	enum EPropState {
		E_NON_PHYSICAL = 0,
		E_STATIC = 1,
		E_LEANING = 2,
		E_PHYSICAL_WITH_EXTRA_COM_OFFSET = 3,
		E_PHYSICAL = 4,
		E_MOVED = 5,
		E_SMASHED = 6,
		E_STATE_COUNT = 7,
	}

}

// BrnPropEntityInstance.h:232
extern const uint16_t KU_PHYSICS_ENABLED_FLAG_INDEX;

// BrnPropEntityInstance.h:233
extern const uint16_t KU_ADDED_TO_SCENE_FLAG_INDEX = 1;

// BrnPropEntityInstance.h:234
extern const uint16_t KU_ADDED_TO_CONTACT_GEN_FLAG_INDEX = 2;

// BrnPropEntityInstance.h:235
extern const uint16_t KU_SMASHABLE_FLAG_INDEX = 3;

// BrnPropEntityInstance.h:236
extern const uint16_t KU_ANIMATED_DIRECTION = 4;

// BrnPropEntityInstance.h:237
extern const uint16_t KU_MOVED_FLAG_INDEX = 5;

// BrnPropEntityInstance.h:238
extern const uint16_t KU_LAMPPOST_FLAG_INDEX = 6;

// BrnPropEntityInstance.h:241
extern const uint16_t KU_PHYSICS_ENABLED_BIT = 1;

// BrnPropEntityInstance.h:242
extern const uint16_t KU_PHYSICS_ENABLED_FLAG_MASK = 65534;

// BrnPropEntityInstance.h:244
extern const uint16_t KU_ADDED_TO_SCENE_BIT = 2;

// BrnPropEntityInstance.h:245
extern const uint16_t KU_ADDED_TO_SCENE_FLAG_MASK = 65533;

// BrnPropEntityInstance.h:247
extern const uint16_t KU_ADDED_TO_CONTACT_GEN_BIT = 4;

// BrnPropEntityInstance.h:248
extern const uint16_t KU_ADDED_TO_CONTACT_GEN_FLAG_MASK = 65531;

// BrnPropEntityInstance.h:250
extern const uint16_t KU_SMASHABLE_BIT = 8;

// BrnPropEntityInstance.h:251
extern const uint16_t KU_SMASHABLE_FLAG_MASK = 65527;

// BrnPropEntityInstance.h:253
extern const uint16_t KU_ANIMATED_DIRECTION_BIT = 16;

// BrnPropEntityInstance.h:256
extern const uint16_t KU_MOVED_BIT = 32;

// BrnPropEntityInstance.h:257
extern const uint16_t KU_MOVED_FLAG_MASK = 65503;

// BrnPropEntityInstance.h:259
extern const uint16_t KU_LAMPPOST_BIT = 64;

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnPropEntityInstance.h:35
	enum EPropState {
		E_NON_PHYSICAL = 0,
		E_STATIC = 1,
		E_LEANING = 2,
		E_PHYSICAL_WITH_EXTRA_COM_OFFSET = 3,
		E_PHYSICAL = 4,
		E_MOVED = 5,
		E_SMASHED = 6,
		E_STATE_COUNT = 7,
	}

}

// BrnPropEntityInstance.h:48
struct BrnWorld::PropEntityRotationParams {
	// BrnPropEntityInstance.h:50
	int16_t miPropIndex;

	// BrnPropEntityInstance.h:51
	int8_t mnRotSpeed;

	// BrnPropEntityInstance.h:52
	uint8_t muMinAngle;

	// BrnPropEntityInstance.h:53
	uint8_t muMaxAngle;

}

// BrnPropEntityInstance.h:57
struct BrnWorld::PropEntityInstance {
private:
	// BrnPropEntityInstance.h:216
	Matrix44Affine mWorldTransform;

	// BrnPropEntityInstance.h:217
	uint32_t muInstanceID;

	// BrnPropEntityInstance.h:218
	uint16_t muTypeId;

	// BrnPropEntityInstance.h:220
	uint16_t mu16ZoneIndex;

	// BrnPropEntityInstance.h:221
	uint16_t mu16PartsIndex;

	// BrnPropEntityInstance.h:222
	uint8_t mu8Flags;

	// BrnPropEntityInstance.h:224
	int8_t mi8RotationParamsIndex;

	// BrnPropEntityInstance.h:225
	uint8_t mu8PhysicsIndex;

	// BrnPropEntityInstance.h:227
	uint8_t mu8State;

	// BrnPropEntityInstance.h:229
	uint8_t mu8NextState;

	// BrnPropEntityInstance.h:232
	extern const uint16_t KU_PHYSICS_ENABLED_FLAG_INDEX;

	// BrnPropEntityInstance.h:233
	extern const uint16_t KU_ADDED_TO_SCENE_FLAG_INDEX = 1;

	// BrnPropEntityInstance.h:234
	extern const uint16_t KU_ADDED_TO_CONTACT_GEN_FLAG_INDEX = 2;

	// BrnPropEntityInstance.h:235
	extern const uint16_t KU_SMASHABLE_FLAG_INDEX = 3;

	// BrnPropEntityInstance.h:236
	extern const uint16_t KU_ANIMATED_DIRECTION = 4;

	// BrnPropEntityInstance.h:237
	extern const uint16_t KU_MOVED_FLAG_INDEX = 5;

	// BrnPropEntityInstance.h:238
	extern const uint16_t KU_LAMPPOST_FLAG_INDEX = 6;

	// BrnPropEntityInstance.h:241
	extern const uint16_t KU_PHYSICS_ENABLED_BIT = 1;

	// BrnPropEntityInstance.h:242
	extern const uint16_t KU_PHYSICS_ENABLED_FLAG_MASK = 65534;

	// BrnPropEntityInstance.h:244
	extern const uint16_t KU_ADDED_TO_SCENE_BIT = 2;

	// BrnPropEntityInstance.h:245
	extern const uint16_t KU_ADDED_TO_SCENE_FLAG_MASK = 65533;

	// BrnPropEntityInstance.h:247
	extern const uint16_t KU_ADDED_TO_CONTACT_GEN_BIT = 4;

	// BrnPropEntityInstance.h:248
	extern const uint16_t KU_ADDED_TO_CONTACT_GEN_FLAG_MASK = 65531;

	// BrnPropEntityInstance.h:250
	extern const uint16_t KU_SMASHABLE_BIT = 8;

	// BrnPropEntityInstance.h:251
	extern const uint16_t KU_SMASHABLE_FLAG_MASK = 65527;

	// BrnPropEntityInstance.h:253
	extern const uint16_t KU_ANIMATED_DIRECTION_BIT = 16;

	// BrnPropEntityInstance.h:254
	extern const uint16_t KU_ANIMATED_DIRECTION_FLAG_MASK = 65519;

	// BrnPropEntityInstance.h:256
	extern const uint16_t KU_MOVED_BIT = 32;

	// BrnPropEntityInstance.h:257
	extern const uint16_t KU_MOVED_FLAG_MASK = 65503;

	// BrnPropEntityInstance.h:259
	extern const uint16_t KU_LAMPPOST_BIT = 64;

	// BrnPropEntityInstance.h:260
	extern const uint16_t KU_LAMPPOST_FLAG_MASK = 65471;

public:
	// BrnPropEntityInstance.h:62
	void Construct();

	// BrnPropEntityInstance.h:66
	bool Prepare();

	// BrnPropEntityInstance.h:70
	bool Release();

	// BrnPropEntityInstance.h:74
	void Destruct();

	// BrnPropEntityInstance.h:77
	uint16_t GetZone() const;

	// BrnPropEntityInstance.h:83
	void Update(float_t, const PropEntityRotationParams *);

	// BrnPropEntityInstance.h:91
	void InitialiseFromData(const PropInstanceData *, const PropTypeData *, PropEntityID, uint16_t, int32_t);

	// BrnPropEntityInstance.h:94
	int8_t GetRotVelocity() const;

	// BrnPropEntityInstance.h:97
	const rw::math::vpu::Matrix44Affine & GetWorldTransform() const;

	// BrnPropEntityInstance.h:100
	Matrix44Affine & GetWorldTransform();

	// BrnPropEntityInstance.h:103
	uint32_t GetTypeId() const;

	// BrnPropEntityInstance.h:106
	uint32_t GetInstanceID() const;

	// BrnPropEntityInstance.h:110
	void SetTypeId(uint16_t);

	// BrnPropEntityInstance.h:113
	uint16_t GetFirstPartIndex() const;

	// BrnPropEntityInstance.h:117
	void SetIndexOfParts(int32_t);

	// BrnPropEntityInstance.h:123
	void EnablePhysics();

	// BrnPropEntityInstance.h:126
	void DisablePhysics();

	// BrnPropEntityInstance.h:129
	bool IsPhysicsEnabled() const;

	// BrnPropEntityInstance.h:134
	void SetAddedToSceneTrue();

	// BrnPropEntityInstance.h:137
	void SetAddedToSceneFalse();

	// BrnPropEntityInstance.h:140
	bool IsAddedToScene() const;

	// BrnPropEntityInstance.h:145
	void SetAddedToContactGenTrue();

	// BrnPropEntityInstance.h:148
	void SetAddedToContactGenFalse();

	// BrnPropEntityInstance.h:151
	bool IsAddedToContactGen() const;

	// BrnPropEntityInstance.h:155
	void SetSmashableTrue();

	// BrnPropEntityInstance.h:158
	void SetSmashableFalse();

	// BrnPropEntityInstance.h:161
	bool IsSmashable() const;

	// BrnPropEntityInstance.h:165
	bool HasMoved() const;

	// BrnPropEntityInstance.h:168
	void SetMovedTrue();

	// BrnPropEntityInstance.h:171
	void SetMovedFalse();

	// BrnPropEntityInstance.h:174
	bool IsAnimated() const;

	// BrnPropEntityInstance.h:177
	BrnWorld::EPropState GetState() const;

	// BrnPropEntityInstance.h:181
	void SetState(BrnWorld::EPropState);

	// BrnPropEntityInstance.h:184
	BrnWorld::EPropState GetNextState() const;

	// BrnPropEntityInstance.h:188
	void SetNextState(BrnWorld::EPropState);

	// BrnPropEntityInstance.h:191
	bool IsPhysical() const;

	// BrnPropEntityInstance.h:194
	bool IsSmashed() const;

	// BrnPropEntityInstance.h:197
	bool IsAddedToSim() const;

	// BrnPropEntityInstance.h:200
	int32_t GetRotationParamsIndex() const;

	// BrnPropEntityInstance.h:204
	void SetPhysicsIndex(int32_t);

	// BrnPropEntityInstance.h:207
	int32_t GetPhysicsIndex() const;

	// BrnPropEntityInstance.h:210
	bool IsLamppost() const;

	// BrnPropEntityInstance.h:213
	void SetIsLamppostTrue();

private:
	// BrnPropEntityInstance.h:268
	float32_t UpdateConstraints(float32_t, float32_t *, float32_t *, float32_t *, const PropEntityRotationParams *);

	// BrnPropEntityInstance.h:274
	float32_t CalculateEaseInSpeedModulation(float32_t, float32_t, float32_t);

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnPropEntityInstance.h:35
	enum EPropState {
		E_NON_PHYSICAL = 0,
		E_STATIC = 1,
		E_LEANING = 2,
		E_PHYSICAL_WITH_EXTRA_COM_OFFSET = 3,
		E_PHYSICAL = 4,
		E_MOVED = 5,
		E_SMASHED = 6,
		E_STATE_COUNT = 7,
	}

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnPropEntityInstance.h:35
	enum EPropState {
		E_NON_PHYSICAL = 0,
		E_STATIC = 1,
		E_LEANING = 2,
		E_PHYSICAL_WITH_EXTRA_COM_OFFSET = 3,
		E_PHYSICAL = 4,
		E_MOVED = 5,
		E_SMASHED = 6,
		E_STATE_COUNT = 7,
	}

}

