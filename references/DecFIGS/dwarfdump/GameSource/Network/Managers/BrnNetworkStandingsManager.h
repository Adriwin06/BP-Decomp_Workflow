// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct StandingsManager {
		// BrnNetworkStandingsManager.h:183
		enum ECountDownState {
			E_COUNTDOWN_STATE_WAITING_FOR_A_PLAYER_TO_FINISH = 0,
			E_COUNTDOWN_STATE_TIMING_OUT = 1,
			E_COUNTDOWN_STATE_SHOWING_SUMMARY = 2,
			E_COUNTDOWN_WAITING_FOR_ROUND_START = 3,
			E_COUNTDOWN_STATE_COUNT = 4,
		}

		// BrnNetworkStandingsManager.h:193
		enum EStandingsEvent {
			E_STANDINGS_EVENT_REMOTE_RESULTS_RECIEVED = 0,
			E_STANDINGS_EVENT_LOCAL_PLAYER_CROSSES_FINISH_LINE = 1,
			E_STANDINGS_EVENT_TIMEOUT = 2,
			E_STANDINGS_EVENT_COUNT = 3,
		}

	}

}

// BrnNetworkStandingsManager.h:61
struct BrnNetwork::StandingsData {
	// BrnNetworkStandingsManager.h:64
	BrnNetwork::PlayerFinishedRoundMessage mPlayerFinishedRoundMessageSend;

	// BrnNetworkStandingsManager.h:65
	BrnNetwork::PlayerFinishedRoundMessage mPlayerFinishedRoundMessageRecv;

	// BrnNetworkStandingsManager.h:67
	Time mFinishTime;

	// BrnNetworkStandingsManager.h:69
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

	// BrnNetworkStandingsManager.h:70
	RoadRulesRecvData::NetworkPlayerID mEliminatorNetworkPlayerID;

	// BrnNetworkStandingsManager.h:72
	float_t mfDistanceFromFinish;

	// BrnNetworkStandingsManager.h:73
	int32_t miEliminations;

	// BrnNetworkStandingsManager.h:75
	bool mbTimedOut;

}

// BrnNetworkStandingsManager.h:87
struct BrnNetwork::StandingsManager {
private:
	// BrnNetworkStandingsManager.h:202
	StandingsData[8] maStandingsData;

	// BrnNetworkStandingsManager.h:203
	float32_t mfCountDownTimer;

	// BrnNetworkStandingsManager.h:204
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkStandingsManager.h:205
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkStandingsManager.h:206
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkStandingsManager.h:207
	BrnNetwork::StandingsManager::ECountDownState meCountdownState;

	// BrnNetworkStandingsManager.h:208
	bool mbLocalPlayerFinished;

public:
	// BrnNetworkStandingsManager.h:94
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::TimeManager *);

	// BrnNetworkStandingsManager.h:98
	bool Prepare();

	// BrnNetworkStandingsManager.h:102
	bool Release();

	// BrnNetworkStandingsManager.h:106
	void Destruct();

	// BrnNetworkStandingsManager.h:111
	void Update(bool);

	// BrnNetworkStandingsManager.h:116
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkStandingsManager.h:121
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkStandingsManager.h:125
	void Disconnected();

	// BrnNetworkStandingsManager.h:129
	void OnGameStart();

	// BrnNetworkStandingsManager.h:133
	void OnRoundStart();

	// BrnNetworkStandingsManager.h:137
	void OnRoundFinish();

	// BrnNetworkStandingsManager.h:141
	void OnGameFinish();

	// BrnNetworkStandingsManager.h:145
	void OnLeaveGame();

	// BrnNetworkStandingsManager.h:149
	void SendPlayerFinishedRoundMessage();

	// BrnNetworkStandingsManager.h:154
	void GetReceivedPlayerFinishedRoundMessages(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkStandingsManager.h:157
	bool HasCountdownFinished() const;

	// BrnNetworkStandingsManager.h:161
	Time GetFinishTime(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkStandingsManager.h:167
	void HandlePlayerFinishedMode(RoadRulesRecvData::NetworkPlayerID, const FinishedModeAction *);

	// BrnNetworkStandingsManager.h:171
	StandingsData * GetStandingsDataEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkStandingsManager.h:175
	void ClearStandingsData();

	// BrnNetworkStandingsManager.h:179
	void EnsureCountdownTimerStartedOnLocalPlayerDisconnect();

private:
	// BrnNetworkStandingsManager.h:211
	int32_t CountRecievedFinishTimes();

	// BrnNetworkStandingsManager.h:214
	bool HasSomeoneTimedOut();

	// BrnNetworkStandingsManager.h:219
	void SetState(BrnNetwork::StandingsManager::ECountDownState);

	// BrnNetworkStandingsManager.h:224
	void HandleStandingsEvent(BrnNetwork::StandingsManager::EStandingsEvent);

	// BrnNetworkStandingsManager.h:231
	void _RoundFinishedMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkStandingsManager.h:240
	void _RoundFinishedMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

}

// BrnNetworkStandingsManager.h:61
struct BrnNetwork::StandingsData {
	// BrnNetworkStandingsManager.h:64
	BrnNetwork::PlayerFinishedRoundMessage mPlayerFinishedRoundMessageSend;

	// BrnNetworkStandingsManager.h:65
	BrnNetwork::PlayerFinishedRoundMessage mPlayerFinishedRoundMessageRecv;

	// BrnNetworkStandingsManager.h:67
	Time mFinishTime;

	// BrnNetworkStandingsManager.h:69
	GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

	// BrnNetworkStandingsManager.h:70
	GuiEventNetworkLaunching::NetworkPlayerID mEliminatorNetworkPlayerID;

	// BrnNetworkStandingsManager.h:72
	float_t mfDistanceFromFinish;

	// BrnNetworkStandingsManager.h:73
	int32_t miEliminations;

	// BrnNetworkStandingsManager.h:75
	bool mbTimedOut;

}

// BrnNetworkStandingsManager.h:87
struct BrnNetwork::StandingsManager {
private:
	// BrnNetworkStandingsManager.h:202
	StandingsData[8] maStandingsData;

	// BrnNetworkStandingsManager.h:203
	float32_t mfCountDownTimer;

	// BrnNetworkStandingsManager.h:204
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkStandingsManager.h:205
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkStandingsManager.h:206
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkStandingsManager.h:207
	BrnNetwork::StandingsManager::ECountDownState meCountdownState;

	// BrnNetworkStandingsManager.h:208
	bool mbLocalPlayerFinished;

public:
	// BrnNetworkStandingsManager.h:94
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::TimeManager *);

	// BrnNetworkStandingsManager.h:98
	bool Prepare();

	// BrnNetworkStandingsManager.h:102
	bool Release();

	// BrnNetworkStandingsManager.h:106
	void Destruct();

	// BrnNetworkStandingsManager.h:111
	void Update(bool);

	// BrnNetworkStandingsManager.h:116
	void AddPlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkStandingsManager.h:121
	void RemovePlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkStandingsManager.h:125
	void Disconnected();

	// BrnNetworkStandingsManager.h:129
	void OnGameStart();

	// BrnNetworkStandingsManager.h:133
	void OnRoundStart();

	// BrnNetworkStandingsManager.h:137
	void OnRoundFinish();

	// BrnNetworkStandingsManager.h:141
	void OnGameFinish();

	// BrnNetworkStandingsManager.h:145
	void OnLeaveGame();

	// BrnNetworkStandingsManager.h:149
	void SendPlayerFinishedRoundMessage();

	// BrnNetworkStandingsManager.h:154
	void GetReceivedPlayerFinishedRoundMessages(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkStandingsManager.h:157
	bool HasCountdownFinished() const;

	// BrnNetworkStandingsManager.h:161
	Time GetFinishTime(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkStandingsManager.h:167
	void HandlePlayerFinishedMode(GuiEventNetworkLaunching::NetworkPlayerID, const FinishedModeAction *);

	// BrnNetworkStandingsManager.h:171
	StandingsData * GetStandingsDataEntry(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkStandingsManager.h:175
	void ClearStandingsData();

	// BrnNetworkStandingsManager.h:179
	void EnsureCountdownTimerStartedOnLocalPlayerDisconnect();

private:
	// BrnNetworkStandingsManager.h:211
	int32_t CountRecievedFinishTimes();

	// BrnNetworkStandingsManager.h:214
	bool HasSomeoneTimedOut();

	// BrnNetworkStandingsManager.h:219
	void SetState(BrnNetwork::StandingsManager::ECountDownState);

	// BrnNetworkStandingsManager.h:224
	void HandleStandingsEvent(BrnNetwork::StandingsManager::EStandingsEvent);

	// BrnNetworkStandingsManager.h:231
	void _RoundFinishedMessageArrivedCallback(CgsNetwork::ReliableMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnNetworkStandingsManager.h:240
	void _RoundFinishedMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct StandingsManager {
		// BrnNetworkStandingsManager.h:183
		enum ECountDownState {
			E_COUNTDOWN_STATE_WAITING_FOR_A_PLAYER_TO_FINISH = 0,
			E_COUNTDOWN_STATE_TIMING_OUT = 1,
			E_COUNTDOWN_STATE_SHOWING_SUMMARY = 2,
			E_COUNTDOWN_WAITING_FOR_ROUND_START = 3,
			E_COUNTDOWN_STATE_COUNT = 4,
		}

		// BrnNetworkStandingsManager.h:193
		enum EStandingsEvent {
			E_STANDINGS_EVENT_REMOTE_RESULTS_RECIEVED = 0,
			E_STANDINGS_EVENT_LOCAL_PLAYER_CROSSES_FINISH_LINE = 1,
			E_STANDINGS_EVENT_TIMEOUT = 2,
			E_STANDINGS_EVENT_COUNT = 3,
		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct StandingsManager {
		// BrnNetworkStandingsManager.h:183
		enum ECountDownState {
			E_COUNTDOWN_STATE_WAITING_FOR_A_PLAYER_TO_FINISH = 0,
			E_COUNTDOWN_STATE_TIMING_OUT = 1,
			E_COUNTDOWN_STATE_SHOWING_SUMMARY = 2,
			E_COUNTDOWN_WAITING_FOR_ROUND_START = 3,
			E_COUNTDOWN_STATE_COUNT = 4,
		}

		// BrnNetworkStandingsManager.h:193
		enum EStandingsEvent {
			E_STANDINGS_EVENT_REMOTE_RESULTS_RECIEVED = 0,
			E_STANDINGS_EVENT_LOCAL_PLAYER_CROSSES_FINISH_LINE = 1,
			E_STANDINGS_EVENT_TIMEOUT = 2,
			E_STANDINGS_EVENT_COUNT = 3,
		}

	}

}

// BrnNetworkStandingsManager.h:61
struct BrnNetwork::StandingsData {
	// BrnNetworkStandingsManager.h:64
	BrnNetwork::PlayerFinishedRoundMessage mPlayerFinishedRoundMessageSend;

	// BrnNetworkStandingsManager.h:65
	BrnNetwork::PlayerFinishedRoundMessage mPlayerFinishedRoundMessageRecv;

	// BrnNetworkStandingsManager.h:67
	Time mFinishTime;

	// BrnNetworkStandingsManager.h:69
	AggressiveMoveData::NetworkPlayerID mPlayerID;

	// BrnNetworkStandingsManager.h:70
	AggressiveMoveData::NetworkPlayerID mEliminatorNetworkPlayerID;

	// BrnNetworkStandingsManager.h:72
	float_t mfDistanceFromFinish;

	// BrnNetworkStandingsManager.h:73
	int32_t miEliminations;

	// BrnNetworkStandingsManager.h:75
	bool mbTimedOut;

}

// BrnNetworkStandingsManager.h:87
struct BrnNetwork::StandingsManager {
private:
	// BrnNetworkStandingsManager.h:202
	StandingsData[8] maStandingsData;

	// BrnNetworkStandingsManager.h:203
	float32_t mfCountDownTimer;

	// BrnNetworkStandingsManager.h:204
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkStandingsManager.h:205
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkStandingsManager.h:206
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkStandingsManager.h:207
	BrnNetwork::StandingsManager::ECountDownState meCountdownState;

	// BrnNetworkStandingsManager.h:208
	bool mbLocalPlayerFinished;

public:
	// BrnNetworkStandingsManager.h:94
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::TimeManager *);

	// BrnNetworkStandingsManager.h:98
	bool Prepare();

	// BrnNetworkStandingsManager.h:102
	bool Release();

	// BrnNetworkStandingsManager.h:106
	void Destruct();

	// BrnNetworkStandingsManager.h:111
	void Update(bool);

	// BrnNetworkStandingsManager.h:116
	void AddPlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkStandingsManager.h:121
	void RemovePlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkStandingsManager.h:125
	void Disconnected();

	// BrnNetworkStandingsManager.h:129
	void OnGameStart();

	// BrnNetworkStandingsManager.h:133
	void OnRoundStart();

	// BrnNetworkStandingsManager.h:137
	void OnRoundFinish();

	// BrnNetworkStandingsManager.h:141
	void OnGameFinish();

	// BrnNetworkStandingsManager.h:145
	void OnLeaveGame();

	// BrnNetworkStandingsManager.h:149
	void SendPlayerFinishedRoundMessage();

	// BrnNetworkStandingsManager.h:154
	void GetReceivedPlayerFinishedRoundMessages(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkStandingsManager.h:157
	bool HasCountdownFinished() const;

	// BrnNetworkStandingsManager.h:161
	Time GetFinishTime(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkStandingsManager.h:167
	void HandlePlayerFinishedMode(AggressiveMoveData::NetworkPlayerID, const FinishedModeAction *);

	// BrnNetworkStandingsManager.h:171
	StandingsData * GetStandingsDataEntry(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkStandingsManager.h:175
	void ClearStandingsData();

	// BrnNetworkStandingsManager.h:179
	void EnsureCountdownTimerStartedOnLocalPlayerDisconnect();

private:
	// BrnNetworkStandingsManager.h:211
	int32_t CountRecievedFinishTimes();

	// BrnNetworkStandingsManager.h:214
	bool HasSomeoneTimedOut();

	// BrnNetworkStandingsManager.h:219
	void SetState(BrnNetwork::StandingsManager::ECountDownState);

	// BrnNetworkStandingsManager.h:224
	void HandleStandingsEvent(BrnNetwork::StandingsManager::EStandingsEvent);

	// BrnNetworkStandingsManager.h:231
	void _RoundFinishedMessageArrivedCallback(CgsNetwork::ReliableMessage *, AggressiveMoveData::NetworkPlayerID, void *);

	// BrnNetworkStandingsManager.h:240
	// Declaration
	void _RoundFinishedMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, AggressiveMoveData::NetworkPlayerID, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkStandingsManager.cpp:669
		using namespace CgsDev::Message;

	}

}

