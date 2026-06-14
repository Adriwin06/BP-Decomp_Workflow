// BrnTriggerEntityModuleIO.cpp:53
void BrnWorld::TriggerEntityModuleIO::InputBuffer_PreScene::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnTriggerEntityModuleIO.cpp:81
void BrnWorld::TriggerEntityModuleIO::OutputBuffer_PreScene::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnTriggerEntityModuleIO.cpp:110
void BrnWorld::TriggerEntityModuleIO::InputBuffer_PostScene::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnTriggerEntityModuleIO.cpp:138
void BrnWorld::TriggerEntityModuleIO::OutputBuffer_PostScene::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnTriggerEntityModuleIO.cpp:167
void BrnWorld::TriggerEntityModuleIO::InputBuffer_PrePhysics::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnTriggerEntityModuleIO.cpp
void BrnWorld::TriggerEntityModuleIO::OutputBuffer_PrePhysics::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnTriggerEntityModuleIO.cpp:39
void BrnWorld::TriggerEntityModuleIO::InputBuffer_PreScene::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	TriggerManagementInputInterface::Construct(/* parameters */);
	CgsModule::VariableEventQueue<131072,16>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent,256>::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnTriggerEntityModuleIO.cpp:67
void BrnWorld::TriggerEntityModuleIO::OutputBuffer_PreScene::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
}

// BrnTriggerEntityModuleIO.cpp:96
void BrnWorld::TriggerEntityModuleIO::InputBuffer_PostScene::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	TriggerQueryInputInterface::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnTriggerEntityModuleIO.cpp:124
void BrnWorld::TriggerEntityModuleIO::OutputBuffer_PostScene::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnTriggerEntityModuleIO.cpp:153
void BrnWorld::TriggerEntityModuleIO::InputBuffer_PrePhysics::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnTriggerEntityModuleIO.cpp:181
void BrnWorld::TriggerEntityModuleIO::OutputBuffer_PrePhysics::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	TriggerEntityModuleOutputInterface::Construct(/* parameters */);
	CgsModule::VariableEventQueue<1024,16>::Construct(/* parameters */);
	TriggerEntityModuleOutputInterface::Clear(/* parameters */);
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
}

