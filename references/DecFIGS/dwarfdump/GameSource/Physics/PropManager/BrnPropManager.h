// _built-in_
namespace :: {
	// BrnPropManager.h:32
	const int32_t KI_MAX_PROP_RACE_CAR_CONTACTS = 30;

}

// BrnPropManager.h:245
extern const int32_t KI_PROP_INDEX_NOT_FOUND = 4294967295;

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnPropConstants.h:99
	namespace Props {
		// Declaration
		struct PropManager {
			// BrnPropManager.h:103
			struct DebugWorldContactInfo {
				// BrnPropManager.h:105
				Vector3 mPoint0;

				// BrnPropManager.h:106
				Vector3 mPoint1;

				// BrnPropManager.h:107
				Vector3 mNormal;

			}

		}

	}

}

// BrnPropManager.h:56
struct BrnPhysics::Props::PropRaceCarContact {
	// BrnPropManager.h:58
	Vector3 mForce;

	// BrnPropManager.h:59
	PropEntityID mPropEntityId;

}

// BrnPropManager.h:74
struct BrnPhysics::Props::PropRaceCarContactBuffer : public IOBuffer {
	// BrnPropManager.h:62
	typedef EventQueue<BrnPhysics::Props::PropRaceCarContact,30> PropRaceCarContactQueue;

private:
	// BrnPropManager.h:85
	PropRaceCarContactBuffer::PropRaceCarContactQueue mPropRaceCarContactQueue;

public:
	// BrnPropManager.h:78
	void Construct();

	// BrnPropManager.h:81
	void Destruct();

}

// BrnPropManager.h:98
struct BrnPhysics::Props::PropManager {
	// BrnPropManager.h:110
	extern const int32_t KI_MAX_DEBUG_WORLD_CONTACTS = 32;

private:
	// BrnPropManager.h:245
	extern const int32_t KI_PROP_INDEX_NOT_FOUND = 4294967295;

	// BrnPropManager.h:248
	BrnPhysics::Props::PropDebugComponent mDebugComponent;

	// BrnPropManager.h:249
	bool mbRenderCOM;

	// BrnPropManager.h:250
	bool mbUseOverides;

	// BrnPropManager.h:251
	float32_t mfMassOverride;

	// BrnPropManager.h:252
	float32_t mfMaxLeanAngleOverride;

	// BrnPropManager.h:255
	ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader> mpPhysicsData;

	// BrnPropManager.h:256
	float32_t mfStaticFriction;

	// BrnPropManager.h:257
	float32_t mfDynamicFriction;

	// BrnPropManager.h:259
	PropInstance * mpaPropInstances;

	// BrnPropManager.h:260
	BitArray<15u> mUsedProps;

	// BrnPropManager.h:261
	uint32_t muNumberOfPropInstances;

	// BrnPropManager.h:263
	PropPartInstance * mpaPartInstances;

	// BrnPropManager.h:264
	BitArray<30u> mUsedParts;

	// BrnPropManager.h:265
	uint32_t muNumberOfPartInstances;

	// BrnPropManager.h:266
	int32_t miNumJobsAdded;

	// BrnPropManager.h:268
	CgsMemory::SimpleDataStreamProducer * mpPrimitiveWithTriangleStream;

	// BrnPropManager.h:272
	int32_t miContactGeneratorWaitPM;

	// BrnPropManager.h:273
	int32_t miProcessRemovePropPM;

	// BrnPropManager.h:274
	int32_t miProcessRemovePartPM;

	// BrnPropManager.h:275
	int32_t miProcessAddPropInstancePM;

	// BrnPropManager.h:276
	int32_t miProcessAddPartInstancePM;

	// BrnPropManager.h:277
	int32_t miProcessBreakPropPM;

	// BrnPropManager.h:280
	Vector3[15] maPropJointPositions;

	// BrnPropManager.h:281
	Vector3[15] maLastJointRotation;

	// BrnPropManager.h:282
	uint8_t[15] mauPropIndexForJoint;

	// BrnPropManager.h:283
	Matrix44Affine[15] maCurrentJointTransforms;

	// BrnPropManager.h:284
	BitArray<15u> mUsedPropJoints;

	// BrnPropManager.h:285
	BitArray<15u> mBreakPropJoints;

	// BrnPropManager.h:288
	PropOutputInterface::UpdatePropEventQueue mUpdatedProps;

	// Unknown accessibility
	// BrnPropQueues.h:46
	typedef EventQueue<BrnPhysics::Props::UpdatePropEvent,15> UpdateJointedPropEventQueue;

	// BrnPropManager.h:291
	PropManager::UpdateJointedPropEventQueue mUpdatedJointedProps;

	// BrnPropManager.h:294
	BrnPhysics::Props::PropManager::DebugWorldContactInfo * mpDebugWorldContacts;

	// BrnPropManager.h:295
	int32_t miNumDebugWorldContacts;

	// BrnPropManager.h:298
	bool mbDisableFreezing;

	// BrnPropManager.h:300
	PropEntityID[45] maPropsAddedToContactGen;

	// BrnPropManager.h:301
	int32_t miNumPropsAddedToContactGen;

public:
	// BrnPropManager.h:115
	void Construct();

	// BrnPropManager.h:119
	void ConstructContactGenerationPerfMonitors();

	// BrnPropManager.h:122
	void ConstructPreScenePerfMonitors();

	// BrnPropManager.h:128
	bool Prepare(rw::LinearResourceAllocator *);

	// BrnPropManager.h:132
	bool Release();

	// BrnPropManager.h:136
	void Destruct();

	// BrnPropManager.h:140
	void ProcessInputs_Prepare(const PropInputInterface *);

	// BrnPropManager.h:147
	void ProcessInputsPreScene(const PropInputInterface *, InSceneUpdateInterface *, bool, InputBuffer *);

	// BrnPropManager.h:151
	void UpdateJointedProps(InputBuffer *);

	// BrnPropManager.h:155
	void OutputUpdatedProps(OutputBuffer *);

	// BrnPropManager.h:158
	PropInputInterface * GetInputInterface();

	// BrnPropManager.h:165
	void ReadUpdatedBodies(const OutputBuffer::OutUpdateRigidBodyQueue *, InSceneUpdateInterface *, InputBuffer *, VecFloat);

	// BrnPropManager.h:172
	void CreateContactEvent(PropContact *, const OutContactSpy *, const PotentialContact *);

	// BrnPropManager.h:176
	float32_t GetStaticFriction();

	// BrnPropManager.h:179
	float32_t GetDynamicFriction();

	// BrnPropManager.h:191
	bool SetupAndValidatePropContact(InAddPotentialContact *, const PotentialContact *, VehicleManager *, InputBuffer *, PropRaceCarContactBuffer *, RigidBodyId, bool, float32_t);

	// BrnPropManager.h:199
	bool GetTriangleCacheSlotAndRadius(PropEntityID, int32_t, int32_t &, float32_t &);

	// BrnPropManager.h:204
	void UpdateTriangleCache(InputBuffer_Update *);

	// BrnPropManager.h:211
	void BeginPropWorldContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *, CollisionGenerator *, LinearMalloc *, VecFloat);

	// BrnPropManager.h:217
	void EndPropWorldContactGeneration(PotentialContactInterface *, CollisionGenerator *, EntityId);

	// BrnPropManager.h:222
	Vector3 GetPropInertia(const PropTypeData *);

	// BrnPropManager.h:226
	Vector3 GetPartInertia(const PropPartTypeData *);

	// BrnPropManager.h:230
	int32_t FindPropIndex(PropEntityID) const;

	// BrnPropManager.h:234
	int32_t FindPartIndex(PropEntityID) const;

	// BrnPropManager.h:239
	void RemoveAllPropsAndParts(InputBuffer *, InSceneUpdateInterface *);

private:
	// BrnPropManager.h:313
	void AddPropToSim(PropEntityID, int32_t, Matrix44Affine, const PropTypeData *, bool, bool, InputBuffer *, Vector3, Vector3);

	// BrnPropManager.h:320
	void RemoveProp(PropEntityID, uint32_t, InSceneUpdateInterface *, InputBuffer *);

	// BrnPropManager.h:328
	void RemovePart(PropEntityID, uint32_t, InSceneUpdateInterface *, InputBuffer *);

	// BrnPropManager.h:336
	void BreakJoint(PropEntityID, int32_t, Matrix44Affine, const PropTypeData *, InputBuffer *);

	// BrnPropManager.h:347
	void CreatePart(PropEntityID, uint32_t, int16_t, Matrix44Affine, Vector3, Vector3, int32_t, InSceneUpdateInterface *, InputBuffer *);

	// BrnPropManager.h:359
	void ClampAcceleration(Vector3, Vector3, RigidBodyId, const OutUpdateRigidBody *, Vector3 &, Vector3 &, VecFloat, VecFloat, InputBuffer *);

	// BrnPropManager.h:366
	void ProcessAddPropInstanceEvents(const PropInputInterface *, InSceneUpdateInterface *, InputBuffer *);

	// BrnPropManager.h:372
	void ProcessAddPartInstanceEvents(const PropInputInterface *, InSceneUpdateInterface *, InputBuffer *);

	// BrnPropManager.h:378
	void ProcessRemovePropInstanceEvents(const PropInputInterface *, InSceneUpdateInterface *, InputBuffer *);

	// BrnPropManager.h:384
	void ProcessRemovePartInstanceEvents(const PropInputInterface *, InSceneUpdateInterface *, InputBuffer *);

	// BrnPropManager.h:395
	void DoPartWorldContactGeneration(CollisionGenerator *, const VehicleInputInterface::InTriangleCacheInterface *, const UpdatePropEvent &, int32_t &, LinearMalloc *, VecFloat);

	// BrnPropManager.h:404
	void DoPropInstanceWorldContactGeneration(CollisionGenerator *, const VehicleInputInterface::InTriangleCacheInterface *, const UpdatePropEvent &, int32_t &, LinearMalloc *, VecFloat);

	// BrnPropManager.h:410
	void AddContactResultsToQueue(PotentialContactInterface *, CollisionGenerator *, EntityId);

	// BrnPropManager.h:420
	void ApplyAntiHerdingForce(InputBuffer *, BrnPhysics::Vehicle::RaceCarPhysics *, RigidBodyId, Vector3, VecFloat, Vector3, Vector3);

	// BrnPropManager.h:428
	void ApplyPropRaceCarCollisionImpulse(BrnPhysics::Vehicle::RaceCarPhysics *, PropInstance *, const PropTypeData *, Vector3, Vector3);

	// BrnPropManager.h:442
	void HandleContactWithLeanProp(PropInstance *, int32_t, const PropTypeData *, BrnPhysics::Vehicle::RaceCarPhysics *, Vector3, Vector3, Vector3, InAddPotentialContact *, bool, float32_t);

	// BrnPropManager.h:456
	void HandleContactWithTiltProp(PropInstance *, int32_t, const PropTypeData *, BrnPhysics::Vehicle::RaceCarPhysics *, Vector3, Vector3, Vector3, InAddPotentialContact *, bool, float32_t);

	// BrnPropManager.h:461
	void RoutePropVsRaceCarContactToDummyCar(bool, InAddPotentialContact *);

	// BrnPropManager.h:466
	bool HasPropJustBeenRemoved(PropEntityID, int32_t);

	// BrnPropManager.h:471
	bool HasPartJustBeenRemoved(PropEntityID, int32_t);

}

// BrnPropManager.h:98
struct BrnPhysics::Props::PropManager {
	// BrnPropManager.h:110
	extern const int32_t KI_MAX_DEBUG_WORLD_CONTACTS = 32;

private:
	// BrnPropManager.h:245
	extern const int32_t KI_PROP_INDEX_NOT_FOUND = 4294967295;

	// BrnPropManager.h:248
	BrnPhysics::Props::PropDebugComponent mDebugComponent;

	// BrnPropManager.h:249
	bool mbRenderCOM;

	// BrnPropManager.h:250
	bool mbUseOverides;

	// BrnPropManager.h:251
	float32_t mfMassOverride;

	// BrnPropManager.h:252
	float32_t mfMaxLeanAngleOverride;

	// BrnPropManager.h:255
	ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader> mpPhysicsData;

	// BrnPropManager.h:256
	float32_t mfStaticFriction;

	// BrnPropManager.h:257
	float32_t mfDynamicFriction;

	// BrnPropManager.h:259
	PropInstance * mpaPropInstances;

	// BrnPropManager.h:260
	BitArray<15u> mUsedProps;

	// BrnPropManager.h:261
	uint32_t muNumberOfPropInstances;

	// BrnPropManager.h:263
	PropPartInstance * mpaPartInstances;

	// BrnPropManager.h:264
	BitArray<30u> mUsedParts;

	// BrnPropManager.h:265
	uint32_t muNumberOfPartInstances;

	// BrnPropManager.h:266
	int32_t miNumJobsAdded;

	// BrnPropManager.h:268
	CgsMemory::SimpleDataStreamProducer * mpPrimitiveWithTriangleStream;

	// BrnPropManager.h:272
	int32_t miContactGeneratorWaitPM;

	// BrnPropManager.h:273
	int32_t miProcessRemovePropPM;

	// BrnPropManager.h:274
	int32_t miProcessRemovePartPM;

	// BrnPropManager.h:275
	int32_t miProcessAddPropInstancePM;

	// BrnPropManager.h:276
	int32_t miProcessAddPartInstancePM;

	// BrnPropManager.h:277
	int32_t miProcessBreakPropPM;

	// BrnPropManager.h:280
	Vector3[15] maPropJointPositions;

	// BrnPropManager.h:281
	Vector3[15] maLastJointRotation;

	// BrnPropManager.h:282
	uint8_t[15] mauPropIndexForJoint;

	// BrnPropManager.h:283
	Matrix44Affine[15] maCurrentJointTransforms;

	// BrnPropManager.h:284
	BitArray<15u> mUsedPropJoints;

	// BrnPropManager.h:285
	BitArray<15u> mBreakPropJoints;

	// BrnPropManager.h:288
	PropOutputInterface::UpdatePropEventQueue mUpdatedProps;

	// Unknown accessibility
	// BrnPropQueues.h:46
	typedef EventQueue<BrnPhysics::Props::UpdatePropEvent,15> UpdateJointedPropEventQueue;

	// BrnPropManager.h:291
	PropManager::UpdateJointedPropEventQueue mUpdatedJointedProps;

	// BrnPropManager.h:294
	BrnPhysics::Props::PropManager::DebugWorldContactInfo * mpDebugWorldContacts;

	// BrnPropManager.h:295
	int32_t miNumDebugWorldContacts;

	// BrnPropManager.h:298
	bool mbDisableFreezing;

	// BrnPropManager.h:300
	PropEntityID[45] maPropsAddedToContactGen;

	// BrnPropManager.h:301
	int32_t miNumPropsAddedToContactGen;

public:
	// BrnPropManager.h:115
	void Construct();

	// BrnPropManager.h:119
	void ConstructContactGenerationPerfMonitors();

	// BrnPropManager.h:122
	void ConstructPreScenePerfMonitors();

	// BrnPropManager.h:128
	// Declaration
	bool Prepare(rw::LinearResourceAllocator *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropManager.cpp:193
		using namespace CgsDev::Message;

		// BrnPropManager.cpp:211
		using namespace CgsDev::Message;

	}

	// BrnPropManager.h:132
	bool Release();

	// BrnPropManager.h:136
	void Destruct();

	// BrnPropManager.h:140
	void ProcessInputs_Prepare(const PropInputInterface *);

	// BrnPropManager.h:147
	void ProcessInputsPreScene(const PropInputInterface *, InSceneUpdateInterface *, bool, InputBuffer *);

	// BrnPropManager.h:151
	void UpdateJointedProps(InputBuffer *);

	// BrnPropManager.h:155
	void OutputUpdatedProps(OutputBuffer *);

	// BrnPropManager.h:158
	PropInputInterface * GetInputInterface();

	// BrnPropManager.h:165
	// Declaration
	void ReadUpdatedBodies(const OutputBuffer::OutUpdateRigidBodyQueue *, InSceneUpdateInterface *, InputBuffer *, VecFloat) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropManager.cpp:993
		using namespace CgsDev::Message;

	}

	// BrnPropManager.h:172
	void CreateContactEvent(PropContact *, const OutContactSpy *, const PotentialContact *);

	// BrnPropManager.h:176
	float32_t GetStaticFriction();

	// BrnPropManager.h:179
	float32_t GetDynamicFriction();

	// BrnPropManager.h:191
	bool SetupAndValidatePropContact(InAddPotentialContact *, const PotentialContact *, VehicleManager *, InputBuffer *, PropRaceCarContactBuffer *, RigidBodyId, bool, float32_t);

	// BrnPropManager.h:199
	bool GetTriangleCacheSlotAndRadius(PropEntityID, int32_t, int32_t &, float32_t &);

	// BrnPropManager.h:204
	// Declaration
	void UpdateTriangleCache(InputBuffer_Update *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropManager.cpp:2281
		using namespace CgsSceneManager::SceneManagerIO;

	}

	// BrnPropManager.h:211
	// Declaration
	void BeginPropWorldContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *, CollisionGenerator *, LinearMalloc *, VecFloat) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropManager.cpp:2336
		using namespace CgsSceneManager::SceneManagerIO;

	}

	// BrnPropManager.h:217
	void EndPropWorldContactGeneration(PotentialContactInterface *, CollisionGenerator *, EntityId);

	// BrnPropManager.h:222
	Vector3 GetPropInertia(const PropTypeData *);

	// BrnPropManager.h:226
	Vector3 GetPartInertia(const PropPartTypeData *);

	// BrnPropManager.h:230
	int32_t FindPropIndex(PropEntityID) const;

	// BrnPropManager.h:234
	int32_t FindPartIndex(PropEntityID) const;

	// BrnPropManager.h:239
	void RemoveAllPropsAndParts(InputBuffer *, InSceneUpdateInterface *);

private:
	// BrnPropManager.h:313
	void AddPropToSim(PropEntityID, int32_t, Matrix44Affine, const PropTypeData *, bool, bool, InputBuffer *, Vector3, Vector3);

	// BrnPropManager.h:320
	void RemoveProp(PropEntityID, uint32_t, InSceneUpdateInterface *, InputBuffer *);

	// BrnPropManager.h:328
	void RemovePart(PropEntityID, uint32_t, InSceneUpdateInterface *, InputBuffer *);

	// BrnPropManager.h:336
	void BreakJoint(PropEntityID, int32_t, Matrix44Affine, const PropTypeData *, InputBuffer *);

	// BrnPropManager.h:347
	void CreatePart(PropEntityID, uint32_t, int16_t, Matrix44Affine, Vector3, Vector3, int32_t, InSceneUpdateInterface *, InputBuffer *);

	// BrnPropManager.h:359
	void ClampAcceleration(Vector3, Vector3, RigidBodyId, const OutUpdateRigidBody *, Vector3 &, Vector3 &, VecFloat, VecFloat, InputBuffer *);

	// BrnPropManager.h:366
	void ProcessAddPropInstanceEvents(const PropInputInterface *, InSceneUpdateInterface *, InputBuffer *);

	// BrnPropManager.h:372
	void ProcessAddPartInstanceEvents(const PropInputInterface *, InSceneUpdateInterface *, InputBuffer *);

	// BrnPropManager.h:378
	void ProcessRemovePropInstanceEvents(const PropInputInterface *, InSceneUpdateInterface *, InputBuffer *);

	// BrnPropManager.h:384
	void ProcessRemovePartInstanceEvents(const PropInputInterface *, InSceneUpdateInterface *, InputBuffer *);

	// BrnPropManager.h:395
	// Declaration
	void DoPartWorldContactGeneration(CollisionGenerator *, const VehicleInputInterface::InTriangleCacheInterface *, const UpdatePropEvent &, int32_t &, LinearMalloc *, VecFloat) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropManager.cpp:2446
		using namespace CgsSceneManager::CgsCollision;

		// BrnPropManager.cpp:2447
		using namespace CgsGeometric;

	}

	// BrnPropManager.h:404
	// Declaration
	void DoPropInstanceWorldContactGeneration(CollisionGenerator *, const VehicleInputInterface::InTriangleCacheInterface *, const UpdatePropEvent &, int32_t &, LinearMalloc *, VecFloat) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropManager.cpp:2571
		using namespace CgsSceneManager::CgsCollision;

		// BrnPropManager.cpp:2572
		using namespace CgsGeometric;

	}

	// BrnPropManager.h:410
	// Declaration
	void AddContactResultsToQueue(PotentialContactInterface *, CollisionGenerator *, EntityId) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropManager.cpp:2807
		using namespace CgsSceneManager::CgsCollision;

	}

	// BrnPropManager.h:420
	void ApplyAntiHerdingForce(InputBuffer *, BrnPhysics::Vehicle::RaceCarPhysics *, RigidBodyId, Vector3, VecFloat, Vector3, Vector3);

	// BrnPropManager.h:428
	void ApplyPropRaceCarCollisionImpulse(BrnPhysics::Vehicle::RaceCarPhysics *, PropInstance *, const PropTypeData *, Vector3, Vector3);

	// BrnPropManager.h:442
	void HandleContactWithLeanProp(PropInstance *, int32_t, const PropTypeData *, BrnPhysics::Vehicle::RaceCarPhysics *, Vector3, Vector3, Vector3, InAddPotentialContact *, bool, float32_t);

	// BrnPropManager.h:456
	void HandleContactWithTiltProp(PropInstance *, int32_t, const PropTypeData *, BrnPhysics::Vehicle::RaceCarPhysics *, Vector3, Vector3, Vector3, InAddPotentialContact *, bool, float32_t);

	// BrnPropManager.h:461
	void RoutePropVsRaceCarContactToDummyCar(bool, InAddPotentialContact *);

	// BrnPropManager.h:466
	bool HasPropJustBeenRemoved(PropEntityID, int32_t);

	// BrnPropManager.h:471
	bool HasPartJustBeenRemoved(PropEntityID, int32_t);

}

// BrnPropManager.h:110
extern const int32_t KI_MAX_DEBUG_WORLD_CONTACTS = 32;

// Wheel.h:30
namespace BrnPhysics {
	// BrnPropConstants.h:99
	namespace Props {
		// Declaration
		struct PropManager {
			// BrnPropManager.h:103
			struct DebugWorldContactInfo {
				// BrnPropManager.h:105
				Vector3 mPoint0;

				// BrnPropManager.h:106
				Vector3 mPoint1;

				// BrnPropManager.h:107
				Vector3 mNormal;

			}

		}

	}

}

