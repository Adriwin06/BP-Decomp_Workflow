// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct MomentStationaryCrash {
		// BrnMomentStationaryCrash.h:98
		struct Parameters : public BrnDirector::Moment::Parameters {
		public:
			// BrnMomentStationaryCrash.h:102
			void Construct();

		}

	}

}

// BrnMomentStationaryCrash.h:46
struct BrnDirector::MomentStationaryCrash : public BrnDirector::Moment {
private:
	// BrnMomentStationaryCrash.h:81
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim> mIceCameraHandle;

	// BrnMomentStationaryCrash.h:83
	const BrnDirector::MomentStationaryCrash::Parameters * mpParameters;

	// BrnMomentStationaryCrash.h:85
	bool mbIsTumblingCrash;

	// BrnMomentStationaryCrash.h:86
	uint32_t muTake;

	// BrnMomentStationaryCrash.h:87
	float32_t mfTimeCrashing;

	// BrnMomentStationaryCrash.h:88
	float32_t mfRotationAngle;

public:
	void MomentStationaryCrash(const MomentStationaryCrash &);

	void MomentStationaryCrash();

	// BrnMomentStationaryCrash.cpp:34
	virtual void Construct();

	// BrnMomentStationaryCrash.cpp:56
	virtual bool Prepare(BehaviourManager &);

	// BrnMomentStationaryCrash.cpp:75
	virtual void Update(float32_t, BehaviourManager &, const MomentSharedInfo &);

	// BrnMomentStationaryCrash.cpp:196
	virtual bool Release();

	// BrnMomentStationaryCrash.cpp:212
	virtual void Destruct();

	// BrnMomentStationaryCrash.cpp:226
	virtual void SetParameters(const BrnDirector::Moment::Parameters *);

	// BrnMomentStationaryCrash.cpp:252
	virtual const char * GetName() const;

private:
	// BrnMomentStationaryCrash.cpp:238
	virtual BrnDirector::Moment::EType GetInstanceType();

}

// BrnMomentStationaryCrash.h:46
void BrnDirector::MomentStationaryCrash::MomentStationaryCrash() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

