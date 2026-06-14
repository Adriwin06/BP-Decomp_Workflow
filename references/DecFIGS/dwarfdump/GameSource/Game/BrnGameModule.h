// BrnGlobalCpuMonitors.h:24
namespace BrnGame {
	// Declaration
	struct BrnGameModule {
		// BrnGameModule.h:198
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_HARDWARE = 1,
			E_PREPARESTAGE_MANAGER = 2,
			E_PREPARESTAGE_GAMEDATAMODULE = 3,
			E_PREPARESTAGE_RENDERMODULE = 4,
			E_PREPARESTAGE_HARDWAREMEMORY = 5,
			E_PREPARESTAGE_THREADS = 6,
			E_PREPARESTAGE_DONE = 7,
		}

		// BrnGameModule.h:210
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_GUI = 1,
			E_RELEASESTAGE_SOUND = 2,
			E_RELEASESTAGE_GAMEDATAMODULE = 3,
			E_RELEASESTAGE_MANAGER = 4,
			E_RELEASESTAGE_HARDWARE = 5,
			E_RELEASESTAGE_NETWORK = 6,
			E_RELEASESTAGE_DONE = 7,
		}

		// BrnGameModule.h:222
		enum EGamePrepareStage {
			E_GAMEPREPARESTAGE_START = 0,
			E_GAMEPREPARESTAGE_GLOBALTEXTUREDICTIONARYLOAD = 1,
			E_GAMEPREPARESTAGE_GLOBALTEXTUREDICTIONARYLOAD_WAIT = 2,
			E_GAMEPREPARESTAGE_RENDERERAGAIN = 3,
			E_GAMEPREPARESTAGE_GAMESTATEMODULE = 4,
			E_GAMEPREPARESTAGE_DONE = 5,
		}

		// BrnGameModule.h:232
		enum EGameReleaseStage {
			E_GAMERELEASESTAGE_START = 0,
			E_GAMERELEASESTAGE_BURNOUTRESOURCEMODULE = 1,
			E_GAMERELEASESTAGE_NETWORK = 2,
			E_GAMERELEASESTAGE_SOUND_MODULE = 3,
			E_GAMERELEASESTAGE_DIRECTORMODULE = 4,
			E_GAMERELEASESTAGE_GUIMODULE = 5,
			E_GAMERELEASESTAGE_CONTROLLERMODULE = 6,
			E_GAMERELEASESTAGE_WORLDMODULE = 7,
			E_GAMERELEASESTAGE_RENDERMODULE = 8,
			E_GAMERELEASESTAGE_GAMESTATEMODULE = 9,
			E_GAMERELEASESTAGE_REPLAYMODULE = 10,
			E_GAMERELEASESTAGE_DONE = 11,
		}

		// BrnGameModule.h:248
		enum EGameUpdateStage {
			E_GAMEUPDATESTAGE_PREPARE = 0,
			E_GAMEUPDATESTAGE_MAIN = 1,
			E_GAMEUPDATESTAGE_RELEASE = 2,
		}

		// BrnGameModule.h:425
		enum EInputBindState {
			E_INPUTBINDSTATE_UNBOUND = 0,
			E_INPUTBINDSTATE_PRESS_START = 1,
			E_INPUTBINDSTATE_START_PRESSED = 2,
			E_INPUTBINDSTATE_BIND_REQUESTED = 3,
			E_INPUTBINDSTATE_BOUND = 4,
			E_INPUTBINDSTATE_GAME_OVER = 5,
			E_INPUTBINDSTATE_UNBIND_REQUESTED = 6,
		}

		// BrnGameModule.h:441
		enum EGuiFlowStart {
			E_GUIFLOW_INITIALLOAD = 0,
			E_GUIFLOW_MARKETING = 1,
			E_GUIFLOW_START = 2,
			E_GUIFLOW_COMPLETELOADING = 3,
			E_GUIFLOW_MEMCARD = 4,
			E_GUIFLOW_INGAME = 5,
			E_GUIFLOW_MAX = 6,
		}

	}

	// BrnGameModule.h:1450
	extern BrnGame::BrnGameModule::EReleaseStage operator++(BrnGame::BrnGameModule::EReleaseStage &, int);

}

// BrnGameModule.h:179
struct BrnGame::BrnGameModule : public CgsSystem::IThreadClass {
	// BrnGameModule.h:182
	AutoTestManager mAutoTestManager;

	// BrnGameModule.cpp:139
	extern int32_t _miUpdateSimTrace;

	// BrnGameModule.cpp:140
	extern int32_t _miUpdateRenderTrace;

	// BrnGameModule.cpp:92
	extern bool sbShowStreamStallMessage;

private:
	// BrnGameModule.h:356
	BrnRendererModule mRenderModule;

	// BrnGameModule.h:357
	WorldModule mWorldModule;

	// BrnGameModule.h:358
	BrnResource::GameDataModule mGameDataModule;

	// BrnGameModule.h:359
	BrnGameState::GameStateModule mGameStateModule;

	// BrnGameModule.h:360
	BrnDirector::DirectorModule mDirectorModule;

	// BrnGameModule.h:361
	CgsInput::InputModule mInputModule;

	// BrnGameModule.h:362
	BrnGui::GuiModule mGuiModule;

	// BrnGameModule.h:363
	BrnEffects::EffectsModule mEffectsModule;

	// BrnGameModule.h:364
	BrnSound::Module::RootSoundModule mSoundModule;

	// BrnGameModule.h:365
	BrnReplays::ReplayModule mReplayModule;

	// BrnGameModule.h:368
	BrnNetwork::BrnNetworkModule mNetworkModule;

	// BrnGameModule.h:373
	IOBufferStack * mpUpdateInputBufferStack;

	// BrnGameModule.h:374
	IOBufferStack * mpUpdateOutputBufferStack;

	// BrnGameModule.h:375
	IOBufferStack * mpResourceInputBufferStack;

	// BrnGameModule.h:376
	IOBufferStack * mpResourceOutputBufferStack;

	// BrnGameModule.h:378
	InputBuffer * mpGameDataModuleInputBuffer;

	// BrnGameModule.h:379
	OutputBuffer * mpGameDataModuleOutputBuffer;

	// BrnGameModule.h:384
	BrnCpuMonitors mCpuMonitors;

	// BrnGameModule.h:387
	DebugManager mDebugManager;

	// BrnGameModule.h:388
	SafeResourceHandle<CgsResource::Font> mpDebugFont;

	// BrnGameModule.h:389
	CgsDev::MapFile::MinimalMemoryReader mMapFileReader;

	// BrnGameModule.h:396
	BrnJuice mJuice;

	// BrnGameModule.h:399
	int32_t miWorldModuleUpdateTrace;

	// BrnGameModule.h:404
	bool mbHasGameTerminated;

	// BrnGameModule.h:405
	bool mbSimPaused;

	// BrnGameModule.h:406
	bool mbDiskError;

	// BrnGameModule.h:407
	bool mbSimPausedBeforeDiskError;

	// BrnGameModule.h:408
	bool mbControllerDisconnected;

	// BrnGameModule.h:409
	bool mbGameStart;

	// BrnGameModule.h:410
	bool mbGameOver;

	// BrnGameModule.h:411
	bool mbPrevStalled;

	// BrnGameModule.h:412
	bool mbStalled;

	// BrnGameModule.h:413
	bool mbRequestDoStepFrame;

	// BrnGameModule.h:414
	bool mbRequestDoPlayFrame;

	// BrnGameModule.h:415
	bool mbWorldStreamingRequestedStall;

	// BrnGameModule.h:416
	bool mbStreamingStalled;

	// BrnGameModule.h:417
	bool mbIsLoadingScreenVisible;

	// BrnGameModule.h:418
	LinearMalloc * mpReusableLoadingScreenAllocator;

	// BrnGameModule.h:419
	bool mbDEBUGIsPlayerCrashing;

	// BrnGameModule.h:420
	bool mbOnline;

	// BrnGameModule.h:423
	bool mbIsSysMenuShowing;

	// BrnGameModule.h:435
	BrnGame::BrnGameModule::EInputBindState meInputBindState;

	// BrnGameModule.h:436
	uint32_t miPlayer0ControllerPort;

	// BrnGameModule.h:438
	uint32_t miDebugControllerPort;

	// BrnGameModule.h:451
	BrnGame::BrnGameModule::EGuiFlowStart meGuiFlowStart;

	// BrnGameModule.h:452
	bool mbGuiFlowCompleted;

	// BrnGameModule.h:453
	bool mbRequestResumePreparingWorld;

	// BrnGameModule.h:454
	BrnGame::BrnGameModule::EPrepareStage mePrepareStage;

	// BrnGameModule.h:455
	BrnGame::BrnGameModule::EReleaseStage meReleaseStage;

	// BrnGameModule.h:456
	BrnGame::BrnGameModule::EGamePrepareStage meGamePrepareStage;

	// BrnGameModule.h:457
	BrnGame::BrnGameModule::EGameReleaseStage meGameReleaseStage;

	// BrnGameModule.h:458
	BrnGame::BrnGameModule::EGameUpdateStage meGameUpdateStage;

	// BrnGameModule.h:459
	int32_t miNumSimFramesRequired;

	// BrnGameModule.h:462
	GameMainFlowController mMainFlowStateMachine;

	// BrnGameModule.h:465
	EventReceiverQueue<1024,16> mReceiverQueue;

	// BrnGameModule.h:468
	Timer mGameTimer;

	// BrnGameModule.h:469
	Timer mSimTimer;

	// BrnGameModule.h:470
	TimerStatusInterface mTimerStatusInterface;

	// BrnGameModule.h:471
	TimerRequestInterface mTimerRequestInterface;

	// BrnGameModule.h:472
	FrameRateManager mFrameRateManager;

	// BrnGameModule.h:473
	CgsSystem::EFrameRateManagerType meFrameRateManagerType;

	// BrnGameModule.h:474
	FrameRateTypeRequestInterface mFrameRateTypeRequestInterface;

	// BrnGameModule.h:475
	int8_t mi8FrameRateMinSteps;

	// BrnGameModule.h:476
	int8_t mi8FrameRateMaxSteps;

	// BrnGameModule.h:477
	int8_t mi8ActualFrameRateMinStepsThisFrame;

	// BrnGameModule.h:478
	int8_t mi8ActualFrameRateMaxStepsThisFrame;

	// BrnGameModule.h:479
	bool mbSteppingFrames;

	// BrnGameModule.h:480
	bool mbDoStep;

	// BrnGameModule.h:481
	bool mbStopStepping;

	// BrnGameModule.h:482
	bool mbForceShutdown;

	// BrnGameModule.h:485
	uint8_t mu8DebugFramerateCurrentTimestamp;

	// BrnGameModule.h:486
	uint64_t[3] mau64DebugFramerateLastThreeTimestamps;

	// BrnGameModule.h:487
	uint64_t mu64DebugFramerateTimestampAtLastMinute;

	// BrnGameModule.h:488
	float32_t mfDebugFramerateAccumulatedOverLastMinute;

	// BrnGameModule.h:489
	float32_t mfDebugFramerateAverageOverLastMinute;

	// BrnGameModule.h:490
	float32_t mfDebugFramerateNumRendersInLastMinute;

	// BrnGameModule.h:493
	InputBuffer * mpGuiInputBuffer;

	// BrnGameModule.h:494
	InputBuffer * mpGuiViewInputBuffer;

	// BrnGameModule.h:495
	OutputBuffer * mpGuiModelOutputBuffer;

	// BrnGameModule.h:496
	CgsGui::CgsGuiModuleIO::OutputBuffer * mpGuiOutputBuffer;

	// BrnGameModule.h:497
	OutputBuffer * mpDirectorOutputBuffer;

	// BrnGameModule.h:498
	extern const uint32_t KU_MAX_RENDERMETRICS_SAMPLES = 8;

	// BrnGameModule.h:499
	bool mbTakeMetrics;

	// BrnGameModule.h:500
	bool mbSendMetrics;

	// BrnGameModule.h:501
	Matrix44Affine mRecordMetricsCamMatrix;

	// BrnGameModule.h:504
	ExternallyVisiblePerformanceMonitors mRendererModulePerfmonsForREADONLYAccess;

	// BrnGameModule.h:513
	int32_t miBrightness;

	// BrnGameModule.h:514
	int32_t miContrast;

	// BrnGameModule.h:517
	bool mbEnableCalibrationUnfriendlyPostFx;

	// BrnGameModule.h:520
	bool mbControllerEnterWithCircle;

	// BrnGameModule.h:524
	DirectorBridgeSerialiser mDirectorBridgeSerialiser;

	// BrnGameModule.h:525
	GameModuleSerialiser mGameModuleSerialiser;

	// BrnGameModule.h:530
	ThreadLayout mThreadLayout;

	// BrnGameModule.h:531
	DispatchThreadInputBufferManager mDispatchThreadInputBufferManager;

	// BrnGameModule.h:532
	Thread mErrorThread;

	// BrnGameModule.h:537
	SystemPS3HW mHardware;

	// BrnGameModule.h:542
	float32_t mfLookbackStartTimer;

	// BrnGameModule.h:544
	bool mbDoPerfMonScreenCapture;

	// BrnGameModule.h:1418
	uint64_t muCatchupStartTime;

	// BrnGameModule.h:1419
	uint64_t muCatchupCurrentTime;

	// BrnGameModule.h:1420
	uint64_t muCatchupFrameCount;

public:
	// BrnGameModule.cpp:155
	// Declaration
	virtual void Construct() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameModule.cpp:220
		using namespace CgsDev::Message;

		// BrnGameModule.cpp:636
		using namespace CgsDev::Message;

	}

	// BrnGameModule.cpp:656
	virtual bool Prepare(IOBufferStack *, IOBufferStack *, IOBufferStack *, IOBufferStack *, IOBufferStack *);

	// BrnGameModule.cpp:925
	virtual bool Release();

	// BrnGameModule.cpp:1047
	virtual void Destruct();

	// BrnGameModule.cpp:1087
	virtual void Update();

	// BrnGameModule.h:1479
	EA::Jobs::JobScheduler * GetJobManager();

	// BrnGameModule.cpp:1146
	virtual bool UpdateThread();

	// BrnGameModule.cpp:1221
	virtual void DispatchThread();

	// BrnGameModule.cpp:1533
	virtual void ResourceUpdateThread(Mutex *);

	// BrnGameModule.cpp:1253
	virtual void OnStartOfUpdateFrame();

	// BrnGameModule.cpp:1275
	virtual void OnEndOfUpdateFrame();

	// BrnGameModule.cpp:1515
	virtual void OnCompletionOfVsyncWait();

	// BrnGameModule.cpp:1565
	virtual void RenderAssert(const AssertData *);

	// BrnGameModule.h:1464
	bool HasGameTerminated();

	// BrnGameModule.cpp:3872
	void DebugSetMemoryToInt(void *, int32_t, uint32_t);

	// BrnGameModule.cpp:3916
	void DebugMemoryInit(BrnGame::BrnGameModule *);

	// BrnGameModule.cpp:4130
	void UpdateJuice();

private:
	// BrnGameModule.cpp:3442
	BrnUpdateSet ConstructUpdateSet(const OutputBuffer *, const OutputBuffer *, const OutputBuffer *, const OutputBuffer *, const OutputBuffer_PreSim *);

	// BrnGameModule.cpp:1957
	// Declaration
	void DoUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameModule.cpp:2006
		using namespace CgsDev::Message;

		// BrnGameModule.cpp:2014
		using namespace CgsDev::Message;

		// BrnGameModule.cpp:2026
		using namespace CgsDev::Message;

		// BrnGameModule.cpp:2041
		using namespace CgsDev::Message;

		// BrnGameModule.cpp:2053
		using namespace CgsDev::Message;

		// BrnGameModule.cpp:2064
		using namespace CgsDev::Message;

		// BrnGameModule.cpp:2073
		using namespace CgsDev::Message;

		// BrnGameModule.cpp:2088
		using namespace CgsDev::Message;

		// BrnGameModule.cpp:2106
		using namespace CgsDev::Message;

		// BrnGameModule.cpp:2117
		using namespace CgsDev::Message;

		// BrnGameModule.cpp:2132
		using namespace CgsDev::Message;

		// BrnGameModule.cpp:2160
		using namespace CgsDev::Message;

		// BrnGameModule.cpp:2171
		using namespace CgsDev::Message;

		// BrnGameModule.cpp:2188
		using namespace CgsDev::Message;

		// BrnGameModule.cpp:2204
		using namespace CgsDev::Message;

		// BrnGameModule.cpp:2219
		using namespace CgsDev::Message;

		// BrnGameModule.cpp:2233
		using namespace CgsDev::Message;

		// BrnGameModule.cpp:2247
		using namespace CgsDev::Message;

		// BrnGameModule.cpp:2254
		using namespace CgsDev::Message;

		// BrnGameModule.cpp:2260
		using namespace CgsDev::Message;

		// BrnGameModule.cpp:2275
		using namespace CgsDev::Message;

		// BrnGameModule.cpp:2302
		using namespace CgsDev::Message;

	}

	// BrnGameModule.cpp:2313
	void DoDispatch();

	// BrnGameModuleUpdateFunctions.cpp:42
	uint32_t DoUpdate_InputPreWorld(IOBufferStack *, IOBufferStack *, OutputBuffer *);

	// BrnGameModuleUpdateFunctions.cpp:121
	void DoUpdate_NetworkPreSim(IOBufferStack *, IOBufferStack *, const OutputBuffer *, BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, BrnUpdateSet);

	// BrnGameModuleUpdateFunctions.cpp:156
	void DoUpdate_GameStatePreWorld(IOBufferStack *, IOBufferStack *, const OutputBuffer *, const OutputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, BrnUpdateSet);

	// BrnGameModuleUpdateFunctions.cpp:318
	void DoUpdate_World(IOBufferStack *, IOBufferStack *, const OutputBuffer *, const OutputBuffer *, const OutputBuffer *, const OutputBuffer *, const OutputBuffer_PreSim *, RootPreUpdateOutputBuffer *, UpdateOutputBuffer *, BrnUpdateSet);

	// BrnGameModuleUpdateFunctions.cpp:390
	void DoUpdate_InputPostWorld(IOBufferStack *, IOBufferStack *, const OutputBuffer *, const UpdateOutputBuffer *, uint32_t);

	// BrnGameModuleUpdateFunctions.cpp:449
	void DoUpdate_Director(IOBufferStack *, IOBufferStack *, InputBuffer *, const OutputBuffer *, const OutputBuffer *, const UpdateOutputBuffer *, const OutputBuffer_PreSim *, OutputBuffer *, BrnUpdateSet);

	// BrnGameModuleUpdateFunctions.cpp:597
	void DoUpdate_GUI(IOBufferStack *, IOBufferStack *, InputBuffer *, InputBuffer *, const OutputBuffer *, const OutputBuffer *, const OutputBuffer *, const UpdateOutputBuffer *, const OutputBuffer_PreSim *, CgsGui::CgsGuiModuleIO::OutputBuffer *, OutputBuffer *, OutputBuffer *, OutputBuffer *, InputBuffer *, const OutputBuffer *, BrnUpdateSet, uint32_t);

	// BrnGameModuleUpdateFunctions.cpp:555
	void DoUpdate_GuiPreWorld(IOBufferStack *, IOBufferStack *, CgsGui::CgsGuiModuleIO::OutputBuffer *, OutputBuffer *, InputBuffer *);

	// BrnGameModuleUpdateFunctions.cpp:703
	void DoUpdate_DirectorPostGUI(IOBufferStack *, IOBufferStack *, InputBuffer *, const OutputBuffer *, OutputBuffer *);

	// BrnGameModuleUpdateFunctions.cpp:730
	void DoUpdate_GameStatePostWorld(IOBufferStack *, IOBufferStack *, const OutputBuffer *, const UpdateOutputBuffer *, const OutputBuffer *, const OutputBuffer_PostSim *, const OutputBuffer *, BrnUpdateSet);

	// BrnGameModuleUpdateFunctions.cpp:798
	void DoUpdate_Sound(IOBufferStack *, IOBufferStack *, const OutputBuffer *, const UpdateOutputBuffer *, const OutputBuffer *, const OutputBuffer_PreSim *, RootOutputBuffer *, CgsGui::CgsGuiModuleIO::OutputBuffer *, OutputBuffer *, BrnUpdateSet);

	// BrnGameModuleUpdateFunctions.cpp:869
	void DoPreUpdate_Sound(IOBufferStack *, RootPreUpdateOutputBuffer *, InputBuffer *);

	// BrnGameModuleUpdateFunctions.cpp:907
	void DoUpdate_NetworkPostSim(IOBufferStack *, IOBufferStack *, const OutputBuffer *, const UpdateOutputBuffer *, const OutputBuffer *, BrnUpdateSet);

	// BrnGameModuleUpdateFunctions.cpp:950
	void DoUpdate_Effects(IOBufferStack *, IOBufferStack *, const OutputBuffer *, const OutputBuffer *, const UpdateOutputBuffer *, const OutputBuffer *, const OutputBuffer_PreSim *, const RootPreUpdateOutputBuffer *, OutputBuffer *, bool, BrnUpdateSet);

	// BrnGameModuleUpdateFunctions.cpp:1011
	void DoUpdate_ReplaysPreSim(IOBufferStack *, IOBufferStack *, const OutputBuffer *, const OutputBuffer *, OutputBuffer_PreSim *, BrnUpdateSet);

	// BrnGameModuleUpdateFunctions.cpp:1054
	void DoUpdate_ReplaysPostSim(IOBufferStack *, IOBufferStack *, const UpdateOutputBuffer *, const OutputBuffer *, const RootOutputBuffer *, const OutputBuffer *, const OutputBuffer *, OutputBuffer_PostSim *, BrnUpdateSet);

	// BrnGameModule.cpp:827
	void CheckDiskError(const OutputBuffer *);

	// BrnGameModule.cpp:2497
	void CreateStaticIOBuffers();

	// BrnGameModule.cpp:2515
	void DestroyStaticIOBuffers();

	// GameBridgeGameStateToX.cpp:4905
	void BridgeGameStateToReplay_PreSim(InputBuffer_PreSim *, const OutputBuffer *);

	// GameBridgeReplayToX.cpp:33
	void BridgeReplayToGameState_PostSim(PostWorldInputBuffer *, const OutputBuffer_PostSim *);

	// GameBridgeReplayToX.cpp:42
	void BridgeReplayToWorld_PreSim(UpdateInputBuffer *, const OutputBuffer_PreSim *);

	// GameBridgeReplayToX.cpp:51
	void BridgeReplayToEffects(InputBuffer *, const OutputBuffer_PreSim *);

	// GameBridgeReplayToX.cpp:60
	void BridgeReplayToSound(RootInputBuffer *, const OutputBuffer_PreSim *);

	// GameBridgeReplayToX.cpp:69
	void BridgeReplayToDirector(InputBuffer *, const OutputBuffer_PreSim *);

	// GameBridgeReplayToX.cpp:78
	void BridgeReplayToResource(InputBuffer *, const OutputBuffer_PreSim *);

	// GameBridgeReplayToX.cpp:87
	void BridgeReplayToGui(InputBuffer *, const OutputBuffer_PreSim *);

	// GameBridgeWorldToX.cpp:535
	void BridgeWorldToReplay_PostSim(InputBuffer_PostSim *, const UpdateOutputBuffer *);

	// GameBridgeSoundToX.cpp:59
	void BridgeSoundToReplay_PostSim(InputBuffer_PostSim *, const RootOutputBuffer *);

	// GameBridgeEffectsToX.cpp:94
	void BridgeEffectsToReplay_PostSim(InputBuffer_PostSim *, const OutputBuffer *);

	// GameBridgeDirectorToX.cpp:262
	void BridgeDirectorToReplay_PostSim(InputBuffer_PostSim *, const OutputBuffer *);

	// GameBridgeControllerToX.cpp:1189
	void BridgeControllerToReplay(InputBuffer_PreSim *, const OutputBuffer *);

	// GameBridgeControllerToX.cpp:1039
	void BridgeControllerToWorld(UpdateInputBuffer *, const OutputBuffer *);

	// GameBridgeControllerToX.cpp:143
	void BridgeControllerToDirector(InputBuffer *, const OutputBuffer *);

	// GameBridgeControllerToX.cpp:306
	void BridgeControllerToGui(InputBuffer *, const OutputBuffer *);

	// GameBridgeControllerToX.cpp:1007
	void BridgeControllerToNetworking(PreSimulationInputBuffer *, const OutputBuffer *);

	// GameBridgeControllerToX.cpp:781
	void BridgeControllerToGameState(PreWorldInputBuffer *, const OutputBuffer *, bool);

	// RootBridgeControllerToEffects.cpp:30
	void BridgeControllerToEffects(const OutputBuffer *);

	// GameBridgeNetworkToX.cpp:285
	void BridgeNetworkToGameDataModule(InputBuffer *, const OutputBuffer *);

	// GameBridgeNetworkToX.cpp:262
	void BridgeNetworkToWorld(UpdateInputBuffer *, const OutputBuffer *);

	// GameBridgeNetworkToX.cpp:217
	void BridgeNetworkToGameState(PreWorldInputBuffer *, const OutputBuffer *);

	// GameBridgeNetworkToX.cpp:48
	void BridgeNetworkToGui(InputBuffer *, const OutputBuffer *);

	// GameBridgeGameStateToX.cpp:4768
	void BridgeGameStateToResource(InputBuffer *, const OutputBuffer *);

	// GameBridgeGameStateToX.cpp:290
	void BridgeGameStateToWorld(UpdateInputBuffer *, const OutputBuffer *);

	// GameBridgeGameStateToX.cpp:200
	void BridgeGameStateToDirector(InputBuffer *, const OutputBuffer *);

	// RootBridgeGameStateToSound.cpp:35
	void BridgeGameStateToSound(RootInputBuffer *, const OutputBuffer *);

	// GameBridgeGameStateToX.cpp:4082
	void BridgeGameStateToNetwork(PostSimulationInputBuffer *, const OutputBuffer *);

	// GameBridgeGameStateToX.cpp:404
	void BridgeGameStateToGui(InputBuffer *, const OutputBuffer *);

	// GameBridgeGameStateToX.cpp:4783
	void BridgeGameStateToController(PostWorldInputBuffer *, const OutputBuffer *);

	// GameBridgeGameStateToX.cpp:4889
	void BridgeGameStateToEffects(InputBuffer *, const OutputBuffer *);

	// GameBridgeWorldToX.cpp:462
	void BridgeWorldToResource(InputBuffer *, const UpdateOutputBuffer *);

	// GameBridgeWorldToX.cpp:361
	void BridgeWorldToNetwork(PostSimulationInputBuffer *, const UpdateOutputBuffer *);

	// GameBridgeWorldToX.cpp:38
	void BridgeWorldToDirector(InputBuffer *, const UpdateOutputBuffer *);

	// GameBridgeWorldToX.cpp:311
	void BridgeWorldToDirectorPostSceneQueries(const OutputBuffer *, SceneQueryInputBuffer *);

	// GameBridgeWorldToX.cpp:326
	void BridgeWorldToSound(RootInputBuffer *, const UpdateOutputBuffer *, BrnUpdateSet);

	// GameBridgeWorldToGui.cpp:42
	void BridgeWorldToGui(InputBuffer *, const UpdateOutputBuffer *);

	// GameBridgeWorldToX.cpp:480
	void BridgeWorldToGameState(PostWorldInputBuffer *, const UpdateOutputBuffer *);

	// GameBridgeWorldToX.cpp:550
	void BridgeWorldToController(PostWorldInputBuffer *, const UpdateOutputBuffer *);

	// RootBridgeRendererToWorld.cpp:41
	void BridgeRendererToWorld(DispatchInputBuffer *, const OutputBuffer *);

	// GameBridgeDirectorToX.cpp:62
	void BridgeDirectorToResource(InputBuffer *, const OutputBuffer *);

	// GameBridgeDirectorToX.cpp:45
	void BridgeDirectorToRender(InputBuffer *, const OutputBuffer *);

	// GameBridgeDirectorToX.cpp:98
	void BridgeDirectorToGui(InputBuffer *, const OutputBuffer *);

	// GameBridgeDirectorToX.cpp:276
	void BridgeDirectorToGameState(PostWorldInputBuffer *, const OutputBuffer *);

	// GameBridgeWorldToGui.cpp:685
	void BridgeRendererToGui(InputBuffer *, const OutputBuffer *);

	// GameBridgeEffectsToX.cpp:43
	void BridgeRendererToEffects(DispatchInputBuffer *, const OutputBuffer *);

	// GameBridgeRendererToResource.cpp:36
	void BridgeRendererToResource(InputBuffer *, const OutputBuffer *);

	// GameBridgeEffectsToX.cpp:77
	void BridgeEffectsToResource(InputBuffer *, const OutputBuffer *);

	// GameBridgeEntityToEffects.cpp:44
	void BridgeEntityToEffects(const UpdateOutputBuffer *, InputBuffer *, BrnUpdateSet);

	// GameBridgeEntityToEffects.cpp:92
	void BridgeWorldToEffects_Dispatch(DispatchInputBuffer *, const DispatchOutputBuffer *);

	// GameBridgeGameStateToX.cpp:4828
	void BridgeGameStateToJuice(const OutputBuffer *);

	// GameBridgeControllerToX.cpp:260
	void MapActionInfoToDebugController(BrnDirector::Camera::Utils::DebugController::DebugControllerInfo &, const ActionInfo *);

	// GameBridgeControllerToX.cpp:242
	void MapActionToDebugControl(BrnDirector::Camera::Utils::DebugController::DebugControllerInfo &, BrnDirector::Camera::Utils::DebugController::EControl, const ActionInfo *, EGameInputActions);

	// GameBridgeControllerToX.cpp:109
	const PadOutputInformation * GetPadInfoForPlayer0(const OutputBuffer *, int32_t *);

	// BrnGameModule.cpp:2825
	void PrepareInitialInputMapping(PostWorldInputBuffer *);

	// GameBridgeGUIToX.cpp:1256
	void BridgeGuiToResource(InputBuffer *, const OutputBuffer *, const OutputBuffer *);

	// GameBridgeGUIToX.cpp:847
	void BridgeGuiToNetwork(PostSimulationInputBuffer *, const OutputBuffer *);

	// GameBridgeGUIToX.cpp:1318
	void BridgeGuiToWorld(UpdateInputBuffer *, const OutputBuffer *);

	// GameBridgeGUIToX.cpp:1384
	// Declaration
	void BridgeGuiToDirector(InputBuffer *, const OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// GameBridgeGUIToX.cpp:1457
		using namespace CgsDev::Message;

	}

	// GameBridgeGUIToX.cpp:1605
	void BridgeGuiToSound(RootInputBuffer *, const OutputBuffer *);

	// GameBridgeGUIToX.cpp:1631
	void BridgeGuiToReplay_PostSim(InputBuffer_PostSim *, const OutputBuffer *);

	// GameBridgeSoundToX.cpp:81
	void BridgeSoundToWorld(UpdateInputBuffer *, const RootPreUpdateOutputBuffer *);

	// GameBridgeSoundToX.cpp:103
	void BridgeSoundToTraining(RootPreUpdateOutputBuffer *);

	// GameBridgeSoundToX.cpp:41
	void BridgeSoundToResource(InputBuffer *, const RootOutputBuffer *);

	// GameBridgeSoundToX.cpp:134
	void BridgeSoundToGuiPreUpdate(InputBuffer *, const RootPreUpdateOutputBuffer *);

	// GameBridgeSoundToX.cpp:150
	void BridgeSoundToEffects(InputBuffer *, const RootPreUpdateOutputBuffer *);

	// GameBridgeDirectorToX.cpp:80
	void BridgeDirectorToSound(RootInputBuffer *, const OutputBuffer *);

	// GameBridgeDirectorToX.cpp:245
	void BridgeDirectorToWorldPreSceneQueries(const SceneQueryOutputBuffer *, CgsSceneManager::SceneManagerIO::InputBuffer_Query *);

	// GameBridgeWorldToGui.cpp:228
	void BridgeWorldVehicleDataToGui(InputBuffer *, const UpdateOutputBuffer *);

	// GameBridgeWorldToGui.cpp:124
	void BridgeWorldTrafficAndPropDataToGui(InputBuffer *, const UpdateOutputBuffer *);

	// GameBridgeWorldToGui.cpp:543
	void BridgeWorldRacePositionDataToGui(const UpdateOutputBuffer *);

	// GameBridgeWorldToGui.cpp:562
	void BridgeWorldRouteInformationToGui(const UpdateOutputBuffer *);

	// GameBridgeWorldToGui.cpp:629
	void BridgeWorldRivalInformationToGui(const UpdateOutputBuffer *);

	// GameBridgeWorldToGui.cpp:647
	void BridgeWorldImpactInformationToGui(InputBuffer *, const UpdateOutputBuffer *);

	// GameBridgeGUIToX.cpp:46
	void BridgeGuiToGameState(PostWorldInputBuffer *, const OutputBuffer *);

	// BrnGameModule.h:1205
	void BridgePostEventStateToGui(const OutputBuffer *);

	// BrnGameModule.cpp:2977
	void BridgeInputToGame(const OutputBuffer *);

	// BrnGameModule.cpp:3009
	void BridgeGameToGui(InputBuffer *);

	// RootBridgeRendererToWorld.cpp:76
	void BridgeGameToWorldDispatch(DispatchInputBuffer *);

	// BrnGameModule.cpp:3103
	void BridgeGuiToGame(const OutputBuffer *);

	// BrnGameModule.cpp:2842
	void DebugSystemRenderCallback(void *, Camera *);

	// BrnGameModule.cpp:2869
	void NetworkDebugMenuRenderCallback(void *, Camera *);

	// BrnGameModule.cpp:1580
	bool GamePrepare();

	// BrnGameModule.cpp:1845
	bool GameMain();

	// BrnGameModule.cpp:2650
	bool GameRelease();

	// BrnGameModule.cpp:2536
	void DebugManagerRender(OutputBuffer *);

	// BrnGameModule.cpp:2883
	void RunPostUpdateStep();

	// BrnGameModule.cpp:2898
	void UpdateTimers(const OutputBuffer *, const OutputBuffer *);

	// BrnGameModule.cpp:2930
	void UpdateFrameRateType(const OutputBuffer *);

	// BrnGameModule.cpp:2959
	void BridgeTimers(InputBuffer *, PreSimulationInputBuffer *, PreWorldInputBuffer *, UpdateInputBuffer *);

	// GameBridgeGameStateToX.cpp:731
	// Declaration
	void TranslateGameActionsToGuiEvents(InputBuffer *, const OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// GameBridgeGameStateToX.cpp:847
		using namespace CgsDev::Message;

		// GameBridgeGameStateToX.cpp:1199
		using namespace CgsDev::Message;

		// GameBridgeGameStateToX.cpp:1405
		using namespace CgsDev::Message;

		// GameBridgeGameStateToX.cpp:1406
		using namespace CgsDev::Message;

		// GameBridgeGameStateToX.cpp:1555
		using namespace CgsDev::Message;

		// GameBridgeGameStateToX.cpp:2147
		using namespace CgsDev::Message;

		// GameBridgeGameStateToX.cpp:2158
		using namespace CgsDev::Message;

		// GameBridgeGameStateToX.cpp:2168
		using namespace CgsDev::Message;

		// GameBridgeGameStateToX.cpp:2187
		using namespace CgsDev::Message;

		// GameBridgeGameStateToX.cpp:3118
		using namespace CgsDev::Message;

		// GameBridgeGameStateToX.cpp:3119
		using namespace CgsDev::Message;

		// GameBridgeGameStateToX.cpp:3120
		using namespace CgsDev::Message;

		// GameBridgeGameStateToX.cpp:3121
		using namespace CgsDev::Message;

		// GameBridgeGameStateToX.cpp:3122
		using namespace CgsDev::Message;

		// GameBridgeGameStateToX.cpp:3123
		using namespace CgsDev::Message;

		// GameBridgeGameStateToX.cpp:3153
		using namespace CgsDev::Message;

		// GameBridgeGameStateToX.cpp:3154
		using namespace CgsDev::Message;

		// GameBridgeGameStateToX.cpp:3155
		using namespace CgsDev::Message;

		// GameBridgeGameStateToX.cpp:3156
		using namespace CgsDev::Message;

		// GameBridgeGameStateToX.cpp:3157
		using namespace CgsDev::Message;

		// GameBridgeGameStateToX.cpp:3158
		using namespace CgsDev::Message;

	}

	// GameBridgeGameStateToX.cpp:3897
	void TranslateTakedownsToGuiEvents(InputBuffer *, const PreWorldInputBuffer::TakedownEventQueue *, EActiveRaceCarIndex);

	// GameBridgeGameStateToX.cpp:3950
	void TranslateGuiInterfaceToGuiEvents(InputBuffer *, const GameStateToGuiInterface *);

	// GameBridgeNetworkToX.cpp:306
	void TranslateNetworkInterfaceToGuiEvents(InputBuffer *, const NetworkToGuiInterface *);

	// GameBridgeNetworkToX.cpp:337
	void TranslateNetworkEventsToWorld(UpdateInputBuffer *, const OutputBuffer *);

	// GameBridgeNetworkToX.cpp:453
	void TranslateNetworkEventsToGameEvents(PreWorldInputBuffer *, const OutputBuffer *);

	// GameBridgeNetworkToX.cpp:1053
	// Declaration
	void TranslateNetworkEventsToGuiEvents(InputBuffer *, const OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// GameBridgeNetworkToX.cpp:1472
		using namespace CgsDev::Message;

		// GameBridgeNetworkToX.cpp:1473
		using namespace CgsDev::Message;

		// GameBridgeNetworkToX.cpp:1474
		using namespace CgsDev::Message;

		// GameBridgeNetworkToX.cpp:1475
		using namespace CgsDev::Message;

		// GameBridgeNetworkToX.cpp:1476
		using namespace CgsDev::Message;

		// GameBridgeNetworkToX.cpp:1477
		using namespace CgsDev::Message;

		// GameBridgeNetworkToX.cpp:1506
		using namespace CgsDev::Message;

		// GameBridgeNetworkToX.cpp:1507
		using namespace CgsDev::Message;

		// GameBridgeNetworkToX.cpp:1508
		using namespace CgsDev::Message;

		// GameBridgeNetworkToX.cpp:1509
		using namespace CgsDev::Message;

		// GameBridgeNetworkToX.cpp:1510
		using namespace CgsDev::Message;

		// GameBridgeNetworkToX.cpp:1511
		using namespace CgsDev::Message;

	}

	// GameBridgeGUIToX.cpp:870
	void TranslateGuiEventsToNetworkEvents(NetworkEventQueue *, const InputBuffer::GuiEventQueue *);

	// GameBridgeGameStateToX.cpp:3764
	void TranslateShowtimeActionToGuiEvent(int32_t, const CgsModule::Event *, InputBuffer *);

	// BrnGameModule.cpp:3314
	void CheckGameActions(const OutputBuffer *);

	// BrnGameModule.cpp:3369
	void BindInputToPort(int32_t, PostWorldInputBuffer *);

	// BrnGameModule.cpp:3383
	// Declaration
	void HandleInputBindResult(const BindResult &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameModule.cpp:3390
		using namespace CgsDev::Message;

	}

	// BrnGameModule.cpp:3411
	// Declaration
	void HandleInputUnbindResult(const UnBindResult &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameModule.cpp:3418
		using namespace CgsDev::Message;

	}

	// BrnGameModule.cpp:3758
	void CheckClassSizes();

	// BrnGameModule.cpp:3592
	bool IsEventInGuiQueue(int32_t, const InputBuffer::GuiEventQueue *);

	// BrnGameModule.cpp:3626
	bool IsEventInGuiQueue(int32_t, const GuiEventQueueSmall *);

	// BrnGameModule.cpp:3661
	const CgsModule::Event * GetFirstEventInGuiQueueOfType(int32_t, const InputBuffer::GuiEventQueue *);

	// BrnGameModule.cpp:3694
	const CgsModule::Event * GetFirstEventInGuiQueueOfType(int32_t, const GuiEventQueueSmall *);

	// BrnGameModule.cpp:3727
	const CgsModule::Event * GetFirstEventInGuiQueueOfType(int32_t, const GuiStackEventQueue::GuiEventQueueLarge *);

	// BrnGameModule.cpp:3946
	void RenderDebugLoadingText();

	// BrnGameModule.cpp:3542
	BrnUpdateSet ConstructUpdateSetFromFsm();

	// BrnGameModule.cpp:3981
	void StepFrameCB(void *);

	// BrnGameModule.cpp:3996
	void PlayFrameCB(void *);

	// BrnGameModule.cpp:4013
	void QueryRequestDoStepFrame(const OutputBuffer *);

	// BrnGameModule.cpp:4048
	void UpdateRequestDoStepFrame();

	// GameBridgeGameStateToX.cpp:346
	bool AreOnlineLandmarksActive(const ScoringOutputInterface *);

	// GameBridgeGameStateToX.cpp:363
	BrnGui::StuntType MapStuntEnumsFromGameplayToGui(BrnGameState::StuntElementType);

}

// _built-in_
namespace :: {
	// BrnGameModule.h:1489
	extern BrnGame::BrnGameModule * gpBurnoutGame;

}

// BrnGameModule.h:1489
extern BrnGame::BrnGameModule * gpBurnoutGame;

// BrnGameModule.h:189
extern bool sbShowStreamStallMessage;

// BrnGlobalCpuMonitors.h:24
namespace BrnGame {
	// Declaration
	struct BrnGameModule {
	public:
		BrnGameModule();

		// BrnGameModule.h:1464
		bool HasGameTerminated();

	}

}

// BrnGameModule.h:179
void BrnGame::BrnGameModule::BrnGameModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

