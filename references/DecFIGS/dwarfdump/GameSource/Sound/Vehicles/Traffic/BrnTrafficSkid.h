// BrnTrafficSkid.h:54
struct BrnSound::Logic::Traffic::TrafficSkid : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnTrafficSkid.cpp:64
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

	// Unknown accessibility
	// BrnTrafficSkid.cpp:38
	extern const float32_t[4] safTrafficSizes;

private:
	// BrnTrafficSkid.h:147
	CgsSound::Logic::VoiceWrapper mSkidVoice;

	// BrnTrafficSkid.h:148
	CgsSound::Logic::VoiceWrapper::FunctorPointer<BrnSound::Logic::Traffic::TrafficSkid> mSkidFunctionPointer;

	// BrnTrafficSkid.h:149
	BrnSound::Logic::Traffic::TrafficControl * mpTrafficControl;

	// BrnTrafficSkid.h:150
	float32_t mfDriftFactor;

	// BrnTrafficSkid.h:151
	float32_t mfTimeAsPhysical;

public:
	void TrafficSkid(const TrafficSkid &);

	void TrafficSkid();

	// BrnTrafficSkid.cpp:64
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnTrafficSkid.cpp:64
	virtual const char * GetTypeName() const;

	// BrnTrafficSkid.h:58
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnTrafficSkid.cpp:64
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnTrafficSkid.cpp:90
	virtual int32_t GetController(int32_t);

	// BrnTrafficSkid.cpp:119
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnTrafficSkid.cpp:148
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficSkid.cpp:150
		using namespace CgsSound::Playback;

		// BrnTrafficSkid.cpp:151
		using namespace CgsSound::Logic;

	}

	// BrnTrafficSkid.cpp:206
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficSkid.cpp:208
		using namespace Module::Io;

	}

	// BrnTrafficSkid.cpp:264
	// Declaration
	virtual void ProcessUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficSkid.cpp:266
		using namespace CgsSound::Playback;

		// BrnTrafficSkid.cpp:273
		using namespace ParameterIndexes::AEMS_Skids_Traffic;

		// BrnTrafficSkid.cpp:274
		using namespace SendIndexes::AEMS_Skids_Traffic;

	}

	// BrnTrafficSkid.cpp:314
	virtual bool Detach();

	// BrnTrafficSkid.cpp:380
	int32_t FindPhysicalTrafficState(const RootInputBuffer::PhysicalTrafficStateQueue *, EntityId);

private:
	// BrnTrafficSkid.cpp:360
	void OnPostInitVoice(CgsSound::Logic::VoiceWrapper &);

	// BrnTrafficSkid.cpp:411
	// Declaration
	float32_t CalculateDriftParameter(const PhysicalTrafficState &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficSkid.cpp:413
		using namespace BrnPhysics::Vehicle;

	}

public:
	virtual void ~TrafficSkid();

}

// BrnTrafficSkid.h:54
void BrnSound::Logic::Traffic::TrafficSkid::~TrafficSkid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficSkid.h:54
void BrnSound::Logic::Traffic::TrafficSkid::TrafficSkid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

