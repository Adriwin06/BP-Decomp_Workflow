// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// BrnArticulatedJointPool.h:42
		const float32_t KF_JOINT_ANGLE_BREAK_EXTENT;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnArticulatedJointPool.h:42
		const float32_t KF_JOINT_ANGLE_BREAK_EXTENT;

	}

}

// BrnArticulatedJointPool.h:69
struct BrnPhysics::Vehicle::ArticulatedJointPool {
private:
	// BrnArticulatedJointPool.h:145
	ArticulatedJoint[10] maJoints;

	// Unknown accessibility
	// BrnArticulatedJointPool.h:57
	typedef BitArray<10u> ArticulatedJointBitArray;

	// BrnArticulatedJointPool.h:146
	ArticulatedJointPool::ArticulatedJointBitArray mUsedJoints;

	// BrnArticulatedJointPool.h:147
	ArticulatedJointPool::ArticulatedJointBitArray mJointsBrokenThisFrame;

	// BrnArticulatedJointPool.h:150
	float32_t mfSwingAngleDegrees;

	// BrnArticulatedJointPool.h:151
	float32_t mfMaxSwingVelocityDegrees;

	// BrnArticulatedJointPool.h:152
	float32_t mfTwistAngleDegrees;

	// BrnArticulatedJointPool.h:153
	float32_t mfMaxTwistVelocityDegrees;

public:
	// BrnArticulatedJointPool.h:73
	void Construct();

	// BrnArticulatedJointPool.h:76
	void Destruct();

	// BrnArticulatedJointPool.h:79
	bool Prepare();

	// BrnArticulatedJointPool.h:82
	bool Release();

	// BrnArticulatedJointPool.h:92
	int32_t CreateJoint(ArticulatedJointCreateBuffer *, RigidBodyId, RigidBodyId, Matrix44Affine, Matrix44Affine, Vector3);

	// BrnArticulatedJointPool.h:98
	void RemoveJoint(ArticulatedJointCreateBuffer *, int32_t);

	// BrnArticulatedJointPool.h:104
	void SendCreateRemoveJointEvents(VehicleOutputRequestInterface *, const ArticulatedJointCreateBuffer *);

	// BrnArticulatedJointPool.h:110
	int32_t GetIndexOfOtherHalf(int32_t, BrnPhysics::Vehicle::PhysicalTrafficVehicle::EArticulatedVehicleType);

	// BrnArticulatedJointPool.h:115
	void RemoveBrokenJointsFromSimulation(ArticulatedJointCreateBuffer *);

	// BrnArticulatedJointPool.h:119
	bool IsJointInUse(int32_t) const;

	// BrnArticulatedJointPool.h:124
	void FlagJointToBeRemoved(int32_t);

	// BrnArticulatedJointPool.h:128
	VecFloat GetSwingBreakAngleRadians() const;

	// BrnArticulatedJointPool.h:132
	VecFloat GetTwistBreakAngleRadians() const;

	// BrnArticulatedJointPool.h:136
	ArticulatedJoint * GetJoint(int32_t);

	// BrnArticulatedJointPool.h:141
	ArticulatedJointId GetJointId(int32_t);

private:
	// BrnArticulatedJointPool.h:157
	int32_t GetFirstJointIndex() const;

	// BrnArticulatedJointPool.h:168
	void ConstructArticulatedJoint(InAddJoint *, ArticulatedJointId, RigidBodyId, RigidBodyId, Matrix44Affine, Matrix44Affine, Vector3);

}

// BrnArticulatedJointPool.h:69
struct BrnPhysics::Vehicle::ArticulatedJointPool {
private:
	// BrnArticulatedJointPool.h:145
	ArticulatedJoint[10] maJoints;

	// Unknown accessibility
	// BrnArticulatedJointPool.h:57
	typedef BitArray<10u> ArticulatedJointBitArray;

	// BrnArticulatedJointPool.h:146
	ArticulatedJointPool::ArticulatedJointBitArray mUsedJoints;

	// BrnArticulatedJointPool.h:147
	ArticulatedJointPool::ArticulatedJointBitArray mJointsBrokenThisFrame;

	// BrnArticulatedJointPool.h:150
	float32_t mfSwingAngleDegrees;

	// BrnArticulatedJointPool.h:151
	float32_t mfMaxSwingVelocityDegrees;

	// BrnArticulatedJointPool.h:152
	float32_t mfTwistAngleDegrees;

	// BrnArticulatedJointPool.h:153
	float32_t mfMaxTwistVelocityDegrees;

public:
	// BrnArticulatedJointPool.h:73
	void Construct();

	// BrnArticulatedJointPool.h:76
	void Destruct();

	// BrnArticulatedJointPool.h:79
	bool Prepare();

	// BrnArticulatedJointPool.h:82
	bool Release();

	// BrnArticulatedJointPool.h:92
	int32_t CreateJoint(ArticulatedJointCreateBuffer *, RigidBodyId, RigidBodyId, Matrix44Affine, Matrix44Affine, Vector3);

	// BrnArticulatedJointPool.h:98
	void RemoveJoint(ArticulatedJointCreateBuffer *, int32_t);

	// BrnArticulatedJointPool.h:104
	// Declaration
	void SendCreateRemoveJointEvents(VehicleOutputRequestInterface *, const ArticulatedJointCreateBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnArticulatedJointPool.cpp:450
		using namespace CgsPhysics::PhysicsSimulationIO;

		// BrnArticulatedJointPool.cpp:462
		using namespace CgsPhysics::PhysicsSimulationIO;

	}

	// BrnArticulatedJointPool.h:110
	int32_t GetIndexOfOtherHalf(int32_t, BrnPhysics::Vehicle::PhysicalTrafficVehicle::EArticulatedVehicleType);

	// BrnArticulatedJointPool.h:115
	void RemoveBrokenJointsFromSimulation(ArticulatedJointCreateBuffer *);

	// BrnArticulatedJointPool.h:119
	bool IsJointInUse(int32_t) const;

	// BrnArticulatedJointPool.h:124
	void FlagJointToBeRemoved(int32_t);

	// BrnArticulatedJointPool.h:128
	VecFloat GetSwingBreakAngleRadians() const;

	// BrnArticulatedJointPool.h:132
	VecFloat GetTwistBreakAngleRadians() const;

	// BrnArticulatedJointPool.h:136
	ArticulatedJoint * GetJoint(int32_t);

	// BrnArticulatedJointPool.h:141
	ArticulatedJointId GetJointId(int32_t);

private:
	// BrnArticulatedJointPool.h:157
	int32_t GetFirstJointIndex() const;

	// BrnArticulatedJointPool.h:168
	void ConstructArticulatedJoint(InAddJoint *, ArticulatedJointId, RigidBodyId, RigidBodyId, Matrix44Affine, Matrix44Affine, Vector3);

}

