// BrnShotController.h:48
struct BrnDirector::ShotContext {
	// BrnShotController.h:49
	const AllVehicleData * mpAllVehicleData;

	// BrnShotController.h:50
	const ICE::CameraSpaceHandler * mpCameraSpaceHandler;

	// BrnShotController.h:51
	const Timestep * mpTimestep;

}

// BrnShotController.h:62
struct BrnDirector::ShotController {
	int (*)(...) * _vptr.ShotController;

public:
	void ShotController(const ShotController &);

	void ShotController();

	// BrnShotController.h:76
	virtual void Update(const ShotContext &, Camera *);

}

// BrnShotController.h:62
void BrnDirector::ShotController::ShotController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

