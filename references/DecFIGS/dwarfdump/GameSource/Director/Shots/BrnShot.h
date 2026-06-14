// BrnShot.h:58
struct BrnDirector::Shot {
	// BrnShot.h:72
	BrnDirector::ShotController *[5] mapShotControllers;

public:
	// BrnShot.h:62
	void Construct();

	// BrnShot.h:65
	bool Prepare();

	// BrnShot.h:70
	void ExecuteShot(const ShotContext &, Camera *);

}

// BrnShot.h:43
extern const int32_t KI_MAX_CONTROLLERS = 5;

