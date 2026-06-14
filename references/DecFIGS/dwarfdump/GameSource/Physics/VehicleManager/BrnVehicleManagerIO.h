// BrnVehicleManagerIO.h:47
struct BrnPhysics::Vehicle::VehicleManagerOutputBuffer : public IOBuffer {
private:
	// BrnVehicleManagerIO.h:65
	VehicleOutputRequestInterface mVehicleOutputRequestInterface;

public:
	// BrnVehicleManagerIO.h:52
	void Construct();

	// BrnVehicleManagerIO.h:56
	void Destruct();

	// BrnVehicleManagerIO.h:60
	const VehicleOutputRequestInterface * GetVehicleOutputRequestInterface() const;

	// BrnVehicleManagerIO.h:61
	VehicleOutputRequestInterface * GetVehicleOutputRequestInterface();

}

