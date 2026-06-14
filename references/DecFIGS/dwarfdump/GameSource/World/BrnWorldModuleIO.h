// BrnWorldModuleIO.h:65
namespace BrnWorldIO {
	struct UpdateInputBuffer;

	struct UpdateOutputBuffer;

	// BrnWorldModuleIO.h:67
	const int32_t KI_WORLD_EVENT_QUEUE_MAX_SIZE = 4096;

	// BrnWorldModuleIO.h:68
	const int32_t KI_WORLD_RENDER_EVENT_QUEUE_MAX_SIZE = 32768;

}

// BrnWorldModuleIO.h:184
struct BrnWorldIO::UpdateInputBuffer : public IOBuffer {
private:
	// BrnWorldModuleIO.h:324
	uint16_t[8] mau16RaceCarColourIndex;

	// BrnWorldModuleIO.h:325
	uint16_t[8] mau16RaceCarPaintFinishIndex;

	// BrnWorldModuleIO.h:326
	bool[8] mabRaceCarColourIndexValid;

	// BrnWorldModuleIO.h:327
	bool[8] mabRaceCarPaintFinishIndexValid;

	// BrnWorldModuleIO.h:328
	bool[8] mabLostContactThisFrame;

	// BrnWorldModuleIO.h:329
	bool[8] mabRegainedContactThisFrame;

	// BrnWorldModuleIO.h:330
	bool[8] mabCarSelectStatus;

	// BrnWorldModuleIO.h:331
	bool[8] mabCarSelectStatusValid;

	// BrnWorldModuleIO.h:332
	VehicleInputInterface mVehicleInputInterface;

	// BrnWorldModuleIO.h:333
	VehicleDriverInputInterface mVehicleDriverInputInterface;

	// BrnWorldModuleIO.h:334
	int32_t miPlayerRaceCarIndex;

	// Unknown accessibility
	// BrnWorldModuleIO.h:142
	typedef InputBuffer::GameActionQueue GameActionQueue;

	// BrnWorldModuleIO.h:335
	UpdateInputBuffer::GameActionQueue mGameActionQueue;

	// BrnWorldModuleIO.h:336
	TimerStatusInterface mTimerStatusInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:143
	typedef InputBuffer::TakedownEventQueue TakedownEventQueue;

	// BrnWorldModuleIO.h:337
	UpdateInputBuffer::TakedownEventQueue mTakedownEventQueue;

	// Unknown accessibility
	// BrnWorldModuleIO.h:151
	typedef TriggerManagementInputInterface TriggerManagementInputInterface;

	// BrnWorldModuleIO.h:338
	UpdateInputBuffer::TriggerManagementInputInterface mTriggerManagementInputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:152
	typedef TriggerQueryInputInterface TriggerQueryInputInterface;

	// BrnWorldModuleIO.h:339
	UpdateInputBuffer::TriggerQueryInputInterface mTriggerQueryInputInterface;

	// BrnWorldModuleIO.h:340
	BrnNetwork::EPaybackType meActivePaybackType;

	// BrnWorldModuleIO.h:341
	EActiveRaceCarIndex meActivePaybackAggressor;

	// Unknown accessibility
	// BrnWorldModuleIO.h:91
	typedef VariableEventQueue<4096,16> InWorldEventQueue;

	// BrnWorldModuleIO.h:342
	UpdateInputBuffer::InWorldEventQueue mInWorldEventQueue;

	// Unknown accessibility
	// BrnWorldModuleIO.h:121
	typedef TrafficNetworkInputInterface TrafficNetworkInputInterface;

	// BrnWorldModuleIO.h:343
	UpdateInputBuffer::TrafficNetworkInputInterface mTrafficNetworkInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:127
	typedef NetworkInputInterface CrashNetworkInputInterface;

	// BrnWorldModuleIO.h:344
	UpdateInputBuffer::CrashNetworkInputInterface mCrashNetworkInterface;

	// BrnWorldModuleIO.h:345
	PlayerVehicleControls mPlayerVehicleControls;

	// BrnWorldModuleIO.h:346
	DebugController mDebugController;

	// Unknown accessibility
	// BrnWorldModuleIO.h:144
	typedef RaceCarRaceDistanceInterface RaceCarRaceDistanceInterface;

	// BrnWorldModuleIO.h:347
	UpdateInputBuffer::RaceCarRaceDistanceInterface mRaceCarRaceDistanceInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:145
	typedef ScoringOutputInterface ScoringInterface;

	// BrnWorldModuleIO.h:348
	UpdateInputBuffer::ScoringInterface mScoringInterface;

	// BrnWorldModuleIO.h:349
	bool mbControllerActive;

	// BrnWorldModuleIO.h:350
	RequestInterface mWorldEntityRequestInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:170
	typedef StatusInterface ReplayStatusInterface;

	// BrnWorldModuleIO.h:351
	UpdateInputBuffer::ReplayStatusInterface mReplayStatusInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:173
	typedef InputBuffer_PreScene::AudioCarLoadedDataQueue AudioCarLoadedDataQueue;

	// BrnWorldModuleIO.h:352
	UpdateInputBuffer::AudioCarLoadedDataQueue mAudioCarDataLoadedQueue;

	// BrnWorldModuleIO.h:353
	InputBuffer::RaceRouteRequestQueue mRaceRouteRequestQueue;

	// Unknown accessibility
	// BrnWorldModuleIO.h:146
	typedef OnlineScoringOutputInterface OnlineScoringInterface;

	// BrnWorldModuleIO.h:354
	UpdateInputBuffer::OnlineScoringInterface mOnlineScoringInterface;

public:
	// BrnWorldModuleIO.h:189
	void Construct();

	// BrnWorldModuleIO.h:193
	void Destruct();

	// BrnWorldModuleIO.h:198
	void AddGameInputData(const PlayerVehicleControls *);

	// BrnWorldModuleIO.h:203
	void SetRaceCarColourIndex(EActiveRaceCarIndex, uint16_t);

	// BrnWorldModuleIO.h:207
	uint16_t GetRaceCarColourIndex(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:211
	bool IsRaceCarColourIndexValid(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:216
	void SetRaceCarPaintFinishIndex(EActiveRaceCarIndex, uint16_t);

	// BrnWorldModuleIO.h:220
	uint16_t GetRaceCarPaintFinishIndex(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:224
	bool IsRaceCarPaintFinishValid(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:228
	void SetLostContact(EActiveRaceCarIndex);

	// BrnWorldModuleIO.h:232
	bool GetLostContact(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:236
	void SetRegainedContact(EActiveRaceCarIndex);

	// BrnWorldModuleIO.h:240
	bool GetRegainedContact(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:245
	void SetCarSelectStatus(EActiveRaceCarIndex, bool);

	// BrnWorldModuleIO.h:249
	bool GetCarSelectStatus(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:253
	bool IsCarSelectStatusValid(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:255
	const InputBuffer::RaceRouteRequestQueue * GetRaceRouteRequestQueue() const;

	// BrnWorldModuleIO.h:256
	InputBuffer::RaceRouteRequestQueue * GetRaceRouteRequestQueue();

	// BrnWorldModuleIO.h:257
	void AppendRaceRouteRequestQueue(const InputBuffer::RaceRouteRequestQueue *);

	// BrnWorldModuleIO.h:259
	const VehicleInputInterface * GetVehicleInputInterface() const;

	// BrnWorldModuleIO.h:260
	void AppendVehicleInputInterface(const VehicleInputInterface *);

	// BrnWorldModuleIO.h:262
	const VehicleDriverInputInterface * GetVehicleDriverInputInterface() const;

	// BrnWorldModuleIO.h:263
	void AppendVehicleDriverInputInterface(const VehicleDriverInputInterface *);

	// BrnWorldModuleIO.h:265
	const UpdateInputBuffer::GameActionQueue * GetGameActionQueue() const;

	// BrnWorldModuleIO.h:266
	UpdateInputBuffer::GameActionQueue * GetGameActionQueue();

	// BrnWorldModuleIO.h:267
	void AppendGameActionQueue(const UpdateInputBuffer::GameActionQueue *);

	// BrnWorldModuleIO.h:269
	const TimerStatusInterface * GetTimerStatusInterface() const;

	// BrnWorldModuleIO.h:270
	void SetTimerStatusInterface(const TimerStatusInterface *);

	// BrnWorldModuleIO.h:272
	const UpdateInputBuffer::TakedownEventQueue * GetTakedownEventQueue() const;

	// BrnWorldModuleIO.h:273
	void AppendTakedownEventQueue(const UpdateInputBuffer::TakedownEventQueue *);

	// BrnWorldModuleIO.h:275
	const UpdateInputBuffer::TriggerManagementInputInterface * GetTriggerManagementInputInterface() const;

	// BrnWorldModuleIO.h:276
	void AppendTriggerManagementInputInterface(const UpdateInputBuffer::TriggerManagementInputInterface *);

	// BrnWorldModuleIO.h:278
	const UpdateInputBuffer::TriggerQueryInputInterface * GetTriggerQueryInputInterface() const;

	// BrnWorldModuleIO.h:279
	void AppendTriggerQueryInputInterface(const UpdateInputBuffer::TriggerQueryInputInterface *);

	// BrnWorldModuleIO.h:281
	const PlayerVehicleControls * GetPlayerVehicleControls() const;

	// BrnWorldModuleIO.h:282
	void SetPlayerVehicleControls(const PlayerVehicleControls *);

	// BrnWorldModuleIO.h:284
	const UpdateInputBuffer::TrafficNetworkInputInterface * GetTrafficNetworkInterface() const;

	// BrnWorldModuleIO.h:285
	void SetTrafficNetworkInterface(const UpdateInputBuffer::TrafficNetworkInputInterface *);

	// BrnWorldModuleIO.h:287
	const UpdateInputBuffer::CrashNetworkInputInterface * GetCrashNetworkInterface() const;

	// BrnWorldModuleIO.h:288
	void SetCrashNetworkInterface(const UpdateInputBuffer::CrashNetworkInputInterface *);

	// BrnWorldModuleIO.h:290
	const DebugController * GetDebugController() const;

	// BrnWorldModuleIO.h:291
	DebugController * GetDebugController();

	// BrnWorldModuleIO.h:292
	void SetDebugController(const DebugController *);

	// BrnWorldModuleIO.h:294
	const UpdateInputBuffer::RaceCarRaceDistanceInterface * GetRaceCarRaceDistanceInterface() const;

	// BrnWorldModuleIO.h:295
	void SetRaceCarRaceDistanceInterface(const UpdateInputBuffer::RaceCarRaceDistanceInterface *);

	// BrnWorldModuleIO.h:297
	const UpdateInputBuffer::ScoringInterface * GetScoringInterface() const;

	// BrnWorldModuleIO.h:298
	void SetScoringInterface(const UpdateInputBuffer::ScoringInterface *);

	// BrnWorldModuleIO.h:300
	const UpdateInputBuffer::OnlineScoringInterface * GetOnlineScoringInterface() const;

	// BrnWorldModuleIO.h:301
	void SetOnlineScoringInterface(const UpdateInputBuffer::OnlineScoringInterface *);

	// BrnWorldModuleIO.h:303
	bool GetControllerActive() const;

	// BrnWorldModuleIO.h:304
	void SetControllerActive(bool);

	// BrnWorldModuleIO.h:306
	void AppendWorldEntityRequestInterface(const RequestInterface *);

	// BrnWorldModuleIO.h:307
	RequestInterface * GetWorldEntityRequestInterface();

	// BrnWorldModuleIO.h:308
	const RequestInterface * GetWorldEntityRequestInterface() const;

	// BrnWorldModuleIO.h:310
	const UpdateInputBuffer::ReplayStatusInterface * GetReplayStatusInterface() const;

	// BrnWorldModuleIO.h:311
	void SetReplayStatusInterface(const UpdateInputBuffer::ReplayStatusInterface *);

	// BrnWorldModuleIO.h:313
	const UpdateInputBuffer::AudioCarLoadedDataQueue * GetAudioCarDataLoadedQueue() const;

	// BrnWorldModuleIO.h:314
	UpdateInputBuffer::AudioCarLoadedDataQueue * GetAudioCarDataLoadedQueue();

	// BrnWorldModuleIO.h:316
	BrnNetwork::EPaybackType GetActivePaybackType() const;

	// BrnWorldModuleIO.h:317
	void SetActivePaybackType(BrnNetwork::EPaybackType);

	// BrnWorldModuleIO.h:319
	EActiveRaceCarIndex GetActivePaybackAggressor() const;

	// BrnWorldModuleIO.h:320
	void SetActivePaybackAggressor(EActiveRaceCarIndex);

}

// BrnWorldModuleIO.h:499
struct BrnWorldIO::UpdateOutputBuffer : public IOBuffer {
private:
	// BrnWorldModuleIO.h:621
	VehicleOutputInterface mVehicleOutputInterface;

	// BrnWorldModuleIO.h:622
	VehicleManagerOutputInterface mVehicleManagerOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:149
	typedef RCEntityActiveRaceCarOutputInterface RCEntityActiveRaceCarOutputInterface;

	// BrnWorldModuleIO.h:623
	UpdateOutputBuffer::RCEntityActiveRaceCarOutputInterface mActiveRaceCarOutputInterface;

	// BrnWorldModuleIO.h:624
	UpdateOutputBuffer::RCEntityActiveRaceCarOutputInterface mReplayActiveRaceCarOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:153
	typedef TriggerEntityModuleOutputInterface TriggerEntityModuleOutputInterface;

	// BrnWorldModuleIO.h:625
	UpdateOutputBuffer::TriggerEntityModuleOutputInterface mTriggerEntityOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:159
	typedef BrnDirectorVehicleInputInterface DirectorVehicleInputInterface;

	// BrnWorldModuleIO.h:626
	UpdateOutputBuffer::DirectorVehicleInputInterface mDirectorVehicleInputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:150
	typedef RCEntityGlobalRaceCarOutputInterface RCEntityGlobalOutputInterface;

	// BrnWorldModuleIO.h:627
	UpdateOutputBuffer::RCEntityGlobalOutputInterface mRaceCarGlobalOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:156
	typedef AICarOutputInterface AICarOutputInterface;

	// BrnWorldModuleIO.h:628
	UpdateOutputBuffer::AICarOutputInterface mAICarOutputInterface;

	// BrnWorldModuleIO.h:629
	OutputBuffer::RouteResponseQueue mRouteResponseQueue;

	// BrnWorldModuleIO.h:630
	UpdateInputBuffer::AudioCarLoadedDataQueue mAudioCarLoadedDataQueue;

	// BrnWorldModuleIO.h:632
	TrafficDirectorOutputInterface mTrafficDirectorOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:161
	typedef ContactSpyInterface ContactSpyInterface;

	// BrnWorldModuleIO.h:634
	UpdateOutputBuffer::ContactSpyInterface mContactSpyInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:115
	typedef RequestInterface<4096> WorldResourceRequestInterface;

	// BrnWorldModuleIO.h:635
	UpdateOutputBuffer::WorldResourceRequestInterface mResourceRequestInterface;

	// BrnWorldModuleIO.h:636
	PlayerVehicleControls mPlayerVehicleControls;

	// Unknown accessibility
	// BrnWorldModuleIO.h:118
	typedef AttribSysRequestInterface<2048> AttribSysVaultRequestInterface;

	// BrnWorldModuleIO.h:637
	UpdateOutputBuffer::AttribSysVaultRequestInterface mAttribSysVaultRequestInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:122
	typedef TrafficNetworkOutputInterface TrafficNetworkOutputInterface;

	// BrnWorldModuleIO.h:638
	UpdateOutputBuffer::TrafficNetworkOutputInterface mTrafficNetworkOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:123
	typedef TrafficSoundOutputInterface TrafficSoundOutputInterface;

	// BrnWorldModuleIO.h:639
	UpdateOutputBuffer::TrafficSoundOutputInterface mTrafficSoundOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:124
	typedef OutputBuffer_PostPhysics::TrafficTypeResponseQueue TrafficTypeResponseQueue;

	// BrnWorldModuleIO.h:640
	UpdateOutputBuffer::TrafficTypeResponseQueue mTrafficTypeResponseQueue;

	// Unknown accessibility
	// BrnWorldModuleIO.h:128
	typedef NetworkOutputInterface CrashNetworkOutputInterface;

	// BrnWorldModuleIO.h:641
	UpdateOutputBuffer::CrashNetworkOutputInterface mCrashNetworkOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:138
	typedef DeformationOutputInterface DeformationOutputInterface;

	// BrnWorldModuleIO.h:642
	UpdateOutputBuffer::DeformationOutputInterface mDeformationOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:164
	typedef EffectsEnvironmentInterface EffectsEnvironmentInterface;

	// BrnWorldModuleIO.h:643
	UpdateOutputBuffer::EffectsEnvironmentInterface mEffectsEnvironmentInterface;

	// BrnWorldModuleIO.h:644
	StatusInterface mWorldEntityStatusInterface;

	// Unknown accessibility
	// BrnSoundRootSharedIO.h:145
	typedef EventQueue<BrnSound::Module::Io::SoundWorldLoadEvent,25> SoundWorldLoadInterface;

	// BrnWorldModuleIO.h:645
	UpdateOutputBuffer::SoundWorldLoadInterface mSoundWorldLoadInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:171
	typedef RequestInterface ReplayRequestInterface;

	// BrnWorldModuleIO.h:646
	UpdateOutputBuffer::ReplayRequestInterface mReplayRequestInterface;

	// BrnWorldModuleIO.h:647
	OutputBuffer_PostPhysics::PropVFXLocatorQueue mPropVFXLocatorQueue;

	// BrnWorldModuleIO.h:648
	InputBuffer::GuiEventInputQueue mGuiEventQueue;

	// BrnWorldModuleIO.h:650
	OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue mPropBecamePhysicalEventQueue;

	// BrnWorldModuleIO.h:651
	PropOutputInterface::PropUpdateNotificationQueue mPropUpdateNotificationQueue;

	// Unknown accessibility
	// BrnWorldModuleIO.h:167
	typedef TriangleCacheInterface OutTriangleCacheInterface;

	// BrnWorldModuleIO.h:654
	UpdateOutputBuffer::OutTriangleCacheInterface mTriangleCacheInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:141
	typedef GameEventQueue GameEventQueue;

	// BrnWorldModuleIO.h:658
	UpdateOutputBuffer::GameEventQueue mGameEventQueue;

	// BrnWorldModuleIO.h:659
	bool mbWorldWantsDebugControllerFocus;

public:
	// BrnWorldModuleIO.h:504
	void Construct();

	// BrnWorldModuleIO.h:508
	void Destruct();

	// BrnWorldModuleIO.h:511
	EActiveRaceCarIndex GetPlayerActiveRaceCarIndex() const;

	// BrnWorldModuleIO.h:514
	EGlobalRaceCarIndex GetPlayerGlobalRaceCarIndex() const;

	// BrnWorldModuleIO.h:518
	void AppendTriangleCacheInterface(const VehicleInputInterface::InTriangleCacheInterface *);

	// BrnWorldModuleIO.h:520
	const UpdateOutputBuffer::WorldResourceRequestInterface * GetResourceRequestInterface() const;

	// BrnWorldModuleIO.h:521
	UpdateOutputBuffer::WorldResourceRequestInterface * GetResourceRequestInterface();

	// BrnWorldModuleIO.h:522
	void AppendResourceRequestInterface(const UpdateOutputBuffer::WorldResourceRequestInterface *);

	// BrnWorldModuleIO.h:524
	const UpdateOutputBuffer::AttribSysVaultRequestInterface * GetAttribSysVaultRequestInterface() const;

	// BrnWorldModuleIO.h:525
	UpdateOutputBuffer::AttribSysVaultRequestInterface * GetAttribSysVaultRequestInterface();

	// BrnWorldModuleIO.h:526
	void AppendAttribSysVaultRequestInterface(const UpdateOutputBuffer::AttribSysVaultRequestInterface *);

	// Unknown accessibility
	// BrnWorldModuleIO.h:132
	typedef VehicleOutputInterface VehicleOutputInterface;

	// BrnWorldModuleIO.h:528
	const UpdateOutputBuffer::VehicleOutputInterface * GetVehicleOutputInterface() const;

	// BrnWorldModuleIO.h:529
	UpdateOutputBuffer::VehicleOutputInterface * GetVehicleOutputInterface();

	// Unknown accessibility
	// BrnWorldModuleIO.h:133
	typedef VehicleManagerOutputInterface VehicleManagerOutputInterface;

	// BrnWorldModuleIO.h:531
	const UpdateOutputBuffer::VehicleManagerOutputInterface * GetVehicleManagerOutputInterface() const;

	// BrnWorldModuleIO.h:532
	UpdateOutputBuffer::VehicleManagerOutputInterface * GetVehicleManagerOutputInterface();

	// BrnWorldModuleIO.h:533
	void SetVehicleManagerOutputInterface(const UpdateOutputBuffer::VehicleManagerOutputInterface *);

	// BrnWorldModuleIO.h:535
	const UpdateOutputBuffer::DirectorVehicleInputInterface * GetDirectorVehicleInputInterface() const;

	// BrnWorldModuleIO.h:536
	void SetDirectorVehicleInputInterface(const UpdateOutputBuffer::DirectorVehicleInputInterface *);

	// BrnWorldModuleIO.h:538
	const UpdateOutputBuffer::RCEntityGlobalOutputInterface * GetRaceCarGlobalOutputInterface() const;

	// BrnWorldModuleIO.h:539
	void SetRaceCarGlobalOutputInterface(const UpdateOutputBuffer::RCEntityGlobalOutputInterface *);

	// BrnWorldModuleIO.h:541
	const UpdateOutputBuffer::TriggerEntityModuleOutputInterface * GetTriggerEntityOutputInterface() const;

	// BrnWorldModuleIO.h:542
	void SetTriggerEntityOutputInterface(const UpdateOutputBuffer::TriggerEntityModuleOutputInterface *);

	// BrnWorldModuleIO.h:544
	const UpdateOutputBuffer::RCEntityActiveRaceCarOutputInterface * GetActiveRaceCarOutputInterface() const;

	// BrnWorldModuleIO.h:545
	void SetActiveRaceCarOutputInterface(const UpdateOutputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnWorldModuleIO.h:547
	const UpdateOutputBuffer::RCEntityActiveRaceCarOutputInterface * GetReplayActiveRaceCarOutputInterface() const;

	// BrnWorldModuleIO.h:548
	void SetReplayActiveRaceCarOutputInterface(const UpdateOutputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnWorldModuleIO.h:550
	const UpdateOutputBuffer::ContactSpyInterface * GetContactSpyInterface() const;

	// BrnWorldModuleIO.h:551
	UpdateOutputBuffer::ContactSpyInterface * GetContactSpyInterface();

	// BrnWorldModuleIO.h:552
	void SetContactSpyInterface(const UpdateOutputBuffer::ContactSpyInterface *);

	// BrnWorldModuleIO.h:554
	const UpdateOutputBuffer::AICarOutputInterface * GetAICarOutputInterface() const;

	// BrnWorldModuleIO.h:555
	void SetAICarOutputInterface(const UpdateOutputBuffer::AICarOutputInterface *);

	// BrnWorldModuleIO.h:557
	const PlayerVehicleControls * GetPlayerVehicleControls() const;

	// BrnWorldModuleIO.h:558
	void SetPlayerVehicleControls(const PlayerVehicleControls *);

	// BrnWorldModuleIO.h:560
	const OutputBuffer::RouteResponseQueue * GetRouteResponseQueue() const;

	// BrnWorldModuleIO.h:561
	void AppendRouteResponseQueue(const OutputBuffer::RouteResponseQueue *);

	// BrnWorldModuleIO.h:563
	const UpdateOutputBuffer::TrafficNetworkOutputInterface * GetTrafficNetworkOutputInterface() const;

	// BrnWorldModuleIO.h:564
	void SetTrafficNetworkOutputInterface(const UpdateOutputBuffer::TrafficNetworkOutputInterface *);

	// BrnWorldModuleIO.h:566
	const UpdateOutputBuffer::TrafficSoundOutputInterface * GetTrafficSoundOutputInterface() const;

	// BrnWorldModuleIO.h:567
	void SetTrafficSoundOutputInterface(const UpdateOutputBuffer::TrafficSoundOutputInterface *);

	// BrnWorldModuleIO.h:569
	const TrafficDirectorOutputInterface * GetTrafficDirectorOutputInterface() const;

	// BrnWorldModuleIO.h:570
	void SetTrafficDirectorOutputInterface(const TrafficDirectorOutputInterface *);

	// BrnWorldModuleIO.h:572
	const UpdateOutputBuffer::CrashNetworkOutputInterface * GetCrashNetworkOutputInterface() const;

	// BrnWorldModuleIO.h:573
	void SetCrashNetworkOutputInterface(const UpdateOutputBuffer::CrashNetworkOutputInterface *);

	// BrnWorldModuleIO.h:575
	const UpdateOutputBuffer::GameEventQueue * GetGameEventQueue() const;

	// BrnWorldModuleIO.h:576
	UpdateOutputBuffer::GameEventQueue * GetGameEventQueue();

	// BrnWorldModuleIO.h:577
	void AppendGameEventQueue(const UpdateOutputBuffer::GameEventQueue *);

	// BrnWorldModuleIO.h:579
	const UpdateOutputBuffer::DeformationOutputInterface * GetDeformationOutputInterface() const;

	// BrnWorldModuleIO.h:580
	void SetDeformationOutputInterface(const UpdateOutputBuffer::DeformationOutputInterface *);

	// BrnWorldModuleIO.h:582
	bool GetWorldWantsDebugControllerFocus() const;

	// BrnWorldModuleIO.h:583
	void SetWorldWantsDebugControllerFocus(bool);

	// BrnWorldModuleIO.h:585
	const UpdateOutputBuffer::TrafficTypeResponseQueue * GetTrafficTypeResponseQueue() const;

	// BrnWorldModuleIO.h:586
	void AppendTrafficTypeResponseQueue(const UpdateOutputBuffer::TrafficTypeResponseQueue *);

	// BrnWorldModuleIO.h:588
	const UpdateOutputBuffer::EffectsEnvironmentInterface * GetEffectsEnvironmentInterface() const;

	// BrnWorldModuleIO.h:589
	UpdateOutputBuffer::EffectsEnvironmentInterface * GetEffectsEnvironmentInterface();

	// BrnWorldModuleIO.h:591
	const StatusInterface * GetWorldEntityStatusInterface() const;

	// BrnWorldModuleIO.h:592
	void SetWorldEntityStatusInterface(const StatusInterface *);

	// BrnWorldModuleIO.h:594
	const UpdateOutputBuffer::SoundWorldLoadInterface * GetSoundWorldLoadInterface() const;

	// BrnWorldModuleIO.h:595
	void AppendSoundWorldLoadInterface(const UpdateOutputBuffer::SoundWorldLoadInterface *);

	// BrnWorldModuleIO.h:597
	const UpdateOutputBuffer::ReplayRequestInterface * GetReplayRequestInterface() const;

	// BrnWorldModuleIO.h:598
	void AppendReplayRequestInterface(const UpdateOutputBuffer::ReplayRequestInterface *);

	// BrnWorldModuleIO.h:600
	void SetPropVFXLocatorQueue(const OutputBuffer_PostPhysics::PropVFXLocatorQueue *);

	// BrnWorldModuleIO.h:601
	OutputBuffer_PostPhysics::PropVFXLocatorQueue * GetPropVFXLocatorQueue();

	// BrnWorldModuleIO.h:602
	const OutputBuffer_PostPhysics::PropVFXLocatorQueue * GetPropVFXLocatorQueue() const;

	// BrnWorldModuleIO.h:604
	const UpdateInputBuffer::AudioCarLoadedDataQueue * GetAudioCarLoadedDataQueue() const;

	// BrnWorldModuleIO.h:605
	UpdateInputBuffer::AudioCarLoadedDataQueue * GetAudioCarLoadedDataQueue();

	// BrnWorldModuleIO.h:607
	const InputBuffer::GuiEventInputQueue * GetGuiEventQueue() const;

	// BrnWorldModuleIO.h:608
	InputBuffer::GuiEventInputQueue * GetGuiEventQueue();

	// BrnWorldModuleIO.h:610
	const UpdateOutputBuffer::OutTriangleCacheInterface * GetTriangleCacheInterface() const;

	// BrnWorldModuleIO.h:612
	const OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue * GetPropBecamePhysicalEventQueue() const;

	// BrnWorldModuleIO.h:613
	OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue * GetPropBecamePhysicalEventQueue();

	// BrnWorldModuleIO.h:614
	void AppendPropBecamePhysicalEventQueue(const OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue *);

	// BrnWorldModuleIO.h:616
	const PropOutputInterface::PropUpdateNotificationQueue * GetPropUpdateNotificationQueue() const;

	// BrnWorldModuleIO.h:617
	PropOutputInterface::PropUpdateNotificationQueue * GetPropUpdateNotificationQueue();

	// BrnWorldModuleIO.h:618
	void AppendPropUpdateNotificationQueue(const PropOutputInterface::PropUpdateNotificationQueue *);

}

// BrnWorldModuleIO.h:65
namespace BrnWorldIO {
	// BrnWorldModuleIO.h:67
	const int32_t KI_WORLD_EVENT_QUEUE_MAX_SIZE = 4096;

	// BrnWorldModuleIO.h:68
	const int32_t KI_WORLD_RENDER_EVENT_QUEUE_MAX_SIZE = 32768;

}

// BrnWorldModuleIO.h:65
namespace BrnWorldIO {
	struct UpdateInputBuffer;

	struct DispatchInputBuffer;

	struct DispatchOutputBuffer;

	struct UpdateOutputBuffer;

	// BrnWorldModuleIO.h:67
	const int32_t KI_WORLD_EVENT_QUEUE_MAX_SIZE = 4096;

	// BrnWorldModuleIO.h:68
	const int32_t KI_WORLD_RENDER_EVENT_QUEUE_MAX_SIZE = 32768;

}

// BrnWorldModuleIO.h:368
struct BrnWorldIO::DispatchInputBuffer : public IOBuffer {
private:
	// BrnWorldModuleIO.h:423
	CgsGraphics::DispatchFrame * mpDispatchFrame;

	// BrnWorldModuleIO.h:424
	Camera mCameraInput;

	// BrnWorldModuleIO.h:425
	BrnShaderConstantsFrame * mpShaderConstantsFrame;

	// BrnWorldModuleIO.h:429
	BrnEffectsFrame *[4] mapEffectsFrames;

	// BrnWorldModuleIO.h:431
	BrnBlobbyShadowManager::BrnBlobbyShadowBuffer * mpBlobbyShadowBuffer;

	// BrnWorldModuleIO.h:432
	BrnCoronaManager::BrnSubmissionInterface * mpCoronaSubmissionInterface;

	// BrnWorldModuleIO.h:434
	float32_t mfGameTime;

	// BrnWorldModuleIO.h:435
	float32_t mfSimTime;

	// BrnWorldModuleIO.h:436
	DispatchThreadInputBuffer * mpDispatchThreadInputBuffer;

	// BrnWorldModuleIO.h:438
	RenderSwitches mRenderSwitches;

public:
	// BrnWorldModuleIO.h:373
	void Construct();

	// BrnWorldModuleIO.h:377
	void Destruct();

	// BrnWorldModuleIO.h:380
	void SetDispatchFrame(CgsGraphics::DispatchFrame *);

	// BrnWorldModuleIO.h:383
	CgsGraphics::DispatchFrame * GetDispatchFrame() const;

	// BrnWorldModuleIO.h:385
	const Camera * GetCameraInput() const;

	// BrnWorldModuleIO.h:386
	void SetCameraInput(const Camera *);

	// BrnWorldModuleIO.h:388
	BrnShaderConstantsFrame * GetShaderConstantsFrame() const;

	// BrnWorldModuleIO.h:389
	void SetShaderConstantsFrame(BrnShaderConstantsFrame *);

	// BrnWorldModuleIO.h:393
	BrnEffectsFrame * GetEffectsFrame(uint8_t) const;

	// BrnWorldModuleIO.h:396
	void SetEffectsFrame(uint8_t, BrnEffectsFrame *);

	// BrnWorldModuleIO.h:398
	BrnBlobbyShadowManager::BrnBlobbyShadowBuffer * GetBlobbyShadowBuffer() const;

	// BrnWorldModuleIO.h:399
	void SetBlobbyShadowBuffer(BrnBlobbyShadowManager::BrnBlobbyShadowBuffer *);

	// BrnWorldModuleIO.h:401
	BrnCoronaManager::BrnSubmissionInterface * GetCoronaSubmissionInterface() const;

	// BrnWorldModuleIO.h:402
	void SetCoronaSubmissionInterface(BrnCoronaManager::BrnSubmissionInterface *);

	// BrnWorldModuleIO.h:405
	float32_t GetGameTime() const;

	// BrnWorldModuleIO.h:406
	void SetGameTime(float32_t);

	// BrnWorldModuleIO.h:407
	float32_t GetSimTime() const;

	// BrnWorldModuleIO.h:408
	void SetSimTime(float32_t);

	// BrnWorldModuleIO.h:411
	DispatchThreadInputBuffer * GetDispatchThreadInputBuffer() const;

	// BrnWorldModuleIO.h:412
	void SetDispatchThreadInputBuffer(DispatchThreadInputBuffer *);

	// BrnWorldModuleIO.h:416
	void SetRenderSwitches(const RenderSwitches &);

	// BrnWorldModuleIO.h:419
	const RenderSwitches & GetRenderSwitches() const;

}

// BrnWorldModuleIO.h:450
struct BrnWorldIO::DispatchOutputBuffer : public IOBuffer {
private:
	// BrnWorldModuleIO.h:480
	Matrix44 mmQuadricIrradianceA;

	// BrnWorldModuleIO.h:481
	Matrix44 mmQuadricIrradianceB;

	// BrnWorldModuleIO.h:482
	Vector4 mvFogColourPlusWhiteLevel;

	// BrnWorldModuleIO.h:483
	Vector4 mvFogScattering;

	// BrnWorldModuleIO.h:484
	Vector3 mvKeyLightDirection;

	// BrnWorldModuleIO.h:485
	Vector3 mvKeyLightColour;

	// BrnWorldModuleIO.h:486
	Vector3 mvAverageIrradianceColour;

	// BrnWorldModuleIO.h:487
	float32_t mfWhiteLevel;

public:
	// BrnWorldModuleIO.h:455
	void Construct();

	// BrnWorldModuleIO.h:459
	void Destruct();

	// BrnWorldModuleIO.h:462
	Matrix44 GetQuadricIrradianceA() const;

	// BrnWorldModuleIO.h:463
	void SetQuadricIrradianceA(Matrix44);

	// BrnWorldModuleIO.h:464
	Matrix44 GetQuadricIrradianceB() const;

	// BrnWorldModuleIO.h:465
	void SetQuadricIrradianceB(Matrix44);

	// BrnWorldModuleIO.h:466
	Vector4 GetFogColourPlusWhiteLevel() const;

	// BrnWorldModuleIO.h:467
	void SetFogColourPlusWhiteLevel(Vector4);

	// BrnWorldModuleIO.h:468
	Vector4 GetFogScattering() const;

	// BrnWorldModuleIO.h:469
	void SetFogScattering(Vector4);

	// BrnWorldModuleIO.h:470
	Vector3 GetKeyLightDirection() const;

	// BrnWorldModuleIO.h:471
	void SetKeyLightDirection(Vector3);

	// BrnWorldModuleIO.h:472
	Vector3 GetKeyLightColour() const;

	// BrnWorldModuleIO.h:473
	void SetKeyLightColour(Vector3);

	// BrnWorldModuleIO.h:474
	Vector3 GetAverageIrradianceColour() const;

	// BrnWorldModuleIO.h:475
	void SetAverageIrradianceColour(Vector3);

	// BrnWorldModuleIO.h:476
	float32_t GetWhiteLevel() const;

	// BrnWorldModuleIO.h:477
	void SetWhiteLevel(float32_t);

}

// BrnWorldModuleIO.h:499
struct BrnWorldIO::UpdateOutputBuffer : public IOBuffer {
private:
	// BrnWorldModuleIO.h:621
	VehicleOutputInterface mVehicleOutputInterface;

	// BrnWorldModuleIO.h:622
	VehicleManagerOutputInterface mVehicleManagerOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:149
	typedef RCEntityActiveRaceCarOutputInterface RCEntityActiveRaceCarOutputInterface;

	// BrnWorldModuleIO.h:623
	UpdateOutputBuffer::RCEntityActiveRaceCarOutputInterface mActiveRaceCarOutputInterface;

	// BrnWorldModuleIO.h:624
	UpdateOutputBuffer::RCEntityActiveRaceCarOutputInterface mReplayActiveRaceCarOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:153
	typedef TriggerEntityModuleOutputInterface TriggerEntityModuleOutputInterface;

	// BrnWorldModuleIO.h:625
	UpdateOutputBuffer::TriggerEntityModuleOutputInterface mTriggerEntityOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:159
	typedef BrnDirectorVehicleInputInterface DirectorVehicleInputInterface;

	// BrnWorldModuleIO.h:626
	UpdateOutputBuffer::DirectorVehicleInputInterface mDirectorVehicleInputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:150
	typedef RCEntityGlobalRaceCarOutputInterface RCEntityGlobalOutputInterface;

	// BrnWorldModuleIO.h:627
	UpdateOutputBuffer::RCEntityGlobalOutputInterface mRaceCarGlobalOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:156
	typedef AICarOutputInterface AICarOutputInterface;

	// BrnWorldModuleIO.h:628
	UpdateOutputBuffer::AICarOutputInterface mAICarOutputInterface;

	// BrnWorldModuleIO.h:629
	OutputBuffer::RouteResponseQueue mRouteResponseQueue;

	// BrnWorldModuleIO.h:630
	UpdateInputBuffer::AudioCarLoadedDataQueue mAudioCarLoadedDataQueue;

	// BrnWorldModuleIO.h:632
	TrafficDirectorOutputInterface mTrafficDirectorOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:161
	typedef ContactSpyInterface ContactSpyInterface;

	// BrnWorldModuleIO.h:634
	UpdateOutputBuffer::ContactSpyInterface mContactSpyInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:115
	typedef RequestInterface<4096> WorldResourceRequestInterface;

	// BrnWorldModuleIO.h:635
	UpdateOutputBuffer::WorldResourceRequestInterface mResourceRequestInterface;

	// BrnWorldModuleIO.h:636
	PlayerVehicleControls mPlayerVehicleControls;

	// Unknown accessibility
	// BrnWorldModuleIO.h:118
	typedef AttribSysRequestInterface<2048> AttribSysVaultRequestInterface;

	// BrnWorldModuleIO.h:637
	UpdateOutputBuffer::AttribSysVaultRequestInterface mAttribSysVaultRequestInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:122
	typedef TrafficNetworkOutputInterface TrafficNetworkOutputInterface;

	// BrnWorldModuleIO.h:638
	UpdateOutputBuffer::TrafficNetworkOutputInterface mTrafficNetworkOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:123
	typedef TrafficSoundOutputInterface TrafficSoundOutputInterface;

	// BrnWorldModuleIO.h:639
	UpdateOutputBuffer::TrafficSoundOutputInterface mTrafficSoundOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:124
	typedef OutputBuffer_PostPhysics::TrafficTypeResponseQueue TrafficTypeResponseQueue;

	// BrnWorldModuleIO.h:640
	UpdateOutputBuffer::TrafficTypeResponseQueue mTrafficTypeResponseQueue;

	// Unknown accessibility
	// BrnWorldModuleIO.h:128
	typedef NetworkOutputInterface CrashNetworkOutputInterface;

	// BrnWorldModuleIO.h:641
	UpdateOutputBuffer::CrashNetworkOutputInterface mCrashNetworkOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:138
	typedef DeformationOutputInterface DeformationOutputInterface;

	// BrnWorldModuleIO.h:642
	UpdateOutputBuffer::DeformationOutputInterface mDeformationOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:164
	typedef EffectsEnvironmentInterface EffectsEnvironmentInterface;

	// BrnWorldModuleIO.h:643
	UpdateOutputBuffer::EffectsEnvironmentInterface mEffectsEnvironmentInterface;

	// BrnWorldModuleIO.h:644
	StatusInterface mWorldEntityStatusInterface;

	// BrnWorldModuleIO.h:645
	OutputBuffer_PreScene::SoundWorldLoadInterface mSoundWorldLoadInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:171
	typedef RequestInterface ReplayRequestInterface;

	// BrnWorldModuleIO.h:646
	UpdateOutputBuffer::ReplayRequestInterface mReplayRequestInterface;

	// BrnWorldModuleIO.h:647
	OutputBuffer_PostPhysics::PropVFXLocatorQueue mPropVFXLocatorQueue;

	// BrnWorldModuleIO.h:648
	InputBuffer::GuiEventInputQueue mGuiEventQueue;

	// BrnWorldModuleIO.h:650
	OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue mPropBecamePhysicalEventQueue;

	// BrnWorldModuleIO.h:651
	PropOutputInterface::PropUpdateNotificationQueue mPropUpdateNotificationQueue;

	// Unknown accessibility
	// BrnWorldModuleIO.h:167
	typedef TriangleCacheInterface OutTriangleCacheInterface;

	// BrnWorldModuleIO.h:654
	UpdateOutputBuffer::OutTriangleCacheInterface mTriangleCacheInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:141
	typedef GameEventQueue GameEventQueue;

	// BrnWorldModuleIO.h:658
	UpdateOutputBuffer::GameEventQueue mGameEventQueue;

	// BrnWorldModuleIO.h:659
	bool mbWorldWantsDebugControllerFocus;

public:
	// BrnWorldModuleIO.h:504
	void Construct();

	// BrnWorldModuleIO.h:508
	void Destruct();

	// BrnWorldModuleIO.h:511
	EActiveRaceCarIndex GetPlayerActiveRaceCarIndex() const;

	// BrnWorldModuleIO.h:514
	EGlobalRaceCarIndex GetPlayerGlobalRaceCarIndex() const;

	// BrnWorldModuleIO.h:518
	void AppendTriangleCacheInterface(const VehicleInputInterface::InTriangleCacheInterface *);

	// BrnWorldModuleIO.h:520
	const UpdateOutputBuffer::WorldResourceRequestInterface * GetResourceRequestInterface() const;

	// BrnWorldModuleIO.h:521
	UpdateOutputBuffer::WorldResourceRequestInterface * GetResourceRequestInterface();

	// BrnWorldModuleIO.h:522
	void AppendResourceRequestInterface(const UpdateOutputBuffer::WorldResourceRequestInterface *);

	// BrnWorldModuleIO.h:524
	const UpdateOutputBuffer::AttribSysVaultRequestInterface * GetAttribSysVaultRequestInterface() const;

	// BrnWorldModuleIO.h:525
	UpdateOutputBuffer::AttribSysVaultRequestInterface * GetAttribSysVaultRequestInterface();

	// BrnWorldModuleIO.h:526
	void AppendAttribSysVaultRequestInterface(const UpdateOutputBuffer::AttribSysVaultRequestInterface *);

	// Unknown accessibility
	// BrnWorldModuleIO.h:132
	typedef VehicleOutputInterface VehicleOutputInterface;

	// BrnWorldModuleIO.h:528
	const UpdateOutputBuffer::VehicleOutputInterface * GetVehicleOutputInterface() const;

	// BrnWorldModuleIO.h:529
	UpdateOutputBuffer::VehicleOutputInterface * GetVehicleOutputInterface();

	// Unknown accessibility
	// BrnWorldModuleIO.h:133
	typedef VehicleManagerOutputInterface VehicleManagerOutputInterface;

	// BrnWorldModuleIO.h:531
	const UpdateOutputBuffer::VehicleManagerOutputInterface * GetVehicleManagerOutputInterface() const;

	// BrnWorldModuleIO.h:532
	UpdateOutputBuffer::VehicleManagerOutputInterface * GetVehicleManagerOutputInterface();

	// BrnWorldModuleIO.h:533
	void SetVehicleManagerOutputInterface(const UpdateOutputBuffer::VehicleManagerOutputInterface *);

	// BrnWorldModuleIO.h:535
	const UpdateOutputBuffer::DirectorVehicleInputInterface * GetDirectorVehicleInputInterface() const;

	// BrnWorldModuleIO.h:536
	void SetDirectorVehicleInputInterface(const UpdateOutputBuffer::DirectorVehicleInputInterface *);

	// BrnWorldModuleIO.h:538
	const UpdateOutputBuffer::RCEntityGlobalOutputInterface * GetRaceCarGlobalOutputInterface() const;

	// BrnWorldModuleIO.h:539
	void SetRaceCarGlobalOutputInterface(const UpdateOutputBuffer::RCEntityGlobalOutputInterface *);

	// BrnWorldModuleIO.h:541
	const UpdateOutputBuffer::TriggerEntityModuleOutputInterface * GetTriggerEntityOutputInterface() const;

	// BrnWorldModuleIO.h:542
	void SetTriggerEntityOutputInterface(const UpdateOutputBuffer::TriggerEntityModuleOutputInterface *);

	// BrnWorldModuleIO.h:544
	const UpdateOutputBuffer::RCEntityActiveRaceCarOutputInterface * GetActiveRaceCarOutputInterface() const;

	// BrnWorldModuleIO.h:545
	void SetActiveRaceCarOutputInterface(const UpdateOutputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnWorldModuleIO.h:547
	const UpdateOutputBuffer::RCEntityActiveRaceCarOutputInterface * GetReplayActiveRaceCarOutputInterface() const;

	// BrnWorldModuleIO.h:548
	void SetReplayActiveRaceCarOutputInterface(const UpdateOutputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnWorldModuleIO.h:550
	const UpdateOutputBuffer::ContactSpyInterface * GetContactSpyInterface() const;

	// BrnWorldModuleIO.h:551
	UpdateOutputBuffer::ContactSpyInterface * GetContactSpyInterface();

	// BrnWorldModuleIO.h:552
	void SetContactSpyInterface(const UpdateOutputBuffer::ContactSpyInterface *);

	// BrnWorldModuleIO.h:554
	const UpdateOutputBuffer::AICarOutputInterface * GetAICarOutputInterface() const;

	// BrnWorldModuleIO.h:555
	void SetAICarOutputInterface(const UpdateOutputBuffer::AICarOutputInterface *);

	// BrnWorldModuleIO.h:557
	const PlayerVehicleControls * GetPlayerVehicleControls() const;

	// BrnWorldModuleIO.h:558
	void SetPlayerVehicleControls(const PlayerVehicleControls *);

	// BrnWorldModuleIO.h:560
	const OutputBuffer::RouteResponseQueue * GetRouteResponseQueue() const;

	// BrnWorldModuleIO.h:561
	void AppendRouteResponseQueue(const OutputBuffer::RouteResponseQueue *);

	// BrnWorldModuleIO.h:563
	const UpdateOutputBuffer::TrafficNetworkOutputInterface * GetTrafficNetworkOutputInterface() const;

	// BrnWorldModuleIO.h:564
	void SetTrafficNetworkOutputInterface(const UpdateOutputBuffer::TrafficNetworkOutputInterface *);

	// BrnWorldModuleIO.h:566
	const UpdateOutputBuffer::TrafficSoundOutputInterface * GetTrafficSoundOutputInterface() const;

	// BrnWorldModuleIO.h:567
	void SetTrafficSoundOutputInterface(const UpdateOutputBuffer::TrafficSoundOutputInterface *);

	// BrnWorldModuleIO.h:569
	const TrafficDirectorOutputInterface * GetTrafficDirectorOutputInterface() const;

	// BrnWorldModuleIO.h:570
	void SetTrafficDirectorOutputInterface(const TrafficDirectorOutputInterface *);

	// BrnWorldModuleIO.h:572
	const UpdateOutputBuffer::CrashNetworkOutputInterface * GetCrashNetworkOutputInterface() const;

	// BrnWorldModuleIO.h:573
	void SetCrashNetworkOutputInterface(const UpdateOutputBuffer::CrashNetworkOutputInterface *);

	// BrnWorldModuleIO.h:575
	const UpdateOutputBuffer::GameEventQueue * GetGameEventQueue() const;

	// BrnWorldModuleIO.h:576
	UpdateOutputBuffer::GameEventQueue * GetGameEventQueue();

	// BrnWorldModuleIO.h:577
	void AppendGameEventQueue(const UpdateOutputBuffer::GameEventQueue *);

	// BrnWorldModuleIO.h:579
	const UpdateOutputBuffer::DeformationOutputInterface * GetDeformationOutputInterface() const;

	// BrnWorldModuleIO.h:580
	void SetDeformationOutputInterface(const UpdateOutputBuffer::DeformationOutputInterface *);

	// BrnWorldModuleIO.h:582
	bool GetWorldWantsDebugControllerFocus() const;

	// BrnWorldModuleIO.h:583
	void SetWorldWantsDebugControllerFocus(bool);

	// BrnWorldModuleIO.h:585
	const UpdateOutputBuffer::TrafficTypeResponseQueue * GetTrafficTypeResponseQueue() const;

	// BrnWorldModuleIO.h:586
	void AppendTrafficTypeResponseQueue(const UpdateOutputBuffer::TrafficTypeResponseQueue *);

	// BrnWorldModuleIO.h:588
	const UpdateOutputBuffer::EffectsEnvironmentInterface * GetEffectsEnvironmentInterface() const;

	// BrnWorldModuleIO.h:589
	UpdateOutputBuffer::EffectsEnvironmentInterface * GetEffectsEnvironmentInterface();

	// BrnWorldModuleIO.h:591
	const StatusInterface * GetWorldEntityStatusInterface() const;

	// BrnWorldModuleIO.h:592
	void SetWorldEntityStatusInterface(const StatusInterface *);

	// BrnWorldModuleIO.h:594
	const OutputBuffer_PreScene::SoundWorldLoadInterface * GetSoundWorldLoadInterface() const;

	// BrnWorldModuleIO.h:595
	void AppendSoundWorldLoadInterface(const OutputBuffer_PreScene::SoundWorldLoadInterface *);

	// BrnWorldModuleIO.h:597
	const UpdateOutputBuffer::ReplayRequestInterface * GetReplayRequestInterface() const;

	// BrnWorldModuleIO.h:598
	void AppendReplayRequestInterface(const UpdateOutputBuffer::ReplayRequestInterface *);

	// BrnWorldModuleIO.h:600
	void SetPropVFXLocatorQueue(const OutputBuffer_PostPhysics::PropVFXLocatorQueue *);

	// BrnWorldModuleIO.h:601
	OutputBuffer_PostPhysics::PropVFXLocatorQueue * GetPropVFXLocatorQueue();

	// BrnWorldModuleIO.h:602
	const OutputBuffer_PostPhysics::PropVFXLocatorQueue * GetPropVFXLocatorQueue() const;

	// BrnWorldModuleIO.h:604
	const UpdateInputBuffer::AudioCarLoadedDataQueue * GetAudioCarLoadedDataQueue() const;

	// BrnWorldModuleIO.h:605
	UpdateInputBuffer::AudioCarLoadedDataQueue * GetAudioCarLoadedDataQueue();

	// BrnWorldModuleIO.h:607
	const InputBuffer::GuiEventInputQueue * GetGuiEventQueue() const;

	// BrnWorldModuleIO.h:608
	InputBuffer::GuiEventInputQueue * GetGuiEventQueue();

	// BrnWorldModuleIO.h:610
	const UpdateOutputBuffer::OutTriangleCacheInterface * GetTriangleCacheInterface() const;

	// BrnWorldModuleIO.h:612
	const OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue * GetPropBecamePhysicalEventQueue() const;

	// BrnWorldModuleIO.h:613
	OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue * GetPropBecamePhysicalEventQueue();

	// BrnWorldModuleIO.h:614
	void AppendPropBecamePhysicalEventQueue(const OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue *);

	// BrnWorldModuleIO.h:616
	const PropOutputInterface::PropUpdateNotificationQueue * GetPropUpdateNotificationQueue() const;

	// BrnWorldModuleIO.h:617
	PropOutputInterface::PropUpdateNotificationQueue * GetPropUpdateNotificationQueue();

	// BrnWorldModuleIO.h:618
	void AppendPropUpdateNotificationQueue(const PropOutputInterface::PropUpdateNotificationQueue *);

}

// BrnWorldModuleIO.h:65
namespace BrnWorldIO {
	struct UpdateInputBuffer;

	// BrnWorldModuleIO.h:67
	const int32_t KI_WORLD_EVENT_QUEUE_MAX_SIZE = 4096;

	// BrnWorldModuleIO.h:68
	const int32_t KI_WORLD_RENDER_EVENT_QUEUE_MAX_SIZE = 32768;

}

// BrnWorldModuleIO.h:184
struct BrnWorldIO::UpdateInputBuffer : public IOBuffer {
private:
	// BrnWorldModuleIO.h:324
	uint16_t[8] mau16RaceCarColourIndex;

	// BrnWorldModuleIO.h:325
	uint16_t[8] mau16RaceCarPaintFinishIndex;

	// BrnWorldModuleIO.h:326
	bool[8] mabRaceCarColourIndexValid;

	// BrnWorldModuleIO.h:327
	bool[8] mabRaceCarPaintFinishIndexValid;

	// BrnWorldModuleIO.h:328
	bool[8] mabLostContactThisFrame;

	// BrnWorldModuleIO.h:329
	bool[8] mabRegainedContactThisFrame;

	// BrnWorldModuleIO.h:330
	bool[8] mabCarSelectStatus;

	// BrnWorldModuleIO.h:331
	bool[8] mabCarSelectStatusValid;

	// BrnWorldModuleIO.h:332
	VehicleInputInterface mVehicleInputInterface;

	// BrnWorldModuleIO.h:333
	VehicleDriverInputInterface mVehicleDriverInputInterface;

	// BrnWorldModuleIO.h:334
	int32_t miPlayerRaceCarIndex;

	// Unknown accessibility
	// BrnWorldModuleIO.h:142
	typedef InputBuffer::GameActionQueue GameActionQueue;

	// BrnWorldModuleIO.h:335
	UpdateInputBuffer::GameActionQueue mGameActionQueue;

	// BrnWorldModuleIO.h:336
	TimerStatusInterface mTimerStatusInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:143
	typedef InputBuffer::TakedownEventQueue TakedownEventQueue;

	// BrnWorldModuleIO.h:337
	UpdateInputBuffer::TakedownEventQueue mTakedownEventQueue;

	// Unknown accessibility
	// BrnWorldModuleIO.h:151
	typedef TriggerManagementInputInterface TriggerManagementInputInterface;

	// BrnWorldModuleIO.h:338
	UpdateInputBuffer::TriggerManagementInputInterface mTriggerManagementInputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:152
	typedef TriggerQueryInputInterface TriggerQueryInputInterface;

	// BrnWorldModuleIO.h:339
	UpdateInputBuffer::TriggerQueryInputInterface mTriggerQueryInputInterface;

	// BrnWorldModuleIO.h:340
	BrnNetwork::EPaybackType meActivePaybackType;

	// BrnWorldModuleIO.h:341
	EActiveRaceCarIndex meActivePaybackAggressor;

	// Unknown accessibility
	// BrnWorldModuleIO.h:91
	typedef VariableEventQueue<4096,16> InWorldEventQueue;

	// BrnWorldModuleIO.h:342
	UpdateInputBuffer::InWorldEventQueue mInWorldEventQueue;

	// Unknown accessibility
	// BrnWorldModuleIO.h:121
	typedef TrafficNetworkInputInterface TrafficNetworkInputInterface;

	// BrnWorldModuleIO.h:343
	UpdateInputBuffer::TrafficNetworkInputInterface mTrafficNetworkInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:127
	typedef NetworkInputInterface CrashNetworkInputInterface;

	// BrnWorldModuleIO.h:344
	UpdateInputBuffer::CrashNetworkInputInterface mCrashNetworkInterface;

	// BrnWorldModuleIO.h:345
	PlayerVehicleControls mPlayerVehicleControls;

	// BrnWorldModuleIO.h:346
	DebugController mDebugController;

	// Unknown accessibility
	// BrnWorldModuleIO.h:144
	typedef RaceCarRaceDistanceInterface RaceCarRaceDistanceInterface;

	// BrnWorldModuleIO.h:347
	UpdateInputBuffer::RaceCarRaceDistanceInterface mRaceCarRaceDistanceInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:145
	typedef ScoringOutputInterface ScoringInterface;

	// BrnWorldModuleIO.h:348
	UpdateInputBuffer::ScoringInterface mScoringInterface;

	// BrnWorldModuleIO.h:349
	bool mbControllerActive;

	// BrnWorldModuleIO.h:350
	RequestInterface mWorldEntityRequestInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:170
	typedef StatusInterface ReplayStatusInterface;

	// BrnWorldModuleIO.h:351
	UpdateInputBuffer::ReplayStatusInterface mReplayStatusInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:173
	typedef UpdateInputBuffer::AudioCarLoadedDataQueue AudioCarLoadedDataQueue;

	// Unknown accessibility
	// BrnRaceCarEntityModuleOutputInterface.h:146
	typedef EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16> AudioCarLoadedDataQueue;

	// BrnWorldModuleIO.h:352
	UpdateInputBuffer::AudioCarLoadedDataQueue mAudioCarDataLoadedQueue;

	// BrnWorldModuleIO.h:353
	InputBuffer::RaceRouteRequestQueue mRaceRouteRequestQueue;

	// Unknown accessibility
	// BrnWorldModuleIO.h:146
	typedef OnlineScoringOutputInterface OnlineScoringInterface;

	// BrnWorldModuleIO.h:354
	UpdateInputBuffer::OnlineScoringInterface mOnlineScoringInterface;

public:
	// BrnWorldModuleIO.h:189
	void Construct();

	// BrnWorldModuleIO.h:193
	void Destruct();

	// BrnWorldModuleIO.h:198
	void AddGameInputData(const PlayerVehicleControls *);

	// BrnWorldModuleIO.h:203
	void SetRaceCarColourIndex(EActiveRaceCarIndex, uint16_t);

	// BrnWorldModuleIO.h:207
	uint16_t GetRaceCarColourIndex(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:211
	bool IsRaceCarColourIndexValid(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:216
	void SetRaceCarPaintFinishIndex(EActiveRaceCarIndex, uint16_t);

	// BrnWorldModuleIO.h:220
	uint16_t GetRaceCarPaintFinishIndex(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:224
	bool IsRaceCarPaintFinishValid(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:228
	void SetLostContact(EActiveRaceCarIndex);

	// BrnWorldModuleIO.h:232
	bool GetLostContact(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:236
	void SetRegainedContact(EActiveRaceCarIndex);

	// BrnWorldModuleIO.h:240
	bool GetRegainedContact(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:245
	void SetCarSelectStatus(EActiveRaceCarIndex, bool);

	// BrnWorldModuleIO.h:249
	bool GetCarSelectStatus(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:253
	bool IsCarSelectStatusValid(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:255
	const InputBuffer::RaceRouteRequestQueue * GetRaceRouteRequestQueue() const;

	// BrnWorldModuleIO.h:256
	InputBuffer::RaceRouteRequestQueue * GetRaceRouteRequestQueue();

	// BrnWorldModuleIO.h:257
	void AppendRaceRouteRequestQueue(const InputBuffer::RaceRouteRequestQueue *);

	// BrnWorldModuleIO.h:259
	const VehicleInputInterface * GetVehicleInputInterface() const;

	// BrnWorldModuleIO.h:260
	void AppendVehicleInputInterface(const VehicleInputInterface *);

	// BrnWorldModuleIO.h:262
	const VehicleDriverInputInterface * GetVehicleDriverInputInterface() const;

	// BrnWorldModuleIO.h:263
	void AppendVehicleDriverInputInterface(const VehicleDriverInputInterface *);

	// BrnWorldModuleIO.h:265
	const UpdateInputBuffer::GameActionQueue * GetGameActionQueue() const;

	// BrnWorldModuleIO.h:266
	UpdateInputBuffer::GameActionQueue * GetGameActionQueue();

	// BrnWorldModuleIO.h:267
	void AppendGameActionQueue(const UpdateInputBuffer::GameActionQueue *);

	// BrnWorldModuleIO.h:269
	const TimerStatusInterface * GetTimerStatusInterface() const;

	// BrnWorldModuleIO.h:270
	void SetTimerStatusInterface(const TimerStatusInterface *);

	// BrnWorldModuleIO.h:272
	const UpdateInputBuffer::TakedownEventQueue * GetTakedownEventQueue() const;

	// BrnWorldModuleIO.h:273
	void AppendTakedownEventQueue(const UpdateInputBuffer::TakedownEventQueue *);

	// BrnWorldModuleIO.h:275
	const UpdateInputBuffer::TriggerManagementInputInterface * GetTriggerManagementInputInterface() const;

	// BrnWorldModuleIO.h:276
	void AppendTriggerManagementInputInterface(const UpdateInputBuffer::TriggerManagementInputInterface *);

	// BrnWorldModuleIO.h:278
	const UpdateInputBuffer::TriggerQueryInputInterface * GetTriggerQueryInputInterface() const;

	// BrnWorldModuleIO.h:279
	void AppendTriggerQueryInputInterface(const UpdateInputBuffer::TriggerQueryInputInterface *);

	// BrnWorldModuleIO.h:281
	const PlayerVehicleControls * GetPlayerVehicleControls() const;

	// BrnWorldModuleIO.h:282
	void SetPlayerVehicleControls(const PlayerVehicleControls *);

	// BrnWorldModuleIO.h:284
	const UpdateInputBuffer::TrafficNetworkInputInterface * GetTrafficNetworkInterface() const;

	// BrnWorldModuleIO.h:285
	void SetTrafficNetworkInterface(const UpdateInputBuffer::TrafficNetworkInputInterface *);

	// BrnWorldModuleIO.h:287
	const UpdateInputBuffer::CrashNetworkInputInterface * GetCrashNetworkInterface() const;

	// BrnWorldModuleIO.h:288
	void SetCrashNetworkInterface(const UpdateInputBuffer::CrashNetworkInputInterface *);

	// BrnWorldModuleIO.h:290
	const DebugController * GetDebugController() const;

	// BrnWorldModuleIO.h:291
	DebugController * GetDebugController();

	// BrnWorldModuleIO.h:292
	void SetDebugController(const DebugController *);

	// BrnWorldModuleIO.h:294
	const UpdateInputBuffer::RaceCarRaceDistanceInterface * GetRaceCarRaceDistanceInterface() const;

	// BrnWorldModuleIO.h:295
	void SetRaceCarRaceDistanceInterface(const UpdateInputBuffer::RaceCarRaceDistanceInterface *);

	// BrnWorldModuleIO.h:297
	const UpdateInputBuffer::ScoringInterface * GetScoringInterface() const;

	// BrnWorldModuleIO.h:298
	void SetScoringInterface(const UpdateInputBuffer::ScoringInterface *);

	// BrnWorldModuleIO.h:300
	const UpdateInputBuffer::OnlineScoringInterface * GetOnlineScoringInterface() const;

	// BrnWorldModuleIO.h:301
	void SetOnlineScoringInterface(const UpdateInputBuffer::OnlineScoringInterface *);

	// BrnWorldModuleIO.h:303
	bool GetControllerActive() const;

	// BrnWorldModuleIO.h:304
	void SetControllerActive(bool);

	// BrnWorldModuleIO.h:306
	void AppendWorldEntityRequestInterface(const RequestInterface *);

	// BrnWorldModuleIO.h:307
	RequestInterface * GetWorldEntityRequestInterface();

	// BrnWorldModuleIO.h:308
	const RequestInterface * GetWorldEntityRequestInterface() const;

	// BrnWorldModuleIO.h:310
	const UpdateInputBuffer::ReplayStatusInterface * GetReplayStatusInterface() const;

	// BrnWorldModuleIO.h:311
	void SetReplayStatusInterface(const UpdateInputBuffer::ReplayStatusInterface *);

	// BrnWorldModuleIO.h:313
	const UpdateInputBuffer::AudioCarLoadedDataQueue * GetAudioCarDataLoadedQueue() const;

	// BrnWorldModuleIO.h:314
	UpdateInputBuffer::AudioCarLoadedDataQueue * GetAudioCarDataLoadedQueue();

	// BrnWorldModuleIO.h:316
	BrnNetwork::EPaybackType GetActivePaybackType() const;

	// BrnWorldModuleIO.h:317
	void SetActivePaybackType(BrnNetwork::EPaybackType);

	// BrnWorldModuleIO.h:319
	EActiveRaceCarIndex GetActivePaybackAggressor() const;

	// BrnWorldModuleIO.h:320
	void SetActivePaybackAggressor(EActiveRaceCarIndex);

}

// BrnWorldModuleIO.h:184
struct BrnWorldIO::UpdateInputBuffer : public IOBuffer {
private:
	// BrnWorldModuleIO.h:324
	uint16_t[8] mau16RaceCarColourIndex;

	// BrnWorldModuleIO.h:325
	uint16_t[8] mau16RaceCarPaintFinishIndex;

	// BrnWorldModuleIO.h:326
	bool[8] mabRaceCarColourIndexValid;

	// BrnWorldModuleIO.h:327
	bool[8] mabRaceCarPaintFinishIndexValid;

	// BrnWorldModuleIO.h:328
	bool[8] mabLostContactThisFrame;

	// BrnWorldModuleIO.h:329
	bool[8] mabRegainedContactThisFrame;

	// BrnWorldModuleIO.h:330
	bool[8] mabCarSelectStatus;

	// BrnWorldModuleIO.h:331
	bool[8] mabCarSelectStatusValid;

	// BrnWorldModuleIO.h:332
	VehicleInputInterface mVehicleInputInterface;

	// BrnWorldModuleIO.h:333
	VehicleDriverInputInterface mVehicleDriverInputInterface;

	// BrnWorldModuleIO.h:334
	int32_t miPlayerRaceCarIndex;

	// Unknown accessibility
	// BrnWorldModuleIO.h:142
	typedef OutputBuffer::GameActionQueue GameActionQueue;

	// BrnWorldModuleIO.h:335
	UpdateInputBuffer::GameActionQueue mGameActionQueue;

	// BrnWorldModuleIO.h:336
	TimerStatusInterface mTimerStatusInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:143
	typedef InputBuffer::TakedownEventQueue TakedownEventQueue;

	// BrnWorldModuleIO.h:337
	UpdateInputBuffer::TakedownEventQueue mTakedownEventQueue;

	// Unknown accessibility
	// BrnWorldModuleIO.h:151
	typedef TriggerManagementInputInterface TriggerManagementInputInterface;

	// BrnWorldModuleIO.h:338
	UpdateInputBuffer::TriggerManagementInputInterface mTriggerManagementInputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:152
	typedef TriggerQueryInputInterface TriggerQueryInputInterface;

	// BrnWorldModuleIO.h:339
	UpdateInputBuffer::TriggerQueryInputInterface mTriggerQueryInputInterface;

	// BrnWorldModuleIO.h:340
	BrnNetwork::EPaybackType meActivePaybackType;

	// BrnWorldModuleIO.h:341
	EActiveRaceCarIndex meActivePaybackAggressor;

	// Unknown accessibility
	// BrnWorldModuleIO.h:91
	typedef VariableEventQueue<4096,16> InWorldEventQueue;

	// BrnWorldModuleIO.h:342
	UpdateInputBuffer::InWorldEventQueue mInWorldEventQueue;

	// Unknown accessibility
	// BrnWorldModuleIO.h:121
	typedef TrafficNetworkInputInterface TrafficNetworkInputInterface;

	// BrnWorldModuleIO.h:343
	UpdateInputBuffer::TrafficNetworkInputInterface mTrafficNetworkInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:127
	typedef NetworkInputInterface CrashNetworkInputInterface;

	// BrnWorldModuleIO.h:344
	UpdateInputBuffer::CrashNetworkInputInterface mCrashNetworkInterface;

	// BrnWorldModuleIO.h:345
	PlayerVehicleControls mPlayerVehicleControls;

	// BrnWorldModuleIO.h:346
	DebugController mDebugController;

	// Unknown accessibility
	// BrnWorldModuleIO.h:144
	typedef RaceCarRaceDistanceInterface RaceCarRaceDistanceInterface;

	// BrnWorldModuleIO.h:347
	UpdateInputBuffer::RaceCarRaceDistanceInterface mRaceCarRaceDistanceInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:145
	typedef ScoringOutputInterface ScoringInterface;

	// BrnWorldModuleIO.h:348
	UpdateInputBuffer::ScoringInterface mScoringInterface;

	// BrnWorldModuleIO.h:349
	bool mbControllerActive;

	// BrnWorldModuleIO.h:350
	RequestInterface mWorldEntityRequestInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:170
	typedef StatusInterface ReplayStatusInterface;

	// BrnWorldModuleIO.h:351
	UpdateInputBuffer::ReplayStatusInterface mReplayStatusInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:173
	typedef InputBuffer_PreScene::AudioCarLoadedDataQueue AudioCarLoadedDataQueue;

	// BrnWorldModuleIO.h:352
	UpdateInputBuffer::AudioCarLoadedDataQueue mAudioCarDataLoadedQueue;

	// BrnWorldModuleIO.h:353
	InputBuffer::RaceRouteRequestQueue mRaceRouteRequestQueue;

	// Unknown accessibility
	// BrnWorldModuleIO.h:146
	typedef OnlineScoringOutputInterface OnlineScoringInterface;

	// BrnWorldModuleIO.h:354
	UpdateInputBuffer::OnlineScoringInterface mOnlineScoringInterface;

public:
	// BrnWorldModuleIO.h:189
	void Construct();

	// BrnWorldModuleIO.h:193
	void Destruct();

	// BrnWorldModuleIO.h:198
	void AddGameInputData(const PlayerVehicleControls *);

	// BrnWorldModuleIO.h:203
	void SetRaceCarColourIndex(EActiveRaceCarIndex, uint16_t);

	// BrnWorldModuleIO.h:207
	uint16_t GetRaceCarColourIndex(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:211
	bool IsRaceCarColourIndexValid(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:216
	void SetRaceCarPaintFinishIndex(EActiveRaceCarIndex, uint16_t);

	// BrnWorldModuleIO.h:220
	uint16_t GetRaceCarPaintFinishIndex(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:224
	bool IsRaceCarPaintFinishValid(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:228
	void SetLostContact(EActiveRaceCarIndex);

	// BrnWorldModuleIO.h:232
	bool GetLostContact(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:236
	void SetRegainedContact(EActiveRaceCarIndex);

	// BrnWorldModuleIO.h:240
	bool GetRegainedContact(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:245
	void SetCarSelectStatus(EActiveRaceCarIndex, bool);

	// BrnWorldModuleIO.h:249
	bool GetCarSelectStatus(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:253
	bool IsCarSelectStatusValid(EActiveRaceCarIndex) const;

	// BrnWorldModuleIO.h:255
	const InputBuffer::RaceRouteRequestQueue * GetRaceRouteRequestQueue() const;

	// BrnWorldModuleIO.h:256
	InputBuffer::RaceRouteRequestQueue * GetRaceRouteRequestQueue();

	// BrnWorldModuleIO.h:257
	void AppendRaceRouteRequestQueue(const InputBuffer::RaceRouteRequestQueue *);

	// BrnWorldModuleIO.h:259
	const VehicleInputInterface * GetVehicleInputInterface() const;

	// BrnWorldModuleIO.h:260
	void AppendVehicleInputInterface(const VehicleInputInterface *);

	// BrnWorldModuleIO.h:262
	const VehicleDriverInputInterface * GetVehicleDriverInputInterface() const;

	// BrnWorldModuleIO.h:263
	void AppendVehicleDriverInputInterface(const VehicleDriverInputInterface *);

	// BrnWorldModuleIO.h:265
	const UpdateInputBuffer::GameActionQueue * GetGameActionQueue() const;

	// BrnWorldModuleIO.h:266
	UpdateInputBuffer::GameActionQueue * GetGameActionQueue();

	// BrnWorldModuleIO.h:267
	void AppendGameActionQueue(const UpdateInputBuffer::GameActionQueue *);

	// BrnWorldModuleIO.h:269
	const TimerStatusInterface * GetTimerStatusInterface() const;

	// BrnWorldModuleIO.h:270
	void SetTimerStatusInterface(const TimerStatusInterface *);

	// BrnWorldModuleIO.h:272
	const UpdateInputBuffer::TakedownEventQueue * GetTakedownEventQueue() const;

	// BrnWorldModuleIO.h:273
	void AppendTakedownEventQueue(const UpdateInputBuffer::TakedownEventQueue *);

	// BrnWorldModuleIO.h:275
	const UpdateInputBuffer::TriggerManagementInputInterface * GetTriggerManagementInputInterface() const;

	// BrnWorldModuleIO.h:276
	void AppendTriggerManagementInputInterface(const UpdateInputBuffer::TriggerManagementInputInterface *);

	// BrnWorldModuleIO.h:278
	const UpdateInputBuffer::TriggerQueryInputInterface * GetTriggerQueryInputInterface() const;

	// BrnWorldModuleIO.h:279
	void AppendTriggerQueryInputInterface(const UpdateInputBuffer::TriggerQueryInputInterface *);

	// BrnWorldModuleIO.h:281
	const PlayerVehicleControls * GetPlayerVehicleControls() const;

	// BrnWorldModuleIO.h:282
	void SetPlayerVehicleControls(const PlayerVehicleControls *);

	// BrnWorldModuleIO.h:284
	const UpdateInputBuffer::TrafficNetworkInputInterface * GetTrafficNetworkInterface() const;

	// BrnWorldModuleIO.h:285
	void SetTrafficNetworkInterface(const UpdateInputBuffer::TrafficNetworkInputInterface *);

	// BrnWorldModuleIO.h:287
	const UpdateInputBuffer::CrashNetworkInputInterface * GetCrashNetworkInterface() const;

	// BrnWorldModuleIO.h:288
	void SetCrashNetworkInterface(const UpdateInputBuffer::CrashNetworkInputInterface *);

	// BrnWorldModuleIO.h:290
	const DebugController * GetDebugController() const;

	// BrnWorldModuleIO.h:291
	DebugController * GetDebugController();

	// BrnWorldModuleIO.h:292
	void SetDebugController(const DebugController *);

	// BrnWorldModuleIO.h:294
	const UpdateInputBuffer::RaceCarRaceDistanceInterface * GetRaceCarRaceDistanceInterface() const;

	// BrnWorldModuleIO.h:295
	void SetRaceCarRaceDistanceInterface(const UpdateInputBuffer::RaceCarRaceDistanceInterface *);

	// BrnWorldModuleIO.h:297
	const UpdateInputBuffer::ScoringInterface * GetScoringInterface() const;

	// BrnWorldModuleIO.h:298
	void SetScoringInterface(const UpdateInputBuffer::ScoringInterface *);

	// BrnWorldModuleIO.h:300
	const UpdateInputBuffer::OnlineScoringInterface * GetOnlineScoringInterface() const;

	// BrnWorldModuleIO.h:301
	void SetOnlineScoringInterface(const UpdateInputBuffer::OnlineScoringInterface *);

	// BrnWorldModuleIO.h:303
	bool GetControllerActive() const;

	// BrnWorldModuleIO.h:304
	void SetControllerActive(bool);

	// BrnWorldModuleIO.h:306
	void AppendWorldEntityRequestInterface(const RequestInterface *);

	// BrnWorldModuleIO.h:307
	RequestInterface * GetWorldEntityRequestInterface();

	// BrnWorldModuleIO.h:308
	const RequestInterface * GetWorldEntityRequestInterface() const;

	// BrnWorldModuleIO.h:310
	const UpdateInputBuffer::ReplayStatusInterface * GetReplayStatusInterface() const;

	// BrnWorldModuleIO.h:311
	void SetReplayStatusInterface(const UpdateInputBuffer::ReplayStatusInterface *);

	// BrnWorldModuleIO.h:313
	const UpdateInputBuffer::AudioCarLoadedDataQueue * GetAudioCarDataLoadedQueue() const;

	// BrnWorldModuleIO.h:314
	UpdateInputBuffer::AudioCarLoadedDataQueue * GetAudioCarDataLoadedQueue();

	// BrnWorldModuleIO.h:316
	BrnNetwork::EPaybackType GetActivePaybackType() const;

	// BrnWorldModuleIO.h:317
	void SetActivePaybackType(BrnNetwork::EPaybackType);

	// BrnWorldModuleIO.h:319
	EActiveRaceCarIndex GetActivePaybackAggressor() const;

	// BrnWorldModuleIO.h:320
	void SetActivePaybackAggressor(EActiveRaceCarIndex);

}

// BrnWorldModuleIO.h:499
struct BrnWorldIO::UpdateOutputBuffer : public IOBuffer {
private:
	// BrnWorldModuleIO.h:621
	VehicleOutputInterface mVehicleOutputInterface;

	// BrnWorldModuleIO.h:622
	VehicleManagerOutputInterface mVehicleManagerOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:149
	typedef RCEntityActiveRaceCarOutputInterface RCEntityActiveRaceCarOutputInterface;

	// BrnWorldModuleIO.h:623
	UpdateOutputBuffer::RCEntityActiveRaceCarOutputInterface mActiveRaceCarOutputInterface;

	// BrnWorldModuleIO.h:624
	UpdateOutputBuffer::RCEntityActiveRaceCarOutputInterface mReplayActiveRaceCarOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:153
	typedef TriggerEntityModuleOutputInterface TriggerEntityModuleOutputInterface;

	// BrnWorldModuleIO.h:625
	UpdateOutputBuffer::TriggerEntityModuleOutputInterface mTriggerEntityOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:159
	typedef BrnDirectorVehicleInputInterface DirectorVehicleInputInterface;

	// BrnWorldModuleIO.h:626
	UpdateOutputBuffer::DirectorVehicleInputInterface mDirectorVehicleInputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:150
	typedef RCEntityGlobalRaceCarOutputInterface RCEntityGlobalOutputInterface;

	// BrnWorldModuleIO.h:627
	UpdateOutputBuffer::RCEntityGlobalOutputInterface mRaceCarGlobalOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:156
	typedef AICarOutputInterface AICarOutputInterface;

	// BrnWorldModuleIO.h:628
	UpdateOutputBuffer::AICarOutputInterface mAICarOutputInterface;

	// BrnWorldModuleIO.h:629
	OutputBuffer::RouteResponseQueue mRouteResponseQueue;

	// BrnWorldModuleIO.h:630
	UpdateInputBuffer::AudioCarLoadedDataQueue mAudioCarLoadedDataQueue;

	// BrnWorldModuleIO.h:632
	TrafficDirectorOutputInterface mTrafficDirectorOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:161
	typedef ContactSpyInterface ContactSpyInterface;

	// BrnWorldModuleIO.h:634
	UpdateOutputBuffer::ContactSpyInterface mContactSpyInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:115
	typedef RequestInterface<4096> WorldResourceRequestInterface;

	// BrnWorldModuleIO.h:635
	UpdateOutputBuffer::WorldResourceRequestInterface mResourceRequestInterface;

	// BrnWorldModuleIO.h:636
	PlayerVehicleControls mPlayerVehicleControls;

	// Unknown accessibility
	// BrnWorldModuleIO.h:118
	typedef AttribSysRequestInterface<2048> AttribSysVaultRequestInterface;

	// BrnWorldModuleIO.h:637
	UpdateOutputBuffer::AttribSysVaultRequestInterface mAttribSysVaultRequestInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:122
	typedef TrafficNetworkOutputInterface TrafficNetworkOutputInterface;

	// BrnWorldModuleIO.h:638
	UpdateOutputBuffer::TrafficNetworkOutputInterface mTrafficNetworkOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:123
	typedef TrafficSoundOutputInterface TrafficSoundOutputInterface;

	// BrnWorldModuleIO.h:639
	UpdateOutputBuffer::TrafficSoundOutputInterface mTrafficSoundOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:124
	typedef OutputBuffer_PostPhysics::TrafficTypeResponseQueue TrafficTypeResponseQueue;

	// BrnWorldModuleIO.h:640
	UpdateOutputBuffer::TrafficTypeResponseQueue mTrafficTypeResponseQueue;

	// Unknown accessibility
	// BrnWorldModuleIO.h:128
	typedef NetworkOutputInterface CrashNetworkOutputInterface;

	// BrnWorldModuleIO.h:641
	UpdateOutputBuffer::CrashNetworkOutputInterface mCrashNetworkOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:138
	typedef DeformationOutputInterface DeformationOutputInterface;

	// BrnWorldModuleIO.h:642
	UpdateOutputBuffer::DeformationOutputInterface mDeformationOutputInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:164
	typedef EffectsEnvironmentInterface EffectsEnvironmentInterface;

	// BrnWorldModuleIO.h:643
	UpdateOutputBuffer::EffectsEnvironmentInterface mEffectsEnvironmentInterface;

	// BrnWorldModuleIO.h:644
	StatusInterface mWorldEntityStatusInterface;

	// Unknown accessibility
	// BrnSoundRootSharedIO.h:145
	typedef EventQueue<BrnSound::Module::Io::SoundWorldLoadEvent,25> SoundWorldLoadInterface;

	// BrnWorldModuleIO.h:645
	UpdateOutputBuffer::SoundWorldLoadInterface mSoundWorldLoadInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:171
	typedef RequestInterface ReplayRequestInterface;

	// BrnWorldModuleIO.h:646
	UpdateOutputBuffer::ReplayRequestInterface mReplayRequestInterface;

	// BrnWorldModuleIO.h:647
	OutputBuffer_PostPhysics::PropVFXLocatorQueue mPropVFXLocatorQueue;

	// BrnWorldModuleIO.h:648
	InputBuffer::GuiEventInputQueue mGuiEventQueue;

	// BrnWorldModuleIO.h:650
	OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue mPropBecamePhysicalEventQueue;

	// Unknown accessibility
	// BrnPropQueues.h:49
	typedef EventQueue<BrnPhysics::Props::PropUpdateNotification,200> PropUpdateNotificationQueue;

	// BrnWorldModuleIO.h:651
	UpdateOutputBuffer::PropUpdateNotificationQueue mPropUpdateNotificationQueue;

	// Unknown accessibility
	// BrnWorldModuleIO.h:167
	typedef TriangleCacheInterface OutTriangleCacheInterface;

	// BrnWorldModuleIO.h:654
	UpdateOutputBuffer::OutTriangleCacheInterface mTriangleCacheInterface;

	// Unknown accessibility
	// BrnWorldModuleIO.h:141
	typedef GameEventQueue GameEventQueue;

	// BrnWorldModuleIO.h:658
	UpdateOutputBuffer::GameEventQueue mGameEventQueue;

	// BrnWorldModuleIO.h:659
	bool mbWorldWantsDebugControllerFocus;

public:
	// BrnWorldModuleIO.h:504
	void Construct();

	// BrnWorldModuleIO.h:508
	void Destruct();

	// BrnWorldModuleIO.h:511
	EActiveRaceCarIndex GetPlayerActiveRaceCarIndex() const;

	// BrnWorldModuleIO.h:514
	EGlobalRaceCarIndex GetPlayerGlobalRaceCarIndex() const;

	// BrnWorldModuleIO.h:518
	void AppendTriangleCacheInterface(const VehicleInputInterface::InTriangleCacheInterface *);

	// BrnWorldModuleIO.h:520
	const UpdateOutputBuffer::WorldResourceRequestInterface * GetResourceRequestInterface() const;

	// BrnWorldModuleIO.h:521
	UpdateOutputBuffer::WorldResourceRequestInterface * GetResourceRequestInterface();

	// BrnWorldModuleIO.h:522
	void AppendResourceRequestInterface(const UpdateOutputBuffer::WorldResourceRequestInterface *);

	// BrnWorldModuleIO.h:524
	const UpdateOutputBuffer::AttribSysVaultRequestInterface * GetAttribSysVaultRequestInterface() const;

	// BrnWorldModuleIO.h:525
	UpdateOutputBuffer::AttribSysVaultRequestInterface * GetAttribSysVaultRequestInterface();

	// BrnWorldModuleIO.h:526
	void AppendAttribSysVaultRequestInterface(const UpdateOutputBuffer::AttribSysVaultRequestInterface *);

	// Unknown accessibility
	// BrnWorldModuleIO.h:132
	typedef VehicleOutputInterface VehicleOutputInterface;

	// BrnWorldModuleIO.h:528
	const UpdateOutputBuffer::VehicleOutputInterface * GetVehicleOutputInterface() const;

	// BrnWorldModuleIO.h:529
	UpdateOutputBuffer::VehicleOutputInterface * GetVehicleOutputInterface();

	// Unknown accessibility
	// BrnWorldModuleIO.h:133
	typedef VehicleManagerOutputInterface VehicleManagerOutputInterface;

	// BrnWorldModuleIO.h:531
	const UpdateOutputBuffer::VehicleManagerOutputInterface * GetVehicleManagerOutputInterface() const;

	// BrnWorldModuleIO.h:532
	UpdateOutputBuffer::VehicleManagerOutputInterface * GetVehicleManagerOutputInterface();

	// BrnWorldModuleIO.h:533
	void SetVehicleManagerOutputInterface(const UpdateOutputBuffer::VehicleManagerOutputInterface *);

	// BrnWorldModuleIO.h:535
	const UpdateOutputBuffer::DirectorVehicleInputInterface * GetDirectorVehicleInputInterface() const;

	// BrnWorldModuleIO.h:536
	void SetDirectorVehicleInputInterface(const UpdateOutputBuffer::DirectorVehicleInputInterface *);

	// BrnWorldModuleIO.h:538
	const UpdateOutputBuffer::RCEntityGlobalOutputInterface * GetRaceCarGlobalOutputInterface() const;

	// BrnWorldModuleIO.h:539
	void SetRaceCarGlobalOutputInterface(const UpdateOutputBuffer::RCEntityGlobalOutputInterface *);

	// BrnWorldModuleIO.h:541
	const UpdateOutputBuffer::TriggerEntityModuleOutputInterface * GetTriggerEntityOutputInterface() const;

	// BrnWorldModuleIO.h:542
	void SetTriggerEntityOutputInterface(const UpdateOutputBuffer::TriggerEntityModuleOutputInterface *);

	// BrnWorldModuleIO.h:544
	const UpdateOutputBuffer::RCEntityActiveRaceCarOutputInterface * GetActiveRaceCarOutputInterface() const;

	// BrnWorldModuleIO.h:545
	void SetActiveRaceCarOutputInterface(const UpdateOutputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnWorldModuleIO.h:547
	const UpdateOutputBuffer::RCEntityActiveRaceCarOutputInterface * GetReplayActiveRaceCarOutputInterface() const;

	// BrnWorldModuleIO.h:548
	void SetReplayActiveRaceCarOutputInterface(const UpdateOutputBuffer::RCEntityActiveRaceCarOutputInterface *);

	// BrnWorldModuleIO.h:550
	const UpdateOutputBuffer::ContactSpyInterface * GetContactSpyInterface() const;

	// BrnWorldModuleIO.h:551
	UpdateOutputBuffer::ContactSpyInterface * GetContactSpyInterface();

	// BrnWorldModuleIO.h:552
	void SetContactSpyInterface(const UpdateOutputBuffer::ContactSpyInterface *);

	// BrnWorldModuleIO.h:554
	const UpdateOutputBuffer::AICarOutputInterface * GetAICarOutputInterface() const;

	// BrnWorldModuleIO.h:555
	void SetAICarOutputInterface(const UpdateOutputBuffer::AICarOutputInterface *);

	// BrnWorldModuleIO.h:557
	const PlayerVehicleControls * GetPlayerVehicleControls() const;

	// BrnWorldModuleIO.h:558
	void SetPlayerVehicleControls(const PlayerVehicleControls *);

	// BrnWorldModuleIO.h:560
	const OutputBuffer::RouteResponseQueue * GetRouteResponseQueue() const;

	// BrnWorldModuleIO.h:561
	void AppendRouteResponseQueue(const OutputBuffer::RouteResponseQueue *);

	// BrnWorldModuleIO.h:563
	const UpdateOutputBuffer::TrafficNetworkOutputInterface * GetTrafficNetworkOutputInterface() const;

	// BrnWorldModuleIO.h:564
	void SetTrafficNetworkOutputInterface(const UpdateOutputBuffer::TrafficNetworkOutputInterface *);

	// BrnWorldModuleIO.h:566
	const UpdateOutputBuffer::TrafficSoundOutputInterface * GetTrafficSoundOutputInterface() const;

	// BrnWorldModuleIO.h:567
	void SetTrafficSoundOutputInterface(const UpdateOutputBuffer::TrafficSoundOutputInterface *);

	// BrnWorldModuleIO.h:569
	const TrafficDirectorOutputInterface * GetTrafficDirectorOutputInterface() const;

	// BrnWorldModuleIO.h:570
	void SetTrafficDirectorOutputInterface(const TrafficDirectorOutputInterface *);

	// BrnWorldModuleIO.h:572
	const UpdateOutputBuffer::CrashNetworkOutputInterface * GetCrashNetworkOutputInterface() const;

	// BrnWorldModuleIO.h:573
	void SetCrashNetworkOutputInterface(const UpdateOutputBuffer::CrashNetworkOutputInterface *);

	// BrnWorldModuleIO.h:575
	const UpdateOutputBuffer::GameEventQueue * GetGameEventQueue() const;

	// BrnWorldModuleIO.h:576
	UpdateOutputBuffer::GameEventQueue * GetGameEventQueue();

	// BrnWorldModuleIO.h:577
	void AppendGameEventQueue(const UpdateOutputBuffer::GameEventQueue *);

	// BrnWorldModuleIO.h:579
	const UpdateOutputBuffer::DeformationOutputInterface * GetDeformationOutputInterface() const;

	// BrnWorldModuleIO.h:580
	void SetDeformationOutputInterface(const UpdateOutputBuffer::DeformationOutputInterface *);

	// BrnWorldModuleIO.h:582
	bool GetWorldWantsDebugControllerFocus() const;

	// BrnWorldModuleIO.h:583
	void SetWorldWantsDebugControllerFocus(bool);

	// BrnWorldModuleIO.h:585
	const UpdateOutputBuffer::TrafficTypeResponseQueue * GetTrafficTypeResponseQueue() const;

	// BrnWorldModuleIO.h:586
	void AppendTrafficTypeResponseQueue(const UpdateOutputBuffer::TrafficTypeResponseQueue *);

	// BrnWorldModuleIO.h:588
	const UpdateOutputBuffer::EffectsEnvironmentInterface * GetEffectsEnvironmentInterface() const;

	// BrnWorldModuleIO.h:589
	UpdateOutputBuffer::EffectsEnvironmentInterface * GetEffectsEnvironmentInterface();

	// BrnWorldModuleIO.h:591
	const StatusInterface * GetWorldEntityStatusInterface() const;

	// BrnWorldModuleIO.h:592
	void SetWorldEntityStatusInterface(const StatusInterface *);

	// BrnWorldModuleIO.h:594
	const UpdateOutputBuffer::SoundWorldLoadInterface * GetSoundWorldLoadInterface() const;

	// BrnWorldModuleIO.h:595
	void AppendSoundWorldLoadInterface(const UpdateOutputBuffer::SoundWorldLoadInterface *);

	// BrnWorldModuleIO.h:597
	const UpdateOutputBuffer::ReplayRequestInterface * GetReplayRequestInterface() const;

	// BrnWorldModuleIO.h:598
	void AppendReplayRequestInterface(const UpdateOutputBuffer::ReplayRequestInterface *);

	// BrnWorldModuleIO.h:600
	void SetPropVFXLocatorQueue(const OutputBuffer_PostPhysics::PropVFXLocatorQueue *);

	// BrnWorldModuleIO.h:601
	OutputBuffer_PostPhysics::PropVFXLocatorQueue * GetPropVFXLocatorQueue();

	// BrnWorldModuleIO.h:602
	const OutputBuffer_PostPhysics::PropVFXLocatorQueue * GetPropVFXLocatorQueue() const;

	// BrnWorldModuleIO.h:604
	const UpdateInputBuffer::AudioCarLoadedDataQueue * GetAudioCarLoadedDataQueue() const;

	// BrnWorldModuleIO.h:605
	UpdateInputBuffer::AudioCarLoadedDataQueue * GetAudioCarLoadedDataQueue();

	// BrnWorldModuleIO.h:607
	const InputBuffer::GuiEventInputQueue * GetGuiEventQueue() const;

	// BrnWorldModuleIO.h:608
	InputBuffer::GuiEventInputQueue * GetGuiEventQueue();

	// BrnWorldModuleIO.h:610
	const UpdateOutputBuffer::OutTriangleCacheInterface * GetTriangleCacheInterface() const;

	// BrnWorldModuleIO.h:612
	const OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue * GetPropBecamePhysicalEventQueue() const;

	// BrnWorldModuleIO.h:613
	OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue * GetPropBecamePhysicalEventQueue();

	// BrnWorldModuleIO.h:614
	void AppendPropBecamePhysicalEventQueue(const OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue *);

	// BrnWorldModuleIO.h:616
	const UpdateOutputBuffer::PropUpdateNotificationQueue * GetPropUpdateNotificationQueue() const;

	// BrnWorldModuleIO.h:617
	UpdateOutputBuffer::PropUpdateNotificationQueue * GetPropUpdateNotificationQueue();

	// BrnWorldModuleIO.h:618
	void AppendPropUpdateNotificationQueue(const UpdateOutputBuffer::PropUpdateNotificationQueue *);

}

// BrnWorldModuleIO.h:65
namespace BrnWorldIO {
	struct UpdateInputBuffer;

	struct DispatchInputBuffer;

	struct UpdateOutputBuffer;

	// BrnWorldModuleIO.h:67
	const int32_t KI_WORLD_EVENT_QUEUE_MAX_SIZE = 4096;

	// BrnWorldModuleIO.h:68
	const int32_t KI_WORLD_RENDER_EVENT_QUEUE_MAX_SIZE = 32768;

}

