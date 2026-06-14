// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct MomentTumbling {
		// BrnMomentTumbling.h:116
		struct Parameters : public BrnDirector::Moment::Parameters {
			// BrnMomentTumbling.h:119
			enum ESubType {
				E_SUBTYPE_TRUCKING_SIDE = 0,
				E_SUBTYPE_TRUCKING_FRONT = 1,
				E_SUBTYPE_FOLLOW = 2,
				E_SUBTYPE_LEAD = 3,
				E_SUBTYPE_SIDE = 4,
			}

			// BrnMomentTumbling.h:128
			BrnDirector::MomentTumbling::Parameters::ESubType meSubType;

			// BrnMomentTumbling.h:130
			bool mbCrashMoment;

			// BrnMomentTumbling.h:131
			bool mbTakedownMoment;

		public:
			// BrnMomentTumbling.h:134
			void Construct();

		}

	}

}

// BrnMomentTumbling.h:47
struct BrnDirector::MomentTumbling : public BrnDirector::Moment {
private:
	// BrnMomentTumbling.cpp:21
	extern const float32_t kfTumbleSensitivity;

	// BrnMomentTumbling.cpp:22
	extern const float32_t kfTumbleStartThreshold;

	// BrnMomentTumbling.cpp:23
	extern const float32_t kfTumbleStopThreshold;

	// BrnMomentTumbling.h:93
	Vector3 mSmoothedAngularVelocity;

	// BrnMomentTumbling.h:94
	BehaviourHandle<BrnDirector::Camera::BehaviourGyroCam> mGyroCam;

	// BrnMomentTumbling.h:96
	float32_t mfRunningTime;

	// BrnMomentTumbling.h:98
	const BrnDirector::MomentTumbling::Parameters * mpParameters;

	// BrnMomentTumbling.h:100
	bool mbTryTrucking;

	// BrnMomentTumbling.h:101
	bool mbTryLeft;

	// BrnMomentTumbling.h:102
	bool mbFirstTryThisCrash;

	// BrnMomentTumbling.h:103
	bool mbUseLeftForThisCrash;

	// BrnMomentTumbling.h:104
	bool mbUseRightForThisCrash;

	// BrnMomentTumbling.h:106
	bool mbLookingAtTakedown;

public:
	void MomentTumbling(const MomentTumbling &);

	void MomentTumbling();

	// BrnMomentTumbling.cpp:46
	virtual void Construct();

	// BrnMomentTumbling.cpp:70
	virtual bool Prepare(BehaviourManager &);

	// BrnMomentTumbling.cpp:87
	virtual void Update(float32_t, BehaviourManager &, const MomentSharedInfo &);

	// BrnMomentTumbling.cpp:356
	virtual bool Release();

	// BrnMomentTumbling.cpp:374
	virtual void Destruct();

	// BrnMomentTumbling.cpp:388
	virtual void SetParameters(const BrnDirector::Moment::Parameters *);

	// BrnMomentTumbling.cpp:414
	virtual const char * GetName() const;

	// BrnMomentTumbling.cpp:263
	void SignalIsGoodTimeToPlant();

private:
	// BrnMomentTumbling.cpp:282
	void SetGyroCamParameters(const MomentSharedInfo &);

	// BrnMomentTumbling.cpp:400
	virtual BrnDirector::Moment::EType GetInstanceType();

}

// BrnMomentTumbling.h:47
void BrnDirector::MomentTumbling::MomentTumbling() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMomentTumbling.h:89
extern const float32_t kfTumbleSensitivity;

// BrnMomentTumbling.h:90
extern const float32_t kfTumbleStartThreshold;

// BrnMomentTumbling.h:91
extern const float32_t kfTumbleStopThreshold;

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct MomentTumbling {
		// BrnMomentTumbling.h:116
		struct Parameters : public BrnDirector::Moment::Parameters {
			// BrnMomentTumbling.h:119
			enum ESubType {
				E_SUBTYPE_TRUCKING_SIDE = 0,
				E_SUBTYPE_TRUCKING_FRONT = 1,
				E_SUBTYPE_FOLLOW = 2,
				E_SUBTYPE_LEAD = 3,
				E_SUBTYPE_SIDE = 4,
			}

			// BrnMomentTumbling.h:128
			BrnDirector::MomentTumbling::Parameters::ESubType meSubType;

			// BrnMomentTumbling.h:130
			bool mbCrashMoment;

			// BrnMomentTumbling.h:131
			bool mbTakedownMoment;

		public:
			// BrnMomentTumbling.h:134
			void Construct();

		}

	}

}

