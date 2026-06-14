// BrnPerlinShakeController.cpp:96
void BrnDirector::PerlinShakeController::GetMatrix(const Matrix44Affine &  lMatrixOut, float32_t  lfTime, float32_t  lfRollScale, float32_t  lfPitchScale, float32_t  lfYawScale, float32_t  lfRollFreqScale, float32_t  lfPitchFreqScale, float32_t  lfYawFreqScale, float32_t  lfShakeFrequency, float32_t  lfShakeAmplitude) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPerlinShakeController.cpp:98
		Matrix44Affine lTransform;

		// BrnPerlinShakeController.cpp:101
		float32_t lfShakeAmount;

		rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	}
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	{
		// BrnPerlinShakeController.cpp:112
		float32_t lfRollAmount;

		// BrnPerlinShakeController.cpp:113
		float32_t lfPitchAmount;

		// BrnPerlinShakeController.cpp:114
		float32_t lfYawAmount;

		// BrnPerlinShakeController.cpp:117
		Vector3 lRotationAngles;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
}

// BrnPerlinShakeController.cpp:46
void BrnDirector::PerlinShakeController::Update(Camera *  lpCamera, float32_t  lfTime, float32_t  lfRollScale, float32_t  lfPitchScale, float32_t  lfYawScale, float32_t  lfRollFreqScale, float32_t  lfPitchFreqScale, float32_t  lfYawFreqScale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPerlinShakeController.cpp:48
		float32_t lfShakeAmount;

		Camera::Camera::GetEffects(/* parameters */);
	}
	Camera::CameraEffects::GetShakeAmplitude(/* parameters */);
	{
		// BrnPerlinShakeController.cpp:59
		float32_t lfRollAmount;

		// BrnPerlinShakeController.cpp:60
		float32_t lfPitchAmount;

		// BrnPerlinShakeController.cpp:61
		float32_t lfYawAmount;

		// BrnPerlinShakeController.cpp:64
		Vector3 lRotationAngles;

		// BrnPerlinShakeController.cpp:68
		Matrix44Affine lTransform;

		rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		Camera::Camera::SetTransform(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	}
}

