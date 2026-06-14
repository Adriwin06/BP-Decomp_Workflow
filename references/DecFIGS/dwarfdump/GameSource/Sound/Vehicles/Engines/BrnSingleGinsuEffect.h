// BrnSingleGinsuEffect.h:41
struct BrnSound::Vehicles::Engines::SingleGinsuEffect : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnSingleGinsuEffect.cpp:27
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnSingleGinsuEffect.h:81
	BrnSound::Vehicles::Engines::HybridExhaustControl * mpHybridControl;

public:
	void SingleGinsuEffect(const SingleGinsuEffect &);

	// BrnSingleGinsuEffect.cpp:27
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnSingleGinsuEffect.cpp:27
	virtual const char * GetTypeName() const;

	// BrnSingleGinsuEffect.h:42
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnSingleGinsuEffect.cpp:27
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnSingleGinsuEffect.h:97
	void SingleGinsuEffect();

	// BrnSingleGinsuEffect.cpp:45
	virtual void ~SingleGinsuEffect();

	// BrnSingleGinsuEffect.cpp:63
	virtual int32_t GetController(int32_t);

	// BrnSingleGinsuEffect.cpp:91
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnSingleGinsuEffect.cpp:115
	virtual void UpdateParams(float32_t);

	// BrnSingleGinsuEffect.cpp:132
	virtual void ProcessUpdate();

}

