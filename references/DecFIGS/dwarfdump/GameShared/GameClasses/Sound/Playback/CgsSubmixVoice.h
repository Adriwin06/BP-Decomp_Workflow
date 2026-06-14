// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// CgsSubmixVoice.h:29
		const Name K_DefaultSendName;

	}

}

// CgsSubmixVoice.h:44
struct CgsSound::Playback::SubmixVoice : public Voice {
	// CgsSubmixVoice.h:49
	extern const Name SK_PLAYER_SLOT_NAME;

private:
	// CgsSubmixVoice.h:78
	rw::audio::core::PlugIn * mpSubmix;

public:
	void SubmixVoice(const CgsSound::Playback::SubmixVoice &);

	// CgsSubmixVoice.h:95
	void SubmixVoice(size_t, CgsSound::Playback::Factory &, const VoiceSpec &, uint32_t);

	// CgsSubmixVoice.h:59
	virtual void ~SubmixVoice();

	// CgsSubmixVoice.h:109
	bool IsCompatible(CgsSound::Playback::EVoiceType);

	// CgsSubmixVoice.h:116
	rw::audio::core::PlugIn * GetSubmix() const;

	// CgsSubmixVoice.h:123
	rw::audio::core::PlugIn ** GetSubmixAddress();

	// CgsSubmixVoice.h:75
	virtual bool ApplyReverb();

}

// CgsSubmixVoice.h:49
extern const Name SK_PLAYER_SLOT_NAME;

