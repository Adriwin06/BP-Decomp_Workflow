// BrnDetachedWheelManager.h:49
struct BrnPhysics::Deformation::DetachedWheelManager {
private:
	// BrnDetachedWheelManager.h:126
	PhysicalWheel[20] maWheels;

	// BrnDetachedWheelManager.h:127
	BrnWorld::EEntityTypeID[20] maWheelOwnerType;

	// BrnDetachedWheelManager.h:128
	BitArray<20u> mUsedWheels;

public:
	// BrnDetachedWheelManager.h:53
	void Construct();

	// BrnDetachedWheelManager.h:56
	void Destruct();

	// BrnDetachedWheelManager.h:59
	bool Prepare();

	// BrnDetachedWheelManager.h:62
	bool Release();

	// BrnDetachedWheelManager.h:68
	void RemoveVehicleWheels(InputBuffer *, InSceneUpdateInterface *, RigidBodyId);

	// BrnDetachedWheelManager.h:81
	void DetachWheel(InputBuffer *, RigidBodyId, uint16_t, int32_t, float32_t, float32_t, Matrix44Affine, Matrix44Affine, Vector3, Vector3);

	// BrnDetachedWheelManager.h:86
	void Update(InputBuffer *, VecFloat);

	// BrnDetachedWheelManager.h:91
	void UpdatePostPhysics(const OutputBuffer *, OutputBuffer::SceneInputInterface *);

	// BrnDetachedWheelManager.h:96
	void UpdateTriangleCache(InSceneUpdateInterface *);

	// BrnDetachedWheelManager.h:100
	const PhysicalWheel * GetWheel(EntityId) const;

	// BrnDetachedWheelManager.h:105
	const PhysicalWheel * GetWheel(EntityId, int32_t) const;

	// BrnDetachedWheelManager.h:108
	bool IsSlotUsed(uint16_t);

	// BrnDetachedWheelManager.h:112
	const PhysicalWheel * GetWheel(uint16_t);

private:
	// BrnDetachedWheelManager.h:124
	void RemoveWheel(int32_t, InputBuffer *, InSceneUpdateInterface *);

}

// BrnDetachedWheelManager.h:49
struct BrnPhysics::Deformation::DetachedWheelManager {
private:
	// BrnDetachedWheelManager.h:126
	PhysicalWheel[20] maWheels;

	// BrnDetachedWheelManager.h:127
	BrnWorld::EEntityTypeID[20] maWheelOwnerType;

	// BrnDetachedWheelManager.h:128
	BitArray<20u> mUsedWheels;

public:
	// BrnDetachedWheelManager.h:53
	void Construct();

	// BrnDetachedWheelManager.h:56
	void Destruct();

	// BrnDetachedWheelManager.h:59
	bool Prepare();

	// BrnDetachedWheelManager.h:62
	bool Release();

	// BrnDetachedWheelManager.h:68
	void RemoveVehicleWheels(InputBuffer *, InSceneUpdateInterface *, RigidBodyId);

	// BrnDetachedWheelManager.h:81
	// Declaration
	void DetachWheel(InputBuffer *, RigidBodyId, uint16_t, int32_t, float32_t, float32_t, Matrix44Affine, Matrix44Affine, Vector3, Vector3) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDetachedWheelManager.cpp:121
		using namespace CgsDev::Message;

	}

	// BrnDetachedWheelManager.h:86
	void Update(InputBuffer *, VecFloat);

	// BrnDetachedWheelManager.h:91
	void UpdatePostPhysics(const OutputBuffer *, OutputBuffer::SceneInputInterface *);

	// BrnDetachedWheelManager.h:96
	void UpdateTriangleCache(InSceneUpdateInterface *);

	// BrnDetachedWheelManager.h:100
	const PhysicalWheel * GetWheel(EntityId) const;

	// BrnDetachedWheelManager.h:105
	const PhysicalWheel * GetWheel(EntityId, int32_t) const;

	// BrnDetachedWheelManager.h:108
	bool IsSlotUsed(uint16_t);

	// BrnDetachedWheelManager.h:112
	const PhysicalWheel * GetWheel(uint16_t);

private:
	// BrnDetachedWheelManager.h:124
	void RemoveWheel(int32_t, InputBuffer *, InSceneUpdateInterface *);

}

