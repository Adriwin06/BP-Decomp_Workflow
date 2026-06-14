// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct MomentPassengerSeesAction {
		// BrnMomentPassengerSeesAction.h:98
		struct Parameters : public BrnDirector::Moment::Parameters {
		public:
			// BrnMomentPassengerSeesAction.h:102
			void Construct();

		}

	}

}

// BrnMomentPassengerSeesAction.h:46
struct BrnDirector::MomentPassengerSeesAction : public BrnDirector::Moment {
private:
	// BrnMomentPassengerSeesAction.h:81
	float mfTimeCrashing;

	// BrnMomentPassengerSeesAction.h:83
	const BrnDirector::MomentPassengerSeesAction::Parameters * mpParameters;

	// BrnMomentPassengerSeesAction.h:85
	BehaviourHandle<BrnDirector::Camera::BehaviourPassengerCam> mPassengerCam;

	// BrnMomentPassengerSeesAction.h:87
	BrnDirector::Moment::VehicleRef mWitness;

	// BrnMomentPassengerSeesAction.h:88
	BrnDirector::Moment::VehicleRef mIncident;

public:
	void MomentPassengerSeesAction(const MomentPassengerSeesAction &);

	void MomentPassengerSeesAction();

	// BrnMomentPassengerSeesAction.cpp:34
	virtual void Construct();

	// BrnMomentPassengerSeesAction.cpp:55
	virtual bool Prepare(BehaviourManager &);

	// BrnMomentPassengerSeesAction.cpp:74
	virtual void Update(float32_t, BehaviourManager &, const MomentSharedInfo &);

	// BrnMomentPassengerSeesAction.cpp:211
	virtual bool Release();

	// BrnMomentPassengerSeesAction.cpp:229
	virtual void Destruct();

	// BrnMomentPassengerSeesAction.cpp:243
	virtual void SetParameters(const BrnDirector::Moment::Parameters *);

	// BrnMomentPassengerSeesAction.cpp:269
	virtual const char * GetName() const;

private:
	// BrnMomentPassengerSeesAction.cpp:255
	virtual BrnDirector::Moment::EType GetInstanceType();

}

// BrnMomentPassengerSeesAction.h:46
void BrnDirector::MomentPassengerSeesAction::MomentPassengerSeesAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

