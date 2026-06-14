// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnDirectorEnums.h:36
	namespace OverlayEnums {
		// BrnDirectorEnums.h:37
		enum EOverlay {
			E_NONE = 0,
			E_RED_TINT = 1,
			E_BLUE_TINT = 2,
			E_NUM_OVERLAYS = 3,
		}

	}

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

	struct DataJournal<BrnDirector::GameState::EEventState,2>;

	struct DataJournal<rw::math::vpu::Vector3,8>;

	struct DataJournal<float32_t,8>;

	struct ShotContext;

	struct ShotController;

	struct NewVehicleEvent;

	struct BrnDirectorVehicleInputInterface;

	struct DirectorOutputInterface;

	struct AbstractPoolVoidHandle;

	struct IAbstractPoolFreeObject;

	struct ArbitratorState;

	struct SharedCameraContainer;

	struct ArbStateSharedInfo;

	struct MomentController;

	struct MomentSharedInfo;

	struct CrashAnalyser;

	struct MomentDescription;

	struct InterpolaterHelper;

	struct DebugComponent;

	struct SharedPlaylists;

	struct ICEMoviePlayer;

	struct ICEResourceMgr;

	struct ICEPlayingMovie;

	struct KeyAnimShakeController;

	struct InertiaController;

	struct DirectorDevTools;

	struct CameraFinaliser;

	struct Selector<uint32_t,10u>;

	struct Shot;

	struct PerlinShakeController;

	struct BoostShakeController;

	struct KeyAnimController;

	struct PhysicalReactionController;

	struct SimpleMoment;

	struct TakedownPlayer;

	void PrintShotEventFlags(uint32_t);

	void PrintShotProperties(uint32_t);

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnDirectorEnums.h:36
	namespace OverlayEnums {
		// BrnDirectorEnums.h:37
		enum EOverlay {
			E_NONE = 0,
			E_RED_TINT = 1,
			E_BLUE_TINT = 2,
			E_NUM_OVERLAYS = 3,
		}

	}

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnDirectorEnums.h:36
	namespace OverlayEnums {
	}

}

// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnDirectorEnums.h:36
	namespace OverlayEnums {
		// BrnDirectorEnums.h:37
		enum EOverlay {
			E_NONE = 0,
			E_RED_TINT = 1,
			E_BLUE_TINT = 2,
			E_NUM_OVERLAYS = 3,
		}

	}

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

	struct DataJournal<BrnDirector::GameState::EEventState,2>;

	struct DataJournal<rw::math::vpu::Vector3,8>;

	struct DataJournal<float32_t,8>;

	struct Moment;

	struct NewVehicleEvent;

	struct BrnDirectorVehicleInputInterface;

	struct DirectorOutputInterface;

	struct AbstractPoolVoidHandle;

	struct IAbstractPoolFreeObject;

	struct ArbitratorState;

	struct AbstractPool<250u,8u,rw::math::vpu::Vector4>;

	struct AbstractPool<100u,20u,rw::math::vpu::Vector4>;

	struct ICEResourceMgr;

	struct ICEPlayingMovie;

}

