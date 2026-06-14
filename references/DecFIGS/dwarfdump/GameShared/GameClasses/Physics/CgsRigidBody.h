// CgsRigidBody.h:24
namespace CgsPhysics {
	struct RigidBodyId;

	struct JointId;

	struct DriveId;

	// CgsRigidBody.h:123
	const RigidBodyId K_INVALID_RIGID_BODY_ID;

}

// CgsRigidBody.h:48
struct CgsPhysics::RigidBodyId {
private:
	// CgsRigidBody.h:120
	uint64_t mId;

public:
	// CgsRigidBody.h:54
	void Set(EntityId, uint16_t, uint16_t);

	// CgsRigidBody.h:62
	void Set(uint32_t, uint32_t, uint32_t, uint16_t, uint16_t);

	// CgsRigidBody.h:66
	void Set(uint64_t);

	// CgsRigidBody.h:70
	void SetEntityId(EntityId);

	// CgsRigidBody.h:73
	EntityId GetEntityId() const;

	// CgsRigidBody.h:76
	uint8_t GetEntityIDOwner() const;

	// CgsRigidBody.h:80
	uint16_t GetEntityIDEntityIndex() const;

	// CgsRigidBody.h:84
	uint16_t GetEntityIDPartIndex() const;

	// CgsRigidBody.h:88
	uint16_t GetUserIDA() const;

	// CgsRigidBody.h:91
	uint16_t GetUserIDB() const;

	// CgsRigidBody.h:94
	uint16_t GetIndex() const;

	// CgsRigidBody.h:98
	void SetUserIDA(uint16_t);

	// CgsRigidBody.h:102
	void SetUserIDB(uint16_t);

	// CgsRigidBody.h:105
	void SetInvalid();

	// CgsRigidBody.h:108
	bool IsInvalid() const;

	// CgsRigidBody.h:111
	uint64_t GetRawId() const;

	// CgsRigidBody.h:115
	void RigidBodyId();

	// CgsRigidBody.h:116
	void RigidBodyId(uint64_t);

	// CgsRigidBody.h:117
	uint64_t operator std::uint64_t() const;

}

// CgsRigidBody.h:24
namespace CgsPhysics {
	struct NewRigidBody;

	struct RigidBodyId;

	struct JointId;

	struct DriveId;

	// CgsRigidBody.h:123
	const RigidBodyId K_INVALID_RIGID_BODY_ID;

}

// CgsRigidBody.h:37
struct CgsPhysics::NewRigidBody {
	// CgsRigidBody.h:39
	Matrix44Affine mTransform;

	// CgsRigidBody.h:40
	Vector3 mVelocity;

	// CgsRigidBody.h:41
	Vector3 mAngularVelocity;

	// CgsRigidBody.h:42
	Inertia mInertia;

	// CgsRigidBody.h:43
	bool mbSpy;

}

// CgsRigidBody.h:24
namespace CgsPhysics {
	struct RigidBodyId;

	struct JointId;

	struct DriveId;

	// Declaration
	struct InstanceCollisionListResourceType {
	public:
		InstanceCollisionListResourceType();

	}

	// CgsRigidBody.h:123
	const RigidBodyId K_INVALID_RIGID_BODY_ID;

}

// CgsRigidBody.h:24
namespace CgsPhysics {
	struct NewRigidBody;

	struct RigidBodyId;

	struct JointId;

	struct DriveId;

	struct RigidBodyData;

	struct JointData;

	struct DriveData;

	// Declaration
	struct PhysicsSimulationModule {
	public:
		~PhysicsSimulationModule();

		PhysicsSimulationModule();

	}

	// CgsRigidBody.h:123
	const RigidBodyId K_INVALID_RIGID_BODY_ID;

}

// CgsRigidBody.h:24
namespace CgsPhysics {
	struct NewRigidBody;

	struct RigidBodyId;

	struct JointId;

	struct DriveId;

	struct RigidBodyData;

	struct JointData;

	struct DriveData;

	struct SPUSolverParams;

	struct CollisionMeshData;

	struct InstanceCollision;

	struct InstanceCollisionList;

	struct InstanceCollisionListResourceType;

	// CgsRigidBody.h:123
	const RigidBodyId K_INVALID_RIGID_BODY_ID;

}

