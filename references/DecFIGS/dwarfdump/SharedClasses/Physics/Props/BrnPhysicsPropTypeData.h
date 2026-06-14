// BrnPhysicsPropTypeData.h:51
struct BrnPhysics::Props::PropTypeData {
	// BrnPhysicsPropTypeData.h:124
	Vector3 mJointLocator;

	// BrnPhysicsPropTypeData.h:125
	Vector3 mCOMOffset;

	// BrnPhysicsPropTypeData.h:126
	Vector3 mInertia;

	// BrnPhysicsPropTypeData.h:127
	ID mResourceId;

	// BrnPhysicsPropTypeData.h:128
	float32_t mfMass;

	// BrnPhysicsPropTypeData.h:130
	VolRef::Volume * maCollisionVolumes;

	// BrnPhysicsPropTypeData.h:131
	PropPartTypeData * maParts;

	// BrnPhysicsPropTypeData.h:133
	float32_t mfSphereRadius;

	// BrnPhysicsPropTypeData.h:135
	float32_t mfMaxJointAngleCos;

	// BrnPhysicsPropTypeData.h:136
	float32_t mfLeanThreshold;

	// BrnPhysicsPropTypeData.h:137
	float32_t mfMoveThreshold;

	// BrnPhysicsPropTypeData.h:138
	float32_t mfSmashThreshold;

	// BrnPhysicsPropTypeData.h:140
	uint32_t muSceneUriId;

	// BrnPhysicsPropTypeData.h:142
	uint8_t muMaxState;

	// BrnPhysicsPropTypeData.h:144
	uint8_t muNumberOfParts;

	// BrnPhysicsPropTypeData.h:145
	uint8_t muNumberOfVolumes;

	// BrnPhysicsPropTypeData.h:147
	uint8_t mu8JointType;

	// BrnPhysicsPropTypeData.h:148
	uint8_t mu8ExtraTypeInfo;

public:
	// BrnPhysicsPropTypeData.h:70
	void Construct();

	// BrnPhysicsPropTypeData.h:74
	bool Prepare();

	// BrnPhysicsPropTypeData.h:78
	bool Release();

	// BrnPhysicsPropTypeData.h:82
	void Destruct();

	// BrnPhysicsPropTypeData.h:85
	void FixUp(const Resource &);

	// BrnPhysicsPropTypeData.h:88
	void FixDown(const Resource &);

	// BrnPhysicsPropTypeData.h:92
	void ReFix(const void *, void *);

	// BrnPhysicsPropTypeData.h:95
	bool ShouldActivateOnNonRaceCarContact() const;

	// BrnPhysicsPropTypeData.h:98
	bool ShouldAlwaysSmash() const;

	// BrnPhysicsPropTypeData.h:101
	bool IsSmashable() const;

	// BrnPhysicsPropTypeData.h:104
	bool IsTrafficLight() const;

	// BrnPhysicsPropTypeData.h:107
	bool IsLamppost() const;

	// BrnPhysicsPropTypeData.h:110
	bool HACKShouldMoveComOffset() const;

	// BrnPhysicsPropTypeData.h:114
	bool IsOverheadSign() const;

	// BrnPhysicsPropTypeData.h:118
	bool IsSmashGate() const;

	// BrnPhysicsPropTypeData.h:122
	bool IsBillboard() const;

}

