// BrnHashData.h:40
struct BrnPhysics::HashData {
private:
	// BrnHashData.h:64
	VolumeInstanceId mVolumeInstanceID;

	// BrnHashData.h:65
	RigidBodyId mRigidBodyID;

public:
	// BrnHashData.h:44
	void Free();

	// BrnHashData.h:47
	bool IsFree() const;

	// BrnHashData.h:53
	void Set(VolumeInstanceId, RigidBodyId);

	// BrnHashData.h:56
	VolumeInstanceId GetVolumeID() const;

	// BrnHashData.h:60
	RigidBodyId GetRigidBodyID() const;

}

