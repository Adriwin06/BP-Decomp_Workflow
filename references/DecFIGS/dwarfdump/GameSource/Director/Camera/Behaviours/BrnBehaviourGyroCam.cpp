// BrnBehaviourGyroCam.cpp:28
void BrnDirector::Camera::AttachmentTruck::Parameters::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourGyroCam.cpp:37
void BrnDirector::Camera::AttachmentTruck::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourGyroCam.cpp:48
void BrnDirector::Camera::AttachmentTruck::Set(const VecFloat  lSpeedRatio, const rw::math::vpu::Vector3  lVelocity, const rw::math::vpu::Vector3  lPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::NormalizeReturnMagnitude(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
}

// BrnBehaviourGyroCam.cpp:128
void BrnDirector::Camera::BehaviourGyroCam::Parameters::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Behaviour::Parameters::Construct(/* parameters */);
}

// BrnBehaviourGyroCam.cpp:74
void BrnDirector::Camera::AttachmentTruck::Update(const rw::math::vpu::Vector3  lPosition, const rw::math::vpu::Vector3  lLinearVelocity, const VecFloat  lWorldTimestep, const const BrnDirector::Camera::AttachmentTruck::Parameters &  lParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBehaviourGyroCam.cpp:111
		VecFloat lSpeed;

		// BrnBehaviourGyroCam.cpp:112
		VecFloat lIdealSpeed;

		rw::math::fpu::IsZero(/* parameters */);
	}
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
	rw::math::vpu::Subtract(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		// BrnBehaviourGyroCam.cpp:82
		VecFloat lSpeed;

		// BrnBehaviourGyroCam.cpp:83
		VecFloat lOriginalSpeed;

		// BrnBehaviourGyroCam.cpp:95
		const VecFloat kMaxRatio;

		rw::math::vpu::NormalizeReturnMagnitude(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::operator=(/* parameters */);
		rw::math::vpu::GetVecFloat_Half(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::GetVecFloat_One(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
}

