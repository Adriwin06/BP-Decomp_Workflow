// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct VehicleTracker {
		// BrnDirectorVehicleTracker.h:118
		enum ECrashType {
			E_CRASH_NOT_CRASHING = 0,
			E_CRASH_LOW_ENERGY = 1,
			E_CRASH_NORMAL = 2,
			E_CRASH_HIGH_ENERGY = 3,
		}

	}

	// BrnDirectorVehicleTracker.h:31
	namespace DirectorIO {
		struct InputBuffer;

		struct ControllerInfo;

		struct OutputBuffer;

		struct SceneQueryOutputBuffer;

		struct SceneQueryInputBuffer;

	}

}

// BrnDirectorVehicleTracker.h:49
struct BrnDirector::VehicleTracker {
private:
	// BrnDirectorVehicleTracker.h:134
	DataJournal<rw::math::vpu::Vector3,8> mPositionJournal;

	// BrnDirectorVehicleTracker.h:135
	DataJournal<rw::math::vpu::Vector3,8> mLinearVelocityJournal;

	// BrnDirectorVehicleTracker.h:136
	DataJournal<float32_t,8> mMphJournal;

	// BrnDirectorVehicleTracker.h:137
	DataJournal<float32_t,8> mTimestepJournal;

	// BrnDirectorVehicleTracker.h:139
	CarScoreData mScoreData;

	// BrnDirectorVehicleTracker.h:141
	BrnDirector::VehicleTracker::ECrashType meCrashType;

	// BrnDirectorVehicleTracker.h:143
	float32_t mfRaceEndEffectAmount;

	// BrnDirectorVehicleTracker.h:145
	int32_t miVehicleIndex;

	// BrnDirectorVehicleTracker.h:146
	bool mbFirstFrame;

	// BrnDirectorVehicleTracker.h:147
	bool mbIsFirstFrameOfCrash;

	// BrnDirectorVehicleTracker.h:149
	extern float32_t sfMinSpeedBelowMaxMPHForNormalCrash;

	// BrnDirectorVehicleTracker.h:150
	extern float32_t sfMinSpeedBelowMaxMPHForHighSpeedCrash;

	// BrnDirectorVehicleTracker.h:152
	extern float32_t KF_DISTANCE_TO_FINISH_BEFORE_FULL_EFFECTS;

	// BrnDirectorVehicleTracker.h:153
	extern float32_t KF_DISTANCE_TO_FINISH_BEFORE_EFFECTS;

	// BrnDirectorVehicleTracker.h:154
	extern float32_t KF_RACE_END_EFFECT_BLEND_FACTOR;

public:
	// BrnDirectorVehicleTracker.h:62
	void Construct();

	// BrnDirectorVehicleTracker.h:69
	void Update(const GameState *, const BrnDirector::DirectorIO::InputBuffer *, EActiveRaceCarIndex, bool);

	// BrnDirectorVehicleTracker.h:72
	float32_t GetMPHLastFrame() const;

	// BrnDirectorVehicleTracker.h:75
	Vector3 GetLinearVelocityLastFrame() const;

	// BrnDirectorVehicleTracker.h:79
	void SetVehicleIndex(int32_t);

	// BrnDirectorVehicleTracker.h:82
	const DataJournal<rw::math::vpu::Vector3,8> & GetLinearVelocityJournal() const;

	// BrnDirectorVehicleTracker.h:85
	const DataJournal<rw::math::vpu::Vector3,8> & GetPositionJournal() const;

	// BrnDirectorVehicleTracker.h:88
	const DataJournal<float32_t,8> & GetMphJournal() const;

	// BrnDirectorVehicleTracker.h:94
	Vector3 GetEstimatedPositionAtTimeDelta(float32_t) const;

	// BrnDirectorVehicleTracker.h:97
	const rw::math::vpu::Vector3 GetImplicitVelocity() const;

	// BrnDirectorVehicleTracker.h:100
	const rw::math::vpu::Vector3 GetImplicitAcceleration() const;

	// BrnDirectorVehicleTracker.h:103
	bool IsFirstFrameOfCrash() const;

	// BrnDirectorVehicleTracker.h:107
	const float32_t GetRaceEndEffectAmount() const;

	// BrnDirectorVehicleTracker.h:111
	const float32_t GetDistanceToFinish() const;

	// BrnDirectorVehicleTracker.h:115
	const uint32_t GetRacePosition() const;

	// BrnDirectorVehicleTracker.h:127
	const BrnDirector::VehicleTracker::ECrashType GetCrashType() const;

}

// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct VehicleTracker {
		// BrnDirectorVehicleTracker.h:118
		enum ECrashType {
			E_CRASH_NOT_CRASHING = 0,
			E_CRASH_LOW_ENERGY = 1,
			E_CRASH_NORMAL = 2,
			E_CRASH_HIGH_ENERGY = 3,
		}

	}

	// BrnDirectorVehicleTracker.h:31
	namespace DirectorIO {
		struct InputBuffer;

		struct ControllerInfo;

		struct OutputBuffer;

	}

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct VehicleTracker {
		// BrnDirectorVehicleTracker.h:118
		enum ECrashType {
			E_CRASH_NOT_CRASHING = 0,
			E_CRASH_LOW_ENERGY = 1,
			E_CRASH_NORMAL = 2,
			E_CRASH_HIGH_ENERGY = 3,
		}

	}

}

// BrnDirectorVehicleTracker.h:49
struct BrnDirector::VehicleTracker {
private:
	// BrnDirectorVehicleTracker.h:134
	DataJournal<rw::math::vpu::Vector3,8> mPositionJournal;

	// BrnDirectorVehicleTracker.h:135
	DataJournal<rw::math::vpu::Vector3,8> mLinearVelocityJournal;

	// BrnDirectorVehicleTracker.h:136
	DataJournal<float32_t,8> mMphJournal;

	// BrnDirectorVehicleTracker.h:137
	DataJournal<float32_t,8> mTimestepJournal;

	// BrnDirectorVehicleTracker.h:139
	CarScoreData mScoreData;

	// BrnDirectorVehicleTracker.h:141
	BrnDirector::VehicleTracker::ECrashType meCrashType;

	// BrnDirectorVehicleTracker.h:143
	float32_t mfRaceEndEffectAmount;

	// BrnDirectorVehicleTracker.h:145
	int32_t miVehicleIndex;

	// BrnDirectorVehicleTracker.h:146
	bool mbFirstFrame;

	// BrnDirectorVehicleTracker.h:147
	bool mbIsFirstFrameOfCrash;

	// BrnDirectorVehicleTracker.h:149
	extern float32_t sfMinSpeedBelowMaxMPHForNormalCrash;

	// BrnDirectorVehicleTracker.h:150
	extern float32_t sfMinSpeedBelowMaxMPHForHighSpeedCrash;

	// BrnDirectorVehicleTracker.h:152
	extern float32_t KF_DISTANCE_TO_FINISH_BEFORE_FULL_EFFECTS;

	// BrnDirectorVehicleTracker.h:153
	extern float32_t KF_DISTANCE_TO_FINISH_BEFORE_EFFECTS;

	// BrnDirectorVehicleTracker.h:154
	extern float32_t KF_RACE_END_EFFECT_BLEND_FACTOR;

public:
	// BrnDirectorVehicleTracker.h:62
	void Construct();

	// BrnDirectorVehicleTracker.h:69
	void Update(const GameState *, const InputBuffer *, EActiveRaceCarIndex, bool);

	// BrnDirectorVehicleTracker.h:72
	float32_t GetMPHLastFrame() const;

	// BrnDirectorVehicleTracker.h:75
	Vector3 GetLinearVelocityLastFrame() const;

	// BrnDirectorVehicleTracker.h:79
	void SetVehicleIndex(int32_t);

	// BrnDirectorVehicleTracker.h:82
	const DataJournal<rw::math::vpu::Vector3,8> & GetLinearVelocityJournal() const;

	// BrnDirectorVehicleTracker.h:85
	const DataJournal<rw::math::vpu::Vector3,8> & GetPositionJournal() const;

	// BrnDirectorVehicleTracker.h:88
	const DataJournal<float32_t,8> & GetMphJournal() const;

	// BrnDirectorVehicleTracker.h:94
	Vector3 GetEstimatedPositionAtTimeDelta(float32_t) const;

	// BrnDirectorVehicleTracker.h:97
	const rw::math::vpu::Vector3 GetImplicitVelocity() const;

	// BrnDirectorVehicleTracker.h:100
	const rw::math::vpu::Vector3 GetImplicitAcceleration() const;

	// BrnDirectorVehicleTracker.h:103
	bool IsFirstFrameOfCrash() const;

	// BrnDirectorVehicleTracker.h:107
	const float32_t GetRaceEndEffectAmount() const;

	// BrnDirectorVehicleTracker.h:111
	const float32_t GetDistanceToFinish() const;

	// BrnDirectorVehicleTracker.h:115
	const uint32_t GetRacePosition() const;

	// BrnDirectorVehicleTracker.h:127
	const BrnDirector::VehicleTracker::ECrashType GetCrashType() const;

}

