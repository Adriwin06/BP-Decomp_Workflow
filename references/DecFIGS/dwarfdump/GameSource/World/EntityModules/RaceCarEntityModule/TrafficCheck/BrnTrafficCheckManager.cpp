// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnTrafficCheckManager.cpp:25
	const float32_t KF_TIME_MAX_TIME_BETWEEN_CHECKS;

}

// BrnTrafficCheckManager.cpp:41
void BrnWorld::TrafficCheckManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficCheckManager.cpp:55
void BrnWorld::TrafficCheckManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficCheckManager.cpp:71
void BrnWorld::TrafficCheckManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficCheckManager.cpp:87
void BrnWorld::TrafficCheckManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficCheckManager.cpp:105
void BrnWorld::TrafficCheckManager::Update(const GameEventQueue *  lpInput, BrnGameState::GameStateModuleIO::GameEventQueue *  lpOutput, bool  lbLocalPlayerCrashing, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficCheckManager.cpp:107
		const CgsModule::Event * lpEvent;

		// BrnTrafficCheckManager.cpp:108
		int32_t liEventSize;

		// BrnTrafficCheckManager.cpp:109
		int32_t liEventType;

	}
	CgsModule::VariableEventQueue<1536,16>::GetFirstEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnTrafficCheckManager.cpp:148
		TrafficCheckingChainEvent lEvent;

	}
}

