// BrnGuiPFXHooks.h:27
namespace BrnGui {
	// BrnGuiEventTypeDefs.h:97
	const int32_t KI_MAX_GAMERTAG_LENGTH = 20;

	// BrnGuiEventTypeDefs.h:98
	const int32_t KI_MAX_AWARDS = 6;

	// BrnGuiEventTypeDefs.h:99
	const int32_t KI_MAX_PFXHOOK_NAMES = 100;

	// BrnGuiEventTypeDefs.h:100
	const int32_t KI_MAX_VISIBLE_SIGNS = 32;

	// BrnGuiEventTypeDefs.h:925
	const const char *[4] KAPC_INGAME_FSM_NAMES;

}

// BrnGuiEventTypeDefs.h:6046
struct BrnGui::GuiPFXHookEnumeration : public GuiEvent<491> {
	// BrnGuiEventTypeDefs.h:6048
	int32_t miHookNameCount;

	// BrnGuiEventTypeDefs.h:6049
	const char *[100] mapHookNames;

}

// BrnGuiEventTypeDefs.h:310
extern const int32_t KI_MAX_NUM_STRINGS = 4;

// BrnGuiEventTypeDefs.h:311
extern const int32_t KI_MAX_CUSTOMMESSAGE_LENGTH = 256;

// BrnGuiEventTypeDefs.h:617
extern const int32_t KI_MAX_BUDDIES_TO_GET = 5;

// BrnGuiEventTypeDefs.h:693
extern const int32_t KI_MAX_CATEGORIES = 10;

// BrnGuiEventTypeDefs.h:694
extern const int32_t KI_SINGLE_CATEGORY_MAX_LENGTH = 31;

// BrnGuiEventTypeDefs.h:706
extern const int32_t KI_MAX_INDEXES = 10;

// BrnGuiEventTypeDefs.h:707
extern const int32_t KI_SINGLE_INDEX_MAX_LENGTH = 31;

// BrnGuiEventTypeDefs.h:719
extern const int32_t KI_MAX_VARIATIONS = 66;

// BrnGuiEventTypeDefs.h:720
extern const int32_t KI_SINGLE_VARIATION_MAX_LENGTH = 31;

// BrnGuiEventTypeDefs.h:1097
extern char[] KAC_STRINGID_TIME_DEFAULT;

// BrnGuiEventTypeDefs.h:1098
extern char[] KAC_STRINGID_CRASH_DEFAULT;

// BrnGuiEventTypeDefs.h:1577
extern const int32_t KI_MAX_NUM_MESSAGES = 3;

// BrnGuiEventTypeDefs.h:1592
extern const int32_t KI_NUM_MESSAGE_STRINGS = 3;

// BrnGuiEventTypeDefs.h:1593
extern const int32_t KI_MAX_LENGTH_STRING_ID = 128;

// BrnGuiEventTypeDefs.h:1595
extern const int32_t KI_NUM_PARAMETERS = 1;

// BrnGuiEventTypeDefs.h:1596
extern const int32_t KI_MAX_LENGTH_PARAMETERS = 20;

// BrnGuiEventTypeDefs.h:1743
extern const int32_t KI_MAX_SATNAV_ICONS = 48;

// BrnGuiEventTypeDefs.h:1754
extern float32_t msfMovementModifier;

// BrnGuiEventTypeDefs.h:2555
extern const int32_t KI_MAX_SATNAV_ROUTESEGMENTS = 320;

// BrnGuiEventTypeDefs.h:2621
extern const int32_t KI_MAX_POINTS = 2;

// BrnGuiEventTypeDefs.h:2660
extern const int32_t KI_MAX_ICONS_TO_IGNORE = 10;

// BrnGuiEventTypeDefs.h:3186
extern const int32_t KI_MAX_NUM_GAMES = 10;

// BrnGuiEventTypeDefs.h:5100
extern const int32_t KI_PLAYER_HAS_FINISHED_LAST_RANK = [255, 255, 255, 255, 255, 255, 255, 255];

// BrnGuiEventTypeDefs.h:5161
extern const int32_t KI_MAX_NUM_RIVALS_IN_EVENT = 34;

// BrnGuiEventTypeDefs.h:5613
extern const int32_t KI_NUMBER_OF_STRINGS = 3;

// BrnGuiEventTypeDefs.h:5614
extern const int32_t KI_MAX_PARAMS_PER_STRING = 4;

// BrnGuiEventTypeDefs.h:5695
extern const int32_t MKI_MAX_PARAMS_IN_MESSAGE = 2;

// BrnGuiEventTypeDefs.h:5772
extern const int32_t MKI_MAX_LENGTH_OF_STRING_ID = 32;

// BrnGuiEventTypeDefs.h:5774
extern const int32_t MKI_MAX_PARAMS_IN_MESSAGE = 2;

// BrnGuiEventTypeDefs.h:6094
extern const uint32_t KU_CLASSICAL_CHYRON_TEXT_ID_MAX_CHARACTERS = 48;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// BrnGuiEventTypeDefs.h:95
	using BrnNetwork::BrnNetworkModuleIO;

	// BrnGuiEventTypeDefs.h:97
	const int32_t KI_MAX_GAMERTAG_LENGTH = 20;

	// BrnGuiEventTypeDefs.h:98
	const int32_t KI_MAX_AWARDS = 6;

	// BrnGuiEventTypeDefs.h:99
	const int32_t KI_MAX_PFXHOOK_NAMES = 100;

	// BrnGuiEventTypeDefs.h:100
	const int32_t KI_MAX_VISIBLE_SIGNS = 32;

	// BrnGuiEventTypeDefs.h:925
	const const char *[4] KAPC_INGAME_FSM_NAMES;

}

// BrnGuiEventTypeDefs.h:5964
struct BrnGui::GuiPFXHookEvent : public GuiEvent<485> {
	// BrnGuiEventTypeDefs.h:5966
	uint32_t muGuid;

	// BrnGuiPFXHooks.h:37
	typedef char[33] HookNameString;

	// BrnGuiEventTypeDefs.h:5967
	GuiPFXHookEvent::HookNameString macName;

	// BrnGuiEventTypeDefs.h:5968
	float32_t mfMaximumBloomWeight;

	// BrnGuiEventTypeDefs.h:5969
	float32_t mfMaximumVignetteWeight;

	// BrnGuiEventTypeDefs.h:5970
	float32_t mfMaximumBlurWeight;

	// BrnGuiEventTypeDefs.h:5971
	float32_t mfMaximumDepthOfFieldWeight;

	// BrnGuiEventTypeDefs.h:5972
	float32_t mfMaximum2DTintWeight;

	// BrnGuiEventTypeDefs.h:5973
	float32_t mfMaximum3DTintWeight;

public:
	// BrnGuiEventTypeDefs.h:5975
	void Construct();

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// BrnGuiEventTypeDefs.h:113
	enum RoadRuleLeaderType {
		E_ROADRULELEADERTYPE_AI = 0,
		E_ROADRULELEADERTYPE_PLAYER = 1,
		E_ROADRULELEADERTYPE_FRIEND = 2,
		E_ROADRULELEADERTYPE_COUNT = 3,
	}

	// Declaration
	struct GuiEventChangeReplayState {
		// BrnGuiEventTypeDefs.h:861
		enum ReplayState {
			E_REPLAYSTATE_INVISIBLE = 0,
			E_REPLAYSTATE_PLAYING = 1,
			E_REPLAYSTATE_RECORDING = 2,
			E_REPLAYSTATE_COUNT = 3,
		}

	}

	// BrnGuiEventTypeDefs.h:883
	enum GuiFlow {
		E_GUIFLOW_SCREEN = 0,
		E_GUIFLOW_HUD = 1,
		E_GUIFLOW_OVERLAY = 2,
		E_GUIFLOW_COUNT = 3,
		E_GUIFLOW_FIRST = 0,
	}

	// BrnGuiEventTypeDefs.h:893
	enum EFinishType {
		E_FINISH_TYPE_1ST = 0,
		E_FINISH_TYPE_2ND = 1,
		E_FINISH_TYPE_3RD = 2,
		E_FINISH_TYPE_4TH = 3,
		E_FINISH_TYPE_5TH = 4,
		E_FINISH_TYPE_6TH = 5,
		E_FINISH_TYPE_7TH = 6,
		E_FINISH_TYPE_8TH = 7,
		E_FINISH_TYPE_TIMED_OUT = 8,
		E_FINISH_TYPE_WON = 9,
		E_FINISH_TYPE_LOST = 10,
		E_FINISH_TYPE_COUNT = 11,
	}

	// Declaration
	struct GuiEventRoadRuleUpcomingRoads {
		// BrnGuiEventTypeDefs.h:1218
		enum ERoadSide {
			E_ROAD_LEFT = 0,
			E_ROAD_RIGHT = 1,
			E_ROAD_COUNT = 2,
		}

		// BrnGuiEventTypeDefs.h:1226
		enum ERoadState {
			E_ROADSTATE_NORMAL = 0,
			E_ROADSTATE_SUGGESTED = 1,
			E_ROADSTATE_WRONG = 2,
			E_ROADSTATE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventSetRoadRuleScoreMode {
		// BrnGuiEventTypeDefs.h:1321
		enum ERoadPanelModes {
			E_ROAD_PANEL_MODE_OFFLINE = 0,
			E_ROAD_PANEL_MODE_ONLINE = 1,
			E_ROAD_PANEL_MODE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventPreRaceMessages {
		// BrnGuiEventTypeDefs.h:1579
		enum ERelationshipTypes {
			E_RELATIONSHIP_GOOD = 0,
			E_RELATIONSHIP_BAD = 1,
			E_RELATIONSHIP_NEUTRAL = 2,
			E_RELATIONSHIP_COUNT = 3,
		}

		// BrnGuiEventTypeDefs.h:1590
		struct MessageInfo {
			// BrnGuiEventTypeDefs.h:1592
			extern const int32_t KI_NUM_MESSAGE_STRINGS = 3;

			// BrnGuiEventTypeDefs.h:1593
			extern const int32_t KI_MAX_LENGTH_STRING_ID = 128;

			// BrnGuiEventTypeDefs.h:1595
			extern const int32_t KI_NUM_PARAMETERS = 1;

			// BrnGuiEventTypeDefs.h:1596
			extern const int32_t KI_MAX_LENGTH_PARAMETERS = 20;

			// BrnGuiEventTypeDefs.h:1600
			char[3][128] maacMessageIDs;

			// BrnGuiEventTypeDefs.h:1602
			int32_t miNumMsgIDs;

			// BrnGuiEventTypeDefs.h:1603
			char[3][20] maacMessageParameters;

			// BrnGuiEventTypeDefs.h:1605
			int32_t[3] maiNumParams;

			// BrnGuiEventTypeDefs.h:1608
			char[128] macGamerName;

			// BrnGuiEventTypeDefs.h:1610
			BrnGui::GuiEventPreRaceMessages::ERelationshipTypes meRelationshipType;

		}

	}

	// Declaration
	struct GuiEventUpdateSatNav {
		// BrnGuiEventTypeDefs.h:1675
		struct SatNavIconInfo {
			// BrnGuiEventTypeDefs.h:1678
			enum SatNavIconType {
				E_SATNAVICON_PLAYER_CAR = 0,
				E_SATNAVICON_MARKED_MAN = 1,
				E_SATNAVICON_NETWORKRIVAL = 2,
				E_SATNAVICON_RIVAL = 3,
				E_SATNAVICON_LANDMARK = 4,
				E_SATNAVICON_JUNCTION = 5,
				E_SATNAVICON_FREEBURN_CHALLENGE = 6,
				E_SATNAVICON_JUNKYARD = 7,
				E_SATNAVICON_CAR_PARK = 8,
				E_SATNAVICON_BODYSHOP = 9,
				E_SATNAVICON_GAS_STATION = 10,
				E_SATNAVICON_PAINT_SHOP = 11,
				E_SATNAVICON_TIRE_SHOP = 12,
				E_SATNAVICON_ROADSIGN = 13,
				E_SATNAVICON_MAX = 14,
			}

			// BrnGuiEventTypeDefs.h:1699
			Vector3 mv3Position;

			// BrnGuiEventTypeDefs.h:1700
			CgsID mCgsId;

			// BrnGuiEventTypeDefs.h:1702
			float32_t mfRotation;

			// BrnGuiEventTypeDefs.h:1703
			float32_t mfSpeedMph;

			// BrnGuiEventTypeDefs.h:1705
			LandmarkIndex mLandmarkIndex;

			// BrnGuiEventTypeDefs.h:1706
			uint8_t mu8DesignIndex;

			// BrnGuiEventTypeDefs.h:1707
			bool mbIsHiddenDriveThru;

		private:
			// BrnGuiEventTypeDefs.h:1736
			uint8_t mu8County;

			// BrnGuiEventTypeDefs.h:1737
			uint8_t mu8District;

			// BrnGuiEventTypeDefs.h:1738
			int8_t mi8ActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:1739
			int8_t mi8IconType;

		public:
			// BrnGuiEventTypeDefs.h:1710
			void SetCounty(BrnWorld::ECounty);

			// BrnGuiEventTypeDefs.h:1713
			BrnWorld::ECounty GetCounty() const;

			// BrnGuiEventTypeDefs.h:1716
			void SetDistrict(BrnWorld::EDistrict);

			// BrnGuiEventTypeDefs.h:1719
			BrnWorld::EDistrict GetDistrict() const;

			// BrnGuiEventTypeDefs.h:1722
			void SetActiveRaceCarIndex(EActiveRaceCarIndex);

			// BrnGuiEventTypeDefs.h:1725
			EActiveRaceCarIndex GetActiveRaceCarIndex() const;

			// BrnGuiEventTypeDefs.h:1728
			void SetIconType(BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType);

			// BrnGuiEventTypeDefs.h:1731
			BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType GetIconType() const;

		}

	}

	// Declaration
	struct GuiEventOnlinePostEvent {
		// BrnGuiEventTypeDefs.h:2276
		struct OnlinePlayer {
			// BrnGuiEventTypeDefs.h:2278
			EActiveRaceCarIndex meActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2279
			float32_t mfFinishingTime;

			// BrnGuiEventTypeDefs.h:2280
			Time mFinishingTime;

			// BrnGuiEventTypeDefs.h:2281
			float32_t mfDistanceFromFinish;

			// BrnGuiEventTypeDefs.h:2282
			int32_t miPointsFromThisRound;

			// BrnGuiEventTypeDefs.h:2283
			int32_t miResultsTablePosition;

			// BrnGuiEventTypeDefs.h:2284
			int32_t miTotalPoints;

			// BrnGuiEventTypeDefs.h:2285
			int32_t miEliminations;

			// BrnGuiEventTypeDefs.h:2286
			int32_t miLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2287
			int32_t miLandmarksNotVisited;

			// BrnGuiEventTypeDefs.h:2288
			int32_t miCumulativeLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2289
			bool mbHasTimedOut;

			// BrnGuiEventTypeDefs.h:2290
			bool mbHasDisconnected;

			// BrnGuiEventTypeDefs.h:2291
			bool mbWasEliminated;

		}

		// BrnGuiEventTypeDefs.h:2296
		struct OnlineAward {
			// BrnGuiEventTypeDefs.h:2298
			BrnGameState::EOnlineAwardID meOnlineAwardID;

			// BrnGuiEventTypeDefs.h:2299
			EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2300
			int32_t miAwardVariable;

		}

	}

	// Declaration
	struct GuiEventOfflinePostEvent {
		// BrnGuiEventTypeDefs.h:2380
		struct OfflinePostEventData {
			// BrnGuiEventTypeDefs.h:2382
			GuiEventStopMode::EGameModeType meFinishedGameModeType;

			// BrnGuiEventTypeDefs.h:2383
			CgsID mBeatenRival;

			// BrnGuiEventTypeDefs.h:2384
			int32_t miModeScore;

			// BrnGuiEventTypeDefs.h:2385
			float32_t mfTime;

			// BrnGuiEventTypeDefs.h:2386
			int8_t miPlayerFinishPosition;

			// BrnGuiEventTypeDefs.h:2387
			bool mbCrashedOut;

			// BrnGuiEventTypeDefs.h:2388
			bool mbTimedOut;

			// BrnGuiEventTypeDefs.h:2389
			bool mbEliminated;

			// BrnGuiEventTypeDefs.h:2390
			bool mbCountsTowardsProgression;

			// BrnGuiEventTypeDefs.h:2393
			int32_t miBaseScore;

			// BrnGuiEventTypeDefs.h:2394
			int32_t miScoreMultiplier;

			// BrnGuiEventTypeDefs.h:2395
			float32_t mfDistanceTravelled;

			// BrnGuiEventTypeDefs.h:2397
			DerivedCarArray maCarsToUnlockFromSpecialEvent;

			// BrnGuiEventTypeDefs.h:2401
			bool mbHasRankedUp;

			// BrnGuiEventTypeDefs.h:2402
			int32_t miPlayerOldRank;

			// BrnGuiEventTypeDefs.h:2403
			int32_t miPlayerNewRank;

			// BrnGuiEventTypeDefs.h:2404
			int32_t miCarsRevealed;

			// BrnGuiEventTypeDefs.h:2405
			int32_t miEventsUnlocked;

			// BrnGuiEventTypeDefs.h:2406
			bool mbCompletedLastRank;

			// BrnGuiEventTypeDefs.h:2409
			CgsID mNewlyUnlockedRivalID;

			// BrnGuiEventTypeDefs.h:2411
			bool mbHasUnlockedFreeCar;

			// BrnGuiEventTypeDefs.h:2412
			CgsID mNewlyUnlockedFreeCarID;

		}

	}

	// Declaration
	struct CalculateRoute {
		// BrnGuiEventTypeDefs.h:2612
		enum ERouteEndPointType {
			E_ROUTE_END_POINT_TYPE_LANDMARK = 0,
			E_ROUTE_END_POINT_TYPE_JUNCTION = 1,
			E_ROUTE_END_POINT_TYPE_PLAYERPOS = 2,
			E_ROUTE_END_POINT_TYPE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventDrawEventIcons {
		// BrnGuiEventTypeDefs.h:2662
		enum EIconDisplayType {
			E_ICON_DISPLAY_TYPE_OFFLINE_EVENTS = 0,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_STARTS = 1,
			E_ICON_DISPLAY_TYPE_ONLINE_CHECKPOINTS = 2,
			E_ICON_DISPLAY_TYPE_ONLINE_FINISH_POINTS = 3,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_PRESETS = 4,
			E_ICON_DISPLAY_TYPE_COUNT = 5,
		}

	}

	// Declaration
	struct GuiEventNetworkOutputPlayerTexture {
		// BrnGuiEventTypeDefs.h:3320
		enum EOutput {
			E_OUTPUT_OFF = 0,
			E_OUTPUT_PLAYER_IMAGE = 1,
			E_OUTPUT_SCALP_IMAGE = 2,
			E_OUTPUT_WINNER_IMAGE = 3,
			E_OUTPUT_GAMERPIC = 4,
			E_OUTPUT_GAMERPIC_LICENCE = 5,
			E_OUTPUT_NUM = 6,
		}

	}

	// Declaration
	struct GuiPlayerCrashingStateChangeEvent {
		// BrnGuiEventTypeDefs.h:3960
		enum CrashBarState {
			E_CRASHBARSTATE_INVALID = -1,
			E_CRASHBARSTATE_START_CRASHED = 0,
			E_CRASHBARSTATE_LEAVE_CRASHED = 1,
			E_CRASHBARSTATE_START_TAKEDOWN = 2,
			E_CRASHBARSTATE_LEAVE_TAKEDOWN = 3,
			E_CRASHBARSTATE_COUNT = 4,
		}

	}

	// Declaration
	struct GuiPlayerEngineEvent {
		// BrnGuiEventTypeDefs.h:3986
		enum EEngineState {
			E_ENGINE_OFF = 0,
			E_ENGINE_ON = 1,
			E_ENGINE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventAudioTraxPlayOrder {
		// BrnGuiEventTypeDefs.h:4068
		enum ETraxPlayOrderMode {
			E_TRAX_PLAY_ORDER_MODE_SEQUENTIAL = 0,
			E_TRAX_PLAY_ORDER_MODE_RANDOM = 1,
			E_TRAX_PLAY_ORDER_MODE_COUNT = 2,
		}

	}

	// BrnGuiEventTypeDefs.h:97
	const int32_t KI_MAX_GAMERTAG_LENGTH = 20;

	// BrnGuiEventTypeDefs.h:98
	const int32_t KI_MAX_AWARDS = 6;

	// BrnGuiEventTypeDefs.h:99
	const int32_t KI_MAX_PFXHOOK_NAMES = 100;

	// BrnGuiEventTypeDefs.h:100
	const int32_t KI_MAX_VISIBLE_SIGNS = 32;

	// BrnGuiEventTypeDefs.h:925
	const const char *[4] KAPC_INGAME_FSM_NAMES;

}

// BrnGuiEventTypeDefs.h:123
struct BrnGui::OverheadSignScore {
	// BrnGuiEventTypeDefs.h:125
	Vector3 mWorldSpacePosition;

	// BrnGuiEventTypeDefs.h:126
	uint16_t muEntityIndex;

}

// BrnGuiEventTypeDefs.h:615
struct BrnGui::GuiEventOnlineReceiveFriendInfo : public GuiEvent<103> {
	// BrnGuiEventTypeDefs.h:617
	extern const int32_t KI_MAX_BUDDIES_TO_GET = 5;

	// BrnGuiEventTypeDefs.h:619
	BuddyInformation[5] mBuddyInformation;

	// BrnGuiEventTypeDefs.h:620
	int32_t miNumberOfBuddiesInEvent;

	// BrnGuiEventTypeDefs.h:621
	int32_t miIndexOfFirstBuddyInFullBuddyList;

	// BrnGuiEventTypeDefs.h:622
	bool mbConnected;

}

// BrnGuiEventTypeDefs.h:857
struct BrnGui::GuiEventChangeReplayState : public GuiEvent<89> {
	// BrnGuiEventTypeDefs.h:870
	BrnGui::GuiEventChangeReplayState::ReplayState leNewReplayState;

}

// BrnGuiEventTypeDefs.h:1021
struct BrnGui::GuiEventStopMode : public GuiEvent<320> {
	// BrnGuiEventTypeDefs.h:138
	typedef BrnGameState::GameStateModuleIO::EGameModeType EGameModeType;

	// BrnGuiEventTypeDefs.h:1023
	GuiEventStopMode::EGameModeType meStoppedGameModeType;

	// BrnGuiEventTypeDefs.h:1024
	int32_t miNumConsecutiveLosses;

	// BrnGuiEventTypeDefs.h:1025
	bool mbHasAborted;

	// BrnGuiEventTypeDefs.h:1026
	bool mbIsLastRound;

	// BrnGuiEventTypeDefs.h:1027
	bool mbAbortDueToDisconnects;

}

// BrnGuiEventTypeDefs.h:1071
struct BrnGui::GuiEventRoadRuleEnter : public GuiEvent<329> {
	// BrnGuiEventTypeDefs.h:1074
	PlayerName[2] maFriendLeader;

	// BrnGuiEventTypeDefs.h:1075
	CgsID[2] maAILeaderId;

	// BrnGuiEventTypeDefs.h:1076
	BrnGui::RoadRuleLeaderType[2] maeRoadRuleLeaderType;

	// BrnGuiEventTypeDefs.h:1077
	BrnGui::RoadRuleLeaderType[2] maeOfflineRoadRuleLeaderType;

	// BrnGuiEventTypeDefs.h:1078
	BrnGui::RoadRuleLeaderType[2] maeOnlineRoadRuleLeaderType;

	// BrnGuiEventTypeDefs.h:1079
	bool[2] mabChallenge;

	// BrnGuiEventTypeDefs.h:1080
	int32_t[2] maiBestValues;

	// BrnGuiEventTypeDefs.h:1081
	int32_t[2] maiBestOfflineValues;

	// BrnGuiEventTypeDefs.h:1082
	int32_t[2] maiBestOnlineValues;

	// BrnGuiEventTypeDefs.h:1083
	CgsID mRoadId;

	// BrnGuiEventTypeDefs.h:1084
	SpanBase::RoadIndex miRoadIndex;

private:
	// BrnGuiEventTypeDefs.h:1097
	extern char[] KAC_STRINGID_TIME_DEFAULT;

	// BrnGuiEventTypeDefs.h:1098
	extern char[] KAC_STRINGID_CRASH_DEFAULT;

	// BrnGuiEventTypeDefs.h:1099
	extern const char *[] KAC_DEFAULT_RULE_STRINGIDS;

public:
	// BrnGuiEventTypeDefs.h:1089
	void Construct(const RoadRulesEnterRoadAction *);

	// BrnGuiEventTypeDefs.h:1093
	void Construct();

private:
	// BrnGuiEventTypeDefs.h:1106
	void SetupRoadRule(const RoadRulesEnterRoadAction *, BrnStreetData::ScoreType);

}

// BrnGuiEventTypeDefs.h:1111
struct BrnGui::GuiEventRoadRuleUpdateTargetScores : public GuiEvent<335> {
	// BrnGuiEventTypeDefs.h:1114
	PlayerName[2] maFriendLeader;

	// BrnGuiEventTypeDefs.h:1115
	BrnGui::RoadRuleLeaderType[2] maeRoadRuleLeaderType;

	// BrnGuiEventTypeDefs.h:1116
	int32_t[2] maiBestValues;

	// BrnGuiEventTypeDefs.h:1117
	CgsID mRoadId;

public:
	// BrnGuiEventTypeDefs.h:1122
	void Construct(const RoadRulesUpdateTargetScoreAction *);

private:
	// BrnGuiEventTypeDefs.h:1129
	void SetupRoadRule(const RoadRulesUpdateTargetScoreAction *, BrnStreetData::ScoreType);

}

// BrnGuiEventTypeDefs.h:1168
struct BrnGui::GuiEventRoadRuleEnd : public GuiEvent<332> {
	// BrnGuiEventTypeDefs.h:1170
	CgsID mRoadId;

	// BrnGuiEventTypeDefs.h:1171
	BrnStreetData::ScoreType meRuleType;

	// BrnGuiEventTypeDefs.h:1172
	float32_t mfScore;

	// BrnGuiEventTypeDefs.h:1173
	bool mbScoreAttempt;

}

// BrnGuiEventTypeDefs.h:1215
struct BrnGui::GuiEventRoadRuleUpcomingRoads : public GuiEvent<337> {
	// BrnGuiEventTypeDefs.h:1235
	BrnGui::RoadRuleLeaderType[2][2] maaeLeaderTypes;

	// BrnGuiEventTypeDefs.h:1236
	BrnGui::RoadRuleLeaderType[2][2] maaeOfflineLeaderTypes;

	// BrnGuiEventTypeDefs.h:1237
	BrnGui::RoadRuleLeaderType[2][2] maaeOnlineLeaderTypes;

	// BrnGuiEventTypeDefs.h:1238
	CgsID[2] mRoadIds;

	// BrnGuiEventTypeDefs.h:1239
	SpanBase::RoadIndex[2] maiTurningRoadIndices;

	// BrnGuiEventTypeDefs.h:1240
	SpanBase::RoadIndex miCurrentRoadIndex;

	// BrnGuiEventTypeDefs.h:1241
	BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadState[2] meRoadStates;

	// BrnGuiEventTypeDefs.h:1242
	BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadState meCurrentSignState;

	// BrnGuiEventTypeDefs.h:1243
	Vector3[2] maRoadEntrancePosition;

public:
	// BrnGuiEventTypeDefs.h:1247
	void Construct();

	// BrnGuiEventTypeDefs.h:1252
	void Construct(const UpcomingRoadChangeAction *);

private:
	// BrnGuiEventTypeDefs.h:1261
	void FindRoadRuler(BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadSide, const UpcomingRoadChangeAction *, BrnStreetData::ScoreType);

	// BrnGuiEventTypeDefs.h:1268
	BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadState ConvertGamestateEnumToGuiEnum(int32_t);

}

// BrnGuiEventTypeDefs.h:1299
struct BrnGui::GuiEventRoadRuleBatchDataResponse : public GuiEvent<340> {
	// BrnGuiEventTypeDefs.h:1302
	CgsID[64] maRoadIds;

	// BrnGuiEventTypeDefs.h:1303
	bool[64] mabPlayerBeatenOfflineTime;

	// BrnGuiEventTypeDefs.h:1304
	bool[64] mabPlayerBeatenOfflineCrash;

	// BrnGuiEventTypeDefs.h:1305
	bool[64] mabPlayerBeatenOnlineTime;

	// BrnGuiEventTypeDefs.h:1306
	bool[64] mabPlayerBeatenOnlineCrash;

	// BrnGuiEventTypeDefs.h:1307
	int32_t miRoadCount;

}

// BrnGuiEventTypeDefs.h:1319
struct BrnGui::GuiEventSetRoadRuleScoreMode : public GuiEvent<328> {
	// BrnGuiEventTypeDefs.h:1329
	BrnGui::GuiEventSetRoadRuleScoreMode::ERoadPanelModes meNewRoadRuleScoreMode;

}

// BrnGuiEventTypeDefs.h:1396
struct BrnGui::GuiEventChangeDistrict : public GuiEvent<167> {
	// BrnGuiEventTypeDefs.h:1398
	WorldRegion mNewWorldRegion;

	// BrnGuiEventTypeDefs.h:1399
	bool mbProcessed;

}

// BrnGuiEventTypeDefs.h:1413
struct BrnGui::GuiEventSpecificPresetRaces : public GuiEvent<192> {
	// BrnGuiEventTypeDefs.h:1415
	SpecificGameModeEventInterface mEvents;

}

// BrnGuiEventTypeDefs.h:1455
struct BrnGui::GuiEventSetActiveLandmarks : public GuiEvent<169> {
	// BrnGuiEventTypeDefs.h:1457
	uint32_t muNumLandmarks;

	// BrnGuiEventTypeDefs.h:1458
	LandmarkIndex[512] maLandmarkIndices;

}

// BrnGuiEventTypeDefs.h:1574
struct BrnGui::GuiEventPreRaceMessages : public GuiEvent<157> {
	// BrnGuiEventTypeDefs.h:1577
	extern const int32_t KI_MAX_NUM_MESSAGES = 3;

	// BrnGuiEventTypeDefs.h:1613
	BrnGui::GuiEventPreRaceMessages::MessageInfo[3] mMessages;

	// BrnGuiEventTypeDefs.h:1614
	int32_t miNumMessages;

public:
	// BrnGuiEventTypeDefs.h:1618
	void Construct();

	// BrnGuiEventTypeDefs.h:1625
	void AddMessage(BrnGui::GuiEventPreRaceMessages::ERelationshipTypes, const char *);

	// BrnGuiEventTypeDefs.h:1635
	void AddStringToMessage(int32_t, int32_t, const char *, int32_t, const char *);

}

// BrnGuiEventTypeDefs.h:1672
struct BrnGui::GuiEventUpdateSatNav : public GuiEvent<197> {
	// BrnGuiEventTypeDefs.h:1743
	extern const int32_t KI_MAX_SATNAV_ICONS = 48;

	// BrnGuiEventTypeDefs.h:1744
	BrnGui::GuiEventUpdateSatNav::SatNavIconInfo[48] mSatNavIcons;

	// BrnGuiEventTypeDefs.h:1745
	int32_t miNumIcons;

	// BrnGuiEventTypeDefs.h:1753
	extern bool msbForceWorstCase;

	// BrnGuiEventTypeDefs.h:1754
	extern float32_t msfMovementModifier;

public:
	// BrnGuiEventTypeDefs.h:1751
	void DoWorstCase();

}

// BrnGuiEventTypeDefs.h:1882
struct BrnGui::GuiEventUpdateEventStarts : public GuiEvent<201> {
	// BrnGuiEventTypeDefs.h:1884
	SetUpAllEventStartsInterface mEventStarts;

}

// BrnGuiEventTypeDefs.h:1889
struct BrnGui::GuiEventSatNavParameters : public GuiEvent<198> {
	// BrnGuiEventTypeDefs.h:1891
	bool mbRivalFovFreeBurn;

	// BrnGuiEventTypeDefs.h:1892
	bool mbRivalFovRace;

	// BrnGuiEventTypeDefs.h:1893
	bool mbViewTrajectory;

	// BrnGuiEventTypeDefs.h:1894
	bool mbRotateSatNav;

	// BrnGuiEventTypeDefs.h:1895
	bool mbShowOffLineRivalsOnSatNav;

}

// BrnGuiEventTypeDefs.h:1920
struct BrnGui::GuiRaceCarInfoEvent : public GuiEvent<205> {
	// BrnGuiEventTypeDefs.h:1923
	Vector3[8] mav3CarPositions;

	// BrnGuiEventTypeDefs.h:1924
	CgsID[8] mauRivalID;

	// BrnGuiEventTypeDefs.h:1925
	bool[8] mabCarsUsed;

	// BrnGuiEventTypeDefs.h:1926
	bool[8] mabConnecting;

	// BrnGuiEventTypeDefs.h:1927
	bool[8] mabDisconnected;

	// BrnGuiEventTypeDefs.h:1928
	bool[8] mabIsInRange;

	// BrnGuiEventTypeDefs.h:1929
	bool[8] mabIsCrashing;

	// BrnGuiEventTypeDefs.h:1930
	int32_t miCarUsedCount;

	// BrnGuiEventTypeDefs.h:1942
	extern bool msbForceWorstCase;

public:
	// BrnGuiEventTypeDefs.h:1934
	void Construct();

	// BrnGuiEventTypeDefs.h:1940
	void DoWorstCase(EActiveRaceCarIndex, Vector3);

}

// BrnGuiEventTypeDefs.h:1975
struct BrnGui::GuiTrafficCarInfoEvent : public GuiEvent<206> {
	// BrnTrafficGuiInterface.h:54
	typedef Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u> ScoringVehicleArray;

	// BrnGuiEventTypeDefs.h:1977
	GuiTrafficCarInfoEvent::ScoringVehicleArray mScoreTargets;

public:
	// BrnGuiEventTypeDefs.h:1980
	void Construct();

}

// BrnGuiEventTypeDefs.h:1985
struct BrnGui::GuiOverheadSignInfoEvent : public GuiEvent<208> {
	// BrnGuiEventTypeDefs.h:129
	typedef Array<BrnGui::OverheadSignScore,32u> VisibleOverheadSignArray;

	// BrnGuiEventTypeDefs.h:1987
	GuiOverheadSignInfoEvent::VisibleOverheadSignArray mVisibleOverheadSignArray;

}

// BrnGuiEventTypeDefs.h:1992
struct BrnGui::GuiRemovedTrafficEvent : public GuiEvent<207> {
	// BrnGuiEventTypeDefs.h:1994
	Array<uint16_t,25u> mRemovedTrafficArray;

public:
	// BrnGuiEventTypeDefs.h:1997
	void Construct();

}

// BrnGuiEventTypeDefs.h:2211
struct BrnGui::GuiEventRacePositionInfo : public GuiEvent<235> {
	// BrnGuiEventTypeDefs.h:2213
	uint8_t[8] mauRacePosition;

	// BrnGuiEventTypeDefs.h:2214
	bool[8] mabHasFinished;

	// BrnGuiEventTypeDefs.h:2215
	bool[8] mabValid;

}

// BrnGuiEventTypeDefs.h:2271
struct BrnGui::GuiEventOnlinePostEvent : public GuiEvent<316> {
	// BrnGuiEventTypeDefs.h:2303
	BrnGui::GuiEventOnlinePostEvent::OnlinePlayer[8] maOnlinePlayers;

	// BrnGuiEventTypeDefs.h:2305
	BrnGui::GuiEventOnlinePostEvent::OnlineAward[6] maOnlineAwards;

	// BrnGuiEventTypeDefs.h:2307
	int32_t miNumPlayersInEvent;

	// BrnGuiEventTypeDefs.h:2308
	int32_t miNumPlayersFinishedEvent;

	// BrnGuiEventTypeDefs.h:2309
	int32_t miNumAwardsGiven;

public:
	// BrnGuiEventTypeDefs.h:2312
	void Clear();

}

// BrnGuiEventTypeDefs.h:2369
struct BrnGui::GuiEventOnlineEventFinishingOrder : public GuiEvent<315> {
	// BrnGuiEventTypeDefs.h:2371
	EActiveRaceCarIndex[8] maeActiveRaceCarIndexForFinishPosition;

}

// BrnGuiEventTypeDefs.h:2376
struct BrnGui::GuiEventOfflinePostEvent : public GuiEvent<287> {
	// BrnGuiEventTypeDefs.h:2415
	BrnGui::GuiEventOfflinePostEvent::OfflinePostEventData mPostEventData;

}

// BrnGuiEventTypeDefs.h:2553
struct BrnGui::GuiEventRouteInformation : public GuiEvent<209> {
	// BrnGuiEventTypeDefs.h:2555
	extern const int32_t KI_MAX_SATNAV_ROUTESEGMENTS = 320;

	// BrnGuiEventTypeDefs.h:2558
	Vector3[320] mNodeList;

	// BrnGuiEventTypeDefs.h:2560
	int32_t miLength;

	// BrnGuiEventTypeDefs.h:2561
	int32_t miEventId;

	// BrnGuiEventTypeDefs.h:2562
	float32_t mfRouteDistance;

}

// BrnGuiEventTypeDefs.h:2609
struct BrnGui::CalculateRoute : public GuiEvent<484> {
	// BrnGuiEventTypeDefs.h:2621
	extern const int32_t KI_MAX_POINTS = 2;

	// BrnGuiEventTypeDefs.h:2623
	Vector3[2] maPositions;

	// BrnGuiEventTypeDefs.h:2624
	BrnGui::CalculateRoute::ERouteEndPointType[2] mePointTypes;

	// BrnGuiEventTypeDefs.h:2625
	uint32_t[2] muJunctionIDs;

	// BrnGuiEventTypeDefs.h:2626
	CgsID[2] maLandmarkIDs;

	// BrnGuiEventTypeDefs.h:2627
	uint16_t[2] maSectionIndices;

	// BrnGuiEventTypeDefs.h:2628
	uint16_t mu16EventID;

}

// BrnGuiEventTypeDefs.h:2657
struct BrnGui::GuiEventDrawEventIcons : public GuiEvent<539> {
	// BrnGuiEventTypeDefs.h:2660
	extern const int32_t KI_MAX_ICONS_TO_IGNORE = 10;

private:
	// BrnGuiEventTypeDefs.h:2693
	uint32_t[10] mauIconsToIgnore;

	// BrnGuiEventTypeDefs.h:2694
	float32_t mfFadeTime;

	// BrnGuiEventTypeDefs.h:2695
	BrnGui::GuiEventDrawEventIcons::EIconDisplayType meIconDisplayType;

	// BrnGuiEventTypeDefs.h:2696
	int32_t miNumIconsToIgnore;

	// BrnGuiEventTypeDefs.h:2697
	bool mbDrawIcons;

public:
	// BrnGuiEventTypeDefs.h:2680
	void Construct(bool, BrnGui::GuiEventDrawEventIcons::EIconDisplayType, float32_t, uint32_t *, int32_t);

	// BrnGuiEventTypeDefs.h:2683
	const float32_t GetFadeTime() const;

	// BrnGuiEventTypeDefs.h:2684
	const BrnGui::GuiEventDrawEventIcons::EIconDisplayType GetDisplayType() const;

	// BrnGuiEventTypeDefs.h:2685
	const bool GetDrawIcons() const;

	// BrnGuiEventTypeDefs.h:2688
	void GetIgnoreIcons(uint32_t *, int32_t *) const;

}

// BrnGuiEventTypeDefs.h:2778
struct BrnGui::GuiEventEventStateResponse : public GuiEvent<541> {
	// BrnGuiEventTypeDefs.h:2783
	Array<BrnProgression::ProfileEvent,175u> maEvents;

}

// BrnGuiEventTypeDefs.h:2923
struct BrnGui::GuiEventNetworkConnect : public GuiEvent<270> {
	// BrnGuiEventTypeDefs.h:2925
	BrnNetwork::LoginManagerBase::ESignInType meSignInType;

}

// BrnGuiEventTypeDefs.h:3020
struct BrnGui::GuiEventNetworkLobbyPlayerList : public GuiEvent<241> {
	// BrnGuiEventTypeDefs.h:3022
	LobbyPlayerStatusData[8] maPlayerLobbyInfo;

	// BrnGuiEventTypeDefs.h:3023
	int32_t miNumberOfPlayers;

}

// BrnGuiEventTypeDefs.h:3222
struct BrnGui::GuiEventNetworkCreateGame : public GuiEvent<254> {
	// BrnGuiEventTypeDefs.h:3232
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event[10] maEvents;

	// BrnGuiEventTypeDefs.h:3233
	BrnGameState::GameStateModuleIO::EGameModeType meGameMode;

	// BrnGuiEventTypeDefs.h:3234
	BrnGameState::GameStateModuleIO::EGameModeType mePreviousGameMode;

	// BrnGuiEventTypeDefs.h:3235
	BrnNetwork::EBrnGameSecurity meSecurity;

	// BrnGuiEventTypeDefs.h:3236
	BrnNetwork::EBoostType meBoostType;

	// BrnGuiEventTypeDefs.h:3237
	BrnNetwork::EVehicleChoice meVehicleChoice;

	// BrnGuiEventTypeDefs.h:3238
	int32_t miTimeLimit;

	// BrnGuiEventTypeDefs.h:3239
	int32_t miNumRounds;

	// BrnGuiEventTypeDefs.h:3240
	int32_t miVehicleClass;

	// BrnGuiEventTypeDefs.h:3241
	int32_t miNumRunnerCrashes;

	// BrnGuiEventTypeDefs.h:3242
	bool mbInfiniteBoost;

	// BrnGuiEventTypeDefs.h:3243
	bool mbTrafficOn;

	// BrnGuiEventTypeDefs.h:3244
	bool mbTrafficCheckingOn;

	// BrnGuiEventTypeDefs.h:3245
	bool mbRanked;

public:
	// BrnGuiEventTypeDefs.h:3226
	void Construct();

	// BrnGuiEventTypeDefs.h:3230
	void SetFromGameParams(const BrnGui::GuiEventNetworkGameParams *);

}

// BrnGuiEventTypeDefs.h:3257
struct BrnGui::GuiEventNetworkGameParams : public GuiEvent<255> {
	// BrnGuiEventTypeDefs.h:3263
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event[10] maEvents;

	// BrnGuiEventTypeDefs.h:3264
	BrnGameState::GameStateModuleIO::EGameModeType meGameMode;

	// BrnGuiEventTypeDefs.h:3265
	BrnGameState::GameStateModuleIO::EGameModeType mePreviousGameMode;

	// BrnGuiEventTypeDefs.h:3266
	BrnNetwork::EBrnGameSecurity meSecurity;

	// BrnGuiEventTypeDefs.h:3267
	BrnNetwork::EBoostType meBoostType;

	// BrnGuiEventTypeDefs.h:3268
	BrnNetwork::EVehicleChoice meVehicleChoice;

	// BrnGuiEventTypeDefs.h:3269
	int32_t miTimeLimit;

	// BrnGuiEventTypeDefs.h:3270
	int32_t miNumRounds;

	// BrnGuiEventTypeDefs.h:3271
	int32_t miVehicleClass;

	// BrnGuiEventTypeDefs.h:3272
	int32_t miNumRunnerCrashes;

	// BrnGuiEventTypeDefs.h:3273
	bool mbInfiniteBoost;

	// BrnGuiEventTypeDefs.h:3274
	bool mbTrafficOn;

	// BrnGuiEventTypeDefs.h:3275
	bool mbTrafficCheckingOn;

	// BrnGuiEventTypeDefs.h:3276
	bool mbRanked;

public:
	// BrnGuiEventTypeDefs.h:3261
	void Construct();

}

// BrnGuiEventTypeDefs.h:3318
struct BrnGui::GuiEventNetworkOutputPlayerTexture : public GuiEvent<262> {
	// BrnGuiEventTypeDefs.h:3332
	BrnGui::GuiEventNetworkOutputPlayerTexture::EOutput meOutput;

	// BrnGuiEventTypeDefs.h:3333
	RoadRulesRecvData::NetworkPlayerID mPlayerIDToOutput;

}

// BrnGuiEventTypeDefs.h:3956
struct BrnGui::GuiPlayerCrashingStateChangeEvent : public GuiEvent<372> {
	// BrnGuiEventTypeDefs.h:3972
	BrnGui::GuiPlayerCrashingStateChangeEvent::CrashBarState meCurrentState;

}

// BrnGuiEventTypeDefs.h:3984
struct BrnGui::GuiPlayerEngineEvent : public GuiEvent<374> {
	// BrnGuiEventTypeDefs.h:3994
	BrnGui::GuiPlayerEngineEvent::EEngineState meNewEngineState;

}

// BrnGuiEventTypeDefs.h:4018
struct BrnGui::GuiEventAudioTraxUpdate : public GuiEvent<453> {
	// BrnGuiEventTypeDefs.h:130
	typedef FastBitArray<128> EATraxArrayType;

	// BrnGuiEventTypeDefs.h:4021
	GuiEventAudioTraxUpdate::EATraxArrayType mAvailableInFreeBurn;

	// BrnGuiEventTypeDefs.h:4022
	GuiEventAudioTraxUpdate::EATraxArrayType mAvailableInEvents;

}

// BrnGuiEventTypeDefs.h:4066
struct BrnGui::GuiEventAudioTraxPlayOrder : public GuiEvent<457> {
	// BrnGuiEventTypeDefs.h:4076
	BrnGui::GuiEventAudioTraxPlayOrder::ETraxPlayOrderMode meMode;

}

// BrnGuiEventTypeDefs.h:5158
struct BrnGui::GuiEventRivalryFullInfoResponse : public GuiEvent<437> {
	// BrnGuiEventTypeDefs.h:5161
	extern const int32_t KI_MAX_NUM_RIVALS_IN_EVENT = 34;

	// BrnGuiEventTypeDefs.h:5163
	int32_t miNumRivalsReturned;

	// BrnGuiEventTypeDefs.h:5164
	CgsID[34] mRivalIDs;

	// BrnGuiEventTypeDefs.h:5165
	CgsID[34] mRivalCarIDs;

	// BrnGuiEventTypeDefs.h:5166
	BrnGui::ERivalryStage[34] mRivalryStatus;

}

// BrnGuiEventTypeDefs.h:5545
struct BrnGui::GuiChallengeNotActiveStartEvent : public GuiEvent<568> {
	// BrnGuiEventTypeDefs.h:5549
	EActiveRaceCarIndex[7] maePlayersInChallengeARCI;

	// BrnGuiEventTypeDefs.h:5550
	CgsID mChallengeID;

	// BrnGuiEventTypeDefs.h:5551
	int32_t miNumPlayersInChallenge;

}

// BrnGuiEventTypeDefs.h:5610
struct BrnGui::GuiHudMessage : public GuiEvent<152> {
	// BrnGuiEventTypeDefs.h:5613
	extern const int32_t KI_NUMBER_OF_STRINGS = 3;

	// BrnGuiEventTypeDefs.h:5614
	extern const int32_t KI_MAX_PARAMS_PER_STRING = 4;

	// BrnGuiEventTypeDefs.h:5616
	CgsID mMessageIdHash;

private:
	// BrnGuiEventTypeDefs.h:5663
	int32_t[3] maiNoOfParams;

	// BrnGuiEventTypeDefs.h:5664
	HudMessageParameter[3][4] maaParams;

public:
	// BrnGuiEventTypeDefs.h:5621
	void Construct(const char *);

	// BrnGuiEventTypeDefs.h:5626
	void Construct(CgsID);

	// BrnGuiEventTypeDefs.h:5633
	// Declaration
	void AddParam(CgsGui::HudMessageParamTypes, int32_t, const char *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiEventTypeDefs.h:6929
		using namespace CgsDev::Message;

	}

	// BrnGuiEventTypeDefs.h:5640
	// Declaration
	void AddParam(CgsGui::HudMessageParamTypes, int32_t, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiEventTypeDefs.h:6964
		using namespace CgsDev::Message;

	}

	// BrnGuiEventTypeDefs.h:5647
	// Declaration
	void AddParam(CgsGui::HudMessageParamTypes, int32_t, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiEventTypeDefs.h:6997
		using namespace CgsDev::Message;

	}

	// BrnGuiEventTypeDefs.h:5654
	void GetParam(HudMessageParameter *, int32_t, int32_t) const;

	// BrnGuiEventTypeDefs.h:5659
	int32_t GetParamCount(int32_t) const;

}

// BrnGuiEventTypeDefs.h:5769
struct BrnGui::GuiOverlayFullInfoResponse : public GuiEvent<185> {
	// BrnGuiEventTypeDefs.h:5772
	extern const int32_t MKI_MAX_LENGTH_OF_STRING_ID = 32;

	// BrnGuiEventTypeDefs.h:5773
	extern const int32_t MKI_MAX_LENGTH_OF_FLASH_FRAME = 32;

	// BrnGuiEventTypeDefs.h:5774
	extern const int32_t MKI_MAX_PARAMS_IN_MESSAGE = 2;

	// BrnGuiEventTypeDefs.h:5777
	CgsID mNameId;

	// BrnGuiEventTypeDefs.h:5778
	char[13] macName;

	// BrnGuiEventTypeDefs.h:5781
	CgsGui::PopupStyle meStyle;

	// BrnGuiEventTypeDefs.h:5782
	CgsGui::PopupIcons meIcon;

	// BrnGuiEventTypeDefs.h:5785
	char[32] macTitleId;

	// BrnGuiEventTypeDefs.h:5788
	char[32] macMessageId;

	// BrnGuiEventTypeDefs.h:5789
	GuiPopupParameter[2] maMessageParams;

	// BrnGuiEventTypeDefs.h:5790
	int32_t miMessageParamsUsed;

	// BrnGuiEventTypeDefs.h:5793
	char[32] macButton1Id;

	// BrnGuiEventTypeDefs.h:5794
	GuiPopupParameter mButton1Param;

	// BrnGuiEventTypeDefs.h:5795
	bool mbButon1ParamUsed;

	// BrnGuiEventTypeDefs.h:5798
	char[32] macButton2Id;

	// BrnGuiEventTypeDefs.h:5799
	GuiPopupParameter mButton2Param;

	// BrnGuiEventTypeDefs.h:5800
	bool mbButon2ParamUsed;

}

// BrnGuiEventTypeDefs.h:6330
struct BrnGui::GuiNewBurnoutSkillzEvent : public GuiEvent<526> {
	// BrnGuiEventTypeDefs.h:6333
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnGuiEventTypeDefs.h:6334
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:6335
	BurnoutSkillzData mSkillzData;

	// BrnGuiEventTypeDefs.h:6336
	bool mbUpdateHUDMessage;

}

// BrnGuiEventTypeDefs.h:6376
struct BrnGui::GuiShowtimeScoreUpdate : public GuiEvent<391> {
	// BrnGuiEventTypeDefs.h:6378
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnGuiEventTypeDefs.h:6379
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:6380
	int32_t miShowtimeScore;

}

// BrnGuiEventTypeDefs.h:6562
struct BrnGui::GuiChallengeStartEvent : public GuiEvent<559> {
	// BrnGuiEventTypeDefs.h:6564
	CgsID mChallengeID;

	// BrnGuiEventTypeDefs.h:6565
	bool mbIsLocalHost;

}

// BrnGuiEventTypeDefs.h:6576
struct BrnGui::GuiEventFburnChallengeEveryPlayerStatus : public GuiEvent<566> {
	// BrnGuiEventTypeDefs.h:6578
	FburnChallengeEveryPlayerStatusData mStatus;

}

// BrnGuiEventTypeDefs.h:6584
struct BrnGui::GuiChallengeTriggerResponse : public GuiEvent<561> {
	// BrnGuiEventTypeDefs.h:6586
	CgsID mChallengeID;

	// BrnGuiEventTypeDefs.h:6587
	bool mbIsLocalHost;

}

// BrnGuiEventTypeDefs.h:6591
struct BrnGui::GuiChallengeUpdateEvent : public GuiEvent<562> {
	// BrnGuiEventTypeDefs.h:6594
	int32_t miCurrentActionIndex;

	// BrnGuiEventTypeDefs.h:6595
	int32_t miNumTargetsUsed;

	// BrnGuiEventTypeDefs.h:6596
	float32_t[2][8] maafIndividualTargetContributions;

	// BrnGuiEventTypeDefs.h:6597
	int32_t[2] maiOverallTargetRemaining;

	// BrnGuiEventTypeDefs.h:6598
	BrnGameState::GameStateModuleIO::EFreeburnChallengeSuccess[2][8] maaeCompleted;

public:
	// BrnGuiEventTypeDefs.h:6602
	void Clear();

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// BrnGuiEventTypeDefs.h:95
	using BrnNetwork::BrnNetworkModuleIO;

	// Declaration
	struct GuiEventChangeReplayState {
		// BrnGuiEventTypeDefs.h:861
		enum ReplayState {
			E_REPLAYSTATE_INVISIBLE = 0,
			E_REPLAYSTATE_PLAYING = 1,
			E_REPLAYSTATE_RECORDING = 2,
			E_REPLAYSTATE_COUNT = 3,
		}

	}

	// BrnGuiEventTypeDefs.h:883
	enum GuiFlow {
		E_GUIFLOW_SCREEN = 0,
		E_GUIFLOW_HUD = 1,
		E_GUIFLOW_OVERLAY = 2,
		E_GUIFLOW_COUNT = 3,
		E_GUIFLOW_FIRST = 0,
	}

	// BrnGuiEventTypeDefs.h:893
	enum EFinishType {
		E_FINISH_TYPE_1ST = 0,
		E_FINISH_TYPE_2ND = 1,
		E_FINISH_TYPE_3RD = 2,
		E_FINISH_TYPE_4TH = 3,
		E_FINISH_TYPE_5TH = 4,
		E_FINISH_TYPE_6TH = 5,
		E_FINISH_TYPE_7TH = 6,
		E_FINISH_TYPE_8TH = 7,
		E_FINISH_TYPE_TIMED_OUT = 8,
		E_FINISH_TYPE_WON = 9,
		E_FINISH_TYPE_LOST = 10,
		E_FINISH_TYPE_COUNT = 11,
	}

	// Declaration
	struct GuiEventSetRoadRuleScoreMode {
		// BrnGuiEventTypeDefs.h:1321
		enum ERoadPanelModes {
			E_ROAD_PANEL_MODE_OFFLINE = 0,
			E_ROAD_PANEL_MODE_ONLINE = 1,
			E_ROAD_PANEL_MODE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventPreRaceMessages {
		// BrnGuiEventTypeDefs.h:1579
		enum ERelationshipTypes {
			E_RELATIONSHIP_GOOD = 0,
			E_RELATIONSHIP_BAD = 1,
			E_RELATIONSHIP_NEUTRAL = 2,
			E_RELATIONSHIP_COUNT = 3,
		}

		// BrnGuiEventTypeDefs.h:1590
		struct MessageInfo {
			// BrnGuiEventTypeDefs.h:1592
			extern const int32_t KI_NUM_MESSAGE_STRINGS = 3;

			// BrnGuiEventTypeDefs.h:1593
			extern const int32_t KI_MAX_LENGTH_STRING_ID = 128;

			// BrnGuiEventTypeDefs.h:1595
			extern const int32_t KI_NUM_PARAMETERS = 1;

			// BrnGuiEventTypeDefs.h:1596
			extern const int32_t KI_MAX_LENGTH_PARAMETERS = 20;

			// BrnGuiEventTypeDefs.h:1600
			char[3][128] maacMessageIDs;

			// BrnGuiEventTypeDefs.h:1602
			int32_t miNumMsgIDs;

			// BrnGuiEventTypeDefs.h:1603
			char[3][20] maacMessageParameters;

			// BrnGuiEventTypeDefs.h:1605
			int32_t[3] maiNumParams;

			// BrnGuiEventTypeDefs.h:1608
			char[128] macGamerName;

			// BrnGuiEventTypeDefs.h:1610
			BrnGui::GuiEventPreRaceMessages::ERelationshipTypes meRelationshipType;

		}

	}

	// Declaration
	struct GuiEventUpdateSatNav {
		// BrnGuiEventTypeDefs.h:1675
		struct SatNavIconInfo {
			// BrnGuiEventTypeDefs.h:1678
			enum SatNavIconType {
				E_SATNAVICON_PLAYER_CAR = 0,
				E_SATNAVICON_MARKED_MAN = 1,
				E_SATNAVICON_NETWORKRIVAL = 2,
				E_SATNAVICON_RIVAL = 3,
				E_SATNAVICON_LANDMARK = 4,
				E_SATNAVICON_JUNCTION = 5,
				E_SATNAVICON_FREEBURN_CHALLENGE = 6,
				E_SATNAVICON_JUNKYARD = 7,
				E_SATNAVICON_CAR_PARK = 8,
				E_SATNAVICON_BODYSHOP = 9,
				E_SATNAVICON_GAS_STATION = 10,
				E_SATNAVICON_PAINT_SHOP = 11,
				E_SATNAVICON_TIRE_SHOP = 12,
				E_SATNAVICON_ROADSIGN = 13,
				E_SATNAVICON_MAX = 14,
			}

			// BrnGuiEventTypeDefs.h:1699
			Vector3 mv3Position;

			// BrnGuiEventTypeDefs.h:1700
			CgsID mCgsId;

			// BrnGuiEventTypeDefs.h:1702
			float32_t mfRotation;

			// BrnGuiEventTypeDefs.h:1703
			float32_t mfSpeedMph;

			// BrnGuiEventTypeDefs.h:1705
			LandmarkIndex mLandmarkIndex;

			// BrnGuiEventTypeDefs.h:1706
			uint8_t mu8DesignIndex;

			// BrnGuiEventTypeDefs.h:1707
			bool mbIsHiddenDriveThru;

		private:
			// BrnGuiEventTypeDefs.h:1736
			uint8_t mu8County;

			// BrnGuiEventTypeDefs.h:1737
			uint8_t mu8District;

			// BrnGuiEventTypeDefs.h:1738
			int8_t mi8ActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:1739
			int8_t mi8IconType;

		public:
			// BrnGuiEventTypeDefs.h:1710
			void SetCounty(BrnWorld::ECounty);

			// BrnGuiEventTypeDefs.h:1713
			BrnWorld::ECounty GetCounty() const;

			// BrnGuiEventTypeDefs.h:1716
			void SetDistrict(BrnWorld::EDistrict);

			// BrnGuiEventTypeDefs.h:1719
			BrnWorld::EDistrict GetDistrict() const;

			// BrnGuiEventTypeDefs.h:1722
			void SetActiveRaceCarIndex(EActiveRaceCarIndex);

			// BrnGuiEventTypeDefs.h:1725
			EActiveRaceCarIndex GetActiveRaceCarIndex() const;

			// BrnGuiEventTypeDefs.h:1728
			void SetIconType(BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType);

			// BrnGuiEventTypeDefs.h:1731
			BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType GetIconType() const;

		}

	}

	// Declaration
	struct GuiEventOnlinePostEvent {
		// BrnGuiEventTypeDefs.h:2276
		struct OnlinePlayer {
			// BrnGuiEventTypeDefs.h:2278
			EActiveRaceCarIndex meActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2279
			float32_t mfFinishingTime;

			// BrnGuiEventTypeDefs.h:2280
			Time mFinishingTime;

			// BrnGuiEventTypeDefs.h:2281
			float32_t mfDistanceFromFinish;

			// BrnGuiEventTypeDefs.h:2282
			int32_t miPointsFromThisRound;

			// BrnGuiEventTypeDefs.h:2283
			int32_t miResultsTablePosition;

			// BrnGuiEventTypeDefs.h:2284
			int32_t miTotalPoints;

			// BrnGuiEventTypeDefs.h:2285
			int32_t miEliminations;

			// BrnGuiEventTypeDefs.h:2286
			int32_t miLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2287
			int32_t miLandmarksNotVisited;

			// BrnGuiEventTypeDefs.h:2288
			int32_t miCumulativeLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2289
			bool mbHasTimedOut;

			// BrnGuiEventTypeDefs.h:2290
			bool mbHasDisconnected;

			// BrnGuiEventTypeDefs.h:2291
			bool mbWasEliminated;

		}

		// BrnGuiEventTypeDefs.h:2296
		struct OnlineAward {
			// BrnGuiEventTypeDefs.h:2298
			BrnGameState::EOnlineAwardID meOnlineAwardID;

			// BrnGuiEventTypeDefs.h:2299
			EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2300
			int32_t miAwardVariable;

		}

	}

	// Declaration
	struct GuiEventOfflinePostEvent {
		// BrnGuiEventTypeDefs.h:2380
		struct OfflinePostEventData {
			// BrnGuiEventTypeDefs.h:2382
			GuiEventStopMode::EGameModeType meFinishedGameModeType;

			// BrnGuiEventTypeDefs.h:2383
			CgsID mBeatenRival;

			// BrnGuiEventTypeDefs.h:2384
			int32_t miModeScore;

			// BrnGuiEventTypeDefs.h:2385
			float32_t mfTime;

			// BrnGuiEventTypeDefs.h:2386
			int8_t miPlayerFinishPosition;

			// BrnGuiEventTypeDefs.h:2387
			bool mbCrashedOut;

			// BrnGuiEventTypeDefs.h:2388
			bool mbTimedOut;

			// BrnGuiEventTypeDefs.h:2389
			bool mbEliminated;

			// BrnGuiEventTypeDefs.h:2390
			bool mbCountsTowardsProgression;

			// BrnGuiEventTypeDefs.h:2393
			int32_t miBaseScore;

			// BrnGuiEventTypeDefs.h:2394
			int32_t miScoreMultiplier;

			// BrnGuiEventTypeDefs.h:2395
			float32_t mfDistanceTravelled;

			// BrnGuiEventTypeDefs.h:2397
			DerivedCarArray maCarsToUnlockFromSpecialEvent;

			// BrnGuiEventTypeDefs.h:2401
			bool mbHasRankedUp;

			// BrnGuiEventTypeDefs.h:2402
			int32_t miPlayerOldRank;

			// BrnGuiEventTypeDefs.h:2403
			int32_t miPlayerNewRank;

			// BrnGuiEventTypeDefs.h:2404
			int32_t miCarsRevealed;

			// BrnGuiEventTypeDefs.h:2405
			int32_t miEventsUnlocked;

			// BrnGuiEventTypeDefs.h:2406
			bool mbCompletedLastRank;

			// BrnGuiEventTypeDefs.h:2409
			CgsID mNewlyUnlockedRivalID;

			// BrnGuiEventTypeDefs.h:2411
			bool mbHasUnlockedFreeCar;

			// BrnGuiEventTypeDefs.h:2412
			CgsID mNewlyUnlockedFreeCarID;

		}

	}

	// Declaration
	struct CalculateRoute {
		// BrnGuiEventTypeDefs.h:2612
		enum ERouteEndPointType {
			E_ROUTE_END_POINT_TYPE_LANDMARK = 0,
			E_ROUTE_END_POINT_TYPE_JUNCTION = 1,
			E_ROUTE_END_POINT_TYPE_PLAYERPOS = 2,
			E_ROUTE_END_POINT_TYPE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventDrawEventIcons {
		// BrnGuiEventTypeDefs.h:2662
		enum EIconDisplayType {
			E_ICON_DISPLAY_TYPE_OFFLINE_EVENTS = 0,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_STARTS = 1,
			E_ICON_DISPLAY_TYPE_ONLINE_CHECKPOINTS = 2,
			E_ICON_DISPLAY_TYPE_ONLINE_FINISH_POINTS = 3,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_PRESETS = 4,
			E_ICON_DISPLAY_TYPE_COUNT = 5,
		}

	}

	// Declaration
	struct GuiPlayerCrashingStateChangeEvent {
		// BrnGuiEventTypeDefs.h:3960
		enum CrashBarState {
			E_CRASHBARSTATE_INVALID = -1,
			E_CRASHBARSTATE_START_CRASHED = 0,
			E_CRASHBARSTATE_LEAVE_CRASHED = 1,
			E_CRASHBARSTATE_START_TAKEDOWN = 2,
			E_CRASHBARSTATE_LEAVE_TAKEDOWN = 3,
			E_CRASHBARSTATE_COUNT = 4,
		}

	}

	// Declaration
	struct GuiPlayerEngineEvent {
		// BrnGuiEventTypeDefs.h:3986
		enum EEngineState {
			E_ENGINE_OFF = 0,
			E_ENGINE_ON = 1,
			E_ENGINE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventAudioTraxPlayOrder {
		// BrnGuiEventTypeDefs.h:4068
		enum ETraxPlayOrderMode {
			E_TRAX_PLAY_ORDER_MODE_SEQUENTIAL = 0,
			E_TRAX_PLAY_ORDER_MODE_RANDOM = 1,
			E_TRAX_PLAY_ORDER_MODE_COUNT = 2,
		}

	}

	// BrnGuiEventTypeDefs.h:97
	const int32_t KI_MAX_GAMERTAG_LENGTH = 20;

	// BrnGuiEventTypeDefs.h:98
	const int32_t KI_MAX_AWARDS = 6;

	// BrnGuiEventTypeDefs.h:99
	const int32_t KI_MAX_PFXHOOK_NAMES = 100;

	// BrnGuiEventTypeDefs.h:100
	const int32_t KI_MAX_VISIBLE_SIGNS = 32;

	// BrnGuiEventTypeDefs.h:925
	const const char *[4] KAPC_INGAME_FSM_NAMES;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// BrnGuiEventTypeDefs.h:893
	enum EFinishType {
		E_FINISH_TYPE_1ST = 0,
		E_FINISH_TYPE_2ND = 1,
		E_FINISH_TYPE_3RD = 2,
		E_FINISH_TYPE_4TH = 3,
		E_FINISH_TYPE_5TH = 4,
		E_FINISH_TYPE_6TH = 5,
		E_FINISH_TYPE_7TH = 6,
		E_FINISH_TYPE_8TH = 7,
		E_FINISH_TYPE_TIMED_OUT = 8,
		E_FINISH_TYPE_WON = 9,
		E_FINISH_TYPE_LOST = 10,
		E_FINISH_TYPE_COUNT = 11,
	}

	// Declaration
	struct GuiEventDirtyTrickAvailable {
		// BrnGuiEventTypeDefs.h:1500
		enum EAvailable {
			E_AVAILABLE_TRUE = 0,
			E_AVAILABLE_FALSE = 1,
		}

	}

	// BrnGuiEventTypeDefs.h:97
	const int32_t KI_MAX_GAMERTAG_LENGTH = 20;

	// BrnGuiEventTypeDefs.h:98
	const int32_t KI_MAX_AWARDS = 6;

	// BrnGuiEventTypeDefs.h:99
	const int32_t KI_MAX_PFXHOOK_NAMES = 100;

	// BrnGuiEventTypeDefs.h:100
	const int32_t KI_MAX_VISIBLE_SIGNS = 32;

	// BrnGuiEventTypeDefs.h:925
	const const char *[4] KAPC_INGAME_FSM_NAMES;

}

// BrnGuiEventTypeDefs.h:1498
struct BrnGui::GuiEventDirtyTrickAvailable : public GuiEvent<174> {
	// BrnGuiEventTypeDefs.h:1506
	BrnGui::GuiEventDirtyTrickAvailable::EAvailable meAvailable;

}

// BrnGuiEventTypeDefs.h:2204
struct BrnGui::GuiEventUpdateDirtyTrickCountdown : public GuiEvent<232> {
	// BrnGuiEventTypeDefs.h:2206
	float_t mrSecsRemaining;

}

// BrnGuiEventTypeDefs.h:4506
struct BrnGui::GuiShowtimeBouncePrompt : public GuiEvent<393> {
	// BrnGuiEventTypeDefs.h:4508
	bool mbPromptNeeded;

}

// BrnGuiEventTypeDefs.h:6391
struct BrnGui::GuiShowtimeModeSwitch : public GuiEvent<392> {
	// BrnGuiEventTypeDefs.h:6393
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnGuiEventTypeDefs.h:6394
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:6395
	int32_t miFinalShowtimeScore;

	// BrnGuiEventTypeDefs.h:6396
	bool mbEnteringShowtime;

}

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

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// BrnGuiEventTypeDefs.h:103
	enum StuntType {
		E_STUNTTYPE_JUMP = 0,
		E_STUNTTYPE_SMASH = 1,
		E_STUNTTYPE_STUNT = 2,
		E_STUNTTYPE_COUNT = 3,
	}

	// BrnGuiEventTypeDefs.h:113
	enum RoadRuleLeaderType {
		E_ROADRULELEADERTYPE_AI = 0,
		E_ROADRULELEADERTYPE_PLAYER = 1,
		E_ROADRULELEADERTYPE_FRIEND = 2,
		E_ROADRULELEADERTYPE_COUNT = 3,
	}

	// Declaration
	struct GuiEventTickerCustomMessage {
		// BrnGuiEventTypeDefs.h:313
		enum EStringType {
			E_STRINGTYPE_NONE = 0,
			E_STRINGTYPE_TEXT = 1,
			E_STRINGTYPE_STRINGID = 2,
			E_STRINGTYPE_NUM = 3,
		}

	}

	// Declaration
	struct GuiEventOnlineInviteEvent {
		// BrnGuiEventTypeDefs.h:588
		enum EInviteRequestedAction {
			E_INVITEACTION_SEND = 0,
			E_INVITEACTION_REVOKE = 1,
			E_INVITEACTION_ACCEPT = 2,
			E_INVITEACTION_DECLINE = 3,
			E_INVITEACTION_JOIN = 4,
			E_INVITEACTION_SIGN_IN = 5,
			E_INVITEACTION_INSTANT_FREEBURN = 6,
			E_INVITEACTION_COUNT = 7,
		}

	}

	// Declaration
	struct GuiEventChangeReplayState {
		// BrnGuiEventTypeDefs.h:861
		enum ReplayState {
			E_REPLAYSTATE_INVISIBLE = 0,
			E_REPLAYSTATE_PLAYING = 1,
			E_REPLAYSTATE_RECORDING = 2,
			E_REPLAYSTATE_COUNT = 3,
		}

	}

	// BrnGuiEventTypeDefs.h:883
	enum GuiFlow {
		E_GUIFLOW_SCREEN = 0,
		E_GUIFLOW_HUD = 1,
		E_GUIFLOW_OVERLAY = 2,
		E_GUIFLOW_COUNT = 3,
		E_GUIFLOW_FIRST = 0,
	}

	// BrnGuiEventTypeDefs.h:893
	enum EFinishType {
		E_FINISH_TYPE_1ST = 0,
		E_FINISH_TYPE_2ND = 1,
		E_FINISH_TYPE_3RD = 2,
		E_FINISH_TYPE_4TH = 3,
		E_FINISH_TYPE_5TH = 4,
		E_FINISH_TYPE_6TH = 5,
		E_FINISH_TYPE_7TH = 6,
		E_FINISH_TYPE_8TH = 7,
		E_FINISH_TYPE_TIMED_OUT = 8,
		E_FINISH_TYPE_WON = 9,
		E_FINISH_TYPE_LOST = 10,
		E_FINISH_TYPE_COUNT = 11,
	}

	// BrnGuiEventTypeDefs.h:912
	enum EHUDFSMs {
		E_GUI_HUD_INVALID = -1,
		E_GUI_HUD_BOOT = 0,
		E_GUI_HUD_FREEBURN = 1,
		E_GUI_HUD_EVENT = 2,
		E_GUI_HUD_ONLINE = 3,
		E_GUI_HUD_NUMSFSMS = 4,
	}

	// Declaration
	struct GuiEventActivateCrashNav {
		// BrnGuiEventTypeDefs.h:970
		enum ActivateDeactivate {
			E_ACTIVATE = 0,
			E_DEACTIVATE = 1,
		}

		// BrnGuiEventTypeDefs.h:976
		enum CrashNavType {
			E_CRASHNAV_MAIN = 0,
			E_CRASHNAV_EVENT = 1,
			E_CRASHNAV_NO_TITLE_SIGNIN = 2,
			E_CRASHNAV_TYPE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventRoadRuleData {
		// BrnGuiEventTypeDefs.h:1137
		struct RoadRuleType {
			// BrnGuiEventTypeDefs.h:1144
			int32_t[3] maiScores;

			// BrnGuiEventTypeDefs.h:1145
			PlayerName mFriendName;

			// BrnGuiEventTypeDefs.h:1146
			CgsID mRivalId;

		public:
			// BrnGuiEventTypeDefs.h:1142
			void Construct();

		}

	}

	// Declaration
	struct GuiEventRoadRuleUpcomingRoads {
		// BrnGuiEventTypeDefs.h:1218
		enum ERoadSide {
			E_ROAD_LEFT = 0,
			E_ROAD_RIGHT = 1,
			E_ROAD_COUNT = 2,
		}

		// BrnGuiEventTypeDefs.h:1226
		enum ERoadState {
			E_ROADSTATE_NORMAL = 0,
			E_ROADSTATE_SUGGESTED = 1,
			E_ROADSTATE_WRONG = 2,
			E_ROADSTATE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventSetRoadRuleScoreMode {
		// BrnGuiEventTypeDefs.h:1321
		enum ERoadPanelModes {
			E_ROAD_PANEL_MODE_OFFLINE = 0,
			E_ROAD_PANEL_MODE_ONLINE = 1,
			E_ROAD_PANEL_MODE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventEnterEventStartLocation {
		// BrnGuiEventTypeDefs.h:1378
		enum EEnterLeave {
			E_ENTERLEAVE_ENTER = 0,
			E_ENTERLEAVE_LEAVE = 1,
		}

	}

	// Declaration
	struct GuiEventPreRaceMessages {
		// BrnGuiEventTypeDefs.h:1579
		enum ERelationshipTypes {
			E_RELATIONSHIP_GOOD = 0,
			E_RELATIONSHIP_BAD = 1,
			E_RELATIONSHIP_NEUTRAL = 2,
			E_RELATIONSHIP_COUNT = 3,
		}

		// BrnGuiEventTypeDefs.h:1590
		struct MessageInfo {
			// BrnGuiEventTypeDefs.h:1592
			extern const int32_t KI_NUM_MESSAGE_STRINGS = 3;

			// BrnGuiEventTypeDefs.h:1593
			extern const int32_t KI_MAX_LENGTH_STRING_ID = 128;

			// BrnGuiEventTypeDefs.h:1595
			extern const int32_t KI_NUM_PARAMETERS = 1;

			// BrnGuiEventTypeDefs.h:1596
			extern const int32_t KI_MAX_LENGTH_PARAMETERS = 20;

			// BrnGuiEventTypeDefs.h:1600
			char[3][128] maacMessageIDs;

			// BrnGuiEventTypeDefs.h:1602
			int32_t miNumMsgIDs;

			// BrnGuiEventTypeDefs.h:1603
			char[3][20] maacMessageParameters;

			// BrnGuiEventTypeDefs.h:1605
			int32_t[3] maiNumParams;

			// BrnGuiEventTypeDefs.h:1608
			char[128] macGamerName;

			// BrnGuiEventTypeDefs.h:1610
			BrnGui::GuiEventPreRaceMessages::ERelationshipTypes meRelationshipType;

		}

	}

	// Declaration
	struct GuiEventUpdateSatNav {
		// BrnGuiEventTypeDefs.h:1675
		struct SatNavIconInfo {
			// BrnGuiEventTypeDefs.h:1678
			enum SatNavIconType {
				E_SATNAVICON_PLAYER_CAR = 0,
				E_SATNAVICON_MARKED_MAN = 1,
				E_SATNAVICON_NETWORKRIVAL = 2,
				E_SATNAVICON_RIVAL = 3,
				E_SATNAVICON_LANDMARK = 4,
				E_SATNAVICON_JUNCTION = 5,
				E_SATNAVICON_FREEBURN_CHALLENGE = 6,
				E_SATNAVICON_JUNKYARD = 7,
				E_SATNAVICON_CAR_PARK = 8,
				E_SATNAVICON_BODYSHOP = 9,
				E_SATNAVICON_GAS_STATION = 10,
				E_SATNAVICON_PAINT_SHOP = 11,
				E_SATNAVICON_TIRE_SHOP = 12,
				E_SATNAVICON_ROADSIGN = 13,
				E_SATNAVICON_MAX = 14,
			}

			// BrnGuiEventTypeDefs.h:1699
			Vector3 mv3Position;

			// BrnGuiEventTypeDefs.h:1700
			CgsID mCgsId;

			// BrnGuiEventTypeDefs.h:1702
			float32_t mfRotation;

			// BrnGuiEventTypeDefs.h:1703
			float32_t mfSpeedMph;

			// BrnGuiEventTypeDefs.h:1705
			LandmarkIndex mLandmarkIndex;

			// BrnGuiEventTypeDefs.h:1706
			uint8_t mu8DesignIndex;

			// BrnGuiEventTypeDefs.h:1707
			bool mbIsHiddenDriveThru;

		private:
			// BrnGuiEventTypeDefs.h:1736
			uint8_t mu8County;

			// BrnGuiEventTypeDefs.h:1737
			uint8_t mu8District;

			// BrnGuiEventTypeDefs.h:1738
			int8_t mi8ActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:1739
			int8_t mi8IconType;

		public:
			// BrnGuiEventTypeDefs.h:1710
			void SetCounty(BrnWorld::ECounty);

			// BrnGuiEventTypeDefs.h:1713
			BrnWorld::ECounty GetCounty() const;

			// BrnGuiEventTypeDefs.h:1716
			void SetDistrict(BrnWorld::EDistrict);

			// BrnGuiEventTypeDefs.h:1719
			BrnWorld::EDistrict GetDistrict() const;

			// BrnGuiEventTypeDefs.h:1722
			void SetActiveRaceCarIndex(EActiveRaceCarIndex);

			// BrnGuiEventTypeDefs.h:1725
			EActiveRaceCarIndex GetActiveRaceCarIndex() const;

			// BrnGuiEventTypeDefs.h:1728
			void SetIconType(BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType);

			// BrnGuiEventTypeDefs.h:1731
			BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType GetIconType() const;

		}

	}

	// Declaration
	struct GuiEventUpdateEventCountdown {
		// BrnGuiEventTypeDefs.h:2183
		enum ECountdownProgress {
			E_GUI_EVENT_COUNTDOWN_ZERO = 0,
			E_GUI_EVENT_COUNTDOWN_ONE = 1,
			E_GUI_EVENT_COUNTDOWN_TWO = 2,
			E_GUI_EVENT_COUNTDOWN_THREE = 3,
			E_GUI_EVENT_COUNTDOWN_FOUR = 4,
			E_GUI_EVENT_COUNTDOWN_FIVE = 5,
			E_GUI_EVENT_COUNTDOWN_SIX = 6,
			E_GUI_EVENT_COUNTDOWN_SEVEN = 7,
			E_GUI_EVENT_COUNTDOWN_EIGHT = 8,
			E_GUI_EVENT_COUNTDOWN_NINE = 9,
		}

	}

	// Declaration
	struct GuiEventOnlinePostEvent {
		// BrnGuiEventTypeDefs.h:2276
		struct OnlinePlayer {
			// BrnGuiEventTypeDefs.h:2278
			EActiveRaceCarIndex meActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2279
			float32_t mfFinishingTime;

			// BrnGuiEventTypeDefs.h:2280
			Time mFinishingTime;

			// BrnGuiEventTypeDefs.h:2281
			float32_t mfDistanceFromFinish;

			// BrnGuiEventTypeDefs.h:2282
			int32_t miPointsFromThisRound;

			// BrnGuiEventTypeDefs.h:2283
			int32_t miResultsTablePosition;

			// BrnGuiEventTypeDefs.h:2284
			int32_t miTotalPoints;

			// BrnGuiEventTypeDefs.h:2285
			int32_t miEliminations;

			// BrnGuiEventTypeDefs.h:2286
			int32_t miLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2287
			int32_t miLandmarksNotVisited;

			// BrnGuiEventTypeDefs.h:2288
			int32_t miCumulativeLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2289
			bool mbHasTimedOut;

			// BrnGuiEventTypeDefs.h:2290
			bool mbHasDisconnected;

			// BrnGuiEventTypeDefs.h:2291
			bool mbWasEliminated;

		}

		// BrnGuiEventTypeDefs.h:2296
		struct OnlineAward {
			// BrnGuiEventTypeDefs.h:2298
			BrnGameState::EOnlineAwardID meOnlineAwardID;

			// BrnGuiEventTypeDefs.h:2299
			EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2300
			int32_t miAwardVariable;

		}

	}

	// Declaration
	struct GuiEventOnlinePostEventScalps {
		// BrnGuiEventTypeDefs.h:2357
		struct OnlineScalp {
			// BrnGuiEventTypeDefs.h:2359
			EActiveRaceCarIndex meAggressorActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2360
			EActiveRaceCarIndex meVictimActiveRaceCarIndex;

		}

	}

	// Declaration
	struct GuiEventOfflinePostEvent {
		// BrnGuiEventTypeDefs.h:2380
		struct OfflinePostEventData {
			// BrnGuiEventTypeDefs.h:2382
			GuiEventStopMode::EGameModeType meFinishedGameModeType;

			// BrnGuiEventTypeDefs.h:2383
			CgsID mBeatenRival;

			// BrnGuiEventTypeDefs.h:2384
			int32_t miModeScore;

			// BrnGuiEventTypeDefs.h:2385
			float32_t mfTime;

			// BrnGuiEventTypeDefs.h:2386
			int8_t miPlayerFinishPosition;

			// BrnGuiEventTypeDefs.h:2387
			bool mbCrashedOut;

			// BrnGuiEventTypeDefs.h:2388
			bool mbTimedOut;

			// BrnGuiEventTypeDefs.h:2389
			bool mbEliminated;

			// BrnGuiEventTypeDefs.h:2390
			bool mbCountsTowardsProgression;

			// BrnGuiEventTypeDefs.h:2393
			int32_t miBaseScore;

			// BrnGuiEventTypeDefs.h:2394
			int32_t miScoreMultiplier;

			// BrnGuiEventTypeDefs.h:2395
			float32_t mfDistanceTravelled;

			// BrnGuiEventTypeDefs.h:2397
			DerivedCarArray maCarsToUnlockFromSpecialEvent;

			// BrnGuiEventTypeDefs.h:2401
			bool mbHasRankedUp;

			// BrnGuiEventTypeDefs.h:2402
			int32_t miPlayerOldRank;

			// BrnGuiEventTypeDefs.h:2403
			int32_t miPlayerNewRank;

			// BrnGuiEventTypeDefs.h:2404
			int32_t miCarsRevealed;

			// BrnGuiEventTypeDefs.h:2405
			int32_t miEventsUnlocked;

			// BrnGuiEventTypeDefs.h:2406
			bool mbCompletedLastRank;

			// BrnGuiEventTypeDefs.h:2409
			CgsID mNewlyUnlockedRivalID;

			// BrnGuiEventTypeDefs.h:2411
			bool mbHasUnlockedFreeCar;

			// BrnGuiEventTypeDefs.h:2412
			CgsID mNewlyUnlockedFreeCarID;

		}

	}

	// Declaration
	struct GuiEventRequestCollisionWorldEvent {
		// BrnGuiEventTypeDefs.h:2584
		enum EEventType {
			E_COLLISON_WORLD_INVALIDATE = 0,
			E_COLLISON_WORLD_VALIDATE = 1,
			E_COLLISON_WORLD_INVALIDATED = 2,
			E_COLLISON_WORLD_VALIDATED = 3,
			E_COLLISON_WORLD_COUNT = 4,
		}

	}

	// Declaration
	struct CalculateRoute {
		// BrnGuiEventTypeDefs.h:2612
		enum ERouteEndPointType {
			E_ROUTE_END_POINT_TYPE_LANDMARK = 0,
			E_ROUTE_END_POINT_TYPE_JUNCTION = 1,
			E_ROUTE_END_POINT_TYPE_PLAYERPOS = 2,
			E_ROUTE_END_POINT_TYPE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventDrawEventIcons {
		// BrnGuiEventTypeDefs.h:2662
		enum EIconDisplayType {
			E_ICON_DISPLAY_TYPE_OFFLINE_EVENTS = 0,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_STARTS = 1,
			E_ICON_DISPLAY_TYPE_ONLINE_CHECKPOINTS = 2,
			E_ICON_DISPLAY_TYPE_ONLINE_FINISH_POINTS = 3,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_PRESETS = 4,
			E_ICON_DISPLAY_TYPE_COUNT = 5,
		}

	}

	// Declaration
	struct GuiEventNetworkPlayerList {
		// BrnGuiEventTypeDefs.h:3039
		struct PlayerNameInfo {
			// BrnGuiEventTypeDefs.h:3041
			RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

			// BrnGuiEventTypeDefs.h:3042
			PlayerName mPlayerName;

		}

	}

	// Declaration
	struct GuiEventNetworkOutputPlayerTexture {
		// BrnGuiEventTypeDefs.h:3320
		enum EOutput {
			E_OUTPUT_OFF = 0,
			E_OUTPUT_PLAYER_IMAGE = 1,
			E_OUTPUT_SCALP_IMAGE = 2,
			E_OUTPUT_WINNER_IMAGE = 3,
			E_OUTPUT_GAMERPIC = 4,
			E_OUTPUT_GAMERPIC_LICENCE = 5,
			E_OUTPUT_NUM = 6,
		}

	}

	// Declaration
	struct GuiDriveThroughEvent {
		// BrnGuiEventTypeDefs.h:3665
		enum DriveThroughType {
			E_DRIVE_THROUGH_TYPE_CAR_WASH = 0,
			E_DRIVE_THROUGH_TYPE_BODY_SHOP = 1,
			E_DRIVE_THROUGH_TYPE_PAINT_SHOP = 2,
			E_DRIVE_THROUGH_TYPE_GAS_STATION = 3,
			E_DRIVE_THROUGH_TYPE_AUTO_PARTS = 4,
			E_DRIVE_THROUGH_TYPE_FAILED = 5,
			E_DRIVE_THROUGH_TYPE_COUNT = 6,
		}

	}

	// Declaration
	struct GuiPlayerCrashingStateChangeEvent {
		// BrnGuiEventTypeDefs.h:3960
		enum CrashBarState {
			E_CRASHBARSTATE_INVALID = -1,
			E_CRASHBARSTATE_START_CRASHED = 0,
			E_CRASHBARSTATE_LEAVE_CRASHED = 1,
			E_CRASHBARSTATE_START_TAKEDOWN = 2,
			E_CRASHBARSTATE_LEAVE_TAKEDOWN = 3,
			E_CRASHBARSTATE_COUNT = 4,
		}

	}

	// Declaration
	struct GuiPlayerEngineEvent {
		// BrnGuiEventTypeDefs.h:3986
		enum EEngineState {
			E_ENGINE_OFF = 0,
			E_ENGINE_ON = 1,
			E_ENGINE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventAudioTraxPlayOrder {
		// BrnGuiEventTypeDefs.h:4068
		enum ETraxPlayOrderMode {
			E_TRAX_PLAY_ORDER_MODE_SEQUENTIAL = 0,
			E_TRAX_PLAY_ORDER_MODE_RANDOM = 1,
			E_TRAX_PLAY_ORDER_MODE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiRivalryStatusChange {
		// BrnGuiEventTypeDefs.h:5115
		enum ERivalryLevels {
			E_RIVAL_LEVEL_NEW = 0,
			E_RIVAL_LEVEL_RIVAL = 1,
			E_RIVAL_LEVEL_TARGET = 2,
			E_RIVAL_LEVEL_WRECKED = 3,
			E_RIVAL_LEVEL_COUNT = 4,
		}

	}

	// Declaration
	struct GuiEventNetworkSplashEvent {
		// BrnGuiEventTypeDefs.h:5462
		enum ESplashState {
			E_SPLASH_STATE_SHOW = 0,
			E_SPLASH_STATE_STOP = 1,
			E_SPLASH_STATE_FINISHED = 2,
			E_SPLASH_STATE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiOverlayCompleteEvent {
		// BrnGuiEventTypeDefs.h:5837
		enum LeaveMethod {
			E_LEAVEMETHOD_NONE = 0,
			E_LEAVEMETHOD_OK = 1,
			E_LEAVEMETHOD_CANCEL = 2,
			E_LEAVEMETHOD_COUNT = 3,
		}

	}

	// Declaration
	struct GuiNewBurnoutHudMessageEvent {
		// BrnGuiEventTypeDefs.h:6351
		enum EBurnoutSkillzMessageTypes {
			E_BURNOUT_SKILLZ_MESSAGE_TYPE_X_BEAT_YS = 0,
			E_BURNOUT_SKILLZ_MESSAGE_TYPE_X_BEAT_YOUR = 1,
			E_BURNOUT_SKILLZ_MESSAGE_TYPE_X_GOT = 2,
			E_BURNOUT_SKILLZ_MESSAGE_TYPE_YOU_GOT = 3,
			E_BURNOUT_SKILLZ_MESSAGE_TYPE_COUNT = 4,
		}

	}

	// Declaration
	struct GuiChallengeSelectedEvent {
		// BrnGuiEventTypeDefs.h:6542
		enum EFreeburnChallengeAction {
			E_ACTION_CHOSEN = 0,
			E_ACTION_CANCELED = 1,
			E_ACTION_SHOWN = 2,
			E_ACTION_HIDDEN = 3,
		}

	}

	// BrnGuiEventTypeDefs.h:97
	const int32_t KI_MAX_GAMERTAG_LENGTH = 20;

	// BrnGuiEventTypeDefs.h:98
	const int32_t KI_MAX_AWARDS = 6;

	// BrnGuiEventTypeDefs.h:99
	const int32_t KI_MAX_PFXHOOK_NAMES = 100;

	// BrnGuiEventTypeDefs.h:100
	const int32_t KI_MAX_VISIBLE_SIGNS = 32;

	// BrnGuiEventTypeDefs.h:925
	const const char *[4] KAPC_INGAME_FSM_NAMES;

}

// BrnGuiEventTypeDefs.h:234
struct BrnGui::GuiEventTrafficPoolEmptied : public GuiEvent<502> {
	// BrnGuiEventTypeDefs.h:236
	bool mbTrafficPoolEmpty;

}

// BrnGuiEventTypeDefs.h:248
struct BrnGui::GuiEventPrepareForModeStart : public GuiEvent<94> {
	// BrnGuiEventTypeDefs.h:250
	int32_t miCurrentRound;

	// BrnGuiEventTypeDefs.h:251
	BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

	// BrnGuiEventTypeDefs.h:252
	uint32_t muEventID;

	// BrnGuiEventTypeDefs.h:253
	uint32_t muJunctionID;

	// BrnGuiEventTypeDefs.h:254
	bool mbIsOnline;

	// BrnGuiEventTypeDefs.h:255
	bool mbIsMovingBetweenOnlineLobbyModes;

	// BrnGuiEventTypeDefs.h:256
	int8_t miOpponentsInEvent;

	// BrnGuiEventTypeDefs.h:257
	int8_t miTargetForEvent;

	// BrnGuiEventTypeDefs.h:258
	LandmarkIndex[16] miLandmarkIndices;

	// BrnGuiEventTypeDefs.h:259
	BrnWorld::EDistrict[16] meDistricts;

	// BrnGuiEventTypeDefs.h:260
	uint8_t muCheckpointsInEvent;

	// BrnGuiEventTypeDefs.h:262
	float32_t mfNeedForBronze;

	// BrnGuiEventTypeDefs.h:263
	float32_t mfNeedForSilver;

	// BrnGuiEventTypeDefs.h:264
	float32_t mfNeedForGold;

	// BrnGuiEventTypeDefs.h:265
	float32_t mfModeTimeLimit;

	// BrnGuiEventTypeDefs.h:267
	int32_t miPursuitRivalTotalDamage;

	// BrnGuiEventTypeDefs.h:268
	CgsID mPursuedCarID;

	// BrnGuiEventTypeDefs.h:270
	uint8_t muDifficultyLevel;

}

// BrnGuiEventTypeDefs.h:299
struct BrnGui::GuiEventTickerClearMessages : public GuiEvent<521> {
	// BrnGuiEventTypeDefs.h:301
	bool mbForceFadeOut;

	// BrnGuiEventTypeDefs.h:302
	bool mbDeleteChallengeMessages;

}

// BrnGuiEventTypeDefs.h:307
struct BrnGui::GuiEventTickerCustomMessage : public GuiEvent<522> {
	// BrnGuiEventTypeDefs.h:310
	extern const int32_t KI_MAX_NUM_STRINGS = 4;

	// BrnGuiEventTypeDefs.h:311
	extern const int32_t KI_MAX_CUSTOMMESSAGE_LENGTH = 256;

private:
	// BrnGuiEventTypeDefs.h:356
	char[4][256] macMessageStrings;

	// BrnGuiEventTypeDefs.h:357
	BrnGui::GuiEventTickerCustomMessage::EStringType[4] maeStringTypes;

	// BrnGuiEventTypeDefs.h:358
	int8_t mi8NumStrings;

	// BrnGuiEventTypeDefs.h:359
	bool mbLoopMessage;

	// BrnGuiEventTypeDefs.h:360
	bool mbTrainingMessage;

	// BrnGuiEventTypeDefs.h:361
	bool mbAllowDuplicates;

	// BrnGuiEventTypeDefs.h:362
	bool mbIsChallengeMessage;

public:
	// BrnGuiEventTypeDefs.h:327
	void Construct(bool, bool, bool, bool);

	// BrnGuiEventTypeDefs.h:332
	void AddString(const char *, BrnGui::GuiEventTickerCustomMessage::EStringType);

	// BrnGuiEventTypeDefs.h:335
	int8_t GetNumStrings() const;

	// BrnGuiEventTypeDefs.h:340
	const char * GetString(int32_t, BrnGui::GuiEventTickerCustomMessage::EStringType *) const;

	// BrnGuiEventTypeDefs.h:343
	bool GetLoopMessage() const;

	// BrnGuiEventTypeDefs.h:346
	bool GetTrainingMessage() const;

	// BrnGuiEventTypeDefs.h:349
	bool GetChallengeMessage() const;

	// BrnGuiEventTypeDefs.h:352
	bool GetAllowDuplicates() const;

}

// BrnGuiEventTypeDefs.h:454
struct BrnGui::GuiEventToggleChangeCarMessage : public GuiEvent<525> {
}

// BrnGuiEventTypeDefs.h:459
struct BrnGui::GuiEventCanSkipCrash : public GuiEvent<532> {
}

// BrnGuiEventTypeDefs.h:464
struct BrnGui::GuiEventTimeUp : public GuiEvent<535> {
	// BrnGuiEventTypeDefs.h:466
	bool mbIsPositive;

}

// BrnGuiEventTypeDefs.h:471
struct BrnGui::GuiEventCantPaintCar : public GuiEvent<536> {
}

// BrnGuiEventTypeDefs.h:477
struct BrnGui::GuiEventMustFixCarFirst : public GuiEvent<537> {
}

// BrnGuiEventTypeDefs.h:483
struct BrnGui::GuiEventSuperJumpFailed : public GuiEvent<534> {
}

// BrnGuiEventTypeDefs.h:489
struct BrnGui::GuiEventPlayerWrecked : public GuiEvent<533> {
}

// BrnGuiEventTypeDefs.h:494
struct BrnGui::GuiCarUnlockStartEvent : public GuiEvent<75> {
}

// BrnGuiEventTypeDefs.h:500
struct BrnGui::GuiCarUnlockNewCarEvent : public GuiEvent<73> {
	// BrnGuiEventTypeDefs.h:503
	CgsID mCarModelId;

}

// BrnGuiEventTypeDefs.h:509
struct BrnGui::GuiRequestCarUnlockEvent : public GuiEvent<78> {
	// BrnGuiEventTypeDefs.h:511
	CgsID mCarModelId;

}

// BrnGuiEventTypeDefs.h:520
struct BrnGui::GuiEnteredJunkyard : public GuiEvent<79> {
	// BrnGuiEventTypeDefs.h:522
	bool mbIsInJunkyard;

}

// BrnGuiEventTypeDefs.h:528
struct BrnGui::GuiCarSelectStartEvent : public GuiEvent<81> {
	// BrnGuiEventTypeDefs.h:531
	BrnGameState::GameStateModuleIO::ECarSelectType meCarSelectType;

}

// BrnGuiEventTypeDefs.h:539
struct BrnGui::GuiCarSelectAbortEvent : public GuiEvent<84> {
	// BrnGuiEventTypeDefs.h:541
	bool mbToOnlineEvent;

}

// BrnGuiEventTypeDefs.h:545
struct BrnGui::GuiCarSelectOnlineTimeLeftEvent : public GuiEvent<82> {
	// BrnGuiEventTypeDefs.h:548
	float32_t mfTimeLeft;

}

// BrnGuiEventTypeDefs.h:556
struct BrnGui::GuiEventFriendListShowing : public GuiEvent<95> {
	// BrnGuiEventTypeDefs.h:558
	bool mbNowShowing;

}

// BrnGuiEventTypeDefs.h:564
struct BrnGui::GuiSetEasyDriveNotAllowedEvent : public GuiEvent<97> {
	// BrnGuiEventTypeDefs.h:566
	bool mbAllowed;

}

// BrnGuiEventTypeDefs.h:578
struct BrnGui::GuiEventOnlineShowProfile : public GuiEvent<100> {
	// BrnGuiEventTypeDefs.h:580
	PlayerName mFriendToView;

}

// BrnGuiEventTypeDefs.h:586
struct BrnGui::GuiEventOnlineInviteEvent : public GuiEvent<101> {
	// BrnGuiEventTypeDefs.h:601
	BrnGui::GuiEventOnlineInviteEvent::EInviteRequestedAction meRequestedAction;

	// BrnGuiEventTypeDefs.h:602
	PlayerName mFriendToAddress;

	// BrnGuiEventTypeDefs.h:603
	bool mbHasOnlineGameBeenStarted;

}

// BrnGuiEventTypeDefs.h:608
struct BrnGui::GuiEventOnlineNumFriendsCount : public GuiEvent<102> {
	// BrnGuiEventTypeDefs.h:610
	int32_t miFriendCount;

}

// BrnGuiEventTypeDefs.h:631
struct BrnGui::GuiEventBuddyNotification : public GuiEvent<106> {
	// BrnGuiEventTypeDefs.h:633
	BrnNetwork::EBuddyNotification meBuddyNotification;

	// BrnGuiEventTypeDefs.h:634
	PlayerName mBuddyName;

	// BrnGuiEventTypeDefs.h:635
	int32_t miNumBuddies;

}

// BrnGuiEventTypeDefs.h:646
struct BrnGui::GuiEventOnlineTimeout : public GuiEvent<109> {
	// BrnGuiEventTypeDefs.h:649
	float32_t mfTimeLeft;

}

// BrnGuiEventTypeDefs.h:660
struct BrnGui::GuiEventScoreboardRequestIndexEvent : public GuiEvent<112> {
	// BrnGuiEventTypeDefs.h:663
	int32_t miCategory;

}

// BrnGuiEventTypeDefs.h:669
struct BrnGui::GuiEventScoreboardRequestVariationEvent : public GuiEvent<113> {
	// BrnGuiEventTypeDefs.h:672
	int32_t miIndex;

}

// BrnGuiEventTypeDefs.h:678
struct BrnGui::GuiEventScoreboardRequestTableEvent : public GuiEvent<114> {
	// BrnGuiEventTypeDefs.h:681
	int32_t miVariation;

}

// BrnGuiEventTypeDefs.h:690
struct BrnGui::GuiEventScoreboardResponseCategoryEvent : public GuiEvent<117> {
	// BrnGuiEventTypeDefs.h:693
	extern const int32_t KI_MAX_CATEGORIES = 10;

	// BrnGuiEventTypeDefs.h:694
	extern const int32_t KI_SINGLE_CATEGORY_MAX_LENGTH = 31;

	// BrnGuiEventTypeDefs.h:696
	char[10][31] maacCategories;

	// BrnGuiEventTypeDefs.h:697
	int32_t miNumberOfCategories;

}

// BrnGuiEventTypeDefs.h:703
struct BrnGui::GuiEventScoreboardResponseIndexEvent : public GuiEvent<118> {
	// BrnGuiEventTypeDefs.h:706
	extern const int32_t KI_MAX_INDEXES = 10;

	// BrnGuiEventTypeDefs.h:707
	extern const int32_t KI_SINGLE_INDEX_MAX_LENGTH = 31;

	// BrnGuiEventTypeDefs.h:709
	char[10][31] maacIndexes;

	// BrnGuiEventTypeDefs.h:710
	int32_t miNumberOfIndexes;

}

// BrnGuiEventTypeDefs.h:716
struct BrnGui::GuiEventScoreboardResponseVariationEvent : public GuiEvent<119> {
	// BrnGuiEventTypeDefs.h:719
	extern const int32_t KI_MAX_VARIATIONS = 66;

	// BrnGuiEventTypeDefs.h:720
	extern const int32_t KI_SINGLE_VARIATION_MAX_LENGTH = 31;

	// BrnGuiEventTypeDefs.h:722
	char[66][31] maacVariations;

	// BrnGuiEventTypeDefs.h:723
	int32_t miNumberOfVariations;

	// BrnGuiEventTypeDefs.h:724
	bool mbPerRoadLeaderboard;

}

// BrnGuiEventTypeDefs.h:730
struct BrnGui::GuiEventScoreboardResponseTableEvent : public GuiEvent<120> {
	// BrnGuiEventTypeDefs.h:733
	Scoreboard mScoreboard;

}

// BrnGuiEventTypeDefs.h:740
struct BrnGui::GuiEventScoreboardRequestGamercardEvent : public GuiEvent<121> {
	// BrnGuiEventTypeDefs.h:743
	PlayerName mPlayerName;

}

// BrnGuiEventTypeDefs.h:749
struct BrnGui::GuiEventPrepareForInvite : public GuiEvent<126> {
	// BrnGuiEventTypeDefs.h:751
	bool mbIsLocalUserChangeNeeded;

}

// BrnGuiEventTypeDefs.h:756
struct BrnGui::GuiEventInviteComplete : public GuiEvent<130> {
	// BrnGuiEventTypeDefs.h:758
	bool mbSuccess;

}

// BrnGuiEventTypeDefs.h:817
struct BrnGui::GuiEventSetPlayer0ControllerPort : public GuiEvent<141> {
	// BrnGuiEventTypeDefs.h:819
	uint32_t miPort;

}

// BrnGuiEventTypeDefs.h:830
struct BrnGui::GuiRequestCarControlChangeEvent : public GuiEvent<65> {
	// BrnGuiEventTypeDefs.h:833
	bool mbPlayerShouldHaveControl;

}

// BrnGuiEventTypeDefs.h:936
struct BrnGui::GuiEventRunFsm : public GuiEvent<142> {
	// BrnGuiEventTypeDefs.h:938
	BrnGui::EHUDFSMs meFsmToRun;

	// BrnGuiEventTypeDefs.h:939
	CgsID mFsmId;

	// BrnGuiEventTypeDefs.h:940
	CgsID mInitialStateId;

	// BrnGuiEventTypeDefs.h:941
	BrnGui::GuiFlow meFlowToUse;

public:
	// BrnGuiEventTypeDefs.h:944
	void GuiEventRunFsm();

}

// BrnGuiEventTypeDefs.h:959
struct BrnGui::GuiEventUpdateHud : public GuiEvent<145> {
	// BrnGuiEventTypeDefs.h:961
	int32_t miPlayerMPH;

	// BrnGuiEventTypeDefs.h:962
	int32_t miPlayerRPM;

	// BrnGuiEventTypeDefs.h:963
	int32_t miPlayerGear;

}

// BrnGuiEventTypeDefs.h:968
struct BrnGui::GuiEventActivateCrashNav : public GuiEvent<189> {
	// BrnGuiEventTypeDefs.h:985
	BrnGui::GuiEventActivateCrashNav::ActivateDeactivate meActivateDeactivate;

	// BrnGuiEventTypeDefs.h:986
	BrnGui::GuiEventActivateCrashNav::CrashNavType meCrashNavType;

}

// BrnGuiEventTypeDefs.h:991
struct BrnGui::GuiEventActivateCarSelect : public GuiEvent<190> {
	// BrnGuiEventTypeDefs.h:994
	BrnGameState::GameStateModuleIO::ECarSelectState meState;

	// BrnGuiEventTypeDefs.h:995
	BrnGameState::GameStateModuleIO::ECarSelectType meCarSelectType;

}

// BrnGuiEventTypeDefs.h:1007
struct BrnGui::GuiEventFinishedModeResults : public GuiEvent<319> {
}

// BrnGuiEventTypeDefs.h:1040
struct BrnGui::GuiGamePausedEvent : public GuiEvent<495> {
	// BrnGuiEventTypeDefs.h:1042
	int32_t mbpad;

	// BrnGuiEventTypeDefs.h:1043
	bool mbGamePaused;

}

// BrnGuiEventTypeDefs.h:1050
struct BrnGui::GuiMugshotControlEvent : public GuiEvent<323> {
	// BrnGuiEventTypeDefs.h:1052
	CgsID mRoadId;

	// BrnGuiEventTypeDefs.h:1053
	BrnGameState::GameStateModuleIO::EMugshotResponse meMugshotResponse;

	// BrnGuiEventTypeDefs.h:1054
	BrnGameState::GameStateModuleIO::EImageType meImageType;

	// BrnGuiEventTypeDefs.h:1055
	EActiveRaceCarIndex meOpponentARCI;

	// BrnGuiEventTypeDefs.h:1056
	bool mbLocalPlayerIsAggressor;

}

// BrnGuiEventTypeDefs.h:1061
struct BrnGui::GuiEventRoadRuleModeRequest : public GuiEvent<324> {
	// BrnGuiEventTypeDefs.h:1064
	bool mbRoadRulesOn;

	// BrnGuiEventTypeDefs.h:1065
	BrnStreetData::ScoreType meNewMode;

}

// BrnGuiEventTypeDefs.h:1133
struct BrnGui::GuiEventRoadRuleData : public GuiEvent<330> {
	// BrnGuiEventTypeDefs.h:1149
	CgsID mRoadID;

	// BrnGuiEventTypeDefs.h:1150
	BrnGui::GuiEventRoadRuleData::RoadRuleType[2] mRules;

public:
	// BrnGuiEventTypeDefs.h:1155
	void Construct(const RoadRulesEnterRoadAction *);

}

// BrnGuiEventTypeDefs.h:1161
struct BrnGui::GuiEventRoadRuleBegin : public GuiEvent<331> {
	// BrnGuiEventTypeDefs.h:1163
	BrnStreetData::ScoreType meRuleType;

}

// BrnGuiEventTypeDefs.h:1178
struct BrnGui::GuiEventRoadRuleFail : public GuiEvent<333> {
	// BrnGuiEventTypeDefs.h:1180
	BrnStreetData::ScoreType meRuleType;

	// BrnGuiEventTypeDefs.h:1181
	char[32] macCurrentRulerName;

	// BrnGuiEventTypeDefs.h:1182
	CgsID mRoadID;

	// BrnGuiEventTypeDefs.h:1183
	bool mbRoadRuledByLocalPlayer;

	// BrnGuiEventTypeDefs.h:1184
	bool mbRoadRuledByAI;

}

// BrnGuiEventTypeDefs.h:1189
struct BrnGui::GuiEventRoadRuleUpdate : public GuiEvent<334> {
	// BrnGuiEventTypeDefs.h:1192
	float32_t mfCurrentTimeElapsed;

	// BrnGuiEventTypeDefs.h:1193
	float32_t mfCurrentSmash;

	// BrnGuiEventTypeDefs.h:1194
	float32_t mfCurrentStunt;

	// BrnGuiEventTypeDefs.h:1195
	float32_t mfCurrentCrash;

	// BrnGuiEventTypeDefs.h:1196
	int32_t miCrashMultiplier;

	// BrnGuiEventTypeDefs.h:1199
	extern bool msbWorstCaseHudActive;

	// BrnGuiEventTypeDefs.h:1200
	extern float32_t msfWorstCaseTimeElapsed;

}

// BrnGuiEventTypeDefs.h:1206
struct BrnGui::GuiEventRoadRuleLeave : public GuiEvent<336> {
	// BrnGuiEventTypeDefs.h:1209
	CgsID mRoadId;

	// BrnGuiEventTypeDefs.h:1210
	bool mbChallenge;

}

// BrnGuiEventTypeDefs.h:1273
struct BrnGui::GuiEventRoadRuleNewHighScore : public GuiEvent<338> {
	// BrnGuiEventTypeDefs.h:1275
	PlayerName mPlayerName;

	// BrnGuiEventTypeDefs.h:1276
	CgsID mRoadId;

	// BrnGuiEventTypeDefs.h:1277
	BrnStreetData::ScoreType meScoreType;

	// BrnGuiEventTypeDefs.h:1278
	int32_t miNumScoresLost;

	// BrnGuiEventTypeDefs.h:1279
	int32_t miNumRoadsNowRuled;

	// BrnGuiEventTypeDefs.h:1280
	bool mbIsLocalPlayer;

	// BrnGuiEventTypeDefs.h:1281
	bool mbIsWholeRoadOwned;

	// BrnGuiEventTypeDefs.h:1282
	bool mbWasRulePlayersBefore;

	// BrnGuiEventTypeDefs.h:1283
	bool mbMultipleScores;

	// BrnGuiEventTypeDefs.h:1284
	bool mbOnlineLossButOfflineWin;

}

// BrnGuiEventTypeDefs.h:1289
struct BrnGui::GuiEventRoadRuleDataRequest : public GuiEvent<325> {
	// BrnGuiEventTypeDefs.h:1291
	CgsID mRoadId;

}

// BrnGuiEventTypeDefs.h:1312
struct BrnGui::GuiEventRoadRuleTickerScoreRequest : public GuiEvent<327> {
	// BrnGuiEventTypeDefs.h:1314
	Road::ChallengeIndex mRoadChallengeIndex;

}

// BrnGuiEventTypeDefs.h:1334
struct BrnGui::GuiEventRoadRuleTickerScoreResponse : public GuiEvent<341> {
	// BrnGuiEventTypeDefs.h:1336
	CgsID mRoadID;

	// BrnGuiEventTypeDefs.h:1337
	Road::ChallengeIndex mRoadChallengeIndex;

	// BrnGuiEventTypeDefs.h:1338
	PlayerName mPlayerName;

	// BrnGuiEventTypeDefs.h:1339
	BrnGameState::EActiveRoadRule meActiveRoadRule;

	// BrnGuiEventTypeDefs.h:1340
	int32_t miOfflineScore;

	// BrnGuiEventTypeDefs.h:1341
	int32_t miOnlineScore;

	// BrnGuiEventTypeDefs.h:1342
	bool mbLocalPlayerRulesRoad;

	// BrnGuiEventTypeDefs.h:1343
	bool mbAIRulesRoadOffline;

	// BrnGuiEventTypeDefs.h:1344
	bool mbAIRulesRoadOnline;

}

// BrnGuiEventTypeDefs.h:1349
struct BrnGui::GuiEventRoadRuleNewRulers : public GuiEvent<342> {
	// BrnGuiEventTypeDefs.h:1351
	BitArray<64u> mRoadRulesChangedBitArray;

}

// BrnGuiEventTypeDefs.h:1356
struct BrnGui::GuiEventRoadRuleChangeMode : public GuiEvent<339> {
	// BrnGuiEventTypeDefs.h:1358
	BrnGameState::EActiveRoadRule meScoreType;

}

// BrnGuiEventTypeDefs.h:1362
struct BrnGui::GuiCrashComboEvent : public GuiEvent<343> {
	// BrnGuiEventTypeDefs.h:1364
	BrnWorld::EComboEntryType meEntryType;

	// BrnGuiEventTypeDefs.h:1365
	float32_t mfValue;

}

// BrnGuiEventTypeDefs.h:1369
struct BrnGui::GuiEventPlayerReachedRoadRageTarget : public GuiEvent<166> {
}

// BrnGuiEventTypeDefs.h:1376
struct BrnGui::GuiEventEnterEventStartLocation : public GuiEvent<164> {
	// BrnGuiEventTypeDefs.h:1384
	BrnGui::GuiEventEnterEventStartLocation::EEnterLeave meEnterLeave;

	// BrnGuiEventTypeDefs.h:1385
	LandmarkIndex mLandmarkIndex;

}

// BrnGuiEventTypeDefs.h:1389
struct BrnGui::GuiEventEnterLandmarkArea : public GuiEvent<163> {
	// BrnGuiEventTypeDefs.h:1391
	LandmarkIndex mLandmarkIndex;

}

// BrnGuiEventTypeDefs.h:1405
struct BrnGui::GuiEventSetAvailablePresetRaces : public GuiEvent<168> {
	// BrnGuiEventTypeDefs.h:1407
	Race[6] maPresetRaces;

	// BrnGuiEventTypeDefs.h:1408
	int32_t miNumPresetRaces;

}

// BrnGuiEventTypeDefs.h:1420
struct BrnGui::GuiEventRequestDistrict : public GuiEvent<193> {
	// BrnGuiEventTypeDefs.h:1422
	Vector3 mv3WorldPos;

}

// BrnGuiEventTypeDefs.h:1427
struct BrnGui::GuiEventReturnDistrict : public GuiEvent<194> {
	// BrnGuiEventTypeDefs.h:1429
	BrnWorld::ECounty meCounty;

	// BrnGuiEventTypeDefs.h:1430
	BrnWorld::EDistrict meDistrict;

}

// BrnGuiEventTypeDefs.h:1434
struct BrnGui::GuiEventRequestLandmarkRaceData : public GuiEvent<195> {
	// BrnGuiEventTypeDefs.h:1436
	LandmarkIndex mLandmarkIndex;

}

// BrnGuiEventTypeDefs.h:1448
struct BrnGui::GuiEventRequestSpecificPreSetRaces : public GuiEvent<191> {
	// BrnGuiEventTypeDefs.h:1450
	BrnGameState::GameStateModuleIO::EGameModeType meRequiredGameMode;

}

// BrnGuiEventTypeDefs.h:1463
struct BrnGui::GuiEventCustomeEventCreate : public GuiEvent<170> {
	// BrnGuiEventTypeDefs.h:1465
	Race mRace;

}

// BrnGuiEventTypeDefs.h:1477
struct BrnGui::GuiEventCustomeEventDelete : public GuiEvent<172> {
	// BrnGuiEventTypeDefs.h:1479
	Race mRace;

}

// BrnGuiEventTypeDefs.h:1487
struct BrnGui::GuiEventAcceptEventStart : public GuiEvent<165> {
	// BrnGuiEventTypeDefs.h:1490
	CgsID mRaceId;

	// BrnGuiEventTypeDefs.h:1491
	uint16_t[16] mauLandmarkSectionIds;

	// BrnGuiEventTypeDefs.h:1492
	LandmarkIndex[16] maLandmarkIndices;

	// BrnGuiEventTypeDefs.h:1493
	uint8_t muNumLandmarks;

}

// BrnGuiEventTypeDefs.h:1521
struct BrnGui::GuiEventTriggerOnlinePostEvent : public GuiEvent<318> {
	// BrnGuiEventTypeDefs.h:1523
	bool mbTimedOut;

}

// BrnGuiEventTypeDefs.h:1528
struct BrnGui::GuiEventShowHideHud : public GuiEvent<146> {
	// BrnGuiEventTypeDefs.h:1530
	bool mbShow;

}

// BrnGuiEventTypeDefs.h:1535
struct BrnGui::GuiEventCarJoinedEvent : public GuiEvent<148> {
	// BrnGuiEventTypeDefs.h:1537
	CgsID mJoiningRivalID;

	// BrnGuiEventTypeDefs.h:1538
	bool mbDoCamera;

}

// BrnGuiEventTypeDefs.h:1551
struct BrnGui::GuiEventNetworkShowFreeBurnIntro : public GuiEvent<277> {
	// BrnGuiEventTypeDefs.h:1553
	bool mbFinishedOnlineEvent;

	// BrnGuiEventTypeDefs.h:1554
	bool mbShow;

}

// BrnGuiEventTypeDefs.h:1641
struct BrnGui::GuiEventPreraceTrigger : public GuiEvent<158> {
	// BrnGuiEventTypeDefs.h:1643
	float32_t mfMessageDuration;

}

// BrnGuiEventTypeDefs.h:1665
struct BrnGui::GuiEventHideDriveThru : public GuiEvent<199> {
	// BrnGuiEventTypeDefs.h:1667
	CgsID mDriveThruID;

}

// BrnGuiEventTypeDefs.h:2062
struct BrnGui::GuiEventJumpStarted : public GuiEvent<214> {
	// BrnGuiEventTypeDefs.h:2064
	CgsID mJumpId;

}

// BrnGuiEventTypeDefs.h:2068
struct BrnGui::GuiEventBoostBarStuntInfo : public GuiEvent<216> {
	// BrnGuiEventTypeDefs.h:2071
	int32_t miCurrentCount;

	// BrnGuiEventTypeDefs.h:2072
	int32_t miTotalCount;

	// BrnGuiEventTypeDefs.h:2073
	BrnGui::StuntType meStuntType;

}

// BrnGuiEventTypeDefs.h:2078
struct BrnGui::GuiEventStuntInfo : public GuiEvent<215> {
	// BrnGuiEventTypeDefs.h:2081
	int32_t miCurrentCount;

	// BrnGuiEventTypeDefs.h:2082
	int32_t miTotalCount;

	// BrnGuiEventTypeDefs.h:2083
	BrnGui::StuntType meStuntType;

}

// BrnGuiEventTypeDefs.h:2088
struct BrnGui::GuiEventStuntAreaComplete : public GuiEvent<217> {
	// BrnGuiEventTypeDefs.h:2090
	BrnGui::StuntType meStuntElementType;

	// BrnGuiEventTypeDefs.h:2091
	BrnWorld::ECounty meCounty;

}

// BrnGuiEventTypeDefs.h:2095
struct BrnGui::GuiEventStuntAllComplete : public GuiEvent<218> {
	// BrnGuiEventTypeDefs.h:2097
	BrnGui::StuntType meStuntElementType;

}

// BrnGuiEventTypeDefs.h:2102
struct BrnGui::GuiEventSetBlackBars : public GuiEvent<219> {
	// BrnGuiEventTypeDefs.h:2105
	float32_t lfSingleBarSize;

}

// BrnGuiEventTypeDefs.h:2111
struct BrnGui::GuiEventTogglePictureParadise : public GuiEvent<220> {
	// BrnGuiEventTypeDefs.h:2113
	bool mbShow;

}

// BrnGuiEventTypeDefs.h:2133
struct BrnGui::GuiEventMiniMapSwitch : public GuiEvent<203> {
	// BrnGuiEventTypeDefs.h:2135
	bool mbVisible;

}

// BrnGuiEventTypeDefs.h:2140
struct BrnGui::GuiEventBoostInfo : public GuiEvent<204> {
	// BrnGuiEventTypeDefs.h:2143
	bool mbIsBoosting;

	// BrnGuiEventTypeDefs.h:2144
	bool mbIsInAir;

	// BrnGuiEventTypeDefs.h:2145
	bool mbIsOncoming;

	// BrnGuiEventTypeDefs.h:2146
	bool mbIsDrifting;

	// BrnGuiEventTypeDefs.h:2147
	bool mbNearMiss;

	// BrnGuiEventTypeDefs.h:2148
	bool mbIsChainedMode;

	// BrnGuiEventTypeDefs.h:2149
	bool mbWasChainJustCompleted;

	// BrnGuiEventTypeDefs.h:2150
	bool mbAllowedToBoost;

	// BrnGuiEventTypeDefs.h:2151
	bool mbIsTailgating;

	// BrnGuiEventTypeDefs.h:2152
	uint32_t muNumChained;

	// BrnGuiEventTypeDefs.h:2153
	float32_t mfBoostAmount;

	// BrnGuiEventTypeDefs.h:2154
	float32_t mfMaxBoost;

	// BrnGuiEventTypeDefs.h:2155
	BrnWorld::EBoostType meBoostType;

	// BrnGuiEventTypeDefs.h:2156
	bool mbBoostIsFull;

public:
	// BrnGuiEventTypeDefs.h:2142
	void Construct();

}

// BrnGuiEventTypeDefs.h:2180
struct BrnGui::GuiEventUpdateEventCountdown : public GuiEvent<231> {
	// BrnGuiEventTypeDefs.h:2197
	BrnGui::GuiEventUpdateEventCountdown::ECountdownProgress meEventCountdownStage;

}

// BrnGuiEventTypeDefs.h:2220
struct BrnGui::GuiEventRaceDistanceRemaining : public GuiEvent<236> {
	// BrnGuiEventTypeDefs.h:2224
	CgsID[8] maCarId;

	// BrnGuiEventTypeDefs.h:2225
	float32_t[8] mafDistanceToFinish;

	// BrnGuiEventTypeDefs.h:2226
	bool[8] mabPlayerEliminated;

	// BrnGuiEventTypeDefs.h:2227
	bool[8] mabValid;

}

// BrnGuiEventTypeDefs.h:2232
struct BrnGui::GuiEventRaceDistanceToCheckpoint : public GuiEvent<237> {
	// BrnGuiEventTypeDefs.h:2234
	float32_t mfDistanceToCheckpoint;

}

// BrnGuiEventTypeDefs.h:2254
struct BrnGui::GuiEventCurrentStatus : public GuiEvent<482> {
	// BrnGuiEventTypeDefs.h:2256
	Time mTime;

	// BrnGuiEventTypeDefs.h:2257
	float_t mfTimestep;

	// BrnGuiEventTypeDefs.h:2258
	float_t mfDistanceToFinish;

	// BrnGuiEventTypeDefs.h:2259
	float32_t mfDistanceDrivenInCar;

	// BrnGuiEventTypeDefs.h:2262
	BrnGameState::GameStateModuleIO::EPlayerTeam[8] maeCurrentPlayerTeam;

	// BrnGuiEventTypeDefs.h:2265
	int32_t miOnlineLandmarksVisible;

	// BrnGuiEventTypeDefs.h:2266
	LandmarkIndex[16] maOnlineLandmarksVisible;

}

// BrnGuiEventTypeDefs.h:2353
struct BrnGui::GuiEventOnlinePostEventScalps : public GuiEvent<317> {
	// BrnGuiEventTypeDefs.h:2363
	BrnGui::GuiEventOnlinePostEventScalps::OnlineScalp[8] maOnlineScalps;

	// BrnGuiEventTypeDefs.h:2364
	int32_t miNumScalpsWon;

}

// BrnGuiEventTypeDefs.h:2445
struct BrnGui::GuiEventPostEventRankUpSequenceStart : public GuiEvent<301> {
	// BrnGuiEventTypeDefs.h:2447
	int32_t miPlayerNewRank;

	// BrnGuiEventTypeDefs.h:2448
	bool mbIsOneHundredPercentComplete;

}

// BrnGuiEventTypeDefs.h:2456
struct BrnGui::GuiEventMedalUpdate : public GuiEvent<305> {
	// BrnGuiEventTypeDefs.h:2458
	uint16_t mu16NumGoldMedals;

	// BrnGuiEventTypeDefs.h:2459
	uint16_t mu16NumSilverMedals;

	// BrnGuiEventTypeDefs.h:2460
	uint16_t mu16NumBronzeMedals;

	// BrnGuiEventTypeDefs.h:2462
	uint16_t mu16NumGoldsToNextReward;

}

// BrnGuiEventTypeDefs.h:2470
struct BrnGui::GuiEventGameCompleted : public GuiEvent<307> {
	// BrnGuiEventTypeDefs.h:2472
	bool mbComplete;

	// BrnGuiEventTypeDefs.h:2473
	bool mbCompletionSequenceShown;

}

// BrnGuiEventTypeDefs.h:2478
struct BrnGui::GuiEventGameCompletedOnline : public GuiEvent<308> {
	// BrnGuiEventTypeDefs.h:2480
	bool mbOneHundredPercentComplete;

	// BrnGuiEventTypeDefs.h:2481
	bool mbCompletionSequenceShown;

}

// BrnGuiEventTypeDefs.h:2486
struct BrnGui::GuiEventJunctionInfo : public GuiEvent<309> {
	// BrnGuiEventTypeDefs.h:2489
	CgsID mSpecialEventCarId;

	// BrnGuiEventTypeDefs.h:2490
	BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

	// BrnGuiEventTypeDefs.h:2491
	int8_t mi8Difficulty;

	// BrnGuiEventTypeDefs.h:2492
	int8_t mi8MedalAchieved;

	// BrnGuiEventTypeDefs.h:2493
	int32_t miEventID;

	// BrnGuiEventTypeDefs.h:2495
	bool mbCanEnterEvent;

	// BrnGuiEventTypeDefs.h:2496
	bool mbEventUnlocked;

	// BrnGuiEventTypeDefs.h:2497
	bool mbOnEntry;

	// BrnGuiEventTypeDefs.h:2498
	bool mbSpecificCarEventValid;

	// BrnGuiEventTypeDefs.h:2499
	bool mbIsNewlyDiscovered;

	// BrnGuiEventTypeDefs.h:2500
	bool mbIsAutoUnlockedChallenge;

}

// BrnGuiEventTypeDefs.h:2508
struct BrnGui::GuiEventAllJunctionsDiscoveredOfType : public GuiEvent<311> {
	// BrnGuiEventTypeDefs.h:2510
	BrnGameState::GameStateModuleIO::EGameModeType leGameEventType;

}

// BrnGuiEventTypeDefs.h:2514
struct BrnGui::GuiEventAllOfTypeComplete : public GuiEvent<303> {
	// BrnGuiEventTypeDefs.h:2516
	BrnGameState::GameStateModuleIO::EGameModeType leGameEventType;

}

// BrnGuiEventTypeDefs.h:2520
struct BrnGui::GuiEventAllOfRivalsShutdown : public GuiEvent<304> {
}

// BrnGuiEventTypeDefs.h:2527
struct BrnGui::GuiEventDriveThruDiscovered : public GuiEvent<312> {
	// BrnGuiEventTypeDefs.h:2530
	BrnTrigger::GenericRegion::Type meDriveThruType;

	// BrnGuiEventTypeDefs.h:2531
	int32_t miTotalDriveThrusOfType;

	// BrnGuiEventTypeDefs.h:2532
	int32_t miNumDiscoveredDriveThrusOfType;

}

// BrnGuiEventTypeDefs.h:2537
struct BrnGui::GuiEventFailedToStartEvent : public GuiEvent<314> {
	// BrnGuiEventTypeDefs.h:2539
	CgsID mSpecialCarID;

}

// BrnGuiEventTypeDefs.h:2544
struct BrnGui::GuiEventRoadRagePlayerDamage : public GuiEvent<344> {
	// BrnGuiEventTypeDefs.h:2546
	float32_t mfHowCloseToTotalled;

	// BrnGuiEventTypeDefs.h:2547
	bool mbOneMoreCrashToTotalled;

	// BrnGuiEventTypeDefs.h:2548
	bool mbPlayerTotalled;

}

// BrnGuiEventTypeDefs.h:2566
struct BrnGui::GuiEventRenderProgressBar : public GuiEvent<223> {
	// BrnGuiEventTypeDefs.h:2568
	float32_t mProgressPercent;

}

// BrnGuiEventTypeDefs.h:2580
struct BrnGui::GuiEventRequestCollisionWorldEvent : public GuiEvent<483> {
	// BrnGuiEventTypeDefs.h:2597
	BrnGui::GuiEventRequestCollisionWorldEvent::EEventType meEventType;

}

// BrnGuiEventTypeDefs.h:2929
struct BrnGui::GuiEventNetworkLeftGame : public GuiEvent<271> {
	// BrnGuiEventTypeDefs.h:2932
	BrnNetwork::ELeftGameReason meLeftGameReason;

	// BrnGuiEventTypeDefs.h:2933
	CgsNetwork::EKickReason meKickReason;

}

// BrnGuiEventTypeDefs.h:2937
struct BrnGui::GuiEventNetworkPostGameProcessingFinished : public GuiEvent<272> {
	// BrnGuiEventTypeDefs.h:2940
	bool mbIsStillInGame;

}

// BrnGuiEventTypeDefs.h:2957
struct BrnGui::GuiEventNetworkPlayerJoinedLobby : public GuiEvent<274> {
	// BrnGuiEventTypeDefs.h:2959
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

}

// BrnGuiEventTypeDefs.h:2971
struct BrnGui::GuiEventNetworkPlayerLeftLobby : public GuiEvent<275> {
	// BrnGuiEventTypeDefs.h:2973
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnGuiEventTypeDefs.h:2974
	PlayerName mPlayerName;

	// BrnGuiEventTypeDefs.h:2975
	bool mbIsLocalPlayerInGame;

}

// BrnGuiEventTypeDefs.h:2987
struct BrnGui::GuiEventNetworkSettingsUpdate : public GuiEvent<276> {
	// BrnGuiEventTypeDefs.h:2989
	BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions meCameraFeedSetting;

}

// BrnGuiEventTypeDefs.h:3001
struct BrnGui::GuiEventNetworkPlayerImage : public GuiEvent<256> {
	// BrnGuiEventTypeDefs.h:3003
	const NetworkTexture * mpTexture;

	// BrnGuiEventTypeDefs.h:3004
	int32_t miTextureIndex;

	// BrnGuiEventTypeDefs.h:3007
	bool mbTreatAsYUV;

}

// BrnGuiEventTypeDefs.h:3035
struct BrnGui::GuiEventNetworkPlayerList : public GuiEvent<240> {
	// BrnGuiEventTypeDefs.h:3045
	BrnGui::GuiEventNetworkPlayerList::PlayerNameInfo[8] maPlayerNameInfo;

	// BrnGuiEventTypeDefs.h:3046
	int32_t miNumPlayers;

	// BrnGuiEventTypeDefs.h:3049
	extern bool msbWorstCaseHudActive;

}

// BrnGuiEventTypeDefs.h:3062
struct BrnGui::GuiEventNetworkPlayerStatus : public GuiEvent<242> {
	// BrnGuiEventTypeDefs.h:3065
	InGamePlayerStatusData[8] maPlayerInfo;

	// BrnGuiEventTypeDefs.h:3066
	char[36] macGameName;

	// BrnGuiEventTypeDefs.h:3067
	int32_t miNumPlayers;

	// BrnGuiEventTypeDefs.h:3068
	bool mbLocalPlayerIsHost;

	// BrnGuiEventTypeDefs.h:3074
	extern bool msbWorstCaseHudActive;

	// BrnGuiEventTypeDefs.h:3075
	extern bool msbStatusSwitch;

public:
	// BrnGuiEventTypeDefs.h:3071
	void Clear();

}

// BrnGuiEventTypeDefs.h:3304
struct BrnGui::GuiEventNetworkVehicleListRequest : public GuiEvent<261> {
	// BrnGuiEventTypeDefs.h:3306
	CgsModule::EventReceiverQueue<256,16> * mpReceiverQueue;

}

// BrnGuiEventTypeDefs.h:3382
struct BrnGui::GuiEventProgressionProfileData : public GuiEvent<345> {
	// BrnGuiEventTypeDefs.h:3384
	Profile * mpProgressionProfile;

	// BrnGuiEventTypeDefs.h:3385
	const BrnProgression::ProgressionData * mpProgressionData;

	// BrnGuiEventTypeDefs.h:3386
	bool mbAreRoadRulesAvailable;

}

// BrnGuiEventTypeDefs.h:3398
struct BrnGui::GuiEventLiveRevengeProfileData : public GuiEvent<346> {
	// BrnGuiEventTypeDefs.h:3400
	BrnNetwork::LiveRevengeProfile * mpLiveRevengeProfile;

}

// BrnGuiEventTypeDefs.h:3412
struct BrnGui::GuiEventProgressionProfileLoaded : public GuiEvent<347> {
	// BrnGuiEventTypeDefs.h:3414
	Profile * mpProgressionProfile;

}

// BrnGuiEventTypeDefs.h:3450
struct BrnGui::GuiEventSaveImageFileAndAutosave : public GuiEvent<353> {
	// BrnGuiEventTypeDefs.h:3452
	ImageFileInfo mImageFileInfo;

}

// BrnGuiEventTypeDefs.h:3464
struct BrnGui::GuiEventLoadImageFiles : public GuiEvent<354> {
	// BrnGuiEventTypeDefs.h:3466
	ImageFileInfo[3] mImageFileInfo;

}

// BrnGuiEventTypeDefs.h:3492
struct BrnGui::GuiAutosaveRequestEvent : public GuiEvent<351> {
	// BrnGuiEventTypeDefs.h:3500
	bool mbForceAutosave;

public:
	// BrnGuiEventTypeDefs.h:3495
	void GuiAutosaveRequestEvent();

}

// BrnGuiEventTypeDefs.h:3512
struct BrnGui::GuiEventAutosaveCompleted : public GuiEvent<352> {
	// BrnGuiEventTypeDefs.h:3514
	int32_t miNumberOfImageFiles;

	// BrnGuiEventTypeDefs.h:3515
	ImageFileInfo[3] mImageFileInfo;

}

// BrnGuiEventTypeDefs.h:3527
struct BrnGui::GuiEventImageFilesLoaded : public GuiEvent<355> {
	// BrnGuiEventTypeDefs.h:3529
	ImageFileInfo[3] mImageFileInfo;

}

// BrnGuiEventTypeDefs.h:3556
struct BrnGui::GuiSnapShotRequested : public GuiEvent<357> {
	// BrnGuiEventTypeDefs.h:3559
	float mfStartX;

	// BrnGuiEventTypeDefs.h:3560
	float mfStartY;

	// BrnGuiEventTypeDefs.h:3561
	float mfWidth;

	// BrnGuiEventTypeDefs.h:3562
	float mfHeight;

}

// BrnGuiEventTypeDefs.h:3574
struct BrnGui::GuiTakedownEvent : public GuiEvent<358> {
	// BrnGuiEventTypeDefs.h:3577
	EActiveRaceCarIndex meAggressorIndex;

	// BrnGuiEventTypeDefs.h:3578
	EActiveRaceCarIndex meVictimIndex;

	// BrnGuiEventTypeDefs.h:3579
	CgsID mAggressorCarID;

	// BrnGuiEventTypeDefs.h:3580
	CgsID mVictimCarID;

	// BrnGuiEventTypeDefs.h:3581
	BrnGameState::ETakedownType meTakedownType;

	// BrnGuiEventTypeDefs.h:3582
	int32_t miTakedownChainCount;

	// BrnGuiEventTypeDefs.h:3583
	int32_t miMultipleTakedownCount;

	// BrnGuiEventTypeDefs.h:3584
	bool mbMarkedManTakeDown;

	// BrnGuiEventTypeDefs.h:3585
	bool mbSettledScore;

}

// BrnGuiEventTypeDefs.h:3597
struct BrnGui::GuiSoftTakedownEvent : public GuiEvent<359> {
	// BrnGuiEventTypeDefs.h:3600
	EActiveRaceCarIndex meAggressorIndex;

	// BrnGuiEventTypeDefs.h:3601
	EActiveRaceCarIndex meVictimIndex;

	// BrnGuiEventTypeDefs.h:3602
	CgsID mAggressorCarID;

	// BrnGuiEventTypeDefs.h:3603
	CgsID mVictimCarID;

	// BrnGuiEventTypeDefs.h:3604
	BrnGameState::ETakedownType meTakedownType;

	// BrnGuiEventTypeDefs.h:3605
	bool mbMarkedManTakeDown;

	// BrnGuiEventTypeDefs.h:3606
	bool mbSettledScore;

}

// BrnGuiEventTypeDefs.h:3618
struct BrnGui::GuiShutdownEvent : public GuiEvent<368> {
	// BrnGuiEventTypeDefs.h:3620
	CgsID mVictimCarID;

}

// BrnGuiEventTypeDefs.h:3632
struct BrnGui::GuiShutdownFinishedEvent : public GuiEvent<369> {
}

// BrnGuiEventTypeDefs.h:3645
struct BrnGui::GuiImpactEvent : public GuiEvent<360> {
	// BrnGuiEventTypeDefs.h:3647
	BrnPhysics::Vehicle::EImpactType meImpactType;

	// BrnGuiEventTypeDefs.h:3648
	EActiveRaceCarIndex meAggressorActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:3649
	EActiveRaceCarIndex meVictimActiveRaceCarIndex;

}

// BrnGuiEventTypeDefs.h:3662
struct BrnGui::GuiDriveThroughEvent : public GuiEvent<361> {
	// BrnGuiEventTypeDefs.h:3680
	BrnGui::GuiDriveThroughEvent::DriveThroughType meDriveThroughType;

	// BrnGuiEventTypeDefs.h:3681
	bool mbEffective;

}

// BrnGuiEventTypeDefs.h:3694
struct BrnGui::GuiStuntEvent : public GuiEvent<362> {
	// BrnGuiEventTypeDefs.h:3696
	int32_t miChainCount;

}

// BrnGuiEventTypeDefs.h:3708
struct BrnGui::GuiSignatureStuntEvent : public GuiEvent<363> {
	// BrnGuiEventTypeDefs.h:3710
	CgsID mId;

}

// BrnGuiEventTypeDefs.h:3722
struct BrnGui::GuiLiveRevengeUpdateEvent : public GuiEvent<364> {
	// BrnGuiEventTypeDefs.h:3725
	int32_t miDifference;

	// BrnGuiEventTypeDefs.h:3726
	BrnNetwork::NetworkToGuiLiveRevengeUpdate::LiveRevengeStatus meNewStatus;

	// BrnGuiEventTypeDefs.h:3727
	EActiveRaceCarIndex meAggressorActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:3728
	EActiveRaceCarIndex meVictimActiveRaceCarIndex;

}

// BrnGuiEventTypeDefs.h:3741
struct BrnGui::GuiDirtyTrickNewEvent : public GuiEvent<175> {
	// BrnGuiEventTypeDefs.h:3744
	EActiveRaceCarIndex meAggressorActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:3745
	EActiveRaceCarIndex meVictimActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:3746
	BrnNetwork::EPaybackType meTrickType;

}

// BrnGuiEventTypeDefs.h:3779
struct BrnGui::GuiDirtyTrickTriggerEvent : public GuiEvent<177> {
	// BrnGuiEventTypeDefs.h:3782
	EActiveRaceCarIndex meAggressorActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:3783
	EActiveRaceCarIndex meVictimActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:3784
	BrnNetwork::EPaybackType meTrickType;

}

// BrnGuiEventTypeDefs.h:3812
struct BrnGui::GuiTookLeadEvent : public GuiEvent<479> {
	// BrnGuiEventTypeDefs.h:3815
	CgsID mOfflineRivalCarID;

	// BrnGuiEventTypeDefs.h:3816
	EActiveRaceCarIndex meLeadActiveRaceCarIndex;

}

// BrnGuiEventTypeDefs.h:3828
struct BrnGui::GuiTookLastEvent : public GuiEvent<480> {
	// BrnGuiEventTypeDefs.h:3831
	CgsID mOfflineRivalCarID;

	// BrnGuiEventTypeDefs.h:3832
	EActiveRaceCarIndex meLastActiveRaceCarIndex;

}

// BrnGuiEventTypeDefs.h:3846
struct BrnGui::GuiDirtyTrickEndedEvent : public GuiEvent<179> {
	// BrnGuiEventTypeDefs.h:3849
	EActiveRaceCarIndex meAggressorActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:3850
	EActiveRaceCarIndex meVictimActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:3851
	BrnNetwork::EPaybackType meTrickType;

	// BrnGuiEventTypeDefs.h:3852
	bool mbSurvived;

}

// BrnGuiEventTypeDefs.h:3859
struct BrnGui::GuiPaybackReceivedEvent : public GuiEvent<180> {
	// BrnGuiEventTypeDefs.h:3862
	BrnNetwork::EPaybackType meTrickType;

}

// BrnGuiEventTypeDefs.h:3875
struct BrnGui::GuiOvertakeEvent : public GuiEvent<366> {
	// BrnGuiEventTypeDefs.h:3878
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:3879
	uint8_t muNewPosition;

}

// BrnGuiEventTypeDefs.h:3892
struct BrnGui::GuiFinishRaceEvent : public GuiEvent<367> {
	// BrnGuiEventTypeDefs.h:3895
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:3896
	BrnGui::EFinishType meFinishType;

}

// BrnGuiEventTypeDefs.h:3908
struct BrnGui::GuiEventTrophyCarUnlock : public GuiEvent<370> {
	// BrnGuiEventTypeDefs.h:3910
	BrnProgression::TrophyUnlockData::UnlockType meUnlockType;

	// BrnGuiEventTypeDefs.h:3911
	CgsID mTrophyCarID;

}

// BrnGuiEventTypeDefs.h:3923
struct BrnGui::GuiPlayerRaceCarIdEvent : public GuiEvent<371> {
	// BrnGuiEventTypeDefs.h:3926
	EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:3927
	EGlobalRaceCarIndex mePlayerGlobalRaceCarIndex;

}

// BrnGuiEventTypeDefs.h:3941
struct BrnGui::GuiPlayerDrivableFromCrash : public GuiEvent<373> {
}

// BrnGuiEventTypeDefs.h:4005
struct BrnGui::GuiPlayerInShortcutEvent : public GuiEvent<375> {
	// BrnGuiEventTypeDefs.h:4007
	bool mbPlayerInShortcut;

}

// BrnGuiEventTypeDefs.h:4109
struct BrnGui::GuiEventControllerSettings : public GuiEvent<467> {
	// BrnGuiEventTypeDefs.h:4111
	bool mbSixAxisShowtime;

	// BrnGuiEventTypeDefs.h:4112
	bool mbSixAxisSteering;

	// BrnGuiEventTypeDefs.h:4113
	bool mbForceFeedback;

}

// BrnGuiEventTypeDefs.h:4124
struct BrnGui::GuiEventGameOptionsSettings : public GuiEvent<468> {
	// BrnGuiEventTypeDefs.h:4126
	bool mbGameTips;

}

// BrnGuiEventTypeDefs.h:4137
struct BrnGui::GuiEventVoipSettings : public GuiEvent<469> {
	// BrnGuiEventTypeDefs.h:4139
	int32_t miVoipVolume;

}

// BrnGuiEventTypeDefs.h:4168
struct BrnGui::GuiEvent100PerCentComplete : public GuiEvent<464> {
	// BrnGuiEventTypeDefs.h:4170
	bool mbEntered;

}

// BrnGuiEventTypeDefs.h:4181
struct BrnGui::GuiEventCarbonCarSequence : public GuiEvent<465> {
	// BrnGuiEventTypeDefs.h:4183
	bool mbEntered;

}

// BrnGuiEventTypeDefs.h:4248
struct BrnGui::GuiEventDirectorSettings : public GuiEvent<470> {
	// BrnGuiEventTypeDefs.h:4251
	BrnDirector::GameState::DirectorProfileData mDirectorProfileData;

}

// BrnGuiEventTypeDefs.h:4323
struct BrnGui::GuiNetworkPlayerCrashingEvent : public GuiEvent<477> {
	// BrnGuiEventTypeDefs.h:4325
	CgsID mRivalCarID;

	// BrnGuiEventTypeDefs.h:4326
	EActiveRaceCarIndex meNetworkPlayerActiveRaceCarIndex;

}

// BrnGuiEventTypeDefs.h:4338
struct BrnGui::GuiNetworkPlayerBattlingEvent : public GuiEvent<478> {
	// BrnGuiEventTypeDefs.h:4340
	EActiveRaceCarIndex meAggressorActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:4341
	EActiveRaceCarIndex meVictimActiveRaceCarIndex;

}

// BrnGuiEventTypeDefs.h:4353
struct BrnGui::GuiNetworkPlayerOnTailEvent : public GuiEvent<481> {
	// BrnGuiEventTypeDefs.h:4356
	CgsID mOfflineRivalCarID;

	// BrnGuiEventTypeDefs.h:4357
	EActiveRaceCarIndex meOnTailActiveRaceCarIndex;

}

// BrnGuiEventTypeDefs.h:4369
struct BrnGui::GuiOffenceShortcutEvent : public GuiEvent<377> {
	// BrnGuiEventTypeDefs.h:4372
	CgsID mShortcutId;

}

// BrnGuiEventTypeDefs.h:4381
struct BrnGui::GuiTrafficCheckEvent : public GuiEvent<378> {
	// BrnGuiEventTypeDefs.h:4383
	int32_t miCount;

}

// BrnGuiEventTypeDefs.h:4392
struct BrnGui::GuiNearMissEvent : public GuiEvent<379> {
	// BrnGuiEventTypeDefs.h:4394
	int32_t miCount;

	// BrnGuiEventTypeDefs.h:4395
	BrnWorld::ENearMissType meNearMissType;

}

// BrnGuiEventTypeDefs.h:4404
struct BrnGui::GuiDriftingEvent : public GuiEvent<380> {
	// BrnGuiEventTypeDefs.h:4406
	float32_t mfDistance;

}

// BrnGuiEventTypeDefs.h:4414
struct BrnGui::GuiCompletedStuntEvent : public GuiEvent<385> {
	// BrnGuiEventTypeDefs.h:4416
	uint32_t muStuntActionComplete;

	// BrnGuiEventTypeDefs.h:4418
	float32_t mfCompletedBarrelRollAngle;

	// BrnGuiEventTypeDefs.h:4419
	float32_t mfCompletedAirSpinAngle;

	// BrnGuiEventTypeDefs.h:4420
	float32_t mfCompletedHandbreakTurnAngle;

	// BrnGuiEventTypeDefs.h:4421
	float32_t mfCompletedDriftTime;

	// BrnGuiEventTypeDefs.h:4422
	float32_t mfCompletedDriftDistance;

	// BrnGuiEventTypeDefs.h:4423
	bool mbSuccessfulLanding;

	// BrnGuiEventTypeDefs.h:4425
	int32_t miCompletedBarrelRolls;

}

// BrnGuiEventTypeDefs.h:4433
struct BrnGui::GuiInProgressStuntEvent : public GuiEvent<386> {
	// BrnGuiEventTypeDefs.h:4435
	uint32_t muStuntActionInProgress;

	// BrnGuiEventTypeDefs.h:4437
	float32_t mfInProgressBarrelRollAngle;

	// BrnGuiEventTypeDefs.h:4438
	float32_t mfInProgressAirSpinAngle;

	// BrnGuiEventTypeDefs.h:4439
	float32_t mfInProgressHandbreakTurnAngle;

	// BrnGuiEventTypeDefs.h:4440
	float32_t mfInProgressDriftTime;

	// BrnGuiEventTypeDefs.h:4441
	float32_t mfInProgressDriftDistance;

}

// BrnGuiEventTypeDefs.h:4449
struct BrnGui::GuiSpinningEvent : public GuiEvent<381> {
	// BrnGuiEventTypeDefs.h:4451
	float32_t mfSpinAngle;

}

// BrnGuiEventTypeDefs.h:4460
struct BrnGui::GuiInAirEvent : public GuiEvent<382> {
	// BrnGuiEventTypeDefs.h:4462
	float32_t mfCumulativeAirTime;

	// BrnGuiEventTypeDefs.h:4463
	float32_t mfCurrentJumpAirTime;

}

// BrnGuiEventTypeDefs.h:4472
struct BrnGui::GuiOncomingEvent : public GuiEvent<383> {
	// BrnGuiEventTypeDefs.h:4474
	float32_t mfDistance;

}

// BrnGuiEventTypeDefs.h:4483
struct BrnGui::GuiTailgatingEvent : public GuiEvent<384> {
	// BrnGuiEventTypeDefs.h:4485
	float32_t mfDistance;

}

// BrnGuiEventTypeDefs.h:4494
struct BrnGui::GuiAftertouchEvent : public GuiEvent<398> {
	// BrnGuiEventTypeDefs.h:4496
	EActiveRaceCarIndex mRaceCarIndex;

	// BrnGuiEventTypeDefs.h:4497
	Vector2 mv2Direction;

}

// BrnGuiEventTypeDefs.h:4517
struct BrnGui::GuiShowtimeJustBounced : public GuiEvent<397> {
	// BrnGuiEventTypeDefs.h:4519
	bool mbOnCar;

	// BrnGuiEventTypeDefs.h:4520
	bool mbBoostedBounce;

}

// BrnGuiEventTypeDefs.h:4529
struct BrnGui::GuiPowerParkResult : public GuiEvent<399> {
	// BrnGuiEventTypeDefs.h:4531
	BrnWorld::EPowerParkOutcome meOutcome;

	// BrnGuiEventTypeDefs.h:4532
	int32_t miOverallRating;

}

// BrnGuiEventTypeDefs.h:4542
struct BrnGui::GuiShowtimeTriggered : public GuiEvent<387> {
	// BrnGuiEventTypeDefs.h:4544
	bool mbShowtimeEntered;

}

// BrnGuiEventTypeDefs.h:4553
struct BrnGui::GuiLeaptVehicleEvent : public GuiEvent<388> {
}

// BrnGuiEventTypeDefs.h:4563
struct BrnGui::GuiHitVehicleEvent : public GuiEvent<389> {
	// BrnGuiEventTypeDefs.h:4565
	BrnTraffic::VehicleClass meVehicleClass;

	// BrnGuiEventTypeDefs.h:4566
	int32_t miVehicleClassTotalHit;

	// BrnGuiEventTypeDefs.h:4567
	BrnTraffic::VehicleScoreCategory meVehicleScoreCategory;

	// BrnGuiEventTypeDefs.h:4568
	int32_t miVehicleBaseScore;

	// BrnGuiEventTypeDefs.h:4569
	int32_t miVehicleChainBonus;

	// BrnGuiEventTypeDefs.h:4570
	uint16_t muVehicleIndex;

}

// BrnGuiEventTypeDefs.h:4599
struct BrnGui::GuiPlayerInfoResponse : public GuiEvent<401> {
	// BrnGuiEventTypeDefs.h:4601
	PlayerInfo mPlayerInfo;

	// BrnGuiEventTypeDefs.h:4602
	bool mbIsCarDamaged;

}

// BrnGuiEventTypeDefs.h:4611
struct BrnGui::GuiCarSelectionRequest : public GuiEvent<404> {
	// BrnGuiEventTypeDefs.h:4613
	bool mbUnlocked;

	// BrnGuiEventTypeDefs.h:4614
	bool mbDummy;

}

// BrnGuiEventTypeDefs.h:4633
struct BrnGui::GuiCarUnlockedLiveryRequest : public GuiEvent<405> {
	// BrnGuiEventTypeDefs.h:4635
	CgsID mCgsID;

}

// BrnGuiEventTypeDefs.h:4644
struct BrnGui::GuiCarSelectionEvent : public GuiEvent<407> {
	// BrnGuiEventTypeDefs.h:4647
	Array<CgsID,92u> maCars;

	// BrnGuiEventTypeDefs.h:4648
	BitArray<92u> mHasBeenDrivenBitArray;

	// BrnGuiEventTypeDefs.h:4649
	BitArray<92u> mWreckedArray;

	// BrnGuiEventTypeDefs.h:4650
	int32_t miMaxAvailableCars;

}

// BrnGuiEventTypeDefs.h:4659
struct BrnGui::GuiCarUnlockedLiveryEvent : public GuiEvent<408> {
	// BrnGuiEventTypeDefs.h:4661
	Array<CgsID,8u> maCars;

}

// BrnGuiEventTypeDefs.h:4670
struct BrnGui::GuiChangeCarEvent : public GuiEvent<410> {
	// BrnGuiEventTypeDefs.h:4672
	CgsID mCarId;

}

// BrnGuiEventTypeDefs.h:4682
struct BrnGui::GuiCarUnlockEvent : public GuiEvent<76> {
	// BrnGuiEventTypeDefs.h:4684
	CgsID mCurrentCarToUnlock;

}

// BrnGuiEventTypeDefs.h:4695
struct BrnGui::GuiChangePlayerCarColourEvent : public GuiEvent<411> {
	// BrnGuiEventTypeDefs.h:4697
	uint32_t muPaletteIndex;

	// BrnGuiEventTypeDefs.h:4698
	uint32_t muColourIndex;

}

// BrnGuiEventTypeDefs.h:4707
struct BrnGui::GuiPlayerCarColourRequest : public GuiEvent<406> {
	// BrnGuiEventTypeDefs.h:4709
	CgsID mCarId;

}

// BrnGuiEventTypeDefs.h:4718
struct BrnGui::GuiPlayerCarColourResponse : public GuiEvent<409> {
	// BrnGuiEventTypeDefs.h:4720
	uint32_t muPaletteIndex;

	// BrnGuiEventTypeDefs.h:4721
	uint32_t muColourIndex;

}

// BrnGuiEventTypeDefs.h:4730
struct BrnGui::GuiCarSelectWheelRequest : public GuiEvent<412> {
	// BrnGuiEventTypeDefs.h:4732
	CgsModule::EventReceiverQueue<256,16> * mpReceiverQueue;

}

// BrnGuiEventTypeDefs.h:4752
struct BrnGui::GuiInEventDistanceToFinish : public GuiEvent<414> {
	// BrnGuiEventTypeDefs.h:4754
	float32_t mfDistanceToFinish;

	// BrnGuiEventTypeDefs.h:4755
	int32_t miPlayerPosition;

}

// BrnGuiEventTypeDefs.h:4764
struct BrnGui::GuiInEventLeaderSplit : public GuiEvent<415> {
	// BrnGuiEventTypeDefs.h:4766
	CgsID mLeadersCarID;

	// BrnGuiEventTypeDefs.h:4767
	float32_t mfLeadTime;

	// BrnGuiEventTypeDefs.h:4768
	EActiveRaceCarIndex meLeaderActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:4769
	bool mbLocalPlayerIsLeading;

}

// BrnGuiEventTypeDefs.h:4778
struct BrnGui::GuiInEventNeckAndNeck : public GuiEvent<416> {
}

// BrnGuiEventTypeDefs.h:4788
struct BrnGui::GuiInEventRivalProgress : public GuiEvent<417> {
	// BrnGuiEventTypeDefs.h:4790
	CgsID mRivalID;

	// BrnGuiEventTypeDefs.h:4791
	CgsID mLandmarkID;

	// BrnGuiEventTypeDefs.h:4792
	EActiveRaceCarIndex meRivalActiveRaceCarIndex;

}

// BrnGuiEventTypeDefs.h:4801
struct BrnGui::GuiInEventFinisher : public GuiEvent<418> {
	// BrnGuiEventTypeDefs.h:4803
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:4804
	int32_t miFinishPosition;

}

// BrnGuiEventTypeDefs.h:4813
struct BrnGui::GuiGameModeStarted : public GuiEvent<234> {
	// BrnGuiEventTypeDefs.h:4815
	GuiEventStopMode::EGameModeType meGameMode;

	// BrnGuiEventTypeDefs.h:4816
	CgsID mDestinationLandmarkID;

}

// BrnGuiEventTypeDefs.h:4826
struct BrnGui::GuiEventScoreUpdate : public GuiEvent<419> {
	// BrnGuiEventTypeDefs.h:4829
	BrnGameState::ECurrentMedalTargetTime meMedal;

	// BrnGuiEventTypeDefs.h:4830
	float32_t mfCurrentTime;

	// BrnGuiEventTypeDefs.h:4831
	float32_t mfTargetTime;

	// BrnGuiEventTypeDefs.h:4832
	float32_t mfDistance;

	// BrnGuiEventTypeDefs.h:4834
	bool mbTimerActive;

}

// BrnGuiEventTypeDefs.h:4847
struct BrnGui::GuiRaceCheckpointReached : public GuiEvent<420> {
	// BrnGuiEventTypeDefs.h:4849
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:4850
	EGlobalRaceCarIndex meGlobalRaceCarIndex;

	// BrnGuiEventTypeDefs.h:4851
	int32_t miCheckpointIndex;

}

// BrnGuiEventTypeDefs.h:4860
struct BrnGui::GuiRoadRageScoreUpdate : public GuiEvent<421> {
	// BrnGuiEventTypeDefs.h:4862
	int32_t miCurrentTakedowns;

	// BrnGuiEventTypeDefs.h:4863
	int32_t miTargetTakedowns;

}

// BrnGuiEventTypeDefs.h:4872
struct BrnGui::GuiEventRoadRageTimeExtended : public GuiEvent<422> {
	// BrnGuiEventTypeDefs.h:4874
	uint32_t muExtensiontime;

}

// BrnGuiEventTypeDefs.h:4883
struct BrnGui::GuiCrashScoreUpdate : public GuiEvent<429> {
	// BrnGuiEventTypeDefs.h:4885
	int32_t miCarsCrashed;

	// BrnGuiEventTypeDefs.h:4886
	int32_t miComboMultiplier;

	// BrnGuiEventTypeDefs.h:4887
	int32_t miScoreMultiplier;

	// BrnGuiEventTypeDefs.h:4888
	float32_t mfDistanceTravelled;

}

// BrnGuiEventTypeDefs.h:4897
struct BrnGui::GuiAttackScoreUpdate : public GuiEvent<423> {
	// BrnGuiEventTypeDefs.h:4899
	int32_t miCurrentScore;

	// BrnGuiEventTypeDefs.h:4900
	int32_t miTargetScore;

	// BrnGuiEventTypeDefs.h:4901
	int32_t miComboScore;

	// BrnGuiEventTypeDefs.h:4902
	int32_t miComboMultiplier;

	// BrnGuiEventTypeDefs.h:4903
	uint32_t muCurrentStunts;

	// BrnGuiEventTypeDefs.h:4904
	uint32_t muAllStunts;

	// BrnGuiEventTypeDefs.h:4905
	float32_t mfComboWarningTimeActive;

	// BrnGuiEventTypeDefs.h:4906
	bool mbComboWarningActive;

	// BrnGuiEventTypeDefs.h:4907
	bool mbComboInProgress;

	// BrnGuiEventTypeDefs.h:4909
	StuntToDisplay[1] maStunts;

}

// BrnGuiEventTypeDefs.h:4918
struct BrnGui::GuiPursuitScoreUpdate : public GuiEvent<427> {
	// BrnGuiEventTypeDefs.h:4920
	int32_t miRivalDamage;

}

// BrnGuiEventTypeDefs.h:4947
struct BrnGui::GuiEventStatsResponse : public GuiEvent<431> {
	// BrnGuiEventTypeDefs.h:4950
	int32_t miDistanceOnline;

	// BrnGuiEventTypeDefs.h:4951
	int32_t miDistanceOffline;

	// BrnGuiEventTypeDefs.h:4952
	int32_t miTimePlayed;

	// BrnGuiEventTypeDefs.h:4953
	int32_t miCarsCollected;

	// BrnGuiEventTypeDefs.h:4954
	int32_t miCarsTotal;

	// BrnGuiEventTypeDefs.h:4955
	int32_t miPowerParkingBest;

	// BrnGuiEventTypeDefs.h:4956
	int32_t miPowerParkingBest_BetweenOtherPlayers;

	// BrnGuiEventTypeDefs.h:4958
	int32_t miAllMedalsEarned;

	// BrnGuiEventTypeDefs.h:4959
	int32_t miAllMedalsTotal;

	// BrnGuiEventTypeDefs.h:4961
	int32_t miEventMedalsEarned;

	// BrnGuiEventTypeDefs.h:4962
	int32_t miEventMedalsTotal;

	// BrnGuiEventTypeDefs.h:4964
	int32_t miRoadRuleMedalsEarned;

	// BrnGuiEventTypeDefs.h:4965
	int32_t miRoadRuleMedalsTotal;

	// BrnGuiEventTypeDefs.h:4967
	int32_t miRoadRules;

	// BrnGuiEventTypeDefs.h:4968
	int32_t mRoadsRuledTotal;

	// BrnGuiEventTypeDefs.h:4970
	int32_t miDrivers;

	// BrnGuiEventTypeDefs.h:4971
	int32_t miDriversTot;

	// BrnGuiEventTypeDefs.h:4973
	int32_t miGolds;

	// BrnGuiEventTypeDefs.h:4974
	int32_t miSilvers;

	// BrnGuiEventTypeDefs.h:4975
	int32_t miBronzes;

	// BrnGuiEventTypeDefs.h:4977
	int32_t miJumps;

	// BrnGuiEventTypeDefs.h:4978
	int32_t miJumpTot;

	// BrnGuiEventTypeDefs.h:4979
	int32_t miSmashes;

	// BrnGuiEventTypeDefs.h:4980
	int32_t miSmashTot;

	// BrnGuiEventTypeDefs.h:4981
	int32_t miStunts;

	// BrnGuiEventTypeDefs.h:4982
	int32_t miStuntTot;

	// BrnGuiEventTypeDefs.h:4984
	int32_t miSignatureTDs;

	// BrnGuiEventTypeDefs.h:4985
	int32_t miSignatureTDsTot;

	// BrnGuiEventTypeDefs.h:4987
	int32_t miTotalTakedowns;

	// BrnGuiEventTypeDefs.h:4989
	int32_t miStandardTakedowns;

	// BrnGuiEventTypeDefs.h:4990
	int32_t miVerticalTakedowns;

	// BrnGuiEventTypeDefs.h:4991
	int32_t miTBoneTakedowns;

	// BrnGuiEventTypeDefs.h:4992
	int32_t miAftertouchTakedowns;

	// BrnGuiEventTypeDefs.h:4994
	int32_t miCarTakedowns;

	// BrnGuiEventTypeDefs.h:4995
	int32_t miVanTakedowns;

	// BrnGuiEventTypeDefs.h:4996
	int32_t miBusTakedowns;

	// BrnGuiEventTypeDefs.h:4997
	int32_t miBigRigTakedowns;

	// BrnGuiEventTypeDefs.h:5000
	CgsID mFaveCarId;

	// BrnGuiEventTypeDefs.h:5001
	CgsID mForgottenCarId;

	// BrnGuiEventTypeDefs.h:5003
	CgsID mGreatestRivalId;

	// BrnGuiEventTypeDefs.h:5006
	int32_t mRoadsRuledTime;

	// BrnGuiEventTypeDefs.h:5007
	int32_t mRoadsRuledCrash;

	// BrnGuiEventTypeDefs.h:5008
	int32_t mRoadsRuledComplete;

	// BrnGuiEventTypeDefs.h:5009
	int32_t mNumberOfRoads;

	// BrnGuiEventTypeDefs.h:5012
	int32_t miWinsToNextRank;

	// BrnGuiEventTypeDefs.h:5013
	int32_t miCarsToShutdown;

	// BrnGuiEventTypeDefs.h:5014
	int32_t miPercentageComplete;

	// BrnGuiEventTypeDefs.h:5015
	int32_t miDriveThrusFound;

	// BrnGuiEventTypeDefs.h:5018
	int32_t miRacesWon;

	// BrnGuiEventTypeDefs.h:5019
	int32_t miRoadRagesWon;

	// BrnGuiEventTypeDefs.h:5020
	int32_t miMarkedManWon;

	// BrnGuiEventTypeDefs.h:5021
	int32_t miChallengesWon;

	// BrnGuiEventTypeDefs.h:5022
	int32_t miStuntRunsWon;

	// BrnGuiEventTypeDefs.h:5023
	int32_t miBestShowtime;

	// BrnGuiEventTypeDefs.h:5024
	int32_t miBestRoadRageTakedownCount;

	// BrnGuiEventTypeDefs.h:5025
	int32_t miBestBoostChain;

	// BrnGuiEventTypeDefs.h:5026
	int32_t miBestDrift;

	// BrnGuiEventTypeDefs.h:5027
	int32_t miBestOncoming;

	// BrnGuiEventTypeDefs.h:5028
	float32_t mfBestAirtime;

	// BrnGuiEventTypeDefs.h:5029
	float32_t mfBestSpin;

	// BrnGuiEventTypeDefs.h:5030
	int32_t miBestNumBarrelRolls;

	// BrnGuiEventTypeDefs.h:5031
	int32_t miHighestStuntScore;

	// BrnGuiEventTypeDefs.h:5033
	int32_t miEventsFound;

	// BrnGuiEventTypeDefs.h:5034
	int32_t miTotalEvents;

	// BrnGuiEventTypeDefs.h:5037
	int32_t miBodyShopsFound;

	// BrnGuiEventTypeDefs.h:5038
	int32_t miGasStationsFound;

	// BrnGuiEventTypeDefs.h:5039
	int32_t miPaintShopsFound;

	// BrnGuiEventTypeDefs.h:5040
	int32_t miJunkYardsFound;

	// BrnGuiEventTypeDefs.h:5042
	int32_t miBodyShopsTotal;

	// BrnGuiEventTypeDefs.h:5043
	int32_t miGasStationsTotal;

	// BrnGuiEventTypeDefs.h:5044
	int32_t miPaintShopsTotal;

	// BrnGuiEventTypeDefs.h:5045
	int32_t miJunkYardsTotal;

	// BrnGuiEventTypeDefs.h:5047
	int32_t miTotalDriveThrus;

	// BrnGuiEventTypeDefs.h:5048
	int32_t miTotalDriveThrusFound;

	// BrnGuiEventTypeDefs.h:5050
	int32_t[5] mBillboardStunts;

	// BrnGuiEventTypeDefs.h:5051
	int32_t[5] mJumpStunts;

	// BrnGuiEventTypeDefs.h:5052
	int32_t[5] mSmashStunts;

	// BrnGuiEventTypeDefs.h:5054
	int32_t[5] mMaxBillboardStunts;

	// BrnGuiEventTypeDefs.h:5055
	int32_t[5] mMaxJumpStunts;

	// BrnGuiEventTypeDefs.h:5056
	int32_t[5] mMaxSmashStunts;

}

// BrnGuiEventTypeDefs.h:5076
struct BrnGui::GuiEventRankProgressResponse : public GuiEvent<433> {
	// BrnGuiEventTypeDefs.h:5089
	int32_t miRaceRank;

	// BrnGuiEventTypeDefs.h:5090
	int32_t miRoadRageRank;

	// BrnGuiEventTypeDefs.h:5091
	int32_t miStuntAttackRank;

	// BrnGuiEventTypeDefs.h:5092
	int32_t miMarkedManRank;

	// BrnGuiEventTypeDefs.h:5094
	int32_t miOfflineRaceRankWins;

	// BrnGuiEventTypeDefs.h:5095
	int32_t miRoadRageRankWins;

	// BrnGuiEventTypeDefs.h:5096
	int32_t miStuntAttackRankWins;

	// BrnGuiEventTypeDefs.h:5097
	int32_t miMarkedManRankWins;

	// BrnGuiEventTypeDefs.h:5100
	extern const int32_t KI_PLAYER_HAS_FINISHED_LAST_RANK = [255, 255, 255, 255, 255, 255, 255, 255];

private:
	// BrnGuiEventTypeDefs.h:5104
	int32_t miCurrentRank;

public:
	// BrnGuiEventTypeDefs.h:5080
	void Construct(const RankInfoResponseAction *);

	// BrnGuiEventTypeDefs.h:5083
	bool HasPlayerFinishedLastRank() const;

	// BrnGuiEventTypeDefs.h:5087
	int32_t GetPlayerRank() const;

}

// BrnGuiEventTypeDefs.h:5113
struct BrnGui::GuiRivalryStatusChange : public GuiEvent<434> {
	// BrnGuiEventTypeDefs.h:5125
	CgsID mRivalID;

	// BrnGuiEventTypeDefs.h:5126
	CgsID mCarID;

	// BrnGuiEventTypeDefs.h:5127
	BrnGui::GuiRivalryStatusChange::ERivalryLevels meNewStatus;

}

// BrnGuiEventTypeDefs.h:5136
struct BrnGui::GuiRivalIsFleeing : public GuiEvent<435> {
	// BrnGuiEventTypeDefs.h:5138
	CgsID mRivalID;

	// BrnGuiEventTypeDefs.h:5139
	CgsID mCarID;

}

// BrnGuiEventTypeDefs.h:5175
struct BrnGui::GuiEventRivalInfoRequest : public GuiEvent<438> {
	// BrnGuiEventTypeDefs.h:5177
	CgsID mRivalID;

}

// BrnGuiEventTypeDefs.h:5186
struct BrnGui::GuiEventRivalInfoResponse : public GuiEvent<439> {
	// BrnGuiEventTypeDefs.h:5188
	RivalPanelData mRivalData;

}

// BrnGuiEventTypeDefs.h:5198
struct BrnGui::GuiBlueTeamIsEscapingEvent : public GuiEvent<441> {
}

// BrnGuiEventTypeDefs.h:5208
struct BrnGui::GuiBlueTeamIsBehindYouEvent : public GuiEvent<442> {
}

// BrnGuiEventTypeDefs.h:5218
struct BrnGui::GuiPlayerEliminatedEvent : public GuiEvent<445> {
	// BrnGuiEventTypeDefs.h:5220
	EActiveRaceCarIndex meActiveRaceCarIndex;

}

// BrnGuiEventTypeDefs.h:5229
struct BrnGui::GuiLocalPlayerEliminatedEvent : public GuiEvent<446> {
}

// BrnGuiEventTypeDefs.h:5239
struct BrnGui::GuiLastBlueTeamMemberEvent : public GuiEvent<447> {
}

// BrnGuiEventTypeDefs.h:5249
struct BrnGui::GuiLeaderPassedMileBoundaryEvent : public GuiEvent<443> {
	// BrnGuiEventTypeDefs.h:5251
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:5252
	float_t mfDistanceToFinishInMetres;

}

// BrnGuiEventTypeDefs.h:5261
struct BrnGui::GuiLeaderPassedKMBoundaryEvent : public GuiEvent<444> {
	// BrnGuiEventTypeDefs.h:5263
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:5264
	float_t mfDistanceToFinishInMetres;

}

// BrnGuiEventTypeDefs.h:5273
struct BrnGui::GuiTraitorousTakedownEvent : public GuiEvent<448> {
	// BrnGuiEventTypeDefs.h:5275
	EActiveRaceCarIndex meAggActiveRaceCarIndex;

}

// BrnGuiEventTypeDefs.h:5284
struct BrnGui::GuiBHRCheckpointReachedEvent : public GuiEvent<449> {
	// BrnGuiEventTypeDefs.h:5286
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:5287
	int32_t miNumCheckpointsToGo;

}

// BrnGuiEventTypeDefs.h:5299
struct BrnGui::GuiHUDMessageStuntPerformed : public GuiEvent<424> {
	// BrnGuiEventTypeDefs.h:5301
	StuntInfo mStuntInfo;

}

// BrnGuiEventTypeDefs.h:5313
struct BrnGui::GuiHUDMessageComboPerformed : public GuiEvent<425> {
	// BrnGuiEventTypeDefs.h:5315
	int32_t miScore;

	// BrnGuiEventTypeDefs.h:5316
	bool mbBestScore;

}

// BrnGuiEventTypeDefs.h:5328
struct BrnGui::GuiHUDMessageStuntTimeUp : public GuiEvent<426> {
}

// BrnGuiEventTypeDefs.h:5341
struct BrnGui::GuiHUDMessageShowtimeMultiplier : public GuiEvent<394> {
	// BrnGuiEventTypeDefs.h:5343
	int32_t miNewMultiplier;

	// BrnGuiEventTypeDefs.h:5344
	int32_t miMultiplierEarned;

}

// BrnGuiEventTypeDefs.h:5356
struct BrnGui::GuiHUDMessageSignSmashed : public GuiEvent<395> {
	// BrnGuiEventTypeDefs.h:5358
	int32_t miPointsAwarded;

}

// BrnGuiEventTypeDefs.h:5370
struct BrnGui::GuiHUDMessageCrushCombo : public GuiEvent<396> {
	// BrnGuiEventTypeDefs.h:5372
	int32_t miCrushComboCount;

}

// BrnGuiEventTypeDefs.h:5384
struct BrnGui::GuiGenericHUDMessage : public GuiEvent<147> {
	// BrnGuiEventTypeDefs.h:5386
	char[64] mTitle;

	// BrnGuiEventTypeDefs.h:5387
	char[64] mSubtitle;

}

// BrnGuiEventTypeDefs.h:5399
struct BrnGui::GuiHUDMessageBHRRunnerCrashed : public GuiEvent<450> {
	// BrnGuiEventTypeDefs.h:5401
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:5402
	int32_t miNumCrashesToGo;

}

// BrnGuiEventTypeDefs.h:5411
struct BrnGui::GuiOnlineTeamChangeEvent : public GuiEvent<440> {
	// BrnGuiEventTypeDefs.h:5413
	EActiveRaceCarIndex meActiveRaceCarIndex;

}

// BrnGuiEventTypeDefs.h:5422
struct BrnGui::GuiNetworkRemotePlayerDisconnectEvent : public GuiEvent<265> {
private:
	// BrnGuiEventTypeDefs.h:5439
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:5440
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

public:
	// BrnGuiEventTypeDefs.h:5426
	void SetActiveRaceCarIndex(EActiveRaceCarIndex);

	// BrnGuiEventTypeDefs.h:5429
	EActiveRaceCarIndex GetActiveRaceCarIndex() const;

	// BrnGuiEventTypeDefs.h:5433
	void SetNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID);

	// BrnGuiEventTypeDefs.h:5436
	RoadRulesRecvData::NetworkPlayerID GetNetworkPlayerID() const;

}

// BrnGuiEventTypeDefs.h:5460
struct BrnGui::GuiEventNetworkSplashEvent : public GuiEvent<267> {
	// BrnGuiEventTypeDefs.h:5471
	BrnGui::GuiEventNetworkSplashEvent::ESplashState meSplashState;

}

// BrnGuiEventTypeDefs.h:5558
struct BrnGui::GuiEventShowFreeburnChallenge : public GuiEvent<567> {
	// BrnGuiEventTypeDefs.h:5560
	CgsID mChallengeID;

}

// BrnGuiEventTypeDefs.h:5581
struct BrnGui::GuiEventInviteFailed : public GuiEvent<131> {
	// BrnGuiEventTypeDefs.h:5584
	BrnNetwork::BrnNetworkModuleIO::EInviteFailReason meInviteFailedReason;

}

// BrnGuiEventTypeDefs.h:5595
struct BrnGui::GuiAchievementsEarned : public GuiEvent<571> {
	// BrnGuiEventTypeDefs.h:5597
	BitArray<60u> mAchievementsEarned;

}

// BrnGuiEventTypeDefs.h:5692
struct BrnGui::GuiOverlayRequest : public GuiEvent<182> {
	// BrnGuiEventTypeDefs.h:5695
	extern const int32_t MKI_MAX_PARAMS_IN_MESSAGE = 2;

	// BrnGuiEventTypeDefs.h:5696
	CgsID mOverlayID;

private:
	// BrnGuiEventTypeDefs.h:5757
	GuiPopupParameter[2] maMessageParams;

	// BrnGuiEventTypeDefs.h:5758
	GuiPopupParameter mButton1Param;

	// BrnGuiEventTypeDefs.h:5759
	GuiPopupParameter mButton2Param;

	// BrnGuiEventTypeDefs.h:5760
	int32_t miMessageParamsUsed;

	// BrnGuiEventTypeDefs.h:5761
	bool mbButon1ParamUsed;

	// BrnGuiEventTypeDefs.h:5762
	bool mbButon2ParamUsed;

public:
	// BrnGuiEventTypeDefs.h:5701
	void Construct(const char *);

	// BrnGuiEventTypeDefs.h:5706
	void Construct(CgsID);

	// BrnGuiEventTypeDefs.h:5712
	void AddMessageParam(CgsGui::PopupParamTypes, const char *);

	// BrnGuiEventTypeDefs.h:5718
	void AddButton1Param(CgsGui::PopupParamTypes, const char *);

	// BrnGuiEventTypeDefs.h:5724
	void AddButton2Param(CgsGui::PopupParamTypes, const char *);

	// BrnGuiEventTypeDefs.h:5730
	void GetMessageParam(GuiPopupParameter *, int32_t) const;

	// BrnGuiEventTypeDefs.h:5735
	void GetButton1Param(GuiPopupParameter *) const;

	// BrnGuiEventTypeDefs.h:5740
	void GetButton2Param(GuiPopupParameter *) const;

	// BrnGuiEventTypeDefs.h:5744
	int32_t GetMessageParamCount() const;

	// BrnGuiEventTypeDefs.h:5748
	bool IsButton1ParamUsed() const;

	// BrnGuiEventTypeDefs.h:5752
	bool IsButton2ParamUsed() const;

}

// BrnGuiEventTypeDefs.h:5815
struct BrnGui::GuiOverlayWaitFinishRequest : public GuiEvent<186> {
	// BrnGuiEventTypeDefs.h:5818
	CgsID mOverlayId;

public:
	// BrnGuiEventTypeDefs.h:5823
	void Construct(const char *);

	// BrnGuiEventTypeDefs.h:5828
	void Construct(CgsID);

}

// BrnGuiEventTypeDefs.h:5833
struct BrnGui::GuiOverlayCompleteEvent : public GuiEvent<187> {
	// BrnGuiEventTypeDefs.h:5846
	CgsID mOverlayId;

	// BrnGuiEventTypeDefs.h:5847
	BrnGui::GuiOverlayCompleteEvent::LeaveMethod meLeaveMethod;

public:
	// BrnGuiEventTypeDefs.h:5853
	void Construct(const char *, BrnGui::GuiOverlayCompleteEvent::LeaveMethod);

	// BrnGuiEventTypeDefs.h:5859
	void Construct(CgsID, BrnGui::GuiOverlayCompleteEvent::LeaveMethod);

}

// BrnGuiEventTypeDefs.h:5887
struct BrnGui::GuiNetworkCustomRouteCreated : public GuiEvent<284> {
	// BrnGuiEventTypeDefs.h:5889
	int32_t miNumberCheckpoints;

	// BrnGuiEventTypeDefs.h:5890
	int32_t miRoundNumber;

}

// BrnGuiEventTypeDefs.h:5900
struct BrnGui::GuiCarSelectReadyToExitEvent : public GuiEvent<549> {
}

// BrnGuiEventTypeDefs.h:5911
struct BrnGui::GuiOnlineCarStatusEvent : public GuiEvent<548> {
	// BrnGuiEventTypeDefs.h:5913
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:5914
	bool mbInCarSelect;

}

// BrnGuiEventTypeDefs.h:5924
struct BrnGui::GuiCarSelectionChangedDropIn : public GuiEvent<550> {
	// BrnGuiEventTypeDefs.h:5926
	CgsID mCarId;

}

// BrnGuiEventTypeDefs.h:5936
struct BrnGui::GuiCarSelectionChangedOnline : public GuiEvent<551> {
	// BrnGuiEventTypeDefs.h:5938
	CgsID mCarId;

}

// BrnGuiEventTypeDefs.h:5987
struct BrnGui::GuiPFXStartBackgroundHookEvent : public GuiEvent<488> {
	// BrnGuiEventTypeDefs.h:5989
	uint32_t muGuid;

	// BrnGuiEventTypeDefs.h:5990
	GuiPFXHookEvent::HookNameString macName;

	// BrnGuiEventTypeDefs.h:5991
	float32_t mfMaximumWeight;

}

// BrnGuiEventTypeDefs.h:5995
struct BrnGui::GuiPFXStopBackgroundHookEvent : public GuiEvent<489> {
	// BrnGuiEventTypeDefs.h:5997
	uint32_t muGuid;

	// BrnGuiEventTypeDefs.h:5998
	GuiPFXHookEvent::HookNameString macName;

}

// BrnGuiEventTypeDefs.h:6010
struct BrnGui::GuiPFXHookStopEvent : public GuiEvent<486> {
	// BrnGuiEventTypeDefs.h:6012
	uint32_t muGuid;

	// BrnGuiEventTypeDefs.h:6013
	GuiPFXHookEvent::HookNameString macName;

}

// BrnGuiEventTypeDefs.h:6061
struct BrnGui::GuiTelemetryEvent : public GuiEvent<321> {
	// BrnGuiEventTypeDefs.h:6063
	TelemetryData mEventData;

}

// BrnGuiEventTypeDefs.h:6150
struct BrnGui::GuiImageGalleryRequestEvent : public GuiEvent<507> {
	// BrnGuiEventTypeDefs.h:6153
	int32_t miImageIndex;

	// BrnGuiEventTypeDefs.h:6154
	int32_t miSlotIndex;

	// BrnGuiEventTypeDefs.h:6155
	BrnGameState::GameStateModuleIO::EImageGalleryRequest meImageGalleryRequest;

	// BrnGuiEventTypeDefs.h:6156
	BrnGameState::GameStateModuleIO::EImageGalleryType meImageGalleryImageType;

}

// BrnGuiEventTypeDefs.h:6168
struct BrnGui::GuiImageGalleryImageInfoEvent : public GuiEvent<508> {
	// BrnGuiEventTypeDefs.h:6171
	DateAndTime mCaptureDate;

	// BrnGuiEventTypeDefs.h:6172
	WorldRegion mWorldRegion;

	// BrnGuiEventTypeDefs.h:6173
	int32_t miNumCaptures;

	// BrnGuiEventTypeDefs.h:6174
	int32_t miSlotIndex;

	// BrnGuiEventTypeDefs.h:6175
	PlayerName mPlayerName;

	// BrnGuiEventTypeDefs.h:6176
	bool mbLocked;

	// BrnGuiEventTypeDefs.h:6177
	bool mbHasDeleted;

}

// BrnGuiEventTypeDefs.h:6189
struct BrnGui::GuiImageGalleryRequestCollectedCountEvent : public GuiEvent<509> {
	// BrnGuiEventTypeDefs.h:6192
	BrnGameState::GameStateModuleIO::EImageGalleryType meImageGalleryImageType;

}

// BrnGuiEventTypeDefs.h:6204
struct BrnGui::GuiImageGalleryCollectedCountEvent : public GuiEvent<510> {
	// BrnGuiEventTypeDefs.h:6207
	BrnGameState::GameStateModuleIO::EImageGalleryType meImageGalleryImageType;

	// BrnGuiEventTypeDefs.h:6208
	int32_t miCollectedCount;

}

// BrnGuiEventTypeDefs.h:6220
struct BrnGui::GuiImageGalleryRequestCollectedDataEvent : public GuiEvent<511> {
	// BrnGuiEventTypeDefs.h:6223
	BrnGameState::GameStateModuleIO::EImageGalleryType meImageGalleryImageType;

}

// BrnGuiEventTypeDefs.h:6235
struct BrnGui::GuiImageGalleryCollectedDataEvent : public GuiEvent<512> {
	// BrnGuiEventTypeDefs.h:6238
	BrnGameState::GameStateModuleIO::EImageGalleryType meImageGalleryImageType;

	// BrnGuiEventTypeDefs.h:6239
	FastBitArray<30> mActiveBitArray;

}

// BrnGuiEventTypeDefs.h:6261
struct BrnGui::GuiReplayStatusEvent : public GuiEvent<514> {
	// BrnGuiEventTypeDefs.h:6263
	StatusInterface mInterface;

}

// BrnGuiEventTypeDefs.h:6275
struct BrnGui::GuiReplaySetModeEvent : public GuiEvent<515> {
	// BrnGuiEventTypeDefs.h:6277
	int32_t miMode;

}

// BrnGuiEventTypeDefs.h:6347
struct BrnGui::GuiNewBurnoutHudMessageEvent : public GuiEvent<527> {
	// BrnGuiEventTypeDefs.h:6361
	CgsID mRoadID;

	// BrnGuiEventTypeDefs.h:6362
	BrnGui::GuiNewBurnoutHudMessageEvent::EBurnoutSkillzMessageTypes meMessageType;

	// BrnGuiEventTypeDefs.h:6363
	BrnGameState::BurnoutSkillzData::EBurnoutSkillType meSkill;

	// BrnGuiEventTypeDefs.h:6364
	EActiveRaceCarIndex meNewOwner;

	// BrnGuiEventTypeDefs.h:6365
	EActiveRaceCarIndex mePreviousOwner;

}

// BrnGuiEventTypeDefs.h:6425
struct BrnGui::GuiOptionsBrightnessContrast : public GuiEvent<530> {
	// BrnGuiEventTypeDefs.h:6427
	int32_t mBrightness;

	// BrnGuiEventTypeDefs.h:6428
	int32_t mContrast;

}

// BrnGuiEventTypeDefs.h:6439
struct BrnGui::GuiOptionsBrightnessContrastPostFxControl : public GuiEvent<531> {
	// BrnGuiEventTypeDefs.h:6441
	bool mbEnablePostFx;

	// BrnGuiEventTypeDefs.h:6442
	ResourceHandle mTextureHandle;

}

// BrnGuiEventTypeDefs.h:6462
struct BrnGui::GuiEventOnlineAccountSettings : public GuiEvent<123> {
	// BrnGuiEventTypeDefs.h:6464
	bool mbAgreeToShareInfoEA;

	// BrnGuiEventTypeDefs.h:6465
	bool mbAgreeToShareInfoPartners;

	// BrnGuiEventTypeDefs.h:6466
	bool mbTelemetryEnable;

}

// BrnGuiEventTypeDefs.h:6477
struct BrnGui::GuiEventOnlineAccountUpdate : public GuiEvent<124> {
	// BrnGuiEventTypeDefs.h:6479
	bool mbAgreeToShareInfoEA;

	// BrnGuiEventTypeDefs.h:6480
	bool mbAgreeToShareInfoPartners;

	// BrnGuiEventTypeDefs.h:6481
	bool mbTelemetryEnable;

}

// BrnGuiEventTypeDefs.h:6492
struct BrnGui::GuiEventRequestCompressedCamPic : public GuiEvent<553> {
	// BrnGuiEventTypeDefs.h:6494
	int32_t miQualitySetting;

	// BrnGuiEventTypeDefs.h:6495
	renderengine::PixelFormat meCompressedFormat;

	// BrnGuiEventTypeDefs.h:6496
	NetworkTexture * mpTextureToCompressedInto;

}

// BrnGuiEventTypeDefs.h:6507
struct BrnGui::GuiEventCamPicCompressed : public GuiEvent<554> {
	// BrnGuiEventTypeDefs.h:6509
	int32_t miCompressedPixelSize;

	// BrnGuiEventTypeDefs.h:6510
	renderengine::PixelFormat meCompressedFormat;

	// BrnGuiEventTypeDefs.h:6511
	char * mpcCompressedPixels;

}

// BrnGuiEventTypeDefs.h:6540
struct BrnGui::GuiChallengeSelectedEvent : public GuiEvent<558> {
	// BrnGuiEventTypeDefs.h:6550
	CgsID mChallengeID;

	// BrnGuiEventTypeDefs.h:6551
	BrnGui::GuiChallengeSelectedEvent::EFreeburnChallengeAction meAction;

	// BrnGuiEventTypeDefs.h:6552
	BrnResource::ChallengeListEntry::EFreeburnChallengeStyle meFreeburnChallengeStyle;

}

// BrnGuiEventTypeDefs.h:6556
struct BrnGui::GuiEventRequestTraining : public GuiEvent<557> {
	// BrnGuiEventTypeDefs.h:6558
	BrnProgression::ETrainingType meTrainingType;

}

// BrnGuiEventTypeDefs.h:6607
struct BrnGui::GuiChallengeEndEvent : public GuiEvent<563> {
	// BrnGuiEventTypeDefs.h:6609
	CgsID mChallengeID;

	// BrnGuiEventTypeDefs.h:6610
	BrnGameState::EChallengeStatus meChallengeStatus;

	// BrnGuiEventTypeDefs.h:6611
	int32_t miNumChallengesComplete;

	// BrnGuiEventTypeDefs.h:6612
	int32_t miTotalNumChallenges;

	// BrnGuiEventTypeDefs.h:6613
	bool mbAbortingToStartNewChallenge;

}

// BrnGuiEventTypeDefs.h:6651
struct BrnGui::GuiAudioEventResults : public GuiEvent<460> {
	// BrnGuiEventTypeDefs.h:6659
	int32_t miStuntDisplayedResultScore;

	// BrnGuiEventTypeDefs.h:6660
	float32_t mfShowtimeDisplayedScore;

public:
	// BrnGuiEventTypeDefs.h:6657
	void Construct(int32_t, float32_t);

}

// BrnGuiEventTypeDefs.h:1199
extern bool msbWorstCaseHudActive;

// BrnGuiEventTypeDefs.h:1200
extern float32_t msfWorstCaseTimeElapsed;

// BrnGuiEventTypeDefs.h:1753
extern bool msbForceWorstCase;

// BrnGuiEventTypeDefs.h:1942
extern bool msbForceWorstCase;

// BrnGuiEventTypeDefs.h:3049
extern bool msbWorstCaseHudActive;

// BrnGuiEventTypeDefs.h:3074
extern bool msbWorstCaseHudActive;

// BrnGuiEventTypeDefs.h:3075
extern bool msbStatusSwitch;

// CgsGuiShared.h:45
namespace BrnGui {
	// BrnGuiEventTypeDefs.h:95
	using BrnNetwork::BrnNetworkModuleIO;

	// BrnGuiEventTypeDefs.h:103
	enum StuntType {
		E_STUNTTYPE_JUMP = 0,
		E_STUNTTYPE_SMASH = 1,
		E_STUNTTYPE_STUNT = 2,
		E_STUNTTYPE_COUNT = 3,
	}

	// BrnGuiEventTypeDefs.h:113
	enum RoadRuleLeaderType {
		E_ROADRULELEADERTYPE_AI = 0,
		E_ROADRULELEADERTYPE_PLAYER = 1,
		E_ROADRULELEADERTYPE_FRIEND = 2,
		E_ROADRULELEADERTYPE_COUNT = 3,
	}

	// Declaration
	struct GuiEventTickerCustomMessage {
		// BrnGuiEventTypeDefs.h:313
		enum EStringType {
			E_STRINGTYPE_NONE = 0,
			E_STRINGTYPE_TEXT = 1,
			E_STRINGTYPE_STRINGID = 2,
			E_STRINGTYPE_NUM = 3,
		}

	}

	// Declaration
	struct GuiEventOnlineInviteEvent {
		// BrnGuiEventTypeDefs.h:588
		enum EInviteRequestedAction {
			E_INVITEACTION_SEND = 0,
			E_INVITEACTION_REVOKE = 1,
			E_INVITEACTION_ACCEPT = 2,
			E_INVITEACTION_DECLINE = 3,
			E_INVITEACTION_JOIN = 4,
			E_INVITEACTION_SIGN_IN = 5,
			E_INVITEACTION_INSTANT_FREEBURN = 6,
			E_INVITEACTION_COUNT = 7,
		}

	}

	// Declaration
	struct GuiEventChangeReplayState {
		// BrnGuiEventTypeDefs.h:861
		enum ReplayState {
			E_REPLAYSTATE_INVISIBLE = 0,
			E_REPLAYSTATE_PLAYING = 1,
			E_REPLAYSTATE_RECORDING = 2,
			E_REPLAYSTATE_COUNT = 3,
		}

	}

	// BrnGuiEventTypeDefs.h:883
	enum GuiFlow {
		E_GUIFLOW_SCREEN = 0,
		E_GUIFLOW_HUD = 1,
		E_GUIFLOW_OVERLAY = 2,
		E_GUIFLOW_COUNT = 3,
		E_GUIFLOW_FIRST = 0,
	}

	// Declaration
	struct GuiEventRoadRuleUpcomingRoads {
		// BrnGuiEventTypeDefs.h:1218
		enum ERoadSide {
			E_ROAD_LEFT = 0,
			E_ROAD_RIGHT = 1,
			E_ROAD_COUNT = 2,
		}

		// BrnGuiEventTypeDefs.h:1226
		enum ERoadState {
			E_ROADSTATE_NORMAL = 0,
			E_ROADSTATE_SUGGESTED = 1,
			E_ROADSTATE_WRONG = 2,
			E_ROADSTATE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventSetRoadRuleScoreMode {
		// BrnGuiEventTypeDefs.h:1321
		enum ERoadPanelModes {
			E_ROAD_PANEL_MODE_OFFLINE = 0,
			E_ROAD_PANEL_MODE_ONLINE = 1,
			E_ROAD_PANEL_MODE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventPreRaceMessages {
		// BrnGuiEventTypeDefs.h:1579
		enum ERelationshipTypes {
			E_RELATIONSHIP_GOOD = 0,
			E_RELATIONSHIP_BAD = 1,
			E_RELATIONSHIP_NEUTRAL = 2,
			E_RELATIONSHIP_COUNT = 3,
		}

		// BrnGuiEventTypeDefs.h:1590
		struct MessageInfo {
			// BrnGuiEventTypeDefs.h:1592
			extern const int32_t KI_NUM_MESSAGE_STRINGS = 3;

			// BrnGuiEventTypeDefs.h:1593
			extern const int32_t KI_MAX_LENGTH_STRING_ID = 128;

			// BrnGuiEventTypeDefs.h:1595
			extern const int32_t KI_NUM_PARAMETERS = 1;

			// BrnGuiEventTypeDefs.h:1596
			extern const int32_t KI_MAX_LENGTH_PARAMETERS = 20;

			// BrnGuiEventTypeDefs.h:1600
			char[3][128] maacMessageIDs;

			// BrnGuiEventTypeDefs.h:1602
			int32_t miNumMsgIDs;

			// BrnGuiEventTypeDefs.h:1603
			char[3][20] maacMessageParameters;

			// BrnGuiEventTypeDefs.h:1605
			int32_t[3] maiNumParams;

			// BrnGuiEventTypeDefs.h:1608
			char[128] macGamerName;

			// BrnGuiEventTypeDefs.h:1610
			BrnGui::GuiEventPreRaceMessages::ERelationshipTypes meRelationshipType;

		}

	}

	// Declaration
	struct GuiEventUpdateSatNav {
		// BrnGuiEventTypeDefs.h:1675
		struct SatNavIconInfo {
			// BrnGuiEventTypeDefs.h:1678
			enum SatNavIconType {
				E_SATNAVICON_PLAYER_CAR = 0,
				E_SATNAVICON_MARKED_MAN = 1,
				E_SATNAVICON_NETWORKRIVAL = 2,
				E_SATNAVICON_RIVAL = 3,
				E_SATNAVICON_LANDMARK = 4,
				E_SATNAVICON_JUNCTION = 5,
				E_SATNAVICON_FREEBURN_CHALLENGE = 6,
				E_SATNAVICON_JUNKYARD = 7,
				E_SATNAVICON_CAR_PARK = 8,
				E_SATNAVICON_BODYSHOP = 9,
				E_SATNAVICON_GAS_STATION = 10,
				E_SATNAVICON_PAINT_SHOP = 11,
				E_SATNAVICON_TIRE_SHOP = 12,
				E_SATNAVICON_ROADSIGN = 13,
				E_SATNAVICON_MAX = 14,
			}

			// BrnGuiEventTypeDefs.h:1699
			Vector3 mv3Position;

			// BrnGuiEventTypeDefs.h:1700
			CgsID mCgsId;

			// BrnGuiEventTypeDefs.h:1702
			float32_t mfRotation;

			// BrnGuiEventTypeDefs.h:1703
			float32_t mfSpeedMph;

			// BrnGuiEventTypeDefs.h:1705
			LandmarkIndex mLandmarkIndex;

			// BrnGuiEventTypeDefs.h:1706
			uint8_t mu8DesignIndex;

			// BrnGuiEventTypeDefs.h:1707
			bool mbIsHiddenDriveThru;

		private:
			// BrnGuiEventTypeDefs.h:1736
			uint8_t mu8County;

			// BrnGuiEventTypeDefs.h:1737
			uint8_t mu8District;

			// BrnGuiEventTypeDefs.h:1738
			int8_t mi8ActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:1739
			int8_t mi8IconType;

		public:
			// BrnGuiEventTypeDefs.h:1710
			void SetCounty(BrnWorld::ECounty);

			// BrnGuiEventTypeDefs.h:1713
			BrnWorld::ECounty GetCounty() const;

			// BrnGuiEventTypeDefs.h:1716
			void SetDistrict(BrnWorld::EDistrict);

			// BrnGuiEventTypeDefs.h:1719
			BrnWorld::EDistrict GetDistrict() const;

			// BrnGuiEventTypeDefs.h:1722
			void SetActiveRaceCarIndex(EActiveRaceCarIndex);

			// BrnGuiEventTypeDefs.h:1725
			EActiveRaceCarIndex GetActiveRaceCarIndex() const;

			// BrnGuiEventTypeDefs.h:1728
			void SetIconType(BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType);

			// BrnGuiEventTypeDefs.h:1731
			BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType GetIconType() const;

		}

	}

	// Declaration
	struct GuiEventOnlinePostEvent {
		// BrnGuiEventTypeDefs.h:2276
		struct OnlinePlayer {
			// BrnGuiEventTypeDefs.h:2278
			EActiveRaceCarIndex meActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2279
			float32_t mfFinishingTime;

			// BrnGuiEventTypeDefs.h:2280
			Time mFinishingTime;

			// BrnGuiEventTypeDefs.h:2281
			float32_t mfDistanceFromFinish;

			// BrnGuiEventTypeDefs.h:2282
			int32_t miPointsFromThisRound;

			// BrnGuiEventTypeDefs.h:2283
			int32_t miResultsTablePosition;

			// BrnGuiEventTypeDefs.h:2284
			int32_t miTotalPoints;

			// BrnGuiEventTypeDefs.h:2285
			int32_t miEliminations;

			// BrnGuiEventTypeDefs.h:2286
			int32_t miLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2287
			int32_t miLandmarksNotVisited;

			// BrnGuiEventTypeDefs.h:2288
			int32_t miCumulativeLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2289
			bool mbHasTimedOut;

			// BrnGuiEventTypeDefs.h:2290
			bool mbHasDisconnected;

			// BrnGuiEventTypeDefs.h:2291
			bool mbWasEliminated;

		}

		// BrnGuiEventTypeDefs.h:2296
		struct OnlineAward {
			// BrnGuiEventTypeDefs.h:2298
			BrnGameState::EOnlineAwardID meOnlineAwardID;

			// BrnGuiEventTypeDefs.h:2299
			EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2300
			int32_t miAwardVariable;

		}

	}

	// Declaration
	struct GuiEventOfflinePostEvent {
		// BrnGuiEventTypeDefs.h:2380
		struct OfflinePostEventData {
			// BrnGuiEventTypeDefs.h:2382
			GuiEventStopMode::EGameModeType meFinishedGameModeType;

			// BrnGuiEventTypeDefs.h:2383
			CgsID mBeatenRival;

			// BrnGuiEventTypeDefs.h:2384
			int32_t miModeScore;

			// BrnGuiEventTypeDefs.h:2385
			float32_t mfTime;

			// BrnGuiEventTypeDefs.h:2386
			int8_t miPlayerFinishPosition;

			// BrnGuiEventTypeDefs.h:2387
			bool mbCrashedOut;

			// BrnGuiEventTypeDefs.h:2388
			bool mbTimedOut;

			// BrnGuiEventTypeDefs.h:2389
			bool mbEliminated;

			// BrnGuiEventTypeDefs.h:2390
			bool mbCountsTowardsProgression;

			// BrnGuiEventTypeDefs.h:2393
			int32_t miBaseScore;

			// BrnGuiEventTypeDefs.h:2394
			int32_t miScoreMultiplier;

			// BrnGuiEventTypeDefs.h:2395
			float32_t mfDistanceTravelled;

			// BrnGuiEventTypeDefs.h:2397
			DerivedCarArray maCarsToUnlockFromSpecialEvent;

			// BrnGuiEventTypeDefs.h:2401
			bool mbHasRankedUp;

			// BrnGuiEventTypeDefs.h:2402
			int32_t miPlayerOldRank;

			// BrnGuiEventTypeDefs.h:2403
			int32_t miPlayerNewRank;

			// BrnGuiEventTypeDefs.h:2404
			int32_t miCarsRevealed;

			// BrnGuiEventTypeDefs.h:2405
			int32_t miEventsUnlocked;

			// BrnGuiEventTypeDefs.h:2406
			bool mbCompletedLastRank;

			// BrnGuiEventTypeDefs.h:2409
			CgsID mNewlyUnlockedRivalID;

			// BrnGuiEventTypeDefs.h:2411
			bool mbHasUnlockedFreeCar;

			// BrnGuiEventTypeDefs.h:2412
			CgsID mNewlyUnlockedFreeCarID;

		}

	}

	// Declaration
	struct CalculateRoute {
		// BrnGuiEventTypeDefs.h:2612
		enum ERouteEndPointType {
			E_ROUTE_END_POINT_TYPE_LANDMARK = 0,
			E_ROUTE_END_POINT_TYPE_JUNCTION = 1,
			E_ROUTE_END_POINT_TYPE_PLAYERPOS = 2,
			E_ROUTE_END_POINT_TYPE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventDrawEventIcons {
		// BrnGuiEventTypeDefs.h:2662
		enum EIconDisplayType {
			E_ICON_DISPLAY_TYPE_OFFLINE_EVENTS = 0,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_STARTS = 1,
			E_ICON_DISPLAY_TYPE_ONLINE_CHECKPOINTS = 2,
			E_ICON_DISPLAY_TYPE_ONLINE_FINISH_POINTS = 3,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_PRESETS = 4,
			E_ICON_DISPLAY_TYPE_COUNT = 5,
		}

	}

	// Declaration
	struct GuiEventNetworkSelectedPlayerOption {
		// BrnGuiEventTypeDefs.h:3092
		enum EOptionSelected {
			E_OPTION_SELECTED_MARK_PLAYER = 0,
			E_OPTION_SELECTED_VIEW_GAMERCARD = 1,
			E_OPTION_SELECTED_SUBMIT_REVIEW = 2,
			E_OPTION_SELECTED_KICK_PLAYER = 3,
			E_OPTION_SELECTED_COUNT = 4,
		}

	}

	// Declaration
	struct GuiEventNetworkOutputPlayerTexture {
		// BrnGuiEventTypeDefs.h:3320
		enum EOutput {
			E_OUTPUT_OFF = 0,
			E_OUTPUT_PLAYER_IMAGE = 1,
			E_OUTPUT_SCALP_IMAGE = 2,
			E_OUTPUT_WINNER_IMAGE = 3,
			E_OUTPUT_GAMERPIC = 4,
			E_OUTPUT_GAMERPIC_LICENCE = 5,
			E_OUTPUT_NUM = 6,
		}

	}

	// Declaration
	struct GuiPlayerCrashingStateChangeEvent {
		// BrnGuiEventTypeDefs.h:3960
		enum CrashBarState {
			E_CRASHBARSTATE_INVALID = -1,
			E_CRASHBARSTATE_START_CRASHED = 0,
			E_CRASHBARSTATE_LEAVE_CRASHED = 1,
			E_CRASHBARSTATE_START_TAKEDOWN = 2,
			E_CRASHBARSTATE_LEAVE_TAKEDOWN = 3,
			E_CRASHBARSTATE_COUNT = 4,
		}

	}

	// Declaration
	struct GuiPlayerEngineEvent {
		// BrnGuiEventTypeDefs.h:3986
		enum EEngineState {
			E_ENGINE_OFF = 0,
			E_ENGINE_ON = 1,
			E_ENGINE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventAudioTraxPlayOrder {
		// BrnGuiEventTypeDefs.h:4068
		enum ETraxPlayOrderMode {
			E_TRAX_PLAY_ORDER_MODE_SEQUENTIAL = 0,
			E_TRAX_PLAY_ORDER_MODE_RANDOM = 1,
			E_TRAX_PLAY_ORDER_MODE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventPerformOnlineMainMenuOption {
		// BrnGuiEventTypeDefs.h:5483
		enum EMainMenuOptions {
			E_MAIN_MENU_OPTIONS_FREEBURN_PLAY_NOW = 0,
			E_MAIN_MENU_OPTIONS_FREEBURN_CUSTOM_MATCH = 1,
			E_MAIN_MENU_OPTIONS_FREEBURN_CREATE = 2,
			E_MAIN_MENU_OPTIONS_IMAGE_GALLERY = 3,
			E_MAIN_MENU_OPTIONS_VIEW_CHALLENGES = 4,
			E_MAIN_MENU_OPTIONS_UNRANKED_PLAY_NOW = 5,
			E_MAIN_MENU_OPTIONS_UNRANKED_CUSTOM_MATCH = 6,
			E_MAIN_MENU_OPTIONS_UNRANKED_CREATE = 7,
			E_MAIN_MENU_OPTIONS_RANKED_PLAY_NOW = 8,
			E_MAIN_MENU_OPTIONS_RANKED_CUSTOM_MATCH = 9,
			E_MAIN_MENU_OPTIONS_RANKED_CREATE = 10,
			E_MAIN_MENU_OPTIONS_SCOREBOARDS = 11,
			E_MAIN_MENU_OPTIONS_NEWS = 12,
			E_MAIN_MENU_OPTIONS_COUNT = 13,
		}

	}

	// Declaration
	struct GuiEventPerformOnlinePauseOption {
		// BrnGuiEventTypeDefs.h:5521
		enum EPauseOptions {
			E_PAUSE_OPTIONS_LAUNCH = 0,
			E_PAUSE_OPTIONS_CREATE_EVENT = 1,
			E_PAUSE_OPTIONS_CHANGE_TEAMS = 2,
			E_PAUSE_OPTIONS_VIEW_LOBBY = 3,
			E_PAUSE_OPTIONS_LEAVE_GAME = 4,
			E_PAUSE_OPTIONS_VIEW_CHALLENGES = 5,
			E_PAUSE_OPTIONS_VIEW_EVENT = 6,
			E_PAUSE_OPTIONS_CANCEL_EVENT = 7,
			E_PAUSE_OPTIONS_VIEW_MAP = 8,
			E_PAUSE_OPTIONS_CHANGE_SECURITY = 9,
			E_PAUSE_OPTIONS_SECURITY_ALLCOMERS = 10,
			E_PAUSE_OPTIONS_SECURITY_FRIENDS_ONLY = 11,
			E_PAUSE_OPTIONS_SECURITY_INVITE_ONLY = 12,
			E_PAUSE_OPTIONS_SETTINGS = 13,
			E_PAUSE_OPTIONS_COUNT = 14,
		}

	}

	// Declaration
	struct GuiChallengeSelectedEvent {
		// BrnGuiEventTypeDefs.h:6542
		enum EFreeburnChallengeAction {
			E_ACTION_CHOSEN = 0,
			E_ACTION_CANCELED = 1,
			E_ACTION_SHOWN = 2,
			E_ACTION_HIDDEN = 3,
		}

	}

	// BrnGuiEventTypeDefs.h:97
	const int32_t KI_MAX_GAMERTAG_LENGTH = 20;

	// BrnGuiEventTypeDefs.h:98
	const int32_t KI_MAX_AWARDS = 6;

	// BrnGuiEventTypeDefs.h:99
	const int32_t KI_MAX_PFXHOOK_NAMES = 100;

	// BrnGuiEventTypeDefs.h:100
	const int32_t KI_MAX_VISIBLE_SIGNS = 32;

	// BrnGuiEventTypeDefs.h:925
	const const char *[4] KAPC_INGAME_FSM_NAMES;

}

// BrnGuiEventTypeDefs.h:824
struct BrnGui::GuiEventCache : public GuiEvent<64> {
	// BrnGuiEventTypeDefs.h:826
	BrnGui::GuiCache * mpCachePointer;

}

// BrnGuiEventTypeDefs.h:3088
struct BrnGui::GuiEventNetworkSelectedPlayerOption : public GuiEvent<243> {
	// BrnGuiEventTypeDefs.h:3102
	BrnGui::GuiEventNetworkSelectedPlayerOption::EOptionSelected meOptionSelected;

	// BrnGuiEventTypeDefs.h:3103
	GuiEventNetworkLaunching::NetworkPlayerID mSelectedPlayerID;

}

// BrnGuiEventTypeDefs.h:3318
struct BrnGui::GuiEventNetworkOutputPlayerTexture : public GuiEvent<262> {
	// BrnGuiEventTypeDefs.h:3332
	BrnGui::GuiEventNetworkOutputPlayerTexture::EOutput meOutput;

	// BrnGuiEventTypeDefs.h:3333
	GuiEventNetworkLaunching::NetworkPlayerID mPlayerIDToOutput;

}

// BrnGuiEventTypeDefs.h:3798
struct BrnGui::GuiDirtyTrickTriggerableEvent : public GuiEvent<365> {
}

// BrnGuiEventTypeDefs.h:4233
struct BrnGui::GuiEATraxChyronActive : public GuiEvent<466> {
	// BrnGuiEventTypeDefs.h:4236
	bool mbActive;

}

// BrnGuiEventTypeDefs.h:4936
struct BrnGui::GuiEventStatsRequest : public GuiEvent<430> {
}

// BrnGuiEventTypeDefs.h:5480
struct BrnGui::GuiEventPerformOnlineMainMenuOption : public GuiEvent<282> {
	// BrnGuiEventTypeDefs.h:5502
	BrnGui::GuiEventPerformOnlineMainMenuOption::EMainMenuOptions meMainMenuOption;

}

// BrnGuiEventTypeDefs.h:5519
struct BrnGui::GuiEventPerformOnlinePauseOption : public GuiEvent<281> {
	// BrnGuiEventTypeDefs.h:5541
	BrnGui::GuiEventPerformOnlinePauseOption::EPauseOptions mePauseOption;

}

// BrnGuiEventTypeDefs.h:6330
struct BrnGui::GuiNewBurnoutSkillzEvent : public GuiEvent<526> {
	// BrnGuiEventTypeDefs.h:6333
	GuiEventNetworkLaunching::NetworkPlayerID mNetworkPlayerID;

	// BrnGuiEventTypeDefs.h:6334
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:6335
	BurnoutSkillzData mSkillzData;

	// BrnGuiEventTypeDefs.h:6336
	bool mbUpdateHUDMessage;

}

// BrnGuiEventTypeDefs.h:6376
struct BrnGui::GuiShowtimeScoreUpdate : public GuiEvent<391> {
	// BrnGuiEventTypeDefs.h:6378
	GuiEventNetworkLaunching::NetworkPlayerID mNetworkPlayerID;

	// BrnGuiEventTypeDefs.h:6379
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:6380
	int32_t miShowtimeScore;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct GuiEventTickerCustomMessage {
		// BrnGuiEventTypeDefs.h:313
		enum EStringType {
			E_STRINGTYPE_NONE = 0,
			E_STRINGTYPE_TEXT = 1,
			E_STRINGTYPE_STRINGID = 2,
			E_STRINGTYPE_NUM = 3,
		}

	}

	// Declaration
	struct GuiEventChangeReplayState {
		// BrnGuiEventTypeDefs.h:861
		enum ReplayState {
			E_REPLAYSTATE_INVISIBLE = 0,
			E_REPLAYSTATE_PLAYING = 1,
			E_REPLAYSTATE_RECORDING = 2,
			E_REPLAYSTATE_COUNT = 3,
		}

	}

	// BrnGuiEventTypeDefs.h:883
	enum GuiFlow {
		E_GUIFLOW_SCREEN = 0,
		E_GUIFLOW_HUD = 1,
		E_GUIFLOW_OVERLAY = 2,
		E_GUIFLOW_COUNT = 3,
		E_GUIFLOW_FIRST = 0,
	}

	// Declaration
	struct GuiEventSetRoadRuleScoreMode {
		// BrnGuiEventTypeDefs.h:1321
		enum ERoadPanelModes {
			E_ROAD_PANEL_MODE_OFFLINE = 0,
			E_ROAD_PANEL_MODE_ONLINE = 1,
			E_ROAD_PANEL_MODE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventPreRaceMessages {
		// BrnGuiEventTypeDefs.h:1579
		enum ERelationshipTypes {
			E_RELATIONSHIP_GOOD = 0,
			E_RELATIONSHIP_BAD = 1,
			E_RELATIONSHIP_NEUTRAL = 2,
			E_RELATIONSHIP_COUNT = 3,
		}

		// BrnGuiEventTypeDefs.h:1590
		struct MessageInfo {
			// BrnGuiEventTypeDefs.h:1592
			extern const int32_t KI_NUM_MESSAGE_STRINGS = 3;

			// BrnGuiEventTypeDefs.h:1593
			extern const int32_t KI_MAX_LENGTH_STRING_ID = 128;

			// BrnGuiEventTypeDefs.h:1595
			extern const int32_t KI_NUM_PARAMETERS = 1;

			// BrnGuiEventTypeDefs.h:1596
			extern const int32_t KI_MAX_LENGTH_PARAMETERS = 20;

			// BrnGuiEventTypeDefs.h:1600
			char[3][128] maacMessageIDs;

			// BrnGuiEventTypeDefs.h:1602
			int32_t miNumMsgIDs;

			// BrnGuiEventTypeDefs.h:1603
			char[3][20] maacMessageParameters;

			// BrnGuiEventTypeDefs.h:1605
			int32_t[3] maiNumParams;

			// BrnGuiEventTypeDefs.h:1608
			char[128] macGamerName;

			// BrnGuiEventTypeDefs.h:1610
			BrnGui::GuiEventPreRaceMessages::ERelationshipTypes meRelationshipType;

		}

	}

	// Declaration
	struct GuiEventUpdateSatNav {
		// BrnGuiEventTypeDefs.h:1675
		struct SatNavIconInfo {
			// BrnGuiEventTypeDefs.h:1678
			enum SatNavIconType {
				E_SATNAVICON_PLAYER_CAR = 0,
				E_SATNAVICON_MARKED_MAN = 1,
				E_SATNAVICON_NETWORKRIVAL = 2,
				E_SATNAVICON_RIVAL = 3,
				E_SATNAVICON_LANDMARK = 4,
				E_SATNAVICON_JUNCTION = 5,
				E_SATNAVICON_FREEBURN_CHALLENGE = 6,
				E_SATNAVICON_JUNKYARD = 7,
				E_SATNAVICON_CAR_PARK = 8,
				E_SATNAVICON_BODYSHOP = 9,
				E_SATNAVICON_GAS_STATION = 10,
				E_SATNAVICON_PAINT_SHOP = 11,
				E_SATNAVICON_TIRE_SHOP = 12,
				E_SATNAVICON_ROADSIGN = 13,
				E_SATNAVICON_MAX = 14,
			}

			// BrnGuiEventTypeDefs.h:1699
			Vector3 mv3Position;

			// BrnGuiEventTypeDefs.h:1700
			CgsID mCgsId;

			// BrnGuiEventTypeDefs.h:1702
			float32_t mfRotation;

			// BrnGuiEventTypeDefs.h:1703
			float32_t mfSpeedMph;

			// BrnGuiEventTypeDefs.h:1705
			LandmarkIndex mLandmarkIndex;

			// BrnGuiEventTypeDefs.h:1706
			uint8_t mu8DesignIndex;

			// BrnGuiEventTypeDefs.h:1707
			bool mbIsHiddenDriveThru;

		private:
			// BrnGuiEventTypeDefs.h:1736
			uint8_t mu8County;

			// BrnGuiEventTypeDefs.h:1737
			uint8_t mu8District;

			// BrnGuiEventTypeDefs.h:1738
			int8_t mi8ActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:1739
			int8_t mi8IconType;

		public:
			// BrnGuiEventTypeDefs.h:1710
			void SetCounty(BrnWorld::ECounty);

			// BrnGuiEventTypeDefs.h:1713
			BrnWorld::ECounty GetCounty() const;

			// BrnGuiEventTypeDefs.h:1716
			void SetDistrict(BrnWorld::EDistrict);

			// BrnGuiEventTypeDefs.h:1719
			BrnWorld::EDistrict GetDistrict() const;

			// BrnGuiEventTypeDefs.h:1722
			void SetActiveRaceCarIndex(EActiveRaceCarIndex);

			// BrnGuiEventTypeDefs.h:1725
			EActiveRaceCarIndex GetActiveRaceCarIndex() const;

			// BrnGuiEventTypeDefs.h:1728
			void SetIconType(BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType);

			// BrnGuiEventTypeDefs.h:1731
			BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType GetIconType() const;

		}

	}

	// Declaration
	struct GuiEventEnableSatNavIcons {
		// BrnGuiEventTypeDefs.h:1902
		enum EIconDisplayType {
			E_ICON_DISPLAY_TYPE_OFFLINE_EVENTS = 0,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_STARTS = 1,
			E_ICON_DISPLAY_TYPE_ONLINE_CHECKPOINTS = 2,
			E_ICON_DISPLAY_TYPE_ONLINE_FINISH_POINTS = 3,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_PRESETS = 4,
			E_ICON_DISPLAY_TYPE_COUNT = 5,
		}

	}

	// Declaration
	struct GuiEventShowHideSatNav {
		// BrnGuiEventTypeDefs.h:2005
		enum MapType {
			E_MAPTYPE_MAIN = 0,
			E_MAPTYPE_GPS = 1,
		}

	}

	// Declaration
	struct GuiEventOnlinePostEvent {
		// BrnGuiEventTypeDefs.h:2276
		struct OnlinePlayer {
			// BrnGuiEventTypeDefs.h:2278
			EActiveRaceCarIndex meActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2279
			float32_t mfFinishingTime;

			// BrnGuiEventTypeDefs.h:2280
			Time mFinishingTime;

			// BrnGuiEventTypeDefs.h:2281
			float32_t mfDistanceFromFinish;

			// BrnGuiEventTypeDefs.h:2282
			int32_t miPointsFromThisRound;

			// BrnGuiEventTypeDefs.h:2283
			int32_t miResultsTablePosition;

			// BrnGuiEventTypeDefs.h:2284
			int32_t miTotalPoints;

			// BrnGuiEventTypeDefs.h:2285
			int32_t miEliminations;

			// BrnGuiEventTypeDefs.h:2286
			int32_t miLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2287
			int32_t miLandmarksNotVisited;

			// BrnGuiEventTypeDefs.h:2288
			int32_t miCumulativeLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2289
			bool mbHasTimedOut;

			// BrnGuiEventTypeDefs.h:2290
			bool mbHasDisconnected;

			// BrnGuiEventTypeDefs.h:2291
			bool mbWasEliminated;

		}

		// BrnGuiEventTypeDefs.h:2296
		struct OnlineAward {
			// BrnGuiEventTypeDefs.h:2298
			BrnGameState::EOnlineAwardID meOnlineAwardID;

			// BrnGuiEventTypeDefs.h:2299
			EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2300
			int32_t miAwardVariable;

		}

	}

	// Declaration
	struct GuiEventOfflinePostEvent {
		// BrnGuiEventTypeDefs.h:2380
		struct OfflinePostEventData {
			// BrnGuiEventTypeDefs.h:2382
			GuiEventStopMode::EGameModeType meFinishedGameModeType;

			// BrnGuiEventTypeDefs.h:2383
			CgsID mBeatenRival;

			// BrnGuiEventTypeDefs.h:2384
			int32_t miModeScore;

			// BrnGuiEventTypeDefs.h:2385
			float32_t mfTime;

			// BrnGuiEventTypeDefs.h:2386
			int8_t miPlayerFinishPosition;

			// BrnGuiEventTypeDefs.h:2387
			bool mbCrashedOut;

			// BrnGuiEventTypeDefs.h:2388
			bool mbTimedOut;

			// BrnGuiEventTypeDefs.h:2389
			bool mbEliminated;

			// BrnGuiEventTypeDefs.h:2390
			bool mbCountsTowardsProgression;

			// BrnGuiEventTypeDefs.h:2393
			int32_t miBaseScore;

			// BrnGuiEventTypeDefs.h:2394
			int32_t miScoreMultiplier;

			// BrnGuiEventTypeDefs.h:2395
			float32_t mfDistanceTravelled;

			// BrnGuiEventTypeDefs.h:2397
			DerivedCarArray maCarsToUnlockFromSpecialEvent;

			// BrnGuiEventTypeDefs.h:2401
			bool mbHasRankedUp;

			// BrnGuiEventTypeDefs.h:2402
			int32_t miPlayerOldRank;

			// BrnGuiEventTypeDefs.h:2403
			int32_t miPlayerNewRank;

			// BrnGuiEventTypeDefs.h:2404
			int32_t miCarsRevealed;

			// BrnGuiEventTypeDefs.h:2405
			int32_t miEventsUnlocked;

			// BrnGuiEventTypeDefs.h:2406
			bool mbCompletedLastRank;

			// BrnGuiEventTypeDefs.h:2409
			CgsID mNewlyUnlockedRivalID;

			// BrnGuiEventTypeDefs.h:2411
			bool mbHasUnlockedFreeCar;

			// BrnGuiEventTypeDefs.h:2412
			CgsID mNewlyUnlockedFreeCarID;

		}

	}

	// Declaration
	struct CalculateRoute {
		// BrnGuiEventTypeDefs.h:2612
		enum ERouteEndPointType {
			E_ROUTE_END_POINT_TYPE_LANDMARK = 0,
			E_ROUTE_END_POINT_TYPE_JUNCTION = 1,
			E_ROUTE_END_POINT_TYPE_PLAYERPOS = 2,
			E_ROUTE_END_POINT_TYPE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventDrawEventIcons {
		// BrnGuiEventTypeDefs.h:2662
		enum EIconDisplayType {
			E_ICON_DISPLAY_TYPE_OFFLINE_EVENTS = 0,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_STARTS = 1,
			E_ICON_DISPLAY_TYPE_ONLINE_CHECKPOINTS = 2,
			E_ICON_DISPLAY_TYPE_ONLINE_FINISH_POINTS = 3,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_PRESETS = 4,
			E_ICON_DISPLAY_TYPE_COUNT = 5,
		}

	}

	// Declaration
	struct GuiPlayerCrashingStateChangeEvent {
		// BrnGuiEventTypeDefs.h:3960
		enum CrashBarState {
			E_CRASHBARSTATE_INVALID = -1,
			E_CRASHBARSTATE_START_CRASHED = 0,
			E_CRASHBARSTATE_LEAVE_CRASHED = 1,
			E_CRASHBARSTATE_START_TAKEDOWN = 2,
			E_CRASHBARSTATE_LEAVE_TAKEDOWN = 3,
			E_CRASHBARSTATE_COUNT = 4,
		}

	}

	// Declaration
	struct GuiPlayerEngineEvent {
		// BrnGuiEventTypeDefs.h:3986
		enum EEngineState {
			E_ENGINE_OFF = 0,
			E_ENGINE_ON = 1,
			E_ENGINE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventAudioTraxPlayOrder {
		// BrnGuiEventTypeDefs.h:4068
		enum ETraxPlayOrderMode {
			E_TRAX_PLAY_ORDER_MODE_SEQUENTIAL = 0,
			E_TRAX_PLAY_ORDER_MODE_RANDOM = 1,
			E_TRAX_PLAY_ORDER_MODE_COUNT = 2,
		}

	}

	// BrnGuiEventTypeDefs.h:97
	const int32_t KI_MAX_GAMERTAG_LENGTH = 20;

	// BrnGuiEventTypeDefs.h:98
	const int32_t KI_MAX_AWARDS = 6;

	// BrnGuiEventTypeDefs.h:99
	const int32_t KI_MAX_PFXHOOK_NAMES = 100;

	// BrnGuiEventTypeDefs.h:100
	const int32_t KI_MAX_VISIBLE_SIGNS = 32;

	// BrnGuiEventTypeDefs.h:925
	const const char *[4] KAPC_INGAME_FSM_NAMES;

}

// BrnGuiEventTypeDefs.h:292
struct BrnGui::GuiEventTickerSetYPos : public GuiEvent<520> {
	// BrnGuiEventTypeDefs.h:294
	float32_t mfNewYPos;

}

// BrnGuiEventTypeDefs.h:447
struct BrnGui::GuiEventTickerStatus : public GuiEvent<523> {
	// BrnGuiEventTypeDefs.h:449
	bool mbActive;

}

// BrnGuiEventTypeDefs.h:1900
struct BrnGui::GuiEventEnableSatNavIcons : public GuiEvent<202> {
	// BrnGuiEventTypeDefs.h:1913
	bool mbIconsEnabled;

	// BrnGuiEventTypeDefs.h:1914
	BrnGui::GuiEventEnableSatNavIcons::EIconDisplayType meIconDisplayType;

	// BrnGuiEventTypeDefs.h:1915
	BrnProgression::RaceEventData::EModeType meModeToFilter;

}

// BrnGuiEventTypeDefs.h:2002
struct BrnGui::GuiEventShowHideSatNav : public GuiEvent<211> {
private:
	// BrnGuiEventTypeDefs.h:2042
	BrnGui::GuiEventShowHideSatNav::MapType meMapType;

	// BrnGuiEventTypeDefs.h:2043
	float32_t mfFadeTime;

	// BrnGuiEventTypeDefs.h:2044
	bool mbShow;

public:
	// BrnGuiEventTypeDefs.h:2015
	void Construct(BrnGui::GuiEventShowHideSatNav::MapType, bool, float32_t);

	// BrnGuiEventTypeDefs.h:2023
	BrnGui::GuiEventShowHideSatNav::MapType GetMapType() const;

	// BrnGuiEventTypeDefs.h:2029
	bool GetShow() const;

	// BrnGuiEventTypeDefs.h:2035
	float32_t GetFadeTime() const;

}

// BrnGuiEventTypeDefs.h:2049
struct BrnGui::GuiEventShowHideBoostBar : public GuiEvent<212> {
	// BrnGuiEventTypeDefs.h:2051
	bool mbShow;

}

// BrnGuiEventTypeDefs.h:2056
struct BrnGui::GuiEventShowHideAboveCar : public GuiEvent<213> {
	// BrnGuiEventTypeDefs.h:2058
	bool mbShow;

}

// BrnGuiEventTypeDefs.h:2795
struct BrnGui::GuiEventFilterEventIcons : public GuiEvent<542> {
	// BrnGuiEventTypeDefs.h:2797
	BrnProgression::RaceEventData::EModeType meModeToFilter;

}

// BrnGuiEventTypeDefs.h:2809
struct BrnGui::GuiEventSetInspectedEventIcon : public GuiEvent<543> {
	// BrnGuiEventTypeDefs.h:2811
	uint32_t muInspectedEventID;

}

// BrnGuiEventTypeDefs.h:2823
struct BrnGui::GuiEventSetHoveredEventIcon : public GuiEvent<544> {
	// BrnGuiEventTypeDefs.h:2825
	uint32_t muHoveredEventID;

	// BrnGuiEventTypeDefs.h:2826
	CgsID mHoveredDriveThroughID;

	// BrnGuiEventTypeDefs.h:2827
	CgsID mHoveredPlayerID;

	// BrnGuiEventTypeDefs.h:2828
	const char * mpcHoveredRoadName;

}

// BrnGuiEventTypeDefs.h:2840
struct BrnGui::GuiEventMapCursorStatus : public GuiEvent<545> {
	// BrnGuiEventTypeDefs.h:2842
	Vector2 mv2Position;

	// BrnGuiEventTypeDefs.h:2843
	int32_t miDisplayState;

	// BrnGuiEventTypeDefs.h:2844
	int32_t miAnimationState;

}

// BrnGuiEventTypeDefs.h:2856
struct BrnGui::GuiEventMapIconStatus : public GuiEvent<546> {
	// BrnGuiEventTypeDefs.h:2858
	BrnGui::CrashNavMapIcon * lpSatNavIcons;

	// BrnGuiEventTypeDefs.h:2859
	int32_t liNumberOfIcons;

}

// BrnGuiEventTypeDefs.h:2871
struct BrnGui::GuiEventRoadSignIconStatus : public GuiEvent<547> {
	// BrnGuiEventTypeDefs.h:2873
	BrnGui::RoadSignIcon * mpRoadSignIcons;

	// BrnGuiEventTypeDefs.h:2874
	float32_t mfScaleFactor;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// BrnGuiEventTypeDefs.h:103
	enum StuntType {
		E_STUNTTYPE_JUMP = 0,
		E_STUNTTYPE_SMASH = 1,
		E_STUNTTYPE_STUNT = 2,
		E_STUNTTYPE_COUNT = 3,
	}

	// BrnGuiEventTypeDefs.h:113
	enum RoadRuleLeaderType {
		E_ROADRULELEADERTYPE_AI = 0,
		E_ROADRULELEADERTYPE_PLAYER = 1,
		E_ROADRULELEADERTYPE_FRIEND = 2,
		E_ROADRULELEADERTYPE_COUNT = 3,
	}

	// Declaration
	struct GuiEventTickerCustomMessage {
		// BrnGuiEventTypeDefs.h:313
		enum EStringType {
			E_STRINGTYPE_NONE = 0,
			E_STRINGTYPE_TEXT = 1,
			E_STRINGTYPE_STRINGID = 2,
			E_STRINGTYPE_NUM = 3,
		}

	}

	// Declaration
	struct GuiEventTriggerCrashMud {
		// BrnGuiEventTypeDefs.h:796
		enum TriggerType {
			E_TRIGGERTYPE_SHOW = 0,
			E_TRIGGERTYPE_HIDE = 1,
			E_TRIGGERTYPE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventChangeReplayState {
		// BrnGuiEventTypeDefs.h:861
		enum ReplayState {
			E_REPLAYSTATE_INVISIBLE = 0,
			E_REPLAYSTATE_PLAYING = 1,
			E_REPLAYSTATE_RECORDING = 2,
			E_REPLAYSTATE_COUNT = 3,
		}

	}

	// BrnGuiEventTypeDefs.h:883
	enum GuiFlow {
		E_GUIFLOW_SCREEN = 0,
		E_GUIFLOW_HUD = 1,
		E_GUIFLOW_OVERLAY = 2,
		E_GUIFLOW_COUNT = 3,
		E_GUIFLOW_FIRST = 0,
	}

	// BrnGuiEventTypeDefs.h:893
	enum EFinishType {
		E_FINISH_TYPE_1ST = 0,
		E_FINISH_TYPE_2ND = 1,
		E_FINISH_TYPE_3RD = 2,
		E_FINISH_TYPE_4TH = 3,
		E_FINISH_TYPE_5TH = 4,
		E_FINISH_TYPE_6TH = 5,
		E_FINISH_TYPE_7TH = 6,
		E_FINISH_TYPE_8TH = 7,
		E_FINISH_TYPE_TIMED_OUT = 8,
		E_FINISH_TYPE_WON = 9,
		E_FINISH_TYPE_LOST = 10,
		E_FINISH_TYPE_COUNT = 11,
	}

	// Declaration
	struct GuiEventRoadRuleUpcomingRoads {
		// BrnGuiEventTypeDefs.h:1218
		enum ERoadSide {
			E_ROAD_LEFT = 0,
			E_ROAD_RIGHT = 1,
			E_ROAD_COUNT = 2,
		}

		// BrnGuiEventTypeDefs.h:1226
		enum ERoadState {
			E_ROADSTATE_NORMAL = 0,
			E_ROADSTATE_SUGGESTED = 1,
			E_ROADSTATE_WRONG = 2,
			E_ROADSTATE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventSetRoadRuleScoreMode {
		// BrnGuiEventTypeDefs.h:1321
		enum ERoadPanelModes {
			E_ROAD_PANEL_MODE_OFFLINE = 0,
			E_ROAD_PANEL_MODE_ONLINE = 1,
			E_ROAD_PANEL_MODE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventPreRaceMessages {
		// BrnGuiEventTypeDefs.h:1579
		enum ERelationshipTypes {
			E_RELATIONSHIP_GOOD = 0,
			E_RELATIONSHIP_BAD = 1,
			E_RELATIONSHIP_NEUTRAL = 2,
			E_RELATIONSHIP_COUNT = 3,
		}

		// BrnGuiEventTypeDefs.h:1590
		struct MessageInfo {
			// BrnGuiEventTypeDefs.h:1592
			extern const int32_t KI_NUM_MESSAGE_STRINGS = 3;

			// BrnGuiEventTypeDefs.h:1593
			extern const int32_t KI_MAX_LENGTH_STRING_ID = 128;

			// BrnGuiEventTypeDefs.h:1595
			extern const int32_t KI_NUM_PARAMETERS = 1;

			// BrnGuiEventTypeDefs.h:1596
			extern const int32_t KI_MAX_LENGTH_PARAMETERS = 20;

			// BrnGuiEventTypeDefs.h:1600
			char[3][128] maacMessageIDs;

			// BrnGuiEventTypeDefs.h:1602
			int32_t miNumMsgIDs;

			// BrnGuiEventTypeDefs.h:1603
			char[3][20] maacMessageParameters;

			// BrnGuiEventTypeDefs.h:1605
			int32_t[3] maiNumParams;

			// BrnGuiEventTypeDefs.h:1608
			char[128] macGamerName;

			// BrnGuiEventTypeDefs.h:1610
			BrnGui::GuiEventPreRaceMessages::ERelationshipTypes meRelationshipType;

		}

	}

	// Declaration
	struct GuiEventUpdateSatNav {
		// BrnGuiEventTypeDefs.h:1675
		struct SatNavIconInfo {
			// BrnGuiEventTypeDefs.h:1678
			enum SatNavIconType {
				E_SATNAVICON_PLAYER_CAR = 0,
				E_SATNAVICON_MARKED_MAN = 1,
				E_SATNAVICON_NETWORKRIVAL = 2,
				E_SATNAVICON_RIVAL = 3,
				E_SATNAVICON_LANDMARK = 4,
				E_SATNAVICON_JUNCTION = 5,
				E_SATNAVICON_FREEBURN_CHALLENGE = 6,
				E_SATNAVICON_JUNKYARD = 7,
				E_SATNAVICON_CAR_PARK = 8,
				E_SATNAVICON_BODYSHOP = 9,
				E_SATNAVICON_GAS_STATION = 10,
				E_SATNAVICON_PAINT_SHOP = 11,
				E_SATNAVICON_TIRE_SHOP = 12,
				E_SATNAVICON_ROADSIGN = 13,
				E_SATNAVICON_MAX = 14,
			}

			// BrnGuiEventTypeDefs.h:1699
			Vector3 mv3Position;

			// BrnGuiEventTypeDefs.h:1700
			CgsID mCgsId;

			// BrnGuiEventTypeDefs.h:1702
			float32_t mfRotation;

			// BrnGuiEventTypeDefs.h:1703
			float32_t mfSpeedMph;

			// BrnGuiEventTypeDefs.h:1705
			LandmarkIndex mLandmarkIndex;

			// BrnGuiEventTypeDefs.h:1706
			uint8_t mu8DesignIndex;

			// BrnGuiEventTypeDefs.h:1707
			bool mbIsHiddenDriveThru;

		private:
			// BrnGuiEventTypeDefs.h:1736
			uint8_t mu8County;

			// BrnGuiEventTypeDefs.h:1737
			uint8_t mu8District;

			// BrnGuiEventTypeDefs.h:1738
			int8_t mi8ActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:1739
			int8_t mi8IconType;

		public:
			// BrnGuiEventTypeDefs.h:1710
			void SetCounty(BrnWorld::ECounty);

			// BrnGuiEventTypeDefs.h:1713
			BrnWorld::ECounty GetCounty() const;

			// BrnGuiEventTypeDefs.h:1716
			void SetDistrict(BrnWorld::EDistrict);

			// BrnGuiEventTypeDefs.h:1719
			BrnWorld::EDistrict GetDistrict() const;

			// BrnGuiEventTypeDefs.h:1722
			void SetActiveRaceCarIndex(EActiveRaceCarIndex);

			// BrnGuiEventTypeDefs.h:1725
			EActiveRaceCarIndex GetActiveRaceCarIndex() const;

			// BrnGuiEventTypeDefs.h:1728
			void SetIconType(BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType);

			// BrnGuiEventTypeDefs.h:1731
			BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType GetIconType() const;

		}

	}

	// Declaration
	struct GuiEventEnableSatNavIcons {
		// BrnGuiEventTypeDefs.h:1902
		enum EIconDisplayType {
			E_ICON_DISPLAY_TYPE_OFFLINE_EVENTS = 0,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_STARTS = 1,
			E_ICON_DISPLAY_TYPE_ONLINE_CHECKPOINTS = 2,
			E_ICON_DISPLAY_TYPE_ONLINE_FINISH_POINTS = 3,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_PRESETS = 4,
			E_ICON_DISPLAY_TYPE_COUNT = 5,
		}

	}

	// Declaration
	struct GuiEventShowHideSatNav {
		// BrnGuiEventTypeDefs.h:2005
		enum MapType {
			E_MAPTYPE_MAIN = 0,
			E_MAPTYPE_GPS = 1,
		}

	}

	// Declaration
	struct GuiEventUpdateEventCountdown {
		// BrnGuiEventTypeDefs.h:2183
		enum ECountdownProgress {
			E_GUI_EVENT_COUNTDOWN_ZERO = 0,
			E_GUI_EVENT_COUNTDOWN_ONE = 1,
			E_GUI_EVENT_COUNTDOWN_TWO = 2,
			E_GUI_EVENT_COUNTDOWN_THREE = 3,
			E_GUI_EVENT_COUNTDOWN_FOUR = 4,
			E_GUI_EVENT_COUNTDOWN_FIVE = 5,
			E_GUI_EVENT_COUNTDOWN_SIX = 6,
			E_GUI_EVENT_COUNTDOWN_SEVEN = 7,
			E_GUI_EVENT_COUNTDOWN_EIGHT = 8,
			E_GUI_EVENT_COUNTDOWN_NINE = 9,
		}

	}

	// Declaration
	struct GuiEventOnlinePostEvent {
		// BrnGuiEventTypeDefs.h:2276
		struct OnlinePlayer {
			// BrnGuiEventTypeDefs.h:2278
			EActiveRaceCarIndex meActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2279
			float32_t mfFinishingTime;

			// BrnGuiEventTypeDefs.h:2280
			Time mFinishingTime;

			// BrnGuiEventTypeDefs.h:2281
			float32_t mfDistanceFromFinish;

			// BrnGuiEventTypeDefs.h:2282
			int32_t miPointsFromThisRound;

			// BrnGuiEventTypeDefs.h:2283
			int32_t miResultsTablePosition;

			// BrnGuiEventTypeDefs.h:2284
			int32_t miTotalPoints;

			// BrnGuiEventTypeDefs.h:2285
			int32_t miEliminations;

			// BrnGuiEventTypeDefs.h:2286
			int32_t miLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2287
			int32_t miLandmarksNotVisited;

			// BrnGuiEventTypeDefs.h:2288
			int32_t miCumulativeLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2289
			bool mbHasTimedOut;

			// BrnGuiEventTypeDefs.h:2290
			bool mbHasDisconnected;

			// BrnGuiEventTypeDefs.h:2291
			bool mbWasEliminated;

		}

		// BrnGuiEventTypeDefs.h:2296
		struct OnlineAward {
			// BrnGuiEventTypeDefs.h:2298
			BrnGameState::EOnlineAwardID meOnlineAwardID;

			// BrnGuiEventTypeDefs.h:2299
			EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2300
			int32_t miAwardVariable;

		}

	}

	// Declaration
	struct GuiEventOfflinePostEvent {
		// BrnGuiEventTypeDefs.h:2380
		struct OfflinePostEventData {
			// BrnGuiEventTypeDefs.h:2382
			GuiEventStopMode::EGameModeType meFinishedGameModeType;

			// BrnGuiEventTypeDefs.h:2383
			CgsID mBeatenRival;

			// BrnGuiEventTypeDefs.h:2384
			int32_t miModeScore;

			// BrnGuiEventTypeDefs.h:2385
			float32_t mfTime;

			// BrnGuiEventTypeDefs.h:2386
			int8_t miPlayerFinishPosition;

			// BrnGuiEventTypeDefs.h:2387
			bool mbCrashedOut;

			// BrnGuiEventTypeDefs.h:2388
			bool mbTimedOut;

			// BrnGuiEventTypeDefs.h:2389
			bool mbEliminated;

			// BrnGuiEventTypeDefs.h:2390
			bool mbCountsTowardsProgression;

			// BrnGuiEventTypeDefs.h:2393
			int32_t miBaseScore;

			// BrnGuiEventTypeDefs.h:2394
			int32_t miScoreMultiplier;

			// BrnGuiEventTypeDefs.h:2395
			float32_t mfDistanceTravelled;

			// BrnGuiEventTypeDefs.h:2397
			DerivedCarArray maCarsToUnlockFromSpecialEvent;

			// BrnGuiEventTypeDefs.h:2401
			bool mbHasRankedUp;

			// BrnGuiEventTypeDefs.h:2402
			int32_t miPlayerOldRank;

			// BrnGuiEventTypeDefs.h:2403
			int32_t miPlayerNewRank;

			// BrnGuiEventTypeDefs.h:2404
			int32_t miCarsRevealed;

			// BrnGuiEventTypeDefs.h:2405
			int32_t miEventsUnlocked;

			// BrnGuiEventTypeDefs.h:2406
			bool mbCompletedLastRank;

			// BrnGuiEventTypeDefs.h:2409
			CgsID mNewlyUnlockedRivalID;

			// BrnGuiEventTypeDefs.h:2411
			bool mbHasUnlockedFreeCar;

			// BrnGuiEventTypeDefs.h:2412
			CgsID mNewlyUnlockedFreeCarID;

		}

	}

	// Declaration
	struct CalculateRoute {
		// BrnGuiEventTypeDefs.h:2612
		enum ERouteEndPointType {
			E_ROUTE_END_POINT_TYPE_LANDMARK = 0,
			E_ROUTE_END_POINT_TYPE_JUNCTION = 1,
			E_ROUTE_END_POINT_TYPE_PLAYERPOS = 2,
			E_ROUTE_END_POINT_TYPE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventDrawEventIcons {
		// BrnGuiEventTypeDefs.h:2662
		enum EIconDisplayType {
			E_ICON_DISPLAY_TYPE_OFFLINE_EVENTS = 0,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_STARTS = 1,
			E_ICON_DISPLAY_TYPE_ONLINE_CHECKPOINTS = 2,
			E_ICON_DISPLAY_TYPE_ONLINE_FINISH_POINTS = 3,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_PRESETS = 4,
			E_ICON_DISPLAY_TYPE_COUNT = 5,
		}

	}

	// Declaration
	struct GuiEventNetworkOutputPlayerTexture {
		// BrnGuiEventTypeDefs.h:3320
		enum EOutput {
			E_OUTPUT_OFF = 0,
			E_OUTPUT_PLAYER_IMAGE = 1,
			E_OUTPUT_SCALP_IMAGE = 2,
			E_OUTPUT_WINNER_IMAGE = 3,
			E_OUTPUT_GAMERPIC = 4,
			E_OUTPUT_GAMERPIC_LICENCE = 5,
			E_OUTPUT_NUM = 6,
		}

	}

	// Declaration
	struct GuiDriveThroughEvent {
		// BrnGuiEventTypeDefs.h:3665
		enum DriveThroughType {
			E_DRIVE_THROUGH_TYPE_CAR_WASH = 0,
			E_DRIVE_THROUGH_TYPE_BODY_SHOP = 1,
			E_DRIVE_THROUGH_TYPE_PAINT_SHOP = 2,
			E_DRIVE_THROUGH_TYPE_GAS_STATION = 3,
			E_DRIVE_THROUGH_TYPE_AUTO_PARTS = 4,
			E_DRIVE_THROUGH_TYPE_FAILED = 5,
			E_DRIVE_THROUGH_TYPE_COUNT = 6,
		}

	}

	// Declaration
	struct GuiPlayerCrashingStateChangeEvent {
		// BrnGuiEventTypeDefs.h:3960
		enum CrashBarState {
			E_CRASHBARSTATE_INVALID = -1,
			E_CRASHBARSTATE_START_CRASHED = 0,
			E_CRASHBARSTATE_LEAVE_CRASHED = 1,
			E_CRASHBARSTATE_START_TAKEDOWN = 2,
			E_CRASHBARSTATE_LEAVE_TAKEDOWN = 3,
			E_CRASHBARSTATE_COUNT = 4,
		}

	}

	// Declaration
	struct GuiPlayerEngineEvent {
		// BrnGuiEventTypeDefs.h:3986
		enum EEngineState {
			E_ENGINE_OFF = 0,
			E_ENGINE_ON = 1,
			E_ENGINE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventAudioTraxPlayOrder {
		// BrnGuiEventTypeDefs.h:4068
		enum ETraxPlayOrderMode {
			E_TRAX_PLAY_ORDER_MODE_SEQUENTIAL = 0,
			E_TRAX_PLAY_ORDER_MODE_RANDOM = 1,
			E_TRAX_PLAY_ORDER_MODE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiRivalryStatusChange {
		// BrnGuiEventTypeDefs.h:5115
		enum ERivalryLevels {
			E_RIVAL_LEVEL_NEW = 0,
			E_RIVAL_LEVEL_RIVAL = 1,
			E_RIVAL_LEVEL_TARGET = 2,
			E_RIVAL_LEVEL_WRECKED = 3,
			E_RIVAL_LEVEL_COUNT = 4,
		}

	}

	// Declaration
	struct GuiOverlayCompleteEvent {
		// BrnGuiEventTypeDefs.h:5837
		enum LeaveMethod {
			E_LEAVEMETHOD_NONE = 0,
			E_LEAVEMETHOD_OK = 1,
			E_LEAVEMETHOD_CANCEL = 2,
			E_LEAVEMETHOD_COUNT = 3,
		}

	}

	// Declaration
	struct GuiChallengeSelectedEvent {
		// BrnGuiEventTypeDefs.h:6542
		enum EFreeburnChallengeAction {
			E_ACTION_CHOSEN = 0,
			E_ACTION_CANCELED = 1,
			E_ACTION_SHOWN = 2,
			E_ACTION_HIDDEN = 3,
		}

	}

	// BrnGuiEventTypeDefs.h:97
	const int32_t KI_MAX_GAMERTAG_LENGTH = 20;

	// BrnGuiEventTypeDefs.h:98
	const int32_t KI_MAX_AWARDS = 6;

	// BrnGuiEventTypeDefs.h:99
	const int32_t KI_MAX_PFXHOOK_NAMES = 100;

	// BrnGuiEventTypeDefs.h:100
	const int32_t KI_MAX_VISIBLE_SIGNS = 32;

	// BrnGuiEventTypeDefs.h:925
	const const char *[4] KAPC_INGAME_FSM_NAMES;

}

// BrnGuiEventTypeDefs.h:176
struct BrnGui::GuiEventPlayVideo : public GuiEvent<498> {
	// BrnGuiEventTypeDefs.h:181
	BrnGui::MovieManager::VideoDefinition mVideo;

public:
	// BrnGuiEventTypeDefs.h:179
	void Construct();

}

// BrnGuiEventTypeDefs.h:193
struct BrnGui::GuiEventStopVideo : public GuiEvent<499> {
	// BrnGuiEventTypeDefs.h:198
	BrnGui::MovieManager::VideoDefinition mVideo;

public:
	// BrnGuiEventTypeDefs.h:196
	void Construct();

}

// BrnGuiEventTypeDefs.h:275
struct BrnGui::GuiEventPreloadedResourcesLoaded : public GuiEvent<72> {
}

// BrnGuiEventTypeDefs.h:793
struct BrnGui::GuiEventTriggerCrashMud : public GuiEvent<138> {
	// BrnGuiEventTypeDefs.h:804
	BrnGui::GuiEventTriggerCrashMud::TriggerType meTriggerType;

}

// BrnGuiEventTypeDefs.h:849
struct BrnGui::GuiEventTriggerGetPlayerName : public GuiEvent<497> {
}

// BrnGuiEventTypeDefs.h:2766
struct BrnGui::GuiEventEventStateRequest : public GuiEvent<540> {
}

// BrnGuiEventTypeDefs.h:2957
struct BrnGui::GuiEventNetworkPlayerJoinedLobby : public GuiEvent<274> {
	// BrnGuiEventTypeDefs.h:2959
	GuiEventNetworkLaunching::NetworkPlayerID mNetworkPlayerID;

}

// BrnGuiEventTypeDefs.h:2971
struct BrnGui::GuiEventNetworkPlayerLeftLobby : public GuiEvent<275> {
	// BrnGuiEventTypeDefs.h:2973
	GuiEventNetworkLaunching::NetworkPlayerID mNetworkPlayerID;

	// BrnGuiEventTypeDefs.h:2974
	PlayerName mPlayerName;

	// BrnGuiEventTypeDefs.h:2975
	bool mbIsLocalPlayerInGame;

}

// BrnGuiEventTypeDefs.h:5422
struct BrnGui::GuiNetworkRemotePlayerDisconnectEvent : public GuiEvent<265> {
private:
	// BrnGuiEventTypeDefs.h:5439
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:5440
	GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

public:
	// BrnGuiEventTypeDefs.h:5426
	void SetActiveRaceCarIndex(EActiveRaceCarIndex);

	// BrnGuiEventTypeDefs.h:5429
	EActiveRaceCarIndex GetActiveRaceCarIndex() const;

	// BrnGuiEventTypeDefs.h:5433
	void SetNetworkPlayerID(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnGuiEventTypeDefs.h:5436
	GuiEventNetworkLaunching::NetworkPlayerID GetNetworkPlayerID() const;

}

// BrnGuiEventTypeDefs.h:5864
struct BrnGui::GuiOverlayShowingNotification : public GuiEvent<188> {
private:
	// BrnGuiEventTypeDefs.h:5883
	CgsID mOverlayId;

public:
	// BrnGuiEventTypeDefs.h:5870
	void Construct(const char *);

	// BrnGuiEventTypeDefs.h:5875
	void Construct(CgsID);

	// BrnGuiEventTypeDefs.h:5879
	CgsID GetOverlayID() const;

}

// BrnGuiEventTypeDefs.h:6391
struct BrnGui::GuiShowtimeModeSwitch : public GuiEvent<392> {
	// BrnGuiEventTypeDefs.h:6393
	GuiEventNetworkLaunching::NetworkPlayerID mNetworkPlayerID;

	// BrnGuiEventTypeDefs.h:6394
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGuiEventTypeDefs.h:6395
	int32_t miFinalShowtimeScore;

	// BrnGuiEventTypeDefs.h:6396
	bool mbEnteringShowtime;

}

// BrnGuiEventTypeDefs.h:6634
struct BrnGui::GuiEventBlackOverlayFadeIn : public GuiEvent<574> {
}

// BrnGuiEventTypeDefs.h:6638
struct BrnGui::GuiEventBlackOverlayFadeOut : public GuiEvent<575> {
}

// CgsGuiShared.h:45
namespace BrnGui {
	// BrnGuiEventTypeDefs.h:95
	using BrnNetwork::BrnNetworkModuleIO;

	// BrnGuiEventTypeDefs.h:113
	enum RoadRuleLeaderType {
		E_ROADRULELEADERTYPE_AI = 0,
		E_ROADRULELEADERTYPE_PLAYER = 1,
		E_ROADRULELEADERTYPE_FRIEND = 2,
		E_ROADRULELEADERTYPE_COUNT = 3,
	}

	// Declaration
	struct GuiEventTickerCustomMessage {
		// BrnGuiEventTypeDefs.h:313
		enum EStringType {
			E_STRINGTYPE_NONE = 0,
			E_STRINGTYPE_TEXT = 1,
			E_STRINGTYPE_STRINGID = 2,
			E_STRINGTYPE_NUM = 3,
		}

	}

	// Declaration
	struct GuiEventChangeReplayState {
		// BrnGuiEventTypeDefs.h:861
		enum ReplayState {
			E_REPLAYSTATE_INVISIBLE = 0,
			E_REPLAYSTATE_PLAYING = 1,
			E_REPLAYSTATE_RECORDING = 2,
			E_REPLAYSTATE_COUNT = 3,
		}

	}

	// BrnGuiEventTypeDefs.h:883
	enum GuiFlow {
		E_GUIFLOW_SCREEN = 0,
		E_GUIFLOW_HUD = 1,
		E_GUIFLOW_OVERLAY = 2,
		E_GUIFLOW_COUNT = 3,
		E_GUIFLOW_FIRST = 0,
	}

	// BrnGuiEventTypeDefs.h:893
	enum EFinishType {
		E_FINISH_TYPE_1ST = 0,
		E_FINISH_TYPE_2ND = 1,
		E_FINISH_TYPE_3RD = 2,
		E_FINISH_TYPE_4TH = 3,
		E_FINISH_TYPE_5TH = 4,
		E_FINISH_TYPE_6TH = 5,
		E_FINISH_TYPE_7TH = 6,
		E_FINISH_TYPE_8TH = 7,
		E_FINISH_TYPE_TIMED_OUT = 8,
		E_FINISH_TYPE_WON = 9,
		E_FINISH_TYPE_LOST = 10,
		E_FINISH_TYPE_COUNT = 11,
	}

	// BrnGuiEventTypeDefs.h:912
	enum EHUDFSMs {
		E_GUI_HUD_INVALID = -1,
		E_GUI_HUD_BOOT = 0,
		E_GUI_HUD_FREEBURN = 1,
		E_GUI_HUD_EVENT = 2,
		E_GUI_HUD_ONLINE = 3,
		E_GUI_HUD_NUMSFSMS = 4,
	}

	// Declaration
	struct GuiEventActivateCrashNav {
		// BrnGuiEventTypeDefs.h:970
		enum ActivateDeactivate {
			E_ACTIVATE = 0,
			E_DEACTIVATE = 1,
		}

		// BrnGuiEventTypeDefs.h:976
		enum CrashNavType {
			E_CRASHNAV_MAIN = 0,
			E_CRASHNAV_EVENT = 1,
			E_CRASHNAV_NO_TITLE_SIGNIN = 2,
			E_CRASHNAV_TYPE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventRoadRuleUpcomingRoads {
		// BrnGuiEventTypeDefs.h:1218
		enum ERoadSide {
			E_ROAD_LEFT = 0,
			E_ROAD_RIGHT = 1,
			E_ROAD_COUNT = 2,
		}

		// BrnGuiEventTypeDefs.h:1226
		enum ERoadState {
			E_ROADSTATE_NORMAL = 0,
			E_ROADSTATE_SUGGESTED = 1,
			E_ROADSTATE_WRONG = 2,
			E_ROADSTATE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventSetRoadRuleScoreMode {
		// BrnGuiEventTypeDefs.h:1321
		enum ERoadPanelModes {
			E_ROAD_PANEL_MODE_OFFLINE = 0,
			E_ROAD_PANEL_MODE_ONLINE = 1,
			E_ROAD_PANEL_MODE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventPreRaceMessages {
		// BrnGuiEventTypeDefs.h:1579
		enum ERelationshipTypes {
			E_RELATIONSHIP_GOOD = 0,
			E_RELATIONSHIP_BAD = 1,
			E_RELATIONSHIP_NEUTRAL = 2,
			E_RELATIONSHIP_COUNT = 3,
		}

		// BrnGuiEventTypeDefs.h:1590
		struct MessageInfo {
			// BrnGuiEventTypeDefs.h:1592
			extern const int32_t KI_NUM_MESSAGE_STRINGS = 3;

			// BrnGuiEventTypeDefs.h:1593
			extern const int32_t KI_MAX_LENGTH_STRING_ID = 128;

			// BrnGuiEventTypeDefs.h:1595
			extern const int32_t KI_NUM_PARAMETERS = 1;

			// BrnGuiEventTypeDefs.h:1596
			extern const int32_t KI_MAX_LENGTH_PARAMETERS = 20;

			// BrnGuiEventTypeDefs.h:1600
			char[3][128] maacMessageIDs;

			// BrnGuiEventTypeDefs.h:1602
			int32_t miNumMsgIDs;

			// BrnGuiEventTypeDefs.h:1603
			char[3][20] maacMessageParameters;

			// BrnGuiEventTypeDefs.h:1605
			int32_t[3] maiNumParams;

			// BrnGuiEventTypeDefs.h:1608
			char[128] macGamerName;

			// BrnGuiEventTypeDefs.h:1610
			BrnGui::GuiEventPreRaceMessages::ERelationshipTypes meRelationshipType;

		}

	}

	// Declaration
	struct GuiEventUpdateSatNav {
		// BrnGuiEventTypeDefs.h:1675
		struct SatNavIconInfo {
			// BrnGuiEventTypeDefs.h:1678
			enum SatNavIconType {
				E_SATNAVICON_PLAYER_CAR = 0,
				E_SATNAVICON_MARKED_MAN = 1,
				E_SATNAVICON_NETWORKRIVAL = 2,
				E_SATNAVICON_RIVAL = 3,
				E_SATNAVICON_LANDMARK = 4,
				E_SATNAVICON_JUNCTION = 5,
				E_SATNAVICON_FREEBURN_CHALLENGE = 6,
				E_SATNAVICON_JUNKYARD = 7,
				E_SATNAVICON_CAR_PARK = 8,
				E_SATNAVICON_BODYSHOP = 9,
				E_SATNAVICON_GAS_STATION = 10,
				E_SATNAVICON_PAINT_SHOP = 11,
				E_SATNAVICON_TIRE_SHOP = 12,
				E_SATNAVICON_ROADSIGN = 13,
				E_SATNAVICON_MAX = 14,
			}

			// BrnGuiEventTypeDefs.h:1699
			Vector3 mv3Position;

			// BrnGuiEventTypeDefs.h:1700
			CgsID mCgsId;

			// BrnGuiEventTypeDefs.h:1702
			float32_t mfRotation;

			// BrnGuiEventTypeDefs.h:1703
			float32_t mfSpeedMph;

			// BrnGuiEventTypeDefs.h:1705
			LandmarkIndex mLandmarkIndex;

			// BrnGuiEventTypeDefs.h:1706
			uint8_t mu8DesignIndex;

			// BrnGuiEventTypeDefs.h:1707
			bool mbIsHiddenDriveThru;

		private:
			// BrnGuiEventTypeDefs.h:1736
			uint8_t mu8County;

			// BrnGuiEventTypeDefs.h:1737
			uint8_t mu8District;

			// BrnGuiEventTypeDefs.h:1738
			int8_t mi8ActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:1739
			int8_t mi8IconType;

		public:
			// BrnGuiEventTypeDefs.h:1710
			void SetCounty(BrnWorld::ECounty);

			// BrnGuiEventTypeDefs.h:1713
			BrnWorld::ECounty GetCounty() const;

			// BrnGuiEventTypeDefs.h:1716
			void SetDistrict(BrnWorld::EDistrict);

			// BrnGuiEventTypeDefs.h:1719
			BrnWorld::EDistrict GetDistrict() const;

			// BrnGuiEventTypeDefs.h:1722
			void SetActiveRaceCarIndex(EActiveRaceCarIndex);

			// BrnGuiEventTypeDefs.h:1725
			EActiveRaceCarIndex GetActiveRaceCarIndex() const;

			// BrnGuiEventTypeDefs.h:1728
			void SetIconType(BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType);

			// BrnGuiEventTypeDefs.h:1731
			BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType GetIconType() const;

		}

	}

	// Declaration
	struct GuiEventShowHideSatNav {
		// BrnGuiEventTypeDefs.h:2005
		enum MapType {
			E_MAPTYPE_MAIN = 0,
			E_MAPTYPE_GPS = 1,
		}

	}

	// Declaration
	struct GuiEventOnlinePostEvent {
		// BrnGuiEventTypeDefs.h:2276
		struct OnlinePlayer {
			// BrnGuiEventTypeDefs.h:2278
			EActiveRaceCarIndex meActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2279
			float32_t mfFinishingTime;

			// BrnGuiEventTypeDefs.h:2280
			Time mFinishingTime;

			// BrnGuiEventTypeDefs.h:2281
			float32_t mfDistanceFromFinish;

			// BrnGuiEventTypeDefs.h:2282
			int32_t miPointsFromThisRound;

			// BrnGuiEventTypeDefs.h:2283
			int32_t miResultsTablePosition;

			// BrnGuiEventTypeDefs.h:2284
			int32_t miTotalPoints;

			// BrnGuiEventTypeDefs.h:2285
			int32_t miEliminations;

			// BrnGuiEventTypeDefs.h:2286
			int32_t miLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2287
			int32_t miLandmarksNotVisited;

			// BrnGuiEventTypeDefs.h:2288
			int32_t miCumulativeLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2289
			bool mbHasTimedOut;

			// BrnGuiEventTypeDefs.h:2290
			bool mbHasDisconnected;

			// BrnGuiEventTypeDefs.h:2291
			bool mbWasEliminated;

		}

		// BrnGuiEventTypeDefs.h:2296
		struct OnlineAward {
			// BrnGuiEventTypeDefs.h:2298
			BrnGameState::EOnlineAwardID meOnlineAwardID;

			// BrnGuiEventTypeDefs.h:2299
			EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2300
			int32_t miAwardVariable;

		}

	}

	// Declaration
	struct GuiEventOfflinePostEvent {
		// BrnGuiEventTypeDefs.h:2380
		struct OfflinePostEventData {
			// BrnGuiEventTypeDefs.h:2382
			GuiEventStopMode::EGameModeType meFinishedGameModeType;

			// BrnGuiEventTypeDefs.h:2383
			CgsID mBeatenRival;

			// BrnGuiEventTypeDefs.h:2384
			int32_t miModeScore;

			// BrnGuiEventTypeDefs.h:2385
			float32_t mfTime;

			// BrnGuiEventTypeDefs.h:2386
			int8_t miPlayerFinishPosition;

			// BrnGuiEventTypeDefs.h:2387
			bool mbCrashedOut;

			// BrnGuiEventTypeDefs.h:2388
			bool mbTimedOut;

			// BrnGuiEventTypeDefs.h:2389
			bool mbEliminated;

			// BrnGuiEventTypeDefs.h:2390
			bool mbCountsTowardsProgression;

			// BrnGuiEventTypeDefs.h:2393
			int32_t miBaseScore;

			// BrnGuiEventTypeDefs.h:2394
			int32_t miScoreMultiplier;

			// BrnGuiEventTypeDefs.h:2395
			float32_t mfDistanceTravelled;

			// BrnGuiEventTypeDefs.h:2397
			DerivedCarArray maCarsToUnlockFromSpecialEvent;

			// BrnGuiEventTypeDefs.h:2401
			bool mbHasRankedUp;

			// BrnGuiEventTypeDefs.h:2402
			int32_t miPlayerOldRank;

			// BrnGuiEventTypeDefs.h:2403
			int32_t miPlayerNewRank;

			// BrnGuiEventTypeDefs.h:2404
			int32_t miCarsRevealed;

			// BrnGuiEventTypeDefs.h:2405
			int32_t miEventsUnlocked;

			// BrnGuiEventTypeDefs.h:2406
			bool mbCompletedLastRank;

			// BrnGuiEventTypeDefs.h:2409
			CgsID mNewlyUnlockedRivalID;

			// BrnGuiEventTypeDefs.h:2411
			bool mbHasUnlockedFreeCar;

			// BrnGuiEventTypeDefs.h:2412
			CgsID mNewlyUnlockedFreeCarID;

		}

	}

	// Declaration
	struct GuiEventRequestCollisionWorldEvent {
		// BrnGuiEventTypeDefs.h:2584
		enum EEventType {
			E_COLLISON_WORLD_INVALIDATE = 0,
			E_COLLISON_WORLD_VALIDATE = 1,
			E_COLLISON_WORLD_INVALIDATED = 2,
			E_COLLISON_WORLD_VALIDATED = 3,
			E_COLLISON_WORLD_COUNT = 4,
		}

	}

	// Declaration
	struct CalculateRoute {
		// BrnGuiEventTypeDefs.h:2612
		enum ERouteEndPointType {
			E_ROUTE_END_POINT_TYPE_LANDMARK = 0,
			E_ROUTE_END_POINT_TYPE_JUNCTION = 1,
			E_ROUTE_END_POINT_TYPE_PLAYERPOS = 2,
			E_ROUTE_END_POINT_TYPE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventDrawEventIcons {
		// BrnGuiEventTypeDefs.h:2662
		enum EIconDisplayType {
			E_ICON_DISPLAY_TYPE_OFFLINE_EVENTS = 0,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_STARTS = 1,
			E_ICON_DISPLAY_TYPE_ONLINE_CHECKPOINTS = 2,
			E_ICON_DISPLAY_TYPE_ONLINE_FINISH_POINTS = 3,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_PRESETS = 4,
			E_ICON_DISPLAY_TYPE_COUNT = 5,
		}

	}

	// Declaration
	struct GuiEventNetworkSelectedPlayerOption {
		// BrnGuiEventTypeDefs.h:3092
		enum EOptionSelected {
			E_OPTION_SELECTED_MARK_PLAYER = 0,
			E_OPTION_SELECTED_VIEW_GAMERCARD = 1,
			E_OPTION_SELECTED_SUBMIT_REVIEW = 2,
			E_OPTION_SELECTED_KICK_PLAYER = 3,
			E_OPTION_SELECTED_COUNT = 4,
		}

	}

	// Declaration
	struct GuiEventNetworkOutputPlayerTexture {
		// BrnGuiEventTypeDefs.h:3320
		enum EOutput {
			E_OUTPUT_OFF = 0,
			E_OUTPUT_PLAYER_IMAGE = 1,
			E_OUTPUT_SCALP_IMAGE = 2,
			E_OUTPUT_WINNER_IMAGE = 3,
			E_OUTPUT_GAMERPIC = 4,
			E_OUTPUT_GAMERPIC_LICENCE = 5,
			E_OUTPUT_NUM = 6,
		}

	}

	// Declaration
	struct GuiEventNetworkNewsAndTOS {
		// BrnGuiEventTypeDefs.h:3347
		enum EEventType {
			E_EVENT_TYPE_REQUEST_NEWS = 0,
			E_EVENT_TYPE_REQUEST_TOS = 1,
			E_EVENT_TYPE_RETRIEVED_NEWS = 2,
			E_EVENT_TYPE_RETRIEVED_TOS = 3,
			E_EVENT_TYPE_FAILED_NEWS = 4,
			E_EVENT_TYPE_FAILED_TOS = 5,
			E_EVENT_TYPE_RELEASE = 6,
			E_EVENT_TYPE_COUNT = 7,
		}

	}

	// Declaration
	struct GuiPlayerCrashingStateChangeEvent {
		// BrnGuiEventTypeDefs.h:3960
		enum CrashBarState {
			E_CRASHBARSTATE_INVALID = -1,
			E_CRASHBARSTATE_START_CRASHED = 0,
			E_CRASHBARSTATE_LEAVE_CRASHED = 1,
			E_CRASHBARSTATE_START_TAKEDOWN = 2,
			E_CRASHBARSTATE_LEAVE_TAKEDOWN = 3,
			E_CRASHBARSTATE_COUNT = 4,
		}

	}

	// Declaration
	struct GuiPlayerEngineEvent {
		// BrnGuiEventTypeDefs.h:3986
		enum EEngineState {
			E_ENGINE_OFF = 0,
			E_ENGINE_ON = 1,
			E_ENGINE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventAudioTraxPlayOrder {
		// BrnGuiEventTypeDefs.h:4068
		enum ETraxPlayOrderMode {
			E_TRAX_PLAY_ORDER_MODE_SEQUENTIAL = 0,
			E_TRAX_PLAY_ORDER_MODE_RANDOM = 1,
			E_TRAX_PLAY_ORDER_MODE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventNetworkSplashEvent {
		// BrnGuiEventTypeDefs.h:5462
		enum ESplashState {
			E_SPLASH_STATE_SHOW = 0,
			E_SPLASH_STATE_STOP = 1,
			E_SPLASH_STATE_FINISHED = 2,
			E_SPLASH_STATE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventPerformOnlinePauseOption {
		// BrnGuiEventTypeDefs.h:5521
		enum EPauseOptions {
			E_PAUSE_OPTIONS_LAUNCH = 0,
			E_PAUSE_OPTIONS_CREATE_EVENT = 1,
			E_PAUSE_OPTIONS_CHANGE_TEAMS = 2,
			E_PAUSE_OPTIONS_VIEW_LOBBY = 3,
			E_PAUSE_OPTIONS_LEAVE_GAME = 4,
			E_PAUSE_OPTIONS_VIEW_CHALLENGES = 5,
			E_PAUSE_OPTIONS_VIEW_EVENT = 6,
			E_PAUSE_OPTIONS_CANCEL_EVENT = 7,
			E_PAUSE_OPTIONS_VIEW_MAP = 8,
			E_PAUSE_OPTIONS_CHANGE_SECURITY = 9,
			E_PAUSE_OPTIONS_SECURITY_ALLCOMERS = 10,
			E_PAUSE_OPTIONS_SECURITY_FRIENDS_ONLY = 11,
			E_PAUSE_OPTIONS_SECURITY_INVITE_ONLY = 12,
			E_PAUSE_OPTIONS_SETTINGS = 13,
			E_PAUSE_OPTIONS_COUNT = 14,
		}

	}

	// Declaration
	struct GuiOverlayCompleteEvent {
		// BrnGuiEventTypeDefs.h:5837
		enum LeaveMethod {
			E_LEAVEMETHOD_NONE = 0,
			E_LEAVEMETHOD_OK = 1,
			E_LEAVEMETHOD_CANCEL = 2,
			E_LEAVEMETHOD_COUNT = 3,
		}

	}

	// Declaration
	struct GuiSystemUiVisibleEvent {
		// BrnGuiEventTypeDefs.h:6131
		enum E_VISIBILITY_STATUS {
			E_ABOUT_TO_BE_SHOWN = 0,
			E_ABOUT_TO_BE_HIDDEN = 1,
			E_VISIBILITY_STATUS_COUNT = 2,
		}

	}

	// Declaration
	struct GuiChallengeSelectedEvent {
		// BrnGuiEventTypeDefs.h:6542
		enum EFreeburnChallengeAction {
			E_ACTION_CHOSEN = 0,
			E_ACTION_CANCELED = 1,
			E_ACTION_SHOWN = 2,
			E_ACTION_HIDDEN = 3,
		}

	}

	// BrnGuiEventTypeDefs.h:97
	const int32_t KI_MAX_GAMERTAG_LENGTH = 20;

	// BrnGuiEventTypeDefs.h:98
	const int32_t KI_MAX_AWARDS = 6;

	// BrnGuiEventTypeDefs.h:99
	const int32_t KI_MAX_PFXHOOK_NAMES = 100;

	// BrnGuiEventTypeDefs.h:100
	const int32_t KI_MAX_VISIBLE_SIGNS = 32;

	// BrnGuiEventTypeDefs.h:925
	const const char *[4] KAPC_INGAME_FSM_NAMES;

}

// BrnGuiEventTypeDefs.h:2242
struct BrnGui::GuiEventOnlineStatsResponse : public GuiEvent<239> {
	// BrnGuiEventTypeDefs.h:2244
	int32_t miTotalGames;

	// BrnGuiEventTypeDefs.h:2245
	int32_t miWinRate;

	// BrnGuiEventTypeDefs.h:2246
	int32_t miTakedowns;

	// BrnGuiEventTypeDefs.h:2247
	int32_t miRivals;

	// BrnGuiEventTypeDefs.h:2248
	int32_t miMugshots;

	// BrnGuiEventTypeDefs.h:2249
	int32_t miDisconnectRate;

}

// BrnGuiEventTypeDefs.h:2886
struct BrnGui::GuiEventFriendsListUtilShut : public GuiEvent<285> {
}

// BrnGuiEventTypeDefs.h:2944
struct BrnGui::GuiEventNetworkLeavingGameFailed : public GuiEvent<273> {
}

// BrnGuiEventTypeDefs.h:3115
struct BrnGui::GuiEventNetworkHighlightedPlayer : public GuiEvent<244> {
	// BrnGuiEventTypeDefs.h:3117
	GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

}

// BrnGuiEventTypeDefs.h:3129
struct BrnGui::GuiEventNetworkPlayerStats : public GuiEvent<245> {
	// BrnGuiEventTypeDefs.h:3131
	char[20] macPlayerName;

	// BrnGuiEventTypeDefs.h:3132
	NetworkPlayerStats mPlayerStats;

	// BrnGuiEventTypeDefs.h:3133
	GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

	// BrnGuiEventTypeDefs.h:3134
	int32_t miWorldRank;

}

// BrnGuiEventTypeDefs.h:3146
struct BrnGui::GuiEventNetworkQuickMatch : public GuiEvent<249> {
	// BrnGuiEventTypeDefs.h:3148
	bool mbRanked;

	// BrnGuiEventTypeDefs.h:3149
	bool mbFreeburn;

}

// BrnGuiEventTypeDefs.h:3163
struct BrnGui::GuiEventNetworkCustomMatchSearch : public GuiEvent<250> {
	// BrnGuiEventTypeDefs.h:3165
	BrnNetwork::ESearchGameModes meGameMode;

	// BrnGuiEventTypeDefs.h:3166
	BrnNetwork::ESearchOpponentTypes meSearchOpponentTypes;

	// BrnGuiEventTypeDefs.h:3167
	bool mbRanked;

	// BrnGuiEventTypeDefs.h:3168
	bool mbFreeburn;

}

// BrnGuiEventTypeDefs.h:3180
struct BrnGui::GuiEventNetworkCustomMatchResults : public GuiEvent<252> {
	// BrnGuiEventTypeDefs.h:3183
	extern const int32_t KI_HAS_FRIENDS = 2;

	// BrnGuiEventTypeDefs.h:3184
	extern const int32_t KI_HAS_RIVALS = 4;

	// BrnGuiEventTypeDefs.h:3186
	extern const int32_t KI_MAX_NUM_GAMES = 10;

	// BrnGuiEventTypeDefs.h:3188
	char[10][36] maacGameNames;

	// BrnGuiEventTypeDefs.h:3189
	int32_t[10] maiNumPlayers;

	// BrnGuiEventTypeDefs.h:3190
	int32_t[10] maiMaxNumPlayers;

	// BrnGuiEventTypeDefs.h:3191
	int32_t[10] maiGameFlags;

	// BrnGuiEventTypeDefs.h:3192
	int32_t[10] maiFoundGameIndex;

	// BrnGuiEventTypeDefs.h:3193
	BrnGameState::GameStateModuleIO::EGameModeType[10] maeGameMode;

	// BrnGuiEventTypeDefs.h:3194
	BrnGameState::GameStateModuleIO::EGameModeType[10] maePreviousGameMode;

	// BrnGuiEventTypeDefs.h:3196
	int32_t miNumGames;

}

// BrnGuiEventTypeDefs.h:3208
struct BrnGui::GuiEventNetworkCustomMatchJoin : public GuiEvent<253> {
	// BrnGuiEventTypeDefs.h:3210
	int32_t miGameIndex;

}

// BrnGuiEventTypeDefs.h:3345
struct BrnGui::GuiEventNetworkNewsAndTOS : public GuiEvent<264> {
	// BrnGuiEventTypeDefs.h:3360
	BrnGui::GuiEventNetworkNewsAndTOS::EEventType meEventType;

}

// BrnGuiEventTypeDefs.h:3541
struct BrnGui::GuiSaveLoadImageExportRequested : public GuiEvent<356> {
	// BrnGuiEventTypeDefs.h:3543
	bool mbVignette;

	// BrnGuiEventTypeDefs.h:3544
	PlayerName mPlayerName;

}

// BrnGuiEventTypeDefs.h:4087
struct BrnGui::GuiEventAudioSettings : public GuiEvent<458> {
	// BrnGuiEventTypeDefs.h:4097
	int32_t miMusicVolume;

	// BrnGuiEventTypeDefs.h:4098
	int32_t miSfxVolume;

}

// BrnGuiEventTypeDefs.h:4298
struct BrnGui::GuiEventDirectorOnlineLoadingStarted : public GuiEvent<474> {
}

// BrnGuiEventTypeDefs.h:4310
struct BrnGui::GuiEventDirectorOnlineLoadingFinished : public GuiEvent<475> {
}

// BrnGuiEventTypeDefs.h:5450
struct BrnGui::GuiNetworkPrepareGameEvent : public GuiEvent<266> {
}

// BrnGuiEventTypeDefs.h:5571
struct BrnGui::GuiEventNetworkMarkedManLoadedEvent : public GuiEvent<280> {
}

// BrnGuiEventTypeDefs.h:6129
struct BrnGui::GuiSystemUiVisibleEvent : public GuiEvent<506> {
	// BrnGuiEventTypeDefs.h:6139
	BrnGui::GuiSystemUiVisibleEvent::E_VISIBILITY_STATUS meVisibilityStatus;

}

// BrnGuiEventTypeDefs.h:3183
extern const int32_t KI_HAS_FRIENDS = 2;

// BrnGuiEventTypeDefs.h:3184
extern const int32_t KI_HAS_RIVALS = 4;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// BrnGuiEventTypeDefs.h:95
	using BrnNetwork::BrnNetworkModuleIO;

	// BrnGuiEventTypeDefs.h:113
	enum RoadRuleLeaderType {
		E_ROADRULELEADERTYPE_AI = 0,
		E_ROADRULELEADERTYPE_PLAYER = 1,
		E_ROADRULELEADERTYPE_FRIEND = 2,
		E_ROADRULELEADERTYPE_COUNT = 3,
	}

	// Declaration
	struct GuiEventChangeReplayState {
		// BrnGuiEventTypeDefs.h:861
		enum ReplayState {
			E_REPLAYSTATE_INVISIBLE = 0,
			E_REPLAYSTATE_PLAYING = 1,
			E_REPLAYSTATE_RECORDING = 2,
			E_REPLAYSTATE_COUNT = 3,
		}

	}

	// BrnGuiEventTypeDefs.h:883
	enum GuiFlow {
		E_GUIFLOW_SCREEN = 0,
		E_GUIFLOW_HUD = 1,
		E_GUIFLOW_OVERLAY = 2,
		E_GUIFLOW_COUNT = 3,
		E_GUIFLOW_FIRST = 0,
	}

	// Declaration
	struct GuiEventRoadRuleUpcomingRoads {
		// BrnGuiEventTypeDefs.h:1218
		enum ERoadSide {
			E_ROAD_LEFT = 0,
			E_ROAD_RIGHT = 1,
			E_ROAD_COUNT = 2,
		}

		// BrnGuiEventTypeDefs.h:1226
		enum ERoadState {
			E_ROADSTATE_NORMAL = 0,
			E_ROADSTATE_SUGGESTED = 1,
			E_ROADSTATE_WRONG = 2,
			E_ROADSTATE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventSetRoadRuleScoreMode {
		// BrnGuiEventTypeDefs.h:1321
		enum ERoadPanelModes {
			E_ROAD_PANEL_MODE_OFFLINE = 0,
			E_ROAD_PANEL_MODE_ONLINE = 1,
			E_ROAD_PANEL_MODE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventPreRaceMessages {
		// BrnGuiEventTypeDefs.h:1579
		enum ERelationshipTypes {
			E_RELATIONSHIP_GOOD = 0,
			E_RELATIONSHIP_BAD = 1,
			E_RELATIONSHIP_NEUTRAL = 2,
			E_RELATIONSHIP_COUNT = 3,
		}

		// BrnGuiEventTypeDefs.h:1590
		struct MessageInfo {
			// BrnGuiEventTypeDefs.h:1592
			extern const int32_t KI_NUM_MESSAGE_STRINGS = 3;

			// BrnGuiEventTypeDefs.h:1593
			extern const int32_t KI_MAX_LENGTH_STRING_ID = 128;

			// BrnGuiEventTypeDefs.h:1595
			extern const int32_t KI_NUM_PARAMETERS = 1;

			// BrnGuiEventTypeDefs.h:1596
			extern const int32_t KI_MAX_LENGTH_PARAMETERS = 20;

			// BrnGuiEventTypeDefs.h:1600
			char[3][128] maacMessageIDs;

			// BrnGuiEventTypeDefs.h:1602
			int32_t miNumMsgIDs;

			// BrnGuiEventTypeDefs.h:1603
			char[3][20] maacMessageParameters;

			// BrnGuiEventTypeDefs.h:1605
			int32_t[3] maiNumParams;

			// BrnGuiEventTypeDefs.h:1608
			char[128] macGamerName;

			// BrnGuiEventTypeDefs.h:1610
			BrnGui::GuiEventPreRaceMessages::ERelationshipTypes meRelationshipType;

		}

	}

	// Declaration
	struct GuiEventUpdateSatNav {
		// BrnGuiEventTypeDefs.h:1675
		struct SatNavIconInfo {
			// BrnGuiEventTypeDefs.h:1678
			enum SatNavIconType {
				E_SATNAVICON_PLAYER_CAR = 0,
				E_SATNAVICON_MARKED_MAN = 1,
				E_SATNAVICON_NETWORKRIVAL = 2,
				E_SATNAVICON_RIVAL = 3,
				E_SATNAVICON_LANDMARK = 4,
				E_SATNAVICON_JUNCTION = 5,
				E_SATNAVICON_FREEBURN_CHALLENGE = 6,
				E_SATNAVICON_JUNKYARD = 7,
				E_SATNAVICON_CAR_PARK = 8,
				E_SATNAVICON_BODYSHOP = 9,
				E_SATNAVICON_GAS_STATION = 10,
				E_SATNAVICON_PAINT_SHOP = 11,
				E_SATNAVICON_TIRE_SHOP = 12,
				E_SATNAVICON_ROADSIGN = 13,
				E_SATNAVICON_MAX = 14,
			}

			// BrnGuiEventTypeDefs.h:1699
			Vector3 mv3Position;

			// BrnGuiEventTypeDefs.h:1700
			CgsID mCgsId;

			// BrnGuiEventTypeDefs.h:1702
			float32_t mfRotation;

			// BrnGuiEventTypeDefs.h:1703
			float32_t mfSpeedMph;

			// BrnGuiEventTypeDefs.h:1705
			LandmarkIndex mLandmarkIndex;

			// BrnGuiEventTypeDefs.h:1706
			uint8_t mu8DesignIndex;

			// BrnGuiEventTypeDefs.h:1707
			bool mbIsHiddenDriveThru;

		private:
			// BrnGuiEventTypeDefs.h:1736
			uint8_t mu8County;

			// BrnGuiEventTypeDefs.h:1737
			uint8_t mu8District;

			// BrnGuiEventTypeDefs.h:1738
			int8_t mi8ActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:1739
			int8_t mi8IconType;

		public:
			// BrnGuiEventTypeDefs.h:1710
			void SetCounty(BrnWorld::ECounty);

			// BrnGuiEventTypeDefs.h:1713
			BrnWorld::ECounty GetCounty() const;

			// BrnGuiEventTypeDefs.h:1716
			void SetDistrict(BrnWorld::EDistrict);

			// BrnGuiEventTypeDefs.h:1719
			BrnWorld::EDistrict GetDistrict() const;

			// BrnGuiEventTypeDefs.h:1722
			void SetActiveRaceCarIndex(EActiveRaceCarIndex);

			// BrnGuiEventTypeDefs.h:1725
			EActiveRaceCarIndex GetActiveRaceCarIndex() const;

			// BrnGuiEventTypeDefs.h:1728
			void SetIconType(BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType);

			// BrnGuiEventTypeDefs.h:1731
			BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType GetIconType() const;

		}

	}

	// Declaration
	struct GuiEventOnlinePostEvent {
		// BrnGuiEventTypeDefs.h:2276
		struct OnlinePlayer {
			// BrnGuiEventTypeDefs.h:2278
			EActiveRaceCarIndex meActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2279
			float32_t mfFinishingTime;

			// BrnGuiEventTypeDefs.h:2280
			Time mFinishingTime;

			// BrnGuiEventTypeDefs.h:2281
			float32_t mfDistanceFromFinish;

			// BrnGuiEventTypeDefs.h:2282
			int32_t miPointsFromThisRound;

			// BrnGuiEventTypeDefs.h:2283
			int32_t miResultsTablePosition;

			// BrnGuiEventTypeDefs.h:2284
			int32_t miTotalPoints;

			// BrnGuiEventTypeDefs.h:2285
			int32_t miEliminations;

			// BrnGuiEventTypeDefs.h:2286
			int32_t miLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2287
			int32_t miLandmarksNotVisited;

			// BrnGuiEventTypeDefs.h:2288
			int32_t miCumulativeLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2289
			bool mbHasTimedOut;

			// BrnGuiEventTypeDefs.h:2290
			bool mbHasDisconnected;

			// BrnGuiEventTypeDefs.h:2291
			bool mbWasEliminated;

		}

		// BrnGuiEventTypeDefs.h:2296
		struct OnlineAward {
			// BrnGuiEventTypeDefs.h:2298
			BrnGameState::EOnlineAwardID meOnlineAwardID;

			// BrnGuiEventTypeDefs.h:2299
			EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2300
			int32_t miAwardVariable;

		}

	}

	// Declaration
	struct GuiEventOfflinePostEvent {
		// BrnGuiEventTypeDefs.h:2380
		struct OfflinePostEventData {
			// BrnGuiEventTypeDefs.h:2382
			GuiEventStopMode::EGameModeType meFinishedGameModeType;

			// BrnGuiEventTypeDefs.h:2383
			CgsID mBeatenRival;

			// BrnGuiEventTypeDefs.h:2384
			int32_t miModeScore;

			// BrnGuiEventTypeDefs.h:2385
			float32_t mfTime;

			// BrnGuiEventTypeDefs.h:2386
			int8_t miPlayerFinishPosition;

			// BrnGuiEventTypeDefs.h:2387
			bool mbCrashedOut;

			// BrnGuiEventTypeDefs.h:2388
			bool mbTimedOut;

			// BrnGuiEventTypeDefs.h:2389
			bool mbEliminated;

			// BrnGuiEventTypeDefs.h:2390
			bool mbCountsTowardsProgression;

			// BrnGuiEventTypeDefs.h:2393
			int32_t miBaseScore;

			// BrnGuiEventTypeDefs.h:2394
			int32_t miScoreMultiplier;

			// BrnGuiEventTypeDefs.h:2395
			float32_t mfDistanceTravelled;

			// BrnGuiEventTypeDefs.h:2397
			DerivedCarArray maCarsToUnlockFromSpecialEvent;

			// BrnGuiEventTypeDefs.h:2401
			bool mbHasRankedUp;

			// BrnGuiEventTypeDefs.h:2402
			int32_t miPlayerOldRank;

			// BrnGuiEventTypeDefs.h:2403
			int32_t miPlayerNewRank;

			// BrnGuiEventTypeDefs.h:2404
			int32_t miCarsRevealed;

			// BrnGuiEventTypeDefs.h:2405
			int32_t miEventsUnlocked;

			// BrnGuiEventTypeDefs.h:2406
			bool mbCompletedLastRank;

			// BrnGuiEventTypeDefs.h:2409
			CgsID mNewlyUnlockedRivalID;

			// BrnGuiEventTypeDefs.h:2411
			bool mbHasUnlockedFreeCar;

			// BrnGuiEventTypeDefs.h:2412
			CgsID mNewlyUnlockedFreeCarID;

		}

	}

	// Declaration
	struct CalculateRoute {
		// BrnGuiEventTypeDefs.h:2612
		enum ERouteEndPointType {
			E_ROUTE_END_POINT_TYPE_LANDMARK = 0,
			E_ROUTE_END_POINT_TYPE_JUNCTION = 1,
			E_ROUTE_END_POINT_TYPE_PLAYERPOS = 2,
			E_ROUTE_END_POINT_TYPE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventDrawEventIcons {
		// BrnGuiEventTypeDefs.h:2662
		enum EIconDisplayType {
			E_ICON_DISPLAY_TYPE_OFFLINE_EVENTS = 0,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_STARTS = 1,
			E_ICON_DISPLAY_TYPE_ONLINE_CHECKPOINTS = 2,
			E_ICON_DISPLAY_TYPE_ONLINE_FINISH_POINTS = 3,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_PRESETS = 4,
			E_ICON_DISPLAY_TYPE_COUNT = 5,
		}

	}

	// Declaration
	struct GuiPlayerCrashingStateChangeEvent {
		// BrnGuiEventTypeDefs.h:3960
		enum CrashBarState {
			E_CRASHBARSTATE_INVALID = -1,
			E_CRASHBARSTATE_START_CRASHED = 0,
			E_CRASHBARSTATE_LEAVE_CRASHED = 1,
			E_CRASHBARSTATE_START_TAKEDOWN = 2,
			E_CRASHBARSTATE_LEAVE_TAKEDOWN = 3,
			E_CRASHBARSTATE_COUNT = 4,
		}

	}

	// Declaration
	struct GuiPlayerEngineEvent {
		// BrnGuiEventTypeDefs.h:3986
		enum EEngineState {
			E_ENGINE_OFF = 0,
			E_ENGINE_ON = 1,
			E_ENGINE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventAudioTraxPlayOrder {
		// BrnGuiEventTypeDefs.h:4068
		enum ETraxPlayOrderMode {
			E_TRAX_PLAY_ORDER_MODE_SEQUENTIAL = 0,
			E_TRAX_PLAY_ORDER_MODE_RANDOM = 1,
			E_TRAX_PLAY_ORDER_MODE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiOverlayCompleteEvent {
		// BrnGuiEventTypeDefs.h:5837
		enum LeaveMethod {
			E_LEAVEMETHOD_NONE = 0,
			E_LEAVEMETHOD_OK = 1,
			E_LEAVEMETHOD_CANCEL = 2,
			E_LEAVEMETHOD_COUNT = 3,
		}

	}

	// BrnGuiEventTypeDefs.h:97
	const int32_t KI_MAX_GAMERTAG_LENGTH = 20;

	// BrnGuiEventTypeDefs.h:98
	const int32_t KI_MAX_AWARDS = 6;

	// BrnGuiEventTypeDefs.h:99
	const int32_t KI_MAX_PFXHOOK_NAMES = 100;

	// BrnGuiEventTypeDefs.h:100
	const int32_t KI_MAX_VISIBLE_SIGNS = 32;

	// BrnGuiEventTypeDefs.h:925
	const const char *[4] KAPC_INGAME_FSM_NAMES;

}

// BrnGuiEventTypeDefs.h:5804
struct BrnGui::GuiOverlayInternalRequestEvent : public GuiEvent<183> {
	// BrnGuiEventTypeDefs.h:5807
	CgsGui::PopupStyle meStyle;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// BrnGuiEventTypeDefs.h:95
	using BrnNetwork::BrnNetworkModuleIO;

	// BrnGuiEventTypeDefs.h:113
	enum RoadRuleLeaderType {
		E_ROADRULELEADERTYPE_AI = 0,
		E_ROADRULELEADERTYPE_PLAYER = 1,
		E_ROADRULELEADERTYPE_FRIEND = 2,
		E_ROADRULELEADERTYPE_COUNT = 3,
	}

	// Declaration
	struct GuiEventTickerCustomMessage {
		// BrnGuiEventTypeDefs.h:313
		enum EStringType {
			E_STRINGTYPE_NONE = 0,
			E_STRINGTYPE_TEXT = 1,
			E_STRINGTYPE_STRINGID = 2,
			E_STRINGTYPE_NUM = 3,
		}

	}

	// Declaration
	struct GuiEventChangeReplayState {
		// BrnGuiEventTypeDefs.h:861
		enum ReplayState {
			E_REPLAYSTATE_INVISIBLE = 0,
			E_REPLAYSTATE_PLAYING = 1,
			E_REPLAYSTATE_RECORDING = 2,
			E_REPLAYSTATE_COUNT = 3,
		}

	}

	// BrnGuiEventTypeDefs.h:883
	enum GuiFlow {
		E_GUIFLOW_SCREEN = 0,
		E_GUIFLOW_HUD = 1,
		E_GUIFLOW_OVERLAY = 2,
		E_GUIFLOW_COUNT = 3,
		E_GUIFLOW_FIRST = 0,
	}

	// BrnGuiEventTypeDefs.h:912
	enum EHUDFSMs {
		E_GUI_HUD_INVALID = -1,
		E_GUI_HUD_BOOT = 0,
		E_GUI_HUD_FREEBURN = 1,
		E_GUI_HUD_EVENT = 2,
		E_GUI_HUD_ONLINE = 3,
		E_GUI_HUD_NUMSFSMS = 4,
	}

	// Declaration
	struct GuiEventActivateCrashNav {
		// BrnGuiEventTypeDefs.h:970
		enum ActivateDeactivate {
			E_ACTIVATE = 0,
			E_DEACTIVATE = 1,
		}

		// BrnGuiEventTypeDefs.h:976
		enum CrashNavType {
			E_CRASHNAV_MAIN = 0,
			E_CRASHNAV_EVENT = 1,
			E_CRASHNAV_NO_TITLE_SIGNIN = 2,
			E_CRASHNAV_TYPE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventRoadRuleData {
		// BrnGuiEventTypeDefs.h:1137
		struct RoadRuleType {
			// BrnGuiEventTypeDefs.h:1144
			int32_t[3] maiScores;

			// BrnGuiEventTypeDefs.h:1145
			PlayerName mFriendName;

			// BrnGuiEventTypeDefs.h:1146
			CgsID mRivalId;

		public:
			// BrnGuiEventTypeDefs.h:1142
			void Construct();

		}

	}

	// Declaration
	struct GuiEventRoadRuleUpcomingRoads {
		// BrnGuiEventTypeDefs.h:1218
		enum ERoadSide {
			E_ROAD_LEFT = 0,
			E_ROAD_RIGHT = 1,
			E_ROAD_COUNT = 2,
		}

		// BrnGuiEventTypeDefs.h:1226
		enum ERoadState {
			E_ROADSTATE_NORMAL = 0,
			E_ROADSTATE_SUGGESTED = 1,
			E_ROADSTATE_WRONG = 2,
			E_ROADSTATE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventSetRoadRuleScoreMode {
		// BrnGuiEventTypeDefs.h:1321
		enum ERoadPanelModes {
			E_ROAD_PANEL_MODE_OFFLINE = 0,
			E_ROAD_PANEL_MODE_ONLINE = 1,
			E_ROAD_PANEL_MODE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventPreRaceMessages {
		// BrnGuiEventTypeDefs.h:1579
		enum ERelationshipTypes {
			E_RELATIONSHIP_GOOD = 0,
			E_RELATIONSHIP_BAD = 1,
			E_RELATIONSHIP_NEUTRAL = 2,
			E_RELATIONSHIP_COUNT = 3,
		}

		// BrnGuiEventTypeDefs.h:1590
		struct MessageInfo {
			// BrnGuiEventTypeDefs.h:1592
			extern const int32_t KI_NUM_MESSAGE_STRINGS = 3;

			// BrnGuiEventTypeDefs.h:1593
			extern const int32_t KI_MAX_LENGTH_STRING_ID = 128;

			// BrnGuiEventTypeDefs.h:1595
			extern const int32_t KI_NUM_PARAMETERS = 1;

			// BrnGuiEventTypeDefs.h:1596
			extern const int32_t KI_MAX_LENGTH_PARAMETERS = 20;

			// BrnGuiEventTypeDefs.h:1600
			char[3][128] maacMessageIDs;

			// BrnGuiEventTypeDefs.h:1602
			int32_t miNumMsgIDs;

			// BrnGuiEventTypeDefs.h:1603
			char[3][20] maacMessageParameters;

			// BrnGuiEventTypeDefs.h:1605
			int32_t[3] maiNumParams;

			// BrnGuiEventTypeDefs.h:1608
			char[128] macGamerName;

			// BrnGuiEventTypeDefs.h:1610
			BrnGui::GuiEventPreRaceMessages::ERelationshipTypes meRelationshipType;

		}

	}

	// Declaration
	struct GuiEventUpdateSatNav {
		// BrnGuiEventTypeDefs.h:1675
		struct SatNavIconInfo {
			// BrnGuiEventTypeDefs.h:1678
			enum SatNavIconType {
				E_SATNAVICON_PLAYER_CAR = 0,
				E_SATNAVICON_MARKED_MAN = 1,
				E_SATNAVICON_NETWORKRIVAL = 2,
				E_SATNAVICON_RIVAL = 3,
				E_SATNAVICON_LANDMARK = 4,
				E_SATNAVICON_JUNCTION = 5,
				E_SATNAVICON_FREEBURN_CHALLENGE = 6,
				E_SATNAVICON_JUNKYARD = 7,
				E_SATNAVICON_CAR_PARK = 8,
				E_SATNAVICON_BODYSHOP = 9,
				E_SATNAVICON_GAS_STATION = 10,
				E_SATNAVICON_PAINT_SHOP = 11,
				E_SATNAVICON_TIRE_SHOP = 12,
				E_SATNAVICON_ROADSIGN = 13,
				E_SATNAVICON_MAX = 14,
			}

			// BrnGuiEventTypeDefs.h:1699
			Vector3 mv3Position;

			// BrnGuiEventTypeDefs.h:1700
			CgsID mCgsId;

			// BrnGuiEventTypeDefs.h:1702
			float32_t mfRotation;

			// BrnGuiEventTypeDefs.h:1703
			float32_t mfSpeedMph;

			// BrnGuiEventTypeDefs.h:1705
			LandmarkIndex mLandmarkIndex;

			// BrnGuiEventTypeDefs.h:1706
			uint8_t mu8DesignIndex;

			// BrnGuiEventTypeDefs.h:1707
			bool mbIsHiddenDriveThru;

		private:
			// BrnGuiEventTypeDefs.h:1736
			uint8_t mu8County;

			// BrnGuiEventTypeDefs.h:1737
			uint8_t mu8District;

			// BrnGuiEventTypeDefs.h:1738
			int8_t mi8ActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:1739
			int8_t mi8IconType;

		public:
			// BrnGuiEventTypeDefs.h:1710
			void SetCounty(BrnWorld::ECounty);

			// BrnGuiEventTypeDefs.h:1713
			BrnWorld::ECounty GetCounty() const;

			// BrnGuiEventTypeDefs.h:1716
			void SetDistrict(BrnWorld::EDistrict);

			// BrnGuiEventTypeDefs.h:1719
			BrnWorld::EDistrict GetDistrict() const;

			// BrnGuiEventTypeDefs.h:1722
			void SetActiveRaceCarIndex(EActiveRaceCarIndex);

			// BrnGuiEventTypeDefs.h:1725
			EActiveRaceCarIndex GetActiveRaceCarIndex() const;

			// BrnGuiEventTypeDefs.h:1728
			void SetIconType(BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType);

			// BrnGuiEventTypeDefs.h:1731
			BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType GetIconType() const;

		}

	}

	// Declaration
	struct GuiEventShowHideSatNav {
		// BrnGuiEventTypeDefs.h:2005
		enum MapType {
			E_MAPTYPE_MAIN = 0,
			E_MAPTYPE_GPS = 1,
		}

	}

	// Declaration
	struct GuiEventOnlinePostEvent {
		// BrnGuiEventTypeDefs.h:2276
		struct OnlinePlayer {
			// BrnGuiEventTypeDefs.h:2278
			EActiveRaceCarIndex meActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2279
			float32_t mfFinishingTime;

			// BrnGuiEventTypeDefs.h:2280
			Time mFinishingTime;

			// BrnGuiEventTypeDefs.h:2281
			float32_t mfDistanceFromFinish;

			// BrnGuiEventTypeDefs.h:2282
			int32_t miPointsFromThisRound;

			// BrnGuiEventTypeDefs.h:2283
			int32_t miResultsTablePosition;

			// BrnGuiEventTypeDefs.h:2284
			int32_t miTotalPoints;

			// BrnGuiEventTypeDefs.h:2285
			int32_t miEliminations;

			// BrnGuiEventTypeDefs.h:2286
			int32_t miLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2287
			int32_t miLandmarksNotVisited;

			// BrnGuiEventTypeDefs.h:2288
			int32_t miCumulativeLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2289
			bool mbHasTimedOut;

			// BrnGuiEventTypeDefs.h:2290
			bool mbHasDisconnected;

			// BrnGuiEventTypeDefs.h:2291
			bool mbWasEliminated;

		}

		// BrnGuiEventTypeDefs.h:2296
		struct OnlineAward {
			// BrnGuiEventTypeDefs.h:2298
			BrnGameState::EOnlineAwardID meOnlineAwardID;

			// BrnGuiEventTypeDefs.h:2299
			EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2300
			int32_t miAwardVariable;

		}

	}

	// Declaration
	struct GuiEventOfflinePostEvent {
		// BrnGuiEventTypeDefs.h:2380
		struct OfflinePostEventData {
			// BrnGuiEventTypeDefs.h:2382
			GuiEventStopMode::EGameModeType meFinishedGameModeType;

			// BrnGuiEventTypeDefs.h:2383
			CgsID mBeatenRival;

			// BrnGuiEventTypeDefs.h:2384
			int32_t miModeScore;

			// BrnGuiEventTypeDefs.h:2385
			float32_t mfTime;

			// BrnGuiEventTypeDefs.h:2386
			int8_t miPlayerFinishPosition;

			// BrnGuiEventTypeDefs.h:2387
			bool mbCrashedOut;

			// BrnGuiEventTypeDefs.h:2388
			bool mbTimedOut;

			// BrnGuiEventTypeDefs.h:2389
			bool mbEliminated;

			// BrnGuiEventTypeDefs.h:2390
			bool mbCountsTowardsProgression;

			// BrnGuiEventTypeDefs.h:2393
			int32_t miBaseScore;

			// BrnGuiEventTypeDefs.h:2394
			int32_t miScoreMultiplier;

			// BrnGuiEventTypeDefs.h:2395
			float32_t mfDistanceTravelled;

			// BrnGuiEventTypeDefs.h:2397
			DerivedCarArray maCarsToUnlockFromSpecialEvent;

			// BrnGuiEventTypeDefs.h:2401
			bool mbHasRankedUp;

			// BrnGuiEventTypeDefs.h:2402
			int32_t miPlayerOldRank;

			// BrnGuiEventTypeDefs.h:2403
			int32_t miPlayerNewRank;

			// BrnGuiEventTypeDefs.h:2404
			int32_t miCarsRevealed;

			// BrnGuiEventTypeDefs.h:2405
			int32_t miEventsUnlocked;

			// BrnGuiEventTypeDefs.h:2406
			bool mbCompletedLastRank;

			// BrnGuiEventTypeDefs.h:2409
			CgsID mNewlyUnlockedRivalID;

			// BrnGuiEventTypeDefs.h:2411
			bool mbHasUnlockedFreeCar;

			// BrnGuiEventTypeDefs.h:2412
			CgsID mNewlyUnlockedFreeCarID;

		}

	}

	// Declaration
	struct GuiEventRequestCollisionWorldEvent {
		// BrnGuiEventTypeDefs.h:2584
		enum EEventType {
			E_COLLISON_WORLD_INVALIDATE = 0,
			E_COLLISON_WORLD_VALIDATE = 1,
			E_COLLISON_WORLD_INVALIDATED = 2,
			E_COLLISON_WORLD_VALIDATED = 3,
			E_COLLISON_WORLD_COUNT = 4,
		}

	}

	// Declaration
	struct CalculateRoute {
		// BrnGuiEventTypeDefs.h:2612
		enum ERouteEndPointType {
			E_ROUTE_END_POINT_TYPE_LANDMARK = 0,
			E_ROUTE_END_POINT_TYPE_JUNCTION = 1,
			E_ROUTE_END_POINT_TYPE_PLAYERPOS = 2,
			E_ROUTE_END_POINT_TYPE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventDrawEventIcons {
		// BrnGuiEventTypeDefs.h:2662
		enum EIconDisplayType {
			E_ICON_DISPLAY_TYPE_OFFLINE_EVENTS = 0,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_STARTS = 1,
			E_ICON_DISPLAY_TYPE_ONLINE_CHECKPOINTS = 2,
			E_ICON_DISPLAY_TYPE_ONLINE_FINISH_POINTS = 3,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_PRESETS = 4,
			E_ICON_DISPLAY_TYPE_COUNT = 5,
		}

	}

	// Declaration
	struct GuiEventNetworkNewsAndTOS {
		// BrnGuiEventTypeDefs.h:3347
		enum EEventType {
			E_EVENT_TYPE_REQUEST_NEWS = 0,
			E_EVENT_TYPE_REQUEST_TOS = 1,
			E_EVENT_TYPE_RETRIEVED_NEWS = 2,
			E_EVENT_TYPE_RETRIEVED_TOS = 3,
			E_EVENT_TYPE_FAILED_NEWS = 4,
			E_EVENT_TYPE_FAILED_TOS = 5,
			E_EVENT_TYPE_RELEASE = 6,
			E_EVENT_TYPE_COUNT = 7,
		}

	}

	// Declaration
	struct GuiPlayerCrashingStateChangeEvent {
		// BrnGuiEventTypeDefs.h:3960
		enum CrashBarState {
			E_CRASHBARSTATE_INVALID = -1,
			E_CRASHBARSTATE_START_CRASHED = 0,
			E_CRASHBARSTATE_LEAVE_CRASHED = 1,
			E_CRASHBARSTATE_START_TAKEDOWN = 2,
			E_CRASHBARSTATE_LEAVE_TAKEDOWN = 3,
			E_CRASHBARSTATE_COUNT = 4,
		}

	}

	// Declaration
	struct GuiPlayerEngineEvent {
		// BrnGuiEventTypeDefs.h:3986
		enum EEngineState {
			E_ENGINE_OFF = 0,
			E_ENGINE_ON = 1,
			E_ENGINE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventAudioTraxPlayOrder {
		// BrnGuiEventTypeDefs.h:4068
		enum ETraxPlayOrderMode {
			E_TRAX_PLAY_ORDER_MODE_SEQUENTIAL = 0,
			E_TRAX_PLAY_ORDER_MODE_RANDOM = 1,
			E_TRAX_PLAY_ORDER_MODE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventNetworkSplashEvent {
		// BrnGuiEventTypeDefs.h:5462
		enum ESplashState {
			E_SPLASH_STATE_SHOW = 0,
			E_SPLASH_STATE_STOP = 1,
			E_SPLASH_STATE_FINISHED = 2,
			E_SPLASH_STATE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventPerformOnlineMainMenuOption {
		// BrnGuiEventTypeDefs.h:5483
		enum EMainMenuOptions {
			E_MAIN_MENU_OPTIONS_FREEBURN_PLAY_NOW = 0,
			E_MAIN_MENU_OPTIONS_FREEBURN_CUSTOM_MATCH = 1,
			E_MAIN_MENU_OPTIONS_FREEBURN_CREATE = 2,
			E_MAIN_MENU_OPTIONS_IMAGE_GALLERY = 3,
			E_MAIN_MENU_OPTIONS_VIEW_CHALLENGES = 4,
			E_MAIN_MENU_OPTIONS_UNRANKED_PLAY_NOW = 5,
			E_MAIN_MENU_OPTIONS_UNRANKED_CUSTOM_MATCH = 6,
			E_MAIN_MENU_OPTIONS_UNRANKED_CREATE = 7,
			E_MAIN_MENU_OPTIONS_RANKED_PLAY_NOW = 8,
			E_MAIN_MENU_OPTIONS_RANKED_CUSTOM_MATCH = 9,
			E_MAIN_MENU_OPTIONS_RANKED_CREATE = 10,
			E_MAIN_MENU_OPTIONS_SCOREBOARDS = 11,
			E_MAIN_MENU_OPTIONS_NEWS = 12,
			E_MAIN_MENU_OPTIONS_COUNT = 13,
		}

	}

	// Declaration
	struct GuiOverlayCompleteEvent {
		// BrnGuiEventTypeDefs.h:5837
		enum LeaveMethod {
			E_LEAVEMETHOD_NONE = 0,
			E_LEAVEMETHOD_OK = 1,
			E_LEAVEMETHOD_CANCEL = 2,
			E_LEAVEMETHOD_COUNT = 3,
		}

	}

	// Declaration
	struct GuiSystemUiVisibleEvent {
		// BrnGuiEventTypeDefs.h:6131
		enum E_VISIBILITY_STATUS {
			E_ABOUT_TO_BE_SHOWN = 0,
			E_ABOUT_TO_BE_HIDDEN = 1,
			E_VISIBILITY_STATUS_COUNT = 2,
		}

	}

	// BrnGuiEventTypeDefs.h:910
	extern BrnGui::GuiFlow operator++(BrnGui::GuiFlow &, int);

	// BrnGuiEventTypeDefs.h:97
	const int32_t KI_MAX_GAMERTAG_LENGTH = 20;

	// BrnGuiEventTypeDefs.h:98
	const int32_t KI_MAX_AWARDS = 6;

	// BrnGuiEventTypeDefs.h:99
	const int32_t KI_MAX_PFXHOOK_NAMES = 100;

	// BrnGuiEventTypeDefs.h:100
	const int32_t KI_MAX_VISIBLE_SIGNS = 32;

	// BrnGuiEventTypeDefs.h:925
	const const char *[4] KAPC_INGAME_FSM_NAMES;

}

// BrnGuiEventTypeDefs.h:150
struct BrnGui::GuiEventColourCalibrationScreenShow : public GuiEvent<504> {
}

// BrnGuiEventTypeDefs.h:163
struct BrnGui::GuiEventColourCalibrationScreenHide : public GuiEvent<505> {
}

// BrnGuiEventTypeDefs.h:441
struct BrnGui::GuiEventQueryTickerStatus : public GuiEvent<524> {
}

// BrnGuiEventTypeDefs.h:810
struct BrnGui::GuiEventKeyboardResponse : public GuiEvent<140> {
	// BrnGuiEventTypeDefs.h:812
	BrnGuiKeyboard * lpKeyboard;

}

// BrnGuiEventTypeDefs.h:1071
struct BrnGui::GuiEventRoadRuleEnter : public GuiEvent<329> {
	// BrnGuiEventTypeDefs.h:1074
	PlayerName[2] maFriendLeader;

	// BrnGuiEventTypeDefs.h:1075
	CgsID[2] maAILeaderId;

	// BrnGuiEventTypeDefs.h:1076
	BrnGui::RoadRuleLeaderType[2] maeRoadRuleLeaderType;

	// BrnGuiEventTypeDefs.h:1077
	BrnGui::RoadRuleLeaderType[2] maeOfflineRoadRuleLeaderType;

	// BrnGuiEventTypeDefs.h:1078
	BrnGui::RoadRuleLeaderType[2] maeOnlineRoadRuleLeaderType;

	// BrnGuiEventTypeDefs.h:1079
	bool[2] mabChallenge;

	// BrnGuiEventTypeDefs.h:1080
	int32_t[2] maiBestValues;

	// BrnGuiEventTypeDefs.h:1081
	int32_t[2] maiBestOfflineValues;

	// BrnGuiEventTypeDefs.h:1082
	int32_t[2] maiBestOnlineValues;

	// BrnGuiEventTypeDefs.h:1083
	CgsID mRoadId;

	// BrnGuiEventTypeDefs.h:1084
	SpanBase::RoadIndex miRoadIndex;

private:
	// BrnGuiEventTypeDefs.h:1097
	extern char[] KAC_STRINGID_TIME_DEFAULT;

	// BrnGuiEventTypeDefs.h:1098
	extern char[] KAC_STRINGID_CRASH_DEFAULT;

	// BrnGuiEventTypeDefs.h:1099
	extern const char *[] KAC_DEFAULT_RULE_STRINGIDS;

public:
	// BrnGuiEventTypeDefs.h:1089
	void Construct(const BrnGameState::GameStateModuleIO::RoadRulesEnterRoadAction *);

	// BrnGuiEventTypeDefs.h:1093
	void Construct();

private:
	// BrnGuiEventTypeDefs.h:1106
	void SetupRoadRule(const BrnGameState::GameStateModuleIO::RoadRulesEnterRoadAction *, BrnStreetData::ScoreType);

}

// BrnGuiEventTypeDefs.h:1111
struct BrnGui::GuiEventRoadRuleUpdateTargetScores : public GuiEvent<335> {
	// BrnGuiEventTypeDefs.h:1114
	PlayerName[2] maFriendLeader;

	// BrnGuiEventTypeDefs.h:1115
	BrnGui::RoadRuleLeaderType[2] maeRoadRuleLeaderType;

	// BrnGuiEventTypeDefs.h:1116
	int32_t[2] maiBestValues;

	// BrnGuiEventTypeDefs.h:1117
	CgsID mRoadId;

public:
	// BrnGuiEventTypeDefs.h:1122
	void Construct(const BrnGameState::GameStateModuleIO::RoadRulesUpdateTargetScoreAction *);

private:
	// BrnGuiEventTypeDefs.h:1129
	void SetupRoadRule(const BrnGameState::GameStateModuleIO::RoadRulesUpdateTargetScoreAction *, BrnStreetData::ScoreType);

}

// BrnGuiEventTypeDefs.h:1133
struct BrnGui::GuiEventRoadRuleData : public GuiEvent<330> {
	// BrnGuiEventTypeDefs.h:1149
	CgsID mRoadID;

	// BrnGuiEventTypeDefs.h:1150
	BrnGui::GuiEventRoadRuleData::RoadRuleType[2] mRules;

public:
	// BrnGuiEventTypeDefs.h:1155
	void Construct(const BrnGameState::GameStateModuleIO::RoadRulesEnterRoadAction *);

}

// BrnGuiEventTypeDefs.h:1215
struct BrnGui::GuiEventRoadRuleUpcomingRoads : public GuiEvent<337> {
	// BrnGuiEventTypeDefs.h:1235
	BrnGui::RoadRuleLeaderType[2][2] maaeLeaderTypes;

	// BrnGuiEventTypeDefs.h:1236
	BrnGui::RoadRuleLeaderType[2][2] maaeOfflineLeaderTypes;

	// BrnGuiEventTypeDefs.h:1237
	BrnGui::RoadRuleLeaderType[2][2] maaeOnlineLeaderTypes;

	// BrnGuiEventTypeDefs.h:1238
	CgsID[2] mRoadIds;

	// BrnGuiEventTypeDefs.h:1239
	SpanBase::RoadIndex[2] maiTurningRoadIndices;

	// BrnGuiEventTypeDefs.h:1240
	SpanBase::RoadIndex miCurrentRoadIndex;

	// BrnGuiEventTypeDefs.h:1241
	BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadState[2] meRoadStates;

	// BrnGuiEventTypeDefs.h:1242
	BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadState meCurrentSignState;

	// BrnGuiEventTypeDefs.h:1243
	Vector3[2] maRoadEntrancePosition;

public:
	// BrnGuiEventTypeDefs.h:1247
	void Construct();

	// BrnGuiEventTypeDefs.h:1252
	void Construct(const BrnGameState::GameStateModuleIO::UpcomingRoadChangeAction *);

private:
	// BrnGuiEventTypeDefs.h:1261
	void FindRoadRuler(BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadSide, const BrnGameState::GameStateModuleIO::UpcomingRoadChangeAction *, BrnStreetData::ScoreType);

	// BrnGuiEventTypeDefs.h:1268
	BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadState ConvertGamestateEnumToGuiEnum(int32_t);

}

// BrnGuiEventTypeDefs.h:1657
struct BrnGui::GuiEventPreraceTriggerExit : public GuiEvent<161> {
}

// BrnGuiEventTypeDefs.h:2422
struct BrnGui::GuiEventPostEventNewRivalSequenceStart : public GuiEvent<296> {
	// BrnGuiEventTypeDefs.h:2424
	Name mRivalUnlockName;

	// BrnGuiEventTypeDefs.h:2425
	Attribute::Key mVoiceOver;

}

// BrnGuiEventTypeDefs.h:2431
struct BrnGui::GuiEventPostEventNewRivalUnlockedChangeFocus : public GuiEvent<298> {
	// BrnGuiEventTypeDefs.h:2433
	CgsID mRivalCarID;

}

// BrnGuiEventTypeDefs.h:2439
struct BrnGui::GuiEventPostEventFreeCarSequenceStart : public GuiEvent<300> {
	// BrnGuiEventTypeDefs.h:2441
	Attribute::Key mVoiceOver;

}

// BrnGuiEventTypeDefs.h:2642
struct BrnGui::GuiEventEnableAutoSave : public GuiEvent<538> {
	// BrnGuiEventTypeDefs.h:2644
	bool mbAutoSaveEnabled;

}

// BrnGuiEventTypeDefs.h:4034
struct BrnGui::GuiEventAudioTraxLastPlayedIndexes : public GuiEvent<454> {
	// BrnGuiEventTypeDefs.h:4037
	GuiEventAudioTraxUpdate::EATraxArrayType mRemainingSongs;

	// BrnGuiEventTypeDefs.h:4038
	int32_t miLastSongIndex;

	// BrnGuiEventTypeDefs.h:4039
	int32_t miLastPictureParadiseIndex;

}

// BrnGuiEventTypeDefs.h:4052
struct BrnGui::GuiEventAudioTraxPreview : public GuiEvent<455> {
	// BrnGuiEventTypeDefs.h:4054
	int32_t miPreviewTrackIndex;

	// BrnGuiEventTypeDefs.h:4055
	bool mbPlayOnEATraxSlider;

}

// BrnGuiEventTypeDefs.h:4150
struct BrnGui::GuiEventAudioEventIntros : public GuiEvent<459> {
	// BrnGuiEventTypeDefs.h:4152
	BrnGui::ECompassPoints meCompassDirection;

	// BrnGuiEventTypeDefs.h:4153
	CgsID mDestinationLandmarkID;

	// BrnGuiEventTypeDefs.h:4154
	GuiEventStopMode::EGameModeType meGameMode;

	// BrnGuiEventTypeDefs.h:4155
	uint32_t muPlayerHasWonGameModeCount;

	// BrnGuiEventTypeDefs.h:4156
	bool mbIsJunctionAlreadyWon;

	// BrnGuiEventTypeDefs.h:4157
	int8_t miPlayerRank;

}

// BrnGuiEventTypeDefs.h:4194
struct BrnGui::GuiEventAudioVoiceOver : public GuiEvent<461> {
	// BrnGuiEventTypeDefs.h:4196
	Name mVoiceOverName;

}

// BrnGuiEventTypeDefs.h:4220
struct BrnGui::GuiEventAudioGenericSequence : public GuiEvent<463> {
	// BrnGuiEventTypeDefs.h:4222
	Name mStreamName;

}

// BrnGuiEventTypeDefs.h:4262
struct BrnGui::GuiEventDirectorNewProfileIntroStart : public GuiEvent<471> {
}

// BrnGuiEventTypeDefs.h:4274
struct BrnGui::GuiEventDirectorFlybyStart : public GuiEvent<472> {
}

// BrnGuiEventTypeDefs.h:4286
struct BrnGui::GuiEventDirectorFlybyFinish : public GuiEvent<473> {
}

// BrnGuiEventTypeDefs.h:4590
struct BrnGui::GuiPlayerInfoRequest : public GuiEvent<400> {
}

// BrnGuiEventTypeDefs.h:4624
struct BrnGui::GuiCarUnlockTickerClosed : public GuiEvent<77> {
}

// BrnGuiEventTypeDefs.h:5076
struct BrnGui::GuiEventRankProgressResponse : public GuiEvent<433> {
	// BrnGuiEventTypeDefs.h:5089
	int32_t miRaceRank;

	// BrnGuiEventTypeDefs.h:5090
	int32_t miRoadRageRank;

	// BrnGuiEventTypeDefs.h:5091
	int32_t miStuntAttackRank;

	// BrnGuiEventTypeDefs.h:5092
	int32_t miMarkedManRank;

	// BrnGuiEventTypeDefs.h:5094
	int32_t miOfflineRaceRankWins;

	// BrnGuiEventTypeDefs.h:5095
	int32_t miRoadRageRankWins;

	// BrnGuiEventTypeDefs.h:5096
	int32_t miStuntAttackRankWins;

	// BrnGuiEventTypeDefs.h:5097
	int32_t miMarkedManRankWins;

	// BrnGuiEventTypeDefs.h:5100
	extern const int32_t KI_PLAYER_HAS_FINISHED_LAST_RANK = [255, 255, 255, 255, 255, 255, 255, 255];

private:
	// BrnGuiEventTypeDefs.h:5104
	int32_t miCurrentRank;

public:
	// BrnGuiEventTypeDefs.h:5080
	void Construct(const BrnGameState::GameStateModuleIO::RankInfoResponseAction *);

	// BrnGuiEventTypeDefs.h:5083
	bool HasPlayerFinishedLastRank() const;

	// BrnGuiEventTypeDefs.h:5087
	int32_t GetPlayerRank() const;

}

// BrnGuiEventTypeDefs.h:6289
struct BrnGui::GuiReplayPlayReelEvent : public GuiEvent<516> {
	// BrnGuiEventTypeDefs.h:6291
	int32_t miReel;

}

// BrnGuiEventTypeDefs.h:6303
struct BrnGui::GuiReplayDeleteReelEvent : public GuiEvent<517> {
	// BrnGuiEventTypeDefs.h:6305
	int32_t miReel;

}

// BrnGuiEventTypeDefs.h:6317
struct BrnGui::GuiReplayStopPlayingReelEvent : public GuiEvent<518> {
	// BrnGuiEventTypeDefs.h:6319
	int32_t miDummyPadding;

}

// BrnGuiEventTypeDefs.h:6626
struct BrnGui::GuiEventEnterCredits : public GuiEvent<572> {
}

// BrnGuiEventTypeDefs.h:6630
struct BrnGui::GuiEventLeaveCredits : public GuiEvent<573> {
}

// CgsGuiShared.h:45
namespace BrnGui {
	// BrnGuiEventTypeDefs.h:95
	using BrnNetwork::BrnNetworkModuleIO;

	// Declaration
	struct GuiEventChangeReplayState {
		// BrnGuiEventTypeDefs.h:861
		enum ReplayState {
			E_REPLAYSTATE_INVISIBLE = 0,
			E_REPLAYSTATE_PLAYING = 1,
			E_REPLAYSTATE_RECORDING = 2,
			E_REPLAYSTATE_COUNT = 3,
		}

	}

	// BrnGuiEventTypeDefs.h:883
	enum GuiFlow {
		E_GUIFLOW_SCREEN = 0,
		E_GUIFLOW_HUD = 1,
		E_GUIFLOW_OVERLAY = 2,
		E_GUIFLOW_COUNT = 3,
		E_GUIFLOW_FIRST = 0,
	}

	// Declaration
	struct GuiEventSetRoadRuleScoreMode {
		// BrnGuiEventTypeDefs.h:1321
		enum ERoadPanelModes {
			E_ROAD_PANEL_MODE_OFFLINE = 0,
			E_ROAD_PANEL_MODE_ONLINE = 1,
			E_ROAD_PANEL_MODE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventPreRaceMessages {
		// BrnGuiEventTypeDefs.h:1579
		enum ERelationshipTypes {
			E_RELATIONSHIP_GOOD = 0,
			E_RELATIONSHIP_BAD = 1,
			E_RELATIONSHIP_NEUTRAL = 2,
			E_RELATIONSHIP_COUNT = 3,
		}

		// BrnGuiEventTypeDefs.h:1590
		struct MessageInfo {
			// BrnGuiEventTypeDefs.h:1592
			extern const int32_t KI_NUM_MESSAGE_STRINGS = 3;

			// BrnGuiEventTypeDefs.h:1593
			extern const int32_t KI_MAX_LENGTH_STRING_ID = 128;

			// BrnGuiEventTypeDefs.h:1595
			extern const int32_t KI_NUM_PARAMETERS = 1;

			// BrnGuiEventTypeDefs.h:1596
			extern const int32_t KI_MAX_LENGTH_PARAMETERS = 20;

			// BrnGuiEventTypeDefs.h:1600
			char[3][128] maacMessageIDs;

			// BrnGuiEventTypeDefs.h:1602
			int32_t miNumMsgIDs;

			// BrnGuiEventTypeDefs.h:1603
			char[3][20] maacMessageParameters;

			// BrnGuiEventTypeDefs.h:1605
			int32_t[3] maiNumParams;

			// BrnGuiEventTypeDefs.h:1608
			char[128] macGamerName;

			// BrnGuiEventTypeDefs.h:1610
			BrnGui::GuiEventPreRaceMessages::ERelationshipTypes meRelationshipType;

		}

	}

	// Declaration
	struct GuiEventUpdateSatNav {
		// BrnGuiEventTypeDefs.h:1675
		struct SatNavIconInfo {
			// BrnGuiEventTypeDefs.h:1678
			enum SatNavIconType {
				E_SATNAVICON_PLAYER_CAR = 0,
				E_SATNAVICON_MARKED_MAN = 1,
				E_SATNAVICON_NETWORKRIVAL = 2,
				E_SATNAVICON_RIVAL = 3,
				E_SATNAVICON_LANDMARK = 4,
				E_SATNAVICON_JUNCTION = 5,
				E_SATNAVICON_FREEBURN_CHALLENGE = 6,
				E_SATNAVICON_JUNKYARD = 7,
				E_SATNAVICON_CAR_PARK = 8,
				E_SATNAVICON_BODYSHOP = 9,
				E_SATNAVICON_GAS_STATION = 10,
				E_SATNAVICON_PAINT_SHOP = 11,
				E_SATNAVICON_TIRE_SHOP = 12,
				E_SATNAVICON_ROADSIGN = 13,
				E_SATNAVICON_MAX = 14,
			}

			// BrnGuiEventTypeDefs.h:1699
			Vector3 mv3Position;

			// BrnGuiEventTypeDefs.h:1700
			CgsID mCgsId;

			// BrnGuiEventTypeDefs.h:1702
			float32_t mfRotation;

			// BrnGuiEventTypeDefs.h:1703
			float32_t mfSpeedMph;

			// BrnGuiEventTypeDefs.h:1705
			LandmarkIndex mLandmarkIndex;

			// BrnGuiEventTypeDefs.h:1706
			uint8_t mu8DesignIndex;

			// BrnGuiEventTypeDefs.h:1707
			bool mbIsHiddenDriveThru;

		private:
			// BrnGuiEventTypeDefs.h:1736
			uint8_t mu8County;

			// BrnGuiEventTypeDefs.h:1737
			uint8_t mu8District;

			// BrnGuiEventTypeDefs.h:1738
			int8_t mi8ActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:1739
			int8_t mi8IconType;

		public:
			// BrnGuiEventTypeDefs.h:1710
			void SetCounty(BrnWorld::ECounty);

			// BrnGuiEventTypeDefs.h:1713
			BrnWorld::ECounty GetCounty() const;

			// BrnGuiEventTypeDefs.h:1716
			void SetDistrict(BrnWorld::EDistrict);

			// BrnGuiEventTypeDefs.h:1719
			BrnWorld::EDistrict GetDistrict() const;

			// BrnGuiEventTypeDefs.h:1722
			void SetActiveRaceCarIndex(EActiveRaceCarIndex);

			// BrnGuiEventTypeDefs.h:1725
			EActiveRaceCarIndex GetActiveRaceCarIndex() const;

			// BrnGuiEventTypeDefs.h:1728
			void SetIconType(BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType);

			// BrnGuiEventTypeDefs.h:1731
			BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType GetIconType() const;

		}

	}

	// Declaration
	struct GuiEventOnlinePostEvent {
		// BrnGuiEventTypeDefs.h:2276
		struct OnlinePlayer {
			// BrnGuiEventTypeDefs.h:2278
			EActiveRaceCarIndex meActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2279
			float32_t mfFinishingTime;

			// BrnGuiEventTypeDefs.h:2280
			Time mFinishingTime;

			// BrnGuiEventTypeDefs.h:2281
			float32_t mfDistanceFromFinish;

			// BrnGuiEventTypeDefs.h:2282
			int32_t miPointsFromThisRound;

			// BrnGuiEventTypeDefs.h:2283
			int32_t miResultsTablePosition;

			// BrnGuiEventTypeDefs.h:2284
			int32_t miTotalPoints;

			// BrnGuiEventTypeDefs.h:2285
			int32_t miEliminations;

			// BrnGuiEventTypeDefs.h:2286
			int32_t miLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2287
			int32_t miLandmarksNotVisited;

			// BrnGuiEventTypeDefs.h:2288
			int32_t miCumulativeLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2289
			bool mbHasTimedOut;

			// BrnGuiEventTypeDefs.h:2290
			bool mbHasDisconnected;

			// BrnGuiEventTypeDefs.h:2291
			bool mbWasEliminated;

		}

		// BrnGuiEventTypeDefs.h:2296
		struct OnlineAward {
			// BrnGuiEventTypeDefs.h:2298
			BrnGameState::EOnlineAwardID meOnlineAwardID;

			// BrnGuiEventTypeDefs.h:2299
			EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2300
			int32_t miAwardVariable;

		}

	}

	// Declaration
	struct GuiEventOfflinePostEvent {
		// BrnGuiEventTypeDefs.h:2380
		struct OfflinePostEventData {
			// BrnGuiEventTypeDefs.h:2382
			GuiEventStopMode::EGameModeType meFinishedGameModeType;

			// BrnGuiEventTypeDefs.h:2383
			CgsID mBeatenRival;

			// BrnGuiEventTypeDefs.h:2384
			int32_t miModeScore;

			// BrnGuiEventTypeDefs.h:2385
			float32_t mfTime;

			// BrnGuiEventTypeDefs.h:2386
			int8_t miPlayerFinishPosition;

			// BrnGuiEventTypeDefs.h:2387
			bool mbCrashedOut;

			// BrnGuiEventTypeDefs.h:2388
			bool mbTimedOut;

			// BrnGuiEventTypeDefs.h:2389
			bool mbEliminated;

			// BrnGuiEventTypeDefs.h:2390
			bool mbCountsTowardsProgression;

			// BrnGuiEventTypeDefs.h:2393
			int32_t miBaseScore;

			// BrnGuiEventTypeDefs.h:2394
			int32_t miScoreMultiplier;

			// BrnGuiEventTypeDefs.h:2395
			float32_t mfDistanceTravelled;

			// BrnGuiEventTypeDefs.h:2397
			DerivedCarArray maCarsToUnlockFromSpecialEvent;

			// BrnGuiEventTypeDefs.h:2401
			bool mbHasRankedUp;

			// BrnGuiEventTypeDefs.h:2402
			int32_t miPlayerOldRank;

			// BrnGuiEventTypeDefs.h:2403
			int32_t miPlayerNewRank;

			// BrnGuiEventTypeDefs.h:2404
			int32_t miCarsRevealed;

			// BrnGuiEventTypeDefs.h:2405
			int32_t miEventsUnlocked;

			// BrnGuiEventTypeDefs.h:2406
			bool mbCompletedLastRank;

			// BrnGuiEventTypeDefs.h:2409
			CgsID mNewlyUnlockedRivalID;

			// BrnGuiEventTypeDefs.h:2411
			bool mbHasUnlockedFreeCar;

			// BrnGuiEventTypeDefs.h:2412
			CgsID mNewlyUnlockedFreeCarID;

		}

	}

	// Declaration
	struct CalculateRoute {
		// BrnGuiEventTypeDefs.h:2612
		enum ERouteEndPointType {
			E_ROUTE_END_POINT_TYPE_LANDMARK = 0,
			E_ROUTE_END_POINT_TYPE_JUNCTION = 1,
			E_ROUTE_END_POINT_TYPE_PLAYERPOS = 2,
			E_ROUTE_END_POINT_TYPE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventDrawEventIcons {
		// BrnGuiEventTypeDefs.h:2662
		enum EIconDisplayType {
			E_ICON_DISPLAY_TYPE_OFFLINE_EVENTS = 0,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_STARTS = 1,
			E_ICON_DISPLAY_TYPE_ONLINE_CHECKPOINTS = 2,
			E_ICON_DISPLAY_TYPE_ONLINE_FINISH_POINTS = 3,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_PRESETS = 4,
			E_ICON_DISPLAY_TYPE_COUNT = 5,
		}

	}

	// Declaration
	struct GuiPlayerCrashingStateChangeEvent {
		// BrnGuiEventTypeDefs.h:3960
		enum CrashBarState {
			E_CRASHBARSTATE_INVALID = -1,
			E_CRASHBARSTATE_START_CRASHED = 0,
			E_CRASHBARSTATE_LEAVE_CRASHED = 1,
			E_CRASHBARSTATE_START_TAKEDOWN = 2,
			E_CRASHBARSTATE_LEAVE_TAKEDOWN = 3,
			E_CRASHBARSTATE_COUNT = 4,
		}

	}

	// Declaration
	struct GuiPlayerEngineEvent {
		// BrnGuiEventTypeDefs.h:3986
		enum EEngineState {
			E_ENGINE_OFF = 0,
			E_ENGINE_ON = 1,
			E_ENGINE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventAudioTraxPlayOrder {
		// BrnGuiEventTypeDefs.h:4068
		enum ETraxPlayOrderMode {
			E_TRAX_PLAY_ORDER_MODE_SEQUENTIAL = 0,
			E_TRAX_PLAY_ORDER_MODE_RANDOM = 1,
			E_TRAX_PLAY_ORDER_MODE_COUNT = 2,
		}

	}

	// BrnGuiEventTypeDefs.h:97
	const int32_t KI_MAX_GAMERTAG_LENGTH = 20;

	// BrnGuiEventTypeDefs.h:98
	const int32_t KI_MAX_AWARDS = 6;

	// BrnGuiEventTypeDefs.h:99
	const int32_t KI_MAX_PFXHOOK_NAMES = 100;

	// BrnGuiEventTypeDefs.h:100
	const int32_t KI_MAX_VISIBLE_SIGNS = 32;

	// BrnGuiEventTypeDefs.h:925
	const const char *[4] KAPC_INGAME_FSM_NAMES;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// BrnGuiEventTypeDefs.h:103
	enum StuntType {
		E_STUNTTYPE_JUMP = 0,
		E_STUNTTYPE_SMASH = 1,
		E_STUNTTYPE_STUNT = 2,
		E_STUNTTYPE_COUNT = 3,
	}

	// BrnGuiEventTypeDefs.h:113
	enum RoadRuleLeaderType {
		E_ROADRULELEADERTYPE_AI = 0,
		E_ROADRULELEADERTYPE_PLAYER = 1,
		E_ROADRULELEADERTYPE_FRIEND = 2,
		E_ROADRULELEADERTYPE_COUNT = 3,
	}

	// Declaration
	struct GuiEventChangeReplayState {
		// BrnGuiEventTypeDefs.h:861
		enum ReplayState {
			E_REPLAYSTATE_INVISIBLE = 0,
			E_REPLAYSTATE_PLAYING = 1,
			E_REPLAYSTATE_RECORDING = 2,
			E_REPLAYSTATE_COUNT = 3,
		}

	}

	// BrnGuiEventTypeDefs.h:883
	enum GuiFlow {
		E_GUIFLOW_SCREEN = 0,
		E_GUIFLOW_HUD = 1,
		E_GUIFLOW_OVERLAY = 2,
		E_GUIFLOW_COUNT = 3,
		E_GUIFLOW_FIRST = 0,
	}

	// BrnGuiEventTypeDefs.h:893
	enum EFinishType {
		E_FINISH_TYPE_1ST = 0,
		E_FINISH_TYPE_2ND = 1,
		E_FINISH_TYPE_3RD = 2,
		E_FINISH_TYPE_4TH = 3,
		E_FINISH_TYPE_5TH = 4,
		E_FINISH_TYPE_6TH = 5,
		E_FINISH_TYPE_7TH = 6,
		E_FINISH_TYPE_8TH = 7,
		E_FINISH_TYPE_TIMED_OUT = 8,
		E_FINISH_TYPE_WON = 9,
		E_FINISH_TYPE_LOST = 10,
		E_FINISH_TYPE_COUNT = 11,
	}

	// BrnGuiEventTypeDefs.h:912
	enum EHUDFSMs {
		E_GUI_HUD_INVALID = -1,
		E_GUI_HUD_BOOT = 0,
		E_GUI_HUD_FREEBURN = 1,
		E_GUI_HUD_EVENT = 2,
		E_GUI_HUD_ONLINE = 3,
		E_GUI_HUD_NUMSFSMS = 4,
	}

	// Declaration
	struct GuiEventActivateCrashNav {
		// BrnGuiEventTypeDefs.h:970
		enum ActivateDeactivate {
			E_ACTIVATE = 0,
			E_DEACTIVATE = 1,
		}

		// BrnGuiEventTypeDefs.h:976
		enum CrashNavType {
			E_CRASHNAV_MAIN = 0,
			E_CRASHNAV_EVENT = 1,
			E_CRASHNAV_NO_TITLE_SIGNIN = 2,
			E_CRASHNAV_TYPE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventRoadRuleData {
		// BrnGuiEventTypeDefs.h:1137
		struct RoadRuleType {
			// BrnGuiEventTypeDefs.h:1144
			int32_t[3] maiScores;

			// BrnGuiEventTypeDefs.h:1145
			PlayerName mFriendName;

			// BrnGuiEventTypeDefs.h:1146
			CgsID mRivalId;

		public:
			// BrnGuiEventTypeDefs.h:1142
			void Construct();

		}

	}

	// Declaration
	struct GuiEventRoadRuleUpcomingRoads {
		// BrnGuiEventTypeDefs.h:1218
		enum ERoadSide {
			E_ROAD_LEFT = 0,
			E_ROAD_RIGHT = 1,
			E_ROAD_COUNT = 2,
		}

		// BrnGuiEventTypeDefs.h:1226
		enum ERoadState {
			E_ROADSTATE_NORMAL = 0,
			E_ROADSTATE_SUGGESTED = 1,
			E_ROADSTATE_WRONG = 2,
			E_ROADSTATE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventSetRoadRuleScoreMode {
		// BrnGuiEventTypeDefs.h:1321
		enum ERoadPanelModes {
			E_ROAD_PANEL_MODE_OFFLINE = 0,
			E_ROAD_PANEL_MODE_ONLINE = 1,
			E_ROAD_PANEL_MODE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventPreRaceMessages {
		// BrnGuiEventTypeDefs.h:1579
		enum ERelationshipTypes {
			E_RELATIONSHIP_GOOD = 0,
			E_RELATIONSHIP_BAD = 1,
			E_RELATIONSHIP_NEUTRAL = 2,
			E_RELATIONSHIP_COUNT = 3,
		}

		// BrnGuiEventTypeDefs.h:1590
		struct MessageInfo {
			// BrnGuiEventTypeDefs.h:1592
			extern const int32_t KI_NUM_MESSAGE_STRINGS = 3;

			// BrnGuiEventTypeDefs.h:1593
			extern const int32_t KI_MAX_LENGTH_STRING_ID = 128;

			// BrnGuiEventTypeDefs.h:1595
			extern const int32_t KI_NUM_PARAMETERS = 1;

			// BrnGuiEventTypeDefs.h:1596
			extern const int32_t KI_MAX_LENGTH_PARAMETERS = 20;

			// BrnGuiEventTypeDefs.h:1600
			char[3][128] maacMessageIDs;

			// BrnGuiEventTypeDefs.h:1602
			int32_t miNumMsgIDs;

			// BrnGuiEventTypeDefs.h:1603
			char[3][20] maacMessageParameters;

			// BrnGuiEventTypeDefs.h:1605
			int32_t[3] maiNumParams;

			// BrnGuiEventTypeDefs.h:1608
			char[128] macGamerName;

			// BrnGuiEventTypeDefs.h:1610
			BrnGui::GuiEventPreRaceMessages::ERelationshipTypes meRelationshipType;

		}

	}

	// Declaration
	struct GuiEventUpdateSatNav {
		// BrnGuiEventTypeDefs.h:1675
		struct SatNavIconInfo {
			// BrnGuiEventTypeDefs.h:1678
			enum SatNavIconType {
				E_SATNAVICON_PLAYER_CAR = 0,
				E_SATNAVICON_MARKED_MAN = 1,
				E_SATNAVICON_NETWORKRIVAL = 2,
				E_SATNAVICON_RIVAL = 3,
				E_SATNAVICON_LANDMARK = 4,
				E_SATNAVICON_JUNCTION = 5,
				E_SATNAVICON_FREEBURN_CHALLENGE = 6,
				E_SATNAVICON_JUNKYARD = 7,
				E_SATNAVICON_CAR_PARK = 8,
				E_SATNAVICON_BODYSHOP = 9,
				E_SATNAVICON_GAS_STATION = 10,
				E_SATNAVICON_PAINT_SHOP = 11,
				E_SATNAVICON_TIRE_SHOP = 12,
				E_SATNAVICON_ROADSIGN = 13,
				E_SATNAVICON_MAX = 14,
			}

			// BrnGuiEventTypeDefs.h:1699
			Vector3 mv3Position;

			// BrnGuiEventTypeDefs.h:1700
			CgsID mCgsId;

			// BrnGuiEventTypeDefs.h:1702
			float32_t mfRotation;

			// BrnGuiEventTypeDefs.h:1703
			float32_t mfSpeedMph;

			// BrnGuiEventTypeDefs.h:1705
			LandmarkIndex mLandmarkIndex;

			// BrnGuiEventTypeDefs.h:1706
			uint8_t mu8DesignIndex;

			// BrnGuiEventTypeDefs.h:1707
			bool mbIsHiddenDriveThru;

		private:
			// BrnGuiEventTypeDefs.h:1736
			uint8_t mu8County;

			// BrnGuiEventTypeDefs.h:1737
			uint8_t mu8District;

			// BrnGuiEventTypeDefs.h:1738
			int8_t mi8ActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:1739
			int8_t mi8IconType;

		public:
			// BrnGuiEventTypeDefs.h:1710
			void SetCounty(BrnWorld::ECounty);

			// BrnGuiEventTypeDefs.h:1713
			BrnWorld::ECounty GetCounty() const;

			// BrnGuiEventTypeDefs.h:1716
			void SetDistrict(BrnWorld::EDistrict);

			// BrnGuiEventTypeDefs.h:1719
			BrnWorld::EDistrict GetDistrict() const;

			// BrnGuiEventTypeDefs.h:1722
			void SetActiveRaceCarIndex(EActiveRaceCarIndex);

			// BrnGuiEventTypeDefs.h:1725
			EActiveRaceCarIndex GetActiveRaceCarIndex() const;

			// BrnGuiEventTypeDefs.h:1728
			void SetIconType(BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType);

			// BrnGuiEventTypeDefs.h:1731
			BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType GetIconType() const;

		}

	}

	// Declaration
	struct GuiEventEnableSatNavIcons {
		// BrnGuiEventTypeDefs.h:1902
		enum EIconDisplayType {
			E_ICON_DISPLAY_TYPE_OFFLINE_EVENTS = 0,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_STARTS = 1,
			E_ICON_DISPLAY_TYPE_ONLINE_CHECKPOINTS = 2,
			E_ICON_DISPLAY_TYPE_ONLINE_FINISH_POINTS = 3,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_PRESETS = 4,
			E_ICON_DISPLAY_TYPE_COUNT = 5,
		}

	}

	// Declaration
	struct GuiEventOnlinePostEvent {
		// BrnGuiEventTypeDefs.h:2276
		struct OnlinePlayer {
			// BrnGuiEventTypeDefs.h:2278
			EActiveRaceCarIndex meActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2279
			float32_t mfFinishingTime;

			// BrnGuiEventTypeDefs.h:2280
			Time mFinishingTime;

			// BrnGuiEventTypeDefs.h:2281
			float32_t mfDistanceFromFinish;

			// BrnGuiEventTypeDefs.h:2282
			int32_t miPointsFromThisRound;

			// BrnGuiEventTypeDefs.h:2283
			int32_t miResultsTablePosition;

			// BrnGuiEventTypeDefs.h:2284
			int32_t miTotalPoints;

			// BrnGuiEventTypeDefs.h:2285
			int32_t miEliminations;

			// BrnGuiEventTypeDefs.h:2286
			int32_t miLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2287
			int32_t miLandmarksNotVisited;

			// BrnGuiEventTypeDefs.h:2288
			int32_t miCumulativeLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2289
			bool mbHasTimedOut;

			// BrnGuiEventTypeDefs.h:2290
			bool mbHasDisconnected;

			// BrnGuiEventTypeDefs.h:2291
			bool mbWasEliminated;

		}

		// BrnGuiEventTypeDefs.h:2296
		struct OnlineAward {
			// BrnGuiEventTypeDefs.h:2298
			BrnGameState::EOnlineAwardID meOnlineAwardID;

			// BrnGuiEventTypeDefs.h:2299
			EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2300
			int32_t miAwardVariable;

		}

	}

	// Declaration
	struct GuiEventOfflinePostEvent {
		// BrnGuiEventTypeDefs.h:2380
		struct OfflinePostEventData {
			// BrnGuiEventTypeDefs.h:2382
			GuiEventStopMode::EGameModeType meFinishedGameModeType;

			// BrnGuiEventTypeDefs.h:2383
			CgsID mBeatenRival;

			// BrnGuiEventTypeDefs.h:2384
			int32_t miModeScore;

			// BrnGuiEventTypeDefs.h:2385
			float32_t mfTime;

			// BrnGuiEventTypeDefs.h:2386
			int8_t miPlayerFinishPosition;

			// BrnGuiEventTypeDefs.h:2387
			bool mbCrashedOut;

			// BrnGuiEventTypeDefs.h:2388
			bool mbTimedOut;

			// BrnGuiEventTypeDefs.h:2389
			bool mbEliminated;

			// BrnGuiEventTypeDefs.h:2390
			bool mbCountsTowardsProgression;

			// BrnGuiEventTypeDefs.h:2393
			int32_t miBaseScore;

			// BrnGuiEventTypeDefs.h:2394
			int32_t miScoreMultiplier;

			// BrnGuiEventTypeDefs.h:2395
			float32_t mfDistanceTravelled;

			// BrnGuiEventTypeDefs.h:2397
			DerivedCarArray maCarsToUnlockFromSpecialEvent;

			// BrnGuiEventTypeDefs.h:2401
			bool mbHasRankedUp;

			// BrnGuiEventTypeDefs.h:2402
			int32_t miPlayerOldRank;

			// BrnGuiEventTypeDefs.h:2403
			int32_t miPlayerNewRank;

			// BrnGuiEventTypeDefs.h:2404
			int32_t miCarsRevealed;

			// BrnGuiEventTypeDefs.h:2405
			int32_t miEventsUnlocked;

			// BrnGuiEventTypeDefs.h:2406
			bool mbCompletedLastRank;

			// BrnGuiEventTypeDefs.h:2409
			CgsID mNewlyUnlockedRivalID;

			// BrnGuiEventTypeDefs.h:2411
			bool mbHasUnlockedFreeCar;

			// BrnGuiEventTypeDefs.h:2412
			CgsID mNewlyUnlockedFreeCarID;

		}

	}

	// Declaration
	struct GuiEventRequestCollisionWorldEvent {
		// BrnGuiEventTypeDefs.h:2584
		enum EEventType {
			E_COLLISON_WORLD_INVALIDATE = 0,
			E_COLLISON_WORLD_VALIDATE = 1,
			E_COLLISON_WORLD_INVALIDATED = 2,
			E_COLLISON_WORLD_VALIDATED = 3,
			E_COLLISON_WORLD_COUNT = 4,
		}

	}

	// Declaration
	struct CalculateRoute {
		// BrnGuiEventTypeDefs.h:2612
		enum ERouteEndPointType {
			E_ROUTE_END_POINT_TYPE_LANDMARK = 0,
			E_ROUTE_END_POINT_TYPE_JUNCTION = 1,
			E_ROUTE_END_POINT_TYPE_PLAYERPOS = 2,
			E_ROUTE_END_POINT_TYPE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventDrawEventIcons {
		// BrnGuiEventTypeDefs.h:2662
		enum EIconDisplayType {
			E_ICON_DISPLAY_TYPE_OFFLINE_EVENTS = 0,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_STARTS = 1,
			E_ICON_DISPLAY_TYPE_ONLINE_CHECKPOINTS = 2,
			E_ICON_DISPLAY_TYPE_ONLINE_FINISH_POINTS = 3,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_PRESETS = 4,
			E_ICON_DISPLAY_TYPE_COUNT = 5,
		}

	}

	// Declaration
	struct GuiEventNetworkPlayerList {
		// BrnGuiEventTypeDefs.h:3039
		struct PlayerNameInfo {
			// BrnGuiEventTypeDefs.h:3041
			RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

			// BrnGuiEventTypeDefs.h:3042
			PlayerName mPlayerName;

		}

	}

	// Declaration
	struct GuiEventNetworkOutputPlayerTexture {
		// BrnGuiEventTypeDefs.h:3320
		enum EOutput {
			E_OUTPUT_OFF = 0,
			E_OUTPUT_PLAYER_IMAGE = 1,
			E_OUTPUT_SCALP_IMAGE = 2,
			E_OUTPUT_WINNER_IMAGE = 3,
			E_OUTPUT_GAMERPIC = 4,
			E_OUTPUT_GAMERPIC_LICENCE = 5,
			E_OUTPUT_NUM = 6,
		}

	}

	// Declaration
	struct GuiDriveThroughEvent {
		// BrnGuiEventTypeDefs.h:3665
		enum DriveThroughType {
			E_DRIVE_THROUGH_TYPE_CAR_WASH = 0,
			E_DRIVE_THROUGH_TYPE_BODY_SHOP = 1,
			E_DRIVE_THROUGH_TYPE_PAINT_SHOP = 2,
			E_DRIVE_THROUGH_TYPE_GAS_STATION = 3,
			E_DRIVE_THROUGH_TYPE_AUTO_PARTS = 4,
			E_DRIVE_THROUGH_TYPE_FAILED = 5,
			E_DRIVE_THROUGH_TYPE_COUNT = 6,
		}

	}

	// Declaration
	struct GuiPlayerCrashingStateChangeEvent {
		// BrnGuiEventTypeDefs.h:3960
		enum CrashBarState {
			E_CRASHBARSTATE_INVALID = -1,
			E_CRASHBARSTATE_START_CRASHED = 0,
			E_CRASHBARSTATE_LEAVE_CRASHED = 1,
			E_CRASHBARSTATE_START_TAKEDOWN = 2,
			E_CRASHBARSTATE_LEAVE_TAKEDOWN = 3,
			E_CRASHBARSTATE_COUNT = 4,
		}

	}

	// Declaration
	struct GuiPlayerEngineEvent {
		// BrnGuiEventTypeDefs.h:3986
		enum EEngineState {
			E_ENGINE_OFF = 0,
			E_ENGINE_ON = 1,
			E_ENGINE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventAudioTraxPlayOrder {
		// BrnGuiEventTypeDefs.h:4068
		enum ETraxPlayOrderMode {
			E_TRAX_PLAY_ORDER_MODE_SEQUENTIAL = 0,
			E_TRAX_PLAY_ORDER_MODE_RANDOM = 1,
			E_TRAX_PLAY_ORDER_MODE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiRivalryStatusChange {
		// BrnGuiEventTypeDefs.h:5115
		enum ERivalryLevels {
			E_RIVAL_LEVEL_NEW = 0,
			E_RIVAL_LEVEL_RIVAL = 1,
			E_RIVAL_LEVEL_TARGET = 2,
			E_RIVAL_LEVEL_WRECKED = 3,
			E_RIVAL_LEVEL_COUNT = 4,
		}

	}

	// Declaration
	struct GuiOverlayCompleteEvent {
		// BrnGuiEventTypeDefs.h:5837
		enum LeaveMethod {
			E_LEAVEMETHOD_NONE = 0,
			E_LEAVEMETHOD_OK = 1,
			E_LEAVEMETHOD_CANCEL = 2,
			E_LEAVEMETHOD_COUNT = 3,
		}

	}

	// Declaration
	struct GuiNewBurnoutHudMessageEvent {
		// BrnGuiEventTypeDefs.h:6351
		enum EBurnoutSkillzMessageTypes {
			E_BURNOUT_SKILLZ_MESSAGE_TYPE_X_BEAT_YS = 0,
			E_BURNOUT_SKILLZ_MESSAGE_TYPE_X_BEAT_YOUR = 1,
			E_BURNOUT_SKILLZ_MESSAGE_TYPE_X_GOT = 2,
			E_BURNOUT_SKILLZ_MESSAGE_TYPE_YOU_GOT = 3,
			E_BURNOUT_SKILLZ_MESSAGE_TYPE_COUNT = 4,
		}

	}

	// BrnGuiEventTypeDefs.h:910
	extern BrnGui::GuiFlow operator++(BrnGui::GuiFlow &, int);

	// BrnGuiEventTypeDefs.h:97
	const int32_t KI_MAX_GAMERTAG_LENGTH = 20;

	// BrnGuiEventTypeDefs.h:98
	const int32_t KI_MAX_AWARDS = 6;

	// BrnGuiEventTypeDefs.h:99
	const int32_t KI_MAX_PFXHOOK_NAMES = 100;

	// BrnGuiEventTypeDefs.h:100
	const int32_t KI_MAX_VISIBLE_SIGNS = 32;

	// BrnGuiEventTypeDefs.h:925
	const const char *[4] KAPC_INGAME_FSM_NAMES;

}

// BrnGuiEventTypeDefs.h:209
struct BrnGui::GuiEventFinishedVideo : public GuiEvent<500> {
	// BrnGuiEventTypeDefs.h:214
	BrnGui::MovieManager::VideoDefinition mVideo;

public:
	// BrnGuiEventTypeDefs.h:212
	void Construct();

}

// BrnGuiEventTypeDefs.h:840
struct BrnGui::GuiEventSystemUserProfile : public GuiEvent<496> {
	// BrnGuiEventTypeDefs.h:842
	SystemUserProfile * mpSystemUserProfilePointer;

}

// BrnGuiEventTypeDefs.h:3129
struct BrnGui::GuiEventNetworkPlayerStats : public GuiEvent<245> {
	// BrnGuiEventTypeDefs.h:3131
	char[20] macPlayerName;

	// BrnGuiEventTypeDefs.h:3132
	NetworkPlayerStats mPlayerStats;

	// BrnGuiEventTypeDefs.h:3133
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

	// BrnGuiEventTypeDefs.h:3134
	int32_t miWorldRank;

}

// BrnGuiEventTypeDefs.h:3426
struct BrnGui::GuiEventLiveRevengeProfileLoaded : public GuiEvent<348> {
	// BrnGuiEventTypeDefs.h:3428
	BrnNetwork::LiveRevengeProfile * mpLiveRevengeProfile;

}

// BrnGuiEventTypeDefs.h:3478
struct BrnGui::GuiAutosaveShowIcon : public GuiEvent<350> {
	// BrnGuiEventTypeDefs.h:3480
	bool mbShowIcon;

}

// BrnGuiEventTypeDefs.h:6075
struct BrnGui::GuiEATraxNewTrackEvent : public GuiEvent<492> {
	// BrnGuiEventTypeDefs.h:6077
	GuiEventAudioTraxUpdate::EATraxArrayType mRemainingSongs;

	// BrnGuiEventTypeDefs.h:6078
	int32_t miSongIndex;

	// BrnGuiEventTypeDefs.h:6079
	bool mbPreview;

}

// BrnGuiEventTypeDefs.h:6091
struct BrnGui::GuiClassicalChyronEvent : public GuiEvent<493> {
	// BrnGuiEventTypeDefs.h:6094
	extern const uint32_t KU_CLASSICAL_CHYRON_TEXT_ID_MAX_CHARACTERS = 48;

	// BrnGuiEventTypeDefs.h:6096
	char[48] macComposerTextId;

	// BrnGuiEventTypeDefs.h:6097
	char[48] macWorkTextId;

	// BrnGuiEventTypeDefs.h:6099
	int32_t miPieceIndex;

}

// BrnGuiEventTypeDefs.h:6522
struct BrnGui::GuiEventCamStatus : public GuiEvent<555> {
	// BrnGuiEventTypeDefs.h:6524
	BrnNetwork::ECameraStatus meCamStatus;

}

// BrnGuiEventTypeDefs.h:6617
struct BrnGui::GuiSaveLoadOperationStarted : public GuiEvent<67> {
}

// BrnGuiEventTypeDefs.h:6621
struct BrnGui::GuiSaveLoadOperationCompleted : public GuiEvent<68> {
}

// BrnGuiPFXHooks.h:27
namespace BrnGui {
	// BrnGuiEventTypeDefs.h:95
	using BrnNetwork::BrnNetworkModuleIO;

	// BrnGuiEventTypeDefs.h:97
	const int32_t KI_MAX_GAMERTAG_LENGTH = 20;

	// BrnGuiEventTypeDefs.h:98
	const int32_t KI_MAX_AWARDS = 6;

	// BrnGuiEventTypeDefs.h:99
	const int32_t KI_MAX_PFXHOOK_NAMES = 100;

	// BrnGuiEventTypeDefs.h:100
	const int32_t KI_MAX_VISIBLE_SIGNS = 32;

	// BrnGuiEventTypeDefs.h:925
	const const char *[4] KAPC_INGAME_FSM_NAMES;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct GuiEventNetworkSelectedPlayerOption {
		// BrnGuiEventTypeDefs.h:3092
		enum EOptionSelected {
			E_OPTION_SELECTED_MARK_PLAYER = 0,
			E_OPTION_SELECTED_VIEW_GAMERCARD = 1,
			E_OPTION_SELECTED_SUBMIT_REVIEW = 2,
			E_OPTION_SELECTED_KICK_PLAYER = 3,
			E_OPTION_SELECTED_COUNT = 4,
		}

	}

	// Declaration
	struct GuiEventNetworkOutputPlayerTexture {
		// BrnGuiEventTypeDefs.h:3320
		enum EOutput {
			E_OUTPUT_OFF = 0,
			E_OUTPUT_PLAYER_IMAGE = 1,
			E_OUTPUT_SCALP_IMAGE = 2,
			E_OUTPUT_WINNER_IMAGE = 3,
			E_OUTPUT_GAMERPIC = 4,
			E_OUTPUT_GAMERPIC_LICENCE = 5,
			E_OUTPUT_NUM = 6,
		}

	}

	// Declaration
	struct GuiEventNetworkNewsAndTOS {
		// BrnGuiEventTypeDefs.h:3347
		enum EEventType {
			E_EVENT_TYPE_REQUEST_NEWS = 0,
			E_EVENT_TYPE_REQUEST_TOS = 1,
			E_EVENT_TYPE_RETRIEVED_NEWS = 2,
			E_EVENT_TYPE_RETRIEVED_TOS = 3,
			E_EVENT_TYPE_FAILED_NEWS = 4,
			E_EVENT_TYPE_FAILED_TOS = 5,
			E_EVENT_TYPE_RELEASE = 6,
			E_EVENT_TYPE_COUNT = 7,
		}

	}

	// Declaration
	struct GuiEventNetworkSplashEvent {
		// BrnGuiEventTypeDefs.h:5462
		enum ESplashState {
			E_SPLASH_STATE_SHOW = 0,
			E_SPLASH_STATE_STOP = 1,
			E_SPLASH_STATE_FINISHED = 2,
			E_SPLASH_STATE_COUNT = 3,
		}

	}

	// BrnGuiEventTypeDefs.h:97
	const int32_t KI_MAX_GAMERTAG_LENGTH = 20;

	// BrnGuiEventTypeDefs.h:98
	const int32_t KI_MAX_AWARDS = 6;

	// BrnGuiEventTypeDefs.h:99
	const int32_t KI_MAX_PFXHOOK_NAMES = 100;

	// BrnGuiEventTypeDefs.h:100
	const int32_t KI_MAX_VISIBLE_SIGNS = 32;

	// BrnGuiEventTypeDefs.h:925
	const const char *[4] KAPC_INGAME_FSM_NAMES;

}

// BrnGuiEventTypeDefs.h:3088
struct BrnGui::GuiEventNetworkSelectedPlayerOption : public GuiEvent<243> {
	// BrnGuiEventTypeDefs.h:3102
	BrnGui::GuiEventNetworkSelectedPlayerOption::EOptionSelected meOptionSelected;

	// BrnGuiEventTypeDefs.h:3103
	AggressiveMoveData::NetworkPlayerID mSelectedPlayerID;

}

// BrnGuiEventTypeDefs.h:3115
struct BrnGui::GuiEventNetworkHighlightedPlayer : public GuiEvent<244> {
	// BrnGuiEventTypeDefs.h:3117
	AggressiveMoveData::NetworkPlayerID mPlayerID;

}

// BrnGuiEventTypeDefs.h:3129
struct BrnGui::GuiEventNetworkPlayerStats : public GuiEvent<245> {
	// BrnGuiEventTypeDefs.h:3131
	char[20] macPlayerName;

	// BrnGuiEventTypeDefs.h:3132
	NetworkPlayerStats mPlayerStats;

	// BrnGuiEventTypeDefs.h:3133
	AggressiveMoveData::NetworkPlayerID mPlayerID;

	// BrnGuiEventTypeDefs.h:3134
	int32_t miWorldRank;

}

// BrnGuiEventTypeDefs.h:3318
struct BrnGui::GuiEventNetworkOutputPlayerTexture : public GuiEvent<262> {
	// BrnGuiEventTypeDefs.h:3332
	BrnGui::GuiEventNetworkOutputPlayerTexture::EOutput meOutput;

	// BrnGuiEventTypeDefs.h:3333
	AggressiveMoveData::NetworkPlayerID mPlayerIDToOutput;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct GuiEventNetworkOutputPlayerTexture {
		// BrnGuiEventTypeDefs.h:3320
		enum EOutput {
			E_OUTPUT_OFF = 0,
			E_OUTPUT_PLAYER_IMAGE = 1,
			E_OUTPUT_SCALP_IMAGE = 2,
			E_OUTPUT_WINNER_IMAGE = 3,
			E_OUTPUT_GAMERPIC = 4,
			E_OUTPUT_GAMERPIC_LICENCE = 5,
			E_OUTPUT_NUM = 6,
		}

	}

	// BrnGuiEventTypeDefs.h:97
	const int32_t KI_MAX_GAMERTAG_LENGTH = 20;

	// BrnGuiEventTypeDefs.h:98
	const int32_t KI_MAX_AWARDS = 6;

	// BrnGuiEventTypeDefs.h:99
	const int32_t KI_MAX_PFXHOOK_NAMES = 100;

	// BrnGuiEventTypeDefs.h:100
	const int32_t KI_MAX_VISIBLE_SIGNS = 32;

	// BrnGuiEventTypeDefs.h:925
	const const char *[4] KAPC_INGAME_FSM_NAMES;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// BrnGuiEventTypeDefs.h:113
	enum RoadRuleLeaderType {
		E_ROADRULELEADERTYPE_AI = 0,
		E_ROADRULELEADERTYPE_PLAYER = 1,
		E_ROADRULELEADERTYPE_FRIEND = 2,
		E_ROADRULELEADERTYPE_COUNT = 3,
	}

	// Declaration
	struct GuiEventChangeReplayState {
		// BrnGuiEventTypeDefs.h:861
		enum ReplayState {
			E_REPLAYSTATE_INVISIBLE = 0,
			E_REPLAYSTATE_PLAYING = 1,
			E_REPLAYSTATE_RECORDING = 2,
			E_REPLAYSTATE_COUNT = 3,
		}

	}

	// BrnGuiEventTypeDefs.h:883
	enum GuiFlow {
		E_GUIFLOW_SCREEN = 0,
		E_GUIFLOW_HUD = 1,
		E_GUIFLOW_OVERLAY = 2,
		E_GUIFLOW_COUNT = 3,
		E_GUIFLOW_FIRST = 0,
	}

	// Declaration
	struct GuiEventRoadRuleUpcomingRoads {
		// BrnGuiEventTypeDefs.h:1218
		enum ERoadSide {
			E_ROAD_LEFT = 0,
			E_ROAD_RIGHT = 1,
			E_ROAD_COUNT = 2,
		}

		// BrnGuiEventTypeDefs.h:1226
		enum ERoadState {
			E_ROADSTATE_NORMAL = 0,
			E_ROADSTATE_SUGGESTED = 1,
			E_ROADSTATE_WRONG = 2,
			E_ROADSTATE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventSetRoadRuleScoreMode {
		// BrnGuiEventTypeDefs.h:1321
		enum ERoadPanelModes {
			E_ROAD_PANEL_MODE_OFFLINE = 0,
			E_ROAD_PANEL_MODE_ONLINE = 1,
			E_ROAD_PANEL_MODE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventPreRaceMessages {
		// BrnGuiEventTypeDefs.h:1579
		enum ERelationshipTypes {
			E_RELATIONSHIP_GOOD = 0,
			E_RELATIONSHIP_BAD = 1,
			E_RELATIONSHIP_NEUTRAL = 2,
			E_RELATIONSHIP_COUNT = 3,
		}

		// BrnGuiEventTypeDefs.h:1590
		struct MessageInfo {
			// BrnGuiEventTypeDefs.h:1592
			extern const int32_t KI_NUM_MESSAGE_STRINGS = 3;

			// BrnGuiEventTypeDefs.h:1593
			extern const int32_t KI_MAX_LENGTH_STRING_ID = 128;

			// BrnGuiEventTypeDefs.h:1595
			extern const int32_t KI_NUM_PARAMETERS = 1;

			// BrnGuiEventTypeDefs.h:1596
			extern const int32_t KI_MAX_LENGTH_PARAMETERS = 20;

			// BrnGuiEventTypeDefs.h:1600
			char[3][128] maacMessageIDs;

			// BrnGuiEventTypeDefs.h:1602
			int32_t miNumMsgIDs;

			// BrnGuiEventTypeDefs.h:1603
			char[3][20] maacMessageParameters;

			// BrnGuiEventTypeDefs.h:1605
			int32_t[3] maiNumParams;

			// BrnGuiEventTypeDefs.h:1608
			char[128] macGamerName;

			// BrnGuiEventTypeDefs.h:1610
			BrnGui::GuiEventPreRaceMessages::ERelationshipTypes meRelationshipType;

		}

	}

	// Declaration
	struct GuiEventUpdateSatNav {
		// BrnGuiEventTypeDefs.h:1675
		struct SatNavIconInfo {
			// BrnGuiEventTypeDefs.h:1678
			enum SatNavIconType {
				E_SATNAVICON_PLAYER_CAR = 0,
				E_SATNAVICON_MARKED_MAN = 1,
				E_SATNAVICON_NETWORKRIVAL = 2,
				E_SATNAVICON_RIVAL = 3,
				E_SATNAVICON_LANDMARK = 4,
				E_SATNAVICON_JUNCTION = 5,
				E_SATNAVICON_FREEBURN_CHALLENGE = 6,
				E_SATNAVICON_JUNKYARD = 7,
				E_SATNAVICON_CAR_PARK = 8,
				E_SATNAVICON_BODYSHOP = 9,
				E_SATNAVICON_GAS_STATION = 10,
				E_SATNAVICON_PAINT_SHOP = 11,
				E_SATNAVICON_TIRE_SHOP = 12,
				E_SATNAVICON_ROADSIGN = 13,
				E_SATNAVICON_MAX = 14,
			}

			// BrnGuiEventTypeDefs.h:1699
			Vector3 mv3Position;

			// BrnGuiEventTypeDefs.h:1700
			CgsID mCgsId;

			// BrnGuiEventTypeDefs.h:1702
			float32_t mfRotation;

			// BrnGuiEventTypeDefs.h:1703
			float32_t mfSpeedMph;

			// BrnGuiEventTypeDefs.h:1705
			LandmarkIndex mLandmarkIndex;

			// BrnGuiEventTypeDefs.h:1706
			uint8_t mu8DesignIndex;

			// BrnGuiEventTypeDefs.h:1707
			bool mbIsHiddenDriveThru;

		private:
			// BrnGuiEventTypeDefs.h:1736
			uint8_t mu8County;

			// BrnGuiEventTypeDefs.h:1737
			uint8_t mu8District;

			// BrnGuiEventTypeDefs.h:1738
			int8_t mi8ActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:1739
			int8_t mi8IconType;

		public:
			// BrnGuiEventTypeDefs.h:1710
			void SetCounty(BrnWorld::ECounty);

			// BrnGuiEventTypeDefs.h:1713
			BrnWorld::ECounty GetCounty() const;

			// BrnGuiEventTypeDefs.h:1716
			void SetDistrict(BrnWorld::EDistrict);

			// BrnGuiEventTypeDefs.h:1719
			BrnWorld::EDistrict GetDistrict() const;

			// BrnGuiEventTypeDefs.h:1722
			void SetActiveRaceCarIndex(EActiveRaceCarIndex);

			// BrnGuiEventTypeDefs.h:1725
			EActiveRaceCarIndex GetActiveRaceCarIndex() const;

			// BrnGuiEventTypeDefs.h:1728
			void SetIconType(BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType);

			// BrnGuiEventTypeDefs.h:1731
			BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType GetIconType() const;

		}

	}

	// Declaration
	struct GuiEventOnlinePostEvent {
		// BrnGuiEventTypeDefs.h:2276
		struct OnlinePlayer {
			// BrnGuiEventTypeDefs.h:2278
			EActiveRaceCarIndex meActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2279
			float32_t mfFinishingTime;

			// BrnGuiEventTypeDefs.h:2280
			Time mFinishingTime;

			// BrnGuiEventTypeDefs.h:2281
			float32_t mfDistanceFromFinish;

			// BrnGuiEventTypeDefs.h:2282
			int32_t miPointsFromThisRound;

			// BrnGuiEventTypeDefs.h:2283
			int32_t miResultsTablePosition;

			// BrnGuiEventTypeDefs.h:2284
			int32_t miTotalPoints;

			// BrnGuiEventTypeDefs.h:2285
			int32_t miEliminations;

			// BrnGuiEventTypeDefs.h:2286
			int32_t miLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2287
			int32_t miLandmarksNotVisited;

			// BrnGuiEventTypeDefs.h:2288
			int32_t miCumulativeLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2289
			bool mbHasTimedOut;

			// BrnGuiEventTypeDefs.h:2290
			bool mbHasDisconnected;

			// BrnGuiEventTypeDefs.h:2291
			bool mbWasEliminated;

		}

		// BrnGuiEventTypeDefs.h:2296
		struct OnlineAward {
			// BrnGuiEventTypeDefs.h:2298
			BrnGameState::EOnlineAwardID meOnlineAwardID;

			// BrnGuiEventTypeDefs.h:2299
			EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2300
			int32_t miAwardVariable;

		}

	}

	// Declaration
	struct GuiEventOfflinePostEvent {
		// BrnGuiEventTypeDefs.h:2380
		struct OfflinePostEventData {
			// BrnGuiEventTypeDefs.h:2382
			GuiEventStopMode::EGameModeType meFinishedGameModeType;

			// BrnGuiEventTypeDefs.h:2383
			CgsID mBeatenRival;

			// BrnGuiEventTypeDefs.h:2384
			int32_t miModeScore;

			// BrnGuiEventTypeDefs.h:2385
			float32_t mfTime;

			// BrnGuiEventTypeDefs.h:2386
			int8_t miPlayerFinishPosition;

			// BrnGuiEventTypeDefs.h:2387
			bool mbCrashedOut;

			// BrnGuiEventTypeDefs.h:2388
			bool mbTimedOut;

			// BrnGuiEventTypeDefs.h:2389
			bool mbEliminated;

			// BrnGuiEventTypeDefs.h:2390
			bool mbCountsTowardsProgression;

			// BrnGuiEventTypeDefs.h:2393
			int32_t miBaseScore;

			// BrnGuiEventTypeDefs.h:2394
			int32_t miScoreMultiplier;

			// BrnGuiEventTypeDefs.h:2395
			float32_t mfDistanceTravelled;

			// BrnGuiEventTypeDefs.h:2397
			DerivedCarArray maCarsToUnlockFromSpecialEvent;

			// BrnGuiEventTypeDefs.h:2401
			bool mbHasRankedUp;

			// BrnGuiEventTypeDefs.h:2402
			int32_t miPlayerOldRank;

			// BrnGuiEventTypeDefs.h:2403
			int32_t miPlayerNewRank;

			// BrnGuiEventTypeDefs.h:2404
			int32_t miCarsRevealed;

			// BrnGuiEventTypeDefs.h:2405
			int32_t miEventsUnlocked;

			// BrnGuiEventTypeDefs.h:2406
			bool mbCompletedLastRank;

			// BrnGuiEventTypeDefs.h:2409
			CgsID mNewlyUnlockedRivalID;

			// BrnGuiEventTypeDefs.h:2411
			bool mbHasUnlockedFreeCar;

			// BrnGuiEventTypeDefs.h:2412
			CgsID mNewlyUnlockedFreeCarID;

		}

	}

	// Declaration
	struct CalculateRoute {
		// BrnGuiEventTypeDefs.h:2612
		enum ERouteEndPointType {
			E_ROUTE_END_POINT_TYPE_LANDMARK = 0,
			E_ROUTE_END_POINT_TYPE_JUNCTION = 1,
			E_ROUTE_END_POINT_TYPE_PLAYERPOS = 2,
			E_ROUTE_END_POINT_TYPE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventDrawEventIcons {
		// BrnGuiEventTypeDefs.h:2662
		enum EIconDisplayType {
			E_ICON_DISPLAY_TYPE_OFFLINE_EVENTS = 0,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_STARTS = 1,
			E_ICON_DISPLAY_TYPE_ONLINE_CHECKPOINTS = 2,
			E_ICON_DISPLAY_TYPE_ONLINE_FINISH_POINTS = 3,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_PRESETS = 4,
			E_ICON_DISPLAY_TYPE_COUNT = 5,
		}

	}

	// Declaration
	struct GuiPlayerCrashingStateChangeEvent {
		// BrnGuiEventTypeDefs.h:3960
		enum CrashBarState {
			E_CRASHBARSTATE_INVALID = -1,
			E_CRASHBARSTATE_START_CRASHED = 0,
			E_CRASHBARSTATE_LEAVE_CRASHED = 1,
			E_CRASHBARSTATE_START_TAKEDOWN = 2,
			E_CRASHBARSTATE_LEAVE_TAKEDOWN = 3,
			E_CRASHBARSTATE_COUNT = 4,
		}

	}

	// Declaration
	struct GuiPlayerEngineEvent {
		// BrnGuiEventTypeDefs.h:3986
		enum EEngineState {
			E_ENGINE_OFF = 0,
			E_ENGINE_ON = 1,
			E_ENGINE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventAudioTraxPlayOrder {
		// BrnGuiEventTypeDefs.h:4068
		enum ETraxPlayOrderMode {
			E_TRAX_PLAY_ORDER_MODE_SEQUENTIAL = 0,
			E_TRAX_PLAY_ORDER_MODE_RANDOM = 1,
			E_TRAX_PLAY_ORDER_MODE_COUNT = 2,
		}

	}

	// BrnGuiEventTypeDefs.h:97
	const int32_t KI_MAX_GAMERTAG_LENGTH = 20;

	// BrnGuiEventTypeDefs.h:98
	const int32_t KI_MAX_AWARDS = 6;

	// BrnGuiEventTypeDefs.h:99
	const int32_t KI_MAX_PFXHOOK_NAMES = 100;

	// BrnGuiEventTypeDefs.h:100
	const int32_t KI_MAX_VISIBLE_SIGNS = 32;

	// BrnGuiEventTypeDefs.h:925
	const const char *[4] KAPC_INGAME_FSM_NAMES;

}

// BrnGuiEventTypeDefs.h:4207
struct BrnGui::GuiEventAudioVoiceOverFinished : public GuiEvent<462> {
}

// BrnGuiEventTypeDefs.h:6115
struct BrnGui::GuiVideoVolumeEvent : public GuiEvent<503> {
	// BrnGuiEventTypeDefs.h:6117
	float32_t mfVideoVolume;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// BrnGuiEventTypeDefs.h:113
	enum RoadRuleLeaderType {
		E_ROADRULELEADERTYPE_AI = 0,
		E_ROADRULELEADERTYPE_PLAYER = 1,
		E_ROADRULELEADERTYPE_FRIEND = 2,
		E_ROADRULELEADERTYPE_COUNT = 3,
	}

	// Declaration
	struct GuiEventChangeReplayState {
		// BrnGuiEventTypeDefs.h:861
		enum ReplayState {
			E_REPLAYSTATE_INVISIBLE = 0,
			E_REPLAYSTATE_PLAYING = 1,
			E_REPLAYSTATE_RECORDING = 2,
			E_REPLAYSTATE_COUNT = 3,
		}

	}

	// BrnGuiEventTypeDefs.h:883
	enum GuiFlow {
		E_GUIFLOW_SCREEN = 0,
		E_GUIFLOW_HUD = 1,
		E_GUIFLOW_OVERLAY = 2,
		E_GUIFLOW_COUNT = 3,
		E_GUIFLOW_FIRST = 0,
	}

	// BrnGuiEventTypeDefs.h:893
	enum EFinishType {
		E_FINISH_TYPE_1ST = 0,
		E_FINISH_TYPE_2ND = 1,
		E_FINISH_TYPE_3RD = 2,
		E_FINISH_TYPE_4TH = 3,
		E_FINISH_TYPE_5TH = 4,
		E_FINISH_TYPE_6TH = 5,
		E_FINISH_TYPE_7TH = 6,
		E_FINISH_TYPE_8TH = 7,
		E_FINISH_TYPE_TIMED_OUT = 8,
		E_FINISH_TYPE_WON = 9,
		E_FINISH_TYPE_LOST = 10,
		E_FINISH_TYPE_COUNT = 11,
	}

	// BrnGuiEventTypeDefs.h:912
	enum EHUDFSMs {
		E_GUI_HUD_INVALID = -1,
		E_GUI_HUD_BOOT = 0,
		E_GUI_HUD_FREEBURN = 1,
		E_GUI_HUD_EVENT = 2,
		E_GUI_HUD_ONLINE = 3,
		E_GUI_HUD_NUMSFSMS = 4,
	}

	// Declaration
	struct GuiEventRoadRuleUpcomingRoads {
		// BrnGuiEventTypeDefs.h:1218
		enum ERoadSide {
			E_ROAD_LEFT = 0,
			E_ROAD_RIGHT = 1,
			E_ROAD_COUNT = 2,
		}

		// BrnGuiEventTypeDefs.h:1226
		enum ERoadState {
			E_ROADSTATE_NORMAL = 0,
			E_ROADSTATE_SUGGESTED = 1,
			E_ROADSTATE_WRONG = 2,
			E_ROADSTATE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventSetRoadRuleScoreMode {
		// BrnGuiEventTypeDefs.h:1321
		enum ERoadPanelModes {
			E_ROAD_PANEL_MODE_OFFLINE = 0,
			E_ROAD_PANEL_MODE_ONLINE = 1,
			E_ROAD_PANEL_MODE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventPreRaceMessages {
		// BrnGuiEventTypeDefs.h:1579
		enum ERelationshipTypes {
			E_RELATIONSHIP_GOOD = 0,
			E_RELATIONSHIP_BAD = 1,
			E_RELATIONSHIP_NEUTRAL = 2,
			E_RELATIONSHIP_COUNT = 3,
		}

		// BrnGuiEventTypeDefs.h:1590
		struct MessageInfo {
			// BrnGuiEventTypeDefs.h:1592
			extern const int32_t KI_NUM_MESSAGE_STRINGS = 3;

			// BrnGuiEventTypeDefs.h:1593
			extern const int32_t KI_MAX_LENGTH_STRING_ID = 128;

			// BrnGuiEventTypeDefs.h:1595
			extern const int32_t KI_NUM_PARAMETERS = 1;

			// BrnGuiEventTypeDefs.h:1596
			extern const int32_t KI_MAX_LENGTH_PARAMETERS = 20;

			// BrnGuiEventTypeDefs.h:1600
			char[3][128] maacMessageIDs;

			// BrnGuiEventTypeDefs.h:1602
			int32_t miNumMsgIDs;

			// BrnGuiEventTypeDefs.h:1603
			char[3][20] maacMessageParameters;

			// BrnGuiEventTypeDefs.h:1605
			int32_t[3] maiNumParams;

			// BrnGuiEventTypeDefs.h:1608
			char[128] macGamerName;

			// BrnGuiEventTypeDefs.h:1610
			BrnGui::GuiEventPreRaceMessages::ERelationshipTypes meRelationshipType;

		}

	}

	// Declaration
	struct GuiEventUpdateSatNav {
		// BrnGuiEventTypeDefs.h:1675
		struct SatNavIconInfo {
			// BrnGuiEventTypeDefs.h:1678
			enum SatNavIconType {
				E_SATNAVICON_PLAYER_CAR = 0,
				E_SATNAVICON_MARKED_MAN = 1,
				E_SATNAVICON_NETWORKRIVAL = 2,
				E_SATNAVICON_RIVAL = 3,
				E_SATNAVICON_LANDMARK = 4,
				E_SATNAVICON_JUNCTION = 5,
				E_SATNAVICON_FREEBURN_CHALLENGE = 6,
				E_SATNAVICON_JUNKYARD = 7,
				E_SATNAVICON_CAR_PARK = 8,
				E_SATNAVICON_BODYSHOP = 9,
				E_SATNAVICON_GAS_STATION = 10,
				E_SATNAVICON_PAINT_SHOP = 11,
				E_SATNAVICON_TIRE_SHOP = 12,
				E_SATNAVICON_ROADSIGN = 13,
				E_SATNAVICON_MAX = 14,
			}

			// BrnGuiEventTypeDefs.h:1699
			Vector3 mv3Position;

			// BrnGuiEventTypeDefs.h:1700
			CgsID mCgsId;

			// BrnGuiEventTypeDefs.h:1702
			float32_t mfRotation;

			// BrnGuiEventTypeDefs.h:1703
			float32_t mfSpeedMph;

			// BrnGuiEventTypeDefs.h:1705
			LandmarkIndex mLandmarkIndex;

			// BrnGuiEventTypeDefs.h:1706
			uint8_t mu8DesignIndex;

			// BrnGuiEventTypeDefs.h:1707
			bool mbIsHiddenDriveThru;

		private:
			// BrnGuiEventTypeDefs.h:1736
			uint8_t mu8County;

			// BrnGuiEventTypeDefs.h:1737
			uint8_t mu8District;

			// BrnGuiEventTypeDefs.h:1738
			int8_t mi8ActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:1739
			int8_t mi8IconType;

		public:
			// BrnGuiEventTypeDefs.h:1710
			void SetCounty(BrnWorld::ECounty);

			// BrnGuiEventTypeDefs.h:1713
			BrnWorld::ECounty GetCounty() const;

			// BrnGuiEventTypeDefs.h:1716
			void SetDistrict(BrnWorld::EDistrict);

			// BrnGuiEventTypeDefs.h:1719
			BrnWorld::EDistrict GetDistrict() const;

			// BrnGuiEventTypeDefs.h:1722
			void SetActiveRaceCarIndex(EActiveRaceCarIndex);

			// BrnGuiEventTypeDefs.h:1725
			EActiveRaceCarIndex GetActiveRaceCarIndex() const;

			// BrnGuiEventTypeDefs.h:1728
			void SetIconType(BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType);

			// BrnGuiEventTypeDefs.h:1731
			BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType GetIconType() const;

		}

	}

	// Declaration
	struct GuiEventOnlinePostEvent {
		// BrnGuiEventTypeDefs.h:2276
		struct OnlinePlayer {
			// BrnGuiEventTypeDefs.h:2278
			EActiveRaceCarIndex meActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2279
			float32_t mfFinishingTime;

			// BrnGuiEventTypeDefs.h:2280
			Time mFinishingTime;

			// BrnGuiEventTypeDefs.h:2281
			float32_t mfDistanceFromFinish;

			// BrnGuiEventTypeDefs.h:2282
			int32_t miPointsFromThisRound;

			// BrnGuiEventTypeDefs.h:2283
			int32_t miResultsTablePosition;

			// BrnGuiEventTypeDefs.h:2284
			int32_t miTotalPoints;

			// BrnGuiEventTypeDefs.h:2285
			int32_t miEliminations;

			// BrnGuiEventTypeDefs.h:2286
			int32_t miLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2287
			int32_t miLandmarksNotVisited;

			// BrnGuiEventTypeDefs.h:2288
			int32_t miCumulativeLandmarksVisited;

			// BrnGuiEventTypeDefs.h:2289
			bool mbHasTimedOut;

			// BrnGuiEventTypeDefs.h:2290
			bool mbHasDisconnected;

			// BrnGuiEventTypeDefs.h:2291
			bool mbWasEliminated;

		}

		// BrnGuiEventTypeDefs.h:2296
		struct OnlineAward {
			// BrnGuiEventTypeDefs.h:2298
			BrnGameState::EOnlineAwardID meOnlineAwardID;

			// BrnGuiEventTypeDefs.h:2299
			EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

			// BrnGuiEventTypeDefs.h:2300
			int32_t miAwardVariable;

		}

	}

	// Declaration
	struct GuiEventOfflinePostEvent {
		// BrnGuiEventTypeDefs.h:2380
		struct OfflinePostEventData {
			// BrnGuiEventTypeDefs.h:2382
			GuiEventStopMode::EGameModeType meFinishedGameModeType;

			// BrnGuiEventTypeDefs.h:2383
			CgsID mBeatenRival;

			// BrnGuiEventTypeDefs.h:2384
			int32_t miModeScore;

			// BrnGuiEventTypeDefs.h:2385
			float32_t mfTime;

			// BrnGuiEventTypeDefs.h:2386
			int8_t miPlayerFinishPosition;

			// BrnGuiEventTypeDefs.h:2387
			bool mbCrashedOut;

			// BrnGuiEventTypeDefs.h:2388
			bool mbTimedOut;

			// BrnGuiEventTypeDefs.h:2389
			bool mbEliminated;

			// BrnGuiEventTypeDefs.h:2390
			bool mbCountsTowardsProgression;

			// BrnGuiEventTypeDefs.h:2393
			int32_t miBaseScore;

			// BrnGuiEventTypeDefs.h:2394
			int32_t miScoreMultiplier;

			// BrnGuiEventTypeDefs.h:2395
			float32_t mfDistanceTravelled;

			// BrnGuiEventTypeDefs.h:2397
			DerivedCarArray maCarsToUnlockFromSpecialEvent;

			// BrnGuiEventTypeDefs.h:2401
			bool mbHasRankedUp;

			// BrnGuiEventTypeDefs.h:2402
			int32_t miPlayerOldRank;

			// BrnGuiEventTypeDefs.h:2403
			int32_t miPlayerNewRank;

			// BrnGuiEventTypeDefs.h:2404
			int32_t miCarsRevealed;

			// BrnGuiEventTypeDefs.h:2405
			int32_t miEventsUnlocked;

			// BrnGuiEventTypeDefs.h:2406
			bool mbCompletedLastRank;

			// BrnGuiEventTypeDefs.h:2409
			CgsID mNewlyUnlockedRivalID;

			// BrnGuiEventTypeDefs.h:2411
			bool mbHasUnlockedFreeCar;

			// BrnGuiEventTypeDefs.h:2412
			CgsID mNewlyUnlockedFreeCarID;

		}

	}

	// Declaration
	struct CalculateRoute {
		// BrnGuiEventTypeDefs.h:2612
		enum ERouteEndPointType {
			E_ROUTE_END_POINT_TYPE_LANDMARK = 0,
			E_ROUTE_END_POINT_TYPE_JUNCTION = 1,
			E_ROUTE_END_POINT_TYPE_PLAYERPOS = 2,
			E_ROUTE_END_POINT_TYPE_COUNT = 3,
		}

	}

	// Declaration
	struct GuiEventDrawEventIcons {
		// BrnGuiEventTypeDefs.h:2662
		enum EIconDisplayType {
			E_ICON_DISPLAY_TYPE_OFFLINE_EVENTS = 0,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_STARTS = 1,
			E_ICON_DISPLAY_TYPE_ONLINE_CHECKPOINTS = 2,
			E_ICON_DISPLAY_TYPE_ONLINE_FINISH_POINTS = 3,
			E_ICON_DISPLAY_TYPE_ONLINE_EVENT_PRESETS = 4,
			E_ICON_DISPLAY_TYPE_COUNT = 5,
		}

	}

	// Declaration
	struct GuiEventNetworkOutputPlayerTexture {
		// BrnGuiEventTypeDefs.h:3320
		enum EOutput {
			E_OUTPUT_OFF = 0,
			E_OUTPUT_PLAYER_IMAGE = 1,
			E_OUTPUT_SCALP_IMAGE = 2,
			E_OUTPUT_WINNER_IMAGE = 3,
			E_OUTPUT_GAMERPIC = 4,
			E_OUTPUT_GAMERPIC_LICENCE = 5,
			E_OUTPUT_NUM = 6,
		}

	}

	// Declaration
	struct GuiPlayerCrashingStateChangeEvent {
		// BrnGuiEventTypeDefs.h:3960
		enum CrashBarState {
			E_CRASHBARSTATE_INVALID = -1,
			E_CRASHBARSTATE_START_CRASHED = 0,
			E_CRASHBARSTATE_LEAVE_CRASHED = 1,
			E_CRASHBARSTATE_START_TAKEDOWN = 2,
			E_CRASHBARSTATE_LEAVE_TAKEDOWN = 3,
			E_CRASHBARSTATE_COUNT = 4,
		}

	}

	// Declaration
	struct GuiPlayerEngineEvent {
		// BrnGuiEventTypeDefs.h:3986
		enum EEngineState {
			E_ENGINE_OFF = 0,
			E_ENGINE_ON = 1,
			E_ENGINE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventAudioTraxPlayOrder {
		// BrnGuiEventTypeDefs.h:4068
		enum ETraxPlayOrderMode {
			E_TRAX_PLAY_ORDER_MODE_SEQUENTIAL = 0,
			E_TRAX_PLAY_ORDER_MODE_RANDOM = 1,
			E_TRAX_PLAY_ORDER_MODE_COUNT = 2,
		}

	}

	// BrnGuiEventTypeDefs.h:97
	const int32_t KI_MAX_GAMERTAG_LENGTH = 20;

	// BrnGuiEventTypeDefs.h:98
	const int32_t KI_MAX_AWARDS = 6;

	// BrnGuiEventTypeDefs.h:99
	const int32_t KI_MAX_PFXHOOK_NAMES = 100;

	// BrnGuiEventTypeDefs.h:100
	const int32_t KI_MAX_VISIBLE_SIGNS = 32;

	// BrnGuiEventTypeDefs.h:925
	const const char *[4] KAPC_INGAME_FSM_NAMES;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// BrnGuiEventTypeDefs.h:95
	using BrnNetwork::BrnNetworkModuleIO;

	// BrnGuiEventTypeDefs.h:97
	const int32_t KI_MAX_GAMERTAG_LENGTH = 20;

	// BrnGuiEventTypeDefs.h:98
	const int32_t KI_MAX_AWARDS = 6;

	// BrnGuiEventTypeDefs.h:99
	const int32_t KI_MAX_PFXHOOK_NAMES = 100;

	// BrnGuiEventTypeDefs.h:100
	const int32_t KI_MAX_VISIBLE_SIGNS = 32;

	// BrnGuiEventTypeDefs.h:925
	const const char *[4] KAPC_INGAME_FSM_NAMES;

}

