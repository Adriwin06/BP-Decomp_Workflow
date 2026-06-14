// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnPropToTrafficInterface.h:33
	namespace PropEntityIO {
		// Declaration
		struct PropVFXLocatorEvent {
			// BrnPropEntityModuleIO.h:228
			enum EEventType {
				E_EVENTTYPE_PROPHIT = 0,
				E_EVENTTYPE_PROPSMASH = 1,
				E_EVENTTYPE_MAX = 2,
			}

		}

		// BrnPropEntityModuleIO.h:60
		const uint32_t KU_RESOURCE_REQUEST_QUEUE_SIZE = 1024;

		// BrnPropEntityModuleIO.h:61
		const uint32_t KU_PROP_LOADED_GRAPHICS_QUEUE_SIZE = 25;

		// BrnPropEntityModuleIO.h:62
		const uint32_t KU_PROP_UNLOADED_GRAPHICS_QUEUE_SIZE = 25;

		// BrnPropEntityModuleIO.h:63
		const uint32_t KU_HIT_PROP_QUEUE_SIZE = 100;

		// BrnPropEntityModuleIO.h:64
		const uint32_t KU_BROKEN_PROP_QUEUE_SIZE = 50;

		// BrnPropEntityModuleIO.h:65
		const uint32_t KU_PROP_INSTANCES_NEEDED_QUEUE_SIZE = 30;

		// BrnPropEntityModuleIO.h:66
		const uint32_t KU_PROP_VFX_QUEUE_SIZE = 10;

		// BrnPropEntityModuleIO.h:67
		const uint32_t KU_RECORD_HIT_PROP_QUEUE_SIZE = 50;

		// BrnPropEntityModuleIO.h:68
		const uint32_t KU_PROP_BECAME_PHYSICAL_QUEUE_SIZE = 20;

	}

}

// BrnPropEntityModuleIO.h:186
struct BrnWorld::PropEntityIO::BrokenPropEvent {
private:
	// BrnPropEntityModuleIO.h:197
	uint8_t muRaceCarId;

public:
	// BrnPropEntityModuleIO.h:191
	void Construct(uint8_t);

	// BrnPropEntityModuleIO.h:194
	uint8_t GetRaceCarId() const;

}

// BrnPropEntityModuleIO.h:211
struct BrnWorld::PropEntityIO::PropBecamePhysicalEvent {
	// BrnPropEntityModuleIO.h:213
	Vector3 mPosition;

}

// BrnPropEntityModuleIO.h:225
struct BrnWorld::PropEntityIO::PropVFXLocatorEvent {
private:
	// BrnPropEntityModuleIO.h:268
	Matrix44Affine mTransform;

	// BrnPropEntityModuleIO.h:269
	uint32_t muTypeId;

	// BrnPropEntityModuleIO.h:270
	BrnWorld::PropEntityIO::PropVFXLocatorEvent::EEventType meEventType;

public:
	// BrnPropEntityModuleIO.h:242
	void Construct(Matrix44Affine, uint32_t, BrnWorld::PropEntityIO::PropVFXLocatorEvent::EEventType);

	// BrnPropEntityModuleIO.h:250
	const rw::math::vpu::Matrix44Affine & GetTransform() const;

	// BrnPropEntityModuleIO.h:256
	uint32_t GetPropType() const;

	// BrnPropEntityModuleIO.h:262
	BrnWorld::PropEntityIO::PropVFXLocatorEvent::EEventType GetEventType() const;

}

// BrnPropEntityModuleIO.h:588
struct BrnWorld::PropEntityIO::OutputBuffer_Prepare : public IOBuffer {
	// BrnPropEntityModuleIO.h:74
	typedef RequestInterface<1024> ResourceRequestInterface;

private:
	// BrnPropEntityModuleIO.h:609
	OutputBuffer_Prepare::ResourceRequestInterface mResourceRequestInterface;

	// Unknown accessibility
	// BrnPropEntityModuleIO.h:75
	typedef InSceneUpdateInterface SceneInputInterface;

	// BrnPropEntityModuleIO.h:610
	OutputBuffer_Prepare::SceneInputInterface mSceneInputInterface;

	// Unknown accessibility
	// BrnPropEntityModuleIO.h:76
	typedef PropInputInterface PropInputInterface;

	// BrnPropEntityModuleIO.h:611
	OutputBuffer_Prepare::PropInputInterface mPropInputInterface;

public:
	// BrnPropEntityModuleIO.h:593
	void Construct();

	// BrnPropEntityModuleIO.h:597
	void Destruct();

	// BrnPropEntityModuleIO.h:599
	const OutputBuffer_Prepare::SceneInputInterface * GetSceneInputInterface() const;

	// BrnPropEntityModuleIO.h:600
	const OutputBuffer_Prepare::PropInputInterface * GetPropInputInterface() const;

	// BrnPropEntityModuleIO.h:602
	OutputBuffer_Prepare::SceneInputInterface * GetSceneInputInterface();

	// BrnPropEntityModuleIO.h:603
	OutputBuffer_Prepare::PropInputInterface * GetPropInputInterface();

	// BrnPropEntityModuleIO.h:605
	const OutputBuffer_Prepare::ResourceRequestInterface * GetResourceRequestInterface() const;

	// BrnPropEntityModuleIO.h:606
	OutputBuffer_Prepare::ResourceRequestInterface * GetResourceRequestInterface();

}

// BrnPropEntityModuleIO.h:714
struct BrnWorld::PropEntityIO::OutputBuffer_PostPhysics : public IOBuffer {
	// BrnPropEntityModuleIO.h:99
	typedef EventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent,20> PropBecamePhysicalEventQueue;

private:
	// BrnPropEntityModuleIO.h:748
	OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue mPropBecamePhysicalEventQueue;

	// Unknown accessibility
	// BrnPropEntityModuleIO.h:91
	typedef EventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent,50> RecordHitPropQueue;

	// BrnPropEntityModuleIO.h:749
	OutputBuffer_PostPhysics::RecordHitPropQueue mRecordHitPropQueue;

	// Unknown accessibility
	// BrnPropEntityModuleIO.h:89
	typedef EventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent,100> HitOverheadSignQueue;

	// BrnPropEntityModuleIO.h:750
	OutputBuffer_PostPhysics::HitOverheadSignQueue mHitOverheadSignQueue;

	// Unknown accessibility
	// BrnPropEntityModuleIO.h:93
	typedef EventQueue<BrnWorld::PropEntityIO::BrokenPropEvent,50> BrokenPropQueue;

	// BrnPropEntityModuleIO.h:751
	OutputBuffer_PostPhysics::BrokenPropQueue mBrokenPropQueue;

	// BrnPropEntityModuleIO.h:752
	OutputBuffer_Prepare::SceneInputInterface mSceneInputInterface;

	// BrnPropEntityModuleIO.h:753
	OutputBuffer_Prepare::PropInputInterface mPropInputInterface;

	// Unknown accessibility
	// BrnPropEntityModuleIO.h:95
	typedef EventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent,10> PropVFXLocatorQueue;

	// BrnPropEntityModuleIO.h:754
	OutputBuffer_PostPhysics::PropVFXLocatorQueue mPropVFXLocatorQueue;

	// BrnPropEntityModuleIO.h:755
	bool mbShouldRequestProgression;

public:
	// BrnPropEntityModuleIO.h:719
	void Construct();

	// BrnPropEntityModuleIO.h:723
	void Destruct();

	// BrnPropEntityModuleIO.h:725
	const OutputBuffer_Prepare::SceneInputInterface * GetSceneInputInterface() const;

	// BrnPropEntityModuleIO.h:726
	const OutputBuffer_Prepare::PropInputInterface * GetPropInputInterface() const;

	// BrnPropEntityModuleIO.h:727
	const OutputBuffer_PostPhysics::HitOverheadSignQueue * GetHitOverheadSignQueue() const;

	// BrnPropEntityModuleIO.h:728
	const OutputBuffer_PostPhysics::BrokenPropQueue * GetBrokenPropQueue() const;

	// BrnPropEntityModuleIO.h:729
	const OutputBuffer_PostPhysics::PropVFXLocatorQueue * GetPropVFXLocatorQueue() const;

	// BrnPropEntityModuleIO.h:730
	const OutputBuffer_PostPhysics::RecordHitPropQueue * GetRecordHitPropQueue() const;

	// BrnPropEntityModuleIO.h:731
	const OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue * GetPropBecamePhysicalEventQueue() const;

	// BrnPropEntityModuleIO.h:733
	OutputBuffer_Prepare::SceneInputInterface * GetSceneInputInterface();

	// BrnPropEntityModuleIO.h:734
	OutputBuffer_Prepare::PropInputInterface * GetPropInputInterface();

	// BrnPropEntityModuleIO.h:735
	OutputBuffer_PostPhysics::HitOverheadSignQueue * GetHitOverheadSignQueue();

	// BrnPropEntityModuleIO.h:736
	OutputBuffer_PostPhysics::BrokenPropQueue * GetBrokenPropQueue();

	// BrnPropEntityModuleIO.h:737
	OutputBuffer_PostPhysics::PropVFXLocatorQueue * GetPropVFXLocatorQueue();

	// BrnPropEntityModuleIO.h:738
	OutputBuffer_PostPhysics::RecordHitPropQueue * GetRecordHitPropQueue();

	// BrnPropEntityModuleIO.h:739
	OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue * GetPropBecamePhysicalEventQueue();

	// BrnPropEntityModuleIO.h:742
	bool ShouldRequestPropProgression() const;

	// BrnPropEntityModuleIO.h:745
	void RequestPropProgression();

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnPropToTrafficInterface.h:33
	namespace PropEntityIO {
		// Declaration
		struct PropVFXLocatorEvent {
			// BrnPropEntityModuleIO.h:228
			enum EEventType {
				E_EVENTTYPE_PROPHIT = 0,
				E_EVENTTYPE_PROPSMASH = 1,
				E_EVENTTYPE_MAX = 2,
			}

		}

		// BrnPropEntityModuleIO.h:60
		const uint32_t KU_RESOURCE_REQUEST_QUEUE_SIZE = 1024;

		// BrnPropEntityModuleIO.h:61
		const uint32_t KU_PROP_LOADED_GRAPHICS_QUEUE_SIZE = 25;

		// BrnPropEntityModuleIO.h:62
		const uint32_t KU_PROP_UNLOADED_GRAPHICS_QUEUE_SIZE = 25;

		// BrnPropEntityModuleIO.h:63
		const uint32_t KU_HIT_PROP_QUEUE_SIZE = 100;

		// BrnPropEntityModuleIO.h:64
		const uint32_t KU_BROKEN_PROP_QUEUE_SIZE = 50;

		// BrnPropEntityModuleIO.h:65
		const uint32_t KU_PROP_INSTANCES_NEEDED_QUEUE_SIZE = 30;

		// BrnPropEntityModuleIO.h:66
		const uint32_t KU_PROP_VFX_QUEUE_SIZE = 10;

		// BrnPropEntityModuleIO.h:67
		const uint32_t KU_RECORD_HIT_PROP_QUEUE_SIZE = 50;

		// BrnPropEntityModuleIO.h:68
		const uint32_t KU_PROP_BECAME_PHYSICAL_QUEUE_SIZE = 20;

	}

}

// BrnPropEntityModuleIO.h:119
struct BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent {
private:
	// BrnPropEntityModuleIO.h:130
	uint16_t muZone;

public:
	// BrnPropEntityModuleIO.h:124
	void Construct(uint16_t);

	// BrnPropEntityModuleIO.h:127
	uint16_t GetZone() const;

}

// BrnPropEntityModuleIO.h:142
struct BrnWorld::PropEntityIO::PropGraphicsLoadedEvent {
private:
	// BrnPropEntityModuleIO.h:153
	uint16_t muZone;

public:
	// BrnPropEntityModuleIO.h:147
	void Construct(uint16_t);

	// BrnPropEntityModuleIO.h:150
	uint16_t GetZone() const;

}

// BrnPropEntityModuleIO.h:164
struct BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent {
private:
	// BrnPropEntityModuleIO.h:175
	uint16_t muZone;

public:
	// BrnPropEntityModuleIO.h:169
	void Construct(uint16_t);

	// BrnPropEntityModuleIO.h:172
	uint16_t GetZone() const;

}

// BrnPropEntityModuleIO.h:281
struct BrnWorld::PropEntityIO::InputBuffer_Dispatch : public IOBuffer {
	// BrnPropEntityModuleIO.h:104
	typedef DispatchFrame DispatchFrame;

private:
	// BrnPropEntityModuleIO.h:305
	InputBuffer_Dispatch::DispatchFrame * mpDispatchFrame;

	// BrnPropEntityModuleIO.h:306
	BrnWorld::ShadowMap * mpShadowMap;

	// Unknown accessibility
	// BrnPropEntityModuleIO.h:87
	typedef OutputBuffer::OutSmSceneQueryResultsQueue SceneResultQueue;

	// BrnPropEntityModuleIO.h:307
	InputBuffer_Dispatch::SceneResultQueue mSceneResultQueue;

	// BrnPropEntityModuleIO.h:308
	BrnCoronaManager::BrnSubmissionInterface * mpCoronaSubmissionInterface;

public:
	// BrnPropEntityModuleIO.h:286
	void Construct();

	// BrnPropEntityModuleIO.h:290
	void Destruct();

	// BrnPropEntityModuleIO.h:292
	InputBuffer_Dispatch::DispatchFrame * GetDispatchFrame() const;

	// BrnPropEntityModuleIO.h:293
	void SetDispatchFrame(InputBuffer_Dispatch::DispatchFrame *);

	// BrnPropEntityModuleIO.h:295
	const InputBuffer_Dispatch::SceneResultQueue * GetSceneResultQueue() const;

	// BrnPropEntityModuleIO.h:296
	InputBuffer_Dispatch::SceneResultQueue * GetSceneResultQueue();

	// BrnPropEntityModuleIO.h:298
	BrnWorld::ShadowMap * GetShadowMap() const;

	// BrnPropEntityModuleIO.h:299
	void SetShadowMap(BrnWorld::ShadowMap *);

	// BrnPropEntityModuleIO.h:301
	BrnCoronaManager::BrnSubmissionInterface * GetCoronaSubmissionInterface() const;

	// BrnPropEntityModuleIO.h:302
	void SetCoronaSubmissionInterface(BrnCoronaManager::BrnSubmissionInterface *);

}

// BrnPropEntityModuleIO.h:319
struct BrnWorld::PropEntityIO::InputBuffer_Prepare : public IOBuffer {
public:
	// BrnPropEntityModuleIO.h:324
	void Construct();

	// BrnPropEntityModuleIO.h:328
	void Destruct();

}

// BrnPropEntityModuleIO.h:339
struct BrnWorld::PropEntityIO::InputBuffer_PreScene : public IOBuffer {
	// BrnPropEntityModuleIO.h:81
	typedef EventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent,30> PropInstancesNeededForZoneQueue;

private:
	// BrnPropEntityModuleIO.h:474
	InputBuffer_PreScene::PropInstancesNeededForZoneQueue mPropInstancesNeededForZoneQueue;

	// Unknown accessibility
	// BrnPropEntityModuleIO.h:83
	typedef EventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent,25> PropGraphicsLoadedQueue;

	// BrnPropEntityModuleIO.h:475
	InputBuffer_PreScene::PropGraphicsLoadedQueue mPropGraphicsLoadedQueue;

	// Unknown accessibility
	// BrnPropEntityModuleIO.h:85
	typedef EventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent,25> PropGraphicsUnloadedQueue;

	// BrnPropEntityModuleIO.h:476
	InputBuffer_PreScene::PropGraphicsUnloadedQueue mPropGraphicsUnloadedQueue;

	// BrnPropEntityModuleIO.h:477
	Vector3 mPlayerPos;

	// BrnPropEntityModuleIO.h:478
	Vector3[8] maRaceCarVelocity;

	// BrnPropEntityModuleIO.h:479
	const Profile::HitPropsBitArray * mpabHitPropBitArray;

	// BrnPropEntityModuleIO.h:480
	float32_t mfCurrentTimeStep;

	// BrnPropEntityModuleIO.h:481
	int32_t miPlayerZoneNumber;

	// BrnPropEntityModuleIO.h:482
	uint8_t mu8PlayerCarIndex;

	// BrnPropEntityModuleIO.h:483
	uint8_t meOnlineStatus;

	// BrnPropEntityModuleIO.h:484
	uint8_t meEasySmashPropsStatus;

	// BrnPropEntityModuleIO.h:485
	uint8_t mePropProgressionStatus;

	// BrnPropEntityModuleIO.h:486
	bool mbReloadingProfile;

	// BrnPropEntityModuleIO.h:487
	bool mbSendingPropProgression;

	// BrnPropEntityModuleIO.h:488
	bool mbResetProps;

	// BrnPropEntityModuleIO.h:489
	bool mbPlayerCrashing;

	// BrnPropEntityModuleIO.h:490
	bool mbPlayerWrecked;

public:
	// BrnPropEntityModuleIO.h:344
	void Construct();

	// BrnPropEntityModuleIO.h:348
	void Destruct();

	// BrnPropEntityModuleIO.h:352
	void SetPlayerCarIndex(uint8_t);

	// BrnPropEntityModuleIO.h:355
	Vector3 GetPlayerPosition() const;

	// BrnPropEntityModuleIO.h:358
	uint8_t GetPlayerCarIndex() const;

	// BrnPropEntityModuleIO.h:361
	void ReloadingProfile();

	// BrnPropEntityModuleIO.h:364
	bool IsReloadingProfile() const;

	// BrnPropEntityModuleIO.h:367
	void SendingPropProgression();

	// BrnPropEntityModuleIO.h:370
	bool IsSendingPropProgression() const;

	// BrnPropEntityModuleIO.h:374
	void SetPlayerPosition(Vector3);

	// BrnPropEntityModuleIO.h:378
	void SetPlayerCarCrashing(bool);

	// BrnPropEntityModuleIO.h:382
	void SetPlayerWrecked(bool);

	// BrnPropEntityModuleIO.h:386
	void SetPlayerZoneNumber(int32_t);

	// BrnPropEntityModuleIO.h:389
	int32_t GetPlayerZoneNumber() const;

	// BrnPropEntityModuleIO.h:392
	bool IsPlayerWrecked() const;

	// BrnPropEntityModuleIO.h:395
	bool IsPlayerCrashing() const;

	// BrnPropEntityModuleIO.h:400
	void SetRaceCarVelocity(int32_t, Vector3);

	// BrnPropEntityModuleIO.h:404
	Vector3 GetRaceCarVelocity(int32_t) const;

	// BrnPropEntityModuleIO.h:407
	void ResetProps();

	// BrnPropEntityModuleIO.h:410
	bool ShouldResetProps() const;

	// BrnPropEntityModuleIO.h:414
	void SetIsOnline(bool);

	// BrnPropEntityModuleIO.h:418
	void SetEasySmashProps(bool);

	// BrnPropEntityModuleIO.h:422
	void SetPropProgressionEnabled(bool);

	// BrnPropEntityModuleIO.h:426
	void SetCurrentTimestep(float32_t);

	// BrnPropEntityModuleIO.h:429
	float32_t GetCurrentTimestep() const;

	// BrnPropEntityModuleIO.h:432
	bool HasJustChangedToEasySmashOn() const;

	// BrnPropEntityModuleIO.h:435
	bool HasJustChangedToEasySmashOff() const;

	// BrnPropEntityModuleIO.h:438
	bool HasJustChangedToOnline() const;

	// BrnPropEntityModuleIO.h:441
	bool HasJustChangedToOffline() const;

	// BrnPropEntityModuleIO.h:444
	bool HasPropProgressionBeenEnabled() const;

	// BrnPropEntityModuleIO.h:447
	bool HasPropProgressionBeenDisabled() const;

	// BrnPropEntityModuleIO.h:449
	const InputBuffer_PreScene::PropGraphicsLoadedQueue * GetPropGraphicsLoadedQueue() const;

	// BrnPropEntityModuleIO.h:450
	InputBuffer_PreScene::PropGraphicsLoadedQueue * GetPropGraphicsLoadedQueue();

	// BrnPropEntityModuleIO.h:452
	const InputBuffer_PreScene::PropGraphicsUnloadedQueue * GetPropGraphicsUnloadedQueue() const;

	// BrnPropEntityModuleIO.h:453
	InputBuffer_PreScene::PropGraphicsUnloadedQueue * GetPropGraphicsUnloadedQueue();

	// BrnPropEntityModuleIO.h:455
	const InputBuffer_PreScene::PropInstancesNeededForZoneQueue * GetPropInstancesNeededForZoneQueue() const;

	// BrnPropEntityModuleIO.h:456
	InputBuffer_PreScene::PropInstancesNeededForZoneQueue * GetPropInstancesNeededForZoneQueue();

	// BrnPropEntityModuleIO.h:459
	const Profile::HitPropsBitArray & GetHitPropsBitArray() const;

	// BrnPropEntityModuleIO.h:463
	void SetHitPropsBitArray(const Profile::HitPropsBitArray &);

}

// BrnPropEntityModuleIO.h:500
struct BrnWorld::PropEntityIO::InputBuffer_PostScene : public IOBuffer {
private:
	// BrnPropEntityModuleIO.h:519
	RaceCarOutputInterface::RaceCarCrashCompleteEventQueue mRaceCarCrashCompleteEventQueue;

public:
	// BrnPropEntityModuleIO.h:505
	void Construct();

	// BrnPropEntityModuleIO.h:509
	void Destruct();

	// BrnPropEntityModuleIO.h:513
	void AppendRaceCarCrashQueue(const RaceCarOutputInterface::RaceCarCrashCompleteEventQueue *);

	// BrnPropEntityModuleIO.h:516
	const RaceCarOutputInterface::RaceCarCrashCompleteEventQueue * GetCrashEventQueue() const;

}

// BrnPropEntityModuleIO.h:529
struct BrnWorld::PropEntityIO::InputBuffer_PrePhysics : public IOBuffer {
private:
	// BrnPropEntityModuleIO.h:547
	OutputBuffer::OutPotentialContactQueue mPotentialContactQueue;

	// BrnPropEntityModuleIO.h:548
	AIModuleResultInterface::ResetOnTrackResultQueue mResetOnTrackResultQueue;

public:
	// BrnPropEntityModuleIO.h:534
	void Construct();

	// BrnPropEntityModuleIO.h:538
	void Destruct();

	// BrnPropEntityModuleIO.h:540
	const OutputBuffer::OutPotentialContactQueue * GetPotentialContactQueue() const;

	// BrnPropEntityModuleIO.h:541
	void AppendPotentialContactQueue(const OutputBuffer::OutPotentialContactQueue *);

	// BrnPropEntityModuleIO.h:543
	const AIModuleResultInterface::ResetOnTrackResultQueue * GetResetOnTrackResultQueue() const;

	// BrnPropEntityModuleIO.h:544
	void AppendResetOnTrackResultQueue(const AIModuleResultInterface::ResetOnTrackResultQueue *);

}

// BrnPropEntityModuleIO.h:558
struct BrnWorld::PropEntityIO::InputBuffer_PostPhysics : public IOBuffer {
	// BrnPropEntityModuleIO.h:77
	typedef ContactSpyInterface ContactSpyInterface;

private:
	// BrnPropEntityModuleIO.h:576
	InputBuffer_PostPhysics::ContactSpyInterface mContactSpyInterface;

	// BrnPropEntityModuleIO.h:577
	PropOutputInterface::UpdatePropEventQueue mUpdatedPropQueue;

public:
	// BrnPropEntityModuleIO.h:563
	void Construct();

	// BrnPropEntityModuleIO.h:567
	void Destruct();

	// BrnPropEntityModuleIO.h:569
	const InputBuffer_PostPhysics::ContactSpyInterface * GetContactSpyInterface() const;

	// BrnPropEntityModuleIO.h:570
	const PropOutputInterface::UpdatePropEventQueue * GetUpdatedPropQueue() const;

	// BrnPropEntityModuleIO.h:572
	InputBuffer_PostPhysics::ContactSpyInterface * GetContactSpyInterface();

	// BrnPropEntityModuleIO.h:573
	void AppendUpdatedPropQueue(const PropOutputInterface::UpdatePropEventQueue *);

}

// BrnPropEntityModuleIO.h:623
struct BrnWorld::PropEntityIO::OutputBuffer_PreScene : public IOBuffer {
private:
	// BrnPropEntityModuleIO.h:647
	OutputBuffer_Prepare::ResourceRequestInterface mResourceRequestInterface;

	// BrnPropEntityModuleIO.h:648
	OutputBuffer_Prepare::SceneInputInterface mSceneInputInterface;

	// BrnPropEntityModuleIO.h:649
	OutputBuffer_Prepare::PropInputInterface mPropInputInterface;

	// BrnPropEntityModuleIO.h:650
	GuiOverheadSignInfoEvent::VisibleOverheadSignArray mVisibleOverheadSignArray;

public:
	// BrnPropEntityModuleIO.h:628
	void Construct();

	// BrnPropEntityModuleIO.h:632
	void Destruct();

	// BrnPropEntityModuleIO.h:634
	const OutputBuffer_Prepare::SceneInputInterface * GetSceneInputInterface() const;

	// BrnPropEntityModuleIO.h:635
	const OutputBuffer_Prepare::PropInputInterface * GetPropInputInterface() const;

	// BrnPropEntityModuleIO.h:637
	OutputBuffer_Prepare::SceneInputInterface * GetSceneInputInterface();

	// BrnPropEntityModuleIO.h:638
	OutputBuffer_Prepare::PropInputInterface * GetPropInputInterface();

	// BrnPropEntityModuleIO.h:640
	const OutputBuffer_Prepare::ResourceRequestInterface * GetResourceRequestInterface() const;

	// BrnPropEntityModuleIO.h:641
	OutputBuffer_Prepare::ResourceRequestInterface * GetResourceRequestInterface();

	// BrnPropEntityModuleIO.h:643
	const GuiOverheadSignInfoEvent::VisibleOverheadSignArray * GetVisibleOverheadSignArray() const;

	// BrnPropEntityModuleIO.h:644
	GuiOverheadSignInfoEvent::VisibleOverheadSignArray * GetVisibleOverheadSignArray();

}

// BrnPropEntityModuleIO.h:661
struct BrnWorld::PropEntityIO::OutputBuffer_PostScene : public IOBuffer {
public:
	// BrnPropEntityModuleIO.h:666
	void Construct();

	// BrnPropEntityModuleIO.h:670
	void Destruct();

}

// BrnPropEntityModuleIO.h:683
struct BrnWorld::PropEntityIO::OutputBuffer_PrePhysics : public IOBuffer {
private:
	// BrnPropEntityModuleIO.h:702
	OutputBuffer_Prepare::PropInputInterface mPropInputInterface;

	// BrnPropEntityModuleIO.h:703
	PropToTrafficInterface mPropToTrafficInterface;

public:
	// BrnPropEntityModuleIO.h:688
	void Construct();

	// BrnPropEntityModuleIO.h:692
	void Destruct();

	// BrnPropEntityModuleIO.h:694
	const OutputBuffer_Prepare::PropInputInterface * GetPropInputInterface() const;

	// BrnPropEntityModuleIO.h:696
	OutputBuffer_Prepare::PropInputInterface * GetPropInputInterface();

	// BrnPropEntityModuleIO.h:698
	const PropToTrafficInterface * GetPropToTrafficInterface() const;

	// BrnPropEntityModuleIO.h:699
	PropToTrafficInterface * GetPropToTrafficInterface();

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnPropToTrafficInterface.h:33
	namespace PropEntityIO {
		// BrnPropEntityModuleIO.h:60
		const uint32_t KU_RESOURCE_REQUEST_QUEUE_SIZE = 1024;

		// BrnPropEntityModuleIO.h:61
		const uint32_t KU_PROP_LOADED_GRAPHICS_QUEUE_SIZE = 25;

		// BrnPropEntityModuleIO.h:62
		const uint32_t KU_PROP_UNLOADED_GRAPHICS_QUEUE_SIZE = 25;

		// BrnPropEntityModuleIO.h:63
		const uint32_t KU_HIT_PROP_QUEUE_SIZE = 100;

		// BrnPropEntityModuleIO.h:64
		const uint32_t KU_BROKEN_PROP_QUEUE_SIZE = 50;

		// BrnPropEntityModuleIO.h:65
		const uint32_t KU_PROP_INSTANCES_NEEDED_QUEUE_SIZE = 30;

		// BrnPropEntityModuleIO.h:66
		const uint32_t KU_PROP_VFX_QUEUE_SIZE = 10;

		// BrnPropEntityModuleIO.h:67
		const uint32_t KU_RECORD_HIT_PROP_QUEUE_SIZE = 50;

		// BrnPropEntityModuleIO.h:68
		const uint32_t KU_PROP_BECAME_PHYSICAL_QUEUE_SIZE = 20;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnPropToTrafficInterface.h:33
	namespace PropEntityIO {
		// BrnPropEntityModuleIO.h:60
		const uint32_t KU_RESOURCE_REQUEST_QUEUE_SIZE = 1024;

		// BrnPropEntityModuleIO.h:61
		const uint32_t KU_PROP_LOADED_GRAPHICS_QUEUE_SIZE = 25;

		// BrnPropEntityModuleIO.h:62
		const uint32_t KU_PROP_UNLOADED_GRAPHICS_QUEUE_SIZE = 25;

		// BrnPropEntityModuleIO.h:63
		const uint32_t KU_HIT_PROP_QUEUE_SIZE = 100;

		// BrnPropEntityModuleIO.h:64
		const uint32_t KU_BROKEN_PROP_QUEUE_SIZE = 50;

		// BrnPropEntityModuleIO.h:65
		const uint32_t KU_PROP_INSTANCES_NEEDED_QUEUE_SIZE = 30;

		// BrnPropEntityModuleIO.h:66
		const uint32_t KU_PROP_VFX_QUEUE_SIZE = 10;

		// BrnPropEntityModuleIO.h:67
		const uint32_t KU_RECORD_HIT_PROP_QUEUE_SIZE = 50;

		// BrnPropEntityModuleIO.h:68
		const uint32_t KU_PROP_BECAME_PHYSICAL_QUEUE_SIZE = 20;

	}

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnPropToTrafficInterface.h:33
	namespace PropEntityIO {
		// BrnPropEntityModuleIO.h:60
		const uint32_t KU_RESOURCE_REQUEST_QUEUE_SIZE = 1024;

		// BrnPropEntityModuleIO.h:61
		const uint32_t KU_PROP_LOADED_GRAPHICS_QUEUE_SIZE = 25;

		// BrnPropEntityModuleIO.h:62
		const uint32_t KU_PROP_UNLOADED_GRAPHICS_QUEUE_SIZE = 25;

		// BrnPropEntityModuleIO.h:63
		const uint32_t KU_HIT_PROP_QUEUE_SIZE = 100;

		// BrnPropEntityModuleIO.h:64
		const uint32_t KU_BROKEN_PROP_QUEUE_SIZE = 50;

		// BrnPropEntityModuleIO.h:65
		const uint32_t KU_PROP_INSTANCES_NEEDED_QUEUE_SIZE = 30;

		// BrnPropEntityModuleIO.h:66
		const uint32_t KU_PROP_VFX_QUEUE_SIZE = 10;

		// BrnPropEntityModuleIO.h:67
		const uint32_t KU_RECORD_HIT_PROP_QUEUE_SIZE = 50;

		// BrnPropEntityModuleIO.h:68
		const uint32_t KU_PROP_BECAME_PHYSICAL_QUEUE_SIZE = 20;

	}

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnPropToTrafficInterface.h:33
	namespace PropEntityIO {
		// BrnPropEntityModuleIO.h:60
		const uint32_t KU_RESOURCE_REQUEST_QUEUE_SIZE = 1024;

		// BrnPropEntityModuleIO.h:61
		const uint32_t KU_PROP_LOADED_GRAPHICS_QUEUE_SIZE = 25;

		// BrnPropEntityModuleIO.h:62
		const uint32_t KU_PROP_UNLOADED_GRAPHICS_QUEUE_SIZE = 25;

		// BrnPropEntityModuleIO.h:63
		const uint32_t KU_HIT_PROP_QUEUE_SIZE = 100;

		// BrnPropEntityModuleIO.h:64
		const uint32_t KU_BROKEN_PROP_QUEUE_SIZE = 50;

		// BrnPropEntityModuleIO.h:65
		const uint32_t KU_PROP_INSTANCES_NEEDED_QUEUE_SIZE = 30;

		// BrnPropEntityModuleIO.h:66
		const uint32_t KU_PROP_VFX_QUEUE_SIZE = 10;

		// BrnPropEntityModuleIO.h:67
		const uint32_t KU_RECORD_HIT_PROP_QUEUE_SIZE = 50;

		// BrnPropEntityModuleIO.h:68
		const uint32_t KU_PROP_BECAME_PHYSICAL_QUEUE_SIZE = 20;

	}

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnPropToTrafficInterface.h:33
	namespace PropEntityIO {
		// Declaration
		struct PropVFXLocatorEvent {
			// BrnPropEntityModuleIO.h:228
			enum EEventType {
				E_EVENTTYPE_PROPHIT = 0,
				E_EVENTTYPE_PROPSMASH = 1,
				E_EVENTTYPE_MAX = 2,
			}

		}

		// BrnPropEntityModuleIO.h:60
		const uint32_t KU_RESOURCE_REQUEST_QUEUE_SIZE = 1024;

		// BrnPropEntityModuleIO.h:61
		const uint32_t KU_PROP_LOADED_GRAPHICS_QUEUE_SIZE = 25;

		// BrnPropEntityModuleIO.h:62
		const uint32_t KU_PROP_UNLOADED_GRAPHICS_QUEUE_SIZE = 25;

		// BrnPropEntityModuleIO.h:63
		const uint32_t KU_HIT_PROP_QUEUE_SIZE = 100;

		// BrnPropEntityModuleIO.h:64
		const uint32_t KU_BROKEN_PROP_QUEUE_SIZE = 50;

		// BrnPropEntityModuleIO.h:65
		const uint32_t KU_PROP_INSTANCES_NEEDED_QUEUE_SIZE = 30;

		// BrnPropEntityModuleIO.h:66
		const uint32_t KU_PROP_VFX_QUEUE_SIZE = 10;

		// BrnPropEntityModuleIO.h:67
		const uint32_t KU_RECORD_HIT_PROP_QUEUE_SIZE = 50;

		// BrnPropEntityModuleIO.h:68
		const uint32_t KU_PROP_BECAME_PHYSICAL_QUEUE_SIZE = 20;

	}

}

