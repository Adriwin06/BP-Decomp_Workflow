// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct MomentStaticCamImpact {
		// BrnMomentStaticCamImpact.h:93
		struct Parameters : public BrnDirector::Moment::Parameters {
		public:
			// BrnMomentStaticCamImpact.h:97
			void Construct();

		}

	}

}

// BrnMomentStaticCamImpact.h:46
struct BrnDirector::MomentStaticCamImpact : public BrnDirector::Moment {
private:
	// BrnMomentStaticCamImpact.h:81
	BehaviourHandle<BrnDirector::Camera::BehaviourFixedCam> mFixedCam;

	// BrnMomentStaticCamImpact.h:83
	const BrnDirector::MomentStaticCamImpact::Parameters * mpParameters;

public:
	void MomentStaticCamImpact(const MomentStaticCamImpact &);

	void MomentStaticCamImpact();

	// BrnMomentStaticCamImpact.cpp:34
	virtual void Construct();

	// BrnMomentStaticCamImpact.cpp:52
	virtual bool Prepare(BehaviourManager &);

	// BrnMomentStaticCamImpact.cpp:68
	virtual void Update(float32_t, BehaviourManager &, const MomentSharedInfo &);

	// BrnMomentStaticCamImpact.cpp:147
	virtual bool Release();

	// BrnMomentStaticCamImpact.cpp:165
	virtual void Destruct();

	// BrnMomentStaticCamImpact.cpp:179
	virtual void SetParameters(const BrnDirector::Moment::Parameters *);

	// BrnMomentStaticCamImpact.cpp:205
	virtual const char * GetName() const;

private:
	// BrnMomentStaticCamImpact.cpp:191
	virtual BrnDirector::Moment::EType GetInstanceType();

}

// BrnMomentStaticCamImpact.h:46
void BrnDirector::MomentStaticCamImpact::MomentStaticCamImpact() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

