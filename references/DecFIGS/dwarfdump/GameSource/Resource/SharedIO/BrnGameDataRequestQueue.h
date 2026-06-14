// BrnGameDataRequestQueue.h:112
struct BrnResource::GameDataIO::CreatePoolHeapParams {
	// BrnGameDataRequestQueue.h:123
	Entry::ResourceDescriptor mDescriptor;

	// BrnGameDataRequestQueue.h:124
	uint32_t[3] mauMaxResources;

public:
	// BrnGameDataRequestQueue.h:117
	void Clear();

	// BrnGameDataRequestQueue.h:121
	void SetHeapOptions(CgsResource::ESmallResourceMemType, uint32_t, uint32_t, uint32_t);

}

// BrnGameDataRequestQueue.h:96
struct BrnResource::GameDataIO::RequestQueue<512> : public ResourceRequestQueue<512> {
}

// BrnGameDataRequestQueue.h:136
struct BrnResource::GameDataIO::RequestInterface<512> {
private:
	// BrnGameDataRequestQueue.h:742
	RequestQueue<512> mRequestQueue;

public:
	// BrnGameDataRequestQueue.h:779
	void Construct();

	// BrnGameDataRequestQueue.h:789
	void Clear();

	// BrnGameDataRequestQueue.h:817
	RequestQueue<512> * GetRequestQueue();

	// BrnGameDataRequestQueue.h:824
	const RequestQueue<512> * GetRequestQueue() const;

	// BrnGameDataRequestQueue.h:846
	bool CreatePool(BaseEventReceiverQueue *, int, int, const char *, int, unsigned int, unsigned int, int, int32_t *, int, int, CreatePoolHeapParams *, bool);

	// BrnGameDataRequestQueue.h:886
	bool DeletePool(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:902
	bool LoadBundle(BaseEventReceiverQueue *, int, int, const char *, bool);

	// BrnGameDataRequestQueue.h:917
	bool UnloadBundle(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:931
	bool LoadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:945
	bool UnloadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:960
	bool AcquireResource(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:974
	bool AcquireResource(BaseEventReceiverQueue *, int, int, ID);

	// BrnGameDataRequestQueue.h:991
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, const char *, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1008
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, ID, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1027
	bool CreateHeapAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, HeapMalloc *);

	// BrnGameDataRequestQueue.h:1052
	bool CreateLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1073
	bool DestroyHeapAllocator(BaseEventReceiverQueue *, int, int, HeapMalloc *);

	// BrnGameDataRequestQueue.h:1090
	bool DestroyLinearAllocator(BaseEventReceiverQueue *, int, int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1111
	bool CreateBank(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *, Entry::ResourceDescriptor *, bool);

	// BrnGameDataRequestQueue.h:1148
	bool CreateResource(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1175
	bool CreateRwLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1202
	bool CreateRwGeneralAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1226
	bool DestroyBank(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1247
	bool OpenReadStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *, bool);

	// BrnGameDataRequestQueue.h:1266
	bool OpenWriteStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *);

	// BrnGameDataRequestQueue.h:1280
	bool CloseReadStream(BaseEventReceiverQueue *, int, ReadStream);

	// BrnGameDataRequestQueue.h:1294
	bool CloseWriteStream(BaseEventReceiverQueue *, int, WriteStream);

	// BrnGameDataRequestQueue.h:1311
	bool OpenFile(BaseEventReceiverQueue *, int, const char *, CgsFileSystem::FileAccess, int, bool);

	// BrnGameDataRequestQueue.h:1326
	bool CloseFile(BaseEventReceiverQueue *, int, FileHandle);

	// BrnGameDataRequestQueue.h:1340
	bool RegisterMemFile(const char *, void *, long long unsigned int);

	// BrnGameDataRequestQueue.h:1352
	bool UnregisterMemFile(const char *);

	// BrnGameDataRequestQueue.h:1368
	bool LoadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet, bool);

	// BrnGameDataRequestQueue.h:1383
	bool LoadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1398
	bool LoadTrafficVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1413
	bool LoadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1426
	bool LoadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1439
	bool LoadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1454
	bool LoadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1467
	bool LoadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1480
	bool LoadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1494
	bool LoadPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1508
	bool LoadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1521
	bool GetSurfaceList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1536
	bool UnloadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1549
	bool UnloadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1564
	bool UnloadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1579
	bool UnloadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1592
	bool UnloadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1605
	bool UnloadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1620
	bool UnloadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1633
	bool UnloadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1646
	bool UnloadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1662
	bool GetGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1674
	bool GetVehicleList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1686
	bool GetFreeburnChallengeList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1698
	bool GetICEList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1710
	bool GetWheelList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1725
	bool GetVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1750
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:1739
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, long long unsigned int);

	// BrnGameDataRequestQueue.h:1764
	bool GetAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1777
	bool GetTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1792
	bool GetWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1805
	bool GetWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1818
	bool GetPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1832
	bool GetPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1847
	bool GetPropInstances(BaseEventReceiverQueue *, int, int, int);

	// BrnGameDataRequestQueue.h:1860
	bool GetPropGraphicsList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1875
	bool AcquireZoneCollision(BaseEventReceiverQueue *, int, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1897
	bool SwapOutCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1909
	bool SwapInCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1921
	bool CheckDLCVersion(BaseEventReceiverQueue *, int);

}

// BrnGameDataRequestQueue.h:96
struct BrnResource::GameDataIO::RequestQueue<4096> : public ResourceRequestQueue<4096> {
}

// BrnGameDataRequestQueue.h:136
struct BrnResource::GameDataIO::RequestInterface<4096> {
private:
	// BrnGameDataRequestQueue.h:742
	RequestQueue<4096> mRequestQueue;

public:
	// BrnGameDataRequestQueue.h:779
	void Construct();

	// BrnGameDataRequestQueue.h:789
	void Clear();

	// BrnGameDataRequestQueue.h:817
	RequestQueue<4096> * GetRequestQueue();

	// BrnGameDataRequestQueue.h:824
	const RequestQueue<4096> * GetRequestQueue() const;

	// BrnGameDataRequestQueue.h:846
	bool CreatePool(BaseEventReceiverQueue *, int, int, const char *, int, unsigned int, unsigned int, int, int32_t *, int, int, CreatePoolHeapParams *, bool);

	// BrnGameDataRequestQueue.h:886
	bool DeletePool(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:902
	bool LoadBundle(BaseEventReceiverQueue *, int, int, const char *, bool);

	// BrnGameDataRequestQueue.h:917
	bool UnloadBundle(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:931
	bool LoadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:945
	bool UnloadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:960
	bool AcquireResource(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:974
	bool AcquireResource(BaseEventReceiverQueue *, int, int, ID);

	// BrnGameDataRequestQueue.h:991
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, const char *, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1008
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, ID, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1027
	bool CreateHeapAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, HeapMalloc *);

	// BrnGameDataRequestQueue.h:1052
	bool CreateLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1073
	bool DestroyHeapAllocator(BaseEventReceiverQueue *, int, int, HeapMalloc *);

	// BrnGameDataRequestQueue.h:1090
	bool DestroyLinearAllocator(BaseEventReceiverQueue *, int, int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1111
	bool CreateBank(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *, Entry::ResourceDescriptor *, bool);

	// BrnGameDataRequestQueue.h:1148
	bool CreateResource(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1175
	bool CreateRwLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1202
	bool CreateRwGeneralAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1226
	bool DestroyBank(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1247
	bool OpenReadStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *, bool);

	// BrnGameDataRequestQueue.h:1266
	bool OpenWriteStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *);

	// BrnGameDataRequestQueue.h:1280
	bool CloseReadStream(BaseEventReceiverQueue *, int, ReadStream);

	// BrnGameDataRequestQueue.h:1294
	bool CloseWriteStream(BaseEventReceiverQueue *, int, WriteStream);

	// BrnGameDataRequestQueue.h:1311
	bool OpenFile(BaseEventReceiverQueue *, int, const char *, CgsFileSystem::FileAccess, int, bool);

	// BrnGameDataRequestQueue.h:1326
	bool CloseFile(BaseEventReceiverQueue *, int, FileHandle);

	// BrnGameDataRequestQueue.h:1340
	bool RegisterMemFile(const char *, void *, long long unsigned int);

	// BrnGameDataRequestQueue.h:1352
	bool UnregisterMemFile(const char *);

	// BrnGameDataRequestQueue.h:1368
	bool LoadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet, bool);

	// BrnGameDataRequestQueue.h:1383
	bool LoadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1398
	bool LoadTrafficVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1413
	bool LoadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1426
	bool LoadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1439
	bool LoadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1454
	bool LoadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1467
	bool LoadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1480
	bool LoadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1494
	bool LoadPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1508
	bool LoadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1521
	bool GetSurfaceList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1536
	bool UnloadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1549
	bool UnloadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1564
	bool UnloadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1579
	bool UnloadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1592
	bool UnloadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1605
	bool UnloadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1620
	bool UnloadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1633
	bool UnloadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1646
	bool UnloadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1662
	bool GetGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1674
	bool GetVehicleList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1686
	bool GetFreeburnChallengeList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1698
	bool GetICEList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1710
	bool GetWheelList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1725
	bool GetVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1750
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:1739
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, long long unsigned int);

	// BrnGameDataRequestQueue.h:1764
	bool GetAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1777
	bool GetTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1792
	bool GetWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1805
	bool GetWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1818
	bool GetPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1832
	bool GetPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1847
	bool GetPropInstances(BaseEventReceiverQueue *, int, int, int);

	// BrnGameDataRequestQueue.h:1860
	bool GetPropGraphicsList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1875
	bool AcquireZoneCollision(BaseEventReceiverQueue *, int, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1897
	bool SwapOutCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1909
	bool SwapInCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1921
	bool CheckDLCVersion(BaseEventReceiverQueue *, int);

}

// BrnGameDataRequestQueue.h:96
struct BrnResource::GameDataIO::RequestQueue<1024> : public ResourceRequestQueue<1024> {
}

// BrnGameDataRequestQueue.h:136
struct BrnResource::GameDataIO::RequestInterface<1024> {
private:
	// BrnGameDataRequestQueue.h:742
	RequestQueue<1024> mRequestQueue;

public:
	// BrnGameDataRequestQueue.h:779
	void Construct();

	// BrnGameDataRequestQueue.h:789
	void Clear();

	// BrnGameDataRequestQueue.h:817
	RequestQueue<1024> * GetRequestQueue();

	// BrnGameDataRequestQueue.h:824
	const RequestQueue<1024> * GetRequestQueue() const;

	// BrnGameDataRequestQueue.h:846
	bool CreatePool(BaseEventReceiverQueue *, int, int, const char *, int, unsigned int, unsigned int, int, int32_t *, int, int, CreatePoolHeapParams *, bool);

	// BrnGameDataRequestQueue.h:886
	bool DeletePool(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:902
	bool LoadBundle(BaseEventReceiverQueue *, int, int, const char *, bool);

	// BrnGameDataRequestQueue.h:917
	bool UnloadBundle(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:931
	bool LoadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:945
	bool UnloadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:960
	bool AcquireResource(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:974
	bool AcquireResource(BaseEventReceiverQueue *, int, int, ID);

	// BrnGameDataRequestQueue.h:991
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, const char *, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1008
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, ID, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1027
	bool CreateHeapAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, HeapMalloc *);

	// BrnGameDataRequestQueue.h:1052
	bool CreateLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1073
	bool DestroyHeapAllocator(BaseEventReceiverQueue *, int, int, HeapMalloc *);

	// BrnGameDataRequestQueue.h:1090
	bool DestroyLinearAllocator(BaseEventReceiverQueue *, int, int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1111
	bool CreateBank(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *, Entry::ResourceDescriptor *, bool);

	// BrnGameDataRequestQueue.h:1148
	bool CreateResource(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1175
	bool CreateRwLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1202
	bool CreateRwGeneralAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1226
	bool DestroyBank(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1247
	bool OpenReadStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *, bool);

	// BrnGameDataRequestQueue.h:1266
	bool OpenWriteStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *);

	// BrnGameDataRequestQueue.h:1280
	bool CloseReadStream(BaseEventReceiverQueue *, int, ReadStream);

	// BrnGameDataRequestQueue.h:1294
	bool CloseWriteStream(BaseEventReceiverQueue *, int, WriteStream);

	// BrnGameDataRequestQueue.h:1311
	bool OpenFile(BaseEventReceiverQueue *, int, const char *, CgsFileSystem::FileAccess, int, bool);

	// BrnGameDataRequestQueue.h:1326
	bool CloseFile(BaseEventReceiverQueue *, int, FileHandle);

	// BrnGameDataRequestQueue.h:1340
	bool RegisterMemFile(const char *, void *, long long unsigned int);

	// BrnGameDataRequestQueue.h:1352
	bool UnregisterMemFile(const char *);

	// BrnGameDataRequestQueue.h:1368
	bool LoadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet, bool);

	// BrnGameDataRequestQueue.h:1383
	bool LoadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1398
	bool LoadTrafficVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1413
	bool LoadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1426
	bool LoadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1439
	bool LoadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1454
	bool LoadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1467
	bool LoadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1480
	bool LoadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1494
	bool LoadPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1508
	bool LoadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1521
	bool GetSurfaceList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1536
	bool UnloadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1549
	bool UnloadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1564
	bool UnloadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1579
	bool UnloadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1592
	bool UnloadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1605
	bool UnloadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1620
	bool UnloadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1633
	bool UnloadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1646
	bool UnloadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1662
	bool GetGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1674
	bool GetVehicleList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1686
	bool GetFreeburnChallengeList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1698
	bool GetICEList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1710
	bool GetWheelList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1725
	bool GetVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1750
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:1739
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, long long unsigned int);

	// BrnGameDataRequestQueue.h:1764
	bool GetAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1777
	bool GetTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1792
	bool GetWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1805
	bool GetWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1818
	bool GetPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1832
	bool GetPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1847
	bool GetPropInstances(BaseEventReceiverQueue *, int, int, int);

	// BrnGameDataRequestQueue.h:1860
	bool GetPropGraphicsList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1875
	bool AcquireZoneCollision(BaseEventReceiverQueue *, int, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1897
	bool SwapOutCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1909
	bool SwapInCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1921
	bool CheckDLCVersion(BaseEventReceiverQueue *, int);

}

// BrnGameDataRequestQueue.h:96
struct BrnResource::GameDataIO::RequestQueue<32768> : public ResourceRequestQueue<32768> {
}

// BrnGameDataRequestQueue.h:136
struct BrnResource::GameDataIO::RequestInterface<32768> {
private:
	// BrnGameDataRequestQueue.h:742
	RequestQueue<32768> mRequestQueue;

public:
	// BrnGameDataRequestQueue.h:779
	void Construct();

	// BrnGameDataRequestQueue.h:789
	void Clear();

	// BrnGameDataRequestQueue.h:817
	RequestQueue<32768> * GetRequestQueue();

	// BrnGameDataRequestQueue.h:824
	const RequestQueue<32768> * GetRequestQueue() const;

	// BrnGameDataRequestQueue.h:846
	bool CreatePool(BaseEventReceiverQueue *, int, int, const char *, int, unsigned int, unsigned int, int, int32_t *, int, int, CreatePoolHeapParams *, bool);

	// BrnGameDataRequestQueue.h:886
	bool DeletePool(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:902
	bool LoadBundle(BaseEventReceiverQueue *, int, int, const char *, bool);

	// BrnGameDataRequestQueue.h:917
	bool UnloadBundle(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:931
	bool LoadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:945
	bool UnloadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:960
	bool AcquireResource(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:974
	bool AcquireResource(BaseEventReceiverQueue *, int, int, ID);

	// BrnGameDataRequestQueue.h:991
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, const char *, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1008
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, ID, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1027
	bool CreateHeapAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, HeapMalloc *);

	// BrnGameDataRequestQueue.h:1052
	bool CreateLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1073
	bool DestroyHeapAllocator(BaseEventReceiverQueue *, int, int, HeapMalloc *);

	// BrnGameDataRequestQueue.h:1090
	bool DestroyLinearAllocator(BaseEventReceiverQueue *, int, int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1111
	bool CreateBank(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *, Entry::ResourceDescriptor *, bool);

	// BrnGameDataRequestQueue.h:1148
	bool CreateResource(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1175
	bool CreateRwLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1202
	bool CreateRwGeneralAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1226
	bool DestroyBank(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1247
	bool OpenReadStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *, bool);

	// BrnGameDataRequestQueue.h:1266
	bool OpenWriteStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *);

	// BrnGameDataRequestQueue.h:1280
	bool CloseReadStream(BaseEventReceiverQueue *, int, ReadStream);

	// BrnGameDataRequestQueue.h:1294
	bool CloseWriteStream(BaseEventReceiverQueue *, int, WriteStream);

	// BrnGameDataRequestQueue.h:1311
	bool OpenFile(BaseEventReceiverQueue *, int, const char *, CgsFileSystem::FileAccess, int, bool);

	// BrnGameDataRequestQueue.h:1326
	bool CloseFile(BaseEventReceiverQueue *, int, FileHandle);

	// BrnGameDataRequestQueue.h:1340
	bool RegisterMemFile(const char *, void *, long long unsigned int);

	// BrnGameDataRequestQueue.h:1352
	bool UnregisterMemFile(const char *);

	// BrnGameDataRequestQueue.h:1368
	bool LoadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet, bool);

	// BrnGameDataRequestQueue.h:1383
	bool LoadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1398
	bool LoadTrafficVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1413
	bool LoadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1426
	bool LoadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1439
	bool LoadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1454
	bool LoadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1467
	bool LoadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1480
	bool LoadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1494
	bool LoadPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1508
	bool LoadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1521
	bool GetSurfaceList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1536
	bool UnloadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1549
	bool UnloadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1564
	bool UnloadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1579
	bool UnloadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1592
	bool UnloadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1605
	bool UnloadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1620
	bool UnloadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1633
	bool UnloadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1646
	bool UnloadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1662
	bool GetGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1674
	bool GetVehicleList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1686
	bool GetFreeburnChallengeList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1698
	bool GetICEList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1710
	bool GetWheelList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1725
	bool GetVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1750
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:1739
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, long long unsigned int);

	// BrnGameDataRequestQueue.h:1764
	bool GetAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1777
	bool GetTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1792
	bool GetWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1805
	bool GetWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1818
	bool GetPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1832
	bool GetPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1847
	bool GetPropInstances(BaseEventReceiverQueue *, int, int, int);

	// BrnGameDataRequestQueue.h:1860
	bool GetPropGraphicsList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1875
	bool AcquireZoneCollision(BaseEventReceiverQueue *, int, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1897
	bool SwapOutCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1909
	bool SwapInCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1921
	bool CheckDLCVersion(BaseEventReceiverQueue *, int);

}

// BrnGameDataRequestQueue.h:96
struct BrnResource::GameDataIO::RequestQueue<8192> : public ResourceRequestQueue<8192> {
}

// BrnGameDataRequestQueue.h:136
struct BrnResource::GameDataIO::RequestInterface<8192> {
private:
	// BrnGameDataRequestQueue.h:742
	RequestQueue<8192> mRequestQueue;

public:
	// BrnGameDataRequestQueue.h:779
	void Construct();

	// BrnGameDataRequestQueue.h:789
	void Clear();

	// BrnGameDataRequestQueue.h:817
	RequestQueue<8192> * GetRequestQueue();

	// BrnGameDataRequestQueue.h:824
	const RequestQueue<8192> * GetRequestQueue() const;

	// BrnGameDataRequestQueue.h:846
	bool CreatePool(BaseEventReceiverQueue *, int, int, const char *, int, unsigned int, unsigned int, int, int32_t *, int, int, CreatePoolHeapParams *, bool);

	// BrnGameDataRequestQueue.h:886
	bool DeletePool(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:902
	bool LoadBundle(BaseEventReceiverQueue *, int, int, const char *, bool);

	// BrnGameDataRequestQueue.h:917
	bool UnloadBundle(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:931
	bool LoadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:945
	bool UnloadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:960
	bool AcquireResource(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:974
	bool AcquireResource(BaseEventReceiverQueue *, int, int, ID);

	// BrnGameDataRequestQueue.h:991
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, const char *, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1008
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, ID, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1027
	bool CreateHeapAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, HeapMalloc *);

	// BrnGameDataRequestQueue.h:1052
	bool CreateLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1073
	bool DestroyHeapAllocator(BaseEventReceiverQueue *, int, int, HeapMalloc *);

	// BrnGameDataRequestQueue.h:1090
	bool DestroyLinearAllocator(BaseEventReceiverQueue *, int, int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1111
	bool CreateBank(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *, Entry::ResourceDescriptor *, bool);

	// BrnGameDataRequestQueue.h:1148
	bool CreateResource(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1175
	bool CreateRwLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1202
	bool CreateRwGeneralAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1226
	bool DestroyBank(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1247
	bool OpenReadStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *, bool);

	// BrnGameDataRequestQueue.h:1266
	bool OpenWriteStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *);

	// BrnGameDataRequestQueue.h:1280
	bool CloseReadStream(BaseEventReceiverQueue *, int, ReadStream);

	// BrnGameDataRequestQueue.h:1294
	bool CloseWriteStream(BaseEventReceiverQueue *, int, WriteStream);

	// BrnGameDataRequestQueue.h:1311
	bool OpenFile(BaseEventReceiverQueue *, int, const char *, CgsFileSystem::FileAccess, int, bool);

	// BrnGameDataRequestQueue.h:1326
	bool CloseFile(BaseEventReceiverQueue *, int, FileHandle);

	// BrnGameDataRequestQueue.h:1340
	bool RegisterMemFile(const char *, void *, long long unsigned int);

	// BrnGameDataRequestQueue.h:1352
	bool UnregisterMemFile(const char *);

	// BrnGameDataRequestQueue.h:1368
	bool LoadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet, bool);

	// BrnGameDataRequestQueue.h:1383
	bool LoadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1398
	bool LoadTrafficVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1413
	bool LoadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1426
	bool LoadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1439
	bool LoadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1454
	bool LoadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1467
	bool LoadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1480
	bool LoadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1494
	bool LoadPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1508
	bool LoadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1521
	bool GetSurfaceList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1536
	bool UnloadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1549
	bool UnloadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1564
	bool UnloadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1579
	bool UnloadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1592
	bool UnloadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1605
	bool UnloadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1620
	bool UnloadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1633
	bool UnloadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1646
	bool UnloadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1662
	bool GetGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1674
	bool GetVehicleList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1686
	bool GetFreeburnChallengeList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1698
	bool GetICEList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1710
	bool GetWheelList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1725
	bool GetVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1750
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:1739
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, long long unsigned int);

	// BrnGameDataRequestQueue.h:1764
	bool GetAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1777
	bool GetTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1792
	bool GetWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1805
	bool GetWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1818
	bool GetPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1832
	bool GetPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1847
	bool GetPropInstances(BaseEventReceiverQueue *, int, int, int);

	// BrnGameDataRequestQueue.h:1860
	bool GetPropGraphicsList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1875
	bool AcquireZoneCollision(BaseEventReceiverQueue *, int, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1897
	bool SwapOutCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1909
	bool SwapInCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1921
	bool CheckDLCVersion(BaseEventReceiverQueue *, int);

}

// BrnGameDataRequestQueue.h:96
struct BrnResource::GameDataIO::RequestQueue<2048> : public ResourceRequestQueue<2048> {
}

// BrnGameDataRequestQueue.h:136
struct BrnResource::GameDataIO::RequestInterface<2048> {
private:
	// BrnGameDataRequestQueue.h:742
	RequestQueue<2048> mRequestQueue;

public:
	// BrnGameDataRequestQueue.h:779
	void Construct();

	// BrnGameDataRequestQueue.h:789
	void Clear();

	// BrnGameDataRequestQueue.h:817
	RequestQueue<2048> * GetRequestQueue();

	// BrnGameDataRequestQueue.h:824
	const RequestQueue<2048> * GetRequestQueue() const;

	// BrnGameDataRequestQueue.h:846
	bool CreatePool(BaseEventReceiverQueue *, int, int, const char *, int, unsigned int, unsigned int, int, int32_t *, int, int, CreatePoolHeapParams *, bool);

	// BrnGameDataRequestQueue.h:886
	bool DeletePool(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:902
	bool LoadBundle(BaseEventReceiverQueue *, int, int, const char *, bool);

	// BrnGameDataRequestQueue.h:917
	bool UnloadBundle(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:931
	bool LoadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:945
	bool UnloadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:960
	bool AcquireResource(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:974
	bool AcquireResource(BaseEventReceiverQueue *, int, int, ID);

	// BrnGameDataRequestQueue.h:991
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, const char *, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1008
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, ID, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1027
	bool CreateHeapAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, HeapMalloc *);

	// BrnGameDataRequestQueue.h:1052
	bool CreateLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1073
	bool DestroyHeapAllocator(BaseEventReceiverQueue *, int, int, HeapMalloc *);

	// BrnGameDataRequestQueue.h:1090
	bool DestroyLinearAllocator(BaseEventReceiverQueue *, int, int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1111
	bool CreateBank(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *, Entry::ResourceDescriptor *, bool);

	// BrnGameDataRequestQueue.h:1148
	bool CreateResource(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1175
	bool CreateRwLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1202
	bool CreateRwGeneralAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1226
	bool DestroyBank(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1247
	bool OpenReadStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *, bool);

	// BrnGameDataRequestQueue.h:1266
	bool OpenWriteStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *);

	// BrnGameDataRequestQueue.h:1280
	bool CloseReadStream(BaseEventReceiverQueue *, int, ReadStream);

	// BrnGameDataRequestQueue.h:1294
	bool CloseWriteStream(BaseEventReceiverQueue *, int, WriteStream);

	// BrnGameDataRequestQueue.h:1311
	bool OpenFile(BaseEventReceiverQueue *, int, const char *, CgsFileSystem::FileAccess, int, bool);

	// BrnGameDataRequestQueue.h:1326
	bool CloseFile(BaseEventReceiverQueue *, int, FileHandle);

	// BrnGameDataRequestQueue.h:1340
	bool RegisterMemFile(const char *, void *, long long unsigned int);

	// BrnGameDataRequestQueue.h:1352
	bool UnregisterMemFile(const char *);

	// BrnGameDataRequestQueue.h:1368
	bool LoadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet, bool);

	// BrnGameDataRequestQueue.h:1383
	bool LoadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1398
	bool LoadTrafficVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1413
	bool LoadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1426
	bool LoadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1439
	bool LoadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1454
	bool LoadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1467
	bool LoadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1480
	bool LoadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1494
	bool LoadPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1508
	bool LoadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1521
	bool GetSurfaceList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1536
	bool UnloadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1549
	bool UnloadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1564
	bool UnloadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1579
	bool UnloadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1592
	bool UnloadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1605
	bool UnloadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1620
	bool UnloadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1633
	bool UnloadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1646
	bool UnloadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1662
	bool GetGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1674
	bool GetVehicleList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1686
	bool GetFreeburnChallengeList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1698
	bool GetICEList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1710
	bool GetWheelList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1725
	bool GetVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1750
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:1739
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, long long unsigned int);

	// BrnGameDataRequestQueue.h:1764
	bool GetAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1777
	bool GetTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1792
	bool GetWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1805
	bool GetWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1818
	bool GetPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1832
	bool GetPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1847
	bool GetPropInstances(BaseEventReceiverQueue *, int, int, int);

	// BrnGameDataRequestQueue.h:1860
	bool GetPropGraphicsList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1875
	bool AcquireZoneCollision(BaseEventReceiverQueue *, int, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1897
	bool SwapOutCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1909
	bool SwapInCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1921
	bool CheckDLCVersion(BaseEventReceiverQueue *, int);

}

// BrnGameDataRequestQueue.h:96
struct BrnResource::GameDataIO::RequestQueue<3072> : public ResourceRequestQueue<3072> {
}

// BrnGameDataRequestQueue.h:136
struct BrnResource::GameDataIO::RequestInterface<3072> {
private:
	// BrnGameDataRequestQueue.h:742
	RequestQueue<3072> mRequestQueue;

public:
	// BrnGameDataRequestQueue.h:779
	void Construct();

	// BrnGameDataRequestQueue.h:789
	void Clear();

	// BrnGameDataRequestQueue.h:817
	RequestQueue<3072> * GetRequestQueue();

	// BrnGameDataRequestQueue.h:824
	const RequestQueue<3072> * GetRequestQueue() const;

	// BrnGameDataRequestQueue.h:846
	bool CreatePool(BaseEventReceiverQueue *, int, int, const char *, int, unsigned int, unsigned int, int, int32_t *, int, int, CreatePoolHeapParams *, bool);

	// BrnGameDataRequestQueue.h:886
	bool DeletePool(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:902
	bool LoadBundle(BaseEventReceiverQueue *, int, int, const char *, bool);

	// BrnGameDataRequestQueue.h:917
	bool UnloadBundle(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:931
	bool LoadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:945
	bool UnloadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:960
	bool AcquireResource(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:974
	bool AcquireResource(BaseEventReceiverQueue *, int, int, ID);

	// BrnGameDataRequestQueue.h:991
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, const char *, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1008
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, ID, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1027
	bool CreateHeapAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, HeapMalloc *);

	// BrnGameDataRequestQueue.h:1052
	bool CreateLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1073
	bool DestroyHeapAllocator(BaseEventReceiverQueue *, int, int, HeapMalloc *);

	// BrnGameDataRequestQueue.h:1090
	bool DestroyLinearAllocator(BaseEventReceiverQueue *, int, int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1111
	bool CreateBank(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *, Entry::ResourceDescriptor *, bool);

	// BrnGameDataRequestQueue.h:1148
	bool CreateResource(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1175
	bool CreateRwLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1202
	bool CreateRwGeneralAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1226
	bool DestroyBank(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1247
	bool OpenReadStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *, bool);

	// BrnGameDataRequestQueue.h:1266
	bool OpenWriteStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *);

	// BrnGameDataRequestQueue.h:1280
	bool CloseReadStream(BaseEventReceiverQueue *, int, ReadStream);

	// BrnGameDataRequestQueue.h:1294
	bool CloseWriteStream(BaseEventReceiverQueue *, int, WriteStream);

	// BrnGameDataRequestQueue.h:1311
	bool OpenFile(BaseEventReceiverQueue *, int, const char *, CgsFileSystem::FileAccess, int, bool);

	// BrnGameDataRequestQueue.h:1326
	bool CloseFile(BaseEventReceiverQueue *, int, FileHandle);

	// BrnGameDataRequestQueue.h:1340
	bool RegisterMemFile(const char *, void *, long long unsigned int);

	// BrnGameDataRequestQueue.h:1352
	bool UnregisterMemFile(const char *);

	// BrnGameDataRequestQueue.h:1368
	bool LoadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet, bool);

	// BrnGameDataRequestQueue.h:1383
	bool LoadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1398
	bool LoadTrafficVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1413
	bool LoadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1426
	bool LoadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1439
	bool LoadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1454
	bool LoadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1467
	bool LoadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1480
	bool LoadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1494
	bool LoadPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1508
	bool LoadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1521
	bool GetSurfaceList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1536
	bool UnloadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1549
	bool UnloadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1564
	bool UnloadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1579
	bool UnloadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1592
	bool UnloadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1605
	bool UnloadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1620
	bool UnloadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1633
	bool UnloadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1646
	bool UnloadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1662
	bool GetGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1674
	bool GetVehicleList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1686
	bool GetFreeburnChallengeList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1698
	bool GetICEList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1710
	bool GetWheelList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1725
	bool GetVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1750
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:1739
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, long long unsigned int);

	// BrnGameDataRequestQueue.h:1764
	bool GetAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1777
	bool GetTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1792
	bool GetWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1805
	bool GetWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1818
	bool GetPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1832
	bool GetPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1847
	bool GetPropInstances(BaseEventReceiverQueue *, int, int, int);

	// BrnGameDataRequestQueue.h:1860
	bool GetPropGraphicsList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1875
	bool AcquireZoneCollision(BaseEventReceiverQueue *, int, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1897
	bool SwapOutCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1909
	bool SwapInCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1921
	bool CheckDLCVersion(BaseEventReceiverQueue *, int);

}

// BrnGameDataRequestQueue.h:96
struct BrnResource::GameDataIO::RequestQueue<256> : public ResourceRequestQueue<256> {
}

// BrnGameDataRequestQueue.h:136
struct BrnResource::GameDataIO::RequestInterface<256> {
private:
	// BrnGameDataRequestQueue.h:742
	RequestQueue<256> mRequestQueue;

public:
	// BrnGameDataRequestQueue.h:779
	void Construct();

	// BrnGameDataRequestQueue.h:789
	void Clear();

	// BrnGameDataRequestQueue.h:817
	RequestQueue<256> * GetRequestQueue();

	// BrnGameDataRequestQueue.h:824
	const RequestQueue<256> * GetRequestQueue() const;

	// BrnGameDataRequestQueue.h:846
	bool CreatePool(BaseEventReceiverQueue *, int, int, const char *, int, unsigned int, unsigned int, int, int32_t *, int, int, CreatePoolHeapParams *, bool);

	// BrnGameDataRequestQueue.h:886
	bool DeletePool(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:902
	bool LoadBundle(BaseEventReceiverQueue *, int, int, const char *, bool);

	// BrnGameDataRequestQueue.h:917
	bool UnloadBundle(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:931
	bool LoadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:945
	bool UnloadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:960
	bool AcquireResource(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:974
	bool AcquireResource(BaseEventReceiverQueue *, int, int, ID);

	// BrnGameDataRequestQueue.h:991
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, const char *, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1008
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, ID, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1027
	bool CreateHeapAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, HeapMalloc *);

	// BrnGameDataRequestQueue.h:1052
	bool CreateLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1073
	bool DestroyHeapAllocator(BaseEventReceiverQueue *, int, int, HeapMalloc *);

	// BrnGameDataRequestQueue.h:1090
	bool DestroyLinearAllocator(BaseEventReceiverQueue *, int, int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1111
	bool CreateBank(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *, Entry::ResourceDescriptor *, bool);

	// BrnGameDataRequestQueue.h:1148
	bool CreateResource(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1175
	bool CreateRwLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1202
	bool CreateRwGeneralAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1226
	bool DestroyBank(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1247
	bool OpenReadStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *, bool);

	// BrnGameDataRequestQueue.h:1266
	bool OpenWriteStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *);

	// BrnGameDataRequestQueue.h:1280
	bool CloseReadStream(BaseEventReceiverQueue *, int, ReadStream);

	// BrnGameDataRequestQueue.h:1294
	bool CloseWriteStream(BaseEventReceiverQueue *, int, WriteStream);

	// BrnGameDataRequestQueue.h:1311
	bool OpenFile(BaseEventReceiverQueue *, int, const char *, CgsFileSystem::FileAccess, int, bool);

	// BrnGameDataRequestQueue.h:1326
	bool CloseFile(BaseEventReceiverQueue *, int, FileHandle);

	// BrnGameDataRequestQueue.h:1340
	bool RegisterMemFile(const char *, void *, long long unsigned int);

	// BrnGameDataRequestQueue.h:1352
	bool UnregisterMemFile(const char *);

	// BrnGameDataRequestQueue.h:1368
	bool LoadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet, bool);

	// BrnGameDataRequestQueue.h:1383
	bool LoadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1398
	bool LoadTrafficVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1413
	bool LoadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1426
	bool LoadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1439
	bool LoadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1454
	bool LoadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1467
	bool LoadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1480
	bool LoadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1494
	bool LoadPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1508
	bool LoadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1521
	bool GetSurfaceList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1536
	bool UnloadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1549
	bool UnloadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1564
	bool UnloadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1579
	bool UnloadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1592
	bool UnloadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1605
	bool UnloadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1620
	bool UnloadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1633
	bool UnloadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1646
	bool UnloadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1662
	bool GetGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1674
	bool GetVehicleList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1686
	bool GetFreeburnChallengeList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1698
	bool GetICEList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1710
	bool GetWheelList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1725
	bool GetVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1750
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:1739
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, long long unsigned int);

	// BrnGameDataRequestQueue.h:1764
	bool GetAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1777
	bool GetTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1792
	bool GetWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1805
	bool GetWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1818
	bool GetPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1832
	bool GetPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1847
	bool GetPropInstances(BaseEventReceiverQueue *, int, int, int);

	// BrnGameDataRequestQueue.h:1860
	bool GetPropGraphicsList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1875
	bool AcquireZoneCollision(BaseEventReceiverQueue *, int, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1897
	bool SwapOutCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1909
	bool SwapInCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1921
	bool CheckDLCVersion(BaseEventReceiverQueue *, int);

}

// BrnGameDataRequestQueue.h:810
extern void Append<512>(const RequestInterface<512> *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameDataRequestQueue.h:810
extern void Append<2048>(const RequestInterface<2048> *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameDataRequestQueue.h:810
extern void Append<4096>(const RequestInterface<4096> *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameDataRequestQueue.h:810
extern void Append<256>(const RequestInterface<256> *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameDataRequestQueue.h:810
extern void Append<1024>(const RequestInterface<1024> *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameDataRequestQueue.h:810
extern void Append<3072>(const RequestInterface<3072> *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameDataRequestQueue.h:136
struct BrnResource::GameDataIO::RequestInterface<32768> {
private:
	// BrnGameDataRequestQueue.h:742
	RequestQueue<32768> mRequestQueue;

public:
	// BrnGameDataRequestQueue.h:779
	void Construct();

	// BrnGameDataRequestQueue.h:789
	void Clear();

	// BrnGameDataRequestQueue.h:817
	RequestQueue<32768> * GetRequestQueue();

	// BrnGameDataRequestQueue.h:824
	const RequestQueue<32768> * GetRequestQueue() const;

	// BrnGameDataRequestQueue.h:846
	bool CreatePool(BaseEventReceiverQueue *, int, int, const char *, int, unsigned int, unsigned int, int, int32_t *, int, int, CreatePoolHeapParams *, bool);

	// BrnGameDataRequestQueue.h:886
	bool DeletePool(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:902
	bool LoadBundle(BaseEventReceiverQueue *, int, int, const char *, bool);

	// BrnGameDataRequestQueue.h:917
	bool UnloadBundle(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:931
	bool LoadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:945
	bool UnloadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:960
	bool AcquireResource(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:974
	bool AcquireResource(BaseEventReceiverQueue *, int, int, ID);

	// BrnGameDataRequestQueue.h:991
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, const char *, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1008
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, ID, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1027
	bool CreateHeapAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, CgsMemory::HeapMalloc *);

	// BrnGameDataRequestQueue.h:1052
	bool CreateLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1073
	bool DestroyHeapAllocator(BaseEventReceiverQueue *, int, int, CgsMemory::HeapMalloc *);

	// BrnGameDataRequestQueue.h:1090
	bool DestroyLinearAllocator(BaseEventReceiverQueue *, int, int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1111
	bool CreateBank(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *, Entry::ResourceDescriptor *, bool);

	// BrnGameDataRequestQueue.h:1148
	bool CreateResource(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1175
	bool CreateRwLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1202
	bool CreateRwGeneralAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1226
	bool DestroyBank(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1247
	bool OpenReadStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *, bool);

	// BrnGameDataRequestQueue.h:1266
	bool OpenWriteStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *);

	// BrnGameDataRequestQueue.h:1280
	bool CloseReadStream(BaseEventReceiverQueue *, int, ReadStream);

	// BrnGameDataRequestQueue.h:1294
	bool CloseWriteStream(BaseEventReceiverQueue *, int, WriteStream);

	// BrnGameDataRequestQueue.h:1311
	bool OpenFile(BaseEventReceiverQueue *, int, const char *, CgsFileSystem::FileAccess, int, bool);

	// BrnGameDataRequestQueue.h:1326
	bool CloseFile(BaseEventReceiverQueue *, int, FileHandle);

	// BrnGameDataRequestQueue.h:1340
	bool RegisterMemFile(const char *, void *, long long unsigned int);

	// BrnGameDataRequestQueue.h:1352
	bool UnregisterMemFile(const char *);

	// BrnGameDataRequestQueue.h:1368
	bool LoadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet, bool);

	// BrnGameDataRequestQueue.h:1383
	bool LoadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1398
	bool LoadTrafficVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1413
	bool LoadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1426
	bool LoadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1439
	bool LoadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1454
	bool LoadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1467
	bool LoadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1480
	bool LoadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1494
	bool LoadPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1508
	bool LoadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1521
	bool GetSurfaceList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1536
	bool UnloadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1549
	bool UnloadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1564
	bool UnloadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1579
	bool UnloadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1592
	bool UnloadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1605
	bool UnloadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1620
	bool UnloadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1633
	bool UnloadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1646
	bool UnloadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1662
	bool GetGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1674
	bool GetVehicleList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1686
	bool GetFreeburnChallengeList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1698
	bool GetICEList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1710
	bool GetWheelList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1725
	bool GetVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1750
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:1739
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, long long unsigned int);

	// BrnGameDataRequestQueue.h:1764
	bool GetAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1777
	bool GetTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1792
	bool GetWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1805
	bool GetWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1818
	bool GetPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1832
	bool GetPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1847
	bool GetPropInstances(BaseEventReceiverQueue *, int, int, int);

	// BrnGameDataRequestQueue.h:1860
	bool GetPropGraphicsList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1875
	bool AcquireZoneCollision(BaseEventReceiverQueue *, int, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1897
	bool SwapOutCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1909
	bool SwapInCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1921
	bool CheckDLCVersion(BaseEventReceiverQueue *, int);

}

// BrnGameDataRequestQueue.h:136
struct BrnResource::GameDataIO::RequestInterface<4096> {
private:
	// BrnGameDataRequestQueue.h:742
	RequestQueue<4096> mRequestQueue;

public:
	// BrnGameDataRequestQueue.h:779
	void Construct();

	// BrnGameDataRequestQueue.h:789
	void Clear();

	// BrnGameDataRequestQueue.h:817
	RequestQueue<4096> * GetRequestQueue();

	// BrnGameDataRequestQueue.h:824
	const RequestQueue<4096> * GetRequestQueue() const;

	// BrnGameDataRequestQueue.h:846
	bool CreatePool(BaseEventReceiverQueue *, int, int, const char *, int, unsigned int, unsigned int, int, int32_t *, int, int, CreatePoolHeapParams *, bool);

	// BrnGameDataRequestQueue.h:886
	bool DeletePool(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:902
	bool LoadBundle(BaseEventReceiverQueue *, int, int, const char *, bool);

	// BrnGameDataRequestQueue.h:917
	bool UnloadBundle(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:931
	bool LoadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:945
	bool UnloadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:960
	bool AcquireResource(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:974
	bool AcquireResource(BaseEventReceiverQueue *, int, int, ID);

	// BrnGameDataRequestQueue.h:991
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, const char *, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1008
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, ID, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1027
	bool CreateHeapAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, CgsMemory::HeapMalloc *);

	// BrnGameDataRequestQueue.h:1052
	bool CreateLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1073
	bool DestroyHeapAllocator(BaseEventReceiverQueue *, int, int, CgsMemory::HeapMalloc *);

	// BrnGameDataRequestQueue.h:1090
	bool DestroyLinearAllocator(BaseEventReceiverQueue *, int, int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1111
	bool CreateBank(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *, Entry::ResourceDescriptor *, bool);

	// BrnGameDataRequestQueue.h:1148
	bool CreateResource(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1175
	bool CreateRwLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1202
	bool CreateRwGeneralAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1226
	bool DestroyBank(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1247
	bool OpenReadStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *, bool);

	// BrnGameDataRequestQueue.h:1266
	bool OpenWriteStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *);

	// BrnGameDataRequestQueue.h:1280
	bool CloseReadStream(BaseEventReceiverQueue *, int, ReadStream);

	// BrnGameDataRequestQueue.h:1294
	bool CloseWriteStream(BaseEventReceiverQueue *, int, WriteStream);

	// BrnGameDataRequestQueue.h:1311
	bool OpenFile(BaseEventReceiverQueue *, int, const char *, CgsFileSystem::FileAccess, int, bool);

	// BrnGameDataRequestQueue.h:1326
	bool CloseFile(BaseEventReceiverQueue *, int, FileHandle);

	// BrnGameDataRequestQueue.h:1340
	bool RegisterMemFile(const char *, void *, long long unsigned int);

	// BrnGameDataRequestQueue.h:1352
	bool UnregisterMemFile(const char *);

	// BrnGameDataRequestQueue.h:1368
	bool LoadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet, bool);

	// BrnGameDataRequestQueue.h:1383
	bool LoadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1398
	bool LoadTrafficVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1413
	bool LoadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1426
	bool LoadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1439
	bool LoadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1454
	bool LoadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1467
	bool LoadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1480
	bool LoadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1494
	bool LoadPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1508
	bool LoadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1521
	bool GetSurfaceList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1536
	bool UnloadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1549
	bool UnloadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1564
	bool UnloadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1579
	bool UnloadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1592
	bool UnloadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1605
	bool UnloadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1620
	bool UnloadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1633
	bool UnloadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1646
	bool UnloadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1662
	bool GetGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1674
	bool GetVehicleList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1686
	bool GetFreeburnChallengeList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1698
	bool GetICEList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1710
	bool GetWheelList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1725
	bool GetVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1750
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:1739
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, long long unsigned int);

	// BrnGameDataRequestQueue.h:1764
	bool GetAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1777
	bool GetTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1792
	bool GetWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1805
	bool GetWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1818
	bool GetPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1832
	bool GetPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1847
	bool GetPropInstances(BaseEventReceiverQueue *, int, int, int);

	// BrnGameDataRequestQueue.h:1860
	bool GetPropGraphicsList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1875
	bool AcquireZoneCollision(BaseEventReceiverQueue *, int, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1897
	bool SwapOutCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1909
	bool SwapInCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1921
	bool CheckDLCVersion(BaseEventReceiverQueue *, int);

}

// BrnGameDataRequestQueue.h:136
struct BrnResource::GameDataIO::RequestInterface<3072> {
private:
	// BrnGameDataRequestQueue.h:742
	RequestQueue<3072> mRequestQueue;

public:
	// BrnGameDataRequestQueue.h:779
	void Construct();

	// BrnGameDataRequestQueue.h:789
	void Clear();

	// BrnGameDataRequestQueue.h:817
	RequestQueue<3072> * GetRequestQueue();

	// BrnGameDataRequestQueue.h:824
	const RequestQueue<3072> * GetRequestQueue() const;

	// BrnGameDataRequestQueue.h:846
	bool CreatePool(BaseEventReceiverQueue *, int, int, const char *, int, unsigned int, unsigned int, int, int32_t *, int, int, CreatePoolHeapParams *, bool);

	// BrnGameDataRequestQueue.h:886
	bool DeletePool(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:902
	bool LoadBundle(BaseEventReceiverQueue *, int, int, const char *, bool);

	// BrnGameDataRequestQueue.h:917
	bool UnloadBundle(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:931
	bool LoadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:945
	bool UnloadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:960
	bool AcquireResource(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:974
	bool AcquireResource(BaseEventReceiverQueue *, int, int, ID);

	// BrnGameDataRequestQueue.h:991
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, const char *, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1008
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, ID, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1027
	bool CreateHeapAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, CgsMemory::HeapMalloc *);

	// BrnGameDataRequestQueue.h:1052
	bool CreateLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1073
	bool DestroyHeapAllocator(BaseEventReceiverQueue *, int, int, CgsMemory::HeapMalloc *);

	// BrnGameDataRequestQueue.h:1090
	bool DestroyLinearAllocator(BaseEventReceiverQueue *, int, int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1111
	bool CreateBank(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *, Entry::ResourceDescriptor *, bool);

	// BrnGameDataRequestQueue.h:1148
	bool CreateResource(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1175
	bool CreateRwLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1202
	bool CreateRwGeneralAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1226
	bool DestroyBank(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1247
	bool OpenReadStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *, bool);

	// BrnGameDataRequestQueue.h:1266
	bool OpenWriteStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *);

	// BrnGameDataRequestQueue.h:1280
	bool CloseReadStream(BaseEventReceiverQueue *, int, ReadStream);

	// BrnGameDataRequestQueue.h:1294
	bool CloseWriteStream(BaseEventReceiverQueue *, int, WriteStream);

	// BrnGameDataRequestQueue.h:1311
	bool OpenFile(BaseEventReceiverQueue *, int, const char *, CgsFileSystem::FileAccess, int, bool);

	// BrnGameDataRequestQueue.h:1326
	bool CloseFile(BaseEventReceiverQueue *, int, FileHandle);

	// BrnGameDataRequestQueue.h:1340
	bool RegisterMemFile(const char *, void *, long long unsigned int);

	// BrnGameDataRequestQueue.h:1352
	bool UnregisterMemFile(const char *);

	// BrnGameDataRequestQueue.h:1368
	bool LoadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet, bool);

	// BrnGameDataRequestQueue.h:1383
	bool LoadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1398
	bool LoadTrafficVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1413
	bool LoadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1426
	bool LoadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1439
	bool LoadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1454
	bool LoadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1467
	bool LoadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1480
	bool LoadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1494
	bool LoadPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1508
	bool LoadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1521
	bool GetSurfaceList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1536
	bool UnloadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1549
	bool UnloadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1564
	bool UnloadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1579
	bool UnloadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1592
	bool UnloadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1605
	bool UnloadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1620
	bool UnloadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1633
	bool UnloadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1646
	bool UnloadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1662
	bool GetGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1674
	bool GetVehicleList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1686
	bool GetFreeburnChallengeList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1698
	bool GetICEList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1710
	bool GetWheelList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1725
	bool GetVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1750
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:1739
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, long long unsigned int);

	// BrnGameDataRequestQueue.h:1764
	bool GetAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1777
	bool GetTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1792
	bool GetWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1805
	bool GetWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1818
	bool GetPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1832
	bool GetPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1847
	bool GetPropInstances(BaseEventReceiverQueue *, int, int, int);

	// BrnGameDataRequestQueue.h:1860
	bool GetPropGraphicsList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1875
	bool AcquireZoneCollision(BaseEventReceiverQueue *, int, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1897
	bool SwapOutCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1909
	bool SwapInCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1921
	bool CheckDLCVersion(BaseEventReceiverQueue *, int);

}

// BrnGameDataRequestQueue.h:136
struct BrnResource::GameDataIO::RequestInterface<256> {
private:
	// BrnGameDataRequestQueue.h:742
	RequestQueue<256> mRequestQueue;

public:
	// BrnGameDataRequestQueue.h:779
	void Construct();

	// BrnGameDataRequestQueue.h:789
	void Clear();

	// BrnGameDataRequestQueue.h:817
	RequestQueue<256> * GetRequestQueue();

	// BrnGameDataRequestQueue.h:824
	const RequestQueue<256> * GetRequestQueue() const;

	// BrnGameDataRequestQueue.h:846
	bool CreatePool(BaseEventReceiverQueue *, int, int, const char *, int, unsigned int, unsigned int, int, int32_t *, int, int, CreatePoolHeapParams *, bool);

	// BrnGameDataRequestQueue.h:886
	bool DeletePool(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:902
	bool LoadBundle(BaseEventReceiverQueue *, int, int, const char *, bool);

	// BrnGameDataRequestQueue.h:917
	bool UnloadBundle(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:931
	bool LoadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:945
	bool UnloadICEMovies(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:960
	bool AcquireResource(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:974
	bool AcquireResource(BaseEventReceiverQueue *, int, int, ID);

	// BrnGameDataRequestQueue.h:991
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, const char *, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1008
	bool AcquireResourceList(BaseEventReceiverQueue *, int, int, ID, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1027
	bool CreateHeapAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, CgsMemory::HeapMalloc *);

	// BrnGameDataRequestQueue.h:1052
	bool CreateLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, CgsResource::ESmallResourceMemType, unsigned int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1073
	bool DestroyHeapAllocator(BaseEventReceiverQueue *, int, int, CgsMemory::HeapMalloc *);

	// BrnGameDataRequestQueue.h:1090
	bool DestroyLinearAllocator(BaseEventReceiverQueue *, int, int, LinearMalloc *);

	// BrnGameDataRequestQueue.h:1111
	bool CreateBank(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *, Entry::ResourceDescriptor *, bool);

	// BrnGameDataRequestQueue.h:1148
	bool CreateResource(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1175
	bool CreateRwLinearAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1202
	bool CreateRwGeneralAllocator(BaseEventReceiverQueue *, int, int, int, const char *, Entry::ResourceDescriptor *);

	// BrnGameDataRequestQueue.h:1226
	bool DestroyBank(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1247
	bool OpenReadStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *, bool);

	// BrnGameDataRequestQueue.h:1266
	bool OpenWriteStream(BaseEventReceiverQueue *, int, const char *, unsigned int, unsigned int, int, int, void *);

	// BrnGameDataRequestQueue.h:1280
	bool CloseReadStream(BaseEventReceiverQueue *, int, ReadStream);

	// BrnGameDataRequestQueue.h:1294
	bool CloseWriteStream(BaseEventReceiverQueue *, int, WriteStream);

	// BrnGameDataRequestQueue.h:1311
	bool OpenFile(BaseEventReceiverQueue *, int, const char *, CgsFileSystem::FileAccess, int, bool);

	// BrnGameDataRequestQueue.h:1326
	bool CloseFile(BaseEventReceiverQueue *, int, FileHandle);

	// BrnGameDataRequestQueue.h:1340
	bool RegisterMemFile(const char *, void *, long long unsigned int);

	// BrnGameDataRequestQueue.h:1352
	bool UnregisterMemFile(const char *);

	// BrnGameDataRequestQueue.h:1368
	bool LoadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet, bool);

	// BrnGameDataRequestQueue.h:1383
	bool LoadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1398
	bool LoadTrafficVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1413
	bool LoadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1426
	bool LoadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1439
	bool LoadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1454
	bool LoadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1467
	bool LoadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1480
	bool LoadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1494
	bool LoadPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1508
	bool LoadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1521
	bool GetSurfaceList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1536
	bool UnloadGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1549
	bool UnloadPropInstances(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1564
	bool UnloadVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1579
	bool UnloadWheel(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1592
	bool UnloadAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1605
	bool UnloadTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1620
	bool UnloadWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1633
	bool UnloadWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1646
	bool UnloadPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1662
	bool GetGameData(BaseEventReceiverQueue *, int, int, long long unsigned int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1674
	bool GetVehicleList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1686
	bool GetFreeburnChallengeList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1698
	bool GetICEList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1710
	bool GetWheelList(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1725
	bool GetVehicle(BaseEventReceiverQueue *, int, int, const char *, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1750
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, const char *);

	// BrnGameDataRequestQueue.h:1739
	bool GetICEMovie(BaseEventReceiverQueue *, int, int, long long unsigned int);

	// BrnGameDataRequestQueue.h:1764
	bool GetAILanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1777
	bool GetTrafficLanes(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1792
	bool GetWorldUnit(BaseEventReceiverQueue *, int, int, int, BrnResource::EAssetSet);

	// BrnGameDataRequestQueue.h:1805
	bool GetWorldCollision(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1818
	bool GetPVS(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1832
	bool GetPropPhysics(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1847
	bool GetPropInstances(BaseEventReceiverQueue *, int, int, int);

	// BrnGameDataRequestQueue.h:1860
	bool GetPropGraphicsList(BaseEventReceiverQueue *, int, int);

	// BrnGameDataRequestQueue.h:1875
	bool AcquireZoneCollision(BaseEventReceiverQueue *, int, ResourceHandle *, int);

	// BrnGameDataRequestQueue.h:1897
	bool SwapOutCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1909
	bool SwapInCollisionWorld(BaseEventReceiverQueue *, int);

	// BrnGameDataRequestQueue.h:1921
	bool CheckDLCVersion(BaseEventReceiverQueue *, int);

}

// ps3mem.h:5
namespace BrnResource {
	// BrnGameDataAllocatorList.h:43
	namespace GameDataIO {
		// BrnGameDataRequestQueue.h:37
		enum EGDEventType {
			EVENT_LOAD_GAMEDATA = 25,
			EVENT_LOAD_VEHICLE = 26,
			EVENT_LOAD_TRAFFIC_VEHICLE = 27,
			EVENT_LOAD_AI_DATA = 28,
			EVENT_LOAD_TRAFFIC_LANES = 29,
			EVENT_LOAD_WORLD_UNIT = 30,
			EVENT_LOAD_WORLD_COLLISION = 31,
			EVENT_LOAD_PVS = 32,
			EVENT_LOAD_PROP_PHYSICS = 33,
			EVENT_LOAD_PROP_INSTANCES = 34,
			EVENT_LOAD_WHEEL = 35,
			EVENT_LOAD_SURFACE_LIST = 36,
			EVENT_LOAD_ICE_MOVIES = 37,
			EVENT_UNLOAD_GAMEDATA = 38,
			EVENT_UNLOAD_VEHICLE = 39,
			EVENT_UNLOAD_TRAFFIC_VEHICLE = 40,
			EVENT_UNLOAD_AI_DATA = 41,
			EVENT_UNLOAD_TRAFFIC_LANES = 42,
			EVENT_UNLOAD_WORLD_UNIT = 43,
			EVENT_UNLOAD_WORLD_COLLISION = 44,
			EVENT_UNLOAD_PVS = 45,
			EVENT_UNLOAD_WHEEL = 46,
			EVENT_UNLOAD_PROP_INSTANCES = 47,
			EVENT_GET_GAMEDATA = 48,
			EVENT_GET_VEHICLE = 49,
			EVENT_GET_TRAFFIC_VEHICLE = 50,
			EVENT_GET_VEHICLE_LIST = 51,
			EVENT_GET_FREEBURN_CHALLENGE_LIST = 52,
			EVENT_GET_AI_DATA = 53,
			EVENT_GET_TRAFFIC_LANES = 54,
			EVENT_GET_WORLD_UNIT = 55,
			EVENT_GET_WORLD_COLLISION = 56,
			EVENT_GET_PVS = 57,
			EVENT_GET_WHEEL_LIST = 58,
			EVENT_GET_WHEEL = 59,
			EVENT_GET_PROP_PHYSICS = 60,
			EVENT_GET_PROP_INSTANCES = 61,
			EVENT_GET_PROP_GRAPHICS_LIST = 62,
			EVENT_GET_ICE_LIST = 63,
			EVENT_GET_ICE_MOVIE = 64,
			EVENT_GET_SURFACE_LIST = 65,
			EVENT_SWAP_OUT_COLLISION_WORLD = 66,
			EVENT_SWAP_IN_COLLISION_WORLD = 67,
			EVENT_CHECK_DLC_VERSION = 68,
			EVENT_GDCOUNT = 69,
		}

	}

}

// BrnGameDataRequestQueue.h:810
extern void Append<1024>(const RequestInterface<1024> *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<4096,16>::Append<1024, 16>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsModule::VariableEventQueue<1024,16>::GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGameDataRequestQueue.h:810
extern void Append<8192>(const RequestInterface<8192> *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<4096,16>::Append<8192, 16>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsModule::VariableEventQueue<8192,16>::GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

