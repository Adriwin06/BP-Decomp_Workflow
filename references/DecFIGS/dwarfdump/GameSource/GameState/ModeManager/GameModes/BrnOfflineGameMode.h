// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnOfflineGameMode.h:34
	enum EAddingRivalsState {
		E_ADDING_RIVALS_STATE_WAITING_TO_ADD = 0,
		E_ADDING_RIVALS_STATE_PRESENTATION_DELAY = 1,
		E_ADDING_RIVALS_STATE_PRESENTATION_ACTIVE = 2,
		E_ADDING_RIVALS_STATE_NO_MORE_RIVALS = 3,
		E_ADDING_RIVALS_STATE_COUNT = 4,
	}

}

// BrnOfflineGameMode.h:58
struct BrnGameState::OfflineGameMode : public BrnGameState::GameMode {
private:
	// BrnOfflineGameMode.h:85
	bool mbDebugAlwaysRaceToSingleLocation;

	// BrnOfflineGameMode.h:86
	int32_t miDebugDesignIndexOfLandmarkToAlwaysRaceTo;

public:
	// BrnOfflineGameMode.cpp:50
	virtual void Construct(BrnGameState::ModeManager *);

	// BrnOfflineGameMode.cpp:69
	virtual CgsSystem::EFrameRateManagerType GetFrameRateType() const;

protected:
	// BrnOfflineGameMode.cpp:98
	uint32_t SelectRandomDestinations(const TriggerData *, Vector3, Vector3, float32_t, float32_t, LandmarkIndex *, uint16_t *, bool);

}

// BrnOfflineGameMode.h:58
void BrnGameState::OfflineGameMode::OfflineGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

