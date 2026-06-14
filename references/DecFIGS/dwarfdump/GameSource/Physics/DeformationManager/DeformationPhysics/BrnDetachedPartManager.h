// BrnDetachedPartManager.h:47
struct BrnPhysics::Deformation::DetachedPartManager {
private:
	// BrnDetachedPartManager.h:136
	PhysicalBodyPartPool mPartPool;

public:
	// BrnDetachedPartManager.h:51
	void Construct();

	// BrnDetachedPartManager.h:54
	void Destruct();

	// BrnDetachedPartManager.h:57
	bool Prepare();

	// BrnDetachedPartManager.h:60
	bool Release();

	// BrnDetachedPartManager.h:75
	PhysicalBodyPart * MakePartPhysical(InputBuffer *, uint16_t, const BrnPhysics::Deformation::DeformableObject *, RigidBodyId, EntityId, int32_t, const IKBodyPart *, Matrix44Affine, Matrix44Affine, Vector3, Vector3);

	// BrnDetachedPartManager.h:81
	void RemovePart(InputBuffer *, InSceneUpdateInterface *, uint8_t);

	// BrnDetachedPartManager.h:86
	void OutputEvents(DeformationOutputInterfaceForEntityModules *, DeformationOutputInterface *) const;

	// BrnDetachedPartManager.h:91
	void Update(InputBuffer *, VecFloat);

	// BrnDetachedPartManager.h:98
	void UpdatePostPhysics(const OutputBuffer *, OutputBuffer::SceneInputInterface *, ContactSpyData *, const PotentialContactInterface *);

	// BrnDetachedPartManager.h:103
	void UpdateTriangleCache(InSceneUpdateInterface *);

	// BrnDetachedPartManager.h:106
	void AddPartsToScene(OutputBuffer::SceneInputInterface *);

	// BrnDetachedPartManager.h:110
	const PhysicalBodyPart * GetPartFromIndex(uint16_t) const;

	// BrnDetachedPartManager.h:114
	PhysicalBodyPart * GetPartFromIndex(uint16_t);

	// BrnDetachedPartManager.h:117
	bool IsPartIndexUsed(int32_t);

	// BrnDetachedPartManager.h:124
	bool TestJointForBreaking(int32_t, InputBuffer *, OutputBuffer *);

	// BrnDetachedPartManager.h:129
	void DebugCheckJointPartConsistancy();

private:
	// BrnDetachedPartManager.h:139
	float32_t CalculateInterest(const PhysicalBodyPart *);

}

