// BrnRegion.cpp:48
void BrnTrigger::BoxRegion::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRegion.cpp:142
void BrnTrigger::LineRegion::Construct(const LineRegion *  lpLineRegion, LinearMalloc *  lpLinearMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRegion.cpp:180
void BrnTrigger::LineRegion::IsInside(const rw::math::vpu::Vector3  lPoint) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SphereRegion::IsInside(/* parameters */);
}

// BrnRegion.cpp:253
void BrnTrigger::LineRegion::Build(Vector3 *  lpaPoints, int32_t  liPointCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRegion.cpp:257
		Vector3 lVectorSum;

		// BrnRegion.cpp:258
		Vector3 lMax;

		// BrnRegion.cpp:259
		Vector3 lMin;

		// BrnRegion.cpp:260
		Vector3 lCenter;

		// BrnRegion.cpp:261
		int32_t liPointIndex;

		// BrnRegion.cpp:262
		float32_t lfRadiusSquared;

	}
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Sqrt(/* parameters */);
	SphereRegion::Construct(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		// BrnRegion.cpp:270
		Vector3 lCurrentPoint;

		rw::math::vpu::operator+=(/* parameters */);
	}
	{
		// BrnRegion.cpp:280
		Vector3 lCurrentPoint;

		// BrnRegion.cpp:281
		float32_t lfThisRadiusSquared;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
	rw::math::vpu::MagnitudeSquared(/* parameters */);
}

// BrnRegion.cpp:163
void BrnTrigger::LineRegion::Construct(Vector3 *  lpaPoints, int32_t  liPointCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRegion.cpp:154
void BrnTrigger::LineRegion::Construct(Vector3 *  lpaPoints, int32_t  liPointCount, LinearMalloc *  lpLinearMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRegion.cpp:94
void BrnTrigger::BoxRegion::FixDown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRegion.cpp:117
void BrnTrigger::BoxRegion::FixUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRegion.cpp:224
void BrnTrigger::LineRegion::FixUp(MemoryResource  lpBaseData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRegion.cpp:226
		int32_t liPointIndex;

	}
}

// BrnRegion.cpp:65
void BrnTrigger::BoxRegion::Construct(const rw::math::vpu::Vector3  lPosition, const rw::math::vpu::Quaternion &  lRotation, const rw::math::vpu::Vector3  lDimensions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRegion.cpp:67
		Matrix44Affine lMatrix;

		// BrnRegion.cpp:68
		Vector3 lEulerRotation;

		rw::math::vpu::EulerXYZFromQuaternion(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::EulerXYZFromMatrix33(/* parameters */);
	{
		{
			{
			}
		}
	}
	{
	}
	{
		std(/* parameters */);
	}
	{
	}
	{
	}
	rw::math::vpu::Quaternion::Quaternion(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	{
	}
	{
	}
	vec_madd(/* parameters */);
	{
	}
	{
	}
	vec_madd(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	std(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	{
	}
	vec_re(/* parameters */);
	vec_andc(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
}

// BrnRegion.cpp:196
void BrnTrigger::LineRegion::FixDown(MemoryResource  lpBaseData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRegion.cpp:198
		int32_t liPointIndex;

	}
}

