// BrnBoostEffect.h:56
struct BrnSound::Vehicles::Engines::BoostEffect : public BrnSound::Logic::Streaming::IStreamUser {
protected:
	// BrnBoostEffect.cpp:39
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnBoostEffect.h:162
	CgsSound::Logic::VoiceWrapper mBoostVoice;

	// BrnBoostEffect.h:163
	CgsSound::Logic::VoiceWrapper::FunctorPointer<BrnSound::Vehicles::Engines::BoostEffect> mBoostFunctionPointer;

	// BrnBoostEffect.h:165
	CgsSound::Logic::VoiceWrapper::CreateParams mParams;

	// BrnBoostEffect.h:167
	float32_t mfParam_AEMS_velocity;

	// BrnBoostEffect.h:168
	float32_t mfParam_AEMS_start_stage_2;

	// BrnBoostEffect.h:169
	float32_t mfParam_AEMS_boost_remaining;

	// BrnBoostEffect.h:170
	float32_t mfParam_AEMS_car_speed;

	// BrnBoostEffect.h:171
	float32_t mfParam_AEMS_volume;

	// BrnBoostEffect.h:172
	float32_t mfParam_AEMS_control;

	// BrnBoostEffect.h:173
	float32_t mfParam_AEMS_time_since_last_boostin;

	// BrnBoostEffect.h:174
	float32_t mfParam_AEMS_time_since_last_boostout;

	// BrnBoostEffect.h:175
	float32_t mfParam_AEMS_time_boosting;

	// BrnBoostEffect.h:177
	float32_t mfParam_AEMS_is_boost_blue;

	// BrnBoostEffect.h:178
	float32_t mfParam_AEMS_skid_intensity;

	// BrnBoostEffect.h:181
	DataPoint<float32_t> mTimeOfLastBoostOut;

	// BrnBoostEffect.h:182
	DataPoint<float32_t> mTimeOfLastBoostIn;

	// BrnBoostEffect.h:183
	DataPoint<float32_t> mTimeInBoost;

	// BrnBoostEffect.h:185
	BrnSound::Vehicles::Engines::PhysicsControl * mpPhysicsControl;

	// BrnBoostEffect.h:187
	BrnSound::Vehicles::Environment::SpeedStreamControl * mpSpeedStreamControl;

public:
	void BoostEffect(const BoostEffect &);

	// BrnBoostEffect.cpp:39
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnBoostEffect.cpp:39
	virtual const char * GetTypeName() const;

	// BrnBoostEffect.h:58
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnBoostEffect.cpp:39
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnBoostEffect.cpp:55
	void BoostEffect();

	// BrnBoostEffect.cpp:72
	virtual void ~BoostEffect();

	// BrnBoostEffect.cpp:88
	virtual int32_t GetController(int32_t);

	// BrnBoostEffect.cpp:125
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnBoostEffect.cpp:160
	virtual void SetupLoadData();

	// BrnBoostEffect.cpp:182
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnBoostEffect.cpp:189
		using namespace CgsSound::Logic;

		// BrnBoostEffect.cpp:190
		using namespace CgsSound::Playback;

		// BrnBoostEffect.cpp:191
		using namespace SendIndexes::AEMS_Class;

	}

	// BrnBoostEffect.cpp:256
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnBoostEffect.cpp:263
		using namespace rw::math::fpu;

	}

	// BrnBoostEffect.cpp:379
	virtual void ProcessUpdate();

	// BrnBoostEffect.cpp:452
	virtual const CgsSound::Logic::VoiceWrapper::CreateParams & GetCreateParams() const;

	// BrnBoostEffect.cpp:472
	// Declaration
	virtual void UpdateVoiceParams(CgsSound::Logic::VoiceWrapper &, float32_t, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnBoostEffect.cpp:474
		using namespace SendIndexes::MusicVoiceSpec;

		// BrnBoostEffect.cpp:475
		using namespace ParameterIndexes::MusicVoiceSpec;

		// BrnBoostEffect.cpp:476
		using namespace CgsSound::Playback;

	}

	// BrnBoostEffect.cpp:434
	void OnPostInit(CgsSound::Logic::VoiceWrapper &);

	// BrnBoostEffect.cpp:345
	// Declaration
	virtual bool Detach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnBoostEffect.cpp:347
		using namespace Logic::Streaming;

	}

	// BrnBoostEffect.cpp:398
	// Declaration
	void UpdateAemsBoostParameters() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnBoostEffect.cpp:400
		using namespace ParameterIndexes::AEMS_Class;

		// BrnBoostEffect.cpp:401
		using namespace SendIndexes::AEMS_Class;

	}

private:
	// BrnBoostEffect.cpp:495
	// Declaration
	void UpdateBoostStream() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnBoostEffect.cpp:497
		using namespace CgsSound::Playback;

		// BrnBoostEffect.cpp:498
		using namespace Logic::Streaming;

	}

}

