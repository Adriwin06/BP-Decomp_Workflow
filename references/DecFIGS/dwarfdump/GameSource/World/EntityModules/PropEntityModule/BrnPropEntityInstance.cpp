// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnPropEntityInstance.cpp:28
	const float32_t KF_PROP_ANIM_SPEED_SCALE;

	// BrnPropEntityInstance.cpp:29
	const float32_t KF_HALF_PROP_ANIM_SPEED_SCALE;

	// BrnPropEntityInstance.cpp:30
	const float32_t KF_ONE_OVER_64;

	// BrnPropEntityInstance.cpp:31
	const float32_t KF_ANIMATION_HYSTERESIS;

	// BrnPropEntityInstance.cpp:32
	const float32_t KF_MINIMUM_SPEED_FOR_EASE_IN;

	// BrnPropEntityInstance.cpp:33
	const float32_t KF_EASE_IN_START_PLACE;

}

// BrnPropEntityInstance.cpp:179
void BrnWorld::PropEntityInstance::CalculateEaseInSpeedModulation(float32_t  lTrueAngle, float32_t  lMinAngle, float32_t  lMaxAngle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityInstance.cpp:181
		float32_t lMidPoint;

		// BrnPropEntityInstance.cpp:182
		float32_t lRange;

		// BrnPropEntityInstance.cpp:183
		float32_t lOffset;

		// BrnPropEntityInstance.cpp:184
		float32_t lAttenuation;

		// BrnPropEntityInstance.cpp:185
		float32_t lNormalisedPos;

		rw::math::fpu::Abs<float>(/* parameters */);
		rw::math::fpu::Abs<float>(/* parameters */);
	}
}

// BrnPropEntityInstance.cpp:54
void BrnWorld::PropEntityInstance::UpdateConstraints(float32_t  lAngularSpeed, float32_t *  lpTrueAngle, float32_t *  lpMinAngle, float32_t *  lpMaxAngle, const PropEntityRotationParams *  lpRotationParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityInstance.cpp:57
		float_t lrCosAngle;

		// BrnPropEntityInstance.cpp:58
		float_t lrSecondaryAngle;

		// BrnPropEntityInstance.cpp:60
		float_t lrMinAngleToTest;

		// BrnPropEntityInstance.cpp:61
		float_t lrMaxAngleToTest;

		// BrnPropEntityInstance.cpp:62
		float_t lrTrueAngleToTest;

	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::fpu::ACos(/* parameters */);
	{
		// BrnPropEntityInstance.cpp:107
		float32_t lrMidPoint;

	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
}

// BrnPropEntityInstance.cpp:245
void BrnWorld::PropEntityInstance::Update(float_t  lrTimestep, const PropEntityRotationParams *  lpRotationParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityInstance.cpp:247
		SmoothStep::Vector3 lRotation;

		// BrnPropEntityInstance.cpp:248
		float32_t lAngularSpeed;

		// BrnPropEntityInstance.cpp:249
		Matrix44Affine lRotationMatrix;

		// BrnPropEntityInstance.cpp:250
		Vector3 lTempPosition;

		{
			// BrnPropEntityInstance.cpp:265
			float32_t lTrueAngle;

			// BrnPropEntityInstance.cpp:266
			float32_t lMinAngle;

			// BrnPropEntityInstance.cpp:267
			float32_t lMaxAngle;

		}
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::RotateAroundZAxis(/* parameters */);
		vec_add(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_sel(/* parameters */);
		vec_and(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_nmsub(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_add(/* parameters */);
		vec_and(/* parameters */);
		vec_cts(/* parameters */);
		vec_ctf(/* parameters */);
		vec_and(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
		vec_xor(/* parameters */);
		vec_sel(/* parameters */);
		vec_xor(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::RotateAroundYAxis(/* parameters */);
	vec_add(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_sel(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::RotateAroundXAxis(/* parameters */);
	vec_add(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_sel(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
}

