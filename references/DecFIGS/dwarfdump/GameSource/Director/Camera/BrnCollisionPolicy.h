// BrnCollisionPolicy.h:54
struct BrnDirector::Camera::CollisionPolicySharedInfo {
	// BrnCollisionPolicy.h:57
	BitArray<8u> mUsedRaceCars;

	// BrnCollisionPolicy.h:59
	const SceneQueryInterface * mpRequestInterface;

	// BrnCollisionPolicy.h:60
	const VehicleInfo * mpRaceCars;

	// BrnCollisionPolicy.h:61
	const VehicleInfo * mpPlayerCar;

	// BrnCollisionPolicy.h:62
	const rw::math::vpu::Matrix44Affine * mpPlayerCarTransform;

	// BrnCollisionPolicy.h:63
	EActiveRaceCarIndex mePlayerCarIndex;

	// BrnCollisionPolicy.h:65
	const AllVehicleData * mpAllVehicleData;

	// BrnCollisionPolicy.h:67
	BrnDirector::DebugPrinter * mpDebugPrinter;

	// BrnCollisionPolicy.h:69
	Random * mpRandom;

	// BrnCollisionPolicy.h:70
	Timestep mTimestep;

}

// BrnCollisionPolicy.h:76
struct BrnDirector::Camera::FrustrumCollisionResolver {
private:
	// BrnCollisionPolicy.h:151
	LineTestNearestPostBox mTopLeft;

	// BrnCollisionPolicy.h:152
	LineTestNearestPostBox mTopRight;

	// BrnCollisionPolicy.h:153
	LineTestNearestPostBox mBottomLeft;

	// BrnCollisionPolicy.h:154
	LineTestNearestPostBox mBottomRight;

	// BrnCollisionPolicy.h:156
	extern VecFloat sDefaultDesiredNearClip;

	// BrnCollisionPolicy.h:157
	extern VecFloat sMaxViewportHalfWidth;

	// BrnCollisionPolicy.h:158
	extern VecFloat sMaxViewportHalfHeight;

	// BrnCollisionPolicy.h:160
	extern VecFloat sTestStartWidthPadding;

	// BrnCollisionPolicy.h:161
	extern VecFloat sTestLengthPadding;

	// BrnCollisionPolicy.h:163
	extern float32_t kfFOVBodgeAmount;

	// BrnCollisionPolicy.h:164
	extern float32_t kfNearClipDistance;

	// BrnCollisionPolicy.h:165
	extern float32_t kfPadding;

	// BrnCollisionPolicy.h:167
	extern VecFloat kvfHorizontalExtentsScale;

	// BrnCollisionPolicy.h:168
	extern VecFloat kvfVehicleCollisionCurveTopScale;

	// BrnCollisionPolicy.h:169
	extern VecFloat kvfVehicleCollisionCurveBottomScale;

	// BrnCollisionPolicy.h:170
	extern VecFloat kvfVehicleCollisionReturnSpeed;

	// BrnCollisionPolicy.h:171
	extern VecFloat kvfDistBelowCarToIgnoreCollision;

	// BrnCollisionPolicy.h:172
	extern VecFloat kvfMinVehicleResolveAmount;

	// BrnCollisionPolicy.h:174
	Vector3 mVehicleResolveVector;

	// BrnCollisionPolicy.h:175
	float32_t mfMinDistance;

public:
	// BrnCollisionPolicy.h:80
	void Construct();

	// BrnCollisionPolicy.h:83
	void Clear();

	// BrnCollisionPolicy.h:92
	void GenerateSceneQueries(const CollisionPolicySharedInfo &, Camera &, Vector3, VecFloat, VecFloat, bool);

	// BrnCollisionPolicy.h:101
	void RequestFrustumLineTests(const SceneQueryInterface *, Vector3, Vector3, Vector3, Vector3, Vector3);

	// BrnCollisionPolicy.h:112
	void CalculateFrustumLineTests(VecFloat, Camera &, Vector3, Vector3 &, Vector3 &, Vector3 &, Vector3 &, Vector3 &);

	// BrnCollisionPolicy.h:119
	void ResolveVehicleCollisions(const AllVehicleData *, Vector3, Camera &, Vector3);

	// BrnCollisionPolicy.h:125
	void ResolveVehicleCollision(Matrix44Affine, Vector3, Vector3 &);

	// BrnCollisionPolicy.h:132
	bool ProcessSceneQueryResults(const CollisionPolicySharedInfo &, Camera &, Vector3, Vector3 &);

private:
	// BrnCollisionPolicy.h:143
	bool Resolve(const CollisionPolicySharedInfo &, LineTestNearestPostBox &, Vector3, Vector3, Vector3 &, Camera &);

	// BrnCollisionPolicy.h:149
	VecFloat GetHeightAboveTraffic(VecFloat, VecFloat, VecFloat);

}

// BrnCollisionPolicy.h:181
struct BrnDirector::Camera::GeometryCollisionPredictor {
	// BrnCollisionPolicy.h:208
	extern const float32_t KF_LOOKAHEAD_TIME_FLOAT;

	// BrnCollisionPolicy.h:209
	extern const VecFloat KF_LOOKAHEAD_TIME_VECFLOAT;

private:
	// BrnCollisionPolicy.h:213
	Vector3 mVelocity;

	// BrnCollisionPolicy.h:214
	LineTestNearestPostBox mLineTest;

	// BrnCollisionPolicy.h:215
	float32_t mfTimeUntilCollision;

	// BrnCollisionPolicy.h:216
	bool mbWillCollide;

public:
	// BrnCollisionPolicy.h:185
	void Construct();

	// BrnCollisionPolicy.h:192
	void GenerateSceneQueries(const Camera &, float32_t, Random &, const SceneQueryInterface *);

	// BrnCollisionPolicy.h:196
	void ProcessSceneQueryResults(float32_t);

	// BrnCollisionPolicy.h:200
	void SetVelocity(Vector3);

	// BrnCollisionPolicy.h:203
	bool WillCollide() const;

	// BrnCollisionPolicy.h:206
	float32_t GetTimeUntilCollision() const;

}

// BrnCollisionPolicy.h:222
struct BrnDirector::Camera::VisibilityTest {
private:
	// BrnCollisionPolicy.h:277
	LineTestNearestPostBox mLineTestA;

	// BrnCollisionPolicy.h:278
	LineTestNearestPostBox mLineTestB;

	// BrnCollisionPolicy.h:279
	float32_t mfOccludedTime;

	// BrnCollisionPolicy.h:280
	float32_t mfOffscreenTime;

	// BrnCollisionPolicy.h:281
	float32_t mfTimeSinceLastTest;

	// BrnCollisionPolicy.h:282
	float32_t mfMaxTimeBetweenTests;

	// BrnCollisionPolicy.h:283
	bool mbTestLookingAt;

	// BrnCollisionPolicy.h:284
	bool mbOccluded;

	// BrnCollisionPolicy.h:285
	bool mbIsOnScreen;

public:
	// BrnCollisionPolicy.h:226
	void Construct();

	// BrnCollisionPolicy.h:237
	void GenerateSceneQueries(const Camera &, float32_t, Random &, const SceneQueryInterface *, Matrix44Affine, const AABBox &, bool, EntityId);

	// BrnCollisionPolicy.h:241
	void ProcessSceneQueryResults(float32_t);

	// BrnCollisionPolicy.h:244
	float32_t GetOccludedTime() const;

	// BrnCollisionPolicy.h:247
	float32_t GetOffscreenTime() const;

	// BrnCollisionPolicy.h:251
	float32_t GetOffscreenTimeUnsafe() const;

	// BrnCollisionPolicy.h:256
	void SetTestLookingAt(bool);

	// BrnCollisionPolicy.h:259
	bool WillTestLookingAt() const;

	// BrnCollisionPolicy.h:262
	bool IsVisibilityInterrupted() const;

	// BrnCollisionPolicy.h:266
	bool IsOccluded() const;

	// BrnCollisionPolicy.h:269
	bool IsOnScreen() const;

}

// BrnCollisionPolicy.h:291
struct BrnDirector::Camera::GroundConstraint {
	// BrnCollisionPolicy.h:294
	extern const float32_t KF_MIN_TEST_BELOW_LENGTH;

	// BrnCollisionPolicy.h:295
	extern const float32_t KF_MIN_TEST_ABOVE_LENGTH;

private:
	// BrnCollisionPolicy.h:320
	LineTestNearestPostBox mLineTest;

	// BrnCollisionPolicy.h:321
	float32_t mfDesiredHeight;

public:
	// BrnCollisionPolicy.h:298
	void Construct();

	// BrnCollisionPolicy.h:304
	void GenerateSceneQueries(const Camera &, float32_t, const SceneQueryInterface *);

	// BrnCollisionPolicy.h:309
	bool ProcessSceneQueryResults(float32_t, Camera &);

	// BrnCollisionPolicy.h:313
	void SetDesiredHeight(float32_t);

	// BrnCollisionPolicy.h:316
	float32_t GetDesiredHeight() const;

}

// BrnCollisionPolicy.h:377
struct BrnDirector::Camera::VisibilityCollisionPolicy : public BrnDirector::Camera::CollisionPolicy {
private:
	// BrnCollisionPolicy.h:436
	bool mbCanFail;

	// BrnCollisionPolicy.h:437
	bool mbFirstFrame;

	// BrnCollisionPolicy.h:438
	bool mbTargetSet;

	// BrnCollisionPolicy.h:440
	Matrix44Affine mTargetTransform;

	// BrnCollisionPolicy.h:441
	AABBox mTargetAABB;

	// BrnCollisionPolicy.h:443
	VehicleCollisionPredictor mVehicleCollisionPredictor;

	// BrnCollisionPolicy.h:444
	GeometryCollisionPredictor mGeometryCollisionPredictor;

	// BrnCollisionPolicy.h:445
	VisibilityTest mVisibilityTest;

	// BrnCollisionPolicy.h:451
	VolumeTestDeepestPostBox mVolumeTest;

	// BrnCollisionPolicy.h:453
	GroundConstraint mGroundConstraint;

	// BrnCollisionPolicy.h:455
	Vector3 mVelocity;

	// BrnCollisionPolicy.h:456
	EntityId mTargetEntityId;

	// BrnCollisionPolicy.h:458
	float32_t mfOcclusionTimeout;

	// BrnCollisionPolicy.h:459
	float32_t mfOffscreenTimeout;

	// BrnCollisionPolicy.h:461
	bool mbUseGroundConstraint;

	// BrnCollisionPolicy.h:462
	bool mbDoingVisibilityTestThisTime;

	// BrnCollisionPolicy.h:463
	bool mbDoingCollisionPredictionThisTime;

public:
	void VisibilityCollisionPolicy(const VisibilityCollisionPolicy &);

	void VisibilityCollisionPolicy();

	// BrnCollisionPolicy.cpp:763
	void Construct();

	// BrnCollisionPolicy.cpp:805
	virtual void GenerateSceneQueries(const CollisionPolicySharedInfo &, Camera &);

	// BrnCollisionPolicy.cpp:865
	virtual void ProcessSceneQueryResults(const CollisionPolicySharedInfo &, Camera &);

	// BrnCollisionPolicy.h:534
	void SetCanFail(bool);

	// BrnCollisionPolicy.h:545
	void SetTarget(Matrix44Affine, AABBox, EntityId);

	// BrnCollisionPolicy.h:404
	bool IsVisibilityInterrupted() const;

	// BrnCollisionPolicy.h:556
	float GetMinTimeToVisibilityFailure() const;

	// BrnCollisionPolicy.h:570
	void SetTestLookingAt(bool);

	// BrnCollisionPolicy.h:579
	void SetDesiredHeight(float32_t);

	// BrnCollisionPolicy.h:419
	void SetVelocity(Vector3);

	// BrnCollisionPolicy.h:422
	bool WillCollideWithGeometry() const;

	// BrnCollisionPolicy.h:425
	float32_t TimeUntilCollisionWithGeometry() const;

	// BrnCollisionPolicy.h:428
	bool WillCollideWithVehicle() const;

	// BrnCollisionPolicy.h:431
	float32_t TimeUntilCollisionWithVehicle() const;

}

// BrnCollisionPolicy.h:327
struct BrnDirector::Camera::CollisionPolicy {
	int (*)(...) * _vptr.CollisionPolicy;

private:
	// BrnCollisionPolicy.h:371
	bool mbHasFailed;

public:
	// BrnCollisionPolicy.h:333
	virtual void GenerateSceneQueries(const CollisionPolicySharedInfo &, Camera &);

	// BrnCollisionPolicy.h:338
	virtual void ProcessSceneQueryResults(const CollisionPolicySharedInfo &, Camera &);

	// BrnCollisionPolicy.h:504
	bool HasFailed() const;

	// BrnCollisionPolicy.h:344
	void CollisionPolicy();

protected:
	// BrnCollisionPolicy.cpp:755
	void Construct();

	// BrnCollisionPolicy.h:513
	void SetHasFailed(bool);

	// BrnCollisionPolicy.h:523
	void Fail(Camera &, BrnDirector::Camera::ValidityAccount::EFailedFlag);

private:
	// BrnCollisionPolicy.h:364
	void CollisionPolicy(const CollisionPolicy &);

	// BrnCollisionPolicy.h:369
	CollisionPolicy & operator=(const CollisionPolicy &);

}

// BrnCollisionPolicy.h:377
void BrnDirector::Camera::VisibilityCollisionPolicy::VisibilityCollisionPolicy() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCollisionPolicy.h:208
extern const float32_t KF_LOOKAHEAD_TIME_FLOAT;

// BrnCollisionPolicy.h:209
extern const VecFloat KF_LOOKAHEAD_TIME_VECFLOAT;

// BrnCollisionPolicy.h:294
extern const float32_t KF_MIN_TEST_BELOW_LENGTH;

// BrnCollisionPolicy.h:295
extern const float32_t KF_MIN_TEST_ABOVE_LENGTH;

