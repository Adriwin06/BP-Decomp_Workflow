// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct GuiCache {
		// BrnGuiCache.h:477
		enum EFriendsListWaitReason {
			E_FRIENDS_LIST_WAIT_REASON_NONE = 0,
			E_FRIENDS_LIST_WAIT_REASON_INVITE_IN_PROGRESS = 1,
			E_FRIENDS_LIST_WAIT_REASON_REVOKE_IN_PROGRESS = 2,
			E_FRIENDS_LIST_WAIT_REASON_DECLINE_IN_PROGRESS = 3,
			E_FRIENDS_LIST_WAIT_INSTANT_FREEBURN = 4,
		}

	}

	// Declaration
	struct StateLoadingHelper {
		// BrnGuiCache.h:316
		enum EResourceState {
			E_STATE_UNLOADED = 0,
			E_STATE_LOAD_REQUESTED = 1,
			E_STATE_LOADING = 2,
			E_STATE_LOAD_CANCELLED = 3,
			E_STATE_LOADED = 4,
			E_STATE_UNLOAD_REQUESTED = 5,
			E_STATE_UNLOADING = 6,
			E_STATE_UNLOAD_CANCELLED = 7,
		}

		// BrnGuiCache.h:329
		struct ResourceInfo {
			// BrnGuiCache.h:332
			BrnGui::StateLoadingHelper::EResourceState meState;

			// BrnGuiCache.h:333
			CgsGui::ResourceRequestTypes meType;

			// BrnGuiCache.h:334
			const void * mpResource;

		public:
			// BrnGuiCache.h:330
			void Construct();

		}

		// BrnGuiCache.h:338
		struct ComponentsToWatch {
			// BrnGuiCache.h:340
			extern const uint32_t KU_MAX_COMPONENTS_TO_WATCH = 192;

			// BrnGuiCache.h:341
			uint32_t muNumberOfComponentsToWatch;

			// BrnGuiCache.h:342
			uint32_t[192] mauComponentsToWatchIds;

			// BrnGuiCache.h:343
			bool[192] mabComponentsLoaded;

		}

	}

}

// BrnGuiCache.h:82
struct BrnGui::GuiPlayerInfo {
	// BrnGuiCache.h:85
	EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

	// BrnGuiCache.h:86
	EGlobalRaceCarIndex mePlayerGlobalRaceCarIndex;

	// BrnGuiCache.h:87
	uint8_t muPlayerRacePosition;

	// BrnGuiCache.h:88
	bool mbPlayerRacePositionchanged;

	// BrnGuiCache.h:90
	int32_t miPlayerMPH;

	// BrnGuiCache.h:91
	int32_t miPlayerRPM;

	// BrnGuiCache.h:92
	int32_t miPlayerGear;

	// BrnGuiCache.h:94
	float32_t mfRotation;

	// BrnGuiCache.h:95
	Vector3 mv3PlayerCarPosition;

	// BrnGuiCache.h:97
	BrnWorld::ECounty meCurrentCounty;

	// BrnGuiCache.h:98
	BrnWorld::EDistrict meCurrentDistrict;

	// BrnGuiCache.h:100
	BrnGui::GuiPlayerEngineEvent::EEngineState meCurrentEngineState;

	// BrnGuiCache.h:102
	CgsID mSelectedCarId;

	// BrnGuiCache.h:103
	CgsID mOriginalCarId;

	// BrnGuiCache.h:105
	bool mbPlayerCarInShutdown;

public:
	// BrnGuiCache.h:109
	void Construct();

}

// BrnGuiCache.h:147
struct BrnGui::StateLoadingHelper {
private:
	// BrnGuiCache.h:346
	extern const uint32_t KU_MAX_RESOURCES_TO_WATCH = 228;

	// BrnGuiCache.h:348
	BrnGui::StateLoadingHelper::ResourceInfo[228] maResources;

	// BrnGuiCache.h:349
	Array<uint32_t,228u> maRequestDirtyList;

	// BrnGuiCache.h:351
	extern const int32_t KI_NUM_LOAD_REQUEST_QUEUES = 2;

	// BrnGuiCache.h:352
	GuiEventQueueSmall[2] mLoadRequestQueues;

	// BrnGuiCache.h:353
	int32_t miCurrentLoadRequestQueue;

	// BrnGuiCache.h:355
	BrnGui::StateLoadingHelper::ComponentsToWatch[3] maComponentsToWatch;

	// BrnGuiCache.h:357
	CgsGui::ObjectController *[192] mpaControlledComponents;

	// BrnGuiCache.h:358
	uint32_t[192] muControlledComponentNameHash;

	// BrnGuiCache.h:359
	uint32_t muControlledComponentCount;

	// BrnGuiCache.h:361
	uint32_t muPendingUnloadCount;

public:
	// BrnGuiCache.h:152
	void Construct();

	// BrnGuiCache.h:156
	void Update(InputBuffer *);

	// BrnGuiCache.h:161
	// Declaration
	bool EnsureResourceIsLoaded(const sResourceTuple &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiCache.h:70
		typedef sResourceTuple sResourceTuple;

	}

	// BrnGuiCache.h:167
	bool EnsureResourcesAreLoaded(const sResourceTuple *, uint32_t);

	// BrnGuiCache.h:171
	const void * GetLoadedResource(uint32_t) const;

	// BrnGuiCache.h:176
	void UnloadResource(const sResourceTuple &);

	// BrnGuiCache.h:182
	void UnloadResources(const sResourceTuple *, uint32_t);

	// BrnGuiCache.h:187
	void UnloadAllResources(CgsGui::ResourceRequestTypes);

	// BrnGuiCache.h:192
	bool EnsureResourceIsUnloaded(const sResourceTuple &);

	// BrnGuiCache.h:198
	bool EnsureResourcesAreUnloaded(const sResourceTuple *, uint32_t);

	// BrnGuiCache.h:203
	void OnLoadNotification(const GuiEventLoadNotification *);

	// BrnGuiCache.h:208
	void OnUnloadNotification(const GuiEventUnloadNotification *);

	// BrnGuiCache.h:215
	void SetExpectedAptComponentList(BrnGui::GuiFlow, uint32_t *, uint32_t);

	// BrnGuiCache.h:222
	void AppendExpectedAptComponentList(BrnGui::GuiFlow, uint32_t *, uint32_t);

	// BrnGuiCache.h:228
	void AppendExpectedAptComponent(BrnGui::GuiFlow, uint32_t);

	// BrnGuiCache.h:235
	void RemoveExpectedAptComponentList(BrnGui::GuiFlow, uint32_t *, uint32_t);

	// BrnGuiCache.h:241
	void RemoveExpectedAptComponent(BrnGui::GuiFlow, uint32_t);

	// BrnGuiCache.h:247
	bool IsWaitingAptComponent(BrnGui::GuiFlow, uint32_t);

	// BrnGuiCache.h:252
	bool AreAllAptComponentsInitialised(BrnGui::GuiFlow);

	// BrnGuiCache.h:258
	void AppendExpectedControlledObject(uint32_t, CgsGui::ObjectController *);

	// BrnGuiCache.h:264
	void AppendExpectedControlledObject(const char *, CgsGui::ObjectController *);

	// BrnGuiCache.h:268
	void ClearExpectedControlledObjects();

	// BrnGuiCache.h:273
	void MarkAptComponentInitialised(const GuiEventAptTrigger *);

	// BrnGuiCache.h:278
	void ClearComponentInitialised(BrnGui::GuiFlow);

	// BrnGuiCache.h:283
	void AppendResourceInfo(uint32_t, CgsDev::StrStream);

	// BrnGuiCache.h:290
	void GetAptComponentInfo(uint32_t, BrnGui::GuiFlow, bool *, bool *, uint32_t *);

private:
	// BrnGuiCache.h:365
	void IncrementUnloadPending();

	// BrnGuiCache.h:369
	void DecrementUnloadPending();

}

// BrnGuiCache.h:473
struct BrnGui::GuiCache {
private:
	// BrnGuiCache.h:1616
	GuiEventTimeInfo mTimeInfo;

	// BrnGuiCache.h:1618
	BrnGui::GuiEventChangeReplayState::ReplayState meCurrentReplayState;

	// BrnGuiCache.h:1624
	StateLoadingHelper mStateLoadingHelper;

	// BrnGuiCache.h:1626
	GuiTracker * mpGuiTracker;

	// BrnGuiCache.h:1627
	SystemUserProfile * mpSystemUserProfile;

	// BrnGuiCache.h:1628
	Profile * mpProgressionProfile;

	// BrnGuiCache.h:1629
	MapIconManager * mpMapIconManager;

	// BrnGuiCache.h:1631
	const WorldDataController * mpWorldDataController;

	// BrnGuiCache.h:1632
	const BurnoutSkillsManager * mpSkillsManager;

	// BrnGuiCache.h:1633
	const FreeburnChallengeManager * mpChallengeManager;

	// BrnGuiCache.h:1635
	const HudMessageController * mpHudMessageController;

	// BrnGuiCache.h:1636
	const HudMessageDirector * mpHudMessageDirector;

	// BrnGuiCache.h:1637
	const PopupController * mpPopupController;

	// BrnGuiCache.h:1639
	bool mbHudMessageCptAvailable;

	// BrnGuiCache.h:1640
	InGameMessagesQueue mHudMessagesQueue;

	// BrnGuiCache.h:1642
	GuiPFXHookEnumeration mPFXHookEnumeration;

	// BrnGuiCache.h:1648
	GuiPlayerInfo mGuiPlayerInfo;

	// BrnGuiCache.h:1650
	BrnGui::GuiPlayerCrashingStateChangeEvent::CrashBarState meCurrentCrashState;

	// BrnGuiCache.h:1651
	bool mbIsPlayerWrecked;

	// BrnGuiCache.h:1653
	int32_t miActiveUserIndex;

	// BrnGuiCache.h:1655
	int32_t miConsecutiveLosses;

	// BrnGuiCache.h:1657
	CgsNetwork::EServerInterfaceError meLastDisconnectedError;

	// BrnGuiCache.h:1659
	bool mbIsGamePaused;

	// BrnGuiCache.h:1660
	bool mbIsInHighDef;

	// BrnGuiCache.h:1661
	float32_t mfAspectRatio;

	// BrnGuiCache.h:1662
	bool mbIsInEvent;

	// BrnGuiCache.h:1663
	bool mbIsInShortcut;

	// BrnGuiCache.h:1664
	bool mbIsOnline;

	// BrnGuiCache.h:1665
	bool mbIsPreparingForInvite;

	// BrnGuiCache.h:1666
	bool mbIsStartingGameDueToPlayerJoin;

	// BrnGuiCache.h:1667
	bool mbIsPerformInviteReceived;

	// BrnGuiCache.h:1668
	bool mbIsConnectedToNetwork;

	// BrnGuiCache.h:1669
	bool mbDoJoinOnlineRankedGame;

	// BrnGuiCache.h:1670
	bool mbDoJoinOnlineFreeburnGame;

	// BrnGuiCache.h:1671
	bool mbEnteredOnlineViaEasyDrive;

	// BrnGuiCache.h:1672
	bool mbIsInGame;

	// BrnGuiCache.h:1673
	bool mbIsAllowingSignInOutEvents;

	// BrnGuiCache.h:1674
	bool mbGotToInGameState;

	// BrnGuiCache.h:1675
	bool mbIsInJunkyard;

	// BrnGuiCache.h:1676
	bool mbPassedTheJunkyard;

	// BrnGuiCache.h:1677
	bool mbMugshotActive;

	// BrnGuiCache.h:1678
	bool mbRequestedShowtimeResults;

	// BrnGuiCache.h:1679
	bool mbImageExportInProgress;

	// BrnGuiCache.h:1681
	BrnNetwork::EPaybackType meLastAvailablePayback;

	// BrnGuiCache.h:1682
	EActiveRaceCarIndex meLastPaybackVictim;

	// BrnGuiCache.h:1683
	bool mbPaybackTriggerable;

	// BrnGuiCache.h:1685
	bool mbCarUnlockInProgress;

	// BrnGuiCache.h:1686
	CgsID mCarUnlockedID;

	// BrnGuiCache.h:1687
	BrnGameState::GameStateModuleIO::ECarSelectType meCarSelectType;

	// BrnGuiCache.h:1689
	bool mbCarUnlockPending;

	// BrnGuiCache.h:1690
	bool mbCarUnlockPendingSet;

	// BrnGuiCache.h:1692
	bool mbCompletionSequenceInProgress;

	// BrnGuiCache.h:1694
	bool mbIsNewProfile;

	// BrnGuiCache.h:1699
	int32_t[8] maiCheckpointReached;

	// BrnGuiCache.h:1701
	LandmarkIndex[512] maTargetLandmarkIndices;

	// BrnGuiCache.h:1702
	int32_t miNumTargetLandmarks;

	// BrnGuiCache.h:1704
	GuiEventChangeDistrict mCachedDistrictEvent;

	// BrnGuiCache.h:1706
	Race[6] maPresetRaces;

	// BrnGuiCache.h:1707
	int32_t miNumPresetRaces;

	// BrnGuiCache.h:1709
	LandmarkIndex mCurrentLandmarkIndex;

	// BrnGuiCache.h:1711
	uint8_t muNumActiveLandmarks;

	// BrnGuiCache.h:1712
	LandmarkIndex[512] maActiveLandmarkIndices;

	// BrnGuiCache.h:1714
	GuiEventUpdateEventStarts mCachedEventStarts;

	// BrnGuiCache.h:1716
	extern const int32_t KI_MAX_FINISH_POINTS = 256;

	// BrnGuiCache.h:1717
	BitArray<256u> mEventsWithUniqueFinishPoints;

	// BrnGuiCache.h:1719
	BrnGui::GuiEventUpdateSatNav::SatNavIconInfo[46] mDriveThroughInfo;

	// BrnGuiCache.h:1720
	int32_t miNumDriveThroughs;

	// BrnGuiCache.h:1722
	BrnProgression::RaceEventData::EModeType meSatNavEventFilter;

	// BrnGuiCache.h:1723
	bool mbSatNavEventFilterEnabled;

	// BrnGuiCache.h:1727
	GuiEventSpecificPresetRaces mEvents;

	// BrnGuiCache.h:1729
	BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

	// BrnGuiCache.h:1730
	uint32_t muEventID;

	// BrnGuiCache.h:1731
	uint32_t muJunctionID;

	// BrnGuiCache.h:1733
	BrnGui::GuiEventOfflinePostEvent::OfflinePostEventData mLastOffinePostEventInfo;

	// BrnGuiCache.h:1735
	BrnGameState::ECurrentMedalTargetTime meCurrentTargetMedal;

	// BrnGuiCache.h:1737
	float32_t mfEventTime;

	// BrnGuiCache.h:1738
	float32_t mfTargetTime;

	// BrnGuiCache.h:1740
	float32_t[4] mafTargetScores;

	// BrnGuiCache.h:1743
	int8_t miOpponentsInEvent;

	// BrnGuiCache.h:1745
	float32_t mfEventDistance;

	// BrnGuiCache.h:1747
	LandmarkIndex mEventDestinationLandmarkIndex;

	// BrnGuiCache.h:1748
	BrnWorld::EDistrict mEventDestinationDistrict;

	// BrnGuiCache.h:1749
	LandmarkIndex[16] maiLandmarkIndices;

	// BrnGuiCache.h:1750
	BrnWorld::EDistrict[16] maeCurrentEventDistricts;

	// BrnGuiCache.h:1751
	uint8_t muCheckpointsInEvent;

	// BrnGuiCache.h:1752
	int32_t miCheckpointReached;

	// BrnGuiCache.h:1754
	int32_t miTakedownsCurrent;

	// BrnGuiCache.h:1755
	int32_t miTakedownTarget;

	// BrnGuiCache.h:1757
	int32_t miScoreCurrent;

	// BrnGuiCache.h:1758
	int32_t miScoreTarget;

	// BrnGuiCache.h:1759
	int32_t miScoreCombo;

	// BrnGuiCache.h:1760
	int32_t miComboMultiplier;

	// BrnGuiCache.h:1762
	int32_t miLastStuntScore;

	// BrnGuiCache.h:1763
	int32_t miLastStuntMultiplier;

	// BrnGuiCache.h:1765
	int32_t miRivalDamageCurrent;

	// BrnGuiCache.h:1766
	int32_t miRivalDamageTarget;

	// BrnGuiCache.h:1767
	CgsID mPursuedCarID;

	// BrnGuiCache.h:1769
	CgsID mShutdownCarID;

	// BrnGuiCache.h:1771
	BrnProgression::TrophyUnlockData::UnlockType meTrophyCarUnlockType;

	// BrnGuiCache.h:1772
	CgsID mTrophyCarID;

	// BrnGuiCache.h:1774
	int32_t miShowTimeCarsCrashed;

	// BrnGuiCache.h:1775
	int32_t miShowTimeComboMultiplier;

	// BrnGuiCache.h:1776
	float32_t mfShowTimeDistanceTravelled;

	// BrnGuiCache.h:1778
	float32_t mfDistanceToCheckpoint;

	// BrnGuiCache.h:1780
	bool mbHasJustEnteredEvent;

	// BrnGuiCache.h:1781
	bool mbIsPreRaceFlyByActive;

	// BrnGuiCache.h:1783
	GuiRaceCarInfoEvent mRaceCarInfo;

	// BrnGuiCache.h:1784
	BrnGui::ERivalryStage[8] maeRivalryStatus;

	// BrnGuiCache.h:1786
	GuiEventRacePositionInfo mCarPositionsInRace;

	// BrnGuiCache.h:1788
	GuiTrafficCarInfoEvent mTrafficCarInfo;

	// BrnGuiCache.h:1789
	GuiOverheadSignInfoEvent::VisibleOverheadSignArray mVisibleOverheadSignArray;

	// BrnGuiCache.h:1791
	LandmarkIndex mRaceDestinationLandmarkIndex;

	// BrnGuiCache.h:1793
	CgsLanguage::ESku mSku;

	// BrnGuiCache.h:1794
	CgsLanguage::ELanguage mLanguage;

	// BrnGuiCache.h:1796
	extern int32_t[] maiAgeRatings;

	// BrnGuiCache.h:1800
	int32_t miRoundIndex;

	// BrnGuiCache.h:1802
	GuiEventNetworkGameParams mGameOptions;

	// BrnGuiCache.h:1803
	bool mbResetOnlineGameOptions;

	// BrnGuiCache.h:1805
	GuiEventOnlineEventFinishingOrder mOnlineFinishingOrder;

	// BrnGuiCache.h:1806
	GuiEventOnlinePostEvent mOnlinePostEventData;

	// BrnGuiCache.h:1810
	bool[2] mabRoadRulesActive;

	// BrnGuiCache.h:1811
	BrnGameState::EActiveRoadRule meActiveRoadRule;

	// BrnGuiCache.h:1812
	BrnGui::GuiEventSetRoadRuleScoreMode::ERoadPanelModes meRoadRuleScoreMode;

	// BrnGuiCache.h:1814
	bool mbRoadRuleShotActive;

	// BrnGuiCache.h:1815
	bool mbRoadRuleShotLocalPlayerNewRuler;

	// BrnGuiCache.h:1816
	bool mbRoadRuleShotTaken;

	// BrnGuiCache.h:1817
	EActiveRaceCarIndex meRoadRuleShotOpponentARCI;

	// BrnGuiCache.h:1818
	CgsID mRoadRuleShotRoadId;

	// BrnGuiCache.h:1819
	bool mbIsRoadRuleShotTime;

	// BrnGuiCache.h:1824
	StuntToDisplay[1] maDisplayedStunts;

	// BrnGuiCache.h:1825
	uint32_t muCurrentStunts;

	// BrnGuiCache.h:1826
	uint32_t muAllStunts;

	// BrnGuiCache.h:1827
	float32_t mfComboWarningActiveTime;

	// BrnGuiCache.h:1828
	bool mbComboWarningActive;

	// BrnGuiCache.h:1829
	bool mbComboInProgress;

	// BrnGuiCache.h:1834
	int32_t miOnlinePlayerCount;

	// BrnGuiCache.h:1836
	InGamePlayerStatusData[8] maPlayerInfo;

	// BrnGuiCache.h:1837
	GuiEventNetworkLobbyPlayerList mLobbyPlayerInfoList;

	// BrnGuiCache.h:1838
	BrnGameState::GameStateModuleIO::EPlayerTeam[8] maeCurrentPlayerTeam;

	// BrnGuiCache.h:1839
	char[36] macOnlineGameName;

	// BrnGuiCache.h:1840
	bool[8] mabDisconnectedPlayers;

	// BrnGuiCache.h:1841
	bool[8] mabInInCarSelectOnline;

	// BrnGuiCache.h:1842
	bool[8] mabEliminated;

	// BrnGuiCache.h:1843
	bool mbLocalPlayerHost;

	// BrnGuiCache.h:1847
	bool mbIsFriendListShowing;

	// BrnGuiCache.h:1848
	bool mbIsFriendListChangeIconShowing;

	// BrnGuiCache.h:1849
	BrnGui::GuiCache::EFriendsListWaitReason meFriendListWaitReason;

	// BrnGuiCache.h:1852
	uint16_t mu16NumGoldMedals;

	// BrnGuiCache.h:1853
	uint16_t mu16NumSilverMedals;

	// BrnGuiCache.h:1854
	uint16_t mu16NumBronzeMedals;

	// BrnGuiCache.h:1857
	uint16_t mu16NumGoldsToNextReward;

	// BrnGuiCache.h:1858
	uint16_t mu16NumTotalToNextReward;

	// BrnGuiCache.h:1861
	OptionsDataProfile mOptionsData;

	// BrnGuiCache.h:1862
	GuiEventRivalryFullInfoResponse mRivalInfo;

	// BrnGuiCache.h:1865
	GuiShowtimeScoreUpdate[8] maShowtimeScoreData;

	// BrnGuiCache.h:1868
	bool mbAutoSaveEnabled;

	// BrnGuiCache.h:1870
	bool mbIsAutosaving;

	// BrnGuiCache.h:1873
	bool mbPlayerSignInReported;

	// BrnGuiCache.h:1874
	bool mbPlayerSignOutReported;

	// BrnGuiCache.h:1877
	GuiEventPreRaceMessages mPreRaceData;

	// BrnGuiCache.h:1880
	GuiEventEventStateResponse mProfileEventState;

	// BrnGuiCache.h:1882
	BrnNetwork::ECameraStatus meLocalCameraStatus;

	// BrnGuiCache.h:1884
	bool mbOnlineEventCountdownActive;

	// BrnGuiCache.h:1887
	bool mbGetCircleAsSelect;

	// BrnGuiCache.h:1890
	bool mbJunkyardFirstUse;

	// BrnGuiCache.h:1893
	Random mRandom;

	// BrnGuiCache.h:1895
	bool mbIsLoadingScreenVisible;

	// BrnGuiCache.h:1898
	float32_t mfDistanceDrivenInCurrentCar;

	// BrnGuiCache.h:1900
	bool mbEATraxChyronActive;

	// BrnGuiCache.h:1901
	bool mbEasyDriveAllowed;

	// BrnGuiCache.h:1902
	bool mbAreRoadRulesAvailable;

public:
	// BrnGuiCache.h:490
	void Construct(GuiTracker *, SystemUserProfile *);

	// BrnGuiCache.h:497
	void RecEvent(const CgsModule::Event *, int32_t, int32_t);

	// BrnGuiCache.h:501
	void Update(InputBuffer *);

	// BrnGuiCache.h:506
	void SetMapIconManager(MapIconManager *);

	// BrnGuiCache.h:510
	MapIconManager * GetMapIconManager() const;

	// BrnGuiCache.h:514
	GuiTracker * GetGuiTracker() const;

	// BrnGuiCache.h:517
	const ChallengeList * GetFreeburnChallengeList() const;

	// BrnGuiCache.h:527
	void GetLandmarkInfoAtPositionInList(int32_t, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnGuiCache.h:533
	void GetOnlineLandmarkInfoAtPositionInList(int32_t, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnGuiCache.h:539
	void GetLandmarkInfoFromIndex(LandmarkIndex, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnGuiCache.h:545
	void GetLandmarkInfoFromID(CgsID, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnGuiCache.h:548
	uint32_t GetNumEventStarts() const;

	// BrnGuiCache.h:552
	const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * GetEventStartInfoFromIndex(uint32_t) const;

	// BrnGuiCache.h:556
	const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * GetEventStartInfoFromLightTriggerID(LightTriggerId) const;

	// BrnGuiCache.h:560
	const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * GetEventStartInfoFromJunctionID(uint32_t) const;

	// BrnGuiCache.h:564
	const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * GetEventStartInfoFromEventID(int32_t) const;

	// BrnGuiCache.h:568
	const LandmarkIndex GetCurrentLandmarkIndex() const;

	// BrnGuiCache.h:573
	const Race * GetPresetRace(int32_t) const;

	// BrnGuiCache.h:577
	int32_t GetNumPresetRaces() const;

	// BrnGuiCache.h:582
	void SetWorldDataController(const WorldDataController *);

	// BrnGuiCache.h:586
	const WorldDataController * GetWorldDataController() const;

	// BrnGuiCache.h:591
	void SetHudMessageController(const HudMessageController *);

	// BrnGuiCache.h:596
	void SetHudMessageDirector(const HudMessageDirector *);

	// BrnGuiCache.h:601
	void SetPopupController(const PopupController *);

	// BrnGuiCache.h:605
	const HudMessageController * GetHudMessageController() const;

	// BrnGuiCache.h:609
	const HudMessageDirector * GetHudMessageDirector() const;

	// BrnGuiCache.h:613
	const PopupController * GetPopupController() const;

	// BrnGuiCache.h:618
	bool EnsureResourceIsLoaded(const sResourceTuple &);

	// BrnGuiCache.h:623
	CgsID GetOriginalCarId(CgsID);

	// BrnGuiCache.h:629
	bool EnsureResourcesAreLoaded(const sResourceTuple *, uint32_t);

	// BrnGuiCache.h:633
	void * GetLoadedResource(uint32_t) const;

	// BrnGuiCache.h:638
	void UnloadResource(const sResourceTuple &);

	// BrnGuiCache.h:644
	void UnloadResources(const sResourceTuple *, uint32_t);

	// BrnGuiCache.h:649
	void UnloadAllResources(CgsGui::ResourceRequestTypes);

	// BrnGuiCache.h:654
	bool EnsureResourceIsUnloaded(const sResourceTuple &);

	// BrnGuiCache.h:660
	bool EnsureResourcesAreUnloaded(const sResourceTuple *, uint32_t);

	// BrnGuiCache.h:665
	void ClearExpectedAptComponentList(BrnGui::GuiFlow);

	// BrnGuiCache.h:672
	void SetExpectedAptComponentList(BrnGui::GuiFlow, uint32_t *, uint32_t);

	// BrnGuiCache.h:678
	void AppendExpectedAptComponent(BrnGui::GuiFlow, uint32_t);

	// BrnGuiCache.h:684
	void AppendExpectedAptComponent(BrnGui::GuiFlow, const char *);

	// BrnGuiCache.h:691
	void AppendExpectedAptComponentList(BrnGui::GuiFlow, uint32_t *, uint32_t);

	// BrnGuiCache.h:697
	void RemoveExpectedAptComponent(BrnGui::GuiFlow, uint32_t);

	// BrnGuiCache.h:704
	void RemoveExpectedAptComponentlist(BrnGui::GuiFlow, uint32_t *, uint32_t);

	// BrnGuiCache.h:710
	void AppendExpectedControlledAptComponent(uint32_t, CgsGui::ObjectController *);

	// BrnGuiCache.h:716
	void AppendExpectedControlledAptComponent(const char *, CgsGui::ObjectController *);

	// BrnGuiCache.h:720
	void ClearExpectedControlledAptComponentList();

	// BrnGuiCache.h:725
	bool AreAllAptComponentsInitialised(BrnGui::GuiFlow);

	// BrnGuiCache.h:731
	bool IsWaitingAptComponent(BrnGui::GuiFlow, uint32_t);

	// BrnGuiCache.h:735
	const GuiEventOnlineEventFinishingOrder * GetOnlineEventFinishingOrder() const;

	// BrnGuiCache.h:738
	const GuiEventOnlinePostEvent * GetOnlinePostEventData() const;

	// BrnGuiCache.h:742
	int32_t GetOnlinePlayerCount() const;

	// BrnGuiCache.h:746
	GuiEventChangeDistrict GetDistrictEvent() const;

	// BrnGuiCache.h:750
	EActiveRaceCarIndex GetPlayerActiveRaceCarIndex() const;

	// BrnGuiCache.h:754
	EGlobalRaceCarIndex GetPlayerGlobalRaceCarIndex() const;

	// BrnGuiCache.h:758
	const BrnGui::GuiPlayerEngineEvent::EEngineState GetPlayerEngineState() const;

	// BrnGuiCache.h:762
	const GuiEventNetworkLobbyPlayerList * GetLobbyPlayerList() const;

	// BrnGuiCache.h:766
	const bool IsLocalPlayerHost() const;

	// BrnGuiCache.h:770
	const char * GetOnlineGameName() const;

	// BrnGuiCache.h:775
	const InGamePlayerStatusData * GetOnlinePlayerInfo(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:780
	const InGamePlayerStatusData * GetOnlinePlayerInfo(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnGuiCache.h:785
	EActiveRaceCarIndex GetActiveRaceCarFromNetworkId(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnGuiCache.h:788
	const InGamePlayerStatusData * GetOnlinePlayerInfoByIndex(int32_t);

	// BrnGuiCache.h:794
	BrnGameState::GameStateModuleIO::EPlayerTeam GetCurrentOnlinePlayerTeam(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:799
	bool GetOnlinePlayerDisconnected(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:804
	bool GetOnlinePlayerInCarSelect(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:809
	bool IsOnlinePlayerEliminated(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:813
	const char * GetPlayerName() const;

	// BrnGuiCache.h:817
	const char * GetPlayerNameInQuotes() const;

	// BrnGuiCache.h:821
	float32_t GetTimeStep() const;

	// BrnGuiCache.h:825
	float32_t GetTime() const;

	// BrnGuiCache.h:829
	const GuiPlayerInfo * GetPlayerInfo() const;

	// BrnGuiCache.h:833
	BrnGameState::GameStateModuleIO::EGameModeType GetGameMode() const;

	// BrnGuiCache.h:837
	bool IsInFreeburn() const;

	// BrnGuiCache.h:841
	uint32_t GetEventID() const;

	// BrnGuiCache.h:845
	uint32_t GetJunctionID() const;

	// BrnGuiCache.h:849
	void RefreshMapState();

	// BrnGuiCache.h:853
	bool IsHudMessagingActive() const;

	// BrnGuiCache.h:857
	void SetHudMessagingActive(bool);

	// BrnGuiCache.h:861
	const LandmarkIndex * GetActiveLandmarks() const;

	// BrnGuiCache.h:865
	uint8_t GetNumActiveLandmarks() const;

	// BrnGuiCache.h:869
	const LandmarkIndex * GetTargetLandmarks() const;

	// BrnGuiCache.h:873
	int32_t GetNumTargetLandmarks() const;

	// BrnGuiCache.h:877
	bool IsGamePaused() const;

	// BrnGuiCache.h:881
	bool IsInHighDef() const;

	// BrnGuiCache.h:885
	void SetHighDef(bool);

	// BrnGuiCache.h:889
	float32_t GetAspectRatio() const;

	// BrnGuiCache.h:893
	void SetAspectRatio(float32_t);

	// BrnGuiCache.h:897
	bool IsInEvent() const;

	// BrnGuiCache.h:901
	bool IsInShortcut() const;

	// BrnGuiCache.h:905
	bool IsPreparingForInvite() const;

	// BrnGuiCache.h:909
	bool IsPerformInviteReceived() const;

	// BrnGuiCache.h:913
	bool IsStartingGameDueToPlayerJoin() const;

	// BrnGuiCache.h:918
	void SetImageExportInProgress(bool);

	// BrnGuiCache.h:922
	bool IsImageExportInProgress() const;

	// BrnGuiCache.h:926
	void ResetStartingGameDueToPlayerJoin();

	// BrnGuiCache.h:930
	bool IsConnectedToNetwork() const;

	// BrnGuiCache.h:933
	CgsNetwork::EServerInterfaceError GetDoDisconnectPopupError() const;

	// BrnGuiCache.h:937
	bool GetDoDisconnectPopup() const;

	// BrnGuiCache.h:941
	BrnGui::GuiPlayerCrashingStateChangeEvent::CrashBarState GetCurrentCrashState() const;

	// BrnGuiCache.h:944
	GuiEventNetworkGameParams * GetOnlineGameModeOptions();

	// BrnGuiCache.h:947
	const BrnGui::GuiEventNetworkGameParams * GetOnlineGameModeOptions() const;

	// BrnGuiCache.h:951
	void SetResetOnlineGameOptions(bool);

	// BrnGuiCache.h:954
	bool GetResetOnlineGameOptions() const;

	// BrnGuiCache.h:958
	bool GetDoJoinOnlineRankedGame();

	// BrnGuiCache.h:962
	const bool GetDoJoinOnlineRankedGame() const;

	// BrnGuiCache.h:967
	void SetDoJoinOnlineRankedGame(bool);

	// BrnGuiCache.h:971
	bool GetDoJoinOnlineFreeburnGame();

	// BrnGuiCache.h:975
	const bool GetDoJoinOnlineFreeburnGame() const;

	// BrnGuiCache.h:980
	void SetDoJoinOnlineFreeburnGame(bool);

	// BrnGuiCache.h:984
	const bool GetEnteredOnlineViaEasyDrive() const;

	// BrnGuiCache.h:989
	void SetEnteredOnlineViaEasyDrive(bool);

	// BrnGuiCache.h:992
	bool IsOnline() const;

	// BrnGuiCache.h:996
	bool IsOfflineGameMode() const;

	// BrnGuiCache.h:1000
	int32_t GetActiveUserIndex() const;

	// BrnGuiCache.h:1004
	int32_t GetNumConsecutiveLosses() const;

	// BrnGuiCache.h:1008
	BrnGameState::ECurrentMedalTargetTime GetCurrentTargetMedalInEvent() const;

	// BrnGuiCache.h:1012
	float32_t GetCurrentTimeInEvent() const;

	// BrnGuiCache.h:1016
	float32_t GetTargetTimeInEvent() const;

	// BrnGuiCache.h:1021
	float32_t GetRequiredScoreForMedal(BrnGameState::ECurrentMedalTargetTime);

	// BrnGuiCache.h:1025
	float32_t GetDistanceInEvent() const;

	// BrnGuiCache.h:1029
	int8_t GetOpponentsInEvent() const;

	// BrnGuiCache.h:1033
	int32_t GetCurrentTakedownsInEvent() const;

	// BrnGuiCache.h:1037
	int32_t GetTargetTakedownsInEvent() const;

	// BrnGuiCache.h:1041
	int32_t GetCurrentScoreInEvent() const;

	// BrnGuiCache.h:1045
	int32_t GetTargetScoreInEvent() const;

	// BrnGuiCache.h:1049
	int32_t GetCurrentComboInEvent() const;

	// BrnGuiCache.h:1053
	int32_t GetMultiplierInEvent() const;

	// BrnGuiCache.h:1057
	int32_t GetLastStuntScore() const;

	// BrnGuiCache.h:1061
	int32_t GetLastStuntMultiplier() const;

	// BrnGuiCache.h:1065
	uint32_t GetStuntsInProgress() const;

	// BrnGuiCache.h:1069
	uint32_t GetAllStuntTypesInCurrentStunt() const;

	// BrnGuiCache.h:1073
	int32_t GetNumberOfStuntsToDisplay() const;

	// BrnGuiCache.h:1077
	const StuntToDisplay * GetStuntToDisplay(int32_t) const;

	// BrnGuiCache.h:1081
	bool IsComboInProgress() const;

	// BrnGuiCache.h:1085
	bool IsComboWarningActive() const;

	// BrnGuiCache.h:1089
	float32_t GetComboWarningActiveTime() const;

	// BrnGuiCache.h:1093
	int32_t GetCurrentRivalDamage() const;

	// BrnGuiCache.h:1097
	int32_t GetTargetRivalDamage() const;

	// BrnGuiCache.h:1101
	CgsID GetPursuitCarID() const;

	// BrnGuiCache.h:1105
	CgsID GetShutdownCarID() const;

	// BrnGuiCache.h:1109
	BrnProgression::TrophyUnlockData::UnlockType GetTrophyCarUnlockType() const;

	// BrnGuiCache.h:1113
	CgsID GetTrophyCarID() const;

	// BrnGuiCache.h:1117
	int32_t GetShowTimeComboMultiplier() const;

	// BrnGuiCache.h:1121
	int32_t GetShowTimeCarsCrashed() const;

	// BrnGuiCache.h:1125
	float32_t GetShowTimeDistanceTravelled() const;

	// BrnGuiCache.h:1129
	uint8_t GetCheckpointsInEvent() const;

	// BrnGuiCache.h:1133
	int32_t GetCheckpointReached() const;

	// BrnGuiCache.h:1137
	bool HasJustEnteredEvent() const;

	// BrnGuiCache.h:1141
	bool IsPreRaceFlyByActive() const;

	// BrnGuiCache.h:1145
	void SetPreRaceFlyByActive(bool);

	// BrnGuiCache.h:1149
	const GuiPFXHookEnumeration * GetPFXHookEnumeration() const;

	// BrnGuiCache.h:1153
	const BrnGui::GuiEventOfflinePostEvent::OfflinePostEventData * GetOfflinePostEventData() const;

	// BrnGuiCache.h:1157
	const BrnGui::GuiEventChangeReplayState::ReplayState GetReplayState() const;

	// BrnGuiCache.h:1162
	Vector3 & GetRaceCarPosition(EActiveRaceCarIndex);

	// BrnGuiCache.h:1167
	bool IsRaceCarInRange(EActiveRaceCarIndex);

	// BrnGuiCache.h:1172
	bool IsRaceCarCrashing(EActiveRaceCarIndex);

	// BrnGuiCache.h:1177
	bool IsActiveRaceCarIndexUsed(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1182
	bool IsActiveRaceCarConnecting(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1187
	bool IsActiveRaceCarDisconnected(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1192
	CgsID GetActiveRaceCarRivalId(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1197
	BrnGui::ERivalryStage GetActiveRaceCarRivalryStage(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1202
	uint8_t GetEventPositionOfRaceCar(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1207
	bool HasRaceCarFinished(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1211
	uint32_t GetScoringTrafficCount() const;

	// BrnGuiCache.h:1215
	const VehicleScoreData * GetScoringTrafficData(uint32_t) const;

	// BrnGuiCache.h:1219
	const GuiOverheadSignInfoEvent::VisibleOverheadSignArray * GetVisibleOverheadSignArray() const;

	// BrnGuiCache.h:1223
	LandmarkIndex GetEventDestinationLandmarkIndex() const;

	// BrnGuiCache.h:1227
	BrnWorld::EDistrict GetEventDestinationDistrict() const;

	// BrnGuiCache.h:1231
	const LandmarkIndex * GetEventLandmarks() const;

	// BrnGuiCache.h:1235
	LandmarkIndex GetEventFinishLandmark() const;

	// BrnGuiCache.h:1239
	int32_t GetOnlineRoundIndex() const;

	// BrnGuiCache.h:1244
	LandmarkIndex GetOnlineLandmarkIndex(int32_t) const;

	// BrnGuiCache.h:1248
	BrnNetwork::EPaybackType GetAvailablePayback(EActiveRaceCarIndex &) const;

	// BrnGuiCache.h:1253
	bool IsRoadRuleActive(BrnStreetData::ScoreType) const;

	// BrnGuiCache.h:1257
	BrnGameState::EActiveRoadRule GetActiveRoadRule() const;

	// BrnGuiCache.h:1261
	BrnGui::GuiEventSetRoadRuleScoreMode::ERoadPanelModes GetActiveRoadRuleScoringMode() const;

	// BrnGuiCache.h:1265
	bool IsRoadRuleShotActive() const;

	// BrnGuiCache.h:1269
	CgsID GetRoadRuleShotRoadId() const;

	// BrnGuiCache.h:1273
	bool IsRoadRuleShotTime() const;

	// BrnGuiCache.h:1277
	EActiveRaceCarIndex GetRoadRuleShotOpponentARCI() const;

	// BrnGuiCache.h:1281
	bool IsRoadRuleShotLocalNewRuler() const;

	// BrnGuiCache.h:1285
	bool HasRoadRuleShotBeenTaken() const;

	// BrnGuiCache.h:1289
	OptionsDataProfile * GetMenuOptionsData();

	// BrnGuiCache.h:1293
	bool IsCarUnlocked() const;

	// BrnGuiCache.h:1297
	CgsID GetUnlockedCarID() const;

	// BrnGuiCache.h:1301
	BrnGameState::GameStateModuleIO::ECarSelectType GetCurrentCarSelectType() const;

	// BrnGuiCache.h:1306
	EActiveRaceCarIndex GetActiveRaceCarFromRivalId(CgsID) const;

	// BrnGuiCache.h:1311
	BrnGui::ERivalryStage GetRivalryStageFromRivalId(CgsID) const;

	// BrnGuiCache.h:1315
	bool IsFriendsListShowing() const;

	// BrnGuiCache.h:1319
	BrnGui::GuiCache::EFriendsListWaitReason GetFriendsListWaitReason() const;

	// BrnGuiCache.h:1326
	void SetFriendsListWaitReason(BrnGui::GuiCache::EFriendsListWaitReason);

	// BrnGuiCache.h:1330
	bool IsFriendsListChangeIconShowing() const;

	// BrnGuiCache.h:1334
	uint16_t GetNumGoldMedals() const;

	// BrnGuiCache.h:1338
	uint16_t GetNumTotalMedals() const;

	// BrnGuiCache.h:1342
	uint16_t GetNumGoldMedalsToNextReward() const;

	// BrnGuiCache.h:1346
	uint16_t GetNumTotalMedalsToNextReward() const;

	// BrnGuiCache.h:1351
	void HandleSetActiveLandmarksEvent(const GuiEventSetActiveLandmarks *);

	// BrnGuiCache.h:1356
	void SetBurnoutSkillsManager(const BurnoutSkillsManager *);

	// BrnGuiCache.h:1360
	const BurnoutSkillsManager * GetBurnoutSkillsManager() const;

	// BrnGuiCache.h:1365
	void SetFreeburnChallengeManager(const FreeburnChallengeManager *);

	// BrnGuiCache.h:1369
	const FreeburnChallengeManager * GetFreeburnChallengeManager() const;

	// BrnGuiCache.h:1373
	BrnGameState::BurnoutSkillzData::EBurnoutSkillType GetCurrentSkillzSelected() const;

	// BrnGuiCache.h:1379
	float32_t GetBurnoutSkill(BrnGameState::BurnoutSkillzData::EBurnoutSkillType, EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1384
	const GuiShowtimeScoreUpdate & GetShowtimeScoreDataByActiveRaceCar(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1387
	bool GetAutoSaveEnabled() const;

	// BrnGuiCache.h:1392
	const BrnGui::GuiEventPreRaceMessages::MessageInfo * GetPreEventInfo(int32_t) const;

	// BrnGuiCache.h:1396
	uint32_t GetNumProfileEvents() const;

	// BrnGuiCache.h:1401
	const ProfileEvent * GetProfileEvent(uint32_t) const;

	// BrnGuiCache.h:1405
	const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event * GetPresetEvent(int32_t) const;

	// BrnGuiCache.h:1409
	const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event * GetPresetEventFromEventID(int32_t) const;

	// BrnGuiCache.h:1412
	int32_t GetNumPresetEvents() const;

	// BrnGuiCache.h:1417
	void GetOnlineFinishPoint(int32_t, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnGuiCache.h:1420
	int32_t GetNumOnlineFinishPoints() const;

	// BrnGuiCache.h:1425
	void SetIsNewProfile(bool);

	// BrnGuiCache.h:1428
	bool GetIsNewProfile() const;

	// BrnGuiCache.h:1431
	float32_t GetDistanceDrivenInCurrentCar() const;

	// BrnGuiCache.h:1435
	bool IsAutosaving() const;

	// BrnGuiCache.h:1439
	void SetIsAutosaving(bool);

	// BrnGuiCache.h:1444
	void SetConnectedToNetwork(bool);

	// BrnGuiCache.h:1449
	void SetDoDisconnectPopup(const CgsModule::Event *);

	// BrnGuiCache.h:1453
	bool IsInGame();

	// BrnGuiCache.h:1458
	void SetInGame(bool);

	// BrnGuiCache.h:1462
	bool IsAllowingSignInOutEvents() const;

	// BrnGuiCache.h:1467
	void SetAllowingSignInOutEvents(bool);

	// BrnGuiCache.h:1471
	bool PassedTheJunkyard() const;

	// BrnGuiCache.h:1475
	bool IsInJunkyard() const;

	// BrnGuiCache.h:1479
	bool IsOnlineTimeoutActive() const;

	// BrnGuiCache.h:1483
	InGameMessagesQueue * GetHudMessagesQueue();

	// BrnGuiCache.h:1487
	const CgsLanguage::ESku GetSku() const;

	// BrnGuiCache.h:1491
	const CgsLanguage::ELanguage GetLanguage() const;

	// BrnGuiCache.h:1495
	bool GetIsPlayerWrecked() const;

	// BrnGuiCache.h:1499
	bool GetPlayerSignInReported() const;

	// BrnGuiCache.h:1503
	bool GetPlayerSignOutReported() const;

	// BrnGuiCache.h:1507
	bool IsCarUnlockPending() const;

	// BrnGuiCache.h:1511
	bool IsCompletionSequenceInProgress() const;

	// BrnGuiCache.h:1516
	BrnGui::EGuiPlayerColours GetOnlinePlayerColourFromARCI(EActiveRaceCarIndex);

	// BrnGuiCache.h:1522
	int32_t HACK_FindABetterPlaceForMe_SetActiveLandmarksByEventID(uint32_t, float32_t, bool);

	// BrnGuiCache.h:1526
	bool GetCircleAsSelect() const;

	// BrnGuiCache.h:1530
	const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo * GetDriveThrough(int32_t) const;

	// BrnGuiCache.h:1534
	int32_t GetNumberOfDriveThroughs() const;

	// BrnGuiCache.h:1538
	bool GetControllerDisconected() const;

	// BrnGuiCache.h:1542
	bool GetIsCapturingMugshot();

	// BrnGuiCache.h:1546
	bool IsCameraConnected();

	// BrnGuiCache.h:1550
	bool IsWaitingForShowtimeResults() const;

	// BrnGuiCache.h:1554
	void SetWaitingForShowtimeResults(bool);

	// BrnGuiCache.h:1558
	void SetJunkyardFirstUse(bool);

	// BrnGuiCache.h:1562
	bool IsJunkyardFirstUse() const;

	// BrnGuiCache.h:1565
	Random * GetRandomNumberGenerator();

	// BrnGuiCache.h:1569
	int32_t GetCheckpointReached(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1572
	bool IsMultiplayerAllowed() const;

	// BrnGuiCache.h:1576
	bool IsLoadingScreenVisible() const;

	// BrnGuiCache.h:1580
	BrnProgression::RaceEventData::EModeType GetSatNavEventFilter() const;

	// BrnGuiCache.h:1584
	bool GetSatNavEventFilterEnabled() const;

	// BrnGuiCache.h:1588
	const BrnProgression::Profile * GetProgressionProfile() const;

	// BrnGuiCache.h:1592
	bool IsEATraxChyronActive() const;

	// BrnGuiCache.h:1596
	bool IsEasyDriveAllowed() const;

	// BrnGuiCache.h:1599
	bool AreRoadRulesAvailable() const;

	// BrnGuiCache.h:1605
	StateLoadingHelper GetStateLoadingHelper() const;

	// BrnGuiCache.h:1610
	void UnlockCredits();

private:
	// BrnGuiCache.h:1908
	void UpdateTrackerInfo(const LandmarkIndex *, uint32_t);

	// BrnGuiCache.h:1912
	void UpdateTrackerInfo(const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event *);

	// BrnGuiCache.h:1917
	InGamePlayerStatusData * GetOnlinePlayerInfoForWriting(RoadRulesRecvData::NetworkPlayerID);

	// BrnGuiCache.h:1922
	void HandleSpecificPreSetRacesEvent(const GuiEventSpecificPresetRaces *);

	// BrnGuiCache.h:1927
	void DetermineCarUnlockPending(const BrnProgression::Profile *);

}

// BrnGuiCache.h:340
extern const uint32_t KU_MAX_COMPONENTS_TO_WATCH = 192;

// BrnGuiCache.h:346
extern const uint32_t KU_MAX_RESOURCES_TO_WATCH = 228;

// BrnGuiCache.h:351
extern const int32_t KI_NUM_LOAD_REQUEST_QUEUES = 2;

// BrnGuiCache.h:1716
extern const int32_t KI_MAX_FINISH_POINTS = 256;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct GuiCache {
		// BrnGuiCache.h:477
		enum EFriendsListWaitReason {
			E_FRIENDS_LIST_WAIT_REASON_NONE = 0,
			E_FRIENDS_LIST_WAIT_REASON_INVITE_IN_PROGRESS = 1,
			E_FRIENDS_LIST_WAIT_REASON_REVOKE_IN_PROGRESS = 2,
			E_FRIENDS_LIST_WAIT_REASON_DECLINE_IN_PROGRESS = 3,
			E_FRIENDS_LIST_WAIT_INSTANT_FREEBURN = 4,
		}

	}

	// Declaration
	struct StateLoadingHelper {
		// BrnGuiCache.h:316
		enum EResourceState {
			E_STATE_UNLOADED = 0,
			E_STATE_LOAD_REQUESTED = 1,
			E_STATE_LOADING = 2,
			E_STATE_LOAD_CANCELLED = 3,
			E_STATE_LOADED = 4,
			E_STATE_UNLOAD_REQUESTED = 5,
			E_STATE_UNLOADING = 6,
			E_STATE_UNLOAD_CANCELLED = 7,
		}

		// BrnGuiCache.h:329
		struct ResourceInfo {
			// BrnGuiCache.h:332
			BrnGui::StateLoadingHelper::EResourceState meState;

			// BrnGuiCache.h:333
			CgsGui::ResourceRequestTypes meType;

			// BrnGuiCache.h:334
			const void * mpResource;

		public:
			// BrnGuiCache.h:330
			void Construct();

		}

		// BrnGuiCache.h:338
		struct ComponentsToWatch {
			// BrnGuiCache.h:340
			extern const uint32_t KU_MAX_COMPONENTS_TO_WATCH = 192;

			// BrnGuiCache.h:341
			uint32_t muNumberOfComponentsToWatch;

			// BrnGuiCache.h:342
			uint32_t[192] mauComponentsToWatchIds;

			// BrnGuiCache.h:343
			bool[192] mabComponentsLoaded;

		}

	}

}

// BrnGuiCache.h:473
struct BrnGui::GuiCache {
private:
	// BrnGuiCache.h:1616
	GuiEventTimeInfo mTimeInfo;

	// BrnGuiCache.h:1618
	BrnGui::GuiEventChangeReplayState::ReplayState meCurrentReplayState;

	// BrnGuiCache.h:1624
	StateLoadingHelper mStateLoadingHelper;

	// BrnGuiCache.h:1626
	GuiTracker * mpGuiTracker;

	// BrnGuiCache.h:1627
	SystemUserProfile * mpSystemUserProfile;

	// BrnGuiCache.h:1628
	Profile * mpProgressionProfile;

	// BrnGuiCache.h:1629
	MapIconManager * mpMapIconManager;

	// BrnGuiCache.h:1631
	const WorldDataController * mpWorldDataController;

	// BrnGuiCache.h:1632
	const BurnoutSkillsManager * mpSkillsManager;

	// BrnGuiCache.h:1633
	const FreeburnChallengeManager * mpChallengeManager;

	// BrnGuiCache.h:1635
	const HudMessageController * mpHudMessageController;

	// BrnGuiCache.h:1636
	const HudMessageDirector * mpHudMessageDirector;

	// BrnGuiCache.h:1637
	const PopupController * mpPopupController;

	// BrnGuiCache.h:1639
	bool mbHudMessageCptAvailable;

	// BrnGuiCache.h:1640
	InGameMessagesQueue mHudMessagesQueue;

	// BrnGuiCache.h:1642
	GuiPFXHookEnumeration mPFXHookEnumeration;

	// BrnGuiCache.h:1648
	GuiPlayerInfo mGuiPlayerInfo;

	// BrnGuiCache.h:1650
	BrnGui::GuiPlayerCrashingStateChangeEvent::CrashBarState meCurrentCrashState;

	// BrnGuiCache.h:1651
	bool mbIsPlayerWrecked;

	// BrnGuiCache.h:1653
	int32_t miActiveUserIndex;

	// BrnGuiCache.h:1655
	int32_t miConsecutiveLosses;

	// BrnGuiCache.h:1657
	CgsNetwork::EServerInterfaceError meLastDisconnectedError;

	// BrnGuiCache.h:1659
	bool mbIsGamePaused;

	// BrnGuiCache.h:1660
	bool mbIsInHighDef;

	// BrnGuiCache.h:1661
	float32_t mfAspectRatio;

	// BrnGuiCache.h:1662
	bool mbIsInEvent;

	// BrnGuiCache.h:1663
	bool mbIsInShortcut;

	// BrnGuiCache.h:1664
	bool mbIsOnline;

	// BrnGuiCache.h:1665
	bool mbIsPreparingForInvite;

	// BrnGuiCache.h:1666
	bool mbIsStartingGameDueToPlayerJoin;

	// BrnGuiCache.h:1667
	bool mbIsPerformInviteReceived;

	// BrnGuiCache.h:1668
	bool mbIsConnectedToNetwork;

	// BrnGuiCache.h:1669
	bool mbDoJoinOnlineRankedGame;

	// BrnGuiCache.h:1670
	bool mbDoJoinOnlineFreeburnGame;

	// BrnGuiCache.h:1671
	bool mbEnteredOnlineViaEasyDrive;

	// BrnGuiCache.h:1672
	bool mbIsInGame;

	// BrnGuiCache.h:1673
	bool mbIsAllowingSignInOutEvents;

	// BrnGuiCache.h:1674
	bool mbGotToInGameState;

	// BrnGuiCache.h:1675
	bool mbIsInJunkyard;

	// BrnGuiCache.h:1676
	bool mbPassedTheJunkyard;

	// BrnGuiCache.h:1677
	bool mbMugshotActive;

	// BrnGuiCache.h:1678
	bool mbRequestedShowtimeResults;

	// BrnGuiCache.h:1679
	bool mbImageExportInProgress;

	// BrnGuiCache.h:1681
	BrnNetwork::EPaybackType meLastAvailablePayback;

	// BrnGuiCache.h:1682
	EActiveRaceCarIndex meLastPaybackVictim;

	// BrnGuiCache.h:1683
	bool mbPaybackTriggerable;

	// BrnGuiCache.h:1685
	bool mbCarUnlockInProgress;

	// BrnGuiCache.h:1686
	CgsID mCarUnlockedID;

	// BrnGuiCache.h:1687
	BrnGameState::GameStateModuleIO::ECarSelectType meCarSelectType;

	// BrnGuiCache.h:1689
	bool mbCarUnlockPending;

	// BrnGuiCache.h:1690
	bool mbCarUnlockPendingSet;

	// BrnGuiCache.h:1692
	bool mbCompletionSequenceInProgress;

	// BrnGuiCache.h:1694
	bool mbIsNewProfile;

	// BrnGuiCache.h:1699
	int32_t[8] maiCheckpointReached;

	// BrnGuiCache.h:1701
	LandmarkIndex[512] maTargetLandmarkIndices;

	// BrnGuiCache.h:1702
	int32_t miNumTargetLandmarks;

	// BrnGuiCache.h:1704
	GuiEventChangeDistrict mCachedDistrictEvent;

	// BrnGuiCache.h:1706
	Race[6] maPresetRaces;

	// BrnGuiCache.h:1707
	int32_t miNumPresetRaces;

	// BrnGuiCache.h:1709
	LandmarkIndex mCurrentLandmarkIndex;

	// BrnGuiCache.h:1711
	uint8_t muNumActiveLandmarks;

	// BrnGuiCache.h:1712
	LandmarkIndex[512] maActiveLandmarkIndices;

	// BrnGuiCache.h:1714
	GuiEventUpdateEventStarts mCachedEventStarts;

	// BrnGuiCache.h:1716
	extern const int32_t KI_MAX_FINISH_POINTS = 256;

	// BrnGuiCache.h:1717
	BitArray<256u> mEventsWithUniqueFinishPoints;

	// BrnGuiCache.h:1719
	BrnGui::GuiEventUpdateSatNav::SatNavIconInfo[46] mDriveThroughInfo;

	// BrnGuiCache.h:1720
	int32_t miNumDriveThroughs;

	// BrnGuiCache.h:1722
	BrnProgression::RaceEventData::EModeType meSatNavEventFilter;

	// BrnGuiCache.h:1723
	bool mbSatNavEventFilterEnabled;

	// BrnGuiCache.h:1727
	GuiEventSpecificPresetRaces mEvents;

	// BrnGuiCache.h:1729
	BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

	// BrnGuiCache.h:1730
	uint32_t muEventID;

	// BrnGuiCache.h:1731
	uint32_t muJunctionID;

	// BrnGuiCache.h:1733
	BrnGui::GuiEventOfflinePostEvent::OfflinePostEventData mLastOffinePostEventInfo;

	// BrnGuiCache.h:1735
	BrnGameState::ECurrentMedalTargetTime meCurrentTargetMedal;

	// BrnGuiCache.h:1737
	float32_t mfEventTime;

	// BrnGuiCache.h:1738
	float32_t mfTargetTime;

	// BrnGuiCache.h:1740
	float32_t[4] mafTargetScores;

	// BrnGuiCache.h:1743
	int8_t miOpponentsInEvent;

	// BrnGuiCache.h:1745
	float32_t mfEventDistance;

	// BrnGuiCache.h:1747
	LandmarkIndex mEventDestinationLandmarkIndex;

	// BrnGuiCache.h:1748
	BrnWorld::EDistrict mEventDestinationDistrict;

	// BrnGuiCache.h:1749
	LandmarkIndex[16] maiLandmarkIndices;

	// BrnGuiCache.h:1750
	BrnWorld::EDistrict[16] maeCurrentEventDistricts;

	// BrnGuiCache.h:1751
	uint8_t muCheckpointsInEvent;

	// BrnGuiCache.h:1752
	int32_t miCheckpointReached;

	// BrnGuiCache.h:1754
	int32_t miTakedownsCurrent;

	// BrnGuiCache.h:1755
	int32_t miTakedownTarget;

	// BrnGuiCache.h:1757
	int32_t miScoreCurrent;

	// BrnGuiCache.h:1758
	int32_t miScoreTarget;

	// BrnGuiCache.h:1759
	int32_t miScoreCombo;

	// BrnGuiCache.h:1760
	int32_t miComboMultiplier;

	// BrnGuiCache.h:1762
	int32_t miLastStuntScore;

	// BrnGuiCache.h:1763
	int32_t miLastStuntMultiplier;

	// BrnGuiCache.h:1765
	int32_t miRivalDamageCurrent;

	// BrnGuiCache.h:1766
	int32_t miRivalDamageTarget;

	// BrnGuiCache.h:1767
	CgsID mPursuedCarID;

	// BrnGuiCache.h:1769
	CgsID mShutdownCarID;

	// BrnGuiCache.h:1771
	BrnProgression::TrophyUnlockData::UnlockType meTrophyCarUnlockType;

	// BrnGuiCache.h:1772
	CgsID mTrophyCarID;

	// BrnGuiCache.h:1774
	int32_t miShowTimeCarsCrashed;

	// BrnGuiCache.h:1775
	int32_t miShowTimeComboMultiplier;

	// BrnGuiCache.h:1776
	float32_t mfShowTimeDistanceTravelled;

	// BrnGuiCache.h:1778
	float32_t mfDistanceToCheckpoint;

	// BrnGuiCache.h:1780
	bool mbHasJustEnteredEvent;

	// BrnGuiCache.h:1781
	bool mbIsPreRaceFlyByActive;

	// BrnGuiCache.h:1783
	GuiRaceCarInfoEvent mRaceCarInfo;

	// BrnGuiCache.h:1784
	BrnGui::ERivalryStage[8] maeRivalryStatus;

	// BrnGuiCache.h:1786
	GuiEventRacePositionInfo mCarPositionsInRace;

	// BrnGuiCache.h:1788
	GuiTrafficCarInfoEvent mTrafficCarInfo;

	// BrnGuiCache.h:1789
	GuiOverheadSignInfoEvent::VisibleOverheadSignArray mVisibleOverheadSignArray;

	// BrnGuiCache.h:1791
	LandmarkIndex mRaceDestinationLandmarkIndex;

	// BrnGuiCache.h:1793
	CgsLanguage::ESku mSku;

	// BrnGuiCache.h:1794
	CgsLanguage::ELanguage mLanguage;

	// BrnGuiCache.h:1796
	extern int32_t[] maiAgeRatings;

	// BrnGuiCache.h:1800
	int32_t miRoundIndex;

	// BrnGuiCache.h:1802
	GuiEventNetworkGameParams mGameOptions;

	// BrnGuiCache.h:1803
	bool mbResetOnlineGameOptions;

	// BrnGuiCache.h:1805
	GuiEventOnlineEventFinishingOrder mOnlineFinishingOrder;

	// BrnGuiCache.h:1806
	GuiEventOnlinePostEvent mOnlinePostEventData;

	// BrnGuiCache.h:1810
	bool[2] mabRoadRulesActive;

	// BrnGuiCache.h:1811
	BrnGameState::EActiveRoadRule meActiveRoadRule;

	// BrnGuiCache.h:1812
	BrnGui::GuiEventSetRoadRuleScoreMode::ERoadPanelModes meRoadRuleScoreMode;

	// BrnGuiCache.h:1814
	bool mbRoadRuleShotActive;

	// BrnGuiCache.h:1815
	bool mbRoadRuleShotLocalPlayerNewRuler;

	// BrnGuiCache.h:1816
	bool mbRoadRuleShotTaken;

	// BrnGuiCache.h:1817
	EActiveRaceCarIndex meRoadRuleShotOpponentARCI;

	// BrnGuiCache.h:1818
	CgsID mRoadRuleShotRoadId;

	// BrnGuiCache.h:1819
	bool mbIsRoadRuleShotTime;

	// BrnGuiCache.h:1824
	StuntToDisplay[1] maDisplayedStunts;

	// BrnGuiCache.h:1825
	uint32_t muCurrentStunts;

	// BrnGuiCache.h:1826
	uint32_t muAllStunts;

	// BrnGuiCache.h:1827
	float32_t mfComboWarningActiveTime;

	// BrnGuiCache.h:1828
	bool mbComboWarningActive;

	// BrnGuiCache.h:1829
	bool mbComboInProgress;

	// BrnGuiCache.h:1834
	int32_t miOnlinePlayerCount;

	// BrnGuiCache.h:1836
	InGamePlayerStatusData[8] maPlayerInfo;

	// BrnGuiCache.h:1837
	GuiEventNetworkLobbyPlayerList mLobbyPlayerInfoList;

	// BrnGuiCache.h:1838
	BrnGameState::GameStateModuleIO::EPlayerTeam[8] maeCurrentPlayerTeam;

	// BrnGuiCache.h:1839
	char[36] macOnlineGameName;

	// BrnGuiCache.h:1840
	bool[8] mabDisconnectedPlayers;

	// BrnGuiCache.h:1841
	bool[8] mabInInCarSelectOnline;

	// BrnGuiCache.h:1842
	bool[8] mabEliminated;

	// BrnGuiCache.h:1843
	bool mbLocalPlayerHost;

	// BrnGuiCache.h:1847
	bool mbIsFriendListShowing;

	// BrnGuiCache.h:1848
	bool mbIsFriendListChangeIconShowing;

	// BrnGuiCache.h:1849
	BrnGui::GuiCache::EFriendsListWaitReason meFriendListWaitReason;

	// BrnGuiCache.h:1852
	uint16_t mu16NumGoldMedals;

	// BrnGuiCache.h:1853
	uint16_t mu16NumSilverMedals;

	// BrnGuiCache.h:1854
	uint16_t mu16NumBronzeMedals;

	// BrnGuiCache.h:1857
	uint16_t mu16NumGoldsToNextReward;

	// BrnGuiCache.h:1858
	uint16_t mu16NumTotalToNextReward;

	// BrnGuiCache.h:1861
	OptionsDataProfile mOptionsData;

	// BrnGuiCache.h:1862
	GuiEventRivalryFullInfoResponse mRivalInfo;

	// BrnGuiCache.h:1865
	GuiShowtimeScoreUpdate[8] maShowtimeScoreData;

	// BrnGuiCache.h:1868
	bool mbAutoSaveEnabled;

	// BrnGuiCache.h:1870
	bool mbIsAutosaving;

	// BrnGuiCache.h:1873
	bool mbPlayerSignInReported;

	// BrnGuiCache.h:1874
	bool mbPlayerSignOutReported;

	// BrnGuiCache.h:1877
	GuiEventPreRaceMessages mPreRaceData;

	// BrnGuiCache.h:1880
	GuiEventEventStateResponse mProfileEventState;

	// BrnGuiCache.h:1882
	BrnNetwork::ECameraStatus meLocalCameraStatus;

	// BrnGuiCache.h:1884
	bool mbOnlineEventCountdownActive;

	// BrnGuiCache.h:1887
	bool mbGetCircleAsSelect;

	// BrnGuiCache.h:1890
	bool mbJunkyardFirstUse;

	// BrnGuiCache.h:1893
	Random mRandom;

	// BrnGuiCache.h:1895
	bool mbIsLoadingScreenVisible;

	// BrnGuiCache.h:1898
	float32_t mfDistanceDrivenInCurrentCar;

	// BrnGuiCache.h:1900
	bool mbEATraxChyronActive;

	// BrnGuiCache.h:1901
	bool mbEasyDriveAllowed;

	// BrnGuiCache.h:1902
	bool mbAreRoadRulesAvailable;

public:
	// BrnGuiCache.h:490
	void Construct(GuiTracker *, SystemUserProfile *);

	// BrnGuiCache.h:497
	void RecEvent(const CgsModule::Event *, int32_t, int32_t);

	// BrnGuiCache.h:501
	void Update(InputBuffer *);

	// BrnGuiCache.h:506
	void SetMapIconManager(MapIconManager *);

	// BrnGuiCache.h:510
	MapIconManager * GetMapIconManager() const;

	// BrnGuiCache.h:514
	GuiTracker * GetGuiTracker() const;

	// BrnGuiCache.h:517
	const ChallengeList * GetFreeburnChallengeList() const;

	// BrnGuiCache.h:527
	void GetLandmarkInfoAtPositionInList(int32_t, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnGuiCache.h:533
	void GetOnlineLandmarkInfoAtPositionInList(int32_t, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnGuiCache.h:539
	void GetLandmarkInfoFromIndex(LandmarkIndex, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnGuiCache.h:545
	void GetLandmarkInfoFromID(CgsID, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnGuiCache.h:548
	uint32_t GetNumEventStarts() const;

	// BrnGuiCache.h:552
	const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * GetEventStartInfoFromIndex(uint32_t) const;

	// BrnGuiCache.h:556
	const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * GetEventStartInfoFromLightTriggerID(LightTriggerId) const;

	// BrnGuiCache.h:560
	const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * GetEventStartInfoFromJunctionID(uint32_t) const;

	// BrnGuiCache.h:564
	const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * GetEventStartInfoFromEventID(int32_t) const;

	// BrnGuiCache.h:568
	const LandmarkIndex GetCurrentLandmarkIndex() const;

	// BrnGuiCache.h:573
	const Race * GetPresetRace(int32_t) const;

	// BrnGuiCache.h:577
	int32_t GetNumPresetRaces() const;

	// BrnGuiCache.h:582
	void SetWorldDataController(const WorldDataController *);

	// BrnGuiCache.h:586
	const WorldDataController * GetWorldDataController() const;

	// BrnGuiCache.h:591
	void SetHudMessageController(const HudMessageController *);

	// BrnGuiCache.h:596
	void SetHudMessageDirector(const HudMessageDirector *);

	// BrnGuiCache.h:601
	void SetPopupController(const PopupController *);

	// BrnGuiCache.h:605
	const HudMessageController * GetHudMessageController() const;

	// BrnGuiCache.h:609
	const HudMessageDirector * GetHudMessageDirector() const;

	// BrnGuiCache.h:613
	const PopupController * GetPopupController() const;

	// BrnGuiCache.h:618
	bool EnsureResourceIsLoaded(const sResourceTuple &);

	// BrnGuiCache.h:623
	CgsID GetOriginalCarId(CgsID);

	// BrnGuiCache.h:629
	bool EnsureResourcesAreLoaded(const sResourceTuple *, uint32_t);

	// BrnGuiCache.h:633
	void * GetLoadedResource(uint32_t) const;

	// BrnGuiCache.h:638
	void UnloadResource(const sResourceTuple &);

	// BrnGuiCache.h:644
	void UnloadResources(const sResourceTuple *, uint32_t);

	// BrnGuiCache.h:649
	void UnloadAllResources(CgsGui::ResourceRequestTypes);

	// BrnGuiCache.h:654
	bool EnsureResourceIsUnloaded(const sResourceTuple &);

	// BrnGuiCache.h:660
	bool EnsureResourcesAreUnloaded(const sResourceTuple *, uint32_t);

	// BrnGuiCache.h:665
	void ClearExpectedAptComponentList(BrnGui::GuiFlow);

	// BrnGuiCache.h:672
	void SetExpectedAptComponentList(BrnGui::GuiFlow, uint32_t *, uint32_t);

	// BrnGuiCache.h:678
	void AppendExpectedAptComponent(BrnGui::GuiFlow, uint32_t);

	// BrnGuiCache.h:684
	void AppendExpectedAptComponent(BrnGui::GuiFlow, const char *);

	// BrnGuiCache.h:691
	void AppendExpectedAptComponentList(BrnGui::GuiFlow, uint32_t *, uint32_t);

	// BrnGuiCache.h:697
	void RemoveExpectedAptComponent(BrnGui::GuiFlow, uint32_t);

	// BrnGuiCache.h:704
	void RemoveExpectedAptComponentlist(BrnGui::GuiFlow, uint32_t *, uint32_t);

	// BrnGuiCache.h:710
	void AppendExpectedControlledAptComponent(uint32_t, CgsGui::ObjectController *);

	// BrnGuiCache.h:716
	void AppendExpectedControlledAptComponent(const char *, CgsGui::ObjectController *);

	// BrnGuiCache.h:720
	void ClearExpectedControlledAptComponentList();

	// BrnGuiCache.h:725
	bool AreAllAptComponentsInitialised(BrnGui::GuiFlow);

	// BrnGuiCache.h:731
	bool IsWaitingAptComponent(BrnGui::GuiFlow, uint32_t);

	// BrnGuiCache.h:735
	const GuiEventOnlineEventFinishingOrder * GetOnlineEventFinishingOrder() const;

	// BrnGuiCache.h:738
	const GuiEventOnlinePostEvent * GetOnlinePostEventData() const;

	// BrnGuiCache.h:742
	int32_t GetOnlinePlayerCount() const;

	// BrnGuiCache.h:746
	GuiEventChangeDistrict GetDistrictEvent() const;

	// BrnGuiCache.h:750
	EActiveRaceCarIndex GetPlayerActiveRaceCarIndex() const;

	// BrnGuiCache.h:754
	EGlobalRaceCarIndex GetPlayerGlobalRaceCarIndex() const;

	// BrnGuiCache.h:758
	const BrnGui::GuiPlayerEngineEvent::EEngineState GetPlayerEngineState() const;

	// BrnGuiCache.h:762
	const GuiEventNetworkLobbyPlayerList * GetLobbyPlayerList() const;

	// BrnGuiCache.h:766
	const bool IsLocalPlayerHost() const;

	// BrnGuiCache.h:770
	const char * GetOnlineGameName() const;

	// BrnGuiCache.h:775
	const InGamePlayerStatusData * GetOnlinePlayerInfo(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:780
	const InGamePlayerStatusData * GetOnlinePlayerInfo(GuiEventNetworkLaunching::NetworkPlayerID) const;

	// BrnGuiCache.h:785
	EActiveRaceCarIndex GetActiveRaceCarFromNetworkId(GuiEventNetworkLaunching::NetworkPlayerID) const;

	// BrnGuiCache.h:788
	const InGamePlayerStatusData * GetOnlinePlayerInfoByIndex(int32_t);

	// BrnGuiCache.h:794
	BrnGameState::GameStateModuleIO::EPlayerTeam GetCurrentOnlinePlayerTeam(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:799
	bool GetOnlinePlayerDisconnected(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:804
	bool GetOnlinePlayerInCarSelect(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:809
	bool IsOnlinePlayerEliminated(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:813
	const char * GetPlayerName() const;

	// BrnGuiCache.h:817
	const char * GetPlayerNameInQuotes() const;

	// BrnGuiCache.h:821
	float32_t GetTimeStep() const;

	// BrnGuiCache.h:825
	float32_t GetTime() const;

	// BrnGuiCache.h:829
	const GuiPlayerInfo * GetPlayerInfo() const;

	// BrnGuiCache.h:833
	BrnGameState::GameStateModuleIO::EGameModeType GetGameMode() const;

	// BrnGuiCache.h:837
	bool IsInFreeburn() const;

	// BrnGuiCache.h:841
	uint32_t GetEventID() const;

	// BrnGuiCache.h:845
	uint32_t GetJunctionID() const;

	// BrnGuiCache.h:849
	void RefreshMapState();

	// BrnGuiCache.h:853
	bool IsHudMessagingActive() const;

	// BrnGuiCache.h:857
	void SetHudMessagingActive(bool);

	// BrnGuiCache.h:861
	const LandmarkIndex * GetActiveLandmarks() const;

	// BrnGuiCache.h:865
	uint8_t GetNumActiveLandmarks() const;

	// BrnGuiCache.h:869
	const LandmarkIndex * GetTargetLandmarks() const;

	// BrnGuiCache.h:873
	int32_t GetNumTargetLandmarks() const;

	// BrnGuiCache.h:877
	bool IsGamePaused() const;

	// BrnGuiCache.h:881
	bool IsInHighDef() const;

	// BrnGuiCache.h:885
	void SetHighDef(bool);

	// BrnGuiCache.h:889
	float32_t GetAspectRatio() const;

	// BrnGuiCache.h:893
	void SetAspectRatio(float32_t);

	// BrnGuiCache.h:897
	bool IsInEvent() const;

	// BrnGuiCache.h:901
	bool IsInShortcut() const;

	// BrnGuiCache.h:905
	bool IsPreparingForInvite() const;

	// BrnGuiCache.h:909
	bool IsPerformInviteReceived() const;

	// BrnGuiCache.h:913
	bool IsStartingGameDueToPlayerJoin() const;

	// BrnGuiCache.h:918
	void SetImageExportInProgress(bool);

	// BrnGuiCache.h:922
	bool IsImageExportInProgress() const;

	// BrnGuiCache.h:926
	void ResetStartingGameDueToPlayerJoin();

	// BrnGuiCache.h:930
	bool IsConnectedToNetwork() const;

	// BrnGuiCache.h:933
	CgsNetwork::EServerInterfaceError GetDoDisconnectPopupError() const;

	// BrnGuiCache.h:937
	bool GetDoDisconnectPopup() const;

	// BrnGuiCache.h:941
	BrnGui::GuiPlayerCrashingStateChangeEvent::CrashBarState GetCurrentCrashState() const;

	// BrnGuiCache.h:944
	GuiEventNetworkGameParams * GetOnlineGameModeOptions();

	// BrnGuiCache.h:947
	const BrnGui::GuiEventNetworkGameParams * GetOnlineGameModeOptions() const;

	// BrnGuiCache.h:951
	void SetResetOnlineGameOptions(bool);

	// BrnGuiCache.h:954
	bool GetResetOnlineGameOptions() const;

	// BrnGuiCache.h:958
	bool GetDoJoinOnlineRankedGame();

	// BrnGuiCache.h:962
	const bool GetDoJoinOnlineRankedGame() const;

	// BrnGuiCache.h:967
	void SetDoJoinOnlineRankedGame(bool);

	// BrnGuiCache.h:971
	bool GetDoJoinOnlineFreeburnGame();

	// BrnGuiCache.h:975
	const bool GetDoJoinOnlineFreeburnGame() const;

	// BrnGuiCache.h:980
	void SetDoJoinOnlineFreeburnGame(bool);

	// BrnGuiCache.h:984
	const bool GetEnteredOnlineViaEasyDrive() const;

	// BrnGuiCache.h:989
	void SetEnteredOnlineViaEasyDrive(bool);

	// BrnGuiCache.h:992
	bool IsOnline() const;

	// BrnGuiCache.h:996
	bool IsOfflineGameMode() const;

	// BrnGuiCache.h:1000
	int32_t GetActiveUserIndex() const;

	// BrnGuiCache.h:1004
	int32_t GetNumConsecutiveLosses() const;

	// BrnGuiCache.h:1008
	BrnGameState::ECurrentMedalTargetTime GetCurrentTargetMedalInEvent() const;

	// BrnGuiCache.h:1012
	float32_t GetCurrentTimeInEvent() const;

	// BrnGuiCache.h:1016
	float32_t GetTargetTimeInEvent() const;

	// BrnGuiCache.h:1021
	float32_t GetRequiredScoreForMedal(BrnGameState::ECurrentMedalTargetTime);

	// BrnGuiCache.h:1025
	float32_t GetDistanceInEvent() const;

	// BrnGuiCache.h:1029
	int8_t GetOpponentsInEvent() const;

	// BrnGuiCache.h:1033
	int32_t GetCurrentTakedownsInEvent() const;

	// BrnGuiCache.h:1037
	int32_t GetTargetTakedownsInEvent() const;

	// BrnGuiCache.h:1041
	int32_t GetCurrentScoreInEvent() const;

	// BrnGuiCache.h:1045
	int32_t GetTargetScoreInEvent() const;

	// BrnGuiCache.h:1049
	int32_t GetCurrentComboInEvent() const;

	// BrnGuiCache.h:1053
	int32_t GetMultiplierInEvent() const;

	// BrnGuiCache.h:1057
	int32_t GetLastStuntScore() const;

	// BrnGuiCache.h:1061
	int32_t GetLastStuntMultiplier() const;

	// BrnGuiCache.h:1065
	uint32_t GetStuntsInProgress() const;

	// BrnGuiCache.h:1069
	uint32_t GetAllStuntTypesInCurrentStunt() const;

	// BrnGuiCache.h:1073
	int32_t GetNumberOfStuntsToDisplay() const;

	// BrnGuiCache.h:1077
	const StuntToDisplay * GetStuntToDisplay(int32_t) const;

	// BrnGuiCache.h:1081
	bool IsComboInProgress() const;

	// BrnGuiCache.h:1085
	bool IsComboWarningActive() const;

	// BrnGuiCache.h:1089
	float32_t GetComboWarningActiveTime() const;

	// BrnGuiCache.h:1093
	int32_t GetCurrentRivalDamage() const;

	// BrnGuiCache.h:1097
	int32_t GetTargetRivalDamage() const;

	// BrnGuiCache.h:1101
	CgsID GetPursuitCarID() const;

	// BrnGuiCache.h:1105
	CgsID GetShutdownCarID() const;

	// BrnGuiCache.h:1109
	BrnProgression::TrophyUnlockData::UnlockType GetTrophyCarUnlockType() const;

	// BrnGuiCache.h:1113
	CgsID GetTrophyCarID() const;

	// BrnGuiCache.h:1117
	int32_t GetShowTimeComboMultiplier() const;

	// BrnGuiCache.h:1121
	int32_t GetShowTimeCarsCrashed() const;

	// BrnGuiCache.h:1125
	float32_t GetShowTimeDistanceTravelled() const;

	// BrnGuiCache.h:1129
	uint8_t GetCheckpointsInEvent() const;

	// BrnGuiCache.h:1133
	int32_t GetCheckpointReached() const;

	// BrnGuiCache.h:1137
	bool HasJustEnteredEvent() const;

	// BrnGuiCache.h:1141
	bool IsPreRaceFlyByActive() const;

	// BrnGuiCache.h:1145
	void SetPreRaceFlyByActive(bool);

	// BrnGuiCache.h:1149
	const GuiPFXHookEnumeration * GetPFXHookEnumeration() const;

	// BrnGuiCache.h:1153
	const BrnGui::GuiEventOfflinePostEvent::OfflinePostEventData * GetOfflinePostEventData() const;

	// BrnGuiCache.h:1157
	const BrnGui::GuiEventChangeReplayState::ReplayState GetReplayState() const;

	// BrnGuiCache.h:1162
	Vector3 & GetRaceCarPosition(EActiveRaceCarIndex);

	// BrnGuiCache.h:1167
	bool IsRaceCarInRange(EActiveRaceCarIndex);

	// BrnGuiCache.h:1172
	bool IsRaceCarCrashing(EActiveRaceCarIndex);

	// BrnGuiCache.h:1177
	bool IsActiveRaceCarIndexUsed(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1182
	bool IsActiveRaceCarConnecting(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1187
	bool IsActiveRaceCarDisconnected(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1192
	CgsID GetActiveRaceCarRivalId(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1197
	BrnGui::ERivalryStage GetActiveRaceCarRivalryStage(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1202
	uint8_t GetEventPositionOfRaceCar(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1207
	bool HasRaceCarFinished(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1211
	uint32_t GetScoringTrafficCount() const;

	// BrnGuiCache.h:1215
	const VehicleScoreData * GetScoringTrafficData(uint32_t) const;

	// BrnGuiCache.h:1219
	const GuiOverheadSignInfoEvent::VisibleOverheadSignArray * GetVisibleOverheadSignArray() const;

	// BrnGuiCache.h:1223
	LandmarkIndex GetEventDestinationLandmarkIndex() const;

	// BrnGuiCache.h:1227
	BrnWorld::EDistrict GetEventDestinationDistrict() const;

	// BrnGuiCache.h:1231
	const LandmarkIndex * GetEventLandmarks() const;

	// BrnGuiCache.h:1235
	LandmarkIndex GetEventFinishLandmark() const;

	// BrnGuiCache.h:1239
	int32_t GetOnlineRoundIndex() const;

	// BrnGuiCache.h:1244
	LandmarkIndex GetOnlineLandmarkIndex(int32_t) const;

	// BrnGuiCache.h:1248
	BrnNetwork::EPaybackType GetAvailablePayback(EActiveRaceCarIndex &) const;

	// BrnGuiCache.h:1253
	bool IsRoadRuleActive(BrnStreetData::ScoreType) const;

	// BrnGuiCache.h:1257
	BrnGameState::EActiveRoadRule GetActiveRoadRule() const;

	// BrnGuiCache.h:1261
	BrnGui::GuiEventSetRoadRuleScoreMode::ERoadPanelModes GetActiveRoadRuleScoringMode() const;

	// BrnGuiCache.h:1265
	bool IsRoadRuleShotActive() const;

	// BrnGuiCache.h:1269
	CgsID GetRoadRuleShotRoadId() const;

	// BrnGuiCache.h:1273
	bool IsRoadRuleShotTime() const;

	// BrnGuiCache.h:1277
	EActiveRaceCarIndex GetRoadRuleShotOpponentARCI() const;

	// BrnGuiCache.h:1281
	bool IsRoadRuleShotLocalNewRuler() const;

	// BrnGuiCache.h:1285
	bool HasRoadRuleShotBeenTaken() const;

	// BrnGuiCache.h:1289
	OptionsDataProfile * GetMenuOptionsData();

	// BrnGuiCache.h:1293
	bool IsCarUnlocked() const;

	// BrnGuiCache.h:1297
	CgsID GetUnlockedCarID() const;

	// BrnGuiCache.h:1301
	BrnGameState::GameStateModuleIO::ECarSelectType GetCurrentCarSelectType() const;

	// BrnGuiCache.h:1306
	EActiveRaceCarIndex GetActiveRaceCarFromRivalId(CgsID) const;

	// BrnGuiCache.h:1311
	BrnGui::ERivalryStage GetRivalryStageFromRivalId(CgsID) const;

	// BrnGuiCache.h:1315
	bool IsFriendsListShowing() const;

	// BrnGuiCache.h:1319
	BrnGui::GuiCache::EFriendsListWaitReason GetFriendsListWaitReason() const;

	// BrnGuiCache.h:1326
	void SetFriendsListWaitReason(BrnGui::GuiCache::EFriendsListWaitReason);

	// BrnGuiCache.h:1330
	bool IsFriendsListChangeIconShowing() const;

	// BrnGuiCache.h:1334
	uint16_t GetNumGoldMedals() const;

	// BrnGuiCache.h:1338
	uint16_t GetNumTotalMedals() const;

	// BrnGuiCache.h:1342
	uint16_t GetNumGoldMedalsToNextReward() const;

	// BrnGuiCache.h:1346
	uint16_t GetNumTotalMedalsToNextReward() const;

	// BrnGuiCache.h:1351
	void HandleSetActiveLandmarksEvent(const GuiEventSetActiveLandmarks *);

	// BrnGuiCache.h:1356
	void SetBurnoutSkillsManager(const BurnoutSkillsManager *);

	// BrnGuiCache.h:1360
	const BurnoutSkillsManager * GetBurnoutSkillsManager() const;

	// BrnGuiCache.h:1365
	void SetFreeburnChallengeManager(const FreeburnChallengeManager *);

	// BrnGuiCache.h:1369
	const FreeburnChallengeManager * GetFreeburnChallengeManager() const;

	// BrnGuiCache.h:1373
	BrnGameState::BurnoutSkillzData::EBurnoutSkillType GetCurrentSkillzSelected() const;

	// BrnGuiCache.h:1379
	float32_t GetBurnoutSkill(BrnGameState::BurnoutSkillzData::EBurnoutSkillType, EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1384
	const GuiShowtimeScoreUpdate & GetShowtimeScoreDataByActiveRaceCar(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1387
	bool GetAutoSaveEnabled() const;

	// BrnGuiCache.h:1392
	const BrnGui::GuiEventPreRaceMessages::MessageInfo * GetPreEventInfo(int32_t) const;

	// BrnGuiCache.h:1396
	uint32_t GetNumProfileEvents() const;

	// BrnGuiCache.h:1401
	const ProfileEvent * GetProfileEvent(uint32_t) const;

	// BrnGuiCache.h:1405
	const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event * GetPresetEvent(int32_t) const;

	// BrnGuiCache.h:1409
	const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event * GetPresetEventFromEventID(int32_t) const;

	// BrnGuiCache.h:1412
	int32_t GetNumPresetEvents() const;

	// BrnGuiCache.h:1417
	void GetOnlineFinishPoint(int32_t, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnGuiCache.h:1420
	int32_t GetNumOnlineFinishPoints() const;

	// BrnGuiCache.h:1425
	void SetIsNewProfile(bool);

	// BrnGuiCache.h:1428
	bool GetIsNewProfile() const;

	// BrnGuiCache.h:1431
	float32_t GetDistanceDrivenInCurrentCar() const;

	// BrnGuiCache.h:1435
	bool IsAutosaving() const;

	// BrnGuiCache.h:1439
	void SetIsAutosaving(bool);

	// BrnGuiCache.h:1444
	void SetConnectedToNetwork(bool);

	// BrnGuiCache.h:1449
	void SetDoDisconnectPopup(const CgsModule::Event *);

	// BrnGuiCache.h:1453
	bool IsInGame();

	// BrnGuiCache.h:1458
	void SetInGame(bool);

	// BrnGuiCache.h:1462
	bool IsAllowingSignInOutEvents() const;

	// BrnGuiCache.h:1467
	void SetAllowingSignInOutEvents(bool);

	// BrnGuiCache.h:1471
	bool PassedTheJunkyard() const;

	// BrnGuiCache.h:1475
	bool IsInJunkyard() const;

	// BrnGuiCache.h:1479
	bool IsOnlineTimeoutActive() const;

	// BrnGuiCache.h:1483
	InGameMessagesQueue * GetHudMessagesQueue();

	// BrnGuiCache.h:1487
	const CgsLanguage::ESku GetSku() const;

	// BrnGuiCache.h:1491
	const CgsLanguage::ELanguage GetLanguage() const;

	// BrnGuiCache.h:1495
	bool GetIsPlayerWrecked() const;

	// BrnGuiCache.h:1499
	bool GetPlayerSignInReported() const;

	// BrnGuiCache.h:1503
	bool GetPlayerSignOutReported() const;

	// BrnGuiCache.h:1507
	bool IsCarUnlockPending() const;

	// BrnGuiCache.h:1511
	bool IsCompletionSequenceInProgress() const;

	// BrnGuiCache.h:1516
	BrnGui::EGuiPlayerColours GetOnlinePlayerColourFromARCI(EActiveRaceCarIndex);

	// BrnGuiCache.h:1522
	int32_t HACK_FindABetterPlaceForMe_SetActiveLandmarksByEventID(uint32_t, float32_t, bool);

	// BrnGuiCache.h:1526
	bool GetCircleAsSelect() const;

	// BrnGuiCache.h:1530
	const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo * GetDriveThrough(int32_t) const;

	// BrnGuiCache.h:1534
	int32_t GetNumberOfDriveThroughs() const;

	// BrnGuiCache.h:1538
	bool GetControllerDisconected() const;

	// BrnGuiCache.h:1542
	bool GetIsCapturingMugshot();

	// BrnGuiCache.h:1546
	bool IsCameraConnected();

	// BrnGuiCache.h:1550
	bool IsWaitingForShowtimeResults() const;

	// BrnGuiCache.h:1554
	void SetWaitingForShowtimeResults(bool);

	// BrnGuiCache.h:1558
	void SetJunkyardFirstUse(bool);

	// BrnGuiCache.h:1562
	bool IsJunkyardFirstUse() const;

	// BrnGuiCache.h:1565
	Random * GetRandomNumberGenerator();

	// BrnGuiCache.h:1569
	int32_t GetCheckpointReached(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1572
	bool IsMultiplayerAllowed() const;

	// BrnGuiCache.h:1576
	bool IsLoadingScreenVisible() const;

	// BrnGuiCache.h:1580
	BrnProgression::RaceEventData::EModeType GetSatNavEventFilter() const;

	// BrnGuiCache.h:1584
	bool GetSatNavEventFilterEnabled() const;

	// BrnGuiCache.h:1588
	const BrnProgression::Profile * GetProgressionProfile() const;

	// BrnGuiCache.h:1592
	bool IsEATraxChyronActive() const;

	// BrnGuiCache.h:1596
	bool IsEasyDriveAllowed() const;

	// BrnGuiCache.h:1599
	bool AreRoadRulesAvailable() const;

	// BrnGuiCache.h:1605
	StateLoadingHelper GetStateLoadingHelper() const;

	// BrnGuiCache.h:1610
	void UnlockCredits();

private:
	// BrnGuiCache.h:1908
	void UpdateTrackerInfo(const LandmarkIndex *, uint32_t);

	// BrnGuiCache.h:1912
	void UpdateTrackerInfo(const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event *);

	// BrnGuiCache.h:1917
	InGamePlayerStatusData * GetOnlinePlayerInfoForWriting(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnGuiCache.h:1922
	void HandleSpecificPreSetRacesEvent(const GuiEventSpecificPresetRaces *);

	// BrnGuiCache.h:1927
	void DetermineCarUnlockPending(const BrnProgression::Profile *);

}

// BrnGuiCache.h:473
struct BrnGui::GuiCache {
private:
	// BrnGuiCache.h:1616
	GuiEventTimeInfo mTimeInfo;

	// BrnGuiCache.h:1618
	BrnGui::GuiEventChangeReplayState::ReplayState meCurrentReplayState;

	// BrnGuiCache.h:1624
	StateLoadingHelper mStateLoadingHelper;

	// BrnGuiCache.h:1626
	BrnGui::GuiTracker * mpGuiTracker;

	// BrnGuiCache.h:1627
	SystemUserProfile * mpSystemUserProfile;

	// BrnGuiCache.h:1628
	Profile * mpProgressionProfile;

	// BrnGuiCache.h:1629
	MapIconManager * mpMapIconManager;

	// BrnGuiCache.h:1631
	const WorldDataController * mpWorldDataController;

	// BrnGuiCache.h:1632
	const BurnoutSkillsManager * mpSkillsManager;

	// BrnGuiCache.h:1633
	const FreeburnChallengeManager * mpChallengeManager;

	// BrnGuiCache.h:1635
	const HudMessageController * mpHudMessageController;

	// BrnGuiCache.h:1636
	const HudMessageDirector * mpHudMessageDirector;

	// BrnGuiCache.h:1637
	const PopupController * mpPopupController;

	// BrnGuiCache.h:1639
	bool mbHudMessageCptAvailable;

	// BrnGuiCache.h:1640
	InGameMessagesQueue mHudMessagesQueue;

	// BrnGuiCache.h:1642
	GuiPFXHookEnumeration mPFXHookEnumeration;

	// BrnGuiCache.h:1648
	GuiPlayerInfo mGuiPlayerInfo;

	// BrnGuiCache.h:1650
	BrnGui::GuiPlayerCrashingStateChangeEvent::CrashBarState meCurrentCrashState;

	// BrnGuiCache.h:1651
	bool mbIsPlayerWrecked;

	// BrnGuiCache.h:1653
	int32_t miActiveUserIndex;

	// BrnGuiCache.h:1655
	int32_t miConsecutiveLosses;

	// BrnGuiCache.h:1657
	CgsNetwork::EServerInterfaceError meLastDisconnectedError;

	// BrnGuiCache.h:1659
	bool mbIsGamePaused;

	// BrnGuiCache.h:1660
	bool mbIsInHighDef;

	// BrnGuiCache.h:1661
	float32_t mfAspectRatio;

	// BrnGuiCache.h:1662
	bool mbIsInEvent;

	// BrnGuiCache.h:1663
	bool mbIsInShortcut;

	// BrnGuiCache.h:1664
	bool mbIsOnline;

	// BrnGuiCache.h:1665
	bool mbIsPreparingForInvite;

	// BrnGuiCache.h:1666
	bool mbIsStartingGameDueToPlayerJoin;

	// BrnGuiCache.h:1667
	bool mbIsPerformInviteReceived;

	// BrnGuiCache.h:1668
	bool mbIsConnectedToNetwork;

	// BrnGuiCache.h:1669
	bool mbDoJoinOnlineRankedGame;

	// BrnGuiCache.h:1670
	bool mbDoJoinOnlineFreeburnGame;

	// BrnGuiCache.h:1671
	bool mbEnteredOnlineViaEasyDrive;

	// BrnGuiCache.h:1672
	bool mbIsInGame;

	// BrnGuiCache.h:1673
	bool mbIsAllowingSignInOutEvents;

	// BrnGuiCache.h:1674
	bool mbGotToInGameState;

	// BrnGuiCache.h:1675
	bool mbIsInJunkyard;

	// BrnGuiCache.h:1676
	bool mbPassedTheJunkyard;

	// BrnGuiCache.h:1677
	bool mbMugshotActive;

	// BrnGuiCache.h:1678
	bool mbRequestedShowtimeResults;

	// BrnGuiCache.h:1679
	bool mbImageExportInProgress;

	// BrnGuiCache.h:1681
	BrnNetwork::EPaybackType meLastAvailablePayback;

	// BrnGuiCache.h:1682
	EActiveRaceCarIndex meLastPaybackVictim;

	// BrnGuiCache.h:1683
	bool mbPaybackTriggerable;

	// BrnGuiCache.h:1685
	bool mbCarUnlockInProgress;

	// BrnGuiCache.h:1686
	CgsID mCarUnlockedID;

	// BrnGuiCache.h:1687
	BrnGameState::GameStateModuleIO::ECarSelectType meCarSelectType;

	// BrnGuiCache.h:1689
	bool mbCarUnlockPending;

	// BrnGuiCache.h:1690
	bool mbCarUnlockPendingSet;

	// BrnGuiCache.h:1692
	bool mbCompletionSequenceInProgress;

	// BrnGuiCache.h:1694
	bool mbIsNewProfile;

	// BrnGuiCache.h:1699
	int32_t[8] maiCheckpointReached;

	// BrnGuiCache.h:1701
	LandmarkIndex[512] maTargetLandmarkIndices;

	// BrnGuiCache.h:1702
	int32_t miNumTargetLandmarks;

	// BrnGuiCache.h:1704
	GuiEventChangeDistrict mCachedDistrictEvent;

	// BrnGuiCache.h:1706
	Race[6] maPresetRaces;

	// BrnGuiCache.h:1707
	int32_t miNumPresetRaces;

	// BrnGuiCache.h:1709
	LandmarkIndex mCurrentLandmarkIndex;

	// BrnGuiCache.h:1711
	uint8_t muNumActiveLandmarks;

	// BrnGuiCache.h:1712
	LandmarkIndex[512] maActiveLandmarkIndices;

	// BrnGuiCache.h:1714
	GuiEventUpdateEventStarts mCachedEventStarts;

	// BrnGuiCache.h:1716
	extern const int32_t KI_MAX_FINISH_POINTS = 256;

	// BrnGuiCache.h:1717
	BitArray<256u> mEventsWithUniqueFinishPoints;

	// BrnGuiCache.h:1719
	BrnGui::GuiEventUpdateSatNav::SatNavIconInfo[46] mDriveThroughInfo;

	// BrnGuiCache.h:1720
	int32_t miNumDriveThroughs;

	// BrnGuiCache.h:1722
	BrnProgression::RaceEventData::EModeType meSatNavEventFilter;

	// BrnGuiCache.h:1723
	bool mbSatNavEventFilterEnabled;

	// BrnGuiCache.h:1727
	GuiEventSpecificPresetRaces mEvents;

	// BrnGuiCache.h:1729
	BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

	// BrnGuiCache.h:1730
	uint32_t muEventID;

	// BrnGuiCache.h:1731
	uint32_t muJunctionID;

	// BrnGuiCache.h:1733
	BrnGui::GuiEventOfflinePostEvent::OfflinePostEventData mLastOffinePostEventInfo;

	// BrnGuiCache.h:1735
	BrnGameState::ECurrentMedalTargetTime meCurrentTargetMedal;

	// BrnGuiCache.h:1737
	float32_t mfEventTime;

	// BrnGuiCache.h:1738
	float32_t mfTargetTime;

	// BrnGuiCache.h:1740
	float32_t[4] mafTargetScores;

	// BrnGuiCache.h:1743
	int8_t miOpponentsInEvent;

	// BrnGuiCache.h:1745
	float32_t mfEventDistance;

	// BrnGuiCache.h:1747
	LandmarkIndex mEventDestinationLandmarkIndex;

	// BrnGuiCache.h:1748
	BrnWorld::EDistrict mEventDestinationDistrict;

	// BrnGuiCache.h:1749
	LandmarkIndex[16] maiLandmarkIndices;

	// BrnGuiCache.h:1750
	BrnWorld::EDistrict[16] maeCurrentEventDistricts;

	// BrnGuiCache.h:1751
	uint8_t muCheckpointsInEvent;

	// BrnGuiCache.h:1752
	int32_t miCheckpointReached;

	// BrnGuiCache.h:1754
	int32_t miTakedownsCurrent;

	// BrnGuiCache.h:1755
	int32_t miTakedownTarget;

	// BrnGuiCache.h:1757
	int32_t miScoreCurrent;

	// BrnGuiCache.h:1758
	int32_t miScoreTarget;

	// BrnGuiCache.h:1759
	int32_t miScoreCombo;

	// BrnGuiCache.h:1760
	int32_t miComboMultiplier;

	// BrnGuiCache.h:1762
	int32_t miLastStuntScore;

	// BrnGuiCache.h:1763
	int32_t miLastStuntMultiplier;

	// BrnGuiCache.h:1765
	int32_t miRivalDamageCurrent;

	// BrnGuiCache.h:1766
	int32_t miRivalDamageTarget;

	// BrnGuiCache.h:1767
	CgsID mPursuedCarID;

	// BrnGuiCache.h:1769
	CgsID mShutdownCarID;

	// BrnGuiCache.h:1771
	BrnProgression::TrophyUnlockData::UnlockType meTrophyCarUnlockType;

	// BrnGuiCache.h:1772
	CgsID mTrophyCarID;

	// BrnGuiCache.h:1774
	int32_t miShowTimeCarsCrashed;

	// BrnGuiCache.h:1775
	int32_t miShowTimeComboMultiplier;

	// BrnGuiCache.h:1776
	float32_t mfShowTimeDistanceTravelled;

	// BrnGuiCache.h:1778
	float32_t mfDistanceToCheckpoint;

	// BrnGuiCache.h:1780
	bool mbHasJustEnteredEvent;

	// BrnGuiCache.h:1781
	bool mbIsPreRaceFlyByActive;

	// BrnGuiCache.h:1783
	GuiRaceCarInfoEvent mRaceCarInfo;

	// BrnGuiCache.h:1784
	BrnGui::ERivalryStage[8] maeRivalryStatus;

	// BrnGuiCache.h:1786
	GuiEventRacePositionInfo mCarPositionsInRace;

	// BrnGuiCache.h:1788
	GuiTrafficCarInfoEvent mTrafficCarInfo;

	// BrnGuiCache.h:1789
	GuiOverheadSignInfoEvent::VisibleOverheadSignArray mVisibleOverheadSignArray;

	// BrnGuiCache.h:1791
	LandmarkIndex mRaceDestinationLandmarkIndex;

	// BrnGuiCache.h:1793
	CgsLanguage::ESku mSku;

	// BrnGuiCache.h:1794
	CgsLanguage::ELanguage mLanguage;

	// BrnGuiCache.h:1796
	extern int32_t[] maiAgeRatings;

	// BrnGuiCache.h:1800
	int32_t miRoundIndex;

	// BrnGuiCache.h:1802
	GuiEventNetworkGameParams mGameOptions;

	// BrnGuiCache.h:1803
	bool mbResetOnlineGameOptions;

	// BrnGuiCache.h:1805
	GuiEventOnlineEventFinishingOrder mOnlineFinishingOrder;

	// BrnGuiCache.h:1806
	GuiEventOnlinePostEvent mOnlinePostEventData;

	// BrnGuiCache.h:1810
	bool[2] mabRoadRulesActive;

	// BrnGuiCache.h:1811
	BrnGameState::EActiveRoadRule meActiveRoadRule;

	// BrnGuiCache.h:1812
	BrnGui::GuiEventSetRoadRuleScoreMode::ERoadPanelModes meRoadRuleScoreMode;

	// BrnGuiCache.h:1814
	bool mbRoadRuleShotActive;

	// BrnGuiCache.h:1815
	bool mbRoadRuleShotLocalPlayerNewRuler;

	// BrnGuiCache.h:1816
	bool mbRoadRuleShotTaken;

	// BrnGuiCache.h:1817
	EActiveRaceCarIndex meRoadRuleShotOpponentARCI;

	// BrnGuiCache.h:1818
	CgsID mRoadRuleShotRoadId;

	// BrnGuiCache.h:1819
	bool mbIsRoadRuleShotTime;

	// BrnGuiCache.h:1824
	StuntToDisplay[1] maDisplayedStunts;

	// BrnGuiCache.h:1825
	uint32_t muCurrentStunts;

	// BrnGuiCache.h:1826
	uint32_t muAllStunts;

	// BrnGuiCache.h:1827
	float32_t mfComboWarningActiveTime;

	// BrnGuiCache.h:1828
	bool mbComboWarningActive;

	// BrnGuiCache.h:1829
	bool mbComboInProgress;

	// BrnGuiCache.h:1834
	int32_t miOnlinePlayerCount;

	// BrnGuiCache.h:1836
	InGamePlayerStatusData[8] maPlayerInfo;

	// BrnGuiCache.h:1837
	GuiEventNetworkLobbyPlayerList mLobbyPlayerInfoList;

	// BrnGuiCache.h:1838
	BrnGameState::GameStateModuleIO::EPlayerTeam[8] maeCurrentPlayerTeam;

	// BrnGuiCache.h:1839
	char[36] macOnlineGameName;

	// BrnGuiCache.h:1840
	bool[8] mabDisconnectedPlayers;

	// BrnGuiCache.h:1841
	bool[8] mabInInCarSelectOnline;

	// BrnGuiCache.h:1842
	bool[8] mabEliminated;

	// BrnGuiCache.h:1843
	bool mbLocalPlayerHost;

	// BrnGuiCache.h:1847
	bool mbIsFriendListShowing;

	// BrnGuiCache.h:1848
	bool mbIsFriendListChangeIconShowing;

	// BrnGuiCache.h:1849
	BrnGui::GuiCache::EFriendsListWaitReason meFriendListWaitReason;

	// BrnGuiCache.h:1852
	uint16_t mu16NumGoldMedals;

	// BrnGuiCache.h:1853
	uint16_t mu16NumSilverMedals;

	// BrnGuiCache.h:1854
	uint16_t mu16NumBronzeMedals;

	// BrnGuiCache.h:1857
	uint16_t mu16NumGoldsToNextReward;

	// BrnGuiCache.h:1858
	uint16_t mu16NumTotalToNextReward;

	// BrnGuiCache.h:1861
	OptionsDataProfile mOptionsData;

	// BrnGuiCache.h:1862
	GuiEventRivalryFullInfoResponse mRivalInfo;

	// BrnGuiCache.h:1865
	GuiShowtimeScoreUpdate[8] maShowtimeScoreData;

	// BrnGuiCache.h:1868
	bool mbAutoSaveEnabled;

	// BrnGuiCache.h:1870
	bool mbIsAutosaving;

	// BrnGuiCache.h:1873
	bool mbPlayerSignInReported;

	// BrnGuiCache.h:1874
	bool mbPlayerSignOutReported;

	// BrnGuiCache.h:1877
	GuiEventPreRaceMessages mPreRaceData;

	// BrnGuiCache.h:1880
	GuiEventEventStateResponse mProfileEventState;

	// BrnGuiCache.h:1882
	BrnNetwork::ECameraStatus meLocalCameraStatus;

	// BrnGuiCache.h:1884
	bool mbOnlineEventCountdownActive;

	// BrnGuiCache.h:1887
	bool mbGetCircleAsSelect;

	// BrnGuiCache.h:1890
	bool mbJunkyardFirstUse;

	// BrnGuiCache.h:1893
	Random mRandom;

	// BrnGuiCache.h:1895
	bool mbIsLoadingScreenVisible;

	// BrnGuiCache.h:1898
	float32_t mfDistanceDrivenInCurrentCar;

	// BrnGuiCache.h:1900
	bool mbEATraxChyronActive;

	// BrnGuiCache.h:1901
	bool mbEasyDriveAllowed;

	// BrnGuiCache.h:1902
	bool mbAreRoadRulesAvailable;

public:
	// BrnGuiCache.h:490
	void Construct(BrnGui::GuiTracker *, SystemUserProfile *);

	// BrnGuiCache.h:497
	void RecEvent(const CgsModule::Event *, int32_t, int32_t);

	// BrnGuiCache.h:501
	void Update(InputBuffer *);

	// BrnGuiCache.h:506
	void SetMapIconManager(MapIconManager *);

	// BrnGuiCache.h:510
	MapIconManager * GetMapIconManager() const;

	// BrnGuiCache.h:514
	BrnGui::GuiTracker * GetGuiTracker() const;

	// BrnGuiCache.h:517
	const ChallengeList * GetFreeburnChallengeList() const;

	// BrnGuiCache.h:527
	void GetLandmarkInfoAtPositionInList(int32_t, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnGuiCache.h:533
	void GetOnlineLandmarkInfoAtPositionInList(int32_t, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnGuiCache.h:539
	void GetLandmarkInfoFromIndex(LandmarkIndex, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnGuiCache.h:545
	void GetLandmarkInfoFromID(CgsID, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnGuiCache.h:548
	uint32_t GetNumEventStarts() const;

	// BrnGuiCache.h:552
	const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * GetEventStartInfoFromIndex(uint32_t) const;

	// BrnGuiCache.h:556
	const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * GetEventStartInfoFromLightTriggerID(LightTriggerId) const;

	// BrnGuiCache.h:560
	const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * GetEventStartInfoFromJunctionID(uint32_t) const;

	// BrnGuiCache.h:564
	const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * GetEventStartInfoFromEventID(int32_t) const;

	// BrnGuiCache.h:568
	const LandmarkIndex GetCurrentLandmarkIndex() const;

	// BrnGuiCache.h:573
	const Race * GetPresetRace(int32_t) const;

	// BrnGuiCache.h:577
	int32_t GetNumPresetRaces() const;

	// BrnGuiCache.h:582
	void SetWorldDataController(const WorldDataController *);

	// BrnGuiCache.h:586
	const WorldDataController * GetWorldDataController() const;

	// BrnGuiCache.h:591
	void SetHudMessageController(const HudMessageController *);

	// BrnGuiCache.h:596
	void SetHudMessageDirector(const HudMessageDirector *);

	// BrnGuiCache.h:601
	void SetPopupController(const PopupController *);

	// BrnGuiCache.h:605
	const HudMessageController * GetHudMessageController() const;

	// BrnGuiCache.h:609
	const HudMessageDirector * GetHudMessageDirector() const;

	// BrnGuiCache.h:613
	const PopupController * GetPopupController() const;

	// BrnGuiCache.h:618
	bool EnsureResourceIsLoaded(const sResourceTuple &);

	// BrnGuiCache.h:623
	CgsID GetOriginalCarId(CgsID);

	// BrnGuiCache.h:629
	bool EnsureResourcesAreLoaded(const sResourceTuple *, uint32_t);

	// BrnGuiCache.h:633
	void * GetLoadedResource(uint32_t) const;

	// BrnGuiCache.h:638
	void UnloadResource(const sResourceTuple &);

	// BrnGuiCache.h:644
	void UnloadResources(const sResourceTuple *, uint32_t);

	// BrnGuiCache.h:649
	void UnloadAllResources(CgsGui::ResourceRequestTypes);

	// BrnGuiCache.h:654
	bool EnsureResourceIsUnloaded(const sResourceTuple &);

	// BrnGuiCache.h:660
	bool EnsureResourcesAreUnloaded(const sResourceTuple *, uint32_t);

	// BrnGuiCache.h:665
	void ClearExpectedAptComponentList(BrnGui::GuiFlow);

	// BrnGuiCache.h:672
	void SetExpectedAptComponentList(BrnGui::GuiFlow, uint32_t *, uint32_t);

	// BrnGuiCache.h:678
	void AppendExpectedAptComponent(BrnGui::GuiFlow, uint32_t);

	// BrnGuiCache.h:684
	void AppendExpectedAptComponent(BrnGui::GuiFlow, const char *);

	// BrnGuiCache.h:691
	void AppendExpectedAptComponentList(BrnGui::GuiFlow, uint32_t *, uint32_t);

	// BrnGuiCache.h:697
	void RemoveExpectedAptComponent(BrnGui::GuiFlow, uint32_t);

	// BrnGuiCache.h:704
	void RemoveExpectedAptComponentlist(BrnGui::GuiFlow, uint32_t *, uint32_t);

	// BrnGuiCache.h:710
	void AppendExpectedControlledAptComponent(uint32_t, CgsGui::ObjectController *);

	// BrnGuiCache.h:716
	void AppendExpectedControlledAptComponent(const char *, CgsGui::ObjectController *);

	// BrnGuiCache.h:720
	void ClearExpectedControlledAptComponentList();

	// BrnGuiCache.h:725
	bool AreAllAptComponentsInitialised(BrnGui::GuiFlow);

	// BrnGuiCache.h:731
	bool IsWaitingAptComponent(BrnGui::GuiFlow, uint32_t);

	// BrnGuiCache.h:735
	const GuiEventOnlineEventFinishingOrder * GetOnlineEventFinishingOrder() const;

	// BrnGuiCache.h:738
	const GuiEventOnlinePostEvent * GetOnlinePostEventData() const;

	// BrnGuiCache.h:742
	int32_t GetOnlinePlayerCount() const;

	// BrnGuiCache.h:746
	GuiEventChangeDistrict GetDistrictEvent() const;

	// BrnGuiCache.h:750
	EActiveRaceCarIndex GetPlayerActiveRaceCarIndex() const;

	// BrnGuiCache.h:754
	EGlobalRaceCarIndex GetPlayerGlobalRaceCarIndex() const;

	// BrnGuiCache.h:758
	const BrnGui::GuiPlayerEngineEvent::EEngineState GetPlayerEngineState() const;

	// BrnGuiCache.h:762
	const GuiEventNetworkLobbyPlayerList * GetLobbyPlayerList() const;

	// BrnGuiCache.h:766
	const bool IsLocalPlayerHost() const;

	// BrnGuiCache.h:770
	const char * GetOnlineGameName() const;

	// BrnGuiCache.h:775
	const InGamePlayerStatusData * GetOnlinePlayerInfo(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:780
	const InGamePlayerStatusData * GetOnlinePlayerInfo(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnGuiCache.h:785
	EActiveRaceCarIndex GetActiveRaceCarFromNetworkId(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnGuiCache.h:788
	const InGamePlayerStatusData * GetOnlinePlayerInfoByIndex(int32_t);

	// BrnGuiCache.h:794
	BrnGameState::GameStateModuleIO::EPlayerTeam GetCurrentOnlinePlayerTeam(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:799
	bool GetOnlinePlayerDisconnected(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:804
	bool GetOnlinePlayerInCarSelect(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:809
	bool IsOnlinePlayerEliminated(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:813
	const char * GetPlayerName() const;

	// BrnGuiCache.h:817
	const char * GetPlayerNameInQuotes() const;

	// BrnGuiCache.h:821
	float32_t GetTimeStep() const;

	// BrnGuiCache.h:825
	float32_t GetTime() const;

	// BrnGuiCache.h:829
	const GuiPlayerInfo * GetPlayerInfo() const;

	// BrnGuiCache.h:833
	BrnGameState::GameStateModuleIO::EGameModeType GetGameMode() const;

	// BrnGuiCache.h:837
	bool IsInFreeburn() const;

	// BrnGuiCache.h:841
	uint32_t GetEventID() const;

	// BrnGuiCache.h:845
	uint32_t GetJunctionID() const;

	// BrnGuiCache.h:849
	void RefreshMapState();

	// BrnGuiCache.h:853
	bool IsHudMessagingActive() const;

	// BrnGuiCache.h:857
	void SetHudMessagingActive(bool);

	// BrnGuiCache.h:861
	const LandmarkIndex * GetActiveLandmarks() const;

	// BrnGuiCache.h:865
	uint8_t GetNumActiveLandmarks() const;

	// BrnGuiCache.h:869
	const LandmarkIndex * GetTargetLandmarks() const;

	// BrnGuiCache.h:873
	int32_t GetNumTargetLandmarks() const;

	// BrnGuiCache.h:877
	bool IsGamePaused() const;

	// BrnGuiCache.h:881
	bool IsInHighDef() const;

	// BrnGuiCache.h:885
	void SetHighDef(bool);

	// BrnGuiCache.h:889
	float32_t GetAspectRatio() const;

	// BrnGuiCache.h:893
	void SetAspectRatio(float32_t);

	// BrnGuiCache.h:897
	bool IsInEvent() const;

	// BrnGuiCache.h:901
	bool IsInShortcut() const;

	// BrnGuiCache.h:905
	bool IsPreparingForInvite() const;

	// BrnGuiCache.h:909
	bool IsPerformInviteReceived() const;

	// BrnGuiCache.h:913
	bool IsStartingGameDueToPlayerJoin() const;

	// BrnGuiCache.h:918
	void SetImageExportInProgress(bool);

	// BrnGuiCache.h:922
	bool IsImageExportInProgress() const;

	// BrnGuiCache.h:926
	void ResetStartingGameDueToPlayerJoin();

	// BrnGuiCache.h:930
	bool IsConnectedToNetwork() const;

	// BrnGuiCache.h:933
	CgsNetwork::EServerInterfaceError GetDoDisconnectPopupError() const;

	// BrnGuiCache.h:937
	bool GetDoDisconnectPopup() const;

	// BrnGuiCache.h:941
	BrnGui::GuiPlayerCrashingStateChangeEvent::CrashBarState GetCurrentCrashState() const;

	// BrnGuiCache.h:944
	GuiEventNetworkGameParams * GetOnlineGameModeOptions();

	// BrnGuiCache.h:947
	const BrnGui::GuiEventNetworkGameParams * GetOnlineGameModeOptions() const;

	// BrnGuiCache.h:951
	void SetResetOnlineGameOptions(bool);

	// BrnGuiCache.h:954
	bool GetResetOnlineGameOptions() const;

	// BrnGuiCache.h:958
	bool GetDoJoinOnlineRankedGame();

	// BrnGuiCache.h:962
	const bool GetDoJoinOnlineRankedGame() const;

	// BrnGuiCache.h:967
	void SetDoJoinOnlineRankedGame(bool);

	// BrnGuiCache.h:971
	bool GetDoJoinOnlineFreeburnGame();

	// BrnGuiCache.h:975
	const bool GetDoJoinOnlineFreeburnGame() const;

	// BrnGuiCache.h:980
	void SetDoJoinOnlineFreeburnGame(bool);

	// BrnGuiCache.h:984
	const bool GetEnteredOnlineViaEasyDrive() const;

	// BrnGuiCache.h:989
	void SetEnteredOnlineViaEasyDrive(bool);

	// BrnGuiCache.h:992
	bool IsOnline() const;

	// BrnGuiCache.h:996
	bool IsOfflineGameMode() const;

	// BrnGuiCache.h:1000
	int32_t GetActiveUserIndex() const;

	// BrnGuiCache.h:1004
	int32_t GetNumConsecutiveLosses() const;

	// BrnGuiCache.h:1008
	BrnGameState::ECurrentMedalTargetTime GetCurrentTargetMedalInEvent() const;

	// BrnGuiCache.h:1012
	float32_t GetCurrentTimeInEvent() const;

	// BrnGuiCache.h:1016
	float32_t GetTargetTimeInEvent() const;

	// BrnGuiCache.h:1021
	float32_t GetRequiredScoreForMedal(BrnGameState::ECurrentMedalTargetTime);

	// BrnGuiCache.h:1025
	float32_t GetDistanceInEvent() const;

	// BrnGuiCache.h:1029
	int8_t GetOpponentsInEvent() const;

	// BrnGuiCache.h:1033
	int32_t GetCurrentTakedownsInEvent() const;

	// BrnGuiCache.h:1037
	int32_t GetTargetTakedownsInEvent() const;

	// BrnGuiCache.h:1041
	int32_t GetCurrentScoreInEvent() const;

	// BrnGuiCache.h:1045
	int32_t GetTargetScoreInEvent() const;

	// BrnGuiCache.h:1049
	int32_t GetCurrentComboInEvent() const;

	// BrnGuiCache.h:1053
	int32_t GetMultiplierInEvent() const;

	// BrnGuiCache.h:1057
	int32_t GetLastStuntScore() const;

	// BrnGuiCache.h:1061
	int32_t GetLastStuntMultiplier() const;

	// BrnGuiCache.h:1065
	uint32_t GetStuntsInProgress() const;

	// BrnGuiCache.h:1069
	uint32_t GetAllStuntTypesInCurrentStunt() const;

	// BrnGuiCache.h:1073
	int32_t GetNumberOfStuntsToDisplay() const;

	// BrnGuiCache.h:1077
	const StuntToDisplay * GetStuntToDisplay(int32_t) const;

	// BrnGuiCache.h:1081
	bool IsComboInProgress() const;

	// BrnGuiCache.h:1085
	bool IsComboWarningActive() const;

	// BrnGuiCache.h:1089
	float32_t GetComboWarningActiveTime() const;

	// BrnGuiCache.h:1093
	int32_t GetCurrentRivalDamage() const;

	// BrnGuiCache.h:1097
	int32_t GetTargetRivalDamage() const;

	// BrnGuiCache.h:1101
	CgsID GetPursuitCarID() const;

	// BrnGuiCache.h:1105
	CgsID GetShutdownCarID() const;

	// BrnGuiCache.h:1109
	BrnProgression::TrophyUnlockData::UnlockType GetTrophyCarUnlockType() const;

	// BrnGuiCache.h:1113
	CgsID GetTrophyCarID() const;

	// BrnGuiCache.h:1117
	int32_t GetShowTimeComboMultiplier() const;

	// BrnGuiCache.h:1121
	int32_t GetShowTimeCarsCrashed() const;

	// BrnGuiCache.h:1125
	float32_t GetShowTimeDistanceTravelled() const;

	// BrnGuiCache.h:1129
	uint8_t GetCheckpointsInEvent() const;

	// BrnGuiCache.h:1133
	int32_t GetCheckpointReached() const;

	// BrnGuiCache.h:1137
	bool HasJustEnteredEvent() const;

	// BrnGuiCache.h:1141
	bool IsPreRaceFlyByActive() const;

	// BrnGuiCache.h:1145
	void SetPreRaceFlyByActive(bool);

	// BrnGuiCache.h:1149
	const GuiPFXHookEnumeration * GetPFXHookEnumeration() const;

	// BrnGuiCache.h:1153
	const BrnGui::GuiEventOfflinePostEvent::OfflinePostEventData * GetOfflinePostEventData() const;

	// BrnGuiCache.h:1157
	const BrnGui::GuiEventChangeReplayState::ReplayState GetReplayState() const;

	// BrnGuiCache.h:1162
	Vector3 & GetRaceCarPosition(EActiveRaceCarIndex);

	// BrnGuiCache.h:1167
	bool IsRaceCarInRange(EActiveRaceCarIndex);

	// BrnGuiCache.h:1172
	bool IsRaceCarCrashing(EActiveRaceCarIndex);

	// BrnGuiCache.h:1177
	bool IsActiveRaceCarIndexUsed(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1182
	bool IsActiveRaceCarConnecting(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1187
	bool IsActiveRaceCarDisconnected(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1192
	CgsID GetActiveRaceCarRivalId(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1197
	BrnGui::ERivalryStage GetActiveRaceCarRivalryStage(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1202
	uint8_t GetEventPositionOfRaceCar(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1207
	bool HasRaceCarFinished(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1211
	uint32_t GetScoringTrafficCount() const;

	// BrnGuiCache.h:1215
	const VehicleScoreData * GetScoringTrafficData(uint32_t) const;

	// BrnGuiCache.h:1219
	const GuiOverheadSignInfoEvent::VisibleOverheadSignArray * GetVisibleOverheadSignArray() const;

	// BrnGuiCache.h:1223
	LandmarkIndex GetEventDestinationLandmarkIndex() const;

	// BrnGuiCache.h:1227
	BrnWorld::EDistrict GetEventDestinationDistrict() const;

	// BrnGuiCache.h:1231
	const LandmarkIndex * GetEventLandmarks() const;

	// BrnGuiCache.h:1235
	LandmarkIndex GetEventFinishLandmark() const;

	// BrnGuiCache.h:1239
	int32_t GetOnlineRoundIndex() const;

	// BrnGuiCache.h:1244
	LandmarkIndex GetOnlineLandmarkIndex(int32_t) const;

	// BrnGuiCache.h:1248
	BrnNetwork::EPaybackType GetAvailablePayback(EActiveRaceCarIndex &) const;

	// BrnGuiCache.h:1253
	bool IsRoadRuleActive(BrnStreetData::ScoreType) const;

	// BrnGuiCache.h:1257
	BrnGameState::EActiveRoadRule GetActiveRoadRule() const;

	// BrnGuiCache.h:1261
	BrnGui::GuiEventSetRoadRuleScoreMode::ERoadPanelModes GetActiveRoadRuleScoringMode() const;

	// BrnGuiCache.h:1265
	bool IsRoadRuleShotActive() const;

	// BrnGuiCache.h:1269
	CgsID GetRoadRuleShotRoadId() const;

	// BrnGuiCache.h:1273
	bool IsRoadRuleShotTime() const;

	// BrnGuiCache.h:1277
	EActiveRaceCarIndex GetRoadRuleShotOpponentARCI() const;

	// BrnGuiCache.h:1281
	bool IsRoadRuleShotLocalNewRuler() const;

	// BrnGuiCache.h:1285
	bool HasRoadRuleShotBeenTaken() const;

	// BrnGuiCache.h:1289
	OptionsDataProfile * GetMenuOptionsData();

	// BrnGuiCache.h:1293
	bool IsCarUnlocked() const;

	// BrnGuiCache.h:1297
	CgsID GetUnlockedCarID() const;

	// BrnGuiCache.h:1301
	BrnGameState::GameStateModuleIO::ECarSelectType GetCurrentCarSelectType() const;

	// BrnGuiCache.h:1306
	EActiveRaceCarIndex GetActiveRaceCarFromRivalId(CgsID) const;

	// BrnGuiCache.h:1311
	BrnGui::ERivalryStage GetRivalryStageFromRivalId(CgsID) const;

	// BrnGuiCache.h:1315
	bool IsFriendsListShowing() const;

	// BrnGuiCache.h:1319
	BrnGui::GuiCache::EFriendsListWaitReason GetFriendsListWaitReason() const;

	// BrnGuiCache.h:1326
	void SetFriendsListWaitReason(BrnGui::GuiCache::EFriendsListWaitReason);

	// BrnGuiCache.h:1330
	bool IsFriendsListChangeIconShowing() const;

	// BrnGuiCache.h:1334
	uint16_t GetNumGoldMedals() const;

	// BrnGuiCache.h:1338
	uint16_t GetNumTotalMedals() const;

	// BrnGuiCache.h:1342
	uint16_t GetNumGoldMedalsToNextReward() const;

	// BrnGuiCache.h:1346
	uint16_t GetNumTotalMedalsToNextReward() const;

	// BrnGuiCache.h:1351
	void HandleSetActiveLandmarksEvent(const GuiEventSetActiveLandmarks *);

	// BrnGuiCache.h:1356
	void SetBurnoutSkillsManager(const BurnoutSkillsManager *);

	// BrnGuiCache.h:1360
	const BurnoutSkillsManager * GetBurnoutSkillsManager() const;

	// BrnGuiCache.h:1365
	void SetFreeburnChallengeManager(const FreeburnChallengeManager *);

	// BrnGuiCache.h:1369
	const FreeburnChallengeManager * GetFreeburnChallengeManager() const;

	// BrnGuiCache.h:1373
	BrnGameState::BurnoutSkillzData::EBurnoutSkillType GetCurrentSkillzSelected() const;

	// BrnGuiCache.h:1379
	float32_t GetBurnoutSkill(BrnGameState::BurnoutSkillzData::EBurnoutSkillType, EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1384
	const GuiShowtimeScoreUpdate & GetShowtimeScoreDataByActiveRaceCar(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1387
	bool GetAutoSaveEnabled() const;

	// BrnGuiCache.h:1392
	const BrnGui::GuiEventPreRaceMessages::MessageInfo * GetPreEventInfo(int32_t) const;

	// BrnGuiCache.h:1396
	uint32_t GetNumProfileEvents() const;

	// BrnGuiCache.h:1401
	const ProfileEvent * GetProfileEvent(uint32_t) const;

	// BrnGuiCache.h:1405
	const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event * GetPresetEvent(int32_t) const;

	// BrnGuiCache.h:1409
	const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event * GetPresetEventFromEventID(int32_t) const;

	// BrnGuiCache.h:1412
	int32_t GetNumPresetEvents() const;

	// BrnGuiCache.h:1417
	void GetOnlineFinishPoint(int32_t, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnGuiCache.h:1420
	int32_t GetNumOnlineFinishPoints() const;

	// BrnGuiCache.h:1425
	void SetIsNewProfile(bool);

	// BrnGuiCache.h:1428
	bool GetIsNewProfile() const;

	// BrnGuiCache.h:1431
	float32_t GetDistanceDrivenInCurrentCar() const;

	// BrnGuiCache.h:1435
	bool IsAutosaving() const;

	// BrnGuiCache.h:1439
	void SetIsAutosaving(bool);

	// BrnGuiCache.h:1444
	void SetConnectedToNetwork(bool);

	// BrnGuiCache.h:1449
	void SetDoDisconnectPopup(const CgsModule::Event *);

	// BrnGuiCache.h:1453
	bool IsInGame();

	// BrnGuiCache.h:1458
	void SetInGame(bool);

	// BrnGuiCache.h:1462
	bool IsAllowingSignInOutEvents() const;

	// BrnGuiCache.h:1467
	void SetAllowingSignInOutEvents(bool);

	// BrnGuiCache.h:1471
	bool PassedTheJunkyard() const;

	// BrnGuiCache.h:1475
	bool IsInJunkyard() const;

	// BrnGuiCache.h:1479
	bool IsOnlineTimeoutActive() const;

	// BrnGuiCache.h:1483
	InGameMessagesQueue * GetHudMessagesQueue();

	// BrnGuiCache.h:1487
	const CgsLanguage::ESku GetSku() const;

	// BrnGuiCache.h:1491
	const CgsLanguage::ELanguage GetLanguage() const;

	// BrnGuiCache.h:1495
	bool GetIsPlayerWrecked() const;

	// BrnGuiCache.h:1499
	bool GetPlayerSignInReported() const;

	// BrnGuiCache.h:1503
	bool GetPlayerSignOutReported() const;

	// BrnGuiCache.h:1507
	bool IsCarUnlockPending() const;

	// BrnGuiCache.h:1511
	bool IsCompletionSequenceInProgress() const;

	// BrnGuiCache.h:1516
	BrnGui::EGuiPlayerColours GetOnlinePlayerColourFromARCI(EActiveRaceCarIndex);

	// BrnGuiCache.h:1522
	int32_t HACK_FindABetterPlaceForMe_SetActiveLandmarksByEventID(uint32_t, float32_t, bool);

	// BrnGuiCache.h:1526
	bool GetCircleAsSelect() const;

	// BrnGuiCache.h:1530
	const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo * GetDriveThrough(int32_t) const;

	// BrnGuiCache.h:1534
	int32_t GetNumberOfDriveThroughs() const;

	// BrnGuiCache.h:1538
	bool GetControllerDisconected() const;

	// BrnGuiCache.h:1542
	bool GetIsCapturingMugshot();

	// BrnGuiCache.h:1546
	bool IsCameraConnected();

	// BrnGuiCache.h:1550
	bool IsWaitingForShowtimeResults() const;

	// BrnGuiCache.h:1554
	void SetWaitingForShowtimeResults(bool);

	// BrnGuiCache.h:1558
	void SetJunkyardFirstUse(bool);

	// BrnGuiCache.h:1562
	bool IsJunkyardFirstUse() const;

	// BrnGuiCache.h:1565
	Random * GetRandomNumberGenerator();

	// BrnGuiCache.h:1569
	int32_t GetCheckpointReached(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1572
	bool IsMultiplayerAllowed() const;

	// BrnGuiCache.h:1576
	bool IsLoadingScreenVisible() const;

	// BrnGuiCache.h:1580
	BrnProgression::RaceEventData::EModeType GetSatNavEventFilter() const;

	// BrnGuiCache.h:1584
	bool GetSatNavEventFilterEnabled() const;

	// BrnGuiCache.h:1588
	const BrnProgression::Profile * GetProgressionProfile() const;

	// BrnGuiCache.h:1592
	bool IsEATraxChyronActive() const;

	// BrnGuiCache.h:1596
	bool IsEasyDriveAllowed() const;

	// BrnGuiCache.h:1599
	bool AreRoadRulesAvailable() const;

	// BrnGuiCache.h:1605
	StateLoadingHelper GetStateLoadingHelper() const;

	// BrnGuiCache.h:1610
	void UnlockCredits();

private:
	// BrnGuiCache.h:1908
	void UpdateTrackerInfo(const LandmarkIndex *, uint32_t);

	// BrnGuiCache.h:1912
	void UpdateTrackerInfo(const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event *);

	// BrnGuiCache.h:1917
	InGamePlayerStatusData * GetOnlinePlayerInfoForWriting(RoadRulesRecvData::NetworkPlayerID);

	// BrnGuiCache.h:1922
	void HandleSpecificPreSetRacesEvent(const GuiEventSpecificPresetRaces *);

	// BrnGuiCache.h:1927
	void DetermineCarUnlockPending(const BrnProgression::Profile *);

}

// BrnGuiCache.h:147
struct BrnGui::StateLoadingHelper {
private:
	// BrnGuiCache.h:346
	extern const uint32_t KU_MAX_RESOURCES_TO_WATCH = 228;

	// BrnGuiCache.h:348
	BrnGui::StateLoadingHelper::ResourceInfo[228] maResources;

	// BrnGuiCache.h:349
	Array<uint32_t,228u> maRequestDirtyList;

	// BrnGuiCache.h:351
	extern const int32_t KI_NUM_LOAD_REQUEST_QUEUES = 2;

	// BrnGuiCache.h:352
	GuiEventQueueSmall[2] mLoadRequestQueues;

	// BrnGuiCache.h:353
	int32_t miCurrentLoadRequestQueue;

	// BrnGuiCache.h:355
	BrnGui::StateLoadingHelper::ComponentsToWatch[3] maComponentsToWatch;

	// BrnGuiCache.h:357
	CgsGui::ObjectController *[192] mpaControlledComponents;

	// BrnGuiCache.h:358
	uint32_t[192] muControlledComponentNameHash;

	// BrnGuiCache.h:359
	uint32_t muControlledComponentCount;

	// BrnGuiCache.h:361
	uint32_t muPendingUnloadCount;

public:
	// BrnGuiCache.h:152
	void Construct();

	// BrnGuiCache.h:156
	void Update(InputBuffer *);

	// BrnGuiCache.h:161
	// Declaration
	bool EnsureResourceIsLoaded() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiCache.h:70
		typedef sResourceTuple sResourceTuple;

	}

	// BrnGuiCache.h:167
	bool EnsureResourcesAreLoaded(const sResourceTuple *, uint32_t);

	// BrnGuiCache.h:171
	const void * GetLoadedResource(uint32_t) const;

	// BrnGuiCache.h:176
	void UnloadResource(const sResourceTuple &);

	// BrnGuiCache.h:182
	void UnloadResources(const sResourceTuple *, uint32_t);

	// BrnGuiCache.h:187
	void UnloadAllResources(CgsGui::ResourceRequestTypes);

	// BrnGuiCache.h:192
	bool EnsureResourceIsUnloaded(const sResourceTuple &);

	// BrnGuiCache.h:198
	bool EnsureResourcesAreUnloaded(const sResourceTuple *, uint32_t);

	// BrnGuiCache.h:203
	void OnLoadNotification(const GuiEventLoadNotification *);

	// BrnGuiCache.h:208
	void OnUnloadNotification(const GuiEventUnloadNotification *);

	// BrnGuiCache.h:215
	void SetExpectedAptComponentList(BrnGui::GuiFlow, uint32_t *, uint32_t);

	// BrnGuiCache.h:222
	void AppendExpectedAptComponentList(BrnGui::GuiFlow, uint32_t *, uint32_t);

	// BrnGuiCache.h:228
	void AppendExpectedAptComponent(BrnGui::GuiFlow, uint32_t);

	// BrnGuiCache.h:235
	void RemoveExpectedAptComponentList(BrnGui::GuiFlow, uint32_t *, uint32_t);

	// BrnGuiCache.h:241
	void RemoveExpectedAptComponent(BrnGui::GuiFlow, uint32_t);

	// BrnGuiCache.h:247
	bool IsWaitingAptComponent(BrnGui::GuiFlow, uint32_t);

	// BrnGuiCache.h:252
	bool AreAllAptComponentsInitialised(BrnGui::GuiFlow);

	// BrnGuiCache.h:258
	void AppendExpectedControlledObject(uint32_t, CgsGui::ObjectController *);

	// BrnGuiCache.h:264
	void AppendExpectedControlledObject(const char *, CgsGui::ObjectController *);

	// BrnGuiCache.h:268
	void ClearExpectedControlledObjects();

	// BrnGuiCache.h:273
	void MarkAptComponentInitialised(const GuiEventAptTrigger *);

	// BrnGuiCache.h:278
	void ClearComponentInitialised(BrnGui::GuiFlow);

	// BrnGuiCache.h:283
	void AppendResourceInfo(uint32_t, CgsDev::StrStream);

	// BrnGuiCache.h:290
	void GetAptComponentInfo(uint32_t, BrnGui::GuiFlow, bool *, bool *, uint32_t *);

private:
	// BrnGuiCache.h:365
	void IncrementUnloadPending();

	// BrnGuiCache.h:369
	void DecrementUnloadPending();

}

// BrnGuiCache.h:147
struct BrnGui::StateLoadingHelper {
private:
	// BrnGuiCache.h:346
	extern const uint32_t KU_MAX_RESOURCES_TO_WATCH = 228;

	// BrnGuiCache.h:348
	BrnGui::StateLoadingHelper::ResourceInfo[228] maResources;

	// BrnGuiCache.h:349
	Array<uint32_t,228u> maRequestDirtyList;

	// BrnGuiCache.h:351
	extern const int32_t KI_NUM_LOAD_REQUEST_QUEUES = 2;

	// BrnGuiCache.h:352
	GuiEventQueueSmall[2] mLoadRequestQueues;

	// BrnGuiCache.h:353
	int32_t miCurrentLoadRequestQueue;

	// BrnGuiCache.h:355
	BrnGui::StateLoadingHelper::ComponentsToWatch[3] maComponentsToWatch;

	// BrnGuiCache.h:357
	CgsGui::ObjectController *[192] mpaControlledComponents;

	// BrnGuiCache.h:358
	uint32_t[192] muControlledComponentNameHash;

	// BrnGuiCache.h:359
	uint32_t muControlledComponentCount;

	// BrnGuiCache.h:361
	uint32_t muPendingUnloadCount;

public:
	// BrnGuiCache.h:152
	void Construct();

	// BrnGuiCache.h:156
	void Update(InputBuffer *);

	// BrnGuiCache.h:161
	// Declaration
	bool EnsureResourceIsLoaded(const sResourceTuple &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiCache.h:70
		typedef sResourceTuple sResourceTuple;

	}

	// BrnGuiCache.h:167
	bool EnsureResourcesAreLoaded(const sResourceTuple *, uint32_t);

	// BrnGuiCache.h:171
	const void * GetLoadedResource(uint32_t) const;

	// BrnGuiCache.h:176
	void UnloadResource(const sResourceTuple &);

	// BrnGuiCache.h:182
	void UnloadResources(const sResourceTuple *, uint32_t);

	// BrnGuiCache.h:187
	void UnloadAllResources(CgsGui::ResourceRequestTypes);

	// BrnGuiCache.h:192
	bool EnsureResourceIsUnloaded(const sResourceTuple &);

	// BrnGuiCache.h:198
	bool EnsureResourcesAreUnloaded(const sResourceTuple *, uint32_t);

	// BrnGuiCache.h:203
	// Declaration
	void OnLoadNotification(const GuiEventLoadNotification *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiCache.cpp:588
		using namespace CgsDev::Message;

	}

	// BrnGuiCache.h:208
	// Declaration
	void OnUnloadNotification(const GuiEventUnloadNotification *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiCache.cpp:664
		using namespace CgsDev::Message;

	}

	// BrnGuiCache.h:215
	void SetExpectedAptComponentList(BrnGui::GuiFlow, uint32_t *, uint32_t);

	// BrnGuiCache.h:222
	void AppendExpectedAptComponentList(BrnGui::GuiFlow, uint32_t *, uint32_t);

	// BrnGuiCache.h:228
	void AppendExpectedAptComponent(BrnGui::GuiFlow, uint32_t);

	// BrnGuiCache.h:235
	void RemoveExpectedAptComponentList(BrnGui::GuiFlow, uint32_t *, uint32_t);

	// BrnGuiCache.h:241
	void RemoveExpectedAptComponent(BrnGui::GuiFlow, uint32_t);

	// BrnGuiCache.h:247
	bool IsWaitingAptComponent(BrnGui::GuiFlow, uint32_t);

	// BrnGuiCache.h:252
	bool AreAllAptComponentsInitialised(BrnGui::GuiFlow);

	// BrnGuiCache.h:258
	void AppendExpectedControlledObject(uint32_t, CgsGui::ObjectController *);

	// BrnGuiCache.h:264
	void AppendExpectedControlledObject(const char *, CgsGui::ObjectController *);

	// BrnGuiCache.h:268
	void ClearExpectedControlledObjects();

	// BrnGuiCache.h:273
	void MarkAptComponentInitialised(const GuiEventAptTrigger *);

	// BrnGuiCache.h:278
	void ClearComponentInitialised(BrnGui::GuiFlow);

	// BrnGuiCache.h:283
	void AppendResourceInfo(uint32_t, CgsDev::StrStream);

	// BrnGuiCache.h:290
	void GetAptComponentInfo(uint32_t, BrnGui::GuiFlow, bool *, bool *, uint32_t *);

private:
	// BrnGuiCache.h:365
	void IncrementUnloadPending();

	// BrnGuiCache.h:369
	void DecrementUnloadPending();

}

// BrnGuiCache.h:473
struct BrnGui::GuiCache {
private:
	// BrnGuiCache.h:1616
	GuiEventTimeInfo mTimeInfo;

	// BrnGuiCache.h:1618
	BrnGui::GuiEventChangeReplayState::ReplayState meCurrentReplayState;

	// BrnGuiCache.h:1624
	StateLoadingHelper mStateLoadingHelper;

	// BrnGuiCache.h:1626
	BrnGui::GuiTracker * mpGuiTracker;

	// BrnGuiCache.h:1627
	SystemUserProfile * mpSystemUserProfile;

	// BrnGuiCache.h:1628
	Profile * mpProgressionProfile;

	// BrnGuiCache.h:1629
	MapIconManager * mpMapIconManager;

	// BrnGuiCache.h:1631
	const WorldDataController * mpWorldDataController;

	// BrnGuiCache.h:1632
	const BurnoutSkillsManager * mpSkillsManager;

	// BrnGuiCache.h:1633
	const FreeburnChallengeManager * mpChallengeManager;

	// BrnGuiCache.h:1635
	const HudMessageController * mpHudMessageController;

	// BrnGuiCache.h:1636
	const HudMessageDirector * mpHudMessageDirector;

	// BrnGuiCache.h:1637
	const PopupController * mpPopupController;

	// BrnGuiCache.h:1639
	bool mbHudMessageCptAvailable;

	// BrnGuiCache.h:1640
	InGameMessagesQueue mHudMessagesQueue;

	// BrnGuiCache.h:1642
	GuiPFXHookEnumeration mPFXHookEnumeration;

	// BrnGuiCache.h:1648
	GuiPlayerInfo mGuiPlayerInfo;

	// BrnGuiCache.h:1650
	BrnGui::GuiPlayerCrashingStateChangeEvent::CrashBarState meCurrentCrashState;

	// BrnGuiCache.h:1651
	bool mbIsPlayerWrecked;

	// BrnGuiCache.h:1653
	int32_t miActiveUserIndex;

	// BrnGuiCache.h:1655
	int32_t miConsecutiveLosses;

	// BrnGuiCache.h:1657
	CgsNetwork::EServerInterfaceError meLastDisconnectedError;

	// BrnGuiCache.h:1659
	bool mbIsGamePaused;

	// BrnGuiCache.h:1660
	bool mbIsInHighDef;

	// BrnGuiCache.h:1661
	float32_t mfAspectRatio;

	// BrnGuiCache.h:1662
	bool mbIsInEvent;

	// BrnGuiCache.h:1663
	bool mbIsInShortcut;

	// BrnGuiCache.h:1664
	bool mbIsOnline;

	// BrnGuiCache.h:1665
	bool mbIsPreparingForInvite;

	// BrnGuiCache.h:1666
	bool mbIsStartingGameDueToPlayerJoin;

	// BrnGuiCache.h:1667
	bool mbIsPerformInviteReceived;

	// BrnGuiCache.h:1668
	bool mbIsConnectedToNetwork;

	// BrnGuiCache.h:1669
	bool mbDoJoinOnlineRankedGame;

	// BrnGuiCache.h:1670
	bool mbDoJoinOnlineFreeburnGame;

	// BrnGuiCache.h:1671
	bool mbEnteredOnlineViaEasyDrive;

	// BrnGuiCache.h:1672
	bool mbIsInGame;

	// BrnGuiCache.h:1673
	bool mbIsAllowingSignInOutEvents;

	// BrnGuiCache.h:1674
	bool mbGotToInGameState;

	// BrnGuiCache.h:1675
	bool mbIsInJunkyard;

	// BrnGuiCache.h:1676
	bool mbPassedTheJunkyard;

	// BrnGuiCache.h:1677
	bool mbMugshotActive;

	// BrnGuiCache.h:1678
	bool mbRequestedShowtimeResults;

	// BrnGuiCache.h:1679
	bool mbImageExportInProgress;

	// BrnGuiCache.h:1681
	BrnNetwork::EPaybackType meLastAvailablePayback;

	// BrnGuiCache.h:1682
	EActiveRaceCarIndex meLastPaybackVictim;

	// BrnGuiCache.h:1683
	bool mbPaybackTriggerable;

	// BrnGuiCache.h:1685
	bool mbCarUnlockInProgress;

	// BrnGuiCache.h:1686
	CgsID mCarUnlockedID;

	// BrnGuiCache.h:1687
	BrnGameState::GameStateModuleIO::ECarSelectType meCarSelectType;

	// BrnGuiCache.h:1689
	bool mbCarUnlockPending;

	// BrnGuiCache.h:1690
	bool mbCarUnlockPendingSet;

	// BrnGuiCache.h:1692
	bool mbCompletionSequenceInProgress;

	// BrnGuiCache.h:1694
	bool mbIsNewProfile;

	// BrnGuiCache.h:1699
	int32_t[8] maiCheckpointReached;

	// BrnGuiCache.h:1701
	LandmarkIndex[512] maTargetLandmarkIndices;

	// BrnGuiCache.h:1702
	int32_t miNumTargetLandmarks;

	// BrnGuiCache.h:1704
	GuiEventChangeDistrict mCachedDistrictEvent;

	// BrnGuiCache.h:1706
	Race[6] maPresetRaces;

	// BrnGuiCache.h:1707
	int32_t miNumPresetRaces;

	// BrnGuiCache.h:1709
	LandmarkIndex mCurrentLandmarkIndex;

	// BrnGuiCache.h:1711
	uint8_t muNumActiveLandmarks;

	// BrnGuiCache.h:1712
	LandmarkIndex[512] maActiveLandmarkIndices;

	// BrnGuiCache.h:1714
	GuiEventUpdateEventStarts mCachedEventStarts;

	// BrnGuiCache.h:1716
	extern const int32_t KI_MAX_FINISH_POINTS = 256;

	// BrnGuiCache.h:1717
	BitArray<256u> mEventsWithUniqueFinishPoints;

	// BrnGuiCache.h:1719
	BrnGui::GuiEventUpdateSatNav::SatNavIconInfo[46] mDriveThroughInfo;

	// BrnGuiCache.h:1720
	int32_t miNumDriveThroughs;

	// BrnGuiCache.h:1722
	BrnProgression::RaceEventData::EModeType meSatNavEventFilter;

	// BrnGuiCache.h:1723
	bool mbSatNavEventFilterEnabled;

	// BrnGuiCache.h:1727
	GuiEventSpecificPresetRaces mEvents;

	// BrnGuiCache.h:1729
	BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

	// BrnGuiCache.h:1730
	uint32_t muEventID;

	// BrnGuiCache.h:1731
	uint32_t muJunctionID;

	// BrnGuiCache.h:1733
	BrnGui::GuiEventOfflinePostEvent::OfflinePostEventData mLastOffinePostEventInfo;

	// BrnGuiCache.h:1735
	BrnGameState::ECurrentMedalTargetTime meCurrentTargetMedal;

	// BrnGuiCache.h:1737
	float32_t mfEventTime;

	// BrnGuiCache.h:1738
	float32_t mfTargetTime;

	// BrnGuiCache.h:1740
	float32_t[4] mafTargetScores;

	// BrnGuiCache.h:1743
	int8_t miOpponentsInEvent;

	// BrnGuiCache.h:1745
	float32_t mfEventDistance;

	// BrnGuiCache.h:1747
	LandmarkIndex mEventDestinationLandmarkIndex;

	// BrnGuiCache.h:1748
	BrnWorld::EDistrict mEventDestinationDistrict;

	// BrnGuiCache.h:1749
	LandmarkIndex[16] maiLandmarkIndices;

	// BrnGuiCache.h:1750
	BrnWorld::EDistrict[16] maeCurrentEventDistricts;

	// BrnGuiCache.h:1751
	uint8_t muCheckpointsInEvent;

	// BrnGuiCache.h:1752
	int32_t miCheckpointReached;

	// BrnGuiCache.h:1754
	int32_t miTakedownsCurrent;

	// BrnGuiCache.h:1755
	int32_t miTakedownTarget;

	// BrnGuiCache.h:1757
	int32_t miScoreCurrent;

	// BrnGuiCache.h:1758
	int32_t miScoreTarget;

	// BrnGuiCache.h:1759
	int32_t miScoreCombo;

	// BrnGuiCache.h:1760
	int32_t miComboMultiplier;

	// BrnGuiCache.h:1762
	int32_t miLastStuntScore;

	// BrnGuiCache.h:1763
	int32_t miLastStuntMultiplier;

	// BrnGuiCache.h:1765
	int32_t miRivalDamageCurrent;

	// BrnGuiCache.h:1766
	int32_t miRivalDamageTarget;

	// BrnGuiCache.h:1767
	CgsID mPursuedCarID;

	// BrnGuiCache.h:1769
	CgsID mShutdownCarID;

	// BrnGuiCache.h:1771
	BrnProgression::TrophyUnlockData::UnlockType meTrophyCarUnlockType;

	// BrnGuiCache.h:1772
	CgsID mTrophyCarID;

	// BrnGuiCache.h:1774
	int32_t miShowTimeCarsCrashed;

	// BrnGuiCache.h:1775
	int32_t miShowTimeComboMultiplier;

	// BrnGuiCache.h:1776
	float32_t mfShowTimeDistanceTravelled;

	// BrnGuiCache.h:1778
	float32_t mfDistanceToCheckpoint;

	// BrnGuiCache.h:1780
	bool mbHasJustEnteredEvent;

	// BrnGuiCache.h:1781
	bool mbIsPreRaceFlyByActive;

	// BrnGuiCache.h:1783
	GuiRaceCarInfoEvent mRaceCarInfo;

	// BrnGuiCache.h:1784
	BrnGui::ERivalryStage[8] maeRivalryStatus;

	// BrnGuiCache.h:1786
	GuiEventRacePositionInfo mCarPositionsInRace;

	// BrnGuiCache.h:1788
	GuiTrafficCarInfoEvent mTrafficCarInfo;

	// BrnGuiCache.h:1789
	GuiOverheadSignInfoEvent::VisibleOverheadSignArray mVisibleOverheadSignArray;

	// BrnGuiCache.h:1791
	LandmarkIndex mRaceDestinationLandmarkIndex;

	// BrnGuiCache.h:1793
	CgsLanguage::ESku mSku;

	// BrnGuiCache.h:1794
	CgsLanguage::ELanguage mLanguage;

	// BrnGuiCache.h:1796
	extern int32_t[] maiAgeRatings;

	// BrnGuiCache.h:1800
	int32_t miRoundIndex;

	// BrnGuiCache.h:1802
	GuiEventNetworkGameParams mGameOptions;

	// BrnGuiCache.h:1803
	bool mbResetOnlineGameOptions;

	// BrnGuiCache.h:1805
	GuiEventOnlineEventFinishingOrder mOnlineFinishingOrder;

	// BrnGuiCache.h:1806
	GuiEventOnlinePostEvent mOnlinePostEventData;

	// BrnGuiCache.h:1810
	bool[2] mabRoadRulesActive;

	// BrnGuiCache.h:1811
	BrnGameState::EActiveRoadRule meActiveRoadRule;

	// BrnGuiCache.h:1812
	BrnGui::GuiEventSetRoadRuleScoreMode::ERoadPanelModes meRoadRuleScoreMode;

	// BrnGuiCache.h:1814
	bool mbRoadRuleShotActive;

	// BrnGuiCache.h:1815
	bool mbRoadRuleShotLocalPlayerNewRuler;

	// BrnGuiCache.h:1816
	bool mbRoadRuleShotTaken;

	// BrnGuiCache.h:1817
	EActiveRaceCarIndex meRoadRuleShotOpponentARCI;

	// BrnGuiCache.h:1818
	CgsID mRoadRuleShotRoadId;

	// BrnGuiCache.h:1819
	bool mbIsRoadRuleShotTime;

	// BrnGuiCache.h:1824
	StuntToDisplay[1] maDisplayedStunts;

	// BrnGuiCache.h:1825
	uint32_t muCurrentStunts;

	// BrnGuiCache.h:1826
	uint32_t muAllStunts;

	// BrnGuiCache.h:1827
	float32_t mfComboWarningActiveTime;

	// BrnGuiCache.h:1828
	bool mbComboWarningActive;

	// BrnGuiCache.h:1829
	bool mbComboInProgress;

	// BrnGuiCache.h:1834
	int32_t miOnlinePlayerCount;

	// BrnGuiCache.h:1836
	InGamePlayerStatusData[8] maPlayerInfo;

	// BrnGuiCache.h:1837
	GuiEventNetworkLobbyPlayerList mLobbyPlayerInfoList;

	// BrnGuiCache.h:1838
	BrnGameState::GameStateModuleIO::EPlayerTeam[8] maeCurrentPlayerTeam;

	// BrnGuiCache.h:1839
	char[36] macOnlineGameName;

	// BrnGuiCache.h:1840
	bool[8] mabDisconnectedPlayers;

	// BrnGuiCache.h:1841
	bool[8] mabInInCarSelectOnline;

	// BrnGuiCache.h:1842
	bool[8] mabEliminated;

	// BrnGuiCache.h:1843
	bool mbLocalPlayerHost;

	// BrnGuiCache.h:1847
	bool mbIsFriendListShowing;

	// BrnGuiCache.h:1848
	bool mbIsFriendListChangeIconShowing;

	// BrnGuiCache.h:1849
	BrnGui::GuiCache::EFriendsListWaitReason meFriendListWaitReason;

	// BrnGuiCache.h:1852
	uint16_t mu16NumGoldMedals;

	// BrnGuiCache.h:1853
	uint16_t mu16NumSilverMedals;

	// BrnGuiCache.h:1854
	uint16_t mu16NumBronzeMedals;

	// BrnGuiCache.h:1857
	uint16_t mu16NumGoldsToNextReward;

	// BrnGuiCache.h:1858
	uint16_t mu16NumTotalToNextReward;

	// BrnGuiCache.h:1861
	OptionsDataProfile mOptionsData;

	// BrnGuiCache.h:1862
	GuiEventRivalryFullInfoResponse mRivalInfo;

	// BrnGuiCache.h:1865
	GuiShowtimeScoreUpdate[8] maShowtimeScoreData;

	// BrnGuiCache.h:1868
	bool mbAutoSaveEnabled;

	// BrnGuiCache.h:1870
	bool mbIsAutosaving;

	// BrnGuiCache.h:1873
	bool mbPlayerSignInReported;

	// BrnGuiCache.h:1874
	bool mbPlayerSignOutReported;

	// BrnGuiCache.h:1877
	GuiEventPreRaceMessages mPreRaceData;

	// BrnGuiCache.h:1880
	GuiEventEventStateResponse mProfileEventState;

	// BrnGuiCache.h:1882
	BrnNetwork::ECameraStatus meLocalCameraStatus;

	// BrnGuiCache.h:1884
	bool mbOnlineEventCountdownActive;

	// BrnGuiCache.h:1887
	bool mbGetCircleAsSelect;

	// BrnGuiCache.h:1890
	bool mbJunkyardFirstUse;

	// BrnGuiCache.h:1893
	Random mRandom;

	// BrnGuiCache.h:1895
	bool mbIsLoadingScreenVisible;

	// BrnGuiCache.h:1898
	float32_t mfDistanceDrivenInCurrentCar;

	// BrnGuiCache.h:1900
	bool mbEATraxChyronActive;

	// BrnGuiCache.h:1901
	bool mbEasyDriveAllowed;

	// BrnGuiCache.h:1902
	bool mbAreRoadRulesAvailable;

public:
	// BrnGuiCache.h:490
	void Construct(BrnGui::GuiTracker *, SystemUserProfile *);

	// BrnGuiCache.h:497
	// Declaration
	void RecEvent(const CgsModule::Event *, int32_t, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiCache.cpp:1834
		using namespace CgsDev::Message;

		// BrnGuiCache.cpp:1836
		using namespace CgsDev::Message;

		// BrnGuiCache.cpp:2433
		using namespace CgsDev::Message;

	}

	// BrnGuiCache.h:501
	void Update(InputBuffer *);

	// BrnGuiCache.h:506
	void SetMapIconManager(MapIconManager *);

	// BrnGuiCache.h:510
	MapIconManager * GetMapIconManager() const;

	// BrnGuiCache.h:514
	BrnGui::GuiTracker * GetGuiTracker() const;

	// BrnGuiCache.h:517
	const ChallengeList * GetFreeburnChallengeList() const;

	// BrnGuiCache.h:527
	void GetLandmarkInfoAtPositionInList(int32_t, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnGuiCache.h:533
	void GetOnlineLandmarkInfoAtPositionInList(int32_t, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnGuiCache.h:539
	void GetLandmarkInfoFromIndex(LandmarkIndex, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnGuiCache.h:545
	void GetLandmarkInfoFromID(CgsID, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnGuiCache.h:548
	uint32_t GetNumEventStarts() const;

	// BrnGuiCache.h:552
	const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * GetEventStartInfoFromIndex(uint32_t) const;

	// BrnGuiCache.h:556
	const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * GetEventStartInfoFromLightTriggerID(LightTriggerId) const;

	// BrnGuiCache.h:560
	const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * GetEventStartInfoFromJunctionID(uint32_t) const;

	// BrnGuiCache.h:564
	const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * GetEventStartInfoFromEventID(int32_t) const;

	// BrnGuiCache.h:568
	const LandmarkIndex GetCurrentLandmarkIndex() const;

	// BrnGuiCache.h:573
	const Race * GetPresetRace(int32_t) const;

	// BrnGuiCache.h:577
	int32_t GetNumPresetRaces() const;

	// BrnGuiCache.h:582
	void SetWorldDataController(const WorldDataController *);

	// BrnGuiCache.h:586
	const WorldDataController * GetWorldDataController() const;

	// BrnGuiCache.h:591
	void SetHudMessageController(const HudMessageController *);

	// BrnGuiCache.h:596
	void SetHudMessageDirector(const HudMessageDirector *);

	// BrnGuiCache.h:601
	void SetPopupController(const PopupController *);

	// BrnGuiCache.h:605
	const HudMessageController * GetHudMessageController() const;

	// BrnGuiCache.h:609
	const HudMessageDirector * GetHudMessageDirector() const;

	// BrnGuiCache.h:613
	const PopupController * GetPopupController() const;

	// BrnGuiCache.h:618
	bool EnsureResourceIsLoaded(const sResourceTuple &);

	// BrnGuiCache.h:623
	CgsID GetOriginalCarId(CgsID);

	// BrnGuiCache.h:629
	bool EnsureResourcesAreLoaded(const sResourceTuple *, uint32_t);

	// BrnGuiCache.h:633
	void * GetLoadedResource(uint32_t) const;

	// BrnGuiCache.h:638
	void UnloadResource(const sResourceTuple &);

	// BrnGuiCache.h:644
	void UnloadResources(const sResourceTuple *, uint32_t);

	// BrnGuiCache.h:649
	void UnloadAllResources(CgsGui::ResourceRequestTypes);

	// BrnGuiCache.h:654
	bool EnsureResourceIsUnloaded(const sResourceTuple &);

	// BrnGuiCache.h:660
	bool EnsureResourcesAreUnloaded(const sResourceTuple *, uint32_t);

	// BrnGuiCache.h:665
	void ClearExpectedAptComponentList(BrnGui::GuiFlow);

	// BrnGuiCache.h:672
	void SetExpectedAptComponentList(BrnGui::GuiFlow, uint32_t *, uint32_t);

	// BrnGuiCache.h:678
	void AppendExpectedAptComponent(BrnGui::GuiFlow, uint32_t);

	// BrnGuiCache.h:684
	void AppendExpectedAptComponent(BrnGui::GuiFlow, const char *);

	// BrnGuiCache.h:691
	void AppendExpectedAptComponentList(BrnGui::GuiFlow, uint32_t *, uint32_t);

	// BrnGuiCache.h:697
	void RemoveExpectedAptComponent(BrnGui::GuiFlow, uint32_t);

	// BrnGuiCache.h:704
	void RemoveExpectedAptComponentlist(BrnGui::GuiFlow, uint32_t *, uint32_t);

	// BrnGuiCache.h:710
	void AppendExpectedControlledAptComponent(uint32_t, CgsGui::ObjectController *);

	// BrnGuiCache.h:716
	void AppendExpectedControlledAptComponent(const char *, CgsGui::ObjectController *);

	// BrnGuiCache.h:720
	void ClearExpectedControlledAptComponentList();

	// BrnGuiCache.h:725
	bool AreAllAptComponentsInitialised(BrnGui::GuiFlow);

	// BrnGuiCache.h:731
	bool IsWaitingAptComponent(BrnGui::GuiFlow, uint32_t);

	// BrnGuiCache.h:735
	const GuiEventOnlineEventFinishingOrder * GetOnlineEventFinishingOrder() const;

	// BrnGuiCache.h:738
	const GuiEventOnlinePostEvent * GetOnlinePostEventData() const;

	// BrnGuiCache.h:742
	int32_t GetOnlinePlayerCount() const;

	// BrnGuiCache.h:746
	GuiEventChangeDistrict GetDistrictEvent() const;

	// BrnGuiCache.h:750
	EActiveRaceCarIndex GetPlayerActiveRaceCarIndex() const;

	// BrnGuiCache.h:754
	EGlobalRaceCarIndex GetPlayerGlobalRaceCarIndex() const;

	// BrnGuiCache.h:758
	const BrnGui::GuiPlayerEngineEvent::EEngineState GetPlayerEngineState() const;

	// BrnGuiCache.h:762
	const GuiEventNetworkLobbyPlayerList * GetLobbyPlayerList() const;

	// BrnGuiCache.h:766
	const bool IsLocalPlayerHost() const;

	// BrnGuiCache.h:770
	const char * GetOnlineGameName() const;

	// BrnGuiCache.h:775
	const InGamePlayerStatusData * GetOnlinePlayerInfo(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:780
	const InGamePlayerStatusData * GetOnlinePlayerInfo(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnGuiCache.h:785
	EActiveRaceCarIndex GetActiveRaceCarFromNetworkId(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnGuiCache.h:788
	const InGamePlayerStatusData * GetOnlinePlayerInfoByIndex(int32_t);

	// BrnGuiCache.h:794
	BrnGameState::GameStateModuleIO::EPlayerTeam GetCurrentOnlinePlayerTeam(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:799
	bool GetOnlinePlayerDisconnected(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:804
	bool GetOnlinePlayerInCarSelect(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:809
	bool IsOnlinePlayerEliminated(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:813
	const char * GetPlayerName() const;

	// BrnGuiCache.h:817
	const char * GetPlayerNameInQuotes() const;

	// BrnGuiCache.h:821
	float32_t GetTimeStep() const;

	// BrnGuiCache.h:825
	float32_t GetTime() const;

	// BrnGuiCache.h:829
	const GuiPlayerInfo * GetPlayerInfo() const;

	// BrnGuiCache.h:833
	BrnGameState::GameStateModuleIO::EGameModeType GetGameMode() const;

	// BrnGuiCache.h:837
	bool IsInFreeburn() const;

	// BrnGuiCache.h:841
	uint32_t GetEventID() const;

	// BrnGuiCache.h:845
	uint32_t GetJunctionID() const;

	// BrnGuiCache.h:849
	void RefreshMapState();

	// BrnGuiCache.h:853
	bool IsHudMessagingActive() const;

	// BrnGuiCache.h:857
	void SetHudMessagingActive(bool);

	// BrnGuiCache.h:861
	const LandmarkIndex * GetActiveLandmarks() const;

	// BrnGuiCache.h:865
	uint8_t GetNumActiveLandmarks() const;

	// BrnGuiCache.h:869
	const LandmarkIndex * GetTargetLandmarks() const;

	// BrnGuiCache.h:873
	int32_t GetNumTargetLandmarks() const;

	// BrnGuiCache.h:877
	bool IsGamePaused() const;

	// BrnGuiCache.h:881
	bool IsInHighDef() const;

	// BrnGuiCache.h:885
	void SetHighDef(bool);

	// BrnGuiCache.h:889
	float32_t GetAspectRatio() const;

	// BrnGuiCache.h:893
	void SetAspectRatio(float32_t);

	// BrnGuiCache.h:897
	bool IsInEvent() const;

	// BrnGuiCache.h:901
	bool IsInShortcut() const;

	// BrnGuiCache.h:905
	bool IsPreparingForInvite() const;

	// BrnGuiCache.h:909
	bool IsPerformInviteReceived() const;

	// BrnGuiCache.h:913
	bool IsStartingGameDueToPlayerJoin() const;

	// BrnGuiCache.h:918
	void SetImageExportInProgress(bool);

	// BrnGuiCache.h:922
	bool IsImageExportInProgress() const;

	// BrnGuiCache.h:926
	void ResetStartingGameDueToPlayerJoin();

	// BrnGuiCache.h:930
	bool IsConnectedToNetwork() const;

	// BrnGuiCache.h:933
	CgsNetwork::EServerInterfaceError GetDoDisconnectPopupError() const;

	// BrnGuiCache.h:937
	bool GetDoDisconnectPopup() const;

	// BrnGuiCache.h:941
	BrnGui::GuiPlayerCrashingStateChangeEvent::CrashBarState GetCurrentCrashState() const;

	// BrnGuiCache.h:944
	GuiEventNetworkGameParams * GetOnlineGameModeOptions();

	// BrnGuiCache.h:947
	const BrnGui::GuiEventNetworkGameParams * GetOnlineGameModeOptions() const;

	// BrnGuiCache.h:951
	void SetResetOnlineGameOptions(bool);

	// BrnGuiCache.h:954
	bool GetResetOnlineGameOptions() const;

	// BrnGuiCache.h:958
	bool GetDoJoinOnlineRankedGame();

	// BrnGuiCache.h:962
	const bool GetDoJoinOnlineRankedGame() const;

	// BrnGuiCache.h:967
	void SetDoJoinOnlineRankedGame(bool);

	// BrnGuiCache.h:971
	bool GetDoJoinOnlineFreeburnGame();

	// BrnGuiCache.h:975
	const bool GetDoJoinOnlineFreeburnGame() const;

	// BrnGuiCache.h:980
	void SetDoJoinOnlineFreeburnGame(bool);

	// BrnGuiCache.h:984
	const bool GetEnteredOnlineViaEasyDrive() const;

	// BrnGuiCache.h:989
	void SetEnteredOnlineViaEasyDrive(bool);

	// BrnGuiCache.h:992
	bool IsOnline() const;

	// BrnGuiCache.h:996
	bool IsOfflineGameMode() const;

	// BrnGuiCache.h:1000
	int32_t GetActiveUserIndex() const;

	// BrnGuiCache.h:1004
	int32_t GetNumConsecutiveLosses() const;

	// BrnGuiCache.h:1008
	BrnGameState::ECurrentMedalTargetTime GetCurrentTargetMedalInEvent() const;

	// BrnGuiCache.h:1012
	float32_t GetCurrentTimeInEvent() const;

	// BrnGuiCache.h:1016
	float32_t GetTargetTimeInEvent() const;

	// BrnGuiCache.h:1021
	float32_t GetRequiredScoreForMedal(BrnGameState::ECurrentMedalTargetTime);

	// BrnGuiCache.h:1025
	float32_t GetDistanceInEvent() const;

	// BrnGuiCache.h:1029
	int8_t GetOpponentsInEvent() const;

	// BrnGuiCache.h:1033
	int32_t GetCurrentTakedownsInEvent() const;

	// BrnGuiCache.h:1037
	int32_t GetTargetTakedownsInEvent() const;

	// BrnGuiCache.h:1041
	int32_t GetCurrentScoreInEvent() const;

	// BrnGuiCache.h:1045
	int32_t GetTargetScoreInEvent() const;

	// BrnGuiCache.h:1049
	int32_t GetCurrentComboInEvent() const;

	// BrnGuiCache.h:1053
	int32_t GetMultiplierInEvent() const;

	// BrnGuiCache.h:1057
	int32_t GetLastStuntScore() const;

	// BrnGuiCache.h:1061
	int32_t GetLastStuntMultiplier() const;

	// BrnGuiCache.h:1065
	uint32_t GetStuntsInProgress() const;

	// BrnGuiCache.h:1069
	uint32_t GetAllStuntTypesInCurrentStunt() const;

	// BrnGuiCache.h:1073
	int32_t GetNumberOfStuntsToDisplay() const;

	// BrnGuiCache.h:1077
	const StuntToDisplay * GetStuntToDisplay(int32_t) const;

	// BrnGuiCache.h:1081
	bool IsComboInProgress() const;

	// BrnGuiCache.h:1085
	bool IsComboWarningActive() const;

	// BrnGuiCache.h:1089
	float32_t GetComboWarningActiveTime() const;

	// BrnGuiCache.h:1093
	int32_t GetCurrentRivalDamage() const;

	// BrnGuiCache.h:1097
	int32_t GetTargetRivalDamage() const;

	// BrnGuiCache.h:1101
	CgsID GetPursuitCarID() const;

	// BrnGuiCache.h:1105
	CgsID GetShutdownCarID() const;

	// BrnGuiCache.h:1109
	BrnProgression::TrophyUnlockData::UnlockType GetTrophyCarUnlockType() const;

	// BrnGuiCache.h:1113
	CgsID GetTrophyCarID() const;

	// BrnGuiCache.h:1117
	int32_t GetShowTimeComboMultiplier() const;

	// BrnGuiCache.h:1121
	int32_t GetShowTimeCarsCrashed() const;

	// BrnGuiCache.h:1125
	float32_t GetShowTimeDistanceTravelled() const;

	// BrnGuiCache.h:1129
	uint8_t GetCheckpointsInEvent() const;

	// BrnGuiCache.h:1133
	int32_t GetCheckpointReached() const;

	// BrnGuiCache.h:1137
	bool HasJustEnteredEvent() const;

	// BrnGuiCache.h:1141
	bool IsPreRaceFlyByActive() const;

	// BrnGuiCache.h:1145
	void SetPreRaceFlyByActive(bool);

	// BrnGuiCache.h:1149
	const GuiPFXHookEnumeration * GetPFXHookEnumeration() const;

	// BrnGuiCache.h:1153
	const BrnGui::GuiEventOfflinePostEvent::OfflinePostEventData * GetOfflinePostEventData() const;

	// BrnGuiCache.h:1157
	const BrnGui::GuiEventChangeReplayState::ReplayState GetReplayState() const;

	// BrnGuiCache.h:1162
	Vector3 & GetRaceCarPosition(EActiveRaceCarIndex);

	// BrnGuiCache.h:1167
	bool IsRaceCarInRange(EActiveRaceCarIndex);

	// BrnGuiCache.h:1172
	bool IsRaceCarCrashing(EActiveRaceCarIndex);

	// BrnGuiCache.h:1177
	bool IsActiveRaceCarIndexUsed(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1182
	bool IsActiveRaceCarConnecting(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1187
	bool IsActiveRaceCarDisconnected(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1192
	CgsID GetActiveRaceCarRivalId(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1197
	BrnGui::ERivalryStage GetActiveRaceCarRivalryStage(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1202
	uint8_t GetEventPositionOfRaceCar(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1207
	bool HasRaceCarFinished(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1211
	uint32_t GetScoringTrafficCount() const;

	// BrnGuiCache.h:1215
	const VehicleScoreData * GetScoringTrafficData(uint32_t) const;

	// BrnGuiCache.h:1219
	const GuiOverheadSignInfoEvent::VisibleOverheadSignArray * GetVisibleOverheadSignArray() const;

	// BrnGuiCache.h:1223
	LandmarkIndex GetEventDestinationLandmarkIndex() const;

	// BrnGuiCache.h:1227
	BrnWorld::EDistrict GetEventDestinationDistrict() const;

	// BrnGuiCache.h:1231
	const LandmarkIndex * GetEventLandmarks() const;

	// BrnGuiCache.h:1235
	LandmarkIndex GetEventFinishLandmark() const;

	// BrnGuiCache.h:1239
	int32_t GetOnlineRoundIndex() const;

	// BrnGuiCache.h:1244
	LandmarkIndex GetOnlineLandmarkIndex(int32_t) const;

	// BrnGuiCache.h:1248
	BrnNetwork::EPaybackType GetAvailablePayback(EActiveRaceCarIndex &) const;

	// BrnGuiCache.h:1253
	bool IsRoadRuleActive(BrnStreetData::ScoreType) const;

	// BrnGuiCache.h:1257
	BrnGameState::EActiveRoadRule GetActiveRoadRule() const;

	// BrnGuiCache.h:1261
	BrnGui::GuiEventSetRoadRuleScoreMode::ERoadPanelModes GetActiveRoadRuleScoringMode() const;

	// BrnGuiCache.h:1265
	bool IsRoadRuleShotActive() const;

	// BrnGuiCache.h:1269
	CgsID GetRoadRuleShotRoadId() const;

	// BrnGuiCache.h:1273
	bool IsRoadRuleShotTime() const;

	// BrnGuiCache.h:1277
	EActiveRaceCarIndex GetRoadRuleShotOpponentARCI() const;

	// BrnGuiCache.h:1281
	bool IsRoadRuleShotLocalNewRuler() const;

	// BrnGuiCache.h:1285
	bool HasRoadRuleShotBeenTaken() const;

	// BrnGuiCache.h:1289
	OptionsDataProfile * GetMenuOptionsData();

	// BrnGuiCache.h:1293
	bool IsCarUnlocked() const;

	// BrnGuiCache.h:1297
	CgsID GetUnlockedCarID() const;

	// BrnGuiCache.h:1301
	BrnGameState::GameStateModuleIO::ECarSelectType GetCurrentCarSelectType() const;

	// BrnGuiCache.h:1306
	// Declaration
	EActiveRaceCarIndex GetActiveRaceCarFromRivalId(CgsID) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiCache.cpp:3925
		using namespace CgsDev::Message;

	}

	// BrnGuiCache.h:1311
	BrnGui::ERivalryStage GetRivalryStageFromRivalId(CgsID) const;

	// BrnGuiCache.h:1315
	bool IsFriendsListShowing() const;

	// BrnGuiCache.h:1319
	BrnGui::GuiCache::EFriendsListWaitReason GetFriendsListWaitReason() const;

	// BrnGuiCache.h:1326
	void SetFriendsListWaitReason(BrnGui::GuiCache::EFriendsListWaitReason);

	// BrnGuiCache.h:1330
	bool IsFriendsListChangeIconShowing() const;

	// BrnGuiCache.h:1334
	uint16_t GetNumGoldMedals() const;

	// BrnGuiCache.h:1338
	uint16_t GetNumTotalMedals() const;

	// BrnGuiCache.h:1342
	uint16_t GetNumGoldMedalsToNextReward() const;

	// BrnGuiCache.h:1346
	uint16_t GetNumTotalMedalsToNextReward() const;

	// BrnGuiCache.h:1351
	void HandleSetActiveLandmarksEvent(const GuiEventSetActiveLandmarks *);

	// BrnGuiCache.h:1356
	void SetBurnoutSkillsManager(const BurnoutSkillsManager *);

	// BrnGuiCache.h:1360
	const BurnoutSkillsManager * GetBurnoutSkillsManager() const;

	// BrnGuiCache.h:1365
	void SetFreeburnChallengeManager(const FreeburnChallengeManager *);

	// BrnGuiCache.h:1369
	const FreeburnChallengeManager * GetFreeburnChallengeManager() const;

	// BrnGuiCache.h:1373
	BrnGameState::BurnoutSkillzData::EBurnoutSkillType GetCurrentSkillzSelected() const;

	// BrnGuiCache.h:1379
	float32_t GetBurnoutSkill(BrnGameState::BurnoutSkillzData::EBurnoutSkillType, EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1384
	const GuiShowtimeScoreUpdate & GetShowtimeScoreDataByActiveRaceCar(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1387
	bool GetAutoSaveEnabled() const;

	// BrnGuiCache.h:1392
	const BrnGui::GuiEventPreRaceMessages::MessageInfo * GetPreEventInfo(int32_t) const;

	// BrnGuiCache.h:1396
	uint32_t GetNumProfileEvents() const;

	// BrnGuiCache.h:1401
	const ProfileEvent * GetProfileEvent(uint32_t) const;

	// BrnGuiCache.h:1405
	const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event * GetPresetEvent(int32_t) const;

	// BrnGuiCache.h:1409
	const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event * GetPresetEventFromEventID(int32_t) const;

	// BrnGuiCache.h:1412
	int32_t GetNumPresetEvents() const;

	// BrnGuiCache.h:1417
	void GetOnlineFinishPoint(int32_t, BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *) const;

	// BrnGuiCache.h:1420
	int32_t GetNumOnlineFinishPoints() const;

	// BrnGuiCache.h:1425
	void SetIsNewProfile(bool);

	// BrnGuiCache.h:1428
	bool GetIsNewProfile() const;

	// BrnGuiCache.h:1431
	float32_t GetDistanceDrivenInCurrentCar() const;

	// BrnGuiCache.h:1435
	bool IsAutosaving() const;

	// BrnGuiCache.h:1439
	void SetIsAutosaving(bool);

	// BrnGuiCache.h:1444
	void SetConnectedToNetwork(bool);

	// BrnGuiCache.h:1449
	void SetDoDisconnectPopup(const CgsModule::Event *);

	// BrnGuiCache.h:1453
	bool IsInGame();

	// BrnGuiCache.h:1458
	void SetInGame(bool);

	// BrnGuiCache.h:1462
	bool IsAllowingSignInOutEvents() const;

	// BrnGuiCache.h:1467
	void SetAllowingSignInOutEvents(bool);

	// BrnGuiCache.h:1471
	bool PassedTheJunkyard() const;

	// BrnGuiCache.h:1475
	bool IsInJunkyard() const;

	// BrnGuiCache.h:1479
	bool IsOnlineTimeoutActive() const;

	// BrnGuiCache.h:1483
	InGameMessagesQueue * GetHudMessagesQueue();

	// BrnGuiCache.h:1487
	const CgsLanguage::ESku GetSku() const;

	// BrnGuiCache.h:1491
	const CgsLanguage::ELanguage GetLanguage() const;

	// BrnGuiCache.h:1495
	bool GetIsPlayerWrecked() const;

	// BrnGuiCache.h:1499
	bool GetPlayerSignInReported() const;

	// BrnGuiCache.h:1503
	bool GetPlayerSignOutReported() const;

	// BrnGuiCache.h:1507
	bool IsCarUnlockPending() const;

	// BrnGuiCache.h:1511
	bool IsCompletionSequenceInProgress() const;

	// BrnGuiCache.h:1516
	BrnGui::EGuiPlayerColours GetOnlinePlayerColourFromARCI(EActiveRaceCarIndex);

	// BrnGuiCache.h:1522
	int32_t HACK_FindABetterPlaceForMe_SetActiveLandmarksByEventID(uint32_t, float32_t, bool);

	// BrnGuiCache.h:1526
	bool GetCircleAsSelect() const;

	// BrnGuiCache.h:1530
	const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo * GetDriveThrough(int32_t) const;

	// BrnGuiCache.h:1534
	int32_t GetNumberOfDriveThroughs() const;

	// BrnGuiCache.h:1538
	bool GetControllerDisconected() const;

	// BrnGuiCache.h:1542
	bool GetIsCapturingMugshot();

	// BrnGuiCache.h:1546
	bool IsCameraConnected();

	// BrnGuiCache.h:1550
	bool IsWaitingForShowtimeResults() const;

	// BrnGuiCache.h:1554
	void SetWaitingForShowtimeResults(bool);

	// BrnGuiCache.h:1558
	void SetJunkyardFirstUse(bool);

	// BrnGuiCache.h:1562
	bool IsJunkyardFirstUse() const;

	// BrnGuiCache.h:1565
	Random * GetRandomNumberGenerator();

	// BrnGuiCache.h:1569
	int32_t GetCheckpointReached(EActiveRaceCarIndex) const;

	// BrnGuiCache.h:1572
	bool IsMultiplayerAllowed() const;

	// BrnGuiCache.h:1576
	bool IsLoadingScreenVisible() const;

	// BrnGuiCache.h:1580
	BrnProgression::RaceEventData::EModeType GetSatNavEventFilter() const;

	// BrnGuiCache.h:1584
	bool GetSatNavEventFilterEnabled() const;

	// BrnGuiCache.h:1588
	const BrnProgression::Profile * GetProgressionProfile() const;

	// BrnGuiCache.h:1592
	bool IsEATraxChyronActive() const;

	// BrnGuiCache.h:1596
	bool IsEasyDriveAllowed() const;

	// BrnGuiCache.h:1599
	bool AreRoadRulesAvailable() const;

	// BrnGuiCache.h:1605
	StateLoadingHelper GetStateLoadingHelper() const;

	// BrnGuiCache.h:1610
	void UnlockCredits();

private:
	// BrnGuiCache.h:1908
	void UpdateTrackerInfo(const LandmarkIndex *, uint32_t);

	// BrnGuiCache.h:1912
	void UpdateTrackerInfo(const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event *);

	// BrnGuiCache.h:1917
	InGamePlayerStatusData * GetOnlinePlayerInfoForWriting(RoadRulesRecvData::NetworkPlayerID);

	// BrnGuiCache.h:1922
	void HandleSpecificPreSetRacesEvent(const GuiEventSpecificPresetRaces *);

	// BrnGuiCache.h:1927
	void DetermineCarUnlockPending(const BrnProgression::Profile *);

}

