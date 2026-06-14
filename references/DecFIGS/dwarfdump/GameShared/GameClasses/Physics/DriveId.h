// CgsRigidBody.h:24
namespace CgsPhysics {
	// DriveId.h:75
	const DriveId K_INVALID_DRIVE_ID;

}

// DriveId.h:53
struct CgsPhysics::DriveId {
private:
	// DriveId.h:72
	uint64_t mId;

public:
	// DriveId.h:58
	void Set(EntityId, uint16_t);

	// DriveId.h:61
	EntityId GetEntityId() const;

	// DriveId.h:64
	uint16_t GetIndex() const;

	// DriveId.h:67
	void DriveId();

	// DriveId.h:68
	void DriveId(uint64_t);

	// DriveId.h:69
	uint64_t operator std::uint64_t() const;

}

