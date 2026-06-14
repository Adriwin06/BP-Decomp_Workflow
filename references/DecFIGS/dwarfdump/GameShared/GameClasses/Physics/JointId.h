// CgsRigidBody.h:24
namespace CgsPhysics {
	// JointId.h:128
	const JointId K_INVALID_JOINT_ID;

}

// JointId.h:53
struct CgsPhysics::JointId {
private:
	// JointId.h:125
	uint64_t mId;

public:
	// JointId.h:59
	void Set(EntityId, uint16_t, uint16_t);

	// JointId.h:67
	void Set(uint32_t, uint32_t, uint32_t, uint16_t, uint16_t);

	// JointId.h:71
	void Set(uint64_t);

	// JointId.h:75
	void SetEntityId(EntityId);

	// JointId.h:78
	EntityId GetEntityId() const;

	// JointId.h:81
	uint8_t GetEntityIDOwner() const;

	// JointId.h:85
	uint16_t GetEntityIDEntityIndex() const;

	// JointId.h:89
	uint16_t GetEntityIDPartIndex() const;

	// JointId.h:93
	uint16_t GetUserIDA() const;

	// JointId.h:96
	uint16_t GetUserIDB() const;

	// JointId.h:99
	uint16_t GetIndex() const;

	// JointId.h:103
	void SetUserIDA(uint16_t);

	// JointId.h:107
	void SetUserIDB(uint16_t);

	// JointId.h:110
	void SetInvalid();

	// JointId.h:113
	bool IsInvalid() const;

	// JointId.h:116
	uint64_t GetRawId() const;

	// JointId.h:120
	void JointId();

	// JointId.h:121
	void JointId(uint64_t);

	// JointId.h:122
	uint64_t operator std::uint64_t() const;

}

