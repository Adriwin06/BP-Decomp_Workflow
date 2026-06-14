// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct LiveRevengeRelationship {
		// BrnNetworkLiveRevengeRelationship.h:98
		enum ERelationshipType {
			E_RELATIONSHIP_TYPE_NONE = 0,
			E_RELATIONSHIP_TYPE_NEW = 1,
			E_RELATIONSHIP_TYPE_OLD = 2,
			E_RELATIONSHIP_TYPE_COUNT = 3,
		}

		// BrnNetworkLiveRevengeRelationship.h:108
		enum ERelationshipStatus {
			E_RELATIONSHIP_STATUS_AHEAD = 0,
			E_RELATIONSHIP_STATUS_EQUAL = 1,
			E_RELATIONSHIP_STATUS_BEHIND = 2,
			E_RELATIONSHIP_STATUS_COUNT = 3,
		}

	}

}

// BrnNetworkLiveRevengeRelationship.h:47
struct BrnNetwork::CommonRelationshipStats {
	// BrnNetworkLiveRevengeRelationship.h:54
	int32_t miTakedowns;

	// BrnNetworkLiveRevengeRelationship.h:55
	int32_t miScalps;

	// BrnNetworkLiveRevengeRelationship.h:56
	int32_t miLongestStreak;

	// BrnNetworkLiveRevengeRelationship.h:57
	int32_t miWins;

	// BrnNetworkLiveRevengeRelationship.h:58
	int32_t miMarks;

	// BrnNetworkLiveRevengeRelationship.h:59
	int32_t miScoresSettled;

	// BrnNetworkLiveRevengeRelationship.h:60
	int32_t miEventsSinceLastTakedown;

	// BrnNetworkLiveRevengeRelationship.h:61
	int32_t miPaybacksScored;

	// BrnNetworkLiveRevengeRelationship.h:62
	int32_t miPaybacksDealt;

public:
	// BrnNetworkLiveRevengeRelationship.h:52
	void Clear();

}

// BrnNetworkLiveRevengeRelationship.h:74
struct BrnNetwork::CommonRelationship {
	// BrnNetworkLiveRevengeRelationship.h:81
	CommonRelationshipStats mPlayerStats;

	// BrnNetworkLiveRevengeRelationship.h:82
	CommonRelationshipStats mRivalStats;

public:
	// BrnNetworkLiveRevengeRelationship.h:79
	void Clear();

}

// BrnNetworkLiveRevengeRelationship.h:94
struct BrnNetwork::LiveRevengeRelationship {
private:
	// BrnNetworkLiveRevengeRelationship.h:320
	CommonRelationship mOverallStats;

	// BrnNetworkLiveRevengeRelationship.h:323
	DateAndTime mLastTimeChanged;

	// BrnNetworkLiveRevengeRelationship.h:326
	MugshotInfo::UniquePlayerID mUniqueID;

	// BrnNetworkLiveRevengeRelationship.h:329
	int32_t miCurrentScoreForPlayersPointOfView;

	// BrnNetworkLiveRevengeRelationship.h:332
	uint32_t miTotalEvents;

public:
	// BrnNetworkLiveRevengeRelationship.h:119
	void Construct();

	// BrnNetworkLiveRevengeRelationship.h:124
	bool Prepare(const MugshotInfo::UniquePlayerID *);

	// BrnNetworkLiveRevengeRelationship.h:128
	bool Release();

	// BrnNetworkLiveRevengeRelationship.h:132
	void Destruct();

	// BrnNetworkLiveRevengeRelationship.h:136
	void Clear();

	// BrnNetworkLiveRevengeRelationship.h:140
	void FlipPointOfView();

	// BrnNetworkLiveRevengeRelationship.h:149
	void AddTakedownByLocalPlayer(bool);

	// BrnNetworkLiveRevengeRelationship.h:154
	void AddTakedownByRival(bool);

	// BrnNetworkLiveRevengeRelationship.h:158
	void AddPaybackDealtByLocalPlayer();

	// BrnNetworkLiveRevengeRelationship.h:162
	void AddPaybackDealtByRival();

	// BrnNetworkLiveRevengeRelationship.h:166
	void AddPaybackScoredByLocalPlayer();

	// BrnNetworkLiveRevengeRelationship.h:170
	void AddPaybackScoredByRival();

	// BrnNetworkLiveRevengeRelationship.h:174
	void AddWinByLocalPlayer();

	// BrnNetworkLiveRevengeRelationship.h:178
	void AddWinByRival();

	// BrnNetworkLiveRevengeRelationship.h:182
	void AddMarkByPlayer();

	// BrnNetworkLiveRevengeRelationship.h:186
	void AddMarkByRival();

	// BrnNetworkLiveRevengeRelationship.h:194
	int32_t GetTotalTakedowns() const;

	// BrnNetworkLiveRevengeRelationship.h:198
	const PlayerName * GetRivalName() const;

	// BrnNetworkLiveRevengeRelationship.h:202
	int32_t GetCurrentScoreForLocalPlayer() const;

	// BrnNetworkLiveRevengeRelationship.h:206
	int32_t GetCurrentScoreForRival() const;

	// BrnNetworkLiveRevengeRelationship.h:210
	BrnNetwork::LiveRevengeRelationship::ERelationshipStatus GetRelationshipStatus() const;

	// BrnNetworkLiveRevengeRelationship.h:214
	int32_t GetTotalEvents() const;

	// BrnNetworkLiveRevengeRelationship.h:218
	const CommonRelationship * GetLastGameStats() const;

	// BrnNetworkLiveRevengeRelationship.h:222
	const CommonRelationship * GetOverallStats() const;

	// BrnNetworkLiveRevengeRelationship.h:237
	void SetLastTimeChanged(DateAndTime);

	// BrnNetworkLiveRevengeRelationship.h:242
	void SetCurrentScoreForPlayer(int32_t);

	// BrnNetworkLiveRevengeRelationship.h:247
	void SetTotalNumberOfEvents(int32_t);

	// BrnNetworkLiveRevengeRelationship.h:252
	void SetOverallStats(CommonRelationship *);

	// BrnNetworkLiveRevengeRelationship.h:257
	void Merge(LiveRevengeRelationship *);

	// BrnNetworkLiveRevengeRelationship.h:265
	bool IsRivalAheadInCurrentRelationship() const;

	// BrnNetworkLiveRevengeRelationship.h:269
	bool IsPlayerAheadInCurrentRelationship() const;

	// BrnNetworkLiveRevengeRelationship.h:273
	bool IsCurrentRelationshipEqual() const;

	// BrnNetworkLiveRevengeRelationship.h:277
	BrnNetwork::LiveRevengeRelationship::ERelationshipType GetRelationshipType() const;

	// BrnNetworkLiveRevengeRelationship.h:281
	DateAndTime GetLastChangedTime() const;

	// BrnNetworkLiveRevengeRelationship.h:285
	void OnRoundFinish();

	// BrnNetworkLiveRevengeRelationship.h:289
	void OnRoundStart();

	// BrnNetworkLiveRevengeRelationship.h:297
	bool Validate() const;

	// BrnNetworkLiveRevengeRelationship.h:304
	void DEBUGResetTimeStamp(void *);

	// BrnNetworkLiveRevengeRelationship.h:309
	void DEBUGSetTimeStampOld(void *);

	// BrnNetworkLiveRevengeRelationship.h:314
	void DEBUGClearRelationship(void *);

private:
	// BrnNetworkLiveRevengeRelationship.h:336
	void ScoreSettled();

	// BrnNetworkLiveRevengeRelationship.h:341
	void FlipCommonRelationship(CommonRelationship *);

	// BrnNetworkLiveRevengeRelationship.h:351
	void ValidateStat(int32_t, int32_t, int32_t, int32_t, const char *, bool);

}

// BrnNetworkLiveRevengeRelationship.h:94
struct BrnNetwork::LiveRevengeRelationship {
private:
	// BrnNetworkLiveRevengeRelationship.h:320
	CommonRelationship mOverallStats;

	// BrnNetworkLiveRevengeRelationship.h:323
	DateAndTime mLastTimeChanged;

	// Unknown accessibility
	// CgsUniquePlayerID.h:47
	typedef UniquePlayerIDPS3 UniquePlayerID;

	// BrnNetworkLiveRevengeRelationship.h:326
	LiveRevengeRelationship::UniquePlayerID mUniqueID;

	// BrnNetworkLiveRevengeRelationship.h:329
	int32_t miCurrentScoreForPlayersPointOfView;

	// BrnNetworkLiveRevengeRelationship.h:332
	uint32_t miTotalEvents;

public:
	// BrnNetworkLiveRevengeRelationship.h:119
	void Construct();

	// BrnNetworkLiveRevengeRelationship.h:124
	bool Prepare(const LiveRevengeRelationship::UniquePlayerID *);

	// BrnNetworkLiveRevengeRelationship.h:128
	bool Release();

	// BrnNetworkLiveRevengeRelationship.h:132
	void Destruct();

	// BrnNetworkLiveRevengeRelationship.h:136
	void Clear();

	// BrnNetworkLiveRevengeRelationship.h:140
	void FlipPointOfView();

	// BrnNetworkLiveRevengeRelationship.h:149
	void AddTakedownByLocalPlayer(bool);

	// BrnNetworkLiveRevengeRelationship.h:154
	void AddTakedownByRival(bool);

	// BrnNetworkLiveRevengeRelationship.h:158
	void AddPaybackDealtByLocalPlayer();

	// BrnNetworkLiveRevengeRelationship.h:162
	void AddPaybackDealtByRival();

	// BrnNetworkLiveRevengeRelationship.h:166
	void AddPaybackScoredByLocalPlayer();

	// BrnNetworkLiveRevengeRelationship.h:170
	void AddPaybackScoredByRival();

	// BrnNetworkLiveRevengeRelationship.h:174
	void AddWinByLocalPlayer();

	// BrnNetworkLiveRevengeRelationship.h:178
	void AddWinByRival();

	// BrnNetworkLiveRevengeRelationship.h:182
	void AddMarkByPlayer();

	// BrnNetworkLiveRevengeRelationship.h:186
	void AddMarkByRival();

	// BrnNetworkLiveRevengeRelationship.h:194
	int32_t GetTotalTakedowns() const;

	// BrnNetworkLiveRevengeRelationship.h:198
	const PlayerName * GetRivalName() const;

	// BrnNetworkLiveRevengeRelationship.h:202
	int32_t GetCurrentScoreForLocalPlayer() const;

	// BrnNetworkLiveRevengeRelationship.h:206
	int32_t GetCurrentScoreForRival() const;

	// BrnNetworkLiveRevengeRelationship.h:210
	BrnNetwork::LiveRevengeRelationship::ERelationshipStatus GetRelationshipStatus() const;

	// BrnNetworkLiveRevengeRelationship.h:214
	int32_t GetTotalEvents() const;

	// BrnNetworkLiveRevengeRelationship.h:218
	const CommonRelationship * GetLastGameStats() const;

	// BrnNetworkLiveRevengeRelationship.h:222
	const CommonRelationship * GetOverallStats() const;

	// BrnNetworkLiveRevengeRelationship.h:237
	void SetLastTimeChanged(DateAndTime);

	// BrnNetworkLiveRevengeRelationship.h:242
	void SetCurrentScoreForPlayer(int32_t);

	// BrnNetworkLiveRevengeRelationship.h:247
	void SetTotalNumberOfEvents(int32_t);

	// BrnNetworkLiveRevengeRelationship.h:252
	void SetOverallStats(CommonRelationship *);

	// BrnNetworkLiveRevengeRelationship.h:257
	void Merge(LiveRevengeRelationship *);

	// BrnNetworkLiveRevengeRelationship.h:265
	bool IsRivalAheadInCurrentRelationship() const;

	// BrnNetworkLiveRevengeRelationship.h:269
	bool IsPlayerAheadInCurrentRelationship() const;

	// BrnNetworkLiveRevengeRelationship.h:273
	bool IsCurrentRelationshipEqual() const;

	// BrnNetworkLiveRevengeRelationship.h:277
	BrnNetwork::LiveRevengeRelationship::ERelationshipType GetRelationshipType() const;

	// BrnNetworkLiveRevengeRelationship.h:281
	DateAndTime GetLastChangedTime() const;

	// BrnNetworkLiveRevengeRelationship.h:285
	void OnRoundFinish();

	// BrnNetworkLiveRevengeRelationship.h:289
	void OnRoundStart();

	// BrnNetworkLiveRevengeRelationship.h:297
	bool Validate() const;

	// BrnNetworkLiveRevengeRelationship.h:304
	void DEBUGResetTimeStamp(void *);

	// BrnNetworkLiveRevengeRelationship.h:309
	void DEBUGSetTimeStampOld(void *);

	// BrnNetworkLiveRevengeRelationship.h:314
	void DEBUGClearRelationship(void *);

private:
	// BrnNetworkLiveRevengeRelationship.h:336
	void ScoreSettled();

	// BrnNetworkLiveRevengeRelationship.h:341
	void FlipCommonRelationship(CommonRelationship *);

	// BrnNetworkLiveRevengeRelationship.h:351
	void ValidateStat(int32_t, int32_t, int32_t, int32_t, const char *, bool);

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct LiveRevengeRelationship {
		// BrnNetworkLiveRevengeRelationship.h:98
		enum ERelationshipType {
			E_RELATIONSHIP_TYPE_NONE = 0,
			E_RELATIONSHIP_TYPE_NEW = 1,
			E_RELATIONSHIP_TYPE_OLD = 2,
			E_RELATIONSHIP_TYPE_COUNT = 3,
		}

		// BrnNetworkLiveRevengeRelationship.h:108
		enum ERelationshipStatus {
			E_RELATIONSHIP_STATUS_AHEAD = 0,
			E_RELATIONSHIP_STATUS_EQUAL = 1,
			E_RELATIONSHIP_STATUS_BEHIND = 2,
			E_RELATIONSHIP_STATUS_COUNT = 3,
		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct LiveRevengeRelationship {
		// BrnNetworkLiveRevengeRelationship.h:98
		enum ERelationshipType {
			E_RELATIONSHIP_TYPE_NONE = 0,
			E_RELATIONSHIP_TYPE_NEW = 1,
			E_RELATIONSHIP_TYPE_OLD = 2,
			E_RELATIONSHIP_TYPE_COUNT = 3,
		}

		// BrnNetworkLiveRevengeRelationship.h:108
		enum ERelationshipStatus {
			E_RELATIONSHIP_STATUS_AHEAD = 0,
			E_RELATIONSHIP_STATUS_EQUAL = 1,
			E_RELATIONSHIP_STATUS_BEHIND = 2,
			E_RELATIONSHIP_STATUS_COUNT = 3,
		}

	}

}

// BrnNetworkLiveRevengeRelationship.h:94
struct BrnNetwork::LiveRevengeRelationship {
private:
	// BrnNetworkLiveRevengeRelationship.h:320
	CommonRelationship mOverallStats;

	// BrnNetworkLiveRevengeRelationship.h:323
	DateAndTime mLastTimeChanged;

	// Unknown accessibility
	// CgsUniquePlayerID.h:47
	typedef UniquePlayerIDPS3 UniquePlayerID;

	// BrnNetworkLiveRevengeRelationship.h:326
	LiveRevengeRelationship::UniquePlayerID mUniqueID;

	// BrnNetworkLiveRevengeRelationship.h:329
	int32_t miCurrentScoreForPlayersPointOfView;

	// BrnNetworkLiveRevengeRelationship.h:332
	uint32_t miTotalEvents;

public:
	// BrnNetworkLiveRevengeRelationship.h:119
	void Construct();

	// BrnNetworkLiveRevengeRelationship.h:124
	bool Prepare(const LiveRevengeRelationship::UniquePlayerID *);

	// BrnNetworkLiveRevengeRelationship.h:128
	bool Release();

	// BrnNetworkLiveRevengeRelationship.h:132
	void Destruct();

	// BrnNetworkLiveRevengeRelationship.h:136
	void Clear();

	// BrnNetworkLiveRevengeRelationship.h:140
	void FlipPointOfView();

	// BrnNetworkLiveRevengeRelationship.h:149
	void AddTakedownByLocalPlayer(bool);

	// BrnNetworkLiveRevengeRelationship.h:154
	void AddTakedownByRival(bool);

	// BrnNetworkLiveRevengeRelationship.h:158
	void AddPaybackDealtByLocalPlayer();

	// BrnNetworkLiveRevengeRelationship.h:162
	void AddPaybackDealtByRival();

	// BrnNetworkLiveRevengeRelationship.h:166
	void AddPaybackScoredByLocalPlayer();

	// BrnNetworkLiveRevengeRelationship.h:170
	void AddPaybackScoredByRival();

	// BrnNetworkLiveRevengeRelationship.h:174
	void AddWinByLocalPlayer();

	// BrnNetworkLiveRevengeRelationship.h:178
	void AddWinByRival();

	// BrnNetworkLiveRevengeRelationship.h:182
	void AddMarkByPlayer();

	// BrnNetworkLiveRevengeRelationship.h:186
	void AddMarkByRival();

	// BrnNetworkLiveRevengeRelationship.h:194
	int32_t GetTotalTakedowns() const;

	// BrnNetworkLiveRevengeRelationship.h:198
	const PlayerName * GetRivalName() const;

	// BrnNetworkLiveRevengeRelationship.h:202
	int32_t GetCurrentScoreForLocalPlayer() const;

	// BrnNetworkLiveRevengeRelationship.h:206
	int32_t GetCurrentScoreForRival() const;

	// BrnNetworkLiveRevengeRelationship.h:210
	BrnNetwork::LiveRevengeRelationship::ERelationshipStatus GetRelationshipStatus() const;

	// BrnNetworkLiveRevengeRelationship.h:214
	int32_t GetTotalEvents() const;

	// BrnNetworkLiveRevengeRelationship.h:218
	const CommonRelationship * GetLastGameStats() const;

	// BrnNetworkLiveRevengeRelationship.h:222
	const CommonRelationship * GetOverallStats() const;

	// BrnNetworkLiveRevengeRelationship.h:237
	void SetLastTimeChanged(DateAndTime);

	// BrnNetworkLiveRevengeRelationship.h:242
	void SetCurrentScoreForPlayer(int32_t);

	// BrnNetworkLiveRevengeRelationship.h:247
	void SetTotalNumberOfEvents(int32_t);

	// BrnNetworkLiveRevengeRelationship.h:252
	void SetOverallStats(CommonRelationship *);

	// BrnNetworkLiveRevengeRelationship.h:257
	void Merge(LiveRevengeRelationship *);

	// BrnNetworkLiveRevengeRelationship.h:265
	bool IsRivalAheadInCurrentRelationship() const;

	// BrnNetworkLiveRevengeRelationship.h:269
	bool IsPlayerAheadInCurrentRelationship() const;

	// BrnNetworkLiveRevengeRelationship.h:273
	bool IsCurrentRelationshipEqual() const;

	// BrnNetworkLiveRevengeRelationship.h:277
	BrnNetwork::LiveRevengeRelationship::ERelationshipType GetRelationshipType() const;

	// BrnNetworkLiveRevengeRelationship.h:281
	DateAndTime GetLastChangedTime() const;

	// BrnNetworkLiveRevengeRelationship.h:285
	void OnRoundFinish();

	// BrnNetworkLiveRevengeRelationship.h:289
	void OnRoundStart();

	// BrnNetworkLiveRevengeRelationship.h:297
	bool Validate() const;

	// BrnNetworkLiveRevengeRelationship.h:304
	void DEBUGResetTimeStamp(void *);

	// BrnNetworkLiveRevengeRelationship.h:309
	void DEBUGSetTimeStampOld(void *);

	// BrnNetworkLiveRevengeRelationship.h:314
	void DEBUGClearRelationship(void *);

private:
	// BrnNetworkLiveRevengeRelationship.h:336
	void ScoreSettled();

	// BrnNetworkLiveRevengeRelationship.h:341
	void FlipCommonRelationship(CommonRelationship *);

	// BrnNetworkLiveRevengeRelationship.h:351
	// Declaration
	void ValidateStat(int32_t, int32_t, int32_t, int32_t, const char *, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkLiveRevengeRelationship.cpp:537
		using namespace CgsDev::Message;

	}

}

