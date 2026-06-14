// BrnSpeedStreamEffect.h:152
struct BrnSound::Vehicles::Environment::SpeedStreamEffect : public BrnSound::Logic::Streaming::IStreamUser {
protected:
	// BrnSpeedStreamEffect.cpp:55
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnSpeedStreamEffect.h:213
	CgsSound::Logic::VoiceWrapper::CreateParams mParams;

	// BrnSpeedStreamEffect.h:214
	BrnSound::Vehicles::Environment::SpeedStreamControl * mpSpeedStreamControl;

public:
	void SpeedStreamEffect(const SpeedStreamEffect &);

	void SpeedStreamEffect();

	// BrnSpeedStreamEffect.cpp:55
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnSpeedStreamEffect.cpp:55
	virtual const char * GetTypeName() const;

	// BrnSpeedStreamEffect.h:156
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnSpeedStreamEffect.cpp:55
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnSpeedStreamEffect.cpp:283
	virtual int32_t GetController(int32_t);

	// BrnSpeedStreamEffect.cpp:312
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnSpeedStreamEffect.cpp:343
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSpeedStreamEffect.cpp:345
		using namespace CgsSound::Playback;

		// BrnSpeedStreamEffect.cpp:346
		using namespace Logic::Streaming;

	}

	// BrnSpeedStreamEffect.cpp:404
	// Declaration
	virtual bool Detach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSpeedStreamEffect.cpp:406
		using namespace Logic::Streaming;

	}

	// BrnSpeedStreamEffect.cpp:436
	virtual const CgsSound::Logic::VoiceWrapper::CreateParams & GetCreateParams() const;

	// BrnSpeedStreamEffect.cpp:456
	// Declaration
	virtual void UpdateVoiceParams(CgsSound::Logic::VoiceWrapper &, float32_t, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSpeedStreamEffect.cpp:458
		using namespace CgsSound::Playback;

		// BrnSpeedStreamEffect.cpp:459
		using namespace ParameterIndexes::MusicVoiceSpec;

		// BrnSpeedStreamEffect.cpp:460
		using namespace SendIndexes::MusicVoiceSpec;

	}

	virtual void ~SpeedStreamEffect();

}

// BrnSpeedStreamEffect.h:63
struct BrnSound::Vehicles::Environment::SpeedStreamControl : public BrnSound::Logic::BrnEffectControl {
protected:
	// BrnSpeedStreamEffect.cpp:47
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

private:
	// BrnSpeedStreamEffect.h:132
	BrnSound::Vehicles::Engines::PhysicsControl * mpPhysicsControl;

	// BrnSpeedStreamEffect.h:133
	float32_t mfSpeedHighTime;

	// BrnSpeedStreamEffect.h:134
	float32_t mfBoostHighTime;

	// BrnSpeedStreamEffect.h:136
	DataPoint<bool> mSpeedStreamOn;

	// BrnSpeedStreamEffect.h:137
	DataPoint<bool> mBoostStreamOn;

public:
	void SpeedStreamControl(const SpeedStreamControl &);

	void SpeedStreamControl();

	// BrnSpeedStreamEffect.cpp:47
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnSpeedStreamEffect.cpp:47
	virtual const char * GetTypeName() const;

	// BrnSpeedStreamEffect.h:67
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnSpeedStreamEffect.cpp:47
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// BrnSpeedStreamEffect.cpp:81
	virtual int32_t GetController(int32_t);

	// BrnSpeedStreamEffect.cpp:110
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnSpeedStreamEffect.cpp:141
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSpeedStreamEffect.cpp:143
		using namespace Engines;

	}

	// BrnSpeedStreamEffect.cpp:201
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSpeedStreamEffect.cpp:203
		using namespace Logic;

	}

	// BrnSpeedStreamEffect.h:238
	const DataPoint<bool> & GetSpeedStreamStatus() const;

	// BrnSpeedStreamEffect.h:255
	const DataPoint<bool> & GetBoostStreamStatus() const;

private:
	// BrnSpeedStreamEffect.cpp:231
	void UpdateDuckers();

public:
	virtual void ~SpeedStreamControl();

}

// BrnSpeedStreamEffect.h:63
void BrnSound::Vehicles::Environment::SpeedStreamControl::~SpeedStreamControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSpeedStreamEffect.h:152
void BrnSound::Vehicles::Environment::SpeedStreamEffect::~SpeedStreamEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSpeedStreamEffect.h:63
void BrnSound::Vehicles::Environment::SpeedStreamControl::SpeedStreamControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSpeedStreamEffect.h:152
void BrnSound::Vehicles::Environment::SpeedStreamEffect::SpeedStreamEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

