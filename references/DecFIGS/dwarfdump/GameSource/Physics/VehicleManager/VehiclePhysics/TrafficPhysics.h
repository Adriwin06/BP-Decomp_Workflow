// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// Declaration
		struct TrafficPhysics {
			// TrafficPhysics.h:108
			enum EFreakOutState {
				E_FREAK_OUT_STATE_OFF = 0,
				E_FREAK_OUT_STATE_INITIAL = 1,
				E_FREAK_OUT_STATE_TURN_AND_ROLL = 2,
				E_FREAK_OUT_STATE_SPIN_OUT = 3,
				E_NUM_FREAK_OUT_STATES = 4,
			}

		}

	}

}

// TrafficPhysics.h:56
struct BrnPhysics::Vehicle::TrafficPhysics : public BrnPhysics::Vehicle::VehiclePhysics {
private:
	// TrafficPhysics.h:117
	EntityId mOwnerID;

	// TrafficPhysics.h:118
	uint8_t mu8FreakOutState;

	// TrafficPhysics.h:119
	float32_t mfFreakOutDirection;

	// TrafficPhysics.h:120
	float32_t mfFreakOutTime;

	// TrafficPhysics.h:122
	Random mRandom;

public:
	// TrafficPhysics.cpp:69
	void Construct();

	// TrafficPhysics.cpp:89
	void Destruct();

	// TrafficPhysics.cpp:218
	virtual void Update(float32_t, float32_t, const rw::math::vpu::Matrix44Affine *, const BrnPlayerDriverControls *, bool, bool, bool);

	// TrafficPhysics.cpp:187
	void Release();

	// TrafficPhysics.cpp:113
	bool PreparePhysical(const CreatePhysicalTrafficEvent *, VehicleAttribs *, const AxisAlignedBox &, const StreamedDeformationSpec *, const rw::math::vpu::Vector3 *, const float32_t *);

	// TrafficPhysics.h:90
	bool IsFreakedOut() const;

	// TrafficPhysics.cpp:360
	void SetFreakedOut(float32_t, float32_t);

	// TrafficPhysics.cpp:405
	void OnChecked(Vector3);

	// TrafficPhysics.cpp:384
	void SetCrashingFromCheck(Vector3, VecFloat);

private:
	// TrafficPhysics.h:125
	BrnPhysics::Vehicle::TrafficPhysics::EFreakOutState GetFreakedOutState() const;

}

// TrafficPhysics.h:56
void BrnPhysics::Vehicle::TrafficPhysics::TrafficPhysics() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

