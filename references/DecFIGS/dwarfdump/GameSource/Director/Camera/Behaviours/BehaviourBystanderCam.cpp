// BehaviourBystanderCam.cpp:30
void BrnDirector::Camera::ImpactSlomoController::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BehaviourBystanderCam.cpp:125
void BrnDirector::Camera::ImpactShakeController::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BehaviourBystanderCam.cpp:186
void BrnDirector::Camera::BehaviourBystanderCam::Parameters::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Behaviour::Parameters::Construct(/* parameters */);
}

// BehaviourBystanderCam.cpp:140
void BrnDirector::Camera::ImpactShakeController::Update(const Camera &  lCamera, const float32_t  lfTimestep, const const AllVehicleData &  lVehicles, const const VehicleTracker &  lPlayerTracker, const Random &  lRandom, const BrnDirector::DebugPrinter &  lDebugPrinter, const const VehicleRef &  lVehicleRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BehaviourBystanderCam.cpp:143
		float lfImpactForce;

		// BehaviourBystanderCam.cpp:144
		float32_t kfScale;

		// BehaviourBystanderCam.cpp:145
		const float32_t kfMaxImpactOutput;

		// BehaviourBystanderCam.cpp:146
		float32_t kfImpactDampeningSpeedRange;

		// BehaviourBystanderCam.cpp:148
		float32_t lfAbsSpeed;

		// BehaviourBystanderCam.cpp:156
		float32_t lfDistToPlayerSq;

		// BehaviourBystanderCam.cpp:157
		float32_t sfMinDistanceSq;

		// BehaviourBystanderCam.cpp:158
		float32_t sfMaxDistanceSq;

		// BehaviourBystanderCam.cpp:172
		Parameters lImpactEffectParams;

	}
	rw::math::fpu::Abs<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	Camera::GetZoomFactor(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	rw::math::fpu::Tan(/* parameters */);
	rw::math::fpu::IsZero(/* parameters */);
	Utils::CameraImpactEffect::RegisterImpact(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
}

// BehaviourBystanderCam.cpp:46
void BrnDirector::Camera::ImpactSlomoController::Update(const Camera &  lCamera, const float32_t  lfTimestep, const const AllVehicleData &  lVehicles, const const VehicleTracker &  lPlayerTracker, const BrnDirector::DebugPrinter &  lDebugPrinter, bool  lbDontSetRealTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BehaviourBystanderCam.cpp:48
		float32_t sfSlomoDuration;

		// BehaviourBystanderCam.cpp:49
		float32_t sfMinTimeBetweenSlomos;

	}
	CameraEffects::SetUsingRealTime(/* parameters */);
	CameraEffects::SetUsingNormalSloMo(/* parameters */);
	{
		// BehaviourBystanderCam.cpp:76
		bool lbShouldDoSlomo;

		// BehaviourBystanderCam.cpp:79
		float lfImpactForce;

		// BehaviourBystanderCam.cpp:80
		float32_t kfScale;

		// BehaviourBystanderCam.cpp:81
		const float32_t kfMaxImpactOutput;

		// BehaviourBystanderCam.cpp:82
		float32_t kfImpactDampeningSpeedRange;

		// BehaviourBystanderCam.cpp:84
		float32_t lfAbsSpeed;

		VehicleTracker::GetLinearVelocityJournal(/* parameters */);
		DataJournal<rw::math::vpu::Vector3,8>::GetCurrent(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		DataJournal<rw::math::vpu::Vector3,8>::GetPrevious(/* parameters */);
		rw::math::vpu::operator><VectorAxisY>(/* parameters */);
	}
	CameraEffects::SetUsingRealTime(/* parameters */);
	CameraEffects::SetUsingNormalSloMo(/* parameters */);
	DataJournal<rw::math::vpu::Vector3,8>::GetCurrent(/* parameters */);
	rw::math::vpu::Vector3::GetY(/* parameters */);
	rw::math::vpu::operator< <VectorAxisY>(/* parameters */);
}

// BehaviourBystanderCam.cpp:21
