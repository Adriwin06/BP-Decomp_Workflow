// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct BehaviourDebugFlyWorld {
			// BrnBehaviourDebugFlyWorld.h:108
			enum EMoveSpeedType {
				E_MOVE_SPEED_TYPE_SLOW = 0,
				E_MOVE_SPEED_TYPE_NORMAL = 1,
				E_MOVE_SPEED_TYPE_FAST = 2,
				E_MOVE_SPEED_TYPE_MAX = 3,
			}

			// BrnBehaviourDebugFlyWorld.h:177
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
			public:
				// BrnBehaviourDebugFlyWorld.h:181
				void Construct();

			}

		}

	}

}

// BrnBehaviourDebugFlyWorld.h:48
struct BrnDirector::Camera::BehaviourDebugFlyWorld : public BrnDirector::Camera::Behaviour {
private:
	// BrnBehaviourDebugFlyWorld.h:116
	Vector3 mPosition;

	// BrnBehaviourDebugFlyWorld.h:117
	Vector3 mCurrentPosition;

	// BrnBehaviourDebugFlyWorld.h:119
	float32_t mfYaw;

	// BrnBehaviourDebugFlyWorld.h:120
	float32_t mfPitch;

	// BrnBehaviourDebugFlyWorld.h:121
	float32_t mfRoll;

	// BrnBehaviourDebugFlyWorld.h:123
	float32_t mfX;

	// BrnBehaviourDebugFlyWorld.h:124
	float32_t mfY;

	// BrnBehaviourDebugFlyWorld.h:125
	float32_t mfZ;

	// BrnBehaviourDebugFlyWorld.h:127
	float32_t mfMoveXSpeed;

	// BrnBehaviourDebugFlyWorld.h:128
	float32_t mfMoveYSpeed;

	// BrnBehaviourDebugFlyWorld.h:129
	float32_t mfMoveZSpeed;

	// BrnBehaviourDebugFlyWorld.h:131
	float32_t mfYawSpeed;

	// BrnBehaviourDebugFlyWorld.h:132
	float32_t mfPitchSpeed;

	// BrnBehaviourDebugFlyWorld.h:133
	float32_t mfRollSpeed;

	// BrnBehaviourDebugFlyWorld.h:135
	float32_t mfFOV;

	// BrnBehaviourDebugFlyWorld.h:137
	BrnDirector::Camera::BehaviourDebugFlyWorld::EMoveSpeedType meMoveSpeedState;

	// BrnBehaviourDebugFlyWorld.h:138
	const BrnDirector::Camera::BehaviourDebugFlyWorld::Parameters * mpParameters;

	// BrnBehaviourDebugFlyWorld.h:140
	bool mbWarpToCar;

	// BrnBehaviourDebugFlyWorld.h:141
	bool mbLookAtCar;

	// BrnBehaviourDebugFlyWorld.h:142
	bool mbAttachedToCar;

	// BrnBehaviourDebugFlyWorld.h:143
	bool mbUseSloMo;

public:
	void BehaviourDebugFlyWorld(const BrnDirector::Camera::BehaviourDebugFlyWorld &);

	void BehaviourDebugFlyWorld();

	// BrnBehaviourDebugFlyWorld.h:193
	void SetParameters(const BrnDirector::Camera::BehaviourDebugFlyWorld::Parameters *);

	// BrnBehaviourDebugFlyWorld.cpp:29
	virtual void Construct();

	// BrnBehaviourDebugFlyWorld.cpp:98
	virtual bool Prepare(const BehaviourSharedPrepareReleaseInfo &);

	// BrnBehaviourDebugFlyWorld.cpp:125
	virtual bool Update(Camera &, const BehaviourSharedInfo &);

	// BrnBehaviourDebugFlyWorld.cpp:51
	virtual void SetupTweaker(Tweaker &);

	// BrnBehaviourDebugFlyWorld.cpp:78
	virtual const char * GetName() const;

	// BrnBehaviourDebugFlyWorld.cpp:236
	void SetPosition(Vector3);

	// BrnBehaviourDebugFlyWorld.cpp:246
	void WarpToPosition(Vector3);

	// BrnBehaviourDebugFlyWorld.cpp:255
	void SetRotation(Vector3);

	// BrnBehaviourDebugFlyWorld.cpp:267
	void WarpToLookAt(Vector3, Vector3);

private:
	// BrnBehaviourDebugFlyWorld.cpp:288
	void ChangeMovingSpeed(void *);

	// BrnBehaviourDebugFlyWorld.cpp:345
	void TakeScreenshot(void *);

	// BrnBehaviourDebugFlyWorld.cpp:360
	void WarpToCar(void *);

	// BrnBehaviourDebugFlyWorld.cpp:372
	void LookAtCar(void *);

	// BrnBehaviourDebugFlyWorld.cpp:384
	void LevelOut(void *);

	// BrnBehaviourDebugFlyWorld.cpp:397
	void ToggleCarAttachment(void *);

	// BrnBehaviourDebugFlyWorld.cpp:409
	void ToggleSloMo(void *);

}

// BrnBehaviourDebugFlyWorld.h:48
void BrnDirector::Camera::BehaviourDebugFlyWorld::BehaviourDebugFlyWorld() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

