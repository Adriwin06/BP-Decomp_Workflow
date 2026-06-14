// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// Declaration
		struct HUDEffect {
			// BrnHUDEffect.h:124
			enum ePresentationSampleTags {
				E_SPLICE_SMASH_THROUGH = 0,
				E_SPLICE_STUNT = 1,
				E_SPLICE_CAMERA_CUT = 2,
				E_SPLICE_JUMP_CAM_LANDING = 3,
				E_SPLICE_STUNT_NEGATIVE = 4,
				E_SPLICE_STUNT_POSITIVE1 = 5,
				E_SPLICE_STUNT_POSITIVE2 = 6,
				E_SPLICE_STUNT_POSITIVE3 = 7,
				E_SPLICE_QUIT_EVENT = 8,
				E_SPLICE_STUNT_SCORE_FAST = 9,
				E_SPLICE_STUNT_SCORE_MEDIUM = 10,
				E_SPLICE_STUNT_SCORE_SLOW = 11,
				E_SPLICE_STUNT_SCORE_V_SLOW = 12,
				E_SPLICE_STUNT_MULTIPLIERS = 13,
				E_SPLICE_EVENT_COUNTDOWN = 14,
				E_SPLICE_SHOWTIME_SCORE_FAST = 15,
				E_SPLICE_SHOWTIME_SCORE_MEDIUM = 16,
				E_SPLICE_SHOWTIME_SCORE_SLOW = 17,
				E_SPLICE_SHOWTIME_SCORE_V_SLOW = 18,
				E_SPLICE_SHOWTIME_BOOST_EARN = 19,
				E_SPLICE_ROAD_RAGE_TIME_ADD = 20,
				E_SPLICE_ROAD_RAGE_COUNT_DOWN = 21,
				E_SPLICE_ROAD_RAGE_TIME_ENDED = 22,
				E_SPLICE_ONLINE_RIVAL_SWEEP = 23,
			}

			// BrnHUDEffect.h:290
			struct GameModeData {
				// BrnHUDEffect.h:312
				Average<10u,float32_t> mEventScoreDelta;

				// BrnHUDEffect.h:313
				DataPoint<float32_t> mEventTimeRemaining;

				// BrnHUDEffect.h:314
				DataPoint<float32_t> mEventBoostAmount;

				// BrnHUDEffect.h:315
				float32_t mfTimeSinceScoreTick;

				// BrnHUDEffect.h:318
				DataPoint<int32_t> mStuntScore;

				// BrnHUDEffect.h:319
				DataPoint<int32_t> mStuntComboMultiplier;

				// BrnHUDEffect.h:320
				DataPoint<int32_t> mStuntResultScore;

				// BrnHUDEffect.h:323
				DataPoint<float32_t> mShowtimeScore;

				// BrnHUDEffect.h:324
				DataPoint<float32_t> mShowtimeBoostDelta;

				// BrnHUDEffect.h:327
				bool mbTimeExtended;

			public:
				// BrnHUDEffect.h:298
				void Construct();

				// BrnHUDEffect.h:305
				void Reset();

			}

		}

	}

}

// BrnHUDEffect.h:47
struct BrnSound::Logic::CustomHudVoice {
	// BrnHUDEffect.h:68
	CgsSound::Logic::VoiceWrapper mVoice;

	// BrnHUDEffect.h:70
	float32_t mfClientVolume;

	// BrnHUDEffect.h:71
	float32_t mfClientPitch;

	// BrnHUDEffect.h:72
	uint8_t mu8MixerOutput;

public:
	// BrnHUDEffect.h:55
	void Construct();

	// BrnHUDEffect.h:62
	bool Prepare();

}

// BrnHUDEffect.h:82
struct BrnSound::Logic::HUDEffect : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnHUDEffect.cpp:49
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnHUDEffect.h:331
	uint8_t[256] mau8RoundRobins;

	// BrnHUDEffect.h:332
	CgsSound::Logic::VoiceWrapper[3] maVoices;

	// BrnHUDEffect.h:333
	uint8_t[3] mau8MixerOutputs;

	// BrnHUDEffect.h:334
	uint8_t[3] mau8ChokeGroups;

	// BrnHUDEffect.h:336
	CustomHudVoice[4] maGameModeVoices;

	// BrnHUDEffect.h:338
	BrnSound::Logic::HUDEffect::GameModeData mGameModeData;

	// BrnHUDEffect.h:339
	presentationcomponent mHudMessageData;

	// BrnHUDEffect.h:340
	GuiAudioEvent mLastPlayedEvent;

	// BrnHUDEffect.h:341
	CgsID mLastReceivedHudMessage;

	// BrnHUDEffect.h:342
	float32_t mfTimeSinceLastTrigger;

	// BrnHUDEffect.h:343
	uint32_t muRoundRobin;

public:
	void HUDEffect(const HUDEffect &);

	// BrnHUDEffect.cpp:49
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnHUDEffect.cpp:49
	virtual const char * GetTypeName() const;

	// BrnHUDEffect.h:83
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnHUDEffect.cpp:49
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnHUDEffect.h:403
	void HUDEffect();

	// BrnHUDEffect.cpp:68
	virtual void ~HUDEffect();

	// BrnHUDEffect.cpp:158
	virtual bool Attach();

	// BrnHUDEffect.cpp:86
	virtual void UpdateParams(float32_t);

	// BrnHUDEffect.cpp:106
	// Declaration
	virtual void ProcessUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnHUDEffect.cpp:108
		using namespace CgsSound::Playback;

		// BrnHUDEffect.cpp:109
		using namespace SendIndexes::SplicerVoiceSpec;

		// BrnHUDEffect.cpp:110
		using namespace ParameterIndexes::SplicerVoiceSpec;

	}

	// BrnHUDEffect.cpp:201
	virtual bool Detach();

	// BrnHUDEffect.cpp:234
	// Declaration
	virtual void Notify(const CgsSound::Io::MessageHeader *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnHUDEffect.cpp:236
		using namespace CgsSound::Logic;

		// BrnHUDEffect.cpp:295
		using namespace ParameterIndexes::SplicerVoiceSpec;

	}

private:
	// BrnHUDEffect.cpp:351
	bool IsReTrigger(const GuiAudioEvent *) const;

	// BrnHUDEffect.cpp:402
	bool FindEventMapping(const presentationcomponent &, const GuiAudioEvent *, int32_t &, uint8_t &, uint8_t &);

	// BrnHUDEffect.cpp:451
	bool FindPauseEventMapping(const GuiAudioEvent *, int32_t &, uint8_t &, uint8_t &) const;

	// BrnHUDEffect.cpp:480
	int32_t GetFreeVoice(uint8_t);

	// BrnHUDEffect.cpp:520
	// Declaration
	void UpdateGameModeHud(const BrnSound::Module::SoundLogicModule *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnHUDEffect.cpp:522
		using namespace Module::Io;

	}

	// BrnHUDEffect.cpp:585
	// Declaration
	void UpdateStuntRun(const RootInputBuffer::ScoringOutputInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnHUDEffect.cpp:587
		using namespace AttribSys::Enums;

	}

	// BrnHUDEffect.cpp:694
	// Declaration
	void UpdateShowtime(const RootInputBuffer::ScoringOutputInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnHUDEffect.cpp:696
		using namespace AttribSys::Enums;

		// BrnHUDEffect.cpp:697
		using namespace Module::Io;

	}

	// BrnHUDEffect.cpp:792
	// Declaration
	void UpdateRoadRage(const RootInputBuffer::ScoringOutputInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnHUDEffect.cpp:794
		using namespace AttribSys::Enums;

	}

	// BrnHUDEffect.cpp:768
	// Declaration
	void UpdateBurningRoute(const RootInputBuffer::ScoringOutputInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnHUDEffect.cpp:771
		using namespace AttribSys::Enums;

	}

	// BrnHUDEffect.cpp:836
	// Declaration
	void UpdateEventTimeRemaining(float32_t, float32_t, BrnSound::Logic::HUDEffect::ePresentationSampleTags, uint8_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnHUDEffect.cpp:838
		using namespace AttribSys::Enums;

	}

	// BrnHUDEffect.cpp:879
	// Declaration
	void PlaySound(BrnSound::Logic::HUDEffect::ePresentationSampleTags, uint8_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnHUDEffect.cpp:881
		using namespace AttribSys::Enums;

	}

	// BrnHUDEffect.cpp:911
	// Declaration
	void PlaySound(const BrnSound::Logic::BrnEffectObject::SampleTag &, uint8_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnHUDEffect.cpp:913
		using namespace ParameterIndexes::SplicerVoiceSpec;

	}

}

