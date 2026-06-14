// BrnNearMissManager.cpp:52
void BrnWorld::NearMissManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNearMissManager.cpp:147
void BrnWorld::NearMissManager::AddNearTraffic(uint32_t  luEntityId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNearMissManager.cpp:98
void BrnWorld::NearMissManager::AddNearRaceCar(uint32_t  luRaceCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNearMissManager.cpp:182
void BrnWorld::NearMissManager::AddCheckedTraffic(uint32_t  luEntityId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNearMissManager.cpp:165
void BrnWorld::NearMissManager::AddContactedTraffic(uint32_t  luEntityId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNearMissManager.cpp:114
void BrnWorld::NearMissManager::AddContactedRaceCar(uint32_t  luRaceCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNearMissManager.cpp:84
void BrnWorld::NearMissManager::AddCrashedRaceCar(uint32_t  luRaceCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNearMissManager.cpp:131
void BrnWorld::NearMissManager::AddTakenDownRaceCar(uint32_t  luRaceCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNearMissManager.cpp:200
void BrnWorld::NearMissManager::AddCrashedTraffic(uint32_t  luEntityId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNearMissManager.cpp:218
void BrnWorld::NearMissManager::NearMissEvent(BrnWorld::ENearMissType  lNearMissType, uint32_t  luEntityId, OutputBuffer_PrePhysics::GameEventQueue *  lpEventQueue, BoostManager *  lpBoostManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BoostManager::OnNearMiss(/* parameters */);
	{
		// BrnNearMissManager.cpp:227
		NearMissEvent lEvent;

	}
}

// BrnNearMissManager.cpp:279
void BrnWorld::NearMissManager::Update(float32_t  lfTimeStep, OutputBuffer_PrePhysics::GameEventQueue *  lpEventQueue, BoostManager *  lpBoostManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNearMissManager.cpp:285
		NearMissChainInProgressEvent lEvent;

	}
	{
		// BrnNearMissManager.cpp:313
		uint32_t luPreviousIndex;

		{
			// BrnNearMissManager.cpp:315
			uint32_t luEntityId;

		}
	}
	{
		// BrnNearMissManager.cpp:350
		uint32_t luPreviousIndex;

		{
			// BrnNearMissManager.cpp:352
			uint32_t luEntityId;

		}
	}
	{
		// BrnNearMissManager.cpp:299
		NearMissChainCompleteEvent lNearMissCompleteEvent;

	}
}

// BrnNearMissManager.cpp:29
