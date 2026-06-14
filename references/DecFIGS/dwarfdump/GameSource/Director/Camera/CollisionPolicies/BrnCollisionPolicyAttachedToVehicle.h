// BrnCollisionPolicyAttachedToVehicle.h:42
struct BrnDirector::Camera::CollisionPolicyAttachedToVehicle : public BrnDirector::Camera::CollisionPolicy {
private:
	// BrnCollisionPolicyAttachedToVehicle.h:121
	FrustrumCollisionResolver mFrustrumCollisionResolver;

	// BrnCollisionPolicyAttachedToVehicle.h:122
	LineTestNearestPostBox mCarToCamera;

	// BrnCollisionPolicyAttachedToVehicle.h:123
	GroundConstraint mGroundConstraint;

	// BrnCollisionPolicyAttachedToVehicle.h:124
	VehicleRef mAttachedTo;

	// BrnCollisionPolicyAttachedToVehicle.h:126
	SmoothMover mPitchMover;

	// BrnCollisionPolicyAttachedToVehicle.h:128
	float32_t mfDesiredNearClip;

	// BrnCollisionPolicyAttachedToVehicle.h:129
	float32_t mfMaxRadius;

	// BrnCollisionPolicyAttachedToVehicle.h:130
	float32_t mfTrafficCollisionResolution;

	// BrnCollisionPolicyAttachedToVehicle.cpp:27
	extern const float32_t kfSpeedLimitForTrafficCollision;

	// BrnCollisionPolicyAttachedToVehicle.cpp:28
	extern const float32_t kfTrafficCollisionRampUp;

	// BrnCollisionPolicyAttachedToVehicle.cpp:29
	extern const float32_t kfTrafficCollisionRampDown;

	// BrnCollisionPolicyAttachedToVehicle.h:136
	bool mbAutoElevate;

	// BrnCollisionPolicyAttachedToVehicle.h:137
	bool mbSmoothRadiusChanges;

	// BrnCollisionPolicyAttachedToVehicle.h:138
	bool mbFailOnContact;

	// BrnCollisionPolicyAttachedToVehicle.h:139
	bool mbUseGroundConstraint;

	// BrnCollisionPolicyAttachedToVehicle.h:140
	bool mbTestAgainstWorldOnly;

	// BrnCollisionPolicyAttachedToVehicle.h:141
	bool mbUseFrustrumResolver;

	// BrnCollisionPolicyAttachedToVehicle.h:142
	bool mbResetVehicleCollision;

	// BrnCollisionPolicyAttachedToVehicle.h:143
	bool mbDoVehicleCollision;

public:
	void CollisionPolicyAttachedToVehicle(const CollisionPolicyAttachedToVehicle &);

	void CollisionPolicyAttachedToVehicle();

	// BrnCollisionPolicyAttachedToVehicle.cpp:42
	void Construct(bool);

	// BrnCollisionPolicyAttachedToVehicle.cpp:75
	virtual void GenerateSceneQueries(const CollisionPolicySharedInfo &, Camera &);

	// BrnCollisionPolicyAttachedToVehicle.cpp:153
	virtual void ProcessSceneQueryResults(const CollisionPolicySharedInfo &, Camera &);

	// BrnCollisionPolicyAttachedToVehicle.cpp:185
	void ResolveCollisions(const CollisionPolicySharedInfo &, Camera &, Vector3);

	// BrnCollisionPolicyAttachedToVehicle.cpp:220
	void UpdateRadius(Camera &, float32_t, float32_t, Vector3);

	// BrnCollisionPolicyAttachedToVehicle.cpp:251
	void UpdateMinElevation(const CollisionPolicySharedInfo &, float32_t, float32_t, Camera &);

	// BrnCollisionPolicyAttachedToVehicle.h:150
	void SetDesiredHeight(float32_t);

	// BrnCollisionPolicyAttachedToVehicle.h:160
	void SetFailOnContact(bool);

	// BrnCollisionPolicyAttachedToVehicle.h:169
	void SetAttachedTo(VehicleRef &);

	// BrnCollisionPolicyAttachedToVehicle.h:178
	void SetTestAgainstWorldOnly(bool);

	// BrnCollisionPolicyAttachedToVehicle.h:97
	void SetUseFrustrumResolver(bool);

	// BrnCollisionPolicyAttachedToVehicle.h:101
	void SetAutoElevate(bool);

	// BrnCollisionPolicyAttachedToVehicle.h:105
	void SetSmoothRadiusChanges(bool);

	// BrnCollisionPolicyAttachedToVehicle.h:109
	void SetDesiredNearClip(float32_t);

	// BrnCollisionPolicyAttachedToVehicle.h:112
	void ResetRadiusSmoothing();

	// BrnCollisionPolicyAttachedToVehicle.h:116
	void ResetTrafficCollision();

}

// BrnCollisionPolicyAttachedToVehicle.h:42
void BrnDirector::Camera::CollisionPolicyAttachedToVehicle::CollisionPolicyAttachedToVehicle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCollisionPolicyAttachedToVehicle.h:132
extern const float32_t kfSpeedLimitForTrafficCollision;

// BrnCollisionPolicyAttachedToVehicle.h:133
extern const float32_t kfTrafficCollisionRampUp;

// BrnCollisionPolicyAttachedToVehicle.h:134
extern const float32_t kfTrafficCollisionRampDown;

