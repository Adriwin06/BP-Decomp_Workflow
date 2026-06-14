// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnEnvironmentUtil.h:31
	namespace EnvironmentSettings {
		// BrnEnvironmentManager.h:62
		const uint32_t K_JUNKYARD_LIGHTING_DATA_BUFFER_SIZE = 2048;

		// BrnEnvironmentManager.h:63
		const uint32_t KU_MAX_NUM_JUNKYARDS = 16;

	}

}

// BrnEnvironmentManager.h:323
extern const float32_t kfDefSeasonBlendDelta;

// BrnEnvironmentManager.h:349
extern const float32_t kfDefTimeOfDay;

// BrnEnvironmentManager.h:350
extern const float32_t kfDefTimeOfDayDelta;

// BrnEnvironmentManager.h:351
extern const float32_t kfDefCloudDelta;

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnEnvironmentUtil.h:31
	namespace EnvironmentSettings {
		// BrnEnvironmentManager.h:62
		const uint32_t K_JUNKYARD_LIGHTING_DATA_BUFFER_SIZE = 2048;

		// BrnEnvironmentManager.h:63
		const uint32_t KU_MAX_NUM_JUNKYARDS = 16;

	}

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnEnvironmentUtil.h:31
	namespace EnvironmentSettings {
		// BrnEnvironmentManager.h:62
		const uint32_t K_JUNKYARD_LIGHTING_DATA_BUFFER_SIZE = 2048;

		// BrnEnvironmentManager.h:63
		const uint32_t KU_MAX_NUM_JUNKYARDS = 16;

	}

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnEnvironmentUtil.h:31
	namespace EnvironmentSettings {
		// BrnEnvironmentManager.h:62
		const uint32_t K_JUNKYARD_LIGHTING_DATA_BUFFER_SIZE = 2048;

		// BrnEnvironmentManager.h:63
		const uint32_t KU_MAX_NUM_JUNKYARDS = 16;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnEnvironmentUtil.h:31
	namespace EnvironmentSettings {
		// Declaration
		struct EnvironmentManager {
			// BrnEnvironmentManager.h:246
			enum EPrepareStage {
				E_PREPARE_START = 0,
				E_PREPARE_LOAD_DEPENDENCIES = 1,
				E_PREPARE_WF_LOAD_DEPENDENCIES = 2,
				E_PREPARE_ACQUIRE_DEPENDENCIES = 3,
				E_PREPARE_WF_ACQUIRE_DEPENDENCIES = 4,
				E_PREPARE_LOAD_DICTIONARY = 5,
				E_PREPARE_WF_LOAD_DICTIONARY = 6,
				E_PREPARE_ACQUIRE_DICTIONARY = 7,
				E_PREPARE_WF_ACQUIRE_DICTIONARY = 8,
				E_PREPARE_STREAMIN = 9,
				E_PREPARE_WF_STREAMIN = 10,
				E_PREPARE_OPEN_JUNKYARD_LIGHTING_DATA = 11,
				E_PREPARE_WF_OPEN_JUNKYARD_LIGHTING_DATA = 12,
				E_PREPARE_READ_JUNKYARD_LIGHTING_DATA = 13,
				E_PREPARE_WF_READ_JUNKYARD_LIGHTING_DATA = 14,
				E_PREPARE_DONE = 15,
			}

			// BrnEnvironmentManager.h:266
			enum EReleaseStage {
				E_RELEASE_START = 0,
				E_RELEASE_DONE = 1,
			}

			// BrnEnvironmentManager.h:284
			enum EStreamOutStage {
				E_STREAMOUT_START = 0,
				E_STREAMOUT_DISCARD_SEASON = 1,
				E_STREAMOUT_UNLOAD_SEASON = 2,
				E_STREAMOUT_WF_UNLOAD_SEASON = 3,
				E_STREAMOUT_UNLOAD_SEASON_COLOURCUBES = 4,
				E_STREAMOUT_WF_UNLOAD_SEASON_COLOURCUBES = 5,
				E_STREAMOUT_REQUEST_NEXT_SEASON = 6,
				E_STREAMOUT_DONE = 7,
			}

			// BrnEnvironmentManager.h:299
			enum EStreamInStage {
				E_STREAMIN_START = 0,
				E_STREAMIN_LOAD_SEASON_COLOURCUBES = 1,
				E_STREAMIN_WF_LOAD_SEASON_COLOURCUBES = 2,
				E_STREAMIN_LOAD_SEASON = 3,
				E_STREAMIN_WF_LOAD_SEASON = 4,
				E_STREAMIN_ACQUIRE_SEASON = 5,
				E_STREAMIN_WF_ACQUIRE_SEASON = 6,
				E_STREAMIN_DONE = 7,
			}

			// BrnEnvironmentManager.h:333
			enum EBlendMode {
				E_BLENDMODE_TIMEOFDAY = 0,
				E_BLENDMODE_SEASONS = 1,
				E_BLENDMODE_PAUSED = 2,
			}

			// BrnEnvironmentManager.h:360
			enum ESetupSeasonsBlendStage {
				E_SETUPSEASONSBLEND_START = 0,
				E_SETUPSEASONSBLEND_WF_STREAMOUT = 1,
				E_SETUPSEASONSBLEND_WF_STREAMIN = 2,
				E_SETUPSEASONSBLEND_BLEND = 3,
				E_SETUPSEASONSBLEND_DONE = 4,
			}

			// BrnEnvironmentManager.h:373
			struct BlendFrame {
				// BrnEnvironmentManager.h:375
				const Keyframe *[4] mapKeyframes;

				// BrnEnvironmentManager.h:376
				float32_t[4] mafWeights;

			public:
				// BrnEnvironmentManager.h:379
				void Construct();

			}

		}

		// BrnEnvironmentManager.h:468
		extern void HH_MM_SS(uint32_t &, uint32_t &, uint32_t &, float32_t);

		// BrnEnvironmentManager.h:62
		const uint32_t K_JUNKYARD_LIGHTING_DATA_BUFFER_SIZE = 2048;

		// BrnEnvironmentManager.h:63
		const uint32_t KU_MAX_NUM_JUNKYARDS = 16;

	}

}

// BrnEnvironmentManager.h:68
struct BrnWorld::EnvironmentSettings::JunkyardLighting {
	// BrnEnvironmentManager.h:70
	Vector3 mJunkyardPosition;

	// BrnEnvironmentManager.h:71
	Vector3 mKeyLightDirection;

}

// BrnEnvironmentManager.h:83
struct BrnWorld::EnvironmentSettings::EnvironmentManager {
private:
	// BrnEnvironmentManager.h:272
	BrnWorld::EnvironmentSettings::EnvironmentManager::EPrepareStage mePrepareStage;

	// BrnEnvironmentManager.h:273
	BrnWorld::EnvironmentSettings::EnvironmentManager::EReleaseStage meReleaseStage;

	// BrnEnvironmentManager.h:277
	EventReceiverQueue<1024,16> mReceiverQueue;

	// BrnEnvironmentManager.h:278
	int32_t miResourceCnt;

	// BrnEnvironmentManager.h:282
	ResourcePtr<BrnWorld::EnvironmentSettings::Dictionary> mDictionaryPtr;

	// BrnEnvironmentManager.h:296
	BrnWorld::EnvironmentSettings::EnvironmentManager::EStreamOutStage meStreamOutStage;

	// BrnEnvironmentManager.h:297
	uint8_t muStreamOutTarget;

	// BrnEnvironmentManager.h:311
	BrnWorld::EnvironmentSettings::EnvironmentManager::EStreamInStage meStreamInStage;

	// BrnEnvironmentManager.h:312
	uint8_t muStreamInTarget;

	// BrnEnvironmentManager.h:314
	Random mRandom;

	// BrnEnvironmentManager.h:318
	ResourcePtr<BrnWorld::EnvironmentSettings::TimeLine>[2] maSeasonPtrs;

	// BrnEnvironmentManager.h:319
	int32_t[2] maiSeasons;

	// BrnEnvironmentManager.h:320
	int32_t miSeasonCurrentlyPlaying;

	// BrnEnvironmentManager.h:323
	extern const float32_t kfDefSeasonBlendDelta;

	// BrnEnvironmentManager.h:325
	int32_t miCurrSeason;

	// BrnEnvironmentManager.h:326
	float32_t mfSeasonBlend;

	// BrnEnvironmentManager.h:326
	float32_t mfSeasonBlendDelta;

	// BrnEnvironmentManager.h:328
	int32_t[2] maiLocations;

	// BrnEnvironmentManager.h:330
	int32_t miCurrLocation;

	// BrnEnvironmentManager.h:331
	float32_t mfLocationBlend;

	// BrnEnvironmentManager.h:343
	BrnWorld::EnvironmentSettings::EnvironmentManager::EBlendMode meBlendMode;

	// BrnEnvironmentManager.h:344
	BrnWorld::EnvironmentSettings::EnvironmentManager::EBlendMode meBlendModePaused;

	// BrnEnvironmentManager.h:349
	extern const float32_t kfDefTimeOfDay;

	// BrnEnvironmentManager.h:350
	extern const float32_t kfDefTimeOfDayDelta;

	// BrnEnvironmentManager.h:351
	extern const float32_t kfDefCloudDelta;

	// BrnEnvironmentManager.h:353
	float32_t mfTimeOfDay;

	// BrnEnvironmentManager.h:354
	float32_t mfTimeOfDayDelta;

	// BrnEnvironmentManager.h:355
	float32_t mfCloudDelta;

	// BrnEnvironmentManager.h:356
	float32_t mfSunRigRotation;

	// BrnEnvironmentManager.h:357
	float32_t mfSunTiltAtHorizon;

	// BrnEnvironmentManager.h:358
	float32_t mfSunTiltAtMidday;

	// BrnEnvironmentManager.h:369
	BrnWorld::EnvironmentSettings::EnvironmentManager::ESetupSeasonsBlendStage meSetupSeasonsBlendStage;

	// BrnEnvironmentManager.h:383
	BrnWorld::EnvironmentSettings::EnvironmentManager::BlendFrame mBlendFrame;

	// BrnEnvironmentManager.h:386
	ScatteringData mScatteringData;

	// BrnEnvironmentManager.h:387
	LightingData mLightingData;

	// BrnEnvironmentManager.h:388
	CloudsData mCloudsData;

	// BrnEnvironmentManager.h:389
	float32_t mfCloudDistanceCurve;

	// BrnEnvironmentManager.h:392
	bool mbSetScattColsFromSky;

	// BrnEnvironmentManager.h:393
	bool mbSetIrradianceFromSky;

	// BrnEnvironmentManager.h:396
	GlobalIrradianceManager mGlobalIrradianceManager;

	// BrnEnvironmentManager.h:411
	ResourcePtr<rw::graphics::postfx::ColourCube> mDefColourCubePtr;

	// BrnEnvironmentManager.h:412
	Keyframe::TintData mDefTintData;

	// BrnEnvironmentManager.h:415
	bool mbOverrideSeason;

	// BrnEnvironmentManager.h:416
	int32_t miOverrideCurrentSeason;

	// BrnEnvironmentManager.h:417
	int32_t miOverrideNextSeason;

	// BrnEnvironmentManager.h:418
	int32_t miOverrideKeyframe;

	// BrnEnvironmentManager.h:420
	Vector2 mCloud0Disp;

	// BrnEnvironmentManager.h:423
	float32_t mfWhiteLevel;

	// BrnEnvironmentManager.h:425
	float32_t mrTimeStep;

	// BrnEnvironmentManager.h:428
	AsyncOp mAsyncOp;

	// BrnEnvironmentManager.h:429
	rw::core::filesys::Handle * mpFileHandle;

	// BrnEnvironmentManager.h:430
	Vector3 mOverrideKeyLightDirection;

	// BrnEnvironmentManager.h:431
	float32_t mfTimeBeforeEnteringJunkyard;

	// BrnEnvironmentManager.h:432
	bool mbOverrideKeyLightDirection;

	// BrnEnvironmentManager.h:433
	bool mbJunkyardLightingSetup;

	// BrnEnvironmentManager.h:437
	char[2048] macJunkyardLightingBuffer;

	// BrnEnvironmentManager.h:439
	JunkyardLighting[16] maJunkyardLighting;

	// BrnEnvironmentManager.h:440
	uint32_t muNumJunkyardLightingSetupsLoaded;

	// BrnEnvironmentManager.h:441
	Vector3 mCurrentCameraPosition;

	// BrnEnvironmentManager.h:443
	float32_t mfTimeOfDayUpperBound;

	// BrnEnvironmentManager.h:444
	float32_t mfTimeOfDayLowerBound;

	// BrnEnvironmentManager.h:446
	float32_t mfSunElevTodLBound;

	// BrnEnvironmentManager.h:447
	float32_t mfSunElevTodUBound;

public:
	// BrnEnvironmentManager.h:87
	void Construct();

	// BrnEnvironmentManager.h:91
	bool Prepare(UpdateOutputBuffer *);

	// BrnEnvironmentManager.h:94
	bool Release();

	// BrnEnvironmentManager.h:97
	void Destruct();

	// BrnEnvironmentManager.h:103
	void Update(float32_t, UpdateOutputBuffer *, Vector3);

	// BrnEnvironmentManager.h:107
	void SetCurrentTimeStep(float32_t);

	// BrnEnvironmentManager.h:110
	bool Pause(bool);

	// BrnEnvironmentManager.h:122
	void GenerateEffects(BrnEffectsFrame *, BrnEffectsFrame *, BrnEffectsFrame *, BrnEffectsFrame *) const;

	// BrnEnvironmentManager.h:151
	void GenerateShaderConstants(Vector4 &, Vector4 &, Vector4 &, Vector3 &, Vector4 &, Vector4 &, Vector4 &, Vector3 &, Vector4 &, Vector3 &, Vector3 &, Vector3 &, Vector3 &, Vector3 &, Vector3 &, Vector3 &, Vector4 &, Vector2 &, Vector2 &, Vector2 &, float32_t &, Matrix44 &, Matrix44 &, Matrix44 &, Vector3 &, Vector3 &);

	// BrnEnvironmentManager.h:154
	Vector3 CalcKeyLightDirection() const;

	// BrnEnvironmentManager.h:157
	Vector3 CalcKeyLightDirectionUnbiased() const;

	// BrnEnvironmentManager.h:160
	float32_t GetTimeOfDay_Seconds() const;

	// BrnEnvironmentManager.h:164
	void SetTimeOfDay_Seconds(float32_t);

	// BrnEnvironmentManager.h:167
	float32_t GetCloudDistanceCurve() const;

	// BrnEnvironmentManager.h:170
	void EnableJunkyardLightingSetup();

	// BrnEnvironmentManager.h:173
	void DisableJunkyardLightingSetup();

private:
	// BrnEnvironmentManager.h:179
	bool StreamOut(UpdateOutputBuffer *);

	// BrnEnvironmentManager.h:183
	bool StreamIn(UpdateOutputBuffer *);

	// BrnEnvironmentManager.h:186
	void DiscardCurrSeason();

	// BrnEnvironmentManager.h:189
	void RequestNextSeason();

	// BrnEnvironmentManager.h:197
	bool SetupBlend(BrnWorld::EnvironmentSettings::EnvironmentManager::BlendFrame &, float32_t, UpdateOutputBuffer *);

	// BrnEnvironmentManager.h:201
	void PerformBlend(const BrnWorld::EnvironmentSettings::EnvironmentManager::BlendFrame &);

	// BrnEnvironmentManager.h:207
	bool SetupTimeOfDayBlend(BrnWorld::EnvironmentSettings::EnvironmentManager::BlendFrame &, UpdateOutputBuffer *, float32_t);

	// BrnEnvironmentManager.h:212
	bool SetupSeasonsBlend(BrnWorld::EnvironmentSettings::EnvironmentManager::BlendFrame &, UpdateOutputBuffer *);

	// BrnEnvironmentManager.h:228
	void FindKeyframes(const Keyframe *&, float32_t &, const Keyframe *&, float32_t &, const BrnWorld::EnvironmentSettings::TimeLine::LocationData &, float32_t);

	// BrnEnvironmentManager.h:233
	void FirstKeyframe(const Keyframe *&, const BrnWorld::EnvironmentSettings::TimeLine::LocationData &);

	// BrnEnvironmentManager.h:238
	void LastKeyframe(const Keyframe *&, const BrnWorld::EnvironmentSettings::TimeLine::LocationData &);

	// BrnEnvironmentManager.h:243
	void ReadJunkyardLightingData(const char *, uint32_t);

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnEnvironmentUtil.h:31
	namespace EnvironmentSettings {
		// Declaration
		struct EnvironmentManager {
			// BrnEnvironmentManager.h:246
			enum EPrepareStage {
				E_PREPARE_START = 0,
				E_PREPARE_LOAD_DEPENDENCIES = 1,
				E_PREPARE_WF_LOAD_DEPENDENCIES = 2,
				E_PREPARE_ACQUIRE_DEPENDENCIES = 3,
				E_PREPARE_WF_ACQUIRE_DEPENDENCIES = 4,
				E_PREPARE_LOAD_DICTIONARY = 5,
				E_PREPARE_WF_LOAD_DICTIONARY = 6,
				E_PREPARE_ACQUIRE_DICTIONARY = 7,
				E_PREPARE_WF_ACQUIRE_DICTIONARY = 8,
				E_PREPARE_STREAMIN = 9,
				E_PREPARE_WF_STREAMIN = 10,
				E_PREPARE_OPEN_JUNKYARD_LIGHTING_DATA = 11,
				E_PREPARE_WF_OPEN_JUNKYARD_LIGHTING_DATA = 12,
				E_PREPARE_READ_JUNKYARD_LIGHTING_DATA = 13,
				E_PREPARE_WF_READ_JUNKYARD_LIGHTING_DATA = 14,
				E_PREPARE_DONE = 15,
			}

			// BrnEnvironmentManager.h:266
			enum EReleaseStage {
				E_RELEASE_START = 0,
				E_RELEASE_DONE = 1,
			}

			// BrnEnvironmentManager.h:284
			enum EStreamOutStage {
				E_STREAMOUT_START = 0,
				E_STREAMOUT_DISCARD_SEASON = 1,
				E_STREAMOUT_UNLOAD_SEASON = 2,
				E_STREAMOUT_WF_UNLOAD_SEASON = 3,
				E_STREAMOUT_UNLOAD_SEASON_COLOURCUBES = 4,
				E_STREAMOUT_WF_UNLOAD_SEASON_COLOURCUBES = 5,
				E_STREAMOUT_REQUEST_NEXT_SEASON = 6,
				E_STREAMOUT_DONE = 7,
			}

			// BrnEnvironmentManager.h:299
			enum EStreamInStage {
				E_STREAMIN_START = 0,
				E_STREAMIN_LOAD_SEASON_COLOURCUBES = 1,
				E_STREAMIN_WF_LOAD_SEASON_COLOURCUBES = 2,
				E_STREAMIN_LOAD_SEASON = 3,
				E_STREAMIN_WF_LOAD_SEASON = 4,
				E_STREAMIN_ACQUIRE_SEASON = 5,
				E_STREAMIN_WF_ACQUIRE_SEASON = 6,
				E_STREAMIN_DONE = 7,
			}

			// BrnEnvironmentManager.h:333
			enum EBlendMode {
				E_BLENDMODE_TIMEOFDAY = 0,
				E_BLENDMODE_SEASONS = 1,
				E_BLENDMODE_PAUSED = 2,
			}

			// BrnEnvironmentManager.h:360
			enum ESetupSeasonsBlendStage {
				E_SETUPSEASONSBLEND_START = 0,
				E_SETUPSEASONSBLEND_WF_STREAMOUT = 1,
				E_SETUPSEASONSBLEND_WF_STREAMIN = 2,
				E_SETUPSEASONSBLEND_BLEND = 3,
				E_SETUPSEASONSBLEND_DONE = 4,
			}

			// BrnEnvironmentManager.h:373
			struct BlendFrame {
				// BrnEnvironmentManager.h:375
				const Keyframe *[4] mapKeyframes;

				// BrnEnvironmentManager.h:376
				float32_t[4] mafWeights;

			public:
				// BrnEnvironmentManager.h:379
				void Construct();

			}

		}

		// BrnEnvironmentManager.h:62
		const uint32_t K_JUNKYARD_LIGHTING_DATA_BUFFER_SIZE = 2048;

		// BrnEnvironmentManager.h:63
		const uint32_t KU_MAX_NUM_JUNKYARDS = 16;

	}

}

