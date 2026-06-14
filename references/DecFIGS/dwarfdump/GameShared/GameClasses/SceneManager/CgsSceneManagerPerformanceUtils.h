// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsSceneManagerPerformanceUtils.h:32
	enum ESceneManagerPerfMonMode {
		E_SMPERF_SIMULATION = 0,
		E_SMPERF_RENDER = 1,
	}

}

// CgsSceneManagerPerformanceUtils.h:126
extern CgsSceneManager::ESceneManagerPerfMonMode _miPerfMonMode;

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsSceneManagerPerformanceUtils.h:32
	enum ESceneManagerPerfMonMode {
		E_SMPERF_SIMULATION = 0,
		E_SMPERF_RENDER = 1,
	}

}

// CgsSceneManagerPerformanceUtils.h:123
struct CgsSceneManager::SceneManagerPerfMonHelper {
	// CgsSceneManagerPerformanceUtils.h:126
	extern CgsSceneManager::ESceneManagerPerfMonMode _miPerfMonMode;

private:
	// CgsSceneManagerPerformanceUtils.h:141
	int32_t miMonitorID;

	// CgsSceneManagerPerformanceUtils.h:142
	CgsSceneManager::ESceneManagerPerfMonMode meMode;

public:
	// CgsSceneManagerPerformanceUtils.h:128
	void SceneManagerPerfMonHelper(int32_t, CgsSceneManager::ESceneManagerPerfMonMode);

	// CgsSceneManagerPerformanceUtils.h:135
	void ~SceneManagerPerfMonHelper();

}

