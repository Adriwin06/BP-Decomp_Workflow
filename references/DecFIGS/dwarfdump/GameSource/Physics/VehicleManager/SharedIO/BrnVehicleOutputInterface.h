// BrnVehicleOutputInterface.h:283
struct BrnPhysics::Vehicle::AggressiveDrivingFlags {
	// BrnVehicleOutputInterface.h:290
	bool mbPlayerWonSlamThisFrame;

	// BrnVehicleOutputInterface.h:291
	bool mbPlayerLostSlamThisFrame;

	// BrnVehicleOutputInterface.h:292
	bool mbPlayerWonGrindingThisFrame;

	// BrnVehicleOutputInterface.h:293
	bool mbPlayerLostGrindingThisFrame;

	// BrnVehicleOutputInterface.h:294
	bool mbRubbingThisFrame;

public:
	// BrnVehicleOutputInterface.h:287
	void Clear();

}

// BrnVehicleOutputInterface.h:306
struct BrnPhysics::Vehicle::VehicleOutputInterface {
private:
	// BrnVehicleOutputInterface.h:382
	BitArray<8u> mUsedRaceCars;

	// BrnVehicleOutputInterface.h:383
	RaceCarState[8] maRaceCarStates;

	// Unknown accessibility
	// BrnVehicleEvents.h:575
	typedef EventQueue<BrnPhysics::Vehicle::ImpactEvent,16> ImpactEventQueue;

	// BrnVehicleOutputInterface.h:384
	VehicleOutputInterface::ImpactEventQueue mImpactEventQueue;

	// Unknown accessibility
	// BrnVehicleEvents.h:574
	typedef EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20> PhysicalTrafficStateQueue;

	// BrnVehicleOutputInterface.h:385
	VehicleOutputInterface::PhysicalTrafficStateQueue mTrafficStateQueue;

	// BrnVehicleOutputInterface.h:386
	GameEventQueue mGameEventQueue;

	// BrnVehicleOutputInterface.h:387
	AggressiveDrivingFlags mAggressiveDrivingFlags;

public:
	// BrnVehicleOutputInterface.h:309
	void Clear();

	// BrnVehicleOutputInterface.h:312
	void Construct();

	// BrnVehicleOutputInterface.h:316
	void Append(const VehicleOutputInterface *);

	// BrnVehicleOutputInterface.h:323
	void UpdateRaceCarState(int32_t, const BrnPhysics::Vehicle::RaceCarPhysics *, const VehicleDriver *, bool);

	// BrnVehicleOutputInterface.h:328
	void SetEntityID(int32_t, EntityId);

	// BrnVehicleOutputInterface.h:333
	void SetRaceCarHidden(int32_t, bool);

	// BrnVehicleOutputInterface.h:339
	void SetWheelTransform(uint8_t, uint8_t, Matrix44Affine);

	// BrnVehicleOutputInterface.h:343
	const RaceCarState * GetRaceCarState(int32_t) const;

	// BrnVehicleOutputInterface.h:347
	RaceCarState * GetRaceCarState(int32_t);

	// BrnVehicleOutputInterface.h:352
	void AddTrafficState(EntityId, const PhysicalTrafficVehicle *);

	// BrnVehicleOutputInterface.h:354
	const VehicleOutputInterface::PhysicalTrafficStateQueue * GetTrafficStateQueue() const;

	// BrnVehicleOutputInterface.h:357
	const VehicleOutputInterface::ImpactEventQueue * GetImpactEventQueue() const;

	// BrnVehicleOutputInterface.h:360
	VehicleOutputInterface::ImpactEventQueue * GetImpactEventQueue();

	// BrnVehicleOutputInterface.h:363
	void ClearImpactEventQueue();

	// BrnVehicleOutputInterface.h:367
	void SetUsedCarsBitArray(const BitArray<8u> &);

	// BrnVehicleOutputInterface.h:370
	const BitArray<8u> & GetUsedCarsBitArray() const;

	// BrnVehicleOutputInterface.h:373
	BrnGameState::GameStateModuleIO::GameEventQueue * GetGameEventQueue();

	// BrnVehicleOutputInterface.h:376
	const GameEventQueue * GetGameEventQueue() const;

	// BrnVehicleOutputInterface.h:378
	const AggressiveDrivingFlags * GetAggressiveDrivingFlags() const;

	// BrnVehicleOutputInterface.h:379
	AggressiveDrivingFlags * GetAggressiveDrivingFlags();

}

// BrnVehicleOutputInterface.h:66
struct BrnPhysics::Vehicle::VehicleGuiOutputMessages {
	// BrnVehicleOutputInterface.h:68
	bool mbPlayerGrindingOther;

	// BrnVehicleOutputInterface.h:69
	bool mbOtherGrindingPlayer;

	// BrnVehicleOutputInterface.h:70
	bool mbRubbing;

}

// BrnVehicleOutputInterface.h:82
struct BrnPhysics::Vehicle::VehicleManagerOutputInterface {
	// BrnPhysicsToVehicleQueueIO.h:55
	typedef EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,20> TrafficCrashedEventQueue;

private:
	// BrnVehicleOutputInterface.h:176
	VehicleManagerOutputInterface::TrafficCrashedEventQueue mCrashedTrafficEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:56
	typedef EventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent,20> TrafficSlammedEventQueue;

	// BrnVehicleOutputInterface.h:177
	VehicleManagerOutputInterface::TrafficSlammedEventQueue mSlammedTrafficEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:57
	typedef EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,10> FineTrafficCrashedEventQueue;

	// BrnVehicleOutputInterface.h:178
	VehicleManagerOutputInterface::FineTrafficCrashedEventQueue mFineTrafficCrashedEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:58
	typedef EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8> RaceCarCrashEventQueue;

	// BrnVehicleOutputInterface.h:179
	VehicleManagerOutputInterface::RaceCarCrashEventQueue mRaceCarCrashEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:59
	typedef EventQueue<BrnPhysics::Vehicle::RaceCarResetEvent,8> RaceCarResetEventQueue;

	// BrnVehicleOutputInterface.h:180
	VehicleManagerOutputInterface::RaceCarResetEventQueue mRaceCarResetEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:54
	typedef EventQueue<BrnPhysics::Vehicle::CreateVehicleResult,8> CreateVehicleResultQueue;

	// BrnVehicleOutputInterface.h:181
	VehicleManagerOutputInterface::CreateVehicleResultQueue mCreateVehicleResultQueue;

	// Unknown accessibility
	// BrnVehicleOutputInterface.h:45
	typedef VehicleManagerOutputInterface::TrafficTypeRequestQueue TrafficTypeRequestQueue;

	// Unknown accessibility
	// BrnTrafficTypeInterface.h:50
	typedef EventQueue<std::uint16_t,32> TrafficTypeRequestQueue;

	// BrnVehicleOutputInterface.h:182
	VehicleManagerOutputInterface::TrafficTypeRequestQueue mTrafficTypeRequestQueue;

	// BrnVehicleOutputInterface.h:183
	VehicleGuiOutputMessages mVehicleGuiOutputMessages;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:60
	typedef EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25> RemovedTrafficEventQueue;

	// BrnVehicleOutputInterface.h:184
	VehicleManagerOutputInterface::RemovedTrafficEventQueue mRemovedTrafficEventQueue;

	// BrnVehicleOutputInterface.h:185
	CgsInput::Device::WheelFFSpring mWheelFFSpring;

public:
	// BrnVehicleOutputInterface.h:86
	void Construct();

	// BrnVehicleOutputInterface.h:94
	int32_t AddCrashedTrafficEvent(VolumeInstanceId, EntityId);

	// BrnVehicleOutputInterface.h:102
	void AddSlammedTrafficEvent(EntityId, EntityId, BrnPhysics::Vehicle::eCrashTrafficType, float32_t, float32_t);

	// BrnVehicleOutputInterface.h:115
	int32_t AddRaceCarCrashEvent(VolumeInstanceId, EntityId, Vector3, Vector3, float32_t, bool, bool, bool, bool, BrnGameState::ETakedownType);

	// BrnVehicleOutputInterface.h:121
	void AddRaceCarResetEvent(EActiveRaceCarIndex, bool, Vector3);

	// BrnVehicleOutputInterface.h:125
	int32_t AddCreateVehicleResult(CreateVehicleResult);

	// BrnVehicleOutputInterface.h:131
	int32_t AddTrafficRemovedEvent(EntityId, BrnPhysics::Vehicle::ETrafficType);

	// BrnVehicleOutputInterface.h:137
	const VehicleManagerOutputInterface::TrafficCrashedEventQueue * GetCrashedTrafficEventQueue() const;

	// BrnVehicleOutputInterface.h:139
	const VehicleManagerOutputInterface::TrafficSlammedEventQueue * GetSlammedTrafficEventQueue() const;

	// BrnVehicleOutputInterface.h:142
	const VehicleManagerOutputInterface::RaceCarCrashEventQueue * GetRaceCarCrashEventQueue() const;

	// BrnVehicleOutputInterface.h:145
	const VehicleManagerOutputInterface::RaceCarResetEventQueue * GetRaceCarResetEventQueue() const;

	// BrnVehicleOutputInterface.h:148
	const VehicleManagerOutputInterface::CreateVehicleResultQueue * GetCreateVehicleResults() const;

	// BrnVehicleOutputInterface.h:151
	const VehicleManagerOutputInterface::TrafficTypeRequestQueue * GetTrafficTypeRequestQueue() const;

	// BrnVehicleOutputInterface.h:154
	const VehicleManagerOutputInterface::RemovedTrafficEventQueue * GetRemovedTrafficEventQueue() const;

	// BrnVehicleOutputInterface.h:157
	VehicleManagerOutputInterface::TrafficTypeRequestQueue * GetTrafficTypeRequestQueue();

	// BrnVehicleOutputInterface.h:159
	const VehicleGuiOutputMessages * GetVehicleGuiOutputMessages() const;

	// BrnVehicleOutputInterface.h:160
	VehicleGuiOutputMessages * GetVehicleGuiOutputMessages();

	// BrnVehicleOutputInterface.h:163
	const VehicleManagerOutputInterface::FineTrafficCrashedEventQueue * GetFineTrafficCrashedEventQueue() const;

	// BrnVehicleOutputInterface.h:166
	VehicleManagerOutputInterface::FineTrafficCrashedEventQueue * GetFineTrafficCrashedEventQueue();

	// BrnVehicleOutputInterface.h:170
	void SetPlayerWheelFFSpring(const CgsInput::Device::WheelFFSpring &);

	// BrnVehicleOutputInterface.h:173
	const CgsInput::Device::WheelFFSpring & GetPlayerWheelFFSpring() const;

}

// BrnVehicleOutputInterface.h:306
struct BrnPhysics::Vehicle::VehicleOutputInterface {
private:
	// BrnVehicleOutputInterface.h:382
	BitArray<8u> mUsedRaceCars;

	// BrnVehicleOutputInterface.h:383
	RaceCarState[8] maRaceCarStates;

	// BrnVehicleOutputInterface.h:384
	VehicleInputInterface::ImpactEventQueue mImpactEventQueue;

	// Unknown accessibility
	// BrnVehicleEvents.h:574
	typedef EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20> PhysicalTrafficStateQueue;

	// BrnVehicleOutputInterface.h:385
	VehicleOutputInterface::PhysicalTrafficStateQueue mTrafficStateQueue;

	// BrnVehicleOutputInterface.h:386
	GameEventQueue mGameEventQueue;

	// BrnVehicleOutputInterface.h:387
	AggressiveDrivingFlags mAggressiveDrivingFlags;

public:
	// BrnVehicleOutputInterface.h:309
	void Clear();

	// BrnVehicleOutputInterface.h:312
	void Construct();

	// BrnVehicleOutputInterface.h:316
	void Append(const VehicleOutputInterface *);

	// BrnVehicleOutputInterface.h:323
	void UpdateRaceCarState(int32_t, const BrnPhysics::Vehicle::RaceCarPhysics *, const VehicleDriver *, bool);

	// BrnVehicleOutputInterface.h:328
	void SetEntityID(int32_t, EntityId);

	// BrnVehicleOutputInterface.h:333
	void SetRaceCarHidden(int32_t, bool);

	// BrnVehicleOutputInterface.h:339
	void SetWheelTransform(uint8_t, uint8_t, Matrix44Affine);

	// BrnVehicleOutputInterface.h:343
	const RaceCarState * GetRaceCarState(int32_t) const;

	// BrnVehicleOutputInterface.h:347
	RaceCarState * GetRaceCarState(int32_t);

	// BrnVehicleOutputInterface.h:352
	void AddTrafficState(EntityId, const PhysicalTrafficVehicle *);

	// BrnVehicleOutputInterface.h:354
	const VehicleOutputInterface::PhysicalTrafficStateQueue * GetTrafficStateQueue() const;

	// BrnVehicleOutputInterface.h:357
	const VehicleInputInterface::ImpactEventQueue * GetImpactEventQueue() const;

	// BrnVehicleOutputInterface.h:360
	VehicleInputInterface::ImpactEventQueue * GetImpactEventQueue();

	// BrnVehicleOutputInterface.h:363
	void ClearImpactEventQueue();

	// BrnVehicleOutputInterface.h:367
	void SetUsedCarsBitArray(const BitArray<8u> &);

	// BrnVehicleOutputInterface.h:370
	const BitArray<8u> & GetUsedCarsBitArray() const;

	// BrnVehicleOutputInterface.h:373
	BrnGameState::GameStateModuleIO::GameEventQueue * GetGameEventQueue();

	// BrnVehicleOutputInterface.h:376
	const GameEventQueue * GetGameEventQueue() const;

	// BrnVehicleOutputInterface.h:378
	const AggressiveDrivingFlags * GetAggressiveDrivingFlags() const;

	// BrnVehicleOutputInterface.h:379
	AggressiveDrivingFlags * GetAggressiveDrivingFlags();

}

// BrnVehicleOutputInterface.h:399
struct BrnPhysics::Vehicle::CrashingRaceCarInterface {
private:
	// BrnVehicleOutputInterface.h:418
	bool[8] mabCrashingRaceCars;

public:
	// BrnVehicleOutputInterface.h:404
	void Clear();

	// BrnVehicleOutputInterface.h:409
	void SetFromVehicleOutputInterface(const VehicleOutputInterface *);

	// BrnVehicleOutputInterface.h:414
	bool IsCrashing(int32_t) const;

}

// BrnVehicleOutputInterface.h:82
struct BrnPhysics::Vehicle::VehicleManagerOutputInterface {
	// BrnPhysicsToVehicleQueueIO.h:55
	typedef EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,20> TrafficCrashedEventQueue;

private:
	// BrnVehicleOutputInterface.h:176
	VehicleManagerOutputInterface::TrafficCrashedEventQueue mCrashedTrafficEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:56
	typedef EventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent,20> TrafficSlammedEventQueue;

	// BrnVehicleOutputInterface.h:177
	VehicleManagerOutputInterface::TrafficSlammedEventQueue mSlammedTrafficEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:57
	typedef EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,10> FineTrafficCrashedEventQueue;

	// BrnVehicleOutputInterface.h:178
	VehicleManagerOutputInterface::FineTrafficCrashedEventQueue mFineTrafficCrashedEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:58
	typedef EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8> RaceCarCrashEventQueue;

	// BrnVehicleOutputInterface.h:179
	VehicleManagerOutputInterface::RaceCarCrashEventQueue mRaceCarCrashEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:59
	typedef EventQueue<BrnPhysics::Vehicle::RaceCarResetEvent,8> RaceCarResetEventQueue;

	// BrnVehicleOutputInterface.h:180
	VehicleManagerOutputInterface::RaceCarResetEventQueue mRaceCarResetEventQueue;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:54
	typedef EventQueue<BrnPhysics::Vehicle::CreateVehicleResult,8> CreateVehicleResultQueue;

	// BrnVehicleOutputInterface.h:181
	VehicleManagerOutputInterface::CreateVehicleResultQueue mCreateVehicleResultQueue;

	// Unknown accessibility
	// BrnVehicleOutputInterface.h:45
	typedef VehicleManagerOutputInterface::TrafficTypeRequestQueue TrafficTypeRequestQueue;

	// Unknown accessibility
	// BrnTrafficTypeInterface.h:50
	typedef EventQueue<uint16_t,32> TrafficTypeRequestQueue;

	// BrnVehicleOutputInterface.h:182
	VehicleManagerOutputInterface::TrafficTypeRequestQueue mTrafficTypeRequestQueue;

	// BrnVehicleOutputInterface.h:183
	VehicleGuiOutputMessages mVehicleGuiOutputMessages;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:60
	typedef EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25> RemovedTrafficEventQueue;

	// BrnVehicleOutputInterface.h:184
	VehicleManagerOutputInterface::RemovedTrafficEventQueue mRemovedTrafficEventQueue;

	// BrnVehicleOutputInterface.h:185
	CgsInput::Device::WheelFFSpring mWheelFFSpring;

public:
	// BrnVehicleOutputInterface.h:86
	void Construct();

	// BrnVehicleOutputInterface.h:94
	int32_t AddCrashedTrafficEvent(VolumeInstanceId, EntityId);

	// BrnVehicleOutputInterface.h:102
	void AddSlammedTrafficEvent(EntityId, EntityId, BrnPhysics::Vehicle::eCrashTrafficType, float32_t, float32_t);

	// BrnVehicleOutputInterface.h:115
	int32_t AddRaceCarCrashEvent(VolumeInstanceId, EntityId, Vector3, Vector3, float32_t, bool, bool, bool, bool, BrnGameState::ETakedownType);

	// BrnVehicleOutputInterface.h:121
	void AddRaceCarResetEvent(EActiveRaceCarIndex, bool, Vector3);

	// BrnVehicleOutputInterface.h:125
	int32_t AddCreateVehicleResult(CreateVehicleResult);

	// BrnVehicleOutputInterface.h:131
	int32_t AddTrafficRemovedEvent(EntityId, BrnPhysics::Vehicle::ETrafficType);

	// BrnVehicleOutputInterface.h:137
	const VehicleManagerOutputInterface::TrafficCrashedEventQueue * GetCrashedTrafficEventQueue() const;

	// BrnVehicleOutputInterface.h:139
	const VehicleManagerOutputInterface::TrafficSlammedEventQueue * GetSlammedTrafficEventQueue() const;

	// BrnVehicleOutputInterface.h:142
	const VehicleManagerOutputInterface::RaceCarCrashEventQueue * GetRaceCarCrashEventQueue() const;

	// BrnVehicleOutputInterface.h:145
	const VehicleManagerOutputInterface::RaceCarResetEventQueue * GetRaceCarResetEventQueue() const;

	// BrnVehicleOutputInterface.h:148
	const VehicleManagerOutputInterface::CreateVehicleResultQueue * GetCreateVehicleResults() const;

	// BrnVehicleOutputInterface.h:151
	const VehicleManagerOutputInterface::TrafficTypeRequestQueue * GetTrafficTypeRequestQueue() const;

	// BrnVehicleOutputInterface.h:154
	const VehicleManagerOutputInterface::RemovedTrafficEventQueue * GetRemovedTrafficEventQueue() const;

	// BrnVehicleOutputInterface.h:157
	VehicleManagerOutputInterface::TrafficTypeRequestQueue * GetTrafficTypeRequestQueue();

	// BrnVehicleOutputInterface.h:159
	const VehicleGuiOutputMessages * GetVehicleGuiOutputMessages() const;

	// BrnVehicleOutputInterface.h:160
	VehicleGuiOutputMessages * GetVehicleGuiOutputMessages();

	// BrnVehicleOutputInterface.h:163
	const VehicleManagerOutputInterface::FineTrafficCrashedEventQueue * GetFineTrafficCrashedEventQueue() const;

	// BrnVehicleOutputInterface.h:166
	VehicleManagerOutputInterface::FineTrafficCrashedEventQueue * GetFineTrafficCrashedEventQueue();

	// BrnVehicleOutputInterface.h:170
	void SetPlayerWheelFFSpring(const CgsInput::Device::WheelFFSpring &);

	// BrnVehicleOutputInterface.h:173
	const CgsInput::Device::WheelFFSpring & GetPlayerWheelFFSpring() const;

}

// BrnVehicleOutputInterface.h:197
struct BrnPhysics::Vehicle::VehicleOutputRequestInterface {
	// BrnVehicleQueues.h:32
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,50> InAddRigidBodyQueue;

private:
	// BrnVehicleOutputInterface.h:263
	VehicleOutputRequestInterface::InAddRigidBodyQueue mRequiredRigidBodiesQueue;

	// Unknown accessibility
	// BrnVehicleQueues.h:33
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody,50> InRemoveRigidBodyQueue;

	// BrnVehicleOutputInterface.h:264
	VehicleOutputRequestInterface::InRemoveRigidBodyQueue mRemoveRigidBodyQueue;

	// Unknown accessibility
	// BrnPhysicsToSceneQueueIO.h:41
	typedef InFineQueryQueue<13440> OutFineQueryQueue;

	// BrnVehicleOutputInterface.h:265
	VehicleOutputRequestInterface::OutFineQueryQueue mRequestFineLineQueue;

	// BrnVehicleOutputInterface.h:268
	InputBuffer::InChangeRigidBodyInertiaQueue mChangeRigidBodyInertiaQueue;

	// Unknown accessibility
	// BrnVehicleQueues.h:39
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::InAddJoint,10> AddArticulatedJointQueue;

	// BrnVehicleOutputInterface.h:270
	VehicleOutputRequestInterface::AddArticulatedJointQueue mAddJointQueue;

	// Unknown accessibility
	// BrnVehicleQueues.h:41
	typedef EventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveJoint,10> RemoveArticulatedJointQueue;

	// BrnVehicleOutputInterface.h:271
	VehicleOutputRequestInterface::RemoveArticulatedJointQueue mRemoveJointQueue;

public:
	// BrnVehicleOutputInterface.h:201
	void Append(const VehicleOutputRequestInterface *);

	// BrnVehicleOutputInterface.h:204
	void Construct();

	// BrnVehicleOutputInterface.h:207
	void Clear();

	// BrnVehicleOutputInterface.h:211
	int32_t CreateNewRigidBody(EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,50>::InAddRigidBody);

	// BrnVehicleOutputInterface.h:216
	int32_t RemoveRigidBody(RigidBodyId, bool);

	// BrnVehicleOutputInterface.h:225
	void AddLineRequest(SceneQueryId, InEventLineTestFine::EntityTypeFlags, InEventLineTestFine::VolumeTypeFlags, Vector3, Vector3, EntityId);

	// BrnVehicleOutputInterface.h:231
	int32_t AddChangeRigidBodyInertiaEvent(RigidBodyId, Inertia, uint32_t);

	// BrnVehicleOutputInterface.h:236
	void AddJoint(const InAddJoint &);

	// BrnVehicleOutputInterface.h:241
	void RemoveJoint(const InRemoveJoint &);

	// BrnVehicleOutputInterface.h:244
	const VehicleOutputRequestInterface::InAddRigidBodyQueue * GetRequiredRigidBodies() const;

	// BrnVehicleOutputInterface.h:247
	const VehicleOutputRequestInterface::InRemoveRigidBodyQueue * GetRemovedRigidBodies() const;

	// BrnVehicleOutputInterface.h:250
	const VehicleOutputRequestInterface::OutFineQueryQueue * GetLineTestRequests() const;

	// BrnVehicleOutputInterface.h:253
	const InputBuffer::InChangeRigidBodyInertiaQueue * GetChangeRigidBodyInertiaQueue() const;

	// BrnVehicleOutputInterface.h:256
	const VehicleOutputRequestInterface::AddArticulatedJointQueue * GetAddJointQueue() const;

	// BrnVehicleOutputInterface.h:259
	const VehicleOutputRequestInterface::RemoveArticulatedJointQueue * GetRemoveJointQueue() const;

}

