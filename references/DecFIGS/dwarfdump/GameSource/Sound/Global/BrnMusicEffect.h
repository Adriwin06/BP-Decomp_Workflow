// BrnMusicEffect.h:271
extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// Declaration
		struct MusicStream {
			// BrnMusicEffect.h:208
			enum eMusicState {
				E_MUSIC_STATE_NOT_PLAYING = 0,
				E_MUSIC_STATE_PLAYING = 1,
				E_MUSIC_STATE_START_FADE_OUT = 2,
				E_MUSIC_STATE_FADING_OUT = 3,
				E_MUSIC_STATE_FADING_TO_PAUSE = 4,
			}

		}

		// Declaration
		struct MusicEffect {
			// BrnMusicEffect.h:278
			enum EJunkyardAmbience {
				E_JUNKYARD_AMBIENCE_NONE = 0,
				E_JUNKYARD_AMBIENCE_NEW_PROFILE = 1,
				E_JUNKYARD_AMBIENCE_STANDARD = 2,
				E_JUNKYARD_AMBIENCE_COUNT = 3,
			}

			// BrnMusicEffect.h:371
			struct FinishData {
			private:
				// BrnMusicEffect.h:422
				int32_t miRank;

				// BrnMusicEffect.h:423
				bool mbWonEvent;

				// BrnMusicEffect.h:424
				bool mbValid;

			public:
				// BrnMusicEffect.h:379
				void Construct();

				// BrnMusicEffect.h:388
				void Update(int32_t, bool);

				// BrnMusicEffect.h:395
				bool IsValid() const;

				// BrnMusicEffect.h:402
				void Invalidate();

				// BrnMusicEffect.h:409
				int32_t GetRank() const;

				// BrnMusicEffect.h:416
				bool GetWonEvent() const;

			}

			// BrnMusicEffect.h:428
			struct ClassicalMusicData {
				// BrnMusicEffect.h:430
				const char * mpcStream;

				// BrnMusicEffect.h:431
				const char * mpcComposerTextId;

				// BrnMusicEffect.h:432
				const char * mpcWorkTextId;

			}

			// BrnMusicEffect.h:512
			struct EaTraxData {
				// BrnMusicEffect.h:47
				typedef FastBitArray<128> EATraxArrayType;

				// BrnMusicEffect.h:558
				BrnSound::Logic::MusicEffect::EaTraxData::EATraxArrayType mAvailableInEventSongs;

				// BrnMusicEffect.h:559
				BrnSound::Logic::MusicEffect::EaTraxData::EATraxArrayType mAvailableInFreeBurnSongs;

				// BrnMusicEffect.h:560
				BrnSound::Logic::MusicEffect::EaTraxData::EATraxArrayType mRemainingSongs;

				// BrnMusicEffect.h:561
				DataPoint<int32_t> mPreviewTrack;

				// BrnMusicEffect.h:562
				int32_t miSongIndex;

				// BrnMusicEffect.h:563
				BrnSound::Module::SoundLogicModule * mpLogicModule;

				// BrnMusicEffect.h:564
				BrnGui::GuiEventAudioTraxPlayOrder::ETraxPlayOrderMode mePlayOrder;

				// BrnMusicEffect.h:565
				bool mbPendingChange;

				// BrnMusicEffect.h:566
				bool mbPlayFromEATraxSlider;

			public:
				// BrnMusicEffect.h:519
				void Construct();

				// BrnMusicEffect.h:528
				bool Prepare(BrnSound::Module::SoundLogicModule *);

				// BrnMusicEffect.h:537
				int32_t SelectSong(int32_t, BrnSound::EMusicType) const;

				// BrnMusicEffect.h:545
				void SetCurrentSong(int32_t);

				// BrnMusicEffect.h:552
				const DataPoint<int32_t> & GetPreviewTrack() const;

			}

			// BrnMusicEffect.h:571
			struct JumpHpf {
				// BrnMusicEffect.h:597
				enum EJumpFilterState {
					E_JUMPHPFSTATE_DESTRUCTED = 0,
					E_JUMPHPFSTATE_CONSTRUCTED = 1,
					E_JUMPHPFSTATE_IDLE = 2,
					E_JUMPHPFSTATE_OPENING = 3,
					E_JUMPHPFSTATE_OPEN = 4,
					E_JUMPHPFSTATE_CLOSING = 5,
					E_JUMPHPFSTATE_MAX = 6,
				}

			private:
				// BrnMusicEffect.h:609
				BrnSound::Logic::MusicEffect::JumpHpf::EJumpFilterState meState;

				// BrnMusicEffect.h:611
				float32_t mfStartFrequency;

				// BrnMusicEffect.h:612
				float32_t mfFrequencyGain;

				// BrnMusicEffect.h:613
				float32_t mfCurrentFrequency;

				// BrnMusicEffect.h:614
				float32_t mfTimeThrough;

				// BrnMusicEffect.h:615
				float32_t mfTime;

			public:
				// BrnMusicEffect.h:574
				void Construct();

				// BrnMusicEffect.h:579
				bool Prepare(float32_t, float32_t);

				// BrnMusicEffect.h:583
				void Update(float32_t);

				// BrnMusicEffect.h:587
				bool Release(float32_t);

				// BrnMusicEffect.h:590
				void Destruct();

				// BrnMusicEffect.h:593
				float32_t GetFrequency();

			}

		}

	}

}

// BrnMusicEffect.h:59
struct BrnSound::Logic::MusicStream : public BrnSound::Logic::Streaming::IStreamUser {
	// BrnMusicEffect.h:63
	DataPoint<CgsSound::Logic::VoiceWrapper::E_UPDATE_STAGE> meVoiceWrapperUpdateStage;

private:
	// BrnMusicEffect.h:241
	CgsSound::Logic::VoiceWrapper::CreateParams mParams;

	// BrnMusicEffect.h:243
	BrnSound::Logic::MusicStream::eMusicState meMusicState;

	// BrnMusicEffect.h:244
	float32_t mfTimeThroughFade;

	// BrnMusicEffect.h:245
	float32_t mfFadeTime;

	// BrnMusicEffect.h:246
	float32_t mfStreamVolume;

	// BrnMusicEffect.h:247
	float32_t mfStreamHighPassFreq;

	// BrnMusicEffect.h:248
	float32_t mfStreamLowPassFreq;

	// BrnMusicEffect.h:249
	uint32_t muPriority;

	// BrnMusicEffect.h:250
	bool mbInternalPause;

	// BrnMusicEffect.h:251
	bool mbStreamPaused;

	// BrnMusicEffect.h:252
	bool mbSongQueued;

	// BrnMusicEffect.h:253
	uint8_t mu8QueuedOutputSlot;

	// BrnMusicEffect.h:254
	uint8_t mu8OutputSlot;

public:
	void MusicStream();

	void MusicStream(const MusicStream &);

	// BrnMusicEffect.h:870
	void Construct();

	// BrnMusicEffect.h:901
	bool Prepare(uint32_t);

	// BrnMusicEffect.cpp:140
	// Declaration
	void Update(BrnSound::Logic::Streaming::StreamingStateManager *, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMusicEffect.cpp:142
		using namespace Streaming;

	}

	// BrnMusicEffect.cpp:319
	// Declaration
	void Queue(Name, CgsSound::Logic::Module *, uint8_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMusicEffect.cpp:321
		using namespace CgsSound::Playback;

	}

	// BrnMusicEffect.cpp:356
	void FadeOut(float32_t);

	// BrnMusicEffect.cpp:384
	void FadeToPause(float32_t);

	// BrnMusicEffect.cpp:408
	void FadeFromPause(float32_t);

	// BrnMusicEffect.cpp:223
	virtual const CgsSound::Logic::VoiceWrapper::CreateParams & GetCreateParams() const;

	// BrnMusicEffect.cpp:243
	// Declaration
	virtual void UpdateVoiceParams(CgsSound::Logic::VoiceWrapper &, float32_t, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMusicEffect.cpp:245
		using namespace CgsSound::Playback;

		// BrnMusicEffect.cpp:247
		using namespace ParameterIndexes::MusicFiltVoiceSpec;

		// BrnMusicEffect.cpp:248
		using namespace SendIndexes::MusicFiltVoiceSpec;

	}

	// BrnMusicEffect.cpp:292
	virtual void StreamStopped();

	// BrnMusicEffect.h:932
	bool IsPlaying() const;

	// BrnMusicEffect.h:952
	bool IsPaused() const;

	// BrnMusicEffect.h:970
	uint8_t GetOutputSlot() const;

	// BrnMusicEffect.h:988
	void SetPaused(bool);

	// BrnMusicEffect.h:1006
	void SetVolume(float32_t);

	// BrnMusicEffect.h:1024
	void SetHighPassFreq(float32_t);

	// BrnMusicEffect.h:1042
	void SetLowPassFreq(float32_t);

private:
	// BrnMusicEffect.h:1059
	bool GetSongQueued() const;

	// BrnMusicEffect.h:1077
	void SetSongQueued(bool);

}

// BrnMusicEffect.h:270
struct BrnSound::Logic::MusicEffect : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnMusicEffect.cpp:70
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnMusicEffect.h:618
	BrnSound::Logic::MusicEffect::JumpHpf mJumpHpf;

	// BrnMusicEffect.h:620
	MusicStream mSecondaryStream;

	// BrnMusicEffect.h:621
	MusicStream mEATraxStream;

	// BrnMusicEffect.h:622
	MusicStream mMusicStreamMenu;

	// BrnMusicEffect.h:623
	MusicStream mJunkyardStream;

	// BrnMusicEffect.h:624
	BrnSound::Logic::MusicEffect::EaTraxData mEaTraxData;

	// BrnMusicEffect.h:625
	BrnSound::Logic::MusicEffect::FinishData mFinishData;

	// BrnMusicEffect.h:627
	Name mCarUnlockName;

	// BrnMusicEffect.h:628
	Name mMenuStreamName;

	// BrnMusicEffect.h:630
	DataPoint<BrnSound::EMusicType> mMusicType;

	// BrnMusicEffect.h:631
	BrnSound::Logic::Streaming::StreamingStateManager * mpStreamingStateManager;

	// BrnMusicEffect.h:632
	const BrnSound::Logic::MixerControl * mpMixerControl;

	// BrnMusicEffect.h:633
	BrnSound::EMusicType meSpecialCaseMusic;

	// BrnMusicEffect.h:634
	BrnSound::Logic::MusicEffect::EJunkyardAmbience meJunkyardAmbience;

	// BrnMusicEffect.h:635
	float32_t mfLastVideoVolume;

	// BrnMusicEffect.h:636
	int32_t miPicParadiseMusic;

	// BrnMusicEffect.h:638
	bool mbHoldVolumes;

	// BrnMusicEffect.h:639
	bool mbRewardCreditsMusic;

	// BrnMusicEffect.h:640
	bool mbOverrideCustomSoundtracks;

	// BrnMusicEffect.h:642
	AttribSys::Enums::eLanguage::eLanguage meLanguage;

public:
	void MusicEffect(const MusicEffect &);

	// BrnMusicEffect.cpp:70
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnMusicEffect.cpp:70
	virtual const char * GetTypeName() const;

	// BrnMusicEffect.h:271
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnMusicEffect.cpp:70
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnMusicEffect.h:666
	void MusicEffect();

	// BrnMusicEffect.cpp:425
	virtual void ~MusicEffect();

	// BrnMusicEffect.cpp:558
	bool IsCustomSoundtrackActive();

	// BrnMusicEffect.cpp:442
	virtual int32_t GetController(int32_t);

	// BrnMusicEffect.cpp:471
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnMusicEffect.cpp:501
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMusicEffect.cpp:503
		using namespace Streaming;

	}

	// BrnMusicEffect.cpp:989
	virtual bool Detach();

	// BrnMusicEffect.cpp:591
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMusicEffect.cpp:593
		using namespace Module::Io;

	}

	// BrnMusicEffect.cpp:913
	virtual void ProcessUpdate();

	// BrnMusicEffect.cpp:1050
	virtual void Notify(const CgsSound::Io::MessageHeader *);

private:
	// BrnMusicEffect.cpp:1309
	BrnSound::EMusicType GetMusicType(const RootInputBuffer::GameModeOutputInterface *) const;

	// BrnMusicEffect.cpp:1452
	// Declaration
	const Name GetEventStartContentSpec(const RootInputBuffer::GameModeOutputInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMusicEffect.cpp:1454
		using namespace CgsSound::Playback;

	}

	// BrnMusicEffect.cpp:1528
	// Declaration
	const Name GetEventEndContentSpec(const RootInputBuffer::GameModeOutputInterface *, const BrnSound::Logic::MusicEffect::FinishData &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMusicEffect.cpp:1530
		using namespace CgsSound::Playback;

	}

	// BrnMusicEffect.cpp:1669
	void UpdatePause(bool);

	// BrnMusicEffect.cpp:1688
	void UpdateSongs();

	// BrnMusicEffect.cpp:1732
	void UpdatePreviewTrack(bool);

	// BrnMusicEffect.cpp:1010
	Name GetStreamFromVideoName(Name);

}

// BrnMusicEffect.h:59
void BrnSound::Logic::MusicStream::MusicStream() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

