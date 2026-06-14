// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnRoadRageModeScoring.cpp:25
	const float32_t KF_TIME_REMAINING_AFTER_TAKEDOWN;

	// BrnRoadRageModeScoring.cpp:28
	const uint32_t KU_TAKEDOWN_COVER_TIME = 3;

}

// BrnRoadRageModeScoring.cpp:144
void BrnGameState::RoadRageModeScoring::ClearData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRoadRageModeScoring.cpp:63
void BrnGameState::RoadRageModeScoring::Prepare(int32_t  liTargetNumTakedowns, uint16_t  luRoadRageExtensionTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRoadRageModeScoring.cpp:46
void BrnGameState::RoadRageModeScoring::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRoadRageModeScoring.cpp:88
void BrnGameState::RoadRageModeScoring::Update(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, float32_t  lfSimTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRoadRageModeScoring.cpp:112
void BrnGameState::RoadRageModeScoring::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRoadRageModeScoring.cpp:129
void BrnGameState::RoadRageModeScoring::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRoadRageModeScoring.cpp:170
void BrnGameState::RoadRageModeScoring::IncrementPlayerNumTakedowns(BrnGameState::ScoringSystem *  lpScoringSystem, Time &  lCurrentTime, InputBuffer::GameActionQueue *  lpOutputActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRageModeScoring.cpp:172
		HUDMessageRoadRageTimeExtensionAction lHUDMessageAction;

		// BrnRoadRageModeScoring.cpp:173
		float32_t lfTimeRemaining;

	}
	ScoringSystem::HasModeTimeExpired(/* parameters */);
	ScoringSystem::GetModeTimeRemaining(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	ScoringSystem::IncreaseTimeLimit(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::operator+=(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageRoadRageTimeExtensionAction>(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageRoadRageTimeExtensionAction>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnRoadRageModeScoring.cpp:188
		PlayerReachedRoadRageTarget lPlayerReachedRoadRageTarget;

		AddGameAction<BrnGameState::GameStateModuleIO::PlayerReachedRoadRageTarget>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

