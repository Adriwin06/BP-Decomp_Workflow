// BrnSoundRootSharedIO.h:25
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
	}

}

// BrnState.h:62
extern ClassTypeInfo<CgsSound::Logic::State> sTypeInfo;

// BrnPreUpdateSharedIo.h:31
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
	}

}

// BrnSoundLoopModelData.h:40
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
	}

}

// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		struct IResourceRequester;

		struct PerfMonHelper;

		struct FrameInformation;

		struct Brn3DUserSpaceEffectControl;

		struct CustomHudVoice;

		struct FxMessage_CameraCut;

		struct FxMessage_StuntSmash;

		struct FxMessage_StuntStunt;

		struct FxMessage_StruntJump;

		struct FxMessage_ResetOnTrack;

		struct FxMessage_CameraPhoto;

		struct FxMessage_QuitEvent;

		struct FxMessage_OnlineRivalSweep;

		struct FxEffect;

		struct MixerControl;

		struct CameraControl;

		struct SubmixesEffect;

		struct ExplosionStateManager;

		struct BrnStateManager;

		struct BrnState;

		struct BrnEffectControl;

		struct GlobalState;

	}

}

// BrnState.h:60
struct BrnSound::Logic::BrnState : public State {
protected:
	// BrnState.cpp:32
	extern ClassTypeInfo<CgsSound::Logic::State> sTypeInfo;

public:
	void BrnState(const BrnState &);

	void BrnState();

	// BrnState.cpp:32
	virtual ClassTypeInfo<CgsSound::Logic::State> * GetTypeInfo() const;

	// BrnState.cpp:32
	virtual const char * GetTypeName() const;

	// BrnState.h:62
	ClassTypeInfo<CgsSound::Logic::State> * GetStaticTypeInfo();

	// BrnState.cpp:32
	CgsSound::Logic::State * CreateObject(uint32_t);

	// BrnState.cpp:53
	BrnSound::Module::SoundLogicModule * GetBrnLogicModule() const;

	virtual void ~BrnState();

}

// BrnState.h:60
void BrnSound::Logic::BrnState::BrnState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnState.h:60
void BrnSound::Logic::BrnState::~BrnState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSoundRootSharedIO.h:25
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		struct IResourceRequester;

		struct FrameInformation;

	}

}

