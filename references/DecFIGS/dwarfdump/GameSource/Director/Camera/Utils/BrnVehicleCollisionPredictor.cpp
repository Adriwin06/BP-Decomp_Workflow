// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// CameraUtils.h:42
		namespace Utils {
			// BrnVehicleCollisionPredictor.cpp:49
			extern bool RayIntersectsEllipsoid(Vector3, Vector3, Vector3, Matrix44Affine);

		}

	}

}

// BrnVehicleCollisionPredictor.cpp:71
void BrnDirector::Camera::Utils::VehicleCollisionPredictor::Update(const const AllVehicleData &  lAllVehicleData, VecFloat  lTimestep, Vector3  lPosition, Vector3  lVelocity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleCollisionPredictor.cpp:74
		const const Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u> & lTraffic;

		// BrnVehicleCollisionPredictor.cpp:75
		uint32_t luLoop;

		// BrnVehicleCollisionPredictor.cpp:79
		VecFloat lFive;

		AllVehicleData::GetTraffic(/* parameters */);
	}
	rw::math::vpu::operator+(/* parameters */);
	CgsContainers::Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>::GetLength(/* parameters */);
	{
		// BrnVehicleCollisionPredictor.cpp:83
		Vector3 lVelocityToVehicle;

		// BrnVehicleCollisionPredictor.cpp:84
		Vector3 lVelocityToTraffic5;

		// BrnVehicleCollisionPredictor.cpp:86
		Vector3 lHalfExtents;

		// BrnVehicleCollisionPredictor.cpp:89
		Ellipsoid lEllipsoid;

		// BrnVehicleCollisionPredictor.cpp:91
		bool lbIntersection;

		{
			// BrnVehicleCollisionPredictor.cpp:98
			Vector3 lPositionToVehicleNormalised;

			// BrnVehicleCollisionPredictor.cpp:99
			VecFloat lDistance;

			// BrnVehicleCollisionPredictor.cpp:100
			float32_t lfTimeToIntersection;

		}
	}
	CgsContainers::Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>::GetItem(/* parameters */);
	CgsContainers::Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>::GetItem(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsContainers::Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>::GetItem(/* parameters */);
	CgsContainers::Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>::GetItem(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	{
	}
	CgsGeometric::Ellipsoid::Set(/* parameters */);
	rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	CgsContainers::Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>::GetItem(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::NormalizeReturnMagnitude(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

