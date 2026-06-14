// VehicleListEntry.h:28
namespace BrnResource {
	// BrnAssetIds.h:33
	enum EAssetSet {
		E_ASSETSET_GRAPHICS = 0,
		E_ASSETSET_PHYSICS = 1,
		E_ASSETSET_SOUND = 2,
		E_ASSETSET_DATA = 3,
		E_ASSETSET_ATTRIBS = 4,
		E_ASSETSET_ALL = 5,
		E_ASSETSET_FORCE_DWORD = 4294967295,
	}

	// BrnAssetIds.h:326
	extern CgsID MakeTrafficLaneId();

	// BrnAssetIds.h:342
	extern CgsID MakeAIDataId();

	// BrnAssetIds.h:120
	extern CgsID MakeICEListId();

	// BrnAssetIds.h:92
	extern CgsID MakeVehicleListId();

	// BrnAssetIds.h:55
	const char *[5] KAPC_ASSET_SET_STRINGS;

}

// BrnResourceAllocator.h:32
namespace BrnResource {
	// BrnAssetIds.h:33
	enum EAssetSet {
		E_ASSETSET_GRAPHICS = 0,
		E_ASSETSET_PHYSICS = 1,
		E_ASSETSET_SOUND = 2,
		E_ASSETSET_DATA = 3,
		E_ASSETSET_ATTRIBS = 4,
		E_ASSETSET_ALL = 5,
		E_ASSETSET_FORCE_DWORD = 4294967295,
	}

	// BrnAssetIds.h:161
	extern CgsID MakePropPhysicsId();

	// BrnAssetIds.h:55
	const char *[5] KAPC_ASSET_SET_STRINGS;

}

// BrnAssetIds.h:25
namespace BrnResource {
	// BrnAssetIds.h:33
	enum EAssetSet {
		E_ASSETSET_GRAPHICS = 0,
		E_ASSETSET_PHYSICS = 1,
		E_ASSETSET_SOUND = 2,
		E_ASSETSET_DATA = 3,
		E_ASSETSET_ATTRIBS = 4,
		E_ASSETSET_ALL = 5,
		E_ASSETSET_FORCE_DWORD = 4294967295,
	}

	struct ChallengeListResource;

	struct ChallengeSlot;

	struct ChallengeList;

	struct VehicleList;

	struct WheelList;

	struct HeapResourceAllocator;

	struct LinearResourceAllocator;

	struct CarStatsCollection;

	struct VehicleListEntryAudioData;

	struct VehicleListResource;

	struct VehicleSlot;

	struct SponsorCarSlot;

	struct HudMessageController;

	struct WheelListEntry;

	struct WheelListResource;

	struct WheelSlot;

	struct HudMessageEvent;

	struct PopupController;

	// BrnAssetIds.h:92
	extern CgsID MakeVehicleListId();

	// BrnAssetIds.h:257
	extern CgsID MakeWheelListId();

	// BrnAssetIds.h:272
	extern CgsID MakeVehicleId(const char *);

	// BrnAssetIds.h:362
	extern CgsID MakeTrackUnitId(int32_t);

	// BrnAssetIds.h:427
	extern CgsID MakePVSId();

	// BrnAssetIds.h:448
	extern void MakeCollisionIdListResourceId(int32_t, ID *);

	// BrnAssetIds.h:412
	extern CgsID MakeTrackCollisionId();

	// BrnAssetIds.h:173
	extern CgsID MakeSurfaceListId();

	// BrnAssetIds.h:161
	extern CgsID MakePropPhysicsId();

	// BrnAssetIds.h:185
	extern CgsID MakePropInstancesId(int32_t);

	// BrnAssetIds.h:214
	extern CgsID MakePropGraphicsListId(int32_t);

	// BrnAssetIds.h:229
	extern int32_t GetZoneIdFromPropGraphicsId(CgsID);

	// BrnAssetIds.h:200
	extern int32_t GetZoneIdFromPropInstancesId(CgsID);

	// BrnAssetIds.h:55
	const char *[5] KAPC_ASSET_SET_STRINGS;

}

// ChallengeListEntry.h:27
namespace BrnResource {
	// BrnAssetIds.h:33
	enum EAssetSet {
		E_ASSETSET_GRAPHICS = 0,
		E_ASSETSET_PHYSICS = 1,
		E_ASSETSET_SOUND = 2,
		E_ASSETSET_DATA = 3,
		E_ASSETSET_ATTRIBS = 4,
		E_ASSETSET_ALL = 5,
		E_ASSETSET_FORCE_DWORD = 4294967295,
	}

	// BrnAssetIds.h:342
	extern CgsID MakeAIDataId();

	// BrnAssetIds.h:55
	const char *[5] KAPC_ASSET_SET_STRINGS;

}

// ChallengeListEntry.h:27
namespace BrnResource {
	// BrnAssetIds.h:33
	enum EAssetSet {
		E_ASSETSET_GRAPHICS = 0,
		E_ASSETSET_PHYSICS = 1,
		E_ASSETSET_SOUND = 2,
		E_ASSETSET_DATA = 3,
		E_ASSETSET_ATTRIBS = 4,
		E_ASSETSET_ALL = 5,
		E_ASSETSET_FORCE_DWORD = 4294967295,
	}

	// BrnAssetIds.h:326
	extern CgsID MakeTrafficLaneId();

	// BrnAssetIds.h:342
	extern CgsID MakeAIDataId();

	// BrnAssetIds.h:106
	extern CgsID MakeFreeburnChallengeListId();

	// BrnAssetIds.h:92
	extern CgsID MakeVehicleListId();

	// BrnAssetIds.h:257
	extern CgsID MakeWheelListId();

	// BrnAssetIds.h:55
	const char *[5] KAPC_ASSET_SET_STRINGS;

}

// VehicleListEntry.h:28
namespace BrnResource {
	// BrnAssetIds.h:33
	enum EAssetSet {
		E_ASSETSET_GRAPHICS = 0,
		E_ASSETSET_PHYSICS = 1,
		E_ASSETSET_SOUND = 2,
		E_ASSETSET_DATA = 3,
		E_ASSETSET_ATTRIBS = 4,
		E_ASSETSET_ALL = 5,
		E_ASSETSET_FORCE_DWORD = 4294967295,
	}

	// BrnAssetIds.h:92
	extern CgsID MakeVehicleListId();

	// BrnAssetIds.h:257
	extern CgsID MakeWheelListId();

	// BrnAssetIds.h:55
	const char *[5] KAPC_ASSET_SET_STRINGS;

}

// BrnResourceAllocator.h:32
namespace BrnResource {
	// BrnAssetIds.h:55
	const char *[5] KAPC_ASSET_SET_STRINGS;

}

// ps3mem.h:5
namespace BrnResource {
	// BrnAssetIds.h:33
	enum EAssetSet {
		E_ASSETSET_GRAPHICS = 0,
		E_ASSETSET_PHYSICS = 1,
		E_ASSETSET_SOUND = 2,
		E_ASSETSET_DATA = 3,
		E_ASSETSET_ATTRIBS = 4,
		E_ASSETSET_ALL = 5,
		E_ASSETSET_FORCE_DWORD = 4294967295,
	}

	// BrnAssetIds.h:55
	const char *[5] KAPC_ASSET_SET_STRINGS;

}

// ChallengeListEntry.h:27
namespace BrnResource {
	// BrnAssetIds.h:33
	enum EAssetSet {
		E_ASSETSET_GRAPHICS = 0,
		E_ASSETSET_PHYSICS = 1,
		E_ASSETSET_SOUND = 2,
		E_ASSETSET_DATA = 3,
		E_ASSETSET_ATTRIBS = 4,
		E_ASSETSET_ALL = 5,
		E_ASSETSET_FORCE_DWORD = 4294967295,
	}

	// BrnAssetIds.h:55
	const char *[5] KAPC_ASSET_SET_STRINGS;

}

// ps3mem.h:5
namespace BrnResource {
	// BrnAssetIds.h:33
	enum EAssetSet {
		E_ASSETSET_GRAPHICS = 0,
		E_ASSETSET_PHYSICS = 1,
		E_ASSETSET_SOUND = 2,
		E_ASSETSET_DATA = 3,
		E_ASSETSET_ATTRIBS = 4,
		E_ASSETSET_ALL = 5,
		E_ASSETSET_FORCE_DWORD = 4294967295,
	}

	// BrnAssetIds.h:92
	extern CgsID MakeVehicleListId();

	// BrnAssetIds.h:106
	extern CgsID MakeFreeburnChallengeListId();

	// BrnAssetIds.h:55
	const char *[5] KAPC_ASSET_SET_STRINGS;

}

// VehicleListEntry.h:28
namespace BrnResource {
	// BrnAssetIds.h:33
	enum EAssetSet {
		E_ASSETSET_GRAPHICS = 0,
		E_ASSETSET_PHYSICS = 1,
		E_ASSETSET_SOUND = 2,
		E_ASSETSET_DATA = 3,
		E_ASSETSET_ATTRIBS = 4,
		E_ASSETSET_ALL = 5,
		E_ASSETSET_FORCE_DWORD = 4294967295,
	}

	// BrnAssetIds.h:55
	const char *[5] KAPC_ASSET_SET_STRINGS;

}

// BrnResourceAllocator.h:32
namespace BrnResource {
	// BrnAssetIds.h:33
	enum EAssetSet {
		E_ASSETSET_GRAPHICS = 0,
		E_ASSETSET_PHYSICS = 1,
		E_ASSETSET_SOUND = 2,
		E_ASSETSET_DATA = 3,
		E_ASSETSET_ATTRIBS = 4,
		E_ASSETSET_ALL = 5,
		E_ASSETSET_FORCE_DWORD = 4294967295,
	}

	// BrnAssetIds.h:55
	const char *[5] KAPC_ASSET_SET_STRINGS;

}

// ps3mem.h:5
namespace BrnResource {
	// BrnAssetIds.h:55
	const char *[5] KAPC_ASSET_SET_STRINGS;

}

// ps3mem.h:5
namespace BrnResource {
	// BrnAssetIds.h:33
	enum EAssetSet {
		E_ASSETSET_GRAPHICS = 0,
		E_ASSETSET_PHYSICS = 1,
		E_ASSETSET_SOUND = 2,
		E_ASSETSET_DATA = 3,
		E_ASSETSET_ATTRIBS = 4,
		E_ASSETSET_ALL = 5,
		E_ASSETSET_FORCE_DWORD = 4294967295,
	}

	// BrnAssetIds.h:92
	extern CgsID MakeVehicleListId();

	// BrnAssetIds.h:106
	extern CgsID MakeFreeburnChallengeListId();

	// BrnAssetIds.h:120
	extern CgsID MakeICEListId();

	// BrnAssetIds.h:257
	extern CgsID MakeWheelListId();

	// BrnAssetIds.h:55
	const char *[5] KAPC_ASSET_SET_STRINGS;

}

// ResourceTypeIds.h:30
namespace BrnResource {
	// BrnAssetIds.h:55
	const char *[5] KAPC_ASSET_SET_STRINGS;

}

// ChallengeListEntry.h:27
namespace BrnResource {
	// BrnAssetIds.h:33
	enum EAssetSet {
		E_ASSETSET_GRAPHICS = 0,
		E_ASSETSET_PHYSICS = 1,
		E_ASSETSET_SOUND = 2,
		E_ASSETSET_DATA = 3,
		E_ASSETSET_ATTRIBS = 4,
		E_ASSETSET_ALL = 5,
		E_ASSETSET_FORCE_DWORD = 4294967295,
	}

	// BrnAssetIds.h:161
	extern CgsID MakePropPhysicsId();

	// BrnAssetIds.h:55
	const char *[5] KAPC_ASSET_SET_STRINGS;

}

// ChallengeListEntry.h:27
namespace BrnResource {
	// BrnAssetIds.h:33
	enum EAssetSet {
		E_ASSETSET_GRAPHICS = 0,
		E_ASSETSET_PHYSICS = 1,
		E_ASSETSET_SOUND = 2,
		E_ASSETSET_DATA = 3,
		E_ASSETSET_ATTRIBS = 4,
		E_ASSETSET_ALL = 5,
		E_ASSETSET_FORCE_DWORD = 4294967295,
	}

	// BrnAssetIds.h:326
	extern CgsID MakeTrafficLaneId();

	// BrnAssetIds.h:92
	extern CgsID MakeVehicleListId();

	// BrnAssetIds.h:272
	extern CgsID MakeVehicleId(const char *);

	// BrnAssetIds.h:55
	const char *[5] KAPC_ASSET_SET_STRINGS;

}

// ChallengeListEntry.h:27
namespace BrnResource {
	// BrnAssetIds.h:33
	enum EAssetSet {
		E_ASSETSET_GRAPHICS = 0,
		E_ASSETSET_PHYSICS = 1,
		E_ASSETSET_SOUND = 2,
		E_ASSETSET_DATA = 3,
		E_ASSETSET_ATTRIBS = 4,
		E_ASSETSET_ALL = 5,
		E_ASSETSET_FORCE_DWORD = 4294967295,
	}

	// BrnAssetIds.h:290
	extern CgsID MakeTrafficVehicleId(const char *);

	// BrnAssetIds.h:55
	const char *[5] KAPC_ASSET_SET_STRINGS;

}

// BrnResourceAllocator.h:32
namespace BrnResource {
	// BrnAssetIds.h:33
	enum EAssetSet {
		E_ASSETSET_GRAPHICS = 0,
		E_ASSETSET_PHYSICS = 1,
		E_ASSETSET_SOUND = 2,
		E_ASSETSET_DATA = 3,
		E_ASSETSET_ATTRIBS = 4,
		E_ASSETSET_ALL = 5,
		E_ASSETSET_FORCE_DWORD = 4294967295,
	}

	// BrnAssetIds.h:362
	extern CgsID MakeTrackUnitId(int32_t);

	// BrnAssetIds.h:55
	const char *[5] KAPC_ASSET_SET_STRINGS;

}

