// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct GuiModule {
	public:
		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiReplayStatusEvent>(GuiReplayStatusEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<CgsGui::GuiEventControllerInputPressed>(GuiEventControllerInputPressed &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiImpactEvent>(GuiImpactEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiPlayerCrashingStateChangeEvent>(GuiPlayerCrashingStateChangeEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventUpdateSatNav>(GuiEventUpdateSatNav &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiPlayerDrivableFromCrash>(GuiPlayerDrivableFromCrash &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiPlayerEngineEvent>(GuiPlayerEngineEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiPlayerRaceCarIdEvent>(GuiPlayerRaceCarIdEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventBoostInfo>(GuiEventBoostInfo &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventUpdateHud>(GuiEventUpdateHud &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventPlayerWrecked>(GuiEventPlayerWrecked &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiRaceCarInfoEvent>(GuiRaceCarInfoEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiTookLeadEvent>(GuiTookLeadEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiTakedownEvent>(GuiTakedownEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiSoftTakedownEvent>(GuiSoftTakedownEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiShowtimeScoreUpdate>(GuiShowtimeScoreUpdate &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiShowtimeModeSwitch>(GuiShowtimeModeSwitch &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiLeaptVehicleEvent>(GuiLeaptVehicleEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiHitVehicleEvent>(GuiHitVehicleEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiHUDMessageCrushCombo>(GuiHUDMessageCrushCombo &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiHUDMessageShowtimeMultiplier>(GuiHUDMessageShowtimeMultiplier &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiShowtimeJustBounced>(GuiShowtimeJustBounced &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiHUDMessageSignSmashed>(GuiHUDMessageSignSmashed &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiCarSelectStartEvent>(GuiCarSelectStartEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiGamePausedEvent>(GuiGamePausedEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiSetEasyDriveNotAllowedEvent>(GuiSetEasyDriveNotAllowedEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiOverlayWaitFinishRequest>(GuiOverlayWaitFinishRequest &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventNetworkShowFreeBurnIntro>(GuiEventNetworkShowFreeBurnIntro &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventNetworkSplashEvent>(GuiEventNetworkSplashEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiDriveThroughEvent>(GuiDriveThroughEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiEventAllJunctionsDiscovered>(GuiEventAllJunctionsDiscovered &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:2503
			typedef GuiEvent<310> GuiEventAllJunctionsDiscovered;

		}

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventAllOfRivalsShutdown>(GuiEventAllOfRivalsShutdown &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventAllOfTypeComplete>(GuiEventAllOfTypeComplete &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventAllJunctionsDiscoveredOfType>(GuiEventAllJunctionsDiscoveredOfType &, InputBuffer *);

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiEventAllDriveThrusDiscovered>(GuiEventAllDriveThrusDiscovered &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:2504
			typedef GuiEvent<313> GuiEventAllDriveThrusDiscovered;

		}

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventCanSkipCrash>(GuiEventCanSkipCrash &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventTimeUp>(GuiEventTimeUp &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventCantPaintCar>(GuiEventCantPaintCar &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventMustFixCarFirst>(GuiEventMustFixCarFirst &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventSuperJumpFailed>(GuiEventSuperJumpFailed &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventJumpStarted>(GuiEventJumpStarted &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventBoostBarStuntInfo>(GuiEventBoostBarStuntInfo &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventStuntInfo>(GuiEventStuntInfo &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiAutosaveRequestEvent>(GuiAutosaveRequestEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventStuntAreaComplete>(GuiEventStuntAreaComplete &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventStuntAllComplete>(GuiEventStuntAllComplete &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventGameCompletedOnline>(GuiEventGameCompletedOnline &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventGameCompleted>(GuiEventGameCompleted &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventEnterLandmarkArea>(GuiEventEnterLandmarkArea &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiTrafficCheckEvent>(GuiTrafficCheckEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiNearMissEvent>(GuiNearMissEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiDriftingEvent>(GuiDriftingEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiSpinningEvent>(GuiSpinningEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiInAirEvent>(GuiInAirEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiOncomingEvent>(GuiOncomingEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiTailgatingEvent>(GuiTailgatingEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiAftertouchEvent>(GuiAftertouchEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventProgressionProfileData>(GuiEventProgressionProfileData &, InputBuffer *);

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiEventWaitForStreaming>(GuiEventWaitForStreaming &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:771
			typedef GuiEvent<132> GuiEventWaitForStreaming;

		}

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiOnlineReshowShortcutsEvent>(GuiOnlineReshowShortcutsEvent &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:627
			typedef GuiEvent<105> GuiOnlineReshowShortcutsEvent;

		}

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventOnlineTimeout>(GuiEventOnlineTimeout &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiRivalryStatusChange>(GuiRivalryStatusChange &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiMugshotControlEvent>(GuiMugshotControlEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiChangeCarEvent>(GuiChangeCarEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiOverlayRequest>(GuiOverlayRequest &, InputBuffer *);

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiFriendListWaitEndEvent>(GuiFriendListWaitEndEvent &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:561
			typedef GuiEvent<96> GuiFriendListWaitEndEvent;

		}

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventBuddyNotification>(GuiEventBuddyNotification &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventInviteFailed>(GuiEventInviteFailed &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventOnlinePostEventScalps>(GuiEventOnlinePostEventScalps &, InputBuffer *);

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiEventOnlineFriendListChanged>(GuiEventOnlineFriendListChanged &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:625
			typedef GuiEvent<104> GuiEventOnlineFriendListChanged;

		}

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventOnlineNumFriendsCount>(GuiEventOnlineNumFriendsCount &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventOnlineReceiveFriendInfo>(GuiEventOnlineReceiveFriendInfo &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventNetworkGameParams>(GuiEventNetworkGameParams &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventNetworkLeftGame>(GuiEventNetworkLeftGame &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventNetworkPostGameProcessingFinished>(GuiEventNetworkPostGameProcessingFinished &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<CgsGui::GuiEventNetworkLaunching>(GuiEventNetworkLaunching &, InputBuffer *);

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiEventNetworkShowSignInGui>(GuiEventNetworkShowSignInGui &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:2909
			typedef GuiEvent<269> GuiEventNetworkShowSignInGui;

		}

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventScoreboardResponseCategoryEvent>(GuiEventScoreboardResponseCategoryEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventScoreboardResponseIndexEvent>(GuiEventScoreboardResponseIndexEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventScoreboardResponseVariationEvent>(GuiEventScoreboardResponseVariationEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventScoreboardResponseTableEvent>(GuiEventScoreboardResponseTableEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventLiveRevengeProfileData>(GuiEventLiveRevengeProfileData &, InputBuffer *);

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiEventNetworkShowLoadingScreen>(GuiEventNetworkShowLoadingScreen &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:2910
			typedef GuiEvent<278> GuiEventNetworkShowLoadingScreen;

		}

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiEventOnlineAccountUpdateComplete>(GuiEventOnlineAccountUpdateComplete &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:6536
			typedef GuiEvent<125> GuiEventOnlineAccountUpdateComplete;

		}

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiEventInstantFreeburnSearchFailed>(GuiEventInstantFreeburnSearchFailed &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:5511
			typedef GuiEvent<283> GuiEventInstantFreeburnSearchFailed;

		}

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventOnlineAccountSettings>(GuiEventOnlineAccountSettings &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventCamPicCompressed>(GuiEventCamPicCompressed &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventNetworkPlayerLeftLobby>(GuiEventNetworkPlayerLeftLobby &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiChallengeNotActiveStartEvent>(GuiChallengeNotActiveStartEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiOnlineCarStatusEvent>(GuiOnlineCarStatusEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiOnlineStartGameDueToPlayerJoinEvent>(GuiOnlineStartGameDueToPlayerJoinEvent &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:654
			typedef GuiEvent<110> GuiOnlineStartGameDueToPlayerJoinEvent;

		}

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiEventNoPhotoBoothGamerPic>(GuiEventNoPhotoBoothGamerPic &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:6534
			typedef GuiEvent<556> GuiEventNoPhotoBoothGamerPic;

		}

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiLiveRevengeUpdateEvent>(GuiLiveRevengeUpdateEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventSetBlackBars>(GuiEventSetBlackBars &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventRunFsm>(GuiEventRunFsm &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEnteredJunkyard>(GuiEnteredJunkyard &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiCarUnlockStartEvent>(GuiCarUnlockStartEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiPausedInCarSelectEvent>(GuiPausedInCarSelectEvent &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:536
			typedef GuiEvent<85> GuiPausedInCarSelectEvent;

		}

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiCarSelectOnlineTimeLeftEvent>(GuiCarSelectOnlineTimeLeftEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiCarSelectOnlineEndEvent>(GuiCarSelectOnlineEndEvent &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:552
			typedef GuiEvent<83> GuiCarSelectOnlineEndEvent;

		}

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiPlayerCarColourResponse>(GuiPlayerCarColourResponse &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventMedalUpdate>(GuiEventMedalUpdate &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventJunctionInfo>(GuiEventJunctionInfo &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventShowHideHud>(GuiEventShowHideHud &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventTickerCustomMessage>(GuiEventTickerCustomMessage &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventPlayerReachedRoadRageTarget>(GuiEventPlayerReachedRoadRageTarget &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventEnterEventStartLocation>(GuiEventEnterEventStartLocation &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventTriggerOnlinePostEvent>(GuiEventTriggerOnlinePostEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiEventTriggerOfflinePostEvent>(GuiEventTriggerOfflinePostEvent &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:1512
			typedef GuiEvent<289> GuiEventTriggerOfflinePostEvent;

		}

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventOfflinePostEvent>(GuiEventOfflinePostEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventRoadRagePlayerDamage>(GuiEventRoadRagePlayerDamage &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventTrophyCarUnlock>(GuiEventTrophyCarUnlock &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventStopMode>(GuiEventStopMode &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventFinishedModeResults>(GuiEventFinishedModeResults &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventUpdateEventCountdown>(GuiEventUpdateEventCountdown &, InputBuffer *);

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiEventCheckForLoadingScreen>(GuiEventCheckForLoadingScreen &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:243
			typedef GuiEvent<92> GuiEventCheckForLoadingScreen;

		}

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventTickerClearMessages>(GuiEventTickerClearMessages &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventPrepareForModeStart>(GuiEventPrepareForModeStart &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiCompletedStuntEvent>(GuiCompletedStuntEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiInProgressStuntEvent>(GuiInProgressStuntEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventPreRaceMessages>(GuiEventPreRaceMessages &, InputBuffer *);

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiEventPreraceIntroDone>(GuiEventPreraceIntroDone &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:1661
			typedef GuiEvent<162> GuiEventPreraceIntroDone;

		}

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventChangeDistrict>(GuiEventChangeDistrict &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventHideDriveThru>(GuiEventHideDriveThru &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventSetAvailablePresetRaces>(GuiEventSetAvailablePresetRaces &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiPaybackReceivedEvent>(GuiPaybackReceivedEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiPaybackOverEvent>(GuiPaybackOverEvent &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:3856
			typedef GuiEvent<181> GuiPaybackOverEvent;

		}

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventDriveThruDiscovered>(GuiEventDriveThruDiscovered &, InputBuffer *);

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiEventShowLoadingScreen>(GuiEventShowLoadingScreen &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:777
			typedef GuiEvent<134> GuiEventShowLoadingScreen;

		}

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiEventHideLoadingScreen>(GuiEventHideLoadingScreen &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:780
			typedef GuiEvent<135> GuiEventHideLoadingScreen;

		}

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiPlayerInfoResponse>(GuiPlayerInfoResponse &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiCarUnlockedLiveryEvent>(GuiCarUnlockedLiveryEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiCarSelectionEvent>(GuiCarSelectionEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiGameModeStarted>(GuiGameModeStarted &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiRaceCheckpointReached>(GuiRaceCheckpointReached &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiBlueTeamIsEscapingEvent>(GuiBlueTeamIsEscapingEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiBlueTeamIsBehindYouEvent>(GuiBlueTeamIsBehindYouEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiLeaderPassedMileBoundaryEvent>(GuiLeaderPassedMileBoundaryEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiLeaderPassedKMBoundaryEvent>(GuiLeaderPassedKMBoundaryEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiLocalPlayerEliminatedEvent>(GuiLocalPlayerEliminatedEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiPlayerEliminatedEvent>(GuiPlayerEliminatedEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiLastBlueTeamMemberEvent>(GuiLastBlueTeamMemberEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiTraitorousTakedownEvent>(GuiTraitorousTakedownEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventPrepareForInvite>(GuiEventPrepareForInvite &, InputBuffer *);

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiEventUpdateForInvite>(GuiEventUpdateForInvite &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:762
			typedef GuiEvent<127> GuiEventUpdateForInvite;

		}

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiEventPerformInvite>(GuiEventPerformInvite &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:768
			typedef GuiEvent<129> GuiEventPerformInvite;

		}

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventInviteComplete>(GuiEventInviteComplete &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventReturnDistrict>(GuiEventReturnDistrict &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiInEventLeaderSplit>(GuiInEventLeaderSplit &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiInEventNeckAndNeck>(GuiInEventNeckAndNeck &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiInEventFinisher>(GuiInEventFinisher &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiInEventRivalProgress>(GuiInEventRivalProgress &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiNetworkPlayerCrashingEvent>(GuiNetworkPlayerCrashingEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiBHRCheckpointReachedEvent>(GuiBHRCheckpointReachedEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiHUDMessageBHRRunnerCrashed>(GuiHUDMessageBHRRunnerCrashed &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiHUDMessageStuntPerformed>(GuiHUDMessageStuntPerformed &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiHUDMessageComboPerformed>(GuiHUDMessageComboPerformed &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiHUDMessageStuntTimeUp>(GuiHUDMessageStuntTimeUp &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiOnlineTeamChangeEvent>(GuiOnlineTeamChangeEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiChallengeStartEvent>(GuiChallengeStartEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiChallengeTriggerResponse>(GuiChallengeTriggerResponse &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiChallengeEndEvent>(GuiChallengeEndEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiChallengeResultsFinishedEvent>(GuiChallengeResultsFinishedEvent &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:6664
			typedef GuiEvent<564> GuiChallengeResultsFinishedEvent;

		}

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiChallengeNotActiveEndEvent>(GuiChallengeNotActiveEndEvent &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:5555
			typedef GuiEvent<569> GuiChallengeNotActiveEndEvent;

		}

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiChallengeUpdateEvent>(GuiChallengeUpdateEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventShowFreeburnChallenge>(GuiEventShowFreeburnChallenge &, InputBuffer *);

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiEventWrongWay>(GuiEventWrongWay &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:1548
			typedef GuiEvent<151> GuiEventWrongWay;

		}

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventFailedToStartEvent>(GuiEventFailedToStartEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventRoadRageTimeExtended>(GuiEventRoadRageTimeExtended &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiRivalIsFleeing>(GuiRivalIsFleeing &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventCarJoinedEvent>(GuiEventCarJoinedEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventCarEliminatedFromEvent>(GuiEventCarEliminatedFromEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiEventCarJoiningPresentationEnd>(GuiEventCarJoiningPresentationEnd &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:1545
			typedef GuiEvent<150> GuiEventCarJoiningPresentationEnd;

		}

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiNetworkRemotePlayerDisconnectEvent>(GuiNetworkRemotePlayerDisconnectEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventRoadRuleEnter>(GuiEventRoadRuleEnter &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventRoadRuleData>(GuiEventRoadRuleData &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventRoadRuleUpdateTargetScores>(GuiEventRoadRuleUpdateTargetScores &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventRoadRuleBegin>(GuiEventRoadRuleBegin &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventRoadRuleEnd>(GuiEventRoadRuleEnd &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventRoadRuleLeave>(GuiEventRoadRuleLeave &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventRoadRuleUpcomingRoads>(GuiEventRoadRuleUpcomingRoads &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventRoadRuleUpdate>(GuiEventRoadRuleUpdate &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventRoadRuleNewHighScore>(GuiEventRoadRuleNewHighScore &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventRoadRuleChangeMode>(GuiEventRoadRuleChangeMode &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventStatsResponse>(GuiEventStatsResponse &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventRankProgressResponse>(GuiEventRankProgressResponse &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventRivalryFullInfoResponse>(GuiEventRivalryFullInfoResponse &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventRivalInfoResponse>(GuiEventRivalInfoResponse &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventMiniMapSwitch>(GuiEventMiniMapSwitch &, InputBuffer *);

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiPaybackLostEvent>(GuiPaybackLostEvent &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:3758
			typedef GuiEvent<176> GuiPaybackLostEvent;

		}

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiDirtyVictimLeftGameEvent>(GuiDirtyVictimLeftGameEvent &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:3768
			typedef GuiEvent<178> GuiDirtyVictimLeftGameEvent;

		}

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventNetworkPlayerJoinedLobby>(GuiEventNetworkPlayerJoinedLobby &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiCrashComboEvent>(GuiCrashComboEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiCarUnlockNewCarEvent>(GuiCarUnlockNewCarEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiCarUnlockEndEvent>(GuiCarUnlockEndEvent &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:516
			typedef GuiEvent<74> GuiCarUnlockEndEvent;

		}

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiCarUnlockEvent>(GuiCarUnlockEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventNetworkPlayerImage>(GuiEventNetworkPlayerImage &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiImageGalleryImageInfoEvent>(GuiImageGalleryImageInfoEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiImageGalleryCollectedCountEvent>(GuiImageGalleryCollectedCountEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiImageGalleryCollectedDataEvent>(GuiImageGalleryCollectedDataEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventRoadRuleTickerScoreResponse>(GuiEventRoadRuleTickerScoreResponse &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventRoadRuleNewRulers>(GuiEventRoadRuleNewRulers &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventSetRoadRuleScoreMode>(GuiEventSetRoadRuleScoreMode &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiPlayerInShortcutEvent>(GuiPlayerInShortcutEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventSaveImageFileAndAutosave>(GuiEventSaveImageFileAndAutosave &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventLoadImageFiles>(GuiEventLoadImageFiles &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiNewBurnoutSkillzEvent>(GuiNewBurnoutSkillzEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiNewBurnoutHudMessageEvent>(GuiNewBurnoutHudMessageEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiShowtimeTriggered>(GuiShowtimeTriggered &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiPowerParkResult>(GuiPowerParkResult &, InputBuffer *);

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiImageGalleryLoadCompleteEvent>(GuiImageGalleryLoadCompleteEvent &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:6250
			typedef GuiEvent<513> GuiImageGalleryLoadCompleteEvent;

		}

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventEventStateResponse>(GuiEventEventStateResponse &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiCarSelectReadyToExitEvent>(GuiCarSelectReadyToExitEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiCarSelectionChangedDropIn>(GuiCarSelectionChangedDropIn &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiCarSelectionChangedOnline>(GuiCarSelectionChangedOnline &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiCarSelectAbortEvent>(GuiCarSelectAbortEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiShutdownEvent>(GuiShutdownEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiShutdownFinishedEvent>(GuiShutdownFinishedEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventFburnChallengeEveryPlayerStatus>(GuiEventFburnChallengeEveryPlayerStatus &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiAchievementsEarned>(GuiAchievementsEarned &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventRoadRuleBatchDataResponse>(GuiEventRoadRuleBatchDataResponse &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventRacePositionInfo>(GuiEventRacePositionInfo &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiDirtyTrickNewEvent>(GuiDirtyTrickNewEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiDirtyTrickTriggerEvent>(GuiDirtyTrickTriggerEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiDirtyTrickEndedEvent>(GuiDirtyTrickEndedEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiOvertakeEvent>(GuiOvertakeEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiFinishRaceEvent>(GuiFinishRaceEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiTookLastEvent>(GuiTookLastEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiNetworkPlayerOnTailEvent>(GuiNetworkPlayerOnTailEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventTogglePictureParadise>(GuiEventTogglePictureParadise &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventPreraceTrigger>(GuiEventPreraceTrigger &, InputBuffer *);

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiEventPostEventRivalStart>(GuiEventPostEventRivalStart &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:2418
			typedef GuiEvent<294> GuiEventPostEventRivalStart;

		}

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiEventPostEventRivalStop>(GuiEventPostEventRivalStop &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:2419
			typedef GuiEvent<295> GuiEventPostEventRivalStop;

		}

		// CgsGuiModule.h:284
		// Declaration
		void AddGuiEvent<BrnGui::GuiPFXHookEnumEvent>(GuiPFXHookEnumEvent &, InputBuffer *) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiEventTypeDefs.h:6034
			typedef GuiEvent<490> GuiPFXHookEnumEvent;

		}

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiPFXHookStopEvent>(GuiPFXHookStopEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiPFXHookEvent>(GuiPFXHookEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiPFXStartBackgroundHookEvent>(GuiPFXStartBackgroundHookEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiPFXStopBackgroundHookEvent>(GuiPFXStopBackgroundHookEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventDirectorSettings>(GuiEventDirectorSettings &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventNetworkPlayerList>(GuiEventNetworkPlayerList &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventNetworkPlayerStatus>(GuiEventNetworkPlayerStatus &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventNetworkLobbyPlayerList>(GuiEventNetworkLobbyPlayerList &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventRequestCollisionWorldEvent>(GuiEventRequestCollisionWorldEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<CgsGui::GuiEventTimeInfo>(GuiEventTimeInfo &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<CgsGui::GuiEventActiveUserIndex>(GuiEventActiveUserIndex &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventToggleChangeCarMessage>(GuiEventToggleChangeCarMessage &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<CgsGui::GuiEventControllerAxis>(GuiEventControllerAxis &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<CgsGui::GuiEventControllerInputDown>(GuiEventControllerInputDown &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<CgsGui::GuiEventControllerInputReleased>(GuiEventControllerInputReleased &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<CgsGui::GuiControllerDisconnected>(GuiControllerDisconnected &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<CgsGui::GuiEventSetLanguage>(GuiEventSetLanguage &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventRaceDistanceRemaining>(GuiEventRaceDistanceRemaining &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventRaceDistanceToCheckpoint>(GuiEventRaceDistanceToCheckpoint &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventCurrentStatus>(GuiEventCurrentStatus &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventScoreUpdate>(GuiEventScoreUpdate &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiRoadRageScoreUpdate>(GuiRoadRageScoreUpdate &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiPursuitScoreUpdate>(GuiPursuitScoreUpdate &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiCrashScoreUpdate>(GuiCrashScoreUpdate &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiAttackScoreUpdate>(GuiAttackScoreUpdate &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventOnlinePostEvent>(GuiEventOnlinePostEvent &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventUpdateEventStarts>(GuiEventUpdateEventStarts &, InputBuffer *);

		// CgsGuiModule.h:284
		void AddGuiEvent<BrnGui::GuiEventSpecificPresetRaces>(GuiEventSpecificPresetRaces &, InputBuffer *);

	}

}

// CgsGuiShared.h:40
namespace CgsGui {
	// Declaration
	struct GuiModule {
		// CgsGuiModule.h:179
		extern int32_t miGuiPM;

		// CgsGuiModule.h:180
		extern int32_t miModelUpdatePM;

		// CgsGuiModule.h:181
		extern int32_t miModelViewBridgePM;

		// CgsGuiModule.h:182
		extern int32_t miViewUpdatePM;

		// CgsGuiModule.h:183
		extern int32_t miGuiRenderPM;

	}

}

// CgsGuiModule.h:55
struct CgsGui::GuiModuleConfig {
	// CgsGuiModule.h:59
	int32_t miAptPersistentBunldePoolId;

	// CgsGuiModule.h:60
	int32_t miAptStreamedbundlePoolId;

	// CgsGuiModule.h:61
	int32_t miFontBundlePoolId;

	// CgsGuiModule.h:62
	int32_t miFSMBunldePoolId;

	// CgsGuiModule.h:63
	int32_t miLanguageBundlePoolId;

	// CgsGuiModule.h:64
	int32_t miTexturesBundlePoolId;

	// CgsGuiModule.h:65
	int32_t miGlobalTexturePoolId;

	// CgsGuiModule.h:68
	HeapMalloc * mpAptAllocator;

	// CgsGuiModule.h:69
	HeapMalloc * mpFSMAllocator;

	// CgsGuiModule.h:70
	HeapMalloc * mpLanguageAllocator;

	// CgsGuiModule.h:71
	rw::core::GeneralResourceAllocator * mpRendererAllocator;

	// CgsGuiModule.h:72
	LinearMalloc * mpGuiStateAllocator;

	// CgsGuiModule.h:73
	rw::IResourceAllocator * mpTextureAllocator;

	// CgsGuiModule.h:74
	LinearMalloc * mpFlaptAllocator;

}

// CgsGuiModule.h:179
extern int32_t miGuiPM;

// CgsGuiModule.h:180
extern int32_t miModelUpdatePM;

// CgsGuiModule.h:181
extern int32_t miModelViewBridgePM;

// CgsGuiModule.h:182
extern int32_t miViewUpdatePM;

// CgsGuiModule.h:183
extern int32_t miGuiRenderPM;

// CgsGuiModule.h:86
void CgsGui::GuiModule::GuiModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiModule.h:86
void CgsGui::GuiModule::~GuiModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct GuiModule {
		// CgsGuiModule.h:89
		enum GuiPrepareStage {
			E_PREPARE_START = 0,
			E_PREPARE_MANAGER = 1,
			E_PREPARE_MODEL = 2,
			E_PREPARE_SKU = 3,
			E_PREPARE_CHECK_BUTTON_MAPPING = 4,
			E_PREPARE_VIEW = 5,
			E_PREPARE_DONE = 6,
		}

		// CgsGuiModule.h:100
		enum GuiReleaseStage {
			E_RELEASE_START = 0,
			E_RELEASE_VIEW = 1,
			E_RELEASE_MODEL = 2,
			E_RELEASE_MANAGER = 3,
			E_RELEASE_DONE = 4,
		}

	}

}

// CgsGuiModule.h:86
struct CgsGui::GuiModule : public CgsModule::ModuleSingleBuffered {
	// CgsGuiModule.cpp:41
	extern int32_t miGuiPM;

	// CgsGuiModule.cpp:42
	extern int32_t miModelUpdatePM;

	// CgsGuiModule.cpp:43
	extern int32_t miModelViewBridgePM;

	// CgsGuiModule.cpp:44
	extern int32_t miViewUpdatePM;

	// CgsGuiModule.cpp:45
	extern int32_t miGuiRenderPM;

protected:
	// CgsGuiModule.h:190
	ModelModule mGuiModel;

	// CgsGuiModule.h:191
	CgsGui::ViewModule * mpGuiView;

	// CgsGuiModule.h:192
	Sku mSku;

	// CgsGuiModule.h:194
	InputBuffer::GuiEventQueue mStoredGuiEvents;

private:
	// CgsGuiModule.h:233
	CgsGui::GuiModule::GuiPrepareStage mePrepareStage;

	// CgsGuiModule.h:234
	CgsGui::GuiModule::GuiReleaseStage meReleaseStage;

	// CgsGuiModule.h:235
	bool mbCircleButtonMappingChanged;

public:
	// CgsGuiModule.cpp:62
	virtual void Construct(CgsGui::ViewModule *, bool);

	// CgsGuiModule.cpp:92
	virtual bool Prepare(GuiModuleConfig &);

	// CgsGuiModule.cpp:204
	virtual bool Release();

	// CgsGuiModule.cpp:277
	virtual void Destruct();

	// CgsGuiModule.cpp:298
	virtual void PreWorldUpdate(IOBufferStack *, IOBufferStack *, CgsGui::CgsGuiModuleIO::OutputBuffer *, OutputBuffer *);

	// CgsGuiModule.cpp:330
	virtual void Update(IOBufferStack *, IOBufferStack *, InputBuffer *, CgsGui::CgsGuiModuleIO::OutputBuffer *, InputBuffer *, OutputBuffer *, InputBuffer *, OutputBuffer *);

	// CgsGuiModule.cpp:426
	virtual void Render(InputBuffer *, InputBuffer *);

	// CgsGuiModule.h:299
	void SetClearEnabled(bool);

protected:
	// CgsGuiModule.cpp:479
	void AddGuiEventObserver(CgsGui::EventObserver *, int32_t);

	// CgsGuiModule.cpp:497
	void AddGuiEventObserver(CgsGui::EventObserver *, int32_t *, int32_t);

	// CgsGuiModule.cpp:522
	bool RegisterPriorityGuiObserver(CgsGui::EventObserver *, int32_t, int32_t *, uint32_t);

	// CgsGuiModule.cpp:540
	bool UnregisterPriorityGuiObserver(CgsGui::EventObserver *, int32_t);

	// CgsGuiModule.cpp:557
	bool StopPriorityGuiObserverBlocking(CgsGui::EventObserver *);

private:
	// CgsGuiModuleBridges.cpp:40
	void BridgeFromInputToView(InputBuffer *, const InputBuffer *);

	// CgsGuiModuleBridges.cpp:57
	void BridgeFromInputToModel(InputBuffer *, const InputBuffer *);

	// CgsGuiModuleBridges.cpp:76
	void BridgeFromModelToView(InputBuffer *, const OutputBuffer *);

	// CgsGuiModuleBridges.cpp:92
	void BridgeFromModelToOutput(CgsGui::CgsGuiModuleIO::OutputBuffer *, const OutputBuffer *);

	// CgsGuiModuleBridges.cpp:120
	void BridgeFromViewToOutput(CgsGui::CgsGuiModuleIO::OutputBuffer *, const OutputBuffer *);

	// CgsGuiModuleBridges.cpp:140
	void BridgeFromOutputToGui(const OutputBuffer *);

}

