// BrnCameraEffects.cpp:41
void BrnDirector::Camera::MotionBlurData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCameraEffects.cpp:118
void BrnDirector::Camera::CameraEffects::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BackgroundEffectRequest::Construct(/* parameters */);
}

// BrnCameraEffects.cpp:110
void BrnDirector::Camera::CameraEffects::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCameraEffects.cpp
void BrnDirector::Camera::MotionBlurData::Set(bool  lbIsActive, bool  lbIsExpensiveMotionBlur, float32_t  lfCarsBlendAmount, float32_t  lfWorldBlendAmount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
}

// BrnCameraEffects.cpp:70
void BrnDirector::Camera::MotionBlurData::Interpolate(const const MotionBlurData &  lLhs, const const MotionBlurData &  lRhs, float32_t  lfT) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCameraEffects.cpp:89
		MotionBlurData lTemp;

		rw::math::fpu::Lerp<float>(/* parameters */);
		rw::math::fpu::Lerp<float>(/* parameters */);
	}
	{
		// BrnCameraEffects.cpp:98
		MotionBlurData lTemp;

		rw::math::fpu::Lerp<float>(/* parameters */);
	}
	rw::math::fpu::Lerp<float>(/* parameters */);
}

// BrnCameraEffects.cpp:153
void BrnDirector::Camera::CameraEffects::Interpolate(const const CameraEffects &  lLhs, const const CameraEffects &  lRhs, float32_t  lfT) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnCameraEffects.cpp:155
	const CameraEffects lTemp;

	{
		// BrnCameraEffects.cpp:155
		CameraEffects lTemp;

	}
}

// BrnCameraEffects.cpp:31
// BrnCameraEffects.cpp:32
// BrnCameraEffects.cpp:29
