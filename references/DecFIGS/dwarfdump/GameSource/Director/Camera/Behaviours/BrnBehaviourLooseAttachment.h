// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct BehaviourLooseAttachment {
			// BrnBehaviourLooseAttachment.h:132
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BrnBehaviourLooseAttachment.h:135
				Parameters mPositionLagParameters;

				// BrnBehaviourLooseAttachment.h:136
				Parameters mShakeParameters;

				// BrnBehaviourLooseAttachment.h:137
				Parameters mImpactParameters;

				// BrnBehaviourLooseAttachment.h:139
				float32_t mfPitch;

				// BrnBehaviourLooseAttachment.h:141
				float32_t mfHeight;

				// BrnBehaviourLooseAttachment.h:142
				float32_t mfDistance;

				// BrnBehaviourLooseAttachment.h:143
				float32_t mfFOV;

				// BrnBehaviourLooseAttachment.h:144
				float32_t mfDutch;

				// BrnBehaviourLooseAttachment.h:145
				float32_t mfDetachLerpAmount;

				// BrnBehaviourLooseAttachment.h:147
				bool mbLookFromTarget;

			public:
				// BrnBehaviourLooseAttachment.h:150
				void Construct();

			}

		}

	}

}

// BrnBehaviourLooseAttachment.h:54
struct BrnDirector::Camera::BehaviourLooseAttachment : public BrnDirector::Camera::Behaviour {
private:
	// BrnBehaviourLooseAttachment.h:110
	BrnDirector::Camera::CollisionPolicyAttachedToVehicle mCollisionPolicy;

	// BrnBehaviourLooseAttachment.h:112
	Vector3 mWorldSpaceOffsetFromCar;

	// BrnBehaviourLooseAttachment.h:114
	PositionLag mPositionLag;

	// BrnBehaviourLooseAttachment.h:115
	Random mRandom;

	// BrnBehaviourLooseAttachment.h:116
	CameraShake mShake;

	// BrnBehaviourLooseAttachment.h:117
	CameraImpactEffect mImpact;

	// BrnBehaviourLooseAttachment.h:118
	BrnDirector::Camera::Behaviour::VehicleRef mTarget;

	// BrnBehaviourLooseAttachment.h:119
	BrnDirector::Camera::Behaviour::VehicleRef mAttachment;

	// BrnBehaviourLooseAttachment.h:121
	const BrnDirector::Camera::BehaviourLooseAttachment::Parameters * mpParameters;

	// BrnBehaviourLooseAttachment.h:123
	float32_t mfDetachedAmount;

	// BrnBehaviourLooseAttachment.h:124
	bool mbDetached;

	// BrnBehaviourLooseAttachment.h:125
	bool mbFirstFrame;

	// BrnBehaviourLooseAttachment.h:126
	bool mbTargetVectorLock;

public:
	void BehaviourLooseAttachment(const BrnDirector::Camera::BehaviourLooseAttachment &);

	void BehaviourLooseAttachment();

	// BrnBehaviourLooseAttachment.h:162
	void SetParameters(const BrnDirector::Camera::BehaviourLooseAttachment::Parameters *);

	// BrnBehaviourLooseAttachment.cpp:60
	virtual void Construct();

	// BrnBehaviourLooseAttachment.cpp:86
	virtual bool Prepare(const BehaviourSharedPrepareReleaseInfo &);

	// BrnBehaviourLooseAttachment.cpp:105
	virtual bool Update(Camera &, const BehaviourSharedInfo &);

	// BrnBehaviourLooseAttachment.cpp:219
	virtual BrnDirector::Camera::CollisionPolicy * GetCollisionPolicy();

	// BrnBehaviourLooseAttachment.cpp:240
	virtual void SetupTweaker(Tweaker &);

	// BrnBehaviourLooseAttachment.cpp:253
	virtual const char * GetName() const;

	// BrnBehaviourLooseAttachment.h:192
	void AttachTo(EActiveRaceCarIndex);

	// BrnBehaviourLooseAttachment.h:201
	void SetTarget(EActiveRaceCarIndex);

	// BrnBehaviourLooseAttachment.h:210
	void RegisterImpact(float32_t);

	// BrnBehaviourLooseAttachment.h:218
	void Detach();

	// BrnBehaviourLooseAttachment.h:106
	void LockTargetVector();

}

// BrnBehaviourLooseAttachment.h:176
extern void Serialise<BrnDirector::Camera::TextFileReadSerialiser>(const TextFileReadSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Serialise<BrnDirector::Camera::Utils::CameraImpactEffect::Parameters>(/* parameters */);
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

// BrnBehaviourLooseAttachment.h:176
extern void Serialise<BrnDirector::Camera::TextFileWriteSerialiser>(const TextFileWriteSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Serialise<BrnDirector::Camera::Utils::CameraImpactEffect::Parameters>(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
}

// BrnBehaviourLooseAttachment.h:176
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Serialise<BrnDirector::Camera::Utils::CameraImpactEffect::Parameters>(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::RemoveFromPath(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
}

// BrnBehaviourLooseAttachment.h:54
void BrnDirector::Camera::BehaviourLooseAttachment::BehaviourLooseAttachment() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// Declaration
		struct BehaviourLooseAttachment {
			// BrnBehaviourLooseAttachment.h:132
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BrnBehaviourLooseAttachment.h:135
				Parameters mPositionLagParameters;

				// BrnBehaviourLooseAttachment.h:136
				Parameters mShakeParameters;

				// BrnBehaviourLooseAttachment.h:137
				Parameters mImpactParameters;

				// BrnBehaviourLooseAttachment.h:139
				float32_t mfPitch;

				// BrnBehaviourLooseAttachment.h:141
				float32_t mfHeight;

				// BrnBehaviourLooseAttachment.h:142
				float32_t mfDistance;

				// BrnBehaviourLooseAttachment.h:143
				float32_t mfFOV;

				// BrnBehaviourLooseAttachment.h:144
				float32_t mfDutch;

				// BrnBehaviourLooseAttachment.h:145
				float32_t mfDetachLerpAmount;

				// BrnBehaviourLooseAttachment.h:147
				bool mbLookFromTarget;

			public:
				// BrnBehaviourLooseAttachment.h:150
				void Construct();

			}

		}

	}

}

