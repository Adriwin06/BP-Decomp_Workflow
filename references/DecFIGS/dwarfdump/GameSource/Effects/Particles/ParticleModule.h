// vertexbuffer.h:27
namespace BrnParticle {
	// Declaration
	struct ParticleModule {
		// ParticleModule.h:221
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MANAGER = 1,
			E_PREPARESTAGE_LOADBUNDLE = 2,
			E_PREPARESTAGE_DONE = 3,
		}

		// ParticleModule.h:229
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_MANAGER = 1,
			E_RELEASESTAGE_DONE = 2,
		}

		// ParticleModule.h:236
		enum EInitialLoadStage {
			E_INITIALLOADSTAGE_START = 0,
			E_INITIALLOADSTAGE_LOADBUNDLE = 1,
			E_INITIALLOADSTAGE_WFLOADBUNDLE = 2,
			E_INITIALLOADSTAGE_ACQUIRE_TEXTURE_NAME_MAP = 3,
			E_INITIALLOADSTAGE_WFACQUIRE_TEXTURE_NAME_MAP = 4,
			E_INITIALLOADSTAGE_ACQUIRE_MESH_COLLECTION = 5,
			E_INITIALLOADSTAGE_WFACQUIRE_MESH_COLLECTION = 6,
			E_INITIALLOADSTAGE_ACQUIRE_MESH_COLLECTION_TEXTURES = 7,
			E_INITIALLOADSTAGE_WFACQUIRE_MESH_COLLECTION_TEXTURES = 8,
			E_INITIALLOADSTAGE_ACQUIRE_PARTICLE_DESCRIPTION_COLLECTION = 9,
			E_INITIALLOADSTAGE_WFACQUIRE_PARTICLE_DESCRIPTION_COLLECTION = 10,
			E_INITIALLOADSTAGE_ACQUIRE_TEXTURES = 11,
			E_INITIALLOADSTAGE_WFACQUIRE_TEXTURES = 12,
			E_INITIALLOADSTAGE_ACQUIRE_VFX_PROP_COLLECTION = 13,
			E_INITIALLOADSTAGE_WFACQUIRE_VFX_PROP_COLLECTION = 14,
			E_INITIALLOADSTAGE_PROPS = 15,
			E_INITIALLOADSTAGE_WFPROPS = 16,
			E_INITIALLOADSTAGE_PROPS_LOADBUNDLE = 17,
			E_INITIALLOADSTAGE_PROPS_WFLOADBUNDLE = 18,
			E_INITIALLOADSTAGE_DONE = 19,
		}

		// ParticleModule.h:565
		struct DispatchThreadUpdateData {
			// ParticleModule.h:566
			float32_t mfCurrentTime;

			// ParticleModule.h:567
			float32_t mfCurrentTimeStep;

			// ParticleModule.h:568
			uint32_t muChangedEffects;

			// ParticleModule.h:569
			Matrix44Affine mViewMatrix;

			// ParticleModule.h:570
			Matrix44 mProjectionMatrix;

			// ParticleModule.h:571
			LionEffect[128] maChangedLionEffects;

		}

		// ParticleModule.h:576
		struct ParticleRenderData {
			// ParticleModule.h:579
			extern const uint16_t eRenderDataFlagCameraSwitched = 1;

			// ParticleModule.h:580
			extern const uint16_t eRenderDataFlagRenderSparks = 2;

			// ParticleModule.h:581
			extern const uint16_t eRenderDataFlagRenderDebris = 4;

			// ParticleModule.h:582
			extern const uint16_t eRenderDataFlagRenderSimple = 8;

			// ParticleModule.h:583
			extern const uint16_t eRenderDataFlagRenderLion = 16;

			// ParticleModule.h:584
			extern const uint16_t eRenderDataFlagRenderTrails = 32;

			// ParticleModule.h:585
			extern const uint16_t eRenderDataFlagReducedFrameRate = 64;

			// ParticleModule.h:586
			extern const uint16_t eRenderDataFlagInSlowMotion = 128;

			// ParticleModule.h:589
			BrnParticle::ParticleModule * mpParticleModule;

			// ParticleModule.h:592
			uint32_t muCurrentFrame;

			// ParticleModule.h:593
			float32_t mfCurrentTime;

			// ParticleModule.h:594
			float32_t mfCurrentTimeStep;

			// ParticleModule.h:595
			float32_t mfTimeStepMultiplier;

			// ParticleModule.h:597
			Matrix44Affine mCameraTransform;

			// ParticleModule.h:598
			Camera mCgsCamera;

			// ParticleModule.h:601
			Vector3 mvSunDirection;

			// ParticleModule.h:602
			Vector3 mvSunColour;

			// ParticleModule.h:603
			Vector3 mvAmbientColour;

			// ParticleModule.h:604
			uint16_t muFlags;

			// ParticleModule.h:605
			const Texture * mpEnvironmentMap;

			// ParticleModule.h:606
			float32_t mfWhiteLevel;

		}

	}

	// ParticleModule.h:68
	const uint32_t KU_MAX_PLAYING_EFFECTS = 128;

}

// ParticleModule.h:87
struct BrnParticle::LionEffect {
	// ParticleModule.h:90
	extern const uint32_t KU_HANDLE_INVALID = 4294967295;

	// ParticleModule.h:95
	extern const uint16_t ePPEFlagInUse = 1;

	// ParticleModule.h:96
	extern const uint16_t ePPEFlagEnabled = 2;

	// ParticleModule.h:97
	extern const uint16_t ePPEFlagChanged = 4;

	// ParticleModule.h:98
	extern const uint16_t ePPEFlagCreate = 8;

	// ParticleModule.h:99
	extern const uint16_t ePPEFlagKill = 16;

	// ParticleModule.h:100
	extern const uint16_t ePPEFlagOverrideVelocity = 32;

private:
	// ParticleModule.h:184
	extern const uint32_t KU_HANDLE_INDEX_NUM_BITS = 7;

	// ParticleModule.h:185
	extern const uint32_t KU_HANDLE_INDEX_MASK = 127;

	// ParticleModule.h:186
	extern const uint32_t KU_HANDLE_INCREMENT = 128;

	// ParticleModule.h:187
	extern const uint32_t KU_HANDLE_VALID_MASK = 2147483647;

	// ParticleModule.h:191
	uint32_t muHandle;

	// ParticleModule.h:193
	uint32_t muHashedName;

	// ParticleModule.h:194
	cLionEffectDefinition * mpLionEffectDefinition;

	// ParticleModule.h:196
	float32_t mfStateBlendFactor;

	// ParticleModule.h:199
	Matrix44Affine mTransform;

	// ParticleModule.h:200
	SmoothStep::Vector3 mVelocity;

	// ParticleModule.h:202
	uint32_t muWorldIndex;

	// ParticleModule.h:203
	float32_t mfEffectDeathTime;

	// ParticleModule.h:204
	uint16_t muFlags;

public:
	// ParticleModule.h:107
	void SetEnabled(bool);

	// ParticleModule.h:121
	void SetTransform(Matrix44Affine);

	// ParticleModule.h:128
	const rw::math::vpu::Matrix44Affine & GetTransform() const;

	// ParticleModule.h:134
	void SetPosition(Vector3);

	// ParticleModule.h:141
	void SetVelocity(Vector3);

	// ParticleModule.h:148
	void SetStateBlendFactor(float32_t);

	// ParticleModule.h:155
	void SetWorldIndex(uint32_t);

private:
	// ParticleModule.h:164
	void Construct();

	// ParticleModule.h:167
	void LionMatrixConvert(const rw::math::vpu::Matrix44Affine &, cMatrix &);

	// ParticleModule.h:170
	float32_t GetEffectDeathTime();

	// ParticleModule.h:176
	void SetEffectDeathTime(float32_t);

}

// ParticleModule.h:216
struct BrnParticle::ParticleModule : public CgsModule::ModuleSingleBuffered {
private:
	// ParticleModule.h:741
	BrnParticle::ParticleModule::EPrepareStage mePrepareStage;

	// ParticleModule.h:742
	BrnParticle::ParticleModule::EReleaseStage meReleaseStage;

	// ParticleModule.h:743
	BrnParticle::ParticleModule::EInitialLoadStage meInitialLoadStage;

	// ParticleModule.h:744
	int32_t miResourceCount;

	// ParticleModule.h:746
	HeapMalloc * mpHeapMalloc;

	// ParticleModule.h:747
	EventReceiverQueue<16384,16> mReceiverQueue;

	// ParticleModule.h:748
	SafeResourceHandle<BrnParticle::ParticleDescriptionCollection> mDescriptionCollection;

	// ParticleModule.h:749
	SafeResourceHandle<BrnParticle::TextureNameMap> mTextureNameMap;

	// ParticleModule.h:751
	PropCollisions mPropCollisions;

	// ParticleModule.h:754
	LionParticleRender mLionRenderer;

	// ParticleModule.h:755
	cTime * mpLionCurrentTime;

	// ParticleModule.h:758
	LionEffect[128] maUpdateThreadLionEffects;

	// ParticleModule.h:759
	uint32_t muUpdateThreadNextLionEffect;

	// ParticleModule.h:761
	cLionEffectInstance *[128] mapDispatchThreadLionEffects;

	// ParticleModule.h:763
	bool mbPlayingEffectsSuspended;

	// ParticleModule.h:764
	bool mbStalled;

	// ParticleModule.h:767
	BrnParticle::ParticleModule::ParticleRenderData mRenderData;

	// ParticleModule.h:769
	CgsGraphics::Im3d mImmediateModeRenderer;

	// ParticleModule.h:770
	BrnGraphics::Im3dTexPlusLighting mWorldTexRenderer;

	// ParticleModule.h:771
	BrnGraphics::Im3dSkidsRenderer mSkidsRenderer;

	// ParticleModule.h:772
	BrnGraphics::Im3dSmokeRenderer mSmokeRenderer;

	// ParticleModule.h:773
	LionBlendRenderer mLionImmediateModeRenderer;

	// ParticleModule.h:775
	SparkRenderer mSparkRenderer;

	// ParticleModule.h:776
	SparkArray[4] maSparks;

	// ParticleModule.h:778
	TrailSystem mTrailSystem;

	// ParticleModule.h:780
	BrnDebrisRenderer mDebrisRenderer;

	// ParticleModule.h:781
	BrnDebrisArray[5] maDebris;

	// ParticleModule.h:783
	BrnSimpleParticleRenderer mSimpleParticleRenderer;

	// ParticleModule.h:784
	BrnSimpleParticleArray[13] maSimpleParticles;

	// ParticleModule.h:788
	float mfSimulationRate;

	// ParticleModule.h:789
	Random mRandom;

	// ParticleModule.h:791
	bool8_t mbSparksEnabled;

	// ParticleModule.h:792
	bool8_t mbTrailsEnabled;

	// ParticleModule.h:793
	bool8_t mbDebrisEnabled;

	// ParticleModule.h:794
	bool8_t mbSimpleEnabled;

	// ParticleModule.h:795
	bool8_t mbLionEnabled;

	// ParticleModule.h:796
	bool8_t mbZFadeEnabled;

	// ParticleModule.h:797
	bool8_t mbIsInJunkyard;

	// ParticleModule.h:798
	bool8_t mbHasCameraSwitched;

	// ParticleModule.h:801
	float32_t mrSparkAccumulator;

	// ParticleModule.h:804
	FXBucketManager mBucketManager;

	// ParticleModule.h:807
	EffectsVertexBufferManager mVertexBufferManagerLion;

	// ParticleModule.h:808
	EffectsVertexBufferManager mVertexBufferManagerSparks;

	// ParticleModule.h:809
	EffectsVertexBufferManager mVertexBufferManagerParticles;

	// ParticleModule.h:812
	LionBatchArray mLionBatchArray;

	// ParticleModule.h:814
	Job mParticleRenderJobSparks;

	// ParticleModule.h:815
	ParticleRenderJobData mParticleRenderJobDataSparks;

	// ParticleModule.h:816
	Job mParticleRenderJobParticles;

	// ParticleModule.h:817
	ParticleRenderJobData mParticleRenderJobDataParticles;

	// ParticleModule.h:821
	extern const uint32_t KU_DEBRISUPDATE_NUMJOBS = 5;

	// ParticleModule.h:827
	Job[5] maDebrisUpdateJob;

	// ParticleModule.h:828
	DebrisUpdateJobData[5] maDebrisUpdateJobData;

	// ParticleModule.h:829
	uint32_t muNumDebrisUpdateJobsToWaitOn;

	// ParticleModule.h:831
	DispatchThreadInputBuffer::CappedInterThreadEventQueue mInterThreadEventQueue;

	// ParticleModule.h:834
	SparkBatchSpawnEvent mSparkSpawnBufferHeader;

	// ParticleModule.h:835
	BrnParticle::SparkBatchSpawnEvent::SparkSpawnData * mpSparkSpawnBuffer;

	// ParticleModule.h:837
	DebrisBatchSpawnEvent mDebrisSpawnBufferHeader;

	// ParticleModule.h:838
	BrnParticle::DebrisBatchSpawnEvent::DebrisSpawnData * mpDebrisSpawnBuffer;

public:
	// ParticleModule.cpp:268
	virtual void Construct();

	// ParticleModule.cpp:400
	virtual bool Prepare(const AllocatorList *, PrepareOutputBuffer *);

	// ParticleModule.cpp:565
	bool PostPreparePrepare(PrepareOutputBuffer *);

	// ParticleModule.cpp:605
	virtual bool Release();

	// ParticleModule.cpp:680
	virtual void Destruct();

	// ParticleModule.cpp:727
	virtual void Update(float32_t, float32_t, float32_t, const Camera *);

	// ParticleModule.cpp:793
	virtual void PreRenderUpdate(DispatchThreadInputBuffer *);

	// ParticleModule.cpp:1637
	virtual void DispatchThreadUpdate(const DispatchThreadInputBuffer *);

	// ParticleModule.cpp:2864
	void GenerateDispatchLists(const DispatchInputBuffer *, DispatchThreadInputBuffer *);

	// ParticleModule.cpp:2874
	bool LoadFXBundle(PrepareOutputBuffer *);

	// ParticleModule.h:309
	void StartOfFrame();

	// ParticleModule.cpp:3338
	void EndOfFrame(bool);

	// ParticleModule.cpp:3347
	void DumpPlayingEffects();

	// ParticleModule.h:329
	uint32_t StartLionEffect(const char *, uint32_t);

	// ParticleModule.h:339
	uint32_t StartLionEffect(const char *);

	// ParticleModule.h:348
	uint32_t StartLionEffect(uint32_t, uint32_t);

	// ParticleModule.h:356
	uint32_t StartLionEffect(uint32_t);

	// ParticleModule.cpp:1793
	uint32_t StartLionEffect(uint32_t, const char *, uint32_t);

	// ParticleModule.cpp:1877
	void StopLionEffect(LionEffect *);

	// ParticleModule.h:379
	LionEffect * GetLionEffect(uint32_t);

	// ParticleModule.cpp:1902
	void SuspendPlayingEffects();

	// ParticleModule.cpp:1924
	void ResumePlayingEffects();

	// ParticleModule.cpp:1963
	void SpawnSpark(Vector3, Vector3, BrnParticle::Native::ESparkArrayID, float32_t, float32_t, float32_t, bool);

	// ParticleModule.cpp:2006
	void AddTrails(TrailEmitterData *, int8_t, Vector3, Vector3, float32_t);

	// ParticleModule.cpp:2019
	void SpawnDebris(Vector3, Vector3, BrnParticle::Native::EDebrisArrayID, Vector3, float32_t, float32_t, Vector4);

	// ParticleModule.cpp:2083
	void SpawnSimple(Vector3, Vector3, SimpleParticleBatch::ENativeParticleType, float32_t, float32_t, float32_t);

	// ParticleModule.cpp:2107
	void SpawnWheelSmoke(Vector3, Vector3, SimpleParticleBatch::ENativeParticleType, float32_t, float32_t, float32_t, bool);

	// ParticleModule.h:443
	BrnSimpleParticleRenderer & SimpleParticleRenderer();

	// ParticleModule.h:448
	PropCollisions & PropCollision();

	// ParticleModule.h:457
	void SetSimulationRate(float32_t);

	// ParticleModule.h:462
	void SetSparksEnabled(bool);

	// ParticleModule.h:467
	void SetTrailsEnabled(bool);

	// ParticleModule.h:472
	void SetDebrisEnabled(bool);

	// ParticleModule.h:477
	void SetSimpleEnabled(bool);

	// ParticleModule.h:482
	void SetLionEnabled(bool);

	// ParticleModule.h:487
	void SetZFadeEnabled(bool);

	// ParticleModule.h:493
	bool8_t IsInJunkyard() const;

	// ParticleModule.h:501
	void SetIsInJunkyard(bool8_t);

	// ParticleModule.h:530
	void UpdateSparkParams(BrnParticle::Native::ESparkArrayID, float32_t, float32_t, float32_t, float32_t, float32_t, float32_t, float32_t, Vector4, Vector4, Vector4, Vector4, Vector4, Attrib::Gen::burnoutcarasset::_LayoutStruct::Text);

	// ParticleModule.h:551
	void UpdateTrailType(int16_t, Vector4, Vector4);

	// ParticleModule.h:559
	void UpdateSimpleParticleParams(SimpleParticleBatch::ENativeParticleType &, nativeparticleparams &);

	// ParticleModule.cpp:2135
	void BeginParticleRenderJob(const BrnParticle::ParticleModule::ParticleRenderData &);

	// ParticleModule.cpp:2214
	void BuildLionVertexBuffers(const BrnParticle::ParticleModule::ParticleRenderData &);

	// ParticleModule.cpp:2332
	void WaitOnParticleRenderJob(const BrnParticle::ParticleModule::ParticleRenderData &);

	// ParticleModule.cpp:2465
	void RenderFullResParticles(const BrnParticle::ParticleModule::ParticleRenderData &);

	// ParticleModule.cpp:2594
	void RenderQuarterResParticles(const BrnParticle::ParticleModule::ParticleRenderData &, CgsRenderTarget *);

	// ParticleModule.cpp:2714
	void OnLeavingCrashMode();

	// ParticleModule.cpp:2731
	void SpawnSparksFromPoint(float32_t, Vector3, Vector3, Vector3, BrnParticle::Native::ESparkArrayID, float32_t, float32_t, float32_t, float32_t, bool);

	// ParticleModule.cpp:2762
	void SpawnSparkShowerFromPoint(Matrix44Affine, Vector4, Vector4, Vector3, Vector4, float32_t, float32_t, float32_t, float32_t, uint32_t, BrnParticle::Native::ESparkArrayID);

	// ParticleModule.cpp:2792
	void SpawnSparksAlongLine(float32_t, Vector3, Vector3, Vector3, BrnParticle::Native::ESparkArrayID, float32_t, float32_t, bool, float32_t, float32_t);

	// ParticleModule.cpp:1458
	void FireDebrisBurst(Vector3, Vector3, Vector3, Vector3, float32_t, float32_t, const debrisparams &, Vector4);

private:
	// ParticleModule.cpp:2820
	void GenerateRenderRequests(const DispatchInputBuffer *, DispatchThreadInputBuffer *);

	// ParticleModule.cpp:895
	void ProcessEventQueue(const DispatchThreadInputBuffer::CappedInterThreadEventQueue *, const BrnParticle::ParticleModule::ParticleRenderData &);

	// ParticleModule.cpp:1012
	void BeginSimulateDebris(const DispatchThreadInputBuffer *);

	// ParticleModule.cpp:1119
	void EndSimulateDebris(const BrnParticle::ParticleModule::ParticleRenderData &);

	// ParticleModule.cpp:1145
	void HandleSpawnSparksFromPointEvent(const SpawnSparksFromPointEvent *, const BrnParticle::ParticleModule::ParticleRenderData &);

	// ParticleModule.cpp:1244
	void HandleSpawnSparkShowerFromPointEvent(const SpawnSparkShowerFromPointEvent *, const BrnParticle::ParticleModule::ParticleRenderData &);

	// ParticleModule.cpp:1337
	void HandleSpawnSparksAlongLineEvent(const SpawnSparksAlongLineEvent *, const BrnParticle::ParticleModule::ParticleRenderData &);

	// ParticleModule.cpp:1477
	void HandleFireDebrisBurstEvent(const FireDebrisBurstEvent *);

}

// ParticleModule.h:90
extern const uint32_t KU_HANDLE_INVALID = 4294967295;

// ParticleModule.h:95
extern const uint16_t ePPEFlagInUse = 1;

// ParticleModule.h:96
extern const uint16_t ePPEFlagEnabled = 2;

// ParticleModule.h:97
extern const uint16_t ePPEFlagChanged = 4;

// ParticleModule.h:98
extern const uint16_t ePPEFlagCreate = 8;

// ParticleModule.h:99
extern const uint16_t ePPEFlagKill = 16;

// ParticleModule.h:100
extern const uint16_t ePPEFlagOverrideVelocity = 32;

// ParticleModule.h:184
extern const uint32_t KU_HANDLE_INDEX_NUM_BITS = 7;

// ParticleModule.h:185
extern const uint32_t KU_HANDLE_INDEX_MASK = 127;

// ParticleModule.h:186
extern const uint32_t KU_HANDLE_INCREMENT = 128;

// ParticleModule.h:187
extern const uint32_t KU_HANDLE_VALID_MASK = 2147483647;

// ParticleModule.h:579
extern const uint16_t eRenderDataFlagCameraSwitched = 1;

// ParticleModule.h:580
extern const uint16_t eRenderDataFlagRenderSparks = 2;

// ParticleModule.h:581
extern const uint16_t eRenderDataFlagRenderDebris = 4;

// ParticleModule.h:582
extern const uint16_t eRenderDataFlagRenderSimple = 8;

// ParticleModule.h:583
extern const uint16_t eRenderDataFlagRenderLion = 16;

// ParticleModule.h:584
extern const uint16_t eRenderDataFlagRenderTrails = 32;

// ParticleModule.h:585
extern const uint16_t eRenderDataFlagReducedFrameRate = 64;

// ParticleModule.h:586
extern const uint16_t eRenderDataFlagInSlowMotion = 128;

// ParticleModule.h:821
extern const uint32_t KU_DEBRISUPDATE_NUMJOBS = 5;

// vertexbuffer.h:27
namespace BrnParticle {
	// ParticleModule.h:68
	const uint32_t KU_MAX_PLAYING_EFFECTS = 128;

}

// vertexbuffer.h:27
namespace BrnParticle {
	// Declaration
	struct ParticleModule {
		// ParticleModule.h:565
		struct DispatchThreadUpdateData {
			// ParticleModule.h:566
			float32_t mfCurrentTime;

			// ParticleModule.h:567
			float32_t mfCurrentTimeStep;

			// ParticleModule.h:568
			uint32_t muChangedEffects;

			// ParticleModule.h:569
			Matrix44Affine mViewMatrix;

			// ParticleModule.h:570
			Matrix44 mProjectionMatrix;

			// ParticleModule.h:571
			LionEffect[128] maChangedLionEffects;

		}

		// ParticleModule.h:576
		struct ParticleRenderData {
			// ParticleModule.h:579
			extern const uint16_t eRenderDataFlagCameraSwitched = 1;

			// ParticleModule.h:580
			extern const uint16_t eRenderDataFlagRenderSparks = 2;

			// ParticleModule.h:581
			extern const uint16_t eRenderDataFlagRenderDebris = 4;

			// ParticleModule.h:582
			extern const uint16_t eRenderDataFlagRenderSimple = 8;

			// ParticleModule.h:583
			extern const uint16_t eRenderDataFlagRenderLion = 16;

			// ParticleModule.h:584
			extern const uint16_t eRenderDataFlagRenderTrails = 32;

			// ParticleModule.h:585
			extern const uint16_t eRenderDataFlagReducedFrameRate = 64;

			// ParticleModule.h:586
			extern const uint16_t eRenderDataFlagInSlowMotion = 128;

			// ParticleModule.h:589
			BrnParticle::ParticleModule * mpParticleModule;

			// ParticleModule.h:592
			uint32_t muCurrentFrame;

			// ParticleModule.h:593
			float32_t mfCurrentTime;

			// ParticleModule.h:594
			float32_t mfCurrentTimeStep;

			// ParticleModule.h:595
			float32_t mfTimeStepMultiplier;

			// ParticleModule.h:597
			Matrix44Affine mCameraTransform;

			// ParticleModule.h:598
			Camera mCgsCamera;

			// ParticleModule.h:601
			Vector3 mvSunDirection;

			// ParticleModule.h:602
			Vector3 mvSunColour;

			// ParticleModule.h:603
			Vector3 mvAmbientColour;

			// ParticleModule.h:604
			uint16_t muFlags;

			// ParticleModule.h:605
			const Texture * mpEnvironmentMap;

			// ParticleModule.h:606
			float32_t mfWhiteLevel;

		}

	public:
		// ParticleModule.h:309
		void StartOfFrame();

	private:
		// ParticleModule.h:821
		extern const uint32_t KU_DEBRISUPDATE_NUMJOBS = 5;

	}

	// ParticleModule.h:68
	const uint32_t KU_MAX_PLAYING_EFFECTS = 128;

}

// ParticleModule.h:87
struct BrnParticle::LionEffect {
	// ParticleModule.h:90
	extern const uint32_t KU_HANDLE_INVALID = 4294967295;

	// ParticleModule.h:95
	extern const uint16_t ePPEFlagInUse = 1;

	// ParticleModule.h:96
	extern const uint16_t ePPEFlagEnabled = 2;

	// ParticleModule.h:97
	extern const uint16_t ePPEFlagChanged = 4;

	// ParticleModule.h:98
	extern const uint16_t ePPEFlagCreate = 8;

	// ParticleModule.h:99
	extern const uint16_t ePPEFlagKill = 16;

	// ParticleModule.h:100
	extern const uint16_t ePPEFlagOverrideVelocity = 32;

private:
	// ParticleModule.h:184
	extern const uint32_t KU_HANDLE_INDEX_NUM_BITS = 7;

	// ParticleModule.h:185
	extern const uint32_t KU_HANDLE_INDEX_MASK = 127;

	// ParticleModule.h:186
	extern const uint32_t KU_HANDLE_INCREMENT = 128;

	// ParticleModule.h:187
	extern const uint32_t KU_HANDLE_VALID_MASK = 2147483647;

	// ParticleModule.h:191
	uint32_t muHandle;

	// ParticleModule.h:193
	uint32_t muHashedName;

	// ParticleModule.h:194
	cLionEffectDefinition * mpLionEffectDefinition;

	// ParticleModule.h:196
	float32_t mfStateBlendFactor;

	// ParticleModule.h:199
	Matrix44Affine mTransform;

	// ParticleModule.h:200
	Road::Vector3 mVelocity;

	// ParticleModule.h:202
	uint32_t muWorldIndex;

	// ParticleModule.h:203
	float32_t mfEffectDeathTime;

	// ParticleModule.h:204
	uint16_t muFlags;

public:
	// ParticleModule.h:107
	void SetEnabled(bool);

	// ParticleModule.h:121
	void SetTransform(Matrix44Affine);

	// ParticleModule.h:128
	const rw::math::vpu::Matrix44Affine & GetTransform() const;

	// ParticleModule.h:134
	void SetPosition(Vector3);

	// ParticleModule.h:141
	void SetVelocity(Vector3);

	// ParticleModule.h:148
	void SetStateBlendFactor(float32_t);

	// ParticleModule.h:155
	void SetWorldIndex(uint32_t);

private:
	// ParticleModule.h:164
	void Construct();

	// ParticleModule.h:167
	void LionMatrixConvert(const rw::math::vpu::Matrix44Affine &, cMatrix &);

	// ParticleModule.h:170
	float32_t GetEffectDeathTime();

	// ParticleModule.h:176
	void SetEffectDeathTime(float32_t);

}

// vertexbuffer.h:27
namespace BrnParticle {
	// Declaration
	struct ParticleModule {
		// ParticleModule.h:565
		struct DispatchThreadUpdateData {
			// ParticleModule.h:566
			float32_t mfCurrentTime;

			// ParticleModule.h:567
			float32_t mfCurrentTimeStep;

			// ParticleModule.h:568
			uint32_t muChangedEffects;

			// ParticleModule.h:569
			Matrix44Affine mViewMatrix;

			// ParticleModule.h:570
			Matrix44 mProjectionMatrix;

			// ParticleModule.h:571
			LionEffect[128] maChangedLionEffects;

		}

		// ParticleModule.h:576
		struct ParticleRenderData {
			// ParticleModule.h:579
			extern const uint16_t eRenderDataFlagCameraSwitched = 1;

			// ParticleModule.h:580
			extern const uint16_t eRenderDataFlagRenderSparks = 2;

			// ParticleModule.h:581
			extern const uint16_t eRenderDataFlagRenderDebris = 4;

			// ParticleModule.h:582
			extern const uint16_t eRenderDataFlagRenderSimple = 8;

			// ParticleModule.h:583
			extern const uint16_t eRenderDataFlagRenderLion = 16;

			// ParticleModule.h:584
			extern const uint16_t eRenderDataFlagRenderTrails = 32;

			// ParticleModule.h:585
			extern const uint16_t eRenderDataFlagReducedFrameRate = 64;

			// ParticleModule.h:586
			extern const uint16_t eRenderDataFlagInSlowMotion = 128;

			// ParticleModule.h:589
			BrnParticle::ParticleModule * mpParticleModule;

			// ParticleModule.h:592
			uint32_t muCurrentFrame;

			// ParticleModule.h:593
			float32_t mfCurrentTime;

			// ParticleModule.h:594
			float32_t mfCurrentTimeStep;

			// ParticleModule.h:595
			float32_t mfTimeStepMultiplier;

			// ParticleModule.h:597
			Matrix44Affine mCameraTransform;

			// ParticleModule.h:598
			Camera mCgsCamera;

			// ParticleModule.h:601
			Vector3 mvSunDirection;

			// ParticleModule.h:602
			Vector3 mvSunColour;

			// ParticleModule.h:603
			Vector3 mvAmbientColour;

			// ParticleModule.h:604
			uint16_t muFlags;

			// ParticleModule.h:605
			const Texture * mpEnvironmentMap;

			// ParticleModule.h:606
			float32_t mfWhiteLevel;

		}

	private:
		// ParticleModule.h:821
		extern const uint32_t KU_DEBRISUPDATE_NUMJOBS = 5;

	}

	// ParticleModule.h:68
	const uint32_t KU_MAX_PLAYING_EFFECTS = 128;

}

// vertexbuffer.h:27
namespace BrnParticle {
	// Declaration
	struct ParticleModule {
		// ParticleModule.h:576
		struct ParticleRenderData {
			// ParticleModule.h:579
			extern const uint16_t eRenderDataFlagCameraSwitched = 1;

			// ParticleModule.h:580
			extern const uint16_t eRenderDataFlagRenderSparks = 2;

			// ParticleModule.h:581
			extern const uint16_t eRenderDataFlagRenderDebris = 4;

			// ParticleModule.h:582
			extern const uint16_t eRenderDataFlagRenderSimple = 8;

			// ParticleModule.h:583
			extern const uint16_t eRenderDataFlagRenderLion = 16;

			// ParticleModule.h:584
			extern const uint16_t eRenderDataFlagRenderTrails = 32;

			// ParticleModule.h:585
			extern const uint16_t eRenderDataFlagReducedFrameRate = 64;

			// ParticleModule.h:586
			extern const uint16_t eRenderDataFlagInSlowMotion = 128;

			// ParticleModule.h:589
			BrnParticle::ParticleModule * mpParticleModule;

			// ParticleModule.h:592
			uint32_t muCurrentFrame;

			// ParticleModule.h:593
			float32_t mfCurrentTime;

			// ParticleModule.h:594
			float32_t mfCurrentTimeStep;

			// ParticleModule.h:595
			float32_t mfTimeStepMultiplier;

			// ParticleModule.h:597
			Matrix44Affine mCameraTransform;

			// ParticleModule.h:598
			Camera mCgsCamera;

			// ParticleModule.h:601
			Vector3 mvSunDirection;

			// ParticleModule.h:602
			Vector3 mvSunColour;

			// ParticleModule.h:603
			Vector3 mvAmbientColour;

			// ParticleModule.h:604
			uint16_t muFlags;

			// ParticleModule.h:605
			const Texture * mpEnvironmentMap;

			// ParticleModule.h:606
			float32_t mfWhiteLevel;

		}

	public:
		~ParticleModule();

		ParticleModule();

	private:
		// ParticleModule.h:821
		extern const uint32_t KU_DEBRISUPDATE_NUMJOBS = 5;

	}

	// ParticleModule.h:68
	const uint32_t KU_MAX_PLAYING_EFFECTS = 128;

}

// ParticleModule.h:216
void BrnParticle::ParticleModule::~ParticleModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleModule.h:216
void BrnParticle::ParticleModule::ParticleModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

