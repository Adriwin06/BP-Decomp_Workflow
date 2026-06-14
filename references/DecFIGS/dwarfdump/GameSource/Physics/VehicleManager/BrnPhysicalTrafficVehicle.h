// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// Declaration
		struct PhysicalTrafficVehicle {
			// BrnPhysicalTrafficVehicle.h:58
			enum EPhysicalTrafficType {
				E_PHYSICAL_TRAFFIC_TYPE_FULL = 0,
				E_PHYSICAL_TRAFFIC_TYPE_SIMPLE = 1,
				E_PHYSICAL_TRAFFIC_TYPE_COUNT = 2,
			}

			// BrnPhysicalTrafficVehicle.h:66
			enum EArticulatedJointState {
				E_ARTICULATE_JOINT_NONE = 0,
				E_ARTICULATE_JOINT_ATTACHED = 1,
				E_ARTICULATE_JOINT_COUNT = 2,
			}

			// BrnPhysicalTrafficVehicle.h:74
			enum EArticulatedVehicleType {
				E_ARTICULATE_VEHICLE_NONE = 0,
				E_ARTICULATE_VEHICLE_CAB = 1,
				E_ARTICULATE_VEHICLE_TRAILER = 2,
				E_ARTICULATE_VEHICLE_COUNT = 3,
			}

		}

	}

}

// BrnPhysicalTrafficVehicle.h:54
struct BrnPhysics::Vehicle::PhysicalTrafficVehicle {
private:
	// BrnPhysicalTrafficVehicle.h:301
	Vector3 mArticulationPointLocal;

	// BrnPhysicalTrafficVehicle.h:302
	CgsID mCgsID;

	// BrnPhysicalTrafficVehicle.h:303
	float32_t mfTimeSinceCheckNotify;

	// BrnPhysicalTrafficVehicle.h:304
	BrnPhysics::Vehicle::SimpleVehiclePhysics * mpVehicleBody;

	// BrnPhysicalTrafficVehicle.h:305
	BrnPhysics::Vehicle::ETrafficType mePhysicalTrafficState;

	// BrnPhysicalTrafficVehicle.h:306
	BrnPhysics::Vehicle::PhysicalTrafficVehicle::EArticulatedVehicleType meArticulatedVehicleType;

	// BrnPhysicalTrafficVehicle.h:307
	BrnPhysics::Vehicle::PhysicalTrafficVehicle::EArticulatedJointState meArticulatedJointState;

	// BrnPhysicalTrafficVehicle.h:308
	int32_t miJointIndex;

	// BrnPhysicalTrafficVehicle.h:309
	bool mbRammed;

	// BrnPhysicalTrafficVehicle.h:310
	uint8_t mu8PhysicsPoolIndex;

	// BrnPhysicalTrafficVehicle.h:311
	uint8_t mu8PhysicalType;

	// BrnPhysicalTrafficVehicle.h:312
	int8_t miCheckOwner;

	// BrnPhysicalTrafficVehicle.h:313
	bool mbUsingBoxWithWorld;

	// BrnPhysicalTrafficVehicle.h:316
	extern bool smbAllowFreezing;

public:
	// BrnPhysicalTrafficVehicle.h:84
	void Construct();

	// BrnPhysicalTrafficVehicle.h:87
	bool Prepare();

	// BrnPhysicalTrafficVehicle.h:90
	bool Release();

	// BrnPhysicalTrafficVehicle.h:93
	void Destruct();

	// BrnPhysicalTrafficVehicle.h:100
	void SetArticulated(const CreatePhysicalTrafficEvent &, BrnPhysics::Vehicle::PhysicalTrafficVehicle::EArticulatedVehicleType);

	// BrnPhysicalTrafficVehicle.h:104
	bool HasNonBrokenJoint() const;

	// BrnPhysicalTrafficVehicle.h:108
	int32_t GetArticulatedJointIndex() const;

	// BrnPhysicalTrafficVehicle.h:114
	void OnChecked(EActiveRaceCarIndex, const BrnPhysics::Vehicle::RaceCarPhysics *, Vector3);

	// BrnPhysicalTrafficVehicle.h:122
	bool PreparePhysical(const CreatePhysicalTrafficEvent *, VehicleAttribs *, const StreamedDeformationSpec *, const rw::math::vpu::Vector3 *, const float32_t *);

	// BrnPhysicalTrafficVehicle.h:132
	void Update(float32_t, float32_t, const rw::math::vpu::Matrix44Affine *, const BrnPlayerDriverControls *, bool, bool, bool);

	// BrnPhysicalTrafficVehicle.h:135
	void Reset();

	// BrnPhysicalTrafficVehicle.h:139
	void ReadFromRenderware(const RigidBody *);

	// BrnPhysicalTrafficVehicle.h:143
	void ReadPropertiesFromRenderware(const RigidBody *);

	// BrnPhysicalTrafficVehicle.h:148
	void MakeFullyPhysical(BrnPhysics::Vehicle::TrafficPhysics *, int32_t);

	// BrnPhysicalTrafficVehicle.h:153
	void MakeSimple(BrnPhysics::Vehicle::SimpleVehiclePhysics *, int32_t);

	// BrnPhysicalTrafficVehicle.h:156
	uint8_t GetPhysicsPoolIndex() const;

	// BrnPhysicalTrafficVehicle.h:164
	BrnPhysics::Vehicle::PhysicalTrafficVehicle::EPhysicalTrafficType GetPhysicalTrafficType();

	// BrnPhysicalTrafficVehicle.h:168
	BrnPhysics::Vehicle::PhysicalTrafficVehicle::EPhysicalTrafficType GetPhysicalTrafficType() const;

	// BrnPhysicalTrafficVehicle.h:172
	BrnPhysics::Vehicle::SimpleVehiclePhysics * GetPhysics();

	// BrnPhysicalTrafficVehicle.h:176
	const BrnPhysics::Vehicle::SimpleVehiclePhysics * GetPhysics() const;

	// BrnPhysicalTrafficVehicle.h:179
	BrnPhysics::Vehicle::ETrafficType GetPhysicalTrafficState() const;

	// BrnPhysicalTrafficVehicle.h:183
	void SetPhysicalTrafficState(BrnPhysics::Vehicle::ETrafficType);

	// BrnPhysicalTrafficVehicle.h:187
	BrnPhysics::Vehicle::TrafficPhysics * GetFullTrafficPhysics();

	// BrnPhysicalTrafficVehicle.h:191
	const BrnPhysics::Vehicle::TrafficPhysics * GetFullTrafficPhysics() const;

	// BrnPhysicalTrafficVehicle.h:196
	void UpdatePostSimulation(float32_t);

	// BrnPhysicalTrafficVehicle.h:205
	void AddAirRam(uint32_t, float32_t, float32_t, Vector3, Vector3, float32_t);

	// BrnPhysicalTrafficVehicle.h:210
	void AddSpin(Vector3, float32_t);

	// BrnPhysicalTrafficVehicle.h:216
	void SetRammed();

	// BrnPhysicalTrafficVehicle.h:219
	bool IsRammed() const;

	// BrnPhysicalTrafficVehicle.h:223
	void SetCheckOwner(EActiveRaceCarIndex);

	// BrnPhysicalTrafficVehicle.h:226
	EActiveRaceCarIndex GetCheckOwner() const;

	// BrnPhysicalTrafficVehicle.h:229
	bool HasBeenChecked() const;

	// BrnPhysicalTrafficVehicle.h:233
	bool HasBeenCheckedVeryRecently() const;

	// BrnPhysicalTrafficVehicle.h:237
	float32_t GetTimeSinceChecked() const;

	// BrnPhysicalTrafficVehicle.h:241
	CgsID GetCgsID() const;

	// BrnPhysicalTrafficVehicle.h:248
	void ClearArticulatedState();

	// BrnPhysicalTrafficVehicle.h:252
	bool IsCab() const;

	// BrnPhysicalTrafficVehicle.h:257
	void SetArticulatedJointIndex(int32_t);

	// BrnPhysicalTrafficVehicle.h:261
	BrnPhysics::Vehicle::PhysicalTrafficVehicle::EArticulatedVehicleType GetArticulatedVehicleType() const;

	// BrnPhysicalTrafficVehicle.h:265
	BrnPhysics::Vehicle::PhysicalTrafficVehicle::EArticulatedJointState GetArticulatedJointState() const;

	// BrnPhysicalTrafficVehicle.h:269
	void OnArticulatedJointBroken();

	// BrnPhysicalTrafficVehicle.h:273
	Vector3 GetArticulationPointWorldSpace() const;

	// BrnPhysicalTrafficVehicle.h:277
	Vector3 GetArticulationPointLocalSpace() const;

	// BrnPhysicalTrafficVehicle.h:280
	bool IsSimple() const;

	// BrnPhysicalTrafficVehicle.h:283
	bool IsFullyPhysical() const;

	// BrnPhysicalTrafficVehicle.h:287
	void SetUsingBoxWithWorld(bool);

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// Declaration
		struct PhysicalTrafficVehicle {
			// BrnPhysicalTrafficVehicle.h:58
			enum EPhysicalTrafficType {
				E_PHYSICAL_TRAFFIC_TYPE_FULL = 0,
				E_PHYSICAL_TRAFFIC_TYPE_SIMPLE = 1,
				E_PHYSICAL_TRAFFIC_TYPE_COUNT = 2,
			}

			// BrnPhysicalTrafficVehicle.h:66
			enum EArticulatedJointState {
				E_ARTICULATE_JOINT_NONE = 0,
				E_ARTICULATE_JOINT_ATTACHED = 1,
				E_ARTICULATE_JOINT_COUNT = 2,
			}

			// BrnPhysicalTrafficVehicle.h:74
			enum EArticulatedVehicleType {
				E_ARTICULATE_VEHICLE_NONE = 0,
				E_ARTICULATE_VEHICLE_CAB = 1,
				E_ARTICULATE_VEHICLE_TRAILER = 2,
				E_ARTICULATE_VEHICLE_COUNT = 3,
			}

		}

	}

}

// BrnPhysicalTrafficVehicle.h:54
struct BrnPhysics::Vehicle::PhysicalTrafficVehicle {
private:
	// BrnPhysicalTrafficVehicle.h:301
	Vector3 mArticulationPointLocal;

	// BrnPhysicalTrafficVehicle.h:302
	CgsID mCgsID;

	// BrnPhysicalTrafficVehicle.h:303
	float32_t mfTimeSinceCheckNotify;

	// BrnPhysicalTrafficVehicle.h:304
	BrnPhysics::Vehicle::SimpleVehiclePhysics * mpVehicleBody;

	// BrnPhysicalTrafficVehicle.h:305
	BrnPhysics::Vehicle::ETrafficType mePhysicalTrafficState;

	// BrnPhysicalTrafficVehicle.h:306
	BrnPhysics::Vehicle::PhysicalTrafficVehicle::EArticulatedVehicleType meArticulatedVehicleType;

	// BrnPhysicalTrafficVehicle.h:307
	BrnPhysics::Vehicle::PhysicalTrafficVehicle::EArticulatedJointState meArticulatedJointState;

	// BrnPhysicalTrafficVehicle.h:308
	int32_t miJointIndex;

	// BrnPhysicalTrafficVehicle.h:309
	bool mbRammed;

	// BrnPhysicalTrafficVehicle.h:310
	uint8_t mu8PhysicsPoolIndex;

	// BrnPhysicalTrafficVehicle.h:311
	uint8_t mu8PhysicalType;

	// BrnPhysicalTrafficVehicle.h:312
	int8_t miCheckOwner;

	// BrnPhysicalTrafficVehicle.h:313
	bool mbUsingBoxWithWorld;

	// BrnPhysicalTrafficVehicle.h:316
	extern bool smbAllowFreezing;

public:
	// BrnPhysicalTrafficVehicle.h:84
	void Construct();

	// BrnPhysicalTrafficVehicle.h:87
	bool Prepare();

	// BrnPhysicalTrafficVehicle.h:90
	bool Release();

	// BrnPhysicalTrafficVehicle.h:93
	void Destruct();

	// BrnPhysicalTrafficVehicle.h:100
	void SetArticulated(const CreatePhysicalTrafficEvent &, BrnPhysics::Vehicle::PhysicalTrafficVehicle::EArticulatedVehicleType);

	// BrnPhysicalTrafficVehicle.h:104
	bool HasNonBrokenJoint() const;

	// BrnPhysicalTrafficVehicle.h:108
	int32_t GetArticulatedJointIndex() const;

	// BrnPhysicalTrafficVehicle.h:114
	void OnChecked(EActiveRaceCarIndex, const BrnPhysics::Vehicle::RaceCarPhysics *, Vector3);

	// BrnPhysicalTrafficVehicle.h:122
	bool PreparePhysical(const CreatePhysicalTrafficEvent *, VehicleAttribs *, const BrnPhysics::Deformation::StreamedDeformationSpec *, const rw::math::vpu::Vector3 *, const float32_t *);

	// BrnPhysicalTrafficVehicle.h:132
	void Update(float32_t, float32_t, const rw::math::vpu::Matrix44Affine *, const BrnPlayerDriverControls *, bool, bool, bool);

	// BrnPhysicalTrafficVehicle.h:135
	void Reset();

	// BrnPhysicalTrafficVehicle.h:139
	void ReadFromRenderware(const RigidBody *);

	// BrnPhysicalTrafficVehicle.h:143
	void ReadPropertiesFromRenderware(const RigidBody *);

	// BrnPhysicalTrafficVehicle.h:148
	void MakeFullyPhysical(BrnPhysics::Vehicle::TrafficPhysics *, int32_t);

	// BrnPhysicalTrafficVehicle.h:153
	void MakeSimple(BrnPhysics::Vehicle::SimpleVehiclePhysics *, int32_t);

	// BrnPhysicalTrafficVehicle.h:156
	uint8_t GetPhysicsPoolIndex() const;

	// BrnPhysicalTrafficVehicle.h:164
	BrnPhysics::Vehicle::PhysicalTrafficVehicle::EPhysicalTrafficType GetPhysicalTrafficType();

	// BrnPhysicalTrafficVehicle.h:168
	BrnPhysics::Vehicle::PhysicalTrafficVehicle::EPhysicalTrafficType GetPhysicalTrafficType() const;

	// BrnPhysicalTrafficVehicle.h:172
	BrnPhysics::Vehicle::SimpleVehiclePhysics * GetPhysics();

	// BrnPhysicalTrafficVehicle.h:176
	const BrnPhysics::Vehicle::SimpleVehiclePhysics * GetPhysics() const;

	// BrnPhysicalTrafficVehicle.h:179
	BrnPhysics::Vehicle::ETrafficType GetPhysicalTrafficState() const;

	// BrnPhysicalTrafficVehicle.h:183
	void SetPhysicalTrafficState(BrnPhysics::Vehicle::ETrafficType);

	// BrnPhysicalTrafficVehicle.h:187
	BrnPhysics::Vehicle::TrafficPhysics * GetFullTrafficPhysics();

	// BrnPhysicalTrafficVehicle.h:191
	const BrnPhysics::Vehicle::TrafficPhysics * GetFullTrafficPhysics() const;

	// BrnPhysicalTrafficVehicle.h:196
	void UpdatePostSimulation(float32_t);

	// BrnPhysicalTrafficVehicle.h:205
	void AddAirRam(uint32_t, float32_t, float32_t, Vector3, Vector3, float32_t);

	// BrnPhysicalTrafficVehicle.h:210
	void AddSpin(Vector3, float32_t);

	// BrnPhysicalTrafficVehicle.h:216
	void SetRammed();

	// BrnPhysicalTrafficVehicle.h:219
	bool IsRammed() const;

	// BrnPhysicalTrafficVehicle.h:223
	void SetCheckOwner(EActiveRaceCarIndex);

	// BrnPhysicalTrafficVehicle.h:226
	EActiveRaceCarIndex GetCheckOwner() const;

	// BrnPhysicalTrafficVehicle.h:229
	bool HasBeenChecked() const;

	// BrnPhysicalTrafficVehicle.h:233
	bool HasBeenCheckedVeryRecently() const;

	// BrnPhysicalTrafficVehicle.h:237
	float32_t GetTimeSinceChecked() const;

	// BrnPhysicalTrafficVehicle.h:241
	CgsID GetCgsID() const;

	// BrnPhysicalTrafficVehicle.h:248
	void ClearArticulatedState();

	// BrnPhysicalTrafficVehicle.h:252
	bool IsCab() const;

	// BrnPhysicalTrafficVehicle.h:257
	void SetArticulatedJointIndex(int32_t);

	// BrnPhysicalTrafficVehicle.h:261
	BrnPhysics::Vehicle::PhysicalTrafficVehicle::EArticulatedVehicleType GetArticulatedVehicleType() const;

	// BrnPhysicalTrafficVehicle.h:265
	BrnPhysics::Vehicle::PhysicalTrafficVehicle::EArticulatedJointState GetArticulatedJointState() const;

	// BrnPhysicalTrafficVehicle.h:269
	void OnArticulatedJointBroken();

	// BrnPhysicalTrafficVehicle.h:273
	Vector3 GetArticulationPointWorldSpace() const;

	// BrnPhysicalTrafficVehicle.h:277
	Vector3 GetArticulationPointLocalSpace() const;

	// BrnPhysicalTrafficVehicle.h:280
	bool IsSimple() const;

	// BrnPhysicalTrafficVehicle.h:283
	bool IsFullyPhysical() const;

	// BrnPhysicalTrafficVehicle.h:287
	void SetUsingBoxWithWorld(bool);

}

