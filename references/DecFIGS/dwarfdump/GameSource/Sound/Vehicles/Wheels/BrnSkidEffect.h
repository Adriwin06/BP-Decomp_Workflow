// BrnSkidEffect.h:41
struct BrnSound::Vehicles::Wheels::SkidEffect : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnSkidEffect.cpp:34
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnSkidEffect.h:92
	ResourceHandle mDataHandle;

	// BrnSkidEffect.h:93
	BrnSound::Vehicles::Wheels::WheelControl * mpWheelControl;

	// BrnSkidEffect.h:94
	BrnSound::Vehicles::Engines::PhysicsControl * mpPhysicsControl;

	// BrnSkidEffect.h:96
	float32_t mfOverallMax;

	// BrnSkidEffect.h:97
	float32_t mfSkidAzimuth;

	// BrnSkidEffect.h:98
	DataPoint<bool> mbSkidsLatched;

	// BrnSkidEffect.h:101
	CgsSound::Logic::VoiceWrapper mSkidsVoice;

	// BrnSkidEffect.h:102
	CgsSound::Logic::VoiceWrapper::FunctorPointer<BrnSound::Vehicles::Wheels::SkidEffect> mSkidFunctorPointer;

public:
	void SkidEffect(const SkidEffect &);

	// BrnSkidEffect.cpp:34
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnSkidEffect.cpp:34
	virtual const char * GetTypeName() const;

	// BrnSkidEffect.h:42
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnSkidEffect.cpp:34
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnSkidEffect.h:118
	void SkidEffect();

	// BrnSkidEffect.cpp:60
	virtual void ~SkidEffect();

	// BrnSkidEffect.cpp:77
	virtual int32_t GetController(int32_t);

	// BrnSkidEffect.cpp:113
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnSkidEffect.cpp:144
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSkidEffect.cpp:146
		using namespace rw::math;

		// BrnSkidEffect.cpp:147
		using namespace ParameterIndexes::AEMS_Skids;

	}

	// BrnSkidEffect.cpp:284
	// Declaration
	virtual void ProcessUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSkidEffect.cpp:286
		using namespace ParameterIndexes::AEMS_Skids;

		// BrnSkidEffect.cpp:287
		using namespace SendIndexes::AEMS_Skids;

	}

	// BrnSkidEffect.cpp:340
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSkidEffect.cpp:342
		using namespace CgsSound::Playback;

		// BrnSkidEffect.cpp:343
		using namespace ParameterIndexes::AEMS_Skids;

	}

	// BrnSkidEffect.cpp:395
	virtual bool Detach();

	// BrnSkidEffect.cpp:323
	// Declaration
	void OnPostInit(CgsSound::Logic::VoiceWrapper &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSkidEffect.cpp:325
		using namespace ParameterIndexes::AEMS_Skids;

	}

}

