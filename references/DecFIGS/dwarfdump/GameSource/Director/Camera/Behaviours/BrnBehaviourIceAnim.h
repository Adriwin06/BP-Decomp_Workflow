// BrnBehaviourIceAnim.h:55
struct BrnDirector::Camera::BehaviourIceAnim : public BrnDirector::Camera::Behaviour {
private:
	// BrnBehaviourIceAnim.h:158
	BrnDirector::Camera::VisibilityCollisionPolicy mCollisionPolicy;

	// BrnBehaviourIceAnim.h:159
	BrnDirector::Camera::CollisionPolicyAttachedToVehicle mAttachedToCarCollisionPolicy;

	// BrnBehaviourIceAnim.h:161
	Camera mLastCamera;

	// BrnBehaviourIceAnim.h:163
	Matrix44Affine mCar2HeadingSpace;

	// BrnBehaviourIceAnim.h:165
	CameraShake mShake;

	// BrnBehaviourIceAnim.h:166
	Looker mLooker;

	// BrnBehaviourIceAnim.h:168
	BrnDirector::KeyAnimController mKeyAnimController;

	// BrnBehaviourIceAnim.h:170
	BrnDirector::Camera::Behaviour::VehicleRef mPrimaryVehicleRef;

	// BrnBehaviourIceAnim.h:171
	BrnDirector::Camera::Behaviour::VehicleRef mSecondaryVehicleRef;

	// BrnBehaviourIceAnim.h:172
	BrnDirector::Camera::Behaviour::VehicleRef mBystanderRef;

	// BrnBehaviourIceAnim.h:174
	int32_t miAnimGuid;

	// BrnBehaviourIceAnim.h:175
	Camera::ShotReference * mpSourceShot;

	// BrnBehaviourIceAnim.h:176
	bool mbUseCollisionPolicy;

	// BrnBehaviourIceAnim.h:177
	bool mbUseAttachedToCarCollisionPolicy;

	// BrnBehaviourIceAnim.h:178
	bool mbForceHeadingSpaceToBeLooseHeadingSpace;

	// BrnBehaviourIceAnim.h:179
	bool mbForceMotionBlurEverything;

	// BrnBehaviourIceAnim.cpp:21
	extern const VecFloat KF_HEADING_SPACE_2_SLERP_AMOUNT;

public:
	void BehaviourIceAnim(const BrnDirector::Camera::BehaviourIceAnim &);

	void BehaviourIceAnim();

	// BrnBehaviourIceAnim.cpp:36
	virtual void Construct();

	// BrnBehaviourIceAnim.cpp:78
	virtual bool Prepare(const BehaviourSharedPrepareReleaseInfo &);

	// BrnBehaviourIceAnim.cpp:103
	virtual bool Update(Camera &, const BehaviourSharedInfo &);

	// BrnBehaviourIceAnim.cpp:323
	void SetParameters(Camera::ShotReference *);

	// BrnBehaviourIceAnim.cpp:343
	void ChangeMovie(Camera::ShotReference *, const BrnDirector::DirectorResourceManager &);

	// BrnBehaviourIceAnim.cpp:391
	virtual void SetupTweaker(Tweaker &);

	// BrnBehaviourIceAnim.cpp:404
	virtual const char * GetName() const;

	// BrnBehaviourIceAnim.cpp:363
	virtual BrnDirector::Camera::CollisionPolicy * GetCollisionPolicy();

	// BrnBehaviourIceAnim.h:95
	bool HasFinishedOrFailed() const;

	// BrnBehaviourIceAnim.h:98
	BrnDirector::Camera::Behaviour::VehicleRef * GetPrimaryVehicleRef();

	// BrnBehaviourIceAnim.h:101
	BrnDirector::Camera::Behaviour::VehicleRef * GetSecondaryVehicleRef();

	// BrnBehaviourIceAnim.h:104
	BrnDirector::Camera::Behaviour::VehicleRef * GetBystanderVehicleRef();

	// BrnBehaviourIceAnim.h:107
	void Rewind();

	// BrnBehaviourIceAnim.h:110
	void Reverse();

	// BrnBehaviourIceAnim.h:113
	void Pause();

	// BrnBehaviourIceAnim.h:116
	void Resume();

	// BrnBehaviourIceAnim.h:119
	float32_t GetLength();

	// BrnBehaviourIceAnim.h:122
	float32_t GetTimeRemaining();

	// BrnBehaviourIceAnim.h:126
	void SetLooping(bool);

	// BrnBehaviourIceAnim.h:129
	bool IsLooping() const;

	// BrnBehaviourIceAnim.h:133
	void SetUseCollisionPolicy(bool);

	// BrnBehaviourIceAnim.h:137
	void SetCollisionPolicyCanFail(bool);

	// BrnBehaviourIceAnim.h:144
	void SetParametricTime0To1(float32_t);

	// BrnBehaviourIceAnim.h:148
	void SetForceHeadingSpaceToBeLooseHeadingSpace(bool);

	// BrnBehaviourIceAnim.h:153
	void SetForceMotionBlurEverything(bool);

}

// BrnBehaviourIceAnim.h:55
void BrnDirector::Camera::BehaviourIceAnim::BehaviourIceAnim() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourIceAnim.h:181
extern const VecFloat KF_HEADING_SPACE_2_SLERP_AMOUNT;

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// Declaration
		struct BehaviourIceAnim {
		private:
			// BrnBehaviourIceAnim.h:181
			extern const VecFloat KF_HEADING_SPACE_2_SLERP_AMOUNT;

		}

	}

}

