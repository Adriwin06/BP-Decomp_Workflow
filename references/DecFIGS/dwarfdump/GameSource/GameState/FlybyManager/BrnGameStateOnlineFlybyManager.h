// BrnGameStateOnlineFlybyManager.h:146
extern const int32_t KI_WEIGHTING_MARK_TARGET;

// BrnGameStateOnlineFlybyManager.h:147
extern const int32_t KI_WEIGHTING_MARK_MARKED_ME;

// BrnGameStateOnlineFlybyManager.h:148
extern const int32_t KI_WEIGHTING_MARK_NONE;

// BrnGameStateOnlineFlybyManager.h:150
extern const int32_t KI_WEIGHTING_SQUARE_RELATIONSHIP;

// BrnGameStateOnlineFlybyManager.h:151
extern const int32_t KI_WEIGHTING_LIVE_RELATIONSHIP;

// BrnGameStateOnlineFlybyManager.h:152
extern const int32_t KI_WEIGHTING_NO_RELATIONSHIP_HIGHEST;

// BrnGameStateOnlineFlybyManager.h:153
extern const int32_t KI_WEIGHTING_NO_RELATIONSHIP_LOWEST;

// BrnGameStateOnlineFlybyManager.h:155
extern const int32_t KI_WEIGHTING_RANK_LEADER;

// BrnGameStateOnlineFlybyManager.h:156
extern const int32_t KI_WEIGHTING_RANK_OUTSIDER;

// BrnGameStateOnlineFlybyManager.h:157
extern const int32_t KI_WEIGHTING_RANK_BEGINNER;

// BrnGameStateOnlineFlybyManager.h:159
extern const int32_t KI_WEIGHTING_POINTS_LEADER;

// BrnGameStateOnlineFlybyManager.h:161
extern const int32_t KI_WEIGHTING_RECENT;

// BrnGameStateOnlineFlybyManager.h:162
extern const int32_t KI_WEIGHTING_NO_RECENT;

// BrnGameStateOnlineFlybyManager.h:164
extern const int32_t KI_RECENT_ACTIVITY_SECONDS;

// BrnGameStateOnlineFlybyManager.h:166
extern const int32_t KI_MAX_STRING_ID_SIZE;

// BrnGameStateOnlineFlybyManager.h:168
extern const int32_t KI_MAX_MESSAGES = 5;

// BrnGameStateOnlineFlybyManager.h:171
extern CombinedStringID[6][2][5] KA_ONGOING_RIVALRY_MESSAGES;

// BrnGameStateOnlineFlybyManager.h:172
extern CombinedStringID[4][2][5] KA_NEW_RIVALRY_MESSAGES;

// BrnGameStateOnlineFlybyManager.h:173
extern CombinedStringID[5] KA_NO_RIVALRY_MESSAGES;

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct OnlineFlybyManager {
		// BrnGameStateOnlineFlybyManager.h:48
		enum ENoRivalryCompare {
			E_NO_RIVALRY_START = 0,
			E_NO_RIVALRY_TAKEDOWNS = 0,
			E_NO_RIVALRY_TOTAL_RIVALS = 1,
			E_NO_RIVALRY_RANK = 2,
			E_NO_RIVALRY_EVENTS = 3,
			E_NO_RIVALRY_WINS = 4,
			E_NO_RIVALRY_COUNT = 5,
		}

		// BrnGameStateOnlineFlybyManager.h:61
		enum ENewRivalryCompare {
			E_NEW_RIVALRY_START = 0,
			E_NEW_RIVALRY_CURRENT_STATUS = 0,
			E_NEW_RIVALRY_SCORE_SETTLED = 1,
			E_NEW_RIVALRY_EVENTS = 2,
			E_NEW_RIVALRY_LONGEST_STREAK = 3,
			E_NEW_RIVALRY_COUNT = 4,
		}

		// BrnGameStateOnlineFlybyManager.h:73
		enum EOngoingRivalryCompare {
			E_ONGOING_RIVALRY_START = 0,
			E_ONGOING_RIVALRY_MUGSHOTS_COLLECTED = 0,
			E_ONGOING_RIVALRY_MARKS = 1,
			E_ONGOING_RIVALRY_LONGEST_STREAK = 2,
			E_ONGOING_RIVALRY_WINS = 3,
			E_ONGOING_RIVALRY_PAYBACKS_SUCCESSFUL = 4,
			E_ONGOING_RIVALRY_PAYBACKS_ESCAPED = 5,
			E_ONGOING_RIVALRY_COUNT = 6,
		}

		// BrnGameStateOnlineFlybyManager.h:87
		enum EMessageStyle {
			E_MESSAGE_STYLE_POSITIVE = 0,
			E_MESSAGE_STYLE_NEGATIVE = 1,
			E_MESSAGE_STYLE_COUNT = 2,
		}

	}

	// BrnGameStateOnlineFlybyManager.h:284
	extern BrnGameState::OnlineFlybyManager::ENoRivalryCompare operator++(BrnGameState::OnlineFlybyManager::ENoRivalryCompare &, int);

	// BrnGameStateOnlineFlybyManager.h:285
	extern BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare & operator++(BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare &);

	// BrnGameStateOnlineFlybyManager.h:286
	extern BrnGameState::OnlineFlybyManager::ENewRivalryCompare & operator++(BrnGameState::OnlineFlybyManager::ENewRivalryCompare &);

}

// BrnGameStateOnlineFlybyManager.h:45
struct BrnGameState::OnlineFlybyManager : public BrnGameState::FlybyManager {
private:
	// BrnGameStateOnlineFlybyManager.h:139
	InGamePlayerStatusInterface mPlayerInputInterface;

	// BrnGameStateOnlineFlybyManager.h:140
	FastBitArray<5> mAvailableNoRivalryMessages;

	// BrnGameStateOnlineFlybyManager.cpp:29
	extern const int32_t KI_WEIGHTING_MARK_TARGET = 40;

	// BrnGameStateOnlineFlybyManager.cpp:30
	extern const int32_t KI_WEIGHTING_MARK_MARKED_ME = 20;

	// BrnGameStateOnlineFlybyManager.cpp:31
	extern const int32_t KI_WEIGHTING_MARK_NONE;

	// BrnGameStateOnlineFlybyManager.cpp:33
	extern const int32_t KI_WEIGHTING_SQUARE_RELATIONSHIP = 9;

	// BrnGameStateOnlineFlybyManager.cpp:34
	extern const int32_t KI_WEIGHTING_LIVE_RELATIONSHIP = 8;

	// BrnGameStateOnlineFlybyManager.cpp:35
	extern const int32_t KI_WEIGHTING_NO_RELATIONSHIP_HIGHEST = 7;

	// BrnGameStateOnlineFlybyManager.cpp:36
	extern const int32_t KI_WEIGHTING_NO_RELATIONSHIP_LOWEST;

	// BrnGameStateOnlineFlybyManager.cpp:38
	extern const int32_t KI_WEIGHTING_RANK_LEADER = 3;

	// BrnGameStateOnlineFlybyManager.cpp:39
	extern const int32_t KI_WEIGHTING_RANK_OUTSIDER = 2;

	// BrnGameStateOnlineFlybyManager.cpp:40
	extern const int32_t KI_WEIGHTING_RANK_BEGINNER = 1;

	// BrnGameStateOnlineFlybyManager.cpp:42
	extern const int32_t KI_WEIGHTING_POINTS_LEADER = 50;

	// BrnGameStateOnlineFlybyManager.cpp:44
	extern const int32_t KI_WEIGHTING_RECENT = 3;

	// BrnGameStateOnlineFlybyManager.cpp:45
	extern const int32_t KI_WEIGHTING_NO_RECENT;

	// BrnGameStateOnlineFlybyManager.cpp:47
	extern const int32_t KI_RECENT_ACTIVITY_SECONDS = 300;

	// BrnGameStateOnlineFlybyManager.cpp:49
	extern const int32_t KI_MAX_STRING_ID_SIZE = 32;

	// BrnGameStateOnlineFlybyManager.h:168
	extern const int32_t KI_MAX_MESSAGES = 5;

	// BrnGameStateOnlineFlybyManager.h:169
	extern const int32_t KI_DO_NOT_SHOW_IN_FLYBY = 4294967295;

	// BrnGameStateOnlineFlybyManager.cpp:130
	extern CombinedStringID[6][2][5] KA_ONGOING_RIVALRY_MESSAGES;

	// BrnGameStateOnlineFlybyManager.cpp:66
	extern CombinedStringID[4][2][5] KA_NEW_RIVALRY_MESSAGES;

	// BrnGameStateOnlineFlybyManager.cpp:57
	extern CombinedStringID[5] KA_NO_RIVALRY_MESSAGES;

	// BrnGameStateOnlineFlybyManager.h:175
	extern const int32_t KI_MIN_TAKEDOWNS_FOR_NEW_RIVALRY = 5;

	// BrnGameStateOnlineFlybyManager.h:176
	extern const int32_t KI_MIN_TAKEDOWNS_FOR_ONGOING_RIVALRY = 10;

public:
	// BrnGameStateOnlineFlybyManager.cpp:235
	void Construct(BrnGameState::GameStateModule *, BrnGameState::ScoringSystem *);

	// BrnGameStateOnlineFlybyManager.cpp:268
	bool Prepare();

	// BrnGameStateOnlineFlybyManager.cpp:251
	void Destruct();

	// BrnGameStateOnlineFlybyManager.h:300
	void CopyNetworkData(const InGamePlayerStatusInterface *);

	// BrnGameStateOnlineFlybyManager.h:313
	void SetRandomNetworkGameSeed(uint32_t);

	// BrnGameStateOnlineFlybyManager.cpp:287
	virtual const FlybyData * CalculateFlybyRivals();

	// BrnGameStateOnlineFlybyManager.cpp:462
	virtual const int32_t CalculateNumberOfCarsInFlyby();

private:
	// BrnGameStateOnlineFlybyManager.cpp:326
	void CalculateOnlineRivals();

	// BrnGameStateOnlineFlybyManager.cpp:486
	const LiveRevengeRelationship * GetLiveRevengeRelationship(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnGameStateOnlineFlybyManager.cpp:504
	const NetworkPlayerStats * GetPlayerStats(RoadRulesRecvData::NetworkPlayerID);

	// BrnGameStateOnlineFlybyManager.cpp:634
	void CalculateDisconnectRating(BrnGameState::FlybyManager::RivalRating *);

	// BrnGameStateOnlineFlybyManager.cpp:521
	void CalculateNoRivalryRating(BrnGameState::FlybyManager::RivalRating *);

	// BrnGameStateOnlineFlybyManager.cpp:535
	void CalculateNewOrOngoingRivalryRating(BrnGameState::FlybyManager::RivalRating *);

	// BrnGameStateOnlineFlybyManager.cpp:578
	void CalculateRivalryRating(BrnGameState::FlybyManager::RivalRating *);

	// BrnGameStateOnlineFlybyManager.cpp:651
	void CalculateMarkedManRivalryRating(BrnGameState::FlybyManager::RivalRating *);

	// BrnGameStateOnlineFlybyManager.cpp:686
	void CalculatePointsLeaderRating(BrnGameState::FlybyManager::RivalRating *);

	// BrnGameStateOnlineFlybyManager.cpp:724
	void AddNoRivalryFlybyMessage(BrnGameState::FlybyManager::RivalRating *);

	// BrnGameStateOnlineFlybyManager.cpp:823
	void AddNewRivalryMessage(BrnGameState::FlybyManager::RivalRating *);

	// BrnGameStateOnlineFlybyManager.cpp:906
	void AddOngoingRivalryMessage(BrnGameState::FlybyManager::RivalRating *);

	// BrnGameStateOnlineFlybyManager.cpp:707
	const PlayerName * GetRivalName(RoadRulesRecvData::NetworkPlayerID);

	// BrnGameStateOnlineFlybyManager.cpp:971
	int32_t GetOngoingStat(BrnGameState::FlybyManager::RivalRating *, BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare, BrnGameState::OnlineFlybyManager::EMessageStyle);

	// BrnGameStateOnlineFlybyManager.cpp:1056
	int32_t GetNewRivalryStat(BrnGameState::FlybyManager::RivalRating *, BrnGameState::OnlineFlybyManager::ENewRivalryCompare, BrnGameState::OnlineFlybyManager::EMessageStyle);

	// BrnGameStateOnlineFlybyManager.cpp:1144
	int32_t GetNoRivalryStat(BrnGameState::FlybyManager::RivalRating *, BrnGameState::OnlineFlybyManager::ENoRivalryCompare);

	// BrnGameStateOnlineFlybyManager.cpp:1213
	int32_t CountAvailableOngoingRivalryMessages(BrnGameState::OnlineFlybyManager::EOngoingRivalryCompare, BrnGameState::OnlineFlybyManager::EMessageStyle);

	// BrnGameStateOnlineFlybyManager.cpp:1239
	int32_t CountAvailableNewRivalryMessages(BrnGameState::OnlineFlybyManager::ENewRivalryCompare, BrnGameState::OnlineFlybyManager::EMessageStyle);

	// BrnGameStateOnlineFlybyManager.cpp:1262
	RoadRulesRecvData::NetworkPlayerID GetLocalPlayerNetworkID();

}

// BrnGameStateOnlineFlybyManager.h:169
extern const int32_t KI_DO_NOT_SHOW_IN_FLYBY = 4294967295;

// BrnGameStateOnlineFlybyManager.h:175
extern const int32_t KI_MIN_TAKEDOWNS_FOR_NEW_RIVALRY = 5;

// BrnGameStateOnlineFlybyManager.h:176
extern const int32_t KI_MIN_TAKEDOWNS_FOR_ONGOING_RIVALRY = 10;

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct OnlineFlybyManager {
	public:
		OnlineFlybyManager();

	private:
		// BrnGameStateOnlineFlybyManager.h:146
		extern const int32_t KI_WEIGHTING_MARK_TARGET;

		// BrnGameStateOnlineFlybyManager.h:147
		extern const int32_t KI_WEIGHTING_MARK_MARKED_ME;

		// BrnGameStateOnlineFlybyManager.h:148
		extern const int32_t KI_WEIGHTING_MARK_NONE;

		// BrnGameStateOnlineFlybyManager.h:150
		extern const int32_t KI_WEIGHTING_SQUARE_RELATIONSHIP;

		// BrnGameStateOnlineFlybyManager.h:151
		extern const int32_t KI_WEIGHTING_LIVE_RELATIONSHIP;

		// BrnGameStateOnlineFlybyManager.h:152
		extern const int32_t KI_WEIGHTING_NO_RELATIONSHIP_HIGHEST;

		// BrnGameStateOnlineFlybyManager.h:153
		extern const int32_t KI_WEIGHTING_NO_RELATIONSHIP_LOWEST;

		// BrnGameStateOnlineFlybyManager.h:155
		extern const int32_t KI_WEIGHTING_RANK_LEADER;

		// BrnGameStateOnlineFlybyManager.h:156
		extern const int32_t KI_WEIGHTING_RANK_OUTSIDER;

		// BrnGameStateOnlineFlybyManager.h:157
		extern const int32_t KI_WEIGHTING_RANK_BEGINNER;

		// BrnGameStateOnlineFlybyManager.h:159
		extern const int32_t KI_WEIGHTING_POINTS_LEADER;

		// BrnGameStateOnlineFlybyManager.h:161
		extern const int32_t KI_WEIGHTING_RECENT;

		// BrnGameStateOnlineFlybyManager.h:162
		extern const int32_t KI_WEIGHTING_NO_RECENT;

		// BrnGameStateOnlineFlybyManager.h:164
		extern const int32_t KI_RECENT_ACTIVITY_SECONDS;

		// BrnGameStateOnlineFlybyManager.h:166
		extern const int32_t KI_MAX_STRING_ID_SIZE;

		// BrnGameStateOnlineFlybyManager.h:168
		extern const int32_t KI_MAX_MESSAGES = 5;

		// BrnGameStateOnlineFlybyManager.h:171
		extern CombinedStringID[6][2][5] KA_ONGOING_RIVALRY_MESSAGES;

		// BrnGameStateOnlineFlybyManager.h:172
		extern CombinedStringID[4][2][5] KA_NEW_RIVALRY_MESSAGES;

		// BrnGameStateOnlineFlybyManager.h:173
		extern CombinedStringID[5] KA_NO_RIVALRY_MESSAGES;

	}

}

// BrnGameStateOnlineFlybyManager.h:45
void BrnGameState::OnlineFlybyManager::OnlineFlybyManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

