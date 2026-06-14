// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct BehaviourInterpolate {
			// BrnBehaviourInterpolate.h:186
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BrnBehaviourInterpolate.h:189
				BrnDirector::CameraInterpolationController::EInterpolationMethod meInterpolationMethod;

				// BrnBehaviourInterpolate.h:190
				BrnDirector::CameraInterpolationController::EInterpolationMapping meInterpolationMapping;

			public:
				// BrnBehaviourInterpolate.h:193
				void Construct();

			}

		}

	}

}

// BrnBehaviourInterpolate.h:54
struct BrnDirector::Camera::BehaviourInterpolate : public BrnDirector::Camera::Behaviour {
private:
	// BrnBehaviourInterpolate.h:166
	BrnDirector::Camera::VisibilityCollisionPolicy mCollisionPolicy;

	// BrnBehaviourInterpolate.h:168
	CameraInterpolationController mInterpolator;

	// BrnBehaviourInterpolate.h:170
	const BrnDirector::Camera::BehaviourInterpolate::Parameters * mpParameters;

	// BrnBehaviourInterpolate.h:172
	float32_t mfDuration;

	// BrnBehaviourInterpolate.h:173
	CameraReference mFromCamera;

	// BrnBehaviourInterpolate.h:174
	CameraReference mToCamera;

	// BrnBehaviourInterpolate.h:176
	float32_t mfRunningTime;

	// BrnBehaviourInterpolate.h:178
	bool mbUseCollisionPolicy;

	// BrnBehaviourInterpolate.h:179
	bool mbSetup;

	// BrnBehaviourInterpolate.h:180
	bool mbHasFinished;

public:
	void BehaviourInterpolate(const BrnDirector::Camera::BehaviourInterpolate &);

	void BehaviourInterpolate();

	// BrnBehaviourInterpolate.h:238
	void Setup(float32_t, BehaviourHelperIndex, BehaviourHelperIndex, const BrnDirector::Camera::BehaviourManager *);

	// BrnBehaviourInterpolate.h:255
	void Setup(float32_t, const Camera &, BehaviourHelperIndex, const BrnDirector::Camera::BehaviourManager *);

	// BrnBehaviourInterpolate.h:272
	void Setup(float32_t, BehaviourHelperIndex, const Camera &, const BrnDirector::Camera::BehaviourManager *);

	// BrnBehaviourInterpolate.h:288
	void Setup(float32_t, const Camera &, const Camera &);

	// BrnBehaviourInterpolate.h:302
	void SetupDuration(float32_t);

	// BrnBehaviourInterpolate.cpp:182
	virtual BrnDirector::Camera::CollisionPolicy * GetCollisionPolicy();

	// BrnBehaviourInterpolate.h:311
	CameraReference & GetCameraAForSetup();

	// BrnBehaviourInterpolate.h:320
	CameraReference & GetCameraBForSetup();

	// BrnBehaviourInterpolate.h:330
	void Setup();

	// BrnBehaviourInterpolate.h:343
	void UpdateDestinationCamera(const BrnDirector::Camera::BehaviourControllerLockInterface &, const Camera &);

	// BrnBehaviourInterpolate.h:354
	void UnlockSourceBehaviour(const BrnDirector::Camera::BehaviourControllerLockInterface &);

	// BrnBehaviourInterpolate.h:364
	void UnlockDestinationBehaviour(const BrnDirector::Camera::BehaviourControllerLockInterface &);

	// BrnBehaviourInterpolate.h:205
	void SetParameters(const BrnDirector::Camera::BehaviourInterpolate::Parameters *);

	// BrnBehaviourInterpolate.cpp:51
	virtual void Construct();

	// BrnBehaviourInterpolate.cpp:76
	virtual bool Prepare(const BehaviourSharedPrepareReleaseInfo &);

	// BrnBehaviourInterpolate.cpp:98
	virtual bool Update(Camera &, const BehaviourSharedInfo &);

	// BrnBehaviourInterpolate.cpp:133
	virtual bool PostCollisionUpdate(Camera &, const BehaviourSharedInfo &);

	// BrnBehaviourInterpolate.cpp:202
	virtual void Release(const BehaviourSharedPrepareReleaseInfo &);

	// BrnBehaviourInterpolate.cpp:217
	virtual void SetupTweaker(Tweaker &);

	// BrnBehaviourInterpolate.cpp:231
	virtual const char * GetName() const;

	// BrnBehaviourInterpolate.h:216
	bool HasFinished() const;

	// BrnBehaviourInterpolate.h:157
	float32_t GetParametricTime() const;

	// BrnBehaviourInterpolate.h:162
	void SetUseCollisionPolicy(bool);

}

// BrnBehaviourInterpolate.h:54
void BrnDirector::Camera::BehaviourInterpolate::BehaviourInterpolate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// Declaration
		struct BehaviourInterpolate {
			// BrnBehaviourInterpolate.h:186
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BrnBehaviourInterpolate.h:189
				BrnDirector::CameraInterpolationController::EInterpolationMethod meInterpolationMethod;

				// BrnBehaviourInterpolate.h:190
				BrnDirector::CameraInterpolationController::EInterpolationMapping meInterpolationMapping;

			public:
				// BrnBehaviourInterpolate.h:193
				void Construct();

			}

		}

	}

}

