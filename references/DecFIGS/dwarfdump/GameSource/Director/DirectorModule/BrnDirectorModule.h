// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct DirectorModule {
		// BrnDirectorModule.h:136
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_RESOURCES = 1,
			E_PREPARESTAGE_ICE = 2,
			E_PREPARESTAGE_WORLDMAP = 3,
			E_PREPARESTAGE_MANAGER = 4,
			E_PREPARESTAGE_BEHAVIOUR_CONTROLLER = 5,
			E_PREPARESTAGE_MOMENT_CONTROLLER = 6,
			E_PREPARESTAGE_ARBITRATOR = 7,
			E_PREPARESTAGE_DONE = 8,
		}

		// BrnDirectorModule.h:149
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_ARBITRATOR = 1,
			E_RELEASESTAGE_MOMENT_CONTROLLER = 2,
			E_RELEASESTAGE_BEHAVIOUR_CONTROLLER = 3,
			E_RELEASESTAGE_MANAGER = 4,
			E_RELEASESTAGE_WORLDMAP = 5,
			E_RELEASESTAGE_DONE = 6,
		}

		// BrnDirectorModule.h:261
		struct CameraDebugInfo {
			// BrnDirectorModule.h:262
			float32_t mfX;

			// BrnDirectorModule.h:263
			float32_t mfY;

			// BrnDirectorModule.h:264
			float32_t mfZ;

			// BrnDirectorModule.h:265
			float32_t mfFOV;

			// BrnDirectorModule.h:266
			float32_t mfAspectRatio;

			// BrnDirectorModule.h:267
			float32_t mfNearClip;

			// BrnDirectorModule.h:268
			Vector3 mAt;

		}

	}

	// BrnDirectorModule.h:82
	const CgsDev::PerfMonCpuPage KE_DIRECTOR_PERFMON_PAGE;

}

// BrnDirectorModule.h:102
struct BrnDirector::CameraFinaliser {
private:
	// BrnDirectorModule.h:119
	InertiaController mInertiaController;

	// BrnDirectorModule.h:120
	KeyAnimShakeController mShakeController;

	// BrnDirectorModule.h:121
	float32_t mfEnvironmentShakeMagnitude;

public:
	// BrnDirectorModule.h:106
	void Construct(const BrnDirector::DirectorResourceManager *);

	// BrnDirectorModule.h:109
	bool Prepare();

	// BrnDirectorModule.h:116
	void Update(const BrnDirector::DirectorIO::InputBuffer &, const GameState &, const BrnDirector::DirectorResourceManager &, Camera *);

}

// BrnDirectorModule.h:133
struct BrnDirector::DirectorModule : public CgsModule::ModuleSingleBuffered {
private:
	// BrnDirectorModule.h:221
	DebugComponent mDebugComponent;

	// BrnDirectorModule.h:222
	DirectorDevTools mDevTools;

	// BrnDirectorModule.h:226
	ICEWrapper mICEWrapper;

	// BrnDirectorModule.h:227
	bool mbUseIceWrapperCamera;

	// BrnDirectorModule.h:230
	Matrix44Affine mSceneSpace;

	// BrnDirectorModule.h:231
	CameraInterpolationController mGameCameraInterpolator;

	// BrnDirectorModule.h:232
	DirectorResourceManager mDirectorResourceManager;

	// BrnDirectorModule.h:233
	ShotSelector mShotSelector;

	// BrnDirectorModule.h:234
	CrashAnalyser mCrashAnalyser;

	// BrnDirectorModule.h:235
	CameraFinaliser mCameraFinaliser;

	// BrnDirectorModule.h:237
	SceneQueryInterface::LineTestFinePostOffice mLineTestFinePostOffice;

	// BrnDirectorModule.h:238
	SceneQueryInterface::LineTestNearestPostOffice mLineTestNearestPostOffice;

	// BrnDirectorModule.h:239
	SceneQueryInterface::LineTestFastDoubleSidedPostOffice mLineTestFastDoubleSidedPostOffice;

	// BrnDirectorModule.h:240
	SceneQueryInterface::SphereTestFastPostOffice mSphereTestFastPostOffice;

	// BrnDirectorModule.h:241
	SceneQueryInterface::VolumeTestFinePostOffice mVolumeTestFinePostOffice;

	// BrnDirectorModule.h:242
	SceneQueryInterface::VolumeTestDeepestPostOffice mVolumeTestDeepestPostOffice;

	// BrnDirectorModule.h:244
	WorldMap mWorldMap;

	// BrnDirectorModule.h:246
	AllVehicleData mAllVehicleData;

	// BrnDirectorModule.h:248
	Arbitrator mArbitrator;

	// BrnDirectorModule.h:249
	MomentController mMomentController;

	// BrnDirectorModule.h:250
	BehaviourManager mBehaviourController;

	// BrnDirectorModule.h:252
	Random mRandom;

	// BrnDirectorModule.h:254
	Camera mLastCamera;

	// BrnDirectorModule.h:256
	Camera2DRotationController mRotationController;

	// BrnDirectorModule.h:257
	CameraSphericalRotationController mSphericalRotationController;

	// BrnDirectorModule.h:271
	BrnDirector::DirectorModule::CameraDebugInfo mCameraDebugInfo;

	// BrnDirectorModule.h:272
	bool mbShowDebugCameraNames;

	// BrnDirectorModule.h:273
	bool mbDebugAssertNoIllegalSlomo;

	// BrnDirectorModule.h:276
	DebugLog mDefaultDebugLog;

	// BrnDirectorModule.h:277
	DebugPrinter mBehaviourDebugPrinter;

	// BrnDirectorModule.h:278
	DebugPrinter mMomentDebugPrinter;

	// BrnDirectorModule.h:279
	DebugPrinter mDefaultDebugPrinter;

	// BrnDirectorModule.h:281
	GameState mGameState;

	// BrnDirectorModule.h:283
	VehicleTracker mPlayerTracker;

	// BrnDirectorModule.h:285
	EffectInterface mEffectInterface;

	// BrnDirectorModule.h:287
	Camera mCamera;

	// BrnDirectorModule.h:289
	PrepareForModeAction mSavedPrepareForModeAction;

	// BrnDirectorModule.h:291
	BrnDirector::DirectorModule::EPrepareStage mePrepareStage;

	// BrnDirectorModule.h:292
	BrnDirector::DirectorModule::EReleaseStage meReleaseStage;

	// BrnDirectorModule.h:294
	float32_t mDisplayAspectRatio;

	// BrnDirectorModule.h:296
	bool mbAllowJumpMoment;

	// BrnDirectorModule.h:297
	bool mbAllowStuntMoment;

	// BrnDirectorModule.h:298
	bool mbAllowHardStopMoment;

	// BrnDirectorModule.h:300
	bool mbShowAllCameraNames;

	// BrnDirectorModule.h:302
	bool mbDisableAftertouchCamera;

	// BrnDirectorModule.h:304
	bool mbForceSloMoNotAllowed;

	// BrnDirectorModule.h:306
	bool mbAlwaysSuperWide;

	// BrnDirectorModule.h:308
	bool mbForceSuperSloMoInCrashes;

	// BrnDirectorModule.h:309
	bool mbShowWorldMapDebug;

	// BrnDirectorModule.h:310
	bool mbForceCutsceneBarsOn;

	// BrnDirectorModule.h:311
	bool mbRequestEffectsEnumeration;

	// BrnDirectorModule.h:313
	bool mbForceNextWorldCrashToBeFastTopDown;

	// BrnDirectorModule.h:314
	bool mbDisableDOF;

	// BrnDirectorModule.h:316
	bool mbWaitingForOnlinePostEventFinish;

	// BrnDirectorModule.h:317
	bool mbSavedPrepareForModeAction;

	// BrnDirectorModule.h:320
	bool mbShowCameraStateFlags;

	// BrnDirectorModule.h:321
	bool mbDebugZeroTimestep;

	// BrnDirectorModule.h:322
	bool mbDebugSingleTimestep;

	// BrnDirectorModule.h:323
	bool mbDebugTestFinishLines;

	// BrnDirectorModule.h:324
	bool mbDebugForceEventStateToActive;

	// BrnDirectorModule.h:326
	uint8_t muRenderMetricsActivationID;

	// BrnDirectorModule.h:329
	int32_t miPerfCount_PreSQUpdate;

	// BrnDirectorModule.h:330
	int32_t miPerfCount_MainUpdate;

	// BrnDirectorModule.h:331
	int32_t miPerfCount_PostGuiUpdate;

public:
	// BrnDirectorModule.cpp:42
	virtual void Construct(float32_t);

	// BrnDirectorModule.cpp:161
	virtual bool Prepare(OutputBuffer *, const AllocatorList *);

	// BrnDirectorModule.cpp:285
	virtual bool Release();

	// BrnDirectorModule.cpp:382
	virtual void Destruct();

	// BrnDirectorModule.cpp:412
	void PreSceneQueryUpdate(IOBufferStack *, IOBufferStack *, const BrnDirector::DirectorIO::InputBuffer *, OutputBuffer *, SceneQueryOutputBuffer *);

	// BrnDirectorModule.cpp:507
	// Declaration
	void Update(IOBufferStack *, IOBufferStack *, const BrnDirector::DirectorIO::InputBuffer *, OutputBuffer *, const SceneQueryInputBuffer *, SceneQueryOutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDirectorModule.cpp:657
		using namespace CgsDev::Message;

		// BrnDirectorModule.cpp:666
		using namespace CgsDev::Message;

		// BrnDirectorModule.cpp:672
		using namespace CgsDev::Message;

	}

	// BrnDirectorModule.cpp:951
	void PostGuiUpdate(IOBufferStack *, IOBufferStack *, const BrnDirector::DirectorIO::InputBuffer *, OutputBuffer *);

	// BrnDirectorModule.h:432
	const Camera & GetCamera();

	// BrnDirectorModule.cpp:2551
	void DebugMemoryInit(BrnDirector::DirectorModule *);

private:
	// BrnDirectorModule.h:415
	bool IsDebugZeroTimestep() const;

	// BrnDirectorModule.cpp:2027
	void UpdateCameraBehavioursPreScene(const BrnDirector::DirectorIO::InputBuffer *, OutputBuffer *, const SceneQueryInterface &, EActiveRaceCarIndex);

	// BrnDirectorModule.cpp:2149
	void UpdateCameraBehavioursPostScene(const BrnDirector::DirectorIO::InputBuffer *, OutputBuffer *, const SceneQueryInterface &, EActiveRaceCarIndex);

	// BrnDirectorModule.cpp:2267
	void UpdateMoments(const BrnDirector::DirectorIO::InputBuffer *, OutputBuffer *, EActiveRaceCarIndex);

	// BrnDirectorModule.cpp:2326
	void UpdateICE(const BrnDirector::DirectorIO::InputBuffer *, OutputBuffer *, EActiveRaceCarIndex);

	// BrnDirectorModule.cpp:2363
	void UpdateArbitrator(const BrnDirector::DirectorIO::InputBuffer *, OutputBuffer *, Camera &, EActiveRaceCarIndex);

	// BrnDirectorModule.cpp:2413
	void UpdateAttribSys(const BrnDirector::DirectorIO::InputBuffer *);

	// BrnDirectorModule.cpp:2490
	void UpdateDebugPrinters();

	// BrnDirectorModule.cpp:2529
	void UpdateDebugInfo(const Camera &);

	// BrnDirectorModule.cpp:2441
	void DebugDisplayCurrentCamera(const Camera &);

	// BrnDirectorModule.cpp:1101
	void ProcessInputQueue(const BrnDirector::DirectorIO::InputBuffer *, OutputBuffer *);

	// BrnDirectorModule.cpp:1860
	void CalcTrafficLightSpace();

	// BrnDirectorModule.cpp:1899
	void ProcessSceneQueryResults(const SceneQueryInputBuffer *);

	// BrnDirectorModule.cpp:1983
	void ProcessNewVehicleEvents(const BrnDirector::DirectorIO::InputBuffer *);

	// BrnDirectorModule.cpp:2567
	void ProcessPfxOverrides(Camera &);

	// BrnDirectorModule.cpp:2679
	void HandlePrepareForModeAction(const PrepareForModeAction *);

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnDirectorModule.h:82
	const CgsDev::PerfMonCpuPage KE_DIRECTOR_PERFMON_PAGE;

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct DirectorModule {
	public:
		// BrnDirectorModule.h:432
		const Camera & GetCamera();

	}

	// BrnDirectorModule.h:82
	const CgsDev::PerfMonCpuPage KE_DIRECTOR_PERFMON_PAGE;

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct DirectorModule {
		// BrnDirectorModule.h:261
		struct CameraDebugInfo {
			// BrnDirectorModule.h:262
			float32_t mfX;

			// BrnDirectorModule.h:263
			float32_t mfY;

			// BrnDirectorModule.h:264
			float32_t mfZ;

			// BrnDirectorModule.h:265
			float32_t mfFOV;

			// BrnDirectorModule.h:266
			float32_t mfAspectRatio;

			// BrnDirectorModule.h:267
			float32_t mfNearClip;

			// BrnDirectorModule.h:268
			Vector3 mAt;

		}

	public:
		DirectorModule();

		~DirectorModule();

	}

	// BrnDirectorModule.h:82
	const CgsDev::PerfMonCpuPage KE_DIRECTOR_PERFMON_PAGE;

}

// BrnDirectorModule.h:102
struct BrnDirector::CameraFinaliser {
private:
	// BrnDirectorModule.h:119
	InertiaController mInertiaController;

	// BrnDirectorModule.h:120
	KeyAnimShakeController mShakeController;

	// BrnDirectorModule.h:121
	float32_t mfEnvironmentShakeMagnitude;

public:
	// BrnDirectorModule.h:106
	void Construct(const BrnDirector::DirectorResourceManager *);

	// BrnDirectorModule.h:109
	bool Prepare();

	// BrnDirectorModule.h:116
	void Update(const InputBuffer &, const GameState &, const BrnDirector::DirectorResourceManager &, Camera *);

}

// BrnDirectorModule.h:133
void BrnDirector::DirectorModule::DirectorModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDirectorModule.h:133
void BrnDirector::DirectorModule::~DirectorModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

