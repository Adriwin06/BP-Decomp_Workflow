// BrnSensorSpec.cpp:118
void BrnPhysics::Deformation::SensorSpec::Prepare(const rw::math::vpu::Vector3  lPosition, uint8_t  lu8Index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSensorSpec.cpp:151
		int32_t i;

	}
}

// BrnSensorSpec.cpp:174
void BrnPhysics::Deformation::SensorSpec::SetNextSensor(uint8_t  lu8NextSensorIndex, BrnPhysics::Deformation::ENextSensorDirection  leDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSensorSpec.cpp:58
void BrnPhysics::Deformation::SensorSpec::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSensorSpec.cpp:63
		int32_t i;

		rw::math::vpu::Vector3::SetZero(/* parameters */);
	}
}

// BrnSensorSpec.cpp:87
void BrnPhysics::Deformation::SensorSpec::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSensorSpec.cpp:92
		int32_t i;

		rw::math::vpu::Vector3::SetZero(/* parameters */);
	}
}

// BrnSensorSpec.cpp:254
void BrnPhysics::Deformation::SensorSpec::FixDown(void *  lpBaseAdress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSensorSpec.cpp:256
		int32_t liIndex;

	}
}

// BrnSensorSpec.cpp:279
void BrnPhysics::Deformation::SensorSpec::FixUp(void *  lpBaseAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSensorSpec.cpp:281
		int32_t liIndex;

	}
}

// BrnSensorSpec.cpp:227
void BrnPhysics::Deformation::SensorSpec::GetVolumeID(uint8_t  lu8SpecID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnSensorSpec.cpp:229
	VolumeId lVolId;

	{
		// BrnSensorSpec.cpp:229
		VolumeId lVolId;

		// BrnSensorSpec.cpp:230
		uint16_t lu16VolumeIndex;

		CgsSceneManager::VolumeId::Set(/* parameters */);
	}
}

// BrnSensorSpec.cpp:194
void BrnPhysics::Deformation::SensorSpec::AddToScene(uint8_t  lu8SpecID, OutputBuffer::SceneInputInterface *  lpSceneInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSensorSpec.cpp:198
		ResourceDescriptor lResDesc;

		// BrnSensorSpec.cpp:205
		SphereVolume * lpSphereVol;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::collision::SphereVolume::GetResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~BaseResourceDescriptors(/* parameters */);
		rw::ResourceDescriptor::GetSize(/* parameters */);
		rw::Resource::Resource(/* parameters */);
		rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddDynamicVolume(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::AddEvent(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~BaseResourceDescriptors(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnSensorSpec.cpp:34
