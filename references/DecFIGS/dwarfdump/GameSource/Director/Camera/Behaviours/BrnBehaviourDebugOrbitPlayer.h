// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct BehaviourDebugOrbitPlayer {
			// BrnBehaviourDebugOrbitPlayer.h:122
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
			public:
				// BrnBehaviourDebugOrbitPlayer.h:126
				void Construct();

			}

		}

	}

}

// BrnBehaviourDebugOrbitPlayer.h:48
struct BrnDirector::Camera::BehaviourDebugOrbitPlayer : public BrnDirector::Camera::Behaviour {
private:
	// BrnBehaviourDebugOrbitPlayer.h:82
	float32_t mfFOV;

	// BrnBehaviourDebugOrbitPlayer.h:83
	float32_t mfDistance;

	// BrnBehaviourDebugOrbitPlayer.h:84
	float32_t mfYaw;

	// BrnBehaviourDebugOrbitPlayer.h:85
	float32_t mfPitch;

	// BrnBehaviourDebugOrbitPlayer.h:87
	float32_t mfSecondaryYaw;

	// BrnBehaviourDebugOrbitPlayer.h:88
	float32_t mfSecondaryPitch;

	// BrnBehaviourDebugOrbitPlayer.h:89
	float32_t mfSecondaryRoll;

	// BrnBehaviourDebugOrbitPlayer.h:116
	const BrnDirector::Camera::BehaviourDebugOrbitPlayer::Parameters * mpParameters;

public:
	void BehaviourDebugOrbitPlayer(const BrnDirector::Camera::BehaviourDebugOrbitPlayer &);

	void BehaviourDebugOrbitPlayer();

	// BrnBehaviourDebugOrbitPlayer.h:138
	void SetParameters(const BrnDirector::Camera::BehaviourDebugOrbitPlayer::Parameters *);

	// BrnBehaviourDebugOrbitPlayer.cpp:38
	virtual void Construct();

	// BrnBehaviourDebugOrbitPlayer.cpp:49
	virtual bool Prepare(const BehaviourSharedPrepareReleaseInfo &);

	// BrnBehaviourDebugOrbitPlayer.cpp:70
	virtual bool Update(Camera &, const BehaviourSharedInfo &);

	// BrnBehaviourDebugOrbitPlayer.cpp:97
	virtual void SetupTweaker(Tweaker &);

	// BrnBehaviourDebugOrbitPlayer.cpp:117
	virtual const char * GetName() const;

private:
	// BrnBehaviourDebugOrbitPlayer.cpp:132
	void Update(Camera &, Matrix44Affine, AABBox, float32_t, float32_t, float32_t);

	// BrnBehaviourDebugOrbitPlayer.cpp:177
	void LookAtFront(void *);

	// BrnBehaviourDebugOrbitPlayer.cpp:191
	void LookAtBack(void *);

	// BrnBehaviourDebugOrbitPlayer.cpp:206
	void LookAtLeftSide(void *);

	// BrnBehaviourDebugOrbitPlayer.cpp:220
	void LookAtRightSide(void *);

}

// BrnBehaviourDebugOrbitPlayer.h:48
void BrnDirector::Camera::BehaviourDebugOrbitPlayer::BehaviourDebugOrbitPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

