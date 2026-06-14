// BrnPerlinShakeController.h:33
struct BrnDirector::PerlinShakeController {
public:
	// BrnPerlinShakeController.h:44
	void Update(Camera *, float32_t, float32_t, float32_t, float32_t, float32_t, float32_t, float32_t);

	// BrnPerlinShakeController.h:66
	void GetMatrix(Matrix44Affine &, float32_t, float32_t, float32_t, float32_t, float32_t, float32_t, float32_t, float32_t, float32_t);

}

