// BrnGlobalState.h:31
struct BrnSound::Logic::GlobalState : public BrnSound::Logic::BrnState {
protected:
	// BrnGlobalState.cpp:22
	extern ClassTypeInfo<CgsSound::Logic::State> sTypeInfo;

public:
	void GlobalState(const GlobalState &);

	void GlobalState();

	// BrnGlobalState.cpp:22
	virtual ClassTypeInfo<CgsSound::Logic::State> * GetTypeInfo() const;

	// BrnGlobalState.cpp:22
	virtual const char * GetTypeName() const;

	// BrnGlobalState.h:33
	ClassTypeInfo<CgsSound::Logic::State> * GetStaticTypeInfo();

	// BrnGlobalState.cpp:22
	CgsSound::Logic::State * CreateObject(uint32_t);

	virtual void ~GlobalState();

}

// BrnGlobalState.h:31
void BrnSound::Logic::GlobalState::~GlobalState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGlobalState.h:31
void BrnSound::Logic::GlobalState::GlobalState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

