// CgsPhysicsSimulationModule.h:123
extern const int32_t knSize = 200;

// CgsPhysicsSimulationModule.h:186
extern const int32_t knSize = 36;

// CgsPhysicsSimulationModule.h:262
extern const int32_t knSize = 1;

// CgsRigidBody.h:24
namespace CgsPhysics {
	// Declaration
	struct PhysicsSimulationModule {
		// CgsPhysicsSimulationModule.h:286
		struct SimulationParams {
			// CgsPhysicsSimulationModule.h:288
			Vector3 mGravity;

			// CgsPhysicsSimulationModule.h:289
			float mfFreezingEnergy;

			// CgsPhysicsSimulationModule.h:290
			float mfTimeStep;

			// CgsPhysicsSimulationModule.h:291
			uint32_t muMaxIterations;

		}

	public:
		// CgsPhysicsSimulationModule.h:572
		void GetDefaultParams(CgsPhysics::PhysicsSimulationModule::SimulationParams &);

	}

}

// CgsPhysicsSimulationModule.h:64
struct CgsPhysics::RigidBodyData {
private:
	// CgsPhysicsSimulationModule.h:123
	extern const int32_t knSize = 200;

	// CgsPhysicsSimulationModule.h:126
	RigidBody *[200] maRWBodies;

	// CgsPhysicsSimulationModule.h:127
	RigidBodyId[200] maGameIDs;

	// CgsPhysicsSimulationModule.h:128
	Inertia[200] maInertias;

public:
	// CgsPhysicsSimulationModule.h:68
	void Clear();

	// CgsPhysicsSimulationModule.h:74
	int32_t AddBody(RigidBody *, RigidBodyId, const Inertia &);

	// CgsPhysicsSimulationModule.h:78
	bool RemoveBody(int32_t);

	// CgsPhysicsSimulationModule.h:82
	int32_t GetIndexFromGameID(RigidBodyId);

	// CgsPhysicsSimulationModule.h:86
	int32_t GetIndexFromRigidBody(RigidBody *);

	// CgsPhysicsSimulationModule.h:92
	void SetTimeStep(float32_t, float32_t);

	// CgsPhysicsSimulationModule.h:96
	RigidBodyId GetGameID(int32_t);

	// CgsPhysicsSimulationModule.h:100
	RigidBody * GetRigidBody(int32_t);

	// CgsPhysicsSimulationModule.h:104
	Inertia * GetInertia(int32_t);

	// CgsPhysicsSimulationModule.h:108
	void SetFree(int32_t);

	// CgsPhysicsSimulationModule.h:113
	bool IsSlotUsed(int32_t);

}

// CgsPhysicsSimulationModule.h:132
struct CgsPhysics::JointData {
private:
	// CgsPhysicsSimulationModule.h:186
	extern const int32_t knSize = 36;

	// CgsPhysicsSimulationModule.h:189
	JointFrames[36] maFrames;

	// CgsPhysicsSimulationModule.h:190
	JointLimits[36] maLimits;

	// CgsPhysicsSimulationModule.h:191
	Joint *[36] maRWJoints;

	// CgsPhysicsSimulationModule.h:192
	JointId[36] maGameIDs;

	// CgsPhysicsSimulationModule.h:193
	bool[36] mabUsedSlot;

public:
	// CgsPhysicsSimulationModule.h:137
	void Clear();

	// CgsPhysicsSimulationModule.h:144
	int32_t AddJoint(Joint *, const JointFrames &, const JointLimits &, JointId);

	// CgsPhysicsSimulationModule.h:148
	bool RemoveJoint(int32_t);

	// CgsPhysicsSimulationModule.h:152
	int32_t GetIndexFromGameID(JointId);

	// CgsPhysicsSimulationModule.h:156
	int32_t GetIndexFromJoint(Joint *);

	// CgsPhysicsSimulationModule.h:161
	void SetTimeStep(float32_t, float32_t);

	// CgsPhysicsSimulationModule.h:165
	JointId GetGameID(int32_t);

	// CgsPhysicsSimulationModule.h:169
	Joint * GetJoint(int32_t);

	// CgsPhysicsSimulationModule.h:173
	JointFrames * GetJointFrames(int32_t);

	// CgsPhysicsSimulationModule.h:177
	JointLimits * GetJointLimits(int32_t);

}

// CgsPhysicsSimulationModule.h:197
struct CgsPhysics::DriveData {
private:
	// CgsPhysicsSimulationModule.h:262
	extern const int32_t knSize = 1;

	// CgsPhysicsSimulationModule.h:265
	DriveFrames[1] maFrames;

	// CgsPhysicsSimulationModule.h:266
	DriveDynamics[1] maDynamics;

	// CgsPhysicsSimulationModule.h:267
	DriveDynamics[1] maScaledDynamics;

	// CgsPhysicsSimulationModule.h:268
	Drive *[1] maRWDrives;

	// CgsPhysicsSimulationModule.h:269
	DriveId[1] maGameIDs;

	// CgsPhysicsSimulationModule.h:270
	bool[1] mabUsedSlot;

public:
	// CgsPhysicsSimulationModule.h:202
	void Clear();

	// CgsPhysicsSimulationModule.h:210
	int32_t AddDrive(Drive *, const DriveFrames &, const DriveDynamics &, DriveId, float32_t);

	// CgsPhysicsSimulationModule.h:214
	bool RemoveDrive(int32_t);

	// CgsPhysicsSimulationModule.h:218
	int32_t GetIndexFromGameID(DriveId);

	// CgsPhysicsSimulationModule.h:222
	int32_t GetIndexFromDrive(Drive *);

	// CgsPhysicsSimulationModule.h:227
	void SetTimeStep(float32_t, float32_t);

	// CgsPhysicsSimulationModule.h:233
	void ScaleOneDriveForTimeStep(uint32_t, float32_t, float32_t);

	// CgsPhysicsSimulationModule.h:237
	DriveId GetGameID(int32_t);

	// CgsPhysicsSimulationModule.h:241
	Drive * GetDrive(int32_t);

	// CgsPhysicsSimulationModule.h:245
	DriveFrames * GetDriveFrames(int32_t);

	// CgsPhysicsSimulationModule.h:249
	DriveDynamics * GetDriveDynamics(int32_t);

	// CgsPhysicsSimulationModule.h:253
	DriveDynamics * GetScaledDriveDynamics(int32_t);

}

// CgsPhysicsSimulationModule.h:282
void CgsPhysics::PhysicsSimulationModule::~PhysicsSimulationModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPhysicsSimulationModule.h:282
void CgsPhysics::PhysicsSimulationModule::PhysicsSimulationModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsRigidBody.h:24
namespace CgsPhysics {
	// Declaration
	struct PhysicsSimulationModule {
		// CgsPhysicsSimulationModule.h:286
		struct SimulationParams {
			// CgsPhysicsSimulationModule.h:288
			Vector3 mGravity;

			// CgsPhysicsSimulationModule.h:289
			float mfFreezingEnergy;

			// CgsPhysicsSimulationModule.h:290
			float mfTimeStep;

			// CgsPhysicsSimulationModule.h:291
			uint32_t muMaxIterations;

		}

		// CgsPhysicsSimulationModule.h:294
		enum EPrepareStage {
			PREPARESTAGE_START = 0,
			PREPARESTAGE_MANAGER = 1,
			PREPARESTAGE_DONE = 2,
		}

		// CgsPhysicsSimulationModule.h:301
		enum EReleaseStage {
			RELEASESTAGE_START = 0,
			RELEASESTAGE_MANAGER = 1,
			RELEASESTAGE_DONE = 2,
		}

	}

	// CgsPhysicsSimulationModule.h:566
	extern CgsPhysics::PhysicsSimulationModule::EReleaseStage operator++(CgsPhysics::PhysicsSimulationModule::EReleaseStage &, int);

	// CgsPhysicsSimulationModule.h:565
	extern CgsPhysics::PhysicsSimulationModule::EPrepareStage operator++(CgsPhysics::PhysicsSimulationModule::EPrepareStage &, int);

}

// CgsPhysicsSimulationModule.h:64
struct CgsPhysics::RigidBodyData {
private:
	// CgsPhysicsSimulationModule.h:123
	extern const int32_t knSize = 200;

	// CgsPhysicsSimulationModule.h:126
	RigidBody *[200] maRWBodies;

	// CgsPhysicsSimulationModule.h:127
	RigidBodyId[200] maGameIDs;

	// CgsPhysicsSimulationModule.h:128
	Inertia[200] maInertias;

public:
	// CgsPhysicsSimulationModule.h:68
	void Clear();

	// CgsPhysicsSimulationModule.h:74
	int32_t AddBody(RigidBody *, RigidBodyId, const Inertia &);

	// CgsPhysicsSimulationModule.h:78
	bool RemoveBody(int32_t);

	// CgsPhysicsSimulationModule.h:82
	// Declaration
	int32_t GetIndexFromGameID(RigidBodyId) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPhysicsSimulationModule.cpp:2539
		using namespace CgsDev::Message;

	}

	// CgsPhysicsSimulationModule.h:86
	int32_t GetIndexFromRigidBody(RigidBody *);

	// CgsPhysicsSimulationModule.h:92
	void SetTimeStep(float32_t, float32_t);

	// CgsPhysicsSimulationModule.h:96
	RigidBodyId GetGameID(int32_t);

	// CgsPhysicsSimulationModule.h:100
	RigidBody * GetRigidBody(int32_t);

	// CgsPhysicsSimulationModule.h:104
	Inertia * GetInertia(int32_t);

	// CgsPhysicsSimulationModule.h:108
	void SetFree(int32_t);

	// CgsPhysicsSimulationModule.h:113
	bool IsSlotUsed(int32_t);

}

// CgsPhysicsSimulationModule.h:282
struct CgsPhysics::PhysicsSimulationModule : public CgsModule::ModuleSingleBuffered {
private:
	// CgsPhysicsSimulationModule.h:501
	CgsPhysics::PhysicsSimulationModule::EPrepareStage mePrepareStage;

	// CgsPhysicsSimulationModule.h:502
	CgsPhysics::PhysicsSimulationModule::EReleaseStage meReleaseStage;

	// CgsPhysicsSimulationModule.h:504
	RigidBodyData mBodyData;

	// CgsPhysicsSimulationModule.h:505
	JointData mJointData;

	// CgsPhysicsSimulationModule.h:506
	DriveData mDriveData;

	// CgsPhysicsSimulationModule.h:509
	PairSet * mpJointedPairs;

	// CgsPhysicsSimulationModule.h:510
	PairSet * mpDrivenPairs;

	// CgsPhysicsSimulationModule.h:511
	PairSet * mpContactPairs;

	// CgsPhysicsSimulationModule.h:512
	int32_t miNeedThaw;

	// CgsPhysicsSimulationModule.h:513
	int32_t miActive;

	// CgsPhysicsSimulationModule.h:514
	int32_t * mpiNextIndex;

	// CgsPhysicsSimulationModule.h:515
	BitArray<200u> mNeedFreeze;

	// CgsPhysicsSimulationModule.h:516
	BitArray<200u> mDone;

	// CgsPhysicsSimulationModule.h:517
	BitArray<200u> mSeen;

	// CgsPhysicsSimulationModule.h:519
	int32_t miNumRigidBodies;

	// CgsPhysicsSimulationModule.h:520
	int32_t miNumDrives;

	// CgsPhysicsSimulationModule.h:521
	int32_t miNumJoints;

	// CgsPhysicsSimulationModule.h:523
	int32_t miTimeInSim1;

	// CgsPhysicsSimulationModule.h:524
	int32_t miTimeInSim2;

	// CgsPhysicsSimulationModule.h:525
	int32_t miTimeInSim3;

	// CgsPhysicsSimulationModule.h:526
	int32_t miTimeInSim4;

	// CgsPhysicsSimulationModule.h:532
	extern const uint32_t kuNumBodies = 200;

	// CgsPhysicsSimulationModule.h:533
	extern const uint32_t kuNumJoints = 36;

	// CgsPhysicsSimulationModule.h:534
	extern const uint32_t kuNumDrives = 1;

	// CgsPhysicsSimulationModule.h:535
	extern const uint32_t kuNumPotentialContacts = 1024;

	// CgsPhysicsSimulationModule.h:536
	extern const uint32_t kuNumCollidingPairs = 1024;

	// CgsPhysicsSimulationModule.h:538
	rw::physics::Simulation * mpSimulation;

public:
	// CgsPhysicsSimulationModule.cpp:85
	// Declaration
	virtual void Construct() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPhysicsSimulationModule.cpp:87
		using namespace rw::physics;

	}

	// CgsPhysicsSimulationModule.cpp:131
	virtual bool Prepare(rw::IResourceAllocator *, const CgsPhysics::PhysicsSimulationModule::SimulationParams &);

	// CgsPhysicsSimulationModule.cpp:187
	virtual bool Release();

	// CgsPhysicsSimulationModule.cpp:240
	virtual void Destruct();

	// CgsPhysicsSimulationModule.cpp:783
	virtual void Update(IOBufferStack *, IOBufferStack *, const InputBuffer *, OutputBuffer *);

	// CgsPhysicsSimulationModule.cpp:957
	virtual void ProcessInput(const InputBuffer *);

	// CgsPhysicsSimulationModule.h:572
	void GetDefaultParams(CgsPhysics::PhysicsSimulationModule::SimulationParams &);

	// CgsPhysicsSimulationModule.cpp:2357
	void AddActiveBodiesToOutputQueue(OutputBuffer *);

	// CgsPhysicsSimulationModule.cpp:1434
	void ProcessUpdateExternalBodyQueue(const InputBuffer *);

private:
	// CgsPhysicsSimulationModule.cpp:2241
	void VerifyJointTags();

	// CgsPhysicsSimulationModule.cpp:978
	void ProcessInputBuffers(const InputBuffer *);

	// CgsPhysicsSimulationModule.cpp:1018
	void ProcessAddRigidBodyQueue(const InputBuffer *);

	// CgsPhysicsSimulationModule.cpp:1342
	void ProcessUpdateRigidBodyQueue(const InputBuffer *);

	// CgsPhysicsSimulationModule.cpp:1391
	void ProcessApplyForceQueue(const InputBuffer *);

	// CgsPhysicsSimulationModule.cpp:1129
	void ProcessRemoveRigidBodyQueue(const InputBuffer *);

	// CgsPhysicsSimulationModule.cpp:1094
	void ProcessRemoveAllRigidBodiesQueue(const InputBuffer *);

	// CgsPhysicsSimulationModule.cpp:1224
	void ProcessAddContactQueue(const InputBuffer *);

	// CgsPhysicsSimulationModule.cpp:2049
	// Declaration
	void AddContactSpiesToOutputQueue(const InputBuffer *, OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPhysicsSimulationModule.cpp:2072
		using namespace CgsDev::Message;

		// CgsPhysicsSimulationModule.cpp:2075
		using namespace CgsDev::Message;

		// CgsPhysicsSimulationModule.cpp:2081
		using namespace CgsDev::Message;

		// CgsPhysicsSimulationModule.cpp:2085
		using namespace CgsDev::Message;

		// CgsPhysicsSimulationModule.cpp:2108
		using namespace CgsDev::Message;

		// CgsPhysicsSimulationModule.cpp:2161
		using namespace CgsDev::Message;

	}

	// CgsPhysicsSimulationModule.cpp:2177
	void AddJointSpiesToOutputQueue(OutputBuffer *);

	// CgsPhysicsSimulationModule.cpp:2293
	void AddDriveSpiesToOutputQueue(OutputBuffer *);

	// CgsPhysicsSimulationModule.cpp:1493
	void ProcessAddJointQueue(const InputBuffer *);

	// CgsPhysicsSimulationModule.cpp:1777
	// Declaration
	void ProcessRemoveJointQueue(const InputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPhysicsSimulationModule.cpp:1790
		using namespace CgsDev::Message;

	}

	// CgsPhysicsSimulationModule.cpp:1566
	void ProcessUpdateJointFramesQueue(const InputBuffer *);

	// CgsPhysicsSimulationModule.cpp:1600
	void ProcessUpdateJointLimitsQueue(const InputBuffer *);

	// CgsPhysicsSimulationModule.cpp:1634
	void ProcessSetJointSpyQueue(const InputBuffer *);

	// CgsPhysicsSimulationModule.cpp:1835
	void ProcessAddDriveQueue(const InputBuffer *);

	// CgsPhysicsSimulationModule.cpp:1997
	void ProcessRemoveDriveQueue(const InputBuffer *);

	// CgsPhysicsSimulationModule.cpp:1899
	void ProcessUpdateDriveFramesQueue(const InputBuffer *);

	// CgsPhysicsSimulationModule.cpp:1931
	void ProcessUpdateDriveDynamicsQueue(const InputBuffer *);

	// CgsPhysicsSimulationModule.cpp:1964
	void ProcessSetDriveSpyQueue(const InputBuffer *);

	// CgsPhysicsSimulationModule.cpp:1669
	void ProcessSetRigidBodySpyQueue(const InputBuffer *);

	// CgsPhysicsSimulationModule.cpp:1702
	void ProcessChangeRigidBodyInertiaQueue(const InputBuffer *);

	// CgsPhysicsSimulationModule.cpp:2435
	void UpdateFreezing(OutputBuffer *, IslandGenerator *);

	// CgsPhysicsSimulationModule.cpp:266
	// Declaration
	void AllocateMemoryAndInitialiseRW(rw::IResourceAllocator *, const CgsPhysics::PhysicsSimulationModule::SimulationParams &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPhysicsSimulationModule.cpp:268
		using namespace rw::physics;

	}

	// CgsPhysicsSimulationModule.cpp:363
	void AddBodyToList(int32_t &, int32_t);

	// CgsPhysicsSimulationModule.cpp:2922
	void QuerySimulationToSetFlags();

	// CgsPhysicsSimulationModule.cpp:3003
	void ActiveSetClosure(IslandGenerator *, int32_t, int32_t, int32_t);

	// CgsPhysicsSimulationModule.cpp:3149
	void ActivateAndFreezeAsNeeded(OutputBuffer *);

	// CgsPhysicsSimulationModule.cpp:3190
	void DebugRender(IslandGenerator *);

}

// CgsPhysicsSimulationModule.h:532
extern const uint32_t kuNumBodies = 200;

// CgsPhysicsSimulationModule.h:533
extern const uint32_t kuNumJoints = 36;

// CgsPhysicsSimulationModule.h:534
extern const uint32_t kuNumDrives = 1;

// CgsPhysicsSimulationModule.h:535
extern const uint32_t kuNumPotentialContacts = 1024;

// CgsPhysicsSimulationModule.h:536
extern const uint32_t kuNumCollidingPairs = 1024;

