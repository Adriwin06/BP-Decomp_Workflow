// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct MomentHardStop {
		// BrnMomentHardStop.h:111
		struct Parameters : public BrnDirector::Moment::Parameters {
			// BrnMomentHardStop.h:117
			float32_t mfDuration;

			// BrnMomentHardStop.h:118
			float32_t mfSpeedDiffThreshold;

		public:
			// BrnMomentHardStop.h:115
			void Construct();

		}

	}

}

// BrnMomentHardStop.h:35
struct BrnDirector::MomentHardStop : public BrnDirector::Moment {
private:
	// BrnMomentHardStop.h:72
	BehaviourHandle<BrnDirector::Camera::Behaviour> mRigCameraHandleA;

	// BrnMomentHardStop.h:73
	BehaviourHandle<BrnDirector::Camera::Behaviour> mRigCameraHandleB;

	// BrnMomentHardStop.h:75
	BrnDirector::Camera::Camera::ShotSelectionInfo mShotASelectionInfo;

	// BrnMomentHardStop.h:76
	BrnDirector::Camera::Camera::ShotSelectionInfo mShotBSelectionInfo;

	// BrnMomentHardStop.h:83
	const BrnDirector::MomentHardStop::Parameters * mpParameters;

	// BrnMomentHardStop.h:84
	float32_t mfRunningTime;

	// BrnMomentHardStop.h:86
	BrnDirector::VehicleTracker::ECrashType meCrashType;

	// BrnMomentHardStop.cpp:29
	extern uint32_t KU_CRASHES_BEFORE_FORCE_ULTRA_SLOMO;

	// BrnMomentHardStop.cpp:31
	extern float32_t KF_ULTRA_SLOMO_TIMESTEP_MIN_SCALE;

	// BrnMomentHardStop.cpp:30
	extern float32_t KF_ULTRA_SLOMO_TIMESTEP_MAX_SCALE;

	// BrnMomentHardStop.h:92
	float32_t mfUltraSloMoTimestepScale;

	// BrnMomentHardStop.h:93
	uint32_t muHighEnergyWorldCrashCount;

	// BrnMomentHardStop.h:95
	bool mbForceUltraSloMo;

	// BrnMomentHardStop.h:96
	bool mbCrashingLastFrame;

	// BrnMomentHardStop.h:97
	bool mbFirstFrame;

	// BrnMomentHardStop.h:98
	bool mbReady;

	// BrnMomentHardStop.h:99
	bool mbUsingA;

	// BrnMomentHardStop.h:100
	uint32_t muNextShotIndex;

	// BrnMomentHardStop.h:101
	CrashAnalysis mCrashAnalysisUsedAtSelection;

public:
	void MomentHardStop(const MomentHardStop &);

	void MomentHardStop();

	// BrnMomentHardStop.cpp:49
	virtual void Construct();

	// BrnMomentHardStop.cpp:71
	virtual bool Prepare(BehaviourManager &);

	// BrnMomentHardStop.cpp:90
	// Declaration
	virtual void Update(float32_t, BehaviourManager &, const MomentSharedInfo &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMomentHardStop.cpp:98
		using namespace AttribSys::Enums;

	}

	// BrnMomentHardStop.cpp:397
	virtual bool Release();

	// BrnMomentHardStop.cpp:411
	virtual void Destruct();

	// BrnMomentHardStop.cpp:421
	virtual void SetParameters(const BrnDirector::Moment::Parameters *);

	// BrnMomentHardStop.cpp:457
	virtual const char * GetName() const;

private:
	// BrnMomentHardStop.cpp:440
	void SetupShot(BehaviourManager::BehaviourHandle<BrnDirector::Camera::Behaviour> *, const Attrib::RefSpec *);

	// BrnMomentHardStop.cpp:430
	virtual BrnDirector::Moment::EType GetInstanceType();

}

// BrnMomentHardStop.h:35
void BrnDirector::MomentHardStop::MomentHardStop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct MomentHardStop {
		// BrnMomentHardStop.h:111
		struct Parameters : public BrnDirector::Moment::Parameters {
			// BrnMomentHardStop.h:117
			float32_t mfDuration;

			// BrnMomentHardStop.h:118
			float32_t mfSpeedDiffThreshold;

		public:
			// BrnMomentHardStop.h:115
			void Construct();

		}

	}

}

