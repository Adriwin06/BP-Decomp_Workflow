// BrnDirectorAllVehicleData.cpp:36
void BrnDirector::AllVehicleData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<BrnDirector::AllVehicleData::NearestCarInfo,8u>::Construct(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
}

// BrnDirectorAllVehicleData.cpp:59
void BrnDirector::AllVehicleData::Update(BitArray<8u>  lUsedRaceCars, const VehicleInfo *  lpRaceCars, EActiveRaceCarIndex  lePlayerRaceCarIndex, const Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u> *  lpTrafficVehicleArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDirectorAllVehicleData.cpp:96
		const const rw::math::vpu::Matrix44Affine & lPlayerTransform;

		// BrnDirectorAllVehicleData.cpp:98
		const rw::math::vpu::Vector3 lFlatPlayerZ;

		// BrnDirectorAllVehicleData.cpp:103
		const rw::math::vpu::Matrix44Affine lFlatPlayerTransform;

		// BrnDirectorAllVehicleData.cpp:108
		VecFloat lUnused;

		// BrnDirectorAllVehicleData.cpp:126
		EActiveRaceCarIndex leRaceIndex;

		// BrnDirectorAllVehicleData.cpp:127
		BrnDirector::AllVehicleData::NearestCarInfo lTemp;

	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	rw::math::vpu::Vector3::GetX(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetW(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::Array<BrnDirector::AllVehicleData::NearestCarInfo,8u>::Clear(/* parameters */);
	{
	}
	GetRaceCar(/* parameters */);
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	CgsContainers::Array<BrnDirector::AllVehicleData::NearestCarInfo,8u>::Append(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetW(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetZ(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Matrix44Affine::YAxis(/* parameters */);
	rw::math::vpu::Matrix44Affine::XAxis(/* parameters */);
	{
	}
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
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
}

// BrnDirectorAllVehicleData.cpp:26
// BrnDirectorAllVehicleData.cpp:27
