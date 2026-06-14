// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct Moment {
		// BrnMoment.h:104
		enum EState {
			E_STATE_INVALID_INACTIVE = 0,
			E_STATE_INVALID_SEARCHING = 1,
			E_STATE_INVALID_FOUND_PREPARING = 2,
			E_STATE_VALID = 3,
		}

		// BrnMoment.h:117
		enum EType {
			E_MOMENT_HARD_STOP = 0,
			E_MOMENT_HIT_TRAFFIC = 1,
			E_MOMENT_TUMBLING = 2,
			E_MOMENT_TAKEDOWN_LOOKBACK = 3,
			E_MOMENT_PASSENGER_SEES_ACTION = 4,
			E_MOMENT_BYSTANDER_SEES_ACTION = 5,
			E_MOMENT_FAILSAFE = 6,
			E_MOMENT_PLAYER_JUMPING = 7,
			E_MOMENT_PLAYER_STUNT = 8,
			E_MOMENT_STATIC_CAM_IMPACT = 9,
			E_MOMENT_NEW_CAR_JOINED = 10,
			E_MOMENT_STATIONARY_CRASH = 11,
			E_MOMENT_COUNT = 12,
		}

		// BrnMoment.h:263
		struct VehicleRef : public VehicleRef {
		public:
			// BrnMoment.h:268
			const VehicleInfo & GetVehicle(const MomentSharedInfo &);

		}

		// BrnMoment.h:274
		struct Parameters {
		public:
			// BrnMoment.h:277
			void Construct();

		}

	}

}

// BrnMoment.h:49
struct BrnDirector::MomentSharedInfo {
	// BrnMoment.h:52
	VehicleInfo mPlayerInfo;

	// BrnMoment.h:53
	BitArray<8u> mUsedRaceCars;

	// BrnMoment.h:55
	Random * mpRandom;

	// BrnMoment.h:57
	BrnDirector::DebugLog * mpDebugLog;

	// BrnMoment.h:58
	BrnDirector::DebugPrinter * mpDebugPrinter;

	// BrnMoment.h:60
	GameState * mpGameState;

	// BrnMoment.h:62
	const AllVehicleData * mpAllVehicleData;

	// BrnMoment.h:64
	const VehicleInfo * mpPlayerCar;

	// BrnMoment.h:65
	const VehicleInfo * mpRaceCars;

	// BrnMoment.h:66
	const rw::math::vpu::Matrix44Affine * mpPlayerCarTransform;

	// BrnMoment.h:67
	EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

	// BrnMoment.h:69
	float32_t mfTimestep;

	// BrnMoment.h:70
	float32_t mfSimTimestep;

	// BrnMoment.h:72
	bool mbAllowJumpMoment;

	// BrnMoment.h:73
	bool mbAllowStuntMoment;

	// BrnMoment.h:74
	bool mbAllowHardStopMoment;

	// BrnMoment.h:75
	bool mbForceNextWorldCrashToBeFastTopDown;

	// BrnMoment.h:77
	bool mbForceCollisionPolicysToStart;

	// BrnMoment.h:79
	const BehaviourParameterBank * mpBehaviourParameterBank;

	// BrnMoment.h:80
	const NamedParameters * mpNamedBehaviourParams;

	// BrnMoment.h:82
	const VehicleTracker * mpPlayerTracker;

	// BrnMoment.h:46
	typedef ContactSpyInterface ContactSpyInterface;

	// BrnMoment.h:84
	const MomentSharedInfo::ContactSpyInterface * mpContacts;

	// BrnMoment.h:86
	const BrnDirector::DirectorResourceManager * mpDirectorResourceManager;

	// BrnMoment.h:87
	const BrnDirector::ShotSelector * mpShotSelector;

	// BrnMoment.h:88
	const BrnDirector::CrashAnalysis * mpCrashAnalysis;

	// BrnMoment.h:89
	const EffectInterface * mpEffectInterface;

	// BrnMoment.h:91
	const PlayerCrashInfo * mpPlayerCrashInfo;

}

// BrnMoment.h:97
struct BrnDirector::Moment {
	int (*)(...) * _vptr.Moment;

protected:
	// BrnMoment.h:243
	Camera mCamera;

private:
	// BrnMoment.h:247
	BrnDirector::Moment::EType meType;

	// BrnMoment.h:248
	BrnDirector::Moment::EState meState;

	// BrnMoment.h:252
	bool mbCanSwitchToMeNow;

	// BrnMoment.h:253
	bool mbCanSwitchFromMeNow;

	// BrnMoment.h:254
	bool mbConditionsMet;

	// BrnMoment.h:256
	bool mbIsInhibited;

public:
	void Moment(const BrnDirector::Moment &);

	void Moment();

	// BrnMoment.cpp:27
	virtual void Construct();

	// BrnMoment.h:142
	virtual bool Prepare(BehaviourManager &);

	// BrnMoment.h:283
	void PreUpdate();

	// BrnMoment.h:152
	virtual void Update(float32_t, BehaviourManager &, const MomentSharedInfo &);

	// BrnMoment.cpp:43
	virtual void SetParameters(const BrnDirector::Moment::Parameters *);

	// BrnMoment.h:159
	virtual bool Release();

	// BrnMoment.cpp:51
	virtual void Destruct();

	// BrnMoment.h:296
	BrnDirector::Moment::EState GetState() const;

	// BrnMoment.h:304
	BrnDirector::Moment::EType GetType() const;

	// BrnMoment.h:321
	bool IsValid() const;

	// BrnMoment.h:329
	const Camera & GetCamera() const;

	// BrnMoment.h:356
	bool CanSwitchToMeNow() const;

	// BrnMoment.h:366
	bool CanSwitchFromMeNow() const;

	// BrnMoment.h:190
	virtual const char * GetName() const;

	// BrnMoment.h:197
	void Inhibit();

	// BrnMoment.h:200
	void Uninhibit();

	// BrnMoment.h:203
	bool IsInhibited() const;

	// BrnMoment.h:208
	bool ConditionsAreMet() const;

protected:
	// BrnMoment.h:214
	virtual BrnDirector::Moment::EType GetInstanceType();

	// BrnMoment.h:313
	void SetState(BrnDirector::Moment::EState);

	// BrnMoment.h:337
	Camera & GetNonConstCamera();

	// BrnMoment.h:346
	void SetCamera(const Camera &);

	// BrnMoment.h:375
	void SetCantSwitchToMeNow(BrnDirector::Camera::ValidityAccount::ENoCutToFlag);

	// BrnMoment.h:385
	void SetCantSwitchFromMeNow(BrnDirector::Camera::ValidityAccount::ENoCutFromFlag);

	// BrnMoment.h:394
	bool IsDebugDisplayActive() const;

	// BrnMoment.h:241
	void SetConditionsNotMet();

}

// BrnMoment.h:97
void BrnDirector::Moment::Moment() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct Moment {
		// BrnMoment.h:117
		enum EType {
			E_MOMENT_HARD_STOP = 0,
			E_MOMENT_HIT_TRAFFIC = 1,
			E_MOMENT_TUMBLING = 2,
			E_MOMENT_TAKEDOWN_LOOKBACK = 3,
			E_MOMENT_PASSENGER_SEES_ACTION = 4,
			E_MOMENT_BYSTANDER_SEES_ACTION = 5,
			E_MOMENT_FAILSAFE = 6,
			E_MOMENT_PLAYER_JUMPING = 7,
			E_MOMENT_PLAYER_STUNT = 8,
			E_MOMENT_STATIC_CAM_IMPACT = 9,
			E_MOMENT_NEW_CAR_JOINED = 10,
			E_MOMENT_STATIONARY_CRASH = 11,
			E_MOMENT_COUNT = 12,
		}

		// BrnMoment.h:274
		struct Parameters {
		public:
			// BrnMoment.h:277
			void Construct();

		}

	}

}

