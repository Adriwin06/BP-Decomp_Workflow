// ginsuplayer.h:96
extern const float NOJUMP_DURATION;

// ginsuplayer.h:97
extern const float OVERLAP_DURATION;

// ginsuplayer.h:136
extern const unsigned int NUM_OLD_DATA_BLOCKS = 8;

// ginsuplayer.h:137
extern const unsigned int SIZE_OF_OLDDATABLOCK = 152;

// importnamespaces.h:8
namespace rw {
	// pdebug.h:13
	namespace audio {
		// pdebug.h:15
		namespace core {
			// Declaration
			struct GinsuPlayer {
				// ginsuplayer.h:64
				struct PlayParams {
					// ginsuplayer.h:65
					void * pGinFile;

				}

				// ginsuplayer.h:91
				struct PlayCommand : public rw::audio::core::GinsuPlayer::PlayParams {
				}

				// ginsuplayer.h:115
				struct GinsuSynthData {
					// ginsuplayer.h:136
					extern const unsigned int NUM_OLD_DATA_BLOCKS = 8;

					// ginsuplayer.h:137
					extern const unsigned int SIZE_OF_OLDDATABLOCK = 152;

					// ginsuplayer.h:140
					unsigned char[152] mOldDataBlock;

					// ginsuplayer.h:141
					int mOldDataBlockIndex;

					// ginsuplayer.h:145
					int mTempStoreBlockIndex;

					// ginsuplayer.h:146
					unsigned char * mpTempStore;

					// ginsuplayer.h:148
					float mLastInputSample;

					// ginsuplayer.h:149
					int mCycleCount;

					// ginsuplayer.h:164
					float mMinFrequency;

					// ginsuplayer.h:165
					float mMaxFrequency;

					// ginsuplayer.h:166
					int mSegCount;

					// ginsuplayer.h:169
					int mSampleCount;

					// ginsuplayer.h:170
					int mSampleRate;

					// ginsuplayer.h:173
					uintptr_t mFreqOffset;

					// ginsuplayer.h:174
					uintptr_t mCycleOffset;

					// ginsuplayer.h:176
					unsigned char * mSampleData;

					// ginsuplayer.h:177
					float mMinPeriod;

					// ginsuplayer.h:178
					int mCurrentBlock;

					// ginsuplayer.h:182
					float[32] mSample;

				public:
					// ginsuplayer.h:117
					GinsuSynthData();

					// ginsuplayer.h:118
					~GinsuSynthData();

					// ginsuplayer.h:120
					unsigned int GetTotalTableSize(void *);

					// ginsuplayer.h:121
					bool BindToData(void *, uintptr_t);

					// ginsuplayer.h:123
					float GetMinFrequency() const;

					// ginsuplayer.h:124
					float GetMaxFrequency() const;

					// ginsuplayer.h:125
					int GetSampleRate() const;

					// ginsuplayer.h:127
					int FrequencyToSample(float) const;

					// ginsuplayer.h:129
					int CycleToSample(float) const;

					// ginsuplayer.h:130
					float CyclePeriod(float) const;

					// ginsuplayer.h:131
					float SampleToCycle(int) const;

					// ginsuplayer.h:133
					bool GetSamples(int, int, int, float *, float *, bool, System *);

					// ginsuplayer.h:152
					void FetchTempStore(SampleBuffer *, int, System *);

					// ginsuplayer.h:153
					void WaitForTempStore();

					// ginsuplayer.h:154
					void FreeTempStore(SampleBuffer *);

					// ginsuplayer.h:157
					void StoreDataForCrossfades(int);

					// ginsuplayer.h:161
					void DecodeBlock(int, bool, System *);

				}

			}

			// ginsuplayer.h:23
			extern void GinsuLinearAllocAddSize(unsigned int &, unsigned int, unsigned int);

			// ginsuplayer.h:32
			extern void GinsuLinearAlloc<std::uintptr_t, std::uintptr_t>(uintptr_t &, uintptr_t &, unsigned int, unsigned int);

		}

	}

}

// ginsuplayer.h:40
struct rw::audio::core::GinsuPlayer : public rw::audio::core::PlugIn {
	// ginsuplayer.h:42
	extern const DecoderDesc::Guid GUID = 1198420784;

	// ginsuplayer.h:45
	extern const int TableSize = 4096;

private:
	// GinsuPlayer.cpp:18
	extern unsigned char[10016] sSpuElf;

	// GinsuPlayer.cpp:129
	extern PlugInDescRunTime sPlugInDescRunTime;

	// GinsuPlayer.cpp:122
	extern ChannelMapPair[2] sChannelMaps;

	// ginsuplayer.h:74
	extern PlugInDescToolSide sPlugInDescToolSide;

	// GinsuPlayer.cpp:28
	extern ParameterDescRunTime[6] sParameterDescRunTime;

	// ginsuplayer.h:76
	extern ParameterDescToolSide[] sParameterDescToolSide;

	// GinsuPlayer.cpp:107
	extern EventDescRunTime[2] sEventDescRunTime;

	// ginsuplayer.h:78
	extern EventDescToolSide[] sEventDescToolSide;

	// GinsuPlayer.cpp:24
	extern const float NOJUMP_DURATION;

	// GinsuPlayer.cpp:26
	extern const float OVERLAP_DURATION;

	// ginsuplayer.h:98
	extern const int CHANNEL_FOR_TEMP_STORE = 1;

	// ginsuplayer.h:99
	extern const int CHANNEL_FOR_CROSSFADES = 2;

	// ginsuplayer.h:100
	extern const int CHANNEL_FOR_RESAMPLE_BUFFER = 3;

	// ginsuplayer.h:101
	extern const int CELLDMATAG;

	// ginsuplayer.h:105
	rw::audio::core::PlugIn::Attribute_t[5] mAttribute;

	// ginsuplayer.h:107
	bool mPlaying;

	// ginsuplayer.h:110
	int mOutputSamplesRequested;

	// ginsuplayer.h:188
	rw::audio::core::GinsuPlayer::GinsuSynthData mSynthData;

	// ginsuplayer.h:189
	void * pGinFile;

	// ginsuplayer.h:191
	float mSampleRate;

	// ginsuplayer.h:192
	float mPrevSampleRate;

	// ginsuplayer.h:193
	int mNoJumpSize;

	// ginsuplayer.h:195
	int mOverlapSize;

	// ginsuplayer.h:196
	int mPlaybackPos;

	// ginsuplayer.h:197
	unsigned int mRandomSeed;

	// ginsuplayer.h:198
	double mNextJumpTime;

public:
	void GinsuPlayer(const GinsuPlayer &);

	void GinsuPlayer();

	// GinsuPlayer.cpp:166
	PlugInDescRunTime * GetPlugInDescRunTime();

	// ginsuplayer.h:44
	const PlugInDescToolSide * GetPlugInDescToolSide();

private:
	// GinsuPlayer.cpp:171
	unsigned int GetSize(rw::audio::core::PlugInConfig *);

	// GinsuPlayer.cpp:190
	bool CreateInstance(rw::audio::core::PlugIn *, void *);

public:
	// ginsuplayer.h:85
	int PreProcess(rw::audio::core::PlugIn *, Mixer *, bool, int);

	// ginsuplayer.h:86
	rw::audio::core::BufferStatus Process(rw::audio::core::PlugIn *, Mixer *, bool);

private:
	// GinsuPlayer.cpp:211
	virtual void EventEvent(int, void *);

	// GinsuPlayer.cpp:229
	int PlayHandler(Command *);

	// GinsuPlayer.cpp:301
	int StopHandler(Command *);

public:
	virtual void ~GinsuPlayer();

}

// ginsuplayer.h:40
void rw::audio::core::GinsuPlayer::GinsuPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ginsuplayer.h:40
void rw::audio::core::GinsuPlayer::~GinsuPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ginsuplayer.h:42
extern const DecoderDesc::Guid GUID = 1198420784;

// ginsuplayer.h:45
extern const int TableSize = 4096;

