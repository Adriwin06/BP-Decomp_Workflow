// BrnRegion.h:28
namespace BrnTrigger {
	// Declaration
	struct SpawnLocation {
		// BrnSpawnLocation.h:46
		enum Type {
			E_TYPE_PLAYER_SPAWN = 0,
			E_TYPE_CAR_SELECT_LEFT = 1,
			E_TYPE_CAR_SELECT_RIGHT = 2,
			E_TYPE_CAR_UNLOCK = 3,
			E_TYPE_COUNT = 4,
		}

	}

}

// BrnSpawnLocation.h:44
struct BrnTrigger::SpawnLocation {
	// BrnSpawnLocation.h:56
	extern const char *[4] KAPC_TYPE_STRINGS;

private:
	// BrnSpawnLocation.h:88
	Vector3 mPosition;

	// BrnSpawnLocation.h:89
	Vector3 mDirection;

	// BrnSpawnLocation.h:90
	CgsID mJunkyardId;

	// BrnSpawnLocation.h:91
	uint8_t muType;

public:
	// BrnSpawnLocation.h:63
	void Construct(Vector3, Vector3, CgsID, BrnTrigger::SpawnLocation::Type);

	// BrnSpawnLocation.h:66
	Vector3 GetPosition() const;

	// BrnSpawnLocation.h:69
	Vector3 GetDirection() const;

	// BrnSpawnLocation.h:72
	CgsID GetJunkyardId() const;

	// BrnSpawnLocation.h:75
	BrnTrigger::SpawnLocation::Type GetType() const;

	// BrnSpawnLocation.h:78
	void FixDown();

	// BrnSpawnLocation.h:81
	void FixUp();

	// BrnSpawnLocation.h:85
	BrnTrigger::SpawnLocation::Type StringToType(const char *);

}

