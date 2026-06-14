// BrnPhysicsPropPartTypeData.h:52
struct BrnPhysics::Props::PropPartTypeData {
	// BrnPhysicsPropPartTypeData.h:82
	Vector3 mOffset;

	// BrnPhysicsPropPartTypeData.h:83
	Vector3 mInertia;

	// BrnPhysicsPropPartTypeData.h:84
	float32_t mfMass;

	// BrnPhysicsPropPartTypeData.h:85
	VolRef::Volume * maCollisionVolumes;

	// BrnPhysicsPropPartTypeData.h:86
	float32_t mfSphereRadius;

	// BrnPhysicsPropPartTypeData.h:87
	uint8_t muNumberOfVolumes;

public:
	// BrnPhysicsPropPartTypeData.h:57
	void Construct();

	// BrnPhysicsPropPartTypeData.h:61
	bool Prepare();

	// BrnPhysicsPropPartTypeData.h:65
	bool Release();

	// BrnPhysicsPropPartTypeData.h:69
	void Destruct();

	// BrnPhysicsPropPartTypeData.h:72
	void FixUp(const Resource &);

	// BrnPhysicsPropPartTypeData.h:75
	void FixDown(const Resource &);

	// BrnPhysicsPropPartTypeData.h:79
	void ReFix(const void *, void *);

}

