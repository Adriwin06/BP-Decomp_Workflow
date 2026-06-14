// BrnWorldRegion.h:27
namespace BrnWorld {
	// Declaration
	struct PropEntityModule {
		// BrnPropEntityModule.h:72
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MANAGER = 1,
			E_PREPARESTAGE_REQUEST_PROP_VFX_DATA = 2,
			E_PREPARESTAGE_AQUIRE_PROP_VFX_DATA = 3,
			E_PREPARESTAGE_LOAD_PROP_PHYSICS = 4,
			E_PREPARESTAGE_AQUIRE_PROP_PHYSICS = 5,
			E_PREPARESTAGE_LOAD_PROP_INSTANCES = 6,
			E_PREPARESTAGE_AQUIRE_PROP_INSTANCES = 7,
			E_PREPARESTAGE_INITIALIZE_PHYSICS_DATA = 8,
			E_PREPARESTAGE_DONE = 9,
		}

		// BrnPropEntityModule.h:86
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_MANAGER = 1,
			E_RELEASESTAGE_DONE = 2,
		}

		// BrnPropEntityModule.h:93
		enum EPropStreamingMode {
			E_STREAM = 0,
			E_DONT_STREAM = 1,
			E_RESET_UNLOADING = 2,
			E_RESET_UNLOADING_FOR_PROFILE = 3,
			E_REQUESTING_PROFILE_DATA = 4,
			E_WAITING_FOR_PROFILE_DATA = 5,
		}

	}

	// BrnPropEntityModule.h:48
	const uint16_t KU_CREATE_RW_VOLUME_BUFFER_SIZE = 256;

}

// BrnPropEntityModule.h:35
typedef DispatchFrame DispatchFrame;

// BrnPropEntityModule.h:41
typedef CgsContainers::Set<uint16_t,15u> PropZonesSet;

// BrnPropEntityModule.h:69
struct BrnWorld::PropEntityModule : public CgsModule::ModuleSingleBuffered {
private:
	// BrnPropEntityModule.h:185
	extern const int8_t KI_NUM_LODS = 3;

	// BrnPropEntityModule.h:190
	BrnWorld::PropEntityModule::EPrepareStage mePrepareStage;

	// BrnPropEntityModule.h:191
	BrnWorld::PropEntityModule::EReleaseStage meReleaseStage;

	// BrnPropEntityModule.h:193
	PropZoneManager mZoneManager;

	// BrnPropEntityModule.h:196
	PropEntityDebugComponent mDebugComponent;

	// BrnPropEntityModule.h:197
	bool mbUseOverides;

	// BrnPropEntityModule.h:198
	float32_t mfLeanThresholdOverride;

	// BrnPropEntityModule.h:199
	float32_t mfMoveThresholdOverride;

	// BrnPropEntityModule.h:200
	float32_t mfSmashThresholdOverride;

	// BrnPropEntityModule.h:203
	EventReceiverQueue<1024,16> mReceiverQueue;

	// BrnPropEntityModule.h:205
	ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader> mpPropPhysicsDataHeader;

	// BrnPropEntityModule.h:206
	ResourcePtr<BrnParticle::VFXPropCollection> mVFXPropCollection;

	// BrnPropEntityModule.h:208
	Vector3 mLastPlayerResetPosition;

	// BrnPropEntityModule.h:209
	bool mbPlayerWasJustReset;

	// BrnPropEntityModule.h:211
	RecentlyBrokenPropsArray maRecentlyBrokenProps;

	// Unknown accessibility
	// BrnPropCellManager.h:40
	typedef Array<BrnWorld::PropEntityID,15u> RecentlyRecycledPropsArray;

	// BrnPropEntityModule.h:212
	PropEntityModule::RecentlyRecycledPropsArray maRecentlyRecycledProps;

	// Unknown accessibility
	// BrnPropCellManager.h:41
	typedef Array<BrnWorld::PropEntityID,30u> RecentlyRecycledPartsArray;

	// BrnPropEntityModule.h:213
	PropEntityModule::RecentlyRecycledPartsArray maRecentlyRecycledParts;

	// BrnPropEntityModule.h:215
	ResourcePtr<BrnPhysics::Props::PropGraphicsList>[500] mapGraphicsLists;

	// BrnPropEntityModule.h:216
	GuiOverheadSignInfoEvent::VisibleOverheadSignArray mVisibleOverheadSigns;

	// BrnPropEntityModule.h:217
	int32_t miFramesUntilUpdateVisibleSigns;

	// BrnPropEntityModule.h:218
	PropGraphicsManager mPropGraphicsManager;

	// BrnPropEntityModule.h:220
	BrnWorld::PropEntityModule::EPropStreamingMode meStreamingMode;

	// BrnPropEntityModule.h:222
	uint32_t muMaxLoadedZones;

	// BrnPropEntityModule.h:223
	uint32_t muZonesLoaded;

	// BrnPropEntityModule.h:224
	uint8_t mu8PlayerIndex;

	// BrnPropEntityModule.h:226
	Vector3 mPlayerPosition;

	// BrnPropEntityModule.h:228
	Vector3Plus[8] maRaceCarVelocity;

	// BrnPropEntityModule.h:230
	BitArray<500u> mabWaitingForGraphics;

	// BrnPropEntityModule.h:231
	BitArray<500u> mabWaitingForInstances;

	// BrnPropEntityModule.h:233
	bool mbInReplay;

	// BrnPropEntityModule.h:235
	bool mbCurrentlyOnline;

	// BrnPropEntityModule.h:237
	bool mbEasySmashProps;

	// BrnPropEntityModule.h:239
	bool mbAllowPropProgression;

	// BrnPropEntityModule.h:240
	bool mbPlayerCrashing;

	// BrnPropEntityModule.h:241
	bool mbPlayerWrecked;

	// BrnPropEntityModule.h:243
	bool mbResourceSystemStalled;

	// BrnPropEntityModule.h:245
	bool mbResetPropPosition;

	// BrnPropEntityModule.h:247
	bool mbOverrideLod;

	// BrnPropEntityModule.h:248
	int32_t miLodOverrideValue;

	// BrnPropEntityModule.h:249
	bool mbDrawBoundingSpheres;

	// BrnPropEntityModule.h:250
	bool mbOverrideLodDistances;

	// BrnPropEntityModule.h:251
	int32_t[3] mauOverrideLodDistances;

	// BrnPropEntityModule.h:254
	int32_t miUpdatesSinceLastSimPause;

	// BrnPropEntityModule.h:259
	int32_t miCollisionStreamingPM;

	// BrnPropEntityModule.h:260
	int32_t miLoadingPM;

	// BrnPropEntityModule.h:261
	int32_t miUnloadingPM;

	// BrnPropEntityModule.h:262
	int32_t miProcessContactsPM;

	// BrnPropEntityModule.h:263
	int32_t miUpdatePropsPM;

	// BrnPropEntityModule.h:266
	float32_t mrTimestep;

	// BrnPropEntityModule.h:268
	PropZonesSet mLoadedZones;

	// BrnPropEntityModule.h:269
	BitArray<500u> mabLoadedWorldGraphics;

public:
	// BrnPropEntityModule.cpp:75
	virtual void Construct();

	// BrnPropEntityModule.cpp:192
	void ConstructPreScenePerfMonitors();

	// BrnPropEntityModule.cpp:212
	void ConstructPostPhysicsPerfMonitors();

	// BrnPropEntityModule.cpp:234
	virtual bool Prepare(OutputBuffer_Prepare *, rw::LinearResourceAllocator *);

	// BrnPropEntityModule.cpp:369
	virtual bool Release();

	// BrnPropEntityModule.cpp:419
	virtual void Destruct();

	// BrnPropEntityModule.cpp:439
	virtual void PreSceneUpdate(IOBufferStack *, IOBufferStack *, const InputBuffer_PreScene *, OutputBuffer_PreScene *, BrnUpdateSet);

	// BrnPropEntityModule.cpp:967
	virtual void PostSceneUpdate(IOBufferStack *, IOBufferStack *, const InputBuffer_PostScene *, OutputBuffer_PostScene *, BrnUpdateSet);

	// BrnPropEntityModule.cpp:1107
	virtual void PrePhysicsUpdate(IOBufferStack *, IOBufferStack *, const InputBuffer_PrePhysics *, OutputBuffer_PrePhysics *, BrnUpdateSet);

	// BrnPropEntityModule.cpp:1701
	virtual void PostPhysicsUpdate(IOBufferStack *, IOBufferStack *, const InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *, BrnUpdateSet);

	// BrnPropEntityModule.cpp:2122
	// Declaration
	void GenerateDispatchLists(const InputBuffer_Dispatch *, const Array<CgsSceneManager::EntityId,5400u> &, Matrix44, Vector3, float32_t, const ShaderLodInfo *, int32_t, int32_t, int32_t, bool, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropEntityModule.cpp:2131
		using namespace CgsSceneManager;

	}

	// BrnPropEntityModule.cpp:2085
	void CachePropGraphicsLists();

private:
	// BrnPropEntityModule.cpp:760
	// Declaration
	void UpdateInstanceStreaming(const InputBuffer_PreScene::PropInstancesNeededForZoneQueue *, int32_t, OutputBuffer_PreScene *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropEntityModule.cpp:769
		using namespace CgsDev::Message;

	}

	// BrnPropEntityModule.cpp:882
	void GenerateTargetList(const InputBuffer_PreScene::PropInstancesNeededForZoneQueue *, PropZonesSet &);

	// BrnPropEntityModule.cpp:1743
	// Declaration
	void ProcessContacts(const InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropEntityModule.cpp:1804
		using namespace CgsDev::Message;

		// BrnPropEntityModule.cpp:1824
		using namespace CgsDev::Message;

		// BrnPropEntityModule.cpp:1885
		using namespace CgsDev::Message;

	}

	// BrnPropEntityModule.cpp:1920
	void BreakPropIntoParts(PropEntityID, OutputBuffer_PreScene *);

	// BrnPropEntityModule.cpp:1009
	void InitializePropPhysicsData(OutputBuffer_Prepare *);

	// BrnPropEntityModule.cpp:2001
	// Declaration
	void LoadZone(PropZoneData *, OutputBuffer_PreScene *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropEntityModule.cpp:2009
		using namespace CgsDev::Message;

	}

	// BrnPropEntityModule.cpp:2025
	// Declaration
	void UnloadZone(uint16_t, OutputBuffer_PreScene *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPropEntityModule.cpp:2030
		using namespace CgsDev::Message;

	}

	// BrnPropEntityModule.cpp:2045
	void UpdateProps(OutputBuffer_PostPhysics *, const PropOutputInterface::UpdatePropEventQueue *);

	// BrnPropEntityModule.cpp:2425
	bool RenderModel(Model *, const rw::math::vpu::Matrix44Affine *, DispatchFrame *, Matrix44, Vector3, float32_t, int32_t, int32_t, int32_t, bool, bool, const ShaderLodInfo *);

	// BrnPropEntityModule.h:386
	void ResetProps();

	// BrnPropEntityModule.cpp:1648
	BrnWorld::EPropState GetDesiredState(const PropTypeData *, float32_t);

	// BrnPropEntityModule.cpp:1538
	void ChangePropState(PropEntityInstance *, PropEntityID, BrnWorld::EPropState, BrnWorld::EPropState, OutputBuffer_PrePhysics *);

	// BrnPropEntityModule.cpp:1171
	void ProcessPotentialContacts(const InputBuffer_PrePhysics *, OutputBuffer_PrePhysics *);

	// BrnPropEntityModule.cpp:1265
	void ProcessPotentialContactWithProp(PropEntityID, EntityId, Vector3, PropInputInterface *);

	// BrnPropEntityModule.cpp:1351
	void ProcessPotentialContactWithPart(PropEntityID, PropInputInterface *);

	// BrnPropEntityModule.cpp:1430
	void ProcessBrokenProps(const InputBuffer_PrePhysics *, OutputBuffer_PrePhysics *);

	// BrnPropEntityModule.h:394
	bool CanChangeState(BrnWorld::EPropState, BrnWorld::EPropState);

	// BrnPropEntityModule.h:412
	void SetRaceCarVelocity(int32_t, Vector3);

	// BrnPropEntityModule.h:420
	Vector3 GetRaceCarVelocity(int32_t) const;

	// BrnPropEntityModule.h:427
	VecFloat GetRaceCarSpeed(int32_t) const;

}

// _built-in_
namespace :: {
	// BrnPropEntityModule.h:40
	const int32_t KI_ZONE_SET_SIZE = 15;

}

// BrnPropEntityModule.h:185
extern const int8_t KI_NUM_LODS = 3;

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnPropEntityModule.h:48
	const uint16_t KU_CREATE_RW_VOLUME_BUFFER_SIZE = 256;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnPropEntityModule.h:48
	const uint16_t KU_CREATE_RW_VOLUME_BUFFER_SIZE = 256;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnPropEntityModule.h:48
	const uint16_t KU_CREATE_RW_VOLUME_BUFFER_SIZE = 256;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnPropEntityModule.h:48
	const uint16_t KU_CREATE_RW_VOLUME_BUFFER_SIZE = 256;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// Declaration
	struct PropEntityModule {
	private:
		// BrnPropEntityModule.h:185
		extern const int8_t KI_NUM_LODS = 3;

	}

	// BrnPropEntityModule.h:48
	const uint16_t KU_CREATE_RW_VOLUME_BUFFER_SIZE = 256;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// Declaration
	struct PropEntityModule {
	public:
		~PropEntityModule();

		PropEntityModule();

	private:
		// BrnPropEntityModule.h:185
		extern const int8_t KI_NUM_LODS = 3;

	}

	// BrnPropEntityModule.h:48
	const uint16_t KU_CREATE_RW_VOLUME_BUFFER_SIZE = 256;

}

// BrnPropEntityModule.h:69
void BrnWorld::PropEntityModule::~PropEntityModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPropEntityModule.h:69
void BrnWorld::PropEntityModule::PropEntityModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

