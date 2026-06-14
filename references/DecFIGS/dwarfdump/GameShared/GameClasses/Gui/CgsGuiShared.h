// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsGuiShared.h:63
	const uint32_t KU_GUIUPDATEAPTVIEW_MAX_STR_CHAR = 12;

}

// CgsGuiShared.h:29
namespace BrnFlapt {
}

// CgsGuiShared.h:82
struct CgsGui::GuiAccessPointers {
	// CgsGuiShared.h:125
	CgsGui::AptAux * mpAptAux;

	// CgsGuiShared.h:126
	LanguageManager * mpLanguageManager;

private:
	// CgsGuiShared.h:129
	BrnFlapt::FileRef * mpFlaptFile;

	// CgsGuiShared.h:130
	BrnFlapt::FlaptManager * mpFlaptManager;

	// CgsGuiShared.h:132
	BrnGui::GuiCache * mpGuiCache;

	// CgsGuiShared.h:134
	InputBuffer * mpGDMInput;

	// Unknown accessibility
	// CgsGuiShared.h:69
	typedef CgsModule::EventReceiverQueue<1024,16> GuiEventReceiverQueue;

	// CgsGuiShared.h:135
	GuiAccessPointers::GuiEventReceiverQueue * mpGDMReceiverQueue;

public:
	// CgsGuiShared.h:84
	void Construct();

	// CgsGuiShared.h:90
	void SetFlaptFile(const BrnFlapt::FileRef &);

	// CgsGuiShared.h:94
	void SetFlaptManager(BrnFlapt::FlaptManager *);

	// CgsGuiShared.h:98
	void SetGuiCache(BrnGui::GuiCache *);

	// CgsGuiShared.h:102
	void SetGDMInput(InputBuffer *);

	// CgsGuiShared.h:106
	void SetGDMReceiverQueue(GuiAccessPointers::GuiEventReceiverQueue *);

	// CgsGuiShared.h:111
	BrnFlapt::FileRef * GetFlaptFile();

	// CgsGuiShared.h:114
	BrnFlapt::FlaptManager * GetFlaptManager();

	// CgsGuiShared.h:117
	BrnGui::GuiCache * GetGuiCache();

	// CgsGuiShared.h:120
	InputBuffer * GetGDMInput();

	// CgsGuiShared.h:123
	GuiAccessPointers::GuiEventReceiverQueue * GetGDMReceiverQueue();

}

// CgsGuiShared.h:29
namespace BrnFlapt {
	struct FileRef;

	struct TextFieldRef;

	struct TextFieldInstance;

	struct MovieClipInstance;

	struct HashedString;

	struct Transform;

	struct ColourTransform;

	struct TextField;

	struct Mesh;

	struct RenderLayer;

	struct RenderLayerKeyFrame;

	struct KeyFrameAnims;

	struct MovieClip;

	struct FlaptFile;

	struct TriggerParameters;

	struct FileDebugData;

	struct FontStyle;

	struct IndexPath;

	struct FlaptRenderer;

	struct MovieClipRef;

	struct FlaptFileInstance;

}

// CgsGuiShared.h:29
namespace BrnFlapt {
	struct FileRef;

	struct FlaptManager;

	struct TextFieldRef;

	struct TextFieldInstance;

	struct MovieClipInstance;

	struct HashedString;

	struct Transform;

	struct ColourTransform;

	struct TextField;

	struct Mesh;

	struct RenderLayer;

	struct RenderLayerKeyFrame;

	struct KeyFrameAnims;

	struct MovieClip;

	struct FlaptFile;

	struct TriggerParameters;

	struct FileDebugData;

	struct FontStyle;

	struct IndexPath;

	struct FlaptRenderer;

	struct MovieClipRef;

	struct FlaptFileInstance;

}

// CgsGuiShared.h:82
struct CgsGui::GuiAccessPointers {
	// CgsGuiShared.h:125
	CgsGui::AptAux * mpAptAux;

	// CgsGuiShared.h:126
	CgsLanguage::LanguageManager * mpLanguageManager;

private:
	// CgsGuiShared.h:129
	BrnFlapt::FileRef * mpFlaptFile;

	// CgsGuiShared.h:130
	BrnFlapt::FlaptManager * mpFlaptManager;

	// CgsGuiShared.h:132
	BrnGui::GuiCache * mpGuiCache;

	// CgsGuiShared.h:134
	InputBuffer * mpGDMInput;

	// Unknown accessibility
	// CgsGuiShared.h:69
	typedef CgsModule::EventReceiverQueue<1024,16> GuiEventReceiverQueue;

	// CgsGuiShared.h:135
	GuiAccessPointers::GuiEventReceiverQueue * mpGDMReceiverQueue;

public:
	// CgsGuiShared.h:84
	void Construct();

	// CgsGuiShared.h:90
	void SetFlaptFile(const BrnFlapt::FileRef &);

	// CgsGuiShared.h:94
	void SetFlaptManager(BrnFlapt::FlaptManager *);

	// CgsGuiShared.h:98
	void SetGuiCache(BrnGui::GuiCache *);

	// CgsGuiShared.h:102
	void SetGDMInput(InputBuffer *);

	// CgsGuiShared.h:106
	void SetGDMReceiverQueue(GuiAccessPointers::GuiEventReceiverQueue *);

	// CgsGuiShared.h:111
	BrnFlapt::FileRef * GetFlaptFile();

	// CgsGuiShared.h:114
	BrnFlapt::FlaptManager * GetFlaptManager();

	// CgsGuiShared.h:117
	BrnGui::GuiCache * GetGuiCache();

	// CgsGuiShared.h:120
	InputBuffer * GetGDMInput();

	// CgsGuiShared.h:123
	GuiAccessPointers::GuiEventReceiverQueue * GetGDMReceiverQueue();

}

// CgsGuiShared.h:45
namespace BrnGui {
	struct BrnFlaptComponent;

	struct RivalPanelData;

	struct RivalPanel;

	struct OverheadSignScore;

	struct GuiEventTickerClearMessages;

	struct GuiEventFriendListShowing;

	struct GuiEventOnlineShowProfile;

	struct GuiEventOnlineReceiveFriendInfo;

	struct GuiEventCache;

	struct GuiEventStopMode;

	struct GuiEventRoadRuleModeRequest;

	struct GuiEventRoadRuleEnter;

	struct GuiEventRoadRuleUpdateTargetScores;

	struct GuiEventRoadRuleEnd;

	struct GuiEventRoadRuleFail;

	struct GuiEventRoadRuleBatchDataResponse;

	struct GuiEventChangeDistrict;

	struct GuiEventSpecificPresetRaces;

	struct GuiEventSetActiveLandmarks;

	struct GuiEventUpdateEventStarts;

	struct GuiEventSatNavParameters;

	struct GuiRaceCarInfoEvent;

	struct GuiTrafficCarInfoEvent;

	struct GuiOverheadSignInfoEvent;

	struct GuiEventBoostBarStuntInfo;

	struct GuiEventBoostInfo;

	struct GuiEventRacePositionInfo;

	struct GuiEventRaceDistanceRemaining;

	struct GuiEventOnlineEventFinishingOrder;

	struct GuiEventJunctionInfo;

	struct GuiEventDriveThruDiscovered;

	struct GuiEventRouteInformation;

	struct GuiEventEventStateResponse;

	struct GuiEventNetworkPlayerImage;

	struct GuiEventNetworkLobbyPlayerList;

	struct GuiEventNetworkGameParams;

	struct GuiSoftTakedownEvent;

	struct GuiImpactEvent;

	struct GuiStuntEvent;

	struct GuiSignatureStuntEvent;

	struct GuiDirtyTrickTriggerableEvent;

	struct GuiEventAudioTraxUpdate;

	struct GuiEATraxChyronActive;

	struct GuiOffenceShortcutEvent;

	struct GuiTrafficCheckEvent;

	struct GuiNearMissEvent;

	struct GuiDriftingEvent;

	struct GuiCompletedStuntEvent;

	struct GuiInProgressStuntEvent;

	struct GuiSpinningEvent;

	struct GuiInAirEvent;

	struct GuiOncomingEvent;

	struct GuiTailgatingEvent;

	struct GuiHitVehicleEvent;

	struct GuiEventStatsRequest;

	struct GuiEventStatsResponse;

	struct GuiEventRankProgressResponse;

	struct GuiEventRivalryFullInfoResponse;

	struct GuiHUDMessageCrushCombo;

	struct GuiChallengeNotActiveStartEvent;

	struct GuiHudMessage;

	struct GuiOverlayFullInfoResponse;

	struct GuiPFXHookEnumeration;

	struct GuiNewBurnoutSkillzEvent;

	struct GuiShowtimeScoreUpdate;

	struct GuiEventRequestCompressedCamPic;

	struct GuiEventCamPicCompressed;

	struct GuiEventRequestTraining;

	struct GuiChallengeStartEvent;

	struct GuiEventFburnChallengeEveryPlayerStatus;

	struct GuiChallengeTriggerResponse;

	struct GuiChallengeUpdateEvent;

	struct BaseInGameMessagesComponent;

	struct InGameMessagesQueue;

	struct InGameMessagesComponent;

	struct MapTransform;

	struct RoadSignIconManager;

	struct SatNavMapIcon;

	struct GuiPlayerInfo;

	struct FlaptAnimatorComponent;

	struct BaseBoostMessageItemComponent;

	struct BaseBoostMessageSlotComponent;

	struct BoostMessageSlot;

	struct BaseBoostMessageManagerComponent;

	struct FlaptIconComponent;

	struct PositionIndicator;

	struct FlaptInterpolatorComponent;

	struct EventInfoComponent;

	struct BasePlayerPositionSingleComponent;

	struct PlayerPositionSingleData;

	struct PlayerPositionSingleComponent;

	struct BasePlayerPositionTableComponent;

	struct PlayerPositionTableComponent;

	struct BaseRoadRulesComponent;

	struct RoadRulesRoadSign;

	struct RoadRulesAnimator;

	struct RoadRulesIcon;

	struct RoadRulesTimer;

	struct BaseFriendsListEntry;

	struct BaseFriendsListComponent;

	struct JunctionInfoComponent;

	struct GuiAudioTriggerEvent;

	struct GuiAudioEvent;

	struct BaseEATraxInGameComponent;

	struct BaseOnlineInviteMessageComponent;

	struct GameModeToString;

	struct DriveThruMapPanel;

	struct ChallengeListComponent;

	struct IconComponent;

	struct AchievementsListComponent;

	struct OverlayComponent;

	struct ProfileHost;

	struct SatNavDistance;

	struct CarouselSliderBar;

	struct CarSelectOnlinePlayerListItem;

	struct CarSelectOnlinePlayerList;

	struct CarSelectOnlineCountdown;

	struct ProfileTaskResultHandler;

	struct OnlinePreEventMessages;

	struct MarkManSelectable;

	struct OnlineLoadingPlayer;

	struct ImageGalleryCarouselItem;

	struct ImageGalleryCarouselSelectable;

	struct ImageGallerySelectable;

	struct LeaderboardColumnComponent;

	struct LeaderboardTableComponent;

	struct RivalTableCell;

	struct RoadPanel;

	struct BrnShowtimeMessageComponentBase;

	struct ChallengeSelector;

	struct FreeburnChallengeStartComponent;

	struct OnlineTimeoutComponent;

	struct SingleMetric;

}

// CgsGuiShared.h:45
namespace BrnGui {
	struct OverheadSignScore;

	struct GuiEventTickerSetYPos;

	struct GuiEventTickerClearMessages;

	struct GuiEventTickerStatus;

	struct GuiEventCache;

	struct GuiEventStopMode;

	struct GuiGamePausedEvent;

	struct GuiEventRoadRuleBatchDataResponse;

	struct GuiEventRoadRuleTickerScoreRequest;

	struct GuiEventRoadRuleTickerScoreResponse;

	struct GuiEventRoadRuleNewRulers;

	struct GuiEventChangeDistrict;

	struct GuiEventSpecificPresetRaces;

	struct GuiEventSetActiveLandmarks;

	struct GuiEventUpdateEventStarts;

	struct GuiEventSatNavParameters;

	struct GuiRaceCarInfoEvent;

	struct GuiTrafficCarInfoEvent;

	struct GuiOverheadSignInfoEvent;

	struct GuiRemovedTrafficEvent;

	struct GuiEventShowHideBoostBar;

	struct GuiEventShowHideAboveCar;

	struct GuiEventSetBlackBars;

	struct GuiEventBoostInfo;

	struct GuiEventRacePositionInfo;

	struct GuiEventOnlineEventFinishingOrder;

	struct GuiEventJunctionInfo;

	struct GuiEventRouteInformation;

	struct GuiEventRenderProgressBar;

	struct GuiEventEventStateResponse;

	struct GuiEventFilterEventIcons;

	struct GuiEventSetInspectedEventIcon;

	struct GuiEventSetHoveredEventIcon;

	struct GuiEventMapCursorStatus;

	struct GuiEventMapIconStatus;

	struct CrashNavMapIcon;

	struct GuiEventRoadSignIconStatus;

	struct GuiEventNetworkPlayerImage;

	struct GuiEventNetworkLobbyPlayerList;

	struct GuiEventNetworkGameParams;

	struct GuiEventAudioTraxUpdate;

	struct GuiHitVehicleEvent;

	struct GuiEventRoadRageTimeExtended;

	struct GuiEventRivalryFullInfoResponse;

	struct GuiChallengeNotActiveStartEvent;

	struct GuiHudMessage;

	struct GuiOverlayFullInfoResponse;

	struct GuiPFXHookEnumeration;

	struct GuiNewBurnoutSkillzEvent;

	struct GuiShowtimeScoreUpdate;

	struct GuiOptionsBrightnessContrastPostFxControl;

	struct GuiChallengeStartEvent;

	struct GuiEventFburnChallengeEveryPlayerStatus;

	struct GuiChallengeTriggerResponse;

	struct GuiChallengeUpdateEvent;

	struct InGameMessagesQueue;

	struct MapTransform;

	struct RoadSignIconManager;

	struct SatNavMapIcon;

	struct GuiPlayerInfo;

	struct GuiEventSetTracker;

	struct GuiEventRenderSatNav;

	struct RoadSignList;

	struct DeltaInterpolator;

	struct Interpolator<float32_t>;

	struct BankingScore;

	struct PlayerGamerTagAboveCarInfo;

	struct GuiAudioTriggerEvent;

	struct FlaptIconComponent;

	struct BlackBarRenderer;

	void SetMaskRect(CgsGraphics::Im3dRenderBuffer *, TextureState *, const rw::math::vpu::Vector4 &);

	void SetMaskRect(CgsGraphics::Im2dRenderBuffer *, TextureState *, const rw::math::vpu::Vector4 &, const rw::math::vpu::Vector4 &);

}

// CgsGuiShared.h:45
namespace BrnGui {
	struct OverheadSignScore;

	struct GuiEventPrepareForModeStart;

	struct GuiEventTickerClearMessages;

	struct GuiCarSelectStartEvent;

	struct GuiCarSelectOnlineTimeLeftEvent;

	struct GuiEventOnlineReceiveFriendInfo;

	struct GuiEventScoreboardRequestIndexEvent;

	struct GuiEventScoreboardRequestVariationEvent;

	struct GuiEventScoreboardRequestTableEvent;

	struct GuiEventScoreboardResponseCategoryEvent;

	struct GuiEventScoreboardResponseIndexEvent;

	struct GuiEventScoreboardResponseVariationEvent;

	struct GuiEventScoreboardResponseTableEvent;

	struct GuiEventScoreboardRequestGamercardEvent;

	struct GuiEventCache;

	struct GuiRequestCarControlChangeEvent;

	struct GuiEventTriggerGetPlayerName;

	struct GuiEventRunFsm;

	struct GuiEventActivateCarSelect;

	struct GuiEventStopMode;

	struct GuiEventRoadRuleEnter;

	struct GuiEventRoadRuleUpdateTargetScores;

	struct GuiEventRoadRuleEnd;

	struct GuiEventRoadRuleBatchDataResponse;

	struct GuiEventChangeDistrict;

	struct GuiEventSpecificPresetRaces;

	struct GuiEventRequestSpecificPreSetRaces;

	struct GuiEventSetActiveLandmarks;

	struct GuiEventShowHideHud;

	struct GuiEventPreraceTrigger;

	struct GuiEventUpdateEventStarts;

	struct GuiEventSatNavParameters;

	struct GuiRaceCarInfoEvent;

	struct GuiTrafficCarInfoEvent;

	struct GuiOverheadSignInfoEvent;

	struct GuiEventRacePositionInfo;

	struct GuiEventOnlineStatsResponse;

	struct GuiEventOnlineEventFinishingOrder;

	struct GuiEventRouteInformation;

	struct GuiEventEventStateResponse;

	struct GuiEventSetInspectedEventIcon;

	struct GuiEventMapCursorStatus;

	struct RoadSignIcon;

	struct GuiEventFriendsListUtilShut;

	struct GuiEventNetworkLeftGame;

	struct GuiEventNetworkPostGameProcessingFinished;

	struct GuiEventNetworkLeavingGameFailed;

	struct GuiEventNetworkSettingsUpdate;

	struct GuiEventNetworkLobbyPlayerList;

	struct GuiEventNetworkHighlightedPlayer;

	struct GuiEventNetworkPlayerStats;

	struct GuiEventNetworkQuickMatch;

	struct GuiEventNetworkCustomMatchSearch;

	struct GuiEventNetworkCustomMatchResults;

	struct GuiEventNetworkCustomMatchJoin;

	struct GuiEventNetworkCreateGame;

	struct GuiEventNetworkGameParams;

	struct GuiAutosaveRequestEvent;

	struct GuiSaveLoadImageExportRequested;

	struct GuiSnapShotRequested;

	struct GuiEventAudioTraxUpdate;

	struct GuiEventAudioSettings;

	struct GuiEventControllerSettings;

	struct GuiEventGameOptionsSettings;

	struct GuiEventVoipSettings;

	struct GuiEventDirectorSettings;

	struct GuiEventDirectorOnlineLoadingStarted;

	struct GuiEventDirectorOnlineLoadingFinished;

	struct GuiCarSelectionRequest;

	struct GuiCarSelectionEvent;

	struct GuiChangeCarEvent;

	struct GuiEventRivalryFullInfoResponse;

	struct GuiNetworkPrepareGameEvent;

	struct GuiChallengeNotActiveStartEvent;

	struct GuiEventNetworkMarkedManLoadedEvent;

	struct GuiEventInviteFailed;

	struct GuiHudMessage;

	struct GuiOverlayRequest;

	struct GuiOverlayFullInfoResponse;

	struct GuiOverlayWaitFinishRequest;

	struct GuiNetworkCustomRouteCreated;

	struct GuiPFXHookEnumeration;

	struct GuiTelemetryEvent;

	struct GuiImageGalleryRequestEvent;

	struct GuiImageGalleryImageInfoEvent;

	struct GuiImageGalleryRequestCollectedCountEvent;

	struct GuiImageGalleryCollectedCountEvent;

	struct GuiImageGalleryRequestCollectedDataEvent;

	struct GuiImageGalleryCollectedDataEvent;

	struct GuiNewBurnoutSkillzEvent;

	struct GuiShowtimeScoreUpdate;

	struct GuiEventRequestTraining;

	struct GuiChallengeStartEvent;

	struct GuiEventFburnChallengeEveryPlayerStatus;

	struct GuiChallengeTriggerResponse;

	struct GuiChallengeUpdateEvent;

	struct GuiEventSetTracker;

	struct BrnFlaptComponent;

	struct InGameMessagesQueue;

	struct MapTransform;

	struct RoadSignIconManager;

	struct SatNavMapIcon;

	struct GuiPlayerInfo;

	struct BaseRoadRulesComponent;

	struct RoadRulesRoadSign;

	struct RoadRulesAnimator;

	struct RoadRulesIcon;

	struct RoadRulesTimer;

	struct BaseFriendsListComponent;

	struct TableDataSet;

	struct BaseOnlineInviteMessageComponent;

	struct ProfileHost;

	struct GuiAudioTriggerEvent;

	struct OnlinePlaying;

	struct OnlineFBurnQuickCustomCreate;

	struct ProfileTaskResultHandler;

}

// CgsGuiShared.h:45
namespace BrnGui {
	struct OverheadSignScore;

	struct GuiEventStopMode;

	struct GuiEventRoadRuleBatchDataResponse;

	struct GuiEventChangeDistrict;

	struct GuiEventSpecificPresetRaces;

	struct GuiEventSetActiveLandmarks;

	struct GuiEventUpdateEventStarts;

	struct GuiEventSatNavParameters;

	struct GuiRaceCarInfoEvent;

	struct GuiTrafficCarInfoEvent;

	struct GuiOverheadSignInfoEvent;

	struct GuiEventRacePositionInfo;

	struct GuiEventOnlineEventFinishingOrder;

	struct GuiEventRouteInformation;

	struct GuiEventEventStateResponse;

	struct GuiEventMapCursorStatus;

	struct RoadSignIcon;

	struct GuiEventNetworkLobbyPlayerList;

	struct GuiEventNetworkGameParams;

	struct GuiEventAudioTraxUpdate;

	struct GuiEventRivalryFullInfoResponse;

	struct GuiChallengeNotActiveStartEvent;

	struct GuiHudMessage;

	struct GuiOverlayFullInfoResponse;

	struct GuiPFXHookEnumeration;

	struct GuiNewBurnoutSkillzEvent;

	struct GuiShowtimeScoreUpdate;

	struct GuiChallengeStartEvent;

	struct GuiEventFburnChallengeEveryPlayerStatus;

	struct GuiChallengeTriggerResponse;

	struct GuiChallengeUpdateEvent;

	struct InGameMessagesQueue;

	struct RoadSignIconManager;

	struct SatNavMapIcon;

	struct GuiPlayerInfo;

	struct TableDataSet;

	struct MenuToggleGroup;

	struct ScrollableSelectionItem;

	struct IconComponent;

	struct PlayerStatsBar;

	struct ComplexBar;

	struct ScrollableSelection;

	struct SelectableGroup;

	struct ColourSelection;

	struct TextField;

	struct TextSelection;

	struct ToggleItem;

	struct Toggle;

	struct Ticker;

	struct ColourField;

	struct InterpolatorComponent;

	struct Table;

	struct ProgressBar;

	struct MenuComponent;

	struct HudBorder;

	struct ColourSelector;

	struct Carousel;

}

// CgsGuiShared.h:40
namespace CgsGui {
	struct GuiAccessPointers;

	struct GuiEventQueueBase<65536,16>;

	struct GuiStackEventQueue;

	struct sResourceTuple;

	struct GuiEvent<14>;

	struct GuiEventLoadNotification;

	struct GuiEvent<15>;

	struct GuiEventUnloadRequestNotification;

	struct GuiEvent<16>;

	struct GuiEventUnloadNotification;

	struct GuiEvent<39>;

	struct GuiEventLoadRequest;

	struct GuiEventQueueBase<16384,16>;

	struct GuiEventQueueBase<4096,16>;

	struct GuiEventQueueBase<32768,16>;

	struct ImRendererSet;

	struct ImageFileInfo;

	struct GuiEvent<1>;

	struct GuiEventStateChange;

	struct GuiEvent<4>;

	struct GuiEventActiveUserIndex;

	struct GuiEvent<7>;

	struct GuiEventControllerInputReleased;

	struct GuiEvent<6>;

	struct GuiEventControllerInputPressed;

	struct GuiEvent<26>;

	struct GuiEventTimeInfo;

	struct GuiEvent<27>;

	struct GuiEventSetSku;

	struct GuiEvent<28>;

	struct GuiEventSetLanguage;

	struct GuiEvent<29>;

	struct GuiEventSetLanguageNotification;

	struct GuiEvent<31>;

	struct GuiEventGetLanguage;

	struct GuiEvent<33>;

	struct GuiEventLoadingScreenState;

	struct GuiEvent<62>;

	struct GuiViewEventFontCharSpacing;

	struct GuiEvent<43>;

	struct GuiEventNetworkConnected;

	struct GuiEvent<51>;

	struct HudMessageParameter;

	struct GuiHudMessageData;

	struct GuiHudMessageResource;

	struct GuiPopupParameter;

	struct GuiPopup;

	struct GuiPopupResource;

	struct GuiKeyboard;

	struct GuiKeyboardListener;

	struct GuiEvent<21>;

	struct GuiEvent<22>;

	struct GuiEventSoundTrigger;

	struct KeyValue;

	struct AptComponentList;

	struct EventObserver;

	struct GuiEvent<18>;

	struct GuiEventPlayAptMovie;

	struct GuiEvent<23>;

	struct GuiEventPlayMusicOnMenuStream;

	struct StateInterface;

	struct GuiEvent<19>;

	struct GuiEvent<498>;

	struct GuiEvent<499>;

	struct GuiEvent<500>;

	struct GuiEvent<502>;

	struct GuiEvent<94>;

	struct GuiEvent<523>;

	struct GuiEvent<535>;

	struct GuiEvent<533>;

	struct GuiEvent<73>;

	struct GuiEvent<79>;

	struct GuiEvent<81>;

	struct GuiEvent<95>;

	struct GuiEvent<97>;

	struct GuiEvent<103>;

	struct GuiEvent<106>;

	struct GuiEvent<109>;

	struct GuiEvent<126>;

	struct GuiEvent<140>;

	struct GuiEvent<64>;

	struct GuiEvent<496>;

	struct GuiEvent<89>;

	struct GuiEvent<142>;

	struct GuiEvent<145>;

	struct GuiEvent<189>;

	struct GuiEvent<190>;

	struct GuiEvent<320>;

	struct GuiEvent<495>;

	struct GuiEvent<323>;

	struct GuiEvent<329>;

	struct GuiEvent<335>;

	struct GuiEvent<330>;

	struct GuiEvent<331>;

	struct GuiEvent<332>;

	struct GuiEvent<333>;

	struct GuiEvent<334>;

	struct GuiEvent<337>;

	struct GuiEvent<338>;

	struct GuiEvent<340>;

	struct GuiEvent<328>;

	struct GuiEvent<339>;

	struct GuiEvent<166>;

	struct GuiEvent<163>;

	struct GuiEvent<167>;

	struct GuiEvent<168>;

	struct GuiEvent<192>;

	struct GuiEvent<169>;

	struct GuiEvent<148>;

	struct GuiEvent<277>;

	struct GuiEvent<157>;

	struct GuiEvent<199>;

	struct GuiEvent<197>;

	struct GuiEvent<201>;

	struct GuiEvent<198>;

	struct GuiEvent<202>;

	struct GuiEvent<205>;

	struct GuiEvent<206>;

	struct GuiEvent<208>;

	struct GuiEvent<207>;

	struct GuiEvent<214>;

	struct GuiEvent<215>;

	struct GuiEvent<217>;

	struct GuiEvent<218>;

	struct GuiEvent<219>;

	struct GuiEvent<203>;

	struct GuiEvent<204>;

	struct GuiEvent<235>;

	struct GuiEvent<236>;

	struct GuiEvent<237>;

	struct GuiEvent<482>;

	struct GuiEvent<316>;

	struct GuiEvent<315>;

	struct GuiEvent<287>;

	struct GuiEvent<305>;

	struct GuiEvent<308>;

	struct GuiEvent<309>;

	struct GuiEvent<311>;

	struct GuiEvent<303>;

	struct GuiEvent<312>;

	struct GuiEvent<314>;

	struct GuiEvent<344>;

	struct GuiEvent<209>;

	struct GuiEvent<483>;

	struct GuiEvent<484>;

	struct GuiEvent<538>;

	struct GuiEvent<539>;

	struct GuiEvent<541>;

	struct GuiEvent<546>;

	struct GuiEvent<547>;

	struct GuiEvent<270>;

	struct GuiEvent<274>;

	struct GuiEvent<275>;

	struct GuiEvent<276>;

	struct GuiEvent<241>;

	struct GuiEvent<240>;

	struct GuiEvent<242>;

	struct GuiEvent<245>;

	struct GuiEvent<254>;

	struct GuiEvent<255>;

	struct GuiEvent<262>;

	struct GuiEvent<345>;

	struct GuiEvent<346>;

	struct GuiEvent<347>;

	struct GuiEvent<348>;

	struct GuiEvent<353>;

	struct GuiEvent<354>;

	struct GuiEvent<350>;

	struct GuiEvent<351>;

	struct GuiEvent<352>;

	struct GuiEvent<355>;

	struct GuiEvent<356>;

	struct GuiEvent<358>;

	struct GuiEvent<368>;

	struct GuiEvent<360>;

	struct GuiEvent<361>;

	struct GuiEvent<362>;

	struct GuiEvent<363>;

	struct GuiEvent<364>;

	struct GuiEvent<175>;

	struct GuiEvent<177>;

	struct GuiEvent<479>;

	struct GuiEvent<480>;

	struct GuiEvent<179>;

	struct GuiEvent<366>;

	struct GuiEvent<367>;

	struct GuiEvent<370>;

	struct GuiEvent<371>;

	struct GuiEvent<372>;

	struct GuiEvent<374>;

	struct GuiEvent<375>;

	struct GuiEvent<453>;

	struct GuiEvent<454>;

	struct GuiEvent<457>;

	struct GuiEvent<458>;

	struct GuiEvent<467>;

	struct GuiEvent<468>;

	struct GuiEvent<469>;

	struct GuiEvent<466>;

	struct GuiEvent<470>;

	struct GuiEvent<477>;

	struct GuiEvent<478>;

	struct GuiEvent<481>;

	struct GuiEvent<377>;

	struct GuiEvent<379>;

	struct GuiEvent<380>;

	struct GuiEvent<385>;

	struct GuiEvent<386>;

	struct GuiEvent<381>;

	struct GuiEvent<382>;

	struct GuiEvent<383>;

	struct GuiEvent<399>;

	struct GuiEvent<387>;

	struct GuiEvent<410>;

	struct GuiEvent<414>;

	struct GuiEvent<415>;

	struct GuiEvent<417>;

	struct GuiEvent<418>;

	struct GuiEvent<234>;

	struct GuiEvent<419>;

	struct GuiEvent<420>;

	struct GuiEvent<421>;

	struct GuiEvent<429>;

	struct GuiEvent<423>;

	struct GuiEvent<427>;

	struct GuiEvent<433>;

	struct GuiEvent<434>;

	struct GuiEvent<435>;

	struct GuiEvent<437>;

	struct GuiEvent<441>;

	struct GuiEvent<442>;

	struct GuiEvent<445>;

	struct GuiEvent<446>;

	struct GuiEvent<447>;

	struct GuiEvent<443>;

	struct GuiEvent<444>;

	struct GuiEvent<448>;

	struct GuiEvent<449>;

	struct GuiEvent<424>;

	struct GuiEvent<425>;

	struct GuiEvent<394>;

	struct GuiEvent<395>;

	struct GuiEvent<396>;

	struct GuiEvent<147>;

	struct GuiEvent<450>;

	struct GuiEvent<440>;

	struct GuiEvent<265>;

	struct GuiEvent<568>;

	struct GuiEvent<131>;

	struct GuiEvent<571>;

	struct GuiEvent<152>;

	struct GuiEvent<182>;

	struct GuiEvent<185>;

	struct GuiEvent<183>;

	struct GuiEvent<186>;

	struct GuiEvent<187>;

	struct GuiEvent<188>;

	struct GuiEvent<548>;

	struct GuiEvent<485>;

	struct GuiEvent<488>;

	struct GuiEvent<489>;

	struct GuiEvent<486>;

	struct GuiEvent<491>;

	struct GuiEvent<492>;

	struct GuiEvent<493>;

	struct GuiEvent<526>;

	struct GuiEvent<527>;

	struct GuiEvent<391>;

	struct GuiEvent<392>;

	struct GuiEvent<554>;

	struct GuiEvent<555>;

	struct GuiEvent<557>;

	struct GuiEvent<559>;

	struct GuiEvent<566>;

	struct GuiEvent<561>;

	struct GuiEvent<562>;

	struct GuiEvent<563>;

	struct GuiEvent<67>;

	struct GuiEvent<68>;

	struct FontCollection;

	struct AptRenderHandler;

	struct CustomRendererManager;

	struct GuiEventQueueBase<256,16>;

	struct GuiModuleConfig;

	struct GuiEvent<154>;

	struct GuiEvent<229>;

	struct GuiEvent<230>;

	struct GuiEvent<210>;

	struct GuiEvent<221>;

	struct OpaqueBuffer;

	struct SaveInfo;

	struct SaveLoadMetadata;

	struct AnimChannel;

	// Declaration
	struct Interpolator {
	public:
		Interpolator();

	}

	struct GuiEvent<149>;

	struct GuiEvent<428>;

	struct GuiEvent<452>;

	struct GuiEvent<490>;

	struct GuiEvent<286>;

	struct GuiEvent<289>;

	struct GuiEvent<224>;

	struct GuiEvent<225>;

	struct GuiEvent<228>;

	struct GuiEvent<501>;

	struct GuiEvent<487>;

	struct GuiEvent<226>;

	struct GuiEvent<227>;

	struct GuiEvent<90>;

	struct GuiEvent<349>;

	struct GuiEvent<66>;

	struct GuiEvent<69>;

	struct GuiEvent<41>;

	struct GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>;

	struct GuiOutViewState<CgsGui::GuiEventPlayAptMovie>;

	struct GuiEvent<40>;

	struct GuiEventWrapper<CgsGui::GuiEvent<19>,40>;

	struct GuiEventWrapper<BrnGui::GuiEventMapIconStatus,40>;

	struct GuiEventOut<BrnGui::GuiEventMapIconStatus>;

	struct GuiEventWrapper<BrnGui::GuiEventRoadSignIconStatus,40>;

	struct GuiEventOut<BrnGui::GuiEventRoadSignIconStatus>;

	struct GuiEventWrapper<BrnGui::GuiEventDrawEventIcons,41>;

	struct GuiOutViewState<BrnGui::GuiEventDrawEventIcons>;

	struct GuiEvent<42>;

	struct GuiEventWrapper<BrnGui::GuiEventDrawEventIcons,42>;

	struct GuiOutInternalEvent<BrnGui::GuiEventDrawEventIcons>;

	struct SaveLoadTaskResultHandler;

	// Declaration
	struct MessageDisplay {
		struct OptionHandler;

	}

	// CgsGuiShared.h:63
	const uint32_t KU_GUIUPDATEAPTVIEW_MAX_STR_CHAR = 12;

}

// CgsGuiShared.h:35
namespace CgsLanguage {
	struct Sku;

	struct LanguageManagerDebugComponent;

}

// CgsGuiShared.h:45
namespace BrnGui {
	struct BrnGuiKeyboard;

	struct PFXGroup;

	struct PFXHookNode;

	struct PFXHook;

	struct PFXHookBundle;

	struct MovieAllocator;

	struct GuiEventPlayVideo;

	struct GuiEventStopVideo;

	struct OverheadSignScore;

	struct GuiEventFinishedVideo;

	struct GuiEventTrafficPoolEmptied;

	struct GuiEventPrepareForModeStart;

	struct GuiEventTickerStatus;

	struct GuiEventTimeUp;

	struct GuiEventPlayerWrecked;

	struct GuiCarUnlockNewCarEvent;

	struct GuiEnteredJunkyard;

	struct GuiCarSelectStartEvent;

	struct GuiEventFriendListShowing;

	struct GuiSetEasyDriveNotAllowedEvent;

	struct GuiEventOnlineReceiveFriendInfo;

	struct GuiEventBuddyNotification;

	struct GuiEventOnlineTimeout;

	struct GuiEventPrepareForInvite;

	struct GuiEventKeyboardResponse;

	struct GuiEventCache;

	struct GuiEventSystemUserProfile;

	struct GuiEventRunFsm;

	struct GuiEventUpdateHud;

	struct GuiEventActivateCarSelect;

	struct GuiEventStopMode;

	struct GuiGamePausedEvent;

	struct GuiMugshotControlEvent;

	struct GuiEventRoadRuleEnter;

	struct GuiEventRoadRuleUpdateTargetScores;

	struct GuiEventRoadRuleBegin;

	struct GuiEventRoadRuleEnd;

	struct GuiEventRoadRuleFail;

	struct GuiEventRoadRuleUpdate;

	struct GuiEventRoadRuleNewHighScore;

	struct GuiEventRoadRuleBatchDataResponse;

	struct GuiEventRoadRuleChangeMode;

	struct GuiEventPlayerReachedRoadRageTarget;

	struct GuiEventEnterLandmarkArea;

	struct GuiEventChangeDistrict;

	struct GuiEventSetAvailablePresetRaces;

	struct GuiEventSpecificPresetRaces;

	struct GuiEventSetActiveLandmarks;

	struct GuiEventCarJoinedEvent;

	struct GuiEventNetworkShowFreeBurnIntro;

	struct GuiEventHideDriveThru;

	struct GuiEventUpdateEventStarts;

	struct GuiEventSatNavParameters;

	struct GuiRaceCarInfoEvent;

	struct GuiTrafficCarInfoEvent;

	struct GuiOverheadSignInfoEvent;

	struct GuiRemovedTrafficEvent;

	struct GuiEventJumpStarted;

	struct GuiEventStuntInfo;

	struct GuiEventStuntAreaComplete;

	struct GuiEventStuntAllComplete;

	struct GuiEventSetBlackBars;

	struct GuiEventMiniMapSwitch;

	struct GuiEventBoostInfo;

	struct GuiEventRacePositionInfo;

	struct GuiEventRaceDistanceRemaining;

	struct GuiEventRaceDistanceToCheckpoint;

	struct GuiEventCurrentStatus;

	struct GuiEventOnlineEventFinishingOrder;

	struct GuiEventMedalUpdate;

	struct GuiEventGameCompletedOnline;

	struct GuiEventJunctionInfo;

	struct GuiEventAllJunctionsDiscoveredOfType;

	struct GuiEventAllOfTypeComplete;

	struct GuiEventDriveThruDiscovered;

	struct GuiEventFailedToStartEvent;

	struct GuiEventRoadRagePlayerDamage;

	struct GuiEventRouteInformation;

	struct GuiEventEnableAutoSave;

	struct GuiEventEventStateResponse;

	struct GuiEventMapIconStatus;

	struct GuiEventRoadSignIconStatus;

	struct GuiEventNetworkConnect;

	struct GuiEventNetworkPlayerJoinedLobby;

	struct GuiEventNetworkPlayerLeftLobby;

	struct GuiEventNetworkSettingsUpdate;

	struct GuiEventNetworkLobbyPlayerList;

	struct GuiEventNetworkPlayerStatus;

	struct GuiEventNetworkPlayerStats;

	struct GuiEventNetworkCreateGame;

	struct GuiEventNetworkGameParams;

	struct GuiEventProgressionProfileData;

	struct GuiEventLiveRevengeProfileData;

	struct GuiEventProgressionProfileLoaded;

	struct GuiEventLiveRevengeProfileLoaded;

	struct GuiEventSaveImageFileAndAutosave;

	struct GuiEventLoadImageFiles;

	struct GuiAutosaveShowIcon;

	struct GuiAutosaveRequestEvent;

	struct GuiEventAutosaveCompleted;

	struct GuiEventImageFilesLoaded;

	struct GuiSaveLoadImageExportRequested;

	struct GuiTakedownEvent;

	struct GuiShutdownEvent;

	struct GuiImpactEvent;

	struct GuiStuntEvent;

	struct GuiSignatureStuntEvent;

	struct GuiLiveRevengeUpdateEvent;

	struct GuiDirtyTrickNewEvent;

	struct GuiDirtyTrickTriggerEvent;

	struct GuiTookLeadEvent;

	struct GuiTookLastEvent;

	struct GuiDirtyTrickEndedEvent;

	struct GuiOvertakeEvent;

	struct GuiFinishRaceEvent;

	struct GuiEventTrophyCarUnlock;

	struct GuiPlayerRaceCarIdEvent;

	struct GuiPlayerInShortcutEvent;

	struct GuiEventAudioTraxUpdate;

	struct GuiEventAudioTraxLastPlayedIndexes;

	struct GuiEventAudioSettings;

	struct GuiEventControllerSettings;

	struct GuiEventGameOptionsSettings;

	struct GuiEventVoipSettings;

	struct GuiEATraxChyronActive;

	struct GuiEventDirectorSettings;

	struct GuiNetworkPlayerCrashingEvent;

	struct GuiNetworkPlayerBattlingEvent;

	struct GuiNetworkPlayerOnTailEvent;

	struct GuiOffenceShortcutEvent;

	struct GuiNearMissEvent;

	struct GuiDriftingEvent;

	struct GuiCompletedStuntEvent;

	struct GuiInProgressStuntEvent;

	struct GuiSpinningEvent;

	struct GuiInAirEvent;

	struct GuiOncomingEvent;

	struct GuiPowerParkResult;

	struct GuiShowtimeTriggered;

	struct GuiChangeCarEvent;

	struct GuiInEventDistanceToFinish;

	struct GuiInEventLeaderSplit;

	struct GuiInEventRivalProgress;

	struct GuiInEventFinisher;

	struct GuiGameModeStarted;

	struct GuiEventScoreUpdate;

	struct GuiRaceCheckpointReached;

	struct GuiRoadRageScoreUpdate;

	struct GuiCrashScoreUpdate;

	struct GuiAttackScoreUpdate;

	struct GuiPursuitScoreUpdate;

	struct GuiEventRankProgressResponse;

	struct GuiRivalIsFleeing;

	struct GuiEventRivalryFullInfoResponse;

	struct GuiBlueTeamIsEscapingEvent;

	struct GuiBlueTeamIsBehindYouEvent;

	struct GuiPlayerEliminatedEvent;

	struct GuiLocalPlayerEliminatedEvent;

	struct GuiLastBlueTeamMemberEvent;

	struct GuiLeaderPassedMileBoundaryEvent;

	struct GuiLeaderPassedKMBoundaryEvent;

	struct GuiTraitorousTakedownEvent;

	struct GuiBHRCheckpointReachedEvent;

	struct GuiHUDMessageStuntPerformed;

	struct GuiHUDMessageComboPerformed;

	struct GuiHUDMessageShowtimeMultiplier;

	struct GuiHUDMessageSignSmashed;

	struct GuiHUDMessageCrushCombo;

	struct GuiGenericHUDMessage;

	struct GuiHUDMessageBHRRunnerCrashed;

	struct GuiOnlineTeamChangeEvent;

	struct GuiNetworkRemotePlayerDisconnectEvent;

	struct GuiChallengeNotActiveStartEvent;

	struct GuiEventInviteFailed;

	struct GuiAchievementsEarned;

	struct GuiHudMessage;

	struct GuiOverlayRequest;

	struct GuiOverlayFullInfoResponse;

	struct GuiOverlayInternalRequestEvent;

	struct GuiOverlayWaitFinishRequest;

	struct GuiOverlayShowingNotification;

	struct GuiOnlineCarStatusEvent;

	struct GuiPFXHookEvent;

	struct GuiPFXStartBackgroundHookEvent;

	struct GuiPFXStopBackgroundHookEvent;

	struct GuiPFXHookStopEvent;

	struct GuiPFXHookEnumeration;

	struct GuiEATraxNewTrackEvent;

	struct GuiClassicalChyronEvent;

	struct GuiNewBurnoutSkillzEvent;

	struct GuiShowtimeScoreUpdate;

	struct GuiShowtimeModeSwitch;

	struct GuiEventCamPicCompressed;

	struct GuiEventCamStatus;

	struct GuiEventRequestTraining;

	struct GuiChallengeStartEvent;

	struct GuiEventFburnChallengeEveryPlayerStatus;

	struct GuiChallengeTriggerResponse;

	struct GuiChallengeUpdateEvent;

	struct GuiChallengeEndEvent;

	struct GuiSaveLoadOperationStarted;

	struct GuiSaveLoadOperationCompleted;

	struct BrnFlaptComponent;

	struct InGameMessagesQueue;

	struct MapTransform;

	struct RoadSignIconManager;

	struct SatNavMapIcon;

	struct GuiPlayerInfo;

	struct GuiEventSetTracker;

	struct GuiEventForceUpdateTracker;

	struct NorthIndicatorComponent;

	struct GuiEventRenderSatNav;

	struct BaseBoostMessageItemComponent;

	struct BaseBoostMessageSlotComponent;

	struct BoostMessageSlot;

	struct BaseBoostMessageManagerComponent;

	// Declaration
	struct FlaptIconComponent {
	public:
		FlaptIconComponent();

	}

	struct FlaptInterpolatorComponent;

	struct EventInfoComponent;

	struct BasePlayerPositionSingleComponent;

	struct PlayerPositionSingleData;

	struct PlayerPositionSingleComponent;

	struct BasePlayerPositionTableComponent;

	struct PlayerPositionTableComponent;

	struct BaseRoadRulesComponent;

	struct RoadRulesRoadSign;

	struct RoadRulesAnimator;

	struct RoadRulesIcon;

	struct RoadRulesTimer;

	struct BaseFriendsListEntry;

	struct BaseFriendsListComponent;

	struct MugshotSaveBuffer;

	struct JunctionInfoComponent;

	// Declaration
	struct DriveThruMapPanel {
	public:
		DriveThruMapPanel();

	}

	struct CrashNavMapSoundData;

	struct IconComponent;

	// Declaration
	struct CrashNavEnterOnlinePS3 {
	public:
		CrashNavEnterOnlinePS3();

	}

	struct GuiOverlaysDirector;

	struct ColourCubeInfo;

	struct PfxContainer<BrnEffects::TintData>;

	struct PfxContainer<BrnEffects::BloomData>;

	struct PfxContainer<BrnEffects::VignetteData>;

	struct PfxContainer<BrnEffects::BlurData>;

	struct PfxContainer<BrnEffects::DepthOfFieldData>;

	struct PfxContainer<BrnEffects::TintData2d>;

	struct PFXHookNodeBlender;

	struct BaseEATraxInGameComponent;

	struct BaseOnlineInviteMessageComponent;

	struct BrnSaveIconComponent;

	struct BrnShowtimeMessageComponent;

	struct GuiCacheDebugComponent;

	struct ProfileHost;

	struct GuiAudioTriggerEvent;

	struct GuiPerfmons;

	struct KeyboardHost;

	struct BrnHudFlow;

	struct BrnScreenFlow;

	struct BrnOverlayFlow;

	// Declaration
	struct NullState {
	public:
		NullState();

	}

	// Declaration
	struct CrashNavEnterOnlineFull {
	public:
		CrashNavEnterOnlineFull();

	}

	// Declaration
	struct CrashNavEnterOnlineNoTitle {
	public:
		CrashNavEnterOnlineNoTitle();

	}

	// Declaration
	struct OnlineFBurnQuickCustomCreate {
	public:
		OnlineFBurnQuickCustomCreate();

	}

	struct GenericForwardState;

	struct GuiHudMessagesDebugComponent;

	struct SatNavDebugComponent;

	struct ProfileMessageDisplay;

	struct ProfileTaskResultHandler;

	struct AnimationComponent;

	struct ColourSelectionItem;

	struct TextSelectionItem;

	struct FriendsListChangeIconComponent;

	struct GuiCustRendererDebugComponent;

	struct SatNavStatic;

	// Declaration
	struct FreeburnChallengeStartComponent {
	public:
		FreeburnChallengeStartComponent();

	}

	// Declaration
	struct CrashNavMapEventKeyboardListener {
	public:
		CrashNavMapEventKeyboardListener();

	}

	// Declaration
	struct ImageGalleryCarouselSelectable {
	public:
		ImageGalleryCarouselSelectable();

	}

	// Declaration
	struct BaseWaitOverlayState {
	public:
		BaseWaitOverlayState();

	}

	// Declaration
	struct BaseOkOverlayState {
	public:
		BaseOkOverlayState();

	}

	// Declaration
	struct BaseOkCancelOverlayState {
	public:
		BaseOkCancelOverlayState();

	}

}

// CgsGuiShared.h:29
namespace BrnFlapt {
	// Declaration
	struct FlaptFileResourceType {
	public:
		FlaptFileResourceType();

	}

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsGuiShared.h:258
	enum eGuiCameraType {
		E_GUICAMERA_ORTHO = 0,
		E_GUICAMERA_PERSPECTIVE = 1,
		E_GUICAMERA_COUNT = 2,
	}

	// CgsGuiShared.h:63
	const uint32_t KU_GUIUPDATEAPTVIEW_MAX_STR_CHAR = 12;

}

// CgsGuiShared.h:29
namespace BrnFlapt {
	struct FileRef;

	struct FlaptManager;

}

// CgsGuiShared.h:40
namespace CgsGui {
	struct GuiEvent<14>;

	struct GuiEventLoadNotification;

	struct GuiEvent<15>;

	struct GuiEventUnloadRequestNotification;

	struct GuiEvent<16>;

	struct GuiEventUnloadNotification;

	struct GuiEvent<39>;

	struct GuiEventLoadRequest;

	struct GuiEventQueueBase<16384,16>;

	struct GuiEventQueueBase<4096,16>;

	struct GuiEventQueueBase<32768,16>;

	struct GuiModule;

	struct GuiEvent<27>;

	struct GuiEventSetSku;

	struct GuiEvent<29>;

	struct GuiEventSetLanguageNotification;

	struct KeyValue;

	struct AptComponentList;

	struct GuiEventQueueBase<256,16>;

	// CgsGuiShared.h:63
	const uint32_t KU_GUIUPDATEAPTVIEW_MAX_STR_CHAR = 12;

}

// CgsGuiShared.h:45
namespace BrnGui {
}

// CgsOpaqueBuffer.h:30
namespace CgsGui {
	// CgsGuiShared.h:63
	const uint32_t KU_GUIUPDATEAPTVIEW_MAX_STR_CHAR = 12;

}

