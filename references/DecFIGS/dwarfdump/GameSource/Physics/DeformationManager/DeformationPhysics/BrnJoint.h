// BrnJoint.h:42
struct BrnPhysics::Deformation::BurnoutJointID : JointId {
public:
	// BrnJoint.h:49
	void Set(EntityId, uint16_t, uint16_t);

	// BrnJoint.h:52
	void Set(JointId);

	// BrnJoint.h:56
	bool IsRaceCar() const;

	// BrnJoint.h:60
	bool IsTrafficCar() const;

	// BrnJoint.h:64
	uint16_t GetDeformableObjectIndex() const;

	// BrnJoint.h:68
	uint16_t GetJointPoolIndex() const;

	// BrnJoint.h:72
	uint16_t GetIKPartIndex() const;

	// BrnJoint.h:76
	uint64_t GetRawId() const;

	// BrnJoint.h:80
	JointId GetBaseJointID() const;

}

// BrnJoint.h:97
struct BrnPhysics::Deformation::Joint {
private:
	// BrnJoint.h:163
	BurnoutJointID mJointId;

	// BrnJoint.h:164
	float32_t mfCurrentOrientation;

	// BrnJoint.h:165
	float32_t mfCurrentAngularSpeed;

	// BrnJoint.h:166
	float32_t mfMaxAngle;

	// BrnJoint.h:167
	bool mbNeedsWritingBackToSim;

	// BrnJoint.h:168
	uint8_t mu8PartPoolIndex;

public:
	// BrnJoint.h:104
	void Construct(BurnoutJointID, int32_t, const DeformationJointSpec *);

	// BrnJoint.h:107
	BurnoutJointID GetId() const;

	// BrnJoint.h:111
	bool ApplyStress(float32_t);

	// BrnJoint.h:114
	float32_t GetTimeAddedFor();

	// BrnJoint.h:118
	void Update(float32_t);

	// BrnJoint.h:121
	uint8_t GetJointPoolIndex() const;

	// BrnJoint.h:125
	int32_t GetBodyPartPoolIndex() const;

	// BrnJoint.h:128
	int32_t GetIKPartIndex() const;

	// BrnJoint.h:135
	void SetCurrentOrientation(float32_t);

	// BrnJoint.h:138
	float32_t GetCurrentOrientation() const;

	// BrnJoint.h:143
	void SetCurrentAngularSpeed(float32_t);

	// BrnJoint.h:146
	float32_t GetCurrentAngularSpeed() const;

	// BrnJoint.h:150
	void SetMaxAngle(float32_t);

	// BrnJoint.h:153
	bool DoesNeedWritingBackToSim() const;

	// BrnJoint.h:157
	void SetNeedsWritingBackToSim(bool);

	// BrnJoint.h:160
	float32_t GetMaxAngle() const;

}

