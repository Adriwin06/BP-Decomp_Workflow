// CgsPlayerVoice.h:42
struct CgsSound::Playback::PlayerVoice : public Voice {
	// CgsPlayerVoice.cpp:42
	extern const Name SK_PLAYER_SLOT_NAME;

public:
	void PlayerVoice(const CgsSound::Playback::PlayerVoice &);

	// CgsPlayerVoice.h:119
	void PlayerVoice(size_t, CgsSound::Playback::Factory &, const VoiceSpec &, uint32_t);

	// CgsPlayerVoice.h:66
	virtual void ~PlayerVoice();

	// CgsPlayerVoice.h:134
	void Play(uint32_t);

	// CgsPlayerVoice.h:145
	void Stop();

	// CgsPlayerVoice.h:157
	bool IsCompatible(CgsSound::Playback::EVoiceType);

	// CgsPlayerVoice.h:96
	rw::audio::core::PlugIn ** GetSubmixAddress();

}

