// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct BehaviourRig {
			// BehaviourRig.h:211
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BehaviourRig.h:214
				VersionNumber muVersion;

				// BehaviourRig.h:216
				Params mRigParams;

				// BehaviourRig.h:217
				Parameters mShakeParams;

				// BehaviourRig.h:218
				BrnDirector::Camera::Utils::Looker::Parameters mLookerParams;

				// BehaviourRig.h:219
				Parameters mOrientationLagParams;

				// BehaviourRig.h:220
				Parameters mPositionLagParams;

				// BehaviourRig.h:222
				float32_t mfSpringAccelFactor;

				// BehaviourRig.h:223
				float32_t mfSpringMass;

				// BehaviourRig.h:224
				float32_t mfSpringStiffness;

				// BehaviourRig.h:225
				float32_t mfSpringDampening;

				// BehaviourRig.h:226
				float32_t mfSpringMinStretch;

				// BehaviourRig.h:227
				float32_t mfSpringMaxStretch;

				// BehaviourRig.h:229
				float32_t mfDOFNear;

				// BehaviourRig.h:230
				float32_t mfDOFFar;

				// BehaviourRig.h:231
				float32_t mfDOFBlurDepth;

				// BehaviourRig.h:232
				float32_t mfDOFIntensity;

				// BehaviourRig.h:234
				bool mbUseAccelSpring;

				// BehaviourRig.h:235
				bool mbUseShake;

				// BehaviourRig.h:236
				bool mbReverse;

				// BehaviourRig.h:237
				bool mbUseOrientationLag;

				// BehaviourRig.h:238
				bool mbUsePositionLag;

			public:
				// BehaviourRig.h:241
				void Construct();

			}

		}

	}

}

// BehaviourRig.h:61
struct BrnDirector::Camera::BehaviourRig : public BrnDirector::Camera::Behaviour {
private:
	// BehaviourRig.h:185
	BrnDirector::Camera::VisibilityCollisionPolicy mCollisionPolicy;

	// BehaviourRig.h:186
	CameraRig mRig;

	// BehaviourRig.h:187
	CameraShake mShake;

	// BehaviourRig.h:188
	OrientationLag mOrientationLag;

	// BehaviourRig.h:189
	PositionLag mPositionLag;

	// BehaviourRig.h:190
	Matrix44Affine mLastAttachedToTransform;

	// BehaviourRig.h:191
	Matrix44Affine mLastRigTransform;

	// BehaviourRig.h:192
	Spring1D mAccelSpring;

	// BehaviourRig.h:193
	Looker mLooker;

	// BehaviourRig.h:194
	Random mRandom;

	// BehaviourRig.h:195
	BrnDirector::Camera::Behaviour::VehicleRef mAttachedToRef;

	// BehaviourRig.h:196
	BrnDirector::Camera::Behaviour::VehicleRef mLookingAtRef;

	// BehaviourRig.h:197
	const BrnDirector::Camera::BehaviourRig::Parameters * mpParameters;

	// BehaviourRig.h:199
	float32_t mfLastMPH;

	// BehaviourRig.h:201
	bool mbDetached;

	// BehaviourRig.h:203
	bool mbLookingLast;

	// BehaviourRig.h:204
	bool mbLooking;

	// BehaviourRig.h:205
	bool mbSnap;

public:
	void BehaviourRig(const BrnDirector::Camera::BehaviourRig &);

	void BehaviourRig();

	// BehaviourRig.h:253
	void SetParameters(const BrnDirector::Camera::BehaviourRig::Parameters *);

	// BehaviourRig.cpp:77
	virtual void Construct();

	// BehaviourRig.cpp:110
	virtual bool Prepare(const BehaviourSharedPrepareReleaseInfo &);

	// BehaviourRig.cpp:134
	virtual bool Update(Camera &, const BehaviourSharedInfo &);

	// BehaviourRig.cpp:352
	virtual BrnDirector::Camera::CollisionPolicy * GetCollisionPolicy();

	// BehaviourRig.cpp:366
	virtual void SetupTweaker(Tweaker &);

	// BehaviourRig.cpp:401
	virtual const char * GetName() const;

	// BehaviourRig.h:304
	void StartLookingAtRaceCar(EActiveRaceCarIndex, bool);

	// BehaviourRig.cpp:415
	void AttachToRaceCar(EActiveRaceCarIndex);

	// BehaviourRig.cpp:429
	void SetDetached(bool);

	// BehaviourRig.h:314
	float32_t GetAccelSpringOffsetRatio() const;

}

// BehaviourRig.h:270
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BehaviourRig.h:272
		const unsigned int luCurrentVersion;

	}
	Serialise<BrnDirector::Camera::Utils::OrientationLag::Parameters>(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::RemoveFromPath(/* parameters */);
	Serialise<BrnDirector::Camera::Utils::PositionLag::Parameters>(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::RemoveFromPath(/* parameters */);
	Serialise<BrnDirector::Camera::Utils::CameraRig::Params>(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::RemoveFromPath(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
}

// BehaviourRig.h:270
extern void Serialise<BrnDirector::Camera::TextFileReadSerialiser>(const TextFileReadSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BehaviourRig.h:272
		const unsigned int luCurrentVersion;

	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	Serialise<BrnDirector::Camera::Utils::OrientationLag::Parameters>(/* parameters */);
	{
	}
	Serialise<BrnDirector::Camera::Utils::PositionLag::Parameters>(/* parameters */);
	{
	}
	Serialise<BrnDirector::Camera::Utils::CameraRig::Params>(/* parameters */);
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

// BehaviourRig.h:270
extern void Serialise<BrnDirector::Camera::TextFileWriteSerialiser>(const TextFileWriteSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BehaviourRig.h:272
		const unsigned int luCurrentVersion;

	}
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	Serialise<BrnDirector::Camera::Utils::OrientationLag::Parameters>(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	Serialise<BrnDirector::Camera::Utils::PositionLag::Parameters>(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	Serialise<BrnDirector::Camera::Utils::CameraRig::Params>(/* parameters */);
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

// BehaviourRig.h:61
void BrnDirector::Camera::BehaviourRig::BehaviourRig() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// Declaration
		struct BehaviourRig {
			// BehaviourRig.h:211
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BehaviourRig.h:214
				VersionNumber muVersion;

				// BehaviourRig.h:216
				Params mRigParams;

				// BehaviourRig.h:217
				Parameters mShakeParams;

				// BehaviourRig.h:218
				BrnDirector::Camera::Utils::Looker::Parameters mLookerParams;

				// BehaviourRig.h:219
				Parameters mOrientationLagParams;

				// BehaviourRig.h:220
				Parameters mPositionLagParams;

				// BehaviourRig.h:222
				float32_t mfSpringAccelFactor;

				// BehaviourRig.h:223
				float32_t mfSpringMass;

				// BehaviourRig.h:224
				float32_t mfSpringStiffness;

				// BehaviourRig.h:225
				float32_t mfSpringDampening;

				// BehaviourRig.h:226
				float32_t mfSpringMinStretch;

				// BehaviourRig.h:227
				float32_t mfSpringMaxStretch;

				// BehaviourRig.h:229
				float32_t mfDOFNear;

				// BehaviourRig.h:230
				float32_t mfDOFFar;

				// BehaviourRig.h:231
				float32_t mfDOFBlurDepth;

				// BehaviourRig.h:232
				float32_t mfDOFIntensity;

				// BehaviourRig.h:234
				bool mbUseAccelSpring;

				// BehaviourRig.h:235
				bool mbUseShake;

				// BehaviourRig.h:236
				bool mbReverse;

				// BehaviourRig.h:237
				bool mbUseOrientationLag;

				// BehaviourRig.h:238
				bool mbUsePositionLag;

			public:
				// BehaviourRig.h:241
				void Construct();

			}

		}

	}

}

