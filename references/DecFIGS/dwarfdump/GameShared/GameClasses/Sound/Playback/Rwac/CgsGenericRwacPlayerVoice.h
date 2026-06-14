// CgsGenericRwacPlayerVoice.h:58
struct CgsSound::Playback::GenericRwacPlayerVoice : public GenericRwacVoice {
	// CgsGenericRwacPlayerVoice.cpp:43
	extern const Name SK_PLAYER_FEATURE;

	// CgsGenericRwacPlayerVoice.cpp:46
	extern const Name SK_MONO_PLAYER_FEATURE;

	// CgsGenericRwacPlayerVoice.cpp:49
	extern const Name SK_STEREO_PLAYER_FEATURE;

	// CgsGenericRwacPlayerVoice.cpp:52
	extern const Name SK_AMBISONICS_PLAYER_FEATURE;

	// CgsGenericRwacPlayerVoice.cpp:55
	extern const Name SK_PLAYER_PARAMETER_PITCH;

private:
	// CgsGenericRwacPlayerVoice.h:121
	rw::audio::core::SndPlayer1::IsRequestDoneParams mIsRequestDoneParams;

public:
	void GenericRwacPlayerVoice(const CgsSound::Playback::GenericRwacPlayerVoice &);

	// CgsGenericRwacPlayerVoice.h:139
	void GenericRwacPlayerVoice(CgsSound::Playback::Factory &, const VoiceSpec &, uint32_t);

	// CgsGenericRwacPlayerVoice.h:74
	rw::audio::core::SndPlayer1::IsRequestDoneParams & GetDoneParams();

protected:
	// CgsGenericRwacPlayerVoice.cpp:64
	virtual void DoUpdate(System *, float32_t);

	// CgsGenericRwacPlayerVoice.h:88
	virtual float GetCpuTicks();

	// CgsGenericRwacPlayerVoice.h:98
	virtual void DisplayVoiceCpu(float *, float *, float, bool);

	// CgsGenericRwacPlayerVoice.h:104
	virtual CgsSound::Playback::Voice::EProfileVoiceType GetProfileVoiceType();

	// CgsGenericRwacPlayerVoice.h:113
	virtual bool DoConnectSend(uint32_t, CgsSound::Playback::SubmixVoice *);

public:
	virtual void ~GenericRwacPlayerVoice();

}

// CgsGenericRwacPlayerVoice.h:58
void CgsSound::Playback::GenericRwacPlayerVoice::~GenericRwacPlayerVoice() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

