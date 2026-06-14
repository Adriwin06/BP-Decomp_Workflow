// BrnSoundStatistics.cpp:40
void BrnSound::Debug::Statistics::Construct(CgsSound::Playback::Module::Module *  lpPlaybackModule, BrnSound::Module::SoundLogicModule *  lpLogicModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSoundStatistics.cpp:59
void BrnSound::Debug::Statistics::RenderLine(CgsDev::Debug2DImmediateRender *  lpRender, bool  lbRedAlert, const char *  lpFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSoundStatistics.cpp:61
		extern const float32_t KF_SOUND_STATISTICS_TEXT_SIZE;

		// BrnSoundStatistics.cpp:63
		char[256] lacBuffer;

		// BrnSoundStatistics.cpp:64
		va_list lList;

		// BrnSoundStatistics.cpp:70
		RGBA lColour;

	}
}

// BrnSoundStatistics.cpp:119
void BrnSound::Debug::Statistics::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::TestBed::Allocator::GetBytesAllocated(/* parameters */);
	Stat<std::size_t>::Set(/* parameters */);
	CgsSound::TestBed::Allocator::GetBytesAllocated(/* parameters */);
	Stat<std::size_t>::Set(/* parameters */);
	CgsSound::TestBed::Allocator::GetBytesAllocated(/* parameters */);
	Stat<std::size_t>::Set(/* parameters */);
	CgsSound::TestBed::Allocator::GetBytesAllocated(/* parameters */);
	Stat<std::size_t>::Set(/* parameters */);
	CgsSound::Playback::Module::Module::GetEnvironment(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::Environment>::operator*(/* parameters */);
	CgsSound::Playback::Environment::GetNumberOfActiveVoices(/* parameters */);
	Stat<std::size_t>::Set(/* parameters */);
	CgsSound::Playback::Module::Module::GetEnvironment(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::Environment>::operator*(/* parameters */);
	CgsSound::Playback::Environment::GetNumberOfActiveContent(/* parameters */);
	Stat<std::size_t>::Set(/* parameters */);
	Stat<std::size_t>::Set(/* parameters */);
}

// BrnSoundStatistics.cpp:85
void BrnSound::Debug::Statistics::DrawGraph(CgsDev::Debug2DImmediateRender *  lpRender, CgsSound::Playback::VoiceProfilingData<128u> *  lpVoiceProfilingData, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSoundStatistics.cpp:89
		float32_t lfX;

		// BrnSoundStatistics.cpp:92
		uint32_t luHistoryIndex;

		// BrnSoundStatistics.cpp:94
		Vector2 lv2LineStart;

	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	{
		// BrnSoundStatistics.cpp:99
		float32_t lfTime;

		// BrnSoundStatistics.cpp:101
		Vector2 lv2LineEnd;

	}
	CgsSound::Playback::VoiceProfilingData<128u>::GetTimeByIndex(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
}

// BrnSoundStatistics.cpp:165
void BrnSound::Debug::Statistics::RenderHUD(CgsDev::Debug2DImmediateRender *  lpRender, bool  lbDrawDacGraph) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSoundStatistics.cpp:182
		RwacLock lRwacLock;

		CgsSound::Playback::RwacLock::RwacLock(/* parameters */);
		CgsSound::Playback::RwacLock::~RwacLock(/* parameters */);
	}
}

// _built-in_
namespace :: {
	// BrnSoundStatistics.cpp:22
	const float32_t KF_RED_ALERT_THRESHOLD;

}

