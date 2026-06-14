// Wheel.h:30
namespace BrnPhysics {
	// BrnContactId.h:35
	namespace PhysicsModuleIO {
		// BrnPhysicsModuleIO.h:61
		const int32_t KI_POTENTIAL_CONTACTS_INTERFACE_SIZE = 2048;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnContactId.h:35
	namespace PhysicsModuleIO {
		// BrnPhysicsModuleIO.h:61
		const int32_t KI_POTENTIAL_CONTACTS_INTERFACE_SIZE = 2048;

	}

}

// BrnPhysicsModuleIO.h:130
struct BrnPhysics::PhysicsModuleIO::PotentialContactInterface : public IOBuffer {
	// BrnPhysicsToSceneQueueIO.h:46
	typedef OutputBuffer::OutPotentialContactQueue InPotentialContactQueue;

private:
	// BrnPhysicsModuleIO.h:246
	const PotentialContactInterface::InPotentialContactQueue * mpQueue;

	// Unknown accessibility
	// BrnPhysicsModuleIO.h:71
	typedef EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048> CustomPotentialContactQueue;

	// BrnPhysicsModuleIO.h:247
	PotentialContactInterface::CustomPotentialContactQueue[14] maCustomEventQueues;

public:
	// BrnPhysicsModuleIO.h:134
	void Construct();

	// BrnPhysicsModuleIO.h:138
	void SetConstQueue(const PotentialContactInterface::InPotentialContactQueue *);

	// BrnPhysicsModuleIO.h:142
	void AddEvent(const PotentialContact &);

	// BrnPhysicsModuleIO.h:147
	// Declaration
	void AddEvent(uint32_t, const PotentialContact &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPhysicsModuleIO.h:601
		using namespace CgsDev::Message;

	}

	// BrnPhysicsModuleIO.h:150
	int32_t GetLength() const;

	// BrnPhysicsModuleIO.h:154
	const PotentialContact & GetEvent(int32_t) const;

	// BrnPhysicsModuleIO.h:159
	const PotentialContact & GetEvent(ContactId) const;

	// BrnPhysicsModuleIO.h:162
	const PotentialContactInterface::CustomPotentialContactQueue * GetHingedBodyPartWithWorldQueue() const;

	// BrnPhysicsModuleIO.h:166
	const PotentialContactInterface::CustomPotentialContactQueue * GetHingedBodyPartWithCarQueue() const;

	// BrnPhysicsModuleIO.h:170
	const PotentialContactInterface::CustomPotentialContactQueue * GetDetachedBodyPartCarQueue() const;

	// BrnPhysicsModuleIO.h:174
	const PotentialContactInterface::CustomPotentialContactQueue * GetDetachedWheelCarQueue() const;

	// BrnPhysicsModuleIO.h:179
	const PotentialContactInterface::CustomPotentialContactQueue * GetRaceCarWithWorldQueue() const;

	// BrnPhysicsModuleIO.h:184
	const PotentialContactInterface::CustomPotentialContactQueue * GetTrafficWithWorldQueue() const;

	// BrnPhysicsModuleIO.h:188
	PotentialContactInterface::CustomPotentialContactQueue * GetTrafficWithWorldQueue();

	// BrnPhysicsModuleIO.h:192
	const PotentialContactInterface::CustomPotentialContactQueue * GetSimpleTrafficWithWorldQueue() const;

	// BrnPhysicsModuleIO.h:196
	PotentialContactInterface::CustomPotentialContactQueue * GetSimpleTrafficWithWorldQueue();

	// BrnPhysicsModuleIO.h:201
	const PotentialContactInterface::CustomPotentialContactQueue * GetRaceCarWithWorldQueueValidated() const;

	// BrnPhysicsModuleIO.h:205
	const PotentialContactInterface::CustomPotentialContactQueue * GetRaceCarWithRaceCarQueue() const;

	// BrnPhysicsModuleIO.h:210
	PotentialContactInterface::CustomPotentialContactQueue * GetRaceCarWithRaceCarQueue();

	// BrnPhysicsModuleIO.h:214
	const PotentialContactInterface::CustomPotentialContactQueue * GetTrafficArticulatedJointQueue() const;

	// BrnPhysicsModuleIO.h:218
	const PotentialContactInterface::CustomPotentialContactQueue * GetRaceCarWithTrafficQueue() const;

	// BrnPhysicsModuleIO.h:223
	PotentialContactInterface::CustomPotentialContactQueue * GetRaceCarWithTrafficQueue();

	// BrnPhysicsModuleIO.h:228
	PotentialContactInterface::CustomPotentialContactQueue * GetSceneManagerContactQueue();

	// BrnPhysicsModuleIO.h:233
	const PotentialContactInterface::CustomPotentialContactQueue * GetSimpleTrafficWithCarQueue() const;

	// BrnPhysicsModuleIO.h:237
	const PotentialContactInterface::CustomPotentialContactQueue * GetTrafficWithTrafficQueue() const;

	// BrnPhysicsModuleIO.h:241
	PotentialContactInterface::CustomPotentialContactQueue * GetTrafficWithTrafficQueue();

}

// BrnPhysicsModuleIO.h:259
struct BrnPhysics::PhysicsModuleIO::InputBuffer : public IOBuffer {
private:
	// BrnPhysicsModuleIO.h:309
	Camera mCameraInput;

	// BrnPhysicsModuleIO.h:311
	VehicleInputInterface mVehicleInputInterface;

	// BrnPhysicsModuleIO.h:312
	VehicleDriverInputInterface mVehicleDriverInterface;

	// BrnPhysicsModuleIO.h:313
	VehicleEffectsInputInterface mVehicleEffectsInputInterface;

	// Unknown accessibility
	// BrnPhysicsModuleIO.h:64
	typedef RCEntityActiveRaceCarOutputInterface RCEntityOutputInterface;

	// BrnPhysicsModuleIO.h:314
	InputBuffer::RCEntityOutputInterface mRCEntityOutputInterface;

	// Unknown accessibility
	// BrnPhysicsToVehicleQueueIO.h:53
	typedef EventQueue<BrnPhysics::Vehicle::CreateWorldEvent,1> CreateWorldEventQueue;

	// BrnPhysicsModuleIO.h:316
	InputBuffer::CreateWorldEventQueue mCreateWorldEventQueue;

	// BrnPhysicsModuleIO.h:317
	PotentialContactInterface::InPotentialContactQueue mPotentialContactQueue;

	// Unknown accessibility
	// BrnPhysicsToSceneQueueIO.h:47
	typedef OutputBuffer::OutOverlapPairsQueue InOverlapPairsQueue;

	// BrnPhysicsModuleIO.h:318
	InputBuffer::InOverlapPairsQueue mOverlapPairsQueue;

	// BrnPhysicsModuleIO.h:319
	TimerStatusInterface mTimerInterface;

	// BrnPhysicsModuleIO.h:320
	uint32_t mSolverMaxIterations;

	// BrnPhysicsModuleIO.h:322
	PropInputInterface mPropManagerInputInterface;

	// Unknown accessibility
	// BrnPhysicsModuleIO.h:65
	typedef InputBuffer::GameActionQueue GameActionQueue;

	// BrnPhysicsModuleIO.h:323
	InputBuffer::GameActionQueue mGameActionQueue;

public:
	// BrnPhysicsModuleIO.h:264
	void Construct();

	// BrnPhysicsModuleIO.h:268
	void Destruct();

	// BrnPhysicsModuleIO.h:272
	const Camera * GetCameraInput() const;

	// BrnPhysicsModuleIO.h:273
	void SetCameraInput(const Camera *);

	// BrnPhysicsModuleIO.h:275
	const VehicleInputInterface * GetVehicleInputInterface() const;

	// BrnPhysicsModuleIO.h:276
	VehicleInputInterface * GetVehicleInputInterface();

	// BrnPhysicsModuleIO.h:278
	const VehicleDriverInputInterface * GetVehicleDriverInterface() const;

	// BrnPhysicsModuleIO.h:279
	VehicleDriverInputInterface * GetVehicleDriverInterface();

	// BrnPhysicsModuleIO.h:281
	const VehicleEffectsInputInterface * GetVehicleEffectsInputInterface() const;

	// BrnPhysicsModuleIO.h:282
	VehicleEffectsInputInterface * GetVehicleEffectsInputInterface();

	// BrnPhysicsModuleIO.h:284
	const InputBuffer::RCEntityOutputInterface * GetRCEntityOutputInterface() const;

	// BrnPhysicsModuleIO.h:285
	void SetRCEntityOutputInterface(const InputBuffer::RCEntityOutputInterface *);

	// BrnPhysicsModuleIO.h:287
	const InputBuffer::CreateWorldEventQueue * GetCreateWorldEventQueue() const;

	// BrnPhysicsModuleIO.h:289
	const PotentialContactInterface::InPotentialContactQueue * GetPotentialContactQueue() const;

	// BrnPhysicsModuleIO.h:290
	PotentialContactInterface::InPotentialContactQueue * GetPotentialContactQueue();

	// BrnPhysicsModuleIO.h:292
	const InputBuffer::InOverlapPairsQueue * GetOverlapPairsQueue() const;

	// BrnPhysicsModuleIO.h:293
	InputBuffer::InOverlapPairsQueue * GetOverlapPairsQueue();

	// BrnPhysicsModuleIO.h:295
	const TimerStatusInterface * GetTimerInterface() const;

	// BrnPhysicsModuleIO.h:296
	void SetTimerInterface(const TimerStatusInterface *);

	// BrnPhysicsModuleIO.h:298
	const uint32_t * GetSolverMaxIterations() const;

	// BrnPhysicsModuleIO.h:299
	void SetSolverMaxIterations(const uint32_t *);

	// BrnPhysicsModuleIO.h:301
	const PropInputInterface * GetPropManagerInputInterface() const;

	// BrnPhysicsModuleIO.h:302
	PropInputInterface * GetPropManagerInputInterface();

	// BrnPhysicsModuleIO.h:304
	const InputBuffer::GameActionQueue * GetGameActionQueue() const;

	// BrnPhysicsModuleIO.h:305
	InputBuffer::GameActionQueue * GetGameActionQueue();

}

// BrnPhysicsModuleIO.h:335
struct BrnPhysics::PhysicsModuleIO::OutputBuffer : public IOBuffer {
private:
	// BrnPhysicsModuleIO.h:376
	VehicleOutputRequestInterface mVehicleOutputRequestInterface;

	// BrnPhysicsModuleIO.h:378
	VehicleManagerOutputInterface mVehicleManagerOutputInterface;

	// BrnPhysicsModuleIO.h:379
	VehicleOutputInterface mVehicleOutputInterface;

	// BrnPhysicsModuleIO.h:381
	PropOutputInterface mPropManagerOutputInterface;

	// BrnPhysicsModuleIO.h:383
	DeformationOutputInterface mDeformationOutputInterface;

	// BrnPhysicsModuleIO.h:384
	DeformationOutputInterfaceForEntityModules mDeformationOutputInterfaceForEntityModules;

	// Unknown accessibility
	// BrnPhysicsModuleIO.h:63
	typedef InSceneUpdateInterface SceneInputInterface;

	// BrnPhysicsModuleIO.h:385
	OutputBuffer::SceneInputInterface mSceneInputInterface;

	// BrnPhysicsModuleIO.h:386
	ContactSpyInterface mContactSpyInterface;

public:
	// BrnPhysicsModuleIO.h:340
	void Construct();

	// BrnPhysicsModuleIO.h:344
	void Destruct();

	// BrnPhysicsModuleIO.h:348
	const VehicleOutputRequestInterface * GetVehicleOutputRequestInterface() const;

	// BrnPhysicsModuleIO.h:349
	VehicleOutputRequestInterface * GetVehicleOutputRequestInterface();

	// BrnPhysicsModuleIO.h:351
	const VehicleManagerOutputInterface * GetVehicleManagerOutputInterface() const;

	// BrnPhysicsModuleIO.h:352
	VehicleManagerOutputInterface * GetVehicleManagerOutputInterface();

	// BrnPhysicsModuleIO.h:354
	const VehicleOutputInterface * GetVehicleOutputInterface() const;

	// BrnPhysicsModuleIO.h:355
	VehicleOutputInterface * GetVehicleOutputInterface();

	// BrnPhysicsModuleIO.h:357
	const PropOutputInterface * GetPropManagerOutputInterface() const;

	// BrnPhysicsModuleIO.h:358
	PropOutputInterface * GetPropManagerOutputInterface();

	// BrnPhysicsModuleIO.h:360
	const DeformationOutputInterface * GetDeformationOutputInterface() const;

	// BrnPhysicsModuleIO.h:361
	DeformationOutputInterface * GetDeformationOutputInterface();

	// BrnPhysicsModuleIO.h:363
	const DeformationOutputInterfaceForEntityModules * GetDeformationOutputInterfaceForEntityModules() const;

	// BrnPhysicsModuleIO.h:364
	DeformationOutputInterfaceForEntityModules * GetDeformationOutputInterfaceForEntityModules();

	// BrnPhysicsModuleIO.h:366
	const OutputBuffer::SceneInputInterface * GetSceneInputInterface() const;

	// BrnPhysicsModuleIO.h:367
	OutputBuffer::SceneInputInterface * GetSceneInputInterface();

	// BrnPhysicsModuleIO.h:369
	const ContactSpyInterface * GetContactSpyInterface() const;

	// BrnPhysicsModuleIO.h:370
	ContactSpyInterface * GetContactSpyInterface();

}

// BrnPhysicsModuleIO.h:399
struct BrnPhysics::PhysicsModuleIO::InternalBuffer : public IOBuffer {
private:
	// BrnPhysicsModuleIO.h:418
	DeformationInputInterface mDeformationInputInterface;

public:
	// BrnPhysicsModuleIO.h:404
	void Construct();

	// BrnPhysicsModuleIO.h:408
	void Destruct();

	// BrnPhysicsModuleIO.h:413
	const DeformationInputInterface * GetDeformationInputInterface() const;

	// BrnPhysicsModuleIO.h:414
	DeformationInputInterface * GetDeformationInputInterface();

}

