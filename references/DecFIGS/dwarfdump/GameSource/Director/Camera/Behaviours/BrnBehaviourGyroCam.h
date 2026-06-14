// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct AttachmentTruck {
			// BrnBehaviourGyroCam.h:48
			struct Parameters {
				// BrnBehaviourGyroCam.h:50
				float32_t mfInitialOffsetDistance;

				// BrnBehaviourGyroCam.h:51
				float32_t mfConvergenceTimeSecs;

			public:
				// BrnBehaviourGyroCam.h:54
				void Construct();

			}

		}

		// Declaration
		struct BehaviourGyroCam {
			// BrnBehaviourGyroCam.h:197
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BrnBehaviourGyroCam.h:200
				Parameters mShakeParams;

				// BrnBehaviourGyroCam.h:201
				Parameters mLagParams;

				// BrnBehaviourGyroCam.h:202
				BrnDirector::Camera::Utils::Looker::Parameters mLookerParams;

				// BrnBehaviourGyroCam.h:203
				BrnDirector::Camera::AttachmentTruck::Parameters mAttachmentTruckParams;

				// BrnBehaviourGyroCam.h:205
				float mfSlowDistance;

				// BrnBehaviourGyroCam.h:206
				float mfSlowHeight;

				// BrnBehaviourGyroCam.h:207
				float mfSlowPitch;

				// BrnBehaviourGyroCam.h:208
				float mfFastDistance;

				// BrnBehaviourGyroCam.h:209
				float mfFastHeight;

				// BrnBehaviourGyroCam.h:210
				float mfFastPitch;

				// BrnBehaviourGyroCam.h:211
				float mfFOV;

				// BrnBehaviourGyroCam.h:213
				float mfBlendFactorBlendFactor;

				// BrnBehaviourGyroCam.h:214
				float mfMinimumBlendFactor;

				// BrnBehaviourGyroCam.h:215
				float mfMaximumBlendFactor;

				// BrnBehaviourGyroCam.h:217
				float mfHeightDistanceBlendFactor;

				// BrnBehaviourGyroCam.h:218
				float mfHeightDistanceVelocityRange;

				// BrnBehaviourGyroCam.h:220
				bool mbUseTruck;

				// BrnBehaviourGyroCam.h:221
				bool mbUseSideVector;

				// BrnBehaviourGyroCam.h:222
				bool mbInvertVector;

				// BrnBehaviourGyroCam.h:223
				bool mbStickToGround;

			public:
				// BrnBehaviourGyroCam.h:226
				void Construct();

			}

		}

	}

}

// BrnBehaviourGyroCam.h:44
struct BrnDirector::Camera::AttachmentTruck {
private:
	// BrnBehaviourGyroCam.h:90
	Vector3 mPosition;

	// BrnBehaviourGyroCam.h:91
	Vector3 mDirection;

	// BrnBehaviourGyroCam.h:92
	VecFloat mSpeed;

	// BrnBehaviourGyroCam.h:93
	VecFloat mDesiredSpeedRatio;

	// BrnBehaviourGyroCam.h:95
	bool mbFirstFrame;

public:
	// BrnBehaviourGyroCam.h:63
	void Construct();

	// BrnBehaviourGyroCam.h:70
	void Update(Vector3, Vector3, VecFloat, const BrnDirector::Camera::AttachmentTruck::Parameters &);

	// BrnBehaviourGyroCam.h:73
	Vector3 GetPosition() const;

	// BrnBehaviourGyroCam.h:80
	Vector3 GetVelocity() const;

	// BrnBehaviourGyroCam.h:86
	void Set(VecFloat, Vector3, Vector3);

}

// BrnBehaviourGyroCam.h:108
struct BrnDirector::Camera::BehaviourGyroCam : public BrnDirector::Camera::Behaviour {
private:
	// BrnBehaviourGyroCam.h:161
	const BrnDirector::Camera::BehaviourGyroCam::Parameters * mpParameters;

	// BrnBehaviourGyroCam.h:163
	BrnDirector::Camera::VisibilityCollisionPolicy mVisibilityCollisionPolicy;

	// BrnBehaviourGyroCam.h:164
	BrnDirector::Camera::CollisionPolicyAttachedToVehicle mVehicleAttachmentCollisionPolicy;

	// BrnBehaviourGyroCam.h:166
	Matrix44Affine mTransform;

	// BrnBehaviourGyroCam.h:167
	Looker mLooker;

	// BrnBehaviourGyroCam.h:168
	BrnDirector::Camera::Behaviour::VehicleRef mAttachedTo;

	// BrnBehaviourGyroCam.h:170
	Vector3 mCurrentTargetPos;

	// BrnBehaviourGyroCam.h:171
	Vector3 mWorldSpaceNormalizedVectorFromCar;

	// BrnBehaviourGyroCam.h:172
	Vector3 mDesiredWorldSpaceNormalizedVectorFromCar;

	// BrnBehaviourGyroCam.h:174
	Vector3 mOriginalPoint;

	// BrnBehaviourGyroCam.h:176
	PositionLag mPositionLag;

	// BrnBehaviourGyroCam.h:177
	Random mRandom;

	// BrnBehaviourGyroCam.h:178
	CameraShake mShake;

	// BrnBehaviourGyroCam.h:180
	AttachmentTruck mAttachmentTruck;

	// BrnBehaviourGyroCam.h:182
	float32_t mfHeight;

	// BrnBehaviourGyroCam.h:183
	float32_t mfDistance;

	// BrnBehaviourGyroCam.h:184
	float32_t mfPitch;

	// BrnBehaviourGyroCam.h:186
	float32_t mfBlendFactor;

	// BrnBehaviourGyroCam.h:188
	bool mbIsPlanted;

	// BrnBehaviourGyroCam.h:189
	bool mbIsFirstFrameOfPlanted;

	// BrnBehaviourGyroCam.h:190
	bool mbIsWorldSpaceVectorSet;

	// BrnBehaviourGyroCam.h:191
	bool mbUseVehicleAttachmentCollision;

public:
	void BehaviourGyroCam(const BrnDirector::Camera::BehaviourGyroCam &);

	void BehaviourGyroCam();

	// BrnBehaviourGyroCam.h:238
	void SetParameters(const BrnDirector::Camera::BehaviourGyroCam::Parameters *);

	// BrnBehaviourGyroCam.cpp:168
	virtual void Construct();

	// BrnBehaviourGyroCam.cpp:201
	virtual bool Prepare(const BehaviourSharedPrepareReleaseInfo &);

	// BrnBehaviourGyroCam.cpp:224
	virtual bool Update(Camera &, const BehaviourSharedInfo &);

	// BrnBehaviourGyroCam.cpp:506
	virtual BrnDirector::Camera::CollisionPolicy * GetCollisionPolicy();

	// BrnBehaviourGyroCam.cpp:527
	virtual void SetupTweaker(Tweaker &);

	// BrnBehaviourGyroCam.h:284
	void SetWorldSpaceNormalizedVectorFromCar(Vector3);

	// BrnBehaviourGyroCam.h:297
	void AttachToRaceCar(EActiveRaceCarIndex);

	// BrnBehaviourGyroCam.h:305
	void Plant();

	// BrnBehaviourGyroCam.h:152
	void SetUseVehicleAttachmentCollision(bool);

	// BrnBehaviourGyroCam.cpp:540
	virtual const char * GetName() const;

}

// BrnBehaviourGyroCam.h:316
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourGyroCam.h:316
extern void Serialise<BrnDirector::Camera::TextFileReadSerialiser>(const TextFileReadSerialiser &  lSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
}

// BrnBehaviourGyroCam.h:316
extern void Serialise<BrnDirector::Camera::TextFileWriteSerialiser>(const TextFileWriteSerialiser &  lSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourGyroCam.h:252
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::RemoveFromPath(/* parameters */);
	Serialise<BrnDirector::Camera::Utils::Looker::Parameters>(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::RemoveFromPath(/* parameters */);
	Serialise<BrnDirector::Camera::AttachmentTruck::Parameters>(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::RemoveFromPath(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
}

// BrnBehaviourGyroCam.h:252
extern void Serialise<BrnDirector::Camera::TextFileReadSerialiser>(const TextFileReadSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(/* parameters */);
	{
	}
	Serialise<BrnDirector::Camera::Utils::Looker::Parameters>(/* parameters */);
	{
	}
	Serialise<BrnDirector::Camera::AttachmentTruck::Parameters>(/* parameters */);
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

// BrnBehaviourGyroCam.h:252
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
	Serialise<BrnDirector::Camera::AttachmentTruck::Parameters>(/* parameters */);
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
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
}

// BrnBehaviourGyroCam.h:108
void BrnDirector::Camera::BehaviourGyroCam::BehaviourGyroCam() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// Declaration
		struct AttachmentTruck {
			// BrnBehaviourGyroCam.h:48
			struct Parameters {
				// BrnBehaviourGyroCam.h:50
				float32_t mfInitialOffsetDistance;

				// BrnBehaviourGyroCam.h:51
				float32_t mfConvergenceTimeSecs;

			public:
				// BrnBehaviourGyroCam.h:54
				void Construct();

			}

		}

		// Declaration
		struct BehaviourGyroCam {
			// BrnBehaviourGyroCam.h:197
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BrnBehaviourGyroCam.h:200
				Parameters mShakeParams;

				// BrnBehaviourGyroCam.h:201
				Parameters mLagParams;

				// BrnBehaviourGyroCam.h:202
				BrnDirector::Camera::Utils::Looker::Parameters mLookerParams;

				// BrnBehaviourGyroCam.h:203
				BrnDirector::Camera::AttachmentTruck::Parameters mAttachmentTruckParams;

				// BrnBehaviourGyroCam.h:205
				float mfSlowDistance;

				// BrnBehaviourGyroCam.h:206
				float mfSlowHeight;

				// BrnBehaviourGyroCam.h:207
				float mfSlowPitch;

				// BrnBehaviourGyroCam.h:208
				float mfFastDistance;

				// BrnBehaviourGyroCam.h:209
				float mfFastHeight;

				// BrnBehaviourGyroCam.h:210
				float mfFastPitch;

				// BrnBehaviourGyroCam.h:211
				float mfFOV;

				// BrnBehaviourGyroCam.h:213
				float mfBlendFactorBlendFactor;

				// BrnBehaviourGyroCam.h:214
				float mfMinimumBlendFactor;

				// BrnBehaviourGyroCam.h:215
				float mfMaximumBlendFactor;

				// BrnBehaviourGyroCam.h:217
				float mfHeightDistanceBlendFactor;

				// BrnBehaviourGyroCam.h:218
				float mfHeightDistanceVelocityRange;

				// BrnBehaviourGyroCam.h:220
				bool mbUseTruck;

				// BrnBehaviourGyroCam.h:221
				bool mbUseSideVector;

				// BrnBehaviourGyroCam.h:222
				bool mbInvertVector;

				// BrnBehaviourGyroCam.h:223
				bool mbStickToGround;

			public:
				// BrnBehaviourGyroCam.h:226
				void Construct();

			}

		}

	}

}

