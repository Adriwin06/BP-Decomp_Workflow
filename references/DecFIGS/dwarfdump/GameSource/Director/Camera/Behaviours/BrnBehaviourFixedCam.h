// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct BehaviourFixedCam {
			// BrnBehaviourFixedCam.h:103
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BrnBehaviourFixedCam.h:106
				float32_t mfFOV;

				// BrnBehaviourFixedCam.h:107
				float32_t mfMaxDutch;

			public:
				// BrnBehaviourFixedCam.h:110
				void Construct();

			}

		}

	}

}

// BrnBehaviourFixedCam.h:52
struct BrnDirector::Camera::BehaviourFixedCam : public BrnDirector::Camera::Behaviour {
private:
	// BrnBehaviourFixedCam.h:90
	BrnDirector::Camera::VisibilityCollisionPolicy mCollisionPolicy;

	// BrnBehaviourFixedCam.h:92
	Matrix44Affine mBaseTranform;

	// BrnBehaviourFixedCam.h:94
	const BrnDirector::Camera::BehaviourFixedCam::Parameters * mpParameters;

	// BrnBehaviourFixedCam.h:96
	float32_t mfDutch;

	// BrnBehaviourFixedCam.h:97
	bool mbPositionSet;

public:
	void BehaviourFixedCam(const BrnDirector::Camera::BehaviourFixedCam &);

	void BehaviourFixedCam();

	// BrnBehaviourFixedCam.h:122
	void SetParameters(const BrnDirector::Camera::BehaviourFixedCam::Parameters *);

	// BrnBehaviourFixedCam.cpp:51
	virtual void Construct();

	// BrnBehaviourFixedCam.cpp:69
	virtual bool Prepare(const BehaviourSharedPrepareReleaseInfo &);

	// BrnBehaviourFixedCam.cpp:87
	virtual bool Update(Camera &, const BehaviourSharedInfo &);

	// BrnBehaviourFixedCam.cpp:176
	virtual void SetupTweaker(Tweaker &);

	// BrnBehaviourFixedCam.cpp:162
	virtual BrnDirector::Camera::CollisionPolicy * GetCollisionPolicy();

	// BrnBehaviourFixedCam.cpp:198
	virtual const char * GetName() const;

}

// BrnBehaviourFixedCam.h:136
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourFixedCam.h:136
extern void Serialise<BrnDirector::Camera::TextFileReadSerialiser>(const TextFileReadSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
}

// BrnBehaviourFixedCam.h:136
extern void Serialise<BrnDirector::Camera::TextFileWriteSerialiser>(const TextFileWriteSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourFixedCam.h:52
void BrnDirector::Camera::BehaviourFixedCam::BehaviourFixedCam() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// Declaration
		struct BehaviourFixedCam {
			// BrnBehaviourFixedCam.h:103
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BrnBehaviourFixedCam.h:106
				float32_t mfFOV;

				// BrnBehaviourFixedCam.h:107
				float32_t mfMaxDutch;

			public:
				// BrnBehaviourFixedCam.h:110
				void Construct();

			}

		}

	}

}

