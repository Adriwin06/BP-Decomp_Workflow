// BrnGuiEventTypes.h:28
namespace BrnGui {
	struct GuiPFXHookEvent;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	struct OverheadSignScore;

	struct GuiEventOnlineReceiveFriendInfo;

	struct GuiEventStopMode;

	struct GuiEventRoadRuleEnter;

	struct GuiEventRoadRuleUpdateTargetScores;

	struct GuiEventRoadRuleEnd;

	struct GuiEventRoadRuleBatchDataResponse;

	struct GuiEventChangeDistrict;

	struct GuiEventSpecificPresetRaces;

	struct GuiEventSetActiveLandmarks;

	struct GuiEventUpdateEventStarts;

	struct GuiEventSatNavParameters;

	struct GuiRaceCarInfoEvent;

	struct GuiTrafficCarInfoEvent;

	struct GuiOverheadSignInfoEvent;

	struct GuiRemovedTrafficEvent;

	struct GuiEventRacePositionInfo;

	struct GuiEventOnlineEventFinishingOrder;

	struct GuiEventRouteInformation;

	struct GuiEventEventStateResponse;

	struct RoadSignIcon;

	struct GuiEventNetworkConnect;

	struct GuiEventNetworkLobbyPlayerList;

	struct GuiEventNetworkCreateGame;

	struct GuiEventNetworkGameParams;

	struct GuiEventAudioTraxUpdate;

	struct GuiEventRivalryFullInfoResponse;

	struct GuiChallengeNotActiveStartEvent;

	struct GuiHudMessage;

	struct GuiOverlayFullInfoResponse;

	struct GuiPFXHookEvent;

	struct GuiPFXHookEnumeration;

	struct GuiNewBurnoutSkillzEvent;

	struct GuiShowtimeScoreUpdate;

	struct GuiChallengeStartEvent;

	struct GuiEventFburnChallengeEveryPlayerStatus;

	struct GuiChallengeTriggerResponse;

	struct GuiChallengeUpdateEvent;

	struct BrnFlaptComponent;

	struct InGameMessagesQueue;

	struct RoadSignIconManager;

	struct SatNavMapIcon;

	struct GuiPlayerInfo;

	struct BaseRoadRulesComponent;

	struct RoadRulesRoadSign;

	struct RoadRulesAnimator;

	struct RoadRulesIcon;

	struct RoadRulesTimer;

	struct BaseFriendsListComponent;

	struct BaseOnlineInviteMessageComponent;

	struct ProfileHost;

	struct ProfileTaskResultHandler;

}

// BrnGuiEventTypes.h:28
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

	struct GuiRemovedTrafficEvent;

	struct GuiEventRacePositionInfo;

	struct GuiEventOnlineEventFinishingOrder;

	struct GuiEventRouteInformation;

	struct GuiEventEventStateResponse;

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

	struct RoadSignIconManager;

	struct SatNavMapIcon;

	struct InGameMessagesQueue;

	struct GuiPlayerInfo;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	struct GuiRemovedTrafficEvent;

	struct GuiEventUpdateDirtyTrickCountdown;

	struct GuiShowtimeBouncePrompt;

	struct GuiShowtimeModeSwitch;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	struct RivalPanelData;

	struct OverheadSignScore;

	struct GuiEventTrafficPoolEmptied;

	struct GuiEventPrepareForModeStart;

	struct GuiEventTickerClearMessages;

	struct GuiEventToggleChangeCarMessage;

	struct GuiEventCanSkipCrash;

	struct GuiEventTimeUp;

	struct GuiEventCantPaintCar;

	struct GuiEventMustFixCarFirst;

	struct GuiEventSuperJumpFailed;

	struct GuiEventPlayerWrecked;

	struct GuiCarUnlockStartEvent;

	struct GuiCarUnlockNewCarEvent;

	struct GuiRequestCarUnlockEvent;

	struct GuiEnteredJunkyard;

	struct GuiCarSelectStartEvent;

	struct GuiCarSelectAbortEvent;

	struct GuiCarSelectOnlineTimeLeftEvent;

	struct GuiEventFriendListShowing;

	struct GuiSetEasyDriveNotAllowedEvent;

	struct GuiEventOnlineShowProfile;

	struct GuiEventOnlineNumFriendsCount;

	struct GuiEventOnlineReceiveFriendInfo;

	struct GuiEventBuddyNotification;

	struct GuiEventOnlineTimeout;

	struct GuiEventScoreboardRequestIndexEvent;

	struct GuiEventScoreboardRequestVariationEvent;

	struct GuiEventScoreboardRequestTableEvent;

	struct GuiEventScoreboardResponseCategoryEvent;

	struct GuiEventScoreboardResponseIndexEvent;

	struct GuiEventScoreboardResponseVariationEvent;

	struct GuiEventScoreboardResponseTableEvent;

	struct GuiEventScoreboardRequestGamercardEvent;

	struct GuiEventPrepareForInvite;

	struct GuiEventInviteComplete;

	struct GuiEventSetPlayer0ControllerPort;

	struct GuiRequestCarControlChangeEvent;

	struct GuiEventRunFsm;

	struct GuiEventUpdateHud;

	struct GuiEventActivateCarSelect;

	struct GuiEventFinishedModeResults;

	struct GuiEventStopMode;

	struct GuiGamePausedEvent;

	struct GuiMugshotControlEvent;

	struct GuiEventRoadRuleModeRequest;

	struct GuiEventRoadRuleEnter;

	struct GuiEventRoadRuleUpdateTargetScores;

	struct GuiEventRoadRuleBegin;

	struct GuiEventRoadRuleEnd;

	struct GuiEventRoadRuleFail;

	struct GuiEventRoadRuleUpdate;

	struct GuiEventRoadRuleLeave;

	struct GuiEventRoadRuleNewHighScore;

	struct GuiEventRoadRuleDataRequest;

	struct GuiEventRoadRuleBatchDataResponse;

	struct GuiEventRoadRuleTickerScoreRequest;

	struct GuiEventRoadRuleTickerScoreResponse;

	struct GuiEventRoadRuleNewRulers;

	struct GuiEventRoadRuleChangeMode;

	struct GuiCrashComboEvent;

	struct GuiEventPlayerReachedRoadRageTarget;

	struct GuiEventEnterLandmarkArea;

	struct GuiEventChangeDistrict;

	struct GuiEventSetAvailablePresetRaces;

	struct GuiEventSpecificPresetRaces;

	struct GuiEventRequestDistrict;

	struct GuiEventReturnDistrict;

	struct GuiEventRequestLandmarkRaceData;

	struct GuiEventRequestSpecificPreSetRaces;

	struct GuiEventSetActiveLandmarks;

	struct GuiEventCustomeEventCreate;

	struct GuiEventCustomeEventDelete;

	struct GuiEventAcceptEventStart;

	struct GuiEventTriggerOnlinePostEvent;

	struct GuiEventShowHideHud;

	struct GuiEventCarJoinedEvent;

	struct GuiEventNetworkShowFreeBurnIntro;

	struct GuiEventPreraceTrigger;

	struct GuiEventHideDriveThru;

	struct GuiEventUpdateEventStarts;

	struct GuiEventSatNavParameters;

	struct GuiRaceCarInfoEvent;

	struct GuiTrafficCarInfoEvent;

	struct GuiOverheadSignInfoEvent;

	struct GuiRemovedTrafficEvent;

	struct GuiEventJumpStarted;

	struct GuiEventBoostBarStuntInfo;

	struct GuiEventStuntInfo;

	struct GuiEventStuntAreaComplete;

	struct GuiEventStuntAllComplete;

	struct GuiEventSetBlackBars;

	struct GuiEventTogglePictureParadise;

	struct GuiEventMiniMapSwitch;

	struct GuiEventBoostInfo;

	struct GuiEventRacePositionInfo;

	struct GuiEventRaceDistanceRemaining;

	struct GuiEventRaceDistanceToCheckpoint;

	struct GuiEventCurrentStatus;

	struct GuiEventOnlineEventFinishingOrder;

	struct GuiEventPostEventRankUpSequenceStart;

	struct GuiEventMedalUpdate;

	struct GuiEventGameCompleted;

	struct GuiEventGameCompletedOnline;

	struct GuiEventJunctionInfo;

	struct GuiEventAllJunctionsDiscoveredOfType;

	struct GuiEventAllOfTypeComplete;

	struct GuiEventAllOfRivalsShutdown;

	struct GuiEventDriveThruDiscovered;

	struct GuiEventFailedToStartEvent;

	struct GuiEventRoadRagePlayerDamage;

	struct GuiEventRouteInformation;

	struct GuiEventRenderProgressBar;

	struct GuiEventEventStateResponse;

	struct RoadSignIcon;

	struct GuiEventNetworkConnect;

	struct GuiEventNetworkLeftGame;

	struct GuiEventNetworkPostGameProcessingFinished;

	struct GuiEventNetworkPlayerJoinedLobby;

	struct GuiEventNetworkPlayerLeftLobby;

	struct GuiEventNetworkSettingsUpdate;

	struct GuiEventNetworkPlayerImage;

	struct GuiEventNetworkLobbyPlayerList;

	struct GuiEventNetworkPlayerStatus;

	struct GuiEventNetworkCreateGame;

	struct GuiEventNetworkGameParams;

	struct GuiEventNetworkVehicleListRequest;

	struct GuiEventProgressionProfileData;

	struct GuiEventLiveRevengeProfileData;

	struct GuiEventProgressionProfileLoaded;

	struct GuiEventSaveImageFileAndAutosave;

	struct GuiEventLoadImageFiles;

	struct GuiAutosaveRequestEvent;

	struct GuiEventAutosaveCompleted;

	struct GuiEventImageFilesLoaded;

	struct GuiSnapShotRequested;

	struct GuiTakedownEvent;

	struct GuiSoftTakedownEvent;

	struct GuiShutdownEvent;

	struct GuiShutdownFinishedEvent;

	struct GuiImpactEvent;

	struct GuiStuntEvent;

	struct GuiSignatureStuntEvent;

	struct GuiLiveRevengeUpdateEvent;

	struct GuiDirtyTrickNewEvent;

	struct GuiDirtyTrickTriggerEvent;

	struct GuiTookLeadEvent;

	struct GuiTookLastEvent;

	struct GuiDirtyTrickEndedEvent;

	struct GuiPaybackReceivedEvent;

	struct GuiOvertakeEvent;

	struct GuiFinishRaceEvent;

	struct GuiEventTrophyCarUnlock;

	struct GuiPlayerRaceCarIdEvent;

	struct GuiPlayerDrivableFromCrash;

	struct GuiPlayerInShortcutEvent;

	struct GuiEventAudioTraxUpdate;

	struct GuiEventControllerSettings;

	struct GuiEventGameOptionsSettings;

	struct GuiEventVoipSettings;

	struct GuiEvent100PerCentComplete;

	struct GuiEventCarbonCarSequence;

	struct GuiEventDirectorSettings;

	struct GuiNetworkPlayerCrashingEvent;

	struct GuiNetworkPlayerBattlingEvent;

	struct GuiNetworkPlayerOnTailEvent;

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

	struct GuiAftertouchEvent;

	struct GuiShowtimeJustBounced;

	struct GuiPowerParkResult;

	struct GuiShowtimeTriggered;

	struct GuiLeaptVehicleEvent;

	struct GuiHitVehicleEvent;

	struct GuiPlayerInfoResponse;

	struct GuiCarSelectionRequest;

	struct GuiCarUnlockedLiveryRequest;

	struct GuiCarSelectionEvent;

	struct GuiCarUnlockedLiveryEvent;

	struct GuiChangeCarEvent;

	struct GuiCarUnlockEvent;

	struct GuiChangePlayerCarColourEvent;

	struct GuiPlayerCarColourRequest;

	struct GuiPlayerCarColourResponse;

	struct GuiCarSelectWheelRequest;

	struct GuiInEventDistanceToFinish;

	struct GuiInEventLeaderSplit;

	struct GuiInEventNeckAndNeck;

	struct GuiInEventRivalProgress;

	struct GuiInEventFinisher;

	struct GuiGameModeStarted;

	struct GuiEventScoreUpdate;

	struct GuiRaceCheckpointReached;

	struct GuiRoadRageScoreUpdate;

	struct GuiEventRoadRageTimeExtended;

	struct GuiCrashScoreUpdate;

	struct GuiAttackScoreUpdate;

	struct GuiPursuitScoreUpdate;

	struct GuiEventStatsResponse;

	struct GuiEventRankProgressResponse;

	struct GuiRivalIsFleeing;

	struct GuiEventRivalryFullInfoResponse;

	struct GuiEventRivalInfoRequest;

	struct GuiEventRivalInfoResponse;

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

	struct GuiHUDMessageStuntTimeUp;

	struct GuiHUDMessageShowtimeMultiplier;

	struct GuiHUDMessageSignSmashed;

	struct GuiHUDMessageCrushCombo;

	struct GuiGenericHUDMessage;

	struct GuiHUDMessageBHRRunnerCrashed;

	struct GuiOnlineTeamChangeEvent;

	struct GuiNetworkRemotePlayerDisconnectEvent;

	struct GuiChallengeNotActiveStartEvent;

	struct GuiEventShowFreeburnChallenge;

	struct GuiEventInviteFailed;

	struct GuiAchievementsEarned;

	struct GuiHudMessage;

	struct GuiOverlayRequest;

	struct GuiOverlayFullInfoResponse;

	struct GuiOverlayWaitFinishRequest;

	struct GuiNetworkCustomRouteCreated;

	struct GuiCarSelectReadyToExitEvent;

	struct GuiOnlineCarStatusEvent;

	struct GuiCarSelectionChangedDropIn;

	struct GuiCarSelectionChangedOnline;

	struct GuiPFXHookEvent;

	struct GuiPFXStartBackgroundHookEvent;

	struct GuiPFXStopBackgroundHookEvent;

	struct GuiPFXHookStopEvent;

	struct GuiPFXHookEnumeration;

	struct GuiTelemetryEvent;

	struct GuiImageGalleryRequestEvent;

	struct GuiImageGalleryImageInfoEvent;

	struct GuiImageGalleryRequestCollectedCountEvent;

	struct GuiImageGalleryCollectedCountEvent;

	struct GuiImageGalleryRequestCollectedDataEvent;

	struct GuiImageGalleryCollectedDataEvent;

	struct GuiReplayStatusEvent;

	struct GuiReplaySetModeEvent;

	struct GuiNewBurnoutSkillzEvent;

	struct GuiShowtimeScoreUpdate;

	struct GuiShowtimeModeSwitch;

	struct GuiOptionsBrightnessContrast;

	struct GuiOptionsBrightnessContrastPostFxControl;

	struct GuiEventOnlineAccountSettings;

	struct GuiEventOnlineAccountUpdate;

	struct GuiEventRequestCompressedCamPic;

	struct GuiEventCamPicCompressed;

	struct GuiEventRequestTraining;

	struct GuiChallengeStartEvent;

	struct GuiEventFburnChallengeEveryPlayerStatus;

	struct GuiChallengeTriggerResponse;

	struct GuiChallengeUpdateEvent;

	struct GuiChallengeEndEvent;

	struct GuiAudioEventResults;

	struct GuiEventSetTracker;

	struct BrnFlaptComponent;

	struct InGameMessagesQueue;

	struct RoadSignIconManager;

	struct SatNavMapIcon;

	struct GuiPlayerInfo;

	struct BaseRoadRulesComponent;

	struct RoadRulesRoadSign;

	struct RoadRulesAnimator;

	struct RoadRulesIcon;

	struct RoadRulesTimer;

	struct BaseFriendsListComponent;

	struct BaseOnlineInviteMessageComponent;

	struct ProfileHost;

	struct ProfileTaskResultHandler;

	struct BrnScreenFlow;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	struct MovieAllocator;

	struct GuiEventPlayVideo;

	struct GuiEventStopVideo;

	struct OverheadSignScore;

	struct GuiEventPreloadedResourcesLoaded;

	struct GuiEventTickerClearMessages;

	struct GuiEventPlayerWrecked;

	struct GuiEventFriendListShowing;

	struct GuiSetEasyDriveNotAllowedEvent;

	struct GuiEventOnlineNumFriendsCount;

	struct GuiEventOnlineReceiveFriendInfo;

	struct GuiEventOnlineTimeout;

	struct GuiEventCache;

	struct GuiEventTriggerGetPlayerName;

	struct GuiEventStopMode;

	struct GuiMugshotControlEvent;

	struct GuiEventRoadRuleModeRequest;

	struct GuiEventRoadRuleEnter;

	struct GuiEventRoadRuleUpdateTargetScores;

	struct GuiEventRoadRuleBegin;

	struct GuiEventRoadRuleEnd;

	struct GuiEventRoadRuleFail;

	struct GuiEventRoadRuleUpdate;

	struct GuiEventRoadRuleLeave;

	struct GuiEventRoadRuleNewHighScore;

	struct GuiEventRoadRuleDataRequest;

	struct GuiEventRoadRuleBatchDataResponse;

	struct GuiEventRoadRuleChangeMode;

	struct GuiEventPlayerReachedRoadRageTarget;

	struct GuiEventChangeDistrict;

	struct GuiEventSpecificPresetRaces;

	struct GuiEventSetActiveLandmarks;

	struct GuiEventShowHideHud;

	struct GuiEventCarJoinedEvent;

	struct GuiEventUpdateEventStarts;

	struct GuiEventSatNavParameters;

	struct GuiRaceCarInfoEvent;

	struct GuiTrafficCarInfoEvent;

	struct GuiOverheadSignInfoEvent;

	struct GuiRemovedTrafficEvent;

	struct GuiEventShowHideBoostBar;

	struct GuiEventShowHideAboveCar;

	struct GuiEventJumpStarted;

	struct GuiEventStuntInfo;

	struct GuiEventStuntAreaComplete;

	struct GuiEventStuntAllComplete;

	struct GuiEventSetBlackBars;

	struct GuiEventTogglePictureParadise;

	struct GuiEventMiniMapSwitch;

	struct GuiEventBoostInfo;

	struct GuiEventRacePositionInfo;

	struct GuiEventRaceDistanceRemaining;

	struct GuiEventOnlineEventFinishingOrder;

	struct GuiEventGameCompleted;

	struct GuiEventJunctionInfo;

	struct GuiEventDriveThruDiscovered;

	struct GuiEventFailedToStartEvent;

	struct GuiEventRoadRagePlayerDamage;

	struct GuiEventRouteInformation;

	struct GuiEventEventStateRequest;

	struct GuiEventEventStateResponse;

	struct RoadSignIcon;

	struct GuiEventNetworkConnect;

	struct GuiEventNetworkPlayerJoinedLobby;

	struct GuiEventNetworkPlayerLeftLobby;

	struct GuiEventNetworkLobbyPlayerList;

	struct GuiEventNetworkCreateGame;

	struct GuiEventNetworkGameParams;

	struct GuiEventProgressionProfileData;

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

	struct GuiPaybackReceivedEvent;

	struct GuiOvertakeEvent;

	struct GuiFinishRaceEvent;

	struct GuiEventTrophyCarUnlock;

	struct GuiEventAudioTraxUpdate;

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

	struct GuiShowtimeBouncePrompt;

	struct GuiPowerParkResult;

	struct GuiInEventDistanceToFinish;

	struct GuiInEventLeaderSplit;

	struct GuiInEventRivalProgress;

	struct GuiInEventFinisher;

	struct GuiGameModeStarted;

	struct GuiRaceCheckpointReached;

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

	struct GuiEventShowFreeburnChallenge;

	struct GuiHudMessage;

	struct GuiOverlayRequest;

	struct GuiOverlayFullInfoResponse;

	struct GuiOverlayWaitFinishRequest;

	struct GuiOverlayShowingNotification;

	struct GuiPFXHookEvent;

	struct GuiPFXHookEnumeration;

	struct GuiNewBurnoutSkillzEvent;

	struct GuiShowtimeScoreUpdate;

	struct GuiShowtimeModeSwitch;

	struct GuiChallengeStartEvent;

	struct GuiEventFburnChallengeEveryPlayerStatus;

	struct GuiChallengeTriggerResponse;

	struct GuiChallengeUpdateEvent;

	struct GuiChallengeEndEvent;

	struct GuiEventBlackOverlayFadeIn;

	struct GuiEventBlackOverlayFadeOut;

	struct GuiAudioEventResults;

	struct BrnFlaptComponent;

	struct BaseInGameMessagesComponent;

	struct InGameMessagesQueue;

	struct InGameMessagesComponent;

	struct RoadSignIconManager;

	struct SatNavMapIcon;

	struct GuiPlayerInfo;

	struct BaseBoostMessageItemComponent;

	struct BaseBoostMessageSlotComponent;

	struct BoostMessageSlot;

	struct BaseBoostMessageManagerComponent;

	struct FlaptIconComponent;

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

	struct BaseFriendsListComponent;

	struct JunctionInfoComponent;

	struct BaseOnlineInviteMessageComponent;

	struct ProfileHost;

	struct GuiAudioTriggerEvent;

	struct GuiAudioEvent;

	struct PausedHudState;

	struct FriendsListChangeIconComponent;

	struct FreeburnChallengeStartComponent;

	struct BootLoading;

	struct ProfileTaskResultHandler;

	struct ProfileMessageComponent;

	struct ProfileMessageDisplay;

	struct BootAttract;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	struct OverheadSignScore;

	struct GuiEventOnlineReceiveFriendInfo;

	struct GuiEventCache;

	struct GuiEventStopMode;

	struct GuiEventRoadRuleEnter;

	struct GuiEventRoadRuleUpdateTargetScores;

	struct GuiEventRoadRuleEnd;

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

	struct RoadSignIcon;

	struct GuiEventNetworkLobbyPlayerList;

	struct GuiEventNetworkGameParams;

	struct GuiEventAudioTraxUpdate;

	struct GuiEventRivalryFullInfoResponse;

	struct GuiChallengeNotActiveStartEvent;

	struct GuiHudMessage;

	struct GuiOverlayFullInfoResponse;

	struct GuiOverlayInternalRequestEvent;

	struct GuiOverlayWaitFinishRequest;

	struct GuiOverlayShowingNotification;

	struct GuiPFXHookEnumeration;

	struct GuiNewBurnoutSkillzEvent;

	struct GuiShowtimeScoreUpdate;

	struct GuiChallengeStartEvent;

	struct GuiEventFburnChallengeEveryPlayerStatus;

	struct GuiChallengeTriggerResponse;

	struct GuiChallengeUpdateEvent;

	struct BrnFlaptComponent;

	struct InGameMessagesQueue;

	struct RoadSignIconManager;

	struct SatNavMapIcon;

	struct GuiPlayerInfo;

	struct FlaptIconComponent;

	struct BaseRoadRulesComponent;

	struct RoadRulesRoadSign;

	struct RoadRulesAnimator;

	struct RoadRulesIcon;

	struct RoadRulesTimer;

	struct BaseFriendsListComponent;

	struct OverlayComponent;

	struct BaseOnlineInviteMessageComponent;

	struct ProfileHost;

	struct InGameOnlineEnterFreeBurnOverlayState;

	struct BaseWaitOverlayState;

	struct InGameOnlineOkCancelOverlayState;

	struct BaseOkCancelOverlayState;

	struct InGameOnlineOkOverlayState;

	struct BaseOkOverlayState;

	struct InGameOnlineWaitOverlayState;

	struct InGameOkCancelOverlayState;

	struct InGameOkOverlayState;

	struct InGameWaitOverlayState;

	struct CrashNavOnlineOkCancelOverlayState;

	struct CrashNavOnlineOkOverlayState;

	struct CrashNavOnlineWaitOverlayState;

	struct CrashNavOkCancelOverlayState;

	struct CrashNavOkOverlayState;

	struct CrashNavWaitOverlayState;

	struct InvisibleOverlayState;

	struct ProfileTaskResultHandler;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	struct BrnGuiKeyboard;

	struct MovieAllocator;

	struct GuiEventPlayVideo;

	struct GuiEventStopVideo;

	struct OverheadSignScore;

	struct GuiEventColourCalibrationScreenShow;

	struct GuiEventColourCalibrationScreenHide;

	struct GuiEventPrepareForModeStart;

	struct GuiEventTickerClearMessages;

	struct GuiEventQueryTickerStatus;

	struct GuiEventTickerStatus;

	struct GuiCarUnlockNewCarEvent;

	struct GuiRequestCarUnlockEvent;

	struct GuiCarSelectStartEvent;

	struct GuiCarSelectAbortEvent;

	struct GuiCarSelectOnlineTimeLeftEvent;

	struct GuiEventOnlineReceiveFriendInfo;

	struct GuiEventScoreboardRequestGamercardEvent;

	struct GuiEventInviteComplete;

	struct GuiEventKeyboardResponse;

	struct GuiEventCache;

	struct GuiRequestCarControlChangeEvent;

	struct GuiEventRunFsm;

	struct GuiEventActivateCarSelect;

	struct GuiEventStopMode;

	struct GuiEventRoadRuleEnter;

	struct GuiEventRoadRuleUpdateTargetScores;

	struct GuiEventRoadRuleEnd;

	struct GuiEventRoadRuleDataRequest;

	struct GuiEventRoadRuleBatchDataResponse;

	struct GuiEventChangeDistrict;

	struct GuiEventSpecificPresetRaces;

	struct GuiEventSetActiveLandmarks;

	struct GuiEventCustomeEventCreate;

	struct GuiEventCustomeEventDelete;

	struct GuiEventAcceptEventStart;

	struct GuiEventShowHideHud;

	struct GuiEventPreraceTrigger;

	struct GuiEventPreraceTriggerExit;

	struct GuiEventUpdateEventStarts;

	struct GuiEventSatNavParameters;

	struct GuiRaceCarInfoEvent;

	struct GuiTrafficCarInfoEvent;

	struct GuiOverheadSignInfoEvent;

	struct GuiEventShowHideBoostBar;

	struct GuiEventRacePositionInfo;

	struct GuiEventOnlineEventFinishingOrder;

	struct GuiEventPostEventNewRivalSequenceStart;

	struct GuiEventPostEventNewRivalUnlockedChangeFocus;

	struct GuiEventPostEventFreeCarSequenceStart;

	struct GuiEventPostEventRankUpSequenceStart;

	struct GuiEventGameCompleted;

	struct GuiEventRouteInformation;

	struct GuiEventEnableAutoSave;

	struct GuiEventEventStateRequest;

	struct GuiEventEventStateResponse;

	struct GuiEventFilterEventIcons;

	struct GuiEventSetInspectedEventIcon;

	struct GuiEventSetHoveredEventIcon;

	struct GuiEventMapCursorStatus;

	struct RoadSignIcon;

	struct GuiEventNetworkConnect;

	struct GuiEventNetworkLeftGame;

	struct GuiEventNetworkSettingsUpdate;

	struct GuiEventNetworkPlayerImage;

	struct GuiEventNetworkLobbyPlayerList;

	struct GuiEventNetworkGameParams;

	struct GuiEventProgressionProfileData;

	struct GuiAutosaveRequestEvent;

	struct GuiEventAudioTraxUpdate;

	struct GuiEventAudioTraxLastPlayedIndexes;

	struct GuiEventAudioTraxPreview;

	struct GuiEventAudioSettings;

	struct GuiEventControllerSettings;

	struct GuiEventGameOptionsSettings;

	struct GuiEventVoipSettings;

	struct GuiEventAudioEventIntros;

	struct GuiEvent100PerCentComplete;

	struct GuiEventCarbonCarSequence;

	struct GuiEventAudioVoiceOver;

	struct GuiEventAudioGenericSequence;

	struct GuiEventDirectorSettings;

	struct GuiEventDirectorNewProfileIntroStart;

	struct GuiEventDirectorFlybyStart;

	struct GuiEventDirectorFlybyFinish;

	struct GuiPlayerInfoRequest;

	struct GuiPlayerInfoResponse;

	struct GuiCarSelectionRequest;

	struct GuiCarUnlockTickerClosed;

	struct GuiCarUnlockedLiveryRequest;

	struct GuiCarSelectionEvent;

	struct GuiCarUnlockedLiveryEvent;

	struct GuiChangeCarEvent;

	struct GuiCarUnlockEvent;

	struct GuiChangePlayerCarColourEvent;

	struct GuiPlayerCarColourRequest;

	struct GuiPlayerCarColourResponse;

	struct GuiEventStatsRequest;

	struct GuiEventStatsResponse;

	struct GuiEventRankProgressResponse;

	struct GuiEventRivalryFullInfoResponse;

	struct GuiNetworkPrepareGameEvent;

	struct GuiChallengeNotActiveStartEvent;

	struct GuiEventInviteFailed;

	struct GuiHudMessage;

	struct GuiOverlayRequest;

	struct GuiOverlayFullInfoResponse;

	struct GuiOverlayWaitFinishRequest;

	struct GuiCarSelectionChangedOnline;

	struct GuiPFXHookEnumeration;

	struct GuiReplaySetModeEvent;

	struct GuiReplayPlayReelEvent;

	struct GuiReplayDeleteReelEvent;

	struct GuiReplayStopPlayingReelEvent;

	struct GuiNewBurnoutSkillzEvent;

	struct GuiShowtimeScoreUpdate;

	struct GuiOptionsBrightnessContrast;

	struct GuiEventOnlineAccountSettings;

	struct GuiEventOnlineAccountUpdate;

	struct GuiEventCamPicCompressed;

	struct GuiEventRequestTraining;

	struct GuiChallengeStartEvent;

	struct GuiEventFburnChallengeEveryPlayerStatus;

	struct GuiChallengeTriggerResponse;

	struct GuiChallengeUpdateEvent;

	struct GuiEventEnterCredits;

	struct GuiEventLeaveCredits;

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

	struct CarSetupInfo;

	struct CarSelectLivery;

	struct CarSelectVehicle;

	struct CrashNavMapSoundData;

	struct CrashNavEnterOnlinePS3;

	struct BaseOnlineInviteMessageComponent;

	struct ProfileHost;

	struct GuiAudioTriggerEvent;

	struct BrnDebug;

	struct ScreenLoading;

	struct InGame;

	struct ProfileTaskResultHandler;

	struct CrashNavProductCodeKeyboardListener;

	struct CrashNavMapMain;

	struct CrashNavMapEventKeyboardListener;

	struct CrashNavEnterOnlineNoTitle;

	struct CrashNavEnterOnlineFull;

	struct NullState;

	struct ProfileMessageDisplay;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	struct OverheadSignScore;

	struct GuiEventOnlineReceiveFriendInfo;

	struct GuiEventStopMode;

	struct GuiEventRoadRuleEnter;

	struct GuiEventRoadRuleUpdateTargetScores;

	struct GuiEventRoadRuleEnd;

	struct GuiEventRoadRuleBatchDataResponse;

	struct GuiEventChangeDistrict;

	struct GuiEventSpecificPresetRaces;

	struct GuiEventSetActiveLandmarks;

	struct GuiEventUpdateEventStarts;

	struct GuiEventSatNavParameters;

	struct GuiRaceCarInfoEvent;

	struct GuiTrafficCarInfoEvent;

	struct GuiOverheadSignInfoEvent;

	struct GuiRemovedTrafficEvent;

	struct GuiEventRacePositionInfo;

	struct GuiEventOnlineEventFinishingOrder;

	struct GuiEventRouteInformation;

	struct GuiEventEventStateResponse;

	struct RoadSignIcon;

	struct GuiEventNetworkConnect;

	struct GuiEventNetworkLobbyPlayerList;

	struct GuiEventNetworkQuickMatch;

	struct GuiEventNetworkCreateGame;

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

	struct BrnFlaptComponent;

	struct InGameMessagesQueue;

	struct RoadSignIconManager;

	struct SatNavMapIcon;

	struct GuiPlayerInfo;

	struct BaseRoadRulesComponent;

	struct RoadRulesRoadSign;

	struct RoadRulesAnimator;

	struct RoadRulesIcon;

	struct RoadRulesTimer;

	struct BaseFriendsListComponent;

	struct BaseOnlineInviteMessageComponent;

	struct ProfileHost;

	struct ProfileTaskResultHandler;

	struct BrnScreenFlow;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	struct GuiEventNetworkConnect;

	struct GuiEventNetworkLeavingGameFailed;

	struct GuiEventNetworkPlayerImage;

	struct GuiEventNetworkHighlightedPlayer;

	struct GuiEventNetworkPlayerStats;

	struct GuiEventNetworkQuickMatch;

	struct GuiEventNetworkCustomMatchSearch;

	struct GuiEventNetworkCustomMatchResults;

	struct GuiEventNetworkCustomMatchJoin;

	struct GuiEventNetworkCreateGame;

	struct GuiEventNetworkGameParams;

	struct GuiNetworkPlayerBattlingEvent;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	struct GuiEventNetworkConnect;

	struct GuiEventNetworkCreateGame;

	struct GuiEventNetworkGameParams;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	struct OverheadSignScore;

	struct GuiEventOnlineReceiveFriendInfo;

	struct GuiEventStopMode;

	struct GuiEventRoadRuleEnter;

	struct GuiEventRoadRuleUpdateTargetScores;

	struct GuiEventRoadRuleEnd;

	struct GuiEventRoadRuleBatchDataResponse;

	struct GuiEventChangeDistrict;

	struct GuiEventSpecificPresetRaces;

	struct GuiEventSetActiveLandmarks;

	struct GuiEventUpdateEventStarts;

	struct GuiEventSatNavParameters;

	struct GuiRaceCarInfoEvent;

	struct GuiTrafficCarInfoEvent;

	struct GuiOverheadSignInfoEvent;

	struct GuiRemovedTrafficEvent;

	struct GuiEventRacePositionInfo;

	struct GuiEventOnlineEventFinishingOrder;

	struct GuiEventRouteInformation;

	struct GuiEventEventStateResponse;

	struct RoadSignIcon;

	struct GuiEventNetworkConnect;

	struct GuiEventNetworkPlayerImage;

	struct GuiEventNetworkLobbyPlayerList;

	struct GuiEventNetworkPlayerStats;

	struct GuiEventNetworkCustomMatchResults;

	struct GuiEventNetworkCreateGame;

	struct GuiEventNetworkGameParams;

	struct GuiEventAudioTraxUpdate;

	struct GuiEventRivalryFullInfoResponse;

	struct GuiChallengeNotActiveStartEvent;

	struct GuiHudMessage;

	struct GuiOverlayFullInfoResponse;

	struct GuiPFXHookEvent;

	struct GuiPFXHookEnumeration;

	struct GuiNewBurnoutSkillzEvent;

	struct GuiShowtimeScoreUpdate;

	struct GuiEventCamStatus;

	struct GuiChallengeStartEvent;

	struct GuiEventFburnChallengeEveryPlayerStatus;

	struct GuiChallengeTriggerResponse;

	struct GuiChallengeUpdateEvent;

	struct BrnFlaptComponent;

	struct InGameMessagesQueue;

	struct RoadSignIconManager;

	struct SatNavMapIcon;

	struct GuiPlayerInfo;

	struct BaseRoadRulesComponent;

	struct RoadRulesRoadSign;

	struct RoadRulesAnimator;

	struct RoadRulesIcon;

	struct RoadRulesTimer;

	struct BaseFriendsListComponent;

	struct BaseOnlineInviteMessageComponent;

	struct ProfileHost;

	struct ProfileTaskResultHandler;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	struct GuiPFXHookEvent;

	struct GuiPFXHookEnumeration;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	struct GuiHudMessage;

	struct GuiOverlayFullInfoResponse;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	struct OverheadSignScore;

	struct GuiEventOnlineReceiveFriendInfo;

	struct GuiEventStopMode;

	struct GuiEventRoadRuleEnter;

	struct GuiEventRoadRuleUpdateTargetScores;

	struct GuiEventRoadRuleEnd;

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

	struct GuiEventPostEventNewRivalSequenceStart;

	struct GuiEventPostEventFreeCarSequenceStart;

	struct GuiEventPostEventRankUpSequenceStart;

	struct GuiEventRouteInformation;

	struct GuiEventEventStateResponse;

	struct RoadSignIcon;

	struct GuiEventNetworkLobbyPlayerList;

	struct GuiEventNetworkCreateGame;

	struct GuiEventNetworkGameParams;

	struct GuiEventAudioTraxUpdate;

	struct GuiEventAudioTraxLastPlayedIndexes;

	struct GuiEventAudioTraxPreview;

	struct GuiEventAudioSettings;

	struct GuiEventAudioEventIntros;

	struct GuiEvent100PerCentComplete;

	struct GuiEventAudioVoiceOver;

	struct GuiEventAudioVoiceOverFinished;

	struct GuiEventAudioGenericSequence;

	struct GuiEventRivalryFullInfoResponse;

	struct GuiChallengeNotActiveStartEvent;

	struct GuiHudMessage;

	struct GuiOverlayFullInfoResponse;

	struct GuiPFXHookEvent;

	struct GuiPFXHookEnumeration;

	struct GuiEATraxNewTrackEvent;

	struct GuiClassicalChyronEvent;

	struct GuiVideoVolumeEvent;

	struct GuiNewBurnoutSkillzEvent;

	struct GuiShowtimeScoreUpdate;

	struct GuiChallengeStartEvent;

	struct GuiEventFburnChallengeEveryPlayerStatus;

	struct GuiChallengeTriggerResponse;

	struct GuiChallengeUpdateEvent;

	struct GuiAudioEventResults;

	struct BrnFlaptComponent;

	struct InGameMessagesQueue;

	struct RoadSignIconManager;

	struct SatNavMapIcon;

	struct GuiPlayerInfo;

	struct BaseRoadRulesComponent;

	struct RoadRulesRoadSign;

	struct RoadRulesAnimator;

	struct RoadRulesIcon;

	struct RoadRulesTimer;

	struct BaseFriendsListComponent;

	struct GuiAudioTriggerEvent;

	struct GuiAudioEvent;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	struct OverheadSignScore;

	struct GuiEventTrafficPoolEmptied;

	struct GuiEventOnlineReceiveFriendInfo;

	struct GuiEventStopMode;

	struct GuiEventRoadRuleEnter;

	struct GuiEventRoadRuleUpdateTargetScores;

	struct GuiEventRoadRuleEnd;

	struct GuiEventRoadRuleBatchDataResponse;

	struct GuiEventChangeDistrict;

	struct GuiEventSpecificPresetRaces;

	struct GuiEventSetActiveLandmarks;

	struct GuiEventUpdateEventStarts;

	struct GuiEventSatNavParameters;

	struct GuiRaceCarInfoEvent;

	struct GuiTrafficCarInfoEvent;

	struct GuiOverheadSignInfoEvent;

	struct GuiRemovedTrafficEvent;

	struct GuiEventRacePositionInfo;

	struct GuiEventOnlineEventFinishingOrder;

	struct GuiEventRouteInformation;

	struct GuiEventEventStateResponse;

	struct RoadSignIcon;

	struct GuiEventNetworkConnect;

	struct GuiEventNetworkLobbyPlayerList;

	struct GuiEventNetworkCreateGame;

	struct GuiEventNetworkGameParams;

	struct GuiEventAudioTraxUpdate;

	struct GuiEventRivalryFullInfoResponse;

	struct GuiChallengeNotActiveStartEvent;

	struct GuiHudMessage;

	struct GuiOverlayFullInfoResponse;

	struct GuiPFXHookEvent;

	struct GuiPFXHookEnumeration;

	struct GuiNewBurnoutSkillzEvent;

	struct GuiShowtimeScoreUpdate;

	struct GuiChallengeStartEvent;

	struct GuiEventFburnChallengeEveryPlayerStatus;

	struct GuiChallengeTriggerResponse;

	struct GuiChallengeUpdateEvent;

	struct BrnFlaptComponent;

	struct InGameMessagesQueue;

	struct RoadSignIconManager;

	struct SatNavMapIcon;

	struct GuiPlayerInfo;

	struct BaseRoadRulesComponent;

	struct RoadRulesRoadSign;

	struct RoadRulesAnimator;

	struct RoadRulesIcon;

	struct RoadRulesTimer;

	struct BaseFriendsListComponent;

	struct BaseOnlineInviteMessageComponent;

	struct ProfileHost;

	struct ProfileTaskResultHandler;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	struct GuiTrafficCarInfoEvent;

	struct GuiPFXHookEvent;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	struct OverheadSignScore;

	struct GuiTrafficCarInfoEvent;

	struct GuiOverheadSignInfoEvent;

	struct GuiRemovedTrafficEvent;

	struct GuiPFXHookEvent;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	struct PFXGroup;

	struct PFXHookNode;

	struct PFXHook;

	struct PFXHookBundle;

	// Declaration
	struct MovieAllocator {
	public:
		virtual ~MovieAllocator();

		MovieAllocator();

	}

	struct GuiEventPlayVideo;

	struct GuiEventStopVideo;

	struct OverheadSignScore;

	struct GuiEventOnlineReceiveFriendInfo;

	struct GuiEventRunFsm;

	struct GuiEventStopMode;

	struct GuiEventRoadRuleEnter;

	struct GuiEventRoadRuleUpdateTargetScores;

	struct GuiEventRoadRuleEnd;

	struct GuiEventRoadRuleBatchDataResponse;

	struct GuiEventChangeDistrict;

	struct GuiEventSpecificPresetRaces;

	struct GuiEventSetActiveLandmarks;

	struct GuiEventNetworkShowFreeBurnIntro;

	struct GuiEventUpdateEventStarts;

	struct GuiEventSatNavParameters;

	struct GuiRaceCarInfoEvent;

	struct GuiTrafficCarInfoEvent;

	struct GuiOverheadSignInfoEvent;

	struct GuiRemovedTrafficEvent;

	struct GuiEventRacePositionInfo;

	struct GuiEventOnlineEventFinishingOrder;

	struct GuiEventRouteInformation;

	struct GuiEventEventStateResponse;

	struct GuiEventMapCursorStatus;

	struct GuiEventNetworkConnect;

	struct GuiEventNetworkLobbyPlayerList;

	struct GuiEventNetworkCreateGame;

	struct GuiEventNetworkGameParams;

	struct GuiEventAudioTraxUpdate;

	struct GuiEventRivalryFullInfoResponse;

	struct GuiChallengeNotActiveStartEvent;

	struct GuiHudMessage;

	struct GuiOverlayRequest;

	struct GuiOverlayFullInfoResponse;

	struct GuiOverlayWaitFinishRequest;

	struct GuiOverlayShowingNotification;

	struct GuiPFXHookEvent;

	struct GuiPFXStartBackgroundHookEvent;

	struct GuiPFXStopBackgroundHookEvent;

	struct GuiPFXHookEnumeration;

	struct GuiNewBurnoutSkillzEvent;

	struct GuiShowtimeScoreUpdate;

	struct GuiChallengeStartEvent;

	struct GuiEventFburnChallengeEveryPlayerStatus;

	struct GuiChallengeTriggerResponse;

	struct GuiChallengeUpdateEvent;

	// Declaration
	struct ViewModule {
	public:
		ViewModule();

		~ViewModule();

	}

	struct BrnFlaptComponent;

	struct InGameMessagesQueue;

	struct RoadSignIconManager;

	// Declaration
	struct SatNavMapIcon {
	public:
		SatNavMapIcon();

	}

	struct GuiPlayerInfo;

	// Declaration
	struct FlaptIconComponent {
	public:
		FlaptIconComponent();

	}

	struct BaseRoadRulesComponent;

	struct RoadRulesRoadSign;

	struct RoadRulesAnimator;

	struct RoadRulesIcon;

	struct RoadRulesTimer;

	struct BaseFriendsListComponent;

	struct GuiEventRenderSatNav;

	struct RoadSignList;

	struct DeltaInterpolator;

	struct Interpolator<float32_t>;

	struct BankingScore;

	struct PlayerGamerTagAboveCarInfo;

	// Declaration
	struct ProgressBarRenderer {
	public:
		ProgressBarRenderer();

	}

	// Declaration
	struct CustomRendererManager {
	public:
		CustomRendererManager();

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

	struct BaseOnlineInviteMessageComponent;

	// Declaration
	struct BrnShowtimeMessageComponent {
	public:
		BrnShowtimeMessageComponent();

	}

	// Declaration
	struct GuiCacheDebugComponent {
	public:
		GuiCacheDebugComponent();

	}

	struct ProfileHost;

	struct ProfileTaskResultHandler;

	struct BrnShowtimeMessageComponentBase;

	// Declaration
	struct GuiCustRendererDebugComponent {
	public:
		GuiCustRendererDebugComponent();

	}

	// Declaration
	struct BrnHudFlow {
	public:
		BrnHudFlow();

	}

	// Declaration
	struct BrnScreenFlow {
	public:
		BrnScreenFlow();

	}

	// Declaration
	struct BrnOverlayFlow {
	public:
		BrnOverlayFlow();

	}

	// Declaration
	struct KeyboardHost {
	public:
		KeyboardHost();

	}

	// Declaration
	struct GuiHudMessagesDebugComponent {
	public:
		GuiHudMessagesDebugComponent();

	}

	// Declaration
	struct SatNavDebugComponent {
	public:
		SatNavDebugComponent();

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	struct GuiCache;

}

