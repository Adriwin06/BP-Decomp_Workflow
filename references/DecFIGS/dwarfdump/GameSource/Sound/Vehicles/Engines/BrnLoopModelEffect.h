// BrnLoopModelEffect.h:39
struct BrnSound::Vehicles::Engines::LoopModelEffect : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnLoopModelEffect.cpp:27
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnLoopModelEffect.h:84
	ResourceHandle mDataHandle;

	// BrnLoopModelEffect.h:86
	BrnSound::Vehicles::Engines::EngineControl * mpControl;

public:
	void LoopModelEffect(const LoopModelEffect &);

	// BrnLoopModelEffect.cpp:27
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnLoopModelEffect.cpp:27
	virtual const char * GetTypeName() const;

	// BrnLoopModelEffect.h:40
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnLoopModelEffect.cpp:27
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnLoopModelEffect.h:102
	void LoopModelEffect();

	// BrnLoopModelEffect.cpp:48
	virtual void ~LoopModelEffect();

	// BrnLoopModelEffect.cpp:68
	virtual int32_t GetController(int32_t);

	// BrnLoopModelEffect.cpp:96
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnLoopModelEffect.cpp:125
	virtual void UpdateParams(float32_t);

	// BrnLoopModelEffect.cpp:144
	virtual void ProcessUpdate();

	// BrnLoopModelEffect.cpp:161
	virtual void LoadAsset(char *);

}

