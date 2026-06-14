// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// Declaration
		struct PresentationEffect {
			// BrnPresentationEffect.h:107
			enum ePresentationContent {
				E_PRESENTATION_CONTENT_SPLICE = 0,
				E_PRESENTATION_CONTENT_WAVE_FILE = 1,
				E_PRESENTATION_CONTENT_STREAM = 2,
			}

			// BrnPresentationEffect.h:116
			enum eMode {
				E_MODE_NONE = 0,
				E_MODE_ONLINE_ENTRANCE = 1,
			}

			// BrnPresentationEffect.h:132
			struct PresentationEntry {
				// BrnPresentationEffect.h:133
				extern const uint16_t KU16_SPECIAL_SPLICE_STREAM = 65534;

				// BrnPresentationEffect.h:134
				extern const uint16_t KU16_SPECIAL_SPLICE_WAVE = 65535;

				// BrnPresentationEffect.h:187
				uint64_t mu64StringId;

				// BrnPresentationEffect.h:188
				uint64_t mu64ScreenId;

				// BrnPresentationEffect.h:190
				Command::QueueElement mContentSpec;

				// BrnPresentationEffect.h:191
				uint16_t mu16Splice;

				// BrnPresentationEffect.h:192
				uint8_t mu8ChokeGroup;

				// BrnPresentationEffect.h:193
				uint8_t mu8Valid;

				// BrnPresentationEffect.h:194
				uint8_t mu8Behaviour;

				// BrnPresentationEffect.h:195
				uint8_t mu8MixerOutput;

			public:
				// BrnPresentationEffect.h:141
				void Construct();

				// BrnPresentationEffect.h:153
				void Construct(Command::QueueElement, uint16_t, uint8_t, uint8_t, uint8_t);

				// BrnPresentationEffect.h:160
				bool IsValid() const;

				// BrnPresentationEffect.h:167
				BrnSound::Logic::PresentationEffect::ePresentationContent GetContent() const;

				// Unknown accessibility
				// PresentationBehaviour.h:22
				typedef AttribSys::Enums::PresentationBehaviour::PresentationBehaviour EPresentationBehaviour;

				// BrnPresentationEffect.h:174
				BrnSound::Logic::PresentationEffect::PresentationEntry::EPresentationBehaviour GetBehaviour() const;

				// BrnPresentationEffect.h:184
				bool IsContentMatch(const BrnSound::Logic::PresentationEffect::PresentationEntry &, const BrnSound::Logic::PresentationEffect::PresentationEntry &);

			}

			// BrnPresentationEffect.h:208
			struct AgingVoice {
				// BrnPresentationEffect.h:209
				uint16_t mu16Age;

				// BrnPresentationEffect.h:210
				CgsSound::Logic::VoiceWrapper mVoice;

				// BrnPresentationEffect.h:211
				BrnSound::Logic::PresentationEffect::PresentationEntry mDataEntry;

				// BrnPresentationEffect.h:212
				float32_t mfTimeSinceLastTick;

			public:
				// BrnPresentationEffect.h:213
				AgingVoice();

			}

		}

	}

}

// BrnPresentationEffect.h:39
struct BrnSound::Logic::PresentationEffect : public BrnSound::Logic::Streaming::IStreamUser {
protected:
	// BrnPresentationEffect.cpp:28
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnPresentationEffect.h:286
	BrnSound::Logic::PresentationEffect::AgingVoice[4] maVoices;

	// BrnPresentationEffect.h:287
	uint8_t[14] mau8DataOffsets;

	// BrnPresentationEffect.h:288
	uint8_t[14] mau8DataEnds;

	// BrnPresentationEffect.h:289
	CgsSound::Logic::VoiceWrapper::CreateParams mStreamParams;

	// BrnPresentationEffect.h:290
	presentationactionlist mActions;

	// BrnPresentationEffect.h:292
	DataPoint<BrnSound::Logic::PresentationEffect::eMode> mMode;

	// BrnPresentationEffect.h:293
	uint8_t mu8StreamOutput;

public:
	void PresentationEffect(const PresentationEffect &);

	void PresentationEffect();

	// BrnPresentationEffect.cpp:28
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnPresentationEffect.cpp:28
	virtual const char * GetTypeName() const;

	// BrnPresentationEffect.h:40
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnPresentationEffect.cpp:28
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnPresentationEffect.cpp:48
	virtual void ~PresentationEffect();

	// BrnPresentationEffect.cpp:186
	virtual bool Attach();

	// BrnPresentationEffect.cpp:68
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPresentationEffect.cpp:70
		using namespace Module::Io;

		// BrnPresentationEffect.cpp:71
		using namespace AttribSys::Enums;

	}

	// BrnPresentationEffect.cpp:116
	// Declaration
	virtual void ProcessUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPresentationEffect.cpp:127
		using namespace SendIndexes::SplicerVoiceSpec;

		// BrnPresentationEffect.cpp:139
		using namespace ParameterIndexes::SplicerVoiceSpec;

		// BrnPresentationEffect.cpp:147
		using namespace ParameterIndexes::StereoWavVoiceSpec;

	}

	// BrnPresentationEffect.cpp:218
	// Declaration
	virtual bool Detach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPresentationEffect.cpp:220
		using namespace Streaming;

	}

	// BrnPresentationEffect.cpp:255
	virtual void Notify(const CgsSound::Io::MessageHeader *);

	// BrnPresentationEffect.cpp:308
	virtual const CgsSound::Logic::VoiceWrapper::CreateParams & GetCreateParams() const;

	// BrnPresentationEffect.cpp:328
	// Declaration
	virtual void UpdateVoiceParams(CgsSound::Logic::VoiceWrapper &, float32_t, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPresentationEffect.cpp:330
		using namespace CgsSound::Playback;

		// BrnPresentationEffect.cpp:331
		using namespace ParameterIndexes::MusicVoiceSpec;

		// BrnPresentationEffect.cpp:332
		using namespace SendIndexes::MusicVoiceSpec;

	}

private:
	// BrnPresentationEffect.cpp:354
	// Declaration
	void Resolve(BrnSound::Logic::PresentationEffect::PresentationEntry &, const GuiAudioTriggerEvent *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPresentationEffect.cpp:356
		using namespace AttribSys::Enums;

		// BrnPresentationEffect.cpp:357
		using namespace CgsResource;

	}

	// BrnPresentationEffect.cpp:410
	// Declaration
	void Resolve(BrnSound::Logic::PresentationEffect::PresentationEntry &, uint64_t, uint64_t, EPresentationAction) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// PresentationAction.h:33
		typedef AttribSys::Enums::PresentationAction::PresentationAction EPresentationAction;

	}

	// BrnPresentationEffect.cpp:485
	// Declaration
	BrnSound::Logic::PresentationEffect::AgingVoice * FindOrStealAVoice(const BrnSound::Logic::PresentationEffect::PresentationEntry &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPresentationEffect.cpp:487
		using namespace AttribSys::Enums;

	}

	// BrnPresentationEffect.cpp:554
	BrnSound::Logic::PresentationEffect::AgingVoice * FindFreeVoice();

	// BrnPresentationEffect.cpp:580
	// Declaration
	void Play(const BrnSound::Logic::PresentationEffect::PresentationEntry &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPresentationEffect.cpp:582
		using namespace CgsSound::Logic;

		// BrnPresentationEffect.cpp:583
		using namespace CgsSound::Playback;

	}

	// BrnPresentationEffect.cpp:694
	// Declaration
	void PlayStream(Command::QueueElement) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPresentationEffect.cpp:696
		using namespace Streaming;

	}

	// BrnPresentationEffect.cpp:732
	BrnSound::Logic::PresentationEffect::eMode GetMode(const RootInputBuffer::GameModeOutputInterface *) const;

	// BrnPresentationEffect.cpp:774
	void HandleTick(const BrnSound::Logic::PresentationEffect::PresentationEntry &);

	// BrnPresentationEffect.cpp:800
	// Declaration
	void CalculateDataOffsets(const presentationactionlist &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPresentationEffect.cpp:802
		using namespace AttribSys::Enums;

	}

}

// BrnPresentationEffect.h:39
void BrnSound::Logic::PresentationEffect::PresentationEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPresentationEffect.h:133
extern const uint16_t KU16_SPECIAL_SPLICE_STREAM = 65534;

// BrnPresentationEffect.h:134
extern const uint16_t KU16_SPECIAL_SPLICE_WAVE = 65535;

