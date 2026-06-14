// PresentationAction.h:7
namespace AttribSys {
	// PresentationAction.h:9
	namespace Enums {
		// PresentationBehaviour.h:11
		namespace PresentationBehaviour {
			// PresentationBehaviour.h:12
			enum PresentationBehaviour {
				JustPlay = 0,
				SustainedByTick = 1,
				DontReTrigger = 2,
			}

			// PresentationBehaviour.h:18
			const int KI_NUM_ENUMS = 3;

			// PresentationBehaviour.h:19
			const int KI_MAX_VALUE = 2;

		}

	}

}

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

