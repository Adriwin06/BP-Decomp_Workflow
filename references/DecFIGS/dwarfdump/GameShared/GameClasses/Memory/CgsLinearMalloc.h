// CgsLinearMalloc.h:36
struct CgsMemory::LinearMalloc {
private:
	// CgsLinearMalloc.h:150
	extern const int32_t KI_DEFAULT_ALIGNMENT = 4;

	// CgsLinearMalloc.h:152
	bool mbCreated;

	// CgsLinearMalloc.h:153
	void * mpAlloc;

	// CgsLinearMalloc.h:154
	size_t mnStartAddress;

	// CgsLinearMalloc.h:155
	size_t mnEndAddress;

	// CgsLinearMalloc.h:156
	size_t mnNextAddress;

	// CgsLinearMalloc.h:157
	size_t mnAlignment;

	// CgsLinearMalloc.h:158
	void * mpLastAlloc;

	// CgsLinearMalloc.h:160
	extern LinearMalloc * mpActiveRWAllocator;

	// CgsLinearMalloc.h:161
	extern RwMemoryFunctions mCachedMemoryFuncs;

public:
	// CgsLinearMalloc.h:45
	void Construct();

	// CgsLinearMalloc.h:60
	void Create(void *, size_t);

	// CgsLinearMalloc.h:63
	void Destruct();

	// CgsLinearMalloc.h:66
	void StartRWAllocation();

	// CgsLinearMalloc.h:69
	void StopRWAllocation();

	// CgsLinearMalloc.h:72
	bool IsRWAllocator();

	// CgsLinearMalloc.h:76
	void SetAlignment(size_t);

	// CgsLinearMalloc.h:79
	size_t GetAlignment() const;

	// CgsLinearMalloc.h:82
	size_t GetSize() const;

	// CgsLinearMalloc.h:85
	size_t GetFreeMemory() const;

	// CgsLinearMalloc.h:88
	size_t GetUsage() const;

	// CgsLinearMalloc.h:91
	void * GetStartAddress() const;

	// CgsLinearMalloc.h:95
	void * Malloc(size_t);

	// CgsLinearMalloc.h:98
	size_t AlignUsage();

	// CgsLinearMalloc.h:108
	void FreeAll();

	// CgsLinearMalloc.h:112
	bool IsAddressFromAllocator(const void *) const;

private:
	// CgsLinearMalloc.h:132
	void * MallocRW(size_t, RwUInt32);

	// CgsLinearMalloc.h:138
	void * CallocRW(size_t, size_t, RwUInt32);

	// CgsLinearMalloc.h:144
	void * ReAllocRW(void *, size_t, RwUInt32);

	// CgsLinearMalloc.h:148
	void FreeRW(void *);

}

// CgsLinearMalloc.h:160
extern LinearMalloc * mpActiveRWAllocator;

// CgsLinearMalloc.h:223
extern BrnFlapt::MovieClipInstance * MallocArray<BrnFlapt::MovieClipInstance>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern Im2dTransform * MallocArray<CgsGraphics::Im2dTransform>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern BrnFlapt::TextFieldInstance * MallocArray<BrnFlapt::TextFieldInstance>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:207
extern BrnFlapt::MovieClipInstance * Malloc<BrnFlapt::MovieClipInstance>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:233
extern void * operator new(size_t  size, const LinearMalloc &  mAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:28
namespace CgsMemory {
	struct LinearMalloc;

	struct HeapMalloc;

	struct MemoryBankResourceSet;

	struct DataStreamCommandPoster;

	struct SimpleDataStreamResultIterator;

}

// CgsLinearMalloc.h:207
extern CacheDeviceHeaderStart * Malloc<BrnResource::CacheDeviceHeaderStart>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:207
extern CacheDeviceHeaderMain * Malloc<BrnResource::CacheDeviceHeaderMain>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern CacheDeviceFile * MallocArray<BrnResource::CacheDeviceFile>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern CacheDeviceChunk * MallocArray<BrnResource::CacheDeviceChunk>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern char * MallocArray<char>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:207
extern CacheDeviceHandlePool * Malloc<BrnResource::CacheDeviceHandlePool>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:28
namespace CgsMemory {
	struct LinearMalloc;

	struct HeapMalloc;

	struct DataStreamCommandPoster;

	struct SimpleDataStreamResultIterator;

}

// CgsLinearMalloc.h:223
extern Road::SpanIndex * MallocArray<BrnStreetData::SpanIndex>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern BrnStreetData::Junction::Exit * MallocArray<BrnStreetData::Junction::Exit>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern Street * MallocArray<BrnStreetData::Street>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern Junction * MallocArray<BrnStreetData::Junction>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern Road * MallocArray<BrnStreetData::Road>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern ChallengeParScoresEntry * MallocArray<BrnStreetData::ChallengeParScoresEntry>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern CheckpointData * MallocArray<BrnProgression::CheckpointData>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern CgsID * MallocArray<CgsID>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern ProgressionRankData * MallocArray<BrnProgression::ProgressionRankData>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern EventJunction * MallocArray<BrnProgression::EventJunction>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern RaceEventData * MallocArray<BrnProgression::RaceEventData>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern Rival * MallocArray<BrnProgression::Rival>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern OpponentBalanceData * MallocArray<BrnProgression::OpponentBalanceData>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern EventRacerPersonality * MallocArray<BrnProgression::EventRacerPersonality>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern TrophyUnlockData * MallocArray<BrnProgression::TrophyUnlockData>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern CarOpponentSet * MallocArray<BrnProgression::CarOpponentSet>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern const GenericRegion ** MallocArray<const BrnTrigger::GenericRegion*>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:207
extern AISectionPointMap * Malloc<BrnAI::AISectionPointMap>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern Vector3 * MallocArray<rw::math::vpu::Vector3>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern uint16_t * MallocArray<uint16_t>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:207
extern SmallCollisionGenerator * Malloc<CgsSceneManager::CgsCollision::SmallCollisionGenerator>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern DebugStreamInput * MallocArray<CgsDev::Internal::DebugStreamInput>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:28
namespace CgsMemory {
	struct LinearMalloc;

	struct HeapMalloc;

	struct MemoryBankResourceSet;

}

// CgsLinearMalloc.h:223
extern PolygonSoupSpacialNode * MallocArray<CgsGeometric::PolygonSoupSpacialNode>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern PolygonSoupLeafNode * MallocArray<CgsGeometric::PolygonSoupLeafNode>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern uint16_t * MallocArray<std::uint16_t>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:150
extern const int32_t KI_DEFAULT_ALIGNMENT = 4;

// CgsLinearMalloc.h:223
extern ResourceHandle * MallocArray<CgsResource::ResourceHandle>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern DiskCacheHashTableEntry * MallocArray<CgsFileSystem::DiskCacheHashTableEntry>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLinearMalloc.h:223
extern DiskCacheEntry * MallocArray<CgsFileSystem::DiskCacheEntry>(int32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

