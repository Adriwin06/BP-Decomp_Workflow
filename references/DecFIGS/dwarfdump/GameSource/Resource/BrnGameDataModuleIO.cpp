// BrnGameDataModuleIO.cpp:125
void BrnResource::GameDataIO::OutputBuffer::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameDataModuleIO.cpp:93
void BrnResource::GameDataIO::OutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
}

// BrnGameDataModuleIO.cpp:109
void BrnResource::GameDataIO::OutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnGameDataModuleIO.cpp:72
void BrnResource::GameDataIO::InputBuffer::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	RequestInterface<32768>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Clear(/* parameters */);
	CgsAttribSys::AttribSysIO::AttribSysRequestInterface<32768>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnGameDataModuleIO.cpp:56
void BrnResource::GameDataIO::InputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnGameDataModuleIO.cpp:36
void BrnResource::GameDataIO::InputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	RequestInterface<32768>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Construct(/* parameters */);
	RequestInterface<32768>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	CgsAttribSys::AttribSysIO::AttribSysRequestInterface<32768>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Construct(/* parameters */);
	CgsAttribSys::AttribSysIO::AttribSysRequestInterface<32768>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

