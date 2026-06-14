// Wheel.h:30
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnPhysicalBodyPartPool.h:34
		float32_t KF_PART_EXTRA_GRAVITY;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnPhysicalBodyPartPool.h:34
		float32_t KF_PART_EXTRA_GRAVITY;

	}

}

// BrnPhysicalBodyPartPool.h:58
struct BrnPhysics::Deformation::PhysicalBodyPartPool {
private:
	// BrnPhysicalBodyPartPool.h:132
	PhysicalBodyPart[50] maParts;

	// BrnPhysicalBodyPartPool.h:133
	BitArray<50u> mUsedParts;

	// BrnPhysicalBodyPartPool.h:134
	int32_t miLastUpdatedBoundingBox;

	// BrnPhysicalBodyPartPool.h:135
	uint8_t mu8NumDetachedParts;

public:
	// BrnPhysicalBodyPartPool.h:62
	void Construct();

	// BrnPhysicalBodyPartPool.h:76
	PhysicalBodyPart * CreatePart(InputBuffer *, uint16_t, const BrnPhysics::Deformation::DeformableObject *, RigidBodyId, EntityId, int32_t, const IKBodyPart *, Matrix44Affine, Matrix44Affine, Vector3, Vector3);

	// BrnPhysicalBodyPartPool.h:82
	void RemovePart(InputBuffer *, InSceneUpdateInterface *, uint8_t);

	// BrnPhysicalBodyPartPool.h:85
	int32_t GetSize();

	// BrnPhysicalBodyPartPool.h:89
	const PhysicalBodyPart * GetPart(int16_t) const;

	// BrnPhysicalBodyPartPool.h:93
	PhysicalBodyPart * GetPart(int16_t);

	// BrnPhysicalBodyPartPool.h:98
	void UpdatePart(const OutUpdateRigidBody *, OutputBuffer::SceneInputInterface *);

	// BrnPhysicalBodyPartPool.h:102
	void UpdateABoundingBox(OutputBuffer::SceneInputInterface *);

	// BrnPhysicalBodyPartPool.h:106
	void AddPartsToScene(OutputBuffer::SceneInputInterface *);

	// BrnPhysicalBodyPartPool.h:111
	void UpdateRWBodies(InputBuffer *, VecFloat);

	// BrnPhysicalBodyPartPool.h:117
	void UpdateJoinedParts(const PotentialContactInterface *, ContactSpyData *, VecFloat);

	// BrnPhysicalBodyPartPool.h:120
	bool IsPartIndexUsed(int32_t);

	// BrnPhysicalBodyPartPool.h:126
	void OutputEvents(DeformationOutputInterfaceForEntityModules *, DeformationOutputInterface *) const;

}

