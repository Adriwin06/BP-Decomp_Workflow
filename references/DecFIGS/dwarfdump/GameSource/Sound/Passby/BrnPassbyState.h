// BrnPassbyState.h:35
struct BrnSound::Logic::Passby::PassbyState : public BrnSound::Logic::BrnState {
protected:
	// BrnPassbyState.cpp:27
	extern ClassTypeInfo<CgsSound::Logic::State> sTypeInfo;

private:
	// BrnPassbyState.h:73
	BrnSound::Logic::Passby::PassbyStateManager::Passby mPassbyData;

	// BrnPassbyState.h:74
	float32_t mfTimeOutTimer;

public:
	void PassbyState(const PassbyState &);

	// BrnPassbyState.cpp:27
	virtual ClassTypeInfo<CgsSound::Logic::State> * GetTypeInfo() const;

	// BrnPassbyState.cpp:27
	virtual const char * GetTypeName() const;

	// BrnPassbyState.h:37
	ClassTypeInfo<CgsSound::Logic::State> * GetStaticTypeInfo();

	// BrnPassbyState.cpp:27
	CgsSound::Logic::State * CreateObject(uint32_t);

	// BrnPassbyState.cpp:45
	void PassbyState();

	// BrnPassbyState.cpp:58
	virtual void ~PassbyState();

	// BrnPassbyState.cpp:73
	virtual void Attach(void *);

	// BrnPassbyState.cpp:118
	virtual bool Detach();

	// BrnPassbyState.cpp:94
	virtual void UpdateParams(float32_t);

	// BrnPassbyState.h:81
	BrnSound::Logic::Passby::PassbyStateManager * GetPassbyStateManager();

	// BrnPassbyState.h:87
	const BrnSound::Logic::Passby::PassbyStateManager::Passby & GetPassbyData() const;

	// BrnPassbyState.h:93
	float32_t GetTimeOutTimer() const;

}

