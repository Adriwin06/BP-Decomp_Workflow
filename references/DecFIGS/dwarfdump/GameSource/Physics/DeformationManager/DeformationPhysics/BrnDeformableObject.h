// Wheel.h:30
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnDeformableObject.h:67
		const uint32_t KU_VOLUME_BUFFER_SCRATCH_PAD_SIZE = 150;

		// BrnDeformableObject.h:68
		const uint32_t KU_DETACHED_PART_SCENEMANAGER_FLAGS = 1156;

		// BrnDeformableObject.h:71
		const float32_t KF_MIN_SWEPT_SPHERE_SPEED;

		// BrnDeformableObject.h:998
		const rw::math::vpu::Vector3 KVF_CAR_BBOX_SHRINK;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnDeformableObject.h:67
		const uint32_t KU_VOLUME_BUFFER_SCRATCH_PAD_SIZE = 150;

		// BrnDeformableObject.h:68
		const uint32_t KU_DETACHED_PART_SCENEMANAGER_FLAGS = 1156;

		// BrnDeformableObject.h:71
		const float32_t KF_MIN_SWEPT_SPHERE_SPEED;

		// BrnDeformableObject.h:998
		const rw::math::vpu::Vector3 KVF_CAR_BBOX_SHRINK;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// Declaration
		struct DeformableObject {
			// BrnDeformableObject.h:160
			enum EPartState {
				E_PART_STATE_UNUSED = 0,
				E_PART_STATE_NON_DETACHABLE = 1,
				E_PART_STATE_ATTACHED_IK = 2,
				E_PART_STATE_HINGED = 3,
				E_PART_STATE_DETATCHED = 4,
				NUM_PART_STATES = 5,
			}

		}

		// BrnDeformableObject.h:67
		const uint32_t KU_VOLUME_BUFFER_SCRATCH_PAD_SIZE = 150;

		// BrnDeformableObject.h:68
		const uint32_t KU_DETACHED_PART_SCENEMANAGER_FLAGS = 1156;

		// BrnDeformableObject.h:71
		const float32_t KF_MIN_SWEPT_SPHERE_SPEED;

		// BrnDeformableObject.h:998
		const rw::math::vpu::Vector3 KVF_CAR_BBOX_SHRINK;

	}

}

// BrnDeformableObject.h:81
struct BrnPhysics::Deformation::ContactTime {
	// BrnDeformableObject.h:83
	float32_t mfSeverity;

	// BrnDeformableObject.h:84
	float32_t mfImpactTime;

	// BrnDeformableObject.h:85
	int16_t mi16SensorIndex;

public:
	// BrnDeformableObject.h:87
	void Clear();

	// BrnDeformableObject.h:94
	bool operator<(const ContactTime &) const;

}

// BrnDeformableObject.h:109
struct BrnPhysics::Deformation::ContactOrder {
private:
	// BrnDeformableObject.h:111
	ContactTime[25] maContactTimes;

	// BrnDeformableObject.h:112
	int16_t miNumContacts;

public:
	// BrnDeformableObject.h:114
	void Clear();

	// BrnDeformableObject.h:119
	void AddContact(float32_t, int16_t, float32_t);

	// BrnDeformableObject.h:127
	int16_t GetNumContacts();

	// BrnDeformableObject.h:130
	const ContactTime & GetContact(int16_t);

	// BrnDeformableObject.h:136
	void Sort();

	// BrnDeformableObject.h:142
	int32_t ContactSortCallback(const void *, const void *);

}

// BrnDeformableObject.h:155
struct BrnPhysics::Deformation::DeformableObject {
private:
	// BrnDeformableObject.h:600
	Sphere[24] maWorldSensorSpheres;

	// BrnDeformableObject.h:604
	SweptSphere[24] maSweptSpheres;

	// BrnDeformableObject.h:606
	VehicleLocatorData mLocatorData;

	// BrnDeformableObject.h:608
	VecFloat mAngularVelocitySum;

	// BrnDeformableObject.h:610
	extern const uint8_t KU_INVALID_WHEEL_TAG_POINT_INDEX = 255;

	// BrnDeformableObject.h:611
	uint8_t[4] mu8WheelTagPointIndices;

	// BrnDeformableObject.h:613
	Sphere[24] maLocalSensorSpheres;

	// BrnDeformableObject.h:614
	Vector3Plus[128] maVerletOffsets_Scratch;

	// BrnDeformableObject.h:615
	const StreamedDeformationSpec * mpDeformationSpec;

	// BrnDeformableObject.h:616
	ImpulsePasser mImpulsePasser;

	// BrnDeformableObject.h:617
	BrnPhysics::Deformation::VehicleRigidBody mVehicleBody;

	// BrnDeformableObject.h:618
	BrnPhysics::Deformation::DeformationSensor[20] maDeformationSensors;

	// BrnDeformableObject.h:620
	TagPoint[128] maTagPoints;

	// BrnDeformableObject.h:621
	int32_t miNumTagPoints;

	// BrnDeformableObject.h:623
	IKDrivenPoint[128] maDrivenPoints;

	// BrnDeformableObject.h:624
	int32_t miNumDrivenPoints;

	// BrnDeformableObject.h:626
	IKBodyPart[50] maIKParts;

	// BrnDeformableObject.h:627
	uint8_t[50] maPartStates;

	// BrnDeformableObject.h:628
	int32_t miNumIKBodyParts;

	// BrnDeformableObject.h:630
	uint8_t[50] mau8PhysicalBodyPartPoolIndex;

	// BrnDeformableObject.h:631
	int16_t mi16NumPhysicalParts;

	// BrnDeformableObject.h:632
	int16_t mi16NumHingedParts;

	// BrnDeformableObject.h:634
	uint16_t mu16DeformableObjectIndex;

	// BrnDeformableObject.h:636
	Vector3 mLastAngularVelocity;

	// BrnDeformableObject.h:637
	Vector3Plus mLastLinearVelocityPlusEntityRadius;

	// BrnDeformableObject.h:639
	uint8_t[4] mau8WheelToSensorMap;

	// BrnDeformableObject.h:641
	Vector3 mDriveTimeBBoxLimitMin;

	// BrnDeformableObject.h:642
	Vector3 mDriveTimeBBoxLimitMax;

	// BrnDeformableObject.h:644
	RigidBodyId mHandlingBodyID;

	// BrnDeformableObject.h:645
	EntityId mGlobalEntityId;

	// BrnDeformableObject.h:647
	float32_t mfNoDamageTimer;

	// BrnDeformableObject.h:649
	int16_t miNumAttachedExhausts;

	// BrnDeformableObject.h:651
	bool mbActive;

	// BrnDeformableObject.h:653
	InEventAddForCollision::CullingGroup mCullGroup;

	// BrnDeformableObject.h:655
	bool mbHasDeformedThisFrame;

	// BrnDeformableObject.h:656
	bool mbIKUpdateRequired;

	// BrnDeformableObject.h:658
	bool mbDoSweptSphereTests;

	// BrnDeformableObject.h:660
	bool mbBonnetHasOpened;

	// BrnDeformableObject.h:661
	bool mbBonnetLatchedDown;

	// BrnDeformableObject.h:663
	bool mbForceWheelsToDetach;

	// BrnDeformableObject.h:664
	bool mbShowtimeShunting;

	// BrnDeformableObject.h:665
	bool mbDontPlayGlassPaneEffects;

	// BrnDeformableObject.h:668
	bool mbResetDeformationNextUpdate;

	// BrnDeformableObject.h:671
	int8_t mi8NumPartsToForceHinging;

	// BrnDeformableObject.h:673
	BrnPhysics::Deformation::EGlassState[10] maGlassPaneStates;

	// BrnDeformableObject.h:674
	BrnPhysics::Deformation::EAbsorptionSets meAbsorptionSet;

	// BrnDeformableObject.h:676
	Vector4 mWheelTwistLimits;

	// BrnDeformableObject.h:677
	int8_t miNumBrokenWheels;

	// BrnDeformableObject.h:679
	extern ContactOrder _mContactOrder;

	// BrnDeformableObject.h:682
	extern int32_t siSortContactsPerfMon;

	// BrnDeformableObject.h:683
	extern int32_t siSolveContactsPerfMon;

	// BrnDeformableObject.h:684
	extern int32_t siCheckDetaching;

	// BrnDeformableObject.h:685
	extern int32_t siUpdateSkinningOffsets;

	// BrnDeformableObject.h:686
	extern int32_t siUpdateIK;

	// BrnDeformableObject.h:687
	extern int32_t siUpdateSuspensionIK;

	// BrnDeformableObject.h:688
	extern int32_t siUpdateLocators;

	// BrnDeformableObject.h:690
	extern int32_t siUpdateWheelsAndGlassPerfMon;

	// BrnDeformableObject.h:691
	extern int32_t siUpdateSweptSpherePerfMon;

	// BrnDeformableObject.h:692
	extern int32_t siUpdateWorldSpheres;

public:
	// BrnDeformableObject.h:172
	void Construct();

	// BrnDeformableObject.h:175
	void Destruct();

	// BrnDeformableObject.h:185
	bool Prepare(InputBuffer *, uint16_t, const AddDeformationModelEvent &, OutputBuffer::SceneInputInterface *, DetachedPartManager *, DetachedWheelManager *, Random &);

	// BrnDeformableObject.h:193
	void Release(InputBuffer *, OutputBuffer::SceneInputInterface *, DetachedPartManager *, DetachedWheelManager *);

	// BrnDeformableObject.h:204
	void ResetDeformation(InputBuffer *, OutputBuffer::SceneInputInterface *, DetachedPartManager *, DetachedWheelManager *, VecFloat, BrnPhysics::Deformation::DeformationResetType, bool, Random &);

	// BrnDeformableObject.h:207
	void ResetScratching();

	// BrnDeformableObject.h:212
	void ResetDeformationNextUpdate(bool);

	// BrnDeformableObject.h:216
	bool ShouldResetDeformationNextUpdate() const;

	// BrnDeformableObject.h:222
	void UpdateSensorDisplacements(VecFloat);

	// BrnDeformableObject.h:235
	bool Update(InputBuffer *, OutputBuffer *, const InputBuffer *, OutputBuffer *, VecFloat, DetachedPartManager *, DetachedWheelManager *, PotentialContactInterface *, Random &, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnDeformableObject.h:244
	void UpdateIKAndLocators(InputBuffer *, OutputBuffer *, VecFloat, DetachedPartManager *, DetachedWheelManager *, Random *);

	// BrnDeformableObject.h:251
	bool ApplyCarWorldImpulse(const StoredImpulseContact &, VecFloat, VecFloat, int32_t);

	// BrnDeformableObject.h:259
	bool ApplyCarCarImpulse(const StoredImpulseContact &, VecFloat, VecFloat, int32_t, Random &);

	// BrnDeformableObject.h:271
	void ApplySensorImpulse(VecFloat, const StoredImpulseContact &, const BrnPhysics::Deformation::ImpulseParams &, Vector3, Vector3, VecFloat, BrnPhysics::Deformation::DeformationSensor *, bool, bool);

	// BrnDeformableObject.h:276
	void UpdateIK(VecFloat);

	// BrnDeformableObject.h:283
	void CheckForDetachment(InputBuffer *, OutputBuffer *, DetachedPartManager *, float32_t);

	// BrnDeformableObject.h:291
	void CheckForForcedDetachment(InputBuffer *, OutputBuffer *, DetachedPartManager *, Random *, float32_t);

	// BrnDeformableObject.h:310
	void RemovePhysicalPartsAndJoints(InputBuffer *, OutputBuffer::SceneInputInterface *, DetachedPartManager *);

	// BrnDeformableObject.h:316
	void RemovePhysicalWheels(InputBuffer *, OutputBuffer::SceneInputInterface *, DetachedWheelManager *);

	// BrnDeformableObject.h:319
	void UpdateSkinningOffsets();

	// BrnDeformableObject.h:326
	void UpdateWheels(InputBuffer *, DetachedWheelManager *, float32_t, Random *);

	// BrnDeformableObject.h:332
	void UpdateGlass(float32_t, DeformationOutputInterface *, DeformationOutputInterfaceForEntityModules *);

	// BrnDeformableObject.h:336
	void UpdatePostPhysics(OutputBuffer::SceneInputInterface *);

	// BrnDeformableObject.h:341
	void UpdateHandlingBody(OutUpdateRigidBody);

	// BrnDeformableObject.h:344
	RigidBodyId GetHandlingBodyID();

	// BrnDeformableObject.h:347
	EntityId GetGlobalEntityId();

	// BrnDeformableObject.h:351
	bool IsActive();

	// BrnDeformableObject.h:354
	void InvalidateDeformationModel();

	// BrnDeformableObject.h:358
	void ValidateDeformationModel(ResourceHandle);

	// BrnDeformableObject.h:361
	BrnPhysics::Vehicle::VehiclePhysics * GetVehiclePhysics();

	// BrnDeformableObject.h:365
	const BrnPhysics::Vehicle::VehiclePhysics * GetVehiclePhysics() const;

	// BrnDeformableObject.h:370
	void GetTransform(Matrix44Affine &) const;

	// BrnDeformableObject.h:373
	Matrix44Affine GetTransformDelta() const;

	// BrnDeformableObject.h:378
	void SetTransform(const rw::math::vpu::Matrix44Affine *);

	// BrnDeformableObject.h:383
	void GetInverseTransform(Matrix44Affine &);

	// BrnDeformableObject.h:387
	void GetLinearVelocity(Vector3 &) const;

	// BrnDeformableObject.h:391
	void GetAngularVelocity(Vector3 &) const;

	// BrnDeformableObject.h:394
	Vector3 GetHalfExtents();

	// BrnDeformableObject.h:398
	Vector3 GetLocalVelocityFromLocalPoint(Vector3) const;

	// BrnDeformableObject.h:403
	Vector3 GetLocalVelocityFromWorldPoint(Vector3) const;

	// BrnDeformableObject.h:407
	BrnPhysics::Deformation::DeformationSensor * GetDeformationSensor(int32_t);

	// BrnDeformableObject.h:410
	int32_t GetNumSensors();

	// BrnDeformableObject.h:415
	BrnPhysics::Deformation::DeformationSensor & GetDeformationSensorFromVolumeInstance(VolumeInstanceId);

	// BrnDeformableObject.h:419
	Sphere GetDeformationSphereFromVolumeInstance(VolumeInstanceId);

	// BrnDeformableObject.h:422
	const rw::math::vpu::Vector3Plus * GetOffset_ScratchArray();

	// BrnDeformableObject.h:426
	const VehicleLocatorData * GetLocatorData();

	// BrnDeformableObject.h:430
	const IKBodyPart * GetIKPart(int32_t);

	// BrnDeformableObject.h:434
	int32_t GetWorldSpaceSpheres(const Sphere **);

	// BrnDeformableObject.h:443
	int32_t GetSweptSpheres(const SweptSphere **);

	// BrnDeformableObject.h:452
	bool IsUsingSweptSpheres();

	// BrnDeformableObject.h:455
	VecFloat GetWeightFactor();

	// BrnDeformableObject.h:459
	VecFloat GetVehicleWorldRestitution(const StoredImpulseContact &) const;

	// BrnDeformableObject.h:465
	void OutputWheelData(int32_t, DeformationOutputInterfaceForEntityModules *, DetachedWheelManager *);

	// BrnDeformableObject.h:470
	void UpdateAndOutputJointStates(DeformationOutputInterface *, DetachedPartManager *);

	// BrnDeformableObject.h:473
	void OutputState(CarState *);

	// BrnDeformableObject.h:476
	int16_t GetNumPhysicalParts() const;

	// BrnDeformableObject.h:480
	int16_t GetNumHingedParts() const;

	// BrnDeformableObject.h:491
	void DoBodyPartWorldContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *, BrnPhysics::ContactGenList *, CollisionGenerator *, CgsMemory::SimpleDataStreamProducer *, const DetachedPartManager *, uint32_t, LinearMalloc *) const;

	// BrnDeformableObject.h:501
	void DoDetachedWheelWorldContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *, BrnPhysics::ContactGenList *, CollisionGenerator *, CgsMemory::SimpleDataStreamProducer *, const DetachedWheelManager *, uint32_t, LinearMalloc *) const;

	// BrnDeformableObject.h:504
	Vector3 GetMeshOffset() const;

	// BrnDeformableObject.h:507
	Vector3 GetComOffset() const;

	// BrnDeformableObject.h:511
	Vector3 GetRigidBodySpecPosition() const;

	// BrnDeformableObject.h:516
	BrnPhysics::Deformation::DeformableObject::EPartState GetPartState(int32_t) const;

	// BrnDeformableObject.h:519
	bool HasDeformedThisFrame() const;

	// BrnDeformableObject.h:522
	void ClearDeformedThisFrameFlag();

	// BrnDeformableObject.h:527
	void GetBoundingBox(CgsGeometric::Box *);

	// BrnDeformableObject.h:531
	void GetAlignedDeformedBoundingBox(CgsGeometric::Box *);

	// BrnDeformableObject.h:535
	void ConstructUpdatePerformanceMonitors();

	// BrnDeformableObject.h:538
	void ConstructUpdateIKAndLocatorsPerformanceMonitors();

	// BrnDeformableObject.h:541
	void ConstructPostPhysicsPerformanceMonitors();

	// BrnDeformableObject.h:545
	void GetDeformedBoundingBox(AxisAlignedBox *);

	// BrnDeformableObject.h:553
	void AddContactsToPenetrationSolver(PenetrationSolver *, BrnPhysics::Deformation::DeformableObject *, int32_t, int32_t) const;

	// BrnDeformableObject.h:556
	BrnPhysics::Deformation::EAbsorptionSets GetAbsorptionSet();

	// BrnDeformableObject.h:560
	void ResetEntitySphereSize();

	// BrnDeformableObject.h:563
	bool IsFrozen() const;

	// BrnDeformableObject.h:567
	void SetFrozen(bool);

	// BrnDeformableObject.h:570
	void ResetCoolDown();

	// BrnDeformableObject.h:573
	bool IsIKUpdateRequired() const;

	// BrnDeformableObject.h:578
	void ClearStoredContacts();

	// BrnDeformableObject.h:583
	void GetWheelTagPoints(Vector3 *) const;

	// BrnDeformableObject.h:589
	void VerifyPartIndicies(DetachedPartManager *);

private:
	// BrnDeformableObject.h:696
	void SetLastLinearVelocity(Vector3);

	// BrnDeformableObject.h:699
	Vector3 GetLastLinearVelocity() const;

	// BrnDeformableObject.h:703
	void SetEntitySphereSize(VecFloat);

	// BrnDeformableObject.h:706
	VecFloat GetEntitySphereSize() const;

	// BrnDeformableObject.h:713
	void ResetSensors(Vector3Plus, Vector3, Vector3, Vector3);

	// BrnDeformableObject.h:717
	void PrepareIKPart(int32_t);

	// BrnDeformableObject.h:720
	void ClearVariables();

	// BrnDeformableObject.h:723
	IKBodyPart * GetBodyPartByType(EBodyParts);

	// BrnDeformableObject.h:727
	int32_t GetNonDetachedJointedPart(int32_t);

	// BrnDeformableObject.h:731
	int32_t GetAttachedNonJointedPart(int32_t);

	// BrnDeformableObject.h:735
	int32_t GetHingedPart(int32_t);

	// BrnDeformableObject.h:740
	void UpdateContacts(VecFloat, Random &);

	// BrnDeformableObject.h:745
	void UpdateOutputContactSpies(OutputBuffer *, PotentialContactInterface *);

	// BrnDeformableObject.h:753
	void UpdateSpinningDetachment(InputBuffer *, OutputBuffer *, DetachedPartManager *, VecFloat, Random &);

	// BrnDeformableObject.h:762
	void DetachPart(InputBuffer *, OutputBuffer *, DetachedPartManager *, int32_t, int32_t, bool);

	// BrnDeformableObject.h:766
	void ApplyBreakingJointForces(PhysicalBodyPart *);

	// BrnDeformableObject.h:772
	void SendGlassUpdateEvents(int32_t, DeformationOutputInterface *, DeformationOutputInterfaceForEntityModules *);

	// BrnDeformableObject.h:775
	void UpdateDeformedBBox();

	// BrnDeformableObject.h:778
	void CalculateDriveTimeLimits();

	// BrnDeformableObject.h:781
	void UpdateIKSuspensionOffsets();

	// BrnDeformableObject.h:785
	void UpdateAbsorptionSet(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnDeformableObject.h:790
	bool UpdateGlassSmashedState(int32_t, VecFloat);

	// BrnDeformableObject.h:793
	void PrepareLocators();

	// BrnDeformableObject.h:797
	void UpdateLocators(DetachedPartManager *);

	// BrnDeformableObject.h:805
	void UpdateLocator(Matrix44Affine &, BrnPhysics::Deformation::ETagPointType &, const LocatorPointSpec *, const rw::math::vpu::Matrix44Affine &, DetachedPartManager *);

	// BrnDeformableObject.h:809
	void UpdateVelocity(VecFloat);

	// BrnDeformableObject.h:814
	bool ShouldDetachWheel(const TagPoint *);

	// BrnDeformableObject.h:818
	void ResetJointVelocities(DetachedPartManager *);

	// BrnDeformableObject.h:826
	void GetInitialCompressionScalesAndLimits(BrnPhysics::Deformation::DeformationResetType, VecFloat, Vector3Plus &, Vector3 &, Vector3 &);

	// BrnDeformableObject.h:832
	void RenderSensors(CgsDev::Debug3DImmediateRender *, int32_t) const;

}

// BrnDeformableObject.h:155
struct BrnPhysics::Deformation::DeformableObject {
private:
	// BrnDeformableObject.h:600
	Sphere[24] maWorldSensorSpheres;

	// BrnDeformableObject.h:604
	SweptSphere[24] maSweptSpheres;

	// BrnDeformableObject.h:606
	VehicleLocatorData mLocatorData;

	// BrnDeformableObject.h:608
	VecFloat mAngularVelocitySum;

	// BrnDeformableObject.h:610
	extern const uint8_t KU_INVALID_WHEEL_TAG_POINT_INDEX = 255;

	// BrnDeformableObject.h:611
	uint8_t[4] mu8WheelTagPointIndices;

	// BrnDeformableObject.h:613
	Sphere[24] maLocalSensorSpheres;

	// BrnDeformableObject.h:614
	Vector3Plus[128] maVerletOffsets_Scratch;

	// BrnDeformableObject.h:615
	const StreamedDeformationSpec * mpDeformationSpec;

	// BrnDeformableObject.h:616
	ImpulsePasser mImpulsePasser;

	// BrnDeformableObject.h:617
	BrnPhysics::Deformation::VehicleRigidBody mVehicleBody;

	// BrnDeformableObject.h:618
	BrnPhysics::Deformation::DeformationSensor[20] maDeformationSensors;

	// BrnDeformableObject.h:620
	TagPoint[128] maTagPoints;

	// BrnDeformableObject.h:621
	int32_t miNumTagPoints;

	// BrnDeformableObject.h:623
	IKDrivenPoint[128] maDrivenPoints;

	// BrnDeformableObject.h:624
	int32_t miNumDrivenPoints;

	// BrnDeformableObject.h:626
	IKBodyPart[50] maIKParts;

	// BrnDeformableObject.h:627
	uint8_t[50] maPartStates;

	// BrnDeformableObject.h:628
	int32_t miNumIKBodyParts;

	// BrnDeformableObject.h:630
	uint8_t[50] mau8PhysicalBodyPartPoolIndex;

	// BrnDeformableObject.h:631
	int16_t mi16NumPhysicalParts;

	// BrnDeformableObject.h:632
	int16_t mi16NumHingedParts;

	// BrnDeformableObject.h:634
	uint16_t mu16DeformableObjectIndex;

	// BrnDeformableObject.h:636
	Vector3 mLastAngularVelocity;

	// BrnDeformableObject.h:637
	Vector3Plus mLastLinearVelocityPlusEntityRadius;

	// BrnDeformableObject.h:639
	uint8_t[4] mau8WheelToSensorMap;

	// BrnDeformableObject.h:641
	Vector3 mDriveTimeBBoxLimitMin;

	// BrnDeformableObject.h:642
	Vector3 mDriveTimeBBoxLimitMax;

	// BrnDeformableObject.h:644
	RigidBodyId mHandlingBodyID;

	// BrnDeformableObject.h:645
	EntityId mGlobalEntityId;

	// BrnDeformableObject.h:647
	float32_t mfNoDamageTimer;

	// BrnDeformableObject.h:649
	int16_t miNumAttachedExhausts;

	// BrnDeformableObject.h:651
	bool mbActive;

	// BrnDeformableObject.h:653
	InEventAddForCollision::CullingGroup mCullGroup;

	// BrnDeformableObject.h:655
	bool mbHasDeformedThisFrame;

	// BrnDeformableObject.h:656
	bool mbIKUpdateRequired;

	// BrnDeformableObject.h:658
	bool mbDoSweptSphereTests;

	// BrnDeformableObject.h:660
	bool mbBonnetHasOpened;

	// BrnDeformableObject.h:661
	bool mbBonnetLatchedDown;

	// BrnDeformableObject.h:663
	bool mbForceWheelsToDetach;

	// BrnDeformableObject.h:664
	bool mbShowtimeShunting;

	// BrnDeformableObject.h:665
	bool mbDontPlayGlassPaneEffects;

	// BrnDeformableObject.h:668
	bool mbResetDeformationNextUpdate;

	// BrnDeformableObject.h:671
	int8_t mi8NumPartsToForceHinging;

	// BrnDeformableObject.h:673
	BrnPhysics::Deformation::EGlassState[10] maGlassPaneStates;

	// BrnDeformableObject.h:674
	BrnPhysics::Deformation::EAbsorptionSets meAbsorptionSet;

	// BrnDeformableObject.h:676
	Vector4 mWheelTwistLimits;

	// BrnDeformableObject.h:677
	int8_t miNumBrokenWheels;

	// BrnDeformableObject.h:679
	extern ContactOrder _mContactOrder;

	// BrnDeformableObject.h:682
	extern int32_t siSortContactsPerfMon;

	// BrnDeformableObject.h:683
	extern int32_t siSolveContactsPerfMon;

	// BrnDeformableObject.h:684
	extern int32_t siCheckDetaching;

	// BrnDeformableObject.h:685
	extern int32_t siUpdateSkinningOffsets;

	// BrnDeformableObject.h:686
	extern int32_t siUpdateIK;

	// BrnDeformableObject.h:687
	extern int32_t siUpdateSuspensionIK;

	// BrnDeformableObject.h:688
	extern int32_t siUpdateLocators;

	// BrnDeformableObject.h:690
	extern int32_t siUpdateWheelsAndGlassPerfMon;

	// BrnDeformableObject.h:691
	extern int32_t siUpdateSweptSpherePerfMon;

	// BrnDeformableObject.h:692
	extern int32_t siUpdateWorldSpheres;

public:
	// BrnDeformableObject.h:172
	void Construct();

	// BrnDeformableObject.h:175
	void Destruct();

	// BrnDeformableObject.h:185
	bool Prepare(InputBuffer *, uint16_t, const AddDeformationModelEvent &, OutputBuffer::SceneInputInterface *, DetachedPartManager *, DetachedWheelManager *, Random &);

	// BrnDeformableObject.h:193
	void Release(InputBuffer *, OutputBuffer::SceneInputInterface *, DetachedPartManager *, DetachedWheelManager *);

	// BrnDeformableObject.h:204
	void ResetDeformation(InputBuffer *, OutputBuffer::SceneInputInterface *, DetachedPartManager *, DetachedWheelManager *, VecFloat, BrnPhysics::Deformation::DeformationResetType, bool, Random &);

	// BrnDeformableObject.h:207
	void ResetScratching();

	// BrnDeformableObject.h:212
	void ResetDeformationNextUpdate(bool);

	// BrnDeformableObject.h:216
	bool ShouldResetDeformationNextUpdate() const;

	// BrnDeformableObject.h:222
	void UpdateSensorDisplacements(VecFloat);

	// BrnDeformableObject.h:235
	bool Update(InputBuffer *, OutputBuffer *, const InputBuffer *, OutputBuffer *, VecFloat, DetachedPartManager *, DetachedWheelManager *, PotentialContactInterface *, Random &, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnDeformableObject.h:244
	void UpdateIKAndLocators(InputBuffer *, OutputBuffer *, VecFloat, DetachedPartManager *, DetachedWheelManager *, Random *);

	// BrnDeformableObject.h:251
	bool ApplyCarWorldImpulse(const StoredImpulseContact &, VecFloat, VecFloat, int32_t);

	// BrnDeformableObject.h:259
	bool ApplyCarCarImpulse(const StoredImpulseContact &, VecFloat, VecFloat, int32_t, Random &);

	// BrnDeformableObject.h:271
	void ApplySensorImpulse(VecFloat, const StoredImpulseContact &, const BrnPhysics::Deformation::ImpulseParams &, Vector3, Vector3, VecFloat, BrnPhysics::Deformation::DeformationSensor *, bool, bool);

	// BrnDeformableObject.h:276
	void UpdateIK(VecFloat);

	// BrnDeformableObject.h:283
	void CheckForDetachment(InputBuffer *, OutputBuffer *, DetachedPartManager *, float32_t);

	// BrnDeformableObject.h:291
	void CheckForForcedDetachment(InputBuffer *, OutputBuffer *, DetachedPartManager *, Random *, float32_t);

	// BrnDeformableObject.h:310
	void RemovePhysicalPartsAndJoints(InputBuffer *, OutputBuffer::SceneInputInterface *, DetachedPartManager *);

	// BrnDeformableObject.h:316
	void RemovePhysicalWheels(InputBuffer *, OutputBuffer::SceneInputInterface *, DetachedWheelManager *);

	// BrnDeformableObject.h:319
	void UpdateSkinningOffsets();

	// BrnDeformableObject.h:326
	void UpdateWheels(InputBuffer *, DetachedWheelManager *, float32_t, Random *);

	// BrnDeformableObject.h:332
	void UpdateGlass(float32_t, DeformationOutputInterface *, DeformationOutputInterfaceForEntityModules *);

	// BrnDeformableObject.h:336
	void UpdatePostPhysics(OutputBuffer::SceneInputInterface *);

	// BrnDeformableObject.h:341
	void UpdateHandlingBody(OutUpdateRigidBody);

	// BrnDeformableObject.h:344
	RigidBodyId GetHandlingBodyID();

	// BrnDeformableObject.h:347
	EntityId GetGlobalEntityId();

	// BrnDeformableObject.h:351
	bool IsActive();

	// BrnDeformableObject.h:354
	void InvalidateDeformationModel();

	// BrnDeformableObject.h:358
	void ValidateDeformationModel(ResourceHandle);

	// BrnDeformableObject.h:361
	BrnPhysics::Vehicle::VehiclePhysics * GetVehiclePhysics();

	// BrnDeformableObject.h:365
	const BrnPhysics::Vehicle::VehiclePhysics * GetVehiclePhysics() const;

	// BrnDeformableObject.h:370
	void GetTransform(Matrix44Affine &) const;

	// BrnDeformableObject.h:373
	Matrix44Affine GetTransformDelta() const;

	// BrnDeformableObject.h:378
	void SetTransform(const rw::math::vpu::Matrix44Affine *);

	// BrnDeformableObject.h:383
	void GetInverseTransform(Matrix44Affine &);

	// BrnDeformableObject.h:387
	void GetLinearVelocity(Vector3 &) const;

	// BrnDeformableObject.h:391
	void GetAngularVelocity(Vector3 &) const;

	// BrnDeformableObject.h:394
	Vector3 GetHalfExtents();

	// BrnDeformableObject.h:398
	Vector3 GetLocalVelocityFromLocalPoint(Vector3) const;

	// BrnDeformableObject.h:403
	Vector3 GetLocalVelocityFromWorldPoint(Vector3) const;

	// BrnDeformableObject.h:407
	BrnPhysics::Deformation::DeformationSensor * GetDeformationSensor(int32_t);

	// BrnDeformableObject.h:410
	int32_t GetNumSensors();

	// BrnDeformableObject.h:415
	BrnPhysics::Deformation::DeformationSensor & GetDeformationSensorFromVolumeInstance(VolumeInstanceId);

	// BrnDeformableObject.h:419
	Sphere GetDeformationSphereFromVolumeInstance(VolumeInstanceId);

	// BrnDeformableObject.h:422
	const rw::math::vpu::Vector3Plus * GetOffset_ScratchArray();

	// BrnDeformableObject.h:426
	const VehicleLocatorData * GetLocatorData();

	// BrnDeformableObject.h:430
	const IKBodyPart * GetIKPart(int32_t);

	// BrnDeformableObject.h:434
	int32_t GetWorldSpaceSpheres(const Sphere **);

	// BrnDeformableObject.h:443
	int32_t GetSweptSpheres(const SweptSphere **);

	// BrnDeformableObject.h:452
	bool IsUsingSweptSpheres();

	// BrnDeformableObject.h:455
	VecFloat GetWeightFactor();

	// BrnDeformableObject.h:459
	VecFloat GetVehicleWorldRestitution(const StoredImpulseContact &) const;

	// BrnDeformableObject.h:465
	void OutputWheelData(int32_t, DeformationOutputInterfaceForEntityModules *, DetachedWheelManager *);

	// BrnDeformableObject.h:470
	void UpdateAndOutputJointStates(DeformationOutputInterface *, DetachedPartManager *);

	// BrnDeformableObject.h:473
	void OutputState(CarState *);

	// BrnDeformableObject.h:476
	int16_t GetNumPhysicalParts() const;

	// BrnDeformableObject.h:480
	int16_t GetNumHingedParts() const;

	// BrnDeformableObject.h:491
	void DoBodyPartWorldContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *, BrnPhysics::ContactGenList *, CollisionGenerator *, CgsMemory::SimpleDataStreamProducer *, const DetachedPartManager *, uint32_t, LinearMalloc *) const;

	// BrnDeformableObject.h:501
	void DoDetachedWheelWorldContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *, BrnPhysics::ContactGenList *, CollisionGenerator *, CgsMemory::SimpleDataStreamProducer *, const DetachedWheelManager *, uint32_t, LinearMalloc *) const;

	// BrnDeformableObject.h:504
	Vector3 GetMeshOffset() const;

	// BrnDeformableObject.h:507
	Vector3 GetComOffset() const;

	// BrnDeformableObject.h:511
	Vector3 GetRigidBodySpecPosition() const;

	// BrnDeformableObject.h:516
	BrnPhysics::Deformation::DeformableObject::EPartState GetPartState(int32_t) const;

	// BrnDeformableObject.h:519
	bool HasDeformedThisFrame() const;

	// BrnDeformableObject.h:522
	void ClearDeformedThisFrameFlag();

	// BrnDeformableObject.h:527
	void GetBoundingBox(CgsGeometric::Box *);

	// BrnDeformableObject.h:531
	void GetAlignedDeformedBoundingBox(CgsGeometric::Box *);

	// BrnDeformableObject.h:535
	void ConstructUpdatePerformanceMonitors();

	// BrnDeformableObject.h:538
	void ConstructUpdateIKAndLocatorsPerformanceMonitors();

	// BrnDeformableObject.h:541
	void ConstructPostPhysicsPerformanceMonitors();

	// BrnDeformableObject.h:545
	void GetDeformedBoundingBox(AxisAlignedBox *);

	// BrnDeformableObject.h:553
	void AddContactsToPenetrationSolver(PenetrationSolver *, BrnPhysics::Deformation::DeformableObject *, int32_t, int32_t) const;

	// BrnDeformableObject.h:556
	BrnPhysics::Deformation::EAbsorptionSets GetAbsorptionSet();

	// BrnDeformableObject.h:560
	void ResetEntitySphereSize();

	// BrnDeformableObject.h:563
	bool IsFrozen() const;

	// BrnDeformableObject.h:567
	void SetFrozen(bool);

	// BrnDeformableObject.h:570
	void ResetCoolDown();

	// BrnDeformableObject.h:573
	bool IsIKUpdateRequired() const;

	// BrnDeformableObject.h:578
	void ClearStoredContacts();

	// BrnDeformableObject.h:583
	void GetWheelTagPoints(Vector3 *) const;

	// BrnDeformableObject.h:589
	void VerifyPartIndicies(DetachedPartManager *);

private:
	// BrnDeformableObject.h:696
	void SetLastLinearVelocity(Vector3);

	// BrnDeformableObject.h:699
	Vector3 GetLastLinearVelocity() const;

	// BrnDeformableObject.h:703
	void SetEntitySphereSize(VecFloat);

	// BrnDeformableObject.h:706
	VecFloat GetEntitySphereSize() const;

	// BrnDeformableObject.h:713
	void ResetSensors(Vector3Plus, Vector3, Vector3, Vector3);

	// BrnDeformableObject.h:717
	void PrepareIKPart(int32_t);

	// BrnDeformableObject.h:720
	void ClearVariables();

	// BrnDeformableObject.h:723
	IKBodyPart * GetBodyPartByType(EBodyParts);

	// BrnDeformableObject.h:727
	int32_t GetNonDetachedJointedPart(int32_t);

	// BrnDeformableObject.h:731
	int32_t GetAttachedNonJointedPart(int32_t);

	// BrnDeformableObject.h:735
	int32_t GetHingedPart(int32_t);

	// BrnDeformableObject.h:740
	void UpdateContacts(VecFloat, Random &);

	// BrnDeformableObject.h:745
	void UpdateOutputContactSpies(OutputBuffer *, PotentialContactInterface *);

	// BrnDeformableObject.h:753
	// Declaration
	void UpdateSpinningDetachment(InputBuffer *, OutputBuffer *, DetachedPartManager *, VecFloat, Random &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDeformableObject.cpp:2045
		using namespace CgsDev::Message;

	}

	// BrnDeformableObject.h:762
	// Declaration
	void DetachPart(InputBuffer *, OutputBuffer *, DetachedPartManager *, int32_t, int32_t, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDeformableObject.cpp:2385
		using namespace CgsDev::Message;

	}

	// BrnDeformableObject.h:766
	void ApplyBreakingJointForces(PhysicalBodyPart *);

	// BrnDeformableObject.h:772
	void SendGlassUpdateEvents(int32_t, DeformationOutputInterface *, DeformationOutputInterfaceForEntityModules *);

	// BrnDeformableObject.h:775
	void UpdateDeformedBBox();

	// BrnDeformableObject.h:778
	void CalculateDriveTimeLimits();

	// BrnDeformableObject.h:781
	void UpdateIKSuspensionOffsets();

	// BrnDeformableObject.h:785
	void UpdateAbsorptionSet(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnDeformableObject.h:790
	bool UpdateGlassSmashedState(int32_t, VecFloat);

	// BrnDeformableObject.h:793
	void PrepareLocators();

	// BrnDeformableObject.h:797
	void UpdateLocators(DetachedPartManager *);

	// BrnDeformableObject.h:805
	void UpdateLocator(Matrix44Affine &, BrnPhysics::Deformation::ETagPointType &, const LocatorPointSpec *, const rw::math::vpu::Matrix44Affine &, DetachedPartManager *);

	// BrnDeformableObject.h:809
	void UpdateVelocity(VecFloat);

	// BrnDeformableObject.h:814
	bool ShouldDetachWheel(const TagPoint *);

	// BrnDeformableObject.h:818
	void ResetJointVelocities(DetachedPartManager *);

	// BrnDeformableObject.h:826
	void GetInitialCompressionScalesAndLimits(BrnPhysics::Deformation::DeformationResetType, VecFloat, Vector3Plus &, Vector3 &, Vector3 &);

	// BrnDeformableObject.h:832
	void RenderSensors(CgsDev::Debug3DImmediateRender *, int32_t) const;

}

// BrnDeformableObject.h:610
extern const uint8_t KU_INVALID_WHEEL_TAG_POINT_INDEX = 255;

// Wheel.h:30
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// Declaration
		struct DeformableObject {
			// BrnDeformableObject.h:160
			enum EPartState {
				E_PART_STATE_UNUSED = 0,
				E_PART_STATE_NON_DETACHABLE = 1,
				E_PART_STATE_ATTACHED_IK = 2,
				E_PART_STATE_HINGED = 3,
				E_PART_STATE_DETATCHED = 4,
				NUM_PART_STATES = 5,
			}

		}

		// BrnDeformableObject.h:67
		const uint32_t KU_VOLUME_BUFFER_SCRATCH_PAD_SIZE = 150;

		// BrnDeformableObject.h:68
		const uint32_t KU_DETACHED_PART_SCENEMANAGER_FLAGS = 1156;

		// BrnDeformableObject.h:71
		const float32_t KF_MIN_SWEPT_SPHERE_SPEED;

		// BrnDeformableObject.h:998
		const rw::math::vpu::Vector3 KVF_CAR_BBOX_SHRINK;

	}

}

// BrnDeformableObject.h:155
struct BrnPhysics::Deformation::DeformableObject {
private:
	// BrnDeformableObject.h:600
	Sphere[24] maWorldSensorSpheres;

	// BrnDeformableObject.h:604
	SweptSphere[24] maSweptSpheres;

	// BrnDeformableObject.h:606
	VehicleLocatorData mLocatorData;

	// BrnDeformableObject.h:608
	VecFloat mAngularVelocitySum;

	// BrnDeformableObject.h:610
	extern const uint8_t KU_INVALID_WHEEL_TAG_POINT_INDEX = 255;

	// BrnDeformableObject.h:611
	uint8_t[4] mu8WheelTagPointIndices;

	// BrnDeformableObject.h:613
	Sphere[24] maLocalSensorSpheres;

	// BrnDeformableObject.h:614
	Vector3Plus[128] maVerletOffsets_Scratch;

	// BrnDeformableObject.h:615
	const StreamedDeformationSpec * mpDeformationSpec;

	// BrnDeformableObject.h:616
	ImpulsePasser mImpulsePasser;

	// BrnDeformableObject.h:617
	BrnPhysics::Deformation::VehicleRigidBody mVehicleBody;

	// BrnDeformableObject.h:618
	BrnPhysics::Deformation::DeformationSensor[20] maDeformationSensors;

	// BrnDeformableObject.h:620
	TagPoint[128] maTagPoints;

	// BrnDeformableObject.h:621
	int32_t miNumTagPoints;

	// BrnDeformableObject.h:623
	IKDrivenPoint[128] maDrivenPoints;

	// BrnDeformableObject.h:624
	int32_t miNumDrivenPoints;

	// BrnDeformableObject.h:626
	IKBodyPart[50] maIKParts;

	// BrnDeformableObject.h:627
	uint8_t[50] maPartStates;

	// BrnDeformableObject.h:628
	int32_t miNumIKBodyParts;

	// BrnDeformableObject.h:630
	uint8_t[50] mau8PhysicalBodyPartPoolIndex;

	// BrnDeformableObject.h:631
	int16_t mi16NumPhysicalParts;

	// BrnDeformableObject.h:632
	int16_t mi16NumHingedParts;

	// BrnDeformableObject.h:634
	uint16_t mu16DeformableObjectIndex;

	// BrnDeformableObject.h:636
	Vector3 mLastAngularVelocity;

	// BrnDeformableObject.h:637
	Vector3Plus mLastLinearVelocityPlusEntityRadius;

	// BrnDeformableObject.h:639
	uint8_t[4] mau8WheelToSensorMap;

	// BrnDeformableObject.h:641
	Vector3 mDriveTimeBBoxLimitMin;

	// BrnDeformableObject.h:642
	Vector3 mDriveTimeBBoxLimitMax;

	// BrnDeformableObject.h:644
	RigidBodyId mHandlingBodyID;

	// BrnDeformableObject.h:645
	EntityId mGlobalEntityId;

	// BrnDeformableObject.h:647
	float32_t mfNoDamageTimer;

	// BrnDeformableObject.h:649
	int16_t miNumAttachedExhausts;

	// BrnDeformableObject.h:651
	bool mbActive;

	// BrnDeformableObject.h:653
	SetRaceCarCullingGroupEvent::CullingGroup mCullGroup;

	// BrnDeformableObject.h:655
	bool mbHasDeformedThisFrame;

	// BrnDeformableObject.h:656
	bool mbIKUpdateRequired;

	// BrnDeformableObject.h:658
	bool mbDoSweptSphereTests;

	// BrnDeformableObject.h:660
	bool mbBonnetHasOpened;

	// BrnDeformableObject.h:661
	bool mbBonnetLatchedDown;

	// BrnDeformableObject.h:663
	bool mbForceWheelsToDetach;

	// BrnDeformableObject.h:664
	bool mbShowtimeShunting;

	// BrnDeformableObject.h:665
	bool mbDontPlayGlassPaneEffects;

	// BrnDeformableObject.h:668
	bool mbResetDeformationNextUpdate;

	// BrnDeformableObject.h:671
	int8_t mi8NumPartsToForceHinging;

	// BrnDeformableObject.h:673
	BrnPhysics::Deformation::EGlassState[10] maGlassPaneStates;

	// BrnDeformableObject.h:674
	BrnPhysics::Deformation::EAbsorptionSets meAbsorptionSet;

	// BrnDeformableObject.h:676
	Vector4 mWheelTwistLimits;

	// BrnDeformableObject.h:677
	int8_t miNumBrokenWheels;

	// BrnDeformableObject.h:679
	extern ContactOrder _mContactOrder;

	// BrnDeformableObject.h:682
	extern int32_t siSortContactsPerfMon;

	// BrnDeformableObject.h:683
	extern int32_t siSolveContactsPerfMon;

	// BrnDeformableObject.h:684
	extern int32_t siCheckDetaching;

	// BrnDeformableObject.h:685
	extern int32_t siUpdateSkinningOffsets;

	// BrnDeformableObject.h:686
	extern int32_t siUpdateIK;

	// BrnDeformableObject.h:687
	extern int32_t siUpdateSuspensionIK;

	// BrnDeformableObject.h:688
	extern int32_t siUpdateLocators;

	// BrnDeformableObject.h:690
	extern int32_t siUpdateWheelsAndGlassPerfMon;

	// BrnDeformableObject.h:691
	extern int32_t siUpdateSweptSpherePerfMon;

	// BrnDeformableObject.h:692
	extern int32_t siUpdateWorldSpheres;

public:
	// BrnDeformableObject.h:172
	void Construct();

	// BrnDeformableObject.h:175
	void Destruct();

	// BrnDeformableObject.h:185
	bool Prepare(InputBuffer *, uint16_t, const AddDeformationModelEvent &, OutputBuffer::SceneInputInterface *, DetachedPartManager *, DetachedWheelManager *, Random &);

	// BrnDeformableObject.h:193
	void Release(InputBuffer *, OutputBuffer::SceneInputInterface *, DetachedPartManager *, DetachedWheelManager *);

	// BrnDeformableObject.h:204
	void ResetDeformation(InputBuffer *, OutputBuffer::SceneInputInterface *, DetachedPartManager *, DetachedWheelManager *, VecFloat, BrnPhysics::Deformation::DeformationResetType, bool, Random &);

	// BrnDeformableObject.h:207
	void ResetScratching();

	// BrnDeformableObject.h:212
	void ResetDeformationNextUpdate(bool);

	// BrnDeformableObject.h:216
	bool ShouldResetDeformationNextUpdate() const;

	// BrnDeformableObject.h:222
	void UpdateSensorDisplacements(VecFloat);

	// BrnDeformableObject.h:235
	bool Update(InputBuffer *, OutputBuffer *, const InputBuffer *, OutputBuffer *, VecFloat, DetachedPartManager *, DetachedWheelManager *, PotentialContactInterface *, Random &, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnDeformableObject.h:244
	void UpdateIKAndLocators(InputBuffer *, OutputBuffer *, VecFloat, DetachedPartManager *, DetachedWheelManager *, Random *);

	// BrnDeformableObject.h:251
	bool ApplyCarWorldImpulse(const StoredImpulseContact &, VecFloat, VecFloat, int32_t);

	// BrnDeformableObject.h:259
	bool ApplyCarCarImpulse(const StoredImpulseContact &, VecFloat, VecFloat, int32_t, Random &);

	// BrnDeformableObject.h:271
	void ApplySensorImpulse(VecFloat, const StoredImpulseContact &, const BrnPhysics::Deformation::ImpulseParams &, Vector3, Vector3, VecFloat, BrnPhysics::Deformation::DeformationSensor *, bool, bool);

	// BrnDeformableObject.h:276
	void UpdateIK(VecFloat);

	// BrnDeformableObject.h:283
	void CheckForDetachment(InputBuffer *, OutputBuffer *, DetachedPartManager *, float32_t);

	// BrnDeformableObject.h:291
	void CheckForForcedDetachment(InputBuffer *, OutputBuffer *, DetachedPartManager *, Random *, float32_t);

	// BrnDeformableObject.h:310
	void RemovePhysicalPartsAndJoints(InputBuffer *, OutputBuffer::SceneInputInterface *, DetachedPartManager *);

	// BrnDeformableObject.h:316
	void RemovePhysicalWheels(InputBuffer *, OutputBuffer::SceneInputInterface *, DetachedWheelManager *);

	// BrnDeformableObject.h:319
	void UpdateSkinningOffsets();

	// BrnDeformableObject.h:326
	void UpdateWheels(InputBuffer *, DetachedWheelManager *, float32_t, Random *);

	// BrnDeformableObject.h:332
	void UpdateGlass(float32_t, DeformationOutputInterface *, DeformationOutputInterfaceForEntityModules *);

	// BrnDeformableObject.h:336
	void UpdatePostPhysics(OutputBuffer::SceneInputInterface *);

	// BrnDeformableObject.h:341
	void UpdateHandlingBody(OutUpdateRigidBody);

	// BrnDeformableObject.h:344
	RigidBodyId GetHandlingBodyID();

	// BrnDeformableObject.h:347
	EntityId GetGlobalEntityId();

	// BrnDeformableObject.h:351
	bool IsActive();

	// BrnDeformableObject.h:354
	void InvalidateDeformationModel();

	// BrnDeformableObject.h:358
	void ValidateDeformationModel(ResourceHandle);

	// BrnDeformableObject.h:361
	BrnPhysics::Vehicle::VehiclePhysics * GetVehiclePhysics();

	// BrnDeformableObject.h:365
	const BrnPhysics::Vehicle::VehiclePhysics * GetVehiclePhysics() const;

	// BrnDeformableObject.h:370
	void GetTransform(Matrix44Affine &) const;

	// BrnDeformableObject.h:373
	Matrix44Affine GetTransformDelta() const;

	// BrnDeformableObject.h:378
	void SetTransform(const rw::math::vpu::Matrix44Affine *);

	// BrnDeformableObject.h:383
	void GetInverseTransform(Matrix44Affine &);

	// BrnDeformableObject.h:387
	void GetLinearVelocity(Vector3 &) const;

	// BrnDeformableObject.h:391
	void GetAngularVelocity(Vector3 &) const;

	// BrnDeformableObject.h:394
	Vector3 GetHalfExtents();

	// BrnDeformableObject.h:398
	Vector3 GetLocalVelocityFromLocalPoint(Vector3) const;

	// BrnDeformableObject.h:403
	Vector3 GetLocalVelocityFromWorldPoint(Vector3) const;

	// BrnDeformableObject.h:407
	BrnPhysics::Deformation::DeformationSensor * GetDeformationSensor(int32_t);

	// BrnDeformableObject.h:410
	int32_t GetNumSensors();

	// BrnDeformableObject.h:415
	BrnPhysics::Deformation::DeformationSensor & GetDeformationSensorFromVolumeInstance(VolumeInstanceId);

	// BrnDeformableObject.h:419
	Sphere GetDeformationSphereFromVolumeInstance(VolumeInstanceId);

	// BrnDeformableObject.h:422
	const rw::math::vpu::Vector3Plus * GetOffset_ScratchArray();

	// BrnDeformableObject.h:426
	const VehicleLocatorData * GetLocatorData();

	// BrnDeformableObject.h:430
	const IKBodyPart * GetIKPart(int32_t);

	// BrnDeformableObject.h:434
	int32_t GetWorldSpaceSpheres(const Sphere **);

	// BrnDeformableObject.h:443
	int32_t GetSweptSpheres(const SweptSphere **);

	// BrnDeformableObject.h:452
	bool IsUsingSweptSpheres();

	// BrnDeformableObject.h:455
	VecFloat GetWeightFactor();

	// BrnDeformableObject.h:459
	VecFloat GetVehicleWorldRestitution(const StoredImpulseContact &) const;

	// BrnDeformableObject.h:465
	void OutputWheelData(int32_t, DeformationOutputInterfaceForEntityModules *, DetachedWheelManager *);

	// BrnDeformableObject.h:470
	void UpdateAndOutputJointStates(DeformationOutputInterface *, DetachedPartManager *);

	// BrnDeformableObject.h:473
	void OutputState(CarState *);

	// BrnDeformableObject.h:476
	int16_t GetNumPhysicalParts() const;

	// BrnDeformableObject.h:480
	int16_t GetNumHingedParts() const;

	// BrnDeformableObject.h:491
	void DoBodyPartWorldContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *, BrnPhysics::ContactGenList *, CollisionGenerator *, CgsMemory::SimpleDataStreamProducer *, const DetachedPartManager *, uint32_t, LinearMalloc *) const;

	// BrnDeformableObject.h:501
	void DoDetachedWheelWorldContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *, BrnPhysics::ContactGenList *, CollisionGenerator *, CgsMemory::SimpleDataStreamProducer *, const DetachedWheelManager *, uint32_t, LinearMalloc *) const;

	// BrnDeformableObject.h:504
	Vector3 GetMeshOffset() const;

	// BrnDeformableObject.h:507
	Vector3 GetComOffset() const;

	// BrnDeformableObject.h:511
	Vector3 GetRigidBodySpecPosition() const;

	// BrnDeformableObject.h:516
	BrnPhysics::Deformation::DeformableObject::EPartState GetPartState(int32_t) const;

	// BrnDeformableObject.h:519
	bool HasDeformedThisFrame() const;

	// BrnDeformableObject.h:522
	void ClearDeformedThisFrameFlag();

	// BrnDeformableObject.h:527
	void GetBoundingBox(Box *);

	// BrnDeformableObject.h:531
	void GetAlignedDeformedBoundingBox(Box *);

	// BrnDeformableObject.h:535
	void ConstructUpdatePerformanceMonitors();

	// BrnDeformableObject.h:538
	void ConstructUpdateIKAndLocatorsPerformanceMonitors();

	// BrnDeformableObject.h:541
	void ConstructPostPhysicsPerformanceMonitors();

	// BrnDeformableObject.h:545
	void GetDeformedBoundingBox(AxisAlignedBox *);

	// BrnDeformableObject.h:553
	void AddContactsToPenetrationSolver(PenetrationSolver *, BrnPhysics::Deformation::DeformableObject *, int32_t, int32_t) const;

	// BrnDeformableObject.h:556
	BrnPhysics::Deformation::EAbsorptionSets GetAbsorptionSet();

	// BrnDeformableObject.h:560
	void ResetEntitySphereSize();

	// BrnDeformableObject.h:563
	bool IsFrozen() const;

	// BrnDeformableObject.h:567
	void SetFrozen(bool);

	// BrnDeformableObject.h:570
	void ResetCoolDown();

	// BrnDeformableObject.h:573
	bool IsIKUpdateRequired() const;

	// BrnDeformableObject.h:578
	void ClearStoredContacts();

	// BrnDeformableObject.h:583
	void GetWheelTagPoints(Vector3 *) const;

	// BrnDeformableObject.h:589
	void VerifyPartIndicies(DetachedPartManager *);

private:
	// BrnDeformableObject.h:696
	void SetLastLinearVelocity(Vector3);

	// BrnDeformableObject.h:699
	Vector3 GetLastLinearVelocity() const;

	// BrnDeformableObject.h:703
	void SetEntitySphereSize(VecFloat);

	// BrnDeformableObject.h:706
	VecFloat GetEntitySphereSize() const;

	// BrnDeformableObject.h:713
	void ResetSensors(Vector3Plus, Vector3, Vector3, Vector3);

	// BrnDeformableObject.h:717
	void PrepareIKPart(int32_t);

	// BrnDeformableObject.h:720
	void ClearVariables();

	// BrnDeformableObject.h:723
	IKBodyPart * GetBodyPartByType(EBodyParts);

	// BrnDeformableObject.h:727
	int32_t GetNonDetachedJointedPart(int32_t);

	// BrnDeformableObject.h:731
	int32_t GetAttachedNonJointedPart(int32_t);

	// BrnDeformableObject.h:735
	int32_t GetHingedPart(int32_t);

	// BrnDeformableObject.h:740
	void UpdateContacts(VecFloat, Random &);

	// BrnDeformableObject.h:745
	void UpdateOutputContactSpies(OutputBuffer *, PotentialContactInterface *);

	// BrnDeformableObject.h:753
	void UpdateSpinningDetachment(InputBuffer *, OutputBuffer *, DetachedPartManager *, VecFloat, Random &);

	// BrnDeformableObject.h:762
	void DetachPart(InputBuffer *, OutputBuffer *, DetachedPartManager *, int32_t, int32_t, bool);

	// BrnDeformableObject.h:766
	void ApplyBreakingJointForces(PhysicalBodyPart *);

	// BrnDeformableObject.h:772
	void SendGlassUpdateEvents(int32_t, DeformationOutputInterface *, DeformationOutputInterfaceForEntityModules *);

	// BrnDeformableObject.h:775
	void UpdateDeformedBBox();

	// BrnDeformableObject.h:778
	void CalculateDriveTimeLimits();

	// BrnDeformableObject.h:781
	void UpdateIKSuspensionOffsets();

	// BrnDeformableObject.h:785
	void UpdateAbsorptionSet(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnDeformableObject.h:790
	bool UpdateGlassSmashedState(int32_t, VecFloat);

	// BrnDeformableObject.h:793
	void PrepareLocators();

	// BrnDeformableObject.h:797
	void UpdateLocators(DetachedPartManager *);

	// BrnDeformableObject.h:805
	void UpdateLocator(Matrix44Affine &, BrnPhysics::Deformation::ETagPointType &, const LocatorPointSpec *, const rw::math::vpu::Matrix44Affine &, DetachedPartManager *);

	// BrnDeformableObject.h:809
	void UpdateVelocity(VecFloat);

	// BrnDeformableObject.h:814
	bool ShouldDetachWheel(const TagPoint *);

	// BrnDeformableObject.h:818
	void ResetJointVelocities(DetachedPartManager *);

	// BrnDeformableObject.h:826
	void GetInitialCompressionScalesAndLimits(BrnPhysics::Deformation::DeformationResetType, VecFloat, Vector3Plus &, Vector3 &, Vector3 &);

	// BrnDeformableObject.h:832
	void RenderSensors(CgsDev::Debug3DImmediateRender *, int32_t) const;

}

