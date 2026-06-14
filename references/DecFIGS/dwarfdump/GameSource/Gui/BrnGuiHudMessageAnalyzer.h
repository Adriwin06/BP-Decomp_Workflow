// BrnGuiHudMessageAnalyzer.h:79
extern const CgsID[3] KA_STUNT_INFO_MESSAGES;

// BrnGuiHudMessageAnalyzer.h:80
extern const CgsID[4] KA_OVER_DRIVE_MESSAGES;

// BrnGuiHudMessageAnalyzer.h:81
extern const CgsID[4] KA_PLAYER_STATS_LEVEL_UP_MESSAGES;

// BrnGuiHudMessageAnalyzer.h:95
extern const float32_t KF_REQUIRED_WRECK_DURATION;

// BrnGuiHudMessageAnalyzer.h:129
extern const CgsID[4][12] KA_SKILLZ_MESSAGE_IDS;

// BrnGuiHudMessageAnalyzer.h:132
extern const float32_t[3] mafBoostingThresholds;

// BrnGuiHudMessageAnalyzer.h:136
extern const int32_t[3] maiOncomingThresholds;

// BrnGuiHudMessageAnalyzer.h:139
extern const int32_t[3] maiAirThresholds;

// BrnGuiHudMessageAnalyzer.h:142
extern const int32_t[3] maiDriftThresholds;

// BrnGuiHudMessageAnalyzer.h:145
extern const int32_t[3] maiSpinThresholds;

// BrnGuiHudMessageAnalyzer.h:148
extern const int32_t[3] maiCheckingThresholds;

// BrnGuiHudMessageAnalyzer.h:151
extern const int32_t[3] maiNearMissThresholds;

// BrnGuiHudMessageAnalyzer.h:154
extern const int32_t[3] maiStuntChainThresholds;

// BrnGuiHudMessageAnalyzer.h:171
extern CgsID[] KA_CHALLENGE_END_MESSAGE_IDS;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct HudMessageAnalyzer {
		// BrnGuiHudMessageAnalyzer.h:62
		enum EBoostEarningStatus {
			E_BOOST_EARNING_STATUS_OFF = -2,
			E_BOOST_EARNING_STATUS_ON = -1,
			E_BOOST_EARNING_STATUS_GOOD = 0,
			E_BOOST_EARNING_STATUS_GREAT = 1,
			E_BOOST_EARNING_STATUS_AWESOME = 2,
			E_BOOST_EARNING_STATUS_COUNT = 3,
		}

		// BrnGuiHudMessageAnalyzer.h:83
		enum EWreckedMessageState {
			E_WRECKED_STATE_NOT_WRECKED = 0,
			E_WRECKED_STATE_WRECKING = 1,
			E_WRECKED_STATE_WRECKED = 2,
			E_WRECKED_STATE_WRECKED_STUNT = 3,
			E_WRECKED_STATE_WRECK_HANDLED = 4,
			E_WRECKED_STATE_WRECK_ABORTED = 5,
			E_WRECKED_STATE_WRECK_COUNT = 6,
		}

	}

}

// BrnGuiHudMessageAnalyzer.h:48
struct BrnGui::HudMessageAnalyzer {
private:
	// BrnGuiHudMessageAnalyzer.h:79
	extern const CgsID[3] KA_STUNT_INFO_MESSAGES;

	// BrnGuiHudMessageAnalyzer.h:80
	extern const CgsID[4] KA_OVER_DRIVE_MESSAGES;

	// BrnGuiHudMessageAnalyzer.h:81
	extern const CgsID[4] KA_PLAYER_STATS_LEVEL_UP_MESSAGES;

	// BrnGuiHudMessageAnalyzer.h:95
	extern const float32_t KF_REQUIRED_WRECK_DURATION;

	// BrnGuiHudMessageAnalyzer.h:97
	GuiAccessPointers * mpAccessPointers;

	// BrnGuiHudMessageAnalyzer.h:98
	BrnGui::GuiCache * mpGuiCache;

	// BrnGuiHudMessageAnalyzer.h:100
	extern const uint32_t KU_FREQUENCY_OF_DRIVETHROUGH_MAGIC_MESSAGES = 5;

	// BrnGuiHudMessageAnalyzer.h:102
	GuiStackEventQueue::GuiEventQueueLarge * mpViewOutputQueue;

	// BrnGuiHudMessageAnalyzer.h:103
	HudMessageDirector * mpHudMessageDirector;

	// BrnGuiHudMessageAnalyzer.h:105
	Random mRandom;

	// BrnGuiHudMessageAnalyzer.h:107
	bool mbCrashBoundaryMessagePending;

	// BrnGuiHudMessageAnalyzer.h:108
	BrnGui::GuiPlayerCrashingStateChangeEvent::CrashBarState meCrashEntryState;

	// BrnGuiHudMessageAnalyzer.h:109
	bool mbShowDrivableMessage;

	// BrnGuiHudMessageAnalyzer.h:111
	GuiHudMessage mDelayedForAfterCrashHudMessage;

	// BrnGuiHudMessageAnalyzer.h:112
	bool mbDelayedForAfterCrashHudMessagePending;

	// BrnGuiHudMessageAnalyzer.h:114
	BrnGui::HudMessageAnalyzer::EWreckedMessageState mePlayersCurrentlyWreckState;

	// BrnGuiHudMessageAnalyzer.h:115
	float32_t mfCurrentWreckDuration;

	// BrnGuiHudMessageAnalyzer.h:117
	bool mbTakedownMessagePending;

	// BrnGuiHudMessageAnalyzer.h:118
	GuiTakedownEvent mPendingTakedownEvent;

	// BrnGuiHudMessageAnalyzer.h:120
	CgsID mShutdownPending;

	// BrnGuiHudMessageAnalyzer.h:122
	bool mbTimeExtMsgPending;

	// BrnGuiHudMessageAnalyzer.h:123
	bool mbRoadOneMoreCrashToTotalledPending;

	// BrnGuiHudMessageAnalyzer.h:124
	bool mbRoadRageTargetReached;

	// BrnGuiHudMessageAnalyzer.h:126
	BrnNetwork::EPaybackType meDirtyTrickPending;

	// BrnGuiHudMessageAnalyzer.h:127
	char[64] macDTPendingVictim;

	// BrnGuiHudMessageAnalyzer.h:129
	extern const CgsID[4][12] KA_SKILLZ_MESSAGE_IDS;

	// BrnGuiHudMessageAnalyzer.h:131
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentBoostStatus;

	// BrnGuiHudMessageAnalyzer.h:132
	extern const float32_t[3] mafBoostingThresholds;

	// BrnGuiHudMessageAnalyzer.h:133
	float32_t mfBoostDuration;

	// BrnGuiHudMessageAnalyzer.h:135
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentOncomingStatus;

	// BrnGuiHudMessageAnalyzer.h:136
	extern const int32_t[3] maiOncomingThresholds;

	// BrnGuiHudMessageAnalyzer.h:138
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentAirStatus;

	// BrnGuiHudMessageAnalyzer.h:139
	extern const int32_t[3] maiAirThresholds;

	// BrnGuiHudMessageAnalyzer.h:141
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentDriftStatus;

	// BrnGuiHudMessageAnalyzer.h:142
	extern const int32_t[3] maiDriftThresholds;

	// BrnGuiHudMessageAnalyzer.h:144
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentSpinStatus;

	// BrnGuiHudMessageAnalyzer.h:145
	extern const int32_t[3] maiSpinThresholds;

	// BrnGuiHudMessageAnalyzer.h:147
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentCheckingStatus;

	// BrnGuiHudMessageAnalyzer.h:148
	extern const int32_t[3] maiCheckingThresholds;

	// BrnGuiHudMessageAnalyzer.h:150
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentNearMissStatus;

	// BrnGuiHudMessageAnalyzer.h:151
	extern const int32_t[3] maiNearMissThresholds;

	// BrnGuiHudMessageAnalyzer.h:153
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentStuntChainStatus;

	// BrnGuiHudMessageAnalyzer.h:154
	extern const int32_t[3] maiStuntChainThresholds;

	// BrnGuiHudMessageAnalyzer.h:156
	int32_t miPlayerStatBoost;

	// BrnGuiHudMessageAnalyzer.h:157
	int32_t miPlayerStatSpeed;

	// BrnGuiHudMessageAnalyzer.h:158
	int32_t miPlayerStatControl;

	// BrnGuiHudMessageAnalyzer.h:159
	int32_t miPlayerStatStrength;

	// BrnGuiHudMessageAnalyzer.h:161
	bool mbShowChangeCarMessage;

	// BrnGuiHudMessageAnalyzer.h:163
	bool mbTickerIsActive;

	// BrnGuiHudMessageAnalyzer.h:166
	bool mbBoostOkMessageJustTriggered;

	// BrnGuiHudMessageAnalyzer.h:168
	bool mbChallengeTriggered;

	// BrnGuiHudMessageAnalyzer.h:169
	bool mbChallengeEnded;

	// BrnGuiHudMessageAnalyzer.h:170
	GuiChallengeEndEvent mChallengedEndedData;

	// BrnGuiHudMessageAnalyzer.h:171
	extern CgsID[] KA_CHALLENGE_END_MESSAGE_IDS;

	// BrnGuiHudMessageAnalyzer.h:173
	float32_t mfRoadRulesMessageTimeout;

	// BrnGuiHudMessageAnalyzer.h:174
	bool mbNewRoadRulesHighScores;

	// BrnGuiHudMessageAnalyzer.h:175
	GuiEventRoadRuleNewHighScore mRoadRuleHighScoreData;

	// BrnGuiHudMessageAnalyzer.h:177
	int32_t miLastSignMultiplier;

	// BrnGuiHudMessageAnalyzer.h:179
	float32_t mfRoadRageAchievedMessageDelayTime;

	// BrnGuiHudMessageAnalyzer.h:181
	Profile * mpProfile;

	// BrnGuiHudMessageAnalyzer.h:183
	bool mbOnlineWinnerWaiting;

	// BrnGuiHudMessageAnalyzer.h:184
	PlayerName mOnlineWinnerName;

	// BrnGuiHudMessageAnalyzer.h:186
	float32_t mfTimeUntilGameCompletedHudMessage;

	// BrnGuiHudMessageAnalyzer.h:188
	bool mbGameCompletedHudMessagePending;

	// BrnGuiHudMessageAnalyzer.h:189
	bool mbTrophyCarUnlockPending;

	// BrnGuiHudMessageAnalyzer.h:190
	GuiEventTrophyCarUnlock mTrophyCarUnlockedEvent;

	// BrnGuiHudMessageAnalyzer.h:192
	bool mbOnlinePlayerLeft;

	// BrnGuiHudMessageAnalyzer.h:193
	PlayerName mOnlinePlayerLeftName;

public:
	// BrnGuiHudMessageAnalyzer.h:53
	void Construct(HudMessageDirector *);

	// BrnGuiHudMessageAnalyzer.h:59
	void Update(const InputBuffer::GuiEventInputQueue *, GuiStackEventQueue::GuiEventQueueLarge *);

	// BrnGuiHudMessageAnalyzer.h:75
	void SetAccessPointers(GuiAccessPointers *);

private:
	// BrnGuiHudMessageAnalyzer.h:198
	void TriggerMessage(CgsID) const;

	// BrnGuiHudMessageAnalyzer.h:203
	void TriggerMessage(const char *) const;

	// BrnGuiHudMessageAnalyzer.h:208
	void TriggerMessage(const GuiHudMessage *) const;

	// BrnGuiHudMessageAnalyzer.h:214
	const char * GetOnlineName(EActiveRaceCarIndex, bool *) const;

	// BrnGuiHudMessageAnalyzer.h:220
	const char * GetOnlineName(RoadRulesRecvData::NetworkPlayerID, bool *) const;

	// BrnGuiHudMessageAnalyzer.h:225
	void GetLandmarkName(char *, CgsID) const;

	// BrnGuiHudMessageAnalyzer.h:229
	void AbortWreckedMessage();

	// BrnGuiHudMessageAnalyzer.h:236
	void HandleTakedown(const GuiTakedownEvent *);

	// BrnGuiHudMessageAnalyzer.h:242
	void ConstructTakedownMessage(GuiHudMessage *, const GuiTakedownEvent *);

	// BrnGuiHudMessageAnalyzer.h:247
	void HandleShutdown(const GuiShutdownEvent *);

	// BrnGuiHudMessageAnalyzer.h:251
	void HandleEndShutdown();

	// BrnGuiHudMessageAnalyzer.h:256
	void HandleCrashedEvent(BrnGui::GuiPlayerCrashingStateChangeEvent::CrashBarState);

	// BrnGuiHudMessageAnalyzer.h:261
	void HandleWreckedEvent(const GuiEventPlayerWrecked *);

	// BrnGuiHudMessageAnalyzer.h:266
	void HandleNetworkPlayerCrashedEvent(const GuiNetworkPlayerCrashingEvent *);

	// BrnGuiHudMessageAnalyzer.h:271
	void HandleImpact(const GuiImpactEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:276
	void HandleNetworkBattling(const GuiNetworkPlayerBattlingEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:281
	void HandleNetworkTailing(const GuiNetworkPlayerOnTailEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:286
	void HandleJoinedEvent(const GuiEventCarJoinedEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:291
	// Declaration
	void HandleEliminatedEvent() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiEventTypeDefs.h:1542
		typedef CgsGui::GuiEvent<149> GuiEventCarEliminatedFromEvent;

	}

	// BrnGuiHudMessageAnalyzer.h:296
	void HandleRoadRagePlayerDamageEvent(const GuiEventRoadRagePlayerDamage *);

	// BrnGuiHudMessageAnalyzer.h:301
	void HandleFailedToStartBurningRoute(const GuiEventFailedToStartEvent *);

	// BrnGuiHudMessageAnalyzer.h:306
	void HandleRivalryChangeEvent(const GuiRivalryStatusChange *) const;

	// BrnGuiHudMessageAnalyzer.h:311
	void HandleRivalFleeingEvent(const GuiRivalIsFleeing *) const;

	// BrnGuiHudMessageAnalyzer.h:316
	// Declaration
	void HandleStartPursuitEvent(const GuiEventStartPursuitEvent *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiEventTypeDefs.h:4928
		typedef CgsGui::GuiEvent<428> GuiEventStartPursuitEvent;

	}

	// BrnGuiHudMessageAnalyzer.h:321
	void HandleDriveThrough(const GuiDriveThroughEvent *);

	// BrnGuiHudMessageAnalyzer.h:326
	void HandleSignatureStunt(const GuiSignatureStuntEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:331
	void HandleNearMiss(const GuiNearMissEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:336
	void HandleDirtyTrickNew(const GuiDirtyTrickNewEvent *);

	// BrnGuiHudMessageAnalyzer.h:341
	void HandleDirtyTrickTriggered(const GuiDirtyTrickTriggerEvent *);

	// BrnGuiHudMessageAnalyzer.h:346
	void HandleDirtyTrickEnded(const GuiDirtyTrickEndedEvent *);

	// BrnGuiHudMessageAnalyzer.h:351
	void HandleLiveRevengeUpdate(const GuiLiveRevengeUpdateEvent *);

	// BrnGuiHudMessageAnalyzer.h:356
	void HandleOvertake(const GuiOvertakeEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:361
	void HandleEventDistanceToFinish(const GuiInEventDistanceToFinish *) const;

	// BrnGuiHudMessageAnalyzer.h:366
	void HandleEventLeaderSplitTime(const GuiInEventLeaderSplit *) const;

	// BrnGuiHudMessageAnalyzer.h:370
	void HandleEventNeckAndNeck() const;

	// BrnGuiHudMessageAnalyzer.h:375
	void HandleEventRivalProgress(const GuiInEventRivalProgress *) const;

	// BrnGuiHudMessageAnalyzer.h:380
	void HandleEventFinisher(const GuiInEventFinisher *);

	// BrnGuiHudMessageAnalyzer.h:384
	void TriggerEventFinisher();

	// BrnGuiHudMessageAnalyzer.h:388
	void HandleRoadRageTimeExtension();

	// BrnGuiHudMessageAnalyzer.h:393
	void HandleTookLead(const GuiTookLeadEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:398
	void HandleTookLast(const GuiTookLastEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:403
	void HandleFinishRace(const GuiFinishRaceEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:407
	void HandleShortcut(const GuiOffenceShortcutEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:410
	void HandleBlueTeamIsEscaping(const GuiBlueTeamIsEscapingEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:413
	void HandleBlueTeamIsBehindYou(const GuiBlueTeamIsBehindYouEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:416
	void HandlePlayerEliminated(const GuiPlayerEliminatedEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:419
	void HandleLocalPlayerEliminated(const GuiLocalPlayerEliminatedEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:422
	void HandleLastBlueTeamMember(const GuiLastBlueTeamMemberEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:425
	void HandleLeaderPassedMileBoundary(const GuiLeaderPassedMileBoundaryEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:428
	void HandleLeaderPassedKMBoundary(const GuiLeaderPassedKMBoundaryEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:431
	void HandleTraitorousTakedown(const GuiTraitorousTakedownEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:435
	void HandleBoostEarningMessages(const GuiEventBoostInfo *);

	// BrnGuiHudMessageAnalyzer.h:439
	void HandleOncomingEarningMessages(const GuiOncomingEvent *);

	// BrnGuiHudMessageAnalyzer.h:443
	void HandleAirEarningMessages(const GuiInAirEvent *);

	// BrnGuiHudMessageAnalyzer.h:447
	void HandleDriftEarningMessages(const GuiDriftingEvent *);

	// BrnGuiHudMessageAnalyzer.h:451
	void HandleSpinEarningMessages(const GuiSpinningEvent *);

	// BrnGuiHudMessageAnalyzer.h:455
	void HandleNearMissEarningMessages(const GuiNearMissEvent *);

	// BrnGuiHudMessageAnalyzer.h:459
	void HandleStuntsEarningMessages(const GuiStuntEvent *);

	// BrnGuiHudMessageAnalyzer.h:463
	void HandleBurningHomeRunCheckpointReached(const GuiBHRCheckpointReachedEvent *);

	// BrnGuiHudMessageAnalyzer.h:468
	void HandleRaceCheckpointReached(const GuiRaceCheckpointReached *);

	// BrnGuiHudMessageAnalyzer.h:473
	void HandleBurningHomeRunRunnerCrashes(const GuiHUDMessageBHRRunnerCrashed *);

	// BrnGuiHudMessageAnalyzer.h:478
	void HandleRoadRageTargetReached(const GuiEventPlayerReachedRoadRageTarget *);

	// BrnGuiHudMessageAnalyzer.h:482
	void HandleStuntPerformed(const GuiHUDMessageStuntPerformed *);

	// BrnGuiHudMessageAnalyzer.h:486
	void HandleComboPerformed(const GuiHUDMessageComboPerformed *);

	// BrnGuiHudMessageAnalyzer.h:490
	void HandleShowtimeMultiplierMessage(const GuiHUDMessageShowtimeMultiplier *);

	// BrnGuiHudMessageAnalyzer.h:494
	void HandleSignSmashMessage(const GuiHUDMessageSignSmashed *);

	// BrnGuiHudMessageAnalyzer.h:498
	void HandleCrushComboMessage(const GuiHUDMessageCrushCombo *);

	// BrnGuiHudMessageAnalyzer.h:502
	void HandleGenericHUDMessage(const GuiGenericHUDMessage *);

	// BrnGuiHudMessageAnalyzer.h:506
	void HandleOnlineTeamChangeMessage(const GuiOnlineTeamChangeEvent *);

	// BrnGuiHudMessageAnalyzer.h:510
	void HandleChainedBoost(const GuiEventBoostInfo *);

	// BrnGuiHudMessageAnalyzer.h:515
	void HandleRemotePlayerDisconnect(const GuiNetworkRemotePlayerDisconnectEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:520
	void HandleBurningHomeRunTeamChange(EActiveRaceCarIndex);

	// BrnGuiHudMessageAnalyzer.h:525
	void HandleGameModeStarted(const GuiGameModeStarted *);

	// BrnGuiHudMessageAnalyzer.h:530
	void HandleNewRoadRulesHighScore(const GuiEventRoadRuleNewHighScore *);

	// BrnGuiHudMessageAnalyzer.h:535
	void HandleRoadRuleFailed(const GuiEventRoadRuleFail *);

	// BrnGuiHudMessageAnalyzer.h:540
	void HandleShowtimeModeSwitch(const GuiShowtimeModeSwitch *);

	// BrnGuiHudMessageAnalyzer.h:545
	void HandlePowerParkingResult(const GuiPowerParkResult *);

	// BrnGuiHudMessageAnalyzer.h:550
	void HandlePlayerJoinedLobby(const GuiEventNetworkPlayerJoinedLobby *);

	// BrnGuiHudMessageAnalyzer.h:555
	void HandlePlayerLeftLobby(const GuiEventNetworkPlayerLeftLobby *);

	// BrnGuiHudMessageAnalyzer.h:559
	void TriggerPlayerLeftLobby();

	// BrnGuiHudMessageAnalyzer.h:564
	void HandleJumpStarted(const GuiEventJumpStarted *);

	// BrnGuiHudMessageAnalyzer.h:569
	void HandleStuntInfo(const GuiEventStuntInfo *);

	// BrnGuiHudMessageAnalyzer.h:574
	void HandleStuntsComplete(const GuiEventStuntAreaComplete *);

	// BrnGuiHudMessageAnalyzer.h:577
	void HandleStuntsComplete(const GuiEventStuntAllComplete *);

	// BrnGuiHudMessageAnalyzer.h:582
	void HandleTrophyCarUnlocked(const GuiEventTrophyCarUnlock *);

	// BrnGuiHudMessageAnalyzer.h:586
	void TriggerChallengeTriggeredMessage();

	// BrnGuiHudMessageAnalyzer.h:591
	void HandleChallengeEnded(const GuiChallengeEndEvent *);

	// BrnGuiHudMessageAnalyzer.h:595
	void TriggerChallengeEndedMessage();

	// BrnGuiHudMessageAnalyzer.h:599
	void TriggerNewRoadRulesHighScoreMessage();

	// BrnGuiHudMessageAnalyzer.h:608
	void HandleAllJunctionsFound();

	// BrnGuiHudMessageAnalyzer.h:613
	void HandleAllJunctionsOfTypeFound(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnGuiHudMessageAnalyzer.h:618
	void HandleAllEventsOfTypeComplete(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnGuiHudMessageAnalyzer.h:627
	void HandleAllDriveThrusFound();

	// BrnGuiHudMessageAnalyzer.h:634
	bool AddGamerTagToMessage(GuiHudMessage *, const char *, EActiveRaceCarIndex) const;

	// BrnGuiHudMessageAnalyzer.h:638
	const char * GetMyString(const char *);

}

// BrnGuiHudMessageAnalyzer.h:48
struct BrnGui::HudMessageAnalyzer {
private:
	// BrnGuiHudMessageAnalyzer.h:79
	extern const CgsID[3] KA_STUNT_INFO_MESSAGES;

	// BrnGuiHudMessageAnalyzer.h:80
	extern const CgsID[4] KA_OVER_DRIVE_MESSAGES;

	// BrnGuiHudMessageAnalyzer.h:81
	extern const CgsID[4] KA_PLAYER_STATS_LEVEL_UP_MESSAGES;

	// BrnGuiHudMessageAnalyzer.h:95
	extern const float32_t KF_REQUIRED_WRECK_DURATION;

	// BrnGuiHudMessageAnalyzer.h:97
	GuiAccessPointers * mpAccessPointers;

	// BrnGuiHudMessageAnalyzer.h:98
	BrnGui::GuiCache * mpGuiCache;

	// BrnGuiHudMessageAnalyzer.h:100
	extern const uint32_t KU_FREQUENCY_OF_DRIVETHROUGH_MAGIC_MESSAGES = 5;

	// BrnGuiHudMessageAnalyzer.h:102
	GuiStackEventQueue::GuiEventQueueLarge * mpViewOutputQueue;

	// BrnGuiHudMessageAnalyzer.h:103
	HudMessageDirector * mpHudMessageDirector;

	// BrnGuiHudMessageAnalyzer.h:105
	Random mRandom;

	// BrnGuiHudMessageAnalyzer.h:107
	bool mbCrashBoundaryMessagePending;

	// BrnGuiHudMessageAnalyzer.h:108
	BrnGui::GuiPlayerCrashingStateChangeEvent::CrashBarState meCrashEntryState;

	// BrnGuiHudMessageAnalyzer.h:109
	bool mbShowDrivableMessage;

	// BrnGuiHudMessageAnalyzer.h:111
	GuiHudMessage mDelayedForAfterCrashHudMessage;

	// BrnGuiHudMessageAnalyzer.h:112
	bool mbDelayedForAfterCrashHudMessagePending;

	// BrnGuiHudMessageAnalyzer.h:114
	BrnGui::HudMessageAnalyzer::EWreckedMessageState mePlayersCurrentlyWreckState;

	// BrnGuiHudMessageAnalyzer.h:115
	float32_t mfCurrentWreckDuration;

	// BrnGuiHudMessageAnalyzer.h:117
	bool mbTakedownMessagePending;

	// BrnGuiHudMessageAnalyzer.h:118
	GuiTakedownEvent mPendingTakedownEvent;

	// BrnGuiHudMessageAnalyzer.h:120
	CgsID mShutdownPending;

	// BrnGuiHudMessageAnalyzer.h:122
	bool mbTimeExtMsgPending;

	// BrnGuiHudMessageAnalyzer.h:123
	bool mbRoadOneMoreCrashToTotalledPending;

	// BrnGuiHudMessageAnalyzer.h:124
	bool mbRoadRageTargetReached;

	// BrnGuiHudMessageAnalyzer.h:126
	BrnNetwork::EPaybackType meDirtyTrickPending;

	// BrnGuiHudMessageAnalyzer.h:127
	char[64] macDTPendingVictim;

	// BrnGuiHudMessageAnalyzer.h:129
	extern const CgsID[4][12] KA_SKILLZ_MESSAGE_IDS;

	// BrnGuiHudMessageAnalyzer.h:131
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentBoostStatus;

	// BrnGuiHudMessageAnalyzer.h:132
	extern const float32_t[3] mafBoostingThresholds;

	// BrnGuiHudMessageAnalyzer.h:133
	float32_t mfBoostDuration;

	// BrnGuiHudMessageAnalyzer.h:135
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentOncomingStatus;

	// BrnGuiHudMessageAnalyzer.h:136
	extern const int32_t[3] maiOncomingThresholds;

	// BrnGuiHudMessageAnalyzer.h:138
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentAirStatus;

	// BrnGuiHudMessageAnalyzer.h:139
	extern const int32_t[3] maiAirThresholds;

	// BrnGuiHudMessageAnalyzer.h:141
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentDriftStatus;

	// BrnGuiHudMessageAnalyzer.h:142
	extern const int32_t[3] maiDriftThresholds;

	// BrnGuiHudMessageAnalyzer.h:144
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentSpinStatus;

	// BrnGuiHudMessageAnalyzer.h:145
	extern const int32_t[3] maiSpinThresholds;

	// BrnGuiHudMessageAnalyzer.h:147
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentCheckingStatus;

	// BrnGuiHudMessageAnalyzer.h:148
	extern const int32_t[3] maiCheckingThresholds;

	// BrnGuiHudMessageAnalyzer.h:150
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentNearMissStatus;

	// BrnGuiHudMessageAnalyzer.h:151
	extern const int32_t[3] maiNearMissThresholds;

	// BrnGuiHudMessageAnalyzer.h:153
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentStuntChainStatus;

	// BrnGuiHudMessageAnalyzer.h:154
	extern const int32_t[3] maiStuntChainThresholds;

	// BrnGuiHudMessageAnalyzer.h:156
	int32_t miPlayerStatBoost;

	// BrnGuiHudMessageAnalyzer.h:157
	int32_t miPlayerStatSpeed;

	// BrnGuiHudMessageAnalyzer.h:158
	int32_t miPlayerStatControl;

	// BrnGuiHudMessageAnalyzer.h:159
	int32_t miPlayerStatStrength;

	// BrnGuiHudMessageAnalyzer.h:161
	bool mbShowChangeCarMessage;

	// BrnGuiHudMessageAnalyzer.h:163
	bool mbTickerIsActive;

	// BrnGuiHudMessageAnalyzer.h:166
	bool mbBoostOkMessageJustTriggered;

	// BrnGuiHudMessageAnalyzer.h:168
	bool mbChallengeTriggered;

	// BrnGuiHudMessageAnalyzer.h:169
	bool mbChallengeEnded;

	// BrnGuiHudMessageAnalyzer.h:170
	GuiChallengeEndEvent mChallengedEndedData;

	// BrnGuiHudMessageAnalyzer.h:171
	extern CgsID[] KA_CHALLENGE_END_MESSAGE_IDS;

	// BrnGuiHudMessageAnalyzer.h:173
	float32_t mfRoadRulesMessageTimeout;

	// BrnGuiHudMessageAnalyzer.h:174
	bool mbNewRoadRulesHighScores;

	// BrnGuiHudMessageAnalyzer.h:175
	GuiEventRoadRuleNewHighScore mRoadRuleHighScoreData;

	// BrnGuiHudMessageAnalyzer.h:177
	int32_t miLastSignMultiplier;

	// BrnGuiHudMessageAnalyzer.h:179
	float32_t mfRoadRageAchievedMessageDelayTime;

	// BrnGuiHudMessageAnalyzer.h:181
	Profile * mpProfile;

	// BrnGuiHudMessageAnalyzer.h:183
	bool mbOnlineWinnerWaiting;

	// BrnGuiHudMessageAnalyzer.h:184
	PlayerName mOnlineWinnerName;

	// BrnGuiHudMessageAnalyzer.h:186
	float32_t mfTimeUntilGameCompletedHudMessage;

	// BrnGuiHudMessageAnalyzer.h:188
	bool mbGameCompletedHudMessagePending;

	// BrnGuiHudMessageAnalyzer.h:189
	bool mbTrophyCarUnlockPending;

	// BrnGuiHudMessageAnalyzer.h:190
	GuiEventTrophyCarUnlock mTrophyCarUnlockedEvent;

	// BrnGuiHudMessageAnalyzer.h:192
	bool mbOnlinePlayerLeft;

	// BrnGuiHudMessageAnalyzer.h:193
	PlayerName mOnlinePlayerLeftName;

public:
	// BrnGuiHudMessageAnalyzer.h:53
	void Construct(HudMessageDirector *);

	// BrnGuiHudMessageAnalyzer.h:59
	void Update(const InputBuffer::GuiEventInputQueue *, GuiStackEventQueue::GuiEventQueueLarge *);

	// BrnGuiHudMessageAnalyzer.h:75
	void SetAccessPointers(GuiAccessPointers *);

private:
	// BrnGuiHudMessageAnalyzer.h:198
	void TriggerMessage(CgsID) const;

	// BrnGuiHudMessageAnalyzer.h:203
	void TriggerMessage(const char *) const;

	// BrnGuiHudMessageAnalyzer.h:208
	void TriggerMessage(const GuiHudMessage *) const;

	// BrnGuiHudMessageAnalyzer.h:214
	const char * GetOnlineName(EActiveRaceCarIndex, bool *) const;

	// BrnGuiHudMessageAnalyzer.h:220
	const char * GetOnlineName(GuiEventNetworkLaunching::NetworkPlayerID, bool *) const;

	// BrnGuiHudMessageAnalyzer.h:225
	void GetLandmarkName(char *, CgsID) const;

	// BrnGuiHudMessageAnalyzer.h:229
	void AbortWreckedMessage();

	// BrnGuiHudMessageAnalyzer.h:236
	void HandleTakedown(const GuiTakedownEvent *);

	// BrnGuiHudMessageAnalyzer.h:242
	void ConstructTakedownMessage(GuiHudMessage *, const GuiTakedownEvent *);

	// BrnGuiHudMessageAnalyzer.h:247
	void HandleShutdown(const GuiShutdownEvent *);

	// BrnGuiHudMessageAnalyzer.h:251
	void HandleEndShutdown();

	// BrnGuiHudMessageAnalyzer.h:256
	void HandleCrashedEvent(BrnGui::GuiPlayerCrashingStateChangeEvent::CrashBarState);

	// BrnGuiHudMessageAnalyzer.h:261
	void HandleWreckedEvent(const GuiEventPlayerWrecked *);

	// BrnGuiHudMessageAnalyzer.h:266
	void HandleNetworkPlayerCrashedEvent(const GuiNetworkPlayerCrashingEvent *);

	// BrnGuiHudMessageAnalyzer.h:271
	void HandleImpact(const GuiImpactEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:276
	void HandleNetworkBattling(const GuiNetworkPlayerBattlingEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:281
	void HandleNetworkTailing(const GuiNetworkPlayerOnTailEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:286
	void HandleJoinedEvent(const GuiEventCarJoinedEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:291
	// Declaration
	void HandleEliminatedEvent(const GuiEventCarEliminatedFromEvent *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiEventTypeDefs.h:1542
		typedef CgsGui::GuiEvent<149> GuiEventCarEliminatedFromEvent;

	}

	// BrnGuiHudMessageAnalyzer.h:296
	void HandleRoadRagePlayerDamageEvent(const GuiEventRoadRagePlayerDamage *);

	// BrnGuiHudMessageAnalyzer.h:301
	void HandleFailedToStartBurningRoute(const GuiEventFailedToStartEvent *);

	// BrnGuiHudMessageAnalyzer.h:306
	void HandleRivalryChangeEvent(const GuiRivalryStatusChange *) const;

	// BrnGuiHudMessageAnalyzer.h:311
	void HandleRivalFleeingEvent(const GuiRivalIsFleeing *) const;

	// BrnGuiHudMessageAnalyzer.h:316
	// Declaration
	void HandleStartPursuitEvent() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiEventTypeDefs.h:4928
		typedef CgsGui::GuiEvent<428> GuiEventStartPursuitEvent;

	}

	// BrnGuiHudMessageAnalyzer.h:321
	void HandleDriveThrough(const GuiDriveThroughEvent *);

	// BrnGuiHudMessageAnalyzer.h:326
	void HandleSignatureStunt(const GuiSignatureStuntEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:331
	void HandleNearMiss(const GuiNearMissEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:336
	void HandleDirtyTrickNew(const GuiDirtyTrickNewEvent *);

	// BrnGuiHudMessageAnalyzer.h:341
	void HandleDirtyTrickTriggered(const GuiDirtyTrickTriggerEvent *);

	// BrnGuiHudMessageAnalyzer.h:346
	void HandleDirtyTrickEnded(const GuiDirtyTrickEndedEvent *);

	// BrnGuiHudMessageAnalyzer.h:351
	void HandleLiveRevengeUpdate(const GuiLiveRevengeUpdateEvent *);

	// BrnGuiHudMessageAnalyzer.h:356
	void HandleOvertake(const GuiOvertakeEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:361
	void HandleEventDistanceToFinish(const GuiInEventDistanceToFinish *) const;

	// BrnGuiHudMessageAnalyzer.h:366
	void HandleEventLeaderSplitTime(const GuiInEventLeaderSplit *) const;

	// BrnGuiHudMessageAnalyzer.h:370
	void HandleEventNeckAndNeck() const;

	// BrnGuiHudMessageAnalyzer.h:375
	void HandleEventRivalProgress(const GuiInEventRivalProgress *) const;

	// BrnGuiHudMessageAnalyzer.h:380
	void HandleEventFinisher(const GuiInEventFinisher *);

	// BrnGuiHudMessageAnalyzer.h:384
	void TriggerEventFinisher();

	// BrnGuiHudMessageAnalyzer.h:388
	void HandleRoadRageTimeExtension();

	// BrnGuiHudMessageAnalyzer.h:393
	void HandleTookLead(const GuiTookLeadEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:398
	void HandleTookLast(const GuiTookLastEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:403
	void HandleFinishRace(const GuiFinishRaceEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:407
	void HandleShortcut(const GuiOffenceShortcutEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:410
	void HandleBlueTeamIsEscaping(const GuiBlueTeamIsEscapingEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:413
	void HandleBlueTeamIsBehindYou(const GuiBlueTeamIsBehindYouEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:416
	void HandlePlayerEliminated(const GuiPlayerEliminatedEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:419
	void HandleLocalPlayerEliminated(const GuiLocalPlayerEliminatedEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:422
	void HandleLastBlueTeamMember(const GuiLastBlueTeamMemberEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:425
	void HandleLeaderPassedMileBoundary(const GuiLeaderPassedMileBoundaryEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:428
	void HandleLeaderPassedKMBoundary(const GuiLeaderPassedKMBoundaryEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:431
	void HandleTraitorousTakedown(const GuiTraitorousTakedownEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:435
	void HandleBoostEarningMessages(const GuiEventBoostInfo *);

	// BrnGuiHudMessageAnalyzer.h:439
	void HandleOncomingEarningMessages(const GuiOncomingEvent *);

	// BrnGuiHudMessageAnalyzer.h:443
	void HandleAirEarningMessages(const GuiInAirEvent *);

	// BrnGuiHudMessageAnalyzer.h:447
	void HandleDriftEarningMessages(const GuiDriftingEvent *);

	// BrnGuiHudMessageAnalyzer.h:451
	void HandleSpinEarningMessages(const GuiSpinningEvent *);

	// BrnGuiHudMessageAnalyzer.h:455
	void HandleNearMissEarningMessages(const GuiNearMissEvent *);

	// BrnGuiHudMessageAnalyzer.h:459
	void HandleStuntsEarningMessages(const GuiStuntEvent *);

	// BrnGuiHudMessageAnalyzer.h:463
	void HandleBurningHomeRunCheckpointReached(const GuiBHRCheckpointReachedEvent *);

	// BrnGuiHudMessageAnalyzer.h:468
	void HandleRaceCheckpointReached(const GuiRaceCheckpointReached *);

	// BrnGuiHudMessageAnalyzer.h:473
	void HandleBurningHomeRunRunnerCrashes(const GuiHUDMessageBHRRunnerCrashed *);

	// BrnGuiHudMessageAnalyzer.h:478
	void HandleRoadRageTargetReached(const GuiEventPlayerReachedRoadRageTarget *);

	// BrnGuiHudMessageAnalyzer.h:482
	void HandleStuntPerformed(const GuiHUDMessageStuntPerformed *);

	// BrnGuiHudMessageAnalyzer.h:486
	void HandleComboPerformed(const GuiHUDMessageComboPerformed *);

	// BrnGuiHudMessageAnalyzer.h:490
	void HandleShowtimeMultiplierMessage(const GuiHUDMessageShowtimeMultiplier *);

	// BrnGuiHudMessageAnalyzer.h:494
	void HandleSignSmashMessage(const GuiHUDMessageSignSmashed *);

	// BrnGuiHudMessageAnalyzer.h:498
	void HandleCrushComboMessage(const GuiHUDMessageCrushCombo *);

	// BrnGuiHudMessageAnalyzer.h:502
	void HandleGenericHUDMessage(const GuiGenericHUDMessage *);

	// BrnGuiHudMessageAnalyzer.h:506
	void HandleOnlineTeamChangeMessage(const GuiOnlineTeamChangeEvent *);

	// BrnGuiHudMessageAnalyzer.h:510
	void HandleChainedBoost(const GuiEventBoostInfo *);

	// BrnGuiHudMessageAnalyzer.h:515
	void HandleRemotePlayerDisconnect(const GuiNetworkRemotePlayerDisconnectEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:520
	void HandleBurningHomeRunTeamChange(EActiveRaceCarIndex);

	// BrnGuiHudMessageAnalyzer.h:525
	void HandleGameModeStarted(const GuiGameModeStarted *);

	// BrnGuiHudMessageAnalyzer.h:530
	void HandleNewRoadRulesHighScore(const GuiEventRoadRuleNewHighScore *);

	// BrnGuiHudMessageAnalyzer.h:535
	void HandleRoadRuleFailed(const GuiEventRoadRuleFail *);

	// BrnGuiHudMessageAnalyzer.h:540
	void HandleShowtimeModeSwitch(const GuiShowtimeModeSwitch *);

	// BrnGuiHudMessageAnalyzer.h:545
	void HandlePowerParkingResult(const GuiPowerParkResult *);

	// BrnGuiHudMessageAnalyzer.h:550
	void HandlePlayerJoinedLobby(const GuiEventNetworkPlayerJoinedLobby *);

	// BrnGuiHudMessageAnalyzer.h:555
	void HandlePlayerLeftLobby(const GuiEventNetworkPlayerLeftLobby *);

	// BrnGuiHudMessageAnalyzer.h:559
	void TriggerPlayerLeftLobby();

	// BrnGuiHudMessageAnalyzer.h:564
	void HandleJumpStarted(const GuiEventJumpStarted *);

	// BrnGuiHudMessageAnalyzer.h:569
	void HandleStuntInfo(const GuiEventStuntInfo *);

	// BrnGuiHudMessageAnalyzer.h:574
	void HandleStuntsComplete(const GuiEventStuntAreaComplete *);

	// BrnGuiHudMessageAnalyzer.h:577
	void HandleStuntsComplete(const GuiEventStuntAllComplete *);

	// BrnGuiHudMessageAnalyzer.h:582
	void HandleTrophyCarUnlocked(const GuiEventTrophyCarUnlock *);

	// BrnGuiHudMessageAnalyzer.h:586
	void TriggerChallengeTriggeredMessage();

	// BrnGuiHudMessageAnalyzer.h:591
	void HandleChallengeEnded(const GuiChallengeEndEvent *);

	// BrnGuiHudMessageAnalyzer.h:595
	void TriggerChallengeEndedMessage();

	// BrnGuiHudMessageAnalyzer.h:599
	void TriggerNewRoadRulesHighScoreMessage();

	// BrnGuiHudMessageAnalyzer.h:608
	void HandleAllJunctionsFound();

	// BrnGuiHudMessageAnalyzer.h:613
	void HandleAllJunctionsOfTypeFound(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnGuiHudMessageAnalyzer.h:618
	void HandleAllEventsOfTypeComplete(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnGuiHudMessageAnalyzer.h:627
	void HandleAllDriveThrusFound();

	// BrnGuiHudMessageAnalyzer.h:634
	bool AddGamerTagToMessage(GuiHudMessage *, const char *, EActiveRaceCarIndex) const;

	// BrnGuiHudMessageAnalyzer.h:638
	const char * GetMyString(const char *);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct HudMessageAnalyzer {
		// BrnGuiHudMessageAnalyzer.h:62
		enum EBoostEarningStatus {
			E_BOOST_EARNING_STATUS_OFF = -2,
			E_BOOST_EARNING_STATUS_ON = -1,
			E_BOOST_EARNING_STATUS_GOOD = 0,
			E_BOOST_EARNING_STATUS_GREAT = 1,
			E_BOOST_EARNING_STATUS_AWESOME = 2,
			E_BOOST_EARNING_STATUS_COUNT = 3,
		}

		// BrnGuiHudMessageAnalyzer.h:83
		enum EWreckedMessageState {
			E_WRECKED_STATE_NOT_WRECKED = 0,
			E_WRECKED_STATE_WRECKING = 1,
			E_WRECKED_STATE_WRECKED = 2,
			E_WRECKED_STATE_WRECKED_STUNT = 3,
			E_WRECKED_STATE_WRECK_HANDLED = 4,
			E_WRECKED_STATE_WRECK_ABORTED = 5,
			E_WRECKED_STATE_WRECK_COUNT = 6,
		}

	}

}

// BrnGuiHudMessageAnalyzer.h:48
struct BrnGui::HudMessageAnalyzer {
private:
	// BrnGuiHudMessageAnalyzer.h:79
	extern const CgsID[3] KA_STUNT_INFO_MESSAGES;

	// BrnGuiHudMessageAnalyzer.h:80
	extern const CgsID[4] KA_OVER_DRIVE_MESSAGES;

	// BrnGuiHudMessageAnalyzer.h:81
	extern const CgsID[4] KA_PLAYER_STATS_LEVEL_UP_MESSAGES;

	// BrnGuiHudMessageAnalyzer.h:95
	extern const float32_t KF_REQUIRED_WRECK_DURATION;

	// BrnGuiHudMessageAnalyzer.h:97
	GuiAccessPointers * mpAccessPointers;

	// BrnGuiHudMessageAnalyzer.h:98
	BrnGui::GuiCache * mpGuiCache;

	// BrnGuiHudMessageAnalyzer.h:100
	extern const uint32_t KU_FREQUENCY_OF_DRIVETHROUGH_MAGIC_MESSAGES = 5;

	// BrnGuiHudMessageAnalyzer.h:102
	GuiStackEventQueue::GuiEventQueueLarge * mpViewOutputQueue;

	// BrnGuiHudMessageAnalyzer.h:103
	HudMessageDirector * mpHudMessageDirector;

	// BrnGuiHudMessageAnalyzer.h:105
	Random mRandom;

	// BrnGuiHudMessageAnalyzer.h:107
	bool mbCrashBoundaryMessagePending;

	// BrnGuiHudMessageAnalyzer.h:108
	BrnGui::GuiPlayerCrashingStateChangeEvent::CrashBarState meCrashEntryState;

	// BrnGuiHudMessageAnalyzer.h:109
	bool mbShowDrivableMessage;

	// BrnGuiHudMessageAnalyzer.h:111
	GuiHudMessage mDelayedForAfterCrashHudMessage;

	// BrnGuiHudMessageAnalyzer.h:112
	bool mbDelayedForAfterCrashHudMessagePending;

	// BrnGuiHudMessageAnalyzer.h:114
	BrnGui::HudMessageAnalyzer::EWreckedMessageState mePlayersCurrentlyWreckState;

	// BrnGuiHudMessageAnalyzer.h:115
	float32_t mfCurrentWreckDuration;

	// BrnGuiHudMessageAnalyzer.h:117
	bool mbTakedownMessagePending;

	// BrnGuiHudMessageAnalyzer.h:118
	GuiTakedownEvent mPendingTakedownEvent;

	// BrnGuiHudMessageAnalyzer.h:120
	CgsID mShutdownPending;

	// BrnGuiHudMessageAnalyzer.h:122
	bool mbTimeExtMsgPending;

	// BrnGuiHudMessageAnalyzer.h:123
	bool mbRoadOneMoreCrashToTotalledPending;

	// BrnGuiHudMessageAnalyzer.h:124
	bool mbRoadRageTargetReached;

	// BrnGuiHudMessageAnalyzer.h:126
	BrnNetwork::EPaybackType meDirtyTrickPending;

	// BrnGuiHudMessageAnalyzer.h:127
	char[64] macDTPendingVictim;

	// BrnGuiHudMessageAnalyzer.h:129
	extern const CgsID[4][12] KA_SKILLZ_MESSAGE_IDS;

	// BrnGuiHudMessageAnalyzer.h:131
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentBoostStatus;

	// BrnGuiHudMessageAnalyzer.h:132
	extern const float32_t[3] mafBoostingThresholds;

	// BrnGuiHudMessageAnalyzer.h:133
	float32_t mfBoostDuration;

	// BrnGuiHudMessageAnalyzer.h:135
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentOncomingStatus;

	// BrnGuiHudMessageAnalyzer.h:136
	extern const int32_t[3] maiOncomingThresholds;

	// BrnGuiHudMessageAnalyzer.h:138
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentAirStatus;

	// BrnGuiHudMessageAnalyzer.h:139
	extern const int32_t[3] maiAirThresholds;

	// BrnGuiHudMessageAnalyzer.h:141
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentDriftStatus;

	// BrnGuiHudMessageAnalyzer.h:142
	extern const int32_t[3] maiDriftThresholds;

	// BrnGuiHudMessageAnalyzer.h:144
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentSpinStatus;

	// BrnGuiHudMessageAnalyzer.h:145
	extern const int32_t[3] maiSpinThresholds;

	// BrnGuiHudMessageAnalyzer.h:147
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentCheckingStatus;

	// BrnGuiHudMessageAnalyzer.h:148
	extern const int32_t[3] maiCheckingThresholds;

	// BrnGuiHudMessageAnalyzer.h:150
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentNearMissStatus;

	// BrnGuiHudMessageAnalyzer.h:151
	extern const int32_t[3] maiNearMissThresholds;

	// BrnGuiHudMessageAnalyzer.h:153
	BrnGui::HudMessageAnalyzer::EBoostEarningStatus meCurrentStuntChainStatus;

	// BrnGuiHudMessageAnalyzer.h:154
	extern const int32_t[3] maiStuntChainThresholds;

	// BrnGuiHudMessageAnalyzer.h:156
	int32_t miPlayerStatBoost;

	// BrnGuiHudMessageAnalyzer.h:157
	int32_t miPlayerStatSpeed;

	// BrnGuiHudMessageAnalyzer.h:158
	int32_t miPlayerStatControl;

	// BrnGuiHudMessageAnalyzer.h:159
	int32_t miPlayerStatStrength;

	// BrnGuiHudMessageAnalyzer.h:161
	bool mbShowChangeCarMessage;

	// BrnGuiHudMessageAnalyzer.h:163
	bool mbTickerIsActive;

	// BrnGuiHudMessageAnalyzer.h:166
	bool mbBoostOkMessageJustTriggered;

	// BrnGuiHudMessageAnalyzer.h:168
	bool mbChallengeTriggered;

	// BrnGuiHudMessageAnalyzer.h:169
	bool mbChallengeEnded;

	// BrnGuiHudMessageAnalyzer.h:170
	GuiChallengeEndEvent mChallengedEndedData;

	// BrnGuiHudMessageAnalyzer.h:171
	extern CgsID[] KA_CHALLENGE_END_MESSAGE_IDS;

	// BrnGuiHudMessageAnalyzer.h:173
	float32_t mfRoadRulesMessageTimeout;

	// BrnGuiHudMessageAnalyzer.h:174
	bool mbNewRoadRulesHighScores;

	// BrnGuiHudMessageAnalyzer.h:175
	GuiEventRoadRuleNewHighScore mRoadRuleHighScoreData;

	// BrnGuiHudMessageAnalyzer.h:177
	int32_t miLastSignMultiplier;

	// BrnGuiHudMessageAnalyzer.h:179
	float32_t mfRoadRageAchievedMessageDelayTime;

	// BrnGuiHudMessageAnalyzer.h:181
	Profile * mpProfile;

	// BrnGuiHudMessageAnalyzer.h:183
	bool mbOnlineWinnerWaiting;

	// BrnGuiHudMessageAnalyzer.h:184
	PlayerName mOnlineWinnerName;

	// BrnGuiHudMessageAnalyzer.h:186
	float32_t mfTimeUntilGameCompletedHudMessage;

	// BrnGuiHudMessageAnalyzer.h:188
	bool mbGameCompletedHudMessagePending;

	// BrnGuiHudMessageAnalyzer.h:189
	bool mbTrophyCarUnlockPending;

	// BrnGuiHudMessageAnalyzer.h:190
	GuiEventTrophyCarUnlock mTrophyCarUnlockedEvent;

	// BrnGuiHudMessageAnalyzer.h:192
	bool mbOnlinePlayerLeft;

	// BrnGuiHudMessageAnalyzer.h:193
	PlayerName mOnlinePlayerLeftName;

public:
	// BrnGuiHudMessageAnalyzer.h:53
	void Construct(HudMessageDirector *);

	// BrnGuiHudMessageAnalyzer.h:59
	void Update(const InputBuffer::GuiEventInputQueue *, GuiStackEventQueue::GuiEventQueueLarge *);

	// BrnGuiHudMessageAnalyzer.h:75
	void SetAccessPointers(GuiAccessPointers *);

private:
	// BrnGuiHudMessageAnalyzer.h:198
	void TriggerMessage(CgsID) const;

	// BrnGuiHudMessageAnalyzer.h:203
	void TriggerMessage(const char *) const;

	// BrnGuiHudMessageAnalyzer.h:208
	void TriggerMessage(const GuiHudMessage *) const;

	// BrnGuiHudMessageAnalyzer.h:214
	const char * GetOnlineName(EActiveRaceCarIndex, bool *) const;

	// BrnGuiHudMessageAnalyzer.h:220
	const char * GetOnlineName(RoadRulesRecvData::NetworkPlayerID, bool *) const;

	// BrnGuiHudMessageAnalyzer.h:225
	void GetLandmarkName(char *, CgsID) const;

	// BrnGuiHudMessageAnalyzer.h:229
	void AbortWreckedMessage();

	// BrnGuiHudMessageAnalyzer.h:236
	void HandleTakedown(const GuiTakedownEvent *);

	// BrnGuiHudMessageAnalyzer.h:242
	void ConstructTakedownMessage(GuiHudMessage *, const GuiTakedownEvent *);

	// BrnGuiHudMessageAnalyzer.h:247
	void HandleShutdown(const GuiShutdownEvent *);

	// BrnGuiHudMessageAnalyzer.h:251
	void HandleEndShutdown();

	// BrnGuiHudMessageAnalyzer.h:256
	void HandleCrashedEvent(BrnGui::GuiPlayerCrashingStateChangeEvent::CrashBarState);

	// BrnGuiHudMessageAnalyzer.h:261
	void HandleWreckedEvent(const GuiEventPlayerWrecked *);

	// BrnGuiHudMessageAnalyzer.h:266
	void HandleNetworkPlayerCrashedEvent(const GuiNetworkPlayerCrashingEvent *);

	// BrnGuiHudMessageAnalyzer.h:271
	void HandleImpact(const GuiImpactEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:276
	void HandleNetworkBattling(const GuiNetworkPlayerBattlingEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:281
	void HandleNetworkTailing(const GuiNetworkPlayerOnTailEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:286
	void HandleJoinedEvent(const GuiEventCarJoinedEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:291
	// Declaration
	void HandleEliminatedEvent(const GuiEventCarEliminatedFromEvent *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiEventTypeDefs.h:1542
		typedef CgsGui::GuiEvent<149> GuiEventCarEliminatedFromEvent;

	}

	// BrnGuiHudMessageAnalyzer.h:296
	void HandleRoadRagePlayerDamageEvent(const GuiEventRoadRagePlayerDamage *);

	// BrnGuiHudMessageAnalyzer.h:301
	void HandleFailedToStartBurningRoute(const GuiEventFailedToStartEvent *);

	// BrnGuiHudMessageAnalyzer.h:306
	void HandleRivalryChangeEvent(const GuiRivalryStatusChange *) const;

	// BrnGuiHudMessageAnalyzer.h:311
	void HandleRivalFleeingEvent(const GuiRivalIsFleeing *) const;

	// BrnGuiHudMessageAnalyzer.h:316
	// Declaration
	void HandleStartPursuitEvent(const GuiEventStartPursuitEvent *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiEventTypeDefs.h:4928
		typedef CgsGui::GuiEvent<428> GuiEventStartPursuitEvent;

	}

	// BrnGuiHudMessageAnalyzer.h:321
	// Declaration
	void HandleDriveThrough(const GuiDriveThroughEvent *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiHudMessageAnalyzer.cpp:3179
		using namespace CgsDev::Message;

		// BrnGuiHudMessageAnalyzer.cpp:3182
		using namespace CgsDev::Message;

		// BrnGuiHudMessageAnalyzer.cpp:3187
		using namespace CgsDev::Message;

	}

	// BrnGuiHudMessageAnalyzer.h:326
	void HandleSignatureStunt(const GuiSignatureStuntEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:331
	void HandleNearMiss(const GuiNearMissEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:336
	void HandleDirtyTrickNew(const GuiDirtyTrickNewEvent *);

	// BrnGuiHudMessageAnalyzer.h:341
	void HandleDirtyTrickTriggered(const GuiDirtyTrickTriggerEvent *);

	// BrnGuiHudMessageAnalyzer.h:346
	void HandleDirtyTrickEnded(const GuiDirtyTrickEndedEvent *);

	// BrnGuiHudMessageAnalyzer.h:351
	void HandleLiveRevengeUpdate(const GuiLiveRevengeUpdateEvent *);

	// BrnGuiHudMessageAnalyzer.h:356
	void HandleOvertake(const GuiOvertakeEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:361
	void HandleEventDistanceToFinish(const GuiInEventDistanceToFinish *) const;

	// BrnGuiHudMessageAnalyzer.h:366
	void HandleEventLeaderSplitTime(const GuiInEventLeaderSplit *) const;

	// BrnGuiHudMessageAnalyzer.h:370
	void HandleEventNeckAndNeck() const;

	// BrnGuiHudMessageAnalyzer.h:375
	void HandleEventRivalProgress(const GuiInEventRivalProgress *) const;

	// BrnGuiHudMessageAnalyzer.h:380
	// Declaration
	void HandleEventFinisher(const GuiInEventFinisher *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiHudMessageAnalyzer.cpp:3761
		using namespace CgsDev::Message;

		// BrnGuiHudMessageAnalyzer.cpp:3762
		using namespace CgsDev::Message;

		// BrnGuiHudMessageAnalyzer.cpp:3763
		using namespace CgsDev::Message;

		// BrnGuiHudMessageAnalyzer.cpp:3764
		using namespace CgsDev::Message;

		// BrnGuiHudMessageAnalyzer.cpp:3765
		using namespace CgsDev::Message;

		// BrnGuiHudMessageAnalyzer.cpp:3766
		using namespace CgsDev::Message;

		// BrnGuiHudMessageAnalyzer.cpp:3767
		using namespace CgsDev::Message;

		// BrnGuiHudMessageAnalyzer.cpp:3768
		using namespace CgsDev::Message;

		// BrnGuiHudMessageAnalyzer.cpp:3769
		using namespace CgsDev::Message;

		// BrnGuiHudMessageAnalyzer.cpp:3770
		using namespace CgsDev::Message;

	}

	// BrnGuiHudMessageAnalyzer.h:384
	void TriggerEventFinisher();

	// BrnGuiHudMessageAnalyzer.h:388
	void HandleRoadRageTimeExtension();

	// BrnGuiHudMessageAnalyzer.h:393
	void HandleTookLead(const GuiTookLeadEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:398
	void HandleTookLast(const GuiTookLastEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:403
	void HandleFinishRace(const GuiFinishRaceEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:407
	// Declaration
	void HandleShortcut(const GuiOffenceShortcutEvent *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiHudMessageAnalyzer.cpp:3937
		using namespace CgsDev::Message;

	}

	// BrnGuiHudMessageAnalyzer.h:410
	void HandleBlueTeamIsEscaping(const GuiBlueTeamIsEscapingEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:413
	void HandleBlueTeamIsBehindYou(const GuiBlueTeamIsBehindYouEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:416
	void HandlePlayerEliminated(const GuiPlayerEliminatedEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:419
	void HandleLocalPlayerEliminated(const GuiLocalPlayerEliminatedEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:422
	void HandleLastBlueTeamMember(const GuiLastBlueTeamMemberEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:425
	void HandleLeaderPassedMileBoundary(const GuiLeaderPassedMileBoundaryEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:428
	void HandleLeaderPassedKMBoundary(const GuiLeaderPassedKMBoundaryEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:431
	void HandleTraitorousTakedown(const GuiTraitorousTakedownEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:435
	void HandleBoostEarningMessages(const GuiEventBoostInfo *);

	// BrnGuiHudMessageAnalyzer.h:439
	void HandleOncomingEarningMessages(const GuiOncomingEvent *);

	// BrnGuiHudMessageAnalyzer.h:443
	void HandleAirEarningMessages(const GuiInAirEvent *);

	// BrnGuiHudMessageAnalyzer.h:447
	void HandleDriftEarningMessages(const GuiDriftingEvent *);

	// BrnGuiHudMessageAnalyzer.h:451
	void HandleSpinEarningMessages(const GuiSpinningEvent *);

	// BrnGuiHudMessageAnalyzer.h:455
	void HandleNearMissEarningMessages(const GuiNearMissEvent *);

	// BrnGuiHudMessageAnalyzer.h:459
	void HandleStuntsEarningMessages(const GuiStuntEvent *);

	// BrnGuiHudMessageAnalyzer.h:463
	void HandleBurningHomeRunCheckpointReached(const GuiBHRCheckpointReachedEvent *);

	// BrnGuiHudMessageAnalyzer.h:468
	void HandleRaceCheckpointReached(const GuiRaceCheckpointReached *);

	// BrnGuiHudMessageAnalyzer.h:473
	void HandleBurningHomeRunRunnerCrashes(const GuiHUDMessageBHRRunnerCrashed *);

	// BrnGuiHudMessageAnalyzer.h:478
	void HandleRoadRageTargetReached(const GuiEventPlayerReachedRoadRageTarget *);

	// BrnGuiHudMessageAnalyzer.h:482
	void HandleStuntPerformed(const GuiHUDMessageStuntPerformed *);

	// BrnGuiHudMessageAnalyzer.h:486
	void HandleComboPerformed(const GuiHUDMessageComboPerformed *);

	// BrnGuiHudMessageAnalyzer.h:490
	void HandleShowtimeMultiplierMessage(const GuiHUDMessageShowtimeMultiplier *);

	// BrnGuiHudMessageAnalyzer.h:494
	void HandleSignSmashMessage(const GuiHUDMessageSignSmashed *);

	// BrnGuiHudMessageAnalyzer.h:498
	void HandleCrushComboMessage(const GuiHUDMessageCrushCombo *);

	// BrnGuiHudMessageAnalyzer.h:502
	void HandleGenericHUDMessage(const GuiGenericHUDMessage *);

	// BrnGuiHudMessageAnalyzer.h:506
	void HandleOnlineTeamChangeMessage(const GuiOnlineTeamChangeEvent *);

	// BrnGuiHudMessageAnalyzer.h:510
	void HandleChainedBoost(const GuiEventBoostInfo *);

	// BrnGuiHudMessageAnalyzer.h:515
	void HandleRemotePlayerDisconnect(const GuiNetworkRemotePlayerDisconnectEvent *) const;

	// BrnGuiHudMessageAnalyzer.h:520
	void HandleBurningHomeRunTeamChange(EActiveRaceCarIndex);

	// BrnGuiHudMessageAnalyzer.h:525
	// Declaration
	void HandleGameModeStarted(const GuiGameModeStarted *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiHudMessageAnalyzer.cpp:4486
		using namespace CgsDev::Message;

	}

	// BrnGuiHudMessageAnalyzer.h:530
	void HandleNewRoadRulesHighScore(const GuiEventRoadRuleNewHighScore *);

	// BrnGuiHudMessageAnalyzer.h:535
	void HandleRoadRuleFailed(const GuiEventRoadRuleFail *);

	// BrnGuiHudMessageAnalyzer.h:540
	void HandleShowtimeModeSwitch(const GuiShowtimeModeSwitch *);

	// BrnGuiHudMessageAnalyzer.h:545
	void HandlePowerParkingResult(const GuiPowerParkResult *);

	// BrnGuiHudMessageAnalyzer.h:550
	// Declaration
	void HandlePlayerJoinedLobby(const GuiEventNetworkPlayerJoinedLobby *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiHudMessageAnalyzer.cpp:4902
		using namespace CgsDev::Message;

	}

	// BrnGuiHudMessageAnalyzer.h:555
	void HandlePlayerLeftLobby(const GuiEventNetworkPlayerLeftLobby *);

	// BrnGuiHudMessageAnalyzer.h:559
	void TriggerPlayerLeftLobby();

	// BrnGuiHudMessageAnalyzer.h:564
	void HandleJumpStarted(const GuiEventJumpStarted *);

	// BrnGuiHudMessageAnalyzer.h:569
	void HandleStuntInfo(const GuiEventStuntInfo *);

	// BrnGuiHudMessageAnalyzer.h:574
	void HandleStuntsComplete(const GuiEventStuntAreaComplete *);

	// BrnGuiHudMessageAnalyzer.h:577
	void HandleStuntsComplete(const GuiEventStuntAllComplete *);

	// BrnGuiHudMessageAnalyzer.h:582
	void HandleTrophyCarUnlocked(const GuiEventTrophyCarUnlock *);

	// BrnGuiHudMessageAnalyzer.h:586
	void TriggerChallengeTriggeredMessage();

	// BrnGuiHudMessageAnalyzer.h:591
	void HandleChallengeEnded(const GuiChallengeEndEvent *);

	// BrnGuiHudMessageAnalyzer.h:595
	void TriggerChallengeEndedMessage();

	// BrnGuiHudMessageAnalyzer.h:599
	void TriggerNewRoadRulesHighScoreMessage();

	// BrnGuiHudMessageAnalyzer.h:608
	void HandleAllJunctionsFound();

	// BrnGuiHudMessageAnalyzer.h:613
	void HandleAllJunctionsOfTypeFound(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnGuiHudMessageAnalyzer.h:618
	void HandleAllEventsOfTypeComplete(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnGuiHudMessageAnalyzer.h:627
	void HandleAllDriveThrusFound();

	// BrnGuiHudMessageAnalyzer.h:634
	bool AddGamerTagToMessage(GuiHudMessage *, const char *, EActiveRaceCarIndex) const;

	// BrnGuiHudMessageAnalyzer.h:638
	const char * GetMyString(const char *);

}

// BrnGuiHudMessageAnalyzer.h:100
extern const uint32_t KU_FREQUENCY_OF_DRIVETHROUGH_MAGIC_MESSAGES = 5;

