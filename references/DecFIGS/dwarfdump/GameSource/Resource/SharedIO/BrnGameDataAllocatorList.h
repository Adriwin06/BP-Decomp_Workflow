// VehicleListEntry.h:28
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct AllocatorList;

		struct GameDataEvent;

		struct GameDataAssetEvent;

		struct LoadGameDataEvent;

		struct GetGameDataEvent;

		struct GetTrafficLaneDataResponse;

		struct GetAIDataResponse;

		struct GetVehicleListRequest;

		struct GetVehicleListResponse;

		struct GetICEListRequest;

		struct GetICEListResponse;

		struct CreatePoolHeapParams;

		struct RequestQueue<512>;

		struct RequestInterface<512>;

	}

}

// BrnGameDataAllocatorList.h:52
struct BrnResource::GameDataIO::AllocatorList {
private:
	// BrnGameDataAllocatorList.h:91
	int32_t[64] maiAllocatorMap;

	// BrnGameDataAllocatorList.h:92
	CgsMemory::MemoryMap::EAllocatorType[64] maeAllocatorType;

	// BrnGameDataAllocatorList.h:94
	Resource *[2] mapRawResources;

	// BrnGameDataAllocatorList.h:95
	ResourceDescriptor *[2] mapRawResourceDescriptors;

	// BrnGameDataAllocatorList.h:96
	LinearMalloc *[7] mapLinearAllocators;

	// BrnGameDataAllocatorList.h:97
	HeapMalloc *[8] mapHeapAllocators;

	// BrnGameDataAllocatorList.h:98
	rw::LinearResourceAllocator *[5] mapRWLinearAllocators;

	// BrnGameDataAllocatorList.h:99
	rw::core::GeneralResourceAllocator *[5] mapRWGeneralAllocators;

	// BrnGameDataAllocatorList.h:100
	LinearMalloc * mpAudioStreamAllocator;

public:
	// BrnGameDataAllocatorList.h:56
	void Construct();

	// BrnGameDataAllocatorList.h:59
	Resource * GetRawResource(int32_t) const;

	// BrnGameDataAllocatorList.h:62
	ResourceDescriptor * GetRawResourceDescriptor(int32_t) const;

	// BrnGameDataAllocatorList.h:65
	LinearMalloc * GetLinearAllocator(int32_t) const;

	// BrnGameDataAllocatorList.h:68
	HeapMalloc * GetHeapAllocator(int32_t) const;

	// BrnGameDataAllocatorList.h:71
	rw::LinearResourceAllocator * GetRWLinearResourceAllocator(int32_t) const;

	// BrnGameDataAllocatorList.h:74
	rw::core::GeneralResourceAllocator * GetRWGeneralResourceAllocator(int32_t) const;

	// BrnGameDataAllocatorList.h:77
	LinearMalloc * GetAudioStreamAllocator() const;

	// BrnGameDataAllocatorList.h:80
	void DebugDumpStats(MemoryMap *);

private:
	// BrnGameDataAllocatorList.h:103
	bool GeneralAllocatorReportCB(const EA::Allocator::GeneralAllocator::BlockInfo *, void *);

}

// BrnResourceAllocator.h:32
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct AllocatorList;

		struct GameDataEvent;

		struct GameDataAssetEvent;

		struct LoadGameDataEvent;

		struct GetPropPhysicsResponse;

		struct CreatePoolHeapParams;

		struct RequestQueue<4096>;

		struct RequestInterface<4096>;

		struct RequestQueue<1024>;

		struct RequestInterface<1024>;

	}

}

// ChallengeListEntry.h:27
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct GameDataEvent;

		struct GameDataAssetEvent;

		struct GetGameDataEvent;

		struct GetAIDataResponse;

		struct CreatePoolHeapParams;

		struct RequestQueue<32768>;

		struct RequestInterface<32768>;

		struct InputBuffer;

		struct RequestQueue<3072>;

		struct RequestInterface<3072>;

	}

}

// ChallengeListEntry.h:27
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct AllocatorList;

		struct GameDataEvent;

		struct GameDataAssetEvent;

		struct LoadGameDataEvent;

		struct GetGameDataEvent;

		struct GetTrafficLaneDataResponse;

		struct GetAIDataResponse;

		struct GetVehicleListRequest;

		struct GetFreeburnChallengeListRequest;

		struct GetWheelListRequest;

		struct GetVehicleListResponse;

		struct GetFreeburnChallengeListResponse;

		struct GetWheelListResponse;

		struct CreatePoolHeapParams;

		struct RequestQueue<3072>;

		struct RequestInterface<3072>;

	}

}

// VehicleListEntry.h:28
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct AllocatorList;

		struct GameDataEvent;

		struct GameDataAssetEvent;

		struct GetVehicleListRequest;

		struct GetWheelListRequest;

		struct CreatePoolHeapParams;

		struct RequestQueue<32768>;

		struct RequestInterface<32768>;

		struct InputBuffer;

		struct OutputBuffer;

		struct RequestQueue<4096>;

		struct RequestInterface<4096>;

		struct RequestQueue<512>;

		struct RequestInterface<512>;

		struct RequestQueue<1024>;

		struct RequestInterface<1024>;

		struct RequestQueue<3072>;

		struct RequestInterface<3072>;

		struct RequestQueue<256>;

		struct RequestInterface<256>;

	}

}

// BrnResourceAllocator.h:32
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct AllocatorList;

	}

}

// ps3mem.h:5
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct CreatePoolHeapParams;

		struct RequestQueue<32768>;

		struct RequestInterface<32768>;

		struct InputBuffer;

	}

}

// ps3mem.h:5
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct AllocatorList;

		struct CreatePoolHeapParams;

		struct RequestQueue<32768>;

		struct RequestInterface<32768>;

		struct InputBuffer;

		struct OutputBuffer;

	}

}

// ChallengeListEntry.h:27
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct AllocatorList;

		struct GameDataEvent;

		struct SwapOutCollisionWorldResponse;

		struct CreatePoolHeapParams;

		struct RequestQueue<32768>;

		struct RequestInterface<32768>;

		struct InputBuffer;

		struct OutputBuffer;

		struct RequestQueue<4096>;

		struct RequestInterface<4096>;

		struct RequestQueue<3072>;

		struct RequestInterface<3072>;

		struct RequestQueue<256>;

		struct RequestInterface<256>;

	}

}

// BrnGameDataAllocatorList.h:52
struct BrnResource::GameDataIO::AllocatorList {
private:
	// BrnGameDataAllocatorList.h:91
	int32_t[64] maiAllocatorMap;

	// BrnGameDataAllocatorList.h:92
	CgsMemory::MemoryMap::EAllocatorType[64] maeAllocatorType;

	// BrnGameDataAllocatorList.h:94
	Resource *[2] mapRawResources;

	// BrnGameDataAllocatorList.h:95
	ResourceDescriptor *[2] mapRawResourceDescriptors;

	// BrnGameDataAllocatorList.h:96
	LinearMalloc *[7] mapLinearAllocators;

	// BrnGameDataAllocatorList.h:97
	CgsMemory::HeapMalloc *[8] mapHeapAllocators;

	// BrnGameDataAllocatorList.h:98
	rw::LinearResourceAllocator *[5] mapRWLinearAllocators;

	// BrnGameDataAllocatorList.h:99
	rw::core::GeneralResourceAllocator *[5] mapRWGeneralAllocators;

	// BrnGameDataAllocatorList.h:100
	LinearMalloc * mpAudioStreamAllocator;

public:
	// BrnGameDataAllocatorList.h:56
	void Construct();

	// BrnGameDataAllocatorList.h:59
	Resource * GetRawResource(int32_t) const;

	// BrnGameDataAllocatorList.h:62
	ResourceDescriptor * GetRawResourceDescriptor(int32_t) const;

	// BrnGameDataAllocatorList.h:65
	LinearMalloc * GetLinearAllocator(int32_t) const;

	// BrnGameDataAllocatorList.h:68
	CgsMemory::HeapMalloc * GetHeapAllocator(int32_t) const;

	// BrnGameDataAllocatorList.h:71
	rw::LinearResourceAllocator * GetRWLinearResourceAllocator(int32_t) const;

	// BrnGameDataAllocatorList.h:74
	rw::core::GeneralResourceAllocator * GetRWGeneralResourceAllocator(int32_t) const;

	// BrnGameDataAllocatorList.h:77
	LinearMalloc * GetAudioStreamAllocator() const;

	// BrnGameDataAllocatorList.h:80
	void DebugDumpStats(MemoryMap *);

private:
	// BrnGameDataAllocatorList.h:103
	bool GeneralAllocatorReportCB(const EA::Allocator::GeneralAllocator::BlockInfo *, void *);

}

// ps3mem.h:5
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct CreatePoolHeapParams;

		struct RequestQueue<32768>;

		struct RequestInterface<32768>;

		struct InputBuffer;

		struct RequestQueue<3072>;

		struct RequestInterface<3072>;

	}

}

// ChallengeListEntry.h:27
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct CreatePoolHeapParams;

		struct RequestQueue<32768>;

		struct RequestInterface<32768>;

		struct InputBuffer;

	}

}

// ChallengeListEntry.h:27
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct AllocatorList;

		struct GameDataEvent;

		struct SwapOutCollisionWorldResponse;

		struct CreatePoolHeapParams;

		struct RequestQueue<32768>;

		struct RequestInterface<32768>;

		struct InputBuffer;

		struct OutputBuffer;

	}

}

// ps3mem.h:5
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct AllocatorList;

		struct GameDataEvent;

		struct GameDataAssetEvent;

		struct GetVehicleListRequest;

		struct GetFreeburnChallengeListRequest;

		struct GetVehicleListResponse;

		struct GetFreeburnChallengeListResponse;

		struct SwapOutCollisionWorldRequest;

		struct SwapInCollisionWorldRequest;

		struct SwapOutCollisionWorldResponse;

		struct CreatePoolHeapParams;

		struct RequestQueue<32768>;

		struct RequestInterface<32768>;

		struct InputBuffer;

		struct OutputBuffer;

		struct RequestQueue<4096>;

		struct RequestInterface<4096>;

		struct RequestQueue<3072>;

		struct RequestInterface<3072>;

		struct RequestQueue<256>;

		struct RequestInterface<256>;

	}

}

// VehicleListEntry.h:28
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct AllocatorList;

		struct CreatePoolHeapParams;

		struct RequestQueue<512>;

		struct RequestInterface<512>;

	}

}

// BrnResourceAllocator.h:32
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct CreatePoolHeapParams;

		struct RequestQueue<32768>;

		struct RequestInterface<32768>;

		struct InputBuffer;

		struct RequestQueue<4096>;

		struct RequestInterface<4096>;

		struct RequestQueue<3072>;

		struct RequestInterface<3072>;

		struct RequestQueue<256>;

		struct RequestInterface<256>;

	}

}

// VehicleListEntry.h:28
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct CreatePoolHeapParams;

		struct RequestQueue<256>;

		struct RequestInterface<256>;

	}

}

// ChallengeListEntry.h:27
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct CreatePoolHeapParams;

		struct RequestQueue<256>;

		struct RequestInterface<256>;

	}

}

// VehicleListEntry.h:28
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct AllocatorList;

		struct CreatePoolHeapParams;

		struct RequestQueue<32768>;

		struct RequestInterface<32768>;

		struct InputBuffer;

		struct RequestQueue<4096>;

		struct RequestInterface<4096>;

		struct RequestQueue<3072>;

		struct RequestInterface<3072>;

		struct RequestQueue<256>;

		struct RequestInterface<256>;

	}

}

// ps3mem.h:5
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct AllocatorList;

	}

}

// VehicleListEntry.h:28
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct CreatePoolHeapParams;

		struct RequestQueue<32768>;

		struct RequestInterface<32768>;

		struct InputBuffer;

		struct RequestQueue<4096>;

		struct RequestInterface<4096>;

		struct RequestQueue<3072>;

		struct RequestInterface<3072>;

		struct RequestQueue<256>;

		struct RequestInterface<256>;

	}

}

// ps3mem.h:5
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct AllocatorList;

		struct CreatePoolHeapParams;

		struct RequestQueue<1024>;

		struct RequestInterface<1024>;

	}

}

// ps3mem.h:5
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		// Declaration
		struct AllocatorList {
			// BrnGameDataAllocatorList.h:85
			struct GenAllocUsage {
				// BrnGameDataAllocatorList.h:87
				uint32_t muAllocated;

				// BrnGameDataAllocatorList.h:88
				uint32_t muFree;

			}

		}

		struct GameDataEvent;

		struct GameDataAssetEvent;

		struct LoadGameDataEvent;

		struct UnloadGameDataEvent;

		struct GetGameDataEvent;

		struct GetVehicleGraphicsResponse;

		struct GetTrafficVehicleGraphicsResponse;

		struct LoadICEMovieResponse;

		struct GetICEMovieResponse;

		struct GetPropPhysicsResponse;

		struct GetPropInstancesResponse;

		struct GetPropGraphicsListResponse;

		struct GetWheelGraphicsResponse;

		struct GetVehiclePhysicsResponse;

		struct GetVehicleAttribsResponse;

		struct GetSurfaceListResponse;

		struct GetTrafficLaneDataResponse;

		struct GetAIDataResponse;

		struct GetWorldUnitGraphicsResponse;

		struct LoadWorldCollisionResponse;

		struct GetPVSResponse;

		struct UnloadGameDataResponse;

		struct GetVehicleListResponse;

		struct GetFreeburnChallengeListResponse;

		struct GetICEListResponse;

		struct GetWheelListResponse;

		struct SwapOutCollisionWorldRequest;

		struct SwapInCollisionWorldRequest;

		struct SwapOutCollisionWorldResponse;

		struct SwapInCollisionWorldResponse;

		struct CheckDLCVersionRequest;

		struct CheckDLCVersionResponse;

		struct CreatePoolHeapParams;

		struct RequestQueue<32768>;

		struct RequestInterface<32768>;

		struct InputBuffer;

		struct OutputBuffer;

	}

}

// BrnGameDataAllocatorList.h:52
struct BrnResource::GameDataIO::AllocatorList {
private:
	// BrnGameDataAllocatorList.h:91
	int32_t[64] maiAllocatorMap;

	// BrnGameDataAllocatorList.h:92
	CgsMemory::MemoryMap::EAllocatorType[64] maeAllocatorType;

	// BrnGameDataAllocatorList.h:94
	Resource *[2] mapRawResources;

	// BrnGameDataAllocatorList.h:95
	ResourceDescriptor *[2] mapRawResourceDescriptors;

	// BrnGameDataAllocatorList.h:96
	LinearMalloc *[7] mapLinearAllocators;

	// BrnGameDataAllocatorList.h:97
	HeapMalloc *[8] mapHeapAllocators;

	// BrnGameDataAllocatorList.h:98
	rw::LinearResourceAllocator *[5] mapRWLinearAllocators;

	// BrnGameDataAllocatorList.h:99
	rw::core::GeneralResourceAllocator *[5] mapRWGeneralAllocators;

	// BrnGameDataAllocatorList.h:100
	LinearMalloc * mpAudioStreamAllocator;

public:
	// BrnGameDataAllocatorList.h:56
	void Construct();

	// BrnGameDataAllocatorList.h:59
	Resource * GetRawResource(int32_t) const;

	// BrnGameDataAllocatorList.h:62
	ResourceDescriptor * GetRawResourceDescriptor(int32_t) const;

	// BrnGameDataAllocatorList.h:65
	LinearMalloc * GetLinearAllocator(int32_t) const;

	// BrnGameDataAllocatorList.h:68
	HeapMalloc * GetHeapAllocator(int32_t) const;

	// BrnGameDataAllocatorList.h:71
	rw::LinearResourceAllocator * GetRWLinearResourceAllocator(int32_t) const;

	// BrnGameDataAllocatorList.h:74
	rw::core::GeneralResourceAllocator * GetRWGeneralResourceAllocator(int32_t) const;

	// BrnGameDataAllocatorList.h:77
	LinearMalloc * GetAudioStreamAllocator() const;

	// BrnGameDataAllocatorList.h:80
	// Declaration
	void DebugDumpStats(MemoryMap *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameDataAllocatorList.cpp:52
		using namespace CgsDev::Message;

		// BrnGameDataAllocatorList.cpp:148
		using namespace CgsDev::Message;

	}

private:
	// BrnGameDataAllocatorList.h:103
	// Declaration
	bool GeneralAllocatorReportCB(const EA::Allocator::GeneralAllocator::BlockInfo *, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameDataAllocatorList.cpp:169
		using namespace CgsDev::Message;

	}

}

// ResourceTypeIds.h:30
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
	}

}

// ChallengeListEntry.h:27
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct AllocatorList;

		struct CreatePoolHeapParams;

		struct RequestQueue<32768>;

		struct RequestInterface<32768>;

		struct InputBuffer;

		struct RequestQueue<4096>;

		struct RequestInterface<4096>;

		struct RequestQueue<1024>;

		struct RequestInterface<1024>;

	}

}

// ChallengeListEntry.h:27
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct GameDataEvent;

		struct GameDataAssetEvent;

		struct LoadGameDataEvent;

		struct GetVehiclePhysicsResponse;

		struct GetTrafficLaneDataResponse;

		struct GetVehicleListRequest;

		struct GetVehicleListResponse;

		struct CreatePoolHeapParams;

		struct RequestQueue<32768>;

		struct RequestInterface<32768>;

		struct InputBuffer;

		struct RequestQueue<4096>;

		struct RequestInterface<4096>;

		struct RequestQueue<2048>;

		struct RequestInterface<2048>;

		struct RequestQueue<3072>;

		struct RequestInterface<3072>;

		struct RequestQueue<256>;

		struct RequestInterface<256>;

	}

}

// ChallengeListEntry.h:27
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct GameDataEvent;

		struct GameDataAssetEvent;

		struct GetTrafficVehicleGraphicsResponse;

		struct UnloadGameDataResponse;

		struct CreatePoolHeapParams;

		struct RequestQueue<4096>;

		struct RequestInterface<4096>;

		struct RequestQueue<2048>;

		struct RequestInterface<2048>;

	}

}

// ChallengeListEntry.h:27
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct AllocatorList;

		struct CreatePoolHeapParams;

		struct RequestQueue<32768>;

		struct RequestInterface<32768>;

		struct InputBuffer;

		struct RequestQueue<4096>;

		struct RequestInterface<4096>;

		struct RequestQueue<3072>;

		struct RequestInterface<3072>;

		struct RequestQueue<256>;

		struct RequestInterface<256>;

	}

}

// BrnResourceAllocator.h:32
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct CreatePoolHeapParams;

		struct RequestQueue<4096>;

		struct RequestInterface<4096>;

		struct RequestQueue<8192>;

		struct RequestInterface<8192>;

		struct RequestQueue<1024>;

		struct RequestInterface<1024>;

	}

}

// BrnResourceAllocator.h:32
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct AllocatorList;

		struct GameDataEvent;

		struct GameDataAssetEvent;

		struct LoadGameDataEvent;

		struct UnloadGameDataEvent;

		struct GetWorldUnitGraphicsResponse;

		struct UnloadGameDataResponse;

		struct CreatePoolHeapParams;

		struct RequestQueue<32768>;

		struct RequestInterface<32768>;

		struct InputBuffer;

		struct RequestQueue<4096>;

		struct RequestInterface<4096>;

		struct RequestQueue<8192>;

		struct RequestInterface<8192>;

		struct RequestQueue<2048>;

		struct RequestInterface<2048>;

		struct RequestQueue<1024>;

		struct RequestInterface<1024>;

		struct RequestQueue<3072>;

		struct RequestInterface<3072>;

		struct RequestQueue<256>;

		struct RequestInterface<256>;

	}

}

// VehicleListEntry.h:28
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		struct AllocatorList;

		struct GameDataEvent;

		struct GameDataAssetEvent;

		struct UnloadGameDataResponse;

		struct SwapOutCollisionWorldResponse;

		struct CreatePoolHeapParams;

		struct RequestQueue<32768>;

		struct RequestInterface<32768>;

		struct InputBuffer;

		struct OutputBuffer;

		struct RequestQueue<4096>;

		struct RequestInterface<4096>;

		struct RequestQueue<512>;

		struct RequestInterface<512>;

		struct RequestQueue<1024>;

		struct RequestInterface<1024>;

		struct RequestQueue<8192>;

		struct RequestInterface<8192>;

		struct RequestQueue<2048>;

		struct RequestInterface<2048>;

		struct RequestQueue<3072>;

		struct RequestInterface<3072>;

		struct RequestQueue<256>;

		struct RequestInterface<256>;

	}

}

// ps3mem.h:5
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
	}

}

// BrnResourceAllocator.h:32
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
	}

}

