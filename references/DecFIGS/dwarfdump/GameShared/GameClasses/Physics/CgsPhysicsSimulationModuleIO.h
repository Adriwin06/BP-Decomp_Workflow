// CgsRigidBody.h:24
namespace CgsPhysics {
	// ExternalPhysicsBody.h:28
	namespace PhysicsSimulationIO {
		// CgsPhysicsSimulationModuleIO.h:39
		const uint32_t KU_IA_ANGULAR_DRAG = 1;

		// CgsPhysicsSimulationModuleIO.h:40
		const uint32_t KU_IA_INV_INERTIA = 2;

		// CgsPhysicsSimulationModuleIO.h:41
		const uint32_t KU_IA_INV_MASS = 4;

		// CgsPhysicsSimulationModuleIO.h:42
		const uint32_t KU_IA_LINEAR_DRAG = 8;

		// CgsPhysicsSimulationModuleIO.h:43
		const uint32_t KU_IA_MAX_ANGULAR_DISPLACEMENT = 16;

		// CgsPhysicsSimulationModuleIO.h:44
		const uint32_t KU_IA_MAX_LINEAR_DISPLACEMENT = 32;

		// CgsPhysicsSimulationModuleIO.h:45
		const uint32_t KU_IA_ALL = 63;

		// CgsPhysicsSimulationModuleIO.h:52
		const uint32_t KU_APPLY_FORCE_QUEUE_SIZE = 250;

	}

}

// CgsPhysicsSimulationModuleIO.h:373
struct CgsPhysics::PhysicsSimulationIO::OutContactSpy : public Event {
	// CgsPhysicsSimulationModuleIO.h:384
	Vector3 mFrictionStress;

	// CgsPhysicsSimulationModuleIO.h:385
	Vector3 mNormalStress;

	// CgsPhysicsSimulationModuleIO.h:386
	Vector3 mNormal;

	// CgsPhysicsSimulationModuleIO.h:387
	Vector3 mPointOnA;

	// CgsPhysicsSimulationModuleIO.h:388
	Vector3 mPointOnB;

	// CgsPhysicsSimulationModuleIO.h:389
	RigidBodyId mIDA;

	// CgsPhysicsSimulationModuleIO.h:390
	RigidBodyId mIDB;

	// CgsPhysicsSimulationModuleIO.h:391
	uint32_t muTag;

public:
	// CgsPhysicsSimulationModuleIO.h:379
	void SwapEntityOrder();

	// CgsPhysicsSimulationModuleIO.h:382
	void Clear();

}

// CgsPhysicsSimulationModuleIO.h:67
struct CgsPhysics::PhysicsSimulationIO::InAddRigidBody : public Event {
	// CgsPhysicsSimulationModuleIO.h:69
	RigidBodyId mID;

	// CgsPhysicsSimulationModuleIO.h:70
	NonConstructedClassContainer<CgsPhysics::NewRigidBody> mRigidBody;

	// CgsPhysicsSimulationModuleIO.h:71
	rw::physics::BodyState meState;

}

// CgsPhysicsSimulationModuleIO.h:84
struct CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody : public Event {
	// CgsPhysicsSimulationModuleIO.h:86
	RigidBodyId mID;

	// CgsRigidBody.h:33
	typedef RigidBody RigidBody;

	// CgsPhysicsSimulationModuleIO.h:87
	InUpdateRigidBody::RigidBody mRigidBody;

}

// CgsPhysicsSimulationModuleIO.h:100
struct CgsPhysics::PhysicsSimulationIO::InApplyForce : public Event {
	// CgsPhysicsSimulationModuleIO.h:102
	RigidBodyId mID;

	// CgsPhysicsSimulationModuleIO.h:103
	Vector3 mForce;

}

// CgsPhysicsSimulationModuleIO.h:116
struct CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia : public Event {
	// CgsPhysicsSimulationModuleIO.h:118
	RigidBodyId mID;

	// CgsPhysicsSimulationModuleIO.h:119
	NonConstructedClassContainer<rw::physics::Inertia> mInertia;

	// CgsPhysicsSimulationModuleIO.h:120
	uint32_t mu32Flags;

}

// CgsPhysicsSimulationModuleIO.h:133
struct CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy : public Event {
	// CgsPhysicsSimulationModuleIO.h:135
	RigidBodyId mID;

	// CgsPhysicsSimulationModuleIO.h:136
	bool mSpy;

}

// CgsPhysicsSimulationModuleIO.h:149
struct CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody : public Event {
	// CgsPhysicsSimulationModuleIO.h:151
	RigidBodyId mID;

	// CgsPhysicsSimulationModuleIO.h:152
	Matrix44Affine mTransform;

	// CgsPhysicsSimulationModuleIO.h:153
	Vector3 mVel;

	// CgsPhysicsSimulationModuleIO.h:154
	Vector3 mAngularVel;

}

// CgsPhysicsSimulationModuleIO.h:167
struct CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody : public Event {
	// CgsPhysicsSimulationModuleIO.h:169
	RigidBodyId mID;

	// CgsPhysicsSimulationModuleIO.h:170
	bool mbFailIfRigidBodyNotFound;

}

// CgsPhysicsSimulationModuleIO.h:183
struct CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies : public Event {
	// CgsPhysicsSimulationModuleIO.h:185
	uint8_t mu8OwnerId;

}

// CgsPhysicsSimulationModuleIO.h:198
struct CgsPhysics::PhysicsSimulationIO::InAddPotentialContact : public Event {
	// CgsPhysicsSimulationModuleIO.h:200
	Vector3 mPointOnA;

	// CgsPhysicsSimulationModuleIO.h:201
	Vector3 mPointOnB;

	// CgsPhysicsSimulationModuleIO.h:202
	Vector3 mNormal;

	// CgsPhysicsSimulationModuleIO.h:203
	RigidBodyId mIDA;

	// CgsPhysicsSimulationModuleIO.h:204
	RigidBodyId mIDB;

	// CgsPhysicsSimulationModuleIO.h:205
	RwReal32 mStaticFriction;

	// CgsPhysicsSimulationModuleIO.h:206
	RwReal32 mDynamicFriction;

	// CgsPhysicsSimulationModuleIO.h:207
	RwReal32 mRestitution;

	// CgsPhysicsSimulationModuleIO.h:208
	uint32_t muTag;

}

// CgsPhysicsSimulationModuleIO.h:221
struct CgsPhysics::PhysicsSimulationIO::InAddJoint : public Event {
	// CgsPhysicsSimulationModuleIO.h:256
	JointId mId;

	// CgsPhysicsSimulationModuleIO.h:257
	RigidBodyId mParentBodyId;

	// CgsPhysicsSimulationModuleIO.h:258
	RigidBodyId mChildBodyId;

	// CgsPhysicsSimulationModuleIO.h:259
	NonConstructedClassContainer<rw::physics::JointFrames> mJointFrames;

	// CgsPhysicsSimulationModuleIO.h:260
	NonConstructedClassContainer<rw::physics::JointLimits> mJointLimits;

	// CgsPhysicsSimulationModuleIO.h:261
	bool mbSpy;

public:
	// CgsPhysicsSimulationModuleIO.h:231
	void ConstructBallAndSocket(JointId, RigidBodyId, RigidBodyId, Matrix44Affine, Matrix44Affine, Vector3, bool);

	// CgsPhysicsSimulationModuleIO.h:242
	void ConstructBallAndSocket(JointId, RigidBodyId, RigidBodyId, Matrix44Affine, Matrix44Affine, Vector3, Vector3, float32_t, bool);

	// CgsPhysicsSimulationModuleIO.h:254
	void ConstructHinge(JointId, RigidBodyId, RigidBodyId, Matrix44Affine, Matrix44Affine, Vector3, Vector3, Vector3, float32_t, bool);

}

// CgsPhysicsSimulationModuleIO.h:266
struct CgsPhysics::PhysicsSimulationIO::InRemoveJoint : public Event {
	// CgsPhysicsSimulationModuleIO.h:268
	JointId mId;

}

// CgsPhysicsSimulationModuleIO.h:273
struct CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames : public Event {
	// CgsPhysicsSimulationModuleIO.h:275
	JointId mId;

	// CgsPhysicsSimulationModuleIO.h:276
	JointFrames mJointFrames;

}

// CgsPhysicsSimulationModuleIO.h:282
struct CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits : public Event {
	// CgsPhysicsSimulationModuleIO.h:284
	JointId mId;

	// CgsPhysicsSimulationModuleIO.h:285
	NonConstructedClassContainer<rw::physics::JointLimits> mJointLimits;

}

// CgsPhysicsSimulationModuleIO.h:291
struct CgsPhysics::PhysicsSimulationIO::InSetJointSpy : public Event {
	// CgsPhysicsSimulationModuleIO.h:293
	JointId mId;

	// CgsPhysicsSimulationModuleIO.h:294
	bool mbSpy;

}

// CgsPhysicsSimulationModuleIO.h:302
struct CgsPhysics::PhysicsSimulationIO::InAddDrive : public Event {
	// CgsPhysicsSimulationModuleIO.h:304
	DriveId mId;

	// CgsPhysicsSimulationModuleIO.h:305
	RigidBodyId mParentBodyId;

	// CgsPhysicsSimulationModuleIO.h:306
	RigidBodyId mChildBodyId;

	// CgsPhysicsSimulationModuleIO.h:307
	NonConstructedClassContainer<rw::physics::DriveFrames> mDriveFrames;

	// CgsPhysicsSimulationModuleIO.h:308
	NonConstructedClassContainer<rw::physics::DriveDynamics> mDriveDynamics;

	// CgsPhysicsSimulationModuleIO.h:309
	bool mbSpy;

}

// CgsPhysicsSimulationModuleIO.h:314
struct CgsPhysics::PhysicsSimulationIO::InRemoveDrive : public Event {
	// CgsPhysicsSimulationModuleIO.h:316
	DriveId mId;

}

// CgsPhysicsSimulationModuleIO.h:321
struct CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames : public Event {
	// CgsPhysicsSimulationModuleIO.h:323
	DriveId mId;

	// CgsPhysicsSimulationModuleIO.h:324
	DriveFrames mDriveFrames;

}

// CgsPhysicsSimulationModuleIO.h:330
struct CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics : public Event {
	// CgsPhysicsSimulationModuleIO.h:332
	DriveId mId;

	// CgsPhysicsSimulationModuleIO.h:333
	NonConstructedClassContainer<rw::physics::DriveDynamics> mDriveDynamics;

}

// CgsPhysicsSimulationModuleIO.h:339
struct CgsPhysics::PhysicsSimulationIO::InSetDriveSpy : public Event {
	// CgsPhysicsSimulationModuleIO.h:341
	DriveId mId;

	// CgsPhysicsSimulationModuleIO.h:342
	bool mbSpy;

}

// CgsPhysicsSimulationModuleIO.h:440
struct CgsPhysics::PhysicsSimulationIO::InputBuffer : public IOBuffer {
private:
	// CgsPhysicsSimulationModuleIO.h:649
	float32_t mfTimeStep;

	// CgsPhysicsSimulationModuleIO.h:650
	uint32_t muMaxIterations;

	// Unknown accessibility
	// CgsPhysicsSimulationModuleIO.h:73
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,200> InAddRigidBodyQueue;

	// CgsPhysicsSimulationModuleIO.h:652
	InputBuffer::InAddRigidBodyQueue mAddRigidBodyQueue;

	// Unknown accessibility
	// CgsPhysicsSimulationModuleIO.h:89
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateRigidBody,200> InUpdateRigidBodyQueue;

	// CgsPhysicsSimulationModuleIO.h:653
	InputBuffer::InUpdateRigidBodyQueue mUpdateRigidBodyQueue;

	// Unknown accessibility
	// CgsPhysicsSimulationModuleIO.h:105
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::InApplyForce,250> InApplyForceQueue;

	// CgsPhysicsSimulationModuleIO.h:654
	InputBuffer::InApplyForceQueue mApplyForceQueue;

	// Unknown accessibility
	// CgsPhysicsSimulationModuleIO.h:122
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia,200> InChangeRigidBodyInertiaQueue;

	// CgsPhysicsSimulationModuleIO.h:655
	InputBuffer::InChangeRigidBodyInertiaQueue mChangeRigidBodyInertiaQueue;

	// Unknown accessibility
	// CgsPhysicsSimulationModuleIO.h:138
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::InSetRigidBodySpy,200> InSetRigidBodySpyQueue;

	// CgsPhysicsSimulationModuleIO.h:656
	InputBuffer::InSetRigidBodySpyQueue mSetRigidBodySpyQueue;

	// Unknown accessibility
	// CgsPhysicsSimulationModuleIO.h:172
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,200> InRemoveRigidBodyQueue;

	// CgsPhysicsSimulationModuleIO.h:657
	InputBuffer::InRemoveRigidBodyQueue mRemoveRigidBodyQueue;

	// Unknown accessibility
	// CgsPhysicsSimulationModuleIO.h:187
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveAllRigidBodies,8> InRemoveAllRigidBodiesQueue;

	// CgsPhysicsSimulationModuleIO.h:658
	InputBuffer::InRemoveAllRigidBodiesQueue mRemoveAllRigidBodiesQueue;

	// Unknown accessibility
	// CgsPhysicsSimulationModuleIO.h:210
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact,1024> InAddContactQueue;

	// CgsPhysicsSimulationModuleIO.h:659
	InputBuffer::InAddContactQueue mAddContactQueue;

	// Unknown accessibility
	// CgsPhysicsSimulationModuleIO.h:263
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,36> InAddJointQueue;

	// CgsPhysicsSimulationModuleIO.h:660
	InputBuffer::InAddJointQueue mAddJointQueue;

	// Unknown accessibility
	// CgsPhysicsSimulationModuleIO.h:270
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,36> InRemoveJointQueue;

	// CgsPhysicsSimulationModuleIO.h:661
	InputBuffer::InRemoveJointQueue mRemoveJointQueue;

	// Unknown accessibility
	// CgsPhysicsSimulationModuleIO.h:279
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointFrames,36> InUpdateJointFramesQueue;

	// CgsPhysicsSimulationModuleIO.h:662
	InputBuffer::InUpdateJointFramesQueue mUpdateJointFramesQueue;

	// Unknown accessibility
	// CgsPhysicsSimulationModuleIO.h:288
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateJointLimits,36> InUpdateJointLimitsQueue;

	// CgsPhysicsSimulationModuleIO.h:663
	InputBuffer::InUpdateJointLimitsQueue mUpdateJointLimitsQueue;

	// Unknown accessibility
	// CgsPhysicsSimulationModuleIO.h:297
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::InSetJointSpy,36> InSetJointSpyQueue;

	// CgsPhysicsSimulationModuleIO.h:664
	InputBuffer::InSetJointSpyQueue mSetJointSpyQueue;

	// Unknown accessibility
	// CgsPhysicsSimulationModuleIO.h:311
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::InAddDrive,1> InAddDriveQueue;

	// CgsPhysicsSimulationModuleIO.h:666
	InputBuffer::InAddDriveQueue mAddDriveQueue;

	// Unknown accessibility
	// CgsPhysicsSimulationModuleIO.h:318
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveDrive,1> InRemoveDriveQueue;

	// CgsPhysicsSimulationModuleIO.h:667
	InputBuffer::InRemoveDriveQueue mRemoveDriveQueue;

	// Unknown accessibility
	// CgsPhysicsSimulationModuleIO.h:327
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveFrames,1> InUpdateDriveFramesQueue;

	// CgsPhysicsSimulationModuleIO.h:668
	InputBuffer::InUpdateDriveFramesQueue mUpdateDriveFramesQueue;

	// Unknown accessibility
	// CgsPhysicsSimulationModuleIO.h:336
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateDriveDynamics,1> InUpdateDriveDynamicsQueue;

	// CgsPhysicsSimulationModuleIO.h:669
	InputBuffer::InUpdateDriveDynamicsQueue mUpdateDriveDynamicsQueue;

	// Unknown accessibility
	// CgsPhysicsSimulationModuleIO.h:345
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::InSetDriveSpy,1> InSetDriveSpyQueue;

	// CgsPhysicsSimulationModuleIO.h:670
	InputBuffer::InSetDriveSpyQueue mSetDriveSpyQueue;

	// Unknown accessibility
	// CgsPhysicsSimulationModuleIO.h:156
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,200> InUpdateExternalBodyQueue;

	// CgsPhysicsSimulationModuleIO.h:672
	InputBuffer::InUpdateExternalBodyQueue mUpdateExternalBodyQueue;

public:
	// CgsPhysicsSimulationModuleIO.h:445
	void Construct();

	// CgsPhysicsSimulationModuleIO.h:449
	void Destruct();

	// CgsPhysicsSimulationModuleIO.h:453
	void Clear();

	// CgsPhysicsSimulationModuleIO.h:457
	void SetTimeStep(float32_t);

	// CgsPhysicsSimulationModuleIO.h:460
	float32_t GetTimeStep() const;

	// CgsPhysicsSimulationModuleIO.h:463
	float32_t GetTimeStep();

	// CgsPhysicsSimulationModuleIO.h:467
	void SetMaxIterations(uint32_t);

	// CgsPhysicsSimulationModuleIO.h:470
	uint32_t GetMaxIterations() const;

	// CgsPhysicsSimulationModuleIO.h:477
	const InputBuffer::InAddRigidBodyQueue * GetAddRigidBodyQueue() const;

	// CgsPhysicsSimulationModuleIO.h:480
	const InputBuffer::InUpdateRigidBodyQueue * GetUpdateRigidBodyQueue() const;

	// CgsPhysicsSimulationModuleIO.h:483
	const InputBuffer::InApplyForceQueue * GetApplyForceQueue() const;

	// CgsPhysicsSimulationModuleIO.h:486
	const InputBuffer::InChangeRigidBodyInertiaQueue * GetChangeRigidBodyInertiaQueue() const;

	// CgsPhysicsSimulationModuleIO.h:489
	const InputBuffer::InSetRigidBodySpyQueue * GetSetRigidBodySpyQueue() const;

	// CgsPhysicsSimulationModuleIO.h:492
	const InputBuffer::InRemoveRigidBodyQueue * GetRemoveRigidBodyQueue() const;

	// CgsPhysicsSimulationModuleIO.h:495
	const InputBuffer::InRemoveAllRigidBodiesQueue * GetRemoveAllRigidBodiesQueue() const;

	// CgsPhysicsSimulationModuleIO.h:498
	const InputBuffer::InAddContactQueue * GetAddContactQueue() const;

	// CgsPhysicsSimulationModuleIO.h:501
	const InputBuffer::InAddJointQueue * GetAddJointQueue() const;

	// CgsPhysicsSimulationModuleIO.h:504
	InputBuffer::InAddJointQueue * GetAddJointQueue();

	// CgsPhysicsSimulationModuleIO.h:507
	const InputBuffer::InRemoveJointQueue * GetRemoveJointQueue() const;

	// CgsPhysicsSimulationModuleIO.h:510
	InputBuffer::InRemoveJointQueue * GetRemoveJointQueue();

	// CgsPhysicsSimulationModuleIO.h:513
	const InputBuffer::InUpdateJointFramesQueue * GetUpdateJointFramesQueue() const;

	// CgsPhysicsSimulationModuleIO.h:516
	const InputBuffer::InUpdateJointLimitsQueue * GetUpdateJointLimitsQueue() const;

	// CgsPhysicsSimulationModuleIO.h:519
	const InputBuffer::InSetJointSpyQueue * GetSetJointSpyQueue() const;

	// CgsPhysicsSimulationModuleIO.h:522
	const InputBuffer::InAddDriveQueue * GetAddDriveQueue() const;

	// CgsPhysicsSimulationModuleIO.h:525
	const InputBuffer::InRemoveDriveQueue * GetRemoveDriveQueue() const;

	// CgsPhysicsSimulationModuleIO.h:528
	const InputBuffer::InUpdateDriveFramesQueue * GetUpdateDriveFramesQueue() const;

	// CgsPhysicsSimulationModuleIO.h:531
	const InputBuffer::InUpdateDriveDynamicsQueue * GetUpdateDriveDynamicsQueue() const;

	// CgsPhysicsSimulationModuleIO.h:534
	const InputBuffer::InSetDriveSpyQueue * GetSetDriveSpyQueue() const;

	// CgsPhysicsSimulationModuleIO.h:537
	const InputBuffer::InUpdateExternalBodyQueue * GetUpdateExternalBodyQueue() const;

	// CgsPhysicsSimulationModuleIO.h:546
	InputBuffer::InApplyForceQueue * GetApplyForceQueue();

	// CgsPhysicsSimulationModuleIO.h:549
	InputBuffer::InAddRigidBodyQueue * GetAddRigidBodyQueue();

	// CgsPhysicsSimulationModuleIO.h:552
	InputBuffer::InAddContactQueue * GetAddContactQueue();

	// CgsPhysicsSimulationModuleIO.h:555
	InputBuffer::InUpdateExternalBodyQueue * GetUpdateExternalBodyQueue();

	// CgsPhysicsSimulationModuleIO.h:558
	InputBuffer::InRemoveRigidBodyQueue * GetRemoveRigidBodyQueue();

	// CgsPhysicsSimulationModuleIO.h:561
	InputBuffer::InRemoveAllRigidBodiesQueue * GetRemoveAllRigidBodiesQueue();

	// CgsPhysicsSimulationModuleIO.h:564
	InputBuffer::InUpdateRigidBodyQueue * GetUpdateRigidBodyQueue();

	// CgsPhysicsSimulationModuleIO.h:567
	InputBuffer::InUpdateJointFramesQueue * GetUpdateJointFramesQueue();

	// CgsPhysicsSimulationModuleIO.h:570
	InputBuffer::InUpdateJointLimitsQueue * GetUpdateJointLimitsQueue();

}

// CgsRigidBody.h:24
namespace CgsPhysics {
	// CgsPhysicsSimulationModuleIO.h:34
	namespace PhysicsSimulationIO {
		struct InAddRigidBody;

		struct InUpdateRigidBody;

		struct InApplyForce;

		struct InChangeRigidBodyInertia;

		struct InSetRigidBodySpy;

		struct InUpdateExternalBody;

		struct InRemoveRigidBody;

		struct InRemoveAllRigidBodies;

		struct InAddPotentialContact;

		struct InAddJoint;

		struct InRemoveJoint;

		struct InUpdateJointFrames;

		struct InUpdateJointLimits;

		struct InSetJointSpy;

		struct InAddDrive;

		struct InRemoveDrive;

		struct InUpdateDriveFrames;

		struct InUpdateDriveDynamics;

		struct InSetDriveSpy;

		struct OutUpdateRigidBody;

		struct OutContactSpy;

		struct OutJointSpy;

		struct OutDriveSpy;

		struct InputBuffer;

		struct OutputBuffer;

		// CgsPhysicsSimulationModuleIO.h:39
		const uint32_t KU_IA_ANGULAR_DRAG = 1;

		// CgsPhysicsSimulationModuleIO.h:40
		const uint32_t KU_IA_INV_INERTIA = 2;

		// CgsPhysicsSimulationModuleIO.h:41
		const uint32_t KU_IA_INV_MASS = 4;

		// CgsPhysicsSimulationModuleIO.h:42
		const uint32_t KU_IA_LINEAR_DRAG = 8;

		// CgsPhysicsSimulationModuleIO.h:43
		const uint32_t KU_IA_MAX_ANGULAR_DISPLACEMENT = 16;

		// CgsPhysicsSimulationModuleIO.h:44
		const uint32_t KU_IA_MAX_LINEAR_DISPLACEMENT = 32;

		// CgsPhysicsSimulationModuleIO.h:45
		const uint32_t KU_IA_ALL = 63;

		// CgsPhysicsSimulationModuleIO.h:52
		const uint32_t KU_APPLY_FORCE_QUEUE_SIZE = 250;

	}

}

// CgsPhysicsSimulationModuleIO.h:356
struct CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody : public Event {
	// CgsPhysicsSimulationModuleIO.h:358
	RigidBodyId mID;

	// CgsPhysicsSimulationModuleIO.h:359
	InUpdateRigidBody::RigidBody mRigidBody;

}

// CgsPhysicsSimulationModuleIO.h:404
struct CgsPhysics::PhysicsSimulationIO::OutJointSpy : public Event {
	// CgsPhysicsSimulationModuleIO.h:406
	JointId mID;

	// CgsPhysicsSimulationModuleIO.h:407
	Vector3 mLinearStress;

	// CgsPhysicsSimulationModuleIO.h:408
	Vector3 mAngularStress;

}

// CgsPhysicsSimulationModuleIO.h:421
struct CgsPhysics::PhysicsSimulationIO::OutDriveSpy : public Event {
	// CgsPhysicsSimulationModuleIO.h:423
	DriveId mID;

	// CgsPhysicsSimulationModuleIO.h:424
	Vector3 mLinearStress;

	// CgsPhysicsSimulationModuleIO.h:425
	Vector3 mAngularStress;

	// CgsPhysicsSimulationModuleIO.h:426
	float32_t mLinearDistanceToKey;

	// CgsPhysicsSimulationModuleIO.h:427
	float32_t mAngularDistanceToKey;

}

// CgsPhysicsSimulationModuleIO.h:684
struct CgsPhysics::PhysicsSimulationIO::OutputBuffer : public IOBuffer {
private:
	// CgsPhysicsSimulationModuleIO.h:740
	float32_t mfTimeStepUsed;

	// CgsPhysicsSimulationModuleIO.h:741
	uint32_t muMaxIterationsUsed;

	// Unknown accessibility
	// CgsPhysicsSimulationModuleIO.h:361
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::OutUpdateRigidBody,200> OutUpdateRigidBodyQueue;

	// CgsPhysicsSimulationModuleIO.h:743
	OutputBuffer::OutUpdateRigidBodyQueue mUpdateRigidBodyQueue;

	// Unknown accessibility
	// CgsPhysicsSimulationModuleIO.h:393
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::OutContactSpy,800> OutContactSpyQueue;

	// CgsPhysicsSimulationModuleIO.h:744
	OutputBuffer::OutContactSpyQueue mContactSpyQueue;

	// Unknown accessibility
	// CgsPhysicsSimulationModuleIO.h:410
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::OutJointSpy,64> OutJointSpyQueue;

	// CgsPhysicsSimulationModuleIO.h:745
	OutputBuffer::OutJointSpyQueue mJointSpyQueue;

	// Unknown accessibility
	// CgsPhysicsSimulationModuleIO.h:429
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::OutDriveSpy,1> OutDriveSpyQueue;

	// CgsPhysicsSimulationModuleIO.h:746
	OutputBuffer::OutDriveSpyQueue mDriveSpyQueue;

public:
	// CgsPhysicsSimulationModuleIO.h:689
	void Construct();

	// CgsPhysicsSimulationModuleIO.h:693
	void Destruct();

	// CgsPhysicsSimulationModuleIO.h:697
	void Clear();

	// CgsPhysicsSimulationModuleIO.h:701
	void SetTimeStepUsed(float32_t);

	// CgsPhysicsSimulationModuleIO.h:704
	float32_t GetTimeStepUsed() const;

	// CgsPhysicsSimulationModuleIO.h:708
	void SetMaxIterationsUsed(uint32_t);

	// CgsPhysicsSimulationModuleIO.h:711
	uint32_t GetMaxIterationsUsed() const;

	// CgsPhysicsSimulationModuleIO.h:715
	const OutputBuffer::OutUpdateRigidBodyQueue * GetUpdateRigidBodyQueue() const;

	// CgsPhysicsSimulationModuleIO.h:718
	const OutputBuffer::OutContactSpyQueue * GetContactSpyQueue() const;

	// CgsPhysicsSimulationModuleIO.h:721
	const OutputBuffer::OutJointSpyQueue * GetJointSpyQueue() const;

	// CgsPhysicsSimulationModuleIO.h:724
	const OutputBuffer::OutDriveSpyQueue * GetDriveSpyQueue() const;

	// CgsPhysicsSimulationModuleIO.h:728
	OutputBuffer::OutUpdateRigidBodyQueue * GetUpdateRigidBodyQueue();

	// CgsPhysicsSimulationModuleIO.h:731
	OutputBuffer::OutContactSpyQueue * GetContactSpyQueue();

	// CgsPhysicsSimulationModuleIO.h:734
	OutputBuffer::OutJointSpyQueue * GetJointSpyQueue();

	// CgsPhysicsSimulationModuleIO.h:737
	OutputBuffer::OutDriveSpyQueue * GetDriveSpyQueue();

}

// CgsPhysicsSimulationModuleIO.h:1282
extern void AppendUpdateExternalBodyQueue<60>(const EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,60> *  lpSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModuleIO.h:1284
		CgsDev::StrStream lStrStream;

	}
}

// CgsPhysicsSimulationModuleIO.h:1161
extern void AppendRemoveRigidBodyQueue<50>(const EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,50> *  lpSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModuleIO.h:1163
		CgsDev::StrStream lStrStream;

	}
}

// CgsPhysicsSimulationModuleIO.h:1111
extern void AppendAddRigidBodyQueue<50>(const EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,50> *  lpSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModuleIO.h:1113
		CgsDev::StrStream lStrStream;

	}
}

// CgsPhysicsSimulationModuleIO.h:1182
extern void AppendAddJointQueue<10>(const EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,10> *  lpSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModuleIO.h:1184
		CgsDev::StrStream lStrStream;

	}
}

// CgsPhysicsSimulationModuleIO.h:1192
extern void AppendRemoveJointQueue<10>(const EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,10> *  lpSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModuleIO.h:1194
		CgsDev::StrStream lStrStream;

	}
}

// CgsPhysicsSimulationModuleIO.h:1141
extern void AppendChangeRigidBodyInertiaQueue<200>(const EventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia,200> *  lpSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModuleIO.h:1143
		CgsDev::StrStream lStrStream;

	}
}

// CgsPhysicsSimulationModuleIO.h:1111
extern void AppendAddRigidBodyQueue<1>(const EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,1> *  lpSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModuleIO.h:1113
		CgsDev::StrStream lStrStream;

	}
}

// CgsPhysicsSimulationModuleIO.h:221
struct CgsPhysics::PhysicsSimulationIO::InAddJoint : public Event {
	// CgsPhysicsSimulationModuleIO.h:256
	JointId mId;

	// CgsPhysicsSimulationModuleIO.h:257
	RigidBodyId mParentBodyId;

	// CgsPhysicsSimulationModuleIO.h:258
	RigidBodyId mChildBodyId;

	// CgsPhysicsSimulationModuleIO.h:259
	NonConstructedClassContainer<rw::physics::JointFrames> mJointFrames;

	// CgsPhysicsSimulationModuleIO.h:260
	NonConstructedClassContainer<rw::physics::JointLimits> mJointLimits;

	// CgsPhysicsSimulationModuleIO.h:261
	bool mbSpy;

public:
	// CgsPhysicsSimulationModuleIO.h:231
	void ConstructBallAndSocket(JointId, RigidBodyId, RigidBodyId, Matrix44Affine, Matrix44Affine, Vector3, bool);

	// CgsPhysicsSimulationModuleIO.h:242
	// Declaration
	void ConstructBallAndSocket(JointId, RigidBodyId, RigidBodyId, Matrix44Affine, Matrix44Affine, Vector3, Vector3, float32_t, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPhysicsSimulationModuleIO.cpp:316
		using namespace CgsDev::Message;

		// CgsPhysicsSimulationModuleIO.cpp:318
		using namespace CgsDev::Message;

	}

	// CgsPhysicsSimulationModuleIO.h:254
	void ConstructHinge(JointId, RigidBodyId, RigidBodyId, Matrix44Affine, Matrix44Affine, Vector3, Vector3, Vector3, float32_t, bool);

}

