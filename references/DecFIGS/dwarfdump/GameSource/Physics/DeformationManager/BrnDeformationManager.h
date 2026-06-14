// Wheel.h:30
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnDeformationManager.h:57
		float32_t KF_PART_DYNAMIC_FRICTION;

		// BrnDeformationManager.h:58
		float32_t KF_PART_STATIC_FRICTION;

		// BrnDeformationManager.h:752
		const VecFloat KVF_PROJECTSPHERE_RADIUS_PADDING;

	}

}

// BrnDeformationManager.h:385
extern BrnPhysics::Deformation::DeformationDebugComponent mDebugComponent;

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnDeformationManager.h:57
		float32_t KF_PART_DYNAMIC_FRICTION;

		// BrnDeformationManager.h:58
		float32_t KF_PART_STATIC_FRICTION;

		// BrnDeformationManager.h:752
		const VecFloat KVF_PROJECTSPHERE_RADIUS_PADDING;

	}

}

// BrnDeformationManager.h:73
struct BrnPhysics::Deformation::DeformationManager {
private:
	// BrnDeformationManager.h:358
	Random mRandom;

	// BrnDeformationManager.h:359
	DeformationState mStateOutput;

	// BrnDeformationManager.h:360
	DetachedPartManager mDetachedPartManager;

	// BrnDeformationManager.h:361
	DetachedWheelManager mDetachedWheelManager;

	// BrnDeformationManager.h:362
	BitArray<28u> mModelsAdded;

	// BrnDeformationManager.h:363
	EntityId[28] maGlobalEntityIDs;

	// BrnDeformationManager.h:364
	RigidBodyId mWorldRigidBodyId;

	// BrnDeformationManager.h:365
	BrnPhysics::Deformation::DeformableObject * mpaModels;

	// BrnDeformationManager.h:366
	int32_t miNumUsedModels;

	// BrnDeformationManager.h:367
	int32_t miPlayerModelIndex;

	// BrnDeformationManager.h:370
	int8_t[8] ma8RaceCarToModelIndex;

	// BrnDeformationManager.h:371
	int8_t[20] ma8TrafficToModelIndex;

	// BrnDeformationManager.h:374
	int8_t[601] ma8GlobalTrafficToModelIndex;

	// BrnDeformationManager.h:376
	int32_t miLastBodyToHaveIKUpdate;

	// BrnDeformationManager.h:385
	extern BrnPhysics::Deformation::DeformationDebugComponent mDebugComponent;

	// BrnDeformationManager.h:389
	int32_t miTotalDeformationPerfMon;

	// BrnDeformationManager.h:390
	int32_t miPostSceneUpdatePerfMon;

	// BrnDeformationManager.h:391
	int32_t miUpdateSensorDisplPerfMon;

	// BrnDeformationManager.h:392
	int32_t miUpdatePerfMon;

	// BrnDeformationManager.h:393
	int32_t miUpdatePostPhysicsPerfMon;

	// BrnDeformationManager.h:394
	int32_t miPostPhysicsUpdateAddContactsToPenSolverPerfMon;

	// BrnDeformationManager.h:395
	int32_t miPostPhysicsUpdateSolvePenetrationPerfMon;

	// BrnDeformationManager.h:396
	int32_t miPostPhysicsUpdateReadTransformsFromPenSolverPerfMon;

	// BrnDeformationManager.h:397
	int32_t miPostPhysicsUpdateModelsPerfMon;

	// BrnDeformationManager.h:398
	int32_t miPostPhysicsUpdateDetachedPartsManPerfMon;

	// BrnDeformationManager.h:399
	int32_t miPostPhysicsProcessJointSpiesPerfMon;

	// BrnDeformationManager.h:400
	int32_t miUpdateIkAndDetachingPerfMon;

	// BrnDeformationManager.h:401
	int32_t miFixUpRaceCarTrafficContact;

	// BrnDeformationManager.h:403
	int32_t miUpdateModelsPerfMon;

	// BrnDeformationManager.h:404
	int32_t miUpdateDetachedPartsPerfMon;

	// BrnDeformationManager.h:405
	int32_t miUpdateSkinnedJointsPerfMon;

public:
	// BrnDeformationManager.h:80
	void Construct();

	// BrnDeformationManager.h:85
	bool Prepare(rw::IResourceAllocator *);

	// BrnDeformationManager.h:89
	bool Release();

	// BrnDeformationManager.h:93
	void Destruct();

	// BrnDeformationManager.h:100
	void PostSceneUpdate(InputBuffer *, DeformationInputInterface *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:104
	void UpdateSensorDisplacements(VecFloat);

	// BrnDeformationManager.h:114
	void Update(InputBuffer *, OutputBuffer *, const InputBuffer *, OutputBuffer *, PotentialContactInterface *, VecFloat, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnDeformationManager.h:120
	void ReadUpdatedBodies(const OutputBuffer::OutUpdateRigidBodyQueue *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:127
	void ReadPotentialContact(const PotentialContact &, ContactId, InputBuffer *);

	// BrnDeformationManager.h:134
	void ReadPotentialVehicleWorldContact(const PotentialContact &, ContactId, InputBuffer *);

	// BrnDeformationManager.h:142
	void UpdatePostPhysics(const OutputBuffer *, OutputBuffer *, ContactSpyData *, IOBufferStack *, const PotentialContactInterface *);

	// BrnDeformationManager.h:147
	void OutputData(DeformationOutputInterfaceForEntityModules *, DeformationOutputInterface *);

	// BrnDeformationManager.h:152
	void ResetDeformation(InputBuffer *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:156
	void SetWorldBodyId(RigidBodyId);

	// BrnDeformationManager.h:164
	void CreateDetachedPartContactEvent(PhysicalCarPartContact *, const OutContactSpy *, const PotentialContact *);

	// BrnDeformationManager.h:171
	void CreateDetachedWheelContactEvent(PhysicalCarPartContact *, const OutContactSpy *, const PotentialContact *);

	// BrnDeformationManager.h:176
	int32_t GetSweptSpheresForCar(EntityId, const SweptSphere **);

	// BrnDeformationManager.h:182
	int32_t GetSpheresForCar(EntityId, const Sphere **);

	// BrnDeformationManager.h:187
	void GetDeformedBBox(EntityId, CgsGeometric::Box *) const;

	// BrnDeformationManager.h:191
	bool IsUsingSweptSpheres(EntityId);

	// BrnDeformationManager.h:195
	bool IsFrozen(EntityId) const;

	// BrnDeformationManager.h:203
	void DoBodyPartWorldContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *, BrnPhysics::ContactGenList *, CollisionGenerator *, CgsMemory::SimpleDataStreamProducer *, LinearMalloc *) const;

	// BrnDeformationManager.h:209
	void AddRaceCarBodyPartPair(EntityId, VolumeInstanceId, PrimitivePairListBuilder *);

	// BrnDeformationManager.h:215
	void AddHingedBodyPartPairs(EntityId, EntityId, PrimitivePairListBuilder *);

	// BrnDeformationManager.h:221
	void AddRaceCarWheelPair(EntityId, VolumeInstanceId, PrimitivePairListBuilder *);

	// BrnDeformationManager.h:228
	void BridgeBodyPartCarContactsToSimulation(InputBuffer *, const InputBuffer *, PotentialContactInterface *);

	// BrnDeformationManager.h:234
	void BridgeDetachedWheelCarContactsToSimulation(InputBuffer *, const InputBuffer *, PotentialContactInterface *);

	// BrnDeformationManager.h:242
	void DoDetachedWheelWorldContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *, BrnPhysics::ContactGenList *, CollisionGenerator *, CgsMemory::SimpleDataStreamProducer *, LinearMalloc *) const;

	// BrnDeformationManager.h:247
	void SetupPartContact(const PotentialContact &, InAddPotentialContact &);

	// BrnDeformationManager.h:252
	void UpdateTriangleCache(InputBuffer_Update *);

	// BrnDeformationManager.h:258
	void AddBodyPartWorldResultsToContactQueue(const BrnPhysics::ContactGenList *, CollisionGenerator *, PotentialContactInterface *);

	// BrnDeformationManager.h:264
	void ProcessResetDeformationModelEvent(InputBuffer *, OutputBuffer::SceneInputInterface *, EntityId);

	// BrnDeformationManager.h:270
	void ProcessDebugResetDeformationModels(InputBuffer *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:278
	void FixUpVehicleContactByInterpolation(PotentialContact &, VolumeInstanceId, VolumeInstanceId);

	// BrnDeformationManager.h:285
	void FixUpVehicleContactWithBoxes(PotentialContact &, VolumeInstanceId, VolumeInstanceId);

	// BrnDeformationManager.h:292
	void FixUpVehicleContact(PotentialContact &, VolumeInstanceId, VolumeInstanceId);

	// BrnDeformationManager.h:297
	void SetPlayerRaceCarEntityId(EntityId);

	// BrnDeformationManager.h:301
	bool FixupBodyPartVehicleContact(PotentialContact *);

	// BrnDeformationManager.h:305
	bool FixupWheelVehicleContact(PotentialContact *);

	// BrnDeformationManager.h:309
	BrnPhysics::Deformation::DeformationDebugComponent * GetDebugComponent();

	// BrnDeformationManager.h:317
	void VerifyPartIndices();

	// BrnDeformationManager.h:323
	void ClearModelStoredContacts(EntityId);

	// BrnDeformationManager.h:327
	bool IsPartUsed(int32_t);

	// BrnDeformationManager.h:332
	bool IsWheelUsed(int32_t);

	// BrnDeformationManager.h:337
	const PhysicalBodyPart * GetPhysicalPart(int32_t);

	// BrnDeformationManager.h:342
	const PhysicalWheel * GetPhysicalWheel(int32_t);

	// BrnDeformationManager.h:347
	BrnPhysics::Deformation::DeformableObject * GetPlayerCarModel();

	// BrnDeformationManager.h:350
	bool IsPlayerDeformationModelActive();

	// BrnDeformationManager.h:383
	BrnPhysics::Deformation::DeformationDebugComponent & GetDebugComponentStatic();

private:
	// BrnDeformationManager.h:413
	void ProcessEvents(InputBuffer *, DeformationInputInterface *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:421
	void ProcessAddDeformationModelEvents(InputBuffer *, const DeformationInputInterface *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:428
	void ProcessRemoveDeformationModelEvents(InputBuffer *, const DeformationInputInterface *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:435
	void ProcessDeactivateDeformationModelEvents(InputBuffer *, const DeformationInputInterface *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:439
	void ProcessValidateDeformationModelEvents(const DeformationInputInterface *);

	// BrnDeformationManager.h:443
	int32_t FindModelIndexByEntityID(EntityId) const;

	// BrnDeformationManager.h:447
	int32_t FindModelIndexByGlobalEntityID(EntityId);

	// BrnDeformationManager.h:451
	int32_t FindModelIndexByPartID(RigidBodyId);

	// BrnDeformationManager.h:454
	void OutputSensorState(DeformationOutputInterface *);

	// BrnDeformationManager.h:462
	Vector3 ProjectSphereContactOntoBox(InEventTriangleCollisionSphereTest::SphereArg, Vector3, Vector3, Matrix44Affine, Vector3 *) const;

	// BrnDeformationManager.h:467
	void SolvePenetration(IOBufferStack *, const PotentialContactInterface *);

	// BrnDeformationManager.h:472
	void AddArticulatedJointContacts(PenetrationSolver *, const PotentialContactInterface *);

	// BrnDeformationManager.h:481
	bool GetInterpolatedContactPointAndNormal(BrnPhysics::Deformation::DeformableObject *, int32_t, Vector3, Vector3, Vector3 *, Vector3 *);

	// BrnDeformationManager.h:490
	void CalculateTangentPoints(Sphere, Sphere, Vector3, Vector3 *, Vector3 *, Vector3 *);

	// BrnDeformationManager.h:497
	Vector3 ProjectLineOntoPlane(Vector3, Vector3, Vector3, Vector3);

}

// BrnDeformationManager.h:73
struct BrnPhysics::Deformation::DeformationManager {
private:
	// BrnDeformationManager.h:358
	Random mRandom;

	// BrnDeformationManager.h:359
	DeformationState mStateOutput;

	// BrnDeformationManager.h:360
	DetachedPartManager mDetachedPartManager;

	// BrnDeformationManager.h:361
	DetachedWheelManager mDetachedWheelManager;

	// BrnDeformationManager.h:362
	BitArray<28u> mModelsAdded;

	// BrnDeformationManager.h:363
	EntityId[28] maGlobalEntityIDs;

	// BrnDeformationManager.h:364
	RigidBodyId mWorldRigidBodyId;

	// BrnDeformationManager.h:365
	BrnPhysics::Deformation::DeformableObject * mpaModels;

	// BrnDeformationManager.h:366
	int32_t miNumUsedModels;

	// BrnDeformationManager.h:367
	int32_t miPlayerModelIndex;

	// BrnDeformationManager.h:370
	int8_t[8] ma8RaceCarToModelIndex;

	// BrnDeformationManager.h:371
	int8_t[20] ma8TrafficToModelIndex;

	// BrnDeformationManager.h:374
	int8_t[601] ma8GlobalTrafficToModelIndex;

	// BrnDeformationManager.h:376
	int32_t miLastBodyToHaveIKUpdate;

	// BrnDeformationManager.h:385
	extern BrnPhysics::Deformation::DeformationDebugComponent mDebugComponent;

	// BrnDeformationManager.h:389
	int32_t miTotalDeformationPerfMon;

	// BrnDeformationManager.h:390
	int32_t miPostSceneUpdatePerfMon;

	// BrnDeformationManager.h:391
	int32_t miUpdateSensorDisplPerfMon;

	// BrnDeformationManager.h:392
	int32_t miUpdatePerfMon;

	// BrnDeformationManager.h:393
	int32_t miUpdatePostPhysicsPerfMon;

	// BrnDeformationManager.h:394
	int32_t miPostPhysicsUpdateAddContactsToPenSolverPerfMon;

	// BrnDeformationManager.h:395
	int32_t miPostPhysicsUpdateSolvePenetrationPerfMon;

	// BrnDeformationManager.h:396
	int32_t miPostPhysicsUpdateReadTransformsFromPenSolverPerfMon;

	// BrnDeformationManager.h:397
	int32_t miPostPhysicsUpdateModelsPerfMon;

	// BrnDeformationManager.h:398
	int32_t miPostPhysicsUpdateDetachedPartsManPerfMon;

	// BrnDeformationManager.h:399
	int32_t miPostPhysicsProcessJointSpiesPerfMon;

	// BrnDeformationManager.h:400
	int32_t miUpdateIkAndDetachingPerfMon;

	// BrnDeformationManager.h:401
	int32_t miFixUpRaceCarTrafficContact;

	// BrnDeformationManager.h:403
	int32_t miUpdateModelsPerfMon;

	// BrnDeformationManager.h:404
	int32_t miUpdateDetachedPartsPerfMon;

	// BrnDeformationManager.h:405
	int32_t miUpdateSkinnedJointsPerfMon;

public:
	// BrnDeformationManager.h:80
	void Construct();

	// BrnDeformationManager.h:85
	// Declaration
	bool Prepare(rw::IResourceAllocator *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDeformationManager.cpp:154
		using namespace CgsDev::Message;

	}

	// BrnDeformationManager.h:89
	bool Release();

	// BrnDeformationManager.h:93
	void Destruct();

	// BrnDeformationManager.h:100
	void PostSceneUpdate(InputBuffer *, DeformationInputInterface *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:104
	void UpdateSensorDisplacements(VecFloat);

	// BrnDeformationManager.h:114
	void Update(InputBuffer *, OutputBuffer *, const InputBuffer *, OutputBuffer *, PotentialContactInterface *, VecFloat, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnDeformationManager.h:120
	void ReadUpdatedBodies(const OutputBuffer::OutUpdateRigidBodyQueue *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:127
	void ReadPotentialContact(const PotentialContact &, ContactId, InputBuffer *);

	// BrnDeformationManager.h:134
	void ReadPotentialVehicleWorldContact(const PotentialContact &, ContactId, InputBuffer *);

	// BrnDeformationManager.h:142
	void UpdatePostPhysics(const OutputBuffer *, OutputBuffer *, ContactSpyData *, IOBufferStack *, const PotentialContactInterface *);

	// BrnDeformationManager.h:147
	void OutputData(DeformationOutputInterfaceForEntityModules *, DeformationOutputInterface *);

	// BrnDeformationManager.h:152
	void ResetDeformation(InputBuffer *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:156
	void SetWorldBodyId(RigidBodyId);

	// BrnDeformationManager.h:164
	void CreateDetachedPartContactEvent(PhysicalCarPartContact *, const OutContactSpy *, const PotentialContact *);

	// BrnDeformationManager.h:171
	void CreateDetachedWheelContactEvent(PhysicalCarPartContact *, const OutContactSpy *, const PotentialContact *);

	// BrnDeformationManager.h:176
	int32_t GetSweptSpheresForCar(EntityId, const SweptSphere **);

	// BrnDeformationManager.h:182
	int32_t GetSpheresForCar(EntityId, const Sphere **);

	// BrnDeformationManager.h:187
	void GetDeformedBBox(EntityId, CgsGeometric::Box *) const;

	// BrnDeformationManager.h:191
	bool IsUsingSweptSpheres(EntityId);

	// BrnDeformationManager.h:195
	bool IsFrozen(EntityId) const;

	// BrnDeformationManager.h:203
	void DoBodyPartWorldContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *, BrnPhysics::ContactGenList *, CollisionGenerator *, CgsMemory::SimpleDataStreamProducer *, LinearMalloc *) const;

	// BrnDeformationManager.h:209
	void AddRaceCarBodyPartPair(EntityId, VolumeInstanceId, PrimitivePairListBuilder *);

	// BrnDeformationManager.h:215
	void AddHingedBodyPartPairs(EntityId, EntityId, PrimitivePairListBuilder *);

	// BrnDeformationManager.h:221
	void AddRaceCarWheelPair(EntityId, VolumeInstanceId, PrimitivePairListBuilder *);

	// BrnDeformationManager.h:228
	void BridgeBodyPartCarContactsToSimulation(InputBuffer *, const InputBuffer *, PotentialContactInterface *);

	// BrnDeformationManager.h:234
	void BridgeDetachedWheelCarContactsToSimulation(InputBuffer *, const InputBuffer *, PotentialContactInterface *);

	// BrnDeformationManager.h:242
	void DoDetachedWheelWorldContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *, BrnPhysics::ContactGenList *, CollisionGenerator *, CgsMemory::SimpleDataStreamProducer *, LinearMalloc *) const;

	// BrnDeformationManager.h:247
	void SetupPartContact(const PotentialContact &, InAddPotentialContact &);

	// BrnDeformationManager.h:252
	// Declaration
	void UpdateTriangleCache(InputBuffer_Update *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDeformationManager.cpp:2075
		using namespace CgsSceneManager::SceneManagerIO;

	}

	// BrnDeformationManager.h:258
	void AddBodyPartWorldResultsToContactQueue(const BrnPhysics::ContactGenList *, CollisionGenerator *, PotentialContactInterface *);

	// BrnDeformationManager.h:264
	void ProcessResetDeformationModelEvent(InputBuffer *, OutputBuffer::SceneInputInterface *, EntityId);

	// BrnDeformationManager.h:270
	void ProcessDebugResetDeformationModels(InputBuffer *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:278
	void FixUpVehicleContactByInterpolation(PotentialContact &, VolumeInstanceId, VolumeInstanceId);

	// BrnDeformationManager.h:285
	void FixUpVehicleContactWithBoxes(PotentialContact &, VolumeInstanceId, VolumeInstanceId);

	// BrnDeformationManager.h:292
	void FixUpVehicleContact(PotentialContact &, VolumeInstanceId, VolumeInstanceId);

	// BrnDeformationManager.h:297
	void SetPlayerRaceCarEntityId(EntityId);

	// BrnDeformationManager.h:301
	bool FixupBodyPartVehicleContact(PotentialContact *);

	// BrnDeformationManager.h:305
	bool FixupWheelVehicleContact(PotentialContact *);

	// BrnDeformationManager.h:309
	BrnPhysics::Deformation::DeformationDebugComponent * GetDebugComponent();

	// BrnDeformationManager.h:317
	void VerifyPartIndices();

	// BrnDeformationManager.h:323
	void ClearModelStoredContacts(EntityId);

	// BrnDeformationManager.h:327
	bool IsPartUsed(int32_t);

	// BrnDeformationManager.h:332
	bool IsWheelUsed(int32_t);

	// BrnDeformationManager.h:337
	const PhysicalBodyPart * GetPhysicalPart(int32_t);

	// BrnDeformationManager.h:342
	const PhysicalWheel * GetPhysicalWheel(int32_t);

	// BrnDeformationManager.h:347
	BrnPhysics::Deformation::DeformableObject * GetPlayerCarModel();

	// BrnDeformationManager.h:350
	bool IsPlayerDeformationModelActive();

	// BrnDeformationManager.h:383
	BrnPhysics::Deformation::DeformationDebugComponent & GetDebugComponentStatic();

private:
	// BrnDeformationManager.h:413
	void ProcessEvents(InputBuffer *, DeformationInputInterface *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:421
	void ProcessAddDeformationModelEvents(InputBuffer *, const DeformationInputInterface *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:428
	void ProcessRemoveDeformationModelEvents(InputBuffer *, const DeformationInputInterface *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:435
	void ProcessDeactivateDeformationModelEvents(InputBuffer *, const DeformationInputInterface *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:439
	void ProcessValidateDeformationModelEvents(const DeformationInputInterface *);

	// BrnDeformationManager.h:443
	int32_t FindModelIndexByEntityID(EntityId) const;

	// BrnDeformationManager.h:447
	int32_t FindModelIndexByGlobalEntityID(EntityId);

	// BrnDeformationManager.h:451
	int32_t FindModelIndexByPartID(RigidBodyId);

	// BrnDeformationManager.h:454
	void OutputSensorState(DeformationOutputInterface *);

	// BrnDeformationManager.h:462
	Vector3 ProjectSphereContactOntoBox(InEventTriangleCollisionSphereTest::SphereArg, Vector3, Vector3, Matrix44Affine, Vector3 *) const;

	// BrnDeformationManager.h:467
	void SolvePenetration(IOBufferStack *, const PotentialContactInterface *);

	// BrnDeformationManager.h:472
	void AddArticulatedJointContacts(PenetrationSolver *, const PotentialContactInterface *);

	// BrnDeformationManager.h:481
	bool GetInterpolatedContactPointAndNormal(BrnPhysics::Deformation::DeformableObject *, int32_t, Vector3, Vector3, Vector3 *, Vector3 *);

	// BrnDeformationManager.h:490
	void CalculateTangentPoints(Sphere, Sphere, Vector3, Vector3 *, Vector3 *, Vector3 *);

	// BrnDeformationManager.h:497
	Vector3 ProjectLineOntoPlane(Vector3, Vector3, Vector3, Vector3);

}

// BrnDeformationManager.h:73
struct BrnPhysics::Deformation::DeformationManager {
private:
	// BrnDeformationManager.h:358
	Random mRandom;

	// BrnDeformationManager.h:359
	DeformationState mStateOutput;

	// BrnDeformationManager.h:360
	DetachedPartManager mDetachedPartManager;

	// BrnDeformationManager.h:361
	DetachedWheelManager mDetachedWheelManager;

	// BrnDeformationManager.h:362
	BitArray<28u> mModelsAdded;

	// BrnDeformationManager.h:363
	EntityId[28] maGlobalEntityIDs;

	// BrnDeformationManager.h:364
	RigidBodyId mWorldRigidBodyId;

	// BrnDeformationManager.h:365
	BrnPhysics::Deformation::DeformableObject * mpaModels;

	// BrnDeformationManager.h:366
	int32_t miNumUsedModels;

	// BrnDeformationManager.h:367
	int32_t miPlayerModelIndex;

	// BrnDeformationManager.h:370
	int8_t[8] ma8RaceCarToModelIndex;

	// BrnDeformationManager.h:371
	int8_t[20] ma8TrafficToModelIndex;

	// BrnDeformationManager.h:374
	int8_t[601] ma8GlobalTrafficToModelIndex;

	// BrnDeformationManager.h:376
	int32_t miLastBodyToHaveIKUpdate;

	// BrnDeformationManager.h:385
	extern BrnPhysics::Deformation::DeformationDebugComponent mDebugComponent;

	// BrnDeformationManager.h:389
	int32_t miTotalDeformationPerfMon;

	// BrnDeformationManager.h:390
	int32_t miPostSceneUpdatePerfMon;

	// BrnDeformationManager.h:391
	int32_t miUpdateSensorDisplPerfMon;

	// BrnDeformationManager.h:392
	int32_t miUpdatePerfMon;

	// BrnDeformationManager.h:393
	int32_t miUpdatePostPhysicsPerfMon;

	// BrnDeformationManager.h:394
	int32_t miPostPhysicsUpdateAddContactsToPenSolverPerfMon;

	// BrnDeformationManager.h:395
	int32_t miPostPhysicsUpdateSolvePenetrationPerfMon;

	// BrnDeformationManager.h:396
	int32_t miPostPhysicsUpdateReadTransformsFromPenSolverPerfMon;

	// BrnDeformationManager.h:397
	int32_t miPostPhysicsUpdateModelsPerfMon;

	// BrnDeformationManager.h:398
	int32_t miPostPhysicsUpdateDetachedPartsManPerfMon;

	// BrnDeformationManager.h:399
	int32_t miPostPhysicsProcessJointSpiesPerfMon;

	// BrnDeformationManager.h:400
	int32_t miUpdateIkAndDetachingPerfMon;

	// BrnDeformationManager.h:401
	int32_t miFixUpRaceCarTrafficContact;

	// BrnDeformationManager.h:403
	int32_t miUpdateModelsPerfMon;

	// BrnDeformationManager.h:404
	int32_t miUpdateDetachedPartsPerfMon;

	// BrnDeformationManager.h:405
	int32_t miUpdateSkinnedJointsPerfMon;

public:
	// BrnDeformationManager.h:80
	void Construct();

	// BrnDeformationManager.h:85
	bool Prepare(rw::IResourceAllocator *);

	// BrnDeformationManager.h:89
	bool Release();

	// BrnDeformationManager.h:93
	void Destruct();

	// BrnDeformationManager.h:100
	void PostSceneUpdate(InputBuffer *, DeformationInputInterface *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:104
	void UpdateSensorDisplacements(VecFloat);

	// BrnDeformationManager.h:114
	void Update(InputBuffer *, OutputBuffer *, const InputBuffer *, OutputBuffer *, PotentialContactInterface *, VecFloat, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnDeformationManager.h:120
	void ReadUpdatedBodies(const OutputBuffer::OutUpdateRigidBodyQueue *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:127
	void ReadPotentialContact(const PotentialContact &, ContactId, InputBuffer *);

	// BrnDeformationManager.h:134
	void ReadPotentialVehicleWorldContact(const PotentialContact &, ContactId, InputBuffer *);

	// BrnDeformationManager.h:142
	void UpdatePostPhysics(const OutputBuffer *, OutputBuffer *, ContactSpyData *, IOBufferStack *, const PotentialContactInterface *);

	// BrnDeformationManager.h:147
	void OutputData(DeformationOutputInterfaceForEntityModules *, DeformationOutputInterface *);

	// BrnDeformationManager.h:152
	void ResetDeformation(InputBuffer *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:156
	void SetWorldBodyId(RigidBodyId);

	// BrnDeformationManager.h:164
	void CreateDetachedPartContactEvent(PhysicalCarPartContact *, const OutContactSpy *, const PotentialContact *);

	// BrnDeformationManager.h:171
	void CreateDetachedWheelContactEvent(PhysicalCarPartContact *, const OutContactSpy *, const PotentialContact *);

	// BrnDeformationManager.h:176
	int32_t GetSweptSpheresForCar(EntityId, const SweptSphere **);

	// BrnDeformationManager.h:182
	int32_t GetSpheresForCar(EntityId, const Sphere **);

	// BrnDeformationManager.h:187
	void GetDeformedBBox(EntityId, Box *) const;

	// BrnDeformationManager.h:191
	bool IsUsingSweptSpheres(EntityId);

	// BrnDeformationManager.h:195
	bool IsFrozen(EntityId) const;

	// BrnDeformationManager.h:203
	void DoBodyPartWorldContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *, BrnPhysics::ContactGenList *, CollisionGenerator *, CgsMemory::SimpleDataStreamProducer *, LinearMalloc *) const;

	// BrnDeformationManager.h:209
	void AddRaceCarBodyPartPair(EntityId, VolumeInstanceId, PrimitivePairListBuilder *);

	// BrnDeformationManager.h:215
	void AddHingedBodyPartPairs(EntityId, EntityId, PrimitivePairListBuilder *);

	// BrnDeformationManager.h:221
	void AddRaceCarWheelPair(EntityId, VolumeInstanceId, PrimitivePairListBuilder *);

	// BrnDeformationManager.h:228
	void BridgeBodyPartCarContactsToSimulation(InputBuffer *, const InputBuffer *, PotentialContactInterface *);

	// BrnDeformationManager.h:234
	void BridgeDetachedWheelCarContactsToSimulation(InputBuffer *, const InputBuffer *, PotentialContactInterface *);

	// BrnDeformationManager.h:242
	void DoDetachedWheelWorldContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *, BrnPhysics::ContactGenList *, CollisionGenerator *, CgsMemory::SimpleDataStreamProducer *, LinearMalloc *) const;

	// BrnDeformationManager.h:247
	void SetupPartContact(const PotentialContact &, InAddPotentialContact &);

	// BrnDeformationManager.h:252
	void UpdateTriangleCache(InputBuffer_Update *);

	// BrnDeformationManager.h:258
	void AddBodyPartWorldResultsToContactQueue(const BrnPhysics::ContactGenList *, CollisionGenerator *, PotentialContactInterface *);

	// BrnDeformationManager.h:264
	void ProcessResetDeformationModelEvent(InputBuffer *, OutputBuffer::SceneInputInterface *, EntityId);

	// BrnDeformationManager.h:270
	void ProcessDebugResetDeformationModels(InputBuffer *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:278
	void FixUpVehicleContactByInterpolation(PotentialContact &, VolumeInstanceId, VolumeInstanceId);

	// BrnDeformationManager.h:285
	void FixUpVehicleContactWithBoxes(PotentialContact &, VolumeInstanceId, VolumeInstanceId);

	// BrnDeformationManager.h:292
	void FixUpVehicleContact(PotentialContact &, VolumeInstanceId, VolumeInstanceId);

	// BrnDeformationManager.h:297
	void SetPlayerRaceCarEntityId(EntityId);

	// BrnDeformationManager.h:301
	bool FixupBodyPartVehicleContact(PotentialContact *);

	// BrnDeformationManager.h:305
	bool FixupWheelVehicleContact(PotentialContact *);

	// BrnDeformationManager.h:309
	BrnPhysics::Deformation::DeformationDebugComponent * GetDebugComponent();

	// BrnDeformationManager.h:317
	void VerifyPartIndices();

	// BrnDeformationManager.h:323
	void ClearModelStoredContacts(EntityId);

	// BrnDeformationManager.h:327
	bool IsPartUsed(int32_t);

	// BrnDeformationManager.h:332
	bool IsWheelUsed(int32_t);

	// BrnDeformationManager.h:337
	const PhysicalBodyPart * GetPhysicalPart(int32_t);

	// BrnDeformationManager.h:342
	const PhysicalWheel * GetPhysicalWheel(int32_t);

	// BrnDeformationManager.h:347
	BrnPhysics::Deformation::DeformableObject * GetPlayerCarModel();

	// BrnDeformationManager.h:350
	bool IsPlayerDeformationModelActive();

	// BrnDeformationManager.h:383
	BrnPhysics::Deformation::DeformationDebugComponent & GetDebugComponentStatic();

private:
	// BrnDeformationManager.h:413
	void ProcessEvents(InputBuffer *, DeformationInputInterface *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:421
	void ProcessAddDeformationModelEvents(InputBuffer *, const DeformationInputInterface *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:428
	void ProcessRemoveDeformationModelEvents(InputBuffer *, const DeformationInputInterface *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:435
	void ProcessDeactivateDeformationModelEvents(InputBuffer *, const DeformationInputInterface *, OutputBuffer::SceneInputInterface *);

	// BrnDeformationManager.h:439
	void ProcessValidateDeformationModelEvents(const DeformationInputInterface *);

	// BrnDeformationManager.h:443
	int32_t FindModelIndexByEntityID(EntityId) const;

	// BrnDeformationManager.h:447
	int32_t FindModelIndexByGlobalEntityID(EntityId);

	// BrnDeformationManager.h:451
	int32_t FindModelIndexByPartID(RigidBodyId);

	// BrnDeformationManager.h:454
	void OutputSensorState(DeformationOutputInterface *);

	// BrnDeformationManager.h:462
	Vector3 ProjectSphereContactOntoBox(SphereArg, Vector3, Vector3, Matrix44Affine, Vector3 *) const;

	// BrnDeformationManager.h:467
	void SolvePenetration(IOBufferStack *, const PotentialContactInterface *);

	// BrnDeformationManager.h:472
	void AddArticulatedJointContacts(PenetrationSolver *, const PotentialContactInterface *);

	// BrnDeformationManager.h:481
	bool GetInterpolatedContactPointAndNormal(BrnPhysics::Deformation::DeformableObject *, int32_t, Vector3, Vector3, Vector3 *, Vector3 *);

	// BrnDeformationManager.h:490
	void CalculateTangentPoints(Sphere, Sphere, Vector3, Vector3 *, Vector3 *, Vector3 *);

	// BrnDeformationManager.h:497
	Vector3 ProjectLineOntoPlane(Vector3, Vector3, Vector3, Vector3);

}

