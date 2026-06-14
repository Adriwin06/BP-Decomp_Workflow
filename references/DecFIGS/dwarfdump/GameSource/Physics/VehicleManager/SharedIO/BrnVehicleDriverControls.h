// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// BrnVehicleDriverControls.h:40
		enum E_DRIVER_TYPE {
			E_DRIVER_TYPE_PLAYER = 0,
			E_DRIVER_TYPE_AI = 1,
			E_DRIVER_TYPE_NETWORK = 2,
			E_DRIVER_TYPE_TRAFFIC = 3,
			E_NUM_E_DRIVER_TYPE_EVENTS = 4,
		}

		// BrnVehicleDriverControls.h:34
		const float32_t KF_STICK_AFTERTOUCH_MODIFIER;

	}

}

// BrnVehicleDriverControls.h:60
struct BrnPhysics::Vehicle::BrnPlayerDriverControls : public Event {
	// BrnVehicleDriverControls.h:84
	int32_t miVehicleID;

	// BrnVehicleDriverControls.h:85
	float32_t mfGas;

	// BrnVehicleDriverControls.h:86
	float32_t mfBrake;

	// BrnVehicleDriverControls.h:87
	float32_t mfHandBrake;

	// BrnVehicleDriverControls.h:88
	float32_t mfSteering;

	// BrnVehicleDriverControls.h:89
	float32_t mfForwardSteering;

	// BrnVehicleDriverControls.h:90
	float32_t mfSpin;

	// BrnVehicleDriverControls.h:91
	float32_t mfRequestedGas;

	// BrnVehicleDriverControls.h:92
	float32_t mfAftertouchLevel;

	// BrnVehicleDriverControls.h:94
	float32_t mfXSensor;

	// BrnVehicleDriverControls.h:95
	float32_t mfYSensor;

	// BrnVehicleDriverControls.h:96
	float32_t mfZSensor;

	// BrnVehicleDriverControls.h:97
	float32_t mfGSensor;

	// BrnVehicleDriverControls.h:99
	int8_t miVehicleIDToMerge;

	// BrnVehicleDriverControls.h:101
	bool mbReset;

	// BrnVehicleDriverControls.h:102
	bool mbToggle;

	// BrnVehicleDriverControls.h:103
	bool mbBoost;

	// BrnVehicleDriverControls.h:104
	bool mbIsInvulnerableToVehicles;

	// BrnVehicleDriverControls.h:105
	bool mbIsInvulnerableToWorld;

	// BrnVehicleDriverControls.h:106
	bool mbForceDrift;

	// BrnVehicleDriverControls.h:107
	bool mbBoostBounce;

	// BrnVehicleDriverControls.h:108
	bool mbIsOnStartLine;

	// BrnVehicleDriverControls.h:109
	bool mbIsSteeringWheel;

	// BrnVehicleDriverControls.h:111
	bool mbHorn;

protected:
	// BrnVehicleDriverControls.h:113
	BrnPhysics::Vehicle::E_DRIVER_TYPE meDriverType;

public:
	// BrnVehicleDriverControls.h:63
	void BrnPlayerDriverControls();

	// BrnVehicleDriverControls.h:67
	void Clear();

	// BrnVehicleDriverControls.h:70
	void ResetType();

	// BrnVehicleDriverControls.h:74
	BrnPhysics::Vehicle::E_DRIVER_TYPE GetType() const;

	// BrnVehicleDriverControls.h:82
	void GetAftertouchValues(float32_t &, float32_t &, float32_t &, bool) const;

}

// BrnVehicleDriverControls.h:126
struct BrnPhysics::Vehicle::BrnNetworkDriverControls : public BrnPlayerDriverControls {
	// BrnVehicleDriverControls.h:139
	Matrix44Affine mTransform;

	// BrnVehicleDriverControls.h:140
	Vector3 mLinearVelocity;

	// BrnVehicleDriverControls.h:141
	Vector3 mAngularVelocity;

	// BrnVehicleDriverControls.h:142
	float32_t mfCatchupTime;

	// BrnVehicleDriverControls.h:143
	EActiveRaceCarIndex meCrasherRaceCarIndex;

	// BrnVehicleDriverControls.h:144
	bool mbSnap;

	// BrnVehicleDriverControls.h:145
	bool mbCrash;

public:
	// BrnVehicleDriverControls.h:129
	void BrnNetworkDriverControls();

	// BrnVehicleDriverControls.h:133
	void Clear();

	// BrnVehicleDriverControls.h:136
	void ResetType();

}

// BrnVehicleDriverControls.h:158
struct BrnPhysics::Vehicle::BrnAIDriverControls : public BrnPlayerDriverControls {
	// BrnVehicleDriverControls.h:178
	float32_t mfSpeedMatchSpeed;

	// BrnVehicleDriverControls.h:179
	bool mbDoSpeedMatch;

	// BrnVehicleDriverControls.h:180
	bool mbForceComeOutOfDrift;

	// BrnVehicleDriverControls.h:181
	bool mbSlamPlayer;

public:
	// BrnVehicleDriverControls.h:160
	void BrnAIDriverControls();

	// BrnVehicleDriverControls.h:164
	void Clear();

	// BrnVehicleDriverControls.h:167
	void ResetType();

	// BrnVehicleDriverControls.h:171
	void operator=(const BrnPlayerDriverControls &);

}

// BrnVehicleDriverControls.h:195
struct BrnPhysics::Vehicle::BrnTrafficDriverControls : public BrnPlayerDriverControls {
public:
	// BrnVehicleDriverControls.h:198
	void BrnTrafficDriverControls();

	// BrnVehicleDriverControls.h:202
	void Clear();

	// BrnVehicleDriverControls.h:205
	void ResetType();

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnVehicleDriverControls.h:40
		enum E_DRIVER_TYPE {
			E_DRIVER_TYPE_PLAYER = 0,
			E_DRIVER_TYPE_AI = 1,
			E_DRIVER_TYPE_NETWORK = 2,
			E_DRIVER_TYPE_TRAFFIC = 3,
			E_NUM_E_DRIVER_TYPE_EVENTS = 4,
		}

		// BrnVehicleDriverControls.h:34
		const float32_t KF_STICK_AFTERTOUCH_MODIFIER;

	}

}

// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// BrnVehicleDriverControls.h:34
		const float32_t KF_STICK_AFTERTOUCH_MODIFIER;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnVehicleDriverControls.h:34
		const float32_t KF_STICK_AFTERTOUCH_MODIFIER;

	}

}

