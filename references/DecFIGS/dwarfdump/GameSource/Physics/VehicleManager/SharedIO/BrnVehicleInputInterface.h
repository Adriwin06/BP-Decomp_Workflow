// BrnVehicleInputInterface.h:51
struct BrnPhysics::Vehicle::VehicleInputInterface {
	// BrnPhysicsToSceneQueueIO.h:45
	typedef EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000> InLineTestResultQueue;

private:
	// BrnVehicleInputInterface.h:261
	VehicleInputInterface::InLineTestResultQueue mLineTestResultsQueue;

	// Unknown accessibility
	// BrnPhysicsToSceneQueueIO.h:48
	typedef TriangleCacheInterface InTriangleCacheInterface;

	// BrnVehicleInputInterface.h:262
	VehicleInputInterface::InTriangleCacheInterface mTriangleCacheInterface;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:38
	typedef EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8> CreateRaceCarEventQueue;

	// BrnVehicleInputInterface.h:265
	VehicleInputInterface::CreateRaceCarEventQueue mCreateRaceCarEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:39
	typedef EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8> RemoveRaceCarEventQueue;

	// BrnVehicleInputInterface.h:266
	VehicleInputInterface::RemoveRaceCarEventQueue mRemoveRaceCarEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:52
	typedef EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16> ResetRaceCarEventQueue;

	// BrnVehicleInputInterface.h:267
	VehicleInputInterface::ResetRaceCarEventQueue mResetRaceCarEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:41
	typedef EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8> ValidateRaceCarEventQueue;

	// BrnVehicleInputInterface.h:268
	VehicleInputInterface::ValidateRaceCarEventQueue mValidateRaceCarEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:42
	typedef EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10> SetRaceCarCollisionEventQueue;

	// BrnVehicleInputInterface.h:269
	VehicleInputInterface::SetRaceCarCollisionEventQueue mSetRaceCarCollisionEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:43
	typedef EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10> SetRaceCarCullingGroupEventQueue;

	// BrnVehicleInputInterface.h:270
	VehicleInputInterface::SetRaceCarCullingGroupEventQueue mSetRaceCarCullingGroupEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:50
	typedef EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64> NetworkCarsAddRemoveForCollisionQueue;

	// BrnVehicleInputInterface.h:271
	VehicleInputInterface::NetworkCarsAddRemoveForCollisionQueue mNetworkCarsAddedRemovedForCollisionQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:44
	typedef EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25> CreateTrafficEventQueue;

	// BrnVehicleInputInterface.h:274
	VehicleInputInterface::CreateTrafficEventQueue mCreateTrafficEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:46
	typedef EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10> CreateArticulatedTrafficEventQueue;

	// BrnVehicleInputInterface.h:275
	VehicleInputInterface::CreateArticulatedTrafficEventQueue mCreateArticulatedTrafficEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:48
	typedef EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25> SetTrafficCrashingEventQueue;

	// BrnVehicleInputInterface.h:276
	VehicleInputInterface::SetTrafficCrashingEventQueue mSetTrafficCrashingEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:47
	typedef EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25> RemoveTrafficEventQueue;

	// BrnVehicleInputInterface.h:277
	VehicleInputInterface::RemoveTrafficEventQueue mRemoveCrashedTrafficEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:40
	typedef EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20> UpdateNetworkTrafficEventQueue;

	// BrnVehicleInputInterface.h:278
	VehicleInputInterface::UpdateNetworkTrafficEventQueue mUpdateNetworkTrafficEventQueue;

	// Unknown accessibility
	// BrnVehicleEvents.h:575
	typedef EventQueue<BrnPhysics::Vehicle::ImpactEvent,16> ImpactEventQueue;

	// BrnVehicleInputInterface.h:280
	VehicleInputInterface::ImpactEventQueue mImpactEventQueue;

	// Unknown accessibility
	// BrnVehicleInputInterface.h:38
	typedef BitArray<8u> RaceCarBitArray;

	// BrnVehicleInputInterface.h:281
	VehicleInputInterface::RaceCarBitArray mRaceCarsAddedForCollision;

public:
	// BrnVehicleInputInterface.h:55
	void Append(const VehicleInputInterface *);

	// BrnVehicleInputInterface.h:58
	void Construct();

	// BrnVehicleInputInterface.h:73
	int32_t CreateRaceCar(VolumeInstanceId, Matrix44Affine, Vector3, Vector3, Attribute::Key, ResourceHandle, ResourceHandle, BrnWorld::ERaceCarType, float32_t, BrnPhysics::Deformation::DeformationResetType, bool, int32_t);

	// BrnVehicleInputInterface.h:77
	int32_t RemoveRaceCar(VolumeInstanceId);

	// BrnVehicleInputInterface.h:81
	int32_t InvalidateRaceCar(VolumeInstanceId);

	// BrnVehicleInputInterface.h:87
	int32_t ValidateRaceCar(VolumeInstanceId, ResourceHandle, ResourceHandle);

	// BrnVehicleInputInterface.h:91
	bool IsRoomForPhysicalTraffic() const;

	// BrnVehicleInputInterface.h:95
	bool IsRoomForArticulatedTraffic() const;

	// BrnVehicleInputInterface.h:109
	void CreatePhysicalTraffic(VolumeInstanceId, EntityId, Matrix44Affine, Vector3, Vector3, Attribute::Key, ResourceHandle, BrnPhysics::Vehicle::ETrafficType, bool, CgsID);

	// BrnVehicleInputInterface.h:128
	void CreateArticulatedTraffic(VolumeInstanceId, Matrix44Affine, Vector3, Vector3, Attribute::Key, ResourceHandle, CgsID, VolumeInstanceId, Matrix44Affine, Vector3, Vector3, Attribute::Key, ResourceHandle, CgsID, BrnPhysics::Vehicle::ETrafficType);

	// BrnVehicleInputInterface.h:133
	void SetTrafficCrashing(EntityId);

	// BrnVehicleInputInterface.h:138
	void SetTrafficNotCrashing(EntityId);

	// BrnVehicleInputInterface.h:143
	void RemovePhysicalTraffic(VolumeInstanceId);

	// BrnVehicleInputInterface.h:148
	int32_t UpdateNetworkTraffic(VolumeInstanceId, Matrix44Affine);

	// BrnVehicleInputInterface.h:161
	void ResetRaceCar(uint32_t, Matrix44Affine, Vector3, Vector3, uint8_t, bool, bool, float32_t, bool, BrnPhysics::Deformation::DeformationResetType);

	// BrnVehicleInputInterface.h:166
	void SetRaceCarCollision(EntityId, bool);

	// BrnVehicleInputInterface.h:171
	void SetRaceCarCullingGroup(EntityId, InEventAddForCollision::CullingGroup);

	// BrnVehicleInputInterface.h:175
	void AppendLineTestResults(const VehicleInputInterface::InLineTestResultQueue *);

	// BrnVehicleInputInterface.h:179
	void AppendTriangleCacheInterface(const VehicleInputInterface::InTriangleCacheInterface *);

	// BrnVehicleInputInterface.h:183
	void AddLineTestResult(OutEventLineTestNearestResult);

	// BrnVehicleInputInterface.h:187
	void AddImpactEvent(ImpactEvent *);

	// BrnVehicleInputInterface.h:192
	void RecordNetworkCarAddedOrRemovedForCollision(const VehicleAddedForCollisionEvent &);

	// BrnVehicleInputInterface.h:197
	void SetRaceCarAddedForCollision(EActiveRaceCarIndex);

	// BrnVehicleInputInterface.h:200
	const VehicleInputInterface::InLineTestResultQueue * GetLineTestResults() const;

	// BrnVehicleInputInterface.h:203
	const VehicleInputInterface::CreateRaceCarEventQueue * GetCreateRaceCarEvents() const;

	// BrnVehicleInputInterface.h:206
	const VehicleInputInterface::RemoveRaceCarEventQueue * GetRemoveRaceCarEvents() const;

	// BrnVehicleInputInterface.h:209
	const VehicleInputInterface::SetRaceCarCollisionEventQueue * GetSetRaceCarCollisionEvents() const;

	// BrnVehicleInputInterface.h:212
	const VehicleInputInterface::SetRaceCarCullingGroupEventQueue * GetSetRaceCarCullingGroupEvents() const;

	// BrnVehicleInputInterface.h:215
	const VehicleInputInterface::RemoveTrafficEventQueue * GetRemoveTrafficEvents() const;

	// BrnVehicleInputInterface.h:218
	const VehicleInputInterface::SetTrafficCrashingEventQueue * GetSetTrafficCrashingEvents() const;

	// BrnVehicleInputInterface.h:221
	const VehicleInputInterface::CreateTrafficEventQueue * GetCreateTrafficBodyEvents() const;

	// BrnVehicleInputInterface.h:224
	const VehicleInputInterface::UpdateNetworkTrafficEventQueue * GetUpdateNetworkTrafficEvents() const;

	// BrnVehicleInputInterface.h:227
	const VehicleInputInterface::ResetRaceCarEventQueue * GetResetRaceCarEvents() const;

	// BrnVehicleInputInterface.h:230
	const VehicleInputInterface::ImpactEventQueue * GetImpactEventQueue() const;

	// BrnVehicleInputInterface.h:233
	const VehicleInputInterface::ValidateRaceCarEventQueue * GetValidateRaceCarEvents() const;

	// BrnVehicleInputInterface.h:236
	const VehicleInputInterface::InTriangleCacheInterface * GetTriangleCacheInterface() const;

	// BrnVehicleInputInterface.h:239
	const VehicleInputInterface::CreateArticulatedTrafficEventQueue * GetCreateArticulatedTrafficQueue() const;

	// BrnVehicleInputInterface.h:242
	const VehicleInputInterface::NetworkCarsAddRemoveForCollisionQueue * GetNetworkCarsAddRemoveForCollisionQueue() const;

	// BrnVehicleInputInterface.h:245
	const VehicleInputInterface::RaceCarBitArray * GetRaceCarsAddedForCollision() const;

	// BrnVehicleInputInterface.h:248
	void ClearImpactEventQueue();

	// BrnVehicleInputInterface.h:252
	void SetRaceCarsAddedForCollision(const VehicleInputInterface::RaceCarBitArray *);

}

// BrnVehicleInputInterface.h:51
struct BrnPhysics::Vehicle::VehicleInputInterface {
	// BrnPhysicsToSceneQueueIO.h:45
	typedef EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000> InLineTestResultQueue;

private:
	// BrnVehicleInputInterface.h:261
	VehicleInputInterface::InLineTestResultQueue mLineTestResultsQueue;

	// Unknown accessibility
	// BrnPhysicsToSceneQueueIO.h:48
	typedef TriangleCacheInterface InTriangleCacheInterface;

	// BrnVehicleInputInterface.h:262
	VehicleInputInterface::InTriangleCacheInterface mTriangleCacheInterface;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:38
	typedef EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8> CreateRaceCarEventQueue;

	// BrnVehicleInputInterface.h:265
	VehicleInputInterface::CreateRaceCarEventQueue mCreateRaceCarEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:39
	typedef EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8> RemoveRaceCarEventQueue;

	// BrnVehicleInputInterface.h:266
	VehicleInputInterface::RemoveRaceCarEventQueue mRemoveRaceCarEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:52
	typedef EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16> ResetRaceCarEventQueue;

	// BrnVehicleInputInterface.h:267
	VehicleInputInterface::ResetRaceCarEventQueue mResetRaceCarEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:41
	typedef EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8> ValidateRaceCarEventQueue;

	// BrnVehicleInputInterface.h:268
	VehicleInputInterface::ValidateRaceCarEventQueue mValidateRaceCarEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:42
	typedef EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10> SetRaceCarCollisionEventQueue;

	// BrnVehicleInputInterface.h:269
	VehicleInputInterface::SetRaceCarCollisionEventQueue mSetRaceCarCollisionEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:43
	typedef EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10> SetRaceCarCullingGroupEventQueue;

	// BrnVehicleInputInterface.h:270
	VehicleInputInterface::SetRaceCarCullingGroupEventQueue mSetRaceCarCullingGroupEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:50
	typedef EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64> NetworkCarsAddRemoveForCollisionQueue;

	// BrnVehicleInputInterface.h:271
	VehicleInputInterface::NetworkCarsAddRemoveForCollisionQueue mNetworkCarsAddedRemovedForCollisionQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:44
	typedef EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25> CreateTrafficEventQueue;

	// BrnVehicleInputInterface.h:274
	VehicleInputInterface::CreateTrafficEventQueue mCreateTrafficEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:46
	typedef EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10> CreateArticulatedTrafficEventQueue;

	// BrnVehicleInputInterface.h:275
	VehicleInputInterface::CreateArticulatedTrafficEventQueue mCreateArticulatedTrafficEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:48
	typedef EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25> SetTrafficCrashingEventQueue;

	// BrnVehicleInputInterface.h:276
	VehicleInputInterface::SetTrafficCrashingEventQueue mSetTrafficCrashingEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:47
	typedef EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25> RemoveTrafficEventQueue;

	// BrnVehicleInputInterface.h:277
	VehicleInputInterface::RemoveTrafficEventQueue mRemoveCrashedTrafficEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:40
	typedef EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20> UpdateNetworkTrafficEventQueue;

	// BrnVehicleInputInterface.h:278
	VehicleInputInterface::UpdateNetworkTrafficEventQueue mUpdateNetworkTrafficEventQueue;

	// Unknown accessibility
	// BrnVehicleEvents.h:575
	typedef EventQueue<BrnPhysics::Vehicle::ImpactEvent,16> ImpactEventQueue;

	// BrnVehicleInputInterface.h:280
	VehicleInputInterface::ImpactEventQueue mImpactEventQueue;

	// Unknown accessibility
	// BrnVehicleInputInterface.h:38
	typedef BitArray<8u> RaceCarBitArray;

	// BrnVehicleInputInterface.h:281
	VehicleInputInterface::RaceCarBitArray mRaceCarsAddedForCollision;

public:
	// BrnVehicleInputInterface.h:55
	void Append(const VehicleInputInterface *);

	// BrnVehicleInputInterface.h:58
	void Construct();

	// BrnVehicleInputInterface.h:73
	int32_t CreateRaceCar(VolumeInstanceId, Matrix44Affine, Vector3, Vector3, Attribute::Key, ResourceHandle, ResourceHandle, BrnWorld::ERaceCarType, float32_t, BrnPhysics::Deformation::DeformationResetType, bool, int32_t);

	// BrnVehicleInputInterface.h:77
	int32_t RemoveRaceCar(VolumeInstanceId);

	// BrnVehicleInputInterface.h:81
	int32_t InvalidateRaceCar(VolumeInstanceId);

	// BrnVehicleInputInterface.h:87
	int32_t ValidateRaceCar(VolumeInstanceId, ResourceHandle, ResourceHandle);

	// BrnVehicleInputInterface.h:91
	bool IsRoomForPhysicalTraffic() const;

	// BrnVehicleInputInterface.h:95
	bool IsRoomForArticulatedTraffic() const;

	// BrnVehicleInputInterface.h:109
	void CreatePhysicalTraffic(VolumeInstanceId, EntityId, Matrix44Affine, Vector3, Vector3, Attribute::Key, ResourceHandle, BrnPhysics::Vehicle::ETrafficType, bool, CgsID);

	// BrnVehicleInputInterface.h:128
	void CreateArticulatedTraffic(VolumeInstanceId, Matrix44Affine, Vector3, Vector3, Attribute::Key, ResourceHandle, CgsID, VolumeInstanceId, Matrix44Affine, Vector3, Vector3, Attribute::Key, ResourceHandle, CgsID, BrnPhysics::Vehicle::ETrafficType);

	// BrnVehicleInputInterface.h:133
	void SetTrafficCrashing(EntityId);

	// BrnVehicleInputInterface.h:138
	void SetTrafficNotCrashing(EntityId);

	// BrnVehicleInputInterface.h:143
	void RemovePhysicalTraffic(VolumeInstanceId);

	// BrnVehicleInputInterface.h:148
	int32_t UpdateNetworkTraffic(VolumeInstanceId, Matrix44Affine);

	// BrnVehicleInputInterface.h:161
	void ResetRaceCar(uint32_t, Matrix44Affine, Vector3, Vector3, uint8_t, bool, bool, float32_t, bool, BrnPhysics::Deformation::DeformationResetType);

	// BrnVehicleInputInterface.h:166
	void SetRaceCarCollision(EntityId, bool);

	// BrnVehicleInputInterface.h:171
	void SetRaceCarCullingGroup(EntityId, SetRaceCarCullingGroupEvent::CullingGroup);

	// BrnVehicleInputInterface.h:175
	void AppendLineTestResults(const VehicleInputInterface::InLineTestResultQueue *);

	// BrnVehicleInputInterface.h:179
	void AppendTriangleCacheInterface(const VehicleInputInterface::InTriangleCacheInterface *);

	// BrnVehicleInputInterface.h:183
	void AddLineTestResult(OutEventLineTestNearestResult);

	// BrnVehicleInputInterface.h:187
	void AddImpactEvent(ImpactEvent *);

	// BrnVehicleInputInterface.h:192
	void RecordNetworkCarAddedOrRemovedForCollision(const VehicleAddedForCollisionEvent &);

	// BrnVehicleInputInterface.h:197
	void SetRaceCarAddedForCollision(EActiveRaceCarIndex);

	// BrnVehicleInputInterface.h:200
	const VehicleInputInterface::InLineTestResultQueue * GetLineTestResults() const;

	// BrnVehicleInputInterface.h:203
	const VehicleInputInterface::CreateRaceCarEventQueue * GetCreateRaceCarEvents() const;

	// BrnVehicleInputInterface.h:206
	const VehicleInputInterface::RemoveRaceCarEventQueue * GetRemoveRaceCarEvents() const;

	// BrnVehicleInputInterface.h:209
	const VehicleInputInterface::SetRaceCarCollisionEventQueue * GetSetRaceCarCollisionEvents() const;

	// BrnVehicleInputInterface.h:212
	const VehicleInputInterface::SetRaceCarCullingGroupEventQueue * GetSetRaceCarCullingGroupEvents() const;

	// BrnVehicleInputInterface.h:215
	const VehicleInputInterface::RemoveTrafficEventQueue * GetRemoveTrafficEvents() const;

	// BrnVehicleInputInterface.h:218
	const VehicleInputInterface::SetTrafficCrashingEventQueue * GetSetTrafficCrashingEvents() const;

	// BrnVehicleInputInterface.h:221
	const VehicleInputInterface::CreateTrafficEventQueue * GetCreateTrafficBodyEvents() const;

	// BrnVehicleInputInterface.h:224
	const VehicleInputInterface::UpdateNetworkTrafficEventQueue * GetUpdateNetworkTrafficEvents() const;

	// BrnVehicleInputInterface.h:227
	const VehicleInputInterface::ResetRaceCarEventQueue * GetResetRaceCarEvents() const;

	// BrnVehicleInputInterface.h:230
	const VehicleInputInterface::ImpactEventQueue * GetImpactEventQueue() const;

	// BrnVehicleInputInterface.h:233
	const VehicleInputInterface::ValidateRaceCarEventQueue * GetValidateRaceCarEvents() const;

	// BrnVehicleInputInterface.h:236
	const VehicleInputInterface::InTriangleCacheInterface * GetTriangleCacheInterface() const;

	// BrnVehicleInputInterface.h:239
	const VehicleInputInterface::CreateArticulatedTrafficEventQueue * GetCreateArticulatedTrafficQueue() const;

	// BrnVehicleInputInterface.h:242
	const VehicleInputInterface::NetworkCarsAddRemoveForCollisionQueue * GetNetworkCarsAddRemoveForCollisionQueue() const;

	// BrnVehicleInputInterface.h:245
	const VehicleInputInterface::RaceCarBitArray * GetRaceCarsAddedForCollision() const;

	// BrnVehicleInputInterface.h:248
	void ClearImpactEventQueue();

	// BrnVehicleInputInterface.h:252
	void SetRaceCarsAddedForCollision(const VehicleInputInterface::RaceCarBitArray *);

}

// BrnVehicleInputInterface.h:51
struct BrnPhysics::Vehicle::VehicleInputInterface {
	// BrnPhysicsToSceneQueueIO.h:45
	typedef EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000> InLineTestResultQueue;

private:
	// BrnVehicleInputInterface.h:261
	VehicleInputInterface::InLineTestResultQueue mLineTestResultsQueue;

	// Unknown accessibility
	// BrnPhysicsToSceneQueueIO.h:48
	typedef TriangleCacheInterface InTriangleCacheInterface;

	// BrnVehicleInputInterface.h:262
	VehicleInputInterface::InTriangleCacheInterface mTriangleCacheInterface;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:38
	typedef EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8> CreateRaceCarEventQueue;

	// BrnVehicleInputInterface.h:265
	VehicleInputInterface::CreateRaceCarEventQueue mCreateRaceCarEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:39
	typedef EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8> RemoveRaceCarEventQueue;

	// BrnVehicleInputInterface.h:266
	VehicleInputInterface::RemoveRaceCarEventQueue mRemoveRaceCarEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:52
	typedef EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16> ResetRaceCarEventQueue;

	// BrnVehicleInputInterface.h:267
	VehicleInputInterface::ResetRaceCarEventQueue mResetRaceCarEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:41
	typedef EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8> ValidateRaceCarEventQueue;

	// BrnVehicleInputInterface.h:268
	VehicleInputInterface::ValidateRaceCarEventQueue mValidateRaceCarEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:42
	typedef EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10> SetRaceCarCollisionEventQueue;

	// BrnVehicleInputInterface.h:269
	VehicleInputInterface::SetRaceCarCollisionEventQueue mSetRaceCarCollisionEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:43
	typedef EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10> SetRaceCarCullingGroupEventQueue;

	// BrnVehicleInputInterface.h:270
	VehicleInputInterface::SetRaceCarCullingGroupEventQueue mSetRaceCarCullingGroupEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:50
	typedef EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64> NetworkCarsAddRemoveForCollisionQueue;

	// BrnVehicleInputInterface.h:271
	VehicleInputInterface::NetworkCarsAddRemoveForCollisionQueue mNetworkCarsAddedRemovedForCollisionQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:44
	typedef EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25> CreateTrafficEventQueue;

	// BrnVehicleInputInterface.h:274
	VehicleInputInterface::CreateTrafficEventQueue mCreateTrafficEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:46
	typedef EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10> CreateArticulatedTrafficEventQueue;

	// BrnVehicleInputInterface.h:275
	VehicleInputInterface::CreateArticulatedTrafficEventQueue mCreateArticulatedTrafficEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:48
	typedef EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25> SetTrafficCrashingEventQueue;

	// BrnVehicleInputInterface.h:276
	VehicleInputInterface::SetTrafficCrashingEventQueue mSetTrafficCrashingEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:47
	typedef EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25> RemoveTrafficEventQueue;

	// BrnVehicleInputInterface.h:277
	VehicleInputInterface::RemoveTrafficEventQueue mRemoveCrashedTrafficEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:40
	typedef EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20> UpdateNetworkTrafficEventQueue;

	// BrnVehicleInputInterface.h:278
	VehicleInputInterface::UpdateNetworkTrafficEventQueue mUpdateNetworkTrafficEventQueue;

	// BrnVehicleInputInterface.h:280
	VehicleOutputInterface::ImpactEventQueue mImpactEventQueue;

	// Unknown accessibility
	// BrnVehicleInputInterface.h:38
	typedef BitArray<8u> RaceCarBitArray;

	// BrnVehicleInputInterface.h:281
	VehicleInputInterface::RaceCarBitArray mRaceCarsAddedForCollision;

public:
	// BrnVehicleInputInterface.h:55
	void Append(const VehicleInputInterface *);

	// BrnVehicleInputInterface.h:58
	void Construct();

	// BrnVehicleInputInterface.h:73
	int32_t CreateRaceCar(VolumeInstanceId, Matrix44Affine, Vector3, Vector3, Attribute::Key, ResourceHandle, ResourceHandle, BrnWorld::ERaceCarType, float32_t, BrnPhysics::Deformation::DeformationResetType, bool, int32_t);

	// BrnVehicleInputInterface.h:77
	int32_t RemoveRaceCar(VolumeInstanceId);

	// BrnVehicleInputInterface.h:81
	int32_t InvalidateRaceCar(VolumeInstanceId);

	// BrnVehicleInputInterface.h:87
	int32_t ValidateRaceCar(VolumeInstanceId, ResourceHandle, ResourceHandle);

	// BrnVehicleInputInterface.h:91
	bool IsRoomForPhysicalTraffic() const;

	// BrnVehicleInputInterface.h:95
	bool IsRoomForArticulatedTraffic() const;

	// BrnVehicleInputInterface.h:109
	void CreatePhysicalTraffic(VolumeInstanceId, EntityId, Matrix44Affine, Vector3, Vector3, Attribute::Key, ResourceHandle, BrnPhysics::Vehicle::ETrafficType, bool, CgsID);

	// BrnVehicleInputInterface.h:128
	void CreateArticulatedTraffic(VolumeInstanceId, Matrix44Affine, Vector3, Vector3, Attribute::Key, ResourceHandle, CgsID, VolumeInstanceId, Matrix44Affine, Vector3, Vector3, Attribute::Key, ResourceHandle, CgsID, BrnPhysics::Vehicle::ETrafficType);

	// BrnVehicleInputInterface.h:133
	void SetTrafficCrashing(EntityId);

	// BrnVehicleInputInterface.h:138
	void SetTrafficNotCrashing(EntityId);

	// BrnVehicleInputInterface.h:143
	void RemovePhysicalTraffic(VolumeInstanceId);

	// BrnVehicleInputInterface.h:148
	int32_t UpdateNetworkTraffic(VolumeInstanceId, Matrix44Affine);

	// BrnVehicleInputInterface.h:161
	void ResetRaceCar(uint32_t, Matrix44Affine, Vector3, Vector3, uint8_t, bool, bool, float32_t, bool, BrnPhysics::Deformation::DeformationResetType);

	// BrnVehicleInputInterface.h:166
	void SetRaceCarCollision(EntityId, bool);

	// BrnVehicleInputInterface.h:171
	void SetRaceCarCullingGroup(EntityId, SetRaceCarCullingGroupEvent::CullingGroup);

	// BrnVehicleInputInterface.h:175
	void AppendLineTestResults(const VehicleInputInterface::InLineTestResultQueue *);

	// BrnVehicleInputInterface.h:179
	void AppendTriangleCacheInterface(const VehicleInputInterface::InTriangleCacheInterface *);

	// BrnVehicleInputInterface.h:183
	void AddLineTestResult(OutEventLineTestNearestResult);

	// BrnVehicleInputInterface.h:187
	void AddImpactEvent(ImpactEvent *);

	// BrnVehicleInputInterface.h:192
	void RecordNetworkCarAddedOrRemovedForCollision(const VehicleAddedForCollisionEvent &);

	// BrnVehicleInputInterface.h:197
	void SetRaceCarAddedForCollision(EActiveRaceCarIndex);

	// BrnVehicleInputInterface.h:200
	const VehicleInputInterface::InLineTestResultQueue * GetLineTestResults() const;

	// BrnVehicleInputInterface.h:203
	const VehicleInputInterface::CreateRaceCarEventQueue * GetCreateRaceCarEvents() const;

	// BrnVehicleInputInterface.h:206
	const VehicleInputInterface::RemoveRaceCarEventQueue * GetRemoveRaceCarEvents() const;

	// BrnVehicleInputInterface.h:209
	const VehicleInputInterface::SetRaceCarCollisionEventQueue * GetSetRaceCarCollisionEvents() const;

	// BrnVehicleInputInterface.h:212
	const VehicleInputInterface::SetRaceCarCullingGroupEventQueue * GetSetRaceCarCullingGroupEvents() const;

	// BrnVehicleInputInterface.h:215
	const VehicleInputInterface::RemoveTrafficEventQueue * GetRemoveTrafficEvents() const;

	// BrnVehicleInputInterface.h:218
	const VehicleInputInterface::SetTrafficCrashingEventQueue * GetSetTrafficCrashingEvents() const;

	// BrnVehicleInputInterface.h:221
	const VehicleInputInterface::CreateTrafficEventQueue * GetCreateTrafficBodyEvents() const;

	// BrnVehicleInputInterface.h:224
	const VehicleInputInterface::UpdateNetworkTrafficEventQueue * GetUpdateNetworkTrafficEvents() const;

	// BrnVehicleInputInterface.h:227
	const VehicleInputInterface::ResetRaceCarEventQueue * GetResetRaceCarEvents() const;

	// BrnVehicleInputInterface.h:230
	const VehicleOutputInterface::ImpactEventQueue * GetImpactEventQueue() const;

	// BrnVehicleInputInterface.h:233
	const VehicleInputInterface::ValidateRaceCarEventQueue * GetValidateRaceCarEvents() const;

	// BrnVehicleInputInterface.h:236
	const VehicleInputInterface::InTriangleCacheInterface * GetTriangleCacheInterface() const;

	// BrnVehicleInputInterface.h:239
	const VehicleInputInterface::CreateArticulatedTrafficEventQueue * GetCreateArticulatedTrafficQueue() const;

	// BrnVehicleInputInterface.h:242
	const VehicleInputInterface::NetworkCarsAddRemoveForCollisionQueue * GetNetworkCarsAddRemoveForCollisionQueue() const;

	// BrnVehicleInputInterface.h:245
	const VehicleInputInterface::RaceCarBitArray * GetRaceCarsAddedForCollision() const;

	// BrnVehicleInputInterface.h:248
	void ClearImpactEventQueue();

	// BrnVehicleInputInterface.h:252
	void SetRaceCarsAddedForCollision(const VehicleInputInterface::RaceCarBitArray *);

}

