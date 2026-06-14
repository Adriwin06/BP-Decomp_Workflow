// BrnEffectsDebugComponent.h:36
namespace BrnEffects {
	// Declaration
	struct EffectsModule {
		// EffectsModule.h:99
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MANAGER = 1,
			E_PREPARESTAGE_RESOURCES = 2,
			E_PREPARESTAGE_POST_PREPARE_PREPARE = 3,
			E_PREPARESTAGE_DONE = 4,
		}

		// EffectsModule.h:108
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_MANAGER = 1,
			E_RELEASESTAGE_DONE = 2,
		}

		// EffectsModule.h:115
		enum EResourceAcquireStage {
			E_RESOURCESTAGE_START = 0,
			E_RESOURCESTAGE_LOADING_VAULT = 1,
			E_RESOURCESTAGE_ACQUIRING_VAULT = 2,
			E_RESOURCESTAGE_REGISTERING_VAULT = 3,
			E_RESOURCESTAGE_DONE = 4,
		}

		// EffectsModule.h:131
		struct TempRaceCarStateCache {
			// EffectsModule.h:133
			Matrix44Affine mCarTransform;

			// EffectsModule.h:134
			Matrix44Affine mCameraTransform;

			// EffectsModule.h:135
			Vector3 mvLinearVelocity;

			// EffectsModule.h:136
			Vector3 mvAngularVelocity;

			// EffectsModule.h:137
			float32_t mfSpeedMPH;

			// EffectsModule.h:138
			float32_t mfSteering;

			// EffectsModule.h:139
			bool mbIsGameCamera;

		public:
			// EffectsModule.h:142
			void SetLinearVelocity(Vector3);

			// EffectsModule.h:148
			void SetAngularVelocity(Vector3);

			// EffectsModule.h:154
			void SetSpeedMPH(float32_t);

			// EffectsModule.h:160
			void SetSteering(float32_t);

			// EffectsModule.h:166
			void SetCarTransform(Matrix44Affine);

			// EffectsModule.h:172
			void SetIsRacingGameplayCamera(bool);

			// EffectsModule.h:178
			void SetCameraTransform(Matrix44Affine);

			// EffectsModule.h:184
			Vector3 GetLinearVelocity() const;

			// EffectsModule.h:190
			Vector3 GetAngularVelocity() const;

			// EffectsModule.h:196
			float32_t GetSpeedMPH() const;

			// EffectsModule.h:202
			float32_t GetSteering() const;

			// EffectsModule.h:208
			Matrix44Affine GetCarTransform() const;

			// EffectsModule.h:214
			bool GetIsRacingGameplayCamera() const;

			// EffectsModule.h:220
			Matrix44Affine GetCameraTransform() const;

		}

	}

}

// EffectsModule.h:59
struct BrnEffects::EffectsModuleParams {
	// EffectsModule.h:61
	float32_t mDt;

	// EffectsModule.h:62
	float32_t mTime;

	// EffectsModule.h:63
	Vector3 mCameraPosition;

	// EffectsModule.h:64
	const Camera * mpCamera;

}

// EffectsModule.h:68
struct BrnEffects::CarState {
	// EffectsModule.h:70
	EffectsModuleParams mEffectsModuleParams;

	// EffectsModule.h:71
	const BoostOutputInfo * mpBoostInfo;

	// EffectsModule.h:72
	const RaceCarState * mpCarState;

	// EffectsModule.h:73
	float32_t mfSpeedMPH;

	// EffectsModule.h:74
	float32_t mfExhaustPopIntensity;

	// EffectsModule.h:75
	bool mbExhaustPopThisFrame;

	// EffectsModule.h:76
	bool mbCrashing;

	// EffectsModule.h:77
	bool mbJumping;

	// EffectsModule.h:78
	bool mbEngineRunning;

public:
	// EffectsModule.h:81
	bool IsBoosting() const;

}

// EffectsModule.h:96
struct BrnEffects::EffectsModule : public CgsModule::ModuleSingleBuffered {
private:
	// EffectsModule.h:552
	uint32_t mEffectInstanceHandle;

	// EffectsModule.h:553
	uint32_t mQAEffectHandle;

	// EffectsModule.h:556
	int liEffectInstanceIndex;

	// EffectsModule.h:558
	bool mResetAttribs;

	// EffectsModule.h:560
	BrnEffects::EffectsModule::EPrepareStage mePrepareStage;

	// EffectsModule.h:561
	BrnEffects::EffectsModule::EReleaseStage meReleaseStage;

	// EffectsModule.h:564
	BrnEffects::EffectsModule::EResourceAcquireStage meResourceStage;

	// EffectsModule.h:567
	EventReceiverQueue<2048,16> mReceiverQueue;

	// EffectsModule.h:570
	ResourceHandle mSchemaResourceHandle;

	// EffectsModule.h:571
	ResourceHandle mVaultResourceHandle;

	// EffectsModule.h:574
	ParticleModule mParticleModule;

	// EffectsModule.h:577
	BrnEffects::EffectsModule::TempRaceCarStateCache mCarStateCache;

	// EffectsModule.h:580
	BrnEffects::EffectsDebugComponent mDebugComponent;

	// EffectsModule.h:583
	HeapMalloc * mpHeapMalloc;

	// EffectsModule.h:585
	Random mRandom;

	// EffectsModule.h:588
	ActiveRaceCarData[8] maActiveRaceCarData;

	// EffectsModule.h:591
	float32_t[9] mafAccumulatedParticleCountCrash;

	// EffectsModule.h:592
	float32_t[9] mafAccumulatedParticleCountTyres;

	// EffectsModule.h:595
	float32_t[8] mafTimeUntilNextDebrisBurst;

	// EffectsModule.h:596
	float32_t[8] mafTimeUntilNextSparksBurst;

	// EffectsModule.h:599
	float32_t[8][6] mafCrashingTrailAccumulators;

	// EffectsModule.h:600
	Matrix44Affine[8] maRaceCarPreviousTransforms;

	// EffectsModule.h:603
	BrnGameState::GameStateModuleIO::EGameModeType meCurrentGameMode;

	// EffectsModule.h:604
	bool mbEventIntroActive;

	// EffectsModule.h:607
	sparkeffect[4] mSparkParams;

	// EffectsModule.h:609
	debrisparams mCrashingDebrisParams;

	// EffectsModule.h:610
	debrisparams mRoadRageDebrisParams;

	// EffectsModule.h:611
	debrisparams mAIRaceCarCrashingTrailDebris;

	// EffectsModule.h:614
	junkyardlocators mJunkYardLocatorsData;

	// EffectsModule.h:617
	surfacelist mSurfaceList;

	// EffectsModule.h:621
	BrnCrashTriangleCache mCrashTriangleCache;

	// EffectsModule.h:624
	BrnEffectsGlassManager mGlassSmashManager;

	// EffectsModule.h:627
	extern const uint32_t KU_MAX_SHOWTIME_BOUNCE_EFFECTS = 3;

	// EffectsModule.h:628
	uint32_t[3] maShowtimeBounceEffectHandles;

	// EffectsModule.h:629
	uint32_t muNextShowtimeBounceEffect;

	// EffectsModule.h:630
	float32_t mfLastShowtimeBounceEffectTime;

	// EffectsModule.h:633
	extern const uint32_t KU_MAX_JUNKYARD_VFX = 10;

	// EffectsModule.h:634
	uint32_t[10] maJunkyardEffectHandles;

public:
	// EffectsModule.cpp:335
	virtual void Construct();

	// EffectsModule.cpp:415
	virtual bool Prepare(const AllocatorList *, IOBufferStack *, OutputBuffer *);

	// EffectsModule.cpp:556
	void PostWorldPreparePrepare();

	// EffectsModule.cpp:767
	virtual bool Release();

	// EffectsModule.cpp:825
	virtual void Destruct();

	// EffectsModule.cpp:852
	virtual void Update(IOBufferStack *, IOBufferStack *, const InputBuffer *, OutputBuffer *, BrnUpdateSet);

	// EffectsModule.cpp:1151
	virtual void PreRenderUpdate(DispatchThreadInputBuffer *);

	// EffectsModule.cpp:1180
	virtual void DispatchThreadUpdate(const DispatchThreadInputBuffer *);

	// EffectsModule.cpp:1345
	void GenerateDispatchLists(IOBufferStack *, const DispatchInputBuffer *, DispatchThreadInputBuffer *);

	// EffectsModule.h:277
	void StartOfFrame();

	// EffectsModule.h:285
	void EndOfFrame(bool);

	// EffectsModule.cpp:2110
	void RestartEffects();

	// EffectsModule.cpp:1428
	void DebugMemoryInit(EffectsModule *);

	// EffectsModule.h:298
	void AttribulatorUpdate();

	// EffectsModule.h:303
	Random & RandomNumberGenerator();

	// EffectsModule.h:308
	BrnParticle::ParticleModule & ParticleModule();

	// EffectsModule.h:313
	surfacelist & SurfaceList();

	// EffectsModule.cpp:1616
	void FireJumpSparks(float32_t, float32_t, Vector3, Vector3, const RaceCarState *, float32_t, const CollisionTag &);

private:
	// EffectsModule.cpp:632
	bool PrepareResources(OutputBuffer *);

	// EffectsModule.h:653
	const AcquireResourceResponse * GetNextAcquireResourceResponse(const AcquireResourceResponse *);

	// EffectsModule.cpp:1197
	void GenerateRenderRequests(const DispatchInputBuffer *);

	// EffectsModule.cpp:1577
	void HandleRaceCarRaceCarSparks(float32_t, float32_t, Vector3, Vector3, const RaceCarState *, float32_t);

	// EffectsModule.cpp:1512
	void HandleVehicleVehicleSparks(Vector3, Vector3, BrnEffects::ActiveRaceCarData &, const RaceCarState *, float32_t, float32_t);

	// EffectsModule.h:371
	void HandleRaceCarPropContacts(float32_t, float32_t, Vector3, Vector3, const RaceCarState *);

	// EffectsModule.cpp:1452
	void HandleSparkContacts(const BaseContact &, Vector3, BrnParticle::Native::ESparkArrayID, float32_t, float32_t, float32_t, float32_t, float32_t, bool);

	// EffectsModule.cpp:1680
	void HandleBurstDebris(const RCEntityActiveRaceCarOutputInterface *, EActiveRaceCarIndex, float32_t, float32_t, Vector3, Vector3, const RaceCarState *, const Camera *, const debrisparams &, const RwRGBAReal &);

	// EffectsModule.cpp:1743
	void HandleWheels(BrnEffects::CarState &, RaceCarParticleEffectHelper &);

	// EffectsModule.cpp:1831
	void HandleCrashingTrail(BrnEffects::ActiveRaceCarData &, float32_t, float32_t, const RaceCarState *, EActiveRaceCarIndex, const RwRGBAReal &, debrisparams &);

	// EffectsModule.cpp:2083
	void HandlePlayerTriangleCache(const InputBuffer *, const RaceCarState *, BrnEffects::ActiveRaceCarData &);

	// EffectsModule.cpp:2117
	void HandleQADebugTests(float32_t, float32_t, const RaceCarState *);

	// EffectsModule.cpp:2206
	void HandleGameActions(const InputBuffer::GameActionQueue *, const InputBuffer *);

	// EffectsModule.cpp:2281
	bool JunkyardVfxReadLine(const char *, char *, uint32_t, const char *&);

	// EffectsModule.cpp:2366
	float32_t JunkyardVfxStringToFloat(const char *);

	// EffectsModule.cpp:2404
	void JunkyardVfxStart(Vector3);

	// EffectsModule.cpp:2498
	void JunkyardVfxStop();

	// EffectsModule.cpp:2521
	void DoSparkShower(const SparkShowerController &, VecFloat, Matrix44Affine, Vector3, float32_t, float32_t, uint32_t);

	// EffectsModule.cpp:2559
	void BurstAreaEmitParticles(Vector3 *, Vector3, Vector3, BrnParticle::Native::EDebrisArrayID, float32_t, float32_t, float32_t, float32_t);

	// EffectsModule.cpp:2666
	void HandleShowtimeTrafficBounce(const JustBouncedAction *, const InputBuffer *);

	// EffectsModule.cpp:2792
	void HandleGlassSmashEventsForAllCars(const InputBuffer *, const RCEntityActiveRaceCarOutputInterface *, float32_t, float32_t);

	// EffectsModule.cpp:2921
	void HandleJumpAndLandingEffects(BrnEffects::CarState &, RaceCarParticleEffectHelper &, float32_t, float32_t, float32_t);

	// EffectsModule.cpp:2976
	void ProcessActiveRaceCars(const EffectsModuleParams &, const RCEntityActiveRaceCarOutputInterface *, const BoostOutputInfo *, const DeformationOutputInterface *, const AudioEffectsMessageQueue *, bool);

	// EffectsModule.cpp:3069
	void UpdateActiveRaceCars(EActiveRaceCarIndex, const EffectsModuleParams &, const RCEntityActiveRaceCarOutputInterface *, const BoostOutputInfo *, const DeformationOutputInterface *, const AudioEffectsMessageQueue *, bool);

	// EffectsModule.cpp:3012
	void ProcessCarContactQueues(const EffectsModuleParams &, const RCEntityActiveRaceCarOutputInterface *, const ContactSpyInterface *, const Camera *);

	// EffectsModule.cpp:3292
	void ProcessRaceCarContacts(const ContactSpyData::RaceCarContactQueue *, const RCEntityActiveRaceCarOutputInterface *, const EffectsModuleParams &, const Camera *);

	// EffectsModule.cpp:3654
	void ProcessCarDetatchedPartContacts(const ContactSpyData::PhysicalCarPartContactQueue *, const RCEntityActiveRaceCarOutputInterface *, const EffectsModuleParams &);

	// EffectsModule.cpp:3767
	void ProcessHingedPartContacts(const ContactSpyData::HingedCarPartContactQueue *, const EffectsModuleParams &);

	// EffectsModule.cpp:2197
	void OnFireDebugEffect(ParticleEffectHelper &);

	// EffectsModule.cpp:588
	void LoadNativeParticleParams();

	// EffectsModule.cpp:2946
	const RaceCarState * GetPlayerRaceCarState(const RCEntityActiveRaceCarOutputInterface *);

}

// EffectsModule.h:627
extern const uint32_t KU_MAX_SHOWTIME_BOUNCE_EFFECTS = 3;

// EffectsModule.h:633
extern const uint32_t KU_MAX_JUNKYARD_VFX = 10;

// BrnEffectsData.h:75
namespace BrnEffects {
	// Declaration
	struct EffectsModule {
	public:
		// EffectsModule.h:277
		void StartOfFrame();

		// EffectsModule.h:285
		void EndOfFrame(bool);

	private:
		// EffectsModule.h:627
		extern const uint32_t KU_MAX_SHOWTIME_BOUNCE_EFFECTS = 3;

		// EffectsModule.h:633
		extern const uint32_t KU_MAX_JUNKYARD_VFX = 10;

	}

}

// Curves.h:24
namespace BrnEffects {
	// Declaration
	struct EffectsModule {
	private:
		// EffectsModule.h:627
		extern const uint32_t KU_MAX_SHOWTIME_BOUNCE_EFFECTS = 3;

		// EffectsModule.h:633
		extern const uint32_t KU_MAX_JUNKYARD_VFX = 10;

	}

}

// BrnEffectsData.h:75
namespace BrnEffects {
	// Declaration
	struct EffectsModule {
		// EffectsModule.h:131
		struct TempRaceCarStateCache {
			// EffectsModule.h:133
			Matrix44Affine mCarTransform;

			// EffectsModule.h:134
			Matrix44Affine mCameraTransform;

			// EffectsModule.h:135
			Vector3 mvLinearVelocity;

			// EffectsModule.h:136
			Vector3 mvAngularVelocity;

			// EffectsModule.h:137
			float32_t mfSpeedMPH;

			// EffectsModule.h:138
			float32_t mfSteering;

			// EffectsModule.h:139
			bool mbIsGameCamera;

		public:
			// EffectsModule.h:142
			void SetLinearVelocity(Vector3);

			// EffectsModule.h:148
			void SetAngularVelocity(Vector3);

			// EffectsModule.h:154
			void SetSpeedMPH(float32_t);

			// EffectsModule.h:160
			void SetSteering(float32_t);

			// EffectsModule.h:166
			void SetCarTransform(Matrix44Affine);

			// EffectsModule.h:172
			void SetIsRacingGameplayCamera(bool);

			// EffectsModule.h:178
			void SetCameraTransform(Matrix44Affine);

			// EffectsModule.h:184
			Vector3 GetLinearVelocity() const;

			// EffectsModule.h:190
			Vector3 GetAngularVelocity() const;

			// EffectsModule.h:196
			float32_t GetSpeedMPH() const;

			// EffectsModule.h:202
			float32_t GetSteering() const;

			// EffectsModule.h:208
			Matrix44Affine GetCarTransform() const;

			// EffectsModule.h:214
			bool GetIsRacingGameplayCamera() const;

			// EffectsModule.h:220
			Matrix44Affine GetCameraTransform() const;

		}

	public:
		EffectsModule();

		~EffectsModule();

	private:
		// EffectsModule.h:627
		extern const uint32_t KU_MAX_SHOWTIME_BOUNCE_EFFECTS = 3;

		// EffectsModule.h:633
		extern const uint32_t KU_MAX_JUNKYARD_VFX = 10;

	}

}

// EffectsModule.h:96
void BrnEffects::EffectsModule::EffectsModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// EffectsModule.h:96
void BrnEffects::EffectsModule::~EffectsModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

