// CgsRingBuffer.h:42
struct CgsContainers::RingBuffer<float32_t> {
private:
	// CgsRingBuffer.h:83
	float32_t * mpData;

	// CgsRingBuffer.h:84
	int32_t miMaxLength;

	// CgsRingBuffer.h:85
	int32_t miReadPos;

	// CgsRingBuffer.h:86
	int32_t miWritePos;

	// CgsRingBuffer.h:87
	int32_t miLength;

public:
	// CgsRingBuffer.h:113
	void Construct(float32_t *, int);

	// CgsRingBuffer.h:122
	void Push(const float32_t *);

	// CgsRingBuffer.h:145
	float32_t * Grow();

	// CgsRingBuffer.h:170
	bool Pop(float32_t *);

	// CgsRingBuffer.h:195
	bool Peek(float32_t *) const;

	// CgsRingBuffer.h:210
	int32_t GetLength() const;

	// CgsRingBuffer.h:217
	int32_t GetMaxLength() const;

	// CgsRingBuffer.h:224
	int32_t GetSpace() const;

	// CgsRingBuffer.h:231
	bool IsFull() const;

	// CgsRingBuffer.h:238
	void Clear();

	// CgsRingBuffer.h:247
	const float32_t & operator[](unsigned int) const;

	// CgsRingBuffer.h:256
	float32_t & operator[](unsigned int);

}

// CgsRingBuffer.h:99
struct CgsContainers::FixedRingBuffer<float32_t,256> : public RingBuffer<float32_t> {
private:
	// CgsRingBuffer.h:106
	float32_t[256] maData;

public:
	// CgsRingBuffer.h:265
	void Construct();

}

// CgsRingBuffer.h:42
struct CgsContainers::RingBuffer<CgsFileSystem::CacheDebugEntry> {
private:
	// CgsRingBuffer.h:83
	CacheDebugEntry * mpData;

	// CgsRingBuffer.h:84
	int32_t miMaxLength;

	// CgsRingBuffer.h:85
	int32_t miReadPos;

	// CgsRingBuffer.h:86
	int32_t miWritePos;

	// CgsRingBuffer.h:87
	int32_t miLength;

public:
	// CgsRingBuffer.h:113
	void Construct(CacheDebugEntry *, int);

	// CgsRingBuffer.h:122
	void Push(const CacheDebugEntry *);

	// CgsRingBuffer.h:145
	CacheDebugEntry * Grow();

	// CgsRingBuffer.h:170
	bool Pop(CacheDebugEntry *);

	// CgsRingBuffer.h:195
	bool Peek(CacheDebugEntry *) const;

	// CgsRingBuffer.h:210
	int32_t GetLength() const;

	// CgsRingBuffer.h:217
	int32_t GetMaxLength() const;

	// CgsRingBuffer.h:224
	int32_t GetSpace() const;

	// CgsRingBuffer.h:231
	bool IsFull() const;

	// CgsRingBuffer.h:238
	void Clear();

	// CgsRingBuffer.h:247
	const CacheDebugEntry & operator[](unsigned int) const;

	// CgsRingBuffer.h:256
	CacheDebugEntry & operator[](unsigned int);

}

// CgsRingBuffer.h:99
struct CgsContainers::FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4> : public RingBuffer<CgsFileSystem::CacheDebugEntry> {
private:
	// CgsRingBuffer.h:106
	CacheDebugEntry[4] maData;

public:
	// CgsRingBuffer.h:265
	void Construct();

}

// CgsRingBuffer.h:42
struct CgsContainers::RingBuffer<rw::math::vpu::Vector3> {
private:
	// CgsRingBuffer.h:83
	Vector3 * mpData;

	// CgsRingBuffer.h:84
	int32_t miMaxLength;

	// CgsRingBuffer.h:85
	int32_t miReadPos;

	// CgsRingBuffer.h:86
	int32_t miWritePos;

	// CgsRingBuffer.h:87
	int32_t miLength;

public:
	// CgsRingBuffer.h:113
	void Construct(Vector3 *, int);

	// CgsRingBuffer.h:122
	void Push(const rw::math::vpu::Vector3 *);

	// CgsRingBuffer.h:145
	Vector3 * Grow();

	// CgsRingBuffer.h:170
	bool Pop(Vector3 *);

	// CgsRingBuffer.h:195
	bool Peek(Vector3 *) const;

	// CgsRingBuffer.h:210
	int32_t GetLength() const;

	// CgsRingBuffer.h:217
	int32_t GetMaxLength() const;

	// CgsRingBuffer.h:224
	int32_t GetSpace() const;

	// CgsRingBuffer.h:231
	bool IsFull() const;

	// CgsRingBuffer.h:238
	void Clear();

	// CgsRingBuffer.h:247
	const rw::math::vpu::Vector3 & operator[](unsigned int) const;

	// CgsRingBuffer.h:256
	Vector3 & operator[](unsigned int);

}

// CgsRingBuffer.h:99
struct CgsContainers::FixedRingBuffer<rw::math::vpu::Vector3,256> : public RingBuffer<rw::math::vpu::Vector3> {
private:
	// CgsRingBuffer.h:106
	Vector3[256] maData;

public:
	// CgsRingBuffer.h:265
	void Construct();

}

// CgsRingBuffer.h:42
struct CgsContainers::RingBuffer<std::uint16_t> {
private:
	// CgsRingBuffer.h:83
	uint16_t * mpData;

	// CgsRingBuffer.h:84
	int32_t miMaxLength;

	// CgsRingBuffer.h:85
	int32_t miReadPos;

	// CgsRingBuffer.h:86
	int32_t miWritePos;

	// CgsRingBuffer.h:87
	int32_t miLength;

public:
	// CgsRingBuffer.h:113
	void Construct(uint16_t *, int);

	// CgsRingBuffer.h:122
	void Push(const uint16_t *);

	// CgsRingBuffer.h:145
	uint16_t * Grow();

	// CgsRingBuffer.h:170
	bool Pop(uint16_t *);

	// CgsRingBuffer.h:195
	bool Peek(uint16_t *) const;

	// CgsRingBuffer.h:210
	int32_t GetLength() const;

	// CgsRingBuffer.h:217
	int32_t GetMaxLength() const;

	// CgsRingBuffer.h:224
	int32_t GetSpace() const;

	// CgsRingBuffer.h:231
	bool IsFull() const;

	// CgsRingBuffer.h:238
	void Clear();

	// CgsRingBuffer.h:247
	const uint16_t & operator[](unsigned int) const;

	// CgsRingBuffer.h:256
	uint16_t & operator[](unsigned int);

}

// CgsRingBuffer.h:99
struct CgsContainers::FixedRingBuffer<std::uint16_t,64> : public RingBuffer<std::uint16_t> {
private:
	// CgsRingBuffer.h:106
	uint16_t[64] maData;

public:
	// CgsRingBuffer.h:265
	void Construct();

}

// CgsRingBuffer.h:42
struct CgsContainers::RingBuffer<int32_t> {
private:
	// CgsRingBuffer.h:83
	int32_t * mpData;

	// CgsRingBuffer.h:84
	int32_t miMaxLength;

	// CgsRingBuffer.h:85
	int32_t miReadPos;

	// CgsRingBuffer.h:86
	int32_t miWritePos;

	// CgsRingBuffer.h:87
	int32_t miLength;

public:
	// CgsRingBuffer.h:113
	void Construct(int32_t *, int);

	// CgsRingBuffer.h:122
	void Push(const int32_t *);

	// CgsRingBuffer.h:145
	int32_t * Grow();

	// CgsRingBuffer.h:170
	bool Pop(int32_t *);

	// CgsRingBuffer.h:195
	bool Peek(int32_t *) const;

	// CgsRingBuffer.h:210
	int32_t GetLength() const;

	// CgsRingBuffer.h:217
	int32_t GetMaxLength() const;

	// CgsRingBuffer.h:224
	int32_t GetSpace() const;

	// CgsRingBuffer.h:231
	bool IsFull() const;

	// CgsRingBuffer.h:238
	void Clear();

	// CgsRingBuffer.h:247
	const int32_t & operator[](unsigned int) const;

	// CgsRingBuffer.h:256
	int32_t & operator[](unsigned int);

}

// CgsRingBuffer.h:42
struct CgsContainers::RingBuffer<rw::math::vpu::Matrix44Affine> {
private:
	// CgsRingBuffer.h:83
	Matrix44Affine * mpData;

	// CgsRingBuffer.h:84
	int32_t miMaxLength;

	// CgsRingBuffer.h:85
	int32_t miReadPos;

	// CgsRingBuffer.h:86
	int32_t miWritePos;

	// CgsRingBuffer.h:87
	int32_t miLength;

public:
	// CgsRingBuffer.h:113
	void Construct(Matrix44Affine *, int);

	// CgsRingBuffer.h:122
	void Push(const rw::math::vpu::Matrix44Affine *);

	// CgsRingBuffer.h:145
	Matrix44Affine * Grow();

	// CgsRingBuffer.h:170
	bool Pop(Matrix44Affine *);

	// CgsRingBuffer.h:195
	bool Peek(Matrix44Affine *) const;

	// CgsRingBuffer.h:210
	int32_t GetLength() const;

	// CgsRingBuffer.h:217
	int32_t GetMaxLength() const;

	// CgsRingBuffer.h:224
	int32_t GetSpace() const;

	// CgsRingBuffer.h:231
	bool IsFull() const;

	// CgsRingBuffer.h:238
	void Clear();

	// CgsRingBuffer.h:247
	const rw::math::vpu::Matrix44Affine & operator[](unsigned int) const;

	// CgsRingBuffer.h:256
	Matrix44Affine & operator[](unsigned int);

}

// CgsRingBuffer.h:99
struct CgsContainers::FixedRingBuffer<rw::math::vpu::Matrix44Affine,4> : public RingBuffer<rw::math::vpu::Matrix44Affine> {
private:
	// CgsRingBuffer.h:106
	Matrix44Affine[4] maData;

public:
	// CgsRingBuffer.h:265
	void Construct();

}

// CgsRingBuffer.h:42
struct CgsContainers::RingBuffer<CgsSceneManager::EntityId> {
private:
	// CgsRingBuffer.h:83
	EntityId * mpData;

	// CgsRingBuffer.h:84
	int32_t miMaxLength;

	// CgsRingBuffer.h:85
	int32_t miReadPos;

	// CgsRingBuffer.h:86
	int32_t miWritePos;

	// CgsRingBuffer.h:87
	int32_t miLength;

public:
	// CgsRingBuffer.h:113
	void Construct(EntityId *, int);

	// CgsRingBuffer.h:122
	void Push(const EntityId *);

	// CgsRingBuffer.h:145
	EntityId * Grow();

	// CgsRingBuffer.h:170
	bool Pop(EntityId *);

	// CgsRingBuffer.h:195
	bool Peek(EntityId *) const;

	// CgsRingBuffer.h:210
	int32_t GetLength() const;

	// CgsRingBuffer.h:217
	int32_t GetMaxLength() const;

	// CgsRingBuffer.h:224
	int32_t GetSpace() const;

	// CgsRingBuffer.h:231
	bool IsFull() const;

	// CgsRingBuffer.h:238
	void Clear();

	// CgsRingBuffer.h:247
	const EntityId & operator[](unsigned int) const;

	// CgsRingBuffer.h:256
	EntityId & operator[](unsigned int);

}

// CgsRingBuffer.h:99
struct CgsContainers::FixedRingBuffer<CgsSceneManager::EntityId,32> : public RingBuffer<CgsSceneManager::EntityId> {
private:
	// CgsRingBuffer.h:106
	EntityId[32] maData;

public:
	// CgsRingBuffer.h:265
	void Construct();

}

// CgsRingBuffer.h:99
struct CgsContainers::FixedRingBuffer<CgsSceneManager::EntityId,8> : public RingBuffer<CgsSceneManager::EntityId> {
private:
	// CgsRingBuffer.h:106
	EntityId[8] maData;

public:
	// CgsRingBuffer.h:265
	void Construct();

}

// CgsRingBuffer.h:99
struct CgsContainers::FixedRingBuffer<uint16_t,8> : public RingBuffer<std::uint16_t> {
private:
	// CgsRingBuffer.h:106
	uint16_t[8] maData;

public:
	// CgsRingBuffer.h:265
	void Construct();

}

// CgsRingBuffer.h:42
struct CgsContainers::RingBuffer<CgsID> {
private:
	// CgsRingBuffer.h:83
	CgsID * mpData;

	// CgsRingBuffer.h:84
	int32_t miMaxLength;

	// CgsRingBuffer.h:85
	int32_t miReadPos;

	// CgsRingBuffer.h:86
	int32_t miWritePos;

	// CgsRingBuffer.h:87
	int32_t miLength;

public:
	// CgsRingBuffer.h:113
	void Construct(CgsID *, int);

	// CgsRingBuffer.h:122
	void Push(const CgsID *);

	// CgsRingBuffer.h:145
	CgsID * Grow();

	// CgsRingBuffer.h:170
	bool Pop(CgsID *);

	// CgsRingBuffer.h:195
	bool Peek(CgsID *) const;

	// CgsRingBuffer.h:210
	int32_t GetLength() const;

	// CgsRingBuffer.h:217
	int32_t GetMaxLength() const;

	// CgsRingBuffer.h:224
	int32_t GetSpace() const;

	// CgsRingBuffer.h:231
	bool IsFull() const;

	// CgsRingBuffer.h:238
	void Clear();

	// CgsRingBuffer.h:247
	const CgsID & operator[](unsigned int) const;

	// CgsRingBuffer.h:256
	CgsID & operator[](unsigned int);

}

// CgsRingBuffer.h:99
struct CgsContainers::FixedRingBuffer<CgsID,8> : public RingBuffer<CgsID> {
private:
	// CgsRingBuffer.h:106
	CgsID[8] maData;

public:
	// CgsRingBuffer.h:265
	void Construct();

}

// CgsRingBuffer.h:42
struct CgsContainers::RingBuffer<BrnNetwork::TrafficManager::TrafficHash> {
private:
	// CgsRingBuffer.h:83
	BrnNetwork::TrafficManager::TrafficHash * mpData;

	// CgsRingBuffer.h:84
	int32_t miMaxLength;

	// CgsRingBuffer.h:85
	int32_t miReadPos;

	// CgsRingBuffer.h:86
	int32_t miWritePos;

	// CgsRingBuffer.h:87
	int32_t miLength;

public:
	// CgsRingBuffer.h:113
	void Construct(BrnNetwork::TrafficManager::TrafficHash *, int);

	// CgsRingBuffer.h:122
	void Push(const BrnNetwork::TrafficManager::TrafficHash *);

	// CgsRingBuffer.h:145
	BrnNetwork::TrafficManager::TrafficHash * Grow();

	// CgsRingBuffer.h:170
	bool Pop(BrnNetwork::TrafficManager::TrafficHash *);

	// CgsRingBuffer.h:195
	bool Peek(BrnNetwork::TrafficManager::TrafficHash *) const;

	// CgsRingBuffer.h:210
	int32_t GetLength() const;

	// CgsRingBuffer.h:217
	int32_t GetMaxLength() const;

	// CgsRingBuffer.h:224
	int32_t GetSpace() const;

	// CgsRingBuffer.h:231
	bool IsFull() const;

	// CgsRingBuffer.h:238
	void Clear();

	// CgsRingBuffer.h:247
	const BrnNetwork::TrafficManager::TrafficHash & operator[](unsigned int) const;

	// CgsRingBuffer.h:256
	BrnNetwork::TrafficManager::TrafficHash & operator[](unsigned int);

}

// CgsRingBuffer.h:99
struct CgsContainers::FixedRingBuffer<BrnNetwork::TrafficManager::TrafficHash,128> : public RingBuffer<BrnNetwork::TrafficManager::TrafficHash> {
private:
	// CgsRingBuffer.h:106
	BrnNetwork::TrafficManager::TrafficHash[128] maData;

public:
	// CgsRingBuffer.h:265
	void Construct();

}

// CgsRingBuffer.h:24
namespace CgsContainers {
	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct FlagSet<std::int8_t>;

	struct BaseLinkedListNode;

	struct BaseLinkedList;

	struct BitArray<298u>;

	struct BitArray<4u>;

	struct BitArray<8u>;

	struct ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>;

	struct BitArray<2u>;

	struct Array<BrnProgression::InterestData,8u>;

	struct RingBuffer<rw::math::vpu::Vector3>;

	struct FixedRingBuffer<rw::math::vpu::Vector3,256>;

	struct Set<CgsID,512u>;

	struct RingBuffer<std::uint16_t>;

	struct FixedRingBuffer<std::uint16_t,64>;

	struct FastBitArray<2000>;

	struct Array<BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart,175u>;

	struct Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>;

	struct Array<BrnAI::AISectionId,16u>;

	struct Array<std::uint32_t,8u>;

	struct Array<BrnGameState::CheckpointData,16u>;

	struct Array<BrnGameState::StartLocation,8u>;

	struct Array<BrnGameState::OpponentData,7u>;

	struct FastBitArray<2>;

	struct BitArray<35u>;

	struct Array<BrnGameState::BufferedNewHighScore,5u>;

	struct BitArray<64u>;

	struct Set<CgsID,5u>;

	struct Set<CgsID,11u>;

	struct Set<CgsID,14u>;

	struct Array<CgsID,2000u>;

	struct BitArray<300000u>;

	struct Array<BrnProgression::MugshotInfo,30u>;

	struct BitArray<30u>;

	struct BitArray<256u>;

	struct BitArray<60u>;

	struct BitArray<6u>;

	struct Array<CgsID,8u>;

	struct Array<BrnResource::VehicleListEntry::ELiveryType,8u>;

	struct Array<BrnProgression::ProfileEvent,175u>;

	struct Array<CgsNetwork::NetworkPlayerID,8u>;

	struct FastBitArray<60>;

	struct LocklessQueue<CgsFileSystem::DiskCacheCommand>;

	struct LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LocklessQueue<char*>;

	struct RingBuffer<CgsFileSystem::CacheDebugEntry>;

	struct FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4>;

	struct LinkedList<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >;

	struct LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >;

	struct HashTable<std::uint32_t,const CgsUnicode::CgsUtf8*,13u>;

	struct HashTableElement<std::uint32_t,const CgsUnicode::CgsUtf8*>;

	struct LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>;

	struct LinkedList<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>;

	struct LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u>;

	struct Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>;

	struct Array<BrnDirector::AllVehicleData::NearestCarInfo,8u>;

	struct Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>;

	struct Array<BrnGui::OverheadSignScore,32u>;

	struct Array<uint16_t,25u>;

	struct FastBitArray<128>;

	struct FastBitArray<601>;

	struct Array<BrnDirector::HookNameStringWrapper,100u>;

	struct BitArray<32u>;

	struct Array<EGlobalRaceCarIndex,34u>;

	struct Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>;

	struct BitArray<20u>;

	struct ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>;

	struct Array<int32_t,20u>;

	struct Set<uint16_t,8u>;

	struct BitArray<28u>;

	struct DictEntry;

	struct LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct HashTable<uint32_t,renderengine::TextureState*,25u>;

	struct HashTableElement<uint32_t,renderengine::TextureState*>;

	struct HashTableElementData<uint32_t,renderengine::TextureState*>;

	struct Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>;

	struct BitArray<50u>;

	struct BitArray<10u>;

	struct Array<CgsSceneManager::EntityId,20u>;

	struct BitArray<1u>;

	struct Array<BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar,5u>;

	struct Array<BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector,10u>;

	struct BitArray<96u>;

	struct RingBuffer<rw::math::vpu::Matrix44Affine>;

	struct FixedRingBuffer<rw::math::vpu::Matrix44Affine,4>;

	struct BitArray<15u>;

	struct Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>;

	struct Stack<CgsGraphics::Im2dTransform,33>;

	struct Stack<uint16_t,2>;

	struct Array<rw::math::vpu::Vector3,5120u>;

	struct Array<uint32_t,228u>;

	struct Array<BrnNetwork::LiveRevengeRelationship,250u>;

	struct FastBitArray<10>;

	struct Array<uint16_t,256u>;

	struct Array<uint16_t,32u>;

	struct Array<BrnGameState::LandmarkIndex,16u>;

	struct BitArray<7u>;

	struct ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>;

	struct Array<CgsID,80u>;

	struct FastBitArray<120>;

	struct FastBitArray<19>;

	struct FixedRingBuffer<uint16_t,8>;

	struct Array<BrnGameState::CrashModeScoring::RecentCrash,64u>;

	struct RingBuffer<CgsID>;

	struct FixedRingBuffer<CgsID,8>;

	struct Array<EActiveRaceCarIndex,7u>;

	struct ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>;

	struct BitArray<46u>;

	struct Array<std::uint16_t,8u>;

	struct Array<BrnProgression::Race,64u>;

	struct Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u>;

	struct FastBitArray<140>;

	struct Array<BrnNetwork::HullToActivateInfo,7u>;

	struct RingBuffer<BrnNetwork::TrafficManager::TrafficHash>;

	struct FixedRingBuffer<BrnNetwork::TrafficManager::TrafficHash,128>;

	struct FifoQueue<BrnNetwork::StatsRequestEvent,32>;

	struct FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent,1>;

	struct FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent,14>;

	struct FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2>;

}

// CgsRingBuffer.h:42
struct CgsContainers::RingBuffer<BrnResource::GameDataModule::TestStreamEntry> {
private:
	// CgsRingBuffer.h:83
	BrnResource::GameDataModule::TestStreamEntry * mpData;

	// CgsRingBuffer.h:84
	int32_t miMaxLength;

	// CgsRingBuffer.h:85
	int32_t miReadPos;

	// CgsRingBuffer.h:86
	int32_t miWritePos;

	// CgsRingBuffer.h:87
	int32_t miLength;

public:
	// CgsRingBuffer.h:113
	void Construct(BrnResource::GameDataModule::TestStreamEntry *, int);

	// CgsRingBuffer.h:122
	void Push(const BrnResource::GameDataModule::TestStreamEntry *);

	// CgsRingBuffer.h:145
	BrnResource::GameDataModule::TestStreamEntry * Grow();

	// CgsRingBuffer.h:170
	bool Pop(BrnResource::GameDataModule::TestStreamEntry *);

	// CgsRingBuffer.h:195
	bool Peek(BrnResource::GameDataModule::TestStreamEntry *) const;

	// CgsRingBuffer.h:210
	int32_t GetLength() const;

	// CgsRingBuffer.h:217
	int32_t GetMaxLength() const;

	// CgsRingBuffer.h:224
	int32_t GetSpace() const;

	// CgsRingBuffer.h:231
	bool IsFull() const;

	// CgsRingBuffer.h:238
	void Clear();

	// CgsRingBuffer.h:247
	const BrnResource::GameDataModule::TestStreamEntry & operator[](unsigned int) const;

	// CgsRingBuffer.h:256
	BrnResource::GameDataModule::TestStreamEntry & operator[](unsigned int);

}

// CgsRingBuffer.h:24
namespace CgsContainers {
	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BaseLinkedListNode;

	struct BaseLinkedList;

	struct LocklessQueue<CgsFileSystem::DiskCacheCommand>;

	struct LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LocklessQueue<char*>;

	struct RingBuffer<CgsFileSystem::CacheDebugEntry>;

	struct FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4>;

	struct BitArray<2u>;

	struct Set<CgsID,512u>;

	struct FastBitArray<2000>;

	struct Array<BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart,175u>;

	struct Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>;

	struct FastBitArray<2>;

	struct BitArray<35u>;

	struct Set<CgsID,5u>;

	struct Set<CgsID,11u>;

	struct Set<CgsID,14u>;

	struct Array<CgsID,2000u>;

	struct BitArray<300000u>;

	struct Array<BrnProgression::MugshotInfo,30u>;

	struct BitArray<30u>;

	struct BitArray<256u>;

	struct BitArray<60u>;

	struct BitArray<6u>;

	struct FlagSet<std::int8_t>;

	struct Array<BrnAI::AISectionId,16u>;

	struct Array<CgsID,8u>;

	struct Array<BrnResource::VehicleListEntry::ELiveryType,8u>;

	struct Array<BrnProgression::ProfileEvent,175u>;

	struct LinkedList<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >;

	struct LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >;

	struct HashTable<std::uint32_t,const CgsUnicode::CgsUtf8*,13u>;

	struct HashTableElement<std::uint32_t,const CgsUnicode::CgsUtf8*>;

	struct LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>;

	struct LinkedList<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>;

	struct LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u>;

	struct BitArray<4u>;

	struct BitArray<8u>;

	struct Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>;

	struct Array<BrnDirector::AllVehicleData::NearestCarInfo,8u>;

	struct Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>;

	struct Array<BrnGui::OverheadSignScore,32u>;

	struct FastBitArray<128>;

	struct LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct HashTable<uint32_t,renderengine::TextureState*,25u>;

	struct HashTableElement<uint32_t,renderengine::TextureState*>;

	struct HashTableElementData<uint32_t,renderengine::TextureState*>;

	struct Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>;

	struct Array<rw::math::vpu::Vector3,5120u>;

	struct Array<uint32_t,228u>;

	struct ObjectPool<CgsSound::Logic::StateManager::RegisteredContent,4,int32_t>;

	struct Array<CgsSound::Io::QueueElement,3u>;

	struct BitArray<298u>;

	struct FastBitArray<601>;

	struct Array<EGlobalRaceCarIndex,34u>;

	struct Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>;

	struct BitArray<28u>;

	struct Array<BrnDirector::HookNameStringWrapper,100u>;

	struct BitArray<20u>;

	struct ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>;

	struct Array<int32_t,20u>;

	struct DictEntry;

	struct ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>;

	struct LinkedListNode<BrnSound::Logic::IResourceRequester*>;

	struct LinkedList<BrnSound::Logic::IResourceRequester*>;

	struct LinkedListHelper<BrnSound::Logic::IResourceRequester*,16u>;

	struct LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource>;

	struct LinkedList<BrnSound::Logic::ResourceRegistrar::QueuedResource>;

	struct LinkedListHelper<BrnSound::Logic::ResourceRegistrar::QueuedResource,18u>;

	struct LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>;

	struct LinkedList<BrnSound::Logic::ResourceRegistrar::RequestedResource>;

	struct LinkedListHelper<BrnSound::Logic::ResourceRegistrar::RequestedResource,124u>;

	struct Array<CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>*,124u>;

	struct BitArray<3u>;

	struct Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>;

	struct Array<BrnSound::Vehicles::Environment::StaticPassbyControl::PassbyHistory::PassbyRecord,5u>;

	struct Array<BrnSound::Logic::Collision::OutputCollision*,64u>;

}

// CgsRingBuffer.h:42
struct CgsContainers::RingBuffer<BrnAI::ResetOnTrackDebugComponent::ResetEntry> {
private:
	// CgsRingBuffer.h:83
	BrnAI::ResetOnTrackDebugComponent::ResetEntry * mpData;

	// CgsRingBuffer.h:84
	int32_t miMaxLength;

	// CgsRingBuffer.h:85
	int32_t miReadPos;

	// CgsRingBuffer.h:86
	int32_t miWritePos;

	// CgsRingBuffer.h:87
	int32_t miLength;

public:
	// CgsRingBuffer.h:113
	void Construct(BrnAI::ResetOnTrackDebugComponent::ResetEntry *, int);

	// CgsRingBuffer.h:122
	void Push(const BrnAI::ResetOnTrackDebugComponent::ResetEntry *);

	// CgsRingBuffer.h:145
	BrnAI::ResetOnTrackDebugComponent::ResetEntry * Grow();

	// CgsRingBuffer.h:170
	bool Pop(BrnAI::ResetOnTrackDebugComponent::ResetEntry *);

	// CgsRingBuffer.h:195
	bool Peek(BrnAI::ResetOnTrackDebugComponent::ResetEntry *) const;

	// CgsRingBuffer.h:210
	int32_t GetLength() const;

	// CgsRingBuffer.h:217
	int32_t GetMaxLength() const;

	// CgsRingBuffer.h:224
	int32_t GetSpace() const;

	// CgsRingBuffer.h:231
	bool IsFull() const;

	// CgsRingBuffer.h:238
	void Clear();

	// CgsRingBuffer.h:247
	const BrnAI::ResetOnTrackDebugComponent::ResetEntry & operator[](unsigned int) const;

	// CgsRingBuffer.h:256
	BrnAI::ResetOnTrackDebugComponent::ResetEntry & operator[](unsigned int);

}

// CgsRingBuffer.h:99
struct CgsContainers::FixedRingBuffer<BrnAI::ResetOnTrackDebugComponent::ResetEntry,16> : public RingBuffer<BrnAI::ResetOnTrackDebugComponent::ResetEntry> {
private:
	// CgsRingBuffer.h:106
	BrnAI::ResetOnTrackDebugComponent::ResetEntry[16] maData;

public:
	// CgsRingBuffer.h:265
	void Construct();

}

// CgsRingBuffer.h:42
struct CgsContainers::RingBuffer<BrnAI::ResetOnTrackDebugComponent::HngTestEntry> {
private:
	// CgsRingBuffer.h:83
	BrnAI::ResetOnTrackDebugComponent::HngTestEntry * mpData;

	// CgsRingBuffer.h:84
	int32_t miMaxLength;

	// CgsRingBuffer.h:85
	int32_t miReadPos;

	// CgsRingBuffer.h:86
	int32_t miWritePos;

	// CgsRingBuffer.h:87
	int32_t miLength;

public:
	// CgsRingBuffer.h:113
	void Construct(BrnAI::ResetOnTrackDebugComponent::HngTestEntry *, int);

	// CgsRingBuffer.h:122
	void Push(const BrnAI::ResetOnTrackDebugComponent::HngTestEntry *);

	// CgsRingBuffer.h:145
	BrnAI::ResetOnTrackDebugComponent::HngTestEntry * Grow();

	// CgsRingBuffer.h:170
	bool Pop(BrnAI::ResetOnTrackDebugComponent::HngTestEntry *);

	// CgsRingBuffer.h:195
	bool Peek(BrnAI::ResetOnTrackDebugComponent::HngTestEntry *) const;

	// CgsRingBuffer.h:210
	int32_t GetLength() const;

	// CgsRingBuffer.h:217
	int32_t GetMaxLength() const;

	// CgsRingBuffer.h:224
	int32_t GetSpace() const;

	// CgsRingBuffer.h:231
	bool IsFull() const;

	// CgsRingBuffer.h:238
	void Clear();

	// CgsRingBuffer.h:247
	const BrnAI::ResetOnTrackDebugComponent::HngTestEntry & operator[](unsigned int) const;

	// CgsRingBuffer.h:256
	BrnAI::ResetOnTrackDebugComponent::HngTestEntry & operator[](unsigned int);

}

// CgsRingBuffer.h:99
struct CgsContainers::FixedRingBuffer<BrnAI::ResetOnTrackDebugComponent::HngTestEntry,16> : public RingBuffer<BrnAI::ResetOnTrackDebugComponent::HngTestEntry> {
private:
	// CgsRingBuffer.h:106
	BrnAI::ResetOnTrackDebugComponent::HngTestEntry[16] maData;

public:
	// CgsRingBuffer.h:265
	void Construct();

}

// CgsRingBuffer.h:42
struct CgsContainers::RingBuffer<BrnAI::ResetOnTrackManager::RecentResetEntry> {
private:
	// CgsRingBuffer.h:83
	BrnAI::ResetOnTrackManager::RecentResetEntry * mpData;

	// CgsRingBuffer.h:84
	int32_t miMaxLength;

	// CgsRingBuffer.h:85
	int32_t miReadPos;

	// CgsRingBuffer.h:86
	int32_t miWritePos;

	// CgsRingBuffer.h:87
	int32_t miLength;

public:
	// CgsRingBuffer.h:113
	void Construct(BrnAI::ResetOnTrackManager::RecentResetEntry *, int);

	// CgsRingBuffer.h:122
	void Push(const BrnAI::ResetOnTrackManager::RecentResetEntry *);

	// CgsRingBuffer.h:145
	BrnAI::ResetOnTrackManager::RecentResetEntry * Grow();

	// CgsRingBuffer.h:170
	bool Pop(BrnAI::ResetOnTrackManager::RecentResetEntry *);

	// CgsRingBuffer.h:195
	bool Peek(BrnAI::ResetOnTrackManager::RecentResetEntry *) const;

	// CgsRingBuffer.h:210
	int32_t GetLength() const;

	// CgsRingBuffer.h:217
	int32_t GetMaxLength() const;

	// CgsRingBuffer.h:224
	int32_t GetSpace() const;

	// CgsRingBuffer.h:231
	bool IsFull() const;

	// CgsRingBuffer.h:238
	void Clear();

	// CgsRingBuffer.h:247
	const BrnAI::ResetOnTrackManager::RecentResetEntry & operator[](unsigned int) const;

	// CgsRingBuffer.h:256
	BrnAI::ResetOnTrackManager::RecentResetEntry & operator[](unsigned int);

}

// CgsRingBuffer.h:99
struct CgsContainers::FixedRingBuffer<BrnAI::ResetOnTrackManager::RecentResetEntry,8> : public RingBuffer<BrnAI::ResetOnTrackManager::RecentResetEntry> {
private:
	// CgsRingBuffer.h:106
	BrnAI::ResetOnTrackManager::RecentResetEntry[8] maData;

public:
	// CgsRingBuffer.h:265
	void Construct();

}

// CgsRingBuffer.h:24
namespace CgsContainers {
	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

}

// CgsRingBuffer.h:24
namespace CgsContainers {
	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>;

}

