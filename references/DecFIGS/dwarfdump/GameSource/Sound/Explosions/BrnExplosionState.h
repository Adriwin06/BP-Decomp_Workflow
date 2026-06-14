// BrnExplosionState.h:34
struct BrnSound::Logic::Explosion::ExplosionState : public BrnSound::Logic::BrnState {
protected:
	// BrnExplosionState.cpp:25
	extern ClassTypeInfo<CgsSound::Logic::State> sTypeInfo;

public:
	void ExplosionState(const ExplosionState &);

	// BrnExplosionState.cpp:25
	virtual ClassTypeInfo<CgsSound::Logic::State> * GetTypeInfo() const;

	// BrnExplosionState.cpp:25
	virtual const char * GetTypeName() const;

	// BrnExplosionState.h:36
	ClassTypeInfo<CgsSound::Logic::State> * GetStaticTypeInfo();

	// BrnExplosionState.cpp:25
	CgsSound::Logic::State * CreateObject(uint32_t);

	// BrnExplosionState.cpp:41
	void ExplosionState();

	// BrnExplosionState.cpp:53
	virtual void ~ExplosionState();

	// BrnExplosionState.cpp:66
	virtual void Attach(void *);

	// BrnExplosionState.cpp:96
	virtual bool Detach();

	// BrnExplosionState.cpp:81
	virtual void UpdateParams(float32_t);

	// BrnExplosionState.h:70
	ExplosionStateManager * GetExplosionStateManager();

}

