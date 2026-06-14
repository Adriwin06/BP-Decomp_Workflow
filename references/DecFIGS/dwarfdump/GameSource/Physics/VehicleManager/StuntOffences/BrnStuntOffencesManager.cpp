// BrnStuntOffencesManager.cpp:366
void BrnPhysics::StuntOffencesManager::UpdateInAirRotations(BrnPhysics::Vehicle::RaceCarPhysics *  lpRaceCarPhysics, BrnGameState::GameStateModuleIO::GameEventQueue *  lpGameEventQueue, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntOffencesManager.cpp:374
		Matrix44Affine lInverseCarTransform;

		// BrnStuntOffencesManager.cpp:375
		Vector3 lAngularVelocityInCarSpace;

		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	}
	ExternallySimulatedBody::GetTransform(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::TransformVector(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
}

// BrnStuntOffencesManager.cpp:600
void BrnPhysics::StuntOffencesManager::CheckForHandBreakTurns(BrnPhysics::Vehicle::RaceCarPhysics *  lpRaceCarPhysics, BrnGameState::GameStateModuleIO::GameEventQueue *  lpGameEventQueue, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntOffencesManager.cpp:605
		float32_t lfAngleChange;

		// BrnStuntOffencesManager.cpp:606
		float32_t lfBearing;

	}
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	{
		// BrnStuntOffencesManager.cpp:624
		Vector3 lvRaceCarPosition;

		// BrnStuntOffencesManager.cpp:625
		Vector3 lvRaceCarAtVector;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::GetFloat(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::fpu::ATan2(/* parameters */);
		rw::math::fpu::Abs<float>(/* parameters */);
		SetCurrentStuntInProgress(/* parameters */);
	}
	SetCurrentStuntCompleted(/* parameters */);
	rw::math::fpu::Abs<float>(/* parameters */);
}

// BrnStuntOffencesManager.cpp:318
void BrnPhysics::StuntOffencesManager::CheckForTakenOffLanding(BrnPhysics::Vehicle::RaceCarPhysics *  lpRaceCarPhysics) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetCurrentRaceCarState(/* parameters */);
	GetCurrentRaceCarState(/* parameters */);
	SetCurrentRaceCarState(/* parameters */);
	{
		// BrnStuntOffencesManager.cpp:339
		float32_t lfZAxisAndLinVelocityDotProduct;

		rw::math::vpu::Dot(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
	SetCurrentRaceCarState(/* parameters */);
}

// BrnStuntOffencesManager.cpp:764
void _GLOBAL__D__ZN10BrnPhysics7Vehicle23gbReadSurfacePropertiesE() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntOffencesManager.cpp:763
void _GLOBAL__I__ZN10BrnPhysics7Vehicle23gbReadSurfacePropertiesE() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntOffencesManager.cpp:526
void BrnPhysics::StuntOffencesManager::CheckForSuccessfulLanding(BrnPhysics::Vehicle::RaceCarPhysics *  lpRaceCarPhysics, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetCurrentStuntCompleted(/* parameters */);
	Vehicle::VehiclePhysics::GetNumberOfWheelsOnTheGround(/* parameters */);
	SetCurrentStuntInProgress(/* parameters */);
	SetCurrentStuntCompleted(/* parameters */);
	SetCurrentStuntCompleted(/* parameters */);
	Vehicle::VehiclePhysics::GetNumberOfWheelsOnTheGround(/* parameters */);
}

// BrnStuntOffencesManager.cpp:397
void BrnPhysics::StuntOffencesManager::CheckForDrift(BrnPhysics::Vehicle::RaceCarPhysics *  lpRaceCarPhysics, BrnGameState::GameStateModuleIO::GameEventQueue *  lpGameEventQueue, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Vehicle::VehiclePhysics::GetTimeDrifting(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	SetCurrentStuntCompleted(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	SetCurrentStuntCompleted(/* parameters */);
	SetCurrentStuntCompleted(/* parameters */);
	SetCurrentStuntInProgress(/* parameters */);
	Vehicle::SimpleVehiclePhysics::GetSpeed(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	SetCurrentStuntInProgress(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
}

// BrnStuntOffencesManager.cpp:220
void BrnPhysics::StuntOffencesManager::SetCurrentCarInAirStatus(BrnPhysics::Vehicle::RaceCarPhysics *  lpRaceCarPhysics, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntOffencesManager.cpp:224
		int32_t liNumberOfWheelsOnTheGround;

	}
	Vehicle::VehiclePhysics::GetNumberOfWheelsOnTheGround(/* parameters */);
	GetCurrentRaceCarState(/* parameters */);
	UnSetCurrentRaceCarState(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
	{
		// BrnStuntOffencesManager.cpp:273
		Vector2 lvCurrentPosition;

		SetCurrentStuntInProgress(/* parameters */);
		SetCurrentStuntInProgress(/* parameters */);
		BrnMath::Flatten(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
	{
		{
			{
			}
		}
	}
	UnSetCurrentRaceCarState(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	SetCurrentStuntCompleted(/* parameters */);
	SetCurrentRaceCarState(/* parameters */);
	SetCurrentRaceCarState(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnStuntOffencesManager.cpp:442
void BrnPhysics::StuntOffencesManager::CheckForCleanLanding(BrnPhysics::Vehicle::RaceCarPhysics *  lpRaceCarPhysics, BrnGameState::GameStateModuleIO::GameEventQueue *  lpGameEventQueue, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetCurrentRaceCarState(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	{
		// BrnStuntOffencesManager.cpp:478
		Vector2 lv2TakeOffAtVector;

		// BrnStuntOffencesManager.cpp:486
		Vector2 lv2LandingAtVector;

		// BrnStuntOffencesManager.cpp:494
		float32_t lfFinalLandingAngle;

		// BrnStuntOffencesManager.cpp:495
		float32_t lfLandingDifference;

		BrnMath::Flatten(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		BrnMath::Flatten(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Cos(/* parameters */);
		{
			{
			}
		}
		vec_sel(/* parameters */);
		vec_add(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		vec_add(/* parameters */);
		vec_and(/* parameters */);
		vec_madd(/* parameters */);
		vec_cts(/* parameters */);
		vec_ctf(/* parameters */);
		vec_and(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
		SetCurrentStuntCompleted(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		VecFloat<VectorAxisZ>(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		VecFloat<VectorAxisZ>(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
	}
}

// BrnStuntOffencesManager.cpp:694
void BrnPhysics::StuntOffencesManager::CheckForRollsAndSpins(BrnPhysics::Vehicle::RaceCarPhysics *  lpRaceCarPhysics, BrnGameState::GameStateModuleIO::GameEventQueue *  lpGameEventQueue, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetCurrentRaceCarState(/* parameters */);
	rw::math::vpu::Vector3::GetY(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::GetFloat(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::GetFloat(/* parameters */);
	SetCurrentStuntCompleted(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::GetFloat(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::GetFloat(/* parameters */);
	rw::math::fpu::Round<float>(/* parameters */);
	__fsel(/* parameters */);
	__fsel(/* parameters */);
	SetCurrentStuntCompleted(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::GetFloat(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	{
		// BrnStuntOffencesManager.cpp:704
		Vector3 lAbsCurrentRotation;

		rw::math::vpu::Abs(/* parameters */);
		rw::math::vpu::Max(/* parameters */);
	}
	rw::math::vpu::Vector3::GetY(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::GetFloat(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::GetFloat(/* parameters */);
	SetCurrentStuntInProgress(/* parameters */);
	{
		// BrnStuntOffencesManager.cpp:752
		RequestGameTrainingEvent lRequestTraining;

	}
	rw::math::vpu::VecFloatRef<VectorAxisY>::GetFloat(/* parameters */);
	SetCurrentStuntInProgress(/* parameters */);
	ClearCurrentStuntInProgress(/* parameters */);
}

// BrnStuntOffencesManager.cpp:182
void BrnPhysics::StuntOffencesManager::OutputStuntsCompleted(BrnGameState::GameStateModuleIO::GameEventQueue *  lpGameEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntOffencesManager.cpp:189
		CompletedStuntEvent lCompletedStuntEvent;

	}
	ResetCompleteOutputValues(/* parameters */);
}

// BrnStuntOffencesManager.cpp:62
void BrnPhysics::StuntOffencesManager::Update(BrnPhysics::Vehicle::RaceCarPhysics *  lpRaceCarPhysics, BrnGameState::GameStateModuleIO::GameEventQueue *  lpGameEventQueue, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetCurrentRaceCarState(/* parameters */);
}

// BrnStuntOffencesManager.cpp:136
void BrnPhysics::StuntOffencesManager::OutputStuntsInProgress(RaceCarState *  lpRaceCarState, BrnGameState::GameStateModuleIO::GameEventQueue *  lpGameEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntOffencesManager.cpp:154
		InProgressStuntEvent lInProgressStuntEvent;

	}
	rw::math::fpu::Max<float>(/* parameters */);
	ResetInProrgessOutputValues(/* parameters */);
}

// BrnStuntOffencesManager.cpp:31
// BrnStuntOffencesManager.cpp:32
// BrnStuntOffencesManager.cpp:33
// BrnStuntOffencesManager.cpp:34
// BrnStuntOffencesManager.cpp:37
// BrnStuntOffencesManager.cpp:36
// BrnStuntOffencesManager.cpp:38
// BrnStuntOffencesManager.cpp:39
// BrnStuntOffencesManager.cpp:40
// BrnStuntOffencesManager.cpp:41
// BrnStuntOffencesManager.cpp:42
