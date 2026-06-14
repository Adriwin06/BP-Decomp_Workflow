// Camera.cpp:32
void BrnDirector::Camera::Camera::ShotSelectionInfo::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Camera.cpp:53
void BrnDirector::Camera::Camera::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
}

// Camera.cpp:41
void BrnDirector::Camera::Camera::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Camera.cpp
void BrnDirector::Camera::Camera::ValidateTransformWithDebugInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Camera.cpp:85
		Vector3 sOneMillion;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Abs(/* parameters */);
	rw::math::vpu::CompLessThan(/* parameters */);
	rw::math::vpu::CompAllTrue(/* parameters */);
	rw::math::vpu::MaskScalar::GetBool(/* parameters */);
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
		// Camera.cpp:86
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
		// Camera.cpp:80
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
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

// Camera.cpp:98
void BrnDirector::Camera::Camera::CopyToCgsCamera(Camera *  lpCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Camera.cpp:107
		float lfFOVHorizontal;

		CgsGraphics::Camera::SetFovHorizontal(/* parameters */);
	}
	rw::math::vpu::Tan(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	vec_sel(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::ATan(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Tan(/* parameters */);
	vec_sel(/* parameters */);
	vec_add(/* parameters */);
	vec_add(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	vec_cts(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
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
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	std(/* parameters */);
	std(/* parameters */);
	std(/* parameters */);
	std(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	std(/* parameters */);
	vec_andc(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
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
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Tan(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	GetNearClipDistance(/* parameters */);
	CgsGraphics::Camera::SetNearClipPlane(/* parameters */);
	CgsGraphics::Camera::SetFarClipPlane(/* parameters */);
}

// Camera.cpp:21
// Camera.cpp:22
// Camera.cpp:23
