// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct Behaviour {
			// Behaviour.h:265
			struct Parameters {
			protected:
				// Behaviour.h:287
				uint32_t mType;

			private:
				// Behaviour.h:294
				const char * mpcDebugName;

			public:
				// Behaviour.h:271
				uint32_t GetType() const;

				// Behaviour.h:276
				void SetDebugName(const char *);

				// Behaviour.h:279
				const char * GetDebugName() const;

			protected:
				// Behaviour.h:285
				Parameters();

				// Behaviour.h:290
				void Construct();

			}

			// Behaviour.h:353
			struct VehicleRef : public VehicleRef {
			public:
				// Behaviour.h:358
				const VehicleInfo & GetVehicle(const BehaviourSharedInfo &);

				// Behaviour.h:362
				const rw::math::vpu::Matrix44Affine & GetTransform(const BehaviourSharedInfo &);

			}

		}

	}

}

// Behaviour.h:87
struct BrnDirector::Camera::BehaviourSharedInfo {
	// Behaviour.h:92
	Camera2DRotationController mRotationController;

	// Behaviour.h:93
	CameraSphericalRotationController mSphericalRotationController;

	// Behaviour.h:95
	VehicleInfo mPlayerInfo;

	// Behaviour.h:96
	Timestep mTimestep;

	// Behaviour.h:98
	Vector2 mCarModifier;

	// Behaviour.h:100
	BitArray<8u> mUsedRaceCars;

	// Behaviour.h:102
	const BrnDirector::DirectorResourceManager * mpDirectorResourceManager;

	// Behaviour.h:104
	const EffectInterface * mpEffectInterface;

	// Behaviour.h:106
	float32_t mfTempFOVBoostAmount;

	// Behaviour.h:107
	float32_t mfSpeedRatio;

	// Behaviour.h:109
	float32_t mfCrashTimeRemaining;

	// Behaviour.h:111
	const AllVehicleData * mpAllVehicleData;

	// Behaviour.h:113
	const BrnDirector::Camera::BehaviourManager * mpBehaviourManager;

	// Behaviour.h:114
	const VehicleInfo * mpRaceCars;

	// Behaviour.h:115
	EActiveRaceCarIndex mePlayerCarIndex;

	// Behaviour.h:117
	BrnDirector::DebugLog * mpDebugLog;

	// Behaviour.h:118
	BrnDirector::DebugPrinter * mpDebugPrinter;

	// Behaviour.h:120
	Random * mpRandom;

	// Behaviour.h:122
	const SceneQueryInterface * mpSceneQueryInterface;

	// Behaviour.h:124
	const BrnDirector::WorldMap * mpWorldMap;

	// Behaviour.h:125
	const VehicleTracker * mpPlayerTracker;

	// Behaviour.h:126
	const ICE::CameraSpaceHandler * mpCameraSpaceHandler;

	// Behaviour.h:128
	float32_t mfLastHandbrakeTime;

	// Behaviour.h:129
	bool mbAllStreamed;

	// Behaviour.h:130
	bool mbIceDataBeingEdited;

	// Behaviour.h:132
	uint8_t muRenderMetricsActivationID;

	// Behaviour.h:134
	Vector2 mCameraModifier;

	// Behaviour.h:136
	bool mbUseControlPauseBehaviour;

	// Behaviour.h:137
	bool mbLookback;

}

// Behaviour.h:50
namespace ICE {
	struct CameraSpaceHandler;

	struct Angle;

	struct ICEFileHandler;

	struct Cubic1D;

	struct Cubic3D;

	struct EControlToICEAction;

	struct ActionRef;

	struct ActionQueue;

	struct ICEMemory;

	struct ICEPointers;

	struct ICECameraAnchor;

	struct ICETimer;

	struct IResourceManager;

	struct bNode;

	struct bList;

	struct ICEParameter;

	struct ICEValue;

	struct ICEChannel;

	struct ICEElementCount;

	struct bTNode<ICE::ICETakeData>;

	struct ICETakeData;

	struct ICETake;

	struct bTList<ICE::ICETakeData>;

	struct ICEGroup;

	struct ICEOverlay;

	struct ICECamera;

	struct ICECameraMover;

	struct ICEManager;

}

// Behaviour.h:149
struct BrnDirector::Camera::BehaviourSharedPrepareReleaseInfo {
	// Behaviour.h:154
	const BrnDirector::Camera::BehaviourControllerLockInterface * mpInterpolateLockInterface;

	// Behaviour.h:155
	const BrnDirector::DirectorResourceManager * mpDirectorResourceManager;

}

// Behaviour.h:167
struct BrnDirector::Camera::Behaviour {
	int (*)(...) * _vptr.Behaviour;

private:
	// Behaviour.h:334
	BrnDirector::Timestep::EType meTimestepType;

	// Behaviour.h:335
	bool mbIsPrepared;

	// Behaviour.h:336
	bool mbHasFailed;

	// Behaviour.h:337
	bool mbTweakerAttached;

	// Behaviour.h:342
	bool mbCanSwitchToMeNow;

	// Behaviour.h:343
	bool mbCanSwitchFromMeNow;

	// Behaviour.h:346
	const char * mpcDebugParametersName;

public:
	void Behaviour(const BrnDirector::Camera::Behaviour &);

	void Behaviour();

	// Behaviour.cpp:28
	virtual void Construct();

	// Behaviour.h:206
	virtual bool Prepare(const BehaviourSharedPrepareReleaseInfo &);

	// Behaviour.h:368
	void PreUpdate();

	// Behaviour.h:214
	virtual bool Update(Camera &, const BehaviourSharedInfo &);

	// Behaviour.cpp:49
	virtual bool PostCollisionUpdate(Camera &, const BehaviourSharedInfo &);

	// Behaviour.cpp:59
	virtual void Release(const BehaviourSharedPrepareReleaseInfo &);

	// Behaviour.cpp:67
	virtual BrnDirector::Camera::CollisionPolicy * GetCollisionPolicy();

	// Behaviour.h:231
	virtual void SetupTweaker(Tweaker &);

	// Behaviour.h:413
	void SetTweakerAttached(bool);

	// Behaviour.h:239
	virtual const char * GetName() const;

	// Behaviour.h:242
	const char * GetDebugParametersName() const;

protected:
	// Behaviour.h:246
	void SetDebugParametersName(const char *);

public:
	// Behaviour.h:421
	bool CanSwitchToMeNow() const;

	// Behaviour.h:429
	bool CanSwitchFromMeNow() const;

	// Behaviour.h:437
	bool HasFailed() const;

	// Behaviour.h:487
	void Fail(Camera &, BrnDirector::Camera::ValidityAccount::EFailedFlag);

	// Behaviour.h:468
	BrnDirector::Timestep::EType GetTimestepType() const;

	// Behaviour.h:477
	void SetTimestepType(BrnDirector::Timestep::EType);

protected:
	// Behaviour.h:388
	bool IsPrepared();

	// Behaviour.h:396
	void SetPrepared();

	// Behaviour.h:404
	void SetNotPrepared();

	// Behaviour.h:447
	void SetCantSwitchToMeNow(Camera &, BrnDirector::Camera::ValidityAccount::ENoCutToFlag);

	// Behaviour.h:458
	void SetCantSwitchFromMeNow(Camera &, BrnDirector::Camera::ValidityAccount::ENoCutFromFlag);

	// Behaviour.h:502
	bool IsTweakerAttached() const;

	// Behaviour.h:510
	bool IsDebugDisplayActive() const;

}

// Behaviour.h:167
void BrnDirector::Camera::Behaviour::Behaviour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Behaviour.h:50
namespace ICE {
	struct ICEMemory;

}

// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct Behaviour {
			// Behaviour.h:265
			struct Parameters {
			protected:
				// Behaviour.h:287
				uint32_t mType;

			private:
				// Behaviour.h:294
				const char * mpcDebugName;

			public:
				// Behaviour.h:271
				uint32_t GetType() const;

				// Behaviour.h:276
				void SetDebugName(const char *);

				// Behaviour.h:279
				const char * GetDebugName() const;

			protected:
				// Behaviour.h:285
				Parameters();

				// Behaviour.h:290
				void Construct();

			}

		}

	}

}

// Behaviour.h:50
namespace ICE {
	struct ICEMemory;

	struct bNode;

	struct ICEElementCount;

	struct bTNode<ICE::ICETakeData>;

	struct ICETakeData;

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// Declaration
		struct Behaviour {
			// Behaviour.h:265
			struct Parameters {
			protected:
				// Behaviour.h:287
				uint32_t mType;

			private:
				// Behaviour.h:294
				const char * mpcDebugName;

			public:
				// Behaviour.h:271
				uint32_t GetType() const;

				// Behaviour.h:276
				void SetDebugName(const char *);

				// Behaviour.h:279
				const char * GetDebugName() const;

			protected:
				// Behaviour.h:285
				Parameters();

				// Behaviour.h:290
				void Construct();

			}

		}

	}

}

