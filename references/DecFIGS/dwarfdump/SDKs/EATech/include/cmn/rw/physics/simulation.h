// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:31
	namespace physics {
		// simulation.h:202
		enum SpyingFlag {
			SPY_NOTHING = 0,
			SPY_JOINTS = 1,
			SPY_DRIVES = 2,
			SPY_CONTACTS = 4,
			SPY_FORCE_ENUM_SIZE = 2147483647,
		}

	}

}

// simulation.h:245
struct rw::physics::Simulation {
	// rigidbody.h:525
	typedef RigidBody * RigidBodyPtr;

private:
	// simulation.h:638
	Simulation::RigidBodyPtr m_RB_Stack;

	// Unknown accessibility
	// joint.h:242
	typedef Joint * JointPtr;

	// simulation.h:639
	Simulation::JointPtr m_JT_Stack;

	// Unknown accessibility
	// drive.h:247
	typedef Drive * DrivePtr;

	// simulation.h:640
	Simulation::DrivePtr m_DR_Stack;

	// Unknown accessibility
	// simulation.h:176
	typedef void * voidPtr;

	// simulation.h:643
	Simulation::voidPtr m_RF_Stack;

	// simulation.h:646
	Simulation::voidPtr m_CJ_Stack;

	// simulation.h:647
	Simulation::voidPtr m_JJ_Stack;

	// simulation.h:648
	Simulation::voidPtr m_DJ_Stack;

	// simulation.h:651
	Simulation::RigidBodyPtr m_FreeRB_Anchor;

	// simulation.h:652
	Simulation::RigidBodyPtr m_StaticRB_Anchor;

	// simulation.h:653
	Simulation::RigidBodyPtr m_FrozenRB_Anchor;

	// simulation.h:654
	Simulation::RigidBodyPtr m_ActiveRB_Anchor;

	// simulation.h:655
	Simulation::JointPtr m_FreeJT_Anchor;

	// simulation.h:656
	Simulation::JointPtr m_ActiveJT_Anchor;

	// simulation.h:657
	Simulation::DrivePtr m_FreeDR_Anchor;

	// simulation.h:658
	Simulation::DrivePtr m_ActiveDR_Anchor;

	// simulation.h:661
	uint32_t m_FreeRB_Count;

	// simulation.h:662
	uint32_t m_StaticRB_Count;

	// simulation.h:663
	uint32_t m_FrozenRB_Count;

	// simulation.h:664
	uint32_t m_ActiveRB_Count;

	// simulation.h:665
	uint32_t m_FreeJT_Count;

	// simulation.h:666
	uint32_t m_ActiveJT_Count;

	// simulation.h:667
	uint32_t m_FreeDR_Count;

	// simulation.h:668
	uint32_t m_ActiveDR_Count;

	// simulation.h:669
	uint32_t m_JT_Stride;

	// simulation.h:670
	uint32_t m_DR_Stride;

	// simulation.h:671
	uint32_t m_CT_Count;

	// simulation.h:672
	uint32_t m_CS_Count;

	// simulation.h:673
	uint32_t m_JT_Count;

	// simulation.h:674
	uint32_t m_JS_Count;

	// simulation.h:675
	uint32_t m_DR_Count;

	// simulation.h:676
	uint32_t m_DS_Count;

	// simulation.h:677
	uint32_t m_CT_Max;

	// simulation.h:678
	uint32_t m_JT_Max;

	// simulation.h:679
	uint32_t m_DR_Max;

	// simulation.h:680
	uint32_t m_RF_Max;

	// simulation.h:683
	Vector3 m_Gravity;

	// simulation.h:684
	float32_t m_TimeStep;

	// simulation.h:685
	uint32_t m_CoolDown;

	// simulation.h:686
	float32_t m_MinEnergy;

	// simulation.h:687
	uint32_t m_MaxIteration;

	// simulation.h:690
	rw::physics::SpyingFlag m_SpyFlag;

	// simulation.h:694
	uint32_t m_selectedStages;

	// simulation.h:695
	char[16] m_DMApad;

public:
	// simulation.h:262
	void Simulation();

	// simulation.h:266
	void ~Simulation();

	// simulation.h:272
	ResourceDescriptor GetResourceDescriptor(uint32_t, uint32_t, uint32_t);

	// simulation.h:277
	rw::physics::Simulation * Initialize(const Resource &, uint32_t, uint32_t, uint32_t);

	// simulation.h:282
	RwBool SetWorkspace(const rw::physics::SimulationWorkspace *, uint32_t, uint32_t, uint32_t);

	// simulation.h:286
	void ResetContactStack();

	// simulation.h:290
	void ResetParameters();

	// simulation.h:294
	void HackResetSpyCountHack();

	// simulation.h:301
	RwBool Release();

	// simulation.h:305
	RwBool SimulationUpdate(float32_t);

	// simulation.h:334
	AddrVoidPtrUnion::GlobalAddress SimulationUpdateSPUProlog(float32_t, uint32_t);

	// simulation.h:338
	void SimulationUpdateSPUEpilog(AddrVoidPtrUnion::GlobalAddress);

	// simulation.h:351
	float32_t GetTimeStep() const;

	// simulation.h:355
	Vector3 GetGravity() const;

	// simulation.h:359
	uint32_t GetCoolDown() const;

	// simulation.h:363
	float32_t GetFreezingEnergy() const;

	// simulation.h:367
	uint32_t GetMaxIteration() const;

	// simulation.h:371
	rw::physics::SpyingFlag GetSpyingMode() const;

	// simulation.h:383
	void SetGravity(const rw::math::vpu::Vector3 &);

	// simulation.h:387
	void SetCoolDown(uint32_t);

	// simulation.h:391
	void SetFreezingEnergy(float32_t);

	// simulation.h:395
	void SetMaxIteration(uint32_t);

	// simulation.h:399
	void SetSpyingMode(rw::physics::SpyingFlag);

	// simulation.h:411
	uint32_t GetMaxRigidBody() const;

	// simulation.h:415
	uint32_t GetMaxJoint() const;

	// simulation.h:419
	uint32_t GetMaxDrive() const;

	// simulation.h:423
	uint32_t GetMaxContact() const;

	// simulation.h:427
	uint32_t GetFreeBodyCount() const;

	// simulation.h:431
	uint32_t GetActiveBodyCount() const;

	// simulation.h:435
	uint32_t GetFrozenBodyCount() const;

	// simulation.h:439
	uint32_t GetStaticBodyCount() const;

	// simulation.h:443
	uint32_t GetFreeJointCount() const;

	// simulation.h:447
	uint32_t GetActiveJointCount() const;

	// simulation.h:451
	RwUInt32 GetFreeDriveCount() const;

	// simulation.h:455
	RwUInt32 GetActiveDriveCount() const;

	// simulation.h:459
	uint32_t GetContactCount() const;

	// simulation.h:463
	uint32_t GetContactSpyCount() const;

	// simulation.h:467
	uint32_t GetJointSpyCount() const;

	// simulation.h:471
	RwUInt32 GetDriveSpyCount() const;

	// simulation.h:475
	Contact * GetFreeContact();

	// simulation.h:479
	Contact * GetFreeContactBatch(uint32_t);

	// simulation.h:483
	Contact * GetContact(uint32_t) const;

	// simulation.h:487
	rw::physics::ContactSpy * GetContactSpy(uint32_t) const;

	// simulation.h:491
	rw::physics::JointSpy * GetJointSpy(uint32_t) const;

	// simulation.h:495
	rw::physics::DriveSpy * GetDriveSpy(RwUInt32) const;

	// simulation.h:499
	const RigidBody * GetBodyArray() const;

	// simulation.h:503
	const RigidBody * GetActiveBodyAnchor() const;

	// simulation.h:516
	RigidBody * AddRigidBody(const rw::math::vpu::Matrix44Affine &, Inertia *, rw::physics::BodyState);

	// simulation.h:520
	void RemoveRigidBody(RigidBody *);

	// simulation.h:524
	void FreezeRigidBody(RigidBody *);

	// simulation.h:528
	void ActivateRigidBody(RigidBody *);

	// simulation.h:532
	Joint * AddJoint(RigidBody *, RigidBody *, JointFrames *, JointLimits *);

	// simulation.h:536
	void RemoveJoint(Joint *);

	// simulation.h:540
	Drive * AddDrive(RigidBody *, RigidBody *, DriveFrames *, DriveDynamics *);

	// simulation.h:544
	void RemoveDrive(Drive *);

	// simulation.h:548
	void * GetReactionForces() const;

private:
	// simulation.h:560
	void BatchIntegrator();

	// simulation.h:572
	void SpyContactJacobians();

	// simulation.h:576
	void SpyJointJacobians();

	// simulation.h:580
	void SpyDriveJacobians();

	// simulation.h:592
	void ContactBatchBuild();

	// simulation.h:596
	void JointBatchBuild();

	// simulation.h:600
	void DriveBatchBuild();

	// simulation.h:612
	void Anubis_Pipeline();

	// simulation.h:616
	void Osiris_Pipeline();

	// simulation.h:620
	void Isis_Pipeline();

	// simulation.h:624
	void Horus_Pipeline();

}

