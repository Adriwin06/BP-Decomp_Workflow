// CgsGenericRwacMasterVoice.h:55
using rw::audio::core;

// CgsGenericRwacMasterVoice.h:40
struct CgsSound::Playback::GenericRwacMasterVoice : protected GenericRwacVoice {
public:
	void GenericRwacMasterVoice(const CgsSound::Playback::GenericRwacMasterVoice &);

	// CgsGenericRwacMasterVoice.h:121
	void GenericRwacMasterVoice(CgsSound::Playback::Factory &, const VoiceSpec &, uint32_t);

protected:
	// CgsGenericRwacMasterVoice.h:53
	virtual void DoDispose();

	// CgsGenericRwacMasterVoice.h:69
	virtual void DoUpdate(System *, float);

	// CgsGenericRwacMasterVoice.h:76
	virtual float GetCpuTicks();

	// CgsGenericRwacMasterVoice.h:86
	virtual void DisplayVoiceCpu(float *, float *, float, bool);

	// CgsGenericRwacMasterVoice.h:92
	virtual CgsSound::Playback::Voice::EProfileVoiceType GetProfileVoiceType();

	// CgsGenericRwacMasterVoice.h:102
	virtual bool DoConnectSend(uint32_t, CgsSound::Playback::SubmixVoice *);

public:
	virtual void ~GenericRwacMasterVoice();

}

// CgsGenericRwacMasterVoice.h:40
void CgsSound::Playback::GenericRwacMasterVoice::~GenericRwacMasterVoice() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

