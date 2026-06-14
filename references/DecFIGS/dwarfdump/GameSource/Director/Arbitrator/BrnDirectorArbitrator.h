// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct Arbitrator {
		// BrnDirectorArbitrator.h:72
		enum EState {
			E_STATE_PREPARE = 0,
			E_STATE_PRE_NORMAL = 1,
			E_STATE_NORMAL = 2,
			E_STATE_CRASH_NAV = 3,
			E_STATE_CRASH_NAV_ICE_CAMERAS = 4,
			E_STATE_CHANGING_TO_ATTRACT_MODE = 5,
			E_STATE_ATTRACT_MODE = 6,
			E_STATE_FINAL_ELITE_SEQUENCE = 7,
			E_STATE_RENDER_METRICS = 8,
			E_STATE_RELEASE = 9,
		}

	}

}

// BrnDirectorArbitrator.h:55
struct BrnDirector::Arbitrator {
private:
	// BrnDirectorArbitrator.h:117
	BehaviourHandle<BrnDirector::Camera::BehaviourDebugOrbitPlayer> mDebugCameraOrbitPlayer;

	// BrnDirectorArbitrator.h:118
	BehaviourHandle<BrnDirector::Camera::BehaviourDebugFlyWorld> mDebugCameraFlyWorld;

	// BrnDirectorArbitrator.h:120
	BrnDirector::ArbStateTestbed mArbStateTestbed;

	// BrnDirectorArbitrator.h:121
	bool mbUseDebugFlyWorld;

	// BrnDirectorArbitrator.h:122
	bool mbUseDebugCameras;

	// BrnDirectorArbitrator.h:125
	ArbitratorStateContainer mStateContainer;

	// BrnDirectorArbitrator.h:126
	SharedCameraContainer mSharedCameraContainer;

	// BrnDirectorArbitrator.h:127
	BrnDirector::ArbStateCrashNav mArbStateCrashNav;

	// BrnDirectorArbitrator.h:128
	BrnDirector::ArbStateAttractMode mArbStateAttractMode;

	// BrnDirectorArbitrator.h:129
	BrnDirector::ArbStateRenderMetrics mArbStateRenderMetrics;

	// BrnDirectorArbitrator.h:131
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim> mFinalEliteCam;

	// BrnDirectorArbitrator.h:133
	float32_t mfTimeCycleCameraHeld;

	// BrnDirectorArbitrator.h:134
	BrnDirector::Arbitrator::EState meState;

	// BrnDirectorArbitrator.h:136
	bool mbStartOfGame;

	// BrnDirectorArbitrator.h:138
	bool mbDoAttractMode;

	// BrnDirectorArbitrator.h:140
	bool mbDoRenderMetrics;

	// BrnDirectorArbitrator.h:146
	bool mbWasDoingTrainingLastFrame;

	// BrnDirectorArbitrator.h:147
	float32_t mfSlomoFactor;

public:
	// BrnDirectorArbitrator.h:59
	void Construct();

	// BrnDirectorArbitrator.h:67
	void Update(bool, Camera &, BrnDirector::ArbStateSharedInfo &, bool, bool);

	// BrnDirectorArbitrator.h:70
	void Destruct();

	// BrnDirectorArbitrator.h:87
	bool IsDebugCamera();

	// BrnDirectorArbitrator.h:92
	void DebugCameraFlyWorldLookAt(Vector3, Vector3);

	// BrnDirectorArbitrator.h:95
	Matrix44Affine GetDebugFlyWorldTransform();

	// BrnDirectorArbitrator.h:98
	SharedCameraContainer & GetSharedCameras();

private:
	// BrnDirectorArbitrator.h:150
	const Camera & GetNormalCamera() const;

	// BrnDirectorArbitrator.h:153
	void CycleNormalCamera();

	// BrnDirectorArbitrator.h:160
	void UpdateCameraCycleControl(float32_t, bool, bool &, bool &);

	// BrnDirectorArbitrator.h:168
	void UpdateDebugCameras(Camera &, BehaviourManager &, bool, bool);

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct Arbitrator {
		// BrnDirectorArbitrator.h:72
		enum EState {
			E_STATE_PREPARE = 0,
			E_STATE_PRE_NORMAL = 1,
			E_STATE_NORMAL = 2,
			E_STATE_CRASH_NAV = 3,
			E_STATE_CRASH_NAV_ICE_CAMERAS = 4,
			E_STATE_CHANGING_TO_ATTRACT_MODE = 5,
			E_STATE_ATTRACT_MODE = 6,
			E_STATE_FINAL_ELITE_SEQUENCE = 7,
			E_STATE_RENDER_METRICS = 8,
			E_STATE_RELEASE = 9,
		}

	}

}

