// BrnTrafficHorn.h:48
struct BrnSound::Logic::Traffic::TrafficHorn : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnTrafficHorn.cpp:64
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnTrafficHorn.h:133
	CgsSound::Logic::VoiceWrapper mHornVoice;

	// BrnTrafficHorn.h:134
	CgsSound::Logic::VoiceWrapper::FunctorPointer<BrnSound::Logic::Traffic::TrafficHorn> mHornFunctionPointer;

	// BrnTrafficHorn.h:137
	BrnSound::Logic::Traffic::TrafficControl * mpTrafficControl;

	// BrnTrafficHorn.h:139
	BrnSound::Logic::Traffic::ETrafficSize meTrafficSize;

	// BrnTrafficHorn.h:140
	float32_t mfAemsPatchMode;

	// BrnTrafficHorn.h:142
	bool mbPrevHornState;

public:
	void TrafficHorn(const TrafficHorn &);

	void TrafficHorn();

	// BrnTrafficHorn.cpp:64
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnTrafficHorn.cpp:64
	virtual const char * GetTypeName() const;

	// BrnTrafficHorn.h:51
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnTrafficHorn.cpp:64
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnTrafficHorn.cpp:88
	virtual void ~TrafficHorn();

	// BrnTrafficHorn.cpp:105
	virtual int32_t GetController(int32_t);

	// BrnTrafficHorn.cpp:134
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnTrafficHorn.cpp:164
	virtual void UpdateParams(float32_t);

	// BrnTrafficHorn.cpp:183
	// Declaration
	virtual void ProcessUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficHorn.cpp:185
		using namespace Module::Io;

		// BrnTrafficHorn.cpp:186
		using namespace ParameterIndexes::AEMS_class_horns;

		// BrnTrafficHorn.cpp:187
		using namespace SendIndexes::AEMS_class_horns;

	}

	// BrnTrafficHorn.cpp:319
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficHorn.cpp:321
		using namespace CgsSound::Logic;

	}

	// BrnTrafficHorn.cpp:381
	virtual bool Detach();

	// BrnTrafficHorn.cpp:406
	void OnPostInitVoice(CgsSound::Logic::VoiceWrapper &);

private:
	// BrnTrafficHorn.cpp:423
	// Declaration
	void SetAemsTypeParameter() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficHorn.cpp:425
		using namespace ParameterIndexes::AEMS_class_horns;

	}

}

// BrnTrafficHorn.h:48
void BrnSound::Logic::Traffic::TrafficHorn::TrafficHorn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

