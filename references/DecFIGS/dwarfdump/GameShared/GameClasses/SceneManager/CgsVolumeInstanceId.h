// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsVolumeInstanceId.h:152
	const VolumeInstanceId K_INVALID_VOLUME_INSTANCE_ID;

}

// CgsVolumeInstanceId.h:55
struct CgsSceneManager::VolumeInstanceId {
private:
	// CgsVolumeInstanceId.h:127
	uint64_t muId;

	// CgsVolumeInstanceId.h:130
	extern const uint64_t KU_NUM_BITS_FOR_ENTITY_ID = 32;

	// CgsVolumeInstanceId.h:131
	extern const uint64_t KU_NUM_RESERVED_BITS = 24;

	// CgsVolumeInstanceId.h:132
	extern const uint64_t KU_NUM_BITS_FOR_VOLUME_INDEX = 8;

	// CgsVolumeInstanceId.h:135
	extern const uint64_t KU_VOLUME_INDEX_START_INDEX;

	// CgsVolumeInstanceId.h:136
	extern const uint64_t KU_RESERVED_START_INDEX = 8;

	// CgsVolumeInstanceId.h:137
	extern const uint64_t KU_ENTITY_ID_START_INDEX = 32;

	// CgsVolumeInstanceId.h:140
	extern const uint64_t KU_ENTITY_ID_UNSHIFTED_MASK = 4294967295;

	// CgsVolumeInstanceId.h:141
	extern const uint64_t KU_RESERVED_UNSHIFTED_MASK = 16777215;

	// CgsVolumeInstanceId.h:142
	extern const uint64_t KU_VOLUME_INDEX_UNSHIFTED_MASK = 255;

	// CgsVolumeInstanceId.h:143
	extern const uint64_t KU_ENTITY_ID_MASK = [0, 0, 0, 0, 0, 0, 0, 0];

	// CgsVolumeInstanceId.h:144
	extern const uint64_t KU_RESERVED_MASK = 4294967040;

	// CgsVolumeInstanceId.h:145
	extern const uint64_t KU_VOLUME_INDEX_MASK = 255;

public:
	// CgsVolumeInstanceId.h:60
	void Set(EntityId, uint8_t);

	// CgsVolumeInstanceId.h:67
	void Set(uint8_t, uint16_t, uint16_t, uint8_t);

	// CgsVolumeInstanceId.h:71
	void Set(uint64_t);

	// CgsVolumeInstanceId.h:77
	void SetEntityId(uint16_t, uint16_t, uint16_t);

	// CgsVolumeInstanceId.h:80
	void SetEntityId(EntityId);

	// CgsVolumeInstanceId.h:83
	void SetEntityIDOwner(uint8_t);

	// CgsVolumeInstanceId.h:86
	void SetEntityIDEntityIndex(uint32_t);

	// CgsVolumeInstanceId.h:89
	void SetEntityIDPartIndex(uint32_t);

	// CgsVolumeInstanceId.h:92
	void SetVolumeIndex(uint8_t);

	// CgsVolumeInstanceId.h:95
	void SetInvalid();

	// CgsVolumeInstanceId.h:99
	bool IsValid() const;

	// CgsVolumeInstanceId.h:103
	EntityId GetEntityId() const;

	// CgsVolumeInstanceId.h:106
	uint8_t GetEntityIDOwner() const;

	// CgsVolumeInstanceId.h:109
	uint16_t GetEntityIDEntityIndex() const;

	// CgsVolumeInstanceId.h:112
	uint16_t GetEntityIDPartIndex() const;

	// CgsVolumeInstanceId.h:115
	uint16_t GetVolumeIndex() const;

	// CgsVolumeInstanceId.h:118
	uint64_t GetRawID() const;

	// CgsVolumeInstanceId.h:121
	void VolumeInstanceId();

	// CgsVolumeInstanceId.h:122
	void VolumeInstanceId(uint64_t);

	// CgsVolumeInstanceId.h:123
	uint64_t operator std::uint64_t() const;

private:
	// CgsVolumeInstanceId.h:148
	void ClearReservedMembers();

}

// CgsVolumeInstanceId.h:130
extern const uint64_t KU_NUM_BITS_FOR_ENTITY_ID = 32;

// CgsVolumeInstanceId.h:131
extern const uint64_t KU_NUM_RESERVED_BITS = 24;

// CgsVolumeInstanceId.h:132
extern const uint64_t KU_NUM_BITS_FOR_VOLUME_INDEX = 8;

// CgsVolumeInstanceId.h:135
extern const uint64_t KU_VOLUME_INDEX_START_INDEX;

// CgsVolumeInstanceId.h:136
extern const uint64_t KU_RESERVED_START_INDEX = 8;

// CgsVolumeInstanceId.h:137
extern const uint64_t KU_ENTITY_ID_START_INDEX = 32;

// CgsVolumeInstanceId.h:140
extern const uint64_t KU_ENTITY_ID_UNSHIFTED_MASK = 4294967295;

// CgsVolumeInstanceId.h:141
extern const uint64_t KU_RESERVED_UNSHIFTED_MASK = 16777215;

// CgsVolumeInstanceId.h:142
extern const uint64_t KU_VOLUME_INDEX_UNSHIFTED_MASK = 255;

// CgsVolumeInstanceId.h:143
extern const uint64_t KU_ENTITY_ID_MASK = [0, 0, 0, 0, 0, 0, 0, 0];

// CgsVolumeInstanceId.h:144
extern const uint64_t KU_RESERVED_MASK = 4294967040;

// CgsVolumeInstanceId.h:145
extern const uint64_t KU_VOLUME_INDEX_MASK = 255;

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsVolumeInstanceId.h:152
	const VolumeInstanceId K_INVALID_VOLUME_INSTANCE_ID;

}

