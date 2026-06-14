// BrnDispatchThreadInputBuffer.cpp:75
void BrnGame::DispatchThreadInputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnDispatchThreadInputBuffer.cpp:38
void BrnGame::DispatchThreadInputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	CgsResource::ResourceHandle::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnDispatchThreadInputBuffer.cpp:131
void BrnGame::DispatchThreadInputBufferManager::Swap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDispatchThreadInputBuffer.cpp:91
void BrnGame::DispatchThreadInputBufferManager::Construct(IOBufferStack *  lpIOBufferStack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CreateIOBuffer<BrnGame::DispatchThreadInputBuffer>(/* parameters */);
	CreateIOBuffer<BrnGame::DispatchThreadInputBuffer>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnDispatchThreadInputBuffer.cpp:114
void BrnGame::DispatchThreadInputBufferManager::Destruct(IOBufferStack *  lpIOBufferStack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DestroyIOBuffer<BrnGame::DispatchThreadInputBuffer>(/* parameters */);
	DestroyIOBuffer<BrnGame::DispatchThreadInputBuffer>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

