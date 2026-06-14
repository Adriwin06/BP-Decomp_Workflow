// BrnPhysicalWheel.h:48
struct BrnPhysics::Deformation::BurnoutWheelBodyID : RigidBodyId {
public:
	// BrnPhysicalWheel.h:56
	void Set(EntityId, uint16_t, uint16_t, uint16_t);

	// BrnPhysicalWheel.h:60
	void Set(uint64_t);

	// BrnPhysicalWheel.h:64
	bool IsRaceCar() const;

	// BrnPhysicalWheel.h:68
	bool IsTrafficCar() const;

	// BrnPhysicalWheel.h:72
	uint16_t GetVehicleIndex() const;

	// BrnPhysicalWheel.h:76
	uint16_t GetWheelIndex() const;

	// BrnPhysicalWheel.h:80
	uint16_t GetDeformableObjectIndex() const;

	// BrnPhysicalWheel.h:84
	uint16_t GetPartPoolIndex() const;

	// BrnPhysicalWheel.h:88
	uint64_t GetRawId() const;

	// BrnPhysicalWheel.h:92
	RigidBodyId GetBaseRigidBodyID() const;

	// BrnPhysicalWheel.h:96
	EntityId GetEntityId() const;

	// BrnPhysicalWheel.h:100
	void SetInvalid();

	// BrnPhysicalWheel.h:104
	const BurnoutWheelBodyID & operator=(const RigidBodyId &);

}

// BrnPhysicalWheel.h:121
struct BrnPhysics::Deformation::PhysicalWheel {
private:
	// BrnPhysicalWheel.h:202
	extern char[96] maCylinderInitialiseBuffer;

	// BrnPhysicalWheel.h:208
	Matrix44Affine mRenderTransform;

	// BrnPhysicalWheel.h:209
	Vector3 mComOffset;

	// BrnPhysicalWheel.h:210
	Vector3 mBoundingBoxDimensions;

	// BrnPhysicalWheel.h:211
	Vector3 mLinearVelocity;

	// BrnPhysicalWheel.h:212
	BurnoutWheelBodyID mWheelBodyId;

	// BrnPhysicalWheel.h:213
	float32_t mfHalfHeight;

	// BrnPhysicalWheel.h:214
	float32_t mfRadius;

	// BrnPhysicalWheel.h:215
	bool mbFrozen;

	// BrnPhysicalWheel.h:216
	bool mbAddedToScene;

public:
	// BrnPhysicalWheel.h:125
	void Construct();

	// BrnPhysicalWheel.h:132
	void Prepare(BurnoutWheelBodyID, float32_t, float32_t, Matrix44Affine);

	// BrnPhysicalWheel.h:137
	void Release(InputBuffer *, InSceneUpdateInterface *);

	// BrnPhysicalWheel.h:140
	const rw::math::vpu::Matrix44Affine * GetRenderTransform() const;

	// BrnPhysicalWheel.h:143
	const rw::math::vpu::Matrix44Affine & GetRigidBodyTransform() const;

	// BrnPhysicalWheel.h:147
	void Update(const OutUpdateRigidBody *, OutputBuffer::SceneInputInterface *);

	// BrnPhysicalWheel.h:151
	void SetRigidBodyTransform(Matrix44Affine, OutputBuffer::SceneInputInterface *);

	// BrnPhysicalWheel.h:154
	EntityId GetEntityId() const;

	// BrnPhysicalWheel.h:157
	BurnoutWheelBodyID GetWheelBodyId() const;

	// BrnPhysicalWheel.h:160
	void AddToScene(InSceneUpdateInterface *);

	// BrnPhysicalWheel.h:163
	void RemoveFromScene(InSceneUpdateInterface *);

	// BrnPhysicalWheel.h:169
	void AddToSim(InputBuffer *, Matrix44Affine, Vector3, Vector3);

	// BrnPhysicalWheel.h:172
	Vector3 GetLinearVelocity() const;

	// BrnPhysicalWheel.h:175
	VolumeInstanceId GetVolumeInstanceId() const;

	// BrnPhysicalWheel.h:178
	uint8_t GetPoolIndex() const;

	// BrnPhysicalWheel.h:182
	uint16_t GetTriangleCacheSlot() const;

	// BrnPhysicalWheel.h:186
	bool IsFrozen() const;

	// BrnPhysicalWheel.h:191
	void GetCylinder(Cylinder &) const;

	// BrnPhysicalWheel.h:194
	bool IsAddedToScene() const;

	// BrnPhysicalWheel.h:198
	float32_t GetRadius() const;

private:
	// BrnPhysicalWheel.h:206
	VolumeId GetVolumeId() const;

}

