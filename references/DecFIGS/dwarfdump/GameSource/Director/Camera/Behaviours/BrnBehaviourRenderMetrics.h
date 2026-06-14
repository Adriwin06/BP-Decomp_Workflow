// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct BehaviourRenderMetrics {
			// BrnBehaviourRenderMetrics.h:95
			enum ECameraState {
				E_WAITING_TO_START = 0,
				E_START = 1,
				E_WAIT = 2,
				E_RECORD_METRICS = 3,
				E_FINISHED = 4,
			}

			// BrnBehaviourRenderMetrics.h:149
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
			public:
				// BrnBehaviourRenderMetrics.h:153
				void Construct();

			}

		}

	}

}

// BrnBehaviourRenderMetrics.h:54
struct BrnDirector::Camera::BehaviourRenderMetrics : public BrnDirector::Camera::Behaviour {
private:
	// BrnBehaviourRenderMetrics.h:121
	LineTestNearestPostBox mLineTest;

	// BrnBehaviourRenderMetrics.h:122
	Vector3 mCamPosition;

	// BrnBehaviourRenderMetrics.h:123
	Vector3 mGroundNormal;

	// BrnBehaviourRenderMetrics.h:124
	Vector3 mIdlePosition;

	// BrnBehaviourRenderMetrics.h:125
	Vector3 mIdleDirection;

	// BrnBehaviourRenderMetrics.h:126
	bool mbIdleCamOn;

	// BrnBehaviourRenderMetrics.h:127
	float32_t mfYOffset;

	// BrnBehaviourRenderMetrics.h:129
	const BrnDirector::Camera::BehaviourRenderMetrics::Parameters * mpParameters;

	// BrnBehaviourRenderMetrics.h:130
	BrnDirector::Camera::BehaviourRenderMetrics::ECameraState meCameraState;

	// BrnBehaviourRenderMetrics.h:131
	BrnDirector::Camera::BehaviourRenderMetrics::ECameraState meAfterWaitState;

	// BrnBehaviourRenderMetrics.h:132
	float32_t mfTimeWaited;

	// BrnBehaviourRenderMetrics.h:133
	float32_t mfTimeToWait;

	// BrnBehaviourRenderMetrics.h:134
	uint8_t muAnglesChecked;

	// BrnBehaviourRenderMetrics.h:135
	bool mbWaitingForLineTest;

	// BrnBehaviourRenderMetrics.h:136
	bool mbTargetReady;

	// BrnBehaviourRenderMetrics.h:138
	extern const uint8_t KU_NUM_ANGLES = 8;

	// BrnBehaviourRenderMetrics.cpp:20
	extern Vector3[8] saAngles;

	// BrnBehaviourRenderMetrics.cpp:32
	extern const float32_t KF_ROTATION_WAIT;

	// BrnBehaviourRenderMetrics.cpp:33
	extern const float32_t KF_MOVE_WAIT;

	// BrnBehaviourRenderMetrics.h:143
	Vector3 mInitialPosition;

public:
	void BehaviourRenderMetrics(const BrnDirector::Camera::BehaviourRenderMetrics &);

	void BehaviourRenderMetrics();

	// BrnBehaviourRenderMetrics.h:165
	void SetParameters(const BrnDirector::Camera::BehaviourRenderMetrics::Parameters *);

	// BrnBehaviourRenderMetrics.cpp:61
	virtual void Construct();

	// BrnBehaviourRenderMetrics.cpp:78
	virtual bool Prepare(const BehaviourSharedPrepareReleaseInfo &);

	// BrnBehaviourRenderMetrics.cpp:301
	virtual bool Update(Camera &, const BehaviourSharedInfo &);

	// BrnBehaviourRenderMetrics.cpp:419
	virtual const BrnDirector::Camera::Behaviour::Parameters * GetParameters() const;

	// BrnBehaviourRenderMetrics.cpp:432
	virtual void SetParameters(const BrnDirector::Camera::Behaviour::Parameters *);

	// BrnBehaviourRenderMetrics.cpp:447
	virtual void SetupTweaker(Tweaker &);

	// BrnBehaviourRenderMetrics.cpp:461
	virtual const char * GetName() const;

private:
	// BrnBehaviourRenderMetrics.cpp:204
	void SendReadyMessage(const BehaviourSharedInfo &);

	// BrnBehaviourRenderMetrics.cpp:182
	void RequestPosition(const BehaviourSharedInfo &, Vector3);

	// BrnBehaviourRenderMetrics.cpp:92
	void SetToWait(float32_t, BrnDirector::Camera::BehaviourRenderMetrics::ECameraState);

	// BrnBehaviourRenderMetrics.cpp:157
	// Declaration
	void SetToGetMetrics(Vector3) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnBehaviourRenderMetrics.cpp:167
		using namespace CgsDev::Message;

	}

}

// BrnBehaviourRenderMetrics.h:54
void BrnDirector::Camera::BehaviourRenderMetrics::BehaviourRenderMetrics() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBehaviourRenderMetrics.h:138
extern const uint8_t KU_NUM_ANGLES = 8;

// BrnBehaviourRenderMetrics.h:140
extern const float KF_ROTATION_WAIT;

// BrnBehaviourRenderMetrics.h:141
extern const float KF_MOVE_WAIT;

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// Declaration
		struct BehaviourRenderMetrics {
		private:
			// BrnBehaviourRenderMetrics.h:138
			extern const uint8_t KU_NUM_ANGLES = 8;

			// BrnBehaviourRenderMetrics.h:140
			extern const float KF_ROTATION_WAIT;

			// BrnBehaviourRenderMetrics.h:141
			extern const float KF_MOVE_WAIT;

		}

	}

}

