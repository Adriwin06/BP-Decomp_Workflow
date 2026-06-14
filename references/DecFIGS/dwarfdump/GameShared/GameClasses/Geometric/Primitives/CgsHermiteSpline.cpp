// CgsHermiteSpline.cpp:87
void CgsGeometric::HermiteSpline::GetPosition(float32_t  lfT) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHermiteSpline.cpp:89
		Vector3 lTVector;

		// CgsHermiteSpline.cpp:90
		Vector3 lPosition4;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		Vector3<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
		{
		}
		rw::math::vpu::TransformPoint(/* parameters */);
	}
}

// CgsHermiteSpline.cpp:125
void CgsGeometric::HermiteSpline::GetLength(int32_t  liSubdivisionCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHermiteSpline.cpp:127
		Vector3 lPreviousPosition;

		// CgsHermiteSpline.cpp:128
		float32_t lfLength;

		// CgsHermiteSpline.cpp:129
		int32_t liIndex;

	}
	{
		// CgsHermiteSpline.cpp:133
		Vector3 lPosition;

		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
	}
	rw::math::vpu::Magnitude(/* parameters */);
}

// CgsHermiteSpline.cpp:106
void CgsGeometric::HermiteSpline::GetTangent(float32_t  lfT) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHermiteSpline.cpp:108
		Vector3 lTVector;

		// CgsHermiteSpline.cpp:109
		Vector3 lTangent4;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		Vector3<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		{
		}
		rw::math::vpu::TransformPoint(/* parameters */);
	}
}

// CgsHermiteSpline.cpp:63
void CgsGeometric::HermiteSpline::Construct(const rw::math::vpu::Vector3  lPosition0, const rw::math::vpu::Vector3  lPosition1, const rw::math::vpu::Vector3  lTangent0, const rw::math::vpu::Vector3  lTangent1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHermiteSpline.cpp:65
		Matrix44 lTmpMatrix;

		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Matrix44::SetX(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
}

// CgsHermiteSpline.cpp:33
// CgsHermiteSpline.cpp:41
