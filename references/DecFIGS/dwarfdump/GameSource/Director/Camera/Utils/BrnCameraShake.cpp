// BrnCameraShake.cpp:36
void BrnDirector::Camera::Utils::CameraShake::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCameraShake.cpp:143
void BrnDirector::Camera::Utils::CameraImpactEffect::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCameraShake.cpp:51
void BrnDirector::Camera::Utils::CameraShake::Parameters::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCameraShake.cpp:156
void BrnDirector::Camera::Utils::CameraImpactEffect::Parameters::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCameraShake.cpp:203
void BrnDirector::Camera::Utils::CameraShakeICEController::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNumeric::Random::Construct(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
}

// BrnCameraShake.cpp:72
void BrnDirector::Camera::Utils::CameraShake::Update(const Matrix44Affine &  lMatrixInOut, const const CameraShake::Parameters &  lParameters, const Random &  lRandom, float32_t  lfTimestep, float32_t  lfEffectScale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCameraShake.cpp:74
		VecFloat lDegsToRads;

		// BrnCameraShake.cpp:75
		VecFloat lTimestep;

		// BrnCameraShake.cpp:76
		Vector3 lShakeAngles;

		// BrnCameraShake.cpp:98
		Vector3 lCurrentWobbleAngles;

		// BrnCameraShake.cpp:99
		Vector3 lCurrentWobbleVelocity;

		// BrnCameraShake.cpp:101
		Vector3 lJitterMagnitude;

		// BrnCameraShake.cpp:102
		Vector3 lJitter;

		// BrnCameraShake.cpp:103
		VecFloat lEffectScale;

		// BrnCameraShake.cpp:129
		Matrix44Affine lTransform;

		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	CgsNumeric::Random::RandomVector(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	{
	}
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
}

// BrnCameraShake.cpp:182
void BrnDirector::Camera::Utils::CameraImpactEffect::Update(const Camera &  lCamera, const const CameraImpactEffect::Parameters &  lParameters, const Random &  lRandom, float32_t  lfTimestep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCameraShake.cpp:233
void BrnDirector::Camera::Utils::CameraShakeICEController::Update(const BrnDirector::DirectorResourceManager *  lpDirectorResourceManager, float32_t  lfTimestep, uint8_t  lu8ShakeType, float32_t  lfShakeAmplitude, float32_t  lfShakeFrequency) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCameraShake.cpp:235
		float32_t kfShakeFocalDistance;

		// BrnCameraShake.cpp:236
		float32_t kfShakeVibrationAmount;

		// BrnCameraShake.cpp:240
		float32_t lfRandomValue;

		// BrnCameraShake.cpp:244
		Vector3 lTargetCameraAnglesRandom;

		// BrnCameraShake.cpp:259
		RefSpec lShakeParams;

		// BrnCameraShake.cpp:275
		float32_t lfFrame;

		// BrnCameraShake.cpp:276
		int32_t liFrame;

		// BrnCameraShake.cpp:277
		int32_t liShakeKey;

		// BrnCameraShake.cpp:278
		int32_t liInterpKey;

		// BrnCameraShake.cpp:281
		VecFloat lvfInterp;

		// BrnCameraShake.cpp:284
		Vector3 lvRotation;

		// BrnCameraShake.cpp:288
		Vector3 lvRotation2;

		// BrnCameraShake.cpp:295
		Quaternion lRotationQuat;

		// BrnCameraShake.cpp:296
		Quaternion lRotationQuat2;

		// BrnCameraShake.cpp:297
		Quaternion lRotationQuatInterped;

		// BrnCameraShake.cpp:301
		Vector3 lTargetCameraAngles;

		// BrnCameraShake.cpp:310
		Vector3 lvPosition;

	}
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	{
	}
	Attrib::Gen::shotgroup::Num_ShotList(/* parameters */);
	Attrib::Gen::shotgroup::ShotList(/* parameters */);
	{
		// BrnCameraShake.cpp:266
		iceanim lShakeAnim;

		// BrnCameraShake.cpp:267
		const ICETakeData * lpShakeTake;

		Attrib::Gen::iceanim::iceanim(/* parameters */);
		Attrib::Gen::iceanim::~iceanim(/* parameters */);
	}
	ICE::ICEMath::SignedMod(/* parameters */);
	{
	}
	ICE::ICEMath::SignedMod(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Quaternion::Quaternion(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
	}
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::Quaternion::Quaternion(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Sqrt(/* parameters */);
	rw::math::vpu::Sqrt(/* parameters */);
	rw::math::vpu::SLerp(/* parameters */);
	rw::math::vpu::Matrix44AffineFromQuaternion(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Tan(/* parameters */);
	rw::math::vpu::Vector3::Y(/* parameters */);
	vec_sel(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator-=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_cts(/* parameters */);
	Attrib::RefSpec::~RefSpec(/* parameters */);
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
	rw::math::vpu::ACos(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	vec_rsqrte(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_sra(/* parameters */);
	vec_nmsub(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Sin(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Sin(/* parameters */);
	rw::math::vpu::Sin(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_cts(/* parameters */);
	vec_cts(/* parameters */);
	vec_cts(/* parameters */);
	rw::math::vpu::Sin(/* parameters */);
	vec_ctf(/* parameters */);
	vec_ctf(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Add(/* parameters */);
	rw::math::vpu::Negate(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
}

