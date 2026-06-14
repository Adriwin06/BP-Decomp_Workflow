// BrnGameDataModule.h:142
extern const int32_t KI_MAP_BUFFER_SIZE = 10240;

// BrnGameDataModule.h:144
extern const int32_t KI_MAX_RESOURCE_TYPES = 256;

// VehicleListEntry.h:28
namespace BrnResource {
	// Declaration
	struct GameDataModule {
	public:
		// BrnGameDataModule.h:1102
		void StartDLCChecking();

		// BrnGameDataModule.h:1072
		const HudMessageController * GetHudMessageController() const;

		// BrnGameDataModule.h:1087
		const PopupController * GetPopupController() const;

		// Unknown accessibility
		// BrnGameDataModule.h:142
		extern const int32_t KI_MAP_BUFFER_SIZE = 10240;

		// Unknown accessibility
		// BrnGameDataModule.h:144
		extern const int32_t KI_MAX_RESOURCE_TYPES = 256;

	}

}

// ps3mem.h:5
namespace BrnResource {
	// Declaration
	struct GameDataEventSlot {
		// BrnGameDataModule.h:112
		enum EEventStage {
			E_LOADING = 0,
			E_AQUIRING = 1,
			E_UNLOADING = 2,
			E_DONE = 3,
		}

	}

	// Declaration
	struct GameDataModule {
		// BrnGameDataModule.h:147
		struct TestStreamEntry {
			// BrnGameDataModule.h:149
			uint32_t muDataSize;

			// BrnGameDataModule.h:150
			uint64_t muTime;

		}

		// BrnGameDataModule.h:155
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MANAGER = 1,
			E_PREPARESTAGE_RESOURCEMODULE = 2,
			E_PREPARESTAGE_CREATEBANKS = 3,
			E_PREPARESTAGE_CREATEPOOLS = 4,
			E_PREPARESTAGE_CREATEALLOCATORS = 5,
			E_PREPARESTAGE_ATTRIBSYS = 6,
			E_PREPARESTAGE_GAMETALK = 7,
			E_PREPARESTAGE_LIVEUPDATE = 8,
			E_PREPARESTAGE_VEHICLELIST = 9,
			E_PREPARESTAGE_CHALLENGELIST = 10,
			E_PREPARESTAGE_ICELIST = 11,
			E_PREPARESTAGE_WHEELLIST = 12,
			E_PREPARESTAGE_HUDMESSAGES = 13,
			E_PREPARESTAGE_POPUPS = 14,
			E_PREPARESTAGE_TESTSTREAMS = 15,
			E_PREPARESTAGE_DLC = 16,
			E_PREPARESTAGE_DONE = 17,
		}

		// BrnGameDataModule.h:177
		enum EPrepareCLStage {
			E_PREPARECLSTAGE_START = 0,
			E_PREPARECLSTAGE_LOADLISTBUNDLE = 1,
			E_PREPARECLSTAGE_WFLOADLIST = 2,
			E_PREPARECLSTAGE_LISTAQUIRE = 3,
			E_PREPARECLSTAGE_WFLISTAQUIRE = 4,
			E_PREPARECLSTAGE_DONE = 5,
		}

		// BrnGameDataModule.h:187
		enum EPrepareVLStage {
			E_PREPAREVLSTAGE_START = 0,
			E_PREPAREVLSTAGE_LOADLISTBUNDLE = 1,
			E_PREPAREVLSTAGE_WFLOADLIST = 2,
			E_PREPAREVLSTAGE_LISTAQUIRE = 3,
			E_PREPAREVLSTAGE_WFLISTAQUIRE = 4,
			E_PREPAREVLSTAGE_DONE = 5,
		}

		// BrnGameDataModule.h:197
		enum EPrepareILStage {
			E_PREPAREILSTAGE_START = 0,
			E_PREPAREILSTAGE_LOAD_STANDARDTAKE_BUNDLES = 1,
			E_PREPAREILSTAGE_LOAD_STANDARDTAKE_BUNDLES_WAIT = 2,
			E_PREPAREILSTAGE_TAKEDICTIONARY_ACQUIRE = 3,
			E_PREPAREILSTAGE_TAKEDICTIONARY_ACQUIRE_WAIT = 4,
			E_PREPAREILSTAGE_DONE = 5,
		}

		// BrnGameDataModule.h:207
		enum EPrepareWLStage {
			E_PREPAREWLSTAGE_START = 0,
			E_PREPAREWLSTAGE_LOADLISTBUNDLE = 1,
			E_PREPAREWLSTAGE_WFLOADLIST = 2,
			E_PREPAREWLSTAGE_LISTAQUIRE = 3,
			E_PREPAREWLSTAGE_WFLISTAQUIRE = 4,
			E_PREPAREWLSTAGE_DONE = 5,
		}

		// BrnGameDataModule.h:217
		enum EPrepareHMStage {
			E_PREPAREHMSTAGE_START = 0,
			E_PREPAREHMSTAGE_MESSAGE_LOADBUNDLE = 1,
			E_PREPAREHMSTAGE_MESSAGE_WFLOADBUNDLE = 2,
			E_PREPAREHMSTAGE_MESSAGE_AQUIRERESOURCE = 3,
			E_PREPAREHMSTAGE_MESSAGE_WFAQUIRERESOURCE = 4,
			E_PREPAREHMSTAGE_DONE = 5,
		}

		// BrnGameDataModule.h:227
		enum EPreparePopupStage {
			E_PREPAREPOPUPSTAGE_START = 0,
			E_PREPAREPOPUPSTAGE_LOADBUNDLE = 1,
			E_PREPAREPOPUPSTAGE_WFLOADBUNDLE = 2,
			E_PREPAREPOPUPSTAGE_AQUIRERESOURCES = 3,
			E_PREPAREPOPUPSTAGE_WFAQUIRERESOURCES = 4,
			E_PREPAREPOPUPSTAGE_DONE = 5,
		}

		// BrnGameDataModule.h:237
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_DLC = 1,
			E_RELEASESTAGE_GAMETALK = 2,
			E_RELEASESTAGE_ATTRIBSYS = 3,
			E_RELEASESTAGE_DESTROYALLOCATORS = 4,
			E_RELEASESTAGE_DESTROYPOOLS = 5,
			E_RELEASESTAGE_DESTROYBANKS = 6,
			E_RELEASESTAGE_RESOURCEMODULE = 7,
			E_RELEASESTAGE_MANAGER = 8,
			E_RELEASESTAGE_DONE = 9,
		}

		// BrnGameDataModule.h:251
		enum EResourcePrepareStage {
			E_RESOURCESTAGE_START = 0,
			E_RESOURCESTAGE_WAITING_FOR_RESPONSE = 1,
			E_RESOURCESTAGE_DONE = 2,
		}

		// BrnGameDataModule.h:270
		enum EUpdateResult {
			E_RESULT_OK = 0,
			E_RESULT_REQUIRE_STALL = 1,
		}

	}

}

// BrnGameDataModule.h:109
struct BrnResource::GameDataEventSlot {
	// BrnGameDataModule.h:120
	BrnResource::GameDataEventSlot::EEventStage meStage;

	// BrnGameDataModule.h:121
	GameDataAssetEvent mEvent;

	// BrnGameDataModule.h:122
	BrnResource::GameDataIO::EGDEventType meEventType;

	// BrnGameDataModule.h:123
	int32_t miRefCount;

}

// BrnGameDataModule.h:135
struct BrnResource::GameDataModule : public CgsModule::ModuleSingleBuffered {
	// BrnGameDataModule.h:142
	extern const int32_t KI_MAP_BUFFER_SIZE = 10240;

	// BrnGameDataModule.h:143
	extern const int32_t KI_MAX_AUDIO_TEST_STREAMS = 3;

	// BrnGameDataModule.h:144
	extern const int32_t KI_MAX_RESOURCE_TYPES = 256;

private:
	// BrnGameDataModule.h:335
	BrnResource::GameDataModule::EPrepareStage mePrepareStage;

	// BrnGameDataModule.h:336
	BrnResource::GameDataModule::EPrepareCLStage mePrepareCLStage;

	// BrnGameDataModule.h:337
	BrnResource::GameDataModule::EPrepareVLStage mePrepareVLStage;

	// BrnGameDataModule.h:338
	BrnResource::GameDataModule::EPrepareILStage mePrepareILStage;

	// BrnGameDataModule.h:339
	BrnResource::GameDataModule::EPrepareWLStage mePrepareWLStage;

	// BrnGameDataModule.h:340
	BrnResource::GameDataModule::EReleaseStage meReleaseStage;

	// BrnGameDataModule.h:341
	BrnResource::GameDataModule::EResourcePrepareStage meResourcePrepareStage;

	// BrnGameDataModule.h:342
	BrnResource::GameDataModule::EPrepareHMStage mePrepareHMStage;

	// BrnGameDataModule.h:345
	CgsResource::ResourceModule mResourceModule;

	// BrnGameDataModule.h:353
	EventReceiverQueue<32768,16> mResourceReceiverQueue;

	// BrnGameDataModule.h:354
	EventReceiverQueue<1024,16> mAttribSysReceiverQueue;

	// BrnGameDataModule.h:357
	CgsResource::PoolModule::InitOptions::GSResourceType[256] maTypes;

	// BrnGameDataModule.h:358
	int32_t miNumTypes;

	// BrnGameDataModule.h:361
	ID mAttribSysSchemaResourceID;

	// BrnGameDataModule.h:362
	CgsAttribSys::AttribSysModule mAttribSysModule;

	// BrnGameDataModule.h:383
	HudMessageController mHudMessageController;

	// BrnGameDataModule.h:385
	PopupController mPopupController;

	// BrnGameDataModule.h:386
	BrnResource::GameDataModule::EPreparePopupStage mePreparePopups;

	// BrnGameDataModule.h:389
	const MemoryMap * mpMemoryMap;

	// BrnGameDataModule.h:390
	char[10240] macMapBuffer;

	// BrnGameDataModule.h:391
	AllocatorList mAllocatorList;

	// BrnGameDataModule.h:394
	Resource[2] maGeneratedRawResources;

	// BrnGameDataModule.h:395
	ResourceDescriptor[2] maGeneratedRawResourceDescriptors;

	// BrnGameDataModule.h:396
	LinearMalloc[7] maGeneratedLinearAllocators;

	// BrnGameDataModule.h:397
	HeapMalloc[8] maGeneratedHeapAllocators;

	// BrnGameDataModule.h:398
	rw::LinearResourceAllocator *[5] mapGeneratedRWLinearAllocators;

	// BrnGameDataModule.h:399
	rw::core::GeneralResourceAllocator *[5] mapGeneratedRWGeneralAllocators;

	// BrnGameDataModule.h:400
	LinearMalloc mAudioStreamAllocator;

	// BrnGameDataModule.h:402
	uint32_t muLoadedSoundBundlesCount;

	// BrnGameDataModule.h:405
	int32_t miNumBankCreationRequests;

	// BrnGameDataModule.h:406
	int32_t miNumBanksCreated;

	// BrnGameDataModule.h:407
	int32_t miNumPoolCreationRequests;

	// BrnGameDataModule.h:408
	int32_t miNumPoolsCreated;

	// BrnGameDataModule.h:409
	int32_t miNumAllocatorCreationRequests;

	// BrnGameDataModule.h:410
	int32_t miNumAllocatorsCreated;

	// BrnGameDataModule.h:413
	IndexedPool16<BrnResource::GameDataEventSlot,96> mGameDataEventPool;

	// BrnGameDataModule.h:416
	DebugComponent mDebugComponent;

	// BrnGameDataModule.h:421
	VehicleList mVehicleList;

	// BrnGameDataModule.h:422
	ICEList mICEList;

	// BrnGameDataModule.h:423
	WheelList mWheelList;

	// BrnGameDataModule.h:424
	ChallengeList mFreeburnChallengeList;

	// BrnGameDataModule.h:427
	CgsGraphics::Im2dRenderBuffer * mpDebug2dRenderBuffer;

	// BrnGameDataModule.h:428
	TextureState * mpTextureState;

	// BrnGameDataModule.h:429
	Parameters mTextureStateParams;

	// BrnGameDataModule.h:430
	Resource mTextureStateResource;

	// BrnGameDataModule.h:433
	int32_t miCollisionWorldRefCount;

	// BrnGameDataModule.h:434
	bool mbCollisionWorldInvalidated;

	// BrnGameDataModule.h:435
	uintptr_t muFirstCollisionBlockAddress;

	// BrnGameDataModule.h:436
	uintptr_t muNumCollisionBlocks;

	// BrnGameDataModule.h:453
	BrnResource::CacheDeviceDriver * mpCacheDeviceDriver;

	// BrnGameDataModule.h:454
	LinearMalloc mCacheDeviceAllocator;

	// BrnGameDataModule.h:457
	FileSystemStatusInterface mFileSystemStatus;

	// BrnGameDataModule.h:459
	DLCManager mDLCManager;

public:
	// BrnGameDataModule.cpp:113
	// Declaration
	virtual void Construct() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameDataModule.cpp:149
		using namespace CgsDev::Message;

	}

	// BrnGameDataModule.cpp:289
	virtual bool Prepare(IOBufferStack *, IOBufferStack *, const InputBuffer *, OutputBuffer *);

	// BrnGameDataModule.cpp:1493
	virtual bool Release();

	// BrnGameDataModule.cpp:1627
	virtual void Destruct();

	// BrnGameDataModule.cpp:1657
	// Declaration
	virtual BrnResource::GameDataModule::EUpdateResult Update(IOBufferStack *, IOBufferStack *, const InputBuffer *, OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameDataModule.cpp:1682
		using namespace CgsDev::Message;

	}

	// BrnGameDataModule.cpp:1944
	void RenderDebug(const InputBuffer *);

	// BrnGameDataModule.cpp:5460
	void DebugMemoryInit(BrnResource::GameDataModule *);

	// BrnGameDataModule.h:1072
	const HudMessageController * GetHudMessageController() const;

	// BrnGameDataModule.h:1087
	const PopupController * GetPopupController() const;

	// BrnGameDataModule.cpp:5976
	void DebugWriteXMLStatus(CgsDev::StrStreamBase &);

	// BrnGameDataModule.cpp:6115
	void DebugReportPools(FPoolReportCallback *, void *);

	// BrnGameDataModule.h:1102
	void StartDLCChecking();

private:
	// BrnGameDataModule.cpp:1920
	CgsResource::ResourceModule::EUpdateResult UpdateResourceModule(IOBufferStack *, IOBufferStack *, const InputBuffer *);

	// BrnGameDataModuleResourceReg.cpp:126
	void RegisterResourceTypes(rw::IResourceAllocator *);

	// BrnGameDataModuleResourceReg.cpp:252
	void RegisterResourceType(CgsResource::Type *, const char *);

	// BrnGameDataModule.h:1023
	bool CompareHashes32(const char *, const char *);

	// BrnGameDataModule.h:1038
	bool CompareHashes64(const char *, const char *);

	// BrnGameDataModule.cpp:1962
	void ConstructResourceModule();

	// BrnGameDataModule.cpp:2154
	bool LoadMemoryMap();

	// BrnGameDataModule.cpp:2171
	// Declaration
	bool CreateBanks(IOBufferStack *, IOBufferStack *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameDataModule.cpp:2173
		using namespace BrnResource;

	}

	// BrnGameDataModule.cpp:2249
	// Declaration
	bool CreatePools(IOBufferStack *, IOBufferStack *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameDataModule.cpp:2251
		using namespace BrnResource;

	}

	// BrnGameDataModule.cpp:2332
	// Declaration
	bool CreateAllocators(IOBufferStack *, IOBufferStack *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameDataModule.cpp:2334
		using namespace BrnResource;

	}

	// BrnGameDataModule.cpp:903
	bool PrepareHudMessages(IOBufferStack *, IOBufferStack *);

	// BrnGameDataModule.cpp:1023
	bool PreparePopups(IOBufferStack *, IOBufferStack *);

	// BrnGameDataModule.cpp:1408
	bool PrepareAttribSysSchemaResource(IOBufferStack *, IOBufferStack *, InputBuffer *);

	// BrnGameDataModule.cpp:760
	// Declaration
	bool PrepareVehicleList(IOBufferStack *, IOBufferStack *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameDataModule.cpp:851
		using namespace CgsDev::Message;

		// BrnGameDataModule.cpp:852
		using namespace CgsDev::Message;

		// BrnGameDataModule.cpp:853
		using namespace CgsDev::Message;

		// BrnGameDataModule.cpp:854
		using namespace CgsDev::Message;

	}

	// BrnGameDataModule.cpp:590
	bool PrepareFreeburnChallengeList(IOBufferStack *, IOBufferStack *);

	// BrnGameDataModule.cpp:1145
	bool PrepareICEList(IOBufferStack *, IOBufferStack *);

	// BrnGameDataModule.cpp:1268
	bool PrepareWheelList(IOBufferStack *, IOBufferStack *);

	// BrnGameDataModule.cpp:2524
	bool DestroyAllocators(IOBufferStack *, IOBufferStack *);

	// BrnGameDataModule.cpp:2541
	bool DestroyBanks(IOBufferStack *, IOBufferStack *);

	// BrnGameDataModule.cpp:2558
	bool DestroyPools(IOBufferStack *, IOBufferStack *);

	// BrnGameDataModule.cpp:2637
	void DebugSetupDummyVehicleLists();

	// BrnGameDataModule.cpp:2748
	GameDataEventSlot * GetGameDataEventSlot(const GameDataAssetEvent *, int32_t);

	// BrnGameDataModule.cpp:2684
	void ProcessGameDataEvent(InputBuffer *, const GameDataEvent *, int32_t);

	// BrnGameDataModule.cpp:2793
	// Declaration
	void ProcessLoadGameDataEvent(InputBuffer *, const LoadGameDataEvent *, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameDataModule.cpp:2795
		using namespace GameDataIO;

	}

	// BrnGameDataModule.cpp:2902
	// Declaration
	void ProcessUnloadGameDataEvent(InputBuffer *, const UnloadGameDataEvent *, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameDataModule.cpp:2904
		using namespace GameDataIO;

	}

	// BrnGameDataModule.cpp:3112
	// Declaration
	void ProcessInternalLoadBundleResponse(InputBuffer *, const LoadBundleResponse *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameDataModule.cpp:3114
		using namespace GameDataIO;

	}

	// BrnGameDataModule.cpp:3293
	// Declaration
	void ProcessInternalAcquireResponse(InputBuffer *, const AcquireResourceResponse *, InputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameDataModule.cpp:3297
		using namespace GameDataIO;

		// BrnGameDataModule.cpp:3335
		using namespace CgsAttribSys::AttribSysIO;

	}

	// BrnGameDataModule.cpp:3519
	// Declaration
	void ProcessInternalUnloadResponse(InputBuffer *, const UnloadBundleResponse *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameDataModule.cpp:3521
		using namespace GameDataIO;

		// BrnGameDataModule.cpp:3530
		using namespace CgsDev::Message;

	}

	// BrnGameDataModule.cpp:3712
	// Declaration
	void ProcessAttribSysRegisterVaultResponse(InputBuffer *, const VaultRegisteredResponse *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameDataModule.cpp:3714
		using namespace GameDataIO;

	}

	// BrnGameDataModule.cpp:3778
	// Declaration
	void ProcessUnregisterVehicleAttribsResponse(InputBuffer *, const VaultUnregisteredResponse *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameDataModule.cpp:3780
		using namespace GameDataIO;

	}

	// BrnGameDataModule.cpp:2993
	// Declaration
	void ProcessGetGameDataEvent(InputBuffer *, const GetGameDataEvent *, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameDataModule.cpp:2995
		using namespace GameDataIO;

	}

	// BrnGameDataModule.h:642
	void ProcessLoadVehicleListRequest(InputBuffer *, const LoadGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:3859
	void ProcessLoadVehicleRequest(InputBuffer *, const LoadGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:3935
	void ProcessLoadWheelRequest(InputBuffer *, const LoadGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:3978
	void ProcessLoadTrafficVehicleRequest(InputBuffer *, const LoadGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4124
	void ProcessLoadTrafficLanesRequest(InputBuffer *, const LoadGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4023
	void ProcessLoadICEMoviesRequest(InputBuffer *, const LoadGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4053
	void ProcessLoadPropPhysicsRequest(InputBuffer *, const LoadGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4079
	void ProcessLoadPropInstancesRequest(InputBuffer *, const LoadGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4152
	void ProcessLoadAILanesRequest(InputBuffer *, const LoadGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4180
	void ProcessLoadWorldUnitRequest(InputBuffer *, const LoadGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4262
	void ProcessLoadWorldCollisionRequest(InputBuffer *, const LoadGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4291
	void ProcessLoadPVSRequest(InputBuffer *, const LoadGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4221
	void ProcessLoadSurfaceListRequest(InputBuffer *, const LoadGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4319
	void ProcessGetVehicleListRequest(InputBuffer *, const GetGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4569
	void ProcessGetVehicleRequest(InputBuffer *, const GetGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4342
	void ProcessGetFreeburnChallengeListRequest(InputBuffer *, const GetGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4730
	void ProcessGetTrafficVehicleRequest(InputBuffer *, const GetGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4538
	void ProcessGetICEMovieRequest(InputBuffer *, const GetGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4385
	void ProcessGetPropPhysicsRequest(InputBuffer *, const GetGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4416
	void ProcessGetPropInstancesRequest(InputBuffer *, const GetGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4482
	void ProcessGetPropGraphicsListRequest(InputBuffer *, const GetGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4451
	void ProcessGetSurfaceListRequest(InputBuffer *, const GetGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4515
	void ProcessGetWheelListRequest(InputBuffer *, const GetGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4365
	void ProcessGetICEListRequest(InputBuffer *, const GetGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4689
	void ProcessGetWheelRequest(InputBuffer *, const GetGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4768
	void ProcessGetTrafficLanesRequest(InputBuffer *, const GetGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4796
	void ProcessGetAILanesRequest(InputBuffer *, const GetGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4824
	void ProcessGetWorldUnitRequest(InputBuffer *, const GetGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4863
	void ProcessGetWorldCollisionRequest(InputBuffer *, const GetGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4893
	void ProcessGetPVSRequest(InputBuffer *, const GetGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:4922
	void ProcessUnloadVehicleRequest(InputBuffer *, const UnloadGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:5111
	void ProcessUnloadTrafficVehicleRequest(InputBuffer *, const UnloadGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:5023
	void PostAcquireVehicleAttribsRequest(InputBuffer *, const UnloadGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:5067
	void ProcessUnloadWheelRequest(InputBuffer *, const UnloadGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:5158
	void ProcessUnloadTrafficLanesRequest(InputBuffer *, const UnloadGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:5186
	void ProcessUnloadAILanesRequest(InputBuffer *, const UnloadGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:5214
	void ProcessUnloadPropInstancesRequest(InputBuffer *, const UnloadGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:5261
	void ProcessUnloadWorldUnitRequest(InputBuffer *, const UnloadGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:5299
	void ProcessUnloadWorldCollisionRequest(InputBuffer *, const UnloadGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:5328
	void ProcessUnloadPVSRequest(InputBuffer *, const UnloadGameDataEvent *, int32_t, int32_t);

	// BrnGameDataModule.cpp:5354
	// Declaration
	void ProcessSwapOutCollisionWorldRequest(InputBuffer *, const SwapOutCollisionWorldRequest *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameDataModule.cpp:5358
		using namespace BrnResource;

	}

	// BrnGameDataModule.cpp:5408
	// Declaration
	void ProcessSwapInCollisionWorldRequest(InputBuffer *, const SwapInCollisionWorldRequest *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameDataModule.cpp:5412
		using namespace BrnResource;

	}

	// BrnGameDataModule.cpp:3588
	// Declaration
	void ProcessInternalInvalidateResponse(InputBuffer *, const InvalidatePoolResponse *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameDataModule.cpp:3590
		using namespace GameDataIO;

		// BrnGameDataModule.cpp:3600
		using namespace CgsDev::Message;

		// BrnGameDataModule.cpp:3625
		using namespace CgsDev::Message;

		// BrnGameDataModule.cpp:3629
		using namespace CgsDev::Message;

		// BrnGameDataModule.cpp:3649
		using namespace CgsDev::Message;

	}

	// BrnGameDataModule.cpp:3669
	// Declaration
	void ProcessInternalValidateResponse(InputBuffer *, const ValidatePoolResponse *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameDataModule.cpp:3671
		using namespace GameDataIO;

	}

	// BrnGameDataModule.cpp:5474
	// Declaration
	void TextureRenderCallback(renderengine::Texture *, Vector2, Vector2, void *, bool, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameDataModule.cpp:5490
		using namespace renderengine;

	}

	// BrnGameDataModule.cpp:5545
	bool PrepareStreamingTests(IOBufferStack *, IOBufferStack *);

	// BrnGameDataModule.cpp:5826
	bool UpdateStreamingTests(IOBufferStack *, IOBufferStack *);

	// BrnGameDataModule.cpp:5941
	void AnalyseStreamTest(RingBuffer<BrnResource::GameDataModule::TestStreamEntry> *, uint32_t *, float32_t *);

}

// VehicleListEntry.h:28
namespace BrnResource {
	// Declaration
	struct GameDataModule {
	public:
		GameDataModule();

		~GameDataModule();

		// Unknown accessibility
		// BrnGameDataModule.h:142
		extern const int32_t KI_MAP_BUFFER_SIZE = 10240;

		// Unknown accessibility
		// BrnGameDataModule.h:144
		extern const int32_t KI_MAX_RESOURCE_TYPES = 256;

	}

}

// BrnGameDataModule.h:135
void BrnResource::GameDataModule::GameDataModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameDataModule.h:135
void BrnResource::GameDataModule::~GameDataModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

