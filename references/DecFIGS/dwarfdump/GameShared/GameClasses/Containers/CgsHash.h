// CgsSet.h:28
namespace CgsContainers {
	// CgsHash.h:30
	const int32_t KI_HASH_LOOKUP_TABLE_SIZE = 256;

}

// CgsFlagSet.h:29
namespace CgsContainers {
	// CgsHash.h:30
	const int32_t KI_HASH_LOOKUP_TABLE_SIZE = 256;

}

// CgsBitArray.h:29
namespace CgsContainers {
	// CgsHash.h:30
	const int32_t KI_HASH_LOOKUP_TABLE_SIZE = 256;

}

// CgsHash.h:24
namespace CgsContainers {
	struct CgsHash;

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

	struct LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct HashTable<uint32_t,renderengine::TextureState*,25u>;

	struct HashTableElement<uint32_t,renderengine::TextureState*>;

	struct HashTableElementData<uint32_t,renderengine::TextureState*>;

	struct Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>;

	struct Array<rw::math::vpu::Vector3,5120u>;

	struct Array<uint32_t,228u>;

	struct Array<BrnNetwork::LiveRevengeRelationship,250u>;

	struct Array<BrnGui::BoostMessageSlot,3u>;

	struct Stack<CgsGraphics::Im2dTransform,33>;

	struct Stack<uint16_t,2>;

	struct BitArray<32u>;

	struct DictEntry;

	struct BitArray<3u>;

	struct FastBitArray<512>;

	struct FastBitArray<175>;

	// CgsHash.h:30
	const int32_t KI_HASH_LOOKUP_TABLE_SIZE = 256;

}

// CgsHash.h:45
struct CgsContainers::CgsHash {
private:
	// CgsHash.h:50
	extern uint32_t[256] manHashTable;

public:
	// CgsHash.h:47
	uint32_t CalculateHash(const char *);

	// CgsHash.h:48
	uint32_t CalculateHash(const void *, int32_t);

}

// CgsStack.h:24
namespace CgsContainers {
	// CgsHash.h:30
	const int32_t KI_HASH_LOOKUP_TABLE_SIZE = 256;

}

// CgsRingBuffer.h:24
namespace CgsContainers {
	// CgsHash.h:30
	const int32_t KI_HASH_LOOKUP_TABLE_SIZE = 256;

}

// CgsIndexedPool.h:24
namespace CgsContainers {
	// CgsHash.h:30
	const int32_t KI_HASH_LOOKUP_TABLE_SIZE = 256;

}

// CgsHash.h:24
namespace CgsContainers {
	struct CgsHash;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	// CgsHash.h:30
	const int32_t KI_HASH_LOOKUP_TABLE_SIZE = 256;

}

// CgsFifoQueue.h:24
namespace CgsContainers {
	// CgsHash.h:30
	const int32_t KI_HASH_LOOKUP_TABLE_SIZE = 256;

}

// CgsHash.h:78
void _GLOBAL__D__ZN6CgsDev13StrStreamBase11KAC_INTEGERE() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHash.h:77
void _GLOBAL__I__ZN6CgsDev13StrStreamBase11KAC_INTEGERE() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsFastBitArray.h:24
namespace CgsContainers {
	// CgsHash.h:30
	const int32_t KI_HASH_LOOKUP_TABLE_SIZE = 256;

}

// CgsHash.h:24
namespace CgsContainers {
	struct CgsHash;

	// CgsHash.h:30
	const int32_t KI_HASH_LOOKUP_TABLE_SIZE = 256;

}

