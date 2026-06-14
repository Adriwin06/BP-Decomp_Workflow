// SpliceObjects.h:16
struct SpliceSample {
	int (*)(...) * _vptr.SpliceSample;

protected:
	// SpliceObjects.h:51
	SpliceManager::VoicePluginPair mDynamicVoicePluginPair;

	// SpliceObjects.h:52
	SpliceManager::VoicePluginPair * mpVoicePluginPair;

	// SpliceObjects.h:53
	rw::audio::core::PlugIn * mpSubMix;

	// SpliceObjects.h:54
	rw::audio::core::PlugIn * mpSendPlugIn;

	// SpliceObjects.h:55
	rw::audio::core::PlugIn * mpResamplePlugIn;

	// SpliceObjects.h:56
	rw::audio::core::PlugIn * mpPanningPlugIn;

	// SpliceObjects.h:59
	float mLocPitch;

	// SpliceObjects.h:60
	float mLocVol;

	// SpliceObjects.h:61
	float mtTimeToTrigger;

	// SpliceObjects.h:62
	float mtTimeIntoPlayback;

	// SpliceObjects.h:63
	SPLICE_SampleRef * mpData;

	// SpliceObjects.h:64
	float mLastPitch;

	// SpliceObjects.h:65
	float32_t mfPreviousAzimuth;

	// SpliceObjects.h:66
	float32_t mfPreviousVol;

	// SpliceObjects.h:67
	float32_t mfPreviousPitch;

	// SpliceObjects.h:69
	bool mbUsingDynamicVoice;

	// SpliceObjects.h:71
	bool mbStartVoice;

public:
	SpliceSample(const SpliceSample &);

	// SpliceObjects.cpp:228
	SpliceSample(SPLICE_SampleRef *, rw::audio::core::PlugIn *);

	// SpliceObjects.cpp:244
	~SpliceSample();

	// SpliceObjects.cpp:292
	void Play(float, float, float, float);

	// SpliceObjects.cpp:394
	void Update(System *, float, float, float, float, float);

	// SpliceObjects.cpp:643
	uint32_t GetCpuTicks();

	// SpliceObjects.cpp:616
	bool IsPlaying();

protected:
	// SpliceObjects.cpp:345
	virtual void StartVoice();

	// SpliceObjects.cpp:590
	void GetEnvelopeVolume(float &);

	// SpliceObjects.cpp:253
	void FreeVoice();

	// SpliceObjects.h:49
	const SPLICE_SampleRef * GetData();

}

// SpliceObjects.h:75
struct StereoSpliceSample : public SpliceSample {
public:
	StereoSpliceSample(const StereoSpliceSample &);

	// SpliceObjects.cpp:660
	StereoSpliceSample(SPLICE_SampleRef *, rw::audio::core::PlugIn *);

	// SpliceObjects.cpp:669
	virtual void StartVoice();

}

// SpliceObjects.h:92
struct Splice {
private:
	// SpliceObjects.h:130
	SpliceSample *[15] mSampleRefs;

	// SpliceObjects.h:131
	SPLICE_Data * mpData;

public:
	// SpliceObjects.h:94
	Splice(SPLICE_TYPE, int, rw::audio::core::PlugIn *);

	// SpliceObjects.h:96
	Splice(SPLICE_Data *, rw::audio::core::PlugIn *);

	// SpliceObjects.h:97
	~Splice();

	// SpliceObjects.h:103
	void Play(float, float, float, float);

	// SpliceObjects.h:111
	void Update(System *, float, float, float, float, float);

	// SpliceObjects.h:113
	bool IsPlaying();

	// SpliceObjects.h:116
	void * operator new(size_t);

	// SpliceObjects.h:119
	void operator delete(void *);

	// SpliceObjects.h:123
	uint32_t GetCpuTicks();

private:
	// SpliceObjects.h:128
	SPLICE_Data * GetData();

}

