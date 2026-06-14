// BrnCameraReference.cpp:93
void BrnDirector::Camera::CameraReference::Setup(const BrnDirector::ICEWrapper *  lpIceWrapper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCameraReference.cpp:77
void BrnDirector::Camera::CameraReference::Setup(Camera &  lCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCameraReference.cpp:41
void BrnDirector::Camera::CameraReference::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCameraReference.cpp:172
void BrnDirector::Camera::CameraReference::GetCamera(const BrnDirector::Camera::BehaviourManager *  lpBehaviourController) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BehaviourManager::GetCameraFromBehaviour(/* parameters */);
	CgsContainers::ObjectPool<BrnDirector::Camera::BehaviourManager::BehaviourHelper,28,BrnDirector::Camera::BehaviourHelperIndex>::operator[](/* parameters */);
}

// BrnCameraReference.cpp:58
void BrnDirector::Camera::CameraReference::Setup(BehaviourHelperIndex  lBehaviourHelperIndex, const BrnDirector::Camera::BehaviourManager *  lpBehaviourController) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BehaviourManager::GetCameraFromBehaviour(/* parameters */);
	BehaviourHelperIndex::operator=(/* parameters */);
}

// BrnCameraReference.cpp:155
void BrnDirector::Camera::CameraReference::Release(const const BrnDirector::Camera::BehaviourControllerLockInterface &  lLockInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BehaviourControllerLockInterface::UnlockBehaviourForInterpolation(/* parameters */);
}

// BrnCameraReference.cpp:130
void BrnDirector::Camera::CameraReference::Unlock(const const BrnDirector::Camera::BehaviourControllerLockInterface &  lLockInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BehaviourControllerLockInterface::UnlockBehaviourForInterpolation(/* parameters */);
}

// BrnCameraReference.cpp:110
void BrnDirector::Camera::CameraReference::Prepare(const const BrnDirector::Camera::BehaviourControllerLockInterface &  lLockInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BehaviourControllerLockInterface::LockBehaviourForInterpolation(/* parameters */);
}

