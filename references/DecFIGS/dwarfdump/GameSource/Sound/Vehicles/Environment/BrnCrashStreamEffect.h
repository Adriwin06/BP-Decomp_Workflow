// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// BrnAmbienceEffect.h:50
		namespace Environment {
			// Declaration
			struct CrashStreamEffect {
				// BrnCrashStreamEffect.h:151
				enum ePrepareState {
					E_PREPARE_STATE_CONSTRUCT_VOICE = 0,
					E_PREPARE_STATE_CONNECT_VOICE = 1,
					E_PREPARE_STATE_DONE = 2,
				}

			}

		}

	}

}

// BrnCrashStreamEffect.h:63
struct BrnSound::Vehicles::Environment::CrashStreamEffect : public BrnSound::Logic::Streaming::IStreamUser {
protected:
	// BrnCrashStreamEffect.cpp:47
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnCrashStreamEffect.h:158
	CgsSound::Logic::VoiceWrapper::CreateParams mParams;

	// BrnCrashStreamEffect.h:159
	DataPoint<bool> mbShowTime;

	// BrnCrashStreamEffect.h:160
	DataPoint<bool> mbIsCrashing;

	// BrnCrashStreamEffect.h:163
	BrnSound::Vehicles::Engines::PhysicsControl * mpPhysicsControl;

	// BrnCrashStreamEffect.h:164
	CgsSound::Logic::Voice mSubmix;

	// BrnCrashStreamEffect.h:165
	BrnSound::Vehicles::Environment::CrashStreamEffect::ePrepareState mePrepareState;

public:
	void CrashStreamEffect(const CrashStreamEffect &);

	// BrnCrashStreamEffect.cpp:47
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnCrashStreamEffect.cpp:47
	virtual const char * GetTypeName() const;

	// BrnCrashStreamEffect.h:67
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnCrashStreamEffect.cpp:47
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnCrashStreamEffect.h:189
	void CrashStreamEffect();

	// BrnCrashStreamEffect.cpp:73
	virtual int32_t GetController(int32_t);

	// BrnCrashStreamEffect.cpp:102
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnCrashStreamEffect.cpp:188
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCrashStreamEffect.cpp:190
		using namespace CgsSound::Playback;

		// BrnCrashStreamEffect.cpp:191
		using namespace Logic::Streaming;

		// BrnCrashStreamEffect.cpp:192
		using namespace Logic;

		// BrnCrashStreamEffect.cpp:193
		using namespace BrnGameState::GameStateModuleIO;

	}

	// BrnCrashStreamEffect.cpp:133
	// Declaration
	virtual bool Prepare(CgsSound::Logic::State *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCrashStreamEffect.cpp:135
		using namespace CgsSound::Playback;

	}

	// BrnCrashStreamEffect.cpp:318
	virtual const CgsSound::Logic::VoiceWrapper::CreateParams & GetCreateParams() const;

	// BrnCrashStreamEffect.cpp:338
	// Declaration
	virtual void UpdateVoiceParams(CgsSound::Logic::VoiceWrapper &, float32_t, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCrashStreamEffect.cpp:340
		using namespace CgsSound::Playback;

		// BrnCrashStreamEffect.cpp:344
		using namespace ParameterIndexes::MusicVoiceSpec;

		// BrnCrashStreamEffect.cpp:345
		using namespace SendIndexes::MusicVoiceSpec;

		// BrnCrashStreamEffect.cpp:355
		using namespace ParameterIndexes::CrashStreamVoiceSpec;

		// BrnCrashStreamEffect.cpp:356
		using namespace SendIndexes::CrashStreamVoiceSpec;

	}

	// BrnCrashStreamEffect.cpp:286
	// Declaration
	virtual bool Detach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCrashStreamEffect.cpp:288
		using namespace Logic::Streaming;

	}

private:
	// BrnCrashStreamEffect.cpp:388
	const Name GetContentSpecToPlay(bool) const;

public:
	virtual void ~CrashStreamEffect();

}

// BrnCrashStreamEffect.h:63
void BrnSound::Vehicles::Environment::CrashStreamEffect::~CrashStreamEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

