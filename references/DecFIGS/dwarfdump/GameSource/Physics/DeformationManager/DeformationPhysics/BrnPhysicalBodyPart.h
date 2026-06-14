// BrnPhysicalBodyPart.h:297
extern char[96] maBoxInitialiseBuffer;

// BrnPhysicalBodyPart.h:47
struct BrnPhysics::Deformation::BurnoutBodyPartID : RigidBodyId {
public:
	// BrnPhysicalBodyPart.h:55
	void Set(EntityId, uint16_t, uint16_t, uint16_t);

	// BrnPhysicalBodyPart.h:59
	void Set(uint64_t);

	// BrnPhysicalBodyPart.h:62
	uint8_t GetOwner() const;

	// BrnPhysicalBodyPart.h:66
	bool IsRaceCar() const;

	// BrnPhysicalBodyPart.h:70
	bool IsTrafficCar() const;

	// BrnPhysicalBodyPart.h:74
	uint16_t GetVehicleIndex() const;

	// BrnPhysicalBodyPart.h:78
	uint16_t GetIKPartIndex() const;

	// BrnPhysicalBodyPart.h:82
	uint16_t GetDeformableObjectIndex() const;

	// BrnPhysicalBodyPart.h:86
	uint16_t GetPartPoolIndex() const;

	// BrnPhysicalBodyPart.h:90
	uint64_t GetRawId() const;

	// BrnPhysicalBodyPart.h:94
	RigidBodyId GetBaseRigidBodyID() const;

	// BrnPhysicalBodyPart.h:98
	EntityId GetEntityId() const;

	// BrnPhysicalBodyPart.h:102
	void SetInvalid();

	// BrnPhysicalBodyPart.h:106
	const BurnoutBodyPartID & operator=(const RigidBodyId &);

}

// BrnPhysicalBodyPart.h:123
struct BrnPhysics::Deformation::PhysicalBodyPart {
private:
	// BrnPhysicalBodyPart.h:297
	extern char[96] maBoxInitialiseBuffer;

	// BrnPhysicalBodyPart.h:326
	ExternalPhysicsBody mRwBody;

	// BrnPhysicalBodyPart.h:327
	Matrix44Affine mBBoxOrientation;

	// BrnPhysicalBodyPart.h:330
	Vector3Plus mLocalJointPositionPlusRotation;

	// BrnPhysicalBodyPart.h:331
	Vector3Plus mLocalGraphicsPositionPlusJointVelocity;

	// BrnPhysicalBodyPart.h:332
	Vector3Plus mLocalInitialComPositionPlusMaxJointAngle;

	// BrnPhysicalBodyPart.h:333
	Vector3Plus mLocalInitialJointPositionPlusLimitStress;

	// BrnPhysicalBodyPart.h:334
	Vector3 mBoundingBoxHalfDimensions;

	// BrnPhysicalBodyPart.h:335
	Vector3Plus mWorldPenetrationPlusCollisionMagnitude;

	// BrnPhysicalBodyPart.h:336
	Vector3Plus mAverageCollisionPointPlusNumCollisions;

	// BrnPhysicalBodyPart.h:337
	BurnoutBodyPartID mRigidBodyId;

	// BrnPhysicalBodyPart.h:338
	EntityId mGlobalVehicleId;

	// BrnPhysicalBodyPart.h:339
	const IKBodyPart * mpIKPart;

	// BrnPhysicalBodyPart.h:340
	const BrnPhysics::Deformation::DeformableObject * mpDeformableObject;

	// BrnPhysicalBodyPart.h:341
	bool mbJoinedToVehicle;

	// BrnPhysicalBodyPart.h:342
	bool mbAddedToScene;

	// BrnPhysicalBodyPart.h:343
	bool mbFrozen;

	// BrnPhysicalBodyPart.h:344
	bool mbNeedsWritingIntoRenderware;

	// BrnPhysicalBodyPart.h:346
	int8_t mi8ActiveJointsTagPointIndex;

public:
	// BrnPhysicalBodyPart.h:127
	void Construct();

	// BrnPhysicalBodyPart.h:136
	void Prepare(BurnoutBodyPartID, EntityId, const BrnPhysics::Deformation::DeformableObject *, const IKBodyPart *, Matrix44Affine, Matrix44Affine);

	// BrnPhysicalBodyPart.h:139
	void Release();

	// BrnPhysicalBodyPart.h:142
	Matrix44Affine GetRenderTransform() const;

	// BrnPhysicalBodyPart.h:145
	Matrix44Affine GetRigidBodyTransform() const;

	// BrnPhysicalBodyPart.h:150
	void Update(const OutUpdateRigidBody *, OutputBuffer::SceneInputInterface *);

	// BrnPhysicalBodyPart.h:155
	void SetRigidBodyTransform(Matrix44Affine, OutputBuffer::SceneInputInterface *);

	// BrnPhysicalBodyPart.h:158
	EntityId GetEntityId() const;

	// BrnPhysicalBodyPart.h:161
	BurnoutBodyPartID GetRigidBodyId() const;

	// BrnPhysicalBodyPart.h:164
	EntityId GetGlobalEntityId() const;

	// BrnPhysicalBodyPart.h:167
	int32_t GetMeshIndex() const;

	// BrnPhysicalBodyPart.h:170
	bool IsAddedToScene() const;

	// BrnPhysicalBodyPart.h:174
	void AddToScene(InSceneUpdateInterface *);

	// BrnPhysicalBodyPart.h:178
	void RemoveFromScene(InSceneUpdateInterface *);

	// BrnPhysicalBodyPart.h:185
	void AddToSim(InputBuffer *, Matrix44Affine, Vector3, Vector3);

	// BrnPhysicalBodyPart.h:188
	Vector3 GetLinearVelocity() const;

	// BrnPhysicalBodyPart.h:193
	void UpdateRW(InputBuffer *, VecFloat);

	// BrnPhysicalBodyPart.h:196
	uint8_t GetPoolIndex() const;

	// BrnPhysicalBodyPart.h:200
	int32_t GetIKPartIndex() const;

	// BrnPhysicalBodyPart.h:205
	void GetBoundingBox(CgsGeometric::Box *) const;

	// BrnPhysicalBodyPart.h:208
	ExternalPhysicsBody * GetExternalBody();

	// BrnPhysicalBodyPart.h:212
	float32_t GetSphereRadius() const;

	// BrnPhysicalBodyPart.h:215
	Vector3 GetPosition() const;

	// BrnPhysicalBodyPart.h:218
	const IKBodyPart * GetIKPart() const;

	// BrnPhysicalBodyPart.h:222
	bool IsFrozen() const;

	// BrnPhysicalBodyPart.h:226
	bool NeedsAddingToScene() const;

	// BrnPhysicalBodyPart.h:230
	void SetNeedsWritingToRW();

	// BrnPhysicalBodyPart.h:235
	void UpdateBoundingBox(OutputBuffer::SceneInputInterface *);

	// BrnPhysicalBodyPart.h:238
	uint16_t GetTriangleCacheSlot() const;

	// BrnPhysicalBodyPart.h:242
	bool IsJoinedToVehicle() const;

	// BrnPhysicalBodyPart.h:250
	void SetJoinedToVehicle(Vector3, Vector3, VecFloat, int32_t);

	// BrnPhysicalBodyPart.h:254
	void RemoveJointAndAddToSim(InputBuffer *);

	// BrnPhysicalBodyPart.h:258
	void UpdateJoint(VecFloat);

	// BrnPhysicalBodyPart.h:261
	void PostVehicleUpdate();

	// BrnPhysicalBodyPart.h:265
	void AddContact(const PotentialContact &);

	// BrnPhysicalBodyPart.h:268
	VecFloat GetJointRotation() const;

	// BrnPhysicalBodyPart.h:272
	VecFloat GetJointRotationProportion() const;

	// BrnPhysicalBodyPart.h:275
	VecFloat GetJointVelocity() const;

	// BrnPhysicalBodyPart.h:281
	bool TestJointForBreaking(InputBuffer *, OutputBuffer *);

	// BrnPhysicalBodyPart.h:285
	void AddContactSpy(ContactSpyData *);

	// BrnPhysicalBodyPart.h:288
	void UpdateBoundingBox();

	// BrnPhysicalBodyPart.h:292
	void SetJointVelocity(VecFloat);

private:
	// BrnPhysicalBodyPart.h:301
	VolumeInstanceId GetVolumeInstanceId() const;

	// BrnPhysicalBodyPart.h:304
	VolumeId GetVolumeId() const;

	// BrnPhysicalBodyPart.h:309
	void CalculateBoundingBoxExtents(Vector3 &, Vector3 &);

	// BrnPhysicalBodyPart.h:312
	Vector3 CalculateAABBExtents();

	// BrnPhysicalBodyPart.h:316
	void CalcBoundingBox(Matrix44Affine);

	// BrnPhysicalBodyPart.h:320
	bool LimitVelocities(VecFloat);

	// BrnPhysicalBodyPart.h:324
	Vector3 CalculateSkinnedPoint(const BBoxPointSkinData &);

}

// BrnPhysicalBodyPart.h:123
struct BrnPhysics::Deformation::PhysicalBodyPart {
private:
	// BrnPhysicalBodyPart.h:297
	extern char[96] maBoxInitialiseBuffer;

	// BrnPhysicalBodyPart.h:326
	ExternalPhysicsBody mRwBody;

	// BrnPhysicalBodyPart.h:327
	Matrix44Affine mBBoxOrientation;

	// BrnPhysicalBodyPart.h:330
	Vector3Plus mLocalJointPositionPlusRotation;

	// BrnPhysicalBodyPart.h:331
	Vector3Plus mLocalGraphicsPositionPlusJointVelocity;

	// BrnPhysicalBodyPart.h:332
	Vector3Plus mLocalInitialComPositionPlusMaxJointAngle;

	// BrnPhysicalBodyPart.h:333
	Vector3Plus mLocalInitialJointPositionPlusLimitStress;

	// BrnPhysicalBodyPart.h:334
	Vector3 mBoundingBoxHalfDimensions;

	// BrnPhysicalBodyPart.h:335
	Vector3Plus mWorldPenetrationPlusCollisionMagnitude;

	// BrnPhysicalBodyPart.h:336
	Vector3Plus mAverageCollisionPointPlusNumCollisions;

	// BrnPhysicalBodyPart.h:337
	BurnoutBodyPartID mRigidBodyId;

	// BrnPhysicalBodyPart.h:338
	EntityId mGlobalVehicleId;

	// BrnPhysicalBodyPart.h:339
	const IKBodyPart * mpIKPart;

	// BrnPhysicalBodyPart.h:340
	const BrnPhysics::Deformation::DeformableObject * mpDeformableObject;

	// BrnPhysicalBodyPart.h:341
	bool mbJoinedToVehicle;

	// BrnPhysicalBodyPart.h:342
	bool mbAddedToScene;

	// BrnPhysicalBodyPart.h:343
	bool mbFrozen;

	// BrnPhysicalBodyPart.h:344
	bool mbNeedsWritingIntoRenderware;

	// BrnPhysicalBodyPart.h:346
	int8_t mi8ActiveJointsTagPointIndex;

public:
	// BrnPhysicalBodyPart.h:127
	void Construct();

	// BrnPhysicalBodyPart.h:136
	void Prepare(BurnoutBodyPartID, EntityId, const BrnPhysics::Deformation::DeformableObject *, const IKBodyPart *, Matrix44Affine, Matrix44Affine);

	// BrnPhysicalBodyPart.h:139
	void Release();

	// BrnPhysicalBodyPart.h:142
	Matrix44Affine GetRenderTransform() const;

	// BrnPhysicalBodyPart.h:145
	Matrix44Affine GetRigidBodyTransform() const;

	// BrnPhysicalBodyPart.h:150
	void Update(const OutUpdateRigidBody *, OutputBuffer::SceneInputInterface *);

	// BrnPhysicalBodyPart.h:155
	void SetRigidBodyTransform(Matrix44Affine, OutputBuffer::SceneInputInterface *);

	// BrnPhysicalBodyPart.h:158
	EntityId GetEntityId() const;

	// BrnPhysicalBodyPart.h:161
	BurnoutBodyPartID GetRigidBodyId() const;

	// BrnPhysicalBodyPart.h:164
	EntityId GetGlobalEntityId() const;

	// BrnPhysicalBodyPart.h:167
	int32_t GetMeshIndex() const;

	// BrnPhysicalBodyPart.h:170
	bool IsAddedToScene() const;

	// BrnPhysicalBodyPart.h:174
	void AddToScene(InSceneUpdateInterface *);

	// BrnPhysicalBodyPart.h:178
	void RemoveFromScene(InSceneUpdateInterface *);

	// BrnPhysicalBodyPart.h:185
	void AddToSim(InputBuffer *, Matrix44Affine, Vector3, Vector3);

	// BrnPhysicalBodyPart.h:188
	Vector3 GetLinearVelocity() const;

	// BrnPhysicalBodyPart.h:193
	void UpdateRW(InputBuffer *, VecFloat);

	// BrnPhysicalBodyPart.h:196
	uint8_t GetPoolIndex() const;

	// BrnPhysicalBodyPart.h:200
	int32_t GetIKPartIndex() const;

	// BrnPhysicalBodyPart.h:205
	void GetBoundingBox(CgsGeometric::Box *) const;

	// BrnPhysicalBodyPart.h:208
	ExternalPhysicsBody * GetExternalBody();

	// BrnPhysicalBodyPart.h:212
	float32_t GetSphereRadius() const;

	// BrnPhysicalBodyPart.h:215
	Vector3 GetPosition() const;

	// BrnPhysicalBodyPart.h:218
	const IKBodyPart * GetIKPart() const;

	// BrnPhysicalBodyPart.h:222
	bool IsFrozen() const;

	// BrnPhysicalBodyPart.h:226
	bool NeedsAddingToScene() const;

	// BrnPhysicalBodyPart.h:230
	void SetNeedsWritingToRW();

	// BrnPhysicalBodyPart.h:235
	void UpdateBoundingBox(OutputBuffer::SceneInputInterface *);

	// BrnPhysicalBodyPart.h:238
	uint16_t GetTriangleCacheSlot() const;

	// BrnPhysicalBodyPart.h:242
	bool IsJoinedToVehicle() const;

	// BrnPhysicalBodyPart.h:250
	void SetJoinedToVehicle(Vector3, Vector3, VecFloat, int32_t);

	// BrnPhysicalBodyPart.h:254
	void RemoveJointAndAddToSim(InputBuffer *);

	// BrnPhysicalBodyPart.h:258
	void UpdateJoint(VecFloat);

	// BrnPhysicalBodyPart.h:261
	void PostVehicleUpdate();

	// BrnPhysicalBodyPart.h:265
	void AddContact(const PotentialContact &);

	// BrnPhysicalBodyPart.h:268
	VecFloat GetJointRotation() const;

	// BrnPhysicalBodyPart.h:272
	VecFloat GetJointRotationProportion() const;

	// BrnPhysicalBodyPart.h:275
	VecFloat GetJointVelocity() const;

	// BrnPhysicalBodyPart.h:281
	bool TestJointForBreaking(InputBuffer *, OutputBuffer *);

	// BrnPhysicalBodyPart.h:285
	void AddContactSpy(ContactSpyData *);

	// BrnPhysicalBodyPart.h:288
	void UpdateBoundingBox();

	// BrnPhysicalBodyPart.h:292
	void SetJointVelocity(VecFloat);

private:
	// BrnPhysicalBodyPart.h:301
	VolumeInstanceId GetVolumeInstanceId() const;

	// BrnPhysicalBodyPart.h:304
	VolumeId GetVolumeId() const;

	// BrnPhysicalBodyPart.h:309
	void CalculateBoundingBoxExtents(Vector3 &, Vector3 &);

	// BrnPhysicalBodyPart.h:312
	Vector3 CalculateAABBExtents();

	// BrnPhysicalBodyPart.h:316
	void CalcBoundingBox(Matrix44Affine);

	// BrnPhysicalBodyPart.h:320
	bool LimitVelocities(VecFloat);

	// BrnPhysicalBodyPart.h:324
	// Declaration
	Vector3 CalculateSkinnedPoint(const BBoxPointSkinData &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPhysicalBodyPart.cpp:211
		using namespace rw::math::vpl;

	}

}

// BrnPhysicalBodyPart.h:123
struct BrnPhysics::Deformation::PhysicalBodyPart {
private:
	// BrnPhysicalBodyPart.h:297
	extern char[96] maBoxInitialiseBuffer;

	// BrnPhysicalBodyPart.h:326
	ExternalPhysicsBody mRwBody;

	// BrnPhysicalBodyPart.h:327
	Matrix44Affine mBBoxOrientation;

	// BrnPhysicalBodyPart.h:330
	Vector3Plus mLocalJointPositionPlusRotation;

	// BrnPhysicalBodyPart.h:331
	Vector3Plus mLocalGraphicsPositionPlusJointVelocity;

	// BrnPhysicalBodyPart.h:332
	Vector3Plus mLocalInitialComPositionPlusMaxJointAngle;

	// BrnPhysicalBodyPart.h:333
	Vector3Plus mLocalInitialJointPositionPlusLimitStress;

	// BrnPhysicalBodyPart.h:334
	Vector3 mBoundingBoxHalfDimensions;

	// BrnPhysicalBodyPart.h:335
	Vector3Plus mWorldPenetrationPlusCollisionMagnitude;

	// BrnPhysicalBodyPart.h:336
	Vector3Plus mAverageCollisionPointPlusNumCollisions;

	// BrnPhysicalBodyPart.h:337
	BurnoutBodyPartID mRigidBodyId;

	// BrnPhysicalBodyPart.h:338
	EntityId mGlobalVehicleId;

	// BrnPhysicalBodyPart.h:339
	const IKBodyPart * mpIKPart;

	// BrnPhysicalBodyPart.h:340
	const BrnPhysics::Deformation::DeformableObject * mpDeformableObject;

	// BrnPhysicalBodyPart.h:341
	bool mbJoinedToVehicle;

	// BrnPhysicalBodyPart.h:342
	bool mbAddedToScene;

	// BrnPhysicalBodyPart.h:343
	bool mbFrozen;

	// BrnPhysicalBodyPart.h:344
	bool mbNeedsWritingIntoRenderware;

	// BrnPhysicalBodyPart.h:346
	int8_t mi8ActiveJointsTagPointIndex;

public:
	// BrnPhysicalBodyPart.h:127
	void Construct();

	// BrnPhysicalBodyPart.h:136
	void Prepare(BurnoutBodyPartID, EntityId, const BrnPhysics::Deformation::DeformableObject *, const IKBodyPart *, Matrix44Affine, Matrix44Affine);

	// BrnPhysicalBodyPart.h:139
	void Release();

	// BrnPhysicalBodyPart.h:142
	Matrix44Affine GetRenderTransform() const;

	// BrnPhysicalBodyPart.h:145
	Matrix44Affine GetRigidBodyTransform() const;

	// BrnPhysicalBodyPart.h:150
	void Update(const OutUpdateRigidBody *, OutputBuffer::SceneInputInterface *);

	// BrnPhysicalBodyPart.h:155
	void SetRigidBodyTransform(Matrix44Affine, OutputBuffer::SceneInputInterface *);

	// BrnPhysicalBodyPart.h:158
	EntityId GetEntityId() const;

	// BrnPhysicalBodyPart.h:161
	BurnoutBodyPartID GetRigidBodyId() const;

	// BrnPhysicalBodyPart.h:164
	EntityId GetGlobalEntityId() const;

	// BrnPhysicalBodyPart.h:167
	int32_t GetMeshIndex() const;

	// BrnPhysicalBodyPart.h:170
	bool IsAddedToScene() const;

	// BrnPhysicalBodyPart.h:174
	void AddToScene(InSceneUpdateInterface *);

	// BrnPhysicalBodyPart.h:178
	void RemoveFromScene(InSceneUpdateInterface *);

	// BrnPhysicalBodyPart.h:185
	void AddToSim(InputBuffer *, Matrix44Affine, Vector3, Vector3);

	// BrnPhysicalBodyPart.h:188
	Vector3 GetLinearVelocity() const;

	// BrnPhysicalBodyPart.h:193
	void UpdateRW(InputBuffer *, VecFloat);

	// BrnPhysicalBodyPart.h:196
	uint8_t GetPoolIndex() const;

	// BrnPhysicalBodyPart.h:200
	int32_t GetIKPartIndex() const;

	// BrnPhysicalBodyPart.h:205
	void GetBoundingBox(Box *) const;

	// BrnPhysicalBodyPart.h:208
	ExternalPhysicsBody * GetExternalBody();

	// BrnPhysicalBodyPart.h:212
	float32_t GetSphereRadius() const;

	// BrnPhysicalBodyPart.h:215
	Vector3 GetPosition() const;

	// BrnPhysicalBodyPart.h:218
	const IKBodyPart * GetIKPart() const;

	// BrnPhysicalBodyPart.h:222
	bool IsFrozen() const;

	// BrnPhysicalBodyPart.h:226
	bool NeedsAddingToScene() const;

	// BrnPhysicalBodyPart.h:230
	void SetNeedsWritingToRW();

	// BrnPhysicalBodyPart.h:235
	void UpdateBoundingBox(OutputBuffer::SceneInputInterface *);

	// BrnPhysicalBodyPart.h:238
	uint16_t GetTriangleCacheSlot() const;

	// BrnPhysicalBodyPart.h:242
	bool IsJoinedToVehicle() const;

	// BrnPhysicalBodyPart.h:250
	void SetJoinedToVehicle(Vector3, Vector3, VecFloat, int32_t);

	// BrnPhysicalBodyPart.h:254
	void RemoveJointAndAddToSim(InputBuffer *);

	// BrnPhysicalBodyPart.h:258
	void UpdateJoint(VecFloat);

	// BrnPhysicalBodyPart.h:261
	void PostVehicleUpdate();

	// BrnPhysicalBodyPart.h:265
	void AddContact(const PotentialContact &);

	// BrnPhysicalBodyPart.h:268
	VecFloat GetJointRotation() const;

	// BrnPhysicalBodyPart.h:272
	VecFloat GetJointRotationProportion() const;

	// BrnPhysicalBodyPart.h:275
	VecFloat GetJointVelocity() const;

	// BrnPhysicalBodyPart.h:281
	bool TestJointForBreaking(InputBuffer *, OutputBuffer *);

	// BrnPhysicalBodyPart.h:285
	void AddContactSpy(ContactSpyData *);

	// BrnPhysicalBodyPart.h:288
	void UpdateBoundingBox();

	// BrnPhysicalBodyPart.h:292
	void SetJointVelocity(VecFloat);

private:
	// BrnPhysicalBodyPart.h:301
	VolumeInstanceId GetVolumeInstanceId() const;

	// BrnPhysicalBodyPart.h:304
	VolumeId GetVolumeId() const;

	// BrnPhysicalBodyPart.h:309
	void CalculateBoundingBoxExtents(Vector3 &, Vector3 &);

	// BrnPhysicalBodyPart.h:312
	Vector3 CalculateAABBExtents();

	// BrnPhysicalBodyPart.h:316
	void CalcBoundingBox(Matrix44Affine);

	// BrnPhysicalBodyPart.h:320
	bool LimitVelocities(VecFloat);

	// BrnPhysicalBodyPart.h:324
	Vector3 CalculateSkinnedPoint(const BBoxPointSkinData &);

}

