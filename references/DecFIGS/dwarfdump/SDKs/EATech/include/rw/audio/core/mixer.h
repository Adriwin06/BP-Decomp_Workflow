// mixer.h:33
struct rw::audio::core::MixerExecuteReturns {
	// mixer.h:34
	unsigned int cpuCycles;

	// mixer.h:37
	char[12] pad;

}

// mixer.h:45
struct rw::audio::core::MixerExecuteParams {
	// mixer.h:46
	double systemTime;

	// mixer.h:48
	VoiceListNode * pVoiceListNodes;

	// mixer.h:50
	MixerExecuteReturns * pMixerExecuteReturns;

	// mixer.h:51
	char * pPingPongBufferSpace;

	// mixer.h:52
	PlugInRegistryEntry * pPlugInRegistryEntries;

	// mixer.h:55
	float outputSampleRate;

	// mixer.h:57
	short unsigned int numVoices;

	// mixer.h:59
	unsigned char numPlugInsRegistered;

	// mixer.h:60
	unsigned char verifyFloats;

}

// mixer.h:71
struct rw::audio::core::Mixer {
private:
	// mixer.h:290
	float[3][16384] mBuffer;

	// mixer.h:299
	double mCurrentMixTime;

	// mixer.h:301
	System * mpSystem;

	// mixer.h:304
	SampleBuffer *[3] mpSampleBuffer;

	// mixer.h:306
	MixerExecuteParams * mpMixerExecuteParams;

	// mixer.h:308
	unsigned int mMixerCpuCycles;

	// mixer.h:310
	int mSrcNumSamples;

	// mixer.h:311
	float mSrcSampleRate;

	// mixer.h:312
	float mTotalPitch;

	// mixer.h:321
	unsigned char mSrcNumChannels;

public:
	// mixer.h:73
	void Mixer();

	// mixer.h:75
	void SetSystem(System *);

	// mixer.h:81
	rw::audio::core::BufferStatus Execute(MixerExecuteParams *);

	// mixer.h:108
	SampleBuffer * GetSrcSampleBuffer();

	// mixer.h:140
	SampleBuffer * GetDstSampleBuffer();

	// mixer.h:162
	void SwapBuffers();

	// mixer.h:171
	void SetPitch(float);

	// mixer.h:181
	void ScalePitch(float);

	// mixer.h:223
	float GetPitch();

	// mixer.h:231
	int GetSrcNumSamples();

	// mixer.h:232
	int GetSrcNumChannels();

	// mixer.h:233
	float GetSrcSampleRate();

	// mixer.h:235
	void SetSrcNumSamples(int);

	// mixer.h:236
	void SetSrcNumChannels(int);

	// mixer.h:237
	void SetSrcSampleRate(float);

	// mixer.h:240
	double GetTime();

	// mixer.h:246
	float GetOutputSampleRate();

	// mixer.h:252
	unsigned int GetCpuCycles();

private:
	// mixer.h:270
	VoiceListNode * GetNextVoiceListNode(int);

	// mixer.h:271
	rw::audio::core::Voice * LoadVoice(VoiceListNode *);

	// mixer.h:273
	// Declaration
	void LoadPlugIn(PlugInLocationDesc *, rw::audio::core::PlugIn *, PreProcessFn **, ProcessFn **, unsigned int *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// voice.h:53
		typedef int (rw::audio::core::PlugIn *, Mixer *, bool, int) PreProcessFn;

		// voice.h:67
		typedef rw::audio::core::BufferStatus (rw::audio::core::PlugIn *, Mixer *, bool) ProcessFn;

	}

	// mixer.h:274
	void SaveVoice(VoiceListNode *);

	// mixer.h:275
	rw::audio::core::BufferStatus HandleBufferStatusUnavailable(rw::audio::core::Voice *, rw::audio::core::PlugIn *, int);

	// mixer.h:277
	rw::audio::core::BufferStatus ProcessInputPlugIns(PlugInLocationDesc *, VoiceListNode *, rw::audio::core::Voice *);

}

