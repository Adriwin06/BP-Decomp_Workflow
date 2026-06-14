// BrnTrafficEngine.h:42
struct BrnSound::Logic::Traffic::TrafficEngine : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnTrafficEngine.cpp:41
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnTrafficEngine.h:94
	uint16_t mu16AemsPatchTrafficIndex;

	// BrnTrafficEngine.h:95
	BrnSound::Logic::Traffic::TrafficControl * mpTrafficControl;

	// BrnTrafficEngine.h:96
	BrnSound::Logic::Traffic::Traffic3DControl * mpTraffic3DControl;

	// BrnTrafficEngine.h:97
	CgsSound::Logic::VoiceWrapper mTrafficEngineVoice;

public:
	void TrafficEngine(const TrafficEngine &);

	// BrnTrafficEngine.cpp:41
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnTrafficEngine.cpp:41
	virtual const char * GetTypeName() const;

	// BrnTrafficEngine.h:43
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnTrafficEngine.cpp:41
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnTrafficEngine.h:113
	void TrafficEngine();

	// BrnTrafficEngine.cpp:62
	virtual void ~TrafficEngine();

	// BrnTrafficEngine.cpp:82
	virtual int32_t GetController(int32_t);

	// BrnTrafficEngine.cpp:116
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnTrafficEngine.cpp:250
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficEngine.cpp:252
		using namespace SendIndexes::AEMS_TrafficEngineClass;

	}

	// BrnTrafficEngine.cpp:149
	virtual void UpdateParams(float32_t);

	// BrnTrafficEngine.cpp:166
	// Declaration
	virtual void ProcessUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficEngine.cpp:168
		using namespace ParameterIndexes::AEMS_TrafficEngineClass;

		// BrnTrafficEngine.cpp:169
		using namespace SendIndexes::AEMS_TrafficEngineClass;

	}

	// BrnTrafficEngine.cpp:307
	virtual bool Detach();

}

// BrnTrafficEngine.h:33
struct BrnSound::Logic::Traffic::Traffic3DControl : public BrnSound::Logic::Brn3DEffectControl {
protected:
	// BrnTrafficEngine.cpp:36
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

public:
	void Traffic3DControl(const Traffic3DControl &);

	void Traffic3DControl();

	// BrnTrafficEngine.cpp:36
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnTrafficEngine.cpp:36
	virtual const char * GetTypeName() const;

	// BrnTrafficEngine.h:35
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnTrafficEngine.cpp:36
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	virtual void ~Traffic3DControl();

}

// BrnTrafficEngine.h:33
void BrnSound::Logic::Traffic::Traffic3DControl::Traffic3DControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficEngine.h:33
void BrnSound::Logic::Traffic::Traffic3DControl::~Traffic3DControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

