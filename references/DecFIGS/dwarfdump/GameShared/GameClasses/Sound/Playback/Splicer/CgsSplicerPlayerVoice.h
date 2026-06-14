// CgsSplicerPlayerVoice.h:56
struct CgsSound::Playback::SplicerPlayerVoice : public GenericRwacVoice {
	// CgsSplicerPlayerVoice.cpp:46
	extern const Name SK_PLAYER_FEATURE;

	// CgsSplicerPlayerVoice.cpp:48
	extern const Name SK_PITCH_PARAMETER;

	// CgsSplicerPlayerVoice.cpp:50
	extern const Name SK_AZIMUTH_PARAMETER;

	// CgsSplicerPlayerVoice.cpp:52
	extern const Name SK_SPREAD_PARAMETER;

private:
	// CgsSplicerPlayerVoice.h:177
	rw::audio::core::PlugIn * mpInternalSubmix;

	// CgsSplicerPlayerVoice.h:178
	Splice * mpSplice;

public:
	void SplicerPlayerVoice(const CgsSound::Playback::SplicerPlayerVoice &);

	// CgsSplicerPlayerVoice.h:197
	size_t GetClientAllocationSize(CgsSound::Playback::Factory &, const VoiceSpec &);

	// CgsSplicerPlayerVoice.h:207
	void * operator new(size_t, CgsSound::Playback::Factory &, const VoiceSpec &);

	// CgsSplicerPlayerVoice.h:219
	void operator delete(void *, CgsSound::Playback::Factory &);

	// CgsSplicerPlayerVoice.h:90
	void operator delete(void *, CgsSound::Playback::Factory &, const VoiceSpec &);

	// CgsSplicerPlayerVoice.h:94
	void operator delete(void *);

	// CgsSplicerPlayerVoice.h:229
	void SplicerPlayerVoice(CgsSound::Playback::Factory &, const VoiceSpec &, uint32_t);

	// CgsSplicerPlayerVoice.h:104
	virtual void ~SplicerPlayerVoice();

	// CgsSplicerPlayerVoice.h:114
	void InitialiseData(CgsSound::Playback::Environment &);

	// CgsSplicerPlayerVoice.h:117
	rw::audio::core::PlugIn * GetInternalSubmix();

	// CgsSplicerPlayerVoice.h:124
	virtual float GetCpuTicks();

	// CgsSplicerPlayerVoice.h:141
	virtual void DisplayVoiceCpu(float *, float *, float, bool);

	// CgsSplicerPlayerVoice.h:146
	virtual CgsSound::Playback::Voice::EProfileVoiceType GetProfileVoiceType();

protected:
	// CgsSplicerPlayerVoice.h:155
	CgsSound::Playback::SplicerFactory & GetSplicerFactory();

	// CgsSplicerPlayerVoice.h:163
	virtual void DoUpdate(System *, float32_t);

	// CgsSplicerPlayerVoice.h:171
	virtual bool DoConnectSend(uint32_t, CgsSound::Playback::SubmixVoice *);

}

