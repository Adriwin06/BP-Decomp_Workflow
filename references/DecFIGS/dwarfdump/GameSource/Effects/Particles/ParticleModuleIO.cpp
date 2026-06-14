// ParticleModuleIO.cpp:36
void BrnParticle::ParticleIO::DispatchInputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	CgsModule::IOBuffer::Construct(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
}

// ParticleModuleIO.cpp:57
void BrnParticle::ParticleIO::DispatchInputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// ParticleModuleIO.cpp:88
void BrnParticle::ParticleIO::PrepareOutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// ParticleModuleIO.cpp:72
void BrnParticle::ParticleIO::PrepareOutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

