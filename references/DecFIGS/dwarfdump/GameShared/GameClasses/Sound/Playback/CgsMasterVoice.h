// CgsMasterVoice.h:39
struct CgsSound::Playback::MasterVoice : public CgsSound::Playback::SubmixVoice {
private:
	// CgsMasterVoice.cpp:43
	extern MasterVoice * spMasterVoice;

public:
	void MasterVoice(const MasterVoice &);

	// CgsMasterVoice.h:78
	void MasterVoice(size_t, CgsSound::Playback::Factory &, const VoiceSpec &, uint32_t);

	// CgsMasterVoice.cpp:46
	virtual void ~MasterVoice();

	// CgsMasterVoice.h:91
	bool IsAvailable();

	// CgsMasterVoice.h:98
	MasterVoice & GetMasterVoice();

	// CgsMasterVoice.h:106
	bool IsCompatible(CgsSound::Playback::EVoiceType);

}

