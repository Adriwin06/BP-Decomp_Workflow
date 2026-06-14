// BrnTrafficState.h:36
struct BrnSound::Logic::Traffic::TrafficState : public BrnSound::Logic::BrnState {
protected:
	// BrnTrafficState.cpp:24
	extern ClassTypeInfo<CgsSound::Logic::State> sTypeInfo;

private:
	// BrnTrafficState.h:60
	const BrnSound::Logic::Traffic::TrafficStateManager::Slot::TrafficSoundEntity * mpTrafficEntity;

public:
	void TrafficState(const TrafficState &);

	// BrnTrafficState.cpp:24
	virtual ClassTypeInfo<CgsSound::Logic::State> * GetTypeInfo() const;

	// BrnTrafficState.cpp:24
	virtual const char * GetTypeName() const;

	// BrnTrafficState.h:38
	ClassTypeInfo<CgsSound::Logic::State> * GetStaticTypeInfo();

	// BrnTrafficState.cpp:24
	CgsSound::Logic::State * CreateObject(uint32_t);

	// BrnTrafficState.cpp:43
	void TrafficState();

	// BrnTrafficState.cpp:48
	virtual void ~TrafficState();

	// BrnTrafficState.cpp:64
	virtual void Attach(void *);

	// BrnTrafficState.h:67
	BrnSound::Logic::Traffic::TrafficStateManager * GetTrafficStateManager();

	// BrnTrafficState.h:73
	const BrnSound::Logic::Traffic::TrafficStateManager::Slot::TrafficSoundEntity * GetTrafficEntity() const;

}

