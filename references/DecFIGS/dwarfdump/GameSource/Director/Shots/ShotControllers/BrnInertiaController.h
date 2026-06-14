// BrnInertiaController.h:41
struct BrnDirector::InertiaController {
private:
	// BrnInertiaController.h:54
	Matrix44Affine mPreviousActualXform;

	// BrnInertiaController.h:55
	int32_t miFrame;

public:
	// BrnInertiaController.h:45
	void Construct();

	// BrnInertiaController.h:50
	void Update(Camera *, float32_t);

}

