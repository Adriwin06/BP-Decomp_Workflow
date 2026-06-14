// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnPaybackManager.h:47
	using GameStateModuleIO;

	// BrnPaybackManager.h:48
	using BrnNetwork::BrnNetworkModuleIO;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnPaybackManager.h:47
	using GameStateModuleIO;

	// BrnPaybackManager.h:48
	using BrnNetwork::BrnNetworkModuleIO;

	// Declaration
	struct PaybackManager {
		// BrnPaybackManager.h:121
		enum EPaybackAggressorState {
			E_PAYBACK_AGGRESSOR_STATE_IDLE = 0,
			E_PAYBACK_AGGRESSOR_STATE_WAIT_AWARD_PAYBACK = 1,
			E_PAYBACK_AGGRESSOR_STATE_AWARD_DT = 2,
			E_PAYBACK_AGGRESSOR_STATE_READY_TO_TRIGGER = 3,
			E_PAYBACK_AGGRESSOR_STATE_YOU_TRIGGERED_DT = 4,
		}

		// BrnPaybackManager.h:139
		enum EPaybackVictimState {
			E_PAYBACK_VICTIM_STATE_IDLE = 0,
			E_PAYBACK_VICTIM_STATE_TRIGGERED_ON_YOU = 1,
			E_PAYBACK_VICTIM_STATE_ACTIVE = 2,
			E_PAYBACK_VICTIM_STATE_YOU_CRASHED = 3,
			E_PAYBACK_VICTIM_STATE_YOU_SURVIVED = 4,
		}

	}

}

// BrnPaybackManager.h:64
struct BrnGameState::PaybackManager {
private:
	// BrnPaybackManager.h:150
	TimerStatusInterface mTimerStatusInterface;

	// BrnPaybackManager.h:151
	GameStateToNetworkInterface::DirtyTrickQueue mDirtyTrickOutputQueue;

	// BrnPaybackManager.h:152
	DirtyTrickEvent mEvent;

	// BrnPaybackManager.h:153
	Random mRdmNumGenerator;

	// BrnPaybackManager.h:154
	EActiveRaceCarIndex mePaybackAggressorRaceCarIndex;

	// BrnPaybackManager.h:155
	EActiveRaceCarIndex mePaybackVictimRaceCarIndex;

	// BrnPaybackManager.h:156
	float32_t mfCountdownTimer;

	// BrnPaybackManager.h:157
	float32_t mfPaybackAggTimer;

	// BrnPaybackManager.h:158
	float32_t mfPaybackVictimTimer;

	// BrnPaybackManager.h:159
	BrnNetwork::EPaybackType meActiveDirtyTrickType;

	// BrnPaybackManager.h:160
	BrnNetwork::EPaybackType meAwardedDirtyTrick;

	// BrnPaybackManager.h:161
	BrnGameState::PaybackManager::EPaybackAggressorState mePaybackAggressorState;

	// BrnPaybackManager.h:162
	BrnGameState::PaybackManager::EPaybackVictimState mePaybackVictimState;

	// BrnPaybackManager.h:163
	bool mbDirtyTrickButtonDown;

	// BrnPaybackManager.h:164
	bool mbDirtyTrickButtonWasDown;

	// BrnPaybackManager.h:165
	bool mbPaybackAwarded;

	// BrnPaybackManager.h:166
	BrnGameState::GameStateModule * mpGameStateModule;

public:
	// BrnPaybackManager.h:70
	void Construct(BrnGameState::GameStateModule *);

	// BrnPaybackManager.h:74
	bool Prepare();

	// BrnPaybackManager.h:78
	bool Release();

	// BrnPaybackManager.h:82
	void Destruct();

	// BrnPaybackManager.h:90
	void Update(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, const VehicleOutputInterface *, const InputBuffer::TakedownEventQueue *, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnPaybackManager.h:94
	void OnRoundStart();

	// BrnPaybackManager.h:99
	void OnRoundEnd(bool);

	// BrnPaybackManager.h:103
	void ProcessPaybackTriggerableEvent();

	// BrnPaybackManager.h:106
	void SetDirtyTrickButtonState(bool);

	// BrnPaybackManager.h:109
	void SetTimerInterface(const TimerStatusInterface *);

private:
	// BrnPaybackManager.h:170
	void ResetState();

	// BrnPaybackManager.h:177
	void ProcessTakedownEvents(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, const InputBuffer::TakedownEventQueue *, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnPaybackManager.h:182
	void ProcessDirtyTrickEventQueue(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnPaybackManager.h:190
	void SendNetworkDirtyTrickMessage(EActiveRaceCarIndex, EActiveRaceCarIndex, BrnNetwork::EPaybackType, BrnNetwork::EDirtyTrickStatus);

	// BrnPaybackManager.h:198
	void DirtyTrickAwarded(BrnGameState::GameStateModuleIO::OutputBuffer *, EActiveRaceCarIndex, EActiveRaceCarIndex, BrnNetwork::EPaybackType);

	// BrnPaybackManager.h:206
	void DirtyTrickTriggered(BrnGameState::GameStateModuleIO::OutputBuffer *, EActiveRaceCarIndex, EActiveRaceCarIndex, BrnNetwork::EPaybackType);

	// BrnPaybackManager.h:215
	void DirtyTrickEnding(BrnGameState::GameStateModuleIO::OutputBuffer *, EActiveRaceCarIndex, EActiveRaceCarIndex, BrnNetwork::EPaybackType, bool);

	// BrnPaybackManager.h:220
	void ShowDTAvailableHudNotification(bool);

	// BrnPaybackManager.h:223
	void StartCountdown();

	// BrnPaybackManager.h:226
	void UpdateCountdown();

	// BrnPaybackManager.h:229
	bool IsCountdownComplete();

	// BrnPaybackManager.h:232
	void RemoveCountdown();

	// BrnPaybackManager.h:237
	void ChangeState(BrnGameState::PaybackManager::EPaybackAggressorState);

	// BrnPaybackManager.h:242
	void ChangeState(BrnGameState::PaybackManager::EPaybackVictimState);

	// BrnPaybackManager.h:246
	void UpdateFSMTimers();

	// BrnPaybackManager.h:255
	void HandleWaitingToAwardPayback(const VehicleOutputInterface *);

	// BrnPaybackManager.h:262
	void HandleAwardingPayback(BrnGameState::GameStateModuleIO::OutputBuffer *, const VehicleOutputInterface *, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnPaybackManager.h:267
	void HandleHavingPayback(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnPaybackManager.h:272
	void HandleTriggeringPayback(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnPaybackManager.h:278
	void HandleReceivingPayback(BrnGameState::GameStateModuleIO::OutputBuffer *, const VehicleOutputInterface *);

	// BrnPaybackManager.h:283
	void HandleActivePayback(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnPaybackManager.h:288
	void HandleCrashDueToPayback(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnPaybackManager.h:293
	void HandleSurvivingPayback(BrnGameState::GameStateModuleIO::OutputBuffer *);

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct PaybackManager {
		// BrnPaybackManager.h:121
		enum EPaybackAggressorState {
			E_PAYBACK_AGGRESSOR_STATE_IDLE = 0,
			E_PAYBACK_AGGRESSOR_STATE_WAIT_AWARD_PAYBACK = 1,
			E_PAYBACK_AGGRESSOR_STATE_AWARD_DT = 2,
			E_PAYBACK_AGGRESSOR_STATE_READY_TO_TRIGGER = 3,
			E_PAYBACK_AGGRESSOR_STATE_YOU_TRIGGERED_DT = 4,
		}

		// BrnPaybackManager.h:139
		enum EPaybackVictimState {
			E_PAYBACK_VICTIM_STATE_IDLE = 0,
			E_PAYBACK_VICTIM_STATE_TRIGGERED_ON_YOU = 1,
			E_PAYBACK_VICTIM_STATE_ACTIVE = 2,
			E_PAYBACK_VICTIM_STATE_YOU_CRASHED = 3,
			E_PAYBACK_VICTIM_STATE_YOU_SURVIVED = 4,
		}

	}

}

