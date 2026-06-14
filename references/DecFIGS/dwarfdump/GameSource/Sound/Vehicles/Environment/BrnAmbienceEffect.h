// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// BrnAmbienceEffect.h:50
		namespace Environment {
			struct EntityTriggerInfo;

			struct EnclosureControl;

			struct AmbienceControl;

			struct AmbienceEffect;

			struct SpeedStreamControl;

			struct SpeedStreamEffect;

			struct CarStereoEffect;

		}

	}

}

// BrnAmbienceEffect.h:189
struct BrnSound::Vehicles::Environment::AmbienceEffect : public BrnSound::Logic::Streaming::IStreamUser {
protected:
	// BrnAmbienceEffect.cpp:70
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnAmbienceEffect.h:251
	CgsSound::Logic::VoiceWrapper::CreateParams mParams;

	// BrnAmbienceEffect.h:253
	BrnSound::Vehicles::Environment::AmbienceControl * mpAmbienceControl;

public:
	void AmbienceEffect(const AmbienceEffect &);

	void AmbienceEffect();

	// BrnAmbienceEffect.cpp:70
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnAmbienceEffect.cpp:70
	virtual const char * GetTypeName() const;

	// BrnAmbienceEffect.h:193
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnAmbienceEffect.cpp:70
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnAmbienceEffect.cpp:407
	virtual int32_t GetController(int32_t);

	// BrnAmbienceEffect.cpp:436
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnAmbienceEffect.cpp:467
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAmbienceEffect.cpp:469
		using namespace CgsSound::Playback;

		// BrnAmbienceEffect.cpp:470
		using namespace Logic;

		// BrnAmbienceEffect.cpp:471
		using namespace Logic::Streaming;

	}

	// BrnAmbienceEffect.cpp:520
	// Declaration
	virtual bool Detach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAmbienceEffect.cpp:522
		using namespace Logic::Streaming;

	}

	// BrnAmbienceEffect.cpp:578
	virtual const CgsSound::Logic::VoiceWrapper::CreateParams & GetCreateParams() const;

	// BrnAmbienceEffect.cpp:598
	// Declaration
	virtual void UpdateVoiceParams(CgsSound::Logic::VoiceWrapper &, float32_t, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAmbienceEffect.cpp:600
		using namespace CgsSound::Playback;

		// BrnAmbienceEffect.cpp:601
		using namespace ParameterIndexes::MusicVoiceSpec;

		// BrnAmbienceEffect.cpp:602
		using namespace SendIndexes::MusicVoiceSpec;

	}

	virtual void ~AmbienceEffect();

}

// BrnAmbienceEffect.h:83
struct BrnSound::Vehicles::Environment::AmbienceControl : public BrnSound::Logic::BrnEffectControl {
protected:
	// BrnAmbienceEffect.cpp:62
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

private:
	// BrnAmbienceEffect.h:167
	extern const uint8_t KU8_INVALID_REGION = 255;

	// BrnAmbienceEffect.h:169
	WorldMap2D mMap2d;

	// BrnAmbienceEffect.h:170
	ResourceHandle mMap2dResource;

	// BrnAmbienceEffect.h:172
	DataPoint<uint8_t> mRegion;

	// BrnAmbienceEffect.h:173
	BrnSound::Vehicles::Environment::EnclosureControl * mpEnclosureControl;

	// BrnAmbienceEffect.h:174
	float32_t mfTimeSinceUpdate;

public:
	void AmbienceControl(const BrnSound::Vehicles::Environment::AmbienceControl &);

	void AmbienceControl();

	// BrnAmbienceEffect.cpp:62
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnAmbienceEffect.cpp:62
	virtual const char * GetTypeName() const;

	// BrnAmbienceEffect.h:87
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnAmbienceEffect.cpp:62
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// BrnAmbienceEffect.cpp:149
	virtual int32_t GetController(int32_t);

	// BrnAmbienceEffect.cpp:178
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnAmbienceEffect.cpp:209
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAmbienceEffect.cpp:211
		using namespace Logic;

	}

	// BrnAmbienceEffect.cpp:260
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAmbienceEffect.cpp:262
		using namespace Logic;

	}

	// BrnAmbienceEffect.cpp:297
	// Declaration
	virtual void SetupLoadData() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAmbienceEffect.cpp:299
		using namespace Logic;

	}

	// BrnAmbienceEffect.h:277
	const DataPoint<uint8_t> & GetRegion() const;

private:
	// BrnAmbienceEffect.cpp:317
	// Declaration
	void DrawDebug(Vector3) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAmbienceEffect.cpp:320
		using namespace Module::Io;

	}

	// BrnAmbienceEffect.cpp:360
	// Declaration
	bool SelectSpecialAmbience(uint8_t &) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAmbienceEffect.cpp:362
		using namespace Module::Io;

		// BrnAmbienceEffect.cpp:363
		using namespace BrnTrigger;

	}

public:
	virtual void ~AmbienceControl();

}

// BrnAmbienceEffect.h:83
void BrnSound::Vehicles::Environment::AmbienceControl::~AmbienceControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAmbienceEffect.h:189
void BrnSound::Vehicles::Environment::AmbienceEffect::~AmbienceEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAmbienceEffect.h:83
void BrnSound::Vehicles::Environment::AmbienceControl::AmbienceControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAmbienceEffect.h:189
void BrnSound::Vehicles::Environment::AmbienceEffect::AmbienceEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAmbienceEffect.h:167
extern const uint8_t KU8_INVALID_REGION = 255;

