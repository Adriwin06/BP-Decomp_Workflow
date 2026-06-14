// BrnAIVehicleState.h:35
struct BrnSound::Vehicles::AIVehicleState : public BrnSound::Vehicles::VehicleState {
protected:
	// BrnAIVehicleState.cpp:27
	extern ClassTypeInfo<CgsSound::Logic::State> sTypeInfo;

public:
	void AIVehicleState(const AIVehicleState &);

	void AIVehicleState();

	// BrnAIVehicleState.cpp:27
	virtual ClassTypeInfo<CgsSound::Logic::State> * GetTypeInfo() const;

	// BrnAIVehicleState.cpp:27
	virtual const char * GetTypeName() const;

	// BrnAIVehicleState.h:37
	ClassTypeInfo<CgsSound::Logic::State> * GetStaticTypeInfo();

	// BrnAIVehicleState.cpp:27
	CgsSound::Logic::State * CreateObject(uint32_t);

	// BrnAIVehicleState.cpp:47
	virtual void Attach(void *);

	// BrnAIVehicleState.cpp:137
	virtual bool Detach();

	// BrnAIVehicleState.cpp:106
	virtual void UpdateParams(float32_t);

	virtual void ~AIVehicleState();

}

// BrnAIVehicleState.h:35
void BrnSound::Vehicles::AIVehicleState::~AIVehicleState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIVehicleState.h:35
void BrnSound::Vehicles::AIVehicleState::AIVehicleState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

