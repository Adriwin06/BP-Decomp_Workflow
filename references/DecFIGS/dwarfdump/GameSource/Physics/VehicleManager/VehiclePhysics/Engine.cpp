// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// Engine.cpp:43
		const VecFloat KF_DOWNSHIFT_FACTOR;

		// Engine.cpp:45
		const VecFloat KF_UP_SHIFT_CLUTCH_TIME;

		// Engine.cpp:46
		const VecFloat KF_DOWN_SHIFT_CLUTCH_TIME;

		// Engine.cpp:48
		const VecFloat KF_DRIFTING_FACTOR;

		// Engine.cpp:50
		const VecFloat KVF_FLY_WHEEL_IDLE_VELOCITY;

		// Engine.cpp:51
		const VecFloat KVF_TWO_FLY_WHEEL_IDLE_VELOCITY;

		// Engine.cpp:149
		const VecFloat KVF_MAX_CURRENT_GEAR_CHANGE_TIME;

		// Engine.cpp:150
		const VecFloat KVF_UPDATEENGINE_STOP_GAS;

		// Engine.cpp:151
		const VecFloat KVF_UPDATEENGINE_BRAKING_THRESHOLD;

		// Engine.cpp:152
		const VecFloat KVF_UPDATEENGINE_HANDBRAKE_THRESHOLD;

		// Engine.cpp:153
		const VecFloat KVF_UPDATEENGINE_HANDBRAKE_MAX_SPEED;

		// Engine.cpp:154
		const VecFloat KVF_LOW_SPEED_FIRST_GEAR_LOCK_THRESHOLD;

		// Engine.cpp:155
		const VecFloat KVF_RECIP_LOW_SPEED_FIRST_GEAR_LOCK_THRESHOLD;

		// Engine.cpp:156
		const VecFloat KVF_STEERING_LOCK_THRESHOLD;

		// Engine.cpp:157
		const VecFloat KVF_BRAKE_LOCK_THRESHOLD;

		// Engine.cpp:158
		const VecFloat KVF_BURN_CLUTCH_IF_NOT_GOING_FORWARDS;

		// Engine.cpp:159
		const VecFloat KVF_REVERSING_POWER_THROUGH_THESHOLD;

		// Engine.cpp:160
		const VecFloat KVF_START_REVERSING_BRAKE_THRESHOLD;

		// Engine.cpp:161
		const VecFloat KVF_START_REVERSING_GASBRAKE_THRESHOLD;

	}

}

// Engine.cpp:126
void BrnPhysics::Vehicle::Engine::SwitchAttribs(const BrnPhysics::Vehicle::VehicleAttribs::EngineAttribs *  lpAttribs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Engine.cpp:729
void BrnPhysics::Vehicle::Engine::ComputeGear(const VecFloat  lfWheelVelocity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Engine.cpp:732
		uint8_t lu8Gear;

		rw::math::vpu::operator>=(/* parameters */);
	}
	{
		// Engine.cpp:737
		VecFloat lfRpm;

		ComputeRpm(/* parameters */);
	}
	ComputeRpm(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearUpRPM(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearRatio(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	VehicleAttribs::EngineAttribs::GetDifferential(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

// Engine.cpp:770
void BrnPhysics::Vehicle::Engine::Reset(const VecFloat  lfWheelAngularVelocity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	SetEngineDrive(/* parameters */);
	SetFlyWheelAngularVelocity(/* parameters */);
	SetClutchFactor(/* parameters */);
	rw::math::vpu::Vector4::SetX(/* parameters */);
	SetReactionTorque(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	SetClutchDelay(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::SetX(/* parameters */);
	ComputeRpm(/* parameters */);
	SetRPM(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	SetCurrentGearChangeTime(/* parameters */);
}

// Engine.cpp:143
void BrnPhysics::Vehicle::Engine::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

// Engine.cpp:103
void BrnPhysics::Vehicle::Engine::Prepare(const BrnPhysics::Vehicle::VehicleAttribs::EngineAttribs *  lpAttribs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	SetClutchFactor(/* parameters */);
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

// Engine.cpp:86
void BrnPhysics::Vehicle::Engine::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

// Engine.cpp:67
void BrnPhysics::Vehicle::Engine::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

// Engine.cpp:184
void BrnPhysics::Vehicle::Engine::Update(const VecFloat  lfWheelVelocity, const VecFloat  lfGas, const VecFloat  lfBrake, bool  lbHandbrake, const VecFloat  lfSteering, const VecFloat  lfWheelRadius, bool  lbAllowReverseGear, const VecFloat  lfVehicleSpeedMPS, const VecFloat  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Engine.cpp:190
		VecFloat lvfCurrentGearChangeTime;

		// Engine.cpp:191
		VecFloat lvfCurrentClutchFactor;

		// Engine.cpp:192
		bool lbCurrentAllowToChangeUpGear;

		// Engine.cpp:193
		bool lbCurrentAllowToChangeDownGear;

		// Engine.cpp:194
		VecFloat lvfCurrentFlyWheelAngularVelocity;

		// Engine.cpp:195
		VecFloat lvfCurrentEngineDrive;

		// Engine.cpp:196
		VecFloat lvfCurrentRPM;

		// Engine.cpp:197
		VecFloat lvfCurrentAttribsGearDownRPM;

		// Engine.cpp:198
		int32_t liCurrentGear;

		// Engine.cpp:203
		VecFloat lfTorque;

		// Engine.cpp:204
		VecFloat lfWheelRPM;

		// Engine.cpp:205
		VecFloat lfWheelAngularVelocity;

		// Engine.cpp:206
		VecFloat lfGearChangeRPM;

		// Engine.cpp:207
		VecFloat lfEngineInvInertia;

		// Engine.cpp:208
		VecFloat lfBurnClutch;

		// Engine.cpp:250
		VecFloat lvfTorque;

		// Engine.cpp:251
		VecFloat lvfWheelRPM;

		// Engine.cpp:252
		VecFloat lvfWheelAngularVelocity;

		// Engine.cpp:253
		VecFloat lvfGearChangeRPM;

		// Engine.cpp:254
		VecFloat lvfEngineInvInertia;

		// Engine.cpp:255
		VecFloat lvfBurnClutch;

		// Engine.cpp:257
		VecFloat lvfZero;

		// Engine.cpp:258
		VecFloat lvfOne;

		// Engine.cpp:260
		MaskScalar lvbInFirstGear;

		// Engine.cpp:261
		MaskScalar lvbInReverseGear;

		// Engine.cpp:262
		MaskScalar lvbHandbrake;

		// Engine.cpp:292
		MaskScalar lvbStopped;

		// Engine.cpp:300
		MaskScalar lvbGasZero;

		// Engine.cpp:301
		MaskScalar lvbJustBraking;

		// Engine.cpp:310
		MaskScalar lvbHandbraking;

		// Engine.cpp:317
		MaskScalar lvbChangingGear;

		// Engine.cpp:323
		MaskScalar lvbIdlingInNeutral;

		// Engine.cpp:371
		MaskScalar lvbSpeedLowerThanLockThreshold;

		// Engine.cpp:372
		MaskScalar lvbPassedSteeringThreshold;

		// Engine.cpp:373
		MaskScalar lvbPassedBrakeThreshold;

		// Engine.cpp:374
		MaskScalar lvbGoingBackwards;

		// Engine.cpp:375
		MaskScalar lvbSteeringOrBrakeOrBack;

		// Engine.cpp:376
		MaskScalar lvbLock;

		// Engine.cpp:468
		MaskScalar lvbBurningThroughClutch;

		// Engine.cpp:469
		VecFloat lvfFlyWheelAngularVelocityTemp;

		// Engine.cpp:473
		VecFloat lvfVelocitySign;

		// Engine.cpp:629
		MaskScalar lvbBranchCase0;

		// Engine.cpp:631
		MaskScalar lvbBranchCase1;

		// Engine.cpp:633
		MaskScalar lvbBranchCase2;

		// Engine.cpp:635
		MaskScalar lvbBranchCase3;

		// Engine.cpp:637
		MaskScalar lvbBranchCase4;

		// Engine.cpp:640
		MaskScalar lvbHandbrakeZero;

		VehicleAttribs::EngineAttribs::GetFlyWheelInertia(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
	}
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearDownRPM(/* parameters */);
	GetMaxTorque(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	ComputeRpm(/* parameters */);
	GetCurrentGearChangeTime(/* parameters */);
	GetFlyWheelAngularVelocity(/* parameters */);
	SetCurrentGearChangeTime(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::GetVecFloat_Two(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearRatio(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	VehicleAttribs::EngineAttribs::GetTorqueScale(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	GetEngineDrive(/* parameters */);
	GetRPM(/* parameters */);
	GetClutchFactor(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	GetCurrentGearChangeTime(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	InterpedParam3::GetInterped(/* parameters */);
	GetRPM(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisY>(/* parameters */);
	VehicleAttribs::EngineAttribs::GetDifferential(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::fpu::IsZero(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearChangeTime(/* parameters */);
	GetCurrentGearChangeTime(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator==(/* parameters */);
	GetClutchFactor(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	GetMaxTorque(/* parameters */);
	VehicleAttribs::EngineAttribs::GetTorqueFallOffRPM(/* parameters */);
	ComputeRpm(/* parameters */);
	rw::math::vpu::Reciprocal(/* parameters */);
	rw::math::vpu::MaskScalar::MaskScalar(/* parameters */);
	VehicleAttribs::EngineAttribs::GetFlyWheelInertia(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	VehicleAttribs::EngineAttribs::GetDifferential(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	InterpedParam3::GetInterped(/* parameters */);
	rw::math::vpu::MaskScalar::MaskScalar(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisY>(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearRatio(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	VehicleAttribs::EngineAttribs::GetTorqueScale(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::MaskScalar::MaskScalar(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		// Engine.cpp:278
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::CompLessThan(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::CompLessThan(/* parameters */);
	rw::math::vpu::And(/* parameters */);
	rw::math::vpu::CompLessThan(/* parameters */);
	rw::math::vpu::CompGreaterThan(/* parameters */);
	rw::math::vpu::And(/* parameters */);
	rw::math::vpu::Not(/* parameters */);
	rw::math::vpu::CompLessEqual(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearChangeTime(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::And(/* parameters */);
	rw::math::vpu::CompLessThan(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::CompLessThan(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::And(/* parameters */);
	rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	GetCurrentGearChangeTime(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	GetClutchFactor(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	GetFlyWheelAngularVelocity(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	GetEngineDrive(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	GetRPM(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearDownRPM(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		// Engine.cpp:341
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:342
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:343
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:344
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::CompGreaterThan(/* parameters */);
	rw::math::vpu::CompLessThan(/* parameters */);
	rw::math::vpu::CompGreaterThan(/* parameters */);
	rw::math::vpu::CompLessThan(/* parameters */);
	rw::math::vpu::Or(/* parameters */);
	rw::math::vpu::Or(/* parameters */);
	rw::math::vpu::And(/* parameters */);
	rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	GetCurrentGearChangeTime(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	GetClutchFactor(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	GetFlyWheelAngularVelocity(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	GetEngineDrive(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	GetRPM(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearDownRPM(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		// Engine.cpp:408
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:409
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:411
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VehicleAttribs::EngineAttribs::GetGearChangeTime(/* parameters */);
	GetCurrentGearChangeTime(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	VehicleAttribs::EngineAttribs::GetMaxRPM(/* parameters */);
	GetFlyWheelAngularVelocity(/* parameters */);
	VehicleAttribs::EngineAttribs::GetTransmissionEfficiency(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	SetRPM(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	SetFlyWheelAngularVelocity(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	GetFlyWheelAngularVelocity(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Sgn(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	GetClutchFactor(/* parameters */);
	VehicleAttribs::EngineAttribs::GetMaxRPM(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearChangeTime(/* parameters */);
	GetFlyWheelAngularVelocity(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	VehicleAttribs::EngineAttribs::GetFlyWheelFriction(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Add(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	GetCurrentGearChangeTime(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	GetClutchFactor(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	GetFlyWheelAngularVelocity(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	GetEngineDrive(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	GetRPM(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearDownRPM(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		// Engine.cpp:497
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:498
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:499
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:500
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetRPM(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearUpRPM(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	VehicleAttribs::EngineAttribs::SetGearDownRPM(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearRatio(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearRatio(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearRatio(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearRatio(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearUpRPM(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearDownRPM(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	VehicleAttribs::EngineAttribs::SetGearDownRPM(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearRatio(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearRatio(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	GetCurrentGearChangeTime(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	GetClutchFactor(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	GetFlyWheelAngularVelocity(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	GetEngineDrive(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	GetRPM(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearDownRPM(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		// Engine.cpp:548
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:549
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:550
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:551
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetClutchFactor(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearUpRPM(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	GetClutchFactor(/* parameters */);
	SetEngineDrive(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearRatio(/* parameters */);
	VehicleAttribs::EngineAttribs::GetDifferential(/* parameters */);
	rw::math::vpu::CompGreaterThan(/* parameters */);
	rw::math::vpu::CompLessThan(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearUpRPM(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::CompGreaterThan(/* parameters */);
	rw::math::vpu::And(/* parameters */);
	rw::math::vpu::CompLessThan(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::MaskScalar::MaskScalar(/* parameters */);
	rw::math::vpu::CompLessThan(/* parameters */);
	rw::math::vpu::And(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::And(/* parameters */);
	rw::math::vpu::And(/* parameters */);
	rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	rw::math::vpu::CompGreaterThan(/* parameters */);
	GetCurrentGearChangeTime(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearRatio(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	VehicleAttribs::EngineAttribs::GetDifferential(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	GetClutchFactor(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	GetFlyWheelAngularVelocity(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	GetEngineDrive(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	GetRPM(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearDownRPM(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		// Engine.cpp:697
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:698
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:699
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:700
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VehicleAttribs::EngineAttribs::SetGearDownRPM(/* parameters */);
	SetRPM(/* parameters */);
	SetEngineDrive(/* parameters */);
	SetFlyWheelAngularVelocity(/* parameters */);
	SetClutchFactor(/* parameters */);
	SetCurrentGearChangeTime(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearUpRPM(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearDownRPM(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	SetCurrentGearChangeTime(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	SetCurrentGearChangeTime(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	SetClutchFactor(/* parameters */);
	{
	}
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	SetClutchFactor(/* parameters */);
	{
		// Engine.cpp:541
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:542
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetCurrentGearChangeTime(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:543
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetClutchFactor(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:544
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetFlyWheelAngularVelocity(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:696
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		VehicleAttribs::EngineAttribs::GetGearDownRPM(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:335
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetCurrentGearChangeTime(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:336
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetClutchFactor(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:337
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetFlyWheelAngularVelocity(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:334
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:285
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:284
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:283
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:282
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:547
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		VehicleAttribs::EngineAttribs::GetGearDownRPM(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:546
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetRPM(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:339
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetRPM(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:340
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		VehicleAttribs::EngineAttribs::GetGearDownRPM(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:338
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetEngineDrive(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	SetClutchFactor(/* parameters */);
	rw::math::vpu::operator<=(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	SetClutchFactor(/* parameters */);
	{
		// Engine.cpp:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		VehicleAttribs::EngineAttribs::GetGearDownRPM(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:693
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetFlyWheelAngularVelocity(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:694
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetEngineDrive(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:695
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetRPM(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:692
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetClutchFactor(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:691
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetCurrentGearChangeTime(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	{
		// Engine.cpp:426
		float32_t lfVelocitySign;

		rw::math::vpu::operator-(/* parameters */);
		VehicleAttribs::EngineAttribs::GetTransmissionEfficiency(/* parameters */);
		GetClutchFactor(/* parameters */);
		GetFlyWheelAngularVelocity(/* parameters */);
		SetFlyWheelAngularVelocity(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::Sgn(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Mult(/* parameters */);
		rw::math::vpu::Add(/* parameters */);
		GetFlyWheelAngularVelocity(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		SetFlyWheelAngularVelocity(/* parameters */);
		GetFlyWheelAngularVelocity(/* parameters */);
		VehicleAttribs::EngineAttribs::GetFlyWheelFriction(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		SetFlyWheelAngularVelocity(/* parameters */);
	}
	{
		// Engine.cpp:492
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetClutchFactor(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:493
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetFlyWheelAngularVelocity(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:491
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetCurrentGearChangeTime(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:490
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:489
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:333
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	SetCurrentGearChangeTime(/* parameters */);
	{
		// Engine.cpp:406
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetRPM(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:405
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetEngineDrive(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:404
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetFlyWheelAngularVelocity(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:403
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetClutchFactor(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:402
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetCurrentGearChangeTime(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:401
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:400
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:393
		MaskScalar lvbGoingForwards;

		rw::math::vpu::GetVecFloat_Two(/* parameters */);
		rw::math::vpu::CompGreaterThan(/* parameters */);
		rw::math::vpu::MaskScalar::SetTrue(/* parameters */);
		rw::math::vpu::MaskScalar::SetFalse(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
	}
	{
		// Engine.cpp:496
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		VehicleAttribs::EngineAttribs::GetGearDownRPM(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:495
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetRPM(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:494
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetEngineDrive(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// Engine.cpp:545
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetEngineDrive(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::MaskScalar::SetFalse(/* parameters */);
	rw::math::vpu::MaskScalar::SetTrue(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	SetCurrentGearChangeTime(/* parameters */);
	rw::math::fpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	AllowToChangeUpGear(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		// Engine.cpp:666
		MaskScalar lvbPastRPM;

		VehicleAttribs::EngineAttribs::GetGearUpRPM(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
		CgsNumeric::GetVecFloat_Quarter(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::And(/* parameters */);
	}
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	SetClutchFactor(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	SetClutchFactor(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
}

