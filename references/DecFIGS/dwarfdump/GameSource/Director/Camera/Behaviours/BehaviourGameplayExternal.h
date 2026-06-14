// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct BehaviourGameplayExternal {
			// BehaviourGameplayExternal.h:219
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BehaviourGameplayExternal.h:222
				VersionNumber muVersion;

				// BehaviourGameplayExternal.h:224
				Parameters mAirShakeParams;

				// BehaviourGameplayExternal.h:225
				Parameters mImpactShakeParams;

				// BehaviourGameplayExternal.h:227
				float32_t mrPitchLimit;

				// BehaviourGameplayExternal.h:228
				float32_t mrRollLimit;

				// BehaviourGameplayExternal.h:230
				float32_t mrPitchCoeff;

				// BehaviourGameplayExternal.h:231
				float32_t mrRollCoeff;

				// BehaviourGameplayExternal.h:233
				float32_t mrPitchSpring;

				// BehaviourGameplayExternal.h:234
				float32_t mrYawSpring;

				// BehaviourGameplayExternal.h:236
				float32_t mrAccelerationPitchAmount;

				// BehaviourGameplayExternal.h:237
				float32_t mrAccelerationSensitivity;

				// BehaviourGameplayExternal.h:239
				float32_t mrPivotY;

				// BehaviourGameplayExternal.h:240
				float32_t mrPivotZ;

				// BehaviourGameplayExternal.h:241
				float32_t mrPivotZOffset;

				// BehaviourGameplayExternal.h:243
				float32_t mrSlideXScale;

				// BehaviourGameplayExternal.h:244
				float32_t mrSlideYScale;

				// BehaviourGameplayExternal.h:245
				float32_t mrSlideZScale;

				// BehaviourGameplayExternal.h:246
				float32_t mrSlideZInputForHalf;

				// BehaviourGameplayExternal.h:247
				float32_t mrSlideZOutputMax;

				// BehaviourGameplayExternal.h:249
				float32_t mrFOV;

				// BehaviourGameplayExternal.h:251
				float32_t mfInFrontFOVMax;

				// BehaviourGameplayExternal.h:252
				float32_t mfFrontInAmount;

				// BehaviourGameplayExternal.h:254
				float32_t mfBoostFOV;

				// BehaviourGameplayExternal.h:256
				float32_t mfSpeedDisplacementHalf;

				// BehaviourGameplayExternal.h:257
				float32_t mfAccelZLerpAmount;

				// BehaviourGameplayExternal.h:258
				float32_t mfZLerpAmount;

				// BehaviourGameplayExternal.h:259
				float32_t mfZDistanceScale;

				// BehaviourGameplayExternal.h:261
				float32_t mfDriftYawSpring;

				// BehaviourGameplayExternal.h:263
				float32_t mfBoostFOVZoomCompensation;

				// BehaviourGameplayExternal.h:265
				float32_t mfDownAngle;

				// BehaviourGameplayExternal.h:267
				float32_t mfVelocitySlideZFactor0To1;

				// BehaviourGameplayExternal.h:268
				float32_t mfZAndTiltCutoffSpeedMPH;

				// BehaviourGameplayExternal.h:269
				float32_t mfSlideYScaleJump;

				// BehaviourGameplayExternal.h:270
				float32_t mfTiltAroundCarScale;

				// BehaviourGameplayExternal.h:272
				float32_t mfDropFactor;

				// BehaviourGameplayExternal.h:274
				bool mbIsValid;

			public:
				// BehaviourGameplayExternal.h:277
				void Construct();

			}

		}

	}

}

// BehaviourGameplayExternal.h:52
struct BrnDirector::Camera::BehaviourGameplayExternal : public BrnDirector::Camera::Behaviour {
private:
	// BehaviourGameplayExternal.cpp:26
	extern float32_t kfJumpParamsBlendFactor;

	// BehaviourGameplayExternal.cpp:27
	extern float32_t kfJumpParamsDutchBlendFactor;

	// BehaviourGameplayExternal.cpp:28
	extern float32_t kfJumpParamsDutchMax;

	// BehaviourGameplayExternal.cpp:29
	extern float32_t kfJumpParamsDutchCooloffRate;

	// BehaviourGameplayExternal.cpp:30
	extern float32_t kfJumpParamsDutchInitialVelocity;

	// BehaviourGameplayExternal.cpp:31
	extern float32_t kfJumpParamsAirWobbleSpeedFactor;

	// BehaviourGameplayExternal.cpp:32
	extern float32_t kfShakeDropoffFactor;

	// BehaviourGameplayExternal.cpp:33
	extern float32_t kfJumpParamsImpactShakeMaxAmplitude;

	// BehaviourGameplayExternal.cpp:34
	extern float32_t kfJumpParamsImpactShakeMaxFreqMul;

	// BehaviourGameplayExternal.cpp:35
	extern float32_t kfJumpParamsTimeDelta;

	// BehaviourGameplayExternal.cpp:36
	extern float32_t kfJumpParamsTimeDeltaBlendInFactor;

	// BehaviourGameplayExternal.cpp:37
	extern float32_t kfJumpParamsTimeDeltaBlendOutFactor;

	// BehaviourGameplayExternal.cpp:38
	extern float32_t kfSlideYScaleScaleUpFactor;

	// BehaviourGameplayExternal.cpp:40
	extern VecFloat kvfMaxPitchLimit;

	// BehaviourGameplayExternal.cpp:42
	extern VecFloat kvfVelocityTransformSlerpSpeed;

	// BehaviourGameplayExternal.h:116
	CameraSphericalRotationController mRotationController;

	// BehaviourGameplayExternal.h:118
	BrnDirector::Camera::CollisionPolicyAttachedToVehicle mCollisionPolicy;

	// BehaviourGameplayExternal.h:120
	CameraShake mAirShake;

	// BehaviourGameplayExternal.h:121
	CameraShake mImpactShake;

	// BehaviourGameplayExternal.h:122
	CameraShakeICEController mBoostShake;

	// BehaviourGameplayExternal.h:124
	Matrix44Affine mLastPlayerTransform;

	// BehaviourGameplayExternal.h:126
	Vector3 mLastCarPos;

	// BehaviourGameplayExternal.h:127
	Vector3 mLastDisplacement;

	// BehaviourGameplayExternal.h:129
	const BrnDirector::Camera::BehaviourGameplayExternal::Parameters * mpParameters;

	// BehaviourGameplayExternal.h:131
	float32_t mfCenteringFactor;

	// BehaviourGameplayExternal.h:132
	float32_t mfDesiredZDisplacement;

	// BehaviourGameplayExternal.h:133
	float32_t mfSmoothedZDisplacement;

	// BehaviourGameplayExternal.h:134
	float32_t mfSlideYScale;

	// BehaviourGameplayExternal.h:135
	float32_t mfDriftScale;

	// BehaviourGameplayExternal.h:136
	float32_t mOverrideScale;

	// BehaviourGameplayExternal.h:137
	float32_t mfDutchVelocity;

	// BehaviourGameplayExternal.h:138
	float32_t mfDutchDrift;

	// BehaviourGameplayExternal.h:139
	float32_t mfYawVelocity;

	// BehaviourGameplayExternal.h:140
	float32_t mfYawDrift;

	// BehaviourGameplayExternal.h:141
	float32_t mfZVelocity;

	// BehaviourGameplayExternal.h:142
	float32_t mfZDrift;

	// BehaviourGameplayExternal.h:143
	float32_t mfPitchCoefficient;

	// BehaviourGameplayExternal.h:144
	float32_t mfYawSpring;

	// BehaviourGameplayExternal.h:145
	float32_t mfPitchSpring;

	// BehaviourGameplayExternal.h:146
	float32_t mfWobbleScale;

	// BehaviourGameplayExternal.h:147
	float32_t mfImpactShakeFactor;

	// BehaviourGameplayExternal.h:148
	float32_t mfTimeDelta;

	// BehaviourGameplayExternal.h:149
	float32_t mfTimeInJump;

	// BehaviourGameplayExternal.h:150
	float32_t mfDropAmount;

	// BehaviourGameplayExternal.h:151
	float32_t mfFOVAdjustment;

	// BehaviourGameplayExternal.h:152
	float32_t mfJumpFOV;

	// BehaviourGameplayExternal.h:154
	bool mbLastCarPosInitialised;

	// BehaviourGameplayExternal.h:155
	bool mbSnapToCar;

	// BehaviourGameplayExternal.h:157
	bool mbEnableDebugRender;

	// BehaviourGameplayExternal.h:158
	bool mbEnableBoostEffects;

	// BehaviourGameplayExternal.h:160
	bool mbJumping;

public:
	void BehaviourGameplayExternal(const BrnDirector::Camera::BehaviourGameplayExternal &);

	void BehaviourGameplayExternal();

	// BehaviourGameplayExternal.cpp:51
	virtual void Construct();

	// BehaviourGameplayExternal.cpp:103
	virtual bool Prepare(const BehaviourSharedPrepareReleaseInfo &);

	// BehaviourGameplayExternal.cpp:188
	virtual bool Update(Camera &, const BehaviourSharedInfo &);

	// BehaviourGameplayExternal.cpp:575
	void InterpolateLastPlayerTransform(Matrix44Affine, VecFloat, VecFloat);

	// BehaviourGameplayExternal.cpp:117
	virtual BrnDirector::Camera::CollisionPolicy * GetCollisionPolicy();

	// BehaviourGameplayExternal.cpp:135
	void SetParameters(const BrnDirector::Camera::Behaviour::Parameters *);

	// BehaviourGameplayExternal.cpp:148
	virtual void SetupTweaker(Tweaker &);

	// BehaviourGameplayExternal.cpp:157
	virtual const char * GetName() const;

	// BehaviourGameplayExternal.h:449
	void SnapToCar(bool);

private:
	// BehaviourGameplayExternal.cpp:622
	void ModifyTargetAngles(const BrnDirector::Camera::BehaviourGameplayExternal::Parameters &, Vector3 &);

	// BehaviourGameplayExternal.cpp:644
	void CalcSpringCoeffs(float32_t, float32_t, float32_t, Vector3 &, Vector3 &);

	// BehaviourGameplayExternal.cpp:675
	void UpdateLooking(float32_t &, Vector3 &, Vector3 &, Vector3 &, const AABBox &);

	// BehaviourGameplayExternal.cpp:948
	void UpdateJumping(const BehaviourSharedInfo &, float32_t, Camera &);

	// BehaviourGameplayExternal.cpp:813
	void CalculateCameraTransform(const BrnDirector::Camera::BehaviourGameplayExternal::Parameters &, Matrix44Affine &, Matrix44Affine, Vector3, Vector3, Vector3, Vector3, Vector3, Vector3, float32_t, float32_t);

	// BehaviourGameplayExternal.cpp:841
	void ApplySlideyEffects(const BrnDirector::Camera::BehaviourGameplayExternal::Parameters &, Matrix44Affine &, Matrix44Affine, const BehaviourSharedInfo &);

	// BehaviourGameplayExternal.cpp:607
	void ApplyJumpEffects(Camera &, const BehaviourSharedInfo &);

}

// BehaviourGameplayExternal.h:290
extern void Serialise<BrnDirector::Camera::TextFileReadSerialiser>(const TextFileReadSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BehaviourGameplayExternal.h:292
		const unsigned int luCurrentVersion;

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
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(/* parameters */);
	{
	}
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
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
}

// BehaviourGameplayExternal.h:290
extern void Serialise<BrnDirector::Camera::TextFileWriteSerialiser>(const TextFileWriteSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BehaviourGameplayExternal.h:292
		const unsigned int luCurrentVersion;

	}
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
}

// BehaviourGameplayExternal.h:290
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BehaviourGameplayExternal.h:292
		const unsigned int luCurrentVersion;

	}
	Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::RemoveFromPath(/* parameters */);
	Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::RemoveFromPath(/* parameters */);
}

// BehaviourGameplayExternal.h:52
void BrnDirector::Camera::BehaviourGameplayExternal::BehaviourGameplayExternal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// Declaration
		struct BehaviourGameplayExternal {
			// BehaviourGameplayExternal.h:219
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BehaviourGameplayExternal.h:222
				VersionNumber muVersion;

				// BehaviourGameplayExternal.h:224
				Parameters mAirShakeParams;

				// BehaviourGameplayExternal.h:225
				Parameters mImpactShakeParams;

				// BehaviourGameplayExternal.h:227
				float32_t mrPitchLimit;

				// BehaviourGameplayExternal.h:228
				float32_t mrRollLimit;

				// BehaviourGameplayExternal.h:230
				float32_t mrPitchCoeff;

				// BehaviourGameplayExternal.h:231
				float32_t mrRollCoeff;

				// BehaviourGameplayExternal.h:233
				float32_t mrPitchSpring;

				// BehaviourGameplayExternal.h:234
				float32_t mrYawSpring;

				// BehaviourGameplayExternal.h:236
				float32_t mrAccelerationPitchAmount;

				// BehaviourGameplayExternal.h:237
				float32_t mrAccelerationSensitivity;

				// BehaviourGameplayExternal.h:239
				float32_t mrPivotY;

				// BehaviourGameplayExternal.h:240
				float32_t mrPivotZ;

				// BehaviourGameplayExternal.h:241
				float32_t mrPivotZOffset;

				// BehaviourGameplayExternal.h:243
				float32_t mrSlideXScale;

				// BehaviourGameplayExternal.h:244
				float32_t mrSlideYScale;

				// BehaviourGameplayExternal.h:245
				float32_t mrSlideZScale;

				// BehaviourGameplayExternal.h:246
				float32_t mrSlideZInputForHalf;

				// BehaviourGameplayExternal.h:247
				float32_t mrSlideZOutputMax;

				// BehaviourGameplayExternal.h:249
				float32_t mrFOV;

				// BehaviourGameplayExternal.h:251
				float32_t mfInFrontFOVMax;

				// BehaviourGameplayExternal.h:252
				float32_t mfFrontInAmount;

				// BehaviourGameplayExternal.h:254
				float32_t mfBoostFOV;

				// BehaviourGameplayExternal.h:256
				float32_t mfSpeedDisplacementHalf;

				// BehaviourGameplayExternal.h:257
				float32_t mfAccelZLerpAmount;

				// BehaviourGameplayExternal.h:258
				float32_t mfZLerpAmount;

				// BehaviourGameplayExternal.h:259
				float32_t mfZDistanceScale;

				// BehaviourGameplayExternal.h:261
				float32_t mfDriftYawSpring;

				// BehaviourGameplayExternal.h:263
				float32_t mfBoostFOVZoomCompensation;

				// BehaviourGameplayExternal.h:265
				float32_t mfDownAngle;

				// BehaviourGameplayExternal.h:267
				float32_t mfVelocitySlideZFactor0To1;

				// BehaviourGameplayExternal.h:268
				float32_t mfZAndTiltCutoffSpeedMPH;

				// BehaviourGameplayExternal.h:269
				float32_t mfSlideYScaleJump;

				// BehaviourGameplayExternal.h:270
				float32_t mfTiltAroundCarScale;

				// BehaviourGameplayExternal.h:272
				float32_t mfDropFactor;

				// BehaviourGameplayExternal.h:274
				bool mbIsValid;

			public:
				// BehaviourGameplayExternal.h:277
				void Construct();

			}

		}

	}

}

