// BrnCamera2DRotationController.cpp:35
void BrnDirector::Camera::Utils::Camera2DRotationController::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector2::SetZero(/* parameters */);
}

// BrnCamera2DRotationController.cpp:55
void BrnDirector::Camera::Utils::Camera2DRotationController::Update(float32_t  lfTimestep, const rw::math::vpu::Vector2  lStick, bool  lbLookback, bool  lbPaused) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCamera2DRotationController.cpp:89
		float32_t lfNewRotation;

		rw::math::vpu::Magnitude(/* parameters */);
	}
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator>=(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	{
		// BrnCamera2DRotationController.cpp:93
		float32_t lrDot;

		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::fpu::Clamp<float>(/* parameters */);
		rw::math::fpu::Max<float>(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::fpu::ACos(/* parameters */);
		rw::math::vpu::operator< <VectorAxisX>(/* parameters */);
	}
}

// BrnCamera2DRotationController.cpp:23
// BrnCamera2DRotationController.cpp:24
// BrnCamera2DRotationController.cpp:25
// BrnCamera2DRotationController.cpp:26
