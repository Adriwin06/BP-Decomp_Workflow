// BrnPropPartEntityInstance.h:33
struct BrnWorld::PropPartEntityInstance {
	// BrnPropPartEntityInstance.h:51
	Matrix44Affine mWorldTransform;

	// BrnPropPartEntityInstance.h:52
	uint16_t muTypeId;

	// BrnPropPartEntityInstance.h:53
	uint16_t muPartId;

	// BrnPropPartEntityInstance.h:54
	uint16_t mu16ZoneIndex;

	// BrnPropPartEntityInstance.h:55
	uint8_t mu8PhysicsIndex;

	// BrnPropPartEntityInstance.h:56
	bool mbPhysical;

public:
	// BrnPropPartEntityInstance.h:37
	void Construct();

	// BrnPropPartEntityInstance.h:41
	bool Prepare();

	// BrnPropPartEntityInstance.h:45
	bool Release();

	// BrnPropPartEntityInstance.h:49
	void Destruct();

}

