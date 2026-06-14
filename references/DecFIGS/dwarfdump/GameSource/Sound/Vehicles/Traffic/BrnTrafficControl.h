// BrnTrafficControl.h:36
struct BrnSound::Logic::Traffic::TrafficControl : public BrnSound::Logic::BrnEffectControl {
protected:
	// BrnTrafficControl.cpp:35
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

private:
	// BrnTrafficControl.h:74
	bool mbPassbyTriggered;

	// BrnTrafficControl.h:75
	const BrnSound::Logic::Traffic::TrafficStateManager::Slot::TrafficSoundEntity * mpTrafficEntity;

	// BrnTrafficControl.h:76
	BrnSound::Logic::Traffic::Traffic3DControl * mpTraffic3dControl;

public:
	void TrafficControl(const TrafficControl &);

	// BrnTrafficControl.cpp:35
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnTrafficControl.cpp:35
	virtual const char * GetTypeName() const;

	// BrnTrafficControl.h:38
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnTrafficControl.cpp:35
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// BrnTrafficControl.cpp:54
	void TrafficControl();

	// BrnTrafficControl.cpp:69
	virtual void ~TrafficControl();

	// BrnTrafficControl.cpp:87
	virtual int32_t GetController(int32_t);

	// BrnTrafficControl.cpp:118
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnTrafficControl.cpp:146
	virtual bool Attach();

	// BrnTrafficControl.cpp:180
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficControl.cpp:182
		using namespace rw::math::vpu;

	}

	// BrnTrafficControl.h:81
	const BrnSound::Logic::Traffic::TrafficStateManager::Slot::TrafficSoundEntity * GetTrafficEntity() const;

}

