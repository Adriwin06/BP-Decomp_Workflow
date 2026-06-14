// BrnVehicleDriver.h:32
struct BrnPhysics::Vehicle::VehicleDriver {
private:
	// BrnVehicleDriver.h:114
	extern const int8_t ki8NumNetworkSlerpSteps = 10;

	// BrnVehicleDriver.h:116
	BrnAIDriverControls mControls;

	// BrnVehicleDriver.h:119
	Matrix44Affine mCatchupTargetTransform;

	// BrnVehicleDriver.h:120
	Matrix44Affine mSlerpTransform;

	// BrnVehicleDriver.h:121
	BrnPhysics::Vehicle::E_DRIVER_TYPE meDriverType;

	// BrnVehicleDriver.h:122
	int8_t mi8NumOfInterpSteps;

	// BrnVehicleDriver.h:123
	bool mbSnappedThisFrame;

public:
	// BrnVehicleDriver.h:38
	void Construct();

	// BrnVehicleDriver.h:41
	void Destruct();

	// BrnVehicleDriver.h:44
	bool Prepare();

	// BrnVehicleDriver.h:47
	bool Release();

	// BrnVehicleDriver.h:50
	void Update(const BrnPlayerDriverControls *);

	// BrnVehicleDriver.h:54
	void Update(const BrnNetworkDriverControls *, BrnPhysics::Vehicle::VehiclePhysics *);

	// BrnVehicleDriver.h:57
	void Update(const BrnAIDriverControls *);

	// BrnVehicleDriver.h:61
	void Update(const BrnTrafficDriverControls *);

	// BrnVehicleDriver.h:65
	void UpdateVehicle(BrnPhysics::Vehicle::VehiclePhysics *);

	// BrnVehicleDriver.h:68
	const BrnPlayerDriverControls * GetControls() const;

	// BrnVehicleDriver.h:76
	void StartCatchupInterpolation(BrnPhysics::Vehicle::VehiclePhysics *, Matrix44Affine, Vector3, Vector3, bool);

	// BrnVehicleDriver.h:80
	BrnPhysics::Vehicle::E_DRIVER_TYPE GetDriverType() const;

	// BrnVehicleDriver.h:83
	bool IsInvulnerableToVehicles() const;

	// BrnVehicleDriver.h:86
	bool IsInvulnerableToWorld() const;

	// BrnVehicleDriver.h:90
	void SetInvulnerableToVehicles(bool);

	// BrnVehicleDriver.h:94
	void SetInvulnerableToWorld(bool);

	// BrnVehicleDriver.h:98
	void ClearControls();

	// BrnVehicleDriver.h:101
	void ClearSnappedThisFrame();

	// BrnVehicleDriver.h:104
	Matrix44Affine GetCatchupTargetTransform() const;

	// BrnVehicleDriver.h:107
	int8_t GetNumInterpSteps() const;

	// BrnVehicleDriver.h:110
	bool SnappedThisFrame() const;

}

// BrnVehicleDriver.h:114
extern const int8_t ki8NumNetworkSlerpSteps = 10;

