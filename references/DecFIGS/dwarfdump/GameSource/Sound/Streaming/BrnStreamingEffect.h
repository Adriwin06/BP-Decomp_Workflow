// BrnPreUpdateSharedIo.h:31
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// BrnStreamingEffect.h:33
		namespace Streaming {
		}

	}

}

// BrnStreamingEffect.h:49
extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// BrnStreamingEffect.h:33
		namespace Streaming {
			struct StreamRequest;

			struct IStreamUser;

			struct StreamStopRequest;

			struct StreamingStateManager;

			struct StreamingEffect;

			struct StreamingState;

		}

	}

}

// BrnStreamingEffect.h:155
struct BrnSound::Logic::Streaming::IStreamUser {
	int (*)(...) * _vptr.IStreamUser;

public:
	void IStreamUser();

	void IStreamUser(const BrnSound::Logic::Streaming::IStreamUser &);

	// BrnStreamingEffect.h:165
	virtual const CgsSound::Logic::VoiceWrapper::CreateParams & GetCreateParams() const;

	// BrnStreamingEffect.h:178
	virtual void UpdateVoiceParams(CgsSound::Logic::VoiceWrapper &, float32_t, float32_t);

	// BrnStreamingEffect.cpp:362
	virtual void StreamStopped();

}

// BrnStreamingEffect.h:48
struct BrnSound::Logic::Streaming::StreamingEffect : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnStreamingEffect.cpp:26
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

	// BrnStreamingEffect.h:132
	CgsSound::Logic::VoiceWrapper::CreateParams mCreateParams;

	// BrnStreamingEffect.h:133
	CgsSound::Logic::VoiceWrapper mVoice;

	// BrnStreamingEffect.h:134
	streamsettings mStreamSettings;

	// BrnStreamingEffect.h:135
	float32_t mfElapsedTime;

	// BrnStreamingEffect.h:136
	float32_t mfTimeThroughFade;

	// BrnStreamingEffect.h:137
	float32_t mfGain;

	// BrnStreamingEffect.h:138
	float32_t mfGainPreFade;

	// BrnStreamingEffect.h:139
	Command::QueueElement mVoiceId;

	// BrnStreamingEffect.h:140
	bool mbBufferReleased;

public:
	void StreamingEffect(const StreamingEffect &);

	void StreamingEffect();

	// BrnStreamingEffect.cpp:26
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnStreamingEffect.cpp:26
	virtual const char * GetTypeName() const;

	// BrnStreamingEffect.h:49
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnStreamingEffect.cpp:26
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnStreamingEffect.cpp:45
	virtual void ~StreamingEffect();

	// BrnStreamingEffect.cpp:119
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnStreamingEffect.cpp:121
		using namespace CgsSound::Playback;

	}

	// BrnStreamingEffect.cpp:62
	virtual void UpdateParams(float32_t);

	// BrnStreamingEffect.cpp:82
	// Declaration
	virtual void ProcessUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnStreamingEffect.cpp:84
		using namespace CgsSound::Playback;

	}

	// BrnStreamingEffect.cpp:162
	// Declaration
	virtual bool Detach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnStreamingEffect.cpp:164
		using namespace CgsSound::Playback;

	}

	// BrnStreamingEffect.cpp:238
	virtual void Notify(const CgsSound::Io::MessageHeader *);

	// BrnStreamingEffect.h:207
	float32_t GetElapsedTime() const;

	// BrnStreamingEffect.cpp:304
	bool IsBusy() const;

protected:
	// BrnStreamingEffect.cpp:264
	const StreamRequest & GetRequest();

	// BrnStreamingEffect.cpp:284
	float32_t GetFadeOut();

	// BrnStreamingEffect.cpp:323
	// Declaration
	float32_t FindStreamSettings(const streamsettings &, Command::QueueElement) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnStreamingEffect.cpp:346
		using namespace CgsDev::Message;

	}

}

// BrnStreamingEffect.h:155
void BrnSound::Logic::Streaming::IStreamUser::IStreamUser() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStreamingEffect.h:48
void BrnSound::Logic::Streaming::StreamingEffect::StreamingEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

