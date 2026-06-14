// BrnCameraSphericalRotationController.cpp:59
void BrnDirector::Camera::Utils::CameraSphericalRotationController::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	SmoothMover::Construct(/* parameters */);
}

// BrnCameraSphericalRotationController.cpp:83
void BrnDirector::Camera::Utils::CameraSphericalRotationController::Update(float32_t  lfTimestep, const rw::math::vpu::Vector2  lStick, bool  lbLookback, bool  lbPaused, float32_t  lfMinPitch, float32_t  lfMaxPitch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCameraSphericalRotationController.cpp:85
		BrnDirector::Camera::Utils::SmoothMover::Parameters lPitchMoverParams;

	}
	rw::math::fpu::IsValid(/* parameters */);
	rw::math::fpu::IsNaN(/* parameters */);
	{
		// BrnCameraSphericalRotationController.cpp:110
		const float lfYawControlLerpAmount;

		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::Abs<VectorAxisX>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisY>::GetFloat(/* parameters */);
	rw::math::fpu::IsZero(/* parameters */);
	{
		// BrnCameraSphericalRotationController.cpp:137
		float32_t lfOldYawDegs;

		// BrnCameraSphericalRotationController.cpp:138
		float32_t lfReturnRateBlend;

		rw::math::fpu::Lerp<float>(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::Abs<VectorAxisX>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::GetFloat(/* parameters */);
	}
	{
		// BrnCameraSphericalRotationController.cpp:143
		float32_t lfAdjustedYawSpeed;

	}
	{
		// BrnCameraSphericalRotationController.cpp:98
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::fpu::Abs<float>(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Abs<float>(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
}

// BrnCameraSphericalRotationController.cpp:47
// BrnCameraSphericalRotationController.cpp:48
// BrnCameraSphericalRotationController.cpp:38
// BrnCameraSphericalRotationController.cpp:39
// BrnCameraSphericalRotationController.cpp:40
// BrnCameraSphericalRotationController.cpp:41
// BrnCameraSphericalRotationController.cpp:42
// BrnCameraSphericalRotationController.cpp:43
// BrnCameraSphericalRotationController.cpp:45
// BrnCameraSphericalRotationController.cpp:46
// BrnCameraSphericalRotationController.cpp:49
// BrnCameraSphericalRotationController.cpp:50
// BrnCameraSphericalRotationController.cpp:52
