// BrnSoundLogicModuleIo.cpp:77
void BrnSound::Module::Io::LogicOutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnResource::GameDataIO::RequestInterface<4096>::Construct(/* parameters */);
	CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::Construct(/* parameters */);
	CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
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

