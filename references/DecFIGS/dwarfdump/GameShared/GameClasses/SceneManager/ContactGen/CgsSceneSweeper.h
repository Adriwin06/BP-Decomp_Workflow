// CgsSceneSweeper.h:92
extern const uint32_t KU_MAX_NUM_COLLIDING_PAIRS = 1024;

// CgsSceneSweeper.h:96
extern const uint32_t KU_MAX_NUM_OBJECTS = 5051;

// CgsSceneSweeper.h:99
extern const int32_t KI_MAX_NUM_DYNAMIC_INTERVALS = 4001;

// CgsSceneSweeper.h:100
extern const int32_t KI_MAX_NUM_STATIC_INTERVALS = 3;

// CgsSceneSweeper.h:101
extern const int32_t KI_MAX_NUM_INACTIVE_INTERVALS = 6101;

// CgsSceneSweeper.h:103
extern const int32_t KI_DYNAMIC_STACK_SIZE = 2000;

// CgsSceneSweeper.h:104
extern const int32_t KI_SECONDARY_STACK_SIZE = 3050;

// CgsEntityId.h:27
namespace CgsSceneManager {
	// Declaration
	struct SceneSweeper {
		// CgsSceneSweeper.h:193
		struct IntervalObjectData {
			// CgsSceneSweeper.h:199
			uint8_t mu8BodyState;

		public:
			// CgsSceneSweeper.h:196
			void Construct();

		}

	}

}

// CgsSceneSweeper.h:48
struct CgsSceneManager::CollidingPair {
private:
	// CgsSceneSweeper.h:74
	uint16_t mu16ObjectA;

	// CgsSceneSweeper.h:75
	uint16_t mu16ObjectB;

	// CgsSceneSweeper.h:76
	float_t mfPadding;

	// CgsSceneSweeper.h:77
	bool mbCull;

public:
	// CgsSceneSweeper.h:54
	void Set(uint16_t, uint16_t, float_t, bool);

	// CgsSceneSweeper.h:58
	uint16_t GetObjectA() const;

	// CgsSceneSweeper.h:62
	uint16_t GetObjectB() const;

	// CgsSceneSweeper.h:66
	float_t GetPadding() const;

	// CgsSceneSweeper.h:70
	bool GetCull() const;

}

// CgsSceneSweeper.h:89
struct CgsSceneManager::SceneSweeper {
	// CgsSceneSweeper.h:92
	extern const uint32_t KU_MAX_NUM_COLLIDING_PAIRS = 1024;

	// CgsSceneSweeper.h:96
	extern const uint32_t KU_MAX_NUM_OBJECTS = 5051;

	// CgsSceneSweeper.h:99
	extern const int32_t KI_MAX_NUM_DYNAMIC_INTERVALS = 4001;

	// CgsSceneSweeper.h:100
	extern const int32_t KI_MAX_NUM_STATIC_INTERVALS = 3;

	// CgsSceneSweeper.h:101
	extern const int32_t KI_MAX_NUM_INACTIVE_INTERVALS = 6101;

	// CgsSceneSweeper.h:103
	extern const int32_t KI_DYNAMIC_STACK_SIZE = 2000;

	// CgsSceneSweeper.h:104
	extern const int32_t KI_SECONDARY_STACK_SIZE = 3050;

	// CgsSceneSweeper.h:174
	extern int32_t siUpdate_SortListsPerfMon;

	// CgsSceneSweeper.h:175
	extern int32_t siUpdate_SweepListsPerfMon;

	// CgsSceneSweeper.h:176
	extern int32_t siUpdate_BuildCollidingPairsPerfMon;

private:
	// CgsSceneSweeper.h:203
	CgsSceneManager::SceneSweeperDebugComponent mDebugComponent;

	// CgsSceneSweeper.h:207
	OverlapPairQueue mOverlappingPairQueue;

	// CgsSceneSweeper.h:210
	ObjectToIntervalMap[5051] maObjectToIntervalMapMem;

	// CgsSceneSweeper.h:211
	Interval[4001] maDynamicIntervalMem;

	// CgsSceneSweeper.h:212
	Interval[3] maStaticIntervalMem;

	// CgsSceneSweeper.h:213
	Interval[6101] maInactiveIntervalMem;

	// CgsSceneSweeper.h:217
	uint16_t[2000] mauDynamicStackIndexMem;

	// CgsSceneSweeper.h:218
	IntervalStackEntry[2000] maDynamicStackIntervalMem;

	// CgsSceneSweeper.h:219
	uint16_t[3050] mauSecondaryStackIndexMem;

	// CgsSceneSweeper.h:220
	IntervalStackEntry[3050] maSecondaryStackIntervalMem;

	// CgsSceneSweeper.h:222
	IntervalList mDynamicIntervalList;

	// CgsSceneSweeper.h:223
	IntervalList mInactiveIntervalList;

	// CgsSceneSweeper.h:224
	IntervalList mStaticIntervalList;

	// CgsSceneSweeper.h:226
	CollidingPair[1024] maCollidingPairs;

	// CgsSceneSweeper.h:228
	CgsSceneManager::SceneSweeper::IntervalObjectData[5051] maObjectData;

	// CgsSceneSweeper.h:230
	BitArray<5051u> mUseInternalCollision;

	// CgsSceneSweeper.h:232
	BitArray<5051u> mCollidingBodies;

	// CgsSceneSweeper.h:235
	bool[5051] mabMovedThisFrame;

	// CgsSceneSweeper.h:237
	BitArray<5051u> mabForceNoPadding;

	// CgsSceneSweeper.h:239
	uint8_t * mpaVolumeInstanceCullingGroup;

	// CgsSceneSweeper.h:240
	BitTable * mpCullingTable;

	// CgsSceneSweeper.h:242
	uint32_t muNumObjects;

	// CgsSceneSweeper.h:243
	uint32_t muNumCollidingPairs;

	// CgsSceneSweeper.h:245
	bool mbSortStaticObjects;

	// CgsSceneSweeper.h:246
	bool mbSortFrozenObjects;

	// CgsSceneSweeper.h:248
	int32_t miTracerID;

public:
	// CgsSceneSweeper.h:109
	void Construct();

	// CgsSceneSweeper.h:112
	void Destruct();

	// CgsSceneSweeper.h:117
	bool Prepare(uint8_t *, BitTable *);

	// CgsSceneSweeper.h:120
	bool Release();

	// CgsSceneSweeper.h:126
	void Update(const EntityManager *);

	// CgsSceneSweeper.h:133
	void AddObject(uint32_t, const AABBox *, rw::physics::BodyState, VolumeInstanceId);

	// CgsSceneSweeper.h:137
	void RemoveObject(uint32_t);

	// CgsSceneSweeper.h:144
	void UpdateObject(uint32_t, const AABBox *, Vector3, VolumeInstanceId);

	// CgsSceneSweeper.h:147
	uint32_t GetNumCollidingPairs() const;

	// CgsSceneSweeper.h:152
	const CollidingPair * GetCollidingPair(uint32_t) const;

	// CgsSceneSweeper.h:157
	void RemoveCollidingPair(uint32_t);

	// CgsSceneSweeper.h:161
	void SetToUseInternalCollision(uint32_t);

	// CgsSceneSweeper.h:166
	bool UseInternalCollision(uint32_t) const;

	// CgsSceneSweeper.h:171
	void ForceNoPadding(uint32_t);

private:
	// CgsSceneSweeper.h:252
	void Clear();

	// CgsSceneSweeper.h:255
	void SortLists();

	// CgsSceneSweeper.h:258
	void SweepLists();

	// CgsSceneSweeper.h:263
	void BuildCollidingPairs(const EntityManager *);

	// CgsSceneSweeper.h:268
	bool CanCollide(uint32_t, uint32_t);

	// CgsSceneSweeper.h:273
	bool ShouldBeCulled(uint32_t, uint32_t);

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// Declaration
	struct SceneSweeper {
		// CgsSceneSweeper.h:182
		enum eObjectBodyState {
			E_DYNAMIC_BODY = 0,
			E_INACTIVE_BODY = 1,
			E_STATIC_BODY = 2,
			E_INVALID_BODY = 3,
			E_NUM_OBJECT_BODY_STATES = 4,
		}

		// CgsSceneSweeper.h:193
		struct IntervalObjectData {
			// CgsSceneSweeper.h:199
			uint8_t mu8BodyState;

		public:
			// CgsSceneSweeper.h:196
			void Construct();

		}

	}

}

// CgsSceneSweeper.h:89
struct CgsSceneManager::SceneSweeper {
	// CgsSceneSweeper.h:92
	extern const uint32_t KU_MAX_NUM_COLLIDING_PAIRS = 1024;

	// CgsSceneSweeper.h:96
	extern const uint32_t KU_MAX_NUM_OBJECTS = 5051;

	// CgsSceneSweeper.h:99
	extern const int32_t KI_MAX_NUM_DYNAMIC_INTERVALS = 4001;

	// CgsSceneSweeper.h:100
	extern const int32_t KI_MAX_NUM_STATIC_INTERVALS = 3;

	// CgsSceneSweeper.h:101
	extern const int32_t KI_MAX_NUM_INACTIVE_INTERVALS = 6101;

	// CgsSceneSweeper.h:103
	extern const int32_t KI_DYNAMIC_STACK_SIZE = 2000;

	// CgsSceneSweeper.h:104
	extern const int32_t KI_SECONDARY_STACK_SIZE = 3050;

	// CgsSceneSweeper.h:174
	extern int32_t siUpdate_SortListsPerfMon;

	// CgsSceneSweeper.h:175
	extern int32_t siUpdate_SweepListsPerfMon;

	// CgsSceneSweeper.h:176
	extern int32_t siUpdate_BuildCollidingPairsPerfMon;

private:
	// CgsSceneSweeper.h:203
	CgsSceneManager::SceneSweeperDebugComponent mDebugComponent;

	// CgsSceneSweeper.h:207
	OverlapPairQueue mOverlappingPairQueue;

	// CgsSceneSweeper.h:210
	ObjectToIntervalMap[5051] maObjectToIntervalMapMem;

	// CgsSceneSweeper.h:211
	Interval[4001] maDynamicIntervalMem;

	// CgsSceneSweeper.h:212
	Interval[3] maStaticIntervalMem;

	// CgsSceneSweeper.h:213
	Interval[6101] maInactiveIntervalMem;

	// CgsSceneSweeper.h:217
	uint16_t[2000] mauDynamicStackIndexMem;

	// CgsSceneSweeper.h:218
	IntervalStackEntry[2000] maDynamicStackIntervalMem;

	// CgsSceneSweeper.h:219
	uint16_t[3050] mauSecondaryStackIndexMem;

	// CgsSceneSweeper.h:220
	IntervalStackEntry[3050] maSecondaryStackIntervalMem;

	// CgsSceneSweeper.h:222
	IntervalList mDynamicIntervalList;

	// CgsSceneSweeper.h:223
	IntervalList mInactiveIntervalList;

	// CgsSceneSweeper.h:224
	IntervalList mStaticIntervalList;

	// CgsSceneSweeper.h:226
	CollidingPair[1024] maCollidingPairs;

	// CgsSceneSweeper.h:228
	CgsSceneManager::SceneSweeper::IntervalObjectData[5051] maObjectData;

	// CgsSceneSweeper.h:230
	BitArray<5051u> mUseInternalCollision;

	// CgsSceneSweeper.h:232
	BitArray<5051u> mCollidingBodies;

	// CgsSceneSweeper.h:235
	bool[5051] mabMovedThisFrame;

	// CgsSceneSweeper.h:237
	BitArray<5051u> mabForceNoPadding;

	// CgsSceneSweeper.h:239
	uint8_t * mpaVolumeInstanceCullingGroup;

	// CgsSceneSweeper.h:240
	BitTable * mpCullingTable;

	// CgsSceneSweeper.h:242
	uint32_t muNumObjects;

	// CgsSceneSweeper.h:243
	uint32_t muNumCollidingPairs;

	// CgsSceneSweeper.h:245
	bool mbSortStaticObjects;

	// CgsSceneSweeper.h:246
	bool mbSortFrozenObjects;

	// CgsSceneSweeper.h:248
	int32_t miTracerID;

public:
	// CgsSceneSweeper.h:109
	void Construct();

	// CgsSceneSweeper.h:112
	void Destruct();

	// CgsSceneSweeper.h:117
	bool Prepare(uint8_t *, BitTable *);

	// CgsSceneSweeper.h:120
	bool Release();

	// CgsSceneSweeper.h:126
	void Update(const EntityManager *);

	// CgsSceneSweeper.h:133
	void AddObject(uint32_t, const AABBox *, rw::physics::BodyState, VolumeInstanceId);

	// CgsSceneSweeper.h:137
	void RemoveObject(uint32_t);

	// CgsSceneSweeper.h:144
	void UpdateObject(uint32_t, const AABBox *, Vector3, VolumeInstanceId);

	// CgsSceneSweeper.h:147
	uint32_t GetNumCollidingPairs() const;

	// CgsSceneSweeper.h:152
	const CollidingPair * GetCollidingPair(uint32_t) const;

	// CgsSceneSweeper.h:157
	void RemoveCollidingPair(uint32_t);

	// CgsSceneSweeper.h:161
	void SetToUseInternalCollision(uint32_t);

	// CgsSceneSweeper.h:166
	bool UseInternalCollision(uint32_t) const;

	// CgsSceneSweeper.h:171
	void ForceNoPadding(uint32_t);

private:
	// CgsSceneSweeper.h:252
	void Clear();

	// CgsSceneSweeper.h:255
	void SortLists();

	// CgsSceneSweeper.h:258
	void SweepLists();

	// CgsSceneSweeper.h:263
	// Declaration
	void BuildCollidingPairs(const EntityManager *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSceneSweeper.cpp:579
		using namespace CgsDev::Message;

	}

	// CgsSceneSweeper.h:268
	bool CanCollide(uint32_t, uint32_t);

	// CgsSceneSweeper.h:273
	bool ShouldBeCulled(uint32_t, uint32_t);

}

