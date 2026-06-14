// CgsObjectPool.h:55
struct CgsContainers::ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t> {
private:
	// CgsObjectPool.h:129
	BrnDirector::DebugLog::LogString[20] maObjectPool;

	// CgsObjectPool.h:130
	int32_t[20] maiObjectFreeQueue;

	// CgsObjectPool.h:131
	int32_t miNumObjectsFree;

	// CgsObjectPool.h:132
	BitArray<20u> mObjectsAllocated;

public:
	// CgsObjectPool.h:143
	void Construct();

	// CgsObjectPool.h:150
	void Destruct();

	// CgsObjectPool.h:157
	bool Prepare();

	// CgsObjectPool.h:165
	bool Release();

	// CgsObjectPool.h:187
	int32_t AllocateObject();

	// CgsObjectPool.h:203
	void FreeObject(int);

	// CgsObjectPool.h:172
	void Clear();

	// CgsObjectPool.h:216
	BrnDirector::DebugLog::LogString & operator[](int);

	// CgsObjectPool.h:226
	const BrnDirector::DebugLog::LogString & operator[](int) const;

	// CgsObjectPool.h:268
	BrnDirector::DebugLog::LogString * GetObjectIgnoreAllocation(int);

	// CgsObjectPool.h:236
	int32_t GetNumFreeSlots() const;

	// CgsObjectPool.h:243
	int32_t GetNumAllocatedSlots() const;

	// CgsObjectPool.h:250
	int32_t GetCapacity() const;

	// CgsObjectPool.h:258
	bool IsObjectAllocated(int) const;

	// CgsObjectPool.h:276
	int32_t FindObject(const BrnDirector::DebugLog::LogString &) const;

	// CgsObjectPool.h:298
	int32_t GetFirstObjectIndex() const;

	// CgsObjectPool.h:306
	int32_t GetNextObjectIndex(int) const;

}

// CgsObjectPool.h:55
struct CgsContainers::ObjectPool<rw::math::vpu::Vector4 [250],8,int32_t> {
private:
	// CgsObjectPool.h:129
	Vector4[8][250] maObjectPool;

	// CgsObjectPool.h:130
	int32_t[8] maiObjectFreeQueue;

	// CgsObjectPool.h:131
	int32_t miNumObjectsFree;

	// CgsObjectPool.h:132
	BitArray<8u> mObjectsAllocated;

public:
	// CgsObjectPool.h:143
	void Construct();

	// CgsObjectPool.h:150
	void Destruct();

	// CgsObjectPool.h:157
	bool Prepare();

	// CgsObjectPool.h:165
	bool Release();

	// CgsObjectPool.h:187
	int32_t AllocateObject();

	// CgsObjectPool.h:203
	void FreeObject(int);

	// CgsObjectPool.h:172
	void Clear();

	// CgsObjectPool.h:216
	Vector4 &[250] operator[](int);

	// CgsObjectPool.h:226
	Vector4 &[250] operator[](int) const;

	// CgsObjectPool.h:268
	Vector4 *[250] GetObjectIgnoreAllocation(int);

	// CgsObjectPool.h:236
	int32_t GetNumFreeSlots() const;

	// CgsObjectPool.h:243
	int32_t GetNumAllocatedSlots() const;

	// CgsObjectPool.h:250
	int32_t GetCapacity() const;

	// CgsObjectPool.h:258
	bool IsObjectAllocated(int) const;

	// CgsObjectPool.h:276
	int32_t FindObject(Vector4 &[250]) const;

	// CgsObjectPool.h:298
	int32_t GetFirstObjectIndex() const;

	// CgsObjectPool.h:306
	int32_t GetNextObjectIndex(int) const;

}

// CgsObjectPool.h:55
struct CgsContainers::ObjectPool<rw::math::vpu::Vector4 [100],20,int32_t> {
private:
	// CgsObjectPool.h:129
	Vector4[20][100] maObjectPool;

	// CgsObjectPool.h:130
	int32_t[20] maiObjectFreeQueue;

	// CgsObjectPool.h:131
	int32_t miNumObjectsFree;

	// CgsObjectPool.h:132
	BitArray<20u> mObjectsAllocated;

public:
	// CgsObjectPool.h:143
	void Construct();

	// CgsObjectPool.h:150
	void Destruct();

	// CgsObjectPool.h:157
	bool Prepare();

	// CgsObjectPool.h:165
	bool Release();

	// CgsObjectPool.h:187
	int32_t AllocateObject();

	// CgsObjectPool.h:203
	void FreeObject(int);

	// CgsObjectPool.h:172
	void Clear();

	// CgsObjectPool.h:216
	Vector4 &[100] operator[](int);

	// CgsObjectPool.h:226
	Vector4 &[100] operator[](int) const;

	// CgsObjectPool.h:268
	Vector4 *[100] GetObjectIgnoreAllocation(int);

	// CgsObjectPool.h:236
	int32_t GetNumFreeSlots() const;

	// CgsObjectPool.h:243
	int32_t GetNumAllocatedSlots() const;

	// CgsObjectPool.h:250
	int32_t GetCapacity() const;

	// CgsObjectPool.h:258
	bool IsObjectAllocated(int) const;

	// CgsObjectPool.h:276
	int32_t FindObject(Vector4 &[100]) const;

	// CgsObjectPool.h:298
	int32_t GetFirstObjectIndex() const;

	// CgsObjectPool.h:306
	int32_t GetNextObjectIndex(int) const;

}

// CgsObjectPool.h:55
struct CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex> {
private:
	// CgsObjectPool.h:129
	BrnDirector::Camera::BehaviourManager::BehaviourHelper[28] maObjectPool;

	// CgsObjectPool.h:130
	BehaviourHelperIndex[28] maiObjectFreeQueue;

	// CgsObjectPool.h:131
	int32_t miNumObjectsFree;

	// CgsObjectPool.h:132
	BitArray<28u> mObjectsAllocated;

public:
	// CgsObjectPool.h:143
	void Construct();

	// CgsObjectPool.h:150
	void Destruct();

	// CgsObjectPool.h:157
	bool Prepare();

	// CgsObjectPool.h:165
	bool Release();

	// CgsObjectPool.h:187
	int32_t AllocateObject();

	// CgsObjectPool.h:203
	void FreeObject(BehaviourHelperIndex);

	// CgsObjectPool.h:172
	void Clear();

	// CgsObjectPool.h:216
	BrnDirector::Camera::BehaviourManager::BehaviourHelper & operator[](BehaviourHelperIndex);

	// CgsObjectPool.h:226
	const BrnDirector::Camera::BehaviourManager::BehaviourHelper & operator[](BehaviourHelperIndex) const;

	// CgsObjectPool.h:268
	BrnDirector::Camera::BehaviourManager::BehaviourHelper * GetObjectIgnoreAllocation(BehaviourHelperIndex);

	// CgsObjectPool.h:236
	int32_t GetNumFreeSlots() const;

	// CgsObjectPool.h:243
	int32_t GetNumAllocatedSlots() const;

	// CgsObjectPool.h:250
	int32_t GetCapacity() const;

	// CgsObjectPool.h:258
	bool IsObjectAllocated(BehaviourHelperIndex) const;

	// CgsObjectPool.h:276
	BehaviourHelperIndex FindObject(const BrnDirector::Camera::BehaviourManager::BehaviourHelper &) const;

	// CgsObjectPool.h:298
	int32_t GetFirstObjectIndex() const;

	// CgsObjectPool.h:306
	int32_t GetNextObjectIndex(int) const;

}

// CgsObjectPool.h:55
struct CgsContainers::ObjectPool<rw::math::vpu::Vector4 [70],20,int32_t> {
private:
	// CgsObjectPool.h:129
	Vector4[20][70] maObjectPool;

	// CgsObjectPool.h:130
	int32_t[20] maiObjectFreeQueue;

	// CgsObjectPool.h:131
	int32_t miNumObjectsFree;

	// CgsObjectPool.h:132
	BitArray<20u> mObjectsAllocated;

public:
	// CgsObjectPool.h:143
	void Construct();

	// CgsObjectPool.h:150
	void Destruct();

	// CgsObjectPool.h:157
	bool Prepare();

	// CgsObjectPool.h:165
	bool Release();

	// CgsObjectPool.h:187
	int32_t AllocateObject();

	// CgsObjectPool.h:203
	void FreeObject(int);

	// CgsObjectPool.h:172
	void Clear();

	// CgsObjectPool.h:216
	Vector4 &[70] operator[](int);

	// CgsObjectPool.h:226
	Vector4 &[70] operator[](int) const;

	// CgsObjectPool.h:268
	Vector4 *[70] GetObjectIgnoreAllocation(int);

	// CgsObjectPool.h:236
	int32_t GetNumFreeSlots() const;

	// CgsObjectPool.h:243
	int32_t GetNumAllocatedSlots() const;

	// CgsObjectPool.h:250
	int32_t GetCapacity() const;

	// CgsObjectPool.h:258
	bool IsObjectAllocated(int) const;

	// CgsObjectPool.h:276
	int32_t FindObject(Vector4 &[70]) const;

	// CgsObjectPool.h:298
	int32_t GetFirstObjectIndex() const;

	// CgsObjectPool.h:306
	int32_t GetNextObjectIndex(int) const;

}

// CgsObjectPool.h:55
struct CgsContainers::ObjectPool<BrnDirector::IceMovie,20,int32_t> {
private:
	// CgsObjectPool.h:129
	IceMovie[20] maObjectPool;

	// CgsObjectPool.h:130
	int32_t[20] maiObjectFreeQueue;

	// CgsObjectPool.h:131
	int32_t miNumObjectsFree;

	// CgsObjectPool.h:132
	BitArray<20u> mObjectsAllocated;

public:
	// CgsObjectPool.h:143
	void Construct();

	// CgsObjectPool.h:150
	void Destruct();

	// CgsObjectPool.h:157
	bool Prepare();

	// CgsObjectPool.h:165
	bool Release();

	// CgsObjectPool.h:187
	int32_t AllocateObject();

	// CgsObjectPool.h:203
	void FreeObject(int);

	// CgsObjectPool.h:172
	void Clear();

	// CgsObjectPool.h:216
	IceMovie & operator[](int);

	// CgsObjectPool.h:226
	const IceMovie & operator[](int) const;

	// CgsObjectPool.h:268
	IceMovie * GetObjectIgnoreAllocation(int);

	// CgsObjectPool.h:236
	int32_t GetNumFreeSlots() const;

	// CgsObjectPool.h:243
	int32_t GetNumAllocatedSlots() const;

	// CgsObjectPool.h:250
	int32_t GetCapacity() const;

	// CgsObjectPool.h:258
	bool IsObjectAllocated(int) const;

	// CgsObjectPool.h:276
	int32_t FindObject(const IceMovie &) const;

	// CgsObjectPool.h:298
	int32_t GetFirstObjectIndex() const;

	// CgsObjectPool.h:306
	int32_t GetNextObjectIndex(int) const;

}

// CgsObjectPool.h:55
struct CgsContainers::ObjectPool<BrnDirector::ICEMoviePlaylist::DebugMenuRemoveData,20,int32_t> {
private:
	// CgsObjectPool.h:129
	BrnDirector::ICEMoviePlaylist::DebugMenuRemoveData[20] maObjectPool;

	// CgsObjectPool.h:130
	int32_t[20] maiObjectFreeQueue;

	// CgsObjectPool.h:131
	int32_t miNumObjectsFree;

	// CgsObjectPool.h:132
	BitArray<20u> mObjectsAllocated;

public:
	// CgsObjectPool.h:143
	void Construct();

	// CgsObjectPool.h:150
	void Destruct();

	// CgsObjectPool.h:157
	bool Prepare();

	// CgsObjectPool.h:165
	bool Release();

	// CgsObjectPool.h:187
	int32_t AllocateObject();

	// CgsObjectPool.h:203
	void FreeObject(int);

	// CgsObjectPool.h:172
	void Clear();

	// CgsObjectPool.h:216
	BrnDirector::ICEMoviePlaylist::DebugMenuRemoveData & operator[](int);

	// CgsObjectPool.h:226
	const BrnDirector::ICEMoviePlaylist::DebugMenuRemoveData & operator[](int) const;

	// CgsObjectPool.h:268
	BrnDirector::ICEMoviePlaylist::DebugMenuRemoveData * GetObjectIgnoreAllocation(int);

	// CgsObjectPool.h:236
	int32_t GetNumFreeSlots() const;

	// CgsObjectPool.h:243
	int32_t GetNumAllocatedSlots() const;

	// CgsObjectPool.h:250
	int32_t GetCapacity() const;

	// CgsObjectPool.h:258
	bool IsObjectAllocated(int) const;

	// CgsObjectPool.h:276
	int32_t FindObject(const BrnDirector::ICEMoviePlaylist::DebugMenuRemoveData &) const;

	// CgsObjectPool.h:298
	int32_t GetFirstObjectIndex() const;

	// CgsObjectPool.h:306
	int32_t GetNextObjectIndex(int) const;

}

// CgsObjectPool.h:55
struct CgsContainers::ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t> {
private:
	// CgsObjectPool.h:129
	BrnGameState::ChallengeManager::StoredLeapingData[7] maObjectPool;

	// CgsObjectPool.h:130
	int32_t[7] maiObjectFreeQueue;

	// CgsObjectPool.h:131
	int32_t miNumObjectsFree;

	// CgsObjectPool.h:132
	BitArray<7u> mObjectsAllocated;

public:
	// CgsObjectPool.h:143
	void Construct();

	// CgsObjectPool.h:150
	void Destruct();

	// CgsObjectPool.h:157
	bool Prepare();

	// CgsObjectPool.h:165
	bool Release();

	// CgsObjectPool.h:187
	int32_t AllocateObject();

	// CgsObjectPool.h:203
	void FreeObject(int);

	// CgsObjectPool.h:172
	void Clear();

	// CgsObjectPool.h:216
	BrnGameState::ChallengeManager::StoredLeapingData & operator[](int);

	// CgsObjectPool.h:226
	const BrnGameState::ChallengeManager::StoredLeapingData & operator[](int) const;

	// CgsObjectPool.h:268
	BrnGameState::ChallengeManager::StoredLeapingData * GetObjectIgnoreAllocation(int);

	// CgsObjectPool.h:236
	int32_t GetNumFreeSlots() const;

	// CgsObjectPool.h:243
	int32_t GetNumAllocatedSlots() const;

	// CgsObjectPool.h:250
	int32_t GetCapacity() const;

	// CgsObjectPool.h:258
	bool IsObjectAllocated(int) const;

	// CgsObjectPool.h:276
	int32_t FindObject(const BrnGameState::ChallengeManager::StoredLeapingData &) const;

	// CgsObjectPool.h:298
	int32_t GetFirstObjectIndex() const;

	// CgsObjectPool.h:306
	int32_t GetNextObjectIndex(int) const;

}

// CgsObjectPool.h:55
struct CgsContainers::ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t> {
private:
	// CgsObjectPool.h:129
	BrnGameState::HUDMessageLogic::BufferedCrashingCar[8] maObjectPool;

	// CgsObjectPool.h:130
	int32_t[8] maiObjectFreeQueue;

	// CgsObjectPool.h:131
	int32_t miNumObjectsFree;

	// CgsObjectPool.h:132
	BitArray<8u> mObjectsAllocated;

public:
	// CgsObjectPool.h:143
	void Construct();

	// CgsObjectPool.h:150
	void Destruct();

	// CgsObjectPool.h:157
	bool Prepare();

	// CgsObjectPool.h:165
	bool Release();

	// CgsObjectPool.h:187
	int32_t AllocateObject();

	// CgsObjectPool.h:203
	void FreeObject(int);

	// CgsObjectPool.h:172
	void Clear();

	// CgsObjectPool.h:216
	BrnGameState::HUDMessageLogic::BufferedCrashingCar & operator[](int);

	// CgsObjectPool.h:226
	const BrnGameState::HUDMessageLogic::BufferedCrashingCar & operator[](int) const;

	// CgsObjectPool.h:268
	BrnGameState::HUDMessageLogic::BufferedCrashingCar * GetObjectIgnoreAllocation(int);

	// CgsObjectPool.h:236
	int32_t GetNumFreeSlots() const;

	// CgsObjectPool.h:243
	int32_t GetNumAllocatedSlots() const;

	// CgsObjectPool.h:250
	int32_t GetCapacity() const;

	// CgsObjectPool.h:258
	bool IsObjectAllocated(int) const;

	// CgsObjectPool.h:276
	int32_t FindObject(const BrnGameState::HUDMessageLogic::BufferedCrashingCar &) const;

	// CgsObjectPool.h:298
	int32_t GetFirstObjectIndex() const;

	// CgsObjectPool.h:306
	int32_t GetNextObjectIndex(int) const;

}

// CgsObjectPool.h:55
struct CgsContainers::ObjectPool<BrnGameState::ChallengeManager::CarLeapingData,7,int32_t> {
private:
	// CgsObjectPool.h:129
	BrnGameState::ChallengeManager::CarLeapingData[7] maObjectPool;

	// CgsObjectPool.h:130
	int32_t[7] maiObjectFreeQueue;

	// CgsObjectPool.h:131
	int32_t miNumObjectsFree;

	// CgsObjectPool.h:132
	BitArray<7u> mObjectsAllocated;

public:
	// CgsObjectPool.h:143
	void Construct();

	// CgsObjectPool.h:150
	void Destruct();

	// CgsObjectPool.h:157
	bool Prepare();

	// CgsObjectPool.h:165
	bool Release();

	// CgsObjectPool.h:187
	int32_t AllocateObject();

	// CgsObjectPool.h:203
	void FreeObject(int);

	// CgsObjectPool.h:172
	void Clear();

	// CgsObjectPool.h:216
	BrnGameState::ChallengeManager::CarLeapingData & operator[](int);

	// CgsObjectPool.h:226
	const BrnGameState::ChallengeManager::CarLeapingData & operator[](int) const;

	// CgsObjectPool.h:268
	BrnGameState::ChallengeManager::CarLeapingData * GetObjectIgnoreAllocation(int);

	// CgsObjectPool.h:236
	int32_t GetNumFreeSlots() const;

	// CgsObjectPool.h:243
	int32_t GetNumAllocatedSlots() const;

	// CgsObjectPool.h:250
	int32_t GetCapacity() const;

	// CgsObjectPool.h:258
	bool IsObjectAllocated(int) const;

	// CgsObjectPool.h:276
	int32_t FindObject(const BrnGameState::ChallengeManager::CarLeapingData &) const;

	// CgsObjectPool.h:298
	int32_t GetFirstObjectIndex() const;

	// CgsObjectPool.h:306
	int32_t GetNextObjectIndex(int) const;

}

// CgsObjectPool.h:55
struct CgsContainers::ObjectPool<CgsSound::Logic::StateManager::RegisteredContent,4,int32_t> {
private:
	// CgsObjectPool.h:129
	CgsSound::Logic::StateManager::RegisteredContent[4] maObjectPool;

	// CgsObjectPool.h:130
	int32_t[4] maiObjectFreeQueue;

	// CgsObjectPool.h:131
	int32_t miNumObjectsFree;

	// CgsObjectPool.h:132
	BitArray<4u> mObjectsAllocated;

public:
	// CgsObjectPool.h:143
	void Construct();

	// CgsObjectPool.h:150
	void Destruct();

	// CgsObjectPool.h:157
	bool Prepare();

	// CgsObjectPool.h:165
	bool Release();

	// CgsObjectPool.h:187
	int32_t AllocateObject();

	// CgsObjectPool.h:203
	void FreeObject(int);

	// CgsObjectPool.h:172
	void Clear();

	// CgsObjectPool.h:216
	CgsSound::Logic::StateManager::RegisteredContent & operator[](int);

	// CgsObjectPool.h:226
	const CgsSound::Logic::StateManager::RegisteredContent & operator[](int) const;

	// CgsObjectPool.h:268
	CgsSound::Logic::StateManager::RegisteredContent * GetObjectIgnoreAllocation(int);

	// CgsObjectPool.h:236
	int32_t GetNumFreeSlots() const;

	// CgsObjectPool.h:243
	int32_t GetNumAllocatedSlots() const;

	// CgsObjectPool.h:250
	int32_t GetCapacity() const;

	// CgsObjectPool.h:258
	bool IsObjectAllocated(int) const;

	// CgsObjectPool.h:276
	int32_t FindObject(const CgsSound::Logic::StateManager::RegisteredContent &) const;

	// CgsObjectPool.h:298
	int32_t GetFirstObjectIndex() const;

	// CgsObjectPool.h:306
	int32_t GetNextObjectIndex(int) const;

}

// CgsObjectPool.h:55
struct CgsContainers::ObjectPool<CgsSceneManager::SceneManagerEntity,10000,int32_t> {
private:
	// CgsObjectPool.h:129
	SceneManagerEntity[10000] maObjectPool;

	// CgsObjectPool.h:130
	int32_t[10000] maiObjectFreeQueue;

	// CgsObjectPool.h:131
	int32_t miNumObjectsFree;

	// CgsObjectPool.h:132
	BitArray<10000u> mObjectsAllocated;

public:
	// CgsObjectPool.h:143
	void Construct();

	// CgsObjectPool.h:150
	void Destruct();

	// CgsObjectPool.h:157
	bool Prepare();

	// CgsObjectPool.h:165
	bool Release();

	// CgsObjectPool.h:187
	int32_t AllocateObject();

	// CgsObjectPool.h:203
	void FreeObject(int);

	// CgsObjectPool.h:172
	void Clear();

	// CgsObjectPool.h:216
	SceneManagerEntity & operator[](int);

	// CgsObjectPool.h:226
	const SceneManagerEntity & operator[](int) const;

	// CgsObjectPool.h:268
	SceneManagerEntity * GetObjectIgnoreAllocation(int);

	// CgsObjectPool.h:236
	int32_t GetNumFreeSlots() const;

	// CgsObjectPool.h:243
	int32_t GetNumAllocatedSlots() const;

	// CgsObjectPool.h:250
	int32_t GetCapacity() const;

	// CgsObjectPool.h:258
	bool IsObjectAllocated(int) const;

	// CgsObjectPool.h:276
	int32_t FindObject(const SceneManagerEntity &) const;

	// CgsObjectPool.h:298
	int32_t GetFirstObjectIndex() const;

	// CgsObjectPool.h:306
	int32_t GetNextObjectIndex(int) const;

}

// CgsObjectPool.h:55
struct CgsContainers::ObjectPool<CgsSceneManager::VolumeInstance,5048,int32_t> {
private:
	// CgsObjectPool.h:129
	VolumeInstance[5048] maObjectPool;

	// CgsObjectPool.h:130
	int32_t[5048] maiObjectFreeQueue;

	// CgsObjectPool.h:131
	int32_t miNumObjectsFree;

	// CgsObjectPool.h:132
	BitArray<5048u> mObjectsAllocated;

public:
	// CgsObjectPool.h:143
	void Construct();

	// CgsObjectPool.h:150
	void Destruct();

	// CgsObjectPool.h:157
	bool Prepare();

	// CgsObjectPool.h:165
	bool Release();

	// CgsObjectPool.h:187
	int32_t AllocateObject();

	// CgsObjectPool.h:203
	void FreeObject(int);

	// CgsObjectPool.h:172
	void Clear();

	// CgsObjectPool.h:216
	VolumeInstance & operator[](int);

	// CgsObjectPool.h:226
	const VolumeInstance & operator[](int) const;

	// CgsObjectPool.h:268
	VolumeInstance * GetObjectIgnoreAllocation(int);

	// CgsObjectPool.h:236
	int32_t GetNumFreeSlots() const;

	// CgsObjectPool.h:243
	int32_t GetNumAllocatedSlots() const;

	// CgsObjectPool.h:250
	int32_t GetCapacity() const;

	// CgsObjectPool.h:258
	bool IsObjectAllocated(int) const;

	// CgsObjectPool.h:276
	int32_t FindObject(const VolumeInstance &) const;

	// CgsObjectPool.h:298
	int32_t GetFirstObjectIndex() const;

	// CgsObjectPool.h:306
	int32_t GetNextObjectIndex(int) const;

}

// CgsObjectPool.h:55
struct CgsContainers::ObjectPool<CgsSceneManager::VolumeSlot,4608,int32_t> {
private:
	// CgsObjectPool.h:129
	VolumeSlot[4608] maObjectPool;

	// CgsObjectPool.h:130
	int32_t[4608] maiObjectFreeQueue;

	// CgsObjectPool.h:131
	int32_t miNumObjectsFree;

	// CgsObjectPool.h:132
	BitArray<4608u> mObjectsAllocated;

public:
	// CgsObjectPool.h:143
	void Construct();

	// CgsObjectPool.h:150
	void Destruct();

	// CgsObjectPool.h:157
	bool Prepare();

	// CgsObjectPool.h:165
	bool Release();

	// CgsObjectPool.h:187
	int32_t AllocateObject();

	// CgsObjectPool.h:203
	void FreeObject(int);

	// CgsObjectPool.h:172
	void Clear();

	// CgsObjectPool.h:216
	VolumeSlot & operator[](int);

	// CgsObjectPool.h:226
	const VolumeSlot & operator[](int) const;

	// CgsObjectPool.h:268
	VolumeSlot * GetObjectIgnoreAllocation(int);

	// CgsObjectPool.h:236
	int32_t GetNumFreeSlots() const;

	// CgsObjectPool.h:243
	int32_t GetNumAllocatedSlots() const;

	// CgsObjectPool.h:250
	int32_t GetCapacity() const;

	// CgsObjectPool.h:258
	bool IsObjectAllocated(int) const;

	// CgsObjectPool.h:276
	int32_t FindObject(const VolumeSlot &) const;

	// CgsObjectPool.h:298
	int32_t GetFirstObjectIndex() const;

	// CgsObjectPool.h:306
	int32_t GetNextObjectIndex(int) const;

}

// CgsObjectPool.h:55
struct CgsContainers::ObjectPool<CgsSceneManager::VolumeManagerVolume,5048,int32_t> {
private:
	// CgsObjectPool.h:129
	VolumeManagerVolume[5048] maObjectPool;

	// CgsObjectPool.h:130
	int32_t[5048] maiObjectFreeQueue;

	// CgsObjectPool.h:131
	int32_t miNumObjectsFree;

	// CgsObjectPool.h:132
	BitArray<5048u> mObjectsAllocated;

public:
	// CgsObjectPool.h:143
	void Construct();

	// CgsObjectPool.h:150
	void Destruct();

	// CgsObjectPool.h:157
	bool Prepare();

	// CgsObjectPool.h:165
	bool Release();

	// CgsObjectPool.h:187
	int32_t AllocateObject();

	// CgsObjectPool.h:203
	void FreeObject(int);

	// CgsObjectPool.h:172
	void Clear();

	// CgsObjectPool.h:216
	VolumeManagerVolume & operator[](int);

	// CgsObjectPool.h:226
	const VolumeManagerVolume & operator[](int) const;

	// CgsObjectPool.h:268
	VolumeManagerVolume * GetObjectIgnoreAllocation(int);

	// CgsObjectPool.h:236
	int32_t GetNumFreeSlots() const;

	// CgsObjectPool.h:243
	int32_t GetNumAllocatedSlots() const;

	// CgsObjectPool.h:250
	int32_t GetCapacity() const;

	// CgsObjectPool.h:258
	bool IsObjectAllocated(int) const;

	// CgsObjectPool.h:276
	int32_t FindObject(const VolumeManagerVolume &) const;

	// CgsObjectPool.h:298
	int32_t GetFirstObjectIndex() const;

	// CgsObjectPool.h:306
	int32_t GetNextObjectIndex(int) const;

}

// CgsObjectPool.h:55
struct CgsContainers::ObjectPool<CgsSceneManager::SceneManagerEntity,10000,std::int32_t> {
private:
	// CgsObjectPool.h:129
	SceneManagerEntity[10000] maObjectPool;

	// CgsObjectPool.h:130
	int32_t[10000] maiObjectFreeQueue;

	// CgsObjectPool.h:131
	int32_t miNumObjectsFree;

	// CgsObjectPool.h:132
	BitArray<10000u> mObjectsAllocated;

public:
	// CgsObjectPool.h:143
	void Construct();

	// CgsObjectPool.h:150
	void Destruct();

	// CgsObjectPool.h:157
	bool Prepare();

	// CgsObjectPool.h:165
	bool Release();

	// CgsObjectPool.h:187
	int32_t AllocateObject();

	// CgsObjectPool.h:203
	void FreeObject(int);

	// CgsObjectPool.h:172
	void Clear();

	// CgsObjectPool.h:216
	SceneManagerEntity & operator[](int);

	// CgsObjectPool.h:226
	const SceneManagerEntity & operator[](int) const;

	// CgsObjectPool.h:268
	SceneManagerEntity * GetObjectIgnoreAllocation(int);

	// CgsObjectPool.h:236
	int32_t GetNumFreeSlots() const;

	// CgsObjectPool.h:243
	int32_t GetNumAllocatedSlots() const;

	// CgsObjectPool.h:250
	int32_t GetCapacity() const;

	// CgsObjectPool.h:258
	bool IsObjectAllocated(int) const;

	// CgsObjectPool.h:276
	int32_t FindObject(const SceneManagerEntity &) const;

	// CgsObjectPool.h:298
	int32_t GetFirstObjectIndex() const;

	// CgsObjectPool.h:306
	int32_t GetNextObjectIndex(int) const;

}

// CgsObjectPool.h:55
struct CgsContainers::ObjectPool<CgsSceneManager::VolumeInstance,5048,std::int32_t> {
private:
	// CgsObjectPool.h:129
	VolumeInstance[5048] maObjectPool;

	// CgsObjectPool.h:130
	int32_t[5048] maiObjectFreeQueue;

	// CgsObjectPool.h:131
	int32_t miNumObjectsFree;

	// CgsObjectPool.h:132
	BitArray<5048u> mObjectsAllocated;

public:
	// CgsObjectPool.h:143
	void Construct();

	// CgsObjectPool.h:150
	void Destruct();

	// CgsObjectPool.h:157
	bool Prepare();

	// CgsObjectPool.h:165
	bool Release();

	// CgsObjectPool.h:187
	int32_t AllocateObject();

	// CgsObjectPool.h:203
	void FreeObject(int);

	// CgsObjectPool.h:172
	void Clear();

	// CgsObjectPool.h:216
	VolumeInstance & operator[](int);

	// CgsObjectPool.h:226
	const VolumeInstance & operator[](int) const;

	// CgsObjectPool.h:268
	VolumeInstance * GetObjectIgnoreAllocation(int);

	// CgsObjectPool.h:236
	int32_t GetNumFreeSlots() const;

	// CgsObjectPool.h:243
	int32_t GetNumAllocatedSlots() const;

	// CgsObjectPool.h:250
	int32_t GetCapacity() const;

	// CgsObjectPool.h:258
	bool IsObjectAllocated(int) const;

	// CgsObjectPool.h:276
	int32_t FindObject(const VolumeInstance &) const;

	// CgsObjectPool.h:298
	int32_t GetFirstObjectIndex() const;

	// CgsObjectPool.h:306
	int32_t GetNextObjectIndex(int) const;

}

// CgsObjectPool.h:55
struct CgsContainers::ObjectPool<CgsSceneManager::VolumeSlot,4608,std::int32_t> {
private:
	// CgsObjectPool.h:129
	VolumeSlot[4608] maObjectPool;

	// CgsObjectPool.h:130
	int32_t[4608] maiObjectFreeQueue;

	// CgsObjectPool.h:131
	int32_t miNumObjectsFree;

	// CgsObjectPool.h:132
	BitArray<4608u> mObjectsAllocated;

public:
	// CgsObjectPool.h:143
	void Construct();

	// CgsObjectPool.h:150
	void Destruct();

	// CgsObjectPool.h:157
	bool Prepare();

	// CgsObjectPool.h:165
	bool Release();

	// CgsObjectPool.h:187
	int32_t AllocateObject();

	// CgsObjectPool.h:203
	void FreeObject(int);

	// CgsObjectPool.h:172
	void Clear();

	// CgsObjectPool.h:216
	VolumeSlot & operator[](int);

	// CgsObjectPool.h:226
	const VolumeSlot & operator[](int) const;

	// CgsObjectPool.h:268
	VolumeSlot * GetObjectIgnoreAllocation(int);

	// CgsObjectPool.h:236
	int32_t GetNumFreeSlots() const;

	// CgsObjectPool.h:243
	int32_t GetNumAllocatedSlots() const;

	// CgsObjectPool.h:250
	int32_t GetCapacity() const;

	// CgsObjectPool.h:258
	bool IsObjectAllocated(int) const;

	// CgsObjectPool.h:276
	int32_t FindObject(const VolumeSlot &) const;

	// CgsObjectPool.h:298
	int32_t GetFirstObjectIndex() const;

	// CgsObjectPool.h:306
	int32_t GetNextObjectIndex(int) const;

}

// CgsObjectPool.h:55
struct CgsContainers::ObjectPool<CgsSceneManager::VolumeManagerVolume,5048,std::int32_t> {
private:
	// CgsObjectPool.h:129
	VolumeManagerVolume[5048] maObjectPool;

	// CgsObjectPool.h:130
	int32_t[5048] maiObjectFreeQueue;

	// CgsObjectPool.h:131
	int32_t miNumObjectsFree;

	// CgsObjectPool.h:132
	BitArray<5048u> mObjectsAllocated;

public:
	// CgsObjectPool.h:143
	void Construct();

	// CgsObjectPool.h:150
	void Destruct();

	// CgsObjectPool.h:157
	bool Prepare();

	// CgsObjectPool.h:165
	bool Release();

	// CgsObjectPool.h:187
	int32_t AllocateObject();

	// CgsObjectPool.h:203
	void FreeObject(int);

	// CgsObjectPool.h:172
	void Clear();

	// CgsObjectPool.h:216
	VolumeManagerVolume & operator[](int);

	// CgsObjectPool.h:226
	const VolumeManagerVolume & operator[](int) const;

	// CgsObjectPool.h:268
	VolumeManagerVolume * GetObjectIgnoreAllocation(int);

	// CgsObjectPool.h:236
	int32_t GetNumFreeSlots() const;

	// CgsObjectPool.h:243
	int32_t GetNumAllocatedSlots() const;

	// CgsObjectPool.h:250
	int32_t GetCapacity() const;

	// CgsObjectPool.h:258
	bool IsObjectAllocated(int) const;

	// CgsObjectPool.h:276
	int32_t FindObject(const VolumeManagerVolume &) const;

	// CgsObjectPool.h:298
	int32_t GetFirstObjectIndex() const;

	// CgsObjectPool.h:306
	int32_t GetNextObjectIndex(int) const;

}

