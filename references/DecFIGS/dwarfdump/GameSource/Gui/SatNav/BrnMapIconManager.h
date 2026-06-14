// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct MapIconManager {
		// BrnMapIconManager.h:52
		enum IconSizeMode {
			E_ICONSIZE_SMALL = 0,
			E_ICONSIZE_LARGE = 1,
		}

		// BrnMapIconManager.h:58
		enum IconFilterMode {
			E_ICONFILTER_ALL = 0,
			E_ICONFILTER_LANDMARKS_ALL = 1,
			E_ICONFILTER_LANDMARKS_PALM_BAY_HEIGHTS = 2,
			E_ICONFILTER_LANDMARKS_SILVER_LAKE = 3,
			E_ICONFILTER_LANDMARKS_HARBOR_TOWN = 4,
			E_ICONFILTER_LANDMARKS_WHITE_MOUNTAIN = 5,
			E_ICONFILTER_LANDMARKS_DOWNTOWN_PARADISE = 6,
			E_ICONFILTER_PLAYER_ONLY = 7,
			E_ICONFILTER_NO_RIVALS = 8,
			E_ICONFILTER_WORLDOFFENCES = 9,
		}

		// BrnMapIconManager.h:78
		enum OwnerId {
			E_OWNERID_INVALID = 0,
			E_SATNAV_MAP = 1,
			E_CRASHNAV_MAP = 2,
			E_PRERACE_FLYBY_MAP = 3,
			E_CRASHNAV_MAP_ONLINE = 4,
			E_CRASHNAV_MAP_ONLINE_SELECT_ROUTE = 5,
		}

	}

}

// BrnMapIconManager.h:49
struct BrnGui::MapIconManager {
	// BrnMapIconManager.h:88
	extern const int32_t KI_MAX_CRASHNAV_MAP_ICONS = 50;

	// BrnMapIconManager.h:90
	extern const int32_t KI_MAX_SATNAV_MAP_ICONS = 16;

	// BrnMapIconManager.h:92
	extern const int32_t KI_SATNAV_MAX_ICONS = 50;

	// BrnMapIconManager.h:95
	extern const int32_t KI_HACKED_DRIVETHROUGH_POSITIONS_COUNT = 15;

	// BrnMapIconManager.h:96
	extern const CgsID[15] KA_HACKED_DRIVETHROUGH_IDS;

	// BrnMapIconManager.h:97
	extern Vector3[15] KAV_HACKED_DRIVETHROUGH_POSITIONS;

private:
	// BrnMapIconManager.h:310
	extern const float32_t KF_SATNAV_RIVAL_VIEWPORT_ADJUSTMENT_X;

	// BrnMapIconManager.h:311
	extern const float32_t KF_SATNAV_RIVAL_VIEWPORT_ADJUSTMENT_Y;

	// BrnMapIconManager.h:313
	extern const float32_t KF_ONLINE_CHECKPOINT_Y_OFFSET;

	// BrnMapIconManager.h:315
	extern const float32_t KF_PLAYER_EVENT_ALPHA_DISTANCE;

	// BrnMapIconManager.h:316
	extern const float32_t KF_PLAYER_EVENT_ALPHA_AMOUNT;

	// BrnMapIconManager.h:318
	extern BrnGui::MapIconBrnBase::IconState[] KAE_LOBBY_COLOUR_TO_RIVAL_ICON;

	// BrnMapIconManager.h:319
	extern BrnGui::MapIconBrnBase::IconState[] KAE_LOBBY_COLOUR_TO_PLAYER_ICON;

	// BrnMapIconManager.h:426
	BrnGui::GuiEventUpdateSatNav::SatNavIconInfo[50] mSatNavIconInfo;

	// BrnMapIconManager.h:427
	BrnGui::GuiEventUpdateSatNav::SatNavIconInfo mPlayerIconInfo;

	// BrnMapIconManager.h:429
	int32_t miNumUsedIcons;

	// BrnMapIconManager.h:430
	int32_t miMaxNumberIcons;

	// BrnMapIconManager.h:432
	int8_t mi8CurrentEventIndex;

	// BrnMapIconManager.h:435
	BrnGui::CrashNavMapIcon[50] mCrashNavIcons;

	// BrnMapIconManager.h:436
	extern char[] macSatNavIconBaseName;

	// BrnMapIconManager.h:438
	BrnGui::SatNavMapIcon[16] mSatNavMapIcons;

	// BrnMapIconManager.h:440
	bool mbAllowDriveThruSelection;

	// BrnMapIconManager.h:442
	bool mbAllowRivalSelection;

	// BrnMapIconManager.h:444
	RoadSignIconManager mRoadSignIconManager;

	// BrnMapIconManager.h:445
	bool mbUseRoadSigns;

	// BrnMapIconManager.h:447
	bool mbAllowPlayerSelection;

	// BrnMapIconManager.h:449
	EventIconManager mEventIconManager;

	// BrnMapIconManager.h:450
	BrnGui::GuiEventDrawEventIcons::EIconDisplayType meEventIconDisplayType;

	// BrnMapIconManager.h:452
	bool mbShowingDriveThrus;

	// BrnMapIconManager.h:454
	BrnGui::GuiCache * mpGuiCache;

	// BrnMapIconManager.h:456
	StateInterface * mpStateInterface;

	// BrnMapIconManager.h:457
	BrnGui::MapIconManager::OwnerId mOwnerId;

	// BrnMapIconManager.h:458
	BrnGui::MapIconManager::IconSizeMode meIconSizeMode;

	// BrnMapIconManager.h:459
	BrnGui::MapIconManager::IconFilterMode meIconFilterMode;

	// BrnMapIconManager.h:461
	LightTriggerId mSelectedLightTriggerID;

	// BrnMapIconManager.h:462
	uint32_t muSelectedJunctionID;

	// BrnMapIconManager.h:463
	int32_t miSelectedCheckpoint;

	// BrnMapIconManager.h:465
	bool mbIsDisplayingEventInfo;

	// BrnMapIconManager.h:466
	bool mbRivalFovFreeburn;

	// BrnMapIconManager.h:467
	bool mbRivalFovRace;

	// BrnMapIconManager.h:468
	bool mbUseTrajectory;

	// BrnMapIconManager.h:469
	bool mbRotateSatNav;

	// BrnMapIconManager.h:470
	bool mbShowOffLineRivalsOnSatNav;

	// BrnMapIconManager.h:472
	bool mbIconsVisible;

	// BrnMapIconManager.h:473
	bool mbShowingOnlineRoute;

	// BrnMapIconManager.h:474
	bool mbShowingPreRaceRoute;

	// BrnMapIconManager.h:475
	bool mbShowingCrashNavRoute;

	// BrnMapIconManager.h:477
	bool mbIsActive;

public:
	// BrnMapIconManager.h:102
	void Construct(BrnGui::GuiCache *);

	// BrnMapIconManager.h:115
	BrnGui::MapIconManager::OwnerId SetOwnerParameters(StateInterface *, const char *, int32_t, BrnGui::MapIconManager::OwnerId, bool, bool, bool, BrnGui::GuiEventDrawEventIcons::EIconDisplayType, const char *);

	// BrnMapIconManager.h:121
	void ReleaseResources(StateInterface *, BrnGui::MapIconManager::OwnerId);

	// BrnMapIconManager.h:125
	bool IsCurrentOwner(BrnGui::MapIconManager::OwnerId) const;

	// BrnMapIconManager.h:129
	BrnGui::MapIconManager::OwnerId GetOwnerId() const;

	// BrnMapIconManager.h:134
	void UpdateSatNavInfo(const GuiEventUpdateSatNav *);

	// BrnMapIconManager.h:139
	void UpdateSatNavParams(const GuiEventSatNavParameters *);

	// BrnMapIconManager.h:143
	void Update();

	// BrnMapIconManager.h:147
	void AppendExpectedAptComponents();

	// BrnMapIconManager.h:151
	void SetupComponent();

	// BrnMapIconManager.h:155
	void ClearIconInfo();

	// BrnMapIconManager.h:159
	int32_t IconDisplaySort(const void *, const void *);

	// BrnMapIconManager.h:165
	void GetSatNavIconPositions(Vector2 *, int32_t *);

	// BrnMapIconManager.h:169
	const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo * GetRivalIconAtIndex(int32_t);

	// BrnMapIconManager.h:174
	const char * GetRoadSignNameAtIndex(int32_t) const;

	// BrnMapIconManager.h:179
	uint32_t GetEventIDAtIndex(int32_t) const;

	// BrnMapIconManager.h:184
	const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo * GetDriveThroughOrJunkyardAtIndex(int32_t) const;

	// BrnMapIconManager.h:188
	int32_t GetDriveThroughAndJunkyardCount() const;

	// BrnMapIconManager.h:192
	EventIconManager * GetEventIconManager();

	// BrnMapIconManager.h:197
	void SetIconsVisible(bool);

	// BrnMapIconManager.h:202
	void SetIconSize(BrnGui::MapIconManager::IconSizeMode);

	// BrnMapIconManager.h:207
	void SetZoomFactor(float32_t);

	// BrnMapIconManager.h:212
	void SetIconFilter(BrnGui::MapIconManager::IconFilterMode);

	// BrnMapIconManager.h:216
	void SetIsDisplayingEvent(bool);

	// BrnMapIconManager.h:220
	void SetRotateSatNav(bool);

	// BrnMapIconManager.h:224
	void SetCurrentEventIndex(int8_t);

	// BrnMapIconManager.h:229
	void SetShowingOnlineRouteInMenu(bool);

	// BrnMapIconManager.h:234
	void SetShowingPreRaceRouteInMenu(bool);

	// BrnMapIconManager.h:239
	void SetShowingCrashNavRouteInMenu(bool);

	// BrnMapIconManager.h:244
	void SetSelectedCheckpointInMenu(int32_t);

	// BrnMapIconManager.h:249
	void SetSelectedLightTriggerID(LightTriggerId);

	// BrnMapIconManager.h:254
	void SetSelectedJunctionID(uint32_t);

	// BrnMapIconManager.h:259
	void SetShowDrivethrus(bool);

	// BrnMapIconManager.h:264
	void SetAllowDriveThruSelection(bool);

	// BrnMapIconManager.h:269
	void SetAllowRivalSelection(bool);

	// BrnMapIconManager.h:274
	void SetAllowPlayerSelection(bool);

	// BrnMapIconManager.h:280
	void SetUseRoadSigns(bool, StateInterface *);

	// BrnMapIconManager.h:289
	void SetUseEventIcons(BrnGui::GuiEventDrawEventIcons::EIconDisplayType, StateInterface *, float32_t, uint32_t *, int32_t);

	// BrnMapIconManager.h:293
	void SetActive(bool);

	// BrnMapIconManager.h:296
	bool IsActive() const;

	// BrnMapIconManager.h:301
	void SetRoadRuleBatchData(const GuiEventRoadRuleBatchDataResponse *);

	// BrnMapIconManager.h:306
	void SetRoadIconFilter(BrnStreetData::ScoreType);

private:
	// BrnMapIconManager.h:322
	void UpdateCrashNavIcons();

	// BrnMapIconManager.h:325
	void UpdateSatNavIcons();

	// BrnMapIconManager.h:329
	void UpdateWorldIcons();

	// BrnMapIconManager.h:333
	void UpdateFreeburnChallengeIcons();

	// BrnMapIconManager.h:338
	bool IsTrackedIcon(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

	// BrnMapIconManager.h:343
	bool IsStartIcon(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

	// BrnMapIconManager.h:348
	bool IsPendingRaceLandmark(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnMapIconManager.h:353
	bool IsFinishIcon(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

	// BrnMapIconManager.h:358
	bool IsActiveLandmark(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

	// BrnMapIconManager.h:363
	bool IsActiveRival(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

	// BrnMapIconManager.h:368
	bool IsActiveJunkyard(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

	// BrnMapIconManager.h:373
	bool IsRival(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnMapIconManager.h:378
	bool IsLandmark(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

	// BrnMapIconManager.h:383
	bool IsJunkyard(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnMapIconManager.h:388
	bool IsDriveThrough(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnMapIconManager.h:393
	bool IsPlayer(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

	// BrnMapIconManager.h:398
	bool ShouldDisplayLandmark(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

	// BrnMapIconManager.h:402
	void UpdateViewPortToScreenTransform();

	// BrnMapIconManager.h:406
	float32_t CalculateAlpha(Vector3, Vector2);

	// BrnMapIconManager.h:411
	BrnGui::MapIconBrnBase::IconState GetSatNavIconStateForRival(BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

	// BrnMapIconManager.h:416
	BrnGui::MapIconBrnBase::IconState GetCrashNavIconStateForRival(BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

	// BrnMapIconManager.h:420
	int32_t GetNumRivalIcons() const;

	// BrnMapIconManager.h:424
	// Declaration
	void ResetOwnerParameter() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMapIconManager.h:818
		using namespace CgsDev::Message;

	}

}

// BrnMapIconManager.h:88
extern const int32_t KI_MAX_CRASHNAV_MAP_ICONS = 50;

// BrnMapIconManager.h:90
extern const int32_t KI_MAX_SATNAV_MAP_ICONS = 16;

// BrnMapIconManager.h:92
extern const int32_t KI_SATNAV_MAX_ICONS = 50;

// BrnMapIconManager.h:95
extern const int32_t KI_HACKED_DRIVETHROUGH_POSITIONS_COUNT = 15;

// BrnMapIconManager.h:96
extern const CgsID[15] KA_HACKED_DRIVETHROUGH_IDS;

// BrnMapIconManager.h:97
extern Vector3[15] KAV_HACKED_DRIVETHROUGH_POSITIONS;

// BrnMapIconManager.h:310
extern const float32_t KF_SATNAV_RIVAL_VIEWPORT_ADJUSTMENT_X;

// BrnMapIconManager.h:311
extern const float32_t KF_SATNAV_RIVAL_VIEWPORT_ADJUSTMENT_Y;

// BrnMapIconManager.h:313
extern const float32_t KF_ONLINE_CHECKPOINT_Y_OFFSET;

// BrnMapIconManager.h:315
extern const float32_t KF_PLAYER_EVENT_ALPHA_DISTANCE;

// BrnMapIconManager.h:316
extern const float32_t KF_PLAYER_EVENT_ALPHA_AMOUNT;

// BrnMapIconManager.h:318
extern BrnGui::MapIconBrnBase::IconState[] KAE_LOBBY_COLOUR_TO_RIVAL_ICON;

// BrnMapIconManager.h:319
extern BrnGui::MapIconBrnBase::IconState[] KAE_LOBBY_COLOUR_TO_PLAYER_ICON;

// BrnMapIconManager.h:436
extern char[] macSatNavIconBaseName;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct MapIconManager {
		// BrnMapIconManager.h:52
		enum IconSizeMode {
			E_ICONSIZE_SMALL = 0,
			E_ICONSIZE_LARGE = 1,
		}

		// BrnMapIconManager.h:58
		enum IconFilterMode {
			E_ICONFILTER_ALL = 0,
			E_ICONFILTER_LANDMARKS_ALL = 1,
			E_ICONFILTER_LANDMARKS_PALM_BAY_HEIGHTS = 2,
			E_ICONFILTER_LANDMARKS_SILVER_LAKE = 3,
			E_ICONFILTER_LANDMARKS_HARBOR_TOWN = 4,
			E_ICONFILTER_LANDMARKS_WHITE_MOUNTAIN = 5,
			E_ICONFILTER_LANDMARKS_DOWNTOWN_PARADISE = 6,
			E_ICONFILTER_PLAYER_ONLY = 7,
			E_ICONFILTER_NO_RIVALS = 8,
			E_ICONFILTER_WORLDOFFENCES = 9,
		}

		// BrnMapIconManager.h:78
		enum OwnerId {
			E_OWNERID_INVALID = 0,
			E_SATNAV_MAP = 1,
			E_CRASHNAV_MAP = 2,
			E_PRERACE_FLYBY_MAP = 3,
			E_CRASHNAV_MAP_ONLINE = 4,
			E_CRASHNAV_MAP_ONLINE_SELECT_ROUTE = 5,
		}

	}

}

// BrnMapIconManager.h:49
struct BrnGui::MapIconManager {
	// BrnMapIconManager.h:88
	extern const int32_t KI_MAX_CRASHNAV_MAP_ICONS = 50;

	// BrnMapIconManager.h:90
	extern const int32_t KI_MAX_SATNAV_MAP_ICONS = 16;

	// BrnMapIconManager.h:92
	extern const int32_t KI_SATNAV_MAX_ICONS = 50;

	// BrnMapIconManager.h:95
	extern const int32_t KI_HACKED_DRIVETHROUGH_POSITIONS_COUNT = 15;

	// BrnMapIconManager.h:96
	extern const CgsID[15] KA_HACKED_DRIVETHROUGH_IDS;

	// BrnMapIconManager.h:97
	extern Vector3[15] KAV_HACKED_DRIVETHROUGH_POSITIONS;

private:
	// BrnMapIconManager.h:310
	extern const float32_t KF_SATNAV_RIVAL_VIEWPORT_ADJUSTMENT_X;

	// BrnMapIconManager.h:311
	extern const float32_t KF_SATNAV_RIVAL_VIEWPORT_ADJUSTMENT_Y;

	// BrnMapIconManager.h:313
	extern const float32_t KF_ONLINE_CHECKPOINT_Y_OFFSET;

	// BrnMapIconManager.h:315
	extern const float32_t KF_PLAYER_EVENT_ALPHA_DISTANCE;

	// BrnMapIconManager.h:316
	extern const float32_t KF_PLAYER_EVENT_ALPHA_AMOUNT;

	// BrnMapIconManager.h:318
	extern BrnGui::MapIconBrnBase::IconState[] KAE_LOBBY_COLOUR_TO_RIVAL_ICON;

	// BrnMapIconManager.h:319
	extern BrnGui::MapIconBrnBase::IconState[] KAE_LOBBY_COLOUR_TO_PLAYER_ICON;

	// BrnMapIconManager.h:426
	BrnGui::GuiEventUpdateSatNav::SatNavIconInfo[50] mSatNavIconInfo;

	// BrnMapIconManager.h:427
	BrnGui::GuiEventUpdateSatNav::SatNavIconInfo mPlayerIconInfo;

	// BrnMapIconManager.h:429
	int32_t miNumUsedIcons;

	// BrnMapIconManager.h:430
	int32_t miMaxNumberIcons;

	// BrnMapIconManager.h:432
	int8_t mi8CurrentEventIndex;

	// BrnMapIconManager.h:435
	BrnGui::CrashNavMapIcon[50] mCrashNavIcons;

	// BrnMapIconManager.h:436
	extern char[] macSatNavIconBaseName;

	// BrnMapIconManager.h:438
	BrnGui::SatNavMapIcon[16] mSatNavMapIcons;

	// BrnMapIconManager.h:440
	bool mbAllowDriveThruSelection;

	// BrnMapIconManager.h:442
	bool mbAllowRivalSelection;

	// BrnMapIconManager.h:444
	RoadSignIconManager mRoadSignIconManager;

	// BrnMapIconManager.h:445
	bool mbUseRoadSigns;

	// BrnMapIconManager.h:447
	bool mbAllowPlayerSelection;

	// BrnMapIconManager.h:449
	EventIconManager mEventIconManager;

	// BrnMapIconManager.h:450
	BrnGui::GuiEventDrawEventIcons::EIconDisplayType meEventIconDisplayType;

	// BrnMapIconManager.h:452
	bool mbShowingDriveThrus;

	// BrnMapIconManager.h:454
	BrnGui::GuiCache * mpGuiCache;

	// BrnMapIconManager.h:456
	StateInterface * mpStateInterface;

	// BrnMapIconManager.h:457
	BrnGui::MapIconManager::OwnerId mOwnerId;

	// BrnMapIconManager.h:458
	BrnGui::MapIconManager::IconSizeMode meIconSizeMode;

	// BrnMapIconManager.h:459
	BrnGui::MapIconManager::IconFilterMode meIconFilterMode;

	// BrnMapIconManager.h:461
	LightTriggerId mSelectedLightTriggerID;

	// BrnMapIconManager.h:462
	uint32_t muSelectedJunctionID;

	// BrnMapIconManager.h:463
	int32_t miSelectedCheckpoint;

	// BrnMapIconManager.h:465
	bool mbIsDisplayingEventInfo;

	// BrnMapIconManager.h:466
	bool mbRivalFovFreeburn;

	// BrnMapIconManager.h:467
	bool mbRivalFovRace;

	// BrnMapIconManager.h:468
	bool mbUseTrajectory;

	// BrnMapIconManager.h:469
	bool mbRotateSatNav;

	// BrnMapIconManager.h:470
	bool mbShowOffLineRivalsOnSatNav;

	// BrnMapIconManager.h:472
	bool mbIconsVisible;

	// BrnMapIconManager.h:473
	bool mbShowingOnlineRoute;

	// BrnMapIconManager.h:474
	bool mbShowingPreRaceRoute;

	// BrnMapIconManager.h:475
	bool mbShowingCrashNavRoute;

	// BrnMapIconManager.h:477
	bool mbIsActive;

public:
	// BrnMapIconManager.h:102
	// Declaration
	void Construct(BrnGui::GuiCache *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMapIconManager.cpp:148
		using namespace CgsDev::Message;

	}

	// BrnMapIconManager.h:115
	// Declaration
	BrnGui::MapIconManager::OwnerId SetOwnerParameters(StateInterface *, const char *, int32_t, BrnGui::MapIconManager::OwnerId, bool, bool, bool, BrnGui::GuiEventDrawEventIcons::EIconDisplayType, const char *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMapIconManager.cpp:266
		using namespace CgsDev::Message;

		// BrnMapIconManager.cpp:335
		using namespace CgsDev::Message;

	}

	// BrnMapIconManager.h:121
	void ReleaseResources(StateInterface *, BrnGui::MapIconManager::OwnerId);

	// BrnMapIconManager.h:125
	bool IsCurrentOwner(BrnGui::MapIconManager::OwnerId) const;

	// BrnMapIconManager.h:129
	BrnGui::MapIconManager::OwnerId GetOwnerId() const;

	// BrnMapIconManager.h:134
	void UpdateSatNavInfo(const GuiEventUpdateSatNav *);

	// BrnMapIconManager.h:139
	void UpdateSatNavParams(const GuiEventSatNavParameters *);

	// BrnMapIconManager.h:143
	void Update();

	// BrnMapIconManager.h:147
	void AppendExpectedAptComponents();

	// BrnMapIconManager.h:151
	void SetupComponent();

	// BrnMapIconManager.h:155
	void ClearIconInfo();

	// BrnMapIconManager.h:159
	int32_t IconDisplaySort(const void *, const void *);

	// BrnMapIconManager.h:165
	void GetSatNavIconPositions(Vector2 *, int32_t *);

	// BrnMapIconManager.h:169
	const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo * GetRivalIconAtIndex(int32_t);

	// BrnMapIconManager.h:174
	const char * GetRoadSignNameAtIndex(int32_t) const;

	// BrnMapIconManager.h:179
	uint32_t GetEventIDAtIndex(int32_t) const;

	// BrnMapIconManager.h:184
	const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo * GetDriveThroughOrJunkyardAtIndex(int32_t) const;

	// BrnMapIconManager.h:188
	int32_t GetDriveThroughAndJunkyardCount() const;

	// BrnMapIconManager.h:192
	EventIconManager * GetEventIconManager();

	// BrnMapIconManager.h:197
	void SetIconsVisible(bool);

	// BrnMapIconManager.h:202
	void SetIconSize(BrnGui::MapIconManager::IconSizeMode);

	// BrnMapIconManager.h:207
	void SetZoomFactor(float32_t);

	// BrnMapIconManager.h:212
	void SetIconFilter(BrnGui::MapIconManager::IconFilterMode);

	// BrnMapIconManager.h:216
	void SetIsDisplayingEvent(bool);

	// BrnMapIconManager.h:220
	void SetRotateSatNav(bool);

	// BrnMapIconManager.h:224
	void SetCurrentEventIndex(int8_t);

	// BrnMapIconManager.h:229
	void SetShowingOnlineRouteInMenu(bool);

	// BrnMapIconManager.h:234
	void SetShowingPreRaceRouteInMenu(bool);

	// BrnMapIconManager.h:239
	void SetShowingCrashNavRouteInMenu(bool);

	// BrnMapIconManager.h:244
	void SetSelectedCheckpointInMenu(int32_t);

	// BrnMapIconManager.h:249
	void SetSelectedLightTriggerID(LightTriggerId);

	// BrnMapIconManager.h:254
	void SetSelectedJunctionID(uint32_t);

	// BrnMapIconManager.h:259
	void SetShowDrivethrus(bool);

	// BrnMapIconManager.h:264
	void SetAllowDriveThruSelection(bool);

	// BrnMapIconManager.h:269
	void SetAllowRivalSelection(bool);

	// BrnMapIconManager.h:274
	void SetAllowPlayerSelection(bool);

	// BrnMapIconManager.h:280
	void SetUseRoadSigns(bool, StateInterface *);

	// BrnMapIconManager.h:289
	void SetUseEventIcons(BrnGui::GuiEventDrawEventIcons::EIconDisplayType, StateInterface *, float32_t, uint32_t *, int32_t);

	// BrnMapIconManager.h:293
	void SetActive(bool);

	// BrnMapIconManager.h:296
	bool IsActive() const;

	// BrnMapIconManager.h:301
	void SetRoadRuleBatchData(const GuiEventRoadRuleBatchDataResponse *);

	// BrnMapIconManager.h:306
	void SetRoadIconFilter(BrnStreetData::ScoreType);

private:
	// BrnMapIconManager.h:322
	void UpdateCrashNavIcons();

	// BrnMapIconManager.h:325
	void UpdateSatNavIcons();

	// BrnMapIconManager.h:329
	void UpdateWorldIcons();

	// BrnMapIconManager.h:333
	void UpdateFreeburnChallengeIcons();

	// BrnMapIconManager.h:338
	bool IsTrackedIcon(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

	// BrnMapIconManager.h:343
	bool IsStartIcon(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

	// BrnMapIconManager.h:348
	bool IsPendingRaceLandmark(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnMapIconManager.h:353
	bool IsFinishIcon(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

	// BrnMapIconManager.h:358
	bool IsActiveLandmark(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

	// BrnMapIconManager.h:363
	bool IsActiveRival(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

	// BrnMapIconManager.h:368
	bool IsActiveJunkyard(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

	// BrnMapIconManager.h:373
	bool IsRival(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnMapIconManager.h:378
	bool IsLandmark(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

	// BrnMapIconManager.h:383
	bool IsJunkyard(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnMapIconManager.h:388
	bool IsDriveThrough(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnMapIconManager.h:393
	bool IsPlayer(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

	// BrnMapIconManager.h:398
	bool ShouldDisplayLandmark(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

	// BrnMapIconManager.h:402
	void UpdateViewPortToScreenTransform();

	// BrnMapIconManager.h:406
	// Declaration
	float32_t CalculateAlpha(Vector3, Vector2) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMapIconManager.cpp:2129
		using namespace rw::math;

	}

	// BrnMapIconManager.h:411
	BrnGui::MapIconBrnBase::IconState GetSatNavIconStateForRival(BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

	// BrnMapIconManager.h:416
	BrnGui::MapIconBrnBase::IconState GetCrashNavIconStateForRival(BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

	// BrnMapIconManager.h:420
	int32_t GetNumRivalIcons() const;

	// BrnMapIconManager.h:424
	// Declaration
	void ResetOwnerParameter() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMapIconManager.h:818
		using namespace CgsDev::Message;

	}

}

