// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnPursuitModeScoring.cpp:31
	const float32_t KF_MAX_SEPARATION_FOR_PURSUIT_MODE;

	// BrnPursuitModeScoring.cpp:32
	const float32_t KF_SEPARATION_FOR_PURSUIT_WARNING;

}

// BrnPursuitModeScoring.cpp:187
void BrnGameState::PursuitModeScoring::ClearData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPursuitModeScoring.cpp:50
void BrnGameState::PursuitModeScoring::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPursuitModeScoring.cpp:67
void BrnGameState::PursuitModeScoring::Prepare(int32_t  liRivalCarTotalDamage, EGlobalRaceCarIndex  lePursuedCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPursuitModeScoring.cpp:155
void BrnGameState::PursuitModeScoring::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPursuitModeScoring.cpp:172
void BrnGameState::PursuitModeScoring::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPursuitModeScoring.cpp:245
void BrnGameState::PursuitModeScoring::OnPlayerHitsRival(BrnPhysics::Vehicle::EImpactType  leImpactType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPursuitModeScoring.cpp:98
void BrnGameState::PursuitModeScoring::Update(const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *  lpGlobalRaceCarInterface, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPursuitModeScoring.cpp:100
		EGlobalRaceCarIndex lePlayerGlobalRaceCarIndex;

		// BrnPursuitModeScoring.cpp:101
		Vector3 lPlayerPos;

		// BrnPursuitModeScoring.cpp:102
		Vector3 lRivalPos;

		// BrnPursuitModeScoring.cpp:103
		Vector3 lDiff;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::GetPlayerGlobalRaceCarIndex(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::GetRaceCarPosition(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::GetRaceCarPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
}

// BrnPursuitModeScoring.cpp:208
void BrnGameState::PursuitModeScoring::OnPlayerDoesATakedown(BrnGameState::ScoringSystem *  lpScoringSystem, Time &  lCurrentTime, InputBuffer::GameActionQueue *  lpOutputActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPursuitModeScoring.cpp:230
		ShutdownAction lShutdownAction;

		AddGameAction<BrnGameState::GameStateModuleIO::ShutdownAction>(/* parameters */);
	}
}

