// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct MomentPlayerStunt {
		// BrnMomentPlayerStunt.h:100
		struct Parameters : public BrnDirector::Moment::Parameters {
		public:
			// BrnMomentPlayerStunt.h:104
			void Construct();

		}

	}

}

// BrnMomentPlayerStunt.h:46
struct BrnDirector::MomentPlayerStunt : public BrnDirector::Moment {
private:
	// BrnMomentPlayerStunt.h:81
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim> mIceCam;

	// BrnMomentPlayerStunt.h:83
	const BrnDirector::MomentPlayerStunt::Parameters * mpParameters;

	// BrnMomentPlayerStunt.h:85
	float32_t mfLandTime;

	// BrnMomentPlayerStunt.h:86
	float32_t mfTimeInState;

	// BrnMomentPlayerStunt.h:87
	bool mbStoppedEffect;

	// BrnMomentPlayerStunt.h:88
	bool mbFirstTimeForThisStunt;

	// BrnMomentPlayerStunt.h:89
	bool mbIsCrashStunt;

	// BrnMomentPlayerStunt.h:90
	bool mbHasCrashed;

public:
	void MomentPlayerStunt(const MomentPlayerStunt &);

	void MomentPlayerStunt();

	// BrnMomentPlayerStunt.cpp:35
	virtual void Construct();

	// BrnMomentPlayerStunt.cpp:54
	virtual bool Prepare(BehaviourManager &);

	// BrnMomentPlayerStunt.cpp:70
	virtual void Update(float32_t, BehaviourManager &, const MomentSharedInfo &);

	// BrnMomentPlayerStunt.cpp:288
	virtual bool Release();

	// BrnMomentPlayerStunt.cpp:306
	virtual void Destruct();

	// BrnMomentPlayerStunt.cpp:320
	virtual void SetParameters(const BrnDirector::Moment::Parameters *);

	// BrnMomentPlayerStunt.cpp:346
	virtual const char * GetName() const;

private:
	// BrnMomentPlayerStunt.cpp:332
	virtual BrnDirector::Moment::EType GetInstanceType();

}

// BrnMomentPlayerStunt.h:46
void BrnDirector::MomentPlayerStunt::MomentPlayerStunt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

