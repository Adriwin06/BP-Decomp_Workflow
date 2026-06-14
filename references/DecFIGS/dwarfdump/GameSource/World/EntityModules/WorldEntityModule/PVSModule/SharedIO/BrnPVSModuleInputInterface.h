// BrnPVSModuleInputInterface.h:45
struct BrnWorld::PVSIO::InputInterface {
	// BrnPVSModuleInputInterface.h:34
	typedef EventQueue<BrnWorld::PVSIO::GetZoneRequest,8> ZoneRequestQueue;

private:
	// BrnPVSModuleInputInterface.h:74
	InputInterface::ZoneRequestQueue mGetZoneRequestQueue;

public:
	// BrnPVSModuleInputInterface.h:50
	void Construct();

	// BrnPVSModuleInputInterface.h:54
	void Clear();

	// BrnPVSModuleInputInterface.h:58
	void Append(const InputInterface *);

	// BrnPVSModuleInputInterface.h:62
	const InputInterface::ZoneRequestQueue * GetZoneRequestQueue() const;

	// BrnPVSModuleInputInterface.h:66
	void GetZoneForPoint(int32_t, Vector3, int32_t);

	// BrnPVSModuleInputInterface.h:70
	void GetZoneForPointBiased(int32_t, Vector3, Vector3, int32_t);

}

