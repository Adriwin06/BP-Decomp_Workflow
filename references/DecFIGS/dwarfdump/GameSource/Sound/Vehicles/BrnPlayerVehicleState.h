// BrnPlayerVehicleState.h:35
struct BrnSound::Vehicles::PlayerVehicleState : public BrnSound::Vehicles::VehicleState {
protected:
	// BrnPlayerVehicleState.cpp:26
	extern ClassTypeInfo<CgsSound::Logic::State> sTypeInfo;

public:
	void PlayerVehicleState(const PlayerVehicleState &);

	void PlayerVehicleState();

	// BrnPlayerVehicleState.cpp:26
	virtual ClassTypeInfo<CgsSound::Logic::State> * GetTypeInfo() const;

	// BrnPlayerVehicleState.cpp:26
	virtual const char * GetTypeName() const;

	// BrnPlayerVehicleState.h:37
	ClassTypeInfo<CgsSound::Logic::State> * GetStaticTypeInfo();

	// BrnPlayerVehicleState.cpp:26
	CgsSound::Logic::State * CreateObject(uint32_t);

	// BrnPlayerVehicleState.cpp:91
	virtual void Attach(void *);

	// BrnPlayerVehicleState.cpp:42
	virtual void UpdateParams(float32_t);

	// BrnPlayerVehicleState.cpp:135
	virtual bool Detach();

	virtual void ~PlayerVehicleState();

}

// BrnPlayerVehicleState.h:35
void BrnSound::Vehicles::PlayerVehicleState::~PlayerVehicleState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPlayerVehicleState.h:35
void BrnSound::Vehicles::PlayerVehicleState::PlayerVehicleState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

