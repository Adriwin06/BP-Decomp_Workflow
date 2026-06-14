// BrnSoundRootSharedIO.h:25
namespace BrnSound {
	// BrnSoundStatistics.h:43
	namespace Debug {
	}

}

// BrnSoundStatistics.h:114
extern const uint32_t KU_MIXER_HISTORY_ENTRIES = 128;

// BrnPreUpdateSharedIo.h:31
namespace BrnSound {
	// BrnSoundStatistics.h:43
	namespace Debug {
	}

}

// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnSoundStatistics.h:43
	namespace Debug {
		struct Stat<std::size_t>;

		struct Statistics;

	}

}

// BrnSoundStatistics.h:55
struct BrnSound::Debug::Stat<std::size_t> {
private:
	// BrnSoundStatistics.h:83
	size_t mMax;

	// BrnSoundStatistics.h:84
	size_t mCurrent;

public:
	// BrnSoundStatistics.h:57
	void Stat();

	// BrnSoundStatistics.h:60
	void Set(unsigned int);

	// BrnSoundStatistics.h:71
	size_t GetCurrent() const;

	// BrnSoundStatistics.h:77
	size_t GetMax() const;

}

// BrnSoundStatistics.h:91
struct BrnSound::Debug::Statistics {
private:
	// BrnSoundStatistics.h:113
	extern const uint32_t KU_HISTORY_ENTRIES = 16;

	// BrnSoundStatistics.h:114
	extern const uint32_t KU_MIXER_HISTORY_ENTRIES = 128;

	// BrnSoundStatistics.h:123
	CgsSound::Playback::Module::Module * mpPlaybackModule;

	// BrnSoundStatistics.h:124
	BrnSound::Module::SoundLogicModule * mpLogicModule;

	// BrnSoundStatistics.h:125
	float mfX;

	// BrnSoundStatistics.h:126
	float mfY;

	// BrnSoundStatistics.h:129
	Stat<std::size_t> mRwacAlloc;

	// BrnSoundStatistics.h:130
	Stat<std::size_t> mCsisAlloc;

	// BrnSoundStatistics.h:131
	Stat<std::size_t> mPlaybackAlloc;

	// BrnSoundStatistics.h:132
	Stat<std::size_t> mLogicAlloc;

	// BrnSoundStatistics.h:134
	Stat<std::size_t> mVoiceCount;

	// BrnSoundStatistics.h:135
	Stat<std::size_t> mContentCount;

	// BrnSoundStatistics.h:137
	Stat<std::size_t> mCommandFillLevel;

public:
	// BrnSoundStatistics.h:96
	void Construct(CgsSound::Playback::Module::Module *, BrnSound::Module::SoundLogicModule *);

	// BrnSoundStatistics.h:101
	void RenderHUD(CgsDev::Debug2DImmediateRender *, bool);

	// BrnSoundStatistics.h:104
	void Update();

private:
	// BrnSoundStatistics.h:111
	void RenderLine(CgsDev::Debug2DImmediateRender *, bool, const char *, ...);

	// BrnSoundStatistics.h:120
	void DrawGraph(CgsDev::Debug2DImmediateRender *, CgsSound::Playback::VoiceProfilingData<128u> *, RGBA);

}

// BrnSoundRootSharedIO.h:25
namespace BrnSound {
	// BrnSoundStatistics.h:43
	namespace Debug {
		struct Stat<std::size_t>;

		struct Statistics;

		// Declaration
		struct DebugComponent {
		public:
			DebugComponent();

		}

	}

}

