// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct RichPresenceManagerBase {
		// BrnGameStateRichPresenceManagerBase.h:106
		enum ERichPresenceStates {
			E_PRESENCE_STATE_IDLE = 0,
			E_PRESENCE_STATE_OFFLINE_BURNING_ROUTE = 1,
			E_PRESENCE_STATE_OFFLINE_DEFAULT = 2,
			E_PRESENCE_STATE_OFFLINE_INACTIVE = 3,
			E_PRESENCE_STATE_OFFLINE_MARKED_MAN = 4,
			E_PRESENCE_STATE_OFFLINE_RACE = 5,
			E_PRESENCE_STATE_OFFLINE_ROAD_RAGE = 6,
			E_PRESENCE_STATE_OFFLINE_ROAD_RULES = 7,
			E_PRESENCE_STATE_OFFLINE_SHOWTIME = 8,
			E_PRESENCE_STATE_OFFLINE_STUNT_ATTACK = 9,
			E_PRESENCE_STATE_ONLINE_BURNING_HOME_RUN = 10,
			E_PRESENCE_STATE_ONLINE_EVENT_PENDING = 11,
			E_PRESENCE_STATE_ONLINE_FREE_BURN = 12,
			E_PRESENCE_STATE_ONLINE_FREE_BURN_CHALLENGE = 13,
			E_PRESENCE_STATE_ONLINE_RACE = 14,
			E_PRESENCE_STATE_ONLINE_ROAD_RULES = 15,
			E_PRESENCE_STATE_COUNT = 16,
		}

	}

}

// BrnGameStateRichPresenceManagerBase.h:184
extern BrnGameState::RichPresenceManagerBase::ERichPresenceStates[] KE_GAME_MODES_TO_RICH_PRESENCE_STATES;

// BrnGameStateRichPresenceManagerBase.h:239
extern const float32_t KF_TIME_BETWEEN_UPDATES;

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct RichPresenceManagerBase {
		// BrnGameStateRichPresenceManagerBase.h:106
		enum ERichPresenceStates {
			E_PRESENCE_STATE_IDLE = 0,
			E_PRESENCE_STATE_OFFLINE_BURNING_ROUTE = 1,
			E_PRESENCE_STATE_OFFLINE_DEFAULT = 2,
			E_PRESENCE_STATE_OFFLINE_INACTIVE = 3,
			E_PRESENCE_STATE_OFFLINE_MARKED_MAN = 4,
			E_PRESENCE_STATE_OFFLINE_RACE = 5,
			E_PRESENCE_STATE_OFFLINE_ROAD_RAGE = 6,
			E_PRESENCE_STATE_OFFLINE_ROAD_RULES = 7,
			E_PRESENCE_STATE_OFFLINE_SHOWTIME = 8,
			E_PRESENCE_STATE_OFFLINE_STUNT_ATTACK = 9,
			E_PRESENCE_STATE_ONLINE_BURNING_HOME_RUN = 10,
			E_PRESENCE_STATE_ONLINE_EVENT_PENDING = 11,
			E_PRESENCE_STATE_ONLINE_FREE_BURN = 12,
			E_PRESENCE_STATE_ONLINE_FREE_BURN_CHALLENGE = 13,
			E_PRESENCE_STATE_ONLINE_RACE = 14,
			E_PRESENCE_STATE_ONLINE_ROAD_RULES = 15,
			E_PRESENCE_STATE_COUNT = 16,
		}

		// BrnGameStateRichPresenceManagerBase.h:131
		enum EGameRankedType {
			E_GAME_RANKED = 0,
			E_GAME_UNRANKED = 1,
			E_GAME_COUNT = 2,
		}

	}

}

// BrnGameStateRichPresenceManagerBase.h:61
struct BrnGameState::RichPresenceManagerBase {
	int (*)(...) * _vptr.RichPresenceManagerBase;

private:
	// BrnGameStateRichPresenceManagerBase.cpp:33
	extern const BrnGameState::RichPresenceManagerBase::ERichPresenceStates[17] KE_GAME_MODES_TO_RICH_PRESENCE_STATES;

	// BrnGameStateRichPresenceManagerBase.h:211
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnGameStateRichPresenceManagerBase.h:212
	BrnGameState::ModeManager * mpModeManager;

	// BrnGameStateRichPresenceManagerBase.h:213
	BrnGameState::ScoringSystem * mpScoringSystem;

	// BrnGameStateRichPresenceManagerBase.h:214
	BrnGameState::NetworkRoundManager * mpNetworkRoundManager;

	// BrnGameStateRichPresenceManagerBase.h:216
	int32_t miOldPosition;

	// BrnGameStateRichPresenceManagerBase.h:217
	BrnGameState::RichPresenceManagerBase::ERichPresenceStates meOldRichPresenceStatus;

	// BrnGameStateRichPresenceManagerBase.h:218
	BrnGameState::GameStateModuleIO::EGameModeType meSetLobbyType;

	// BrnGameStateRichPresenceManagerBase.h:219
	BrnGameState::GameStateModuleIO::EGameModeType meLobbyType;

	// BrnGameStateRichPresenceManagerBase.h:220
	int32_t miCurrentRound;

	// BrnGameStateRichPresenceManagerBase.h:221
	int32_t miTotalRounds;

	// BrnGameStateRichPresenceManagerBase.h:224
	BrnGameState::RichPresenceManagerBase::EGameRankedType meIsRanked;

	// BrnGameStateRichPresenceManagerBase.h:225
	BrnGameState::RichPresenceManagerBase::EGameRankedType meOldRankedStatus;

	// BrnGameStateRichPresenceManagerBase.h:227
	BrnWorld::EDistrict meOldDistrict;

	// BrnGameStateRichPresenceManagerBase.h:228
	BrnWorld::EDistrict mePendingDistrict;

	// BrnGameStateRichPresenceManagerBase.h:230
	bool mbPlayerIsInLobby;

	// BrnGameStateRichPresenceManagerBase.h:232
	int32_t miUserID;

	// BrnGameStateRichPresenceManagerBase.h:235
	int32_t miUpdatePM;

	// BrnGameStateRichPresenceManagerBase.h:236
	int32_t miDistrictChangePM;

	// BrnGameStateRichPresenceManagerBase.h:239
	extern const float32_t KF_TIME_BETWEEN_UPDATES;

public:
	// BrnGameStateRichPresenceManagerBase.cpp:72
	void Construct(BrnGameState::GameStateModule *, BrnGameState::NetworkRoundManager *, BrnGameState::ModeManager *);

	// BrnGameStateRichPresenceManagerBase.cpp:124
	bool Prepare();

	// BrnGameStateRichPresenceManagerBase.cpp:158
	bool Release();

	// BrnGameStateRichPresenceManagerBase.cpp:185
	void Destruct();

	// BrnGameStateRichPresenceManagerBase.cpp:362
	void Update(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateRichPresenceManagerBase.h:253
	void LocalPlayerLeftLobby();

	// BrnGameStateRichPresenceManagerBase.cpp:490
	void GameParametersChanged(BrnGameState::GameStateModuleIO::EGameModeType, bool);

	// BrnGameStateRichPresenceManagerBase.h:260
	void OnDistrictChange(BrnWorld::EDistrict);

protected:
	// BrnGameStateRichPresenceManagerBase.h:142
	virtual void SetRichPresenceState(BrnGameState::RichPresenceManagerBase::ERichPresenceStates);

	// BrnGameStateRichPresenceManagerBase.h:147
	virtual void SetCurrentRound(int32_t);

	// BrnGameStateRichPresenceManagerBase.h:152
	virtual void SetTotalRounds(int32_t);

	// BrnGameStateRichPresenceManagerBase.h:157
	virtual void SetCurrentPosition(int32_t);

	// BrnGameStateRichPresenceManagerBase.h:162
	virtual void SetLobbyType(BrnGameState::RichPresenceManagerBase::ERichPresenceStates);

	// BrnGameStateRichPresenceManagerBase.h:167
	virtual void SetRankedStatus(BrnGameState::RichPresenceManagerBase::EGameRankedType);

	// BrnGameStateRichPresenceManagerBase.h:171
	virtual void SetDistrict(BrnWorld::EDistrict);

	// BrnGameStateRichPresenceManagerBase.cpp:531
	virtual void SetNumberPlayers(int32_t);

	// BrnGameStateRichPresenceManagerBase.h:246
	int32_t GetUserID();

private:
	// BrnGameStateRichPresenceManagerBase.cpp:215
	bool SetGameTypeParameters();

	// BrnGameStateRichPresenceManagerBase.cpp:263
	bool SetPositionParameter();

	// BrnGameStateRichPresenceManagerBase.cpp:296
	bool SetRoundParameter();

	// BrnGameStateRichPresenceManagerBase.cpp:334
	bool SetRankedParameter();

	// BrnGameStateRichPresenceManagerBase.cpp:513
	bool ChangeDistrict();

	// BrnGameStateRichPresenceManagerBase.cpp:455
	BrnGameState::RichPresenceManagerBase::ERichPresenceStates EGameModeTypeToERichPresenceState(BrnGameState::GameStateModuleIO::EGameModeType);

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct RichPresenceManagerBase {
		// BrnGameStateRichPresenceManagerBase.h:106
		enum ERichPresenceStates {
			E_PRESENCE_STATE_IDLE = 0,
			E_PRESENCE_STATE_OFFLINE_BURNING_ROUTE = 1,
			E_PRESENCE_STATE_OFFLINE_DEFAULT = 2,
			E_PRESENCE_STATE_OFFLINE_INACTIVE = 3,
			E_PRESENCE_STATE_OFFLINE_MARKED_MAN = 4,
			E_PRESENCE_STATE_OFFLINE_RACE = 5,
			E_PRESENCE_STATE_OFFLINE_ROAD_RAGE = 6,
			E_PRESENCE_STATE_OFFLINE_ROAD_RULES = 7,
			E_PRESENCE_STATE_OFFLINE_SHOWTIME = 8,
			E_PRESENCE_STATE_OFFLINE_STUNT_ATTACK = 9,
			E_PRESENCE_STATE_ONLINE_BURNING_HOME_RUN = 10,
			E_PRESENCE_STATE_ONLINE_EVENT_PENDING = 11,
			E_PRESENCE_STATE_ONLINE_FREE_BURN = 12,
			E_PRESENCE_STATE_ONLINE_FREE_BURN_CHALLENGE = 13,
			E_PRESENCE_STATE_ONLINE_RACE = 14,
			E_PRESENCE_STATE_ONLINE_ROAD_RULES = 15,
			E_PRESENCE_STATE_COUNT = 16,
		}

	public:
		RichPresenceManagerBase();

	private:
		// BrnGameStateRichPresenceManagerBase.h:184
		extern BrnGameState::RichPresenceManagerBase::ERichPresenceStates[] KE_GAME_MODES_TO_RICH_PRESENCE_STATES;

		// BrnGameStateRichPresenceManagerBase.h:239
		extern const float32_t KF_TIME_BETWEEN_UPDATES;

	}

}

// BrnGameStateRichPresenceManagerBase.h:61
void BrnGameState::RichPresenceManagerBase::RichPresenceManagerBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

