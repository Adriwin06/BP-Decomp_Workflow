// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// BrnVehicleState.h:27
		namespace Engines {
			// Declaration
			struct SweetenersEffect {
				// BrnSweetenersEffect.h:126
				enum eSweetenerBankElement {
					E_SWEETENER_BANK_ELEMENT_GEAR_UP = 0,
					E_SWEETENER_BANK_ELEMENT_GEAR_DOWN = 1,
					E_SWEETENER_BANK_ELEMENT_THROTTLE_ON = 2,
					E_SWEETENER_BANK_ELEMENT_THROTTLE_OFF = 3,
					E_SWEETENER_BANK_ELEMENT_EXHAUST_POP = 4,
					E_SWEETENER_BANK_ELEMENT_STARTING = 5,
					E_SWEETENER_BANK_ELEMENT_WHINE = 6,
					E_SWEETENER_BANK_ELEMENT_TURBO = 7,
					E_SWEETENER_BANK_ELEMENT_COUNT = 8,
				}

				// BrnSweetenersEffect.h:140
				enum eSweetenersState {
					E_SWEETENER_STATE_NONE = 0,
					E_SWEETENER_STATE_WAIT_CONTENT = 1,
					E_SWEETENER_STATE_UPDATING = 2,
				}

				// BrnSweetenersEffect.h:230
				struct SweetenerInfo {
					// BrnSweetenersEffect.h:234
					int16_t mi16FirstIndex;

					// BrnSweetenersEffect.h:235
					int16_t mi16LastIndex;

					// BrnSweetenersEffect.h:236
					float32_t mfVolume;

				}

				// BrnSweetenersEffect.h:289
				enum ECarStartingState {
					E_CARSTARTINGSTATE_NONE = 0,
					E_CARSTARTINGSTATE_BEGIN_STARTING = 1,
					E_CARSTARTINGSTATE_STARTING = 2,
					E_CARSTARTINGSTATE_QUITTING = 3,
					E_CARSTARTINGSTATE_RESTARTING = 4,
				}

			}

		}

	}

}

// BrnSweetenersEffect.h:55
struct BrnSound::Vehicles::Engines::SweetenersEffect : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnSweetenersEffect.cpp:56
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnSweetenersEffect.h:227
	bool mbEnableSweetners;

	// BrnSweetenersEffect.h:239
	BrnSound::Vehicles::Engines::SweetenersEffect::SweetenerInfo[8] maSweetenerInfo;

	// BrnSweetenersEffect.h:241
	CgsSound::Logic::VoiceWrapper mExhaustPopsVoice;

	// BrnSweetenersEffect.h:242
	CgsSound::Logic::VoiceWrapper mSweetenerVoice;

	// BrnSweetenersEffect.h:244
	Random mRandomGenerator;

	// BrnSweetenersEffect.h:245
	BrnSound::Vehicles::Engines::PhysicsControl * mpPhysicsControl;

	// BrnSweetenersEffect.h:246
	BrnSound::Vehicles::Engines::ShiftControl * mpShiftingControl;

	// BrnSweetenersEffect.h:248
	Content mSweetenersBank;

	// BrnSweetenersEffect.h:250
	float32_t mfTimeRemainingToPlaySputters;

	// BrnSweetenersEffect.h:251
	SqaureWave mPopsSquareWave;

	// BrnSweetenersEffect.h:253
	int16_t mi16SweetenerSlot;

	// BrnSweetenersEffect.h:255
	int8_t mi8UpdateState;

	// BrnSweetenersEffect.h:256
	int8_t mi8CurrentBankElement;

	// BrnSweetenersEffect.h:259
	DataPoint<BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState> meRaceCarEngineState;

	// BrnSweetenersEffect.h:262
	int8_t miRaceCarIndex;

	// BrnSweetenersEffect.h:270
	const CgsSound::Logic::Content * mpFXBank;

	// BrnSweetenersEffect.h:272
	CgsSound::Logic::VoiceWrapper mDamageBangVoice;

	// BrnSweetenersEffect.h:273
	float32_t mfDamageBangVolume;

	// BrnSweetenersEffect.h:276
	CgsSound::Logic::VoiceWrapper mDamagePopVoice;

	// BrnSweetenersEffect.h:277
	float32_t mfDamagePopVolume;

	// BrnSweetenersEffect.h:279
	DataPoint<float32_t> mfDelayToBang;

	// BrnSweetenersEffect.h:280
	DataPoint<float32_t> mfDeleayToVFXFire;

	// BrnSweetenersEffect.h:299
	CgsSound::Logic::VoiceWrapper mCarStarting;

	// BrnSweetenersEffect.h:300
	PathLine<2u> mFadeOutEngine;

	// BrnSweetenersEffect.h:302
	float32_t mfTimeIntoStart;

	// BrnSweetenersEffect.h:304
	BrnSound::Vehicles::Engines::SweetenersEffect::ECarStartingState meCarStartingState;

public:
	void SweetenersEffect(const SweetenersEffect &);

	// BrnSweetenersEffect.cpp:56
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnSweetenersEffect.cpp:56
	virtual const char * GetTypeName() const;

	// BrnSweetenersEffect.h:56
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnSweetenersEffect.cpp:56
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnSweetenersEffect.h:330
	void SweetenersEffect();

	// BrnSweetenersEffect.cpp:77
	virtual void ~SweetenersEffect();

	// BrnSweetenersEffect.cpp:94
	virtual int32_t GetController(int32_t);

	// BrnSweetenersEffect.cpp:127
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnSweetenersEffect.cpp:581
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSweetenersEffect.cpp:583
		using namespace CgsSound::Playback;

	}

	// BrnSweetenersEffect.cpp:360
	virtual void UpdateParams(float32_t);

	// BrnSweetenersEffect.cpp:486
	// Declaration
	virtual void ProcessUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSweetenersEffect.cpp:488
		using namespace CgsSound::Playback;

		// BrnSweetenersEffect.cpp:489
		using namespace SendIndexes::SplicerVoiceSpec;

		// BrnSweetenersEffect.cpp:490
		using namespace ParameterIndexes::SplicerVoiceSpec;

	}

	// BrnSweetenersEffect.cpp:696
	virtual bool Detach();

	// BrnSweetenersEffect.cpp:162
	// Declaration
	virtual void Notify(const CgsSound::Io::MessageHeader *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSweetenersEffect.cpp:164
		using namespace CgsSound::Playback;

		// BrnSweetenersEffect.cpp:165
		using namespace BrnPhysics::Deformation;

		// BrnSweetenersEffect.cpp:166
		using namespace AttribSys::Enums::eSampleTags;

	}

private:
	// BrnSweetenersEffect.cpp:757
	float32_t UpdatePopingDuration(float32_t);

	// BrnSweetenersEffect.cpp:796
	bool SelectSampleIndex(BrnSound::Vehicles::Engines::SweetenersEffect::eSweetenerBankElement, int32_t &);

	// BrnSweetenersEffect.cpp:821
	void CreateVoices();

	// BrnSweetenersEffect.cpp:857
	void UpdateSweetenerInfo(const vehicleengine &);

	// BrnSweetenersEffect.h:358
	BrnSound::Vehicles::Engines::SweetenersEffect::eSweetenersState GetUpdateState() const;

	// BrnSweetenersEffect.h:375
	BrnSound::Vehicles::Engines::SweetenersEffect::eSweetenerBankElement GetCurrentBankElement() const;

	// BrnSweetenersEffect.h:393
	void SetUpdateState(BrnSound::Vehicles::Engines::SweetenersEffect::eSweetenersState);

	// BrnSweetenersEffect.h:411
	void SetCurrentBankElement(BrnSound::Vehicles::Engines::SweetenersEffect::eSweetenerBankElement);

	// BrnSweetenersEffect.cpp:952
	void UpdateDamageBangs(float32_t);

	// BrnSweetenersEffect.cpp:236
	void UpdateCarStart(float32_t);

}

