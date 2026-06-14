// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnGlobalIrradianceManager.cpp:37
	const VecFloat KF_UPDATE_COEFF_C1;

	// BrnGlobalIrradianceManager.cpp:38
	const VecFloat KF_UPDATE_COEFF_C2;

	// BrnGlobalIrradianceManager.cpp:39
	const VecFloat KF_UPDATE_COEFF_C3;

	// BrnGlobalIrradianceManager.cpp:40
	const VecFloat KF_UPDATE_COEFF_C4;

	// BrnGlobalIrradianceManager.cpp:41
	const VecFloat KF_UPDATE_COEFF_C5;

	// BrnGlobalIrradianceManager.cpp:43
	const VecFloat KF_ONE;

	// BrnGlobalIrradianceManager.cpp:44
	const VecFloat KF_THREE;

	// BrnGlobalIrradianceManager.cpp:47
	const VecFloat KF_COMPUTE_MATRIX_C1;

	// BrnGlobalIrradianceManager.cpp:48
	const VecFloat KF_COMPUTE_MATRIX_C2;

	// BrnGlobalIrradianceManager.cpp:49
	const VecFloat KF_COMPUTE_MATRIX_C3;

	// BrnGlobalIrradianceManager.cpp:50
	const VecFloat KF_COMPUTE_MATRIX_C4;

	// BrnGlobalIrradianceManager.cpp:51
	const VecFloat KF_COMPUTE_MATRIX_C5;

}

// BrnGlobalIrradianceManager.cpp:71
void BrnWorld::GlobalIrradianceManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGlobalIrradianceManager.cpp:87
void BrnWorld::GlobalIrradianceManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGlobalIrradianceManager.cpp:266
void BrnWorld::GlobalIrradianceManager::ComputeIrradianceMatrix(int32_t  liChannel, Vector3 *  lpIrradianceCoeffs, const Matrix44 &  lMatrixOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector3::operator[](/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::Vector3::operator[](/* parameters */);
	rw::math::vpu::Vector3::operator[](/* parameters */);
	rw::math::vpu::Matrix44::GetElem(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::Vector3::operator[](/* parameters */);
	rw::math::vpu::Vector3::operator[](/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3::operator[](/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::Matrix44::GetElem(/* parameters */);
	rw::math::vpu::Matrix44::GetElem(/* parameters */);
	rw::math::vpu::Vector3::operator[](/* parameters */);
	rw::math::vpu::Matrix44::GetElem(/* parameters */);
	rw::math::vpu::Vector3::operator[](/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
}

// BrnGlobalIrradianceManager.cpp:304
void BrnWorld::GlobalIrradianceManager::UpdateCoefficients(const rw::math::vpu::Vector3  lColour, const rw::math::vpu::Vector3  lVector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGlobalIrradianceManager.cpp:306
		VecFloat lX;

		// BrnGlobalIrradianceManager.cpp:307
		VecFloat lY;

		// BrnGlobalIrradianceManager.cpp:308
		VecFloat lZ;

		rw::math::vpu::operator*(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		VecFloat<VectorAxisZ>(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

// BrnGlobalIrradianceManager.cpp:211
void BrnWorld::GlobalIrradianceManager::ComputeFrameCoeffs(const rw::math::vpu::Vector3  lKeyLightDirection, const rw::math::vpu::Vector3  lSunFillColour, const rw::math::vpu::Vector3  lShadowFillColour, const rw::math::vpu::Vector3  lRightFillColour, const rw::math::vpu::Vector3  lLeftFillColour, const rw::math::vpu::Vector3  lUpFillColour, const rw::math::vpu::Vector3  lDownFillColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGlobalIrradianceManager.cpp:215
		Vector3 lUpDirection;

		// BrnGlobalIrradianceManager.cpp:220
		Vector3 lSunFillDirection;

		// BrnGlobalIrradianceManager.cpp:225
		Vector3 lRightDirection;

		rw::math::vpu::operator< <VectorAxisY>(/* parameters */);
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator><VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
}

// BrnGlobalIrradianceManager.cpp:113
void BrnWorld::GlobalIrradianceManager::ComputeIrradiance(const rw::math::vpu::Vector3  lKeyLightDirection, const rw::math::vpu::Vector3  lSunFillColour, const rw::math::vpu::Vector3  lShadowFillColour, const rw::math::vpu::Vector3  lRightFillColour, const rw::math::vpu::Vector3  lLeftFillColour, const rw::math::vpu::Vector3  lTopFillColour, const rw::math::vpu::Vector3  lBottomFillColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44::GetElem(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44::GetElem(/* parameters */);
	{
	}
	rw::math::vpu::Matrix44::GetElem(/* parameters */);
	{
	}
	{
	}
	{
	}
}

