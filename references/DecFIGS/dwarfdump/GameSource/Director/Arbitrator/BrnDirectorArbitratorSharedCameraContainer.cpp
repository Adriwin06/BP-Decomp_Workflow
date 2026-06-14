// BrnDirectorArbitratorSharedCameraContainer.cpp:76
void BrnDirector::SharedCameraContainer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDirectorArbitratorSharedCameraContainer.cpp:32
void BrnDirector::SharedCameraContainer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayExternal>::Construct(/* parameters */);
	Camera::BehaviourHelperIndex::operator=(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayBumper>::Construct(/* parameters */);
	Camera::BehaviourHelperIndex::operator=(/* parameters */);
}

// BrnDirectorArbitratorSharedCameraContainer.cpp:67
void BrnDirector::SharedCameraContainer::Release(const BrnDirector::ArbStateSharedInfo &  lSharedInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayExternal>::Release(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayBumper>::Release(/* parameters */);
}

// BrnDirectorArbitratorSharedCameraContainer.cpp:45
void BrnDirector::SharedCameraContainer::Prepare(const BrnDirector::ArbStateSharedInfo &  lSharedInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDirectorArbitratorSharedCameraContainer.cpp:47
		const const BehaviourParameterBank & lrBehaviourParameterBank;

	}
	Camera::BehaviourManager::GetBehaviourParameterBank(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayBumper>::Get(/* parameters */);
	Camera::BehaviourParameterBank::GetGameplayBumperCameraParamsForCar(/* parameters */);
	Camera::BehaviourGameplayBumper::SetParameters(/* parameters */);
	Camera::Behaviour::SetDebugParametersName(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayExternal>::Get(/* parameters */);
}

