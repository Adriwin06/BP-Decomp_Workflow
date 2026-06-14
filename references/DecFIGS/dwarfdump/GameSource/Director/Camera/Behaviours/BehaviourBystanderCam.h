// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct BehaviourBystanderCam {
			// BehaviourBystanderCam.h:181
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BehaviourBystanderCam.h:184
				Parameters mShakeParams;

				// BehaviourBystanderCam.h:185
				BrnDirector::Camera::Utils::Looker::Parameters mLookerParams;

				// BehaviourBystanderCam.h:187
				float32_t mfVelocityInfluenceOnPosition;

				// BehaviourBystanderCam.h:188
				float32_t mfMaxInitialDistanceKM;

				// BehaviourBystanderCam.h:189
				float32_t mfDistanceForFailKM;

				// BehaviourBystanderCam.h:191
				float32_t mfTargetSpaceX;

				// BehaviourBystanderCam.h:192
				float32_t mfTargetSpaceY;

				// BehaviourBystanderCam.h:193
				float32_t mfTargetSpaceZ;

				// BehaviourBystanderCam.h:195
				float32_t mfHeight;

				// BehaviourBystanderCam.h:197
				bool mbUseTargetSpaceInsteadOfPositionFinder;

				// BehaviourBystanderCam.h:198
				bool mbUseRangeTesting;

			public:
				// BehaviourBystanderCam.h:201
				void Construct();

			}

		}

	}

}

// BehaviourBystanderCam.h:44
struct BrnDirector::Camera::ImpactSlomoController {
private:
	// BehaviourBystanderCam.h:65
	extern const VecFloat K_MIN_VELOCITY_SQUARED_MPS;

	// BehaviourBystanderCam.h:67
	float32_t mfTimeSinceLastSlomo;

	// BehaviourBystanderCam.h:68
	float32_t mfTimeInSlomo;

	// BehaviourBystanderCam.h:69
	bool mbFirstFrameOfSlomo;

public:
	// BehaviourBystanderCam.h:48
	void Construct();

	// BehaviourBystanderCam.h:57
	void Update(Camera &, float32_t, const AllVehicleData &, const VehicleTracker &, BrnDirector::DebugPrinter &, bool);

	// BehaviourBystanderCam.h:60
	bool IsFirstFrameOfSlomo() const;

}

// BehaviourBystanderCam.h:75
struct BrnDirector::Camera::ImpactShakeController {
private:
	// BehaviourBystanderCam.h:93
	CameraImpactEffect mImpactEffect;

public:
	// BehaviourBystanderCam.h:79
	void Construct();

	// BehaviourBystanderCam.h:89
	void Update(Camera &, float32_t, const AllVehicleData &, const VehicleTracker &, Random &, BrnDirector::DebugPrinter &, const VehicleRef &);

}

// BehaviourBystanderCam.h:107
struct BrnDirector::Camera::BehaviourBystanderCam : public BrnDirector::Camera::Behaviour {
private:
	// BehaviourBystanderCam.h:156
	Matrix44Affine mTransform;

	// BehaviourBystanderCam.h:158
	PositionFinder mPositionFinder;

	// BehaviourBystanderCam.h:159
	CameraShake mShake;

	// BehaviourBystanderCam.h:160
	Looker mLooker;

	// BehaviourBystanderCam.h:162
	BrnDirector::Camera::VisibilityCollisionPolicy mCollisionPolicy;

	// BehaviourBystanderCam.h:164
	Random mRandom;

	// BehaviourBystanderCam.h:166
	BrnDirector::Camera::Behaviour::VehicleRef mTarget;

	// BehaviourBystanderCam.h:168
	const BrnDirector::Camera::BehaviourBystanderCam::Parameters * mpParameters;

	// BehaviourBystanderCam.h:170
	float32_t mfSquaredDistanceToTarget;

	// BehaviourBystanderCam.h:172
	float32_t mfPerceivedDistanceModificationFactor;

	// BehaviourBystanderCam.h:174
	bool mbSetup;

	// BehaviourBystanderCam.h:175
	bool mbGotPosition;

public:
	void BehaviourBystanderCam(const BrnDirector::Camera::BehaviourBystanderCam &);

	void BehaviourBystanderCam();

	// BehaviourBystanderCam.h:213
	void SetParameters(const BrnDirector::Camera::BehaviourBystanderCam::Parameters *);

	// BehaviourBystanderCam.cpp:221
	virtual void Construct();

	// BehaviourBystanderCam.cpp:251
	virtual bool Prepare(const BehaviourSharedPrepareReleaseInfo &);

	// BehaviourBystanderCam.cpp:270
	virtual bool Update(Camera &, const BehaviourSharedInfo &);

	// BehaviourBystanderCam.cpp:396
	virtual BrnDirector::Camera::CollisionPolicy * GetCollisionPolicy();

	// BehaviourBystanderCam.cpp:410
	virtual void SetupTweaker(Tweaker &);

	// BehaviourBystanderCam.cpp:435
	virtual const char * GetName() const;

	// BehaviourBystanderCam.h:250
	void SetTarget(EActiveRaceCarIndex);

	// BehaviourBystanderCam.h:259
	float32_t GetSquaredDistanceToTarget() const;

	// BehaviourBystanderCam.h:268
	void SetPerceivedDistanceModificationFactor(float32_t);

}

// BehaviourBystanderCam.h:227
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::RemoveFromPath(/* parameters */);
	Serialise<BrnDirector::Camera::Utils::Looker::Parameters>(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::RemoveFromPath(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
}

// BehaviourBystanderCam.h:227
extern void Serialise<BrnDirector::Camera::TextFileReadSerialiser>(const TextFileReadSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(/* parameters */);
	{
	}
	Serialise<BrnDirector::Camera::Utils::Looker::Parameters>(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
}

// BehaviourBystanderCam.h:227
extern void Serialise<BrnDirector::Camera::TextFileWriteSerialiser>(const TextFileWriteSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	Serialise<BrnDirector::Camera::Utils::Looker::Parameters>(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
}

// BehaviourBystanderCam.h:107
void BrnDirector::Camera::BehaviourBystanderCam::BehaviourBystanderCam() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BehaviourBystanderCam.h:65
extern const VecFloat K_MIN_VELOCITY_SQUARED_MPS;

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// Declaration
		struct BehaviourBystanderCam {
			// BehaviourBystanderCam.h:181
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BehaviourBystanderCam.h:184
				Parameters mShakeParams;

				// BehaviourBystanderCam.h:185
				BrnDirector::Camera::Utils::Looker::Parameters mLookerParams;

				// BehaviourBystanderCam.h:187
				float32_t mfVelocityInfluenceOnPosition;

				// BehaviourBystanderCam.h:188
				float32_t mfMaxInitialDistanceKM;

				// BehaviourBystanderCam.h:189
				float32_t mfDistanceForFailKM;

				// BehaviourBystanderCam.h:191
				float32_t mfTargetSpaceX;

				// BehaviourBystanderCam.h:192
				float32_t mfTargetSpaceY;

				// BehaviourBystanderCam.h:193
				float32_t mfTargetSpaceZ;

				// BehaviourBystanderCam.h:195
				float32_t mfHeight;

				// BehaviourBystanderCam.h:197
				bool mbUseTargetSpaceInsteadOfPositionFinder;

				// BehaviourBystanderCam.h:198
				bool mbUseRangeTesting;

			public:
				// BehaviourBystanderCam.h:201
				void Construct();

			}

		}

	}

}

