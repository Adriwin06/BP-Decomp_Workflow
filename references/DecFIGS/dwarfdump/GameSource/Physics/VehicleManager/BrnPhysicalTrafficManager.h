// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// BrnPhysicalTrafficManager.h:55
		const VecFloat KVF_RESET_ON_WATER_HEIGHT;

	}

}

// BrnPhysicalTrafficManager.h:428
extern const uint8_t KU8_INVALID_MAP = 127;

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnPhysicalTrafficManager.h:55
		const VecFloat KVF_RESET_ON_WATER_HEIGHT;

	}

}

// BrnPhysicalTrafficManager.h:78
struct BrnPhysics::Vehicle::PhysicalTrafficManager {
private:
	// BrnPhysicalTrafficManager.h:396
	BrnPhysics::Vehicle::TrafficPhysics[20] maFullTrafficPhysics;

	// BrnPhysicalTrafficManager.h:397
	EntityId[20] maTrafficEntityIDs;

	// BrnPhysicalTrafficManager.h:398
	ResourceHandle[20] maTrafficCarModelHandles;

	// BrnPhysicalTrafficManager.h:400
	VehicleDriver * mpaTrafficDrivers;

	// BrnPhysicalTrafficManager.h:401
	PhysicalTrafficVehicle * mpaTrafficVehicles;

	// BrnPhysicalTrafficManager.h:402
	BrnPhysics::Vehicle::SimpleVehiclePhysics * mpaSimpleVehiclePhysics;

	// BrnPhysicalTrafficManager.h:405
	ArticulatedJointCreateBuffer * mpArticulatedJointCreateBuffer;

	// BrnPhysicalTrafficManager.h:406
	ArticulatedJointPool mArticulatedJointPool;

	// BrnPhysicalTrafficManager.h:407
	float32_t mfJointSwingBreakVelocity;

	// BrnPhysicalTrafficManager.h:408
	float32_t mfJointTwistBreakVelocity;

	// BrnPhysicalTrafficManager.h:409
	float32_t mfJointLinearBreakMph;

	// BrnPhysicalTrafficManager.h:410
	bool mbAllowArticulatedJointBreaking;

	// Unknown accessibility
	// BrnPhysicalTrafficManager.h:62
	typedef Array<CgsSceneManager::EntityId,20u> RecycledTrafficIdArray;

	// BrnPhysicalTrafficManager.h:413
	PhysicalTrafficManager::RecycledTrafficIdArray maRecycledTrafficThisFrame;

	// Unknown accessibility
	// BrnPhysicalTrafficManager.h:64
	typedef BitArray<20u> TotalPhysicalTrafficBitArray;

	// BrnPhysicalTrafficManager.h:415
	PhysicalTrafficManager::TotalPhysicalTrafficBitArray mUsedTrafficVehicles;

	// Unknown accessibility
	// BrnPhysicalTrafficManager.h:65
	typedef BitArray<20u> FullyPhysicalTrafficBitArray;

	// BrnPhysicalTrafficManager.h:416
	PhysicalTrafficManager::FullyPhysicalTrafficBitArray mUsedFullTrafficPhysics;

	// Unknown accessibility
	// BrnPhysicalTrafficManager.h:66
	typedef BitArray<1u> SimpleTrafficBitArray;

	// BrnPhysicalTrafficManager.h:417
	PhysicalTrafficManager::SimpleTrafficBitArray mUsedSimpleVehiclePhysics;

	// BrnPhysicalTrafficManager.h:419
	PhysicalTrafficManager::TotalPhysicalTrafficBitArray mPotentialTrafficVehicles;

	// BrnPhysicalTrafficManager.h:420
	PhysicalTrafficManager::TotalPhysicalTrafficBitArray mTrafficDeformationModelsActive;

	// BrnPhysicalTrafficManager.h:421
	PhysicalTrafficManager::TotalPhysicalTrafficBitArray mTestedTrafficVehicles;

	// BrnPhysicalTrafficManager.h:422
	PhysicalTrafficManager::TotalPhysicalTrafficBitArray mAddedTrafficVehicles;

	// BrnPhysicalTrafficManager.h:423
	PhysicalTrafficManager::TotalPhysicalTrafficBitArray mRemovedTrafficVehicles;

	// BrnPhysicalTrafficManager.h:424
	PhysicalTrafficManager::TotalPhysicalTrafficBitArray mMadeSimpleTrafficVehicles;

	// BrnPhysicalTrafficManager.h:425
	EventQueue<int8_t,50> mUnusedPotentialTrafficQueue;

	// BrnPhysicalTrafficManager.h:428
	extern const uint8_t KU8_INVALID_MAP = 127;

	// BrnPhysicalTrafficManager.h:429
	uint8_t[601] mu8GlobalToPhysicalEntityIndexMap;

	// BrnPhysicalTrafficManager.h:432
	VecFloat[20] mavfLowestPointWorldSpace;

	// BrnPhysicalTrafficManager.h:435
	BrnPhysics::Vehicle::PhysicalTrafficManagerDebugComponent mDebugComponent;

public:
	// BrnPhysicalTrafficManager.h:86
	void Construct();

	// BrnPhysicalTrafficManager.h:90
	bool Prepare(rw::LinearResourceAllocator *);

	// BrnPhysicalTrafficManager.h:94
	bool PrepareTriangleCache(InputBuffer_Update *);

	// BrnPhysicalTrafficManager.h:97
	bool Release();

	// BrnPhysicalTrafficManager.h:100
	void Destruct();

	// BrnPhysicalTrafficManager.h:116
	void ProcessTrafficMaintenanceEvents(IOBufferStack *, IOBufferStack *, const VehicleInputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *, BrnPhysics::Vehicle::RaceCarPhysics *, VehicleDriver *, BitArray<8u> *);

	// BrnPhysicalTrafficManager.h:124
	void ProcessTrafficEvents(const VehicleInputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *);

	// BrnPhysicalTrafficManager.h:128
	void UpdateTriangleCache(InputBuffer_Update *);

	// BrnPhysicalTrafficManager.h:137
	void UpdateTrafficPhysics(float32_t, float32_t, const rw::math::vpu::Matrix44Affine *, bool, bool);

	// BrnPhysicalTrafficManager.h:144
	void PassNearbyCrashingTrafficIdsToRaceCarModule(VehicleManagerOutputInterface *, Vector3);

	// BrnPhysicalTrafficManager.h:150
	void UpdateTrafficDriver(const BrnTrafficDriverControls *, BitArray<8u> &);

	// BrnPhysicalTrafficManager.h:155
	// Declaration
	void GetUpdatedVehicleBodies(OutUpdatedExternalBodyQueue *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleQueues.h:35
		typedef CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,60> OutUpdatedExternalBodyQueue;

	}

	// BrnPhysicalTrafficManager.h:161
	void ReadUpdatedBodies(const OutputBuffer::OutUpdateRigidBodyQueue *, VecFloat);

	// BrnPhysicalTrafficManager.h:165
	void DisposeOfNonCrashingTraffic();

	// BrnPhysicalTrafficManager.h:174
	void SetTrafficVehicleCrashing(EntityId, EntityId, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *);

	// BrnPhysicalTrafficManager.h:179
	void SetTrafficVehicleNotCrashing(EntityId);

	// BrnPhysicalTrafficManager.h:190
	void SetTrafficVehicleChecked(EntityId, EntityId, const BrnPhysics::Vehicle::RaceCarPhysics *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *, Vector3);

	// BrnPhysicalTrafficManager.h:202
	void SetTrafficVehicleSlammed(EntityId, EntityId, const BrnPhysics::Vehicle::SimpleVehiclePhysics *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *, Vector3, VecFloat);

	// BrnPhysicalTrafficManager.h:207
	void WriteOutVehicleStats(VehicleOutputInterface *) const;

	// BrnPhysicalTrafficManager.h:213
	void UpdateTrafficPhysicsPostSimulation(const OutputBuffer *, float32_t);

	// BrnPhysicalTrafficManager.h:218
	void ProcessAddAirRamEvent(const CreateAirRamEvent *);

	// BrnPhysicalTrafficManager.h:228
	void AddAirRam(uint16_t, uint32_t, float32_t, float32_t, Vector3, Vector3, float32_t);

	// BrnPhysicalTrafficManager.h:233
	EntityId GetGlobalEntityIDFromPhysicsEntityID(EntityId) const;

	// BrnPhysicalTrafficManager.h:238
	EntityId GetPhysicsEntityIDFromGlobalEntityID(EntityId) const;

	// BrnPhysicalTrafficManager.h:243
	EntityId GetGlobalTrafficEntityId(uint16_t) const;

	// BrnPhysicalTrafficManager.h:248
	void AddArticulatedJointContacts(PotentialContactInterface *);

	// BrnPhysicalTrafficManager.h:255
	void ResetAboveGroundTestResults();

	// BrnPhysicalTrafficManager.h:260
	const PhysicalTrafficVehicle * GetTrafficVehicle(int32_t) const;

	// BrnPhysicalTrafficManager.h:265
	PhysicalTrafficVehicle * GetTrafficVehicle(int32_t);

	// BrnPhysicalTrafficManager.h:270
	VehicleDriver * GetTrafficDriver(int32_t);

	// BrnPhysicalTrafficManager.h:275
	bool IsTrafficVehicleCrashed(uint16_t) const;

	// BrnPhysicalTrafficManager.h:280
	EntityId GetEntityId(RigidBodyId);

	// BrnPhysicalTrafficManager.h:287
	void AddTrafficTractionPoint(uint8_t, uint8_t, const OutEventLineTestNearestResult &);

	// BrnPhysicalTrafficManager.h:293
	void SetAboveGroundTestResult(uint8_t, const OutEventLineTestNearestResult &);

	// BrnPhysicalTrafficManager.h:298
	bool IsTrafficVehiclePhysical(EntityId);

	// BrnPhysicalTrafficManager.h:303
	bool GetPhysicsEntityIDFromGlobalEntityID_Safe(EntityId, EntityId *) const;

	// BrnPhysicalTrafficManager.h:307
	void SetRammed(uint16_t);

	// BrnPhysicalTrafficManager.h:313
	void DoTractionLineTestsForFullyPhysicalTraffic(IOBufferStack *, const VehicleInputInterface *);

	// BrnPhysicalTrafficManager.h:319
	void DoTractionLineTestsForSimpleTraffic(IOBufferStack *, const VehicleInputInterface *);

	// BrnPhysicalTrafficManager.h:326
	int32_t AddTrafficTractionLineTests(CollisionGenerator *, CgsMemory::SimpleDataStreamProducer *, const VehicleInputInterface::InTriangleCacheInterface *);

	// BrnPhysicalTrafficManager.h:331
	void ReadTrafficTractionLineTestResults(SimpleDataStreamResultIterator &);

	// BrnPhysicalTrafficManager.h:334
	const PhysicalTrafficManager::TotalPhysicalTrafficBitArray * GetUsedTrafficVehiclesArray();

	// BrnPhysicalTrafficManager.h:341
	bool ValidateTrafficContact(PotentialContact *, const VehicleInputInterface::InTriangleCacheInterface *, float32_t);

	// BrnPhysicalTrafficManager.h:345
	bool ValidateAndFixUpTrafficTrafficContact(PotentialContact *) const;

	// BrnPhysicalTrafficManager.h:351
	void AllocateInternalBuffers(IOBufferStack *, IOBufferStack *);

	// BrnPhysicalTrafficManager.h:357
	void DeallocateInternalBuffers(IOBufferStack *, IOBufferStack *);

	// BrnPhysicalTrafficManager.h:362
	void BridgeArticulatedJointRequestsToSim(VehicleOutputRequestInterface *);

	// BrnPhysicalTrafficManager.h:366
	BrnPhysics::Vehicle::SimpleVehiclePhysics * GetVehiclePhysics(EntityId);

	// BrnPhysicalTrafficManager.h:371
	EntityId GetPhysicsEntityId(int32_t) const;

	// BrnPhysicalTrafficManager.h:376
	bool IsTrafficVehicleSimple(EntityId) const;

	// BrnPhysicalTrafficManager.h:386
	void TestForNearMissFreakOut(PotentialContact, EntityId, EntityId, const BrnPhysics::Vehicle::RaceCarPhysics *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *);

	// BrnPhysicalTrafficManager.h:391
	void ClearSnappedNetworkTrafficContacts(DeformationManager *);

private:
	// BrnPhysicalTrafficManager.h:445
	void RemoveTrafficVehicle(uint8_t, VehicleOutputRequestInterface *, DeformationInputInterface *, bool);

	// BrnPhysicalTrafficManager.h:451
	void PhysicallyCrashTrafficCar(uint16_t, DeformationInputInterface *);

	// BrnPhysicalTrafficManager.h:457
	void PhysicallyUncrashTrafficCar(uint16_t, DeformationInputInterface *);

	// BrnPhysicalTrafficManager.h:463
	void PreparePhysicsForNewTrafficVehicle(const CreatePhysicalTrafficEvent &, int32_t);

	// BrnPhysicalTrafficManager.h:475
	float32_t GetTrafficInterest(const PhysicalTrafficVehicle *, BrnPhysics::Vehicle::RaceCarPhysics *, VehicleDriver *, BitArray<8u> *);

	// BrnPhysicalTrafficManager.h:486
	int32_t GetFreeTrafficVehicleWithPhysics(VehicleManagerOutputInterface *, VehicleOutputRequestInterface *, DeformationInputInterface *, BrnPhysics::Vehicle::RaceCarPhysics *, VehicleDriver *, BitArray<8u> *, const PhysicalTrafficManager::TotalPhysicalTrafficBitArray *);

	// BrnPhysicalTrafficManager.h:523
	int32_t GetLeastInterestingFullyPhysicalVehicle(BrnPhysics::Vehicle::RaceCarPhysics *, VehicleDriver *, BitArray<8u> *, const PhysicalTrafficManager::TotalPhysicalTrafficBitArray *);

	// BrnPhysicalTrafficManager.h:532
	void RecycleTrafficVehicle(int32_t, VehicleManagerOutputInterface *, VehicleOutputRequestInterface *, DeformationInputInterface *);

	// BrnPhysicalTrafficManager.h:540
	void SendTrafficVehicleRecycledEvents(int32_t, VehicleManagerOutputInterface *, VehicleOutputRequestInterface *, DeformationInputInterface *);

	// BrnPhysicalTrafficManager.h:553
	void ProcessCreateEvents(const VehicleInputInterface *, VehicleManagerOutputInterface *, VehicleOutputRequestInterface *, DeformationInputInterface *, BrnPhysics::Vehicle::RaceCarPhysics *, VehicleDriver *, BitArray<8u> *);

	// BrnPhysicalTrafficManager.h:560
	void ProcessRemoveEvents(const VehicleInputInterface::RemoveTrafficEventQueue *, VehicleOutputRequestInterface *, DeformationInputInterface *);

	// BrnPhysicalTrafficManager.h:571
	void ProcessCreateNonArticulatedTraffic(const VehicleInputInterface::CreateTrafficEventQueue *, VehicleManagerOutputInterface *, VehicleOutputRequestInterface *, DeformationInputInterface *, BrnPhysics::Vehicle::RaceCarPhysics *, VehicleDriver *, BitArray<8u> *);

	// BrnPhysicalTrafficManager.h:582
	void ProcessCreateArticulatedTrafficEvents(const VehicleInputInterface::CreateArticulatedTrafficEventQueue *, VehicleManagerOutputInterface *, VehicleOutputRequestInterface *, DeformationInputInterface *, BrnPhysics::Vehicle::RaceCarPhysics *, VehicleDriver *, BitArray<8u> *);

	// BrnPhysicalTrafficManager.h:594
	int32_t CreateTrafficVehicle(const CreatePhysicalTrafficEvent &, VehicleManagerOutputInterface *, VehicleOutputRequestInterface *, DeformationInputInterface *, BrnPhysics::Vehicle::RaceCarPhysics *, VehicleDriver *, BitArray<8u> *, const PhysicalTrafficManager::TotalPhysicalTrafficBitArray *);

	// BrnPhysicalTrafficManager.h:599
	RigidBodyId GetTrafficRigidBodyId(int32_t) const;

	// BrnPhysicalTrafficManager.h:604
	void ProcessJointSpys(const OutputBuffer *);

	// BrnPhysicalTrafficManager.h:609
	void BreakArticulatedJoint(ArticulatedJointId);

	// BrnPhysicalTrafficManager.h:615
	void SendCreateRemoveTrafficEvents(VehicleOutputRequestInterface *, DeformationInputInterface *);

	// BrnPhysicalTrafficManager.h:621
	void ComputeTrafficVehicleInertia(int32_t, Inertia *);

	// BrnPhysicalTrafficManager.h:626
	bool IsJointBroken(const OutJointSpy &);

	// BrnPhysicalTrafficManager.h:630
	void ResolveArticulatedJoints();

	// BrnPhysicalTrafficManager.h:634
	BrnPhysics::Vehicle::TrafficPhysics * GetFullTrafficPhysics(int32_t);

	// BrnPhysicalTrafficManager.h:638
	BrnPhysics::Vehicle::SimpleVehiclePhysics * GetSimpleVehiclePhysics(int32_t);

	// BrnPhysicalTrafficManager.h:647
	void ProcessSetTrafficCrashingEvents(const VehicleInputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *);

	// BrnPhysicalTrafficManager.h:656
	void ProcessUpdateNetworkTrafficEvents(const VehicleInputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *);

	// BrnPhysicalTrafficManager.h:662
	void UpdateNetworkTrafficVehicle(const UpdateNetworkTrafficEvent *, EntityId);

	// BrnPhysicalTrafficManager.h:669
	void CheckForTrafficHittingWater(VehicleManagerOutputInterface *, VehicleOutputRequestInterface *, DeformationInputInterface *);

}

// BrnPhysicalTrafficManager.h:78
struct BrnPhysics::Vehicle::PhysicalTrafficManager {
private:
	// BrnPhysicalTrafficManager.h:396
	BrnPhysics::Vehicle::TrafficPhysics[20] maFullTrafficPhysics;

	// BrnPhysicalTrafficManager.h:397
	EntityId[20] maTrafficEntityIDs;

	// BrnPhysicalTrafficManager.h:398
	ResourceHandle[20] maTrafficCarModelHandles;

	// BrnPhysicalTrafficManager.h:400
	VehicleDriver * mpaTrafficDrivers;

	// BrnPhysicalTrafficManager.h:401
	PhysicalTrafficVehicle * mpaTrafficVehicles;

	// BrnPhysicalTrafficManager.h:402
	BrnPhysics::Vehicle::SimpleVehiclePhysics * mpaSimpleVehiclePhysics;

	// BrnPhysicalTrafficManager.h:405
	ArticulatedJointCreateBuffer * mpArticulatedJointCreateBuffer;

	// BrnPhysicalTrafficManager.h:406
	ArticulatedJointPool mArticulatedJointPool;

	// BrnPhysicalTrafficManager.h:407
	float32_t mfJointSwingBreakVelocity;

	// BrnPhysicalTrafficManager.h:408
	float32_t mfJointTwistBreakVelocity;

	// BrnPhysicalTrafficManager.h:409
	float32_t mfJointLinearBreakMph;

	// BrnPhysicalTrafficManager.h:410
	bool mbAllowArticulatedJointBreaking;

	// Unknown accessibility
	// BrnPhysicalTrafficManager.h:62
	typedef Array<CgsSceneManager::EntityId,20u> RecycledTrafficIdArray;

	// BrnPhysicalTrafficManager.h:413
	PhysicalTrafficManager::RecycledTrafficIdArray maRecycledTrafficThisFrame;

	// Unknown accessibility
	// BrnPhysicalTrafficManager.h:64
	typedef BitArray<20u> TotalPhysicalTrafficBitArray;

	// BrnPhysicalTrafficManager.h:415
	PhysicalTrafficManager::TotalPhysicalTrafficBitArray mUsedTrafficVehicles;

	// Unknown accessibility
	// BrnPhysicalTrafficManager.h:65
	typedef BitArray<20u> FullyPhysicalTrafficBitArray;

	// BrnPhysicalTrafficManager.h:416
	PhysicalTrafficManager::FullyPhysicalTrafficBitArray mUsedFullTrafficPhysics;

	// Unknown accessibility
	// BrnPhysicalTrafficManager.h:66
	typedef BitArray<1u> SimpleTrafficBitArray;

	// BrnPhysicalTrafficManager.h:417
	PhysicalTrafficManager::SimpleTrafficBitArray mUsedSimpleVehiclePhysics;

	// BrnPhysicalTrafficManager.h:419
	PhysicalTrafficManager::TotalPhysicalTrafficBitArray mPotentialTrafficVehicles;

	// BrnPhysicalTrafficManager.h:420
	PhysicalTrafficManager::TotalPhysicalTrafficBitArray mTrafficDeformationModelsActive;

	// BrnPhysicalTrafficManager.h:421
	PhysicalTrafficManager::TotalPhysicalTrafficBitArray mTestedTrafficVehicles;

	// BrnPhysicalTrafficManager.h:422
	PhysicalTrafficManager::TotalPhysicalTrafficBitArray mAddedTrafficVehicles;

	// BrnPhysicalTrafficManager.h:423
	PhysicalTrafficManager::TotalPhysicalTrafficBitArray mRemovedTrafficVehicles;

	// BrnPhysicalTrafficManager.h:424
	PhysicalTrafficManager::TotalPhysicalTrafficBitArray mMadeSimpleTrafficVehicles;

	// BrnPhysicalTrafficManager.h:425
	EventQueue<int8_t,50> mUnusedPotentialTrafficQueue;

	// BrnPhysicalTrafficManager.h:428
	extern const uint8_t KU8_INVALID_MAP = 127;

	// BrnPhysicalTrafficManager.h:429
	uint8_t[601] mu8GlobalToPhysicalEntityIndexMap;

	// BrnPhysicalTrafficManager.h:432
	VecFloat[20] mavfLowestPointWorldSpace;

	// BrnPhysicalTrafficManager.h:435
	BrnPhysics::Vehicle::PhysicalTrafficManagerDebugComponent mDebugComponent;

public:
	// BrnPhysicalTrafficManager.h:86
	void Construct();

	// BrnPhysicalTrafficManager.h:90
	bool Prepare(rw::LinearResourceAllocator *);

	// BrnPhysicalTrafficManager.h:94
	// Declaration
	bool PrepareTriangleCache(InputBuffer_Update *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPhysicalTrafficManager.cpp:246
		using namespace CgsSceneManager::SceneManagerIO;

	}

	// BrnPhysicalTrafficManager.h:97
	bool Release();

	// BrnPhysicalTrafficManager.h:100
	void Destruct();

	// BrnPhysicalTrafficManager.h:116
	void ProcessTrafficMaintenanceEvents(IOBufferStack *, IOBufferStack *, const VehicleInputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *, BrnPhysics::Vehicle::RaceCarPhysics *, VehicleDriver *, BitArray<8u> *);

	// BrnPhysicalTrafficManager.h:124
	void ProcessTrafficEvents(const VehicleInputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *);

	// BrnPhysicalTrafficManager.h:128
	// Declaration
	void UpdateTriangleCache(InputBuffer_Update *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPhysicalTrafficManager.cpp:279
		using namespace CgsSceneManager::SceneManagerIO;

	}

	// BrnPhysicalTrafficManager.h:137
	void UpdateTrafficPhysics(float32_t, float32_t, const rw::math::vpu::Matrix44Affine *, bool, bool);

	// BrnPhysicalTrafficManager.h:144
	void PassNearbyCrashingTrafficIdsToRaceCarModule(VehicleManagerOutputInterface *, Vector3);

	// BrnPhysicalTrafficManager.h:150
	void UpdateTrafficDriver(const BrnTrafficDriverControls *, BitArray<8u> &);

	// BrnPhysicalTrafficManager.h:155
	// Declaration
	void GetUpdatedVehicleBodies(OutUpdatedExternalBodyQueue *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleQueues.h:35
		typedef CgsModule::EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,60> OutUpdatedExternalBodyQueue;

	}

	// BrnPhysicalTrafficManager.h:161
	void ReadUpdatedBodies(const OutputBuffer::OutUpdateRigidBodyQueue *, VecFloat);

	// BrnPhysicalTrafficManager.h:165
	void DisposeOfNonCrashingTraffic();

	// BrnPhysicalTrafficManager.h:174
	void SetTrafficVehicleCrashing(EntityId, EntityId, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *);

	// BrnPhysicalTrafficManager.h:179
	void SetTrafficVehicleNotCrashing(EntityId);

	// BrnPhysicalTrafficManager.h:190
	void SetTrafficVehicleChecked(EntityId, EntityId, const BrnPhysics::Vehicle::RaceCarPhysics *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *, Vector3);

	// BrnPhysicalTrafficManager.h:202
	void SetTrafficVehicleSlammed(EntityId, EntityId, const BrnPhysics::Vehicle::SimpleVehiclePhysics *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *, Vector3, VecFloat);

	// BrnPhysicalTrafficManager.h:207
	void WriteOutVehicleStats(VehicleOutputInterface *) const;

	// BrnPhysicalTrafficManager.h:213
	void UpdateTrafficPhysicsPostSimulation(const OutputBuffer *, float32_t);

	// BrnPhysicalTrafficManager.h:218
	void ProcessAddAirRamEvent(const CreateAirRamEvent *);

	// BrnPhysicalTrafficManager.h:228
	void AddAirRam(uint16_t, uint32_t, float32_t, float32_t, Vector3, Vector3, float32_t);

	// BrnPhysicalTrafficManager.h:233
	EntityId GetGlobalEntityIDFromPhysicsEntityID(EntityId) const;

	// BrnPhysicalTrafficManager.h:238
	EntityId GetPhysicsEntityIDFromGlobalEntityID(EntityId) const;

	// BrnPhysicalTrafficManager.h:243
	EntityId GetGlobalTrafficEntityId(uint16_t) const;

	// BrnPhysicalTrafficManager.h:248
	// Declaration
	void AddArticulatedJointContacts(PotentialContactInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPhysicalTrafficManager.cpp:4023
		using namespace CgsSceneManager::SceneManagerIO;

	}

	// BrnPhysicalTrafficManager.h:255
	void ResetAboveGroundTestResults();

	// BrnPhysicalTrafficManager.h:260
	const PhysicalTrafficVehicle * GetTrafficVehicle(int32_t) const;

	// BrnPhysicalTrafficManager.h:265
	PhysicalTrafficVehicle * GetTrafficVehicle(int32_t);

	// BrnPhysicalTrafficManager.h:270
	VehicleDriver * GetTrafficDriver(int32_t);

	// BrnPhysicalTrafficManager.h:275
	bool IsTrafficVehicleCrashed(uint16_t) const;

	// BrnPhysicalTrafficManager.h:280
	EntityId GetEntityId(RigidBodyId);

	// BrnPhysicalTrafficManager.h:287
	void AddTrafficTractionPoint(uint8_t, uint8_t, const OutEventLineTestNearestResult &);

	// BrnPhysicalTrafficManager.h:293
	void SetAboveGroundTestResult(uint8_t, const OutEventLineTestNearestResult &);

	// BrnPhysicalTrafficManager.h:298
	bool IsTrafficVehiclePhysical(EntityId);

	// BrnPhysicalTrafficManager.h:303
	bool GetPhysicsEntityIDFromGlobalEntityID_Safe(EntityId, EntityId *) const;

	// BrnPhysicalTrafficManager.h:307
	void SetRammed(uint16_t);

	// BrnPhysicalTrafficManager.h:313
	void DoTractionLineTestsForFullyPhysicalTraffic(IOBufferStack *, const VehicleInputInterface *);

	// BrnPhysicalTrafficManager.h:319
	void DoTractionLineTestsForSimpleTraffic(IOBufferStack *, const VehicleInputInterface *);

	// BrnPhysicalTrafficManager.h:326
	// Declaration
	int32_t AddTrafficTractionLineTests(CollisionGenerator *, CgsMemory::SimpleDataStreamProducer *, const VehicleInputInterface::InTriangleCacheInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPhysicalTrafficManager.cpp:1403
		using namespace CgsSceneManager;

	}

	// BrnPhysicalTrafficManager.h:331
	// Declaration
	void ReadTrafficTractionLineTestResults(SimpleDataStreamResultIterator &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPhysicalTrafficManager.cpp:1489
		using namespace CgsSceneManager;

	}

	// BrnPhysicalTrafficManager.h:334
	const PhysicalTrafficManager::TotalPhysicalTrafficBitArray * GetUsedTrafficVehiclesArray();

	// BrnPhysicalTrafficManager.h:341
	bool ValidateTrafficContact(PotentialContact *, const VehicleInputInterface::InTriangleCacheInterface *, float32_t);

	// BrnPhysicalTrafficManager.h:345
	bool ValidateAndFixUpTrafficTrafficContact(PotentialContact *) const;

	// BrnPhysicalTrafficManager.h:351
	void AllocateInternalBuffers(IOBufferStack *, IOBufferStack *);

	// BrnPhysicalTrafficManager.h:357
	void DeallocateInternalBuffers(IOBufferStack *, IOBufferStack *);

	// BrnPhysicalTrafficManager.h:362
	void BridgeArticulatedJointRequestsToSim(VehicleOutputRequestInterface *);

	// BrnPhysicalTrafficManager.h:366
	BrnPhysics::Vehicle::SimpleVehiclePhysics * GetVehiclePhysics(EntityId);

	// BrnPhysicalTrafficManager.h:371
	EntityId GetPhysicsEntityId(int32_t) const;

	// BrnPhysicalTrafficManager.h:376
	bool IsTrafficVehicleSimple(EntityId) const;

	// BrnPhysicalTrafficManager.h:386
	void TestForNearMissFreakOut(PotentialContact, EntityId, EntityId, const BrnPhysics::Vehicle::RaceCarPhysics *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *);

	// BrnPhysicalTrafficManager.h:391
	void ClearSnappedNetworkTrafficContacts(DeformationManager *);

private:
	// BrnPhysicalTrafficManager.h:445
	void RemoveTrafficVehicle(uint8_t, VehicleOutputRequestInterface *, DeformationInputInterface *, bool);

	// BrnPhysicalTrafficManager.h:451
	void PhysicallyCrashTrafficCar(uint16_t, DeformationInputInterface *);

	// BrnPhysicalTrafficManager.h:457
	void PhysicallyUncrashTrafficCar(uint16_t, DeformationInputInterface *);

	// BrnPhysicalTrafficManager.h:463
	void PreparePhysicsForNewTrafficVehicle(const CreatePhysicalTrafficEvent &, int32_t);

	// BrnPhysicalTrafficManager.h:475
	float32_t GetTrafficInterest(const PhysicalTrafficVehicle *, BrnPhysics::Vehicle::RaceCarPhysics *, VehicleDriver *, BitArray<8u> *);

	// BrnPhysicalTrafficManager.h:486
	int32_t GetFreeTrafficVehicleWithPhysics(VehicleManagerOutputInterface *, VehicleOutputRequestInterface *, DeformationInputInterface *, BrnPhysics::Vehicle::RaceCarPhysics *, VehicleDriver *, BitArray<8u> *, const PhysicalTrafficManager::TotalPhysicalTrafficBitArray *);

	// BrnPhysicalTrafficManager.h:523
	int32_t GetLeastInterestingFullyPhysicalVehicle(BrnPhysics::Vehicle::RaceCarPhysics *, VehicleDriver *, BitArray<8u> *, const PhysicalTrafficManager::TotalPhysicalTrafficBitArray *);

	// BrnPhysicalTrafficManager.h:532
	void RecycleTrafficVehicle(int32_t, VehicleManagerOutputInterface *, VehicleOutputRequestInterface *, DeformationInputInterface *);

	// BrnPhysicalTrafficManager.h:540
	void SendTrafficVehicleRecycledEvents(int32_t, VehicleManagerOutputInterface *, VehicleOutputRequestInterface *, DeformationInputInterface *);

	// BrnPhysicalTrafficManager.h:553
	void ProcessCreateEvents(const VehicleInputInterface *, VehicleManagerOutputInterface *, VehicleOutputRequestInterface *, DeformationInputInterface *, BrnPhysics::Vehicle::RaceCarPhysics *, VehicleDriver *, BitArray<8u> *);

	// BrnPhysicalTrafficManager.h:560
	void ProcessRemoveEvents(const VehicleInputInterface::RemoveTrafficEventQueue *, VehicleOutputRequestInterface *, DeformationInputInterface *);

	// BrnPhysicalTrafficManager.h:571
	void ProcessCreateNonArticulatedTraffic(const VehicleInputInterface::CreateTrafficEventQueue *, VehicleManagerOutputInterface *, VehicleOutputRequestInterface *, DeformationInputInterface *, BrnPhysics::Vehicle::RaceCarPhysics *, VehicleDriver *, BitArray<8u> *);

	// BrnPhysicalTrafficManager.h:582
	void ProcessCreateArticulatedTrafficEvents(const VehicleInputInterface::CreateArticulatedTrafficEventQueue *, VehicleManagerOutputInterface *, VehicleOutputRequestInterface *, DeformationInputInterface *, BrnPhysics::Vehicle::RaceCarPhysics *, VehicleDriver *, BitArray<8u> *);

	// BrnPhysicalTrafficManager.h:594
	int32_t CreateTrafficVehicle(const CreatePhysicalTrafficEvent &, VehicleManagerOutputInterface *, VehicleOutputRequestInterface *, DeformationInputInterface *, BrnPhysics::Vehicle::RaceCarPhysics *, VehicleDriver *, BitArray<8u> *, const PhysicalTrafficManager::TotalPhysicalTrafficBitArray *);

	// BrnPhysicalTrafficManager.h:599
	RigidBodyId GetTrafficRigidBodyId(int32_t) const;

	// BrnPhysicalTrafficManager.h:604
	void ProcessJointSpys(const OutputBuffer *);

	// BrnPhysicalTrafficManager.h:609
	void BreakArticulatedJoint(ArticulatedJointId);

	// BrnPhysicalTrafficManager.h:615
	void SendCreateRemoveTrafficEvents(VehicleOutputRequestInterface *, DeformationInputInterface *);

	// BrnPhysicalTrafficManager.h:621
	void ComputeTrafficVehicleInertia(int32_t, Inertia *);

	// BrnPhysicalTrafficManager.h:626
	bool IsJointBroken(const OutJointSpy &);

	// BrnPhysicalTrafficManager.h:630
	void ResolveArticulatedJoints();

	// BrnPhysicalTrafficManager.h:634
	BrnPhysics::Vehicle::TrafficPhysics * GetFullTrafficPhysics(int32_t);

	// BrnPhysicalTrafficManager.h:638
	BrnPhysics::Vehicle::SimpleVehiclePhysics * GetSimpleVehiclePhysics(int32_t);

	// BrnPhysicalTrafficManager.h:647
	void ProcessSetTrafficCrashingEvents(const VehicleInputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *);

	// BrnPhysicalTrafficManager.h:656
	void ProcessUpdateNetworkTrafficEvents(const VehicleInputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *);

	// BrnPhysicalTrafficManager.h:662
	void UpdateNetworkTrafficVehicle(const UpdateNetworkTrafficEvent *, EntityId);

	// BrnPhysicalTrafficManager.h:669
	void CheckForTrafficHittingWater(VehicleManagerOutputInterface *, VehicleOutputRequestInterface *, DeformationInputInterface *);

}

