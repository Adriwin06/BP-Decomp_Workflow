// BrnPhysicsDeformationModelData.cpp:41
void BrnPhysics::Deformation::ModelData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPhysicsDeformationModelData.cpp:414
void BrnPhysics::Deformation::ModelData::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPhysicsDeformationModelData.cpp:428
void BrnPhysics::Deformation::ModelData::TagList::FindFirstTag(BrnPhysics::Deformation::ETagPointType  leTagType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsDeformationModelData.cpp:430
		uint32_t luTag;

		// BrnPhysicsDeformationModelData.cpp:431
		char * lpTagType;

	}
}

// BrnPhysicsDeformationModelData.cpp:454
void BrnPhysics::Deformation::ModelData::TagList::CreateTagPoint(uint32_t  liTag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnPhysicsDeformationModelData.cpp:456
	BrnPhysics::Deformation::ModelData::TagPoint & lTagPoint;

	{
		// BrnPhysicsDeformationModelData.cpp:456
		BrnPhysics::Deformation::ModelData::TagPoint lTagPoint;

		GetTagLocation(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	}
}

// BrnPhysicsDeformationModelData.cpp:311
void BrnPhysics::Deformation::ModelData::Refix(const void *  lpOldBase, const void *  lpNewBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsDeformationModelData.cpp:328
		uint32_t luIndex;

	}
}

// BrnPhysicsDeformationModelData.cpp:474
void BrnPhysics::Deformation::ModelData::TagList::FixUp(const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsDeformationModelData.cpp:476
		uint32_t luIndex;

		// BrnPhysicsDeformationModelData.cpp:478
		MemoryResource lpBaseData;

	}
	rw::Resource::GetMemoryResource(/* parameters */);
}

// BrnPhysicsDeformationModelData.cpp:504
void BrnPhysics::Deformation::ModelData::TagList::FixDown(const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsDeformationModelData.cpp:506
		uint32_t luIndex;

		// BrnPhysicsDeformationModelData.cpp:508
		MemoryResource lpBaseData;

	}
	rw::Resource::GetMemoryResource(/* parameters */);
}

// BrnPhysicsDeformationModelData.cpp:179
void BrnPhysics::Deformation::ModelData::FixDown(const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsDeformationModelData.cpp:181
		uint32_t luIndex;

		// BrnPhysicsDeformationModelData.cpp:262
		MemoryResource lpBaseData;

		rw::Resource::GetMemoryResource(/* parameters */);
	}
}

// BrnPhysicsDeformationModelData.cpp:56
void BrnPhysics::Deformation::ModelData::FixUp(const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsDeformationModelData.cpp:81
		MemoryResource lpBaseData;

		// BrnPhysicsDeformationModelData.cpp:83
		uint32_t luIndex;

	}
	{
		// BrnPhysicsDeformationModelData.cpp:63
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::Resource::GetMemoryResource(/* parameters */);
}

