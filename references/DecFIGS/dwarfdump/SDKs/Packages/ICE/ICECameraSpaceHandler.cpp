// ICECameraSpaceHandler.cpp:32
void ICE::CameraSpaceHandler::Construct(const rw::math::vpu::Matrix44Affine &  lCarToWorld, const rw::math::vpu::Matrix44Affine &  lCar2ToWorld, const rw::math::vpu::Matrix44Affine &  lTrafficLightToWorld, const rw::math::vpu::Matrix44Affine &  lSceneToWorld, const rw::math::vpu::Matrix44Affine &  lImpactToWorld, const rw::math::vpu::Matrix44Affine &  lHeadingToWorld, const rw::math::vpu::Matrix44Affine &  lLooseHeadingToWorld, const rw::math::vpu::Matrix44Affine &  lHeading2ToWorld, const BehaviourHandle<BrnDirector::Camera::BehaviourGameplayExternal> *  lpGamePlayCam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
}

// ICECameraSpaceHandler.cpp:95
void ICE::CameraSpaceHandler::GetTakedownToWorld() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECameraSpaceHandler.cpp:103
void ICE::CameraSpaceHandler::GetReverseTakedownToWorld() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECameraSpaceHandler.cpp:112
void ICE::CameraSpaceHandler::GetTransformToWorld(ICE::eICESpace  leSpace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::GetMatrix44Affine_Identity(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::GetMatrix44Affine_Identity(/* parameters */);
	rw::math::vpu::GetVector3_ZAxis(/* parameters */);
	rw::math::vpu::GetVector3_YAxis(/* parameters */);
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayExternal>::GetCamera(/* parameters */);
	BrnDirector::Camera::Camera::GetTransform(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// ICECameraSpaceHandler.cpp:87
void ICE::CameraSpaceHandler::GetWorldOrientationMatrix(Matrix4 *  orientMat, uint8_t  space, uint8_t  avatar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
}

// ICECameraSpaceHandler.cpp:76
void ICE::CameraSpaceHandler::GetSpaceTransformationMatrix(Matrix4 *  transMat, uint8_t  space) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
}

// ICECameraSpaceHandler.cpp:51
void ICE::CameraSpaceHandler::TransformToWorld(const rw::math::vpu::Vector3  lPosition, ICE::eICESpace  lSpace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::TransformPoint(/* parameters */);
}

// ICECameraSpaceHandler.cpp:65
void ICE::CameraSpaceHandler::TransformToWorld(const rw::math::vpu::Vector3  lPosition, uint8_t  space, uint8_t  avatar, uint8_t  lag, uint8_t  bungee, float32_t  param) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

