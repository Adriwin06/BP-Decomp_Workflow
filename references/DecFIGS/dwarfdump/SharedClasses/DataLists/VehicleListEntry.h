// VehicleListEntry.h:28
namespace BrnResource {
	// VehicleListEntry.h:44
	enum ECarType {
		E_CARTYPE_DANGER = 0,
		E_CARTYPE_AGGRESSION = 1,
		E_CARTYPE_STUNTS = 2,
		E_CARTYPE_COUNT = 3,
		E_CARTYPE_INVALID = 3,
	}

	struct CarStatsCollection;

	struct VehicleListEntryAudioData;

	// Declaration
	struct VehicleListEntryGamePlayData {
		// VehicleListEntry.h:226
		enum EPlayerStats {
			E_PLAYERSTATS_START = 0,
			E_PLAYERSTATS_BOOST = 0,
			E_PLAYERSTATS_SPEED = 1,
			E_PLAYERSTATS_CONTROL = 2,
			E_PLAYERSTATS_STRENGTH = 3,
			E_PLAYERSTATS_MAX = 4,
			E_PLAYERSTATS_FORCE_DWORD = 4294967295,
		}

	}

	// Declaration
	struct VehicleListEntry {
		// VehicleListEntry.h:332
		enum ELiveryType {
			E_LIVERY_DEFAULT = 0,
			E_LIVERY_COLOUR = 1,
			E_LIVERY_PATTERN = 2,
			E_LIVERY_SILVER = 3,
			E_LIVERY_GOLD = 4,
		}

	}

	struct VehicleListResource;

	struct VehicleSlot;

	struct SponsorCarSlot;

	struct VehicleList;

	struct ICEList;

	struct HeapResourceAllocator;

	struct LinearResourceAllocator;

}

// VehicleListEntry.h:63
struct BrnResource::CarStatsCollection {
	// VehicleListEntry.h:65
	int32_t miSpeedLevel;

	// VehicleListEntry.h:66
	int32_t miStrengthLevel;

	// VehicleListEntry.h:67
	int32_t miControlLevel;

	// VehicleListEntry.h:68
	int32_t miBoostLevel;

}

// VehicleListEntry.h:80
struct BrnResource::VehicleListEntryAudioData {
private:
	// VehicleListEntry.h:183
	CgsID mExhaustName;

	// VehicleListEntry.h:184
	AttribSysCollectionKey mExhaustEntityKey;

	// VehicleListEntry.h:185
	AttribSysCollectionKey mEngineEntityKey;

	// VehicleListEntry.h:186
	CgsID mEngineName;

	// VehicleListEntry.h:187
	Name mRivalUnlockName;

	// VehicleListEntry.h:188
	AttribSysCollectionKey mWonCarVoiceOverKey;

	// VehicleListEntry.h:189
	AttribSysCollectionKey mRivalReleasedVoiceOverKey;

	// VehicleListEntry.h:191
	uint32_t muiMusicLoopContentSpec;

	// VehicleListEntry.h:192
	uint8_t muiAIExhaustIndex;

	// VehicleListEntry.h:193
	uint8_t muiAIExhaustIndex2ndPick;

	// VehicleListEntry.h:194
	uint8_t muiAIExhaustIndex3rdPick;

public:
	// VehicleListEntry.h:141
	CgsID GetExhaustName() const;

	// VehicleListEntry.h:144
	CgsID GetEngineName() const;

	// VehicleListEntry.h:147
	AttribSysCollectionKey GetExhaustKey() const;

	// VehicleListEntry.h:150
	AttribSysCollectionKey GetEngineKey() const;

	// VehicleListEntry.h:154
	uint8_t GetAIExhaustIndex() const;

	// VehicleListEntry.h:158
	uint8_t GetAIExhaustIndex2ndPick() const;

	// VehicleListEntry.h:161
	uint8_t GetAIExhaustIndex3rdPick() const;

	// VehicleListEntry.h:164
	uint32_t GetAIMusicLoop() const;

	// VehicleListEntry.h:167
	Name GetRivalUnlockName() const;

	// VehicleListEntry.h:170
	AttribSysCollectionKey GetWonCarVoiceOverKey() const;

	// VehicleListEntry.h:173
	AttribSysCollectionKey GetRivalReleasedVoiceOverKey() const;

	// VehicleListEntry.h:176
	void FixUp(void *);

	// VehicleListEntry.h:179
	void FixDown(void *);

}

// VehicleListEntry.h:207
struct BrnResource::VehicleListEntryGamePlayData {
	// VehicleListEntry.h:210
	extern const int32_t KI_CARSTATS_MAX = 10;

private:
	// VehicleListEntry.h:309
	float32_t mfDamageLimit;

	// VehicleListEntry.h:310
	uint32_t mxFlags;

	// VehicleListEntry.h:311
	uint8_t[4] muStats;

public:
	// VehicleListEntry.h:272
	float32_t GetDamageLimit() const;

	// VehicleListEntry.h:275
	uint8_t GetStat(BrnResource::VehicleListEntryGamePlayData::EPlayerStats) const;

	// VehicleListEntry.h:278
	bool IsRaceVehicle() const;

	// VehicleListEntry.h:281
	bool IsTrafficVehicle() const;

	// VehicleListEntry.h:284
	bool CanCheckTraffic() const;

	// VehicleListEntry.h:287
	bool CanBeChecked() const;

	// VehicleListEntry.h:290
	bool CanBePainted() const;

	// VehicleListEntry.h:293
	bool IsTrailer() const;

	// VehicleListEntry.h:296
	bool CanTowTrailer() const;

	// VehicleListEntry.h:299
	void FixUp(void *);

	// VehicleListEntry.h:302
	void FixDown(void *);

	// VehicleListEntry.h:306
	void GetCarStats(CarStatsCollection *) const;

}

// VehicleListEntry.h:323
struct BrnResource::VehicleListEntry {
	// VehicleListEntry.h:325
	extern const int32_t KI_MAX_VEHICLE_NAME_LENGTH = 63;

	// VehicleListEntry.h:326
	extern const int32_t KI_MAX_VEHICLE_WHEEL_NAME_LENGTH = 32;

	// VehicleListEntry.h:327
	extern const int32_t KI_MAX_MANUFACTURER_NAME_LENGTH = 32;

private:
	// VehicleListEntry.h:460
	CgsID mId;

	// VehicleListEntry.h:461
	CgsID mParentId;

	// VehicleListEntry.h:462
	char[32] mDefaultWheelName;

	// VehicleListEntry.h:463
	char[64] macVehicleName;

	// VehicleListEntry.h:464
	char[32] macManufacturerName;

	// VehicleListEntry.h:465
	VehicleListEntryGamePlayData mGamePlayData;

	// VehicleListEntry.h:466
	AttribSysCollectionKey mAttribCollectionKey;

	// VehicleListEntry.h:467
	VehicleListEntryAudioData mAudioData;

	// VehicleListEntry.h:468
	uint8_t muCarType;

	// VehicleListEntry.h:469
	uint8_t muLiveryType;

	// VehicleListEntry.h:471
	uint8_t muTopSpeedNormal;

	// VehicleListEntry.h:472
	uint8_t muTopSpeedBoost;

	// VehicleListEntry.h:473
	uint8_t muTopSpeedNormalGUIStat;

	// VehicleListEntry.h:474
	uint8_t muTopSpeedBoostGUIStat;

	// VehicleListEntry.h:476
	uint8_t muColourIndex;

	// VehicleListEntry.h:477
	uint8_t muPaletteIndex;

public:
	// VehicleListEntry.h:342
	void SetId(CgsID);

	// VehicleListEntry.h:345
	void SetParentId(CgsID);

	// VehicleListEntry.h:362
	CgsID GetId() const;

	// VehicleListEntry.h:365
	CgsID GetParentId() const;

	// VehicleListEntry.h:368
	const char * GetVehicleName() const;

	// VehicleListEntry.h:371
	char * GetDefaultWheelName() const;

	// VehicleListEntry.h:374
	const char * GetManufacturerName() const;

	// VehicleListEntry.h:377
	const VehicleListEntryGamePlayData * GetGamePlayData() const;

	// VehicleListEntry.h:380
	VehicleListEntryGamePlayData * GetGamePlayData();

	// VehicleListEntry.h:383
	VehicleListEntryAudioData * GetAudioData();

	// VehicleListEntry.h:386
	const VehicleListEntryAudioData * GetAudioData() const;

	// VehicleListEntry.h:389
	const AttribSysCollectionKey * GetAttribCollectionKey() const;

	// VehicleListEntry.h:392
	AttribSysCollectionKey * GetAttribCollectionKey();

	// VehicleListEntry.h:395
	BrnResource::ECarType GetCarType() const;

	// VehicleListEntry.h:398
	void SetCarType(BrnResource::ECarType);

	// VehicleListEntry.h:401
	BrnResource::VehicleListEntry::ELiveryType GetLiveryType() const;

	// VehicleListEntry.h:405
	void SetLiveryType(BrnResource::VehicleListEntry::ELiveryType);

	// VehicleListEntry.h:408
	uint8_t GetTopSpeedNormal() const;

	// VehicleListEntry.h:412
	void SetTopSpeedNormal(uint8_t);

	// VehicleListEntry.h:415
	uint8_t GetTopSpeedBoost() const;

	// VehicleListEntry.h:419
	void SetTopSpeedBoost(uint8_t);

	// VehicleListEntry.h:422
	uint8_t GetTopSpeedNormalGUIStat() const;

	// VehicleListEntry.h:426
	void SetTopSpeedNormalGUIStat(uint8_t);

	// VehicleListEntry.h:429
	uint8_t GetTopSpeedBoostGUIStat() const;

	// VehicleListEntry.h:433
	void SetTopSpeedBoostGUIStat(uint8_t);

	// VehicleListEntry.h:436
	bool IsLiveryColour() const;

	// VehicleListEntry.h:439
	bool IsSelectable() const;

	// VehicleListEntry.h:442
	uint8_t GetColourIndex() const;

	// VehicleListEntry.h:445
	uint8_t GetColourPaletteIndex() const;

	// VehicleListEntry.h:448
	void SetColourIndex(uint8_t);

	// VehicleListEntry.h:451
	void SetColourPaletteIndex(uint8_t);

	// VehicleListEntry.h:454
	void FixUp(void *);

	// VehicleListEntry.h:457
	void FixDown(void *);

}

// VehicleListEntry.h:325
extern const int32_t KI_MAX_VEHICLE_NAME_LENGTH = 63;

// VehicleListEntry.h:326
extern const int32_t KI_MAX_VEHICLE_WHEEL_NAME_LENGTH = 32;

// VehicleListEntry.h:327
extern const int32_t KI_MAX_MANUFACTURER_NAME_LENGTH = 32;

// BrnResourceAllocator.h:32
namespace BrnResource {
	// VehicleListEntry.h:44
	enum ECarType {
		E_CARTYPE_DANGER = 0,
		E_CARTYPE_AGGRESSION = 1,
		E_CARTYPE_STUNTS = 2,
		E_CARTYPE_COUNT = 3,
		E_CARTYPE_INVALID = 3,
	}

	// Declaration
	struct VehicleListEntryGamePlayData {
		// VehicleListEntry.h:226
		enum EPlayerStats {
			E_PLAYERSTATS_START = 0,
			E_PLAYERSTATS_BOOST = 0,
			E_PLAYERSTATS_SPEED = 1,
			E_PLAYERSTATS_CONTROL = 2,
			E_PLAYERSTATS_STRENGTH = 3,
			E_PLAYERSTATS_MAX = 4,
			E_PLAYERSTATS_FORCE_DWORD = 4294967295,
		}

	}

	// Declaration
	struct VehicleListEntry {
		// VehicleListEntry.h:332
		enum ELiveryType {
			E_LIVERY_DEFAULT = 0,
			E_LIVERY_COLOUR = 1,
			E_LIVERY_PATTERN = 2,
			E_LIVERY_SILVER = 3,
			E_LIVERY_GOLD = 4,
		}

	}

}

// BrnAssetIds.h:25
namespace BrnResource {
	// VehicleListEntry.h:44
	enum ECarType {
		E_CARTYPE_DANGER = 0,
		E_CARTYPE_AGGRESSION = 1,
		E_CARTYPE_STUNTS = 2,
		E_CARTYPE_COUNT = 3,
		E_CARTYPE_INVALID = 3,
	}

	// Declaration
	struct VehicleListEntryGamePlayData {
		// VehicleListEntry.h:226
		enum EPlayerStats {
			E_PLAYERSTATS_START = 0,
			E_PLAYERSTATS_BOOST = 0,
			E_PLAYERSTATS_SPEED = 1,
			E_PLAYERSTATS_CONTROL = 2,
			E_PLAYERSTATS_STRENGTH = 3,
			E_PLAYERSTATS_MAX = 4,
			E_PLAYERSTATS_FORCE_DWORD = 4294967295,
		}

	}

	// Declaration
	struct VehicleListEntry {
		// VehicleListEntry.h:332
		enum ELiveryType {
			E_LIVERY_DEFAULT = 0,
			E_LIVERY_COLOUR = 1,
			E_LIVERY_PATTERN = 2,
			E_LIVERY_SILVER = 3,
			E_LIVERY_GOLD = 4,
		}

	}

}

// ChallengeListEntry.h:27
namespace BrnResource {
	// VehicleListEntry.h:44
	enum ECarType {
		E_CARTYPE_DANGER = 0,
		E_CARTYPE_AGGRESSION = 1,
		E_CARTYPE_STUNTS = 2,
		E_CARTYPE_COUNT = 3,
		E_CARTYPE_INVALID = 3,
	}

	// Declaration
	struct VehicleListEntryGamePlayData {
		// VehicleListEntry.h:226
		enum EPlayerStats {
			E_PLAYERSTATS_START = 0,
			E_PLAYERSTATS_BOOST = 0,
			E_PLAYERSTATS_SPEED = 1,
			E_PLAYERSTATS_CONTROL = 2,
			E_PLAYERSTATS_STRENGTH = 3,
			E_PLAYERSTATS_MAX = 4,
			E_PLAYERSTATS_FORCE_DWORD = 4294967295,
		}

	}

	// Declaration
	struct VehicleListEntry {
		// VehicleListEntry.h:332
		enum ELiveryType {
			E_LIVERY_DEFAULT = 0,
			E_LIVERY_COLOUR = 1,
			E_LIVERY_PATTERN = 2,
			E_LIVERY_SILVER = 3,
			E_LIVERY_GOLD = 4,
		}

	}

}

// VehicleListEntry.h:28
namespace BrnResource {
	// VehicleListEntry.h:44
	enum ECarType {
		E_CARTYPE_DANGER = 0,
		E_CARTYPE_AGGRESSION = 1,
		E_CARTYPE_STUNTS = 2,
		E_CARTYPE_COUNT = 3,
		E_CARTYPE_INVALID = 3,
	}

	struct CarStatsCollection;

	struct VehicleListEntryAudioData;

	// Declaration
	struct VehicleListEntryGamePlayData {
		// VehicleListEntry.h:226
		enum EPlayerStats {
			E_PLAYERSTATS_START = 0,
			E_PLAYERSTATS_BOOST = 0,
			E_PLAYERSTATS_SPEED = 1,
			E_PLAYERSTATS_CONTROL = 2,
			E_PLAYERSTATS_STRENGTH = 3,
			E_PLAYERSTATS_MAX = 4,
			E_PLAYERSTATS_FORCE_DWORD = 4294967295,
		}

	}

	// Declaration
	struct VehicleListEntry {
		// VehicleListEntry.h:332
		enum ELiveryType {
			E_LIVERY_DEFAULT = 0,
			E_LIVERY_COLOUR = 1,
			E_LIVERY_PATTERN = 2,
			E_LIVERY_SILVER = 3,
			E_LIVERY_GOLD = 4,
		}

	}

	struct ChallengeListResource;

	struct ChallengeSlot;

	struct ChallengeList;

	struct VehicleListResource;

	struct VehicleSlot;

	struct SponsorCarSlot;

	struct VehicleList;

	struct WheelList;

	struct HudMessageController;

	struct HeapResourceAllocator;

	struct LinearResourceAllocator;

	struct WheelListEntry;

	struct WheelListResource;

	struct WheelSlot;

	struct HudMessageEvent;

	struct PopupController;

}

// ps3mem.h:5
namespace BrnResource {
	// VehicleListEntry.h:44
	enum ECarType {
		E_CARTYPE_DANGER = 0,
		E_CARTYPE_AGGRESSION = 1,
		E_CARTYPE_STUNTS = 2,
		E_CARTYPE_COUNT = 3,
		E_CARTYPE_INVALID = 3,
	}

	// Declaration
	struct VehicleListEntryGamePlayData {
		// VehicleListEntry.h:226
		enum EPlayerStats {
			E_PLAYERSTATS_START = 0,
			E_PLAYERSTATS_BOOST = 0,
			E_PLAYERSTATS_SPEED = 1,
			E_PLAYERSTATS_CONTROL = 2,
			E_PLAYERSTATS_STRENGTH = 3,
			E_PLAYERSTATS_MAX = 4,
			E_PLAYERSTATS_FORCE_DWORD = 4294967295,
		}

	}

	// Declaration
	struct VehicleListEntry {
		// VehicleListEntry.h:332
		enum ELiveryType {
			E_LIVERY_DEFAULT = 0,
			E_LIVERY_COLOUR = 1,
			E_LIVERY_PATTERN = 2,
			E_LIVERY_SILVER = 3,
			E_LIVERY_GOLD = 4,
		}

	}

}

// VehicleListEntry.h:28
namespace BrnResource {
	// VehicleListEntry.h:44
	enum ECarType {
		E_CARTYPE_DANGER = 0,
		E_CARTYPE_AGGRESSION = 1,
		E_CARTYPE_STUNTS = 2,
		E_CARTYPE_COUNT = 3,
		E_CARTYPE_INVALID = 3,
	}

	struct CarStatsCollection;

	struct VehicleListEntryAudioData;

	// Declaration
	struct VehicleListEntryGamePlayData {
		// VehicleListEntry.h:226
		enum EPlayerStats {
			E_PLAYERSTATS_START = 0,
			E_PLAYERSTATS_BOOST = 0,
			E_PLAYERSTATS_SPEED = 1,
			E_PLAYERSTATS_CONTROL = 2,
			E_PLAYERSTATS_STRENGTH = 3,
			E_PLAYERSTATS_MAX = 4,
			E_PLAYERSTATS_FORCE_DWORD = 4294967295,
		}

	}

	// Declaration
	struct VehicleListEntry {
		// VehicleListEntry.h:332
		enum ELiveryType {
			E_LIVERY_DEFAULT = 0,
			E_LIVERY_COLOUR = 1,
			E_LIVERY_PATTERN = 2,
			E_LIVERY_SILVER = 3,
			E_LIVERY_GOLD = 4,
		}

	}

	struct VehicleListResource;

	struct VehicleSlot;

	struct SponsorCarSlot;

	struct VehicleList;

	struct HeapResourceAllocator;

	struct LinearResourceAllocator;

}

// ResourceTypeIds.h:30
namespace BrnResource {
	// VehicleListEntry.h:44
	enum ECarType {
		E_CARTYPE_DANGER = 0,
		E_CARTYPE_AGGRESSION = 1,
		E_CARTYPE_STUNTS = 2,
		E_CARTYPE_COUNT = 3,
		E_CARTYPE_INVALID = 3,
	}

	// Declaration
	struct VehicleListEntryGamePlayData {
		// VehicleListEntry.h:226
		enum EPlayerStats {
			E_PLAYERSTATS_START = 0,
			E_PLAYERSTATS_BOOST = 0,
			E_PLAYERSTATS_SPEED = 1,
			E_PLAYERSTATS_CONTROL = 2,
			E_PLAYERSTATS_STRENGTH = 3,
			E_PLAYERSTATS_MAX = 4,
			E_PLAYERSTATS_FORCE_DWORD = 4294967295,
		}

	}

	// Declaration
	struct VehicleListEntry {
		// VehicleListEntry.h:332
		enum ELiveryType {
			E_LIVERY_DEFAULT = 0,
			E_LIVERY_COLOUR = 1,
			E_LIVERY_PATTERN = 2,
			E_LIVERY_SILVER = 3,
			E_LIVERY_GOLD = 4,
		}

	}

}

// VehicleListEntry.h:28
namespace BrnResource {
	// VehicleListEntry.h:44
	enum ECarType {
		E_CARTYPE_DANGER = 0,
		E_CARTYPE_AGGRESSION = 1,
		E_CARTYPE_STUNTS = 2,
		E_CARTYPE_COUNT = 3,
		E_CARTYPE_INVALID = 3,
	}

	struct CarStatsCollection;

	struct VehicleListEntryAudioData;

	// Declaration
	struct VehicleListEntryGamePlayData {
		// VehicleListEntry.h:226
		enum EPlayerStats {
			E_PLAYERSTATS_START = 0,
			E_PLAYERSTATS_BOOST = 0,
			E_PLAYERSTATS_SPEED = 1,
			E_PLAYERSTATS_CONTROL = 2,
			E_PLAYERSTATS_STRENGTH = 3,
			E_PLAYERSTATS_MAX = 4,
			E_PLAYERSTATS_FORCE_DWORD = 4294967295,
		}

	}

	// Declaration
	struct VehicleListEntry {
		// VehicleListEntry.h:332
		enum ELiveryType {
			E_LIVERY_DEFAULT = 0,
			E_LIVERY_COLOUR = 1,
			E_LIVERY_PATTERN = 2,
			E_LIVERY_SILVER = 3,
			E_LIVERY_GOLD = 4,
		}

	}

	struct ChallengeListResource;

	struct ChallengeSlot;

	struct ChallengeList;

	struct VehicleListResource;

	struct VehicleSlot;

	struct SponsorCarSlot;

	struct VehicleList;

	struct ICEList;

	struct WheelList;

	struct HudMessageController;

	struct HeapResourceAllocator;

	struct LinearResourceAllocator;

	struct WheelListEntry;

	struct WheelListResource;

	struct WheelSlot;

	struct HudMessageEvent;

	struct PopupController;

	// Declaration
	struct DebugComponent {
	public:
		DebugComponent();

	}

}

