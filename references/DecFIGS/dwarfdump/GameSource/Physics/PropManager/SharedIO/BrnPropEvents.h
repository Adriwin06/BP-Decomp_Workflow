// BrnPropEvents.h:45
struct BrnPhysics::Props::AddPhysicalPropEvent {
	// BrnPropEvents.h:47
	Matrix44Affine mTransform;

	// BrnPropEvents.h:48
	PropEntityID mEntityId;

	// BrnPropEvents.h:49
	BrnWorld::EPropState meState;

	// BrnPropEvents.h:50
	int16_t miPropTypeId;

	// BrnPropEvents.h:51
	int16_t miSlot;

	// BrnPropEvents.h:52
	bool mbAddExtraComOffset;

}

// BrnPropEvents.h:64
struct BrnPhysics::Props::AddPhysicalPartEvent {
	// BrnPropEvents.h:66
	Matrix44Affine mTransform;

	// BrnPropEvents.h:67
	PropEntityID mEntityId;

	// BrnPropEvents.h:68
	int16_t miPropTypeId;

	// BrnPropEvents.h:69
	int16_t miPartId;

	// BrnPropEvents.h:70
	int16_t miSlot;

}

// BrnPropEvents.h:104
struct BrnPhysics::Props::RemovePhysicalPropEvent {
	// BrnPropEvents.h:106
	PropEntityID mEntityId;

	// BrnPropEvents.h:107
	int32_t miPhysicalIndex;

}

// BrnPropEvents.h:119
struct BrnPhysics::Props::RemovePhysicalPartEvent {
	// BrnPropEvents.h:121
	PropEntityID mEntityId;

	// BrnPropEvents.h:122
	int32_t miPhysicalIndex;

}

// BrnPropEvents.h:83
struct BrnPhysics::Props::UpdatePropEvent {
	// BrnPropEvents.h:85
	Matrix44Affine mTransform;

	// BrnPropEvents.h:86
	Vector3 mLinearVelocity;

	// BrnPropEvents.h:87
	Vector3 mAngularVelocity;

	// BrnPropEvents.h:88
	PropEntityID mEntityId;

	// BrnPropEvents.h:89
	int16_t miPhysicsSlot;

	// BrnPropEvents.h:90
	int16_t miTypeId;

	// BrnPropEvents.h:91
	bool mbFrozen;

}

// BrnPropEvents.h:135
struct BrnPhysics::Props::PropUpdateNotification {
private:
	// BrnPropEvents.h:168
	Vector3 mPosition;

	// BrnPropEvents.h:169
	Vector3 mLinearVelocity;

	// BrnPropEvents.h:170
	Vector3 mAngularVelocity;

	// BrnPropEvents.h:171
	PropEntityID mEntityId;

	// BrnPropEvents.h:172
	int16_t mi16TypeId;

public:
	// BrnPropEvents.h:144
	void Construct(Vector3, Vector3, Vector3, PropEntityID, int16_t);

	// BrnPropEvents.h:147
	Vector3 GetPosition() const;

	// BrnPropEvents.h:150
	Vector3 GetLinearVelocity() const;

	// BrnPropEvents.h:153
	Vector3 GetAngularVelocity() const;

	// BrnPropEvents.h:156
	EntityId GetEntityId() const;

	// BrnPropEvents.h:159
	int16_t GetPropType() const;

	// BrnPropEvents.h:162
	int8_t GetPartIndex() const;

	// BrnPropEvents.h:165
	bool IsPart() const;

}

