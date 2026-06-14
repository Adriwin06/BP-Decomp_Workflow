// CgsFlagSet.h:45
struct CgsContainers::FlagSet<std::int8_t> {
protected:
	// CgsFlagSet.h:89
	int8_t muFlags;

public:
	// CgsFlagSet.h:203
	void Clear();

	// CgsFlagSet.h:107
	const bool IsBitSet(unsigned int) const;

	// CgsFlagSet.h:125
	void SetBit(unsigned int);

	// CgsFlagSet.h:143
	void UnSetBit(unsigned int);

	// CgsFlagSet.h:161
	int8_t GetBit(unsigned int) const;

	// CgsFlagSet.h:178
	void SetBitTo(unsigned int, bool);

	// CgsFlagSet.h:220
	bool IsZero() const;

	// CgsFlagSet.h:242
	bool IsFull() const;

	// CgsFlagSet.h:270
	bool IsFullUpTo(unsigned int) const;

	// CgsFlagSet.h:297
	int8_t & Flags();

}

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct LocklessQueue<CgsFileSystem::DiskCacheCommand>;

	struct LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LocklessQueue<char*>;

	struct RingBuffer<CgsFileSystem::CacheDebugEntry>;

	struct FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<8u>;

	struct Array<BrnAI::AISectionId,16u>;

	struct Array<std::uint32_t,8u>;

	struct Array<BrnGameState::CheckpointData,16u>;

	struct Array<BrnGameState::StartLocation,8u>;

	struct Array<BrnGameState::OpponentData,7u>;

	struct BitArray<35u>;

	struct BitArray<30u>;

	struct Array<BrnDirector::HookNameStringWrapper,100u>;

	struct BitArray<32u>;

	struct BitArray<298u>;

	struct Array<EGlobalRaceCarIndex,34u>;

	struct Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>;

	struct BitArray<20u>;

	struct ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>;

	struct Array<int32_t,20u>;

	struct BitArray<28u>;

	struct DictEntry;

	struct ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>;

	struct Array<BrnParticle::Native::SparkBatch,4u>;

	struct Stack<BrnParticle::Native::TrailEmitter*,96>;

	struct Array<BrnParticle::Native::SimpleParticleBatch,13u>;

	struct Array<LionBatch,512u>;

}

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct BaseLinkedListNode;

	struct BaseLinkedList;

	struct LocklessQueue<CgsFileSystem::DiskCacheCommand>;

	struct LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LocklessQueue<char*>;

	struct RingBuffer<CgsFileSystem::CacheDebugEntry>;

	struct FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4>;

	struct BitArray<298u>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<8u>;

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

	struct Array<CgsID,7u>;

	struct Array<BrnProgression::ProfileEvent,175u>;

	struct Array<CgsNetwork::NetworkPlayerID,8u>;

	struct FastBitArray<60>;

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

	struct Array<BrnDirector::HookNameStringWrapper,100u>;

	struct BitArray<32u>;

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

	struct RingBuffer<int32_t>;

	struct BitArray<50u>;

	struct BitArray<96u>;

	struct RingBuffer<rw::math::vpu::Matrix44Affine>;

	struct FixedRingBuffer<rw::math::vpu::Matrix44Affine,4>;

	struct Array<rw::math::vpu::Vector3,10u>;

	struct Array<BrnAI::AISectionId,4u>;

	struct Array<BrnWorld::NearMissData<4u, 8u>::VehicleTimePair,4u>;

	struct Array<BrnWorld::NearMissData<4u, 8u>::VehicleTimePair,8u>;

	struct Array<BrnWorld::NearMissData<4u, 7u>::VehicleTimePair,4u>;

	struct Array<BrnWorld::NearMissData<4u, 7u>::VehicleTimePair,7u>;

	struct RingBuffer<CgsSceneManager::EntityId>;

	struct FixedRingBuffer<CgsSceneManager::EntityId,32>;

	struct FixedRingBuffer<CgsSceneManager::EntityId,8>;

	struct Array<BrnAI::SectionAndPortalIndices,16u>;

	struct Array<BrnAI::RaceBalancingGraph,7u>;

	struct Array<BrnAI::RaceBalancingRoute,7u>;

	struct FastBitArray<1024>;

	struct BitArray<15u>;

	struct Set<BrnWorld::PropEntityID,32u>;

	struct BitArray<9u>;

	struct BitArray<5400u>;

	struct BitArray<100u>;

	struct Array<uint32_t,80u>;

	struct Set<uint16_t,15u>;

	struct Array<BrnWorld::PropEntityID,15u>;

	struct Array<BrnWorld::PropEntityID,30u>;

	struct BitArray<500u>;

	struct BitArray<512u>;

	struct BitArray<10u>;

	struct Array<CgsSceneManager::EntityId,4500u>;

	struct Array<CgsSceneManager::EntityId,32u>;

	struct Array<CgsSceneManager::EntityId,5400u>;

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

// CgsFlagSet.h:29
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

	struct Array<CgsID,7u>;

	struct Array<BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo,46u>;

	struct Array<CgsID,32u>;

	struct Array<BrnProgression::ProfileEvent,175u>;

	struct Array<CgsID,92u>;

	struct BitArray<92u>;

	struct FastBitArray<30>;

	struct FastBitArray<60>;

	struct LocklessQueue<CgsFileSystem::DiskCacheCommand>;

	struct LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LocklessQueue<char*>;

	struct RingBuffer<CgsFileSystem::CacheDebugEntry>;

	struct FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<8u>;

	struct Array<uint16_t,25u>;

	struct BitArray<298u>;

	struct BitArray<32u>;

	struct Array<EGlobalRaceCarIndex,34u>;

	struct Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>;

	struct Set<uint16_t,8u>;

	struct DictEntry;

	struct ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>;

	struct Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>;

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

	struct FastBitArray<5>;

	struct BitArray<46u>;

	struct Array<std::uint16_t,8u>;

	struct Array<BrnProgression::Race,64u>;

	struct Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u>;

	struct Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>;

	struct BitArray<3u>;

	struct Stack<uint16_t,8>;

	struct Array<BrnGameState::OnlineFlybyManager::ENewRivalryCompare,4u>;

	struct Array<BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare,6u>;

	struct Array<BrnProgression_2007_10_04::MugshotInfo,30u>;

}

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<8u>;

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

	struct Array<BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo,46u>;

	struct Array<BrnProgression::ProfileEvent,175u>;

	struct Array<CgsID,92u>;

	struct BitArray<92u>;

	struct Array<CgsNetwork::NetworkPlayerID,8u>;

	struct FastBitArray<30>;

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

	struct Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>;

	struct Array<BrnDirector::AllVehicleData::NearestCarInfo,8u>;

	struct Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>;

	struct Array<BrnGui::OverheadSignScore,32u>;

	struct Array<uint16_t,25u>;

	struct FastBitArray<128>;

	struct Array<BrnDirector::HookNameStringWrapper,100u>;

	struct BitArray<32u>;

	struct BitArray<298u>;

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

	struct Array<MainGameFlowState*,7u>;

	struct FastBitArray<140>;

	struct Array<BrnNetwork::HullToActivateInfo,7u>;

	struct RingBuffer<BrnNetwork::TrafficManager::TrafficHash>;

	struct FixedRingBuffer<BrnNetwork::TrafficManager::TrafficHash,128>;

	struct FifoQueue<BrnNetwork::StatsRequestEvent,32>;

	struct FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent,1>;

	struct FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent,14>;

	struct FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2>;

}

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<30u>;

	struct Array<BrnDirector::HookNameStringWrapper,100u>;

	struct BitArray<32u>;

	struct BitArray<20u>;

	struct ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>;

	struct Array<int32_t,20u>;

	struct DictEntry;

}

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct BaseLinkedListNode;

	struct BaseLinkedList;

	struct CgsHash;

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

	struct BitArray<2u>;

	struct Set<CgsID,512u>;

	struct FastBitArray<2000>;

	struct Array<BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart,175u>;

	struct Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>;

	struct FastBitArray<2>;

	struct BitArray<35u>;

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

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<8u>;

	struct Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>;

	struct Array<BrnDirector::AllVehicleData::NearestCarInfo,8u>;

	struct Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>;

	struct Array<BrnGui::OverheadSignScore,32u>;

	struct Array<uint16_t,25u>;

	struct FastBitArray<128>;

	struct LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct HashTable<uint32_t,renderengine::TextureState*,25u>;

	struct HashTableElement<uint32_t,renderengine::TextureState*>;

	struct HashTableElementData<uint32_t,renderengine::TextureState*>;

	struct Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>;

	struct Array<uint32_t,228u>;

	struct Array<rw::math::vpu::Vector3,5120u>;

	struct Array<uint32_t,5u>;

	struct Stack<CgsGraphics::Im2dTransform,33>;

	struct Stack<uint16_t,2>;

	struct Array<CgsGui::BillboardInfo,32u>;

	struct Array<BrnGui::BankingScore,6u>;

	struct BitArray<601u>;

}

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct CgsHash;

	struct BaseLinkedListNode;

	struct BaseLinkedList;

	struct LinkedList<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >;

	struct LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >;

	struct HashTable<std::uint32_t,const CgsUnicode::CgsUtf8*,13u>;

	struct HashTableElement<std::uint32_t,const CgsUnicode::CgsUtf8*>;

	struct LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>;

	struct LinkedList<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>;

	struct LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u>;

	struct Stack<CgsGraphics::Im2dTransform,33>;

	struct Stack<std::uint16_t,2>;

	struct LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct HashTable<uint32_t,renderengine::TextureState*,25u>;

	struct HashTableElement<uint32_t,renderengine::TextureState*>;

	struct HashTableElementData<uint32_t,renderengine::TextureState*>;

	struct Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>;

}

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct CgsHash;

	struct BaseLinkedListNode;

	struct BaseLinkedList;

	struct LocklessQueue<CgsFileSystem::DiskCacheCommand>;

	struct LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LocklessQueue<char*>;

	struct RingBuffer<CgsFileSystem::CacheDebugEntry>;

	struct FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4>;

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

	struct FastBitArray<60>;

	struct Array<BrnAI::AISectionId,16u>;

	struct Array<std::uint32_t,8u>;

	struct Array<BrnGameState::CheckpointData,16u>;

	struct Array<BrnGameState::StartLocation,8u>;

	struct Array<BrnGameState::OpponentData,7u>;

	struct Array<CgsID,8u>;

	struct Array<BrnResource::VehicleListEntry::ELiveryType,8u>;

	struct Array<BrnProgression::ProfileEvent,175u>;

	struct Array<CgsNetwork::NetworkPlayerID,8u>;

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

	struct LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct HashTable<uint32_t,renderengine::TextureState*,25u>;

	struct HashTableElement<uint32_t,renderengine::TextureState*>;

	struct HashTableElementData<uint32_t,renderengine::TextureState*>;

	struct Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>;

	struct Array<rw::math::vpu::Vector3,5120u>;

	struct Array<uint32_t,228u>;

	struct Array<BrnDirector::HookNameStringWrapper,100u>;

	struct BitArray<32u>;

	struct BitArray<298u>;

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

	struct BitArray<50u>;

	struct BitArray<96u>;

	struct RingBuffer<rw::math::vpu::Matrix44Affine>;

	struct FixedRingBuffer<rw::math::vpu::Matrix44Affine,4>;

	struct BitArray<10u>;

	struct Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>;

	struct Stack<CgsGraphics::Im2dTransform,33>;

	struct Stack<uint16_t,2>;

	struct Array<BrnNetwork::LiveRevengeRelationship,250u>;

	struct FastBitArray<10>;

	struct Array<BrnGui::BoostMessageSlot,3u>;

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

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct CgsHash;

	struct BaseLinkedListNode;

	struct BaseLinkedList;

	struct LocklessQueue<CgsFileSystem::DiskCacheCommand>;

	struct LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LocklessQueue<char*>;

	struct RingBuffer<CgsFileSystem::CacheDebugEntry>;

	struct FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4>;

	struct LinkedList<CgsContainers::HashTableElementData<uint32_t, const CgsUnicode::CgsUtf8*> >;

	struct LinkedListNode<CgsContainers::HashTableElementData<uint32_t, const CgsUnicode::CgsUtf8*> >;

	struct HashTable<uint32_t,const CgsUnicode::CgsUtf8*,13u>;

	struct HashTableElement<uint32_t,const CgsUnicode::CgsUtf8*>;

	struct LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*>;

	struct LinkedList<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*>;

	struct LinkedListHelper<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*,1024u>;

	struct BitArray<2u>;

	struct Array<BrnProgression::InterestData,8u>;

	struct Set<CgsID,512u>;

	struct FastBitArray<2000>;

	struct Array<BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart,175u>;

	struct Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>;

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

	struct FastBitArray<60>;

	struct Array<CgsID,8u>;

	struct Array<BrnResource::VehicleListEntry::ELiveryType,8u>;

	struct Array<BrnProgression::ProfileEvent,175u>;

	struct Array<CgsID,92u>;

	struct BitArray<92u>;

	struct Array<CgsNetwork::NetworkPlayerID,8u>;

	struct FastBitArray<30>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

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

	struct Stack<CgsGraphics::Im2dTransform,33>;

	struct Stack<uint16_t,2>;

	struct Array<BrnNetwork::LiveRevengeRelationship,250u>;

	struct FastBitArray<10>;

	struct BitArray<298u>;

	struct BitArray<32u>;

	struct Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>;

	struct DictEntry;

	struct ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>;

	struct BitArray<7u>;

	struct ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>;

	struct Array<CgsID,80u>;

	struct FastBitArray<120>;

	struct FastBitArray<19>;

}

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

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

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

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

	struct Stack<CgsGraphics::Im2dTransform,33>;

	struct Stack<uint16_t,2>;

	struct Array<BrnNetwork::LiveRevengeRelationship,250u>;

	struct BitArray<32u>;

	struct DictEntry;

}

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct BaseLinkedListNode;

	struct BaseLinkedList;

	struct CgsHash;

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

	struct LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct HashTable<uint32_t,renderengine::TextureState*,25u>;

	struct HashTableElement<uint32_t,renderengine::TextureState*>;

	struct HashTableElementData<uint32_t,renderengine::TextureState*>;

	struct Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>;

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

	struct Array<CgsID,8u>;

	struct Array<BrnResource::VehicleListEntry::ELiveryType,8u>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<8u>;

	struct Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>;

	struct Array<BrnDirector::AllVehicleData::NearestCarInfo,8u>;

	struct Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>;

	struct Array<BrnGui::OverheadSignScore,32u>;

	struct Array<BrnProgression::ProfileEvent,175u>;

	struct FastBitArray<128>;

	struct Array<CgsID,92u>;

	struct BitArray<92u>;

	struct Stack<CgsGraphics::Im2dTransform,33>;

	struct Stack<uint16_t,2>;

	struct Array<rw::math::vpu::Vector3,5120u>;

	struct Array<uint32_t,228u>;

	struct Array<BrnNetwork::LiveRevengeRelationship,250u>;

	struct BitArray<32u>;

	struct DictEntry;

}

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct BaseLinkedListNode;

	struct BaseLinkedList;

	struct LocklessQueue<CgsFileSystem::DiskCacheCommand>;

	struct LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LocklessQueue<char*>;

	struct RingBuffer<CgsFileSystem::CacheDebugEntry>;

	struct FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4>;

	struct LinkedList<CgsContainers::HashTableElementData<uint32_t, const CgsUnicode::CgsUtf8*> >;

	struct LinkedListNode<CgsContainers::HashTableElementData<uint32_t, const CgsUnicode::CgsUtf8*> >;

	struct HashTable<uint32_t,const CgsUnicode::CgsUtf8*,13u>;

	struct HashTableElement<uint32_t,const CgsUnicode::CgsUtf8*>;

	struct LinkedListNode<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*>;

	struct LinkedList<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*>;

	struct LinkedListHelper<CgsContainers::HashTableElement<uint32_t, const CgsUnicode::CgsUtf8*>*,1024u>;

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

	struct Array<CgsID,8u>;

	struct Array<BrnResource::VehicleListEntry::ELiveryType,8u>;

	struct Array<BrnProgression::ProfileEvent,175u>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<8u>;

	struct Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>;

	struct Array<BrnDirector::AllVehicleData::NearestCarInfo,8u>;

	struct Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>;

	struct Array<BrnGui::OverheadSignScore,32u>;

	struct FastBitArray<128>;

	struct Array<CgsGui::AnimChannelData,6u>;

	struct Array<CgsGui::AnimData::AnimatorChannel,6u>;

	struct Array<CgsGui::AnimChannel,6u>;

	struct Array<CgsGui::AnimData,2u>;

	struct Array<CgsGui::AnimChannelData,2u>;

	struct LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct HashTable<uint32_t,renderengine::TextureState*,25u>;

	struct HashTableElement<uint32_t,renderengine::TextureState*>;

	struct HashTableElementData<uint32_t,renderengine::TextureState*>;

	struct Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>;

	struct Array<rw::math::vpu::Vector3,5120u>;

	struct Array<uint32_t,228u>;

	struct Array<BrnGui::ScrollableSelectionItem,32u>;

	struct Array<float32_t,32u>;

	struct Array<BrnGui::Animator,32u>;

}

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct BaseLinkedListNode;

	struct BaseLinkedList;

	struct CgsHash;

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

	struct FastBitArray<60>;

	struct Array<std::uint32_t,8u>;

	struct Array<BrnGameState::CheckpointData,16u>;

	struct Array<BrnGameState::StartLocation,8u>;

	struct Array<BrnGameState::OpponentData,7u>;

	struct Array<CgsID,8u>;

	struct Array<BrnResource::VehicleListEntry::ELiveryType,8u>;

	struct Array<BrnProgression::ProfileEvent,175u>;

	struct Array<CgsNetwork::NetworkPlayerID,8u>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<8u>;

	struct Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>;

	struct Array<BrnDirector::AllVehicleData::NearestCarInfo,8u>;

	struct Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>;

	struct Array<BrnGui::OverheadSignScore,32u>;

	struct Array<uint16_t,25u>;

	struct FastBitArray<128>;

	struct LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct HashTable<uint32_t,renderengine::TextureState*,25u>;

	struct HashTableElement<uint32_t,renderengine::TextureState*>;

	struct HashTableElementData<uint32_t,renderengine::TextureState*>;

	struct Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>;

	struct Array<uint32_t,228u>;

	struct Array<rw::math::vpu::Vector3,5120u>;

	struct Stack<CgsGraphics::Im2dTransform,33>;

	struct Stack<uint16_t,2>;

	struct Array<BrnGui::BoostMessageSlot,3u>;

	struct Array<BrnNetwork::LiveRevengeRelationship,250u>;

	struct FastBitArray<10>;

	struct BitArray<298u>;

	struct Array<BrnDirector::HookNameStringWrapper,100u>;

	struct BitArray<32u>;

	struct FastBitArray<601>;

	struct Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>;

	struct BitArray<20u>;

	struct ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>;

	struct Array<int32_t,20u>;

	struct Set<uint16_t,8u>;

	struct BitArray<28u>;

	struct DictEntry;

	struct ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>;

	struct Array<CgsGui::AnimChannelData,6u>;

	struct Array<CgsGui::AnimData::AnimatorChannel,6u>;

	struct Array<CgsGui::AnimChannel,6u>;

	struct Array<CgsGui::AnimData,2u>;

	struct Array<CgsGui::AnimChannelData,2u>;

	struct FastBitArray<64>;

	struct BitArray<50u>;

	struct BitArray<96u>;

	struct RingBuffer<rw::math::vpu::Matrix44Affine>;

	struct FixedRingBuffer<rw::math::vpu::Matrix44Affine,4>;

	struct BitArray<10u>;

	struct Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>;

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

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct BaseLinkedListNode;

	struct BaseLinkedList;

	struct LocklessQueue<CgsFileSystem::DiskCacheCommand>;

	struct LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LocklessQueue<char*>;

	struct RingBuffer<CgsFileSystem::CacheDebugEntry>;

	struct FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<8u>;

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

	struct BitArray<32u>;

	struct BitArray<298u>;

	struct FastBitArray<601>;

	struct Array<EGlobalRaceCarIndex,34u>;

	struct Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>;

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

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<8u>;

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

	struct Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>;

	struct Array<BrnDirector::AllVehicleData::NearestCarInfo,8u>;

	struct Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>;

	struct Array<BrnGui::OverheadSignScore,32u>;

	struct Array<uint16_t,25u>;

	struct FastBitArray<128>;

	struct Array<BrnDirector::HookNameStringWrapper,100u>;

	struct BitArray<32u>;

	struct BitArray<298u>;

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

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct BitArray<298u>;

	struct ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<8u>;

	struct Array<BrnAI::AISectionId,16u>;

	struct Array<std::uint32_t,8u>;

	struct Array<BrnGameState::CheckpointData,16u>;

	struct Array<BrnGameState::StartLocation,8u>;

	struct Array<BrnGameState::OpponentData,7u>;

	struct BitArray<35u>;

	struct BitArray<64u>;

	struct BitArray<30u>;

	struct BitArray<28u>;

	struct Array<BrnDirector::HookNameStringWrapper,100u>;

	struct BitArray<32u>;

	struct Array<EGlobalRaceCarIndex,34u>;

	struct Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>;

	struct BitArray<20u>;

	struct ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>;

	struct Array<int32_t,20u>;

	struct DictEntry;

	struct BitArray<50u>;

	struct BitArray<10u>;

	struct Array<CgsSceneManager::EntityId,20u>;

	struct BitArray<1u>;

	struct BitArray<15u>;

	struct BitArray<96u>;

	struct RingBuffer<rw::math::vpu::Matrix44Affine>;

	struct FixedRingBuffer<rw::math::vpu::Matrix44Affine,4>;

}

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct LocklessQueue<CgsFileSystem::DiskCacheCommand>;

	struct LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LocklessQueue<char*>;

	struct RingBuffer<CgsFileSystem::CacheDebugEntry>;

	struct FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4>;

	struct BitArray<35u>;

	struct BitArray<30u>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<8u>;

	struct Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>;

	struct Array<BrnDirector::AllVehicleData::NearestCarInfo,8u>;

	struct DictEntry;

	struct Array<BrnDirector::HookNameStringWrapper,100u>;

	struct BitArray<32u>;

	struct BitArray<298u>;

	struct Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>;

	struct ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>;

	struct BitArray<20u>;

	struct ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>;

	struct Array<int32_t,20u>;

	struct BitArray<28u>;

	struct BitArray<96u>;

	struct RingBuffer<rw::math::vpu::Matrix44Affine>;

	struct FixedRingBuffer<rw::math::vpu::Matrix44Affine,4>;

}

// CgsFlagSet.h:29
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

	struct FastBitArray<2>;

	struct FastBitArray<60>;

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

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<8u>;

	struct Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>;

	struct Array<BrnDirector::AllVehicleData::NearestCarInfo,8u>;

	struct Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>;

	struct Array<BrnGui::OverheadSignScore,32u>;

	struct Array<uint16_t,25u>;

	struct Array<BrnProgression::ProfileEvent,175u>;

	struct FastBitArray<128>;

	struct Array<BrnAI::AISectionId,16u>;

	struct Array<uint32_t,8u>;

	struct Array<BrnGameState::CheckpointData,16u>;

	struct Array<BrnGameState::StartLocation,8u>;

	struct Array<BrnGameState::OpponentData,7u>;

	struct Array<float32_t,16u>;

	struct Array<CgsNetwork::NetworkPlayerID,8u>;

	struct FastBitArray<601>;

	struct Array<EGlobalRaceCarIndex,34u>;

	struct BitArray<298u>;

	struct Array<BrnAI::SectionAndPortalIndices,16u>;

	struct RingBuffer<BrnAI::ResetOnTrackDebugComponent::ResetEntry>;

	struct FixedRingBuffer<BrnAI::ResetOnTrackDebugComponent::ResetEntry,16>;

	struct RingBuffer<BrnAI::ResetOnTrackDebugComponent::HngTestEntry>;

	struct FixedRingBuffer<BrnAI::ResetOnTrackDebugComponent::HngTestEntry,16>;

	struct Array<BrnDirector::HookNameStringWrapper,100u>;

	struct Array<BrnAI::AIModuleIO::ResetOnTrackRequest,35u>;

	struct RingBuffer<BrnAI::ResetOnTrackManager::RecentResetEntry>;

	struct FixedRingBuffer<BrnAI::ResetOnTrackManager::RecentResetEntry,8>;

	struct Array<BrnAI::RaceBalancingGraph,7u>;

	struct Array<BrnAI::RaceBalancingRoute,7u>;

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

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct LocklessQueue<CgsFileSystem::DiskCacheCommand>;

	struct LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LocklessQueue<char*>;

	struct RingBuffer<CgsFileSystem::CacheDebugEntry>;

	struct FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<8u>;

	struct BitArray<2u>;

	struct Set<CgsID,512u>;

	struct Array<BrnAI::AISectionId,16u>;

	struct Array<std::uint32_t,8u>;

	struct Array<BrnGameState::CheckpointData,16u>;

	struct Array<BrnGameState::StartLocation,8u>;

	struct Array<BrnGameState::OpponentData,7u>;

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

	struct Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>;

	struct Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>;

	struct Array<BrnGui::OverheadSignScore,32u>;

	struct Array<uint16_t,25u>;

	struct Array<BrnDirector::HookNameStringWrapper,100u>;

	struct BitArray<32u>;

	struct BitArray<298u>;

	struct FastBitArray<601>;

	struct Array<EGlobalRaceCarIndex,34u>;

	struct Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>;

	struct BitArray<20u>;

	struct ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>;

	struct Array<int32_t,20u>;

	struct BitArray<28u>;

	struct DictEntry;

	struct ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>;

	struct BitArray<400u>;

	struct Array<BrnTraffic::BrnTrafficIO::NearMissData,16u>;

	struct Array<BrnTraffic::BrnTrafficIO::NearMissData,8u>;

	struct BitArray<96u>;

	struct RingBuffer<rw::math::vpu::Matrix44Affine>;

	struct FixedRingBuffer<rw::math::vpu::Matrix44Affine,4>;

	struct Array<BrnAI::SectionAndPortalIndices,16u>;

	struct Array<BrnAI::RaceBalancingGraph,7u>;

	struct Array<BrnAI::RaceBalancingRoute,7u>;

}

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct BaseLinkedListNode;

	struct BaseLinkedList;

	struct LocklessQueue<CgsFileSystem::DiskCacheCommand>;

	struct LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LocklessQueue<char*>;

	struct RingBuffer<CgsFileSystem::CacheDebugEntry>;

	struct FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<8u>;

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

	struct Array<BrnDirector::HookNameStringWrapper,100u>;

	struct BitArray<32u>;

	struct BitArray<298u>;

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

	struct RingBuffer<int32_t>;

	struct BitArray<50u>;

	struct BitArray<96u>;

	struct RingBuffer<rw::math::vpu::Matrix44Affine>;

	struct FixedRingBuffer<rw::math::vpu::Matrix44Affine,4>;

	struct Array<BrnAI::SectionAndPortalIndices,16u>;

	struct Array<BrnAI::RaceBalancingGraph,7u>;

	struct Array<BrnAI::RaceBalancingRoute,7u>;

	struct Array<CgsSceneManager::EntityId,650u>;

	struct Array<BrnTraffic::VehicleRenderInfo,64u>;

	struct Array<BrnWorld::RaceCarCrash,8u>;

	struct Array<BrnWorld::TrafficCrash,160u>;

	struct FastBitArray<8>;

	struct Set<uint16_t,160u>;

	struct BitArray<10u>;

	struct Array<CgsSceneManager::EntityId,4500u>;

	struct Array<CgsSceneManager::EntityId,32u>;

	struct Array<CgsSceneManager::EntityId,5400u>;

	struct Array<rw::math::vpu::Vector3,5120u>;

	struct Array<uint32_t,228u>;

	struct Array<BrnWorld::CrashModule::FrozenTrafficTransform,160u>;

	struct Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>;

	struct Stack<CgsGraphics::Im2dTransform,33>;

	struct Stack<uint16_t,2>;

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

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<8u>;

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

	struct Array<float32_t,16u>;

	struct Array<CgsNetwork::NetworkPlayerID,8u>;

	struct FastBitArray<60>;

	struct IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>;

	struct IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>;

	struct BaseLinkedListNode;

	struct BaseLinkedList;

	struct LinearHashTable<std::uint64_t,std::int32_t>;

	struct LinearHashEntry<std::uint64_t,std::int32_t>;

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

	struct BitArray<10000u>;

	struct ObjectPool<CgsSceneManager::SceneManagerEntity,10000,int32_t>;

	struct BitArray<5048u>;

	struct ObjectPool<CgsSceneManager::VolumeInstance,5048,int32_t>;

	struct IndexedHashTableElementData<CgsSceneManager::EntityId,uint16_t>;

	struct IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t>;

	struct IndexedHashTableElement<CgsSceneManager::EntityId,uint16_t>;

	struct IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, uint16_t>,uint16_t>;

	struct IndexedHashTable<CgsSceneManager::EntityId,uint16_t,541u>;

	struct IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId,uint32_t>;

	struct IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t>;

	struct IndexedHashTableElement<CgsSceneManager::VolumeInstanceId,uint32_t>;

	struct IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, uint32_t>,uint16_t>;

	struct IndexedHashTable<CgsSceneManager::VolumeInstanceId,uint32_t,509u>;

	struct Array<BrnDirector::HookNameStringWrapper,100u>;

	struct BitArray<32u>;

	struct BitArray<298u>;

	struct Array<BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*>*,10u>;

	struct Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>*,40u>;

	struct Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult>*,10u>;

	struct Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult>*,10u>;

	struct Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult>*,10u>;

	struct Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult>*,1u>;

	struct Array<BrnTraffic::PhysicalRequestInfo,25u>;

	struct FastBitArray<601>;

	struct Array<EGlobalRaceCarIndex,34u>;

	struct Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>;

	struct Stack<ICE::ActionRef,20>;

	struct BitArray<20u>;

	struct ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>;

	struct Array<int32_t,20u>;

	struct Set<uint16_t,8u>;

	struct ObjectPool<rw::math::vpu::Vector4 [250],8,int32_t>;

	struct ObjectPool<rw::math::vpu::Vector4 [100],20,int32_t>;

	struct BitArray<28u>;

	struct ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>;

	struct Array<int32_t,28u>;

	struct Array<BrnDirector::Camera::BehaviourHelperIndex,28u>;

	struct Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>;

	struct ObjectPool<rw::math::vpu::Vector4 [70],20,int32_t>;

	struct Array<BrnDirector::MomentDescription,10u>;

	struct Array<BrnDirector::MomentController::MomentHandle,10u>;

	struct Array<float32_t,10u>;

	struct ObjectPool<BrnDirector::IceMovie,20,int32_t>;

	struct ObjectPool<BrnDirector::ICEMoviePlaylist::DebugMenuRemoveData,20,int32_t>;

	struct DictEntry;

	struct Dictionary<ICE::ICETakeData>;

	struct Array<int32_t,50u>;

	struct LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>;

	struct FifoQueue<CgsResource::Events::CreatePoolRequest,128>;

	struct FifoQueue<CgsResource::Events::AllocateResourceListRequest,4>;

	struct IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,uint16_t>;

	struct IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t>;

	struct LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct HashTable<uint32_t,renderengine::TextureState*,25u>;

	struct HashTableElement<uint32_t,renderengine::TextureState*>;

	struct HashTableElementData<uint32_t,renderengine::TextureState*>;

	struct Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>;

	struct BitArray<576u>;

	struct LinkedList<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> >;

	struct LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> >;

	struct HashTable<int32_t,CgsGui::EventInterpreterModule::sMapEntry,7u>;

	struct HashTableElement<int32_t,CgsGui::EventInterpreterModule::sMapEntry>;

	struct HashTableElementData<int32_t,CgsGui::EventInterpreterModule::sMapEntry>;

	struct BitArray<5051u>;

	struct BitArray<4608u>;

	struct ObjectPool<CgsSceneManager::VolumeSlot,4608,int32_t>;

	struct ObjectPool<CgsSceneManager::VolumeManagerVolume,5048,int32_t>;

	struct IndexedHashTableElementData<CgsSceneManager::VolumeId,uint32_t>;

	struct IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t>;

	struct IndexedHashTableElement<CgsSceneManager::VolumeId,uint32_t>;

	struct IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, uint32_t>,uint16_t>;

	struct IndexedHashTable<CgsSceneManager::VolumeId,uint32_t,227u>;

	struct ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>;

	struct Array<BrnTraffic::BrnTrafficIO::NearMissData,16u>;

	struct Array<BrnTraffic::BrnTrafficIO::NearMissData,8u>;

	struct RingBuffer<int32_t>;

	struct BitArray<50u>;

	struct BitArray<96u>;

	struct RingBuffer<rw::math::vpu::Matrix44Affine>;

	struct FixedRingBuffer<rw::math::vpu::Matrix44Affine,4>;

	struct Array<rw::math::vpu::Vector3,10u>;

	struct Array<BrnAI::AISectionId,4u>;

	struct Array<BrnWorld::NearMissData<4u, 8u>::VehicleTimePair,4u>;

	struct Array<BrnWorld::NearMissData<4u, 8u>::VehicleTimePair,8u>;

	struct Array<BrnWorld::NearMissData<4u, 7u>::VehicleTimePair,4u>;

	struct Array<BrnWorld::NearMissData<4u, 7u>::VehicleTimePair,7u>;

	struct RingBuffer<CgsSceneManager::EntityId>;

	struct FixedRingBuffer<CgsSceneManager::EntityId,32>;

	struct FixedRingBuffer<CgsSceneManager::EntityId,8>;

	struct Array<BrnAI::SectionAndPortalIndices,16u>;

	struct RingBuffer<BrnAI::ResetOnTrackDebugComponent::ResetEntry>;

	struct FixedRingBuffer<BrnAI::ResetOnTrackDebugComponent::ResetEntry,16>;

	struct RingBuffer<BrnAI::ResetOnTrackDebugComponent::HngTestEntry>;

	struct FixedRingBuffer<BrnAI::ResetOnTrackDebugComponent::HngTestEntry,16>;

	struct Array<BrnAI::AIModuleIO::ResetOnTrackRequest,35u>;

	struct RingBuffer<BrnAI::ResetOnTrackManager::RecentResetEntry>;

	struct FixedRingBuffer<BrnAI::ResetOnTrackManager::RecentResetEntry,8>;

	struct Array<BrnAI::RaceBalancingGraph,7u>;

	struct Array<BrnAI::RaceBalancingRoute,7u>;

	struct Array<rw::math::vpu::Vector3,8u>;

	struct Array<rw::math::vpu::VecFloat,8u>;

	struct Array<BrnWorld::RaceCarCrash,8u>;

	struct Array<BrnWorld::TrafficCrash,160u>;

	struct Array<uint16_t,1u>;

	struct Array<BrnTraffic::PurgatoryInfo,400u>;

	struct Stack<uint16_t,400>;

	struct Array<BrnTraffic::PurgatoryInfo,200u>;

	struct Stack<uint8_t,200>;

	struct Array<BrnTraffic::PurgatoryInfo,1u>;

	struct Stack<uint16_t,1>;

	struct Array<uint16_t,72u>;

	struct Array<BrnTraffic::HullChangeInfo,400u>;

	struct Array<uint16_t,9u>;

	struct Array<BrnTraffic::TrafficCrashInfo,160u>;

	struct Array<uint16_t,160u>;

	struct Array<BrnTraffic::CollidableVehicleInfo4,16u>;

	struct Array<BrnTraffic::FiredKillZoneInfo,8u>;

	struct BitArray<15u>;

	struct Set<BrnWorld::PropEntityID,32u>;

	struct BitArray<9u>;

	struct BitArray<5400u>;

	struct BitArray<100u>;

	struct Array<uint32_t,80u>;

	struct Array<BrnWorld::PropEntityID,15u>;

	struct Array<BrnWorld::PropEntityID,30u>;

	struct BitArray<10u>;

	struct Array<CgsSceneManager::EntityId,20u>;

	struct BitArray<1u>;

	struct Array<BrnParticle::Native::SparkBatch,4u>;

	struct Stack<BrnParticle::Native::TrailEmitter*,96>;

	struct Array<BrnParticle::Native::SimpleParticleBatch,13u>;

	struct Array<LionBatch,512u>;

	struct Array<CgsSound::Io::QueueElement,3u>;

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

	struct Stack<CgsGraphics::Im2dTransform,33>;

	struct Stack<uint16_t,2>;

	struct Array<rw::math::vpu::Vector3,5120u>;

	struct Array<uint32_t,228u>;

	struct Array<BrnNetwork::LiveRevengeRelationship,250u>;

	struct FastBitArray<10>;

	struct Array<uint32_t,5u>;

	struct Array<CgsGui::BillboardInfo,32u>;

	struct Array<BrnGui::BankingScore,6u>;

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

	struct Array<BrnGameState::GameModeState*,8u>;

	struct BitArray<46u>;

	struct Array<std::uint16_t,8u>;

	struct Array<BrnProgression::Race,64u>;

	struct Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u>;

	struct Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>;

	struct Stack<uint16_t,8>;

	struct Array<MainGameFlowState*,7u>;

	struct FastBitArray<140>;

	struct Array<BrnNetwork::HullToActivateInfo,7u>;

	struct RingBuffer<BrnNetwork::TrafficManager::TrafficHash>;

	struct FixedRingBuffer<BrnNetwork::TrafficManager::TrafficHash,128>;

	struct FifoQueue<BrnNetwork::StatsRequestEvent,32>;

	struct FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent,1>;

	struct FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent,14>;

	struct FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2>;

}

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct BitArray<24u>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

}

// CgsFlagSet.h:29
namespace CgsContainers {
	struct LocklessQueue<CgsFileSystem::DiskCacheCommand>;

	struct LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LocklessQueue<char*>;

	struct RingBuffer<CgsFileSystem::CacheDebugEntry>;

	struct FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4>;

}

// CgsFlagSet.h:29
namespace CgsContainers {
}

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct BaseLinkedListNode;

	struct BaseLinkedList;

	struct CgsHash;

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

	struct LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct HashTable<uint32_t,renderengine::TextureState*,25u>;

	struct HashTableElement<uint32_t,renderengine::TextureState*>;

	struct HashTableElementData<uint32_t,renderengine::TextureState*>;

	struct Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<8u>;

	struct BitArray<576u>;

	struct LinkedList<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> >;

	struct LinkedListNode<CgsContainers::HashTableElementData<int32_t, CgsGui::EventInterpreterModule::sMapEntry> >;

	struct HashTable<int32_t,CgsGui::EventInterpreterModule::sMapEntry,7u>;

	struct HashTableElement<int32_t,CgsGui::EventInterpreterModule::sMapEntry>;

	struct HashTableElementData<int32_t,CgsGui::EventInterpreterModule::sMapEntry>;

	struct Array<CgsGraphics::BasicColouredTexturedVertex,512u>;

	struct Array<CgsGui::AnimChannelData,6u>;

	struct Array<CgsGui::AnimData::AnimatorChannel,6u>;

	struct Array<CgsGui::AnimChannel,6u>;

}

// CgsFlagSet.h:29
namespace CgsContainers {
	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

}

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct BaseLinkedListNode;

	struct BaseLinkedList;

	struct CgsHash;

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

	struct HashTableElementData<std::uint32_t,const CgsUnicode::CgsUtf8*>;

}

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>;

	struct IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>;

}

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

}

// CgsFlagSet.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct BitArray<200u>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

}

