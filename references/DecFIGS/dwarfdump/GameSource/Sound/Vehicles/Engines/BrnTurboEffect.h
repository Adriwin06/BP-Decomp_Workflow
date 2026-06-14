// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// BrnVehicleState.h:27
		namespace Engines {
			// Declaration
			struct TurboEffect {
				// BrnTurboEffect.h:122
				enum eTurboState {
					E_TURBO_NONE = 0,
					E_TURBO_SPOOLING = 1,
					E_TURBO_PLAY_BLOWOFF = 2,
				}

			}

		}

	}

}

// BrnTurboEffect.h:48
struct BrnSound::Vehicles::Engines::TurboEffect : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnTurboEffect.cpp:35
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnTurboEffect.h:132
	CgsSound::Logic::VoiceWrapper mTurboVoice;

	// BrnTurboEffect.h:133
	DataPoint<BrnSound::Vehicles::Engines::TurboEffect::eTurboState> mTurboState;

	// BrnTurboEffect.h:134
	float32_t mfTurboVolume;

	// BrnTurboEffect.h:136
	float32_t mfTurboSpool;

	// BrnTurboEffect.h:137
	float32_t mfTurboSpoolScale;

	// BrnTurboEffect.h:138
	uint8_t mu8TurboBlowoff;

	// BrnTurboEffect.h:140
	float32_t mfTimeAtPeak;

	// BrnTurboEffect.h:143
	BrnSound::Vehicles::Engines::EngineControl * mpEngineControl;

	// BrnTurboEffect.h:144
	BrnSound::Vehicles::Engines::HybridExhaustControl * mpHybridControl;

public:
	void TurboEffect(const TurboEffect &);

	// BrnTurboEffect.cpp:35
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnTurboEffect.cpp:35
	virtual const char * GetTypeName() const;

	// BrnTurboEffect.h:50
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnTurboEffect.cpp:35
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnTurboEffect.cpp:59
	void TurboEffect();

	// BrnTurboEffect.cpp:77
	virtual void ~TurboEffect();

	// BrnTurboEffect.cpp:93
	virtual int32_t GetController(int32_t);

	// BrnTurboEffect.cpp:157
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnTurboEffect.cpp:226
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTurboEffect.cpp:235
		using namespace CgsSound::Logic;

		// BrnTurboEffect.cpp:236
		using namespace CgsSound::Playback;

		// BrnTurboEffect.cpp:237
		using namespace SendIndexes::AEMS_TurboClass;

	}

	// BrnTurboEffect.cpp:286
	virtual void UpdateParams(float32_t);

	// BrnTurboEffect.cpp:410
	// Declaration
	virtual void ProcessUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTurboEffect.cpp:412
		using namespace ParameterIndexes::AEMS_TurboClass;

		// BrnTurboEffect.cpp:413
		using namespace SendIndexes::AEMS_TurboClass;

	}

	// BrnTurboEffect.cpp:386
	virtual bool Detach();

	// BrnTurboEffect.cpp:195
	virtual void SetupLoadData();

	// BrnTurboEffect.cpp:130
	virtual void Notify(const CgsSound::Io::MessageHeader *);

}

