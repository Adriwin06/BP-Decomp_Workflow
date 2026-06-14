// BrnGlobalCpuMonitors.h:24
namespace BrnGame {
	struct SnapShotRequest;

	struct DispatchThreadInputBuffer;

}

// BrnGlobalCpuMonitors.h:24
namespace BrnGame {
}

// BrnGlobalCpuMonitors.h:24
namespace BrnGame {
	struct BrnCpuMonitors;

	struct SnapShotRequest;

	struct DispatchThreadInputBuffer;

	struct DispatchThreadInputBufferManager;

}

// BrnGlobalCpuMonitors.h:26
struct BrnGame::BrnCpuMonitors {
	// BrnGlobalCpuMonitors.h:33
	int32_t miUT_TotalUpdate;

	// BrnGlobalCpuMonitors.h:34
	int32_t miUT_EachUpdate;

	// BrnGlobalCpuMonitors.h:35
	int32_t miUT_NetworkAIRaceCar;

	// BrnGlobalCpuMonitors.h:36
	int32_t miUT_Network;

	// BrnGlobalCpuMonitors.h:37
	int32_t miUT_GameState;

	// BrnGlobalCpuMonitors.h:38
	int32_t miUT_GUI;

	// BrnGlobalCpuMonitors.h:39
	int32_t miUT_Director;

	// BrnGlobalCpuMonitors.h:40
	int32_t miUT_Sound;

	// BrnGlobalCpuMonitors.h:41
	int32_t miUT_Effects;

	// BrnGlobalCpuMonitors.h:42
	int32_t miUT_AI;

	// BrnGlobalCpuMonitors.h:43
	int32_t miUT_RaceCar;

	// BrnGlobalCpuMonitors.h:44
	int32_t miUT_Traffic;

	// BrnGlobalCpuMonitors.h:45
	int32_t miUT_Triggers;

	// BrnGlobalCpuMonitors.h:46
	int32_t miUT_CrashManager;

	// BrnGlobalCpuMonitors.h:47
	int32_t miUT_Physics;

	// BrnGlobalCpuMonitors.h:48
	int32_t miUT_World;

	// BrnGlobalCpuMonitors.h:49
	int32_t miUT_Resource;

	// BrnGlobalCpuMonitors.h:50
	int32_t miUT_DebugManager;

	// BrnGlobalCpuMonitors.h:51
	int32_t miUT_RenderAll;

	// BrnGlobalCpuMonitors.h:52
	int32_t miUT_FrustumTesting;

	// BrnGlobalCpuMonitors.h:53
	int32_t miUT_RenderMainScreen;

	// BrnGlobalCpuMonitors.h:54
	int32_t miUT_RenderShadowMap;

	// BrnGlobalCpuMonitors.h:55
	int32_t miUT_RenderEnvMap;

	// BrnGlobalCpuMonitors.h:56
	int32_t miUT_RenderFX;

	// BrnGlobalCpuMonitors.h:57
	int32_t miUT_RenderGUI;

	// BrnGlobalCpuMonitors.h:58
	int32_t miDT_DispatchToGpu;

	// BrnGlobalCpuMonitors.h:59
	int32_t miUT_ThreadSync;

	// BrnGlobalCpuMonitors.h:60
	int32_t miUT_WaitOnDispatch;

	// BrnGlobalCpuMonitors.h:63
	int32_t miUT_RaceCar_SQ;

	// BrnGlobalCpuMonitors.h:64
	int32_t miUT_Traffic_SQ;

	// BrnGlobalCpuMonitors.h:65
	int32_t miUT_Triggers_SQ;

	// BrnGlobalCpuMonitors.h:66
	int32_t miUT_Director_SQ;

	// BrnGlobalCpuMonitors.h:69
	int32_t miUT_GameState_Bridge;

	// BrnGlobalCpuMonitors.h:70
	int32_t miUT_GUI_Bridge;

	// BrnGlobalCpuMonitors.h:71
	int32_t miUT_AI_Bridge;

	// BrnGlobalCpuMonitors.h:72
	int32_t miUT_RaceCar_Bridge;

	// BrnGlobalCpuMonitors.h:73
	int32_t miUT_Traffic_Bridge;

	// BrnGlobalCpuMonitors.h:74
	int32_t miUT_Director_Bridge;

	// BrnGlobalCpuMonitors.h:77
	int32_t miUT_SoundUpdate;

public:
	// BrnGlobalCpuMonitors.h:30
	void Construct();

}

// BrnGlobalCpuMonitors.h:24
namespace BrnGame {
	struct BrnCpuMonitors;

	struct SnapShotRequest;

	struct DispatchThreadInputBuffer;

}

// BrnGlobalCpuMonitors.h:24
namespace BrnGame {
	struct BrnGameModule;

}

