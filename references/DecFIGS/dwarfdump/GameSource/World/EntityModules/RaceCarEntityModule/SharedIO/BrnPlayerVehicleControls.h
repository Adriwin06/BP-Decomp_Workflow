// BrnPlayerVehicleControls.h:29
struct BrnWorld::PlayerVehicleControls {
	// BrnPlayerVehicleControls.h:32
	float32_t mfXAxis1;

	// BrnPlayerVehicleControls.h:33
	float32_t mfXAxis0;

	// BrnPlayerVehicleControls.h:35
	float32_t mfYAxis1;

	// BrnPlayerVehicleControls.h:36
	float32_t mfYAxis0;

	// BrnPlayerVehicleControls.h:39
	float32_t mfXSensor;

	// BrnPlayerVehicleControls.h:40
	float32_t mfYSensor;

	// BrnPlayerVehicleControls.h:41
	float32_t mfZSensor;

	// BrnPlayerVehicleControls.h:42
	float32_t mfGSensor;

	// BrnPlayerVehicleControls.h:45
	float32_t mfAcceleration;

	// BrnPlayerVehicleControls.h:46
	float32_t mfBraking;

	// BrnPlayerVehicleControls.h:47
	float32_t mfHandBrake;

	// BrnPlayerVehicleControls.h:48
	float32_t mfSteering;

	// BrnPlayerVehicleControls.h:49
	float32_t mfSpin;

	// BrnPlayerVehicleControls.h:51
	bool mbHorn;

	// BrnPlayerVehicleControls.h:52
	bool mbChangeView;

	// BrnPlayerVehicleControls.h:53
	bool mbStart;

	// BrnPlayerVehicleControls.h:54
	bool mbReset;

	// BrnPlayerVehicleControls.h:55
	bool mbToggle;

	// BrnPlayerVehicleControls.h:56
	bool mbBoost;

	// BrnPlayerVehicleControls.h:57
	bool mbIsWheel;

	// BrnPlayerVehicleControls.h:58
	bool mbBoostBounce;

public:
	// BrnPlayerVehicleControls.h:63
	void Construct();

}

