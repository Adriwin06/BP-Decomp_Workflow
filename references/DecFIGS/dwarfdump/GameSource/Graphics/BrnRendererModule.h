// BrnRendererModule.h:288
extern const uint32_t KU_NUM_OBJECT_TO_MESH_DISPATCH_JOBS = 16;

// BrnRendererModule.h:163
struct BrnRendererModule : public CgsModule::ModuleSingleBuffered {
	// BrnRendererModule.h:165
	enum ERendererPrepareStage {
		eRendererPrepareStart = 0,
		eRendererPrepareManager = 1,
		eRendererPrepareBlobbyShadows = 2,
		eRendererPrepareCoronas = 3,
		eRendererPrepareDone = 4,
	}

	// BrnRendererModule.h:174
	enum ERendererReleaseStage {
		eRendererReleaseStart = 0,
		eRendererReleaseCoronas = 1,
		eRendererReleaseBlobbyShadows = 2,
		eRendererReleaseManager = 3,
		eRendererReleaseDone = 4,
	}

	// BrnRendererModule.h:183
	enum ERendererModelOnlyDispatchJob {
		eRendererModelOnlyDispatchJob_World_Part0 = 0,
		eRendererModelOnlyDispatchJob_World_Part1 = 1,
		eRendererModelOnlyDispatchJob_World_Part2 = 2,
		eRendererModelOnlyDispatchJob_World_Part3 = 3,
		eRendererModelOnlyDispatchJob_Car_Part0 = 4,
		eRendererModelOnlyDispatchJob_Shadow0 = 5,
		eRendererModelOnlyDispatchJob_Shadow1 = 6,
		eRendererModelOnlyDispatchJob_Shadow0BackFaceCull = 7,
		eRendererModelOnlyDispatchJob_Shadow1BackFaceCull = 8,
		eRendererModelOnlyDispatchJob_Shadow2 = 9,
		eRendererModelOnlyDispatchJob_EnvmapPosX = 10,
		eRendererModelOnlyDispatchJob_EnvmapNegX = 11,
		eRendererModelOnlyDispatchJob_EnvmapPosY = 12,
		eRendererModelOnlyDispatchJob_EnvmapNegY = 13,
		eRendererModelOnlyDispatchJob_EnvmapPosZ = 14,
		eRendererModelOnlyDispatchJob_EnvmapNegZ = 15,
		eRendererModelOnlyDispatchJob_End = 16,
	}

	// BrnRendererModule.h:210
	enum ERendererDoubleBufferedDispatchListID {
		eRendererModelOnlyDispatchListBegin = 0,
		eRendererModelOnlyDispatchListShadow0 = 0,
		eRendererModelOnlyDispatchListShadow1 = 1,
		eRendererModelOnlyDispatchListShadow0BackFaceCull = 2,
		eRendererModelOnlyDispatchListShadow1BackFaceCull = 3,
		eRendererModelOnlyDispatchListShadow2 = 4,
		eRendererModelOnlyDispatchListEnvmapPosX = 5,
		eRendererModelOnlyDispatchListEnvmapNegX = 6,
		eRendererModelOnlyDispatchListEnvmapPosY = 7,
		eRendererModelOnlyDispatchListEnvmapNegY = 8,
		eRendererModelOnlyDispatchListEnvmapPosZ = 9,
		eRendererModelOnlyDispatchListEnvmapNegZ = 10,
		eRendererModelOnlyDispatchListWorld = 11,
		eRendererModelOnlyDispatchListCar = 12,
		eRendererModelOnlyDispatchListEnd = 13,
		eRendererModelOnlyDispatchListMax = 13,
	}

	// BrnRendererModule.h:290
	enum EFrameStallStage {
		E_FRAMESTALL_NOT_STALLED = 0,
		E_FRAMESTALL_SYNCING_BUFFERS = 1,
		E_FRAMESTALL_STALLED = 2,
	}

	// BrnRendererModule.h:696
	struct BrnCpuMonitors {
		// BrnRendererModule.h:703
		int32_t miWholeDispatchThread;

		// BrnRendererModule.h:704
		int32_t miObjectToMeshListConversion;

		// BrnRendererModule.h:705
		int32_t miStartSortJobs;

		// BrnRendererModule.h:706
		int32_t miStartTintBlendJob;

		// BrnRendererModule.h:707
		int32_t miDispatchShadowmapNearCSMList;

		// BrnRendererModule.h:708
		int32_t miWaitOnShadowNearSortJob;

		// BrnRendererModule.h:709
		int32_t miDispatchShadowmapFarCSMList;

		// BrnRendererModule.h:710
		int32_t miWaitOnShadowFarSortJob;

		// BrnRendererModule.h:711
		int32_t miDispatchEnvmapLists;

		// BrnRendererModule.h:712
		int32_t miWaitOnEnvmapSortJobs;

		// BrnRendererModule.h:713
		int32_t miDispatchWorldLists;

		// BrnRendererModule.h:714
		int32_t miDispatchWorldOpaqueList;

		// BrnRendererModule.h:715
		int32_t miDispatchWorldTransparentList;

		// BrnRendererModule.h:716
		int32_t miWaitOnWorldOpaqueSortJob;

		// BrnRendererModule.h:717
		int32_t miWaitOnWorldTransparentSortJob;

		// BrnRendererModule.h:718
		int32_t miGenerateOcclusionQueryList;

		// BrnRendererModule.h:719
		int32_t miDispatchOcclusionQueries;

		// BrnRendererModule.h:720
		int32_t miDispatchCarLists;

		// BrnRendererModule.h:721
		int32_t miDispatchCarOpaqueList;

		// BrnRendererModule.h:722
		int32_t miDispatchCarTransparentList;

		// BrnRendererModule.h:723
		int32_t miWaitOnCarOpaqueSortJob;

		// BrnRendererModule.h:724
		int32_t miWaitOnCarTransparentSortJob;

		// BrnRendererModule.h:725
		int32_t miRenderSky;

		// BrnRendererModule.h:726
		int32_t miRenderCoronas;

		// BrnRendererModule.h:727
		int32_t miEffectsUpdate;

		// BrnRendererModule.h:728
		int32_t miBuildParticleVertexBuffers;

		// BrnRendererModule.h:729
		int32_t miWaitOnParticleVertexBuffersJob;

		// BrnRendererModule.h:730
		int32_t miRenderFullResParticles;

		// BrnRendererModule.h:731
		int32_t miRenderQuarterResParticles;

		// BrnRendererModule.h:732
		int32_t miPPUShaderPatching;

		// BrnRendererModule.h:733
		int32_t miRenderIm3d;

		// BrnRendererModule.h:734
		int32_t miRenderDebugData;

		// BrnRendererModule.h:735
		int32_t miRenderPostFX;

		// BrnRendererModule.h:736
		int32_t miRenderHUD;

		// BrnRendererModule.h:737
		int32_t miRenderApt;

		// BrnRendererModule.h:738
		int32_t miShowPixelBuffer;

		// BrnRendererModule.h:739
		int32_t miClearGraphicsContext;

		// BrnRendererModule.h:740
		int32_t miWaitOnPreZSortJob;

		// BrnRendererModule.h:741
		int32_t miDispatchPreZ;

	public:
		// BrnRendererModule.h:700
		void Construct();

	}

	// BrnRendererModule.h:745
	struct BrnGpuMonitors {
		// BrnRendererModule.h:752
		int32_t miScreenClear;

		// BrnRendererModule.h:753
		int32_t miShadowmap;

		// BrnRendererModule.h:754
		int32_t miSky;

		// BrnRendererModule.h:755
		int32_t miEnvironmentMap;

		// BrnRendererModule.h:756
		int32_t miWorldOpaque;

		// BrnRendererModule.h:757
		int32_t miWorldTransparent;

		// BrnRendererModule.h:758
		int32_t miCarOpaque;

		// BrnRendererModule.h:759
		int32_t miCarTransparent;

		// BrnRendererModule.h:764
		int32_t miDownsampleMSAAAndCompParticles;

		// BrnRendererModule.h:768
		int32_t miSunCoronaVisibilityTest;

		// BrnRendererModule.h:769
		int32_t miFullResParticles;

		// BrnRendererModule.h:770
		int32_t miQuarterResParticles;

		// BrnRendererModule.h:771
		int32_t miCoronas;

		// BrnRendererModule.h:772
		int32_t miPostFX;

		// BrnRendererModule.h:773
		int32_t miIm3dAndRacePositions;

		// BrnRendererModule.h:774
		int32_t miMenusAndHud;

		// BrnRendererModule.h:779
		int32_t miDebug3d;

		// BrnRendererModule.h:780
		int32_t miDebug2d;

		// BrnRendererModule.h:781
		int32_t miPreZ;

	public:
		// BrnRendererModule.h:749
		void Construct();

	}

	// BrnRendererModule.h:785
	struct BrnGpuHwCounters {
		// BrnRendererModule.h:790
		int32_t miEnvMap;

		// BrnRendererModule.h:791
		int32_t miShadowMap;

		// BrnRendererModule.h:792
		int32_t miWorldOpaque;

		// BrnRendererModule.h:793
		int32_t miCarOpaque;

		// BrnRendererModule.h:794
		int32_t miWorldTransparent;

		// BrnRendererModule.h:795
		int32_t miCarTransparent;

		// BrnRendererModule.h:796
		int32_t miPostFX;

	public:
		// BrnRendererModule.h:788
		void Construct();

	}

	// BrnRendererModule.h:288
	extern const uint32_t KU_NUM_OBJECT_TO_MESH_DISPATCH_JOBS = 16;

private:
	// BrnRendererModule.h:488
	BrnRendererModule::ERendererPrepareStage mePrepareStage;

	// BrnRendererModule.h:489
	BrnRendererModule::ERendererReleaseStage meReleaseStage;

	// BrnRendererModule.h:492
	renderengine::Device::Parameters::DisplayType mDisplayType;

	// BrnRendererModule.h:493
	uint16_t mu16FrontBufferHeight;

	// BrnRendererModule.h:494
	bool mbIsHD;

	// BrnRendererModule.h:495
	bool mbIsInterlaced;

	// BrnRendererModule.h:498
	BrnRendererMemory mAllocatedRenderTargets;

	// BrnRendererModule.h:501
	CgsGraphics::BufferedDispatchFrame mDoubleBufferedDispatchFrame;

	// BrnRendererModule.h:502
	DispatchFrame mSingleBufferedDispatchFrame;

	// BrnRendererModule.h:505
	EffectsArbitrator mEffectsArbitrator;

	// BrnRendererModule.h:508
	BrnShaderConstantsFrame[2] maShaderConstantsFrames;

	// BrnRendererModule.h:509
	uint8_t mu8ShaderConstantsFrameInternal;

	// BrnRendererModule.h:510
	uint8_t mu8ShaderConstantsFrameExternal;

	// BrnRendererModule.h:512
	DispatchPacketInterpreter * mpInterpreter;

	// BrnRendererModule.h:513
	void (*)(DispatchCommand *, CgsGraphics::DispatchFrame *, void *, float32_t)[4] maInterpretFunctions;

	// BrnRendererModule.h:516
	CgsGraphics::Im2dRenderBuffer mIm2dRenderBuffer;

	// BrnRendererModule.h:520
	CgsGraphics::Im2d mIm2dRenderer;

	// BrnRendererModule.h:521
	CgsGraphics::Im2dUntex mIm2dRendererUntex;

	// BrnRendererModule.h:524
	CgsGraphics::Im3dRenderBuffer mIm3dRenderBuffer;

	// BrnRendererModule.h:525
	CgsGraphics::Im3d mIm3dRenderer;

	// BrnRendererModule.h:526
	CgsGraphics::Im3dRenderBufferUntex mIm3dRenderBufferUntex;

	// BrnRendererModule.h:527
	CgsGraphics::Im3dUntex mIm3dRendererUntex;

	// BrnRendererModule.h:528
	BrnGraphics::Im3dSkyDome mIm3dRendererSkyDome;

	// BrnRendererModule.h:529
	CgsGraphics::Im3dZOnly mIm3dRendererZOnly;

	// BrnRendererModule.h:540
	CgsGraphics::Im3dRenderBuffer mIm3dDebugRenderBuffer;

	// BrnRendererModule.h:541
	CgsGraphics::Im2dRenderBuffer mIm2dDebugRenderBuffer;

	// BrnRendererModule.h:544
	TextureState * mpTextureState;

	// BrnRendererModule.h:545
	Parameters mTextureStateParams;

	// BrnRendererModule.h:546
	Resource mTextureStateResource;

	// BrnRendererModule.h:549
	TextureState * mpEnvMapTextureState;

	// BrnRendererModule.h:550
	Parameters mEnvMapTextureStateParams;

	// BrnRendererModule.h:551
	Resource mEnvMapTextureStateResource;

	// BrnRendererModule.h:553
	renderengine::Texture * mpGlassFractureTexture;

	// BrnRendererModule.h:554
	TextureState * mpGlassFractureTextureState;

	// BrnRendererModule.h:555
	Parameters mGlassFractureTextureStateParams;

	// BrnRendererModule.h:556
	Resource mGlassFractureTextureStateResource;

	// BrnRendererModule.h:559
	Resource mBackBufferTextureResource;

	// BrnRendererModule.h:563
	TextureState *[2] mpShadowMapTextureState;

	// BrnRendererModule.h:566
	CgsGraphics::Im3dRenderBuffer mIm3dBufferRacePosition;

	// BrnRendererModule.h:567
	CgsGraphics::Im3dRenderBuffer mIm3dBufferMenusAndHud;

	// BrnRendererModule.h:570
	BrnBlobbyShadowManager mBlobbyShadowManager;

	// BrnRendererModule.h:571
	renderengine::Texture * mpBlobbyShadowTexture;

	// BrnRendererModule.h:572
	float32_t mfBlobbyShadowAlpha;

	// BrnRendererModule.h:574
	BrnCoronaManager mCoronaManager;

	// BrnRendererModule.h:577
	CgsBlendStateFactory mBlendStateFactory;

	// BrnRendererModule.h:578
	CgsRasterizerStateFactory mRasterizerStateFactory;

	// BrnRendererModule.h:579
	CgsDepthStencilStateFactory mDepthStencilStateFactory;

	// BrnRendererModule.h:582
	BrnResource::LinearResourceAllocator * mpGraphicsAllocator;

	// BrnRendererModule.h:585
	Job[16] maObjectToMeshJob;

	// BrnRendererModule.h:586
	ObjectToMeshJobInfo[16] maObjectToMeshJobData;

	// BrnRendererModule.h:587
	DispatchObjectContext[16] maObjectToMeshJobContext;

	// BrnRendererModule.h:588
	DispatchList *[16] mapaObjectToMeshJob_OutputDispatchLists;

	// BrnRendererModule.h:591
	Job[5] maShadowMapSortJob;

	// BrnRendererModule.h:592
	SortInfo[5] maShadowMapSortJobData;

	// BrnRendererModule.h:594
	Job[6] maEnvmapSortJobs;

	// BrnRendererModule.h:595
	SortInfo[6] maEnvmapSortJobData;

	// BrnRendererModule.h:597
	Job mPreZSortJob;

	// BrnRendererModule.h:598
	SortInfo mPreZSortJobData;

	// BrnRendererModule.h:599
	Job mWorldOpaqueSortJob;

	// BrnRendererModule.h:600
	SortInfo mWorldOpaqueSortJobData;

	// BrnRendererModule.h:601
	Job mCarOpaqueSortJob;

	// BrnRendererModule.h:602
	SortInfo mCarOpaqueSortJobData;

	// BrnRendererModule.h:603
	Job mWorldTransparentSortJob;

	// BrnRendererModule.h:604
	SortInfo mWorldTransparentSortJobData;

	// BrnRendererModule.h:605
	Job mCarTransparentSortJob;

	// BrnRendererModule.h:606
	SortInfo mCarTransparentSortJobData;

	// BrnRendererModule.h:609
	Job mOcclusionWorldOpaqueJob;

	// BrnRendererModule.h:610
	OcclusionJobData mOcclusionJobWorldOpaqueInfo;

	// BrnRendererModule.h:613
	bool mbMultisampledBackbuffer;

	// BrnRendererModule.h:614
	bool mbShowEnvironmentMap;

	// BrnRendererModule.h:615
	bool mbShowShadowMap;

	// BrnRendererModule.h:616
	bool mbSortDisplayListsWideNotLong;

	// BrnRendererModule.h:617
	int32_t miShowShadowMapIndex;

	// BrnRendererModule.h:619
	float32_t mfAspectCorrection;

	// BrnRendererModule.h:622
	RenderSwitches mRenderSwitches;

	// BrnRendererModule.h:623
	bool mbRenderPreZ;

	// BrnRendererModule.h:624
	bool mbRenderWorldOpaque;

	// BrnRendererModule.h:625
	bool mbRenderCarsOpaque;

	// BrnRendererModule.h:626
	bool mbRenderSky;

	// BrnRendererModule.h:627
	bool mbRenderWorldTransparent;

	// BrnRendererModule.h:628
	bool mbRenderCarsTransparent;

	// BrnRendererModule.h:629
	bool mbRenderBlobbyShadows;

	// BrnRendererModule.h:630
	bool mbRenderParticles;

	// BrnRendererModule.h:631
	bool mbRenderCoronas;

	// BrnRendererModule.h:632
	bool mbRenderWorldImmediateMode;

	// BrnRendererModule.h:633
	bool mbRenderPostFX;

	// BrnRendererModule.h:634
	bool mbRenderHudImmediateMode;

	// BrnRendererModule.h:636
	bool mbOcclusionCullCarOpaque;

	// BrnRendererModule.h:637
	bool mbOcclusionCullWorldOpaque;

	// BrnRendererModule.h:638
	bool mbOcclusionCullCarTransparent;

	// BrnRendererModule.h:639
	bool mbOcclusionCullWorldTransparent;

	// BrnRendererModule.h:640
	bool mbOcclusionCullShadowMap;

	// BrnRendererModule.h:641
	bool mbPreZNearOnly;

	// BrnRendererModule.h:642
	bool mbRenderPreZAlpha;

	// BrnRendererModule.h:643
	float32_t mfPreZDistanceThreshold;

	// BrnRendererModule.h:644
	float32_t mfOccludeeNearClipOffset;

	// BrnRendererModule.h:645
	uint32_t muOcclusionCullIndexCountThreshold;

	// BrnRendererModule.h:647
	bool mbGreyBackgroundColour;

	// BrnRendererModule.h:650
	bool mbClearDispatchCounts;

	// BrnRendererModule.h:651
	uint32_t mu32NumWorldOpaqueObjectTotals;

	// BrnRendererModule.h:652
	uint32_t mu32NumCarOpaqueObjectTotals;

	// BrnRendererModule.h:653
	uint32_t mu32NumWorldTransparentObjectTotals;

	// BrnRendererModule.h:654
	uint32_t mu32NumCarTransparentObjectTotals;

	// BrnRendererModule.h:655
	uint32_t mu32NumShadowObjectTotals;

	// BrnRendererModule.h:656
	uint32_t mu32DispatchFrameCounter;

	// BrnRendererModule.h:657
	uint32_t mu32NumWorldOpaqueObjects;

	// BrnRendererModule.h:658
	uint32_t mu32NumCarOpaqueObjects;

	// BrnRendererModule.h:659
	uint32_t mu32NumWorldTransparentObjects;

	// BrnRendererModule.h:660
	uint32_t mu32NumCarTransparentObjects;

	// BrnRendererModule.h:661
	uint32_t mu32NumShadowObjects;

	// BrnRendererModule.h:664
	bool mbUpdateThreadTakeScreenshot;

	// BrnRendererModule.h:665
	bool mbDispatchThreadTakeScreenshot;

	// BrnRendererModule.h:666
	bool mbCaptureOverlaysInScreenshot;

	// BrnRendererModule.h:667
	uint32_t muScreenshotCounter;

	// BrnRendererModule.h:668
	char[32] macScreenShotText;

	// BrnRendererModule.h:671
	Vector3 mKeyLightDirection;

	// BrnRendererModule.h:672
	Vector3 mKeyLightColor;

	// BrnRendererModule.h:673
	Vector3 mKeyLightSpecularColour;

	// BrnRendererModule.h:674
	Vector3 mAmbientColour;

	// BrnRendererModule.h:677
	Vector4 mvBackgroundColour;

	// BrnRendererModule.h:679
	const Texture * mpCloudDensity0Texture;

	// BrnRendererModule.h:680
	const Texture * mpCloudLighting0Texture;

	// BrnRendererModule.h:681
	BrnSkyDomeManager mSkyDome;

	// BrnRendererModule.h:682
	BrnSunCorona mSunCorona;

	// BrnRendererModule.h:684
	BrnRendererModule::EFrameStallStage meFrameStallStage;

	// BrnRendererModule.h:685
	int miFrameStallCountdown;

	// BrnRendererModule.cpp:234
	extern bool mbIsRenderingAtFullFrameRate;

	// BrnRendererModule.h:689
	OcclusionCullManager mOcclusionCullManager;

	// BrnRendererModule.h:691
	LoadingScreenRenderer mLoadingScreenRenderer;

	// BrnRendererModule.h:692
	ResourceHandle mCalibrationTextureHandle;

	// BrnRendererModule.h:799
	BrnRendererModule::BrnCpuMonitors mCpuMonitors;

	// BrnRendererModule.h:800
	BrnRendererModule::BrnGpuMonitors mGpuMonitors;

	// BrnRendererModule.h:801
	BrnRendererModule::BrnGpuHwCounters mGpuHwMonitors;

	// BrnRendererModule.h:802
	int32_t miCpuPerfMon_DispatchThread;

	// BrnRendererModule.h:805
	ShadowMapRenderManager mShadowMapRenderManager;

	// BrnRendererModule.h:808
	bool mbDiskErrorLastFrame;

	// BrnRendererModule.h:809
	int32_t miFramesSinceDiskErrorReported;

	// BrnRendererModule.h:814
	DebugComponent mDebugComponent;

public:
	// BrnRendererModule.cpp:483
	void DeviceInitialise();

	// BrnRendererModule.cpp:628
	int32_t GetVSynchRate();

	// BrnRendererModule.cpp:696
	void Construct(const BrnCpuMonitors &, float32_t &, bool &);

	// BrnRendererModule.cpp:1349
	virtual void Destruct();

	// BrnRendererModule.cpp:1386
	bool Prepare(const AllocatorList *);

	// BrnRendererModule.cpp:1520
	bool PrepareAgain(const Texture *, const Texture *, const Texture *, const Texture *, const Texture *);

	// BrnRendererModule.cpp:2180
	void Render(BrnEffects::EffectsModule *, const DispatchThreadInputBuffer *);

	// BrnRendererModule.cpp:1558
	virtual bool Release();

	// BrnRendererModule.cpp:1689
	void StartOfFrame();

	// BrnRendererModule.cpp:4386
	void EndOfFrame(bool);

	// BrnRendererModule.cpp:4510
	void Update(IOBufferStack *, IOBufferStack *, const InputBuffer *, OutputBuffer *);

	// BrnRendererModule.cpp:4815
	void DebugMemoryInit(BrnRendererModule *);

	// BrnRendererModule.cpp:5066
	void RenderAssert(const AssertData *);

	// BrnRendererModule.cpp:2063
	void RenderThreeThreadMonitors(bool, bool, bool);

	// BrnRendererModule.cpp:5177
	void DEBUGTriggerScreenShot(const char *);

private:
	// BrnRendererModule.cpp:4457
	void SwapBuffers();

	// BrnRendererModule.h:375
	void SetVignetteValues();

	// BrnRendererModule.h:378
	void SetBloomValues();

	// BrnRendererModule.cpp:1831
	void ConvertObjectsToMeshes(CgsGraphics::BufferedDispatchFrame &, DispatchFrame &, DispatchPacketInterpreter *, const DispatchObjectContext &);

	// BrnRendererModule.cpp:1767
	void CreateObjectToMeshJob(BrnRendererModule::ERendererModelOnlyDispatchJob, const DispatchObjectContext &, DispatchPacketInterpreter *, BrnRendererModule::ERendererDoubleBufferedDispatchListID, int32_t, int32_t);

	// BrnRendererModule.cpp:3615
	void SortDispatchLists(DispatchFrame &);

	// BrnRendererModule.cpp:3787
	void BeginRenderAntiAliased(float32_t, bool8_t, uint8_t);

	// BrnRendererModule.cpp:3885
	void BeginRenderAntiAliasedTransparent();

	// BrnRendererModule.cpp:3909
	void ResolveMSAA(float32_t, uint8_t);

	// BrnRendererModule.cpp:4041
	void EndRenderAntiAliased();

	// BrnRendererModule.cpp:4113
	void ComputeSunCoronaVisibility();

	// BrnRendererModule.cpp:4218
	void EndRenderPostFx(RenderTarget *);

	// BrnRendererModule.cpp:4236
	void BeginRenderMenusAfterPostFx();

	// BrnRendererModule.cpp:4251
	void EndRenderMenus();

	// BrnRendererModule.cpp:4153
	void BeginRenderEnvironmentMapFace(uint32_t, float32_t);

	// BrnRendererModule.cpp:4196
	void EndRenderEnvironmentMapFace(uint32_t);

	// BrnRendererModule.cpp:4291
	void BeginQuarterResBuffer();

	// BrnRendererModule.cpp:4333
	void EndQuarterResBuffer();

	// BrnRendererModule.cpp:4353
	void ClearGraphicsContext();

	// BrnRendererModule.cpp:4648
	void TakeScreenshot();

	// BrnRendererModule.cpp:5000
	void TakeSnapShot(const SnapShotRequest &);

	// BrnRendererModule.cpp:1622
	// Declaration
	void MemoryUsage() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRendererModule.cpp:1653
		using namespace CgsDev::Message;

		// BrnRendererModule.cpp:1654
		using namespace CgsDev::Message;

		// BrnRendererModule.cpp:1658
		using namespace CgsDev::Message;

		// BrnRendererModule.cpp:1661
		using namespace CgsDev::Message;

		// BrnRendererModule.cpp:1662
		using namespace CgsDev::Message;

		// BrnRendererModule.cpp:1668
		using namespace CgsDev::Message;

		// BrnRendererModule.cpp:1669
		using namespace CgsDev::Message;

		// BrnRendererModule.cpp:1670
		using namespace CgsDev::Message;

		// BrnRendererModule.cpp:1671
		using namespace CgsDev::Message;

		// BrnRendererModule.cpp:1673
		using namespace CgsDev::Message;

	}

	// BrnRendererModule.cpp:4954
	// Declaration
	void DebugDisplayRenderTarget(renderengine::Texture *, Vector2, Vector2, RGBA) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRendererModule.cpp:4956
		using namespace renderengine;

	}

	// BrnRendererModule.cpp:5129
	void RenderLetterBoxBars(CgsGraphics::Im2d &, float32_t);

}

// BrnRendererModule.h:819
extern BrnRendererModule::ERendererReleaseStage operator++(const BrnRendererModule::ERendererReleaseStage &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.h:819
		BrnRendererModule::ERendererReleaseStage leOldEnumIndex;

	}
}

// BrnRendererModule.h:818
extern BrnRendererModule::ERendererPrepareStage operator++(const BrnRendererModule::ERendererPrepareStage &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.h:818
		BrnRendererModule::ERendererPrepareStage leOldEnumIndex;

	}
}

// BrnRendererModule.h:163
void BrnRendererModule::BrnRendererModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRendererModule.h:163
void BrnRendererModule::~BrnRendererModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

