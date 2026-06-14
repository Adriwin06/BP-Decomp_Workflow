// CgsAemsPlayerVoice.h:53
struct CgsSound::Playback::AemsPlayerVoice : public GenericRwacVoice {
private:
	// CgsAemsPlayerVoice.h:201
	uint32_t muAemsTicks;

	// CgsAemsPlayerVoice.h:217
	AemsRWSamplePlayer * mpFirstPlayer;

	// CgsAemsPlayerVoice.h:218
	rw::audio::core::PlugIn * mpInternalSubmix;

	// CgsAemsPlayerVoice.h:219
	ClassHandle mCsisHandle;

	// CgsAemsPlayerVoice.h:220
	Csis::Class * mpCsisClass;

	// CgsAemsPlayerVoice.h:221
	uint32_t mu32AemsFirstUserParam;

	// CgsAemsPlayerVoice.h:222
	uint32_t mu32AemsParamCount;

	// CgsAemsPlayerVoice.h:224
	bool mbRemoving;

public:
	void AemsPlayerVoice(const CgsSound::Playback::AemsPlayerVoice &);

	// CgsAemsPlayerVoice.h:242
	size_t GetClientAllocationSize(CgsSound::Playback::Factory &, const VoiceSpec &);

	// CgsAemsPlayerVoice.h:261
	void * operator new(size_t, CgsSound::Playback::Factory &, const VoiceSpec &);

	// CgsAemsPlayerVoice.h:273
	void operator delete(void *, CgsSound::Playback::Factory &);

	// CgsAemsPlayerVoice.h:82
	void operator delete(void *, CgsSound::Playback::Factory &, const VoiceSpec &);

	// CgsAemsPlayerVoice.h:86
	void operator delete(void *);

	// CgsAemsPlayerVoice.h:283
	void AemsPlayerVoice(CgsSound::Playback::Factory &, const VoiceSpec &, uint32_t);

	// CgsAemsPlayerVoice.h:96
	virtual void ~AemsPlayerVoice();

	// CgsAemsPlayerVoice.h:107
	void InitialiseData(CgsSound::Playback::Environment &);

	// CgsAemsPlayerVoice.h:110
	rw::audio::core::PlugIn * GetInternalSubmix();

	// CgsAemsPlayerVoice.cpp:193
	rw::audio::core::PlugIn * GetFxBusSubMix();

	// CgsAemsPlayerVoice.h:119
	CgsSound::Playback::AemsFactory & GetAemsFactory();

	// CgsAemsPlayerVoice.h:126
	virtual float32_t GetCpuTicks();

	// CgsAemsPlayerVoice.h:149
	virtual void DisplayVoiceCpu(float *, float *, float, bool);

	// CgsAemsPlayerVoice.h:154
	virtual CgsSound::Playback::Voice::EProfileVoiceType GetProfileVoiceType();

protected:
	// CgsAemsPlayerVoice.h:165
	virtual void DoUpdate(System *, float32_t);

	// CgsAemsPlayerVoice.h:173
	virtual bool DoConnectSend(uint32_t, CgsSound::Playback::SubmixVoice *);

public:
	// CgsAemsPlayerVoice.cpp:97
	bool Update(float);

	// CgsAemsPlayerVoice.cpp:141
	bool Play(uint32_t);

	// CgsAemsPlayerVoice.cpp:163
	bool Stop();

protected:
	// CgsAemsPlayerVoice.cpp:180
	virtual bool DoRemove();

private:
	// CgsAemsPlayerVoice.h:204
	uint32_t & GetAemsParameter(uint32_t);

	// CgsAemsPlayerVoice.cpp:52
	void AddSamplePlayer(AemsRWSamplePlayer *);

	// CgsAemsPlayerVoice.cpp:63
	void RemoveSamplePlayer(AemsRWSamplePlayer *);

}

