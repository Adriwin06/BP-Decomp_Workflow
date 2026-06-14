// BrnPlayerInfo.h:54
struct BrnDirector::Camera::BehaviourHelperIndex {
private:
	// BrnPlayerInfo.h:85
	int32_t miIndex;

public:
	// BrnPlayerInfo.h:58
	void BehaviourHelperIndex();

	// BrnPlayerInfo.h:63
	const BehaviourHelperIndex & operator=(const BehaviourHelperIndex &);

	// BrnPlayerInfo.h:74
	void BehaviourHelperIndex(int32_t);

	// BrnPlayerInfo.h:79
	const BehaviourHelperIndex & operator=(int32_t);

	// BrnPlayerInfo.h:82
	int32_t operator std::int32_t() const;

}

// BrnPlayerInfo.h:91
struct BrnDirector::Camera::VehicleInfo {
	// BrnPlayerInfo.h:92
	RaceCarState mRaceCarState;

	// BrnPlayerInfo.h:93
	Matrix44Affine mCrashingCentreOfMass;

	// BrnPlayerInfo.h:94
	AABBox mAABB;

	// BrnPlayerInfo.h:96
	Vector3 mHardestNormalStressNormal;

	// BrnPlayerInfo.h:97
	Vector3 mHardestNormalStress;

	// BrnPlayerInfo.h:98
	float32_t mfHardestImpact;

	// BrnPlayerInfo.h:100
	bool mbHardestImpactIsAgainstWorld;

	// BrnPlayerInfo.h:101
	bool mbHasCrashingCenterOfMass;

	// BrnPlayerInfo.h:102
	bool mbEngineOn;

public:
	// BrnPlayerInfo.h:106
	void Clear();

}

// BrnPlayerInfo.h:112
struct BrnDirector::Camera::PlayerCrashInfo {
	// BrnPlayerInfo.h:125
	Vector3 mvCollisionNormal;

	// BrnPlayerInfo.h:126
	Vector3 mvContactPoint;

	// BrnPlayerInfo.h:127
	float32_t mfSpeedMPH;

	// BrnPlayerInfo.h:128
	bool mbHardstopVsWall;

	// BrnPlayerInfo.h:129
	bool mbHardStopVsAI;

	// BrnPlayerInfo.h:130
	bool mbWrecked;

	// BrnPlayerInfo.h:131
	bool mbHitWater;

public:
	// BrnPlayerInfo.h:114
	void Construct();

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		struct MotionBlurData;

		struct CameraEffects;

		struct DepthOfField;

		struct Behaviour;

	}

	struct HookNameStringWrapper;

	struct EffectInterface;

	struct BackgroundEffectRequest;

	struct CrashAnalysis;

	struct Moment;

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		struct VehicleInfo;

		struct MotionBlurData;

		struct CameraEffects;

		struct DepthOfField;

		struct Behaviour;

	}

	struct DataJournal<BrnDirector::GameState::EEventState,2>;

	struct HookNameStringWrapper;

	struct EffectInterface;

	struct BackgroundEffectRequest;

	struct CrashAnalysis;

	struct NewVehicleEvent;

	struct BrnDirectorVehicleInputInterface;

	struct Moment;

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		struct VehicleInfo;

	}

	struct DataJournal<BrnDirector::GameState::EEventState,2>;

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
	}

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		struct VehicleInfo;

		struct PlayerCrashInfo;

		struct MotionBlurData;

		struct CameraEffects;

		struct DepthOfField;

		struct Behaviour;

	}

	struct DataJournal<BrnDirector::GameState::EEventState,2>;

	struct HookNameStringWrapper;

	struct EffectInterface;

	struct BackgroundEffectRequest;

	struct CrashAnalysis;

	struct NewVehicleEvent;

	struct BrnDirectorVehicleInputInterface;

	struct DirectorOutputInterface;

	struct Moment;

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		struct VehicleInfo;

		struct MotionBlurData;

		struct CameraEffects;

		struct DepthOfField;

		struct Behaviour;

	}

	struct DataJournal<BrnDirector::GameState::EEventState,2>;

	struct HookNameStringWrapper;

	struct EffectInterface;

	struct BackgroundEffectRequest;

	struct CrashAnalysis;

	struct Moment;

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		struct VehicleInfo;

		struct PlayerCrashInfo;

		struct MotionBlurData;

		struct CameraEffects;

		struct DepthOfField;

		struct Behaviour;

	}

	struct DataJournal<BrnDirector::GameState::EEventState,2>;

	struct HookNameStringWrapper;

	struct EffectInterface;

	struct BackgroundEffectRequest;

	struct CrashAnalysis;

	struct NewVehicleEvent;

	struct BrnDirectorVehicleInputInterface;

	struct Moment;

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		struct MotionBlurData;

		struct CameraEffects;

		struct DepthOfField;

		struct Behaviour;

	}

	struct HookNameStringWrapper;

	struct EffectInterface;

	struct BackgroundEffectRequest;

	struct CrashAnalysis;

	struct NewVehicleEvent;

	struct BrnDirectorVehicleInputInterface;

	struct Moment;

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		struct BehaviourHelperIndex;

		struct VehicleInfo;

		struct PlayerCrashInfo;

		struct MotionBlurData;

		struct CameraEffects;

		struct DepthOfField;

		struct BehaviourSharedInfo;

		struct BehaviourControllerLockInterface;

		struct CollisionPolicySharedInfo;

		struct BehaviourDebugFlyWorld;

		struct BehaviourDebugOrbitPlayer;

		struct NamedParameters;

		struct BehaviourParameterBank;

	}

	struct DataJournal<BrnDirector::GameState::EEventState,2>;

	struct HookNameStringWrapper;

	struct EffectInterface;

	struct BackgroundEffectRequest;

	struct SceneQueryInterface;

	struct PostOffice<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*,10u>;

	struct PostOffice<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,40u>;

	struct PostOffice<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult,10u>;

	struct PostOffice<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult,10u>;

	struct PostOffice<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult,1u>;

	struct PostOffice<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult,10u>;

	struct CrashAnalysis;

	struct NewVehicleEvent;

	struct BrnDirectorVehicleInputInterface;

	struct DirectorOutputInterface;

	struct DataJournal<rw::math::vpu::Vector3,8>;

	struct DataJournal<float32_t,8>;

	struct AbstractPoolVoidHandle;

	struct IAbstractPoolFreeObject;

	// Declaration
	struct ArbitratorState {
	public:
		ArbitratorState();

	}

	struct AbstractPool<250u,8u,rw::math::vpu::Vector4>;

	struct AbstractPool<100u,20u,rw::math::vpu::Vector4>;

	struct SharedCameraContainer;

	struct ArbStateSharedInfo;

	struct MomentController;

	struct MomentSharedInfo;

	struct AbstractPool<70u,20u,rw::math::vpu::Vector4>;

	struct MomentDescription;

	// Declaration
	struct B3ClassicTakedownPlayer {
	public:
		B3ClassicTakedownPlayer();

	}

	// Declaration
	struct DestructionPathTakedownPlayer {
	public:
		DestructionPathTakedownPlayer();

	}

	// Declaration
	struct DriveByTakedownPlayer {
	public:
		DriveByTakedownPlayer();

	}

	// Declaration
	struct SimpleIceTakedownPlayer {
	public:
		SimpleIceTakedownPlayer();

	}

	// Declaration
	struct ShutdownTakedownPlayer {
	public:
		ShutdownTakedownPlayer();

	}

	// Declaration
	struct ArbStatePostEvent {
	public:
		ArbStatePostEvent();

	}

	// Declaration
	struct ArbStateCrashMode {
	public:
		ArbStateCrashMode();

	}

	// Declaration
	struct ArbStateRaceIntro {
	public:
		ArbStateRaceIntro();

		~ArbStateRaceIntro();

	}

	// Declaration
	struct ArbStateOnlineRaceIntro {
	public:
		ArbStateOnlineRaceIntro();

	}

	// Declaration
	struct ArbStateDriveThru {
	public:
		ArbStateDriveThru();

	}

	struct InterpolaterHelper;

	// Declaration
	struct ArbStateCarSelect {
	public:
		ArbStateCarSelect();

	}

	// Declaration
	struct ArbStateRankUp {
	public:
		ArbStateRankUp();

	}

	// Declaration
	struct ArbStateOnlineCarSelect {
	public:
		ArbStateOnlineCarSelect();

	}

	// Declaration
	struct DebugComponent {
	public:
		DebugComponent();

	}

	struct SharedPlaylists;

	struct ICEMoviePlayer;

	// Declaration
	struct ICEResourceMgr {
	public:
		ICEResourceMgr();

	}

	struct ICEPlayingMovie;

	// Declaration
	struct ArbStateCrashNav {
	public:
		ArbStateCrashNav();

	}

	// Declaration
	struct ArbStateTestbed {
	public:
		ArbStateTestbed();

	}

	// Declaration
	struct ArbStateAttractMode {
	public:
		ArbStateAttractMode();

	}

	// Declaration
	struct ArbStateRenderMetrics {
	public:
		ArbStateRenderMetrics();

	}

	struct KeyAnimShakeController;

	struct InertiaController;

	struct CameraFinaliser;

	struct TakedownPlayer;

}

