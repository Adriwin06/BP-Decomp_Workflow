// BrnTrafficCheckManager.h:44
struct BrnWorld::TrafficCheckManager {
private:
	// BrnTrafficCheckManager.h:73
	int32_t miCurrentCheckChain;

	// BrnTrafficCheckManager.h:74
	float32_t mfTimeSinceLastCheck;

public:
	// BrnTrafficCheckManager.h:49
	void Construct();

	// BrnTrafficCheckManager.h:53
	bool Prepare();

	// BrnTrafficCheckManager.h:57
	bool Release();

	// BrnTrafficCheckManager.h:61
	void Destruct();

	// BrnTrafficCheckManager.h:69
	void Update(const GameEventQueue *, BrnGameState::GameStateModuleIO::GameEventQueue *, bool, float32_t);

}

