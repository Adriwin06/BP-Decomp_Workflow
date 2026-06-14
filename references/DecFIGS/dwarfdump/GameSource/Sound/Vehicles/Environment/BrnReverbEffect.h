// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// BrnAmbienceEffect.h:50
		namespace Environment {
			// Declaration
			struct ReverbEffect {
				// BrnReverbEffect.h:141
				enum eReverbState {
					E_REVERB_STATE_NONE = 0,
					E_REVERB_STATE_INTERPOLATING = 1,
				}

			}

		}

	}

}

// BrnReverbEffect.h:67
struct BrnSound::Vehicles::Environment::ReverbEffect : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnReverbEffect.cpp:55
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnReverbEffect.h:134
	float32_t mfTime;

	// BrnReverbEffect.h:135
	float32_t mfSpaceSize;

	// BrnReverbEffect.h:136
	float32_t mfBrightness;

	// BrnReverbEffect.h:137
	float32_t mfGain;

	// BrnReverbEffect.h:139
	InterpolateLine mInterpolateReverb;

	// BrnReverbEffect.h:147
	BrnSound::Vehicles::Environment::ReverbEffect::eReverbState meReverbState;

	// BrnReverbEffect.h:149
	DataPoint<AttribSys::Enums::eReverbTypes::eReverbTypes> mReverbType;

	// BrnReverbEffect.h:151
	const BrnSound::Vehicles::Environment::EnclosureControl * mpEnclosureControl;

	// BrnReverbEffect.h:152
	const BrnSound::Vehicles::Engines::PhysicsControl * mpPhysicsControl;

public:
	void ReverbEffect(const BrnSound::Vehicles::Environment::ReverbEffect &);

	void ReverbEffect();

	// BrnReverbEffect.cpp:55
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnReverbEffect.cpp:55
	virtual const char * GetTypeName() const;

	// BrnReverbEffect.h:71
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnReverbEffect.cpp:55
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnReverbEffect.cpp:80
	virtual bool Attach();

	// BrnReverbEffect.cpp:117
	virtual int32_t GetController(int32_t);

	// BrnReverbEffect.cpp:149
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnReverbEffect.cpp:185
	virtual void UpdateParams(float32_t);

	// BrnReverbEffect.cpp:298
	// Declaration
	virtual void ProcessUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnReverbEffect.cpp:300
		using namespace CgsSound::Playback;

		// BrnReverbEffect.cpp:301
		using namespace ParameterIndexes::GlobalReverbVoiceSpec;

		// BrnReverbEffect.cpp:302
		using namespace SendIndexes::GlobalReverbVoiceSpec;

	}

private:
	// BrnReverbEffect.cpp:333
	// Declaration
	DataPoint<AttribSys::Enums::eReverbTypes::eReverbTypes>::EeReverbTypes GetActiveReverb() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnReverbEffect.cpp:335
		using namespace BrnTrigger;

	}

public:
	virtual void ~ReverbEffect();

}

// BrnReverbEffect.h:67
void BrnSound::Vehicles::Environment::ReverbEffect::~ReverbEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReverbEffect.h:67
void BrnSound::Vehicles::Environment::ReverbEffect::ReverbEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

