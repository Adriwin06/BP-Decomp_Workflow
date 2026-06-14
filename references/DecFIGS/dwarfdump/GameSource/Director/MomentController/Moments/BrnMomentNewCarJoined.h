// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct MomentNewCarJoined {
		// BrnMomentNewCarJoined.h:99
		struct Parameters : public BrnDirector::Moment::Parameters {
		public:
			// BrnMomentNewCarJoined.h:103
			void Construct();

		}

	}

}

// BrnMomentNewCarJoined.h:46
struct BrnDirector::MomentNewCarJoined : public BrnDirector::Moment {
private:
	// BrnMomentNewCarJoined.h:81
	const BrnDirector::MomentNewCarJoined::Parameters * mpParameters;

	// BrnMomentNewCarJoined.h:83
	BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate> mInterpolaterA;

	// BrnMomentNewCarJoined.h:84
	BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate> mInterpolaterB;

	// BrnMomentNewCarJoined.h:85
	BehaviourHandle<BrnDirector::Camera::BehaviourLooseAttachment> mLooseAttachment;

	// BrnMomentNewCarJoined.h:86
	BrnDirector::Camera::BehaviourInterpolate::Parameters mInterpolateParams;

	// BrnMomentNewCarJoined.h:87
	BrnDirector::Camera::BehaviourLooseAttachment::Parameters mLooseAttachmentParameters;

	// BrnMomentNewCarJoined.h:89
	float32_t mfTimeInState;

public:
	void MomentNewCarJoined(const MomentNewCarJoined &);

	void MomentNewCarJoined();

	// BrnMomentNewCarJoined.cpp:34
	virtual void Construct();

	// BrnMomentNewCarJoined.cpp:64
	virtual bool Prepare(BehaviourManager &);

	// BrnMomentNewCarJoined.cpp:81
	virtual void Update(float32_t, BehaviourManager &, const MomentSharedInfo &);

	// BrnMomentNewCarJoined.cpp:200
	virtual bool Release();

	// BrnMomentNewCarJoined.cpp:220
	virtual void Destruct();

	// BrnMomentNewCarJoined.cpp:234
	virtual void SetParameters(const BrnDirector::Moment::Parameters *);

	// BrnMomentNewCarJoined.cpp:260
	virtual const char * GetName() const;

private:
	// BrnMomentNewCarJoined.cpp:246
	virtual BrnDirector::Moment::EType GetInstanceType();

}

// BrnMomentNewCarJoined.h:46
void BrnDirector::MomentNewCarJoined::MomentNewCarJoined() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

