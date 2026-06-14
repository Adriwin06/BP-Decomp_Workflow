// BrnLooker.cpp:46
void BrnDirector::Camera::Utils::Looker::Parameters::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnLooker.cpp:87
void BrnDirector::Camera::Utils::Looker::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnLooker.cpp:195
void BrnDirector::Camera::Utils::Looker::Zoom(const VecFloat  lTimeStep, Random  lRandom, const const BrnDirector::Camera::Utils::Looker::Parameters &  lParams, const Camera &  lCamera, const rw::math::vpu::Matrix44Affine &  lTarget, const rw::math::vpu::Vector3  lTargetVel, const AABBox  lAABB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLooker.cpp:197
		const Matrix44Affine & lCameraInOut;

		// BrnLooker.cpp:198
		float lfFOVInOut;

		// BrnLooker.cpp:200
		Vector3 lToTarget;

		// BrnLooker.cpp:201
		Vector3 lToTargetNormalized;

		// BrnLooker.cpp:202
		float32_t lDistanceToTarget;

		// BrnLooker.cpp:205
		float32_t lfIdealFOV;

		rw::math::vpu::NormalizeFast(/* parameters */);
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
	}
	rw::math::vpu::operator-(/* parameters */);
	Camera::GetFOV(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	GetFOVDegsFromZoom(/* parameters */);
	ClampToSensibleFOVDegs(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Abs<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::fpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	{
		// BrnLooker.cpp:282
		float32_t lfTargetIdealDifference;

		rw::math::fpu::Clamp<float>(/* parameters */);
		rw::math::fpu::Abs<float>(/* parameters */);
		rw::math::fpu::Clamp<float>(/* parameters */);
	}
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	{
		// BrnLooker.cpp:314
		float32_t lfTargetIdealDifference;

		// BrnLooker.cpp:315
		float32_t lfTargetActualDifference;

		rw::math::fpu::Abs<float>(/* parameters */);
		{
			// BrnLooker.cpp:343
			float32_t sfUnBlurRate;

			Camera::GetDepthOfField(/* parameters */);
			DepthOfField::SetBlurriness(/* parameters */);
		}
	}
	{
		// BrnLooker.cpp:349
		float32_t sfUnBlurRate;

		Camera::GetDepthOfField(/* parameters */);
		DepthOfField::SetBlurriness(/* parameters */);
		DepthOfField::GetBlurriness(/* parameters */);
	}
	Camera::GetDepthOfField(/* parameters */);
	DepthOfField::SetParams(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	Camera::SetFOV(/* parameters */);
	{
		// BrnLooker.cpp:303
		float32_t lfTargetActualDifference;

		rw::math::fpu::Abs<float>(/* parameters */);
	}
	{
		// BrnLooker.cpp:338
		float32_t sfBlurRate;

		rw::math::vpu::VecFloat::GetFloat(/* parameters */);
		rw::math::fpu::Max<float>(/* parameters */);
		Camera::GetDepthOfField(/* parameters */);
		DepthOfField::SetBlurriness(/* parameters */);
		DepthOfField::GetBlurriness(/* parameters */);
	}
	rw::math::fpu::Abs<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Abs<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	{
		// BrnLooker.cpp:224
		Vector2 lSizeOnScreen;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		GetFOVDegsToFitObjectToScreenArea(/* parameters */);
		rw::math::vpu::VecFloat::GetFloat(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX, VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::SqrtFast(/* parameters */);
		rw::math::vpu::SqrtFast(/* parameters */);
		rw::math::fpu::Tan(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::fpu::IsZero(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::GetFloat(/* parameters */);
		GetFOVDegsFromZoom(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
	}
	{
		// BrnLooker.cpp:235
		Vector2 lSizeOnScreen;

		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		GetFOVDegsToFitObjectToScreenSize(/* parameters */);
		rw::math::vpu::VecFloat::GetFloat(/* parameters */);
		rw::math::vpu::operator/<VectorAxisY, VectorAxisY>(/* parameters */);
		rw::math::vpu::operator/<VectorAxisX, VectorAxisX>(/* parameters */);
		{
			{
				{
				}
			}
		}
		{
			{
				{
				}
			}
		}
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::fpu::Tan(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::fpu::IsZero(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::GetFloat(/* parameters */);
		GetFOVDegsFromZoom(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
	}
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
}

// BrnLooker.cpp:134
void BrnDirector::Camera::Utils::Looker::Track(const VecFloat  lTimeStep, Random  lRandom, const const BrnDirector::Camera::Utils::Looker::Parameters &  lParams, const Camera &  lCamera, const rw::math::vpu::Matrix44Affine &  lTarget, const rw::math::vpu::Vector3  lTargetVel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLooker.cpp:136
		Matrix44Affine lLookAt;

		// BrnLooker.cpp:137
		VecFloat lSlerpAmount;

		// BrnLooker.cpp:138
		VecFloat lAngle;

	}
	{
		// BrnLooker.cpp:142
		const float32_t lfCosAngleTolerance;

		rw::math::fpu::Cos(/* parameters */);
		CreateAdjustedLookAt(/* parameters */);
		Camera::GetTransform(/* parameters */);
		{
		}
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Tan(/* parameters */);
		rw::math::vpu::GetVecFloat_Half(/* parameters */);
		rw::math::vpu::GetVecFloat_Two(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		vec_sel(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_nmsub(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		{
		}
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		vec_add(/* parameters */);
		vec_and(/* parameters */);
		vec_cts(/* parameters */);
		vec_ctf(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		std(/* parameters */);
		std(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Mult(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	}
	{
		// BrnLooker.cpp:172
		const rw::math::vpu::Vector3 lRotationAngles;

		Camera::GetTransform(/* parameters */);
		CreateAdjustedLookAt(/* parameters */);
		rw::math::vpu::GetVecFloat_Half(/* parameters */);
		{
		}
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Tan(/* parameters */);
		rw::math::vpu::GetVecFloat_Two(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		{
		}
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		vec_add(/* parameters */);
		vec_and(/* parameters */);
		vec_cts(/* parameters */);
		vec_ctf(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		std(/* parameters */);
		std(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Mult(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		CgsNumeric::Random::RandomVector(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
	}
}

// BrnLooker.cpp:110
void BrnDirector::Camera::Utils::Looker::Update(const VecFloat  lTimeStep, Random  lRandom, const const BrnDirector::Camera::Utils::Looker::Parameters &  lParams, const Camera &  lCamera, const rw::math::vpu::Matrix44Affine &  lTarget, const rw::math::vpu::Vector3  lTargetVel, const AABBox  lAABB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
}

