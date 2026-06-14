// CgsRigidBody.h:24
namespace CgsPhysics {
	// CgsPhysicsSimulationModule.cpp:444
	extern uint32_t SPUSimulationUpdateStages(uint32_t);

	// CgsPhysicsSimulationModule.cpp:458
	extern uint32_t SPUSimulationUpdateMaxParallel();

	// CgsPhysicsSimulationModule.cpp:505
	extern uint32_t SPUSimulationUpdateMaxFlat();

	// CgsPhysicsSimulationModule.cpp:541
	extern void InitializeJobParams(AddrVoidPtrUnion::GlobalAddress, RwBool, RwInt32);

	// CgsPhysicsSimulationModule.cpp:555
	extern void RunJobBuildContacts(JobScheduler *);

	// CgsPhysicsSimulationModule.cpp:562
	extern void RunJobBuildJoints(JobScheduler *);

	// CgsPhysicsSimulationModule.cpp:569
	extern void RunJobBuildDrives(JobScheduler *);

	// CgsPhysicsSimulationModule.cpp:576
	extern void RunJobSolver(JobScheduler *);

	// CgsPhysicsSimulationModule.cpp:583
	extern void RunJobGenerateContactSpies(JobScheduler *);

	// CgsPhysicsSimulationModule.cpp:590
	extern void RunJobGenerateJointSpies(JobScheduler *);

	// CgsPhysicsSimulationModule.cpp:597
	extern void RunJobGenerateDriveSpies(JobScheduler *);

	// CgsPhysicsSimulationModule.cpp:604
	extern void RunJobBuildAllConstraints(JobScheduler *);

	// CgsPhysicsSimulationModule.cpp:615
	extern void RunJobGenerateAllSpies(JobScheduler *);

	// CgsPhysicsSimulationModule.cpp:626
	extern void RunJobMultiJobTree(JobScheduler *);

	// CgsPhysicsSimulationModule.cpp:760
	extern void SPUSolverRelease();

	// CgsPhysicsSimulationModule.cpp:522
	extern void InitializeJobs();

	// CgsPhysicsSimulationModule.cpp:382
	extern int64_t PerformanceCounterGetValue();

	// CgsPhysicsSimulationModule.cpp:640
	extern void SPUSolverUpdate(float32_t, Simulation &, uint32_t, RwBool, RwInt32, RwInt64 &, RwInt64 &, JobScheduler *);

	// CgsPhysicsSimulationModule.cpp:47
	const float32_t KF_MAX_PROPORTION_TIMESTEP_CHANGE;

	// CgsPhysicsSimulationModule.cpp:418
	extern SPUSolverParams volatile[8] JobParams;

	// CgsPhysicsSimulationModule.cpp:422
	extern Job[8] gJob;

	// CgsPhysicsSimulationModule.cpp:423
	extern sys_addr_t gSPUElf;

	// CgsPhysicsSimulationModule.cpp:424
	extern uint32_t gSPUSize;

	// CgsPhysicsSimulationModule.cpp:2350
	const VecFloat KVF_MAX_DIST_ALONG_AXIS;

	// CgsPhysicsSimulationModule.cpp:2351
	const rw::math::vpu::Vector3 KV_MAX_POSITION;

	// CgsPhysicsSimulationModule.cpp:2352
	const rw::math::vpu::Vector3 KV_MIN_POSITION;

	// CgsPhysicsSimulationModule.cpp:2353
	const float32_t TEMP_KF_MAX_DISTANCE_FROM_ORIGIN_SQUARED;

}

// CgsPhysicsSimulationModule.cpp:406
struct CgsPhysics::SPUSolverParams {
	// CgsPhysicsSimulationModule.cpp:407
	AddrVoidPtrUnion::GlobalAddress SPUToken;

	// CgsPhysicsSimulationModule.cpp:408
	uint32_t streamData;

	// CgsPhysicsSimulationModule.cpp:409
	uint32_t batchSize;

	// CgsPhysicsSimulationModule.cpp:410
	uint32_t selectedStages;

	// CgsPhysicsSimulationModule.cpp:411
	uint32_t returnCode;

}

// CgsPhysicsSimulationModule.cpp:2634
void CgsPhysics::JointData::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModule.cpp:2636
		int32_t liIndex;

	}
}

// CgsPhysicsSimulationModule.cpp:2749
void CgsPhysics::DriveData::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModule.cpp:2751
		int32_t liIndex;

	}
}

// CgsPhysicsSimulationModule.cpp:2694
void CgsPhysics::JointData::RemoveJoint(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPhysicsSimulationModule.cpp:2876
void CgsPhysics::DriveData::ScaleOneDriveForTimeStep(uint32_t  luDriveIndex, float32_t  lOldTimeStep, float32_t  lNewTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPhysicsSimulationModule.cpp:2801
void CgsPhysics::DriveData::RemoveDrive(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPhysicsSimulationModule.cpp:2726
void CgsPhysics::JointData::GetIndexFromJoint(Joint *  lpJoint) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPhysicsSimulationModule.cpp:2833
void CgsPhysics::DriveData::GetIndexFromDrive(Drive *  lpDrive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPhysicsSimulationModule.cpp:2742
void CgsPhysics::JointData::SetTimeStep(float32_t  lOldTimeStep, float32_t  lNewTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPhysicsSimulationModule.cpp:2850
void CgsPhysics::DriveData::SetTimeStep(float32_t  lOldTimeStep, float32_t  lNewTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPhysicsSimulationModule.cpp:2765
void CgsPhysics::DriveData::AddDrive(Drive *  lpDrive, const const DriveFrames &  lDriveFrames, const const DriveDynamics &  lDriveDynamics, DriveId  lGameID, float32_t  lCurrentTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModule.cpp:2767
		int32_t liIndex;

		// CgsPhysicsSimulationModule.cpp:2768
		int32_t liFreeSlot;

		operator=(/* parameters */);
	}
}

// CgsPhysicsSimulationModule.cpp:2502
void CgsPhysics::RigidBodyData::RemoveBody(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	RigidBodyId::SetInvalid(/* parameters */);
}

// CgsPhysicsSimulationModule.cpp:2649
void CgsPhysics::JointData::AddJoint(Joint *  lpJoint, const const JointFrames &  lJointFrames, const const JointLimits &  lJointLimits, JointId  lGameID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModule.cpp:2651
		int32_t liIndex;

		// CgsPhysicsSimulationModule.cpp:2652
		int32_t liFreeSlot;

	}
	operator=(/* parameters */);
	rw::math::vpu::Quaternion::operator=(/* parameters */);
	rw::math::vpu::Quaternion::operator=(/* parameters */);
}

// CgsPhysicsSimulationModule.cpp:2704
void CgsPhysics::JointData::GetIndexFromGameID(JointId  lGameID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModule.cpp:2706
		int32_t liIndex;

		// CgsPhysicsSimulationModule.cpp:2707
		int32_t liSlot;

	}
}

// CgsPhysicsSimulationModule.cpp:2576
void CgsPhysics::RigidBodyData::GetIndexFromRigidBody(RigidBody *  lpBody) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPhysicsSimulationModule.cpp:2474
void CgsPhysics::RigidBodyData::AddBody(RigidBody *  lpBody, RigidBodyId  lGameID, const const Inertia &  lInertia) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModule.cpp:2476
		int32_t liIndex;

		RigidBodyId::IsInvalid(/* parameters */);
	}
}

// CgsPhysicsSimulationModule.cpp:2606
void CgsPhysics::RigidBodyData::SetTimeStep(float32_t  lOldTimeStep, float32_t  lNewTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModule.cpp:2608
		float scaleCoeff;

		// CgsPhysicsSimulationModule.cpp:2611
		Vector3 scale;

		// CgsPhysicsSimulationModule.cpp:2615
		int32_t luIndex;

		// CgsPhysicsSimulationModule.cpp:2616
		RigidBody * lpBody;

	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::physics::RigidBody::SetLinearVelocity(/* parameters */);
	rw::physics::RigidBody::SetAngularVelocity(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
}

// CgsPhysicsSimulationModule.cpp:2811
void CgsPhysics::DriveData::GetIndexFromGameID(DriveId  lGameID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModule.cpp:2813
		int32_t liIndex;

		// CgsPhysicsSimulationModule.cpp:2814
		int32_t liSlot;

	}
}

// CgsPhysicsSimulationModule.cpp:2452
void CgsPhysics::RigidBodyData::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModule.cpp:2454
		int32_t liIndex;

		RigidBodyId::SetInvalid(/* parameters */);
	}
}

// CgsPhysicsSimulationModule.cpp:2521
void CgsPhysics::RigidBodyData::GetIndexFromGameID(RigidBodyId  lGameID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicsSimulationModule.cpp:2523
		int32_t liIndex;

	}
	{
		// CgsPhysicsSimulationModule.cpp:2544
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsPhysicsSimulationModule.cpp:2545
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	RigidBodyId::GetEntityIDOwner(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsPhysicsSimulationModule.cpp:2537
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

