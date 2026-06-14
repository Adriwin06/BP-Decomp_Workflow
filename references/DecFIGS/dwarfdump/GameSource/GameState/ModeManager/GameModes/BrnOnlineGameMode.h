// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct OnlineGameMode {
		// BrnOnlineGameMode.h:49
		extern const float32_t KF_ONLINE_TRAFFIC_DENSITY;

	}

}

// BrnOnlineGameMode.h:49
extern const float32_t KF_ONLINE_TRAFFIC_DENSITY;

// BrnOnlineGameMode.h:46
struct BrnGameState::OnlineGameMode : public BrnGameState::GameMode {
	// BrnOnlineGameMode.cpp:27
	extern const float32_t KF_ONLINE_TRAFFIC_DENSITY;

public:
	// BrnOnlineGameMode.cpp:50
	virtual void Construct(BrnGameState::ModeManager *);

	// BrnOnlineGameMode.cpp:166
	virtual CgsSystem::EFrameRateManagerType GetFrameRateType() const;

	// BrnOnlineGameMode.cpp:69
	virtual void SendEvent(BrnGameState::EGameModeEvent);

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct OnlineGameMode {
	public:
		OnlineGameMode();

		// Unknown accessibility
		// BrnOnlineGameMode.h:49
		extern const float32_t KF_ONLINE_TRAFFIC_DENSITY;

	}

}

// BrnOnlineGameMode.h:46
void BrnGameState::OnlineGameMode::OnlineGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

