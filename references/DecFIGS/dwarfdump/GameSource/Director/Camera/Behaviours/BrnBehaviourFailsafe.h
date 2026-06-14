// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct BehaviourFailsafe {
			// BrnBehaviourFailsafe.h:107
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BrnBehaviourFailsafe.h:110
				Parameters mShakeParams;

				// BrnBehaviourFailsafe.h:111
				Parameters mLagParams;

				// BrnBehaviourFailsafe.h:112
				BrnDirector::Camera::Utils::Looker::Parameters mLookerParams;

				// BrnBehaviourFailsafe.h:114
				float mfSlowDistance;

				// BrnBehaviourFailsafe.h:115
				float mfSlowHeight;

				// BrnBehaviourFailsafe.h:116
				float mfSlowPitch;

				// BrnBehaviourFailsafe.h:117
				float mfFastDistance;

				// BrnBehaviourFailsafe.h:118
				float mfFastHeight;

				// BrnBehaviourFailsafe.h:119
				float mfFastPitch;

				// BrnBehaviourFailsafe.h:120
				float mfFOV;

				// BrnBehaviourFailsafe.h:122
				float mfBlendFactorBlendFactor;

				// BrnBehaviourFailsafe.h:123
				float mfMinimumBlendFactor;

				// BrnBehaviourFailsafe.h:124
				float mfMaximumBlendFactor;

				// BrnBehaviourFailsafe.h:126
				float mfHeightDistanceBlendFactor;

				// BrnBehaviourFailsafe.h:127
				float mfHeightDistanceVelocityRange;

				// BrnBehaviourFailsafe.h:129
				bool mbStickToGround;

			public:
				// BrnBehaviourFailsafe.h:132
				void Construct();

			}

		}

	}

}

// BrnBehaviourFailsafe.h:56
struct BrnDirector::Camera::BehaviourFailsafe : public BrnDirector::Camera::Behaviour {
private:
	// BrnBehaviourFailsafe.h:94
	OrientationLag mOrientationLag;

	// BrnBehaviourFailsafe.h:95
	Parameters mOrientationLagParams;

	// BrnBehaviourFailsafe.h:97
	BrnDirector::Camera::CollisionPolicyAttachedToVehicle mCollisionPolicy;

	// BrnBehaviourFailsafe.h:98
	BrnDirector::KeyAnimController mKeyAnimController;

	// BrnBehaviourFailsafe.h:99
	const BrnDirector::Camera::BehaviourFailsafe::Parameters * mpParameters;

	// BrnBehaviourFailsafe.h:101
	float32_t mfRotationOffset;

public:
	void BehaviourFailsafe(const BrnDirector::Camera::BehaviourFailsafe &);

	void BehaviourFailsafe();

	// BrnBehaviourFailsafe.h:144
	void SetParameters(const BrnDirector::Camera::BehaviourFailsafe::Parameters *);

	// BrnBehaviourFailsafe.cpp:47
	virtual void Construct();

	// BrnBehaviourFailsafe.cpp:71
	virtual bool Prepare(const BehaviourSharedPrepareReleaseInfo &);

	// BrnBehaviourFailsafe.cpp:100
	virtual bool Update(Camera &, const BehaviourSharedInfo &);

	// BrnBehaviourFailsafe.cpp:163
	virtual BrnDirector::Camera::CollisionPolicy * GetCollisionPolicy();

	// BrnBehaviourFailsafe.cpp:177
	virtual void SetupTweaker(Tweaker &);

	// BrnBehaviourFailsafe.cpp:190
	virtual const char * GetName() const;

}

// BrnBehaviourFailsafe.h:158
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
}

// BrnBehaviourFailsafe.h:158
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

// BrnBehaviourFailsafe.h:158
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
}

// BrnBehaviourFailsafe.h:56
void BrnDirector::Camera::BehaviourFailsafe::BehaviourFailsafe() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// Declaration
		struct BehaviourFailsafe {
			// BrnBehaviourFailsafe.h:107
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BrnBehaviourFailsafe.h:110
				Parameters mShakeParams;

				// BrnBehaviourFailsafe.h:111
				Parameters mLagParams;

				// BrnBehaviourFailsafe.h:112
				BrnDirector::Camera::Utils::Looker::Parameters mLookerParams;

				// BrnBehaviourFailsafe.h:114
				float mfSlowDistance;

				// BrnBehaviourFailsafe.h:115
				float mfSlowHeight;

				// BrnBehaviourFailsafe.h:116
				float mfSlowPitch;

				// BrnBehaviourFailsafe.h:117
				float mfFastDistance;

				// BrnBehaviourFailsafe.h:118
				float mfFastHeight;

				// BrnBehaviourFailsafe.h:119
				float mfFastPitch;

				// BrnBehaviourFailsafe.h:120
				float mfFOV;

				// BrnBehaviourFailsafe.h:122
				float mfBlendFactorBlendFactor;

				// BrnBehaviourFailsafe.h:123
				float mfMinimumBlendFactor;

				// BrnBehaviourFailsafe.h:124
				float mfMaximumBlendFactor;

				// BrnBehaviourFailsafe.h:126
				float mfHeightDistanceBlendFactor;

				// BrnBehaviourFailsafe.h:127
				float mfHeightDistanceVelocityRange;

				// BrnBehaviourFailsafe.h:129
				bool mbStickToGround;

			public:
				// BrnBehaviourFailsafe.h:132
				void Construct();

			}

		}

	}

}

