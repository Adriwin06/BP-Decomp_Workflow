// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct GameResults {
		// BrnNetworkGameResults.h:50
		enum EEventType {
			E_EVENT_TYPE_UNDEFINED = 0,
			E_EVENT_TYPE_RACE = 1,
			E_EVENT_TYPE_STUNT = 2,
			E_EVENT_TYPE_BURNING_HOME_RUN = 3,
			E_EVENT_TYPE_ROAD_RAGE = 4,
			E_EVENT_TYPE_COUNT = 5,
		}

	}

}

// BrnNetworkGameResults.h:47
struct BrnNetwork::GameResults : public CgsNetwork::ServerInterfaceGameResultsBase {
	// BrnNetworkSharedServerTypes.h:66
	typedef GameDataT GameDataT;

private:
	// BrnNetworkGameResults.h:99
	GameResults::GameDataT mGameData;

public:
	// BrnNetworkGameResults.cpp:107
	virtual bool Prepare();

	// BrnNetworkGameResults.cpp:196
	void SetGameStats(const OnlineGameResults *, int32_t);

protected:
	// BrnNetworkGameResults.cpp:122
	virtual const char * GetPattern() const;

	// BrnNetworkGameResults.cpp:137
	virtual int32_t GetPatternLength() const;

	// BrnNetworkGameResults.cpp:152
	virtual uint32_t GetDataSize() const;

	// BrnNetworkGameResults.cpp:166
	virtual void * GetData();

	// BrnNetworkGameResults.cpp:180
	virtual const void * GetData() const;

private:
	// BrnNetworkGameResults.cpp:51
	void ClearGameData();

	// BrnNetworkGameResults.cpp:266
	BrnNetwork::GameResults::EEventType GameModeToEvent(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnNetworkGameResults.cpp:251
	int32_t TimeToInt32(Time);

public:
	virtual void ~GameResults();

}

// BrnNetworkGameResults.h:47
void BrnNetwork::GameResults::~GameResults() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkGameResults.h:47
void BrnNetwork::GameResults::GameResults() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

