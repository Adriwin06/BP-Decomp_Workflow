// BrnEnvironmentMap.h:31
namespace BrnGraphics {
	// BrnEnvironmentMap.cpp:28
	const float32_t KF_ENVMAP_NEAR_CLIP_PLANE;

	// BrnEnvironmentMap.cpp:29
	const float32_t KF_ENVMAP_FAR_CLIP_PLANE;

	// BrnEnvironmentMap.cpp:30
	const float32_t KF_ENVMAP_FOV_HORIZONTAL;

	// BrnEnvironmentMap.cpp:31
	const float32_t KF_ENVMAP_ASPECT_RATIO;

	// BrnEnvironmentMap.cpp:35
	const rw::math::vpu::Vector3 kPositiveX;

	// BrnEnvironmentMap.cpp:36
	const rw::math::vpu::Vector3 kPositiveY;

	// BrnEnvironmentMap.cpp:37
	const rw::math::vpu::Vector3 kPositiveZ;

	// BrnEnvironmentMap.cpp:38
	const rw::math::vpu::Vector3 kNegativeX;

	// BrnEnvironmentMap.cpp:39
	const rw::math::vpu::Vector3 kNegativeY;

	// BrnEnvironmentMap.cpp:40
	const rw::math::vpu::Vector3 kNegativeZ;

	// BrnEnvironmentMap.cpp:41
	const rw::math::vpu::Vector3 kZero;

	// BrnEnvironmentMap.cpp:45
	Matrix44Affine[6] kaEnvMapViewMatrices;

}

// BrnEnvironmentMap.cpp:111
void BrnGraphics::EnvironmentMap::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentMap.cpp:114
		uint32_t luEnvMapFace;

	}
}

// BrnEnvironmentMap.cpp:159
void BrnGraphics::EnvironmentMap::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentMap.cpp:162
		uint32_t luEnvMapFace;

	}
}

// BrnEnvironmentMap.cpp:85
void BrnGraphics::EnvironmentMap::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentMap.cpp:94
		uint32_t luEnvMapFace;

		rw::math::vpu::GetVector3_Zero(/* parameters */);
	}
}

// BrnEnvironmentMap.cpp:182
void BrnGraphics::EnvironmentMap::Update(const rw::math::vpu::Vector3  lCameraPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentMap.cpp:186
		uint32_t luEnvMapFace;

	}
	rw::math::vpu::operator+(/* parameters */);
}

// BrnEnvironmentMap.cpp:131
void BrnGraphics::EnvironmentMap::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentMap.cpp:134
		uint32_t luEnvMapFace;

		CgsGraphics::Camera::SetFovHorizontal(/* parameters */);
		CgsGraphics::Camera::SetAspectRatio(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Tan(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::Tan(/* parameters */);
		{
		}
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		vec_sel(/* parameters */);
		vec_add(/* parameters */);
		vec_cts(/* parameters */);
		vec_ctf(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		std(/* parameters */);
		std(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::vpu::ATan(/* parameters */);
		vec_madd(/* parameters */);
		std(/* parameters */);
		vec_and(/* parameters */);
		vec_andc(/* parameters */);
		vec_cmpgt(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_add(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Tan(/* parameters */);
		CgsGraphics::Camera::SetFarClipPlane(/* parameters */);
		CgsGraphics::Camera::SetNearClipPlane(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Tan(/* parameters */);
		vec_sel(/* parameters */);
		vec_add(/* parameters */);
		vec_cts(/* parameters */);
		vec_ctf(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		std(/* parameters */);
		std(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::Tan(/* parameters */);
		{
		}
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		vec_sel(/* parameters */);
		vec_add(/* parameters */);
		vec_cts(/* parameters */);
		vec_ctf(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		std(/* parameters */);
		std(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::vpu::ATan(/* parameters */);
		vec_madd(/* parameters */);
		std(/* parameters */);
		vec_and(/* parameters */);
		vec_andc(/* parameters */);
		vec_cmpgt(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_add(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Tan(/* parameters */);
	}
}

