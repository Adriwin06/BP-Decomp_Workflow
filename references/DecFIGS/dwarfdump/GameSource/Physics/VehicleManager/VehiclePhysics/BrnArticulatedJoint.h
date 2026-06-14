// BrnArticulatedJoint.h:48
struct BrnPhysics::Vehicle::ArticulatedJointId : JointId {
public:
	// BrnArticulatedJoint.h:52
	void Construct();

	// BrnArticulatedJoint.h:58
	void Set(uint16_t, EntityId, EntityId);

	// BrnArticulatedJoint.h:62
	void Set(JointId);

	// BrnArticulatedJoint.h:65
	uint64_t GetRawId() const;

	// BrnArticulatedJoint.h:68
	JointId GetBaseJointID() const;

	// BrnArticulatedJoint.h:74
	EntityId GetCabEntityId() const;

	// BrnArticulatedJoint.h:77
	uint16_t GetCabVehicleIndex() const;

	// BrnArticulatedJoint.h:80
	uint16_t GetTrailerVehicleIndex() const;

	// BrnArticulatedJoint.h:83
	uint16_t GetJointPoolIndex() const;

}

// BrnArticulatedJoint.h:96
struct BrnPhysics::Vehicle::ArticulatedJoint {
private:
	// BrnArticulatedJoint.h:115
	Matrix44Affine mParentToJointTransform;

	// BrnArticulatedJoint.h:116
	ArticulatedJointId mJointId;

public:
	// BrnArticulatedJoint.h:100
	void Construct();

	// BrnArticulatedJoint.h:105
	void Set(Matrix44Affine, ArticulatedJointId);

	// BrnArticulatedJoint.h:108
	Matrix44Affine GetParentToJointTransform() const;

	// BrnArticulatedJoint.h:111
	ArticulatedJointId GetJointId() const;

}

