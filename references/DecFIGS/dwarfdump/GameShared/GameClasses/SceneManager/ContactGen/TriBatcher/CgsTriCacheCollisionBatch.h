// CgsTriCacheCollisionBatch.h:108
extern const uint32_t KU_MAX_NUM_BATCHED_OBJECTS = 50;

// CgsTriCacheCollisionBatch.h:132
extern const int32_t KI_MAX_NUM_BATCH_CONTACTS = 500;

// CgsTriCacheCollisionBatch.h:133
extern const int8_t KI_START_ID = 89;

// CgsTriCacheCollisionBatch.h:134
extern const int8_t KI_END_ID = 42;

// CgsTriCacheCollisionBatch.h:50
struct CgsSceneManager::TriCacheCollisionBatch {
private:
	// CgsTriCacheCollisionBatch.h:108
	extern const uint32_t KU_MAX_NUM_BATCHED_OBJECTS = 50;

	// CgsTriCacheCollisionBatch.h:110
	GPInstance[50] maInstanceBoxes;

	// CgsTriCacheCollisionBatch.h:111
	Vector3[50] maInstancePadding;

	// CgsTriCacheCollisionBatch.h:113
	const GPTriangle * mpaTriangles;

	// CgsTriCacheCollisionBatch.h:114
	uint32_t muNumTriangles;

	// CgsTriCacheCollisionBatch.h:115
	uint32_t muNumVolumeInstances;

public:
	// CgsTriCacheCollisionBatch.h:54
	void Construct();

	// CgsTriCacheCollisionBatch.h:57
	void Destruct();

	// CgsTriCacheCollisionBatch.h:62
	bool Prepare(const GPTriangle *, uint32_t);

	// CgsTriCacheCollisionBatch.h:65
	void Release();

	// CgsTriCacheCollisionBatch.h:71
	void AddVolumeInstance(int32_t, const VolumeInstance *, const VolRef::Volume *);

	// CgsTriCacheCollisionBatch.h:74
	uint32_t GetNumVolumeInstances() const;

	// CgsTriCacheCollisionBatch.h:78
	uint32_t GetNumTrianges() const;

	// CgsTriCacheCollisionBatch.h:82
	bool HasSpace() const;

	// CgsTriCacheCollisionBatch.h:86
	bool IsFree() const;

	// CgsTriCacheCollisionBatch.h:90
	const GPTriangle * GetTriangleCache() const;

	// CgsTriCacheCollisionBatch.h:94
	GPInstance * GetGPVolume(int32_t);

	// CgsTriCacheCollisionBatch.h:98
	Vector3 GetVolumeInstancePadding(int32_t) const;

	// CgsTriCacheCollisionBatch.h:103
	void SetTriangleCache(const GPTriangle *);

private:
	// CgsTriCacheCollisionBatch.h:118
	void ClearAll();

}

// CgsTriCacheCollisionBatch.h:130
struct CgsSceneManager::TriCacheCollisionBatchResult {
	// CgsTriCacheCollisionBatch.h:132
	extern const int32_t KI_MAX_NUM_BATCH_CONTACTS = 500;

	// CgsTriCacheCollisionBatch.h:133
	extern const int8_t KI_START_ID = 89;

	// CgsTriCacheCollisionBatch.h:134
	extern const int8_t KI_END_ID = 42;

	// CgsTriCacheCollisionBatch.h:238
	float32_t mCheckSum1;

private:
	// CgsTriCacheCollisionBatch.h:243
	int8_t mi8StartID;

	// CgsTriCacheCollisionBatch.h:244
	IntermedateContact[500] maContacts;

	// CgsTriCacheCollisionBatch.h:245
	int32_t miNumContacts;

	// CgsTriCacheCollisionBatch.h:248
	int8_t mi8EndID;

	// Unknown accessibility
	// CgsTriCacheCollisionBatch.h:251
	float32_t mCheckSum0;

public:
	// CgsTriCacheCollisionBatch.h:139
	void Construct();

	// CgsTriCacheCollisionBatch.h:149
	void Prepare();

	// CgsTriCacheCollisionBatch.h:155
	void Release();

	// CgsTriCacheCollisionBatch.h:164
	void AddContact(Vector3, Vector3, Vector3, uint32_t, uint32_t);

	// CgsTriCacheCollisionBatch.h:187
	const IntermedateContact * GetGeneratedContactQueue();

	// CgsTriCacheCollisionBatch.h:193
	const IntermedateContact & GetResult(int32_t) const;

	// CgsTriCacheCollisionBatch.h:197
	int32_t GetNumResults() const;

	// CgsTriCacheCollisionBatch.h:201
	void ValidateResults();

}

