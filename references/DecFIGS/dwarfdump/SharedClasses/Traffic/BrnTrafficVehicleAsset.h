// BrnTrafficVehicleAsset.h:45
struct BrnTraffic::VehicleAsset {
private:
	// BrnTrafficVehicleAsset.h:66
	CgsID mVehicleId;

public:
	// BrnTrafficVehicleAsset.h:49
	CgsID GetVehicleId() const;

	// BrnTrafficVehicleAsset.h:50
	void SetVehicleId(CgsID);

	// BrnTrafficVehicleAsset.h:55
	void EndianSwap();

}

