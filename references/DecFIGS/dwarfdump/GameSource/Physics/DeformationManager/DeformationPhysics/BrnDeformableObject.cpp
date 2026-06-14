// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnDeformableObject.cpp:87
		extern VecFloat KF_MAX_TOTAL_ANGULAR_VELOCITY_FOR_DETACHMENT;

		// BrnDeformableObject.cpp:88
		extern VecFloat KF_ANGULAR_VELOCITY_DECAY;

		// BrnDeformableObject.cpp:358
		const rw::math::vpu::Vector3Plus KV3P_CAR_SELECT_COMPRESSION_SCRATCH_RATIO;

		// BrnDeformableObject.cpp:359
		const rw::math::vpu::Vector3Plus KV3P_EVENT_COMPRESSION_SCRATCH_RATIO;

		// BrnDeformableObject.cpp:360
		const rw::math::vpu::Vector3Plus KV3P_DEFAULT_COMPRESSION_SCRATCH_RATIO;

		// BrnDeformableObject.cpp:433
		const VecFloat KVF_DAMAGE_AMOUNT_TO_NUM_DETACHED_PARTS;

		// BrnDeformableObject.cpp:434
		const VecFloat KVF_DAMAGE_AMOUNT_TO_NUM_DETACHED_PARTS_RECIP;

		// BrnDeformableObject.cpp:435
		const float32_t KF_NO_DAMAGE_TIME;

		// BrnDeformableObject.cpp:1307
		const VecFloat KVF_DRIVING_COMPRESSION_FACTOR;

		// BrnDeformableObject.cpp:1308
		const VecFloat KVF_ZERO_FRICTION_TOLLERANCE;

		// BrnDeformableObject.cpp:1309
		const VecFloat KVF_MAX_SCRATCH_IMPULSE;

		// BrnDeformableObject.cpp:1310
		const VecFloat KVF_MAX_SCRATCH_MULTIPLIER_IF_CRASHING;

		// BrnDeformableObject.cpp:1587
		const VecFloat KVF_SPEED_BELOW_MAX_FOR_EXTREME_DEFORMATION;

		// BrnDeformableObject.cpp:1655
		VecFloat KVF_MIN_CRASH_TIME_TO_LOCK_WHEEL;

		// BrnDeformableObject.cpp:1656
		VecFloat KVF_MAX_CRASH_TIME_TO_LOCK_WHEEL;

		// BrnDeformableObject.cpp:1657
		VecFloat KVF_MIN_SPEED_TO_LOCK_WHEEL;

		// BrnDeformableObject.cpp:2643
		const rw::math::vpu::Vector3 KVF_EXTRA_BOX_SIZE_FOR_DRIVEN_POINT_CLAMP;

		// BrnDeformableObject.cpp:2765
		const VecFloat KVF_MAX_TWIST_ANGLE;

		// BrnDeformableObject.cpp:2766
		const VecFloat KVF_MIN_SPEED_FOR_WHEEL_DETACH;

		// BrnDeformableObject.cpp:2906
		const VecFloat KVF_SMASH_SENSOR_DISPLACEMENT;

		// BrnDeformableObject.cpp:2907
		const VecFloat KVF_SMASH_SENSOR_DISPLACEMENT_SQ;

		// BrnDeformableObject.cpp:2908
		const VecFloat KVF_CRACK_SENSOR_DISPLACEMENT;

		// BrnDeformableObject.cpp:2909
		const VecFloat KVF_CRACK_SENSOR_DISPLACEMENT_SQ;

		// BrnDeformableObject.cpp:3489
		bool gbDetachedPartsUseStreamTests;

		// BrnDeformableObject.cpp:3973
		const VecFloat KVF_DRIVE_TIME_LIMIT_TOLERANCE;

	}

}

// BrnDeformableObject.cpp:214
void BrnPhysics::Deformation::DeformableObject::ConstructUpdatePerformanceMonitors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDeformableObject.cpp:241
void BrnPhysics::Deformation::DeformableObject::ConstructUpdateIKAndLocatorsPerformanceMonitors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDeformableObject.cpp:270
void BrnPhysics::Deformation::DeformableObject::ConstructPostPhysicsPerformanceMonitors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDeformableObject.cpp:4362
void BrnPhysics::Deformation::DeformableObject::VerifyPartIndicies(DetachedPartManager *  lpDetachedPartManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDeformableObject.cpp:2150
void BrnPhysics::Deformation::DeformableObject::GetHingedPart(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:2153
		int32_t liPartIndex;

	}
}

// BrnDeformableObject.cpp:1000
void BrnPhysics::Deformation::DeformableObject::ResetScratching() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:1002
		uint8_t lu8NumSensors;

		{
			// BrnDeformableObject.cpp:1006
			uint8_t i;

			DeformationSensor::SetScratchAmount(/* parameters */);
		}
	}
}

// BrnDeformableObject.cpp:3371
void BrnPhysics::Deformation::DeformableObject::GetVehicleWorldRestitution(const const StoredImpulseContact &  lContact) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VehicleRigidBody::GetVehiclePhysics(/* parameters */);
	rw::math::vpu::Abs<VectorAxisY>(/* parameters */);
	{
	}
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::CompLessThan(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
}

// BrnDeformableObject.cpp:3975
void BrnPhysics::Deformation::DeformableObject::UpdateDeformedBBox() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:3977
		uint8_t lu8NumSensors;

		// BrnDeformableObject.cpp:3980
		Vector3 lvMaxPositions;

		// BrnDeformableObject.cpp:3981
		Vector3 lvMinPositions;

		// BrnDeformableObject.cpp:4000
		AxisAlignedBox lTemp;

		rw::math::vpu::GetVector3_Zero(/* parameters */);
		{
			// BrnDeformableObject.cpp:3983
			uint8_t lu8Index;

		}
		rw::math::vpu::GetVector3_Zero(/* parameters */);
		GetVehiclePhysics(/* parameters */);
		Vehicle::SimpleVehiclePhysics::SetDeformableBBox(/* parameters */);
	}
	{
		// BrnDeformableObject.cpp:4007
		BrnPhysics::Vehicle::RaceCarPhysics * lpPhysics;

		// BrnDeformableObject.cpp:4009
		bool lbDeformedPastLimit;

		// BrnDeformableObject.cpp:4011
		Vector3 lDeformedMinToDriveTimeMin;

		// BrnDeformableObject.cpp:4012
		Vector3 lDeformedMaxToDriveTimeMax;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator< <VectorAxisX>(/* parameters */);
		Vehicle::RaceCarPhysics::SetDeformedBeyondDriveTimeLimitsInCrash(/* parameters */);
	}
	{
		// BrnDeformableObject.cpp:3985
		Vector3 lvSensorMinValue;

		// BrnDeformableObject.cpp:3986
		Vector3 lvSensorMaxValue;

		// BrnDeformableObject.cpp:3987
		BrnPhysics::Deformation::DeformationSensor * lpSensor;

		// BrnDeformableObject.cpp:3988
		VecFloat lfSensorRadius;

	}
	DeformationSensor::GetRadius(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	rw::math::vpu::Max(/* parameters */);
	rw::math::vpu::operator< <VectorAxisY>(/* parameters */);
	rw::math::vpu::operator< <VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator><VectorAxisX>(/* parameters */);
	rw::math::vpu::operator><VectorAxisY>(/* parameters */);
	rw::math::vpu::operator><VectorAxisZ>(/* parameters */);
}

// BrnDeformableObject.cpp:4038
void BrnPhysics::Deformation::DeformableObject::CalculateDriveTimeLimits() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:4040
		const SensorSpec * lpSensorSpec;

		// BrnDeformableObject.cpp:4041
		uint8_t lu8NumSensors;

		// BrnDeformableObject.cpp:4069
		const BrnPhysics::Vehicle::VehicleAttribs::VehicleBaseAttribs * lpBaseAttribs;

		// BrnDeformableObject.cpp:4070
		VecFloat lvfDriveTimeDeformLimitX;

		// BrnDeformableObject.cpp:4071
		VecFloat lvfDriveTimeDeformLimitNegY;

		// BrnDeformableObject.cpp:4072
		VecFloat lvfDriveTimeDeformLimitPosZ;

		// BrnDeformableObject.cpp:4073
		VecFloat lvfDriveTimeDeformLimitNegZ;

		rw::math::vpu::GetVector3_Zero(/* parameters */);
	}
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	{
		// BrnDeformableObject.cpp:4047
		uint8_t lu8Index;

	}
	{
		// BrnDeformableObject.cpp:4049
		Vector3 lvSensorMinValue;

		// BrnDeformableObject.cpp:4050
		Vector3 lvSensorMaxValue;

		// BrnDeformableObject.cpp:4051
		Vector3 lvSensorPosition;

		// BrnDeformableObject.cpp:4052
		VecFloat lfSensorRadius;

		StreamedDeformationSpec::GetSensorSpec(/* parameters */);
	}
	rw::math::vpu::Max(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	SensorSpec::GetRadius(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	Vehicle::VehicleAttribs::VehicleBaseAttribs::GetDriveTimeDeformLimitX(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator-=(/* parameters */);
	rw::math::vpu::Vector3::X(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator-=(/* parameters */);
	rw::math::vpu::Vector3::X(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator-=(/* parameters */);
	Vehicle::VehicleAttribs::VehicleBaseAttribs::GetDriveTimeDeformLimitNegY(/* parameters */);
	Vehicle::VehicleAttribs::VehicleBaseAttribs::GetDriveTimeDeformLimitNegZ(/* parameters */);
	Vehicle::VehicleAttribs::VehicleBaseAttribs::GetDriveTimeDeformLimitPosZ(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator+=(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator+=(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisZ, VectorAxisZ>(/* parameters */);
}

// BrnDeformableObject.cpp:1590
void BrnPhysics::Deformation::DeformableObject::UpdateAbsorptionSet(BrnGameState::GameStateModuleIO::EGameModeType  leGameMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VehicleRigidBody::GetVehiclePhysics(/* parameters */);
	Vehicle::VehiclePhysics::GetMaxNonBoostSpeedMPH(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	Vehicle::VehiclePhysics::GetSpeedMPHOnLastCrash(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
}

// BrnDeformableObject.cpp:3250
void BrnPhysics::Deformation::DeformableObject::ClearVariables() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:3267
		int32_t i;

	}
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	SetLastLinearVelocity(/* parameters */);
	SetEntitySphereSize(/* parameters */);
}

// BrnDeformableObject.cpp:291
void BrnPhysics::Deformation::DeformableObject::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDeformableObject.cpp:184
void BrnPhysics::Deformation::DeformableObject::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDeformableObject.cpp:2095
void BrnPhysics::Deformation::DeformableObject::GetNonDetachedJointedPart(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:2098
		int32_t liPartIndex;

	}
	{
		// BrnDeformableObject.cpp:2100
		IKBodyPart * lpPart;

	}
}

// BrnDeformableObject.cpp:2123
void BrnPhysics::Deformation::DeformableObject::GetAttachedNonJointedPart(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:2126
		int32_t liPartIndex;

	}
}

// BrnDeformableObject.cpp:3810
void BrnPhysics::Deformation::DeformableObject::ApplyBreakingJointForces(PhysicalBodyPart *  lpPart) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:3812
		const IKBodyPart * lpIKPart;

	}
	{
		// BrnDeformableObject.cpp:3835
		Vector3 lLinVel;

		// BrnDeformableObject.cpp:3839
		Vector3 lAngVel;

		rw::math::vpu::operator*(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Vector3::SetY(/* parameters */);
		PhysicalBodyPart::SetNeedsWritingToRW(/* parameters */);
	}
	{
		// BrnDeformableObject.cpp:3849
		ExternalPhysicsBody * lpPhys;

		// BrnDeformableObject.cpp:3851
		Vector3 lImpulse;

		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	PhysicalBodyPart::SetNeedsWritingToRW(/* parameters */);
	{
		// BrnDeformableObject.cpp:3819
		Vector3 lLinVel;

		// BrnDeformableObject.cpp:3823
		Vector3 lAngVel;

		rw::math::vpu::operator*(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
	}
}

// BrnDeformableObject.cpp:4334
void BrnPhysics::Deformation::DeformableObject::ClearStoredContacts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:4338
		uint8_t lu8NumSensors;

		// BrnDeformableObject.cpp:4339
		uint8_t lu8Sensor;

	}
	DeformationSensor::ClearStoredContacts(/* parameters */);
}

// BrnDeformableObject.cpp:2079
void BrnPhysics::Deformation::DeformableObject::UpdateVelocity(const VecFloat  lvfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetLastLinearVelocity(/* parameters */);
}

// BrnDeformableObject.cpp:367
void BrnPhysics::Deformation::DeformableObject::GetInitialCompressionScalesAndLimits(BrnPhysics::Deformation::DeformationResetType  leDeformationType, const VecFloat  lvfInitialDamage, const Vector3Plus &  lv3pCompressionScale_Scratch, const Vector3 &  lvPosLimits, const Vector3 &  lvNegLimits) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:370
		Vector3Plus lRatio;

		// BrnDeformableObject.cpp:396
		const BrnPhysics::Vehicle::VehicleAttribs::VehicleBaseAttribs * lpBaseAttribs;

		// BrnDeformableObject.cpp:397
		VecFloat lvfDriveTimeDeformLimitX;

		// BrnDeformableObject.cpp:398
		VecFloat lvfDriveTimeDeformLimitNegY;

		// BrnDeformableObject.cpp:399
		VecFloat lvfDriveTimeDeformLimitPosZ;

		// BrnDeformableObject.cpp:400
		VecFloat lvfDriveTimeDeformLimitNegZ;

	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
	rw::math::vpu::operator*<VectorAxisW>(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	Vehicle::VehicleAttribs::VehicleBaseAttribs::GetDriveTimeDeformLimitX(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	{
	}
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	{
	}
}

// BrnDeformableObject.cpp:3017
void BrnPhysics::Deformation::DeformableObject::SendGlassUpdateEvents(int32_t  liGlassPaneIndex, DeformationOutputInterface *  lpOutput, DeformationOutputInterfaceForEntityModules *  lpEntityOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:3019
		const GlassPaneSpec * lpSpec;

		// BrnDeformableObject.cpp:3021
		GlassSmashOrCrackEvent lSmashEvent;

		// BrnDeformableObject.cpp:3036
		VecFloat lfGreatestDispSq;

	}
	StreamedDeformationSpec::GetGlassPaneSpec(/* parameters */);
	GlassSmashOrCrackEvent(/* parameters */);
	GlassPaneSpec::GetBodyPartType(/* parameters */);
	VehicleRigidBody::GetVehiclePhysics(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::TransformVector(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	{
		// BrnDeformableObject.cpp:3038
		int32_t liCornerLoop;

		{
			// BrnDeformableObject.cpp:3040
			Vector3 lPointPos;

			TagPoint::GetOffsetFromInitialPosition(/* parameters */);
			IKDrivenPoint::GetOffsetFromInitialPosition(/* parameters */);
			ExternallySimulatedBody::GetTransform(/* parameters */);
			rw::math::vpu::TransformPoint(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
			rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
		}
	}
	DeformationOutputInterface::AddGlassSmashOrCrackEvent(/* parameters */);
	DeformationOutputInterfaceForEntityModules::AddGlassSmashOrCrackEvent(/* parameters */);
	{
		// BrnDeformableObject.cpp:3069
		VecFloat lvfCrackAmount;

		// BrnDeformableObject.cpp:3074
		VecFloat lvfOneMinusCrack;

		rw::math::vpu::SqrtFast(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
	}
}

// BrnDeformableObject.cpp:3295
void BrnPhysics::Deformation::DeformableObject::RenderSensors(CgsDev::Debug3DImmediateRender *  lpDisplay, int32_t  liSelectedSensor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:3297
		Matrix44Affine lTransform;

		// BrnDeformableObject.cpp:3298
		Matrix44Affine lSensorTransform;

		// BrnDeformableObject.cpp:3299
		Vector3 lSensorPosition;

		// BrnDeformableObject.cpp:3302
		Matrix44Affine lRot;

		// BrnDeformableObject.cpp:3305
		int32_t i;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	ExternallySimulatedBody::GetTransform(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetW(/* parameters */);
	{
		// BrnDeformableObject.cpp:3343
		int32_t liSphereIndex;

		// BrnDeformableObject.cpp:3347
		float32_t lfRadius;

		// BrnDeformableObject.cpp:3351
		const BrnPhysics::Deformation::DeformationSensor * lpNextSensor;

		CgsGeometric::Sphere::GetPosition(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		CgsGeometric::Sphere::GetRadius(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	{
		// BrnDeformableObject.cpp:3313
		float32_t lfRadius;

		{
			// BrnDeformableObject.cpp:3334
			float32_t lfDefAmount;

			StreamedDeformationSpec::GetSensorSpec(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::Vector3::Vector3(/* parameters */);
			rw::RGBA::RGBA(/* parameters */);
			rw::math::vpu::Vector3::Vector3(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			rw::math::vpu::Magnitude(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			{
				{
					{
					}
				}
			}
			rw::math::vpu::Clamp(/* parameters */);
		}
	}
	DeformationSensor::GetRadius(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	{
		// BrnDeformableObject.cpp:3318
		int32_t liConnectedSensorIndex;

		{
			// BrnDeformableObject.cpp:3321
			int32_t liNextSensorIndex;

			{
				// BrnDeformableObject.cpp:3324
				const BrnPhysics::Deformation::DeformationSensor * lpNextSensor;

			}
		}
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
}

// BrnDeformableObject.cpp:2699
void BrnPhysics::Deformation::DeformableObject::UpdateIK(VecFloat  lfAmount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:2702
		int32_t liTagIndex;

	}
	{
		// BrnDeformableObject.cpp:2708
		int32_t liPartIndex;

		IKBodyPart::Update(/* parameters */);
		IKBodyPart::GetNumberOfDrivenPoints(/* parameters */);
		IKBodyPart::GetDrivenPoint(/* parameters */);
		IKDrivenPoint::Update(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		operator=<VectorAxisW>(/* parameters */);
		operator=<VectorAxisW>(/* parameters */);
		rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
		{
		}
		rw::math::vpu::operator*(/* parameters */);
		IKDrivenPoint::ResolveConstraint(/* parameters */);
		IKDrivenPointSpec::GetDesiredDistanceFromTagPointA(/* parameters */);
	}
	TagPoint::Update(/* parameters */);
}

// BrnDeformableObject.cpp:2913
void BrnPhysics::Deformation::DeformableObject::UpdateGlassSmashedState(int32_t  liGlassPaneState, VecFloat  lvfThresholdMultiplier) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:2915
		const GlassPaneSpec * lpGlassSpec;

		// BrnDeformableObject.cpp:2917
		VecFloat lfAverageDeformationSquared;

	}
	StreamedDeformationSpec::GetGlassPaneSpec(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	{
		// BrnDeformableObject.cpp:2918
		int32_t liCornerLoop;

		TagPoint::GetOffsetFromInitialPosition(/* parameters */);
		IKDrivenPoint::GetOffsetFromInitialPosition(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
}

// BrnDeformableObject.cpp:2975
void BrnPhysics::Deformation::DeformableObject::UpdateGlass(float32_t  lfTimeStep, DeformationOutputInterface *  lpOutput, DeformationOutputInterfaceForEntityModules *  lpEntityOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:2977
		bool lbSendUpdate;

		// BrnDeformableObject.cpp:2978
		VecFloat lvfThresholdMultiplierSq;

		rw::math::vpu::GetVecFloat_Two(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	{
		// BrnDeformableObject.cpp:2985
		int32_t liGlassLoop;

	}
}

// BrnDeformableObject.cpp:2645
void BrnPhysics::Deformation::DeformableObject::UpdateSkinningOffsets() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:2647
		int32_t liOffsetIndex;

		// BrnDeformableObject.cpp:2649
		AxisAlignedBox lDeformedBox;

		rw::math::vpu::operator-(/* parameters */);
	}
	{
		// BrnDeformableObject.cpp:2654
		int32_t liTagIndex;

	}
	rw::math::vpu::operator+(/* parameters */);
	{
		// BrnDeformableObject.cpp:2667
		int32_t liPartIndex;

		IKBodyPart::UpdateSkinningOffsets(/* parameters */);
		IKBodyPart::GetDrivenPoint(/* parameters */);
		IKBodyPart::GetDrivenPoint(/* parameters */);
		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
		IKDrivenPoint::GetOffsetFromInitialPosition(/* parameters */);
		IKDrivenPoint::GetScratchAmount(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	}
	TagPoint::GetOffsetFromInitialPosition(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	IKBodyPart::UpdateSkinningOffsetsWithinBox(/* parameters */);
	IKBodyPart::GetDrivenPoint(/* parameters */);
	IKBodyPart::GetDrivenPoint(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	IKDrivenPoint::GetScratchAmount(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
}

// BrnDeformableObject.cpp:1958
void BrnPhysics::Deformation::DeformableObject::UpdateIKSuspensionOffsets() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:1960
		int32_t liTagPointIndex;

		// BrnDeformableObject.cpp:1961
		BrnPhysics::Vehicle::EVehicleDrivenWheel leWheelEnum;

		// BrnDeformableObject.cpp:1962
		Wheel * lpWheel;

		// BrnDeformableObject.cpp:1963
		Vector3 lOffset;

		{
			// BrnDeformableObject.cpp:1966
			int32_t liWheelIndex;

		}
	}
	TagPoint::GetOffsetFromInitialPosition(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	TagPoint::Update(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
	TagPointSpec::GetWeightBVec(/* parameters */);
	Vehicle::Wheel::GetSuspensionLength(/* parameters */);
	TagPointSpec::GetWeightAVec(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
}

// BrnDeformableObject.cpp:4140
void BrnPhysics::Deformation::DeformableObject::PrepareLocators() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:4146
		uint32_t luNumLocators;

	}
	LocatorPointSpecList::GetNumLocatorPoints(/* parameters */);
	{
		// BrnDeformableObject.cpp:4149
		uint32_t luIndex;

	}
	{
		// BrnDeformableObject.cpp:4151
		const LocatorPointSpec * lpLocator;

		LocatorPointSpecList::GetLocatorSpec(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	StreamedDeformationSpec::GetGenericLocators(/* parameters */);
	LocatorPointSpecList::GetNumLocatorPoints(/* parameters */);
	{
		// BrnDeformableObject.cpp:4161
		uint32_t luIndex;

	}
	{
		// BrnDeformableObject.cpp:4163
		const LocatorPointSpec * lpLocator;

		LocatorPointSpecList::GetLocatorSpec(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	StreamedDeformationSpec::GetLightLocators(/* parameters */);
	LocatorPointSpecList::GetNumLocatorPoints(/* parameters */);
	{
		// BrnDeformableObject.cpp:4173
		uint32_t luIndex;

	}
	{
		// BrnDeformableObject.cpp:4175
		const LocatorPointSpec * lpLocator;

		LocatorPointSpecList::GetLocatorSpec(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	StreamedDeformationSpec::GetCameraLocators(/* parameters */);
}

// BrnDeformableObject.cpp:693
void BrnPhysics::Deformation::DeformableObject::PrepareIKPart(int32_t  liPartIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:695
		IKBodyPart * lpPart;

		// BrnDeformableObject.cpp:711
		int32_t liStartIndexOfTagPoints;

	}
	IKBodyPart::DetachablePart(/* parameters */);
	StreamedDeformationSpec::GetDrivenPartSpec(/* parameters */);
	IKBodyPartSpec::GetStartIndexOfTagPoints(/* parameters */);
	{
		// BrnDeformableObject.cpp:758
		int32_t liRightMostIndex;

	}
	{
		// BrnDeformableObject.cpp:749
		int32_t liRightMostIndex;

	}
	{
		// BrnDeformableObject.cpp:776
		int32_t liLeftMostIndex;

	}
	{
		// BrnDeformableObject.cpp:734
		int32_t liLeftMostIndex;

		// BrnDeformableObject.cpp:735
		int32_t liRightMostIndex;

	}
	{
		// BrnDeformableObject.cpp:718
		int32_t liLeftMostIndex;

		// BrnDeformableObject.cpp:719
		int32_t liRightMostIndex;

	}
	{
		// BrnDeformableObject.cpp:767
		int32_t liLeftMostIndex;

	}
}

// BrnDeformableObject.cpp:1025
void BrnPhysics::Deformation::DeformableObject::UpdateSensorDisplacements(VecFloat  lvfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:1029
		uint8_t lu8NumSensors;

		{
			// BrnDeformableObject.cpp:1034
			int32_t liSensorIndex;

		}
	}
	{
		// BrnDeformableObject.cpp:1037
		Vector3 lLocalVel;

		ExternalPhysicsBody::GetLocalVelocity(/* parameters */);
	}
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	DeformationSensor::SetPointDisplacement(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

// BrnDeformableObject.cpp:4268
void BrnPhysics::Deformation::DeformableObject::UpdateLocator(const Matrix44Affine &  lOutputMatrix, const BrnPhysics::Deformation::ETagPointType &  lOutType, const LocatorPointSpec *  lpLocator, const const rw::math::vpu::Matrix44Affine &  lInverseCarGraphicsTransorm, DetachedPartManager *  lpDetachedPartManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:4270
		Vector3 lPosition;

		// BrnDeformableObject.cpp:4276
		int32_t liPartIndex;

	}
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	{
		// BrnDeformableObject.cpp:4289
		const const rw::math::vpu::Matrix44Affine & lPartMat;

		// BrnDeformableObject.cpp:4295
		Matrix44Affine lRenderTransform;

		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		GetIKPart(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		DetachedPartManager::GetPartFromIndex(/* parameters */);
		IKBodyPart::GetPartGraphicsTransform(/* parameters */);
		PhysicalBodyPartPool::GetPart(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		CgsContainers::BitArray<50u>::IsBitSet(/* parameters */);
		PhysicalBodyPart::GetRenderTransform(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnDeformableObject.cpp:4199
void BrnPhysics::Deformation::DeformableObject::UpdateLocators(DetachedPartManager *  lpDetachedPartManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:4201
		Matrix44Affine lInvCarGraphTrans;

		// BrnDeformableObject.cpp:4204
		uint32_t luNumLocators;

	}
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	LocatorPointSpecList::GetNumLocatorPoints(/* parameters */);
	{
		// BrnDeformableObject.cpp:4207
		uint32_t luIndex;

		{
			// BrnDeformableObject.cpp:4209
			const LocatorPointSpec * lpLocator;

		}
		StreamedDeformationSpec::GetGenericLocators(/* parameters */);
		LocatorPointSpecList::GetLocatorSpec(/* parameters */);
	}
	LocatorPointSpecList::GetNumLocatorPoints(/* parameters */);
	{
		// BrnDeformableObject.cpp:4222
		uint32_t luIndex;

		{
			// BrnDeformableObject.cpp:4224
			const LocatorPointSpec * lpLocator;

		}
		StreamedDeformationSpec::GetLightLocators(/* parameters */);
		LocatorPointSpecList::GetLocatorSpec(/* parameters */);
	}
	LocatorPointSpecList::GetNumLocatorPoints(/* parameters */);
	{
		// BrnDeformableObject.cpp:4238
		uint32_t luIndex;

		{
			// BrnDeformableObject.cpp:4240
			const LocatorPointSpec * lpLocator;

		}
		StreamedDeformationSpec::GetCameraLocators(/* parameters */);
		LocatorPointSpecList::GetLocatorSpec(/* parameters */);
	}
}

// BrnDeformableObject.cpp:668
void BrnPhysics::Deformation::DeformableObject::ResetJointVelocities(DetachedPartManager *  lpDetachedPartManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:670
		int16_t li16CurrentPart;

	}
	{
		// BrnDeformableObject.cpp:673
		PhysicalBodyPart * lpPart;

		DetachedPartManager::GetPartFromIndex(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	PhysicalBodyPart::SetJointVelocity(/* parameters */);
}

// BrnDeformableObject.cpp:127
void BrnPhysics::Deformation::ContactOrder::ContactSortCallback(const void *  lpElemA, const void *  lpElemB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:132
		const ContactTime * lpContactA;

		// BrnDeformableObject.cpp:133
		const ContactTime * lpContactB;

	}
	rw::math::vpu::Abs<float>(/* parameters */);
	{
		// BrnDeformableObject.cpp:130
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnDeformableObject.cpp:129
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnDeformableObject.cpp:839
void BrnPhysics::Deformation::DeformableObject::ResetSensors(const rw::math::vpu::Vector3Plus  lDamageScale, const rw::math::vpu::Vector3  lPosLimits, const rw::math::vpu::Vector3  lNegLimits, const rw::math::vpu::Vector3  lDamagePoint) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:841
		Matrix44Affine lTransform;

		// BrnDeformableObject.cpp:842
		VolumeInstanceId lVolInstId;

		// BrnDeformableObject.cpp:843
		const SensorSpec * lpSensorSpec;

		// BrnDeformableObject.cpp:844
		uint8_t lu8SensorSceneIndex;

		// BrnDeformableObject.cpp:845
		uint8_t lu8SpecID;

		// BrnDeformableObject.cpp:846
		uint8_t lu8NumSensors;

	}
	GetTransform(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	{
		// BrnDeformableObject.cpp:855
		uint8_t i;

	}
	StreamedDeformationSpec::GetSensorSpec(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	CgsSceneManager::VolumeInstanceId::Set(/* parameters */);
	{
		// BrnDeformableObject.cpp:883
		int32_t liWheelIndex;

		{
			// BrnDeformableObject.cpp:885
			uint8_t lu8MinDistanceSensorIndex;

			// BrnDeformableObject.cpp:886
			float32_t lfMinSensorDistanceToWheel;

			// BrnDeformableObject.cpp:887
			float32_t lfSensorDistanceToWheel;

			// BrnDeformableObject.cpp:889
			BrnPhysics::Vehicle::EVehicleDrivenWheel leWheelIndex;

			// BrnDeformableObject.cpp:891
			Vector3 lWheelPosition;

			// BrnDeformableObject.cpp:915
			VecFloat lvfRadius;

			// BrnDeformableObject.cpp:916
			Vector3 lMoveUp;

			// BrnDeformableObject.cpp:918
			int32_t liSphereIndex;

		}
	}
	Vehicle::Wheel::GetPosition(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	{
		// BrnDeformableObject.cpp:893
		uint8_t lu8SensorIndex;

	}
	{
		// BrnDeformableObject.cpp:906
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		Vehicle::Wheel::GetPosition(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::Vector3::GetX(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	CgsGeometric::Sphere::Set(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::GetVector3_YAxis(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
		// BrnDeformableObject.cpp:924
		Vector3 lVelocity;

		// BrnDeformableObject.cpp:925
		Vector3 lDir;

		// BrnDeformableObject.cpp:926
		Vector3 lSensorPosition;

		// BrnDeformableObject.cpp:927
		Vector3 lVehiclePosition;

		// BrnDeformableObject.cpp:928
		Vector3 lVehicleLinearVelocity;

		// BrnDeformableObject.cpp:929
		Vector3 lVehicleAngularVelocity;

		// BrnDeformableObject.cpp:930
		Vector3Plus lDirAndMag;

		// BrnDeformableObject.cpp:931
		VecFloat lvfLength;

		// BrnDeformableObject.cpp:932
		VecFloat lvfHackedOneOver60;

		rw::math::vpu::VecFloat::operator=(/* parameters */);
		VehicleRigidBody::GetVehiclePhysics(/* parameters */);
		{
			// BrnDeformableObject.cpp:940
			int32_t liSensorIndex;

		}
		{
			// BrnDeformableObject.cpp:965
			int32_t liWheelIndex;

			{
				// BrnDeformableObject.cpp:967
				int32_t liSphereIndex;

			}
			rw::math::vpu::operator-=(/* parameters */);
			rw::math::vpu::Cross(/* parameters */);
			rw::math::vpu::operator+=(/* parameters */);
			rw::math::vpu::NormalizeReturnMagnitude(/* parameters */);
			rw::math::vpu::Vector3Plus::Set(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
		}
	}
	{
		// BrnDeformableObject.cpp:895
		Vector3 lSensorPosition;

		rw::math::vpu::operator-(/* parameters */);
	}
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::NormalizeReturnMagnitude(/* parameters */);
	rw::math::vpu::Vector3Plus::Set(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

// BrnDeformableObject.cpp:1321
void BrnPhysics::Deformation::DeformableObject::ApplySensorImpulse(VecFloat  lvfTimeStep, const const StoredImpulseContact &  lContact, const const BrnPhysics::Deformation::ImpulseParams &  lImpulseParams, const rw::math::vpu::Vector3  lRelativeMotion, const rw::math::vpu::Vector3  lImpulseDir, VecFloat  lvfImpulseMagnitude, BrnPhysics::Deformation::DeformationSensor *  lpSensor, bool  lbAddToSpy, bool  lbUseNormalScaledFriction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:1323
		ImpulseParams lLocalImpulseParams;

		// BrnDeformableObject.cpp:1324
		Matrix44Affine lRotation;

		// BrnDeformableObject.cpp:1325
		Vector3 lNormalFrictionImpulse;

		// BrnDeformableObject.cpp:1326
		Vector3 lVelocityFrictionImpulse;

		// BrnDeformableObject.cpp:1367
		Vector3 lBBoxMin;

		// BrnDeformableObject.cpp:1368
		Vector3 lBBoxMax;

		// BrnDeformableObject.cpp:1386
		Vector3[6] maDirectionLimits;

	}
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	DeformationSensor::GetBiggestImpulseThisFrame(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetW(/* parameters */);
	DeformationSensor::SetBiggestImpulseThisFrame(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	VehicleRigidBody::GetVehiclePhysics(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	{
		// BrnDeformableObject.cpp:1372
		VecFloat lvfRadius;

		DeformationSensor::GetRadius(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	{
		// BrnDeformableObject.cpp:1380
		VecFloat lvfLimitDistance;

		rw::math::vpu::operator+(/* parameters */);
	}
	{
		// BrnDeformableObject.cpp:1447
		VecFloat lvfFrictionCo;

		// BrnDeformableObject.cpp:1448
		VecFloat lvfNormalFrictionCo;

		// BrnDeformableObject.cpp:1482
		Vector3 lMovementInPlane;

		// BrnDeformableObject.cpp:1484
		MaskScalar lvbIMagnitudeNoneZero;

		{
			// BrnDeformableObject.cpp:1393
			int32_t liAxis;

			{
				// BrnDeformableObject.cpp:1395
				Vector3 lAxisDir;

				// BrnDeformableObject.cpp:1399
				VecFloat lvfComponent;

				GetLocalAxisDirection(/* parameters */);
				rw::math::vpu::GetVector3_XAxis(/* parameters */);
				rw::math::vpu::TransformPoint(/* parameters */);
				rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
				rw::math::vpu::Dot(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::operator>(/* parameters */);
			}
		}
		VehicleRigidBody::GetVehiclePhysics(/* parameters */);
		rw::math::vpu::GetVecFloat_Zero(/* parameters */);
		rw::math::vpu::GetVecFloat_Zero(/* parameters */);
		rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::CompGreaterEqual(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::MaskScalar::GetBool(/* parameters */);
		{
			// BrnDeformableObject.cpp:1490
			Vector3 lFrictionDirection;

			// BrnDeformableObject.cpp:1491
			VecFloat lvfSpeedInPlane;

			// BrnDeformableObject.cpp:1492
			VecFloat lvfFrictionSpeedFactor;

			// BrnDeformableObject.cpp:1494
			const VecFloat KVF_SPEED_TO_DAMPEN_FRICTION;

			// BrnDeformableObject.cpp:1495
			const VecFloat KVF_SPEED_TO_DAMPEN_FRICTION_RECIP;

			// BrnDeformableObject.cpp:1512
			Vector3 lLinearImpulse;

			// BrnDeformableObject.cpp:1513
			Vector3 lAngularImpulse;

			// BrnDeformableObject.cpp:1558
			VecFloat lfScratchAmount;

			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator*=(/* parameters */);
			rw::math::vpu::NormalizeReturnMagnitude(/* parameters */);
			{
			}
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::Clamp(/* parameters */);
			rw::math::vpu::operator*=(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			ExternalPhysicsBody::AddWorldSpaceImpulse(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			rw::math::vpu::operator+=(/* parameters */);
			ExternalPhysicsBody::AddWorldSpaceAngularImpulse(/* parameters */);
			rw::math::vpu::operator+=(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			DeformationSensor::AddScratch(/* parameters */);
			rw::math::fpu::Min<float>(/* parameters */);
		}
	}
	{
		// BrnDeformableObject.cpp:1570
		Vector3 lNormalStress;

		// BrnDeformableObject.cpp:1571
		Vector3 lFrictionStress;

	}
	rw::math::vpu::GetVector3_XAxis(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::GetVector3_YAxis(/* parameters */);
	rw::math::vpu::GetVector3_YAxis(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::GetVector3_ZAxis(/* parameters */);
	rw::math::vpu::GetVector3_ZAxis(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::GetVector3_XAxis(/* parameters */);
	VehicleRigidBody::GetVehiclePhysics(/* parameters */);
	VehicleRigidBody::GetVehiclePhysics(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	Vehicle::SimpleVehiclePhysics::RecordHasDeformed(/* parameters */);
	{
		// BrnDeformableObject.cpp:1430
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Vehicle::SimpleVehiclePhysics::SetFatallyCrashing(/* parameters */);
	{
		// BrnDeformableObject.cpp:1417
		float32_t lfStrength;

		// BrnDeformableObject.cpp:1418
		float32_t lfImpulseStrength;

		VehicleRigidBody::GetVehiclePhysics(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		{
		}
		rw::math::vpu::operator*=(/* parameters */);
		VehicleRigidBody::GetVehiclePhysics(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::fpu::Clamp<float>(/* parameters */);
		{
		}
	}
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	DeformationSensor::GetRadius(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
	}
	VehicleRigidBody::GetVehiclePhysics(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	{
		// BrnDeformableObject.cpp:1524
		VecFloat lvfImpulseScale;

		Vehicle::VehicleAttribs::CollisionAttribs::GetCarAngularImpulseScale(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	{
		// BrnDeformableObject.cpp:1538
		Vector3 lFrictionDirection;

		// BrnDeformableObject.cpp:1539
		Vector3 lAngularMovementInPlane;

		// BrnDeformableObject.cpp:1540
		Vector3 lLinearImpulse;

		// BrnDeformableObject.cpp:1541
		Vector3 lAngularImpulse;

		// BrnDeformableObject.cpp:1542
		VecFloat lvfSpeedInPlane;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::NormalizeReturnMagnitude(/* parameters */);
		{
		}
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
}

// BrnDeformableObject.cpp:1147
void BrnPhysics::Deformation::DeformableObject::ApplyCarCarImpulse(const const StoredImpulseContact &  lContact, VecFloat  lvfTimeStep, VecFloat  lvfIteration, int32_t  liSensorIndex, const Random &  lRandom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:1155
		Vector3 lPointVel;

		// BrnDeformableObject.cpp:1156
		Vector3 lPoint2Vel;

		// BrnDeformableObject.cpp:1160
		Vector3 lRelativeMotion;

		// BrnDeformableObject.cpp:1163
		VecFloat lvfClosingSpeed;

		// BrnDeformableObject.cpp:1169
		Vector3 lImpulse;

		// BrnDeformableObject.cpp:1170
		VecFloat lvfInvInertiaA;

		// BrnDeformableObject.cpp:1171
		VecFloat lvfInvInertiaB;

		// BrnDeformableObject.cpp:1172
		VecFloat lvfRestitution;

		// BrnDeformableObject.cpp:1255
		VecFloat lvfImpulseMagnitude;

		// BrnDeformableObject.cpp:1258
		ImpulseParams lParams;

		// BrnDeformableObject.cpp:1278
		StoredImpulseContact lReverseContact;

	}
	Vehicle::VehiclePhysics::ResetCoolDown(/* parameters */);
	ExternalPhysicsBody::GetLocalVelocity(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	ExternallySimulatedBody::SetFrozen(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	ExternalPhysicsBody::GetLocalVelocity(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator<=(/* parameters */);
	VehicleRigidBody::GetVehiclePhysics(/* parameters */);
	{
		// BrnDeformableObject.cpp:1205
		BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCarPhysics;

		// BrnDeformableObject.cpp:1209
		VecFloat lfNormalStressMagnitude;

		// BrnDeformableObject.cpp:1218
		VecFloat lfMinBouncePower;

		// BrnDeformableObject.cpp:1232
		VecFloat lfMassFactorScale;

		// BrnDeformableObject.cpp:1237
		Vector3 lScale;

		// BrnDeformableObject.cpp:1244
		Vector3 lLinearVelocity;

	}
	rw::math::vpu::Magnitude(/* parameters */);
	{
	}
	rw::math::vpu::Normalize(/* parameters */);
	StoredImpulseContact(/* parameters */);
	StoredImpulseContact::GetInverse(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	VehicleRigidBody::GetVehiclePhysics(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	{
	}
	rw::math::vpu::VecFloatRef<VectorAxisY>::GetFloat(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
}

// BrnDeformableObject.cpp:1055
void BrnPhysics::Deformation::DeformableObject::ApplyCarWorldImpulse(const const StoredImpulseContact &  lContact, VecFloat  lvfTimeStep, VecFloat  lvfIteration, int32_t  liSensorIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:1057
		Vector3 lPointVel;

		// BrnDeformableObject.cpp:1066
		Vector3 lImpulse;

		// BrnDeformableObject.cpp:1067
		VecFloat lvfRestitution;

		// BrnDeformableObject.cpp:1068
		VecFloat lvfInvInertia;

		// BrnDeformableObject.cpp:1108
		VecFloat lvfImpulseMagnitude;

		// BrnDeformableObject.cpp:1111
		ImpulseParams lParams;

		ExternalPhysicsBody::GetLocalVelocity(/* parameters */);
	}
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	VehicleRigidBody::GetVehiclePhysics(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		// BrnDeformableObject.cpp:1087
		BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCarPhysics;

		{
			// BrnDeformableObject.cpp:1101
			float32_t lfMinBouncePower;

			rw::math::vpu::Vector3::SetY(/* parameters */);
		}
	}
	rw::math::vpu::Magnitude(/* parameters */);
	{
	}
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Sgn(/* parameters */);
	rw::math::vpu::Vector3::Y(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ, VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::GetFloat(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
}

// BrnDeformableObject.cpp:1847
void BrnPhysics::Deformation::DeformableObject::UpdateContacts(VecFloat  lvfTimeStep, const Random &  lRandom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:1849
		Vector3 lCarDir;

		// BrnDeformableObject.cpp:1890
		int32_t liNumIterations;

		// BrnDeformableObject.cpp:1892
		VecFloat lvfIteration;

		rw::math::vpu::Normalize(/* parameters */);
	}
	{
	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		// BrnDeformableObject.cpp:1855
		int32_t liSensor;

	}
	ContactOrder::Clear(/* parameters */);
	ContactOrder::Sort(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		// BrnDeformableObject.cpp:1893
		int32_t liIter;

		{
			// BrnDeformableObject.cpp:1895
			int32_t liContact;

		}
	}
	Vehicle::VehiclePhysics::ClearNumWorldCollisions(/* parameters */);
	{
		// BrnDeformableObject.cpp:1897
		StoredImpulseContact lContact;

		// BrnDeformableObject.cpp:1898
		const const ContactTime & lContactTime;

		// BrnDeformableObject.cpp:1899
		int32_t liSensor;

	}
	ContactOrder::GetContact(/* parameters */);
	StoredImpulseContact(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnDeformableObject.cpp:1857
		StoredImpulseContact lContact;

		StoredImpulseContact(/* parameters */);
		{
			// BrnDeformableObject.cpp:1863
			float32_t lfSeverity;

			{
				// BrnDeformableObject.cpp:1861
				CgsDev::StrStream lStrStream;

				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
			ContactOrder::AddContact(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
}

// BrnDeformableObject.cpp:2583
void BrnPhysics::Deformation::DeformableObject::RemovePhysicalPartsAndJoints(InputBuffer *  lpSimInput, OutputBuffer::SceneInputInterface *  lpSceneInterface, DetachedPartManager *  lpDetachedPartManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:2585
		int16_t li16CurrentPart;

	}
	{
		// BrnDeformableObject.cpp:2591
		int32_t liPartIndex;

		DetachedPartManager::GetPartFromIndex(/* parameters */);
		PhysicalBodyPart::GetIKPartIndex(/* parameters */);
		DetachedPartManager::RemovePart(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnDeformableObject.cpp:2606
		int32_t liIKPartIndex;

	}
	{
		// BrnDeformableObject.cpp:2608
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnDeformableObject.cpp:2731
void BrnPhysics::Deformation::DeformableObject::GetWheelTagPoints(Vector3 *  lpaOutWheelTagPoints) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:2735
		int32_t liNumWheels;

		// BrnDeformableObject.cpp:2736
		int32_t liWheel;

	}
	{
		// BrnDeformableObject.cpp:2742
		const WheelSpec * lpWheelSpec;

		StreamedDeformationSpec::GetWheelSpec(/* parameters */);
		{
			// BrnDeformableObject.cpp:2748
			const TagPoint * lpTagPoint;

			TagPoint::GetPosition(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			{
				// BrnDeformableObject.cpp:2750
				CgsDev::StrStream lStrStream;

				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
			ExternallySimulatedBody::GetTransform(/* parameters */);
			rw::math::vpu::TransformPoint(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		}
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnDeformableObject.cpp:4113
void BrnPhysics::Deformation::DeformableObject::AddContactsToPenetrationSolver(PenetrationSolver *  lpSolver, BrnPhysics::Deformation::DeformableObject *  lpDefObjBase, int32_t  liWorldObjectIndex, int32_t  liObjectIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:4115
		bool lbVehicleWheelsAllHaveTraction;

		{
			// BrnDeformableObject.cpp:4117
			int32_t liSensor;

		}
	}
}

// BrnDeformableObject.cpp:3108
void BrnPhysics::Deformation::DeformableObject::UpdatePostPhysics(OutputBuffer::SceneInputInterface *  lpSceneInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:3112
		Matrix44Affine lVehicleTransform;

		// BrnDeformableObject.cpp:3113
		int32_t liNumDeformationSensors;

		ExternallySimulatedBody::GetTransform(/* parameters */);
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		{
			// BrnDeformableObject.cpp:3120
			int32_t liSensorIndex;

		}
		{
			// BrnDeformableObject.cpp:3130
			int32_t liSensorIndex;

		}
		DeformationSensor::ClearNonWorldContacts(/* parameters */);
		CgsPhysics::PhysicsSimulationIO::OutContactSpy::Clear(/* parameters */);
		{
			// BrnDeformableObject.cpp:3137
			int32_t liSensorIndex;

		}
		{
			// BrnDeformableObject.cpp:3144
			int32_t liWheelIndex;

			{
				// BrnDeformableObject.cpp:3146
				BrnPhysics::Vehicle::EVehicleDrivenWheel leWheelIndex;

				// BrnDeformableObject.cpp:3147
				VecFloat lvfRadius;

				// BrnDeformableObject.cpp:3148
				Vector3 lMoveUp;

				// BrnDeformableObject.cpp:3149
				Vector3 lPosition;

				// BrnDeformableObject.cpp:3163
				int32_t liSphereIndex;

				rw::math::vpu::Vector3::GetX(/* parameters */);
				rw::math::vpu::GetVecFloat_Half(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::IsZero(/* parameters */);
				rw::math::vpu::VecFloat::VecFloat(/* parameters */);
				rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
				rw::math::vpu::GetVector3_YAxis(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				Vehicle::Wheel::GetPosition(/* parameters */);
				SetY<VectorAxisY>(/* parameters */);
				ExternallySimulatedBody::GetTransform(/* parameters */);
				rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
				rw::math::vpu::IsZero(/* parameters */);
				rw::math::vpu::VecFloat::VecFloat(/* parameters */);
				rw::math::vpu::operator+(/* parameters */);
				rw::math::vpu::TransformPoint(/* parameters */);
				CgsGeometric::Sphere::Set(/* parameters */);
			}
			rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
		}
		CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		{
			// BrnDeformableObject.cpp:3172
			Vector3 lVelocity;

			// BrnDeformableObject.cpp:3173
			Vector3 lDir;

			// BrnDeformableObject.cpp:3174
			Vector3 lSensorPosition;

			// BrnDeformableObject.cpp:3175
			Vector3 lVehiclePosition;

			// BrnDeformableObject.cpp:3176
			Vector3 lVehicleLinearVelocity;

			// BrnDeformableObject.cpp:3177
			Vector3 lVehicleAngularVelocity;

			// BrnDeformableObject.cpp:3178
			Vector3Plus lDirAndMag;

			// BrnDeformableObject.cpp:3179
			VecFloat lvfLength;

			// BrnDeformableObject.cpp:3180
			VecFloat lvfHackedOneOver60;

			rw::math::vpu::VecFloat::operator=(/* parameters */);
			VehicleRigidBody::GetVehiclePhysics(/* parameters */);
			{
				// BrnDeformableObject.cpp:3188
				int32_t liSensorIndex;

			}
			{
				// BrnDeformableObject.cpp:3213
				int32_t liWheelIndex;

				{
					// BrnDeformableObject.cpp:3215
					int32_t liSphereIndex;

				}
			}
			rw::math::vpu::operator-=(/* parameters */);
			rw::math::vpu::Cross(/* parameters */);
			rw::math::vpu::operator+=(/* parameters */);
			rw::math::vpu::NormalizeReturnMagnitude(/* parameters */);
			rw::math::vpu::Vector3Plus::Set(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
		}
		CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	}
	{
		// BrnDeformableObject.cpp:3159
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		Vehicle::Wheel::GetPosition(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsPhysics::RigidBodyId::operator std::uint64_t(/* parameters */);
		CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	DeformationSensor::ClearStoredContacts(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsGeometric::Sphere::SetPosition(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	DeformationSensor::ClearBiggestImpulseThisFrame(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::NormalizeReturnMagnitude(/* parameters */);
	rw::math::vpu::Vector3Plus::Set(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

// BrnDeformableObject.cpp:1940
void BrnPhysics::Deformation::DeformableObject::UpdateOutputContactSpies(OutputBuffer *  lpSimOutput, PotentialContactInterface *  lpPotentialContactsInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:1943
		int32_t liSensor;

	}
}

// BrnDeformableObject.cpp:2374
void BrnPhysics::Deformation::DeformableObject::DetachPart(InputBuffer *  lpSimInput, OutputBuffer *  lpPhysicsModuleOutputBuffer, DetachedPartManager *  lpDetachedPartManager, int32_t  liPartIndex, int32_t  liTagPointToHangFrom, bool  lbActivateHinge) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:2376
		IKBodyPart * lpPart;

		// BrnDeformableObject.cpp:2377
		Matrix44Affine lVehicleTransform;

		// BrnDeformableObject.cpp:2378
		Matrix44Affine lPartLocalTransform;

		// BrnDeformableObject.cpp:2379
		Vector3 lPartLinearVelocity;

		// BrnDeformableObject.cpp:2380
		Vector3 lPartAngularVelocity;

		// BrnDeformableObject.cpp:2406
		Vector3 lVehicleLinearVelocity;

		// BrnDeformableObject.cpp:2407
		Vector3 lVehicleAngularVelocity;

		// BrnDeformableObject.cpp:2444
		PhysicalBodyPart * lpPhysicalBodyPart;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	IKBodyPart::GetPartGraphicsTransform(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	GetTransform(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
		// BrnDeformableObject.cpp:2509
		DetachedPartNotificationEvent lEvent;

		IKBodyPart::SetPartPoolIndex(/* parameters */);
		{
			// BrnDeformableObject.cpp:2478
			TagPoint * lpTagPoint;

			// BrnDeformableObject.cpp:2479
			int32_t liJointIndex;

			IKBodyPart::GetTagPoint(/* parameters */);
			TagPoint::GetJointIndex(/* parameters */);
			IKBodyPart::SetActiveJointIndex(/* parameters */);
			IKBodyPart::GetActiveJointSpec(/* parameters */);
			IKBodyPart::GetActiveJointSpec(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		}
		rw::math::vpu::TransformPoint(/* parameters */);
		PhysicsModuleIO::OutputBuffer::GetDeformationOutputInterface(/* parameters */);
		IKBodyPart::GetPartType(/* parameters */);
		CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
		DeformationOutputInterface::AddDetachedPartNotification(/* parameters */);
		{
		}
		CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::AddEventSafe(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
}

// BrnDeformableObject.cpp:2273
void BrnPhysics::Deformation::DeformableObject::CheckForForcedDetachment(InputBuffer *  lpSimInput, OutputBuffer *  lpPhysicsModuleOutputBuffer, DetachedPartManager *  lpDetachedPartManager, Random *  lpRandomGenerator, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:2285
		int32_t liPartIndex;

		CgsNumeric::Random::RandomUInt(/* parameters */);
		{
			// BrnDeformableObject.cpp:2292
			int32_t liJointIndex;

			// BrnDeformableObject.cpp:2295
			int32_t liTagPointIndex;

			CgsNumeric::Random::RandomUInt(/* parameters */);
			CgsNumeric::Random::RandomUInt(/* parameters */);
			IKBodyPart::GetTagPoint(/* parameters */);
		}
	}
}

// BrnDeformableObject.cpp:2012
void BrnPhysics::Deformation::DeformableObject::UpdateSpinningDetachment(InputBuffer *  lpSimInput, OutputBuffer *  lpPhysicsModuleOutputBuffer, DetachedPartManager *  lpDetachedPartManager, VecFloat  lvfTimeStep, const Random &  lRandom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VehicleRigidBody::GetVehiclePhysics(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Abs<VectorAxisX>(/* parameters */);
	rw::math::vpu::Pow(/* parameters */);
	vec_and(/* parameters */);
	rw::math::vpu::Abs<VectorAxisY>(/* parameters */);
	rw::math::vpu::Abs<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	{
	}
	vec_cmpgt(/* parameters */);
	{
	}
	vec_madd(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	vec_sub(/* parameters */);
	vec_add(/* parameters */);
	vec_sr(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	std(/* parameters */);
	vec_andc(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_andc(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_sel(/* parameters */);
	vec_sub(/* parameters */);
	vec_andc(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_ctu(/* parameters */);
	vec_add(/* parameters */);
	vec_ctf(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_cmpeq(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	std(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_add(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_sub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	{
		// BrnDeformableObject.cpp:2036
		uint8_t luRandomPart;

		// BrnDeformableObject.cpp:2039
		int32_t liPartIndex;

		CgsNumeric::Random::RandomUInt(/* parameters */);
		{
			// BrnDeformableObject.cpp:2047
			int32_t liJointIndex;

			// BrnDeformableObject.cpp:2050
			int32_t liTagPointIndex;

			CgsNumeric::Random::RandomUInt(/* parameters */);
			CgsNumeric::Random::RandomUInt(/* parameters */);
			IKBodyPart::GetTagPoint(/* parameters */);
			rw::math::vpu::GetVecFloat_Zero(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsPhysics::RigidBodyId::operator std::uint64_t(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

// BrnDeformableObject.cpp:1670
void BrnPhysics::Deformation::DeformableObject::Update(InputBuffer *  lpSimInput, OutputBuffer *  lpSimOutput, const InputBuffer *  lpPhysicsModuleInputBuffer, OutputBuffer *  lpPhysicsModuleOutputBuffer, VecFloat  lvfTimeStep, DetachedPartManager *  lpDetachedPartManager, DetachedWheelManager *  lpDetachedWheelManager, PotentialContactInterface *  lpPotentialContactsInterface, const Random &  lRandom, BrnGameState::GameStateModuleIO::EGameModeType  leGameMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:1742
		BrnPhysics::Vehicle::VehiclePhysics * lpVehiclePhysics;

		// BrnDeformableObject.cpp:1743
		VecFloat lvfTimeCrashing;

	}
	VehicleRigidBody::GetVehiclePhysics(/* parameters */);
	PhysicsModuleIO::OutputBuffer::GetSceneInputInterface(/* parameters */);
	GetEntitySphereSize(/* parameters */);
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::SetEntityRadius(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
	}
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>::AddEvent(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	GetEntitySphereSize(/* parameters */);
	rw::math::vpu::operator<=(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	Vehicle::VehiclePhysics::SetDeformedThisFrame(/* parameters */);
	Vehicle::VehiclePhysics::GetTimeCrashing(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	Vehicle::VehiclePhysics::GetTimeWithTraction(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	{
		// BrnDeformableObject.cpp:1756
		Wheel * lpWheel;

		CgsNumeric::Random::RandomVecFloat(/* parameters */);
		rw::math::vpu::GetVecFloat_Half(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		Vehicle::SimpleVehiclePhysics::GetWheel(/* parameters */);
		Vehicle::Wheel::Twist(/* parameters */);
	}
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Vehicle::SimpleVehiclePhysics::GetWheel(/* parameters */);
}

// BrnDeformableObject.cpp:3886
void BrnPhysics::Deformation::DeformableObject::UpdateAndOutputJointStates(DeformationOutputInterface *  lpOutput, DetachedPartManager *  lpDetachedPartManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:3888
		PhysicalBodyPart * lpPart;

		// BrnDeformableObject.cpp:3889
		const IKBodyPart * lpIKPart;

		// BrnDeformableObject.cpp:3890
		int32_t liPartListIndex;

		// BrnDeformableObject.cpp:3891
		JointedPartStateEvent lEvent;

		// BrnDeformableObject.cpp:3894
		VecFloat lvfVehicleRadius;

		// BrnDeformableObject.cpp:3895
		Matrix44Affine lCarTransform;

		// BrnDeformableObject.cpp:3897
		Vector3 lCarPosition;

		GetEntitySphereSize(/* parameters */);
		GetTransform(/* parameters */);
	}
	PhysicalBodyPart::GetIKPart(/* parameters */);
	IKBodyPart::GetPartType(/* parameters */);
	PhysicalBodyPart::GetJointRotationProportion(/* parameters */);
	CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
	rw::math::vpu::operator/<VectorAxisW, VectorAxisW>(/* parameters */);
	PhysicalBodyPart::GetJointVelocity(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		{
			{
			}
		}
	}
	VecFloat<VectorAxisW>(/* parameters */);
	DeformationOutputInterface::AddJointedPartStateEvent(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	DetachedPartManager::GetPartFromIndex(/* parameters */);
	{
		// BrnDeformableObject.cpp:3943
		int32_t liPartPoolIndex;

		// BrnDeformableObject.cpp:3944
		PhysicalBodyPart * lpPart;

		// BrnDeformableObject.cpp:3945
		Vector3 lPartPosition;

		// BrnDeformableObject.cpp:3946
		Vector3 lCarToPartVec;

		// BrnDeformableObject.cpp:3947
		VecFloat lvfPartDistance;

		// BrnDeformableObject.cpp:3948
		VecFloat lvfPartRadius;

		// BrnDeformableObject.cpp:3950
		MaskScalar lIsTooFarAway;

		DetachedPartManager::GetPartFromIndex(/* parameters */);
		PhysicalBodyPart::GetSphereRadius(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		PhysicalBodyPart::GetRigidBodyTransform(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		{
			{
				{
				}
			}
		}
		CgsGeometric::Box::GetDimensions(/* parameters */);
		CgsGeometric::Box::GetFatness(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::CompGreaterThan(/* parameters */);
		rw::math::vpu::Select(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	SetEntitySphereSize(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	GetEntitySphereSize(/* parameters */);
	rw::math::vpu::operator<=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnDeformableObject.cpp:2183
void BrnPhysics::Deformation::DeformableObject::CheckForDetachment(InputBuffer *  lpSimInput, OutputBuffer *  lpPhysicsModuleOutputBuffer, DetachedPartManager *  lpDetachedPartManager, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:2185
		int32_t liPartIndex;

		{
			// BrnDeformableObject.cpp:2234
			bool lbIsExhaust;

		}
	}
	{
		// BrnDeformableObject.cpp:2200
		int32_t liTagPointToHangFrom;

		// BrnDeformableObject.cpp:2201
		bool lbDetachPart;

		{
			// BrnDeformableObject.cpp:2222
			bool lbAddJoint;

		}
	}
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
}

// BrnDeformableObject.cpp:2773
void BrnPhysics::Deformation::DeformableObject::UpdateWheels(InputBuffer *  lpSimInput, DetachedWheelManager *  lpDetachedWheelManager, float32_t  lfTimeStep, Random *  lpRandom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:2777
		int32_t liNumWheels;

	}
	{
		// BrnDeformableObject.cpp:2778
		int32_t liWheel;

		{
			// BrnDeformableObject.cpp:2780
			Wheel * lpWheel;

			// BrnDeformableObject.cpp:2789
			const WheelSpec * lpWheelSpec;

			Vehicle::SimpleVehiclePhysics::GetWheel(/* parameters */);
		}
	}
	StreamedDeformationSpec::GetWheelSpec(/* parameters */);
	{
		// BrnDeformableObject.cpp:2793
		const TagPoint * lpTagPoint;

		// BrnDeformableObject.cpp:2798
		Vector3 lWheelPos;

		TagPoint::GetPosition(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		{
			// BrnDeformableObject.cpp:2795
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		Vehicle::Wheel::GetPosition(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		{
			// BrnDeformableObject.cpp:2796
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			Vehicle::Wheel::GetPosition(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		Vehicle::Wheel::GetPosition(/* parameters */);
		SetY<VectorAxisY>(/* parameters */);
		Vehicle::Wheel::SetPosition(/* parameters */);
		ShouldDetachWheel(/* parameters */);
	}
	Vehicle::Wheel::Twist(/* parameters */);
	CgsNumeric::Random::RandomVecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
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
	{
		// BrnDeformableObject.cpp:2808
		VecFloat lvfDistanceFromLimitSq;

		// BrnDeformableObject.cpp:2809
		VecFloat lvfTwistAmount;

		// BrnDeformableObject.cpp:2815
		VecFloat lvfTwistLimit;

		TagPoint::GetOffsetFromInitialPosition(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::Vector4::operator[](/* parameters */);
		rw::math::vpu::GetVecFloat_Two(/* parameters */);
		TagPoint::GetDetachThresholdSquared(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		Vehicle::Wheel::SetTwistAmount(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		{
			// BrnDeformableObject.cpp:2826
			Matrix44Affine lVehicleTransform;

			// BrnDeformableObject.cpp:2827
			Matrix44Affine lPartLocalTransform;

			// BrnDeformableObject.cpp:2828
			Matrix44Affine lPartRenderTransform;

			// BrnDeformableObject.cpp:2845
			Vector3 lLinVel;

			// BrnDeformableObject.cpp:2846
			Vector3 lAngVel;

			// BrnDeformableObject.cpp:2861
			float lfHalfHeight;

			// BrnDeformableObject.cpp:2862
			float lfRadius;

			Vehicle::Wheel::Detach(/* parameters */);
			rw::math::vpu::IsOrthogonal3x3(/* parameters */);
			GetTransform(/* parameters */);
			rw::math::vpu::IsZero(/* parameters */);
			rw::math::vpu::Transpose(/* parameters */);
			rw::math::vpu::Mult(/* parameters */);
			rw::math::vpu::Vector3::Vector3(/* parameters */);
			{
			}
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::SelfSubtract(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
			rw::math::vpu::IsNormal3x3(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::Vector3::Vector3(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
			rw::math::vpu::IsZero(/* parameters */);
			rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
			Vehicle::Wheel::GetPosition(/* parameters */);
			rw::math::vpu::IsNormal3x3(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			rw::math::vpu::Vector3::Vector3(/* parameters */);
			rw::math::vpu::IsZero(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
			{
			}
			rw::math::vpu::MagnitudeSquared(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
			rw::math::vpu::IsOrthogonal3x3(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::SelfSubtract(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
			rw::math::vpu::Vector3::Vector3(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
			rw::math::vpu::IsZero(/* parameters */);
			rw::math::vpu::Vector3::Vector3(/* parameters */);
			rw::math::vpu::Vector3::SetZero(/* parameters */);
			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
			rw::math::vpu::operator>(/* parameters */);
			rw::math::vpu::Dot(/* parameters */);
			Vehicle::Wheel::GetAngularVelocity(/* parameters */);
			rw::math::vpu::Vector3::SetX(/* parameters */);
			rw::math::vpu::operator/<VectorAxisX>(/* parameters */);
			rw::math::vpu::TransformVector(/* parameters */);
			{
				{
				}
			}
			rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		}
		Vehicle::VehiclePhysics::GetLinearVelocityMagnitude(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
	}
	Vehicle::Wheel::GetAngularVelocity(/* parameters */);
	rw::math::vpu::Vector3::SetX(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	ShouldDetachWheel(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnDeformableObject.cpp:2833
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	}
	{
		// BrnDeformableObject.cpp:2832
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	}
}

// BrnDeformableObject.cpp:1799
void BrnPhysics::Deformation::DeformableObject::UpdateIKAndLocators(InputBuffer *  lpSimInput, OutputBuffer *  lpPhysicsModuleOutputBuffer, VecFloat  lvfTimeStep, DetachedPartManager *  lpDetachedPartManager, DetachedWheelManager *  lpDetachedWheelManager, Random *  lpRandom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	PhysicsModuleIO::OutputBuffer::GetDeformationOutputInterface(/* parameters */);
	PhysicsModuleIO::OutputBuffer::GetDeformationOutputInterfaceForEntityModules(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnDeformableObject.cpp:2629
void BrnPhysics::Deformation::DeformableObject::RemovePhysicalWheels(InputBuffer *  lpSimInput, OutputBuffer::SceneInputInterface *  lpSceneInterface, DetachedWheelManager *  lpDetachedWheelManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DetachedWheelManager::RemoveVehicleWheels(/* parameters */);
	CgsContainers::BitArray<20u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	DetachedWheelManager::RemoveWheel(/* parameters */);
}

// BrnDeformableObject.cpp:807
void BrnPhysics::Deformation::DeformableObject::Release(InputBuffer *  lpSimInput, OutputBuffer::SceneInputInterface *  lpSceneInterface, DetachedPartManager *  lpDetachedPartManager, DetachedWheelManager *  lpDetachedWheelManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsPhysics::RigidBodyId::SetInvalid(/* parameters */);
	CgsSceneManager::EntityId::SetInvalid(/* parameters */);
}

// BrnDeformableObject.cpp:445
void BrnPhysics::Deformation::DeformableObject::ResetDeformation(InputBuffer *  lpSimInput, OutputBuffer::SceneInputInterface *  lpSceneInterface, DetachedPartManager *  lpDetachedPartManager, DetachedWheelManager *  lpDetachedWheelManager, const VecFloat  lvfInitialDamage, BrnPhysics::Deformation::DeformationResetType  leDeformationType, bool  lbForceFullIKSolve, const Random &  lRandom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:447
		int32_t i;

		// BrnDeformableObject.cpp:448
		bool lbBeingSetToADamageState;

		// BrnDeformableObject.cpp:453
		bool lbResetParts;

		// BrnDeformableObject.cpp:476
		Vector3Plus lv3pCompressionScale_Scratch;

		// BrnDeformableObject.cpp:477
		Vector3 lvPosLimits;

		// BrnDeformableObject.cpp:478
		Vector3 lvNegLimits;

		// BrnDeformableObject.cpp:480
		AxisAlignedBox lAABB;

		// BrnDeformableObject.cpp:483
		Vector3 lDamagePoint;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	}
	rw::math::vpu::IsZero(/* parameters */);
	CgsNumeric::Random::RandomBool(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		// BrnDeformableObject.cpp:507
		int32_t liTagPointIndex;

	}
	StreamedDeformationSpec::GetTagPointSpec(/* parameters */);
	TagPoint::Construct(/* parameters */);
	TagPointSpec::GetWeightAVec(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	{
		// BrnDeformableObject.cpp:515
		int32_t liDrivenPointIndex;

	}
	StreamedDeformationSpec::GetDrivenPointSpec(/* parameters */);
	IKDrivenPoint::Construct(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	IKDrivenPointSpec::GetDesiredDistanceFromTagPointB(/* parameters */);
	IKDrivenPoint::Update(/* parameters */);
	IKDrivenPoint::ResolveConstraint(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	operator=<VectorAxisW>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::NormalizeFast(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	IKDrivenPoint::ResolveConstraint(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	IKDrivenPointSpec::GetDesiredDistanceFromTagPointA(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Vector3Plus::SetZero(/* parameters */);
	{
		// BrnDeformableObject.cpp:529
		int32_t liPartIndex;

		// BrnDeformableObject.cpp:530
		IKBodyPart * lpPart;

		{
			// BrnDeformableObject.cpp:535
			int32_t liWheelIndex;

		}
	}
	{
		// BrnDeformableObject.cpp:558
		int32_t liPartIndex;

	}
	{
		// BrnDeformableObject.cpp:560
		IKBodyPart * lpPart;

	}
	{
		// BrnDeformableObject.cpp:587
		int32_t liGlass;

	}
	{
		// BrnDeformableObject.cpp:595
		Wheel * lpWheel;

		// BrnDeformableObject.cpp:596
		const WheelSpec * lpWheelSpec;

		// BrnDeformableObject.cpp:598
		const TagPoint * lpTagPoint;

		// BrnDeformableObject.cpp:599
		Vector3 lWheelPos;

		Vehicle::SimpleVehiclePhysics::GetWheel(/* parameters */);
		Vehicle::Wheel::GetPosition(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		SetY<VectorAxisY>(/* parameters */);
		Vehicle::Wheel::SetPosition(/* parameters */);
		Vehicle::Wheel::Attach(/* parameters */);
	}
	{
		// BrnDeformableObject.cpp:606
		int32_t liGlass;

	}
	Vehicle::SimpleVehiclePhysics::RecordDeformationReset(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	StreamedDeformationSpec::GetDrivenPartSpec(/* parameters */);
	IKBodyPart::Construct(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::SetX(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		// BrnDeformableObject.cpp:578
		const int32_t KI_NUM_ITERS;

		{
			// BrnDeformableObject.cpp:579
			int32_t liLoop;

		}
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
}

// BrnDeformableObject.cpp:318
void BrnPhysics::Deformation::DeformableObject::Prepare(InputBuffer *  lpSimInput, uint16_t  lu16DeformableObjectIndex, const const AddDeformationModelEvent &  lEvent, OutputBuffer::SceneInputInterface *  lpSceneInterface, DetachedPartManager *  lpDetachedPartManager, DetachedWheelManager *  lpDetachedWheelManager, const Random &  lRandom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

// BrnDeformableObject.cpp:3397
void BrnPhysics::Deformation::DeformableObject::OutputWheelData(int32_t  liIndex, DeformationOutputInterfaceForEntityModules *  lpOutput, DetachedWheelManager *  lpDetachedWheelMan) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:3407
		VecFloat lvfVehicleRadius;

		// BrnDeformableObject.cpp:3408
		Matrix44Affine lCarTransform;

		// BrnDeformableObject.cpp:3410
		Vector3 lCarPosition;

		// BrnDeformableObject.cpp:3412
		bool lbHackIsOldCar;

		// BrnDeformableObject.cpp:3419
		WheelPhysicalStates lWheelStates;

		// BrnDeformableObject.cpp:3481
		VolumeInstanceId lId;

		GetEntitySphereSize(/* parameters */);
		GetTransform(/* parameters */);
	}
	WheelPhysicalStates(/* parameters */);
	{
		// BrnDeformableObject.cpp:3422
		int32_t liWheel;

		{
			// BrnDeformableObject.cpp:3424
			Wheel * lpWheel;

			Vehicle::SimpleVehiclePhysics::GetWheel(/* parameters */);
			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			Vehicle::Wheel::GetAngularVelocity(/* parameters */);
		}
	}
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	SetEntitySphereSize(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	GetEntitySphereSize(/* parameters */);
	rw::math::vpu::operator<=(/* parameters */);
	DeformationOutputInterfaceForEntityModules::AddWheelStates(/* parameters */);
	CgsSceneManager::VolumeInstanceId::Set(/* parameters */);
	operator=(/* parameters */);
	operator=(/* parameters */);
	{
		// BrnDeformableObject.cpp:3442
		const PhysicalWheel * lpPhysWheel;

		DetachedWheelManager::GetWheel(/* parameters */);
		CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
		{
		}
		{
			// BrnDeformableObject.cpp:3445
			Matrix44Affine lInverseX;

			// BrnDeformableObject.cpp:3464
			Vector3 lWheelPosition;

			// BrnDeformableObject.cpp:3465
			Vector3 lCarToWheelVec;

			// BrnDeformableObject.cpp:3466
			VecFloat lvfWheelDistance;

			// BrnDeformableObject.cpp:3467
			VecFloat lvfWheelRadius;

			// BrnDeformableObject.cpp:3468
			MaskScalar lIsTooFarAway;

			rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
			rw::math::vpu::Vector3::Vector3(/* parameters */);
			rw::math::vpu::Vector3::Set(/* parameters */);
			rw::math::vpu::Vector3::Set(/* parameters */);
			rw::math::vpu::Vector3::Set(/* parameters */);
			rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::CompGreaterThan(/* parameters */);
			rw::math::vpu::Magnitude(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::Select(/* parameters */);
			rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
		}
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
}

// BrnDeformableObject.cpp:3507
void BrnPhysics::Deformation::DeformableObject::DoBodyPartWorldContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *  lpTriCache, BrnPhysics::ContactGenList *  lpContactGenList, CollisionGenerator *  lpContactGenerator, CgsMemory::SimpleDataStreamProducer *  lpStream, const DetachedPartManager *  lpDetachedPartsManager, uint32_t  luResultListTag, LinearMalloc *  lpMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:3515
		int16_t li16NumPhysicalParts;

		// BrnDeformableObject.cpp:3516
		int16_t li16NumHingedParts;

		// BrnDeformableObject.cpp:3517
		bool lbHaveHingedParts;

		// BrnDeformableObject.cpp:3529
		Box lBoundingBox;

		// BrnDeformableObject.cpp:3530
		PrimitivePairListBuilder lHingedPartsCollisionList;

		// BrnDeformableObject.cpp:3531
		VolumeInstanceId lWorldId;

		// BrnDeformableObject.cpp:3532
		VolumeInstanceId lCarId;

		// BrnDeformableObject.cpp:3533
		const PhysicalBodyPart * lpCurrentPart;

		// BrnDeformableObject.cpp:3534
		int16_t li16CurrentPart;

		// BrnDeformableObject.cpp:3547
		PrimitivePairListBuilder lDetachedPartsCollisionList;

	}
	CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
	CgsSceneManager::VolumeInstanceId::Set(/* parameters */);
	DetachedPartManager::GetPartFromIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	PhysicalBodyPart::GetBoundingBox(/* parameters */);
	PhysicalBodyPart::GetIKPartIndex(/* parameters */);
	{
		// BrnDeformableObject.cpp:3583
		int32_t liNumCached4TriangleStructures;

		// BrnDeformableObject.cpp:3584
		int32_t liCacheSlotIndex;

		CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetNumCachedTriangleBatches(/* parameters */);
		CgsSceneManager::TriangleCacheManager::GetNumTriangleBatchesForCachedObject(/* parameters */);
		{
			// BrnDeformableObject.cpp:3594
			TriangleList lTriList;

			// BrnDeformableObject.cpp:3595
			const Triangle4 * lpCachedTriangles;

			// BrnDeformableObject.cpp:3604
			const VecFloat KVF_DEFAULT_PADDING;

			// BrnDeformableObject.cpp:3605
			VecFloat lvfMinDimension;

			// BrnDeformableObject.cpp:3607
			bool lbAllowOptimisedBoxTest;

			// BrnDeformableObject.cpp:3608
			const VecFloat KVF_MIN_HALF_SIZE_FOR_FAST_BOX_TEST;

			CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetCachedTriangles(/* parameters */);
			CgsSceneManager::CgsCollision::TriangleList::SetTriangleBuffer(/* parameters */);
			CgsNumeric::GetVector3MinComponent(/* parameters */);
			rw::math::vpl::VecSplat_Word<2>(/* parameters */);
			rw::math::vpl::VecSplat_Word<1>(/* parameters */);
			rw::math::vpl::VecMin(/* parameters */);
			rw::math::vpl::VecMin(/* parameters */);
			rw::math::vpu::operator>(/* parameters */);
			rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			ContactGenList::AddEntry(/* parameters */);
		}
	}
	{
		// BrnDeformableObject.cpp:3654
		int32_t liNumCached4TrianglesStructures;

		// BrnDeformableObject.cpp:3655
		int32_t liCacheSlotIndex;

		CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetNumCachedTriangleBatches(/* parameters */);
		CgsSceneManager::TriangleCacheManager::GetNumTriangleBatchesForCachedObject(/* parameters */);
		{
			// BrnDeformableObject.cpp:3664
			TriangleList lTriList;

			// BrnDeformableObject.cpp:3665
			const Triangle4 * lpCachedTriangles;

			// BrnDeformableObject.cpp:3670
			bool lbIsPlayer;

			// BrnDeformableObject.cpp:3673
			bool lbUseOptimisedBoxTest;

			CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetCachedTriangles(/* parameters */);
			CgsSceneManager::CgsCollision::TriangleList::SetTriangleBuffer(/* parameters */);
			ContactGenList::AddEntry(/* parameters */);
		}
	}
	CgsSceneManager::VolumeInstanceId::Set(/* parameters */);
	{
		// BrnDeformableObject.cpp:3573
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		// BrnDeformableObject.cpp:3612
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnDeformableObject.cpp:3721
void BrnPhysics::Deformation::DeformableObject::DoDetachedWheelWorldContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *  lpTriCache, BrnPhysics::ContactGenList *  lpContactGenList, CollisionGenerator *  lpContactGenerator, CgsMemory::SimpleDataStreamProducer *  lpStream, const DetachedWheelManager *  lpDetachedWheelManager, uint32_t  luResultListTag, LinearMalloc *  lpMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformableObject.cpp:3723
		PrimitivePairListBuilder lWheelCollisionList;

		// BrnDeformableObject.cpp:3724
		VolumeInstanceId lWorldId;

	}
	{
		// BrnDeformableObject.cpp:3732
		int32_t liWheel;

		{
			// BrnDeformableObject.cpp:3734
			const Wheel * lpWheel;

			// BrnDeformableObject.cpp:3741
			const PhysicalWheel * lpPhysWheel;

			// BrnDeformableObject.cpp:3748
			int32_t liCacheSlotIndex;

			// BrnDeformableObject.cpp:3749
			int32_t liNumCachedTriangleBatches;

		}
	}
	DetachedWheelManager::GetWheel(/* parameters */);
	CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
	{
	}
	PhysicalWheel::GetEntityId(/* parameters */);
	CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetNumCachedTriangleBatches(/* parameters */);
	CgsSceneManager::TriangleCacheManager::GetNumTriangleBatchesForCachedObject(/* parameters */);
	{
		// BrnDeformableObject.cpp:3755
		TriangleList lTriList;

		// BrnDeformableObject.cpp:3756
		const Triangle4 * lpCachedTriangles;

		// BrnDeformableObject.cpp:3764
		Cylinder lCylinder;

		CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetCachedTriangles(/* parameters */);
		CgsSceneManager::CgsCollision::TriangleList::SetTriangleBuffer(/* parameters */);
		PhysicalWheel::GetCylinder(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		CgsGeometric::Cylinder::Set(/* parameters */);
		ContactGenList::AddEntry(/* parameters */);
		{
			// BrnDeformableObject.cpp:3767
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

// _built-in_
namespace :: {
	// BrnDeformableObject.cpp:36
	extern bool gboEnableDeformationDebug;

	// BrnDeformableObject.cpp:34
	extern bool gbSlowMotionDeformation;

	// BrnDeformableObject.cpp:40
	extern bool gboAllowDetachment;

	// BrnDeformableObject.cpp:41
	extern bool gbAllowDriveTimeDeformation;

	// BrnDeformableObject.cpp:37
	extern bool gbAllowRandomDetachment;

	// BrnDeformableObject.cpp:44
	VecFloat KVF_SHOWTIME_RESTITUTION;

	// BrnDeformableObject.cpp:45
	VecFloat KVF_Y_COMPONENT_BIG_BOUNCE_MIN;

	// BrnDeformableObject.cpp:46
	VecFloat KF_SHOWTIME_BOUNCE_BOOST_SCALE;

	// BrnDeformableObject.cpp:47
	VecFloat KF_SHOWTIME_HIT_BY_PLAYER_CAR_IMPULSE_SCALE;

	// BrnDeformableObject.cpp:48
	VecFloat KF_SHOWTIME_MIN_WORLD_BOUNCE_POWER;

	// BrnDeformableObject.cpp:49
	VecFloat KF_SHOWTIME_MIN_VEHICLE_BOUNCE_POWER;

	// BrnDeformableObject.cpp:50
	VecFloat KF_SHOWTIME_MIN_VEHICLE_BOOST_POWER;

	// BrnDeformableObject.cpp:51
	VecFloat KF_SHOWTIME_HIT_CAR_DEFORM_SCALE;

	// BrnDeformableObject.cpp:52
	VecFloat KF_SHOWTIME_TRAFFIC_DEFORM_SCALE;

	// BrnDeformableObject.cpp:53
	VecFloat KF_SHOWTIME_PLAYER_CAR_HIT_IMPULSE_SCALE;

	// BrnDeformableObject.cpp:54
	VecFloat KF_SHOWTIME_MIN_VEHICLE_MASS_SCALE;

	// BrnDeformableObject.cpp:55
	VecFloat KF_SHOWTIME_MAX_VEHICLE_MASS_SCALE;

	// BrnDeformableObject.cpp:56
	VecFloat KF_SHOWTIME_BIG_IMPACT_MAGNITUDE;

	// BrnDeformableObject.cpp:59
	VecFloat KVF_AFTERTOUCH_FRICTION_COEFF;

	// BrnDeformableObject.cpp:60
	VecFloat KVF_CRASH_FRICTION_COEFF;

	// BrnDeformableObject.cpp:61
	VecFloat KVF_WORLD_CRASH_NORMAL_FRICTION_COEFF;

	// BrnDeformableObject.cpp:62
	VecFloat KVF_CAR_CRASH_NORMAL_FRICTION_COEFF;

	// BrnDeformableObject.cpp:65
	const VecFloat KVF_MAX_DEFORMABLE_OBJECT_SPHERE_SIZE;

	// BrnDeformableObject.cpp:67
	const int32_t KI_PART_NOT_FOUND = 4294967295;

	// BrnDeformableObject.cpp:70
	const uint8_t KU_HINGE_PROBABILITY = 35;

	// BrnDeformableObject.cpp:71
	const uint8_t KU_DETACH_PART_PROBABILITY = 10;

	// BrnDeformableObject.cpp:73
	const VecFloat KVF_SCRATCH_COEFF;

}

// BrnDeformableObject.cpp:122
// BrnDeformableObject.cpp:96
// BrnDeformableObject.cpp:97
// BrnDeformableObject.cpp:102
// BrnDeformableObject.cpp:103
// BrnDeformableObject.cpp:104
// BrnDeformableObject.cpp:105
// BrnDeformableObject.cpp:106
// BrnDeformableObject.cpp:98
// BrnDeformableObject.cpp:99
// BrnDeformableObject.cpp:100
