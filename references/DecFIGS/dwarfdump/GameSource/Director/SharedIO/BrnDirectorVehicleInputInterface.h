// BrnDirectorVehicleInputInterface.h:46
struct BrnDirector::BrnDirectorVehicleInputInterface {
	// BrnDirectorQueues.h:33
	typedef EventQueue<BrnDirector::NewVehicleEvent,50> NewVehicleEventQueue;

private:
	// BrnDirectorVehicleInputInterface.h:67
	BrnDirectorVehicleInputInterface::NewVehicleEventQueue mNewVehicleQueue;

public:
	// BrnDirectorVehicleInputInterface.h:51
	void Append(const BrnDirectorVehicleInputInterface *);

	// BrnDirectorVehicleInputInterface.h:54
	void Construct();

	// BrnDirectorVehicleInputInterface.h:57
	const BrnDirectorVehicleInputInterface::NewVehicleEventQueue * GetNewVehicleEventQueue() const;

	// BrnDirectorVehicleInputInterface.h:63
	int32_t NewVehicle(Attribute::Key, int32_t);

}

