// BrnStreamedDeformationSpec.cpp:454
void BrnPhysics::Deformation::LocatorPointSpecList::FindFirstLocator(BrnPhysics::Deformation::ETagPointType  leTagType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreamedDeformationSpec.cpp:456
		uint32_t luTag;

	}
}

// BrnStreamedDeformationSpec.cpp:119
void BrnPhysics::Deformation::StreamedDeformationSpec::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStreamedDeformationSpec.cpp:38
void BrnPhysics::Deformation::StreamedDeformationSpec::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreamedDeformationSpec.cpp:46
		int32_t i;

		rw::math::vpu::Vector3::SetZero(/* parameters */);
	}
	rw::math::vpu::Vector3::SetZero(/* parameters */);
}

// BrnStreamedDeformationSpec.cpp:65
void BrnPhysics::Deformation::StreamedDeformationSpec::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreamedDeformationSpec.cpp:72
		int32_t i;

		rw::math::vpu::Vector3::SetZero(/* parameters */);
	}
}

// BrnStreamedDeformationSpec.cpp:91
void BrnPhysics::Deformation::StreamedDeformationSpec::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreamedDeformationSpec.cpp:98
		int32_t i;

		rw::math::vpu::Vector3::SetZero(/* parameters */);
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
}

// BrnStreamedDeformationSpec.cpp:479
void BrnPhysics::Deformation::LocatorPointSpecList::CreateLocatorPointSpec(uint32_t  luTag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnStreamedDeformationSpec.cpp:483
	LocatorPointSpec & lTagPoint;

	{
		// BrnStreamedDeformationSpec.cpp:483
		LocatorPointSpec lTagPoint;

	}
	operator=(/* parameters */);
}

// BrnStreamedDeformationSpec.cpp:546
void BrnPhysics::Deformation::LocatorPointSpecList::FixDown(void *  lpBaseAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreamedDeformationSpec.cpp:548
		uint32_t luIndex;

	}
}

// BrnStreamedDeformationSpec.cpp:220
void BrnPhysics::Deformation::StreamedDeformationSpec::SetHandlingBodyOffset(const rw::math::vpu::Vector3  lHandlingBodyOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreamedDeformationSpec.cpp:222
		int32_t i;

		rw::math::vpu::operator+=(/* parameters */);
		{
			// BrnStreamedDeformationSpec.cpp:244
			IKBodyPartSpec * lpIKPart;

			{
				// BrnStreamedDeformationSpec.cpp:245
				int32_t liJointIndex;

				IKBodyPartSpec::GetJointSpec(/* parameters */);
				DeformationJointSpec::Translate(/* parameters */);
			}
		}
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	TagPointSpec::SetInitialPosition(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
}

// BrnStreamedDeformationSpec.cpp:574
void BrnPhysics::Deformation::StreamedDeformationSpec::GetBoundingBox(const AxisAlignedBox &  lBoxOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreamedDeformationSpec.cpp:576
		uint8_t lu8NumSensors;

		// BrnStreamedDeformationSpec.cpp:579
		Vector3 lvMaxPositions;

		// BrnStreamedDeformationSpec.cpp:580
		Vector3 lvMinPositions;

		rw::math::vpu::GetVector3_Zero(/* parameters */);
		{
			// BrnStreamedDeformationSpec.cpp:582
			uint8_t lu8Index;

		}
		rw::math::vpu::GetVector3_Zero(/* parameters */);
	}
	{
		// BrnStreamedDeformationSpec.cpp:584
		Vector3 lvSensorMinValue;

		// BrnStreamedDeformationSpec.cpp:585
		Vector3 lvSensorMaxValue;

		// BrnStreamedDeformationSpec.cpp:586
		VecFloat lfSensorRadius;

	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	rw::math::vpu::Max(/* parameters */);
}

// BrnStreamedDeformationSpec.cpp:370
void BrnPhysics::Deformation::StreamedDeformationSpec::FixDown(void *  lpBaseAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreamedDeformationSpec.cpp:372
		int32_t liIndex;

		IKBodyPartSpec::FixDown(/* parameters */);
		GlassPaneSpec::FixDown(/* parameters */);
	}
}

// BrnStreamedDeformationSpec.cpp:521
void BrnPhysics::Deformation::LocatorPointSpecList::FixUp(void *  lpBaseAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreamedDeformationSpec.cpp:523
		uint32_t luIndex;

	}
}

// BrnStreamedDeformationSpec.cpp:162
void BrnPhysics::Deformation::StreamedDeformationSpec::TransformToNewCOMSpace(const rw::math::vpu::Vector3  lCOMOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreamedDeformationSpec.cpp:170
		Vector3 lOldToNewCOMOffset;

		// BrnStreamedDeformationSpec.cpp:171
		int32_t i;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	{
		// BrnStreamedDeformationSpec.cpp:196
		IKBodyPartSpec * lpIKPart;

		{
			// BrnStreamedDeformationSpec.cpp:197
			int32_t liJointIndex;

			DeformationJointSpec::Translate(/* parameters */);
			rw::math::vpu::operator+=(/* parameters */);
		}
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	TagPointSpec::SetInitialPosition(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
}

// BrnStreamedDeformationSpec.cpp:262
void BrnPhysics::Deformation::StreamedDeformationSpec::FixUp(void *  lpBaseAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreamedDeformationSpec.cpp:264
		int32_t liIndex;

		// BrnStreamedDeformationSpec.cpp:336
		LocatorPointSpecList * lpSpecList;

	}
	IKBodyPartSpec::FixUp(/* parameters */);
	{
	}
	BodyPartBBoxSpec::FixUp(/* parameters */);
	{
		// BrnStreamedDeformationSpec.cpp:338
		uint32_t liLoop;

	}
	LocatorPointSpecList::GetLocatorSpec(/* parameters */);
	{
		// BrnStreamedDeformationSpec.cpp:345
		uint32_t liLoop;

		LocatorPointSpecList::GetLocatorSpec(/* parameters */);
	}
	{
		// BrnStreamedDeformationSpec.cpp:352
		uint32_t liLoop;

		LocatorPointSpecList::GetLocatorSpec(/* parameters */);
	}
	GlassPaneSpec::FixUp(/* parameters */);
}

// BrnStreamedDeformationSpec.cpp:138
void BrnPhysics::Deformation::StreamedDeformationSpec::AddToScene(OutputBuffer::SceneInputInterface *  lpSceneInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreamedDeformationSpec.cpp:140
		int32_t i;

	}
}

