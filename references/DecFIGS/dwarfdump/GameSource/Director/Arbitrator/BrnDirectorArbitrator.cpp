// BrnDirectorArbitrator.cpp:406
void BrnDirector::Arbitrator::UpdateCameraCycleControl(float32_t  lfTimestep, bool  lbCycleCameraHeld, const bool &  lrbCycleCameraInOut, const bool &  lrbChangedThisFrameOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDirectorArbitrator.cpp:394
void BrnDirector::Arbitrator::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDirectorArbitrator.cpp:452
void BrnDirector::Arbitrator::UpdateDebugCameras(const Camera &  lCameraInOut, const BehaviourManager &  lBehaviourManager, bool  lbCycleCamera, bool  lbChangedThisFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BehaviourHandle<BrnDirector::Camera::BehaviourDebugFlyWorld>::AttachTweaker(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourDebugFlyWorld>::GetCamera(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourDebugOrbitPlayer>::GetCamera(/* parameters */);
	Camera::BehaviourManager::DetachAllTweakers(/* parameters */);
	Camera::Behaviour::SetTweakerAttached(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourDebugOrbitPlayer>::AttachTweaker(/* parameters */);
}

// BrnDirectorArbitrator.cpp:26
void BrnDirector::Arbitrator::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim>::Construct(/* parameters */);
	Camera::BehaviourHelperIndex::operator=(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourDebugOrbitPlayer>::Construct(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourDebugFlyWorld>::Construct(/* parameters */);
	Camera::BehaviourHelperIndex::operator=(/* parameters */);
	Camera::BehaviourHelperIndex::operator=(/* parameters */);
}

// BrnDirectorArbitrator.cpp:66
void BrnDirector::Arbitrator::Update(bool  lbPaused, const Camera &  lCameraInOut, const BrnDirector::ArbStateSharedInfo &  lSharedInfo, bool  lbCycleCamera, bool  lbCycleCameraHeld) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SharedCameraContainer::SetUsingGameplayExternal(/* parameters */);
	SharedCameraContainer::SetLookbackOverride(/* parameters */);
	ArbitratorStateContainer::GetCurrentState(/* parameters */);
	Attrib::Gen::shotgroup::ShotList(/* parameters */);
	VehicleRef::SetToPlayer(/* parameters */);
	Camera::BehaviourIceAnim::SetUseCollisionPolicy(/* parameters */);
	Camera::BehaviourIceAnim::SetCollisionPolicyCanFail(/* parameters */);
	Camera::Behaviour::SetTimestepType(/* parameters */);
	Camera::BehaviourIceAnim::SetLooping(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim>::SetUpdatesDuringPause(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim>::Release(/* parameters */);
	SharedCameraContainer::GetGameplayExternal(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayExternal>::Get(/* parameters */);
	Camera::BehaviourGameplayExternal::SnapToCar(/* parameters */);
	Camera::CollisionPolicyAttachedToVehicle::ResetRadiusSmoothing(/* parameters */);
	Camera::CollisionPolicyAttachedToVehicle::ResetTrafficCollision(/* parameters */);
	Camera::CameraState::ClearFlag(/* parameters */);
	ArbitratorStateContainer::ChangeToState(/* parameters */);
	{
		// BrnDirectorArbitrator.cpp:108
		bool lbChangedThisFrame;

		SharedCameraContainer::SetLookbackOverride(/* parameters */);
		CycleNormalCamera(/* parameters */);
		ArbitratorStateContainer::GetCurrentState(/* parameters */);
		GetNormalCamera(/* parameters */);
		Camera::EnsureEffectIsStopped(/* parameters */);
		Camera::CameraEffects::ClearStartHookNameString(/* parameters */);
		ArbitratorStateContainer::GetCurrentState(/* parameters */);
		{
			// BrnDirectorArbitrator.cpp:199
			const float32_t kfBlurFactor;

			// BrnDirectorArbitrator.cpp:200
			const float32_t kfSlowDownRate;

			Camera::Camera::GetEffects(/* parameters */);
			rw::math::fpu::Lerp<float>(/* parameters */);
			Camera::CameraEffects::SetStartHookNameString(/* parameters */);
			Camera::CameraEffects::SetSimTimeScale(/* parameters */);
			Camera::DepthOfField::SetBlurriness(/* parameters */);
			DirectorOutputInterface::SetPauseRequest(/* parameters */);
		}
	}
	BehaviourHandle<BrnDirector::Camera::BehaviourDebugOrbitPlayer>::SetUpdatesDuringPause(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourDebugFlyWorld>::SetUpdatesDuringPause(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourDebugOrbitPlayer>::Release(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourDebugFlyWorld>::Release(/* parameters */);
	{
		// BrnDirectorArbitrator.cpp:273
		bool lbChangedThisFrame;

		Camera::Camera::GetEffects(/* parameters */);
		Camera::CameraEffects::SetStopHookNameString(/* parameters */);
	}
	ArbitratorStateContainer::GetCurrentState(/* parameters */);
	GetNormalCamera(/* parameters */);
	Camera::Camera::GetEffects(/* parameters */);
	Camera::CameraEffects::SetStartHookNameString(/* parameters */);
	Camera::Camera::GetEffects(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	Camera::CameraEffects::SetStopHookNameString(/* parameters */);
	Camera::CameraEffects::SetSimTimeScale(/* parameters */);
	Camera::DepthOfField::SetBlurriness(/* parameters */);
	DirectorOutputInterface::SetPauseRequest(/* parameters */);
	Camera::CameraEffects::SetStopHookNameString(/* parameters */);
	SharedCameraContainer::GetGameplayCamera(/* parameters */);
	Camera::CameraState::ClearFlag(/* parameters */);
	Camera::Camera::GetEffects(/* parameters */);
	SharedCameraContainer::GetGameplayExternal(/* parameters */);
	Camera::CameraEffects::SetStartHookNameString(/* parameters */);
	CgsContainers::BitArray<30u>::UnSetBit(/* parameters */);
	Camera::CameraEffects::ClearStopHookNameString(/* parameters */);
	Camera::CameraEffects::SetRequestedPostFX(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayExternal>::Get(/* parameters */);
	Camera::BehaviourGameplayExternal::SnapToCar(/* parameters */);
	GetNormalCamera(/* parameters */);
}

