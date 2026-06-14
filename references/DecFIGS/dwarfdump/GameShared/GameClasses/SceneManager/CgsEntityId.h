// CgsEntityId.h:27
namespace CgsSceneManager {
	struct EntityId;

	struct VolumeInstanceId;

	struct VolumeId;

	struct SceneQueryId;

	struct LineTestIntersection;

	struct ErrorEvent;

	struct VolumeSlot;

	struct CachedTriangleList;

	struct CacheSlot;

	struct TriangleCacheManager;

	// CgsEntityId.h:106
	const EntityId K_INVALID_ENTITY_ID;

}

// CgsEntityId.h:47
struct CgsSceneManager::EntityId {
private:
	// CgsEntityId.h:92
	extern const uint32_t KU_NUM_BITS_FOR_OWNER = 8;

	// CgsEntityId.h:93
	extern const uint32_t KU_NUM_BITS_FOR_ENTITY_NUM = 14;

	// CgsEntityId.h:94
	extern const uint32_t KU_NUM_BITS_FOR_PART_NUM = 10;

	// CgsEntityId.h:95
	extern const uint32_t KU_OWNER_MASK = 4278190080;

	// CgsEntityId.h:96
	extern const uint32_t KU_ENTITY_INDEX_MASK = 16776192;

	// CgsEntityId.h:97
	extern const uint32_t KU_PART_INDEX_MASK = 1023;

	// CgsEntityId.h:98
	extern const uint32_t KU_PART_INDEX_BASE;

	// CgsEntityId.h:99
	extern const uint32_t KU_ENTITY_INDEX_BASE = 10;

	// CgsEntityId.h:100
	extern const uint32_t KU_OWNER_BASE = 24;

	// CgsEntityId.h:101
	extern const uint32_t KU_INVALID_ENTITY_ID = 4294967295;

	// CgsEntityId.h:103
	uint32_t mId;

public:
	// CgsEntityId.h:54
	void Set(uint32_t, uint32_t, uint32_t);

	// CgsEntityId.h:57
	uint8_t GetOwner() const;

	// CgsEntityId.h:60
	uint16_t GetEntityIndex() const;

	// CgsEntityId.h:63
	uint16_t GetPartIndex() const;

	// CgsEntityId.h:66
	bool IsValid() const;

	// CgsEntityId.h:69
	void SetOwner(uint8_t);

	// CgsEntityId.h:72
	void SetEntityIndex(uint32_t);

	// CgsEntityId.h:75
	void SetPartIndex(uint32_t);

	// CgsEntityId.h:78
	void SetInvalid();

	// CgsEntityId.h:81
	uint32_t GetPartComparisonMask() const;

	// CgsEntityId.h:85
	bool IsPartOfSameEntity(const EntityId &) const;

	// CgsEntityId.h:88
	void EntityId();

	// CgsEntityId.h:89
	void EntityId(uint32_t);

	// CgsEntityId.h:90
	uint32_t operator std::uint32_t() const;

}

// CgsEntityId.h:93
extern const uint32_t KU_NUM_BITS_FOR_ENTITY_NUM = 14;

// CgsEntityId.h:94
extern const uint32_t KU_NUM_BITS_FOR_PART_NUM = 10;

// CgsEntityId.h:95
extern const uint32_t KU_OWNER_MASK = 4278190080;

// CgsEntityId.h:96
extern const uint32_t KU_ENTITY_INDEX_MASK = 16776192;

// CgsEntityId.h:97
extern const uint32_t KU_PART_INDEX_MASK = 1023;

// CgsEntityId.h:98
extern const uint32_t KU_PART_INDEX_BASE;

// CgsEntityId.h:99
extern const uint32_t KU_ENTITY_INDEX_BASE = 10;

// CgsEntityId.h:100
extern const uint32_t KU_OWNER_BASE = 24;

// CgsEntityId.h:101
extern const uint32_t KU_INVALID_ENTITY_ID = 4294967295;

// CgsEntityId.h:27
namespace CgsSceneManager {
	struct EntityId;

	struct VolumeInstanceId;

	struct VolumeId;

	struct SceneQueryId;

	struct LineTestIntersection;

	struct ErrorEvent;

	struct VolumeSlot;

	struct CachedTriangleList;

	struct CacheSlot;

	struct TriangleCacheManager;

	struct DrawCollisionPolyCallbackData;

	// CgsEntityId.h:106
	const EntityId K_INVALID_ENTITY_ID;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsEntityId.h:106
	const EntityId K_INVALID_ENTITY_ID;

}

// CgsEntityId.h:27
namespace CgsSceneManager {
	struct EntityId;

	struct VolumeInstanceId;

	struct VolumeId;

	struct SceneQueryId;

	struct DrawCollisionPolyCallbackData;

	// CgsEntityId.h:106
	const EntityId K_INVALID_ENTITY_ID;

}

// CgsEntityId.h:47
struct CgsSceneManager::EntityId {
private:
	// CgsEntityId.h:92
	extern const uint32_t KU_NUM_BITS_FOR_OWNER = 8;

	// CgsEntityId.h:93
	extern const uint32_t KU_NUM_BITS_FOR_ENTITY_NUM = 14;

	// CgsEntityId.h:94
	extern const uint32_t KU_NUM_BITS_FOR_PART_NUM = 10;

	// CgsEntityId.h:95
	extern const uint32_t KU_OWNER_MASK = 4278190080;

	// CgsEntityId.h:96
	extern const uint32_t KU_ENTITY_INDEX_MASK = 16776192;

	// CgsEntityId.h:97
	extern const uint32_t KU_PART_INDEX_MASK = 1023;

	// CgsEntityId.h:98
	extern const uint32_t KU_PART_INDEX_BASE;

	// CgsEntityId.h:99
	extern const uint32_t KU_ENTITY_INDEX_BASE = 10;

	// CgsEntityId.h:100
	extern const uint32_t KU_OWNER_BASE = 24;

	// CgsEntityId.h:101
	extern const uint32_t KU_INVALID_ENTITY_ID = 4294967295;

	// CgsEntityId.h:103
	uint32_t mId;

public:
	// CgsEntityId.h:54
	void Set(uint32_t, uint32_t, uint32_t);

	// CgsEntityId.h:57
	uint8_t GetOwner() const;

	// CgsEntityId.h:60
	uint16_t GetEntityIndex() const;

	// CgsEntityId.h:63
	uint16_t GetPartIndex() const;

	// CgsEntityId.h:66
	bool IsValid() const;

	// CgsEntityId.h:69
	void SetOwner(uint8_t);

	// CgsEntityId.h:72
	void SetEntityIndex(uint32_t);

	// CgsEntityId.h:75
	void SetPartIndex(uint32_t);

	// CgsEntityId.h:78
	void SetInvalid();

	// CgsEntityId.h:81
	uint32_t GetPartComparisonMask() const;

	// CgsEntityId.h:85
	bool IsPartOfSameEntity(const EntityId &) const;

	// CgsEntityId.h:88
	void EntityId();

	// CgsEntityId.h:89
	void EntityId(uint32_t);

	// CgsEntityId.h:90
	uint32_t operator uint32_t() const;

}

// CgsEntityId.h:27
namespace CgsSceneManager {
	struct EntityId;

	struct VolumeId;

	struct VolumeInstanceId;

	struct SceneQueryId;

	struct LineTestIntersection;

	struct ErrorEvent;

	struct VolumeSlot;

	struct CachedTriangleList;

	struct CacheSlot;

	struct TriangleCacheManager;

	struct DrawCollisionPolyCallbackData;

	// CgsEntityId.h:106
	const EntityId K_INVALID_ENTITY_ID;

}

// CgsEntityId.h:27
namespace CgsSceneManager {
	struct EntityId;

	struct VolumeInstanceId;

	struct VolumeId;

	struct SceneQueryId;

	struct VolumeSlot;

	struct CachedTriangleList;

	struct CacheSlot;

	struct TriangleCacheManager;

	struct DrawCollisionPolyCallbackData;

	// CgsEntityId.h:106
	const EntityId K_INVALID_ENTITY_ID;

}

// CgsEntityId.h:27
namespace CgsSceneManager {
	struct EntityId;

	struct VolumeInstanceId;

	struct VolumeId;

	struct SceneQueryId;

	struct LineTestIntersection;

	struct ErrorEvent;

	struct VolumeSlot;

	struct CachedTriangleList;

	struct CacheSlot;

	struct TriangleCacheManager;

	struct SpatialPartitionConstructParams;

	struct DrawCollisionPolyCallbackData;

	struct SceneManagerModule;

	struct Zone;

	struct ZoneList;

	struct LooseOctreeConstructParams;

	// CgsEntityId.h:106
	const EntityId K_INVALID_ENTITY_ID;

}

// CgsEntityId.h:27
namespace CgsSceneManager {
	struct EntityId;

	struct VolumeInstanceId;

	struct VolumeId;

	struct SceneQueryId;

	struct LineTestIntersection;

	struct ErrorEvent;

	struct VolumeInstance;

	struct SceneManagerEntity;

	struct EntityManager;

	struct VolumeManager;

	struct VolumeSlot;

	struct CachedTriangleList;

	struct CacheSlot;

	struct TriangleCacheManager;

	struct OverlappingIntervalPair;

	struct Interval;

	struct IntervalStackEntry;

	struct IntervalStack;

	struct ObjectToIntervalMap;

	struct IntervalList;

	struct CollidingPair;

	// Declaration
	struct SceneSweeperDebugComponent {
	public:
		SceneSweeperDebugComponent();

	}

	// Declaration
	struct OverlapGenerationModule {
	public:
		~OverlapGenerationModule();

		OverlapGenerationModule();

	}

	struct VolumeManagerVolume;

	struct VolumeStore<4608>;

	struct DrawCollisionPolyCallbackData;

	struct TriangleCollisionManager;

	// Declaration
	struct SceneManagerModule {
	public:
		~SceneManagerModule();

		SceneManagerModule();

	}

	struct Zone;

	struct ZoneList;

	// Declaration
	struct SceneManagerDebugComponent {
	public:
		SceneManagerDebugComponent();

	}

	// CgsEntityId.h:106
	const EntityId K_INVALID_ENTITY_ID;

}

// CgsEntityId.h:27
namespace CgsSceneManager {
	struct EntityId;

	struct VolumeInstanceId;

	struct VolumeId;

	struct SceneQueryId;

	// CgsEntityId.h:106
	const EntityId K_INVALID_ENTITY_ID;

}

// CgsEntityId.h:27
namespace CgsSceneManager {
	struct EntityId;

	// CgsEntityId.h:106
	const EntityId K_INVALID_ENTITY_ID;

}

