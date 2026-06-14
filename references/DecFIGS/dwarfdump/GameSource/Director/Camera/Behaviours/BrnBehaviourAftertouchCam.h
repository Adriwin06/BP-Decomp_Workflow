// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct BehaviourAftertouchCam {
			// BrnBehaviourAftertouchCam.h:97
			struct AftertouchRival {
				// BrnBehaviourAftertouchCam.h:101
				bool mbWillPass;

				// BrnBehaviourAftertouchCam.h:102
				float32_t mfTimeToPassing;

				// BrnBehaviourAftertouchCam.h:105
				bool mbWillPassIfHeadingAdjusted;

				// BrnBehaviourAftertouchCam.h:106
				float32_t mfTimeToPassingIfHeadingAdjusted;

				// BrnBehaviourAftertouchCam.h:109
				float32_t mfDotWithCurrentHeading;

				// BrnBehaviourAftertouchCam.h:112
				float32_t mfDistance;

				// BrnBehaviourAftertouchCam.h:115
				Vector3 mPosition;

				// BrnBehaviourAftertouchCam.h:116
				bool mbIsValid;

			}

			// BrnBehaviourAftertouchCam.h:156
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BrnBehaviourAftertouchCam.h:159
				Parameters mShakeParams;

				// BrnBehaviourAftertouchCam.h:160
				Parameters mLagParams;

				// BrnBehaviourAftertouchCam.h:162
				float mfMinDistance;

				// BrnBehaviourAftertouchCam.h:163
				float mfMinHeight;

				// BrnBehaviourAftertouchCam.h:164
				float mfMaxDistance;

				// BrnBehaviourAftertouchCam.h:165
				float mfMaxHeight;

				// BrnBehaviourAftertouchCam.h:166
				float mfPitch;

				// BrnBehaviourAftertouchCam.h:167
				float mfFOV;

				// BrnBehaviourAftertouchCam.h:169
				float mfBlendFactorBlendFactor;

				// BrnBehaviourAftertouchCam.h:170
				float mfMinimumBlendFactor;

				// BrnBehaviourAftertouchCam.h:171
				float mfMaximumBlendFactor;

				// BrnBehaviourAftertouchCam.h:173
				float mfHeightDistanceBlendFactor;

				// BrnBehaviourAftertouchCam.h:174
				float mfHeightDistanceVelocityRange;

				// BrnBehaviourAftertouchCam.h:176
				float mfTimeToRivalImpactUncertaintyPadding;

				// BrnBehaviourAftertouchCam.h:177
				float mfMaximumDistanceForConsiderationOfRivals;

				// BrnBehaviourAftertouchCam.h:179
				float mfTimingSimilarityThreshold;

				// BrnBehaviourAftertouchCam.h:180
				float mfDistanceSimilarityThreshold;

				// BrnBehaviourAftertouchCam.h:181
				float mfTimeBetweenDecisions;

			public:
				// BrnBehaviourAftertouchCam.h:184
				void Construct();

			}

		}

	}

}

// BrnBehaviourAftertouchCam.h:54
struct BrnDirector::Camera::BehaviourAftertouchCam : public BrnDirector::Camera::Behaviour {
private:
	// BrnBehaviourAftertouchCam.h:130
	BrnDirector::Camera::CollisionPolicyAttachedToVehicle mCollisionPolicy;

	// BrnBehaviourAftertouchCam.h:132
	Vector3 mCurrentTargetPos;

	// BrnBehaviourAftertouchCam.h:133
	Vector3 mWorldSpaceNormalizedVectorFromCar;

	// BrnBehaviourAftertouchCam.h:134
	Vector3 mDesiredWorldSpaceNormalizedVectorFromCar;

	// BrnBehaviourAftertouchCam.h:136
	Vector3 mCrashPoint;

	// BrnBehaviourAftertouchCam.h:138
	PositionLag mPositionLag;

	// BrnBehaviourAftertouchCam.h:139
	Random mRandom;

	// BrnBehaviourAftertouchCam.h:140
	CameraShake mShake;

	// BrnBehaviourAftertouchCam.h:142
	float32_t mfHeight;

	// BrnBehaviourAftertouchCam.h:143
	float32_t mfDistance;

	// BrnBehaviourAftertouchCam.h:145
	float32_t mfBlendFactor;

	// BrnBehaviourAftertouchCam.h:147
	float32_t mfTimeSinceLastDecision;

	// BrnBehaviourAftertouchCam.h:149
	const BrnDirector::Camera::BehaviourAftertouchCam::Parameters * mpParameters;

	// BrnBehaviourAftertouchCam.h:150
	aftertouchcam mParameters;

public:
	void BehaviourAftertouchCam(const BrnDirector::Camera::BehaviourAftertouchCam &);

	void BehaviourAftertouchCam();

	// BrnBehaviourAftertouchCam.h:196
	void SetParameters(const BrnDirector::Camera::BehaviourAftertouchCam::Parameters *);

	// BrnBehaviourAftertouchCam.cpp:77
	virtual void Construct();

	// BrnBehaviourAftertouchCam.cpp:95
	virtual bool Prepare(const BehaviourSharedPrepareReleaseInfo &);

	// BrnBehaviourAftertouchCam.cpp:308
	virtual bool Update(Camera &, const BehaviourSharedInfo &);

	// BrnBehaviourAftertouchCam.cpp:462
	virtual BrnDirector::Camera::CollisionPolicy * GetCollisionPolicy();

	// BrnBehaviourAftertouchCam.h:209
	void SetParameters(const aftertouchcam &);

	// BrnBehaviourAftertouchCam.cpp:476
	virtual void SetupTweaker(Tweaker &);

	// BrnBehaviourAftertouchCam.cpp:489
	virtual const char * GetName() const;

private:
	// BrnBehaviourAftertouchCam.cpp:123
	void AssignIfBetterRival(const BehaviourSharedInfo &, BrnDirector::Camera::BehaviourAftertouchCam::AftertouchRival &, uint32_t);

	// BrnBehaviourAftertouchCam.cpp:266
	Vector3 CalculateDesiredTargetPos(const BehaviourSharedInfo &, Vector3);

}

// BrnBehaviourAftertouchCam.h:219
extern void Serialise<BrnDirector::Camera::TextFileReadSerialiser>(const TextFileReadSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(/* parameters */);
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

// BrnBehaviourAftertouchCam.h:219
extern void Serialise<BrnDirector::Camera::TextFileWriteSerialiser>(const TextFileWriteSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
}

// BrnBehaviourAftertouchCam.h:219
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::RemoveFromPath(/* parameters */);
}

// BrnBehaviourAftertouchCam.h:54
void BrnDirector::Camera::BehaviourAftertouchCam::BehaviourAftertouchCam() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct BehaviourAftertouchCam {
			// BrnBehaviourAftertouchCam.h:156
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BrnBehaviourAftertouchCam.h:159
				Parameters mShakeParams;

				// BrnBehaviourAftertouchCam.h:160
				Parameters mLagParams;

				// BrnBehaviourAftertouchCam.h:162
				float mfMinDistance;

				// BrnBehaviourAftertouchCam.h:163
				float mfMinHeight;

				// BrnBehaviourAftertouchCam.h:164
				float mfMaxDistance;

				// BrnBehaviourAftertouchCam.h:165
				float mfMaxHeight;

				// BrnBehaviourAftertouchCam.h:166
				float mfPitch;

				// BrnBehaviourAftertouchCam.h:167
				float mfFOV;

				// BrnBehaviourAftertouchCam.h:169
				float mfBlendFactorBlendFactor;

				// BrnBehaviourAftertouchCam.h:170
				float mfMinimumBlendFactor;

				// BrnBehaviourAftertouchCam.h:171
				float mfMaximumBlendFactor;

				// BrnBehaviourAftertouchCam.h:173
				float mfHeightDistanceBlendFactor;

				// BrnBehaviourAftertouchCam.h:174
				float mfHeightDistanceVelocityRange;

				// BrnBehaviourAftertouchCam.h:176
				float mfTimeToRivalImpactUncertaintyPadding;

				// BrnBehaviourAftertouchCam.h:177
				float mfMaximumDistanceForConsiderationOfRivals;

				// BrnBehaviourAftertouchCam.h:179
				float mfTimingSimilarityThreshold;

				// BrnBehaviourAftertouchCam.h:180
				float mfDistanceSimilarityThreshold;

				// BrnBehaviourAftertouchCam.h:181
				float mfTimeBetweenDecisions;

			public:
				// BrnBehaviourAftertouchCam.h:184
				void Construct();

			}

		}

	}

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// Declaration
		struct BehaviourAftertouchCam {
			// BrnBehaviourAftertouchCam.h:156
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BrnBehaviourAftertouchCam.h:159
				Parameters mShakeParams;

				// BrnBehaviourAftertouchCam.h:160
				Parameters mLagParams;

				// BrnBehaviourAftertouchCam.h:162
				float mfMinDistance;

				// BrnBehaviourAftertouchCam.h:163
				float mfMinHeight;

				// BrnBehaviourAftertouchCam.h:164
				float mfMaxDistance;

				// BrnBehaviourAftertouchCam.h:165
				float mfMaxHeight;

				// BrnBehaviourAftertouchCam.h:166
				float mfPitch;

				// BrnBehaviourAftertouchCam.h:167
				float mfFOV;

				// BrnBehaviourAftertouchCam.h:169
				float mfBlendFactorBlendFactor;

				// BrnBehaviourAftertouchCam.h:170
				float mfMinimumBlendFactor;

				// BrnBehaviourAftertouchCam.h:171
				float mfMaximumBlendFactor;

				// BrnBehaviourAftertouchCam.h:173
				float mfHeightDistanceBlendFactor;

				// BrnBehaviourAftertouchCam.h:174
				float mfHeightDistanceVelocityRange;

				// BrnBehaviourAftertouchCam.h:176
				float mfTimeToRivalImpactUncertaintyPadding;

				// BrnBehaviourAftertouchCam.h:177
				float mfMaximumDistanceForConsiderationOfRivals;

				// BrnBehaviourAftertouchCam.h:179
				float mfTimingSimilarityThreshold;

				// BrnBehaviourAftertouchCam.h:180
				float mfDistanceSimilarityThreshold;

				// BrnBehaviourAftertouchCam.h:181
				float mfTimeBetweenDecisions;

			public:
				// BrnBehaviourAftertouchCam.h:184
				void Construct();

			}

		}

	}

}

