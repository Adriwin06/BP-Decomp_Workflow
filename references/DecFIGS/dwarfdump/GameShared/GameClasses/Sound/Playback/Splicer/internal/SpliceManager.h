// SpliceManager.h:12
struct SpliceManager {
	// SpliceManager.h:20
	struct SpliceContainer {
		// SpliceManager.h:37
		char * mpSampleData;

		// SpliceManager.h:38
		int * mpTableOfContents;

		// SpliceManager.h:39
		int mNumSplices;

		// SpliceManager.h:40
		int mNumSamples;

		// SpliceManager.h:41
		SPLICE_Data * mpHeadSplice;

	public:
		// SpliceManager.h:22
		SpliceContainer();

		// SpliceManager.h:31
		void Init(SPLICE_Data *, int);

		// SpliceManager.h:32
		void Clear();

		// SpliceManager.h:33
		int Size();

		// SpliceManager.h:34
		SPLICE_Data * GetSplice(int);

	}

	// SpliceManager.h:76
	enum PlugInIndex {
		SNDPLAYER_INDEX = 0,
		RESAMPLE_INDEX = 1,
		PANNER_INDEX = 2,
		SEND_INDEX = 3,
		MAX_INDEX = 4,
	}

	// SpliceManager.h:86
	struct VoicePluginPair {
		// SpliceManager.h:88
		rw::audio::core::Voice * mpVoice;

		// SpliceManager.h:89
		rw::audio::core::PlugIn ** mppPlugIn;

	}

	// SpliceManager.h:179
	struct VoicePool {
	private:
		// SpliceManager.h:216
		SpliceManager::VoicePluginPair[64] maVoicePluginPairs;

		// SpliceManager.h:217
		SpliceManager::VoicePluginPair *[64] mapVoicePluginPairsStack;

		// SpliceManager.h:219
		unsigned int muPooledVoiceCount;

		// SpliceManager.h:220
		int miPooledVoiceStackFreeIndex;

	public:
		// SpliceManager.h:183
		void Construct();

		// SpliceManager.h:188
		bool Prepare(SpliceManager::VoicePluginPair *, unsigned int);

		// SpliceManager.h:191
		void Update();

		// SpliceManager.h:194
		bool Release();

		// SpliceManager.h:197
		void Destruct();

		// SpliceManager.h:201
		SpliceManager::VoicePluginPair * AllocateVoicePluginPairToSpliceSample(SpliceSample *);

		// SpliceManager.h:205
		void FreeVoicePluginPair(SpliceManager::VoicePluginPair *);

		// SpliceManager.h:210
		bool IsVoiceInPool(rw::audio::core::Voice *);

	}

	// SpliceManager.h:15
	extern const unsigned int KU_MAX_POOLED_VOICES = 64;

private:
	// SpliceManager.h:224
	SpliceManager::VoicePool mMonoVoicePool;

	// SpliceManager.h:225
	SpliceManager::VoicePool mStereoVoicePool;

	// SpliceManager.h:227
	void (*)(char *) mAssertCallbackFunc;

	// SpliceManager.h:231
	SpliceManager::SpliceContainer[8] m_Splices;

	// SpliceManager.h:233
	PlugInRegistry::PlugInHandle sndplayerHandle;

	// SpliceManager.h:234
	PlugInRegistry::PlugInHandle resampleHandle;

	// SpliceManager.h:235
	PlugInRegistry::PlugInHandle pannerHandle;

	// SpliceManager.h:236
	PlugInRegistry::PlugInHandle sendHandle;

	// SpliceManager.h:240
	const CgsSound::Playback::Environment & mEnvironment;

	// SpliceManager.h:243
	extern SpliceManager * spSpliceManager;

public:
	// SpliceManager.h:48
	SpliceManager(CgsSound::Playback::Environment &, unsigned int, unsigned int);

	// SpliceManager.h:56
	~SpliceManager();

	// SpliceManager.h:62
	SpliceManager * Get();

	// SpliceManager.h:67
	SPLICE_Data * FindSplice(SPLICE_TYPE, int);

	// SpliceManager.h:69
	bool LoadSplice(void *, SPLICE_TYPE);

	// SpliceManager.h:70
	void UnloadAllSplices();

	// SpliceManager.h:73
	SPLICE_TYPE FindFreeSpliceType();

	// SpliceManager.h:94
	PlugInRegistry::PlugInHandle GetPluginHandle(SpliceManager::PlugInIndex);

	// SpliceManager.h:96
	SpliceManager::SpliceContainer * GetSpliceContainer(SPLICE_TYPE);

	// SpliceManager.h:103
	bool LoadSpliceData(char *, SPLICE_TYPE, int, int);

	// SpliceManager.h:104
	void UnloadSpliceData(SPLICE_TYPE);

	// SpliceManager.h:114
	void * Allocate(uint32_t, const char *);

	// SpliceManager.h:128
	void Free(void *);

	// SpliceManager.h:139
	void (*)(char *) GetAssertCallbackFunction();

	// SpliceManager.h:143
	void SetAssertCallbackFunction(void (*)(char *));

	// SpliceManager.h:147
	SpliceManager::VoicePluginPair * AllocateMonoVoicePlugInPairToSpliceSample(SpliceSample *);

	// SpliceManager.h:151
	void FreeMonoVoicePlugInPair(SpliceManager::VoicePluginPair *);

	// SpliceManager.h:155
	SpliceManager::VoicePluginPair * AllocateStereoVoicePlugInPairToSpliceSample(SpliceSample *);

	// SpliceManager.h:159
	void FreeStereoVoicePlugInPair(SpliceManager::VoicePluginPair *);

	// SpliceManager.h:163
	void CreateMonoVoice(SpliceManager::VoicePluginPair *);

	// SpliceManager.h:167
	void CreateStereoVoice(SpliceManager::VoicePluginPair *);

	// SpliceManager.h:171
	void DestroyVoice(SpliceManager::VoicePluginPair *);

private:
	// SpliceManager.h:229
	bool AddSplice(char *);

}

// SpliceManager.h:15
extern const unsigned int KU_MAX_POOLED_VOICES = 64;

// SpliceManager.h:243
extern SpliceManager * spSpliceManager;

