// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// Declaration
		struct FxMessage {
			// BrnFxEffect.h:33
			enum FxType {
				E_WINDOW_SMASH = 0,
				E_CAMERA_CUT = 1,
				E_STUNT_SMASH = 2,
				E_STUNT_STUNT = 3,
				E_STUNT_JUMP = 4,
				E_RESET_ON_TRACK = 5,
				E_CAMERA_PHOTO = 6,
				E_QUIT_EVENT = 7,
				E_CRASH_IN_WATER = 8,
				E_ONLINE_RIVAL_SWEEP = 9,
			}

		}

	}

}

// BrnFxEffect.h:32
struct BrnSound::Logic::FxMessage {
	// BrnFxEffect.h:46
	BrnSound::Logic::FxMessage::FxType meType;

public:
	// BrnFxEffect.h:48
	void FxMessage();

	// BrnFxEffect.h:50
	void FxMessage(BrnSound::Logic::FxMessage::FxType);

}

// BrnFxEffect.h:65
struct BrnSound::Logic::FxMessage_CameraCut : public FxMessage {
public:
	// BrnFxEffect.h:66
	void FxMessage_CameraCut();

}

// BrnFxEffect.h:71
struct BrnSound::Logic::FxMessage_StuntSmash : public FxMessage {
public:
	// BrnFxEffect.h:72
	void FxMessage_StuntSmash();

}

// BrnFxEffect.h:77
struct BrnSound::Logic::FxMessage_StuntStunt : public FxMessage {
public:
	// BrnFxEffect.h:78
	void FxMessage_StuntStunt();

}

// BrnFxEffect.h:84
struct BrnSound::Logic::FxMessage_StruntJump : public FxMessage {
public:
	// BrnFxEffect.h:85
	void FxMessage_StruntJump();

}

// BrnFxEffect.h:92
struct BrnSound::Logic::FxMessage_ResetOnTrack : public FxMessage {
public:
	// BrnFxEffect.h:93
	void FxMessage_ResetOnTrack();

}

// BrnFxEffect.h:100
struct BrnSound::Logic::FxMessage_CameraPhoto : public FxMessage {
public:
	// BrnFxEffect.h:101
	void FxMessage_CameraPhoto();

}

// BrnFxEffect.h:107
struct BrnSound::Logic::FxMessage_QuitEvent : public FxMessage {
public:
	// BrnFxEffect.h:108
	void FxMessage_QuitEvent();

}

// BrnFxEffect.h:114
struct BrnSound::Logic::FxMessage_OnlineRivalSweep : public FxMessage {
public:
	// BrnFxEffect.h:115
	void FxMessage_OnlineRivalSweep();

}

// BrnFxEffect.h:125
struct BrnSound::Logic::FxEffect : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnFxEffect.cpp:29
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnFxEffect.h:192
	extern const int32_t KI_NUMBER_OF_FX_VOICES = 4;

	// BrnFxEffect.h:193
	CgsSound::Logic::VoiceWrapper[4] mVoice;

	// BrnFxEffect.h:194
	float32_t[4] mfVolume;

	// BrnFxEffect.h:196
	uint8_t[4] mMixerSlot;

	// BrnFxEffect.h:197
	BrnSound::Logic::GlobalStateManager * mpGlobalStateManager;

	// BrnFxEffect.h:199
	DataPoint<bool> mbHasCrashedIntoWater;

	// BrnFxEffect.h:200
	int32_t miFrameCountBeforeRetrigger;

public:
	void FxEffect(const FxEffect &);

	// BrnFxEffect.cpp:29
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnFxEffect.cpp:29
	virtual const char * GetTypeName() const;

	// BrnFxEffect.h:126
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnFxEffect.cpp:29
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnFxEffect.h:217
	void FxEffect();

	// BrnFxEffect.cpp:49
	virtual void ~FxEffect();

	// BrnFxEffect.cpp:67
	virtual int32_t GetController(int32_t);

	// BrnFxEffect.cpp:94
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnFxEffect.cpp:198
	virtual bool Attach();

	// BrnFxEffect.cpp:111
	virtual void UpdateParams(float32_t);

	// BrnFxEffect.cpp:162
	// Declaration
	virtual void ProcessUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnFxEffect.cpp:164
		using namespace CgsSound::Playback;

		// BrnFxEffect.cpp:174
		using namespace ParameterIndexes::SplicerVoiceSpec;

		// BrnFxEffect.cpp:175
		using namespace SendIndexes::SplicerVoiceSpec;

	}

	// BrnFxEffect.cpp:235
	virtual bool Detach();

	// BrnFxEffect.cpp:262
	// Declaration
	virtual void Notify(const CgsSound::Io::MessageHeader *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnFxEffect.cpp:264
		using namespace CgsSound::Playback;

		// BrnFxEffect.cpp:265
		using namespace BrnPhysics::Deformation;

		// BrnFxEffect.cpp:266
		using namespace AttribSys::Enums::eSampleTags;

	}

}

// BrnFxEffect.h:192
extern const int32_t KI_NUMBER_OF_FX_VOICES = 4;

