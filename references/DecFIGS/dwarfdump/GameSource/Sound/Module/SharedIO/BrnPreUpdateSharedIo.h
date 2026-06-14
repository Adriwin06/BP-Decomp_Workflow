// BrnPreUpdateSharedIo.h:31
namespace BrnSound {
	// BrnPreUpdateSharedIo.h:32
	namespace Module {
		// BrnPreUpdateSharedIo.h:33
		namespace Io {
			// BrnPreUpdateSharedIo.h:49
			enum eEffectsMessageTypes {
				E_EFFECTS_MESSAGE_TYPES_INVALID = 0,
				E_EFFECTS_MESSAGE_TYPES_POP = 1,
				E_EFFECTS_MESSAGE_TYPES_VOICEOVER_FINISHED = 2,
				E_EFFECTS_MESSAGE_TYPES_COUNT = 3,
			}

			struct AudioEffectsMessageEvent<E_EFFECTS_MESSAGE_TYPES_POP>;

			struct PopEffectsMessage;

			struct AudioEffectsMessageQueue;

			// BrnPreUpdateSharedIo.h:38
			const int32_t KI_GUI_OUT_EVENT_QUEUE_SIZE_B = 256;

			// BrnPreUpdateSharedIo.h:39
			const int32_t KI_EFFECTS_MESSAGES_QUEUE_SIZE = 128;

		}

	}

}

// BrnPreUpdateSharedIo.h:69
struct BrnSound::Module::Io::AudioEffectsMessageEvent<E_EFFECTS_MESSAGE_TYPES_POP> : public Event {
public:
	// BrnPreUpdateSharedIo.h:74
	BrnSound::Module::Io::eEffectsMessageTypes GetEventType() const;

}

// BrnPreUpdateSharedIo.h:87
struct BrnSound::Module::Io::PopEffectsMessage : public AudioEffectsMessageEvent<E_EFFECTS_MESSAGE_TYPES_POP> {
	// BrnPreUpdateSharedIo.h:95
	uint8_t muRaceCarID;

	// BrnPreUpdateSharedIo.h:96
	float32_t mfIntensity;

public:
	// BrnPreUpdateSharedIo.h:93
	void Construct(uint8_t, float32_t);

}

// BrnPreUpdateSharedIo.h:125
struct BrnSound::Module::Io::AudioEffectsMessageQueue : public VariableEventQueue<128,16> {
}

// BrnSoundRootSharedIO.h:25
namespace BrnSound {
	// BrnSoundRootSharedIO.h:26
	namespace Module {
		// BrnSoundRootSharedIO.h:27
		namespace Io {
			// BrnPreUpdateSharedIo.h:38
			const int32_t KI_GUI_OUT_EVENT_QUEUE_SIZE_B = 256;

			// BrnPreUpdateSharedIo.h:39
			const int32_t KI_EFFECTS_MESSAGES_QUEUE_SIZE = 128;

		}

	}

}

// BrnPreUpdateSharedIo.h:149
struct BrnSound::Module::Io::PreUpdateOutput {
	// BrnPreUpdateSharedIo.h:45
	typedef GuiEventQueueBase<256,16> GuiOutEventQueue;

private:
	// BrnPreUpdateSharedIo.h:212
	PreUpdateOutput::GuiOutEventQueue mGuiOutEventQueue;

	// BrnPreUpdateSharedIo.h:213
	InputBuffer_PreScene::AudioCarLoadedDataQueue mAudioCarDataLoadedQueue;

	// BrnPreUpdateSharedIo.h:214
	AudioEffectsMessageQueue mAudioEffectsMessageQueue;

public:
	// BrnPreUpdateSharedIo.h:158
	void Construct();

	// BrnPreUpdateSharedIo.h:165
	void Clear();

	// BrnPreUpdateSharedIo.h:172
	PreUpdateOutput::GuiOutEventQueue & GetGuiOutEventQueue();

	// BrnPreUpdateSharedIo.h:179
	const PreUpdateOutput::GuiOutEventQueue & GetGuiOutEventQueue() const;

	// BrnPreUpdateSharedIo.h:186
	InputBuffer_PreScene::AudioCarLoadedDataQueue & GetCarDataLoadedQueue();

	// BrnPreUpdateSharedIo.h:193
	const InputBuffer_PreScene::AudioCarLoadedDataQueue & GetCarDataLoadedQueue() const;

	// BrnPreUpdateSharedIo.h:200
	AudioEffectsMessageQueue & GetAudioEffectsMessageQueue();

	// BrnPreUpdateSharedIo.h:206
	const AudioEffectsMessageQueue & GetAudioEffectsMessageQueue() const;

}

// BrnPreUpdateSharedIo.h:31
namespace BrnSound {
	// BrnPreUpdateSharedIo.h:32
	namespace Module {
		// BrnPreUpdateSharedIo.h:33
		namespace Io {
			// BrnPreUpdateSharedIo.h:38
			const int32_t KI_GUI_OUT_EVENT_QUEUE_SIZE_B = 256;

			// BrnPreUpdateSharedIo.h:39
			const int32_t KI_EFFECTS_MESSAGES_QUEUE_SIZE = 128;

		}

	}

}

// BrnPreUpdateSharedIo.h:31
namespace BrnSound {
	// BrnPreUpdateSharedIo.h:32
	namespace Module {
		// BrnPreUpdateSharedIo.h:33
		namespace Io {
			struct EaTraxHelper;

			// BrnPreUpdateSharedIo.h:38
			const int32_t KI_GUI_OUT_EVENT_QUEUE_SIZE_B = 256;

			// BrnPreUpdateSharedIo.h:39
			const int32_t KI_EFFECTS_MESSAGES_QUEUE_SIZE = 128;

		}

	}

}

// BrnPreUpdateSharedIo.h:230
struct BrnSound::Module::Io::EaTraxHelper {
	// BrnPreUpdateSharedIo.h:289
	extern Attribute::Key mGlobalDataKey;

public:
	// BrnPreUpdateSharedIo.h:240
	const char * GetSongName(int32_t) const;

	// BrnPreUpdateSharedIo.h:248
	const char * GetArtistName(int32_t) const;

	// BrnPreUpdateSharedIo.h:256
	const char * GetAlbumName(int32_t) const;

	// BrnPreUpdateSharedIo.h:263
	int32_t GetNumSongs() const;

	// BrnPreUpdateSharedIo.h:271
	void SetGlobalDataKey(Attribute::Key);

private:
	// BrnPreUpdateSharedIo.h:283
	const Attrib::RefSpec & GetSongRefSpec(int32_t) const;

}

// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnSoundCommonSharedIO.h:27
	namespace Module {
		// BrnSoundCommonSharedIO.h:28
		namespace Io {
			// BrnPreUpdateSharedIo.h:38
			const int32_t KI_GUI_OUT_EVENT_QUEUE_SIZE_B = 256;

			// BrnPreUpdateSharedIo.h:39
			const int32_t KI_EFFECTS_MESSAGES_QUEUE_SIZE = 128;

		}

	}

}

// BrnSoundLoopModelData.h:40
namespace BrnSound {
	// BrnSoundCommonSharedIO.h:27
	namespace Module {
		// BrnSoundCommonSharedIO.h:28
		namespace Io {
			// BrnPreUpdateSharedIo.h:38
			const int32_t KI_GUI_OUT_EVENT_QUEUE_SIZE_B = 256;

			// BrnPreUpdateSharedIo.h:39
			const int32_t KI_EFFECTS_MESSAGES_QUEUE_SIZE = 128;

		}

	}

}

// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnSoundCommonSharedIO.h:27
	namespace Module {
		// BrnSoundCommonSharedIO.h:28
		namespace Io {
			// BrnPreUpdateSharedIo.h:49
			enum eEffectsMessageTypes {
				E_EFFECTS_MESSAGE_TYPES_INVALID = 0,
				E_EFFECTS_MESSAGE_TYPES_POP = 1,
				E_EFFECTS_MESSAGE_TYPES_VOICEOVER_FINISHED = 2,
				E_EFFECTS_MESSAGE_TYPES_COUNT = 3,
			}

			// BrnPreUpdateSharedIo.h:38
			const int32_t KI_GUI_OUT_EVENT_QUEUE_SIZE_B = 256;

			// BrnPreUpdateSharedIo.h:39
			const int32_t KI_EFFECTS_MESSAGES_QUEUE_SIZE = 128;

		}

	}

}

// BrnPreUpdateSharedIo.h:69
struct BrnSound::Module::Io::AudioEffectsMessageEvent<E_EFFECTS_MESSAGE_TYPES_VOICEOVER_FINISHED> : public Event {
public:
	// BrnPreUpdateSharedIo.h:74
	BrnSound::Module::Io::eEffectsMessageTypes GetEventType() const;

}

// BrnPreUpdateSharedIo.h:110
struct BrnSound::Module::Io::VoiceoverFinishedMessage : public AudioEffectsMessageEvent<E_EFFECTS_MESSAGE_TYPES_VOICEOVER_FINISHED> {
	// BrnPreUpdateSharedIo.h:112
	bool mbAborted;

}

// BrnPreUpdateSharedIo.h:451
extern void AddAudioEvent<BrnSound::Module::Io::VoiceoverFinishedMessage>(const VoiceoverFinishedMessage &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPreUpdateSharedIo.h:451
extern void AddAudioEvent<BrnSound::Module::Io::PopEffectsMessage>(const PopEffectsMessage &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

