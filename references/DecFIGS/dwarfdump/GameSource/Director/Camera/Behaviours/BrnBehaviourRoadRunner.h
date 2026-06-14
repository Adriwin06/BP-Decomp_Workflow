// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct BehaviourRoadRunner {
			// BrnBehaviourRoadRunner.h:150
			enum EMode {
				E_MODE_LOW_SLOW = 0,
				E_MODE_COUNT = 1,
				E_MODE_HIGH_SLOW = 2,
				E_MODE_LOW_FAST = 3,
				E_MODE_VERY_HIGH_SLOW = 4,
			}

			// BrnBehaviourRoadRunner.h:296
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
			public:
				// BrnBehaviourRoadRunner.h:300
				void Construct();

			}

		}

	}

}

// BrnBehaviourRoadRunner.h:45
struct BrnDirector::Camera::TrafficLaneTruck {
private:
	// BrnBehaviourRoadRunner.h:124
	BrnDirector::WorldMap::LanePosition mLanePosition;

	// BrnBehaviourRoadRunner.h:125
	Matrix44Affine mTransform;

	// BrnBehaviourRoadRunner.h:126
	Vector3 mLocalAngularVelocity;

	// BrnBehaviourRoadRunner.h:127
	Vector3 mLinearVelocity;

	// BrnBehaviourRoadRunner.h:129
	float32_t mfSpeed;

	// BrnBehaviourRoadRunner.h:130
	float32_t mfTransformBlendAmount;

	// BrnBehaviourRoadRunner.h:131
	float32_t mfBlendDistance;

	// BrnBehaviourRoadRunner.h:133
	bool mbPrepared;

public:
	// BrnBehaviourRoadRunner.h:49
	void Construct();

	// BrnBehaviourRoadRunner.h:54
	bool Prepare(const BrnDirector::WorldMap &, Vector3);

	// BrnBehaviourRoadRunner.h:60
	void Update(const BrnDirector::WorldMap &, float32_t, Random *);

	// BrnBehaviourRoadRunner.h:63
	const rw::math::vpu::Matrix44Affine GetTransform() const;

	// BrnBehaviourRoadRunner.h:66
	const float32_t GetSpeed() const;

	// BrnBehaviourRoadRunner.h:70
	void SetSpeed(float32_t);

	// BrnBehaviourRoadRunner.h:73
	const rw::math::vpu::Vector3 GetLocalAngularVelocity() const;

	// BrnBehaviourRoadRunner.h:76
	const rw::math::vpu::Vector3 GetLinearVelocity() const;

private:
	// BrnBehaviourRoadRunner.h:86
	void PickSplitToTake(const Section &, BrnTraffic::Directions, uint8_t *, uint16_t *, uint8_t *);

	// BrnBehaviourRoadRunner.h:94
	void PickSplitToTakeBackwards(const Section &, BrnTraffic::Directions, uint8_t *, uint16_t *, uint8_t *);

	// BrnBehaviourRoadRunner.h:98
	void CalcTransformFromLanePosition(const BrnDirector::WorldMap &);

	// BrnBehaviourRoadRunner.h:106
	void MoveAlongTrafficLane(BrnTraffic::Directions, const BrnDirector::WorldMap &, float32_t, BrnDirector::WorldMap::LanePosition *, Matrix44Affine *);

	// BrnBehaviourRoadRunner.h:114
	void MoveAlongTrafficLaneForwards(BrnTraffic::Directions, const BrnDirector::WorldMap &, float32_t, BrnDirector::WorldMap::LanePosition *, Matrix44Affine *);

	// BrnBehaviourRoadRunner.h:122
	void MoveAlongTrafficLaneBackwards(BrnTraffic::Directions, const BrnDirector::WorldMap &, float32_t, BrnDirector::WorldMap::LanePosition *, Matrix44Affine *);

}

// BrnBehaviourRoadRunner.h:146
struct BrnDirector::Camera::BehaviourRoadRunner : public BrnDirector::Camera::Behaviour {
private:
	// BrnBehaviourRoadRunner.h:230
	const BrnDirector::Camera::BehaviourRoadRunner::Parameters * mpParameters;

	// BrnBehaviourRoadRunner.h:232
	TrafficLaneTruck mTrafficLaneTruck;

	// BrnBehaviourRoadRunner.h:234
	LineTestNearestPostBox mTopLeftBottomRight;

	// BrnBehaviourRoadRunner.h:235
	LineTestNearestPostBox mTopRightBottomLeft;

	// BrnBehaviourRoadRunner.h:237
	LineTestFinePostBox mLineTestFineA;

	// BrnBehaviourRoadRunner.h:238
	LineTestFinePostBox mLineTestFineB;

	// BrnBehaviourRoadRunner.h:240
	Vector3 mFixationPoint;

	// BrnBehaviourRoadRunner.h:241
	Vector3 mDebugFixationHalfExtents;

	// BrnBehaviourRoadRunner.h:242
	Matrix44Affine mDebugFixationTransform;

	// BrnBehaviourRoadRunner.h:243
	Matrix44Affine mWorldToFixation;

	// BrnBehaviourRoadRunner.h:245
	Matrix44Affine mLastShakeTransform;

	// BrnBehaviourRoadRunner.h:247
	CameraShake mShake;

	// BrnBehaviourRoadRunner.h:248
	Parameters mShakeParams;

	// BrnBehaviourRoadRunner.h:250
	float32_t mfFixationAmount;

	// BrnBehaviourRoadRunner.h:251
	float32_t mfFixationBlendTimeReciprocal;

	// BrnBehaviourRoadRunner.h:252
	float32_t mfFixationStartDistance;

	// BrnBehaviourRoadRunner.h:253
	float32_t mfFixationEndDistance;

	// BrnBehaviourRoadRunner.h:254
	float32_t mfFixationOccludedTime;

	// BrnBehaviourRoadRunner.h:256
	float32_t mfCurrentModeTime;

	// BrnBehaviourRoadRunner.h:257
	float32_t mfCurrentModeDuration;

	// BrnBehaviourRoadRunner.h:259
	TransitionSmoother mHeight;

	// BrnBehaviourRoadRunner.h:261
	float32_t mfDesiredSpeed;

	// BrnBehaviourRoadRunner.h:262
	float32_t mfSpeedBlendAmount;

	// BrnBehaviourRoadRunner.h:263
	float32_t mfDirection;

	// BrnBehaviourRoadRunner.h:265
	float32_t mfDesiredBankingScale;

	// BrnBehaviourRoadRunner.h:266
	float32_t mfBankingScale;

	// BrnBehaviourRoadRunner.h:267
	float32_t mfBankingScaleBlendAmount;

	// BrnBehaviourRoadRunner.h:269
	float32_t mfTimeSinceLastCollisionStarted;

	// BrnBehaviourRoadRunner.h:270
	float32_t mfTimeSinceLastCollision;

	// BrnBehaviourRoadRunner.h:271
	bool mbIsColliding;

	// BrnBehaviourRoadRunner.h:272
	bool mbWasCollidingLastFrame;

	// BrnBehaviourRoadRunner.h:274
	BrnDirector::Camera::BehaviourRoadRunner::EMode meMode;

	// BrnBehaviourRoadRunner.h:276
	bool mbFixationsAllowed;

	// BrnBehaviourRoadRunner.h:277
	bool mbOccluded;

	// BrnBehaviourRoadRunner.h:278
	bool mbHasFixation;

	// BrnBehaviourRoadRunner.h:279
	bool mbStartingFixation;

	// BrnBehaviourRoadRunner.h:280
	bool mbFixationIsValid;

	// BrnBehaviourRoadRunner.cpp:21
	extern uint32_t KU_ROAD_RUNNER_TEST_PROBABILITY;

	// BrnBehaviourRoadRunner.cpp:22
	extern uint32_t KU_LINE_TEST_PROBABILITY;

	// BrnBehaviourRoadRunner.cpp:24
	extern float32_t KF_PREDICTION_TIME_AHEAD_OF_FADE;

	// BrnBehaviourRoadRunner.cpp:25
	extern float32_t KF_AVOID_SPEED;

	// BrnBehaviourRoadRunner.cpp:26
	extern float32_t KF_FADE_OUT_TIME;

	// BrnBehaviourRoadRunner.cpp:27
	extern float32_t KF_SAFE_TIME_BEFORE_FADE_IN;

	// BrnBehaviourRoadRunner.cpp:28
	extern float32_t KF_MAX_OCCLUSION_TIME;

	// BrnBehaviourRoadRunner.cpp:29
	extern float32_t KF_SHAKE_BLENDING;

public:
	void BehaviourRoadRunner(const BrnDirector::Camera::BehaviourRoadRunner &);

	void BehaviourRoadRunner();

	// BrnBehaviourRoadRunner.h:162
	void Reset();

	// BrnBehaviourRoadRunner.h:331
	void Reverse();

	// BrnBehaviourRoadRunner.h:312
	void SetParameters(const BrnDirector::Camera::BehaviourRoadRunner::Parameters *);

	// BrnBehaviourRoadRunner.cpp:549
	virtual void Construct();

	// BrnBehaviourRoadRunner.cpp:588
	virtual bool Prepare(const BehaviourSharedPrepareReleaseInfo &);

	// BrnBehaviourRoadRunner.cpp:632
	virtual bool Update(Camera &, const BehaviourSharedInfo &);

	// BrnBehaviourRoadRunner.cpp:912
	virtual bool PostCollisionUpdate(Camera &, const BehaviourSharedInfo &);

	// BrnBehaviourRoadRunner.cpp:1172
	virtual const BrnDirector::Camera::Behaviour::Parameters * GetParameters() const;

	// BrnBehaviourRoadRunner.cpp:1185
	virtual void SetParameters(const BrnDirector::Camera::Behaviour::Parameters *);

	// BrnBehaviourRoadRunner.cpp:1200
	virtual void SetupTweaker(Tweaker &);

	// BrnBehaviourRoadRunner.cpp:1213
	virtual const char * GetName() const;

	// BrnBehaviourRoadRunner.h:209
	bool HasJustStartedColliding() const;

	// BrnBehaviourRoadRunner.h:213
	bool HasJustStoppedColliding() const;

	// BrnBehaviourRoadRunner.h:217
	bool IsColliding() const;

	// BrnBehaviourRoadRunner.h:222
	void SetFixationsAllowed(bool);

private:
	// BrnBehaviourRoadRunner.cpp:1113
	void PickNewMode();

}

// BrnBehaviourRoadRunner.h:323
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourRoadRunner.h:323
extern void Serialise<BrnDirector::Camera::TextFileReadSerialiser>(const TextFileReadSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourRoadRunner.h:323
extern void Serialise<BrnDirector::Camera::TextFileWriteSerialiser>(const TextFileWriteSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourRoadRunner.h:146
void BrnDirector::Camera::BehaviourRoadRunner::BehaviourRoadRunner() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct BehaviourRoadRunner {
			// BrnBehaviourRoadRunner.h:296
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
			public:
				// BrnBehaviourRoadRunner.h:300
				void Construct();

			}

		}

	}

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// Declaration
		struct BehaviourRoadRunner {
			// BrnBehaviourRoadRunner.h:296
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
			public:
				// BrnBehaviourRoadRunner.h:300
				void Construct();

			}

		}

	}

}

