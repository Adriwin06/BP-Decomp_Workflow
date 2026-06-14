// BrnVehicleOutputInterface.cpp:120
void BrnPhysics::Vehicle::VehicleOutputInterface::UpdateRaceCarState(int32_t  liRaceCarIndex, const BrnPhysics::Vehicle::RaceCarPhysics *  lpVehiclePhysics, const VehicleDriver *  lpDriverControl, bool  lbForceReset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleOutputInterface.cpp:122
		BrnPhysics::Vehicle::Wheel::RoadContact lRoadContact;

		// BrnVehicleOutputInterface.cpp:123
		RaceCarState * lpState;

		// BrnVehicleOutputInterface.cpp:242
		Vector3 lSpaceOffset;

	}
	VehiclePhysics::GetAbsDriftScale(/* parameters */);
	VehiclePhysics::GetTimeSinceLastRaceCarContact(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	VehicleAttribs::VehicleBaseAttribs::GetMaxSpeed(/* parameters */);
	VehiclePhysics::GetTimeInAir(/* parameters */);
	VehicleAttribs::BoostAttribs::GetMaxBoostSpeed(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	VehiclePhysics::GetDriftScale(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	VehiclePhysics::GetBoostingTime(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	VehiclePhysics::GetRPM(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	Engine::GetRPM(/* parameters */);
	VehicleAttribs::EngineAttribs::GetGearUpRPM(/* parameters */);
	VehiclePhysics::GetDownShiftRPM(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		// BrnVehicleOutputInterface.cpp:194
		int32_t liIndex;

		VehicleAttribs::EngineAttribs::GetGearRatio(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
	{
		// BrnVehicleOutputInterface.cpp:204
		int32_t liIndex;

		{
			// BrnVehicleOutputInterface.cpp:208
			const WheelLite & lLiteWheel;

			// BrnVehicleOutputInterface.cpp:209
			const const Wheel & lWheel;

			SimpleVehiclePhysics::GetWheel(/* parameters */);
			Wheel::GetSuspensionHeight(/* parameters */);
			Wheel::GetAngularVelocity(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			Wheel::GetRadius(/* parameters */);
			VecFloat<VectorAxisX>(/* parameters */);
			rw::math::vpu::Vector3::GetY(/* parameters */);
			VecFloat<VectorAxisW>(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			Wheel::GetRotation(/* parameters */);
			Wheel::GetSkidFactor(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			Wheel::GetMaxSuspensionHeight(/* parameters */);
			rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			Wheel::GetLongSpeed(/* parameters */);
			Wheel::GetRoadContact(/* parameters */);
		}
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		VecFloat<VectorAxisW>(/* parameters */);
		Wheel::GetRoadLatSpeed(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		Wheel::GetRoadLongSpeed(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
	}
	VehiclePhysics::GetFrameDisplacement(/* parameters */);
	SimpleVehiclePhysics::GetAboveGroundTestResult(/* parameters */);
	AboveGroundTestResult::SetFrom(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		// BrnVehicleOutputInterface.cpp:253
		bool lbAllWheelsHaveTraction;

		// BrnVehicleOutputInterface.cpp:260
		float32_t lfXAngVel;

		// BrnVehicleOutputInterface.cpp:261
		float32_t lfZAngVel;

		ExternallySimulatedBody::GetTransform(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::fpu::Abs<float>(/* parameters */);
		rw::math::fpu::Abs<float>(/* parameters */);
	}
	Wheel::GetMinSuspensionHeight(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	VehiclePhysics::GetTimeCrashing(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	VehiclePhysics::GetTimeDrifting(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
}

// BrnVehicleOutputInterface.cpp:46
void BrnPhysics::Vehicle::VehicleOutputInterface::AddTrafficState(const EntityId  lEntityID, const PhysicalTrafficVehicle *  lpTrafficVehicle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleOutputInterface.cpp:48
		PhysicalTrafficState * lpState;

		// BrnVehicleOutputInterface.cpp:51
		const BrnPhysics::Vehicle::SimpleVehiclePhysics * lpTrafficPhysics;

		// BrnVehicleOutputInterface.cpp:54
		Vector3 lCoMOffset;

		// BrnVehicleOutputInterface.cpp:95
		const AboveGroundTestResult * lpLineTestResult;

		// BrnVehicleOutputInterface.cpp:98
		Vector3 lSpaceOffset;

		{
			// BrnVehicleOutputInterface.cpp:70
			int32_t liWheel;

			{
				// BrnVehicleOutputInterface.cpp:72
				const const Wheel & lWheel;

				// BrnVehicleOutputInterface.cpp:83
				BrnPhysics::Vehicle::Wheel::RoadContact lRoadContact;

			}
		}
	}
}

// _built-in_
namespace :: {
	// BrnVehicleOutputInterface.cpp:21
	float32_t KF_MAXIMUM_TIME_CRASHING;

	// BrnVehicleOutputInterface.cpp:22
	float32_t KF_MINIMUM_ANG_VEL;

}

