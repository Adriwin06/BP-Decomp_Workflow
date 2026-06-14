// BrnKeyAnimShakeController.h:42
struct BrnDirector::KeyAnimShakeController {
private:
	// BrnKeyAnimShakeController.h:56
	CameraShake mProceduralShake;

	// BrnKeyAnimShakeController.h:57
	Parameters mProceduralShakeParams;

	// BrnKeyAnimShakeController.h:58
	ICETake mShakeTake;

	// BrnKeyAnimShakeController.h:59
	const BrnDirector::DirectorResourceManager * mpDirectorResourceManager;

	// BrnKeyAnimShakeController.h:60
	uint8_t mu8ActiveShake;

	// BrnKeyAnimShakeController.h:61
	Random mRandom;

	// BrnKeyAnimShakeController.h:62
	float32_t mfShotRunningTime;

public:
	// BrnKeyAnimShakeController.h:47
	void Construct(const BrnDirector::DirectorResourceManager *);

	// BrnKeyAnimShakeController.h:52
	void Update(float32_t, Camera *);

}

