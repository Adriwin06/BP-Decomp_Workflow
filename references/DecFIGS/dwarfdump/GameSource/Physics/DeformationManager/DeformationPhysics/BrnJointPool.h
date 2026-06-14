// BrnJointPool.h:47
struct BrnPhysics::Deformation::JointPool {
private:
	// BrnJointPool.h:102
	extern const uint32_t KU_MAX_JOINT_INDEX = 29;

	// BrnJointPool.h:104
	bool mbBufferOverrunCheck;

	// BrnJointPool.h:105
	Joint[30] maJoints;

	// BrnJointPool.h:106
	uint8_t mu8NumJoints;

	// BrnJointPool.h:108
	BitArray<30u> mUsedJoints;

public:
	// BrnJointPool.h:51
	void Construct();

	// BrnJointPool.h:54
	void Destruct();

	// BrnJointPool.h:57
	bool Prepare();

	// BrnJointPool.h:60
	bool Release();

	// BrnJointPool.h:70
	Joint * CreateJoint(InputBuffer *, uint16_t, RigidBodyId, BurnoutBodyPartID, Matrix44Affine, Matrix44Affine, const DeformationJointSpec *);

	// BrnJointPool.h:75
	void RemoveJointByIndex(InputBuffer *, int16_t);

	// BrnJointPool.h:79
	bool IsJointInUse(int32_t) const;

	// BrnJointPool.h:83
	const Joint * GetJoint(int32_t) const;

	// BrnJointPool.h:88
	Joint * GetJoint(int32_t);

	// BrnJointPool.h:91
	int32_t GetFirstJointIndex() const;

	// BrnJointPool.h:95
	int32_t GetNextJointIndex(int32_t) const;

	// BrnJointPool.h:98
	int32_t GetNumJoints() const;

}

// BrnJointPool.h:102
extern const uint32_t KU_MAX_JOINT_INDEX = 29;

