// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct MomentFailSafe {
		// BrnMomentFailsafe.h:89
		struct Parameters : public BrnDirector::Moment::Parameters {
		public:
			// BrnMomentFailsafe.h:93
			void Construct();

		}

	}

}

// BrnMomentFailsafe.h:46
struct BrnDirector::MomentFailSafe : public BrnDirector::Moment {
private:
	// BrnMomentFailsafe.h:79
	const BrnDirector::MomentFailSafe::Parameters * mpParameters;

public:
	void MomentFailSafe(const MomentFailSafe &);

	void MomentFailSafe();

	// BrnMomentFailsafe.cpp:34
	virtual void Construct();

	// BrnMomentFailsafe.cpp:50
	virtual bool Prepare(BehaviourManager &);

	// BrnMomentFailsafe.cpp:67
	virtual void Update(float32_t, BehaviourManager &, const MomentSharedInfo &);

	// BrnMomentFailsafe.cpp:105
	virtual bool Release();

	// BrnMomentFailsafe.cpp:120
	virtual void Destruct();

	// BrnMomentFailsafe.cpp:134
	virtual void SetParameters(const BrnDirector::Moment::Parameters *);

	// BrnMomentFailsafe.cpp:159
	virtual const char * GetName() const;

private:
	// BrnMomentFailsafe.cpp:146
	virtual BrnDirector::Moment::EType GetInstanceType();

}

// BrnMomentFailsafe.h:46
void BrnDirector::MomentFailSafe::MomentFailSafe() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

