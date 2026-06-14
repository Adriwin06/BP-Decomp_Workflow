// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct MomentTakedownLookback {
		// BrnMomentTakedownLookback.h:96
		struct Parameters : public BrnDirector::Moment::Parameters {
		public:
			// BrnMomentTakedownLookback.h:100
			void Construct();

		}

	}

}

// BrnMomentTakedownLookback.h:46
struct BrnDirector::MomentTakedownLookback : public BrnDirector::Moment {
private:
	// BrnMomentTakedownLookback.h:81
	const BrnDirector::MomentTakedownLookback::Parameters * mpParameters;

	// BrnMomentTakedownLookback.h:83
	BrnDirector::Camera::BehaviourRig::Parameters mLookbackRigParams;

	// BrnMomentTakedownLookback.h:84
	BehaviourHandle<BrnDirector::Camera::BehaviourRig> mRigCameraHandle;

	// BrnMomentTakedownLookback.h:86
	BrnDirector::Moment::VehicleRef mVictim;

public:
	void MomentTakedownLookback(const MomentTakedownLookback &);

	void MomentTakedownLookback();

	// BrnMomentTakedownLookback.cpp:34
	virtual void Construct();

	// BrnMomentTakedownLookback.cpp:55
	virtual bool Prepare(BehaviourManager &);

	// BrnMomentTakedownLookback.cpp:72
	virtual void Update(float32_t, BehaviourManager &, const MomentSharedInfo &);

	// BrnMomentTakedownLookback.cpp:171
	virtual bool Release();

	// BrnMomentTakedownLookback.cpp:189
	virtual void Destruct();

	// BrnMomentTakedownLookback.cpp:203
	virtual void SetParameters(const BrnDirector::Moment::Parameters *);

	// BrnMomentTakedownLookback.cpp:229
	virtual const char * GetName() const;

private:
	// BrnMomentTakedownLookback.cpp:215
	virtual BrnDirector::Moment::EType GetInstanceType();

}

// BrnMomentTakedownLookback.h:46
void BrnDirector::MomentTakedownLookback::MomentTakedownLookback() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

