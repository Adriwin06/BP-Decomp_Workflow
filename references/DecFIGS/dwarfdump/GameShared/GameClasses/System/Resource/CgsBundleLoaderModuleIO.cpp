// CgsBundleLoaderModuleIO.cpp:53
void CgsResource::BundleLoaderIO::InputBuffer_Update::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleRequest>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleRequest>::Destruct(/* parameters */);
}

// CgsBundleLoaderModuleIO.cpp:36
void CgsResource::BundleLoaderIO::InputBuffer_Update::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::EventQueue<CgsResource::Events::LoadBundleRequest,256>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleRequest>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleRequest>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleRequest>::SetEventPointer(/* parameters */);
	CgsModule::EventQueue<CgsResource::Events::UnloadBundleRequest,256>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleRequest>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleRequest>::SetEventPointer(/* parameters */);
}

// CgsBundleLoaderModuleIO.cpp:71
void CgsResource::BundleLoaderIO::InputBuffer_Record::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsBundleLoaderModuleIO.cpp:103
void CgsResource::BundleLoaderIO::OutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsResource::Events::LoadBundleResponse,256>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleResponse>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleResponse>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsResource::Events::UnloadBundleResponse,256>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<256,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleResponse>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleResponse>::SetEventPointer(/* parameters */);
	CgsModule::VariableEventQueue<256,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsBundleLoaderModuleIO.cpp:87
void CgsResource::BundleLoaderIO::InputBuffer_Record::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
	CgsContainers::FlagSet<std::int8_t>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Destruct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsBundleLoaderModuleIO.cpp:122
void CgsResource::BundleLoaderIO::OutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
	CgsContainers::FlagSet<std::int8_t>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<256,16>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleResponse>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleResponse>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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

