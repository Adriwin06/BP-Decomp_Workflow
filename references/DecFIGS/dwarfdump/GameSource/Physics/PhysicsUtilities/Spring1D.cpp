// Spring1D.cpp:41
void BrnPhysics::Spring1D::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Spring1D.cpp:73
void BrnPhysics::Spring1D::Prepare(float32_t  lfDesiredLength, float32_t  lfCurrentLength, float32_t  lfMass, float32_t  lfStiffness, float32_t  lfDampening, float32_t  lfMinStretch, float32_t  lfMaxStrectch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Spring1D.cpp:101
void BrnPhysics::Spring1D::Update(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Spring1D.cpp:103
		float32_t lfStretch;

		rw::math::vpu::Clamp(/* parameters */);
	}
}

// Spring1D.cpp:136
void BrnPhysics::Spring1D::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Spring1D.cpp:160
void BrnPhysics::Spring1D::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Spring1D.cpp:210
void BrnPhysics::SuspensionSpring::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	SetPosition(/* parameters */);
	rw::math::vpl::VecRotateLeftWithMaskedInsertionImm<1, 0>(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// Spring1D.cpp:188
void BrnPhysics::SuspensionSpring::Prepare(const VecFloat  lrStiffness, const VecFloat  lrDamping, const VecFloat  lrMass) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetStiffness(/* parameters */);
	rw::math::vpl::VecRotateLeftWithMaskedInsertionImm<8, 0>(/* parameters */);
	SetDamping(/* parameters */);
	rw::math::vpl::VecRotateLeftWithMaskedInsertionImm<4, 0>(/* parameters */);
	SetMass(/* parameters */);
	rw::math::vpl::VecRotateLeftWithMaskedInsertionImm<2, 0>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

