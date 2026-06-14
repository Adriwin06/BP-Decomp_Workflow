// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// Engine.h:33
		const float32_t KR_RADS_TO_RPM;

		// Engine.h:34
		const float32_t KR_RPM_TO_RADS;

		// Engine.h:35
		const float32_t KF_IDLE_RPM;

		// Engine.h:36
		const VecFloat KVR_RADS_TO_RPM;

		// Engine.h:37
		const VecFloat KVR_RPM_TO_RADS;

		// Engine.h:38
		const VecFloat KVF_IDLE_RPM;

	}

}

// Engine.h:55
extern const uint8_t ku8ReverseGear;

// Engine.h:57
extern const uint8_t ku8HighestGear = 5;

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// Engine.h:33
		const float32_t KR_RADS_TO_RPM;

		// Engine.h:34
		const float32_t KR_RPM_TO_RADS;

		// Engine.h:35
		const float32_t KF_IDLE_RPM;

		// Engine.h:36
		const VecFloat KVR_RADS_TO_RPM;

		// Engine.h:37
		const VecFloat KVR_RPM_TO_RADS;

		// Engine.h:38
		const VecFloat KVF_IDLE_RPM;

	}

}

// Engine.h:53
struct BrnPhysics::Vehicle::Engine {
	// Engine.h:55
	extern const uint8_t ku8ReverseGear;

	// Engine.h:56
	extern const uint8_t ku8FirstGear = 1;

	// Engine.h:57
	extern const uint8_t ku8HighestGear = 5;

private:
	// Engine.h:158
	BrnPhysics::Vehicle::VehicleAttribs::EngineAttribs mAttribs;

	// Engine.h:159
	Vector4 mvEngineDrive_ReactionTorque_FlyWheelAngularVelocity_ClutchDelay;

	// Engine.h:160
	Vector4 mvClutchFactor_RPM_CurrentGearChangeTime;

	// Engine.h:169
	uint32_t mu8CurrentGear;

	// Engine.h:170
	bool mbAllowToChangeUpGear;

	// Engine.h:171
	bool mbAllowToChangeDownGear;

public:
	// Engine.h:61
	void Construct();

	// Engine.h:64
	void Destruct();

	// Engine.h:67
	bool Prepare(const BrnPhysics::Vehicle::VehicleAttribs::EngineAttribs *);

	// Engine.h:70
	void Release();

	// Engine.h:74
	void SwitchAttribs(const BrnPhysics::Vehicle::VehicleAttribs::EngineAttribs *);

	// Engine.h:78
	void SetGear(uint8_t);

	// Engine.h:83
	int32_t GetGear() const;

	// Engine.h:87
	VecFloat GetEngineTorque() const;

	// Engine.h:91
	VecFloat GetRPM() const;

	// Engine.h:96
	void AllowToChangeUpGear(bool);

	// Engine.h:100
	void AllowToChangeDownGear(bool);

	// Engine.h:104
	bool CanChangeUpGear();

	// Engine.h:108
	bool CanChangeDownGear();

	// Engine.h:121
	// Declaration
	void Update(VecFloat, VecFloat, VecFloat, bool, VecFloat, VecFloat, bool, VecFloat, VecFloat) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// Engine.cpp:248
		using namespace rw::math::vpu;

		// Engine.cpp:277
		using namespace CgsDev::Message;

	}

	// Engine.h:126
	void Reset(VecFloat);

	// Engine.h:129
	const BrnPhysics::Vehicle::VehicleAttribs::EngineAttribs & GetEngineAttributes();

	// Engine.h:132
	VecFloat GetDownshiftRPM() const;

	// Engine.h:136
	VecFloat GetMaxWheelAngularVelocity() const;

	// Engine.h:143
	void ApplyReactionTorque(VecFloat);

	// Engine.h:147
	void ForceClutch(VecFloat);

	// Engine.h:153
	VecFloat GetMaxTorque(VecFloat, int32_t) const;

private:
	// Engine.h:177
	uint8_t ComputeGear(VecFloat);

	// Engine.h:183
	VecFloat ComputeRpm(VecFloat, uint8_t);

	// Engine.h:186
	VecFloat GetEngineDrive() const;

	// Engine.h:190
	VecFloat GetReactionTorque() const;

	// Engine.h:194
	VecFloat GetFlyWheelAngularVelocity() const;

	// Engine.h:198
	VecFloat GetClutchDelay() const;

	// Engine.h:202
	VecFloat GetClutchFactor() const;

	// Engine.h:206
	VecFloat GetCurrentGearChangeTime() const;

	// Engine.h:210
	void SetEngineDrive(VecFloat);

	// Engine.h:214
	void SetReactionTorque(VecFloat);

	// Engine.h:218
	void SetFlyWheelAngularVelocity(VecFloat);

	// Engine.h:222
	void SetClutchDelay(VecFloat);

	// Engine.h:226
	void SetClutchFactor(VecFloat);

	// Engine.h:230
	void SetRPM(VecFloat);

	// Engine.h:234
	void SetCurrentGearChangeTime(VecFloat);

}

// Engine.h:56
extern const uint8_t ku8FirstGear = 1;

// Engine.h:53
struct BrnPhysics::Vehicle::Engine {
	// Engine.h:55
	extern const uint8_t ku8ReverseGear;

	// Engine.h:56
	extern const uint8_t ku8FirstGear = 1;

	// Engine.h:57
	extern const uint8_t ku8HighestGear = 5;

private:
	// Engine.h:158
	BrnPhysics::Vehicle::VehicleAttribs::EngineAttribs mAttribs;

	// Engine.h:159
	Vector4 mvEngineDrive_ReactionTorque_FlyWheelAngularVelocity_ClutchDelay;

	// Engine.h:160
	Vector4 mvClutchFactor_RPM_CurrentGearChangeTime;

	// Engine.h:169
	uint32_t mu8CurrentGear;

	// Engine.h:170
	bool mbAllowToChangeUpGear;

	// Engine.h:171
	bool mbAllowToChangeDownGear;

public:
	// Engine.h:61
	void Construct();

	// Engine.h:64
	void Destruct();

	// Engine.h:67
	bool Prepare(const BrnPhysics::Vehicle::VehicleAttribs::EngineAttribs *);

	// Engine.h:70
	void Release();

	// Engine.h:74
	void SwitchAttribs(const BrnPhysics::Vehicle::VehicleAttribs::EngineAttribs *);

	// Engine.h:78
	void SetGear(uint8_t);

	// Engine.h:83
	int32_t GetGear() const;

	// Engine.h:87
	VecFloat GetEngineTorque() const;

	// Engine.h:91
	VecFloat GetRPM() const;

	// Engine.h:96
	void AllowToChangeUpGear(bool);

	// Engine.h:100
	void AllowToChangeDownGear(bool);

	// Engine.h:104
	bool CanChangeUpGear();

	// Engine.h:108
	bool CanChangeDownGear();

	// Engine.h:121
	void Update(VecFloat, VecFloat, VecFloat, bool, VecFloat, VecFloat, bool, VecFloat, VecFloat);

	// Engine.h:126
	void Reset(VecFloat);

	// Engine.h:129
	const BrnPhysics::Vehicle::VehicleAttribs::EngineAttribs & GetEngineAttributes();

	// Engine.h:132
	VecFloat GetDownshiftRPM() const;

	// Engine.h:136
	VecFloat GetMaxWheelAngularVelocity() const;

	// Engine.h:143
	void ApplyReactionTorque(VecFloat);

	// Engine.h:147
	void ForceClutch(VecFloat);

	// Engine.h:153
	VecFloat GetMaxTorque(VecFloat, int32_t) const;

private:
	// Engine.h:177
	uint8_t ComputeGear(VecFloat);

	// Engine.h:183
	VecFloat ComputeRpm(VecFloat, uint8_t);

	// Engine.h:186
	VecFloat GetEngineDrive() const;

	// Engine.h:190
	VecFloat GetReactionTorque() const;

	// Engine.h:194
	VecFloat GetFlyWheelAngularVelocity() const;

	// Engine.h:198
	VecFloat GetClutchDelay() const;

	// Engine.h:202
	VecFloat GetClutchFactor() const;

	// Engine.h:206
	VecFloat GetCurrentGearChangeTime() const;

	// Engine.h:210
	void SetEngineDrive(VecFloat);

	// Engine.h:214
	void SetReactionTorque(VecFloat);

	// Engine.h:218
	void SetFlyWheelAngularVelocity(VecFloat);

	// Engine.h:222
	void SetClutchDelay(VecFloat);

	// Engine.h:226
	void SetClutchFactor(VecFloat);

	// Engine.h:230
	void SetRPM(VecFloat);

	// Engine.h:234
	void SetCurrentGearChangeTime(VecFloat);

}

