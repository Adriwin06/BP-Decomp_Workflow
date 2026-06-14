// BrnWorldRegion.h:27
namespace BrnWorld {
	// Declaration
	struct WorldEntityModule {
		// BrnWorldEntityModule.h:75
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MANAGER = 1,
			E_PREPARESTAGE_PVS = 2,
			E_PREPARESTAGE_COLLISION = 3,
			E_PREPARESTAGE_SURFACELIST = 4,
			E_PREPARESTAGE_MASSIVE = 5,
			E_PREPARESTAGE_COMMONDATA = 6,
			E_PREPARESTAGE_COMMONDATA_LOADING = 7,
			E_PREPARESTAGE_ACQUIRE_RESOURCES = 8,
			E_PREPARESTAGE_DONE = 9,
		}

		// BrnWorldEntityModule.h:90
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_PVS = 1,
			E_RELEASESTAGE_MANAGER = 2,
			E_RELEASESTAGE_RESOURCES = 3,
			E_RELEASESTAGE_MASSIVE = 4,
			E_RELEASESTAGE_DONE = 5,
		}

		// BrnWorldEntityModule.h:100
		enum EInitialLoadStage {
			E_INITIALLOADSTAGE_START = 0,
			E_INITIALLOADSTAGE_LOADBUNDLES = 1,
			E_INITIALLOADSTAGE_WFLOAD = 2,
			E_INITIALLOADSTAGE_DONE = 3,
		}

		// BrnWorldEntityModule.h:109
		enum EWorldColPrepareStage {
			E_WORLDCOL_PREPARESTAGE_START = 0,
			E_WORLDCOL_PREPARESTAGE_LOADBUNDLE = 1,
			E_WORLDCOL_PREPARESTAGE_PREPARING_ZONES = 2,
			E_WORLDCOL_PREPARESTAGE_DONE = 3,
		}

		// BrnWorldEntityModule.h:118
		enum EZoneColPrepareStage {
			E_ZONECOL_PREPARESTAGE_START = 0,
			E_ZONECOL_PREPARESTAGE_ACQUIRING_MESHES = 1,
			E_ZONECOL_PREPARESTAGE_DONE = 2,
		}

		// BrnWorldEntityModule.h:126
		enum ESurfaceListPrepareStage {
			E_SURFACELIST_PREPARESTAGE_START = 0,
			E_SURFACELIST_PREPARESTAGE_LOADING = 1,
			E_SURFACELIST_PREPARESTAGE_DONE = 2,
		}

		// BrnWorldEntityModule.h:133
		enum ECollisionWorldState {
			E_COLWORLDSTATE_INVALID = 0,
			E_COLWORLDSTATE_VALIDATING = 1,
			E_COLWORLDSTATE_INVALIDATING = 2,
			E_COLWORLDSTATE_VALID = 3,
		}

		// BrnWorldEntityModule.h:141
		enum ECollisionWorldValidationStage {
			E_COLWORLDVALIDATIONSTAGE_START = 0,
			E_COLWORLDVALIDATIONSTAGE_VALIDATE_WORLD = 1,
			E_COLWORLDVALIDATIONSTAGE_WF_VALIDATION = 2,
			E_COLWORLDVALIDATIONSTAGE_PREPARING_COLLISION = 3,
			E_COLWORLDVALIDATIONSTAGE_DONE = 4,
		}

		// BrnWorldEntityModule.h:150
		enum ECollisionWorldInvalidationStage {
			E_COLWORLDINVALIDATIONSTAGE_START = 0,
			E_COLWORLDINVALIDATIONSTAGE_REMOVE_FROM_SCENE = 1,
			E_COLWORLDINVALIDATIONSTAGE_INVALIDATE_WORLD = 2,
			E_COLWORLDINVALIDATIONSTAGE_WF_INVALIDATION = 3,
			E_COLWORLDINVALIDATIONSTAGE_DONE = 4,
		}

		// BrnWorldEntityModule.h:159
		enum EMassivePrepareStage {
			E_EMASSIVEPREPARESTAGE_START = 0,
			E_LOADBUNDLES = 1,
			E_WLOADBUNDLES = 2,
			E_REQUESTTEXTURES = 3,
			E_WREQUESTTEXTURES = 4,
			E_REQUESTMASSIVETABLE = 5,
			E_WREQUESTMASSIVETABLE = 6,
			E_EMASSIVEPREPARESTAGE_DONE = 7,
		}

	}

	// BrnWorldEntityModule.h:48
	const int32_t KI_MAX_COLLISION_MESHES_PER_ZONE = 1;

	// BrnWorldEntityModule.h:53
	const int32_t KI_NUM_COLLISION_ZONES_LOADED_PER_FRAME = 20;

	// BrnWorldEntityModule.h:55
	const int32_t KU_MAX_NUM_DYNAMIC_ADVERTS = 128;

}

// BrnWorldEntityModule.h:72
struct BrnWorld::WorldEntityModule : public CgsModule::ModuleSingleBuffered {
private:
	// BrnWorldEntityModule.h:288
	extern const int32_t KU_NUM_RENDERABLES = 2048;

	// BrnWorldEntityModule.h:289
	extern const int8_t KI_NUM_LODS = 3;

	// BrnWorldEntityModule.h:291
	BrnWorld::WorldEntityModule::EPrepareStage mePrepareStage;

	// BrnWorldEntityModule.h:292
	BrnWorld::WorldEntityModule::EReleaseStage meReleaseStage;

	// BrnWorldEntityModule.h:293
	BrnWorld::WorldEntityModule::EInitialLoadStage meInitialLoadStage;

	// BrnWorldEntityModule.h:294
	BrnWorld::WorldEntityModule::EWorldColPrepareStage meWorldColPrepareStage;

	// BrnWorldEntityModule.h:295
	BrnWorld::WorldEntityModule::EZoneColPrepareStage meZoneColPrepareStage;

	// BrnWorldEntityModule.h:296
	BrnWorld::WorldEntityModule::EMassivePrepareStage meMassivePrepareStage;

	// BrnWorldEntityModule.h:298
	ResourceHandle mRenderHandle;

	// BrnWorldEntityModule.h:300
	EventReceiverQueue<1024,16> mReceiverQueue;

	// BrnWorldEntityModule.h:302
	PVSModule mPVSModule;

	// BrnWorldEntityModule.h:303
	GetZoneResponse mPlayerZoneResponse;

	// BrnWorldEntityModule.h:305
	BrnWorld::PVSDebugComponent mPVSDebugComponent;

	// BrnWorldEntityModule.h:306
	CollisionDebugComponent mCollisionDebugComponent;

	// BrnWorldEntityModule.h:309
	BrnWorld::WorldGraphicsStreamer mWorldGraphicsStreamer;

	// BrnWorldEntityModule.h:323
	int32_t[32] maiNumInstancesLoadedPerZone;

	// BrnWorldEntityModule.h:324
	int32_t miNumInstanceListsLoaded;

	// BrnWorldEntityModule.h:326
	int32_t miPlayerZoneNumber;

	// BrnWorldEntityModule.h:327
	int32_t miPreviousPlayerZoneNumber;

	// BrnWorldEntityModule.h:328
	bool mbBackdropLoaded;

	// BrnWorldEntityModule.h:330
	int32_t miCurrentBackdropZoneId;

	// BrnWorldEntityModule.h:332
	bool mbWaitingForStreaming;

	// BrnWorldEntityModule.h:333
	bool mbUseCarForPvs;

	// BrnWorldEntityModule.h:335
	Vector3 mPositionUsedForPVS;

	// BrnWorldEntityModule.h:337
	bool mbDebugTriggerValidate;

	// BrnWorldEntityModule.h:338
	bool mbDebugTriggerInvalidate;

	// BrnWorldEntityModule.h:341
	surfacelist mSurfaceList;

	// BrnWorldEntityModule.h:342
	BrnWorld::WorldEntityModule::ESurfaceListPrepareStage meSurfaceListPrepareStage;

	// BrnWorldEntityModule.h:344
	OutputBuffer_PreScene * mpTempCachePreSceneOutput;

	// BrnWorldEntityModule.h:346
	BrnWorld::WorldEntityModule::ECollisionWorldState meCollisionWorldState;

	// BrnWorldEntityModule.h:347
	BrnWorld::WorldEntityModule::ECollisionWorldValidationStage meValidationStage;

	// BrnWorldEntityModule.h:348
	BrnWorld::WorldEntityModule::ECollisionWorldInvalidationStage meInvalidationStage;

	// BrnWorldEntityModule.h:355
	ResourceHandle[20] maZoneCollisionHandles;

	// BrnWorldEntityModule.h:357
	int32_t miNumCollisonZonesLoaded;

	// BrnWorldEntityModule.h:358
	int32_t miNumZonesInWorld;

	// BrnWorldEntityModule.h:359
	int32_t miCollisionZoneBatchSize;

	// BrnWorldEntityModule.h:360
	bool[1024] mabWasCollisionZoneAdded;

	// BrnWorldEntityModule.h:364
	bool mbOverrideLod;

	// BrnWorldEntityModule.h:365
	int32_t miLodOverrideValue;

	// BrnWorldEntityModule.h:366
	bool mbDrawBoundingSpheres;

	// BrnWorldEntityModule.h:367
	bool mbOverrideLodDistances;

	// BrnWorldEntityModule.h:368
	int32_t[3] mauOverrideLodDistances;

	// BrnWorldEntityModule.h:369
	int32_t miEnvironmentMapLOD;

	// BrnWorldEntityModule.h:371
	int32_t miGenerateDispatchListsPM;

	// BrnWorldEntityModule.h:373
	renderengine::Texture *[128] mapDynamicAdvertTextures;

	// BrnWorldEntityModule.h:375
	FastBitArray<1024> mIsBackdropInstanceInScene;

	// BrnWorldEntityModule.h:378
	int16_t[32] maiZonesLoadedThisFrame;

	// BrnWorldEntityModule.h:379
	int16_t[32] maiZonesUnloadedThisFrame;

	// BrnWorldEntityModule.h:380
	uint32_t muNumZonesLoadedThisFrame;

	// BrnWorldEntityModule.h:381
	uint32_t muNumZonesUnloadedThisFrame;

	// BrnWorldEntityModule.cpp:109
	extern bool _mbAllowStreamStalling;

	// BrnWorldEntityModule.h:385
	extern bool sbUseZoneBlackList;

public:
	// BrnWorldEntityModule.cpp:347
	virtual void Construct();

	// BrnWorldEntityModule.cpp:508
	bool Prepare(OutputBuffer_Prepare *);

	// BrnWorldEntityModule.cpp:2115
	bool PrepareWorldCollision(OutputBuffer_Prepare::ResourceRequestInterface *, OutputBuffer_Prepare::SceneInputInterface *, bool);

	// BrnWorldEntityModule.cpp:863
	virtual bool Release();

	// BrnWorldEntityModule.cpp:933
	virtual void Destruct();

	// BrnWorldEntityModule.cpp:953
	// Declaration
	void ProcessValidationRequests(const RequestInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnWorldEntityModule.cpp:959
		using namespace CgsDev::Message;

		// BrnWorldEntityModule.cpp:967
		using namespace CgsDev::Message;

	}

	// BrnWorldEntityModule.cpp:1096
	void UpdateCollisionValidation(OutputBuffer_PostPhysics *);

	// BrnWorldEntityModule.cpp:989
	void PreSceneUpdate(const InputBuffer_PreScene *, OutputBuffer_PreScene *, Vector3, BrnUpdateSet);

	// BrnWorldEntityModule.cpp:1135
	void PostPhysicsUpdate(const InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *, BrnUpdateSet);

	// BrnWorldEntityModule.cpp:1201
	void GenerateDispatchLists(const InputBuffer_GenerateDispatchLists *, const Array<CgsSceneManager::EntityId,4500u> &, Matrix44, Vector3, Vector3, float32_t, const ShaderLodInfo *, int32_t, int32_t, int32_t, int32_t, bool);

	// BrnWorldEntityModule.cpp:1328
	void GenerateDispatchListsForEnvironmentMap(const InputBuffer_GenerateDispatchLists *, const Array<CgsSceneManager::EntityId,4500u> &, Matrix44, Vector3, const ShaderLodInfo *, int32_t, int32_t, int32_t);

	// BrnWorldEntityModule.cpp:134
	void RenderInstance(Instance *, bool, Matrix44, Vector3, Vector3, float32_t, int32_t, int32_t, int32_t, uint8_t, CgsGraphics::DispatchFrame *, const ShaderLodInfo *, float32_t);

	// BrnWorldEntityModule.h:632
	void GetSurface(uint8_t, surface *) const;

	// BrnWorldEntityModule.cpp:2369
	void DebugMemoryInit(BrnWorld::WorldEntityModule *);

private:
	// WorldEntityBridgePVSToOutput.cpp:36
	void BridgePVSToOutput_Prepare(OutputBuffer_Prepare *);

	// BrnWorldEntityModule.cpp:1421
	void UpdateStream(OutputBuffer_PreScene *);

	// BrnWorldEntityModule.cpp:1585
	int32_t QueryWorldGraphicsLoad(const StreamerTargetEntry *, int32_t);

	// BrnWorldEntityModule.cpp:1631
	int32_t QueryWorldGraphicsUnload(const StreamerTargetEntry *, int32_t);

	// BrnWorldEntityModule.cpp:1648
	void OnWorldGraphicsLoadComplete(const GameDataAssetEvent *, int32_t);

	// BrnWorldEntityModule.cpp:1774
	void OnWorldGraphicsUnloadComplete(const UnloadGameDataResponse *);

	// BrnWorldEntityModule.cpp:1789
	void OnWorldGraphicsLoadBegin(int32_t);

	// BrnWorldEntityModule.cpp:1803
	void OnWorldGraphicsUnloadBegin(int32_t);

	// BrnWorldEntityModule.cpp:1887
	void OnEnterNewZone(int32_t, int32_t);

	// BrnWorldEntityModule.cpp:1905
	void LoadBackdropForZone(int32_t);

	// BrnWorldEntityModule.cpp:1969
	void UnloadBackdropForZone(int32_t);

	// BrnWorldEntityModule.cpp:2218
	bool PrepareZoneCollision(OutputBuffer_Prepare::ResourceRequestInterface *, OutputBuffer_Prepare::SceneInputInterface *);

	// BrnWorldEntityModule.cpp:2027
	bool PrepareSurfaceList(OutputBuffer_Prepare *);

	// BrnWorldEntityModule.cpp:2339
	bool AddCollisionZoneToSceneManager(OutputBuffer_Prepare::ResourceRequestInterface *, OutputBuffer_Prepare::SceneInputInterface *, ResourceHandle *, int32_t);

	// BrnWorldEntityModule.h:583
	int32_t GetTotalZones();

	// BrnWorldEntityModule.h:612
	int32_t GetPlayerZone() const;

	// BrnWorldEntityModule.cpp:2383
	void HandleExternalRequests(const InputBuffer_PostPhysics *);

	// BrnWorldEntityModule.cpp:2430
	bool ValidateCollision(OutputBuffer_Prepare::ResourceRequestInterface *, OutputBuffer_Prepare::SceneInputInterface *);

	// BrnWorldEntityModule.cpp:2499
	bool InvalidateCollision(OutputBuffer_Prepare::ResourceRequestInterface *, OutputBuffer_Prepare::SceneInputInterface *);

	// BrnWorldEntityModule.cpp:2656
	void UpdateBackdropSceneEntities(int32_t, bool, OutputBuffer_PreScene *);

	// BrnWorldEntityModule.cpp:2567
	void AddBackdropEntity(Instance *, int32_t, int32_t, OutputBuffer_PreScene *);

	// BrnWorldEntityModule.cpp:2631
	void RemoveBackdropEntity(int32_t, int32_t, OutputBuffer_PreScene *);

}

// BrnWorldEntityModule.h:289
extern const int8_t KI_NUM_LODS = 3;

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnWorldEntityModule.h:48
	const int32_t KI_MAX_COLLISION_MESHES_PER_ZONE = 1;

	// BrnWorldEntityModule.h:53
	const int32_t KI_NUM_COLLISION_ZONES_LOADED_PER_FRAME = 20;

	// BrnWorldEntityModule.h:55
	const int32_t KU_MAX_NUM_DYNAMIC_ADVERTS = 128;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnWorldEntityModule.h:48
	const int32_t KI_MAX_COLLISION_MESHES_PER_ZONE = 1;

	// BrnWorldEntityModule.h:53
	const int32_t KI_NUM_COLLISION_ZONES_LOADED_PER_FRAME = 20;

	// BrnWorldEntityModule.h:55
	const int32_t KU_MAX_NUM_DYNAMIC_ADVERTS = 128;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnWorldEntityModule.h:48
	const int32_t KI_MAX_COLLISION_MESHES_PER_ZONE = 1;

	// BrnWorldEntityModule.h:53
	const int32_t KI_NUM_COLLISION_ZONES_LOADED_PER_FRAME = 20;

	// BrnWorldEntityModule.h:55
	const int32_t KU_MAX_NUM_DYNAMIC_ADVERTS = 128;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnWorldEntityModule.h:48
	const int32_t KI_MAX_COLLISION_MESHES_PER_ZONE = 1;

	// BrnWorldEntityModule.h:53
	const int32_t KI_NUM_COLLISION_ZONES_LOADED_PER_FRAME = 20;

	// BrnWorldEntityModule.h:55
	const int32_t KU_MAX_NUM_DYNAMIC_ADVERTS = 128;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// Declaration
	struct WorldEntityModule {
	private:
		// BrnWorldEntityModule.h:289
		extern const int8_t KI_NUM_LODS = 3;

		// BrnWorldEntityModule.h:383
		extern bool _mbAllowStreamStalling;

	}

	// BrnWorldEntityModule.h:48
	const int32_t KI_MAX_COLLISION_MESHES_PER_ZONE = 1;

	// BrnWorldEntityModule.h:53
	const int32_t KI_NUM_COLLISION_ZONES_LOADED_PER_FRAME = 20;

	// BrnWorldEntityModule.h:55
	const int32_t KU_MAX_NUM_DYNAMIC_ADVERTS = 128;

}

// BrnWorldEntityModule.h:383
extern bool _mbAllowStreamStalling;

// BrnCollisionTag.h:37
namespace BrnWorld {
	// Declaration
	struct WorldEntityModule {
	public:
		~WorldEntityModule();

		WorldEntityModule();

	private:
		// BrnWorldEntityModule.h:289
		extern const int8_t KI_NUM_LODS = 3;

	}

	// BrnWorldEntityModule.h:48
	const int32_t KI_MAX_COLLISION_MESHES_PER_ZONE = 1;

	// BrnWorldEntityModule.h:53
	const int32_t KI_NUM_COLLISION_ZONES_LOADED_PER_FRAME = 20;

	// BrnWorldEntityModule.h:55
	const int32_t KU_MAX_NUM_DYNAMIC_ADVERTS = 128;

}

// BrnWorldEntityModule.h:72
void BrnWorld::WorldEntityModule::~WorldEntityModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnWorldEntityModule.h:72
void BrnWorld::WorldEntityModule::WorldEntityModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

