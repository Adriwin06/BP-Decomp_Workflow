// BrnDeformationInputInterface.h:52
struct BrnPhysics::Deformation::DeformationInputInterface {
	// BrnDeformationInputInterface.h:37
	typedef EventQueue<BrnPhysics::Deformation::AddDeformationModelEvent,20> AddDeformationModelEventQueue;

private:
	// BrnDeformationInputInterface.h:152
	DeformationInputInterface::AddDeformationModelEventQueue mAddDeformationModelQueue;

	// Unknown accessibility
	// BrnDeformationInputInterface.h:38
	typedef EventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent,20> RemoveDeformationModelEventQueue;

	// BrnDeformationInputInterface.h:153
	DeformationInputInterface::RemoveDeformationModelEventQueue mRemoveDeformationModelQueue;

	// Unknown accessibility
	// BrnDeformationInputInterface.h:39
	typedef EventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent,28> DeactivateDeformationModelEventQueue;

	// BrnDeformationInputInterface.h:154
	DeformationInputInterface::DeactivateDeformationModelEventQueue mDeactivateDeformationModelQueue;

	// BrnDeformationInputInterface.h:155
	VehicleInputInterface::ValidateRaceCarEventQueue mValidateDeformationModelEventQueue;

	// Unknown accessibility
	// BrnDeformationInputInterface.h:40
	typedef EventQueue<BrnPhysics::Deformation::SetModelCollisionEvent,28> SetModelCollisionEventQueue;

	// BrnDeformationInputInterface.h:156
	DeformationInputInterface::SetModelCollisionEventQueue mSetModelCollisionEventQueue;

	// Unknown accessibility
	// BrnDeformationInputInterface.h:41
	typedef EventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent,28> SetModelCullingGroupEventQueue;

	// BrnDeformationInputInterface.h:157
	DeformationInputInterface::SetModelCullingGroupEventQueue mSetModelCullingGroupEventQueue;

	// BrnDeformationInputInterface.h:158
	bool mbResetPlayerScratches;

public:
	// BrnDeformationInputInterface.h:57
	void Append(const DeformationInputInterface *);

	// BrnDeformationInputInterface.h:60
	void Construct();

	// BrnDeformationInputInterface.h:63
	void Clear();

	// BrnDeformationInputInterface.h:77
	uint32_t AddDeformationModel(ResourceHandle, RigidBodyId, EntityId, BrnPhysics::Vehicle::VehiclePhysics *, Vector3, Matrix44Affine, Vector3, Vector3, float32_t, BrnPhysics::Deformation::DeformationResetType, bool);

	// BrnDeformationInputInterface.h:82
	uint32_t RemoveDeformationModel(RigidBodyId);

	// BrnDeformationInputInterface.h:87
	void SetModelCollision(RigidBodyId, bool);

	// BrnDeformationInputInterface.h:92
	void SetModelCullingGroup(RigidBodyId, InEventAddForCollision::CullingGroup);

	// BrnDeformationInputInterface.h:96
	int32_t InvalidateDeformationModel(VolumeInstanceId);

	// BrnDeformationInputInterface.h:101
	int32_t ValidateDeformationModel(VolumeInstanceId, ResourceHandle);

	// BrnDeformationInputInterface.h:107
	uint32_t ActivateDeformationModel(RigidBodyId);

	// BrnDeformationInputInterface.h:113
	uint32_t DeactivateDeformationModel(RigidBodyId, float32_t, BrnPhysics::Deformation::DeformationResetType);

	// BrnDeformationInputInterface.h:119
	void SetDeformationModelCollision(RigidBodyId, bool);

	// BrnDeformationInputInterface.h:125
	void SetDeformationModelCullingGroup(RigidBodyId, InEventAddForCollision::CullingGroup);

	// BrnDeformationInputInterface.h:128
	const DeformationInputInterface::AddDeformationModelEventQueue * GetAddDeformationModelEventQueue() const;

	// BrnDeformationInputInterface.h:131
	const DeformationInputInterface::RemoveDeformationModelEventQueue * GetRemoveDeformationModelEventQueue() const;

	// BrnDeformationInputInterface.h:134
	const DeformationInputInterface::DeactivateDeformationModelEventQueue * GetDeactivateDeformationModelEventQueue() const;

	// BrnDeformationInputInterface.h:137
	const VehicleInputInterface::ValidateRaceCarEventQueue * GetValidateDeformationModelEvents() const;

	// BrnDeformationInputInterface.h:140
	const DeformationInputInterface::SetModelCollisionEventQueue * GetSetModelCollisionEvents() const;

	// BrnDeformationInputInterface.h:143
	const DeformationInputInterface::SetModelCullingGroupEventQueue * GetSetModelCullingGroupEvents() const;

	// BrnDeformationInputInterface.h:146
	void ResetPlayerScratches();

	// BrnDeformationInputInterface.h:149
	bool NeedToResetPlayerScratches() const;

}

// BrnDeformationInputInterface.h:52
struct BrnPhysics::Deformation::DeformationInputInterface {
	// BrnDeformationInputInterface.h:37
	typedef EventQueue<BrnPhysics::Deformation::AddDeformationModelEvent,20> AddDeformationModelEventQueue;

private:
	// BrnDeformationInputInterface.h:152
	DeformationInputInterface::AddDeformationModelEventQueue mAddDeformationModelQueue;

	// Unknown accessibility
	// BrnDeformationInputInterface.h:38
	typedef EventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent,20> RemoveDeformationModelEventQueue;

	// BrnDeformationInputInterface.h:153
	DeformationInputInterface::RemoveDeformationModelEventQueue mRemoveDeformationModelQueue;

	// Unknown accessibility
	// BrnDeformationInputInterface.h:39
	typedef EventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent,28> DeactivateDeformationModelEventQueue;

	// BrnDeformationInputInterface.h:154
	DeformationInputInterface::DeactivateDeformationModelEventQueue mDeactivateDeformationModelQueue;

	// BrnDeformationInputInterface.h:155
	VehicleInputInterface::ValidateRaceCarEventQueue mValidateDeformationModelEventQueue;

	// Unknown accessibility
	// BrnDeformationInputInterface.h:40
	typedef EventQueue<BrnPhysics::Deformation::SetModelCollisionEvent,28> SetModelCollisionEventQueue;

	// BrnDeformationInputInterface.h:156
	DeformationInputInterface::SetModelCollisionEventQueue mSetModelCollisionEventQueue;

	// Unknown accessibility
	// BrnDeformationInputInterface.h:41
	typedef EventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent,28> SetModelCullingGroupEventQueue;

	// BrnDeformationInputInterface.h:157
	DeformationInputInterface::SetModelCullingGroupEventQueue mSetModelCullingGroupEventQueue;

	// BrnDeformationInputInterface.h:158
	bool mbResetPlayerScratches;

public:
	// BrnDeformationInputInterface.h:57
	void Append(const DeformationInputInterface *);

	// BrnDeformationInputInterface.h:60
	void Construct();

	// BrnDeformationInputInterface.h:63
	void Clear();

	// BrnDeformationInputInterface.h:77
	uint32_t AddDeformationModel(ResourceHandle, RigidBodyId, EntityId, BrnPhysics::Vehicle::VehiclePhysics *, Vector3, Matrix44Affine, Vector3, Vector3, float32_t, BrnPhysics::Deformation::DeformationResetType, bool);

	// BrnDeformationInputInterface.h:82
	uint32_t RemoveDeformationModel(RigidBodyId);

	// BrnDeformationInputInterface.h:87
	void SetModelCollision(RigidBodyId, bool);

	// BrnDeformationInputInterface.h:92
	void SetModelCullingGroup(RigidBodyId, SetRaceCarCullingGroupEvent::CullingGroup);

	// BrnDeformationInputInterface.h:96
	int32_t InvalidateDeformationModel(VolumeInstanceId);

	// BrnDeformationInputInterface.h:101
	int32_t ValidateDeformationModel(VolumeInstanceId, ResourceHandle);

	// BrnDeformationInputInterface.h:107
	uint32_t ActivateDeformationModel(RigidBodyId);

	// BrnDeformationInputInterface.h:113
	uint32_t DeactivateDeformationModel(RigidBodyId, float32_t, BrnPhysics::Deformation::DeformationResetType);

	// BrnDeformationInputInterface.h:119
	void SetDeformationModelCollision(RigidBodyId, bool);

	// BrnDeformationInputInterface.h:125
	void SetDeformationModelCullingGroup(RigidBodyId, SetRaceCarCullingGroupEvent::CullingGroup);

	// BrnDeformationInputInterface.h:128
	const DeformationInputInterface::AddDeformationModelEventQueue * GetAddDeformationModelEventQueue() const;

	// BrnDeformationInputInterface.h:131
	const DeformationInputInterface::RemoveDeformationModelEventQueue * GetRemoveDeformationModelEventQueue() const;

	// BrnDeformationInputInterface.h:134
	const DeformationInputInterface::DeactivateDeformationModelEventQueue * GetDeactivateDeformationModelEventQueue() const;

	// BrnDeformationInputInterface.h:137
	const VehicleInputInterface::ValidateRaceCarEventQueue * GetValidateDeformationModelEvents() const;

	// BrnDeformationInputInterface.h:140
	const DeformationInputInterface::SetModelCollisionEventQueue * GetSetModelCollisionEvents() const;

	// BrnDeformationInputInterface.h:143
	const DeformationInputInterface::SetModelCullingGroupEventQueue * GetSetModelCullingGroupEvents() const;

	// BrnDeformationInputInterface.h:146
	void ResetPlayerScratches();

	// BrnDeformationInputInterface.h:149
	bool NeedToResetPlayerScratches() const;

}

