// WheelStateMachine.cpp:34
void BrnEffects::WheelStateMachine::WheelStateMachine() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// WheelStateMachine.cpp:47
void BrnEffects::WheelStateMachine::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::GetVector3_Zero(/* parameters */);
}

// WheelStateMachine.cpp:39
void BrnEffects::WheelStateMachine::Construct(BrnPhysics::Vehicle::EVehicleDrivenWheel  lWheelIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// WheelStateMachine.cpp:166
void BrnEffects::WheelStateMachine::FireNativeParticle(const rw::math::vpu::Vector3  lWheelPosition, const rw::math::vpu::Vector3  lWheelVelocity, SimpleParticleBatch::ENativeParticleType  lParticleType, const rw::math::vpu::Vector3  lSpawnPos, const RaceCarParticleEffectHelper &  lEffectHelper, const BrnEffects::CarState &  lCarState, const float32_t  lfSpawnTime, const float32_t  lfKickUpSpeed, const rw::math::vpu::Vector3  lvBackwardEmissionBias, float32_t  lfAngularVelocityScale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WheelStateMachine.cpp:168
		const float32_t lfSizeScaleMin;

		// WheelStateMachine.cpp:169
		const float32_t lfSizeScaleMax;

		// WheelStateMachine.cpp:172
		Vector3 lPosition;

		// WheelStateMachine.cpp:173
		Vector3 lResult;

		// WheelStateMachine.cpp:175
		const Random & lRandom;

		// WheelStateMachine.cpp:177
		float32_t lfSizeScale;

		// WheelStateMachine.cpp:179
		bool lbReverseRotation;

		// WheelStateMachine.cpp:183
		const rw::math::vpu::Vector3 lRandomVec;

		// WheelStateMachine.cpp:184
		const rw::math::vpu::Vector3 lVelocitySpread;

		// WheelStateMachine.cpp:187
		const rw::math::vpu::Vector3 lKickUpVelocity;

		// WheelStateMachine.cpp:190
		const rw::math::vpu::Vector3 lInheritedVelocity;

		// WheelStateMachine.cpp:193
		const rw::math::vpu::Vector3 lSpawnVelocity;

		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	EffectsModule::RandomNumberGenerator(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	CgsNumeric::Random::RandomVector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::GetVector3_One(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	RaceCarParticleEffectHelper::ParticleModule(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
}

// WheelStateMachine.cpp:222
void BrnEffects::WheelStateMachine::HandleSmokeLayer(uint32_t  luLayer, const BrnEffects::CarState &  lCarState, const RaceCarParticleEffectHelper &  lEffectHelper, const rw::math::vpu::Vector3  lWheelPos, const rw::math::vpu::Vector3  lWheelVel, const rw::math::vpu::Vector3  lWheelReverseThrustVel, float32_t  lfSkidFactor, float32_t  lfMaxWheelTravel, float32_t  lfSkidStartThreshold, float32_t  lfParticlesPerMetre, float32_t  lfBackwardEmissionFactor, float32_t  lfAngularVelocityScale, SimpleParticleBatch::ENativeParticleType  leParticleType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WheelStateMachine.cpp:228
		const float32_t lfCurrentTime;

		// WheelStateMachine.cpp:229
		const float32_t lfTimeStep;

		{
			// WheelStateMachine.cpp:236
			const float32_t lfNumToSpawn;

			// WheelStateMachine.cpp:239
			const Random & lRandom;

			// WheelStateMachine.cpp:240
			const float32_t lfBackwardsEmissionFactorRandomised;

			// WheelStateMachine.cpp:241
			Vector3 lvBackwardEmissionBias;

			// WheelStateMachine.cpp:244
			float32_t lfSpawnTime;

			// WheelStateMachine.cpp:245
			const float32_t lfSpawnTimeStep;

			// WheelStateMachine.cpp:247
			Vector3 lSpawnPos;

			// WheelStateMachine.cpp:248
			const rw::math::vpu::Vector3 lSpawnStep;

			rw::math::fpu::Floor<float>(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			EffectsModule::RandomNumberGenerator(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			CgsNumeric::Random::RandomFloat(/* parameters */);
			rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
			rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
			{
				// WheelStateMachine.cpp:252
				const float32_t KF_KICKUP_SPEED;

				rw::math::vpu::operator-=(/* parameters */);
			}
		}
	}
}

// WheelStateMachine.cpp:58
void BrnEffects::WheelStateMachine::Update(const BrnEffects::CarState &  lCarState, const RaceCarParticleEffectHelper &  lEffectHelper) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WheelStateMachine.cpp:61
		const const RaceCarState & lRaceCarState;

		// WheelStateMachine.cpp:62
		const const WheelLite & lWheel;

		// WheelStateMachine.cpp:75
		float32_t lLongitudalfSkidFactor;

		// WheelStateMachine.cpp:76
		float32_t lLatitudalfSkidFactor;

		// WheelStateMachine.cpp:79
		const float32_t lfTimeStep;

		// WheelStateMachine.cpp:81
		const rw::math::vpu::Vector3 lWheelVelocity;

		// WheelStateMachine.cpp:82
		const rw::math::vpu::Vector3 lWheelPos;

		// WheelStateMachine.cpp:83
		const rw::math::vpu::Vector3 lCameraPos;

		// WheelStateMachine.cpp:86
		const float32_t lfWheelRoadSpeed;

		// WheelStateMachine.cpp:89
		const float32_t lfWheelEdgeSpeed;

		// WheelStateMachine.cpp:92
		const float32_t lfWheelMaxSpeed;

		// WheelStateMachine.cpp:93
		const float32_t lfMaxWheelTravel;

		// WheelStateMachine.cpp:96
		const float32_t KF_WHEEL_VELOCITY_THRESHOLD;

		// WheelStateMachine.cpp:104
		const float32_t KF_WHEEL_REVERSE_THRUST_CUTOFF_SPEED;

		// WheelStateMachine.cpp:105
		const float32_t lfReverseThrustScale;

		// WheelStateMachine.cpp:106
		const rw::math::vpu::Vector3 lWheelReverseThrustVelocity;

		// WheelStateMachine.cpp:111
		uint8_t lSurfaceID;

		// WheelStateMachine.cpp:113
		surface lSurface;

		// WheelStateMachine.cpp:114
		visualfxsurface lVFXSurface;

	}
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::fpu::Abs<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	Attrib::Gen::surfacelist::Surfaces(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	Attrib::Gen::surface::surface(/* parameters */);
	Attrib::Gen::visualfxsurface::visualfxsurface(/* parameters */);
	Attrib::Gen::visualfxsurface::IsSkidSmokeEffectEnabled(/* parameters */);
	Attrib::Gen::visualfxsurface::IsSkidSmokeEffect2Enabled(/* parameters */);
	Attrib::Gen::visualfxsurface::~visualfxsurface(/* parameters */);
	Attrib::Gen::surface::~surface(/* parameters */);
}

// WheelStateMachine.cpp:23
// WheelStateMachine.cpp:24
