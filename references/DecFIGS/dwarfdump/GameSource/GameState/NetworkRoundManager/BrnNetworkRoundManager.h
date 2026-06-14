// BrnNetworkRoundManager.h:43
struct BrnGameState::NetworkRoundManager {
private:
	// BrnNetworkRoundManager.h:110
	StartNetworkGameEvent mStartNetworkGameEvent;

	// BrnNetworkRoundManager.h:111
	StartNetworkRoundEvent mStartNetworkRoundEvent;

	// BrnNetworkRoundManager.h:112
	int32_t miRoundsRemaining;

	// BrnNetworkRoundManager.h:113
	int32_t miTotalRounds;

	// BrnNetworkRoundManager.h:114
	bool mbStartingGameDueToPlayerJoin;

public:
	// BrnNetworkRoundManager.h:48
	void Construct();

	// BrnNetworkRoundManager.h:52
	void Destruct();

	// BrnNetworkRoundManager.h:56
	bool Prepare();

	// BrnNetworkRoundManager.h:60
	bool Release();

	// BrnNetworkRoundManager.h:65
	void NetworkGameStarted(const StartNetworkGameEvent *);

	// BrnNetworkRoundManager.h:70
	void NetworkRoundStarted(const StartNetworkRoundEvent *);

	// BrnNetworkRoundManager.h:74
	void OnRoundStart();

	// BrnNetworkRoundManager.h:78
	void PreparedForMode();

	// BrnNetworkRoundManager.h:82
	const StartNetworkGameEvent * GetNetworkGameEvent() const;

	// BrnNetworkRoundManager.h:86
	const StartNetworkRoundEvent * GetNetworkRoundEvent() const;

	// BrnNetworkRoundManager.h:90
	int32_t GetCurrentRound() const;

	// BrnNetworkRoundManager.h:94
	int32_t GetTotalRounds() const;

	// BrnNetworkRoundManager.h:98
	bool IsLastRound();

	// BrnNetworkRoundManager.h:102
	bool IsRankedMatch();

	// BrnNetworkRoundManager.h:106
	bool GetStartingFreeburnLobbyDueToPlayerJoin();

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnNetworkRoundManager.h:28
	using GameStateModuleIO;

}

