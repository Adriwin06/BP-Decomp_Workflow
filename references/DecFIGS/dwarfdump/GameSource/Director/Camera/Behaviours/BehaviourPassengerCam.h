// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct BehaviourPassengerCam {
			// BehaviourPassengerCam.h:104
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BehaviourPassengerCam.h:115
				Parameters mImpactParams;

			public:
				// BehaviourPassengerCam.h:108
				void Construct();

			}

		}

	}

}

// BehaviourPassengerCam.h:55
struct BrnDirector::Camera::BehaviourPassengerCam : public BrnDirector::Camera::Behaviour {
private:
	// BehaviourPassengerCam.h:98
	const BrnDirector::Camera::BehaviourPassengerCam::Parameters * mpParameters;

public:
	void BehaviourPassengerCam(const BrnDirector::Camera::BehaviourPassengerCam &);

	void BehaviourPassengerCam();

	// BehaviourPassengerCam.h:122
	void SetParameters(const BrnDirector::Camera::BehaviourPassengerCam::Parameters *);

	// BehaviourPassengerCam.cpp:50
	virtual void Construct();

	// BehaviourPassengerCam.cpp:65
	virtual bool Prepare(const BehaviourSharedPrepareReleaseInfo &);

	// BehaviourPassengerCam.cpp:84
	virtual bool Update(Camera &, const BehaviourSharedInfo &);

	// BehaviourPassengerCam.cpp:99
	virtual void Release(const BehaviourSharedPrepareReleaseInfo &);

	// BehaviourPassengerCam.cpp:116
	virtual void SetupTweaker(Tweaker &);

	// BehaviourPassengerCam.cpp:129
	virtual const char * GetName() const;

	// BehaviourPassengerCam.h:145
	void StartLookingAtRaceCar(EActiveRaceCarIndex);

}

// BehaviourPassengerCam.h:136
extern void Serialise<BrnDirector::Camera::TextFileReadSerialiser>(const TextFileReadSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Serialise<BrnDirector::Camera::Utils::CameraImpactEffect::Parameters>(/* parameters */);
}

// BehaviourPassengerCam.h:136
extern void Serialise<BrnDirector::Camera::TextFileWriteSerialiser>(const TextFileWriteSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Serialise<BrnDirector::Camera::Utils::CameraImpactEffect::Parameters>(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
}

// BehaviourPassengerCam.h:136
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Serialise<BrnDirector::Camera::Utils::CameraImpactEffect::Parameters>(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::RemoveFromPath(/* parameters */);
}

// BehaviourPassengerCam.h:55
void BrnDirector::Camera::BehaviourPassengerCam::BehaviourPassengerCam() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// Declaration
		struct BehaviourPassengerCam {
			// BehaviourPassengerCam.h:104
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BehaviourPassengerCam.h:115
				Parameters mImpactParams;

			public:
				// BehaviourPassengerCam.h:108
				void Construct();

			}

		}

	}

}

