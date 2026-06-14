// CgsGenericRwacSubmixVoice.h:41
struct CgsSound::Playback::GenericRwacSubmixVoice : protected GenericRwacVoice {
public:
	void GenericRwacSubmixVoice(const CgsSound::Playback::GenericRwacSubmixVoice &);

	// CgsGenericRwacSubmixVoice.h:109
	void GenericRwacSubmixVoice(CgsSound::Playback::Factory &, const VoiceSpec &, uint32_t);

protected:
	// CgsGenericRwacSubmixVoice.h:58
	virtual void DoUpdate(System *, float32_t);

	// CgsGenericRwacSubmixVoice.h:65
	virtual float GetCpuTicks();

	// CgsGenericRwacSubmixVoice.h:75
	virtual void DisplayVoiceCpu(float *, float *, float, bool);

	// CgsGenericRwacSubmixVoice.h:81
	virtual CgsSound::Playback::Voice::EProfileVoiceType GetProfileVoiceType();

	// CgsGenericRwacSubmixVoice.h:90
	virtual bool DoConnectSend(uint32_t, CgsSound::Playback::SubmixVoice *);

public:
	virtual void ~GenericRwacSubmixVoice();

}

// CgsGenericRwacSubmixVoice.h:41
void CgsSound::Playback::GenericRwacSubmixVoice::~GenericRwacSubmixVoice() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

