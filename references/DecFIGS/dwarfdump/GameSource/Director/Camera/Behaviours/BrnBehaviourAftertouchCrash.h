// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct BehaviourAftertouchCrash {
			// BrnBehaviourAftertouchCrash.h:209
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BrnBehaviourAftertouchCrash.h:212
				Parameters mShakeParams;

				// BrnBehaviourAftertouchCrash.h:213
				Parameters mLagParams;

				// BrnBehaviourAftertouchCrash.h:215
				float mfMinDistance;

				// BrnBehaviourAftertouchCrash.h:216
				float mfMinHeight;

				// BrnBehaviourAftertouchCrash.h:217
				float mfMaxDistance;

				// BrnBehaviourAftertouchCrash.h:218
				float mfMaxHeight;

				// BrnBehaviourAftertouchCrash.h:219
				float mfPitch;

				// BrnBehaviourAftertouchCrash.h:220
				float mfFOV;

				// BrnBehaviourAftertouchCrash.h:222
				float mfBlendFactorBlendFactor;

				// BrnBehaviourAftertouchCrash.h:223
				float mfMinimumBlendFactor;

				// BrnBehaviourAftertouchCrash.h:224
				float mfMaximumBlendFactor;

				// BrnBehaviourAftertouchCrash.h:225
				float mfManualBlendFactor;

				// BrnBehaviourAftertouchCrash.h:227
				float mfHeightDistanceBlendFactor;

				// BrnBehaviourAftertouchCrash.h:228
				float mfHeightDistanceVelocityRange;

				// BrnBehaviourAftertouchCrash.h:230
				float mfTimeToRivalImpactUncertaintyPadding;

				// BrnBehaviourAftertouchCrash.h:231
				float mfMaximumDistanceForConsiderationOfRivals;

				// BrnBehaviourAftertouchCrash.h:233
				float mfTimingSimilarityThreshold;

				// BrnBehaviourAftertouchCrash.h:234
				float mfDistanceSimilarityThreshold;

				// BrnBehaviourAftertouchCrash.h:235
				float mfTimeBetweenDecisions;

			public:
				// BrnBehaviourAftertouchCrash.h:238
				void Construct();

			}

		}

	}

}

// BrnBehaviourAftertouchCrash.h:54
struct BrnDirector::Camera::BehaviourAftertouchCrash : public BrnDirector::Camera::Behaviour {
private:
	// BrnBehaviourAftertouchCrash.h:145
	Matrix44Affine mIceCarRelativeBasis;

	// BrnBehaviourAftertouchCrash.h:147
	BrnDirector::Camera::CollisionPolicyAttachedToVehicle mCollisionPolicy;

	// BrnBehaviourAftertouchCrash.h:149
	Vector3 mCurrentTargetPos;

	// BrnBehaviourAftertouchCrash.h:150
	Vector3 mWorldSpaceNormalizedVectorFromCar;

	// BrnBehaviourAftertouchCrash.h:151
	Vector3 mDesiredWorldSpaceNormalizedVectorFromCar;

	// BrnBehaviourAftertouchCrash.h:153
	Vector3 mCrashPoint;

	// BrnBehaviourAftertouchCrash.h:154
	Vector3 mCameraPositionLastFrame;

	// BrnBehaviourAftertouchCrash.h:156
	PositionLag mPositionLag;

	// BrnBehaviourAftertouchCrash.h:157
	Random mRandom;

	// BrnBehaviourAftertouchCrash.h:158
	CameraShake mShake;

	// BrnBehaviourAftertouchCrash.h:160
	CameraImpactEffect mImpactEffect;

	// BrnBehaviourAftertouchCrash.h:162
	float32_t mfHeight;

	// BrnBehaviourAftertouchCrash.h:163
	float32_t mfDistance;

	// BrnBehaviourAftertouchCrash.h:165
	float32_t mfBlendFactor;

	// BrnBehaviourAftertouchCrash.h:167
	float32_t mfTimeSinceLastDecision;

	// BrnBehaviourAftertouchCrash.h:169
	float32_t mfTimeSinceLastManualControl;

	// BrnBehaviourAftertouchCrash.h:170
	Vector3 mManualCameraDirection;

	// BrnBehaviourAftertouchCrash.h:171
	VecFloat mfManualHeightAdjustment;

	// BrnBehaviourAftertouchCrash.h:172
	bool mbManualCameraControl;

	// BrnBehaviourAftertouchCrash.h:174
	bool mbWasFallingDownwards;

	// BrnBehaviourAftertouchCrash.h:175
	bool mbDisableCollision;

	// BrnBehaviourAftertouchCrash.h:176
	bool mbIsTempDebugCrashCamera;

	// BrnBehaviourAftertouchCrash.h:177
	bool mbIsRandomStartTempDebugCrashCamera;

	// BrnBehaviourAftertouchCrash.h:178
	float32_t mfDebugCrashCameraParam0to1;

	// BrnBehaviourAftertouchCrash.h:180
	float32_t mfBounceShakeMultiplier;

	// BrnBehaviourAftertouchCrash.h:182
	float32_t mfRollAngleRads;

	// BrnBehaviourAftertouchCrash.h:183
	float32_t mfCloseupAmount0To1;

	// BrnBehaviourAftertouchCrash.cpp:22
	extern float32_t KF_CAMERA_X_ROTATION_SPEED;

	// BrnBehaviourAftertouchCrash.cpp:23
	extern float32_t KF_CAMERA_Y_ROTATION_SPEED;

	// BrnBehaviourAftertouchCrash.cpp:24
	extern float32_t KF_CAMERA_RESET_SPEED;

	// BrnBehaviourAftertouchCrash.cpp:25
	extern float32_t KF_TIME_UNTIL_CAMERA_RESET;

	// BrnBehaviourAftertouchCrash.cpp:26
	extern float32_t KF_CAMERA_RESET_MIN_SPEED;

	// BrnBehaviourAftertouchCrash.cpp:27
	extern float32_t KF_CRASHBREAKER_SHAKE_MAGNITUDE;

	// BrnBehaviourAftertouchCrash.cpp:28
	extern float32_t KF_BOUNCE_SHAKE_MAGNITUDE;

	// BrnBehaviourAftertouchCrash.cpp:29
	extern float32_t KF_MIN_SPEED_FOR_CAMERA_BOUNCE;

	// BrnBehaviourAftertouchCrash.cpp:30
	extern float32_t KF_CRASHBREAKER_BLEND_OUT_SIM_SPEED;

	// BrnBehaviourAftertouchCrash.cpp:31
	extern float32_t KF_RECIPROCAL_CRASHBREAKER_BLEND_OUT_SIM_SPEED_BLEND_TIME;

	// BrnBehaviourAftertouchCrash.cpp:32
	extern float32_t KF_LOOK_DOWN_SCALE;

	// BrnBehaviourAftertouchCrash.cpp:34
	extern VecFloat KF_MIN_CAMERA_LOOK_TAN_SQ_ANGLE;

	// BrnBehaviourAftertouchCrash.cpp:35
	extern VecFloat KF_MAX_CAMERA_LOOK_TAN_SQ_ANGLE;

	// BrnBehaviourAftertouchCrash.cpp:36
	extern VecFloat KF_SMOOTHING_FACTOR;

	// BrnBehaviourAftertouchCrash.cpp:37
	extern VecFloat KF_SMOOTHING_STOP_DISTANCE_SQ;

	// BrnBehaviourAftertouchCrash.cpp:38
	extern VecFloat KF_MIN_CAMERA_MANUAL_HEIGHT_TWEAK;

	// BrnBehaviourAftertouchCrash.h:203
	const BrnDirector::Camera::BehaviourAftertouchCrash::Parameters * mpParameters;

public:
	void BehaviourAftertouchCrash(const BrnDirector::Camera::BehaviourAftertouchCrash &);

	void BehaviourAftertouchCrash();

	// BrnBehaviourAftertouchCrash.h:250
	void SetParameters(const BrnDirector::Camera::BehaviourAftertouchCrash::Parameters *);

	// BrnBehaviourAftertouchCrash.cpp:99
	virtual void Construct();

	// BrnBehaviourAftertouchCrash.cpp:136
	virtual bool Prepare(const BehaviourSharedPrepareReleaseInfo &);

	// BrnBehaviourAftertouchCrash.cpp:161
	virtual bool Update(Camera &, const BehaviourSharedInfo &);

	// BrnBehaviourAftertouchCrash.cpp:495
	virtual BrnDirector::Camera::CollisionPolicy * GetCollisionPolicy();

	// BrnBehaviourAftertouchCrash.cpp:516
	virtual void SetupTweaker(Tweaker &);

	// BrnBehaviourAftertouchCrash.cpp:529
	virtual const char * GetName() const;

	// BrnBehaviourAftertouchCrash.h:91
	void DisableCollision();

	// BrnBehaviourAftertouchCrash.h:94
	void SetIsTempDebugCrashCamera();

	// BrnBehaviourAftertouchCrash.h:97
	void SetIsRandomStartTempDebugCrashCamera();

	// BrnBehaviourAftertouchCrash.h:101
	void SetBounceShakeMultiplier(float32_t);

	// BrnBehaviourAftertouchCrash.h:104
	const rw::math::vpu::Vector3 GetWorldSpaceVectorFromCar();

	// BrnBehaviourAftertouchCrash.h:108
	void SetRollAngleRads(float32_t);

	// BrnBehaviourAftertouchCrash.h:113
	void SetCloseupAmount0To1(float32_t);

private:
	// BrnBehaviourAftertouchCrash.cpp:465
	bool CheckForPlayerCarBouncing(const BehaviourSharedInfo &);

}

// BrnBehaviourAftertouchCrash.h:264
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

// BrnBehaviourAftertouchCrash.h:264
extern void Serialise<BrnDirector::Camera::TextFileWriteSerialiser>(const TextFileWriteSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
}

// BrnBehaviourAftertouchCrash.h:264
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::RemoveFromPath(/* parameters */);
}

// BrnBehaviourAftertouchCrash.h:54
void BrnDirector::Camera::BehaviourAftertouchCrash::BehaviourAftertouchCrash() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// Declaration
		struct BehaviourAftertouchCrash {
			// BrnBehaviourAftertouchCrash.h:209
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BrnBehaviourAftertouchCrash.h:212
				Parameters mShakeParams;

				// BrnBehaviourAftertouchCrash.h:213
				Parameters mLagParams;

				// BrnBehaviourAftertouchCrash.h:215
				float mfMinDistance;

				// BrnBehaviourAftertouchCrash.h:216
				float mfMinHeight;

				// BrnBehaviourAftertouchCrash.h:217
				float mfMaxDistance;

				// BrnBehaviourAftertouchCrash.h:218
				float mfMaxHeight;

				// BrnBehaviourAftertouchCrash.h:219
				float mfPitch;

				// BrnBehaviourAftertouchCrash.h:220
				float mfFOV;

				// BrnBehaviourAftertouchCrash.h:222
				float mfBlendFactorBlendFactor;

				// BrnBehaviourAftertouchCrash.h:223
				float mfMinimumBlendFactor;

				// BrnBehaviourAftertouchCrash.h:224
				float mfMaximumBlendFactor;

				// BrnBehaviourAftertouchCrash.h:225
				float mfManualBlendFactor;

				// BrnBehaviourAftertouchCrash.h:227
				float mfHeightDistanceBlendFactor;

				// BrnBehaviourAftertouchCrash.h:228
				float mfHeightDistanceVelocityRange;

				// BrnBehaviourAftertouchCrash.h:230
				float mfTimeToRivalImpactUncertaintyPadding;

				// BrnBehaviourAftertouchCrash.h:231
				float mfMaximumDistanceForConsiderationOfRivals;

				// BrnBehaviourAftertouchCrash.h:233
				float mfTimingSimilarityThreshold;

				// BrnBehaviourAftertouchCrash.h:234
				float mfDistanceSimilarityThreshold;

				// BrnBehaviourAftertouchCrash.h:235
				float mfTimeBetweenDecisions;

			public:
				// BrnBehaviourAftertouchCrash.h:238
				void Construct();

			}

		}

	}

}

