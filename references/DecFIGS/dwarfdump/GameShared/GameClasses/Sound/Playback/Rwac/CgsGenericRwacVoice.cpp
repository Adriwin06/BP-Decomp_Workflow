// CgsGenericRwacVoice.cpp:55
using rw::audio::core;

// CgsGenericRwacVoice.cpp:76
using rw::audio::core;

// CgsGenericRwacVoice.cpp:120
void CgsSound::Playback::GenericRwacVoice::DisplayVoiceCpu(float *  lpfX, float *  lpfY, float  lfTextSize, bool  lbShowPlugins) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGenericRwacVoice.cpp:103
void CgsSound::Playback::GenericRwacVoice::GetCpuTicks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGenericRwacVoice.cpp:53
void CgsSound::Playback::GenericRwacVoice::~GenericRwacVoice() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGenericRwacVoice.cpp:59
		RwacCommandVoiceRelease lCommand;

	}
}

// CgsGenericRwacVoice.cpp:74
void CgsSound::Playback::GenericRwacVoice::CreateVoiceInstance(const const VoiceSpec &  lVoiceSpec, const CgsSound::Playback::Voice &  lVoiceBase, const CgsSound::Playback::GenericRwacFactory &  lFactory, rw::audio::core::PlugIn **  mppSubmix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGenericRwacVoice.cpp:80
		CgsSound::Playback::GenericRwacVoiceConfig * lpVoiceConfig;

		// CgsGenericRwacVoice.cpp:94
		RwacCommandVoiceCreateInstance lCommand;

	}
	Name::Name(/* parameters */);
	Voice::FindNamedSlot(/* parameters */);
	Voice::GetSlot(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Voice::GetSlot(/* parameters */);
	RwacCommandVoiceCreateInstance::RwacCommandVoiceCreateInstance(/* parameters */);
	GetRwacFactory(/* parameters */);
	GenericRwacFactory::GetCommandQueue(/* parameters */);
	operator<< <CgsSound::Playback::RwacCommandVoiceCreateInstance>(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

