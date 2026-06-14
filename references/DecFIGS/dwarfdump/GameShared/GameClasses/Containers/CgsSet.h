// CgsSet.h:28
namespace CgsContainers {
	struct Array<BrnDirector::HookNameStringWrapper,100u>;

	struct BitArray<32u>;

	struct BitArray<30u>;

	struct FlagSet<std::int8_t>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<8u>;

	struct BitArray<298u>;

	struct Array<BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*>*,10u>;

	struct Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>*,40u>;

	struct Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult>*,10u>;

	struct Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult>*,10u>;

	struct Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult>*,10u>;

	struct Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult>*,1u>;

	struct Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>;

	struct Array<BrnDirector::AllVehicleData::NearestCarInfo,8u>;

	struct Array<BrnAI::AISectionId,16u>;

	struct Array<std::uint32_t,8u>;

	struct Array<BrnGameState::CheckpointData,16u>;

	struct Array<BrnGameState::StartLocation,8u>;

	struct Array<BrnGameState::OpponentData,7u>;

	struct BitArray<35u>;

	struct Array<CgsID,8u>;

	struct Array<BrnResource::VehicleListEntry::ELiveryType,8u>;

	struct LocklessQueue<CgsFileSystem::DiskCacheCommand>;

	struct LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LocklessQueue<char*>;

	struct RingBuffer<CgsFileSystem::CacheDebugEntry>;

	struct FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4>;

	struct Stack<ICE::ActionRef,20>;

	struct BitArray<20u>;

	struct ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>;

	struct Array<int32_t,20u>;

	struct FastBitArray<601>;

	struct Array<EGlobalRaceCarIndex,34u>;

	struct Set<uint16_t,8u>;

	struct ObjectPool<rw::math::vpu::Vector4 [250],8,int32_t>;

	struct ObjectPool<rw::math::vpu::Vector4 [100],20,int32_t>;

	struct BitArray<28u>;

	struct ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>;

	struct Array<int32_t,28u>;

	struct Array<BrnDirector::Camera::BehaviourHelperIndex,28u>;

	struct Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>;

	struct Array<BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourBystanderCam, BrnDirector::Camera::BehaviourBystanderCam::Parameters, 2>::Shot,2u>;

	struct Array<BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig, BrnDirector::Camera::BehaviourRig::Parameters, 4>::Shot,4u>;

	struct Array<BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourRig, BrnDirector::Camera::BehaviourRig::Parameters, 6>::Shot,6u>;

	struct Array<BrnDirector::BehaviourCollection<BrnDirector::Camera::BehaviourIceAnim, const Attrib::RefSpec, 5>::Shot,5u>;

	struct ObjectPool<rw::math::vpu::Vector4 [70],20,int32_t>;

	struct Array<BrnDirector::MomentDescription,10u>;

	struct Array<BrnDirector::MomentController::MomentHandle,10u>;

	struct Array<float32_t,10u>;

	struct ObjectPool<BrnDirector::IceMovie,20,int32_t>;

	struct ObjectPool<BrnDirector::ICEMoviePlaylist::DebugMenuRemoveData,20,int32_t>;

	struct DictEntry;

	struct Dictionary<ICE::ICETakeData>;

	struct Array<int32_t,50u>;

	struct Array<uint32_t,10u>;

	struct Array<float32_t,9u>;

}

// CgsSet.h:50
struct CgsContainers::Set<uint16_t,8u> {
	// CgsSet.h:53
	extern const uint32_t KU_INVALID;

private:
	// CgsSet.h:147
	uint16_t[8] maElements;

	// CgsSet.h:148
	uint32_t muLength;

public:
	// CgsSet.h:162
	void Construct();

	// CgsSet.h:177
	void Insert(const uint16_t &);

	// CgsSet.h:201
	void Erase(const uint16_t &);

	// CgsSet.h:225
	uint32_t GetLength() const;

	// CgsSet.h:240
	uint32_t GetCapacity() const;

	// CgsSet.h:255
	const uint16_t & GetItem(unsigned int) const;

	// CgsSet.h:272
	uint16_t & GetItem(unsigned int);

	// CgsSet.h:288
	void Clear();

	// CgsSet.h:303
	uint32_t Find(const uint16_t &) const;

	// CgsSet.h:330
	bool Contains(const uint16_t &) const;

	// CgsSet.h:399
	const uint16_t & operator[](unsigned int) const;

	// CgsSet.h:414
	uint16_t & operator[](unsigned int);

	// CgsSet.h:474
	bool IsFull() const;

	// CgsSet.h:428
	void FixUp();

	// CgsSet.h:451
	void FixDown();

}

// CgsSet.h:53
extern const uint32_t KU_INVALID = 4294967295;

// CgsSet.h:53
extern const uint32_t KU_INVALID;

// CgsSet.h:50
struct CgsContainers::Set<CgsID,512u> {
	// CgsSet.h:53
	extern const uint32_t KU_INVALID;

private:
	// CgsSet.h:147
	CgsID[512] maElements;

	// CgsSet.h:148
	uint32_t muLength;

public:
	// CgsSet.h:162
	void Construct();

	// CgsSet.h:177
	void Insert(const CgsID &);

	// CgsSet.h:201
	void Erase(const CgsID &);

	// CgsSet.h:225
	uint32_t GetLength() const;

	// CgsSet.h:240
	uint32_t GetCapacity() const;

	// CgsSet.h:255
	const CgsID & GetItem(unsigned int) const;

	// CgsSet.h:272
	CgsID & GetItem(unsigned int);

	// CgsSet.h:288
	void Clear();

	// CgsSet.h:303
	uint32_t Find(const CgsID &) const;

	// CgsSet.h:330
	bool Contains(const CgsID &) const;

	// CgsSet.h:399
	const CgsID & operator[](unsigned int) const;

	// CgsSet.h:414
	CgsID & operator[](unsigned int);

	// CgsSet.h:474
	bool IsFull() const;

	// CgsSet.h:428
	void FixUp();

	// CgsSet.h:451
	void FixDown();

}

// CgsSet.h:50
struct CgsContainers::Set<CgsID,5u> {
	// CgsSet.h:53
	extern const uint32_t KU_INVALID;

private:
	// CgsSet.h:147
	CgsID[5] maElements;

	// CgsSet.h:148
	uint32_t muLength;

public:
	// CgsSet.h:162
	void Construct();

	// CgsSet.h:177
	void Insert(const CgsID &);

	// CgsSet.h:201
	void Erase(const CgsID &);

	// CgsSet.h:225
	uint32_t GetLength() const;

	// CgsSet.h:240
	uint32_t GetCapacity() const;

	// CgsSet.h:255
	const CgsID & GetItem(unsigned int) const;

	// CgsSet.h:272
	CgsID & GetItem(unsigned int);

	// CgsSet.h:288
	void Clear();

	// CgsSet.h:303
	uint32_t Find(const CgsID &) const;

	// CgsSet.h:330
	bool Contains(const CgsID &) const;

	// CgsSet.h:399
	const CgsID & operator[](unsigned int) const;

	// CgsSet.h:414
	CgsID & operator[](unsigned int);

	// CgsSet.h:474
	bool IsFull() const;

	// CgsSet.h:428
	void FixUp();

	// CgsSet.h:451
	void FixDown();

}

// CgsSet.h:50
struct CgsContainers::Set<CgsID,11u> {
	// CgsSet.h:53
	extern const uint32_t KU_INVALID;

private:
	// CgsSet.h:147
	CgsID[11] maElements;

	// CgsSet.h:148
	uint32_t muLength;

public:
	// CgsSet.h:162
	void Construct();

	// CgsSet.h:177
	void Insert(const CgsID &);

	// CgsSet.h:201
	void Erase(const CgsID &);

	// CgsSet.h:225
	uint32_t GetLength() const;

	// CgsSet.h:240
	uint32_t GetCapacity() const;

	// CgsSet.h:255
	const CgsID & GetItem(unsigned int) const;

	// CgsSet.h:272
	CgsID & GetItem(unsigned int);

	// CgsSet.h:288
	void Clear();

	// CgsSet.h:303
	uint32_t Find(const CgsID &) const;

	// CgsSet.h:330
	bool Contains(const CgsID &) const;

	// CgsSet.h:399
	const CgsID & operator[](unsigned int) const;

	// CgsSet.h:414
	CgsID & operator[](unsigned int);

	// CgsSet.h:474
	bool IsFull() const;

	// CgsSet.h:428
	void FixUp();

	// CgsSet.h:451
	void FixDown();

}

// CgsSet.h:50
struct CgsContainers::Set<CgsID,14u> {
	// CgsSet.h:53
	extern const uint32_t KU_INVALID;

private:
	// CgsSet.h:147
	CgsID[14] maElements;

	// CgsSet.h:148
	uint32_t muLength;

public:
	// CgsSet.h:162
	void Construct();

	// CgsSet.h:177
	void Insert(const CgsID &);

	// CgsSet.h:201
	void Erase(const CgsID &);

	// CgsSet.h:225
	uint32_t GetLength() const;

	// CgsSet.h:240
	uint32_t GetCapacity() const;

	// CgsSet.h:255
	const CgsID & GetItem(unsigned int) const;

	// CgsSet.h:272
	CgsID & GetItem(unsigned int);

	// CgsSet.h:288
	void Clear();

	// CgsSet.h:303
	uint32_t Find(const CgsID &) const;

	// CgsSet.h:330
	bool Contains(const CgsID &) const;

	// CgsSet.h:399
	const CgsID & operator[](unsigned int) const;

	// CgsSet.h:414
	CgsID & operator[](unsigned int);

	// CgsSet.h:474
	bool IsFull() const;

	// CgsSet.h:428
	void FixUp();

	// CgsSet.h:451
	void FixDown();

}

// CgsSet.h:50
struct CgsContainers::Set<BrnWorld::PropEntityID,32u> {
	// CgsSet.h:53
	extern const uint32_t KU_INVALID;

private:
	// CgsSet.h:147
	PropEntityID[32] maElements;

	// CgsSet.h:148
	uint32_t muLength;

public:
	// CgsSet.h:162
	void Construct();

	// CgsSet.h:177
	void Insert(const PropEntityID &);

	// CgsSet.h:201
	void Erase(const PropEntityID &);

	// CgsSet.h:225
	uint32_t GetLength() const;

	// CgsSet.h:240
	uint32_t GetCapacity() const;

	// CgsSet.h:255
	const PropEntityID & GetItem(unsigned int) const;

	// CgsSet.h:272
	PropEntityID & GetItem(unsigned int);

	// CgsSet.h:288
	void Clear();

	// CgsSet.h:303
	uint32_t Find(const PropEntityID &) const;

	// CgsSet.h:330
	bool Contains(const PropEntityID &) const;

	// CgsSet.h:399
	const PropEntityID & operator[](unsigned int) const;

	// CgsSet.h:414
	PropEntityID & operator[](unsigned int);

	// CgsSet.h:474
	bool IsFull() const;

	// CgsSet.h:428
	void FixUp();

	// CgsSet.h:451
	void FixDown();

}

// CgsSet.h:50
struct CgsContainers::Set<uint16_t,15u> {
	// CgsSet.h:53
	extern const uint32_t KU_INVALID;

private:
	// CgsSet.h:147
	uint16_t[15] maElements;

	// CgsSet.h:148
	uint32_t muLength;

public:
	// CgsSet.h:162
	void Construct();

	// CgsSet.h:177
	void Insert(const uint16_t &);

	// CgsSet.h:201
	void Erase(const uint16_t &);

	// CgsSet.h:225
	uint32_t GetLength() const;

	// CgsSet.h:240
	uint32_t GetCapacity() const;

	// CgsSet.h:255
	const uint16_t & GetItem(unsigned int) const;

	// CgsSet.h:272
	uint16_t & GetItem(unsigned int);

	// CgsSet.h:288
	void Clear();

	// CgsSet.h:303
	uint32_t Find(const uint16_t &) const;

	// CgsSet.h:330
	bool Contains(const uint16_t &) const;

	// CgsSet.h:399
	const uint16_t & operator[](unsigned int) const;

	// CgsSet.h:414
	uint16_t & operator[](unsigned int);

	// CgsSet.h:474
	bool IsFull() const;

	// CgsSet.h:428
	void FixUp();

	// CgsSet.h:451
	void FixDown();

}

// CgsSet.h:372
extern void SetDifference<15u, 15u>(const const Set<uint16_t,15u> &  lA, const const Set<uint16_t,15u> &  lB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSet.h:377
		uint32_t luElement;

		{
			// CgsSet.h:380
			const const uint16_t & lElement;

		}
	}
}

// CgsSet.h:28
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

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

	struct Array<CgsID,32u>;

	struct Array<BrnProgression::ProfileEvent,175u>;

	struct Array<CgsNetwork::NetworkPlayerID,8u>;

	struct FastBitArray<60>;

	struct BaseLinkedListNode;

	struct BaseLinkedList;

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

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<8u>;

	struct Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>;

	struct Array<BrnDirector::AllVehicleData::NearestCarInfo,8u>;

	struct Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>;

	struct Array<BrnGui::OverheadSignScore,32u>;

	struct Array<uint16_t,25u>;

	struct FastBitArray<128>;

	struct Array<BrnDirector::HookNameStringWrapper,100u>;

	struct BitArray<32u>;

	struct BitArray<298u>;

	struct Array<BrnTraffic::PhysicalRequestInfo,25u>;

	struct FastBitArray<601>;

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

	struct ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>;

	struct BitArray<400u>;

	struct Array<BrnTraffic::BrnTrafficIO::NearMissData,16u>;

	struct Array<BrnTraffic::BrnTrafficIO::NearMissData,8u>;

	struct Array<CgsSceneManager::EntityId,650u>;

	struct Array<BrnTraffic::VehicleRenderInfo,64u>;

	struct Array<rw::math::vpu::Vector3,8u>;

	struct Array<rw::math::vpu::VecFloat,8u>;

	struct Array<uint16_t,1u>;

	struct Array<BrnTraffic::PurgatoryInfo,400u>;

	struct Stack<uint16_t,400>;

	struct Array<BrnTraffic::PurgatoryInfo,200u>;

	struct Stack<uint8_t,200>;

	struct Array<BrnTraffic::PurgatoryInfo,1u>;

	struct Stack<uint16_t,1>;

	struct Set<uint16_t,72u>;

	struct BitArray<72u>;

	struct Array<uint16_t,72u>;

	struct Array<BrnTraffic::HullChangeInfo,400u>;

	struct Array<uint16_t,9u>;

	struct Array<BrnTraffic::TrafficCrashInfo,160u>;

	struct Array<uint16_t,160u>;

	struct BitArray<25u>;

	struct Array<BrnTraffic::CollidableVehicleInfo4,16u>;

	struct Array<BrnTraffic::FiredKillZoneInfo,8u>;

	struct BitArray<50u>;

	struct BitArray<96u>;

	struct RingBuffer<rw::math::vpu::Matrix44Affine>;

	struct FixedRingBuffer<rw::math::vpu::Matrix44Affine,4>;

	struct BitArray<10u>;

	struct Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>;

	struct Stack<CgsGraphics::Im2dTransform,33>;

	struct Stack<uint16_t,2>;

	struct Array<rw::math::vpu::Vector3,5120u>;

	struct Array<uint32_t,228u>;

	struct Array<BrnNetwork::LiveRevengeRelationship,250u>;

	struct FastBitArray<10>;

	struct BitArray<601u>;

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

	struct Array<rw::math::vpu::Vector3,33u>;

	struct Array<uint16_t,64u>;

	struct Array<uint8_t,16u>;

	struct Array<BrnTraffic::PhysicalVehicleInfo,33u>;

	struct Array<BrnTraffic::CrashingThingData,168u>;

}

// CgsSet.h:50
struct CgsContainers::Set<uint16_t,72u> {
	// CgsSet.h:53
	extern const uint32_t KU_INVALID;

private:
	// CgsSet.h:147
	uint16_t[72] maElements;

	// CgsSet.h:148
	uint32_t muLength;

public:
	// CgsSet.h:162
	void Construct();

	// CgsSet.h:177
	void Insert(const uint16_t &);

	// CgsSet.h:201
	void Erase(const uint16_t &);

	// CgsSet.h:225
	uint32_t GetLength() const;

	// CgsSet.h:240
	uint32_t GetCapacity() const;

	// CgsSet.h:255
	const uint16_t & GetItem(unsigned int) const;

	// CgsSet.h:272
	uint16_t & GetItem(unsigned int);

	// CgsSet.h:288
	void Clear();

	// CgsSet.h:303
	uint32_t Find(const uint16_t &) const;

	// CgsSet.h:330
	bool Contains(const uint16_t &) const;

	// CgsSet.h:399
	const uint16_t & operator[](unsigned int) const;

	// CgsSet.h:414
	uint16_t & operator[](unsigned int);

	// CgsSet.h:474
	bool IsFull() const;

	// CgsSet.h:428
	void FixUp();

	// CgsSet.h:451
	void FixDown();

}

// CgsSet.h:372
extern void SetDifference<72u, 72u>(const const Set<uint16_t,72u> &  lA, const const Set<uint16_t,72u> &  lB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSet.h:377
		uint32_t luElement;

		{
			// CgsSet.h:380
			const const uint16_t & lElement;

		}
	}
}

// CgsSet.h:28
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct Array<BrnAI::AISectionId,16u>;

	struct BitArray<35u>;

	struct BitArray<30u>;

	struct LocklessQueue<CgsFileSystem::DiskCacheCommand>;

	struct LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LocklessQueue<char*>;

	struct RingBuffer<CgsFileSystem::CacheDebugEntry>;

	struct FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<8u>;

	struct Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>;

	struct Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>;

	struct Array<BrnDirector::HookNameStringWrapper,100u>;

	struct BitArray<32u>;

	struct BitArray<298u>;

	struct Array<BrnTraffic::PhysicalRequestInfo,25u>;

	struct FastBitArray<601>;

	struct Array<EGlobalRaceCarIndex,34u>;

	struct Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>;

	struct BitArray<20u>;

	struct ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>;

	struct Array<int32_t,20u>;

	struct Set<uint16_t,8u>;

	struct BitArray<28u>;

	struct DictEntry;

	struct ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>;

	struct BitArray<400u>;

	struct Array<BrnTraffic::BrnTrafficIO::NearMissData,16u>;

	struct Array<BrnTraffic::BrnTrafficIO::NearMissData,8u>;

	struct Array<CgsSceneManager::EntityId,650u>;

	struct Array<BrnTraffic::VehicleRenderInfo,64u>;

	struct RingBuffer<int32_t>;

	struct Array<rw::math::vpu::Vector3,8u>;

	struct Array<rw::math::vpu::VecFloat,8u>;

	struct Array<BrnTraffic::PurgatoryInfo,400u>;

	struct Stack<uint16_t,400>;

	struct Array<BrnTraffic::PurgatoryInfo,200u>;

	struct Stack<uint8_t,200>;

	struct Set<uint16_t,72u>;

	struct Array<uint16_t,9u>;

	struct BitArray<25u>;

	struct Array<BrnTraffic::CollidableVehicleInfo4,16u>;

	struct Array<BrnTraffic::FiredKillZoneInfo,8u>;

	struct Array<uint16_t,400u>;

}

// CgsSet.h:50
struct CgsContainers::Set<uint16_t,160u> {
	// CgsSet.h:53
	extern const uint32_t KU_INVALID;

private:
	// CgsSet.h:147
	uint16_t[160] maElements;

	// CgsSet.h:148
	uint32_t muLength;

public:
	// CgsSet.h:162
	void Construct();

	// CgsSet.h:177
	void Insert(const uint16_t &);

	// CgsSet.h:201
	void Erase(const uint16_t &);

	// CgsSet.h:225
	uint32_t GetLength() const;

	// CgsSet.h:240
	uint32_t GetCapacity() const;

	// CgsSet.h:255
	const uint16_t & GetItem(unsigned int) const;

	// CgsSet.h:272
	uint16_t & GetItem(unsigned int);

	// CgsSet.h:288
	void Clear();

	// CgsSet.h:303
	uint32_t Find(const uint16_t &) const;

	// CgsSet.h:330
	bool Contains(const uint16_t &) const;

	// CgsSet.h:399
	const uint16_t & operator[](unsigned int) const;

	// CgsSet.h:414
	uint16_t & operator[](unsigned int);

	// CgsSet.h:474
	bool IsFull() const;

	// CgsSet.h:428
	void FixUp();

	// CgsSet.h:451
	void FixDown();

}

// CgsSet.h:372
extern void SetDifference<160u, 160u>(const const Set<uint16_t,160u> &  lA, const const Set<uint16_t,160u> &  lB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSet.h:377
		uint32_t luElement;

		{
			// CgsSet.h:380
			const const uint16_t & lElement;

		}
	}
}

// CgsSet.h:28
namespace CgsContainers {
	struct Array<LionBatch,512u>;

}

