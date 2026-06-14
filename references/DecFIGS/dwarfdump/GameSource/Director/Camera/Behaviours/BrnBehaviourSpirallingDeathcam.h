// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct BehaviourSpirallingDeathcam {
			// BrnBehaviourSpirallingDeathcam.h:105
			struct VectorData {
			private:
				// BrnBehaviourSpirallingDeathcam.h:131
				Vector4 mVector1;

				// BrnBehaviourSpirallingDeathcam.h:132
				Vector4 mVector2;

			public:
				// BrnBehaviourSpirallingDeathcam.h:109
				Vector2::VecFloatRefX YRotationDegs();

				// BrnBehaviourSpirallingDeathcam.h:112
				Vector2::VecFloatRefY YRotationSpeedDegsPS();

				// BrnBehaviourSpirallingDeathcam.h:115
				Vector3::VecFloatRefZ Height();

				// BrnBehaviourSpirallingDeathcam.h:118
				Vector3Plus::VecFloatRefW HeightIncreaseSpeed();

				// BrnBehaviourSpirallingDeathcam.h:121
				Vector2::VecFloatRefX Radius();

				// BrnBehaviourSpirallingDeathcam.h:124
				Vector2::VecFloatRefY RadiusIncreaseSpeed();

				// BrnBehaviourSpirallingDeathcam.h:127
				Vector3::VecFloatRefZ LookOffsetAmount();

			}

			// BrnBehaviourSpirallingDeathcam.h:155
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BrnBehaviourSpirallingDeathcam.h:158
				BrnDirector::Camera::Utils::Looker::Parameters mLookerParams;

				// BrnBehaviourSpirallingDeathcam.h:159
				Parameters mShakeParams;

				// BrnBehaviourSpirallingDeathcam.h:161
				float32_t mfRotationSpeedDegs;

				// BrnBehaviourSpirallingDeathcam.h:162
				float32_t mfHeightIncreaseSpeed;

				// BrnBehaviourSpirallingDeathcam.h:163
				float32_t mfRadiusIncreaseSpeed;

				// BrnBehaviourSpirallingDeathcam.h:164
				float32_t mfInitialHeight;

				// BrnBehaviourSpirallingDeathcam.h:165
				float32_t mfInitialRadius;

				// BrnBehaviourSpirallingDeathcam.h:166
				float32_t mfTimeBeforeFullLookOffsetSpeed;

				// BrnBehaviourSpirallingDeathcam.h:167
				float32_t mfLookOffsetSpeed;

				// BrnBehaviourSpirallingDeathcam.h:168
				float32_t mfHeightIncreaseDuration;

				// BrnBehaviourSpirallingDeathcam.h:170
				float32_t mfRotationSpeedDecreaseRate;

				// BrnBehaviourSpirallingDeathcam.h:171
				float32_t mfMinRotationSpeed;

				// BrnBehaviourSpirallingDeathcam.h:173
				float32_t mfMinAttachAmount;

				// BrnBehaviourSpirallingDeathcam.h:175
				float32_t mfBlurTime;

				// BrnBehaviourSpirallingDeathcam.h:176
				float32_t mfShakeTime;

			public:
				// BrnBehaviourSpirallingDeathcam.h:179
				void Construct();

			}

		}

	}

}

// BrnBehaviourSpirallingDeathcam.h:52
struct BrnDirector::Camera::BehaviourSpirallingDeathcam : public BrnDirector::Camera::Behaviour {
private:
	// BrnBehaviourSpirallingDeathcam.h:135
	BrnDirector::Camera::CollisionPolicyAttachedToVehicle mCollisionPolicy;

	// BrnBehaviourSpirallingDeathcam.h:137
	BrnDirector::Camera::BehaviourSpirallingDeathcam::VectorData mVectorData;

	// BrnBehaviourSpirallingDeathcam.h:138
	Vector3 mAttachmentPos;

	// BrnBehaviourSpirallingDeathcam.h:139
	Looker mLooker;

	// BrnBehaviourSpirallingDeathcam.h:140
	CameraShake mShake;

	// BrnBehaviourSpirallingDeathcam.h:141
	const BrnDirector::Camera::BehaviourSpirallingDeathcam::Parameters * mpParameters;

	// BrnBehaviourSpirallingDeathcam.h:142
	BrnDirector::Camera::Behaviour::VehicleRef mAttachment;

	// BrnBehaviourSpirallingDeathcam.h:144
	float32_t mfBlurAmount;

	// BrnBehaviourSpirallingDeathcam.h:145
	float32_t mfShakeAmount;

	// BrnBehaviourSpirallingDeathcam.h:146
	float32_t mfLookOffsetFactor;

	// BrnBehaviourSpirallingDeathcam.h:147
	float32_t mfRunningTime;

	// BrnBehaviourSpirallingDeathcam.h:149
	bool mbStarted;

public:
	void BehaviourSpirallingDeathcam(const BrnDirector::Camera::BehaviourSpirallingDeathcam &);

	void BehaviourSpirallingDeathcam();

	// BrnBehaviourSpirallingDeathcam.h:191
	void SetParameters(const BrnDirector::Camera::BehaviourSpirallingDeathcam::Parameters *);

	// BrnBehaviourSpirallingDeathCam.cpp:70
	virtual void Construct();

	// BrnBehaviourSpirallingDeathCam.cpp:111
	virtual bool Prepare(const BehaviourSharedPrepareReleaseInfo &);

	// BrnBehaviourSpirallingDeathCam.cpp:127
	virtual bool Update(Camera &, const BehaviourSharedInfo &);

	// BrnBehaviourSpirallingDeathCam.cpp:238
	virtual const BrnDirector::Camera::Behaviour::Parameters * GetParameters() const;

	// BrnBehaviourSpirallingDeathCam.cpp:251
	virtual void SetParameters(const BrnDirector::Camera::Behaviour::Parameters *);

	// BrnBehaviourSpirallingDeathCam.cpp:266
	virtual void SetupTweaker(Tweaker &);

	// BrnBehaviourSpirallingDeathCam.cpp:280
	virtual const char * GetName() const;

	// BrnBehaviourSpirallingDeathCam.cpp:225
	virtual BrnDirector::Camera::CollisionPolicy * GetCollisionPolicy();

	// BrnBehaviourSpirallingDeathcam.h:96
	bool HasStarted() const;

	// BrnBehaviourSpirallingDeathcam.h:99
	void Start();

}

// BrnBehaviourSpirallingDeathcam.h:202
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourSpirallingDeathcam.h:202
extern void Serialise<BrnDirector::Camera::TextFileReadSerialiser>(const TextFileReadSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourSpirallingDeathcam.h:202
extern void Serialise<BrnDirector::Camera::TextFileWriteSerialiser>(const TextFileWriteSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourSpirallingDeathcam.h:52
void BrnDirector::Camera::BehaviourSpirallingDeathcam::BehaviourSpirallingDeathcam() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct BehaviourSpirallingDeathcam {
			// BrnBehaviourSpirallingDeathcam.h:155
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BrnBehaviourSpirallingDeathcam.h:158
				BrnDirector::Camera::Utils::Looker::Parameters mLookerParams;

				// BrnBehaviourSpirallingDeathcam.h:159
				Parameters mShakeParams;

				// BrnBehaviourSpirallingDeathcam.h:161
				float32_t mfRotationSpeedDegs;

				// BrnBehaviourSpirallingDeathcam.h:162
				float32_t mfHeightIncreaseSpeed;

				// BrnBehaviourSpirallingDeathcam.h:163
				float32_t mfRadiusIncreaseSpeed;

				// BrnBehaviourSpirallingDeathcam.h:164
				float32_t mfInitialHeight;

				// BrnBehaviourSpirallingDeathcam.h:165
				float32_t mfInitialRadius;

				// BrnBehaviourSpirallingDeathcam.h:166
				float32_t mfTimeBeforeFullLookOffsetSpeed;

				// BrnBehaviourSpirallingDeathcam.h:167
				float32_t mfLookOffsetSpeed;

				// BrnBehaviourSpirallingDeathcam.h:168
				float32_t mfHeightIncreaseDuration;

				// BrnBehaviourSpirallingDeathcam.h:170
				float32_t mfRotationSpeedDecreaseRate;

				// BrnBehaviourSpirallingDeathcam.h:171
				float32_t mfMinRotationSpeed;

				// BrnBehaviourSpirallingDeathcam.h:173
				float32_t mfMinAttachAmount;

				// BrnBehaviourSpirallingDeathcam.h:175
				float32_t mfBlurTime;

				// BrnBehaviourSpirallingDeathcam.h:176
				float32_t mfShakeTime;

			public:
				// BrnBehaviourSpirallingDeathcam.h:179
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
		struct BehaviourSpirallingDeathcam {
			// BrnBehaviourSpirallingDeathcam.h:155
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BrnBehaviourSpirallingDeathcam.h:158
				BrnDirector::Camera::Utils::Looker::Parameters mLookerParams;

				// BrnBehaviourSpirallingDeathcam.h:159
				Parameters mShakeParams;

				// BrnBehaviourSpirallingDeathcam.h:161
				float32_t mfRotationSpeedDegs;

				// BrnBehaviourSpirallingDeathcam.h:162
				float32_t mfHeightIncreaseSpeed;

				// BrnBehaviourSpirallingDeathcam.h:163
				float32_t mfRadiusIncreaseSpeed;

				// BrnBehaviourSpirallingDeathcam.h:164
				float32_t mfInitialHeight;

				// BrnBehaviourSpirallingDeathcam.h:165
				float32_t mfInitialRadius;

				// BrnBehaviourSpirallingDeathcam.h:166
				float32_t mfTimeBeforeFullLookOffsetSpeed;

				// BrnBehaviourSpirallingDeathcam.h:167
				float32_t mfLookOffsetSpeed;

				// BrnBehaviourSpirallingDeathcam.h:168
				float32_t mfHeightIncreaseDuration;

				// BrnBehaviourSpirallingDeathcam.h:170
				float32_t mfRotationSpeedDecreaseRate;

				// BrnBehaviourSpirallingDeathcam.h:171
				float32_t mfMinRotationSpeed;

				// BrnBehaviourSpirallingDeathcam.h:173
				float32_t mfMinAttachAmount;

				// BrnBehaviourSpirallingDeathcam.h:175
				float32_t mfBlurTime;

				// BrnBehaviourSpirallingDeathcam.h:176
				float32_t mfShakeTime;

			public:
				// BrnBehaviourSpirallingDeathcam.h:179
				void Construct();

			}

		}

	}

}

