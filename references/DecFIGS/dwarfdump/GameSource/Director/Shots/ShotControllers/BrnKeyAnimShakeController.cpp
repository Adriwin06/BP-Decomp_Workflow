// BrnKeyAnimShakeController.cpp:40
void BrnDirector::KeyAnimShakeController::Construct(const BrnDirector::DirectorResourceManager *  lpDirectorResourceManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNumeric::Random::Construct(/* parameters */);
}

// BrnKeyAnimShakeController.cpp:67
void BrnDirector::KeyAnimShakeController::Update(float32_t  lfTimeStep, Camera *  lpCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnKeyAnimShakeController.cpp:69
		uint8_t lu8ShakeType;

		// BrnKeyAnimShakeController.cpp:91
		RefSpec lShakeParams;

	}
	Camera::Camera::GetEffects(/* parameters */);
	Attrib::Gen::shotgroup::Num_ShotList(/* parameters */);
	Attrib::Gen::shotgroup::ShotList(/* parameters */);
	Attrib::RefSpec::GetClassKey(/* parameters */);
	Attrib::RefSpec::~RefSpec(/* parameters */);
	{
		// BrnKeyAnimShakeController.cpp:107
		int32_t liFrame;

		// BrnKeyAnimShakeController.cpp:108
		int32_t liShakeKey;

		// BrnKeyAnimShakeController.cpp:111
		Vector3 lvRotation;

		// BrnKeyAnimShakeController.cpp:117
		Quaternion lRotationQuat;

		// BrnKeyAnimShakeController.cpp:118
		Matrix44Affine lShakeMatrix;

		// BrnKeyAnimShakeController.cpp:121
		Vector3 lvPosition;

		{
			// BrnKeyAnimShakeController.cpp:98
			iceanim lShakeAnim;

			// BrnKeyAnimShakeController.cpp:99
			const ICETakeData * lpShakeTake;

			Attrib::Gen::iceanim::iceanim(/* parameters */);
			Attrib::Gen::iceanim::~iceanim(/* parameters */);
		}
		ICE::ICEMath::SignedMod(/* parameters */);
		{
		}
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		Camera::CameraEffects::GetShakeAmplitude(/* parameters */);
		rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
		rw::math::vpu::Matrix44AffineFromQuaternion(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::Quaternion::Quaternion(/* parameters */);
		{
		}
		{
		}
		{
		}
		rw::math::vpu::operator-(/* parameters */);
		{
		}
		VecFloat<VectorAxisY>(/* parameters */);
		{
		}
		VecFloat<VectorAxisX>(/* parameters */);
		VecFloat<VectorAxisZ>(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Sqrt(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		Camera::Camera::SetTransform(/* parameters */);
		Camera::CameraEffects::GetShakeAmplitude(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	}
	{
		// BrnKeyAnimShakeController.cpp:134
		proceduralshake lProceduralShake;

		Attrib::Gen::proceduralshake::proceduralshake(/* parameters */);
		Attrib::Gen::proceduralshake::ShakeMethod(/* parameters */);
		Attrib::Gen::proceduralshake::~proceduralshake(/* parameters */);
	}
}

