// CgsSoundPlaybackModuleIO.cpp:87
void CgsSound::Playback::Module::Io::InputBuffer::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSoundPlaybackModuleIO.cpp:69
void CgsSound::Playback::Module::Io::InputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSoundPlaybackModuleIO.cpp:52
void CgsSound::Playback::Module::Io::InputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
}

// CgsSoundPlaybackModuleIO.cpp:173
void CgsSound::Playback::Module::Io::OutputBuffer::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<4096,16>::Clear(/* parameters */);
	CgsContainers::Array<CgsSound::Io::QueueElement,3u>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsSoundPlaybackModuleIO.cpp:158
void CgsSound::Playback::Module::Io::OutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSoundPlaybackModuleIO.cpp:141
void CgsSound::Playback::Module::Io::OutputBuffer::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSoundPlaybackModuleIO.cpp:124
void CgsSound::Playback::Module::Io::OutputBuffer::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSoundPlaybackModuleIO.cpp
void CgsSound::Playback::Module::Io::OutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Clear(/* parameters */);
	CgsContainers::Array<CgsSound::Io::QueueElement,3u>::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

