// BrnWorldRegion.h:27
namespace BrnWorld {
	// Declaration
	struct AirTimeManager {
		// BrnAirTimeManager.h:98
		enum EAirManagerState {
			E_AIR_STATE_CRASHING = 0,
			E_AIR_STATE_IN_BETWEEN_AIR = 1,
			E_AIR_STATE_IN_AIR = 2,
			E_AIR_STATE_NONE = 3,
			E_AIR_STATE_COUNT = 4,
		}

	}

}

// BrnAirTimeManager.h:70
struct BrnWorld::AirTimeManager {
private:
	// BrnAirTimeManager.h:108
	BrnWorld::AirTimeManager::EAirManagerState meState;

	// BrnAirTimeManager.h:110
	float32_t mfTimeSinceLastAir;

	// BrnAirTimeManager.h:111
	float32_t mfPreviousAirTime;

	// BrnAirTimeManager.h:112
	float32_t mfTotalAirTime;

public:
	// BrnAirTimeManager.h:75
	void Construct();

	// BrnAirTimeManager.h:79
	bool Prepare();

	// BrnAirTimeManager.h:83
	bool Release();

	// BrnAirTimeManager.h:87
	void Destruct();

	// BrnAirTimeManager.h:94
	void Update(const RaceCarState *, float32_t, BrnGameState::GameStateModuleIO::GameEventQueue *);

private:
	// BrnAirTimeManager.h:118
	void OutputAirEvent(BrnGameState::GameStateModuleIO::GameEventQueue *, float32_t);

}

