// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct BehaviourRotateAboutVehicle {
			// BrnBehaviourRotateAboutVehicle.h:127
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BrnBehaviourRotateAboutVehicle.h:130
				BrnDirector::Camera::Utils::Looker::Parameters mLookerParams;

				// BrnBehaviourRotateAboutVehicle.h:131
				Parameters mShakeParams;

				// BrnBehaviourRotateAboutVehicle.h:133
				float32_t mfShakeBlending0to1;

			public:
				// BrnBehaviourRotateAboutVehicle.h:136
				void Construct();

			}

		}

	}

}

// BrnBehaviourRotateAboutVehicle.h:55
struct BrnDirector::Camera::BehaviourRotateAboutVehicle : public BrnDirector::Camera::Behaviour {
private:
	// BrnBehaviourRotateAboutVehicle.h:105
	CameraSphericalRotationController mRotationController;

	// BrnBehaviourRotateAboutVehicle.h:106
	BrnDirector::Camera::CollisionPolicyAttachedToVehicle mCollisionPolicy;

	// BrnBehaviourRotateAboutVehicle.h:107
	BrnDirector::Camera::Behaviour::VehicleRef mAttachedTo;

	// BrnBehaviourRotateAboutVehicle.h:108
	Looker mLooker;

	// BrnBehaviourRotateAboutVehicle.h:109
	CameraShake mShake;

	// BrnBehaviourRotateAboutVehicle.h:111
	Matrix44Affine mLastShakeTransform;

	// BrnBehaviourRotateAboutVehicle.h:112
	Matrix44Affine mLastTransform;

	// BrnBehaviourRotateAboutVehicle.h:114
	Vector3 mNormalisedOffsetDir;

	// BrnBehaviourRotateAboutVehicle.h:116
	float32_t mfLastFOV;

	// BrnBehaviourRotateAboutVehicle.h:118
	const BrnDirector::Camera::BehaviourRotateAboutVehicle::Parameters * mpParameters;

	// BrnBehaviourRotateAboutVehicle.cpp:21
	extern float32_t KF_GENEROUS_EPSILON;

	// BrnBehaviourRotateAboutVehicle.cpp:22
	extern VecFloat KVF_GENEROUS_EPSILON;

public:
	void BehaviourRotateAboutVehicle(const BrnDirector::Camera::BehaviourRotateAboutVehicle &);

	void BehaviourRotateAboutVehicle();

	// BrnBehaviourRotateAboutVehicle.h:148
	void SetParameters(const BrnDirector::Camera::BehaviourRotateAboutVehicle::Parameters *);

	// BrnBehaviourRotateAboutVehicle.cpp:84
	virtual void Construct();

	// BrnBehaviourRotateAboutVehicle.cpp:118
	virtual bool Prepare(const BehaviourSharedPrepareReleaseInfo &);

	// BrnBehaviourRotateAboutVehicle.cpp:134
	virtual bool Update(Camera &, const BehaviourSharedInfo &);

	// BrnBehaviourRotateAboutVehicle.cpp:272
	virtual BrnDirector::Camera::CollisionPolicy * GetCollisionPolicy();

	// BrnBehaviourRotateAboutVehicle.cpp:284
	virtual const BrnDirector::Camera::Behaviour::Parameters * GetParameters() const;

	// BrnBehaviourRotateAboutVehicle.cpp:297
	virtual void SetParameters(const BrnDirector::Camera::Behaviour::Parameters *);

	// BrnBehaviourRotateAboutVehicle.cpp:312
	virtual void SetupTweaker(Tweaker &);

	// BrnBehaviourRotateAboutVehicle.cpp:326
	virtual const char * GetName() const;

	// BrnBehaviourRotateAboutVehicle.cpp:341
	void BecomeSimilarTo(const Camera &, const AllVehicleData &);

}

// BrnBehaviourRotateAboutVehicle.h:159
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourRotateAboutVehicle.h:159
extern void Serialise<BrnDirector::Camera::TextFileReadSerialiser>(const TextFileReadSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourRotateAboutVehicle.h:159
extern void Serialise<BrnDirector::Camera::TextFileWriteSerialiser>(const TextFileWriteSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourRotateAboutVehicle.h:55
void BrnDirector::Camera::BehaviourRotateAboutVehicle::BehaviourRotateAboutVehicle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// Declaration
		struct BehaviourRotateAboutVehicle {
			// BrnBehaviourRotateAboutVehicle.h:127
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BrnBehaviourRotateAboutVehicle.h:130
				BrnDirector::Camera::Utils::Looker::Parameters mLookerParams;

				// BrnBehaviourRotateAboutVehicle.h:131
				Parameters mShakeParams;

				// BrnBehaviourRotateAboutVehicle.h:133
				float32_t mfShakeBlending0to1;

			public:
				// BrnBehaviourRotateAboutVehicle.h:136
				void Construct();

			}

		}

	}

}

