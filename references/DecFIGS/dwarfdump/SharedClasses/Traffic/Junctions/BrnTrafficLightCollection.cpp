// BrnTrafficLightCollection.cpp:207
void BrnTraffic::TrafficLightCollection::FixDown(const void *  lpBaseData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficLightCollection.cpp:166
void BrnTraffic::TrafficLightCollection::FixUp(const void *  lpBaseData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficLightCollection.cpp:56
void BrnTraffic::TrafficLightCollection::RenderCoronasForInstance(uint32_t  luInstance, uint32_t  luActiveStates, BrnCoronaManager::BrnSubmissionInterface *  lpCoronaSubmissionInterface, const rw::math::vpu::Vector3  lCameraPosition, const rw::math::vpu::Vector3  lCameraDirection, const VecFloat  lCullDistSq) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficLightCollection.cpp:58
		const BrnCoronaType[3] KAE_STATE_TO_CORONATYPE_MAPPING;

		// BrnTrafficLightCollection.cpp:65
		const uint8_t[3] KAU_TRAFFICLIGHTSTATE_BITS;

		// BrnTrafficLightCollection.cpp:74
		Matrix44Affine lInstanceTransform;

		// BrnTrafficLightCollection.cpp:77
		Vector3 lDir;

		// BrnTrafficLightCollection.cpp:90
		const VecFloat K_CORONA_SCALE_CONSTANT;

		// BrnTrafficLightCollection.cpp:93
		VecFloat lDistFromCamera;

		// BrnTrafficLightCollection.cpp:94
		VecFloat lClampedDist;

		// BrnTrafficLightCollection.cpp:95
		VecFloat lSizeParam;

		// BrnTrafficLightCollection.cpp:96
		VecFloat lSizeScale;

		// BrnTrafficLightCollection.cpp:97
		float32_t lfLightScale;

		// BrnTrafficLightCollection.cpp:100
		const TrafficLightType * lpType;

		// BrnTrafficLightCollection.cpp:101
		uint32_t luGlobalCorona;

		// BrnTrafficLightCollection.cpp:102
		uint32_t luGlobalCoronaEnd;

	}
	CalcInstanceTransform(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator<=(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	GetInstanceType(/* parameters */);
	rw::math::vpu::GetVecFloat_Two(/* parameters */);
	{
	}
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	GetTrafficLightType(/* parameters */);
	GetCoronaState(/* parameters */);
	{
		// BrnTrafficLightCollection.cpp:107
		Vector3 lLocalCoronaPos;

		// BrnTrafficLightCollection.cpp:108
		Vector3 lCoronaPosition;

		GetCoronaPosition(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		GetCoronaState(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

// BrnTrafficLightCollection.cpp:131
void BrnTraffic::TrafficLightCollection::CalcArbitraryAmberCoronaTransform(uint32_t  luInstance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficLightCollection.cpp:135
		const rw::math::vpu::Matrix44Affine lInstanceTransform;

		// BrnTrafficLightCollection.cpp:138
		const TrafficLightType * lpType;

		// BrnTrafficLightCollection.cpp:139
		uint32_t luGlobalCorona;

		// BrnTrafficLightCollection.cpp:140
		uint32_t luGlobalCoronaEnd;

	}
	CalcInstanceTransform(/* parameters */);
	GetInstanceType(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetW(/* parameters */);
	{
	}
	GetTrafficLightType(/* parameters */);
	GetCoronaState(/* parameters */);
	{
		// BrnTrafficLightCollection.cpp:145
		Vector3 lLocalCoronaPos;

		// BrnTrafficLightCollection.cpp:146
		Vector3 lWorldCoronaPos;

		GetCoronaPosition(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
	}
	{
		// BrnTrafficLightCollection.cpp:152
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::GetMatrix44Affine_Identity(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

