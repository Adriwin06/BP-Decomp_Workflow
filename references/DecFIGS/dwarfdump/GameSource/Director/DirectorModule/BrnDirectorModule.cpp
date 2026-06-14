// BrnDirectorModule.cpp:1114
using BrnGameState::GameStateModuleIO;

// BrnDirectorModule.cpp:2584
void BrnDirector::CameraFinaliser::Construct(const BrnDirector::DirectorResourceManager *  lpDirectorResourceManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDirectorModule.cpp:2604
void BrnDirector::CameraFinaliser::Update(const const BrnDirector::DirectorIO::InputBuffer &  lInputBuffer, const const GameState &  lGameState, const const BrnDirector::DirectorResourceManager &  lDirectorResourceManager, Camera *  lpActiveCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDirectorModule.cpp:2626
		const const cameradefaults & lDefaults;

		// BrnDirectorModule.cpp:2643
		float32_t lfFinalShakeAmount;

		// BrnDirectorModule.cpp:2662
		ShotContext lShotContext;

		DirectorIO::InputBuffer::GetTimerStatusInterface(/* parameters */);
		CgsSystem::TimerStatusInterface::GetGameTimerStatus(/* parameters */);
		DirectorResourceManager::GetCameraDefaults(/* parameters */);
		rw::math::fpu::Max<float>(/* parameters */);
		Attrib::Gen::cameradefaults::ImpactShakeScale(/* parameters */);
		Camera::Camera::GetEffects(/* parameters */);
		Camera::CameraEffects::SetShakeAmplitude(/* parameters */);
		DirectorIO::InputBuffer::GetTimerStatusInterface(/* parameters */);
	}
	Camera::CameraEffects::SetShakeType(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

