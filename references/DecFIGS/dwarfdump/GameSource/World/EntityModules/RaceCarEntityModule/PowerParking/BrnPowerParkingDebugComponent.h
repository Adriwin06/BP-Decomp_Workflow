// BrnPowerParkingDebugComponent.h:45
struct BrnWorld::PowerParkingDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnPowerParkingDebugComponent.h:76
	PowerParkingManager * mpPowerParkingManager;

public:
	// BrnPowerParkingDebugComponent.cpp:42
	void Construct(PowerParkingManager *);

	// BrnPowerParkingDebugComponent.cpp:54
	void Destruct();

	// BrnPowerParkingDebugComponent.cpp:71
	virtual void Update();

protected:
	// BrnPowerParkingDebugComponent.cpp:83
	virtual const char * GetName() const;

	// BrnPowerParkingDebugComponent.cpp:95
	virtual const char * GetPath() const;

	// BrnPowerParkingDebugComponent.cpp:108
	virtual void OnActivate();

}

// BrnPowerParkingDebugComponent.h:45
void BrnWorld::PowerParkingDebugComponent::PowerParkingDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

