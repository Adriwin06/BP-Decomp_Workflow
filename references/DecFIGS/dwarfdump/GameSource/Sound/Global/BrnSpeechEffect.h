// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// Declaration
		struct SpeechEffect {
			// BrnSpeechEffect.h:224
			enum EPlayState {
				E_PLAY_STATE_STOPPED = 0,
				E_PLAY_STATE_PLAY_REQUESTED = 1,
				E_PLAY_STATE_PLAYING = 2,
			}

		}

	}

}

// BrnSpeechEffect.h:66
struct BrnSound::Logic::SpeechEffect : public BrnSound::Logic::Streaming::IStreamUser {
protected:
	// BrnSpeechEffect.cpp:138
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnSpeechEffect.h:231
	BrnSound::Logic::SpeechEffect::EPlayState mePlayState;

	// BrnSpeechEffect.h:234
	extern const uint32_t KU_MAX_SPEECH_NAME_LENGTH = 32;

	// BrnSpeechEffect.h:237
	CgsSound::Logic::VoiceWrapper::CreateParams mParams;

	// BrnSpeechEffect.h:239
	bool mbFlagSpeechIsStillPlaying;

	// BrnSpeechEffect.h:240
	bool mbFirstTimeTipPlaying;

	// BrnSpeechEffect.h:242
	speechdata mSpeechData;

	// BrnSpeechEffect.h:244
	AttribSys::Enums::eLanguage::eLanguage meLanguage;

	// BrnSpeechEffect.h:246
	uint32_t muNextRoadRageIntroIndex;

	// BrnSpeechEffect.h:247
	uint32_t muNextStuntRunIntroIndex;

	// BrnSpeechEffect.h:249
	uintptr_t muQueuedContentSpec;

	// BrnSpeechEffect.h:250
	bool mbQueuedSpeechIsFirstTimeTip;

public:
	void SpeechEffect(const SpeechEffect &);

	// BrnSpeechEffect.cpp:138
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnSpeechEffect.cpp:138
	virtual const char * GetTypeName() const;

	// BrnSpeechEffect.h:69
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnSpeechEffect.cpp:138
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnSpeechEffect.h:273
	void SpeechEffect();

	// BrnSpeechEffect.h:286
	virtual void ~SpeechEffect();

	// BrnSpeechEffect.cpp:161
	virtual bool Attach();

	// BrnSpeechEffect.cpp:206
	// Declaration
	virtual bool Detach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSpeechEffect.cpp:208
		using namespace Streaming;

	}

	// BrnSpeechEffect.cpp:446
	virtual void Notify(const CgsSound::Io::MessageHeader *);

	// BrnSpeechEffect.cpp:237
	virtual void UpdateParams(float32_t);

	// BrnSpeechEffect.cpp:299
	virtual const CgsSound::Logic::VoiceWrapper::CreateParams & GetCreateParams() const;

	// BrnSpeechEffect.cpp:319
	// Declaration
	virtual void UpdateVoiceParams(CgsSound::Logic::VoiceWrapper &, float32_t, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSpeechEffect.cpp:321
		using namespace SendIndexes::MusicVoiceSpec;

		// BrnSpeechEffect.cpp:322
		using namespace ParameterIndexes::MusicVoiceSpec;

		// BrnSpeechEffect.cpp:323
		using namespace CgsSound::Playback;

	}

	// BrnSpeechEffect.cpp:949
	bool GetSpeechMapping(BrnSound::Module::SoundLogicModule *, Name, RefSpec &);

	// BrnSpeechEffect.cpp:344
	AttribSys::Enums::eLanguage::eLanguage GetLanguage(CgsLanguage::ELanguage);

private:
	// BrnSpeechEffect.cpp:982
	bool PlaySpeechMapping(Name, bool);

	// BrnSpeechEffect.cpp:863
	bool PlayRandomSpeechVariation(languagestreamcollection &, bool);

	// BrnSpeechEffect.cpp:885
	bool PlaySpeech(const Attrib::RefSpec &, bool);

	// BrnSpeechEffect.cpp:915
	bool PlaySpeech(const languagestreamconfiguration &, bool);

	// BrnSpeechEffect.cpp:1007
	// Declaration
	void PlayStream(uintptr_t, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSpeechEffect.cpp:1017
		using namespace SendIndexes::MusicVoiceSpec;

		// BrnSpeechEffect.cpp:1018
		using namespace CgsSound::Playback;

		// BrnSpeechEffect.cpp:1019
		using namespace Streaming;

	}

	// BrnSpeechEffect.h:300
	char * CompassDirectionToString(BrnGui::ECompassPoints);

	// BrnSpeechEffect.h:336
	char * GameModeToString(GuiEventStopMode::EGameModeType);

	// BrnSpeechEffect.cpp:382
	bool IsOneOnOne();

	// BrnSpeechEffect.cpp:415
	bool IsLocalPlayerRunner();

}

// BrnSpeechEffect.h:234
extern const uint32_t KU_MAX_SPEECH_NAME_LENGTH = 32;

