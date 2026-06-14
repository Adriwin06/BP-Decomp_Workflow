// BrnAISkidEffect.h:41
struct BrnSound::Vehicles::Wheels::AISkidEffect : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnAISkidEffect.cpp:31
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnAISkidEffect.h:99
	BrnSound::Vehicles::Engines::PhysicsControl * mpPhysicsControl;

	// BrnAISkidEffect.h:100
	PathLine<2u> mDriftInterp;

	// BrnAISkidEffect.h:102
	float32_t mfDriftFactor;

	// BrnAISkidEffect.h:103
	CgsSound::Logic::VoiceWrapper mSkidsVoice;

public:
	void AISkidEffect(const AISkidEffect &);

	// BrnAISkidEffect.cpp:31
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnAISkidEffect.cpp:31
	virtual const char * GetTypeName() const;

	// BrnAISkidEffect.h:42
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnAISkidEffect.cpp:31
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnAISkidEffect.h:119
	void AISkidEffect();

	// BrnAISkidEffect.cpp:61
	virtual void ~AISkidEffect();

	// BrnAISkidEffect.cpp:78
	virtual int32_t GetController(int32_t);

	// BrnAISkidEffect.cpp:108
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnAISkidEffect.cpp:135
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAISkidEffect.cpp:137
		using namespace rw::math;

	}

	// BrnAISkidEffect.cpp:220
	// Declaration
	virtual void ProcessUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAISkidEffect.cpp:227
		using namespace ParameterIndexes::AEMS_Skids_Traffic;

		// BrnAISkidEffect.cpp:228
		using namespace SendIndexes::AEMS_Skids_Traffic;

	}

	// BrnAISkidEffect.cpp:261
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAISkidEffect.cpp:263
		using namespace CgsSound::Playback;

		// BrnAISkidEffect.cpp:281
		using namespace SendIndexes::AEMS_Skids_Traffic;

	}

	// BrnAISkidEffect.cpp:317
	virtual bool Detach();

	// BrnAISkidEffect.cpp:408
	void ReceiveImpact(BrnPhysics::Vehicle::EImpactType, bool);

	// BrnAISkidEffect.cpp:367
	virtual void Notify(const CgsSound::Io::MessageHeader *);

}

