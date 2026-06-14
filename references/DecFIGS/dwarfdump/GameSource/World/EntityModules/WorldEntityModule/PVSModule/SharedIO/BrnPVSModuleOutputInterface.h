// BrnPVSModuleOutputInterface.h:43
struct BrnWorld::PVSIO::OutputInterface {
	// BrnPVSModuleOutputInterface.h:32
	typedef EventQueue<BrnWorld::PVSIO::GetZoneResponse,8> ZoneResponseQueue;

private:
	// BrnPVSModuleOutputInterface.h:74
	OutputInterface::ZoneResponseQueue mGetZoneResponseQueue;

	// BrnPVSModuleOutputInterface.h:75
	uint32_t muTotalZones;

public:
	// BrnPVSModuleOutputInterface.h:48
	void Construct();

	// BrnPVSModuleOutputInterface.h:52
	void Clear();

	// BrnPVSModuleOutputInterface.h:56
	OutputInterface::ZoneResponseQueue * GetZoneResponseQueue();

	// BrnPVSModuleOutputInterface.h:60
	const OutputInterface::ZoneResponseQueue * GetZoneResponseQueue() const;

	// BrnPVSModuleOutputInterface.h:64
	uint32_t GetTotalZones() const;

	// BrnPVSModuleOutputInterface.h:69
	void SetTotalZones(uint32_t);

}

