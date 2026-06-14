// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct MomentBystanderSeesAction {
		// BrnMomentBystanderSeesAction.h:99
		struct Parameters : public BrnDirector::Moment::Parameters {
			// BrnMomentBystanderSeesAction.h:102
			bool mbCloseCamera;

			// BrnMomentBystanderSeesAction.h:104
			bool mbCrashMoment;

			// BrnMomentBystanderSeesAction.h:105
			bool mbTakedownMoment;

		public:
			// BrnMomentBystanderSeesAction.h:108
			void Construct();

		}

	}

}

// BrnMomentBystanderSeesAction.h:47
struct BrnDirector::MomentBystanderSeesAction : public BrnDirector::Moment {
private:
	// BrnMomentBystanderSeesAction.h:87
	const BrnDirector::MomentBystanderSeesAction::Parameters * mpParameters;

	// BrnMomentBystanderSeesAction.h:89
	BehaviourHandle<BrnDirector::Camera::BehaviourBystanderCam> mBystander;

public:
	void MomentBystanderSeesAction(const MomentBystanderSeesAction &);

	void MomentBystanderSeesAction();

	// BrnMomentBystanderSeesAction.cpp:52
	virtual void Construct();

	// BrnMomentBystanderSeesAction.cpp:68
	virtual bool Prepare(BehaviourManager &);

	// BrnMomentBystanderSeesAction.cpp:85
	virtual void Update(float32_t, BehaviourManager &, const MomentSharedInfo &);

	// BrnMomentBystanderSeesAction.cpp:209
	virtual bool Release();

	// BrnMomentBystanderSeesAction.cpp:227
	virtual void Destruct();

	// BrnMomentBystanderSeesAction.cpp:241
	virtual void SetParameters(const BrnDirector::Moment::Parameters *);

	// BrnMomentBystanderSeesAction.h:77
	void SetPerceivedDistanceModificationFactor(float32_t);

	// BrnMomentBystanderSeesAction.cpp:267
	virtual const char * GetName() const;

private:
	// BrnMomentBystanderSeesAction.cpp:253
	virtual BrnDirector::Moment::EType GetInstanceType();

}

// BrnMomentBystanderSeesAction.h:47
void BrnDirector::MomentBystanderSeesAction::MomentBystanderSeesAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct MomentBystanderSeesAction {
		// BrnMomentBystanderSeesAction.h:99
		struct Parameters : public BrnDirector::Moment::Parameters {
			// BrnMomentBystanderSeesAction.h:102
			bool mbCloseCamera;

			// BrnMomentBystanderSeesAction.h:104
			bool mbCrashMoment;

			// BrnMomentBystanderSeesAction.h:105
			bool mbTakedownMoment;

		public:
			// BrnMomentBystanderSeesAction.h:108
			void Construct();

		}

	}

}

