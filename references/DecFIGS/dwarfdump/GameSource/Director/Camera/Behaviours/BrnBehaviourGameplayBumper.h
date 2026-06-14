// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct BehaviourGameplayBumper {
			// BrnBehaviourGameplayBumper.h:106
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BrnBehaviourGameplayBumper.h:109
				float32_t mfYOffset;

				// BrnBehaviourGameplayBumper.h:110
				float32_t mfZOffset;

				// BrnBehaviourGameplayBumper.h:112
				float32_t mfAccelerationDampening;

				// BrnBehaviourGameplayBumper.h:114
				float32_t mfAccelerationResponse;

				// BrnBehaviourGameplayBumper.h:116
				float32_t mfPitchSpring;

				// BrnBehaviourGameplayBumper.h:117
				float32_t mfYawSpring;

				// BrnBehaviourGameplayBumper.h:118
				float32_t mfRollSpring;

				// BrnBehaviourGameplayBumper.h:120
				float32_t mfFOV;

				// BrnBehaviourGameplayBumper.h:122
				float32_t mfBodyRollScale;

				// BrnBehaviourGameplayBumper.h:123
				float32_t mfBodyPitchScale;

				// BrnBehaviourGameplayBumper.h:125
				float32_t mfBoostFOV;

				// BrnBehaviourGameplayBumper.h:127
				bool mbIsValid;

				// BrnBehaviourGameplayBumper.h:129
				Parameters mImpactShakeParams;

			public:
				// BrnBehaviourGameplayBumper.h:132
				void Construct();

			}

		}

	}

}

// BrnBehaviourGameplayBumper.h:53
struct BrnDirector::Camera::BehaviourGameplayBumper : public BrnDirector::Camera::Behaviour {
private:
	// BrnBehaviourGameplayBumper.cpp:24
	extern const float32_t kfShakeDropoffFactor;

	// BrnBehaviourGameplayBumper.cpp:25
	extern const float32_t kfJumpParamsImpactShakeMaxAmplitude;

	// BrnBehaviourGameplayBumper.cpp:26
	extern const float32_t kfJumpParamsImpactShakeMaxFreqMul;

	// BrnBehaviourGameplayBumper.h:88
	float32_t mfImpactShakeFactor;

	// BrnBehaviourGameplayBumper.h:89
	float32_t mfTimeInJump;

	// BrnBehaviourGameplayBumper.h:90
	bool mbJumping;

	// BrnBehaviourGameplayBumper.h:91
	CameraShake mImpactShake;

	// BrnBehaviourGameplayBumper.h:94
	CameraShakeICEController mBoostShake;

	// BrnBehaviourGameplayBumper.h:95
	Vector3 mLastCameraAngles;

	// BrnBehaviourGameplayBumper.h:97
	float32_t mfLastSpeed;

	// BrnBehaviourGameplayBumper.h:98
	float32_t mfDampenedAcceleration;

	// BrnBehaviourGameplayBumper.h:100
	const BrnDirector::Camera::BehaviourGameplayBumper::Parameters * mpParameters;

public:
	void BehaviourGameplayBumper(const BrnDirector::Camera::BehaviourGameplayBumper &);

	void BehaviourGameplayBumper();

	// BrnBehaviourGameplayBumper.cpp:54
	virtual void Construct();

	// BrnBehaviourGameplayBumper.h:144
	void SetParameters(const BrnDirector::Camera::BehaviourGameplayBumper::Parameters *);

	// BrnBehaviourGameplayBumper.cpp:69
	virtual bool Prepare(const BehaviourSharedPrepareReleaseInfo &);

	// BrnBehaviourGameplayBumper.cpp:85
	virtual bool Update(Camera &, const BehaviourSharedInfo &);

	// BrnBehaviourGameplayBumper.cpp:314
	virtual void SetupTweaker(Tweaker &);

	// BrnBehaviourGameplayBumper.cpp:323
	virtual const char * GetName() const;

}

// BrnBehaviourGameplayBumper.h:158
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourGameplayBumper.h:158
extern void Serialise<BrnDirector::Camera::TextFileReadSerialiser>(const TextFileReadSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

// BrnBehaviourGameplayBumper.h:158
extern void Serialise<BrnDirector::Camera::TextFileWriteSerialiser>(const TextFileWriteSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourGameplayBumper.h:53
void BrnDirector::Camera::BehaviourGameplayBumper::BehaviourGameplayBumper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourGameplayBumper.h:85
extern const float32_t kfShakeDropoffFactor;

// BrnBehaviourGameplayBumper.h:86
extern const float32_t kfJumpParamsImpactShakeMaxAmplitude;

// BrnBehaviourGameplayBumper.h:87
extern const float32_t kfJumpParamsImpactShakeMaxFreqMul;

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// Declaration
		struct BehaviourGameplayBumper {
			// BrnBehaviourGameplayBumper.h:106
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BrnBehaviourGameplayBumper.h:109
				float32_t mfYOffset;

				// BrnBehaviourGameplayBumper.h:110
				float32_t mfZOffset;

				// BrnBehaviourGameplayBumper.h:112
				float32_t mfAccelerationDampening;

				// BrnBehaviourGameplayBumper.h:114
				float32_t mfAccelerationResponse;

				// BrnBehaviourGameplayBumper.h:116
				float32_t mfPitchSpring;

				// BrnBehaviourGameplayBumper.h:117
				float32_t mfYawSpring;

				// BrnBehaviourGameplayBumper.h:118
				float32_t mfRollSpring;

				// BrnBehaviourGameplayBumper.h:120
				float32_t mfFOV;

				// BrnBehaviourGameplayBumper.h:122
				float32_t mfBodyRollScale;

				// BrnBehaviourGameplayBumper.h:123
				float32_t mfBodyPitchScale;

				// BrnBehaviourGameplayBumper.h:125
				float32_t mfBoostFOV;

				// BrnBehaviourGameplayBumper.h:127
				bool mbIsValid;

				// BrnBehaviourGameplayBumper.h:129
				Parameters mImpactShakeParams;

			public:
				// BrnBehaviourGameplayBumper.h:132
				void Construct();

			}

		private:
			// BrnBehaviourGameplayBumper.h:85
			extern const float32_t kfShakeDropoffFactor;

			// BrnBehaviourGameplayBumper.h:86
			extern const float32_t kfJumpParamsImpactShakeMaxAmplitude;

			// BrnBehaviourGameplayBumper.h:87
			extern const float32_t kfJumpParamsImpactShakeMaxFreqMul;

		}

	}

}

