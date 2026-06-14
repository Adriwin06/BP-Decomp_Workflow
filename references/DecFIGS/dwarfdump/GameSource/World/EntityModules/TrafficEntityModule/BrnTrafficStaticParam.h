// BrnTrafficStaticParam.h:43
struct BrnTraffic::StaticTrafficParam {
private:
	// BrnTrafficStaticParam.h:89
	uint16_t muHull;

	// BrnTrafficStaticParam.h:90
	uint8_t muStaticTrafficIndexOnHull;

	// BrnTrafficStaticParam.h:92
	uint8_t mxFlags;

	// BrnTrafficStaticParam.h:94
	uint8_t muVehicleType;

public:
	// BrnTrafficStaticParam.h:48
	void Construct();

	// BrnTrafficStaticParam.h:55
	void Initialise(uint8_t, uint16_t, uint8_t);

	// BrnTrafficStaticParam.h:59
	uint16_t GetHull() const;

	// BrnTrafficStaticParam.h:60
	uint8_t GetIndexInHull() const;

	// BrnTrafficStaticParam.h:61
	uint8_t GetVehicleType() const;

	// BrnTrafficStaticParam.h:63
	bool IsAlive() const;

	// BrnTrafficStaticParam.h:64
	bool IsDying() const;

	// BrnTrafficStaticParam.h:65
	bool IsZombie() const;

	// BrnTrafficStaticParam.h:66
	bool IsDivorced() const;

	// BrnTrafficStaticParam.h:67
	bool ShouldBeRemoved() const;

	// BrnTrafficStaticParam.h:69
	void ClearDying();

	// BrnTrafficStaticParam.h:70
	void SetDyingState();

	// BrnTrafficStaticParam.h:71
	void SetZombie();

	// BrnTrafficStaticParam.h:72
	void SetDivorced();

	// BrnTrafficStaticParam.h:73
	void SetShouldBeRemoved();

}

