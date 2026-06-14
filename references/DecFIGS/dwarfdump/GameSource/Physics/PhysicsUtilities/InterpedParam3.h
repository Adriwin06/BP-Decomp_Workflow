// InterpedParam3.h:38
struct BrnPhysics::InterpedParam3 {
private:
	// InterpedParam3.h:65
	Vector3 mvParams;

public:
	// InterpedParam3.h:41
	void Construct();

	// InterpedParam3.h:47
	void Prepare(float32_t, float32_t, float32_t);

	// InterpedParam3.h:50
	void Release();

	// InterpedParam3.h:53
	void Destruct();

	// InterpedParam3.h:57
	VecFloat GetInterped(VecFloat) const;

	// InterpedParam3.h:60
	VecFloat GetParam(int32_t) const;

}

