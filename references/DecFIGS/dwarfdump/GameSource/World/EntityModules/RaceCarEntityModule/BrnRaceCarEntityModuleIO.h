// BrnRaceCarEntityModuleIO.h:118
struct BrnWorld::RaceCarEntityModuleIO::OutputBuffer_Prepare : public IOBuffer {
	// BrnRaceCarEntityModuleIO.h:70
	typedef RequestInterface<8192> ResourceRequestInterface;

private:
	// BrnRaceCarEntityModuleIO.h:131
	OutputBuffer_Prepare::ResourceRequestInterface mResourceRequestInterface;

public:
	// BrnRaceCarEntityModuleIO.h:123
	void Construct();

	// BrnRaceCarEntityModuleIO.h:126
	const OutputBuffer_Prepare::ResourceRequestInterface * GetResourceRequestInterface() const;

	// BrnRaceCarEntityModuleIO.h:127
	OutputBuffer_Prepare::ResourceRequestInterface * GetResourceRequestInterface();

}

// BrnRaceCarEntityModuleIO.h:146
struct BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene : public IOBuffer {
private:
	// BrnRaceCarEntityModuleIO.h:244
	uint16_t[8] mau16RaceCarColourIndex;

	// BrnRaceCarEntityModuleIO.h:245
	uint16_t[8] mau16RaceCarPaintFinishIndex;

	// BrnRaceCarEntityModuleIO.h:246
	bool[8] mabReceivedNetworkDriverControls;

	// BrnRaceCarEntityModuleIO.h:247
	bool[8] mabRaceCarColourIndexValid;

	// BrnRaceCarEntityModuleIO.h:248
	bool[8] mabRaceCarPaintFinishIndexValid;

	// BrnRaceCarEntityModuleIO.h:249
	bool[8] mabLostContactThisFrame;

	// BrnRaceCarEntityModuleIO.h:250
	bool[8] mabRegainedContactThisFrame;

	// BrnRaceCarEntityModuleIO.h:251
	bool[8] mabCarSelectStatus;

	// BrnRaceCarEntityModuleIO.h:252
	bool[8] mabCarSelectStatusValid;

	// BrnRaceCarEntityModuleIO.h:254
	TimerStatusInterface mTimerStatusInterface;

	// BrnRaceCarEntityModuleIO.h:255
	Camera mCameraInput;

	// BrnRaceCarEntityModuleIO.h:256
	PlayerVehicleControls mPlayerVehicleControls;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:98
	typedef InputBuffer::GameActionQueue GameActionQueue;

	// BrnRaceCarEntityModuleIO.h:257
	InputBuffer_PreScene::GameActionQueue mGameActionQueue;

	// BrnRaceCarEntityModuleIO.h:258
	BrnNetwork::EPaybackType meActivePaybackType;

	// BrnRaceCarEntityModuleIO.h:259
	EActiveRaceCarIndex meActivePaybackAggressor;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:106
	typedef StatusInterface ReplayStatusInterface;

	// BrnRaceCarEntityModuleIO.h:260
	InputBuffer_PreScene::ReplayStatusInterface mReplayStatusInterface;

	// Unknown accessibility
	// BrnRaceCarEntityModuleOutputInterface.h:146
	typedef EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16> AudioCarLoadedDataQueue;

	// BrnRaceCarEntityModuleIO.h:261
	InputBuffer_PreScene::AudioCarLoadedDataQueue mAudioCarLoadedDataQueue;

public:
	// BrnRaceCarEntityModuleIO.h:151
	void Construct();

	// BrnRaceCarEntityModuleIO.h:154
	const TimerStatusInterface * GetTimerStatusInterface() const;

	// BrnRaceCarEntityModuleIO.h:155
	void SetTimerStatusInterface(const TimerStatusInterface *);

	// BrnRaceCarEntityModuleIO.h:157
	const Camera * GetCameraInput() const;

	// BrnRaceCarEntityModuleIO.h:158
	void SetCameraInput(const Camera *);

	// BrnRaceCarEntityModuleIO.h:160
	const PlayerVehicleControls * GetPlayerVehicleControls() const;

	// BrnRaceCarEntityModuleIO.h:161
	void SetPlayerVehicleControls(const PlayerVehicleControls *);

	// BrnRaceCarEntityModuleIO.h:163
	const InputBuffer_PreScene::GameActionQueue * GetGameActionQueue() const;

	// BrnRaceCarEntityModuleIO.h:164
	InputBuffer_PreScene::GameActionQueue * GetGameActionQueue();

	// BrnRaceCarEntityModuleIO.h:166
	BrnNetwork::EPaybackType GetActivePaybackType() const;

	// BrnRaceCarEntityModuleIO.h:167
	void SetActivePaybackType(BrnNetwork::EPaybackType);

	// BrnRaceCarEntityModuleIO.h:169
	EActiveRaceCarIndex GetActivePaybackAggressor() const;

	// BrnRaceCarEntityModuleIO.h:170
	void SetActivePaybackAggressor(EActiveRaceCarIndex);

	// BrnRaceCarEntityModuleIO.h:173
	const InputBuffer_PreScene::ReplayStatusInterface * GetReplayStatusInterface() const;

	// BrnRaceCarEntityModuleIO.h:174
	void SetReplayStatusInterface(const InputBuffer_PreScene::ReplayStatusInterface *);

	// BrnRaceCarEntityModuleIO.h:176
	InputBuffer_PreScene::AudioCarLoadedDataQueue * GetAudioCarLoadedDataQueue();

	// BrnRaceCarEntityModuleIO.h:177
	const InputBuffer_PreScene::AudioCarLoadedDataQueue * GetAudioCarLoadedDataQueue() const;

	// BrnRaceCarEntityModuleIO.h:181
	bool GetReceivedNetworkDriverControls(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:185
	void SetReceivedNetworkDriverControls(EActiveRaceCarIndex);

	// BrnRaceCarEntityModuleIO.h:190
	void SetRaceCarColourIndex(EActiveRaceCarIndex, uint16_t);

	// BrnRaceCarEntityModuleIO.h:194
	uint16_t GetRaceCarColourIndex(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:198
	bool IsRaceCarColourIndexValid(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:203
	void SetRaceCarPaintFinishIndex(EActiveRaceCarIndex, uint16_t);

	// BrnRaceCarEntityModuleIO.h:207
	uint16_t GetRaceCarPaintFinishIndex(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:211
	bool IsRaceCarPaintFinishIndexValid(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:215
	void SetLostContact(EActiveRaceCarIndex);

	// BrnRaceCarEntityModuleIO.h:219
	bool GetLostContact(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:223
	void SetRegainedContact(EActiveRaceCarIndex);

	// BrnRaceCarEntityModuleIO.h:227
	bool GetRegainedContact(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:232
	void SetCarSelectStatus(EActiveRaceCarIndex, bool);

	// BrnRaceCarEntityModuleIO.h:236
	bool GetCarSelectStatus(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:240
	bool IsCarSelectStatusValid(EActiveRaceCarIndex) const;

}

// BrnRaceCarEntityModuleIO.h:274
struct BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene : public IOBuffer {
	// BrnRaceCarEntityModuleIO.h:72
	typedef VehicleInputInterface VehicleInputInterface;

private:
	// BrnRaceCarEntityModuleIO.h:311
	OutputBuffer_PreScene::VehicleInputInterface mVehicleInputInterface;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:71
	typedef InSceneUpdateInterface SceneInputInterface;

	// BrnRaceCarEntityModuleIO.h:312
	OutputBuffer_PreScene::SceneInputInterface mSceneInputInterface;

	// BrnRaceCarEntityModuleIO.h:313
	RCEntityActiveRaceCarOutputInterface mActiveRaceCarOutputInterface;

	// BrnRaceCarEntityModuleIO.h:314
	RCEntityGlobalRaceCarOutputInterface mGlobalRaceCarOutputInterface;

	// BrnRaceCarEntityModuleIO.h:315
	RCEntityActiveRaceCarOutputInterface mReplayActiveRaceCarOutputInterface;

	// BrnRaceCarEntityModuleIO.h:316
	RCEntityGlobalRaceCarOutputInterface mReplayGlobalRaceCarOutputInterface;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:81
	typedef RaceCarAIInterface RaceCarAIInterface;

	// BrnRaceCarEntityModuleIO.h:317
	OutputBuffer_PreScene::RaceCarAIInterface mRaceCarAIInterface;

	// BrnRaceCarEntityModuleIO.h:318
	bool mbRequestingRivalUpdate;

	// BrnRaceCarEntityModuleIO.h:320
	InputBuffer_PreScene::AudioCarLoadedDataQueue mAudioCarLoadedDataQueue;

public:
	// BrnRaceCarEntityModuleIO.h:279
	void Construct();

	// BrnRaceCarEntityModuleIO.h:282
	const OutputBuffer_PreScene::VehicleInputInterface * GetVehicleInputInterface() const;

	// BrnRaceCarEntityModuleIO.h:283
	OutputBuffer_PreScene::VehicleInputInterface * GetVehicleInputInterface();

	// BrnRaceCarEntityModuleIO.h:285
	const OutputBuffer_PreScene::SceneInputInterface * GetSceneInputInterface() const;

	// BrnRaceCarEntityModuleIO.h:286
	OutputBuffer_PreScene::SceneInputInterface * GetSceneInputInterface();

	// BrnRaceCarEntityModuleIO.h:288
	const RCEntityActiveRaceCarOutputInterface * GetActiveRaceCarOutputInterface() const;

	// BrnRaceCarEntityModuleIO.h:289
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface * GetActiveRaceCarOutputInterface();

	// BrnRaceCarEntityModuleIO.h:291
	const RCEntityGlobalRaceCarOutputInterface * GetGlobalRaceCarOutputInterface() const;

	// BrnRaceCarEntityModuleIO.h:292
	BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface * GetGlobalRaceCarOutputInterface();

	// BrnRaceCarEntityModuleIO.h:294
	const RCEntityActiveRaceCarOutputInterface * GetReplayActiveRaceCarOutputInterface() const;

	// BrnRaceCarEntityModuleIO.h:295
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface * GetReplayActiveRaceCarOutputInterface();

	// BrnRaceCarEntityModuleIO.h:297
	const RCEntityGlobalRaceCarOutputInterface * GetReplayGlobalRaceCarOutputInterface() const;

	// BrnRaceCarEntityModuleIO.h:298
	BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface * GetReplayGlobalRaceCarOutputInterface();

	// BrnRaceCarEntityModuleIO.h:300
	const OutputBuffer_PreScene::RaceCarAIInterface * GetRaceCarAIInterface() const;

	// BrnRaceCarEntityModuleIO.h:301
	OutputBuffer_PreScene::RaceCarAIInterface * GetRaceCarAIInterface();

	// BrnRaceCarEntityModuleIO.h:303
	bool IsRequestingRivalUpdate() const;

	// BrnRaceCarEntityModuleIO.h:304
	void SetRequestingRivalUpdate(bool);

	// BrnRaceCarEntityModuleIO.h:306
	InputBuffer_PreScene::AudioCarLoadedDataQueue * GetAudioCarLoadedDataQueue();

	// BrnRaceCarEntityModuleIO.h:307
	const InputBuffer_PreScene::AudioCarLoadedDataQueue * GetAudioCarLoadedDataQueue() const;

}

// BrnRaceCarEntityModuleIO.h:335
struct BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostScene : public IOBuffer {
	// BrnRaceCarEntityModuleIO.h:92
	typedef RaceCarOutputInterface CrashInterface;

private:
	// BrnRaceCarEntityModuleIO.h:351
	InputBuffer_PostScene::CrashInterface mCrashInterface;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:94
	typedef TrafficToRaceCarInterface_PreScene TrafficToRaceCarInterface_PreScene;

	// BrnRaceCarEntityModuleIO.h:352
	InputBuffer_PostScene::TrafficToRaceCarInterface_PreScene mTrafficToRaceCarInterface_PreScene;

public:
	// BrnRaceCarEntityModuleIO.h:340
	void Construct();

	// BrnRaceCarEntityModuleIO.h:343
	const InputBuffer_PostScene::CrashInterface * GetCrashInterface() const;

	// BrnRaceCarEntityModuleIO.h:344
	void SetCrashInterface(const InputBuffer_PostScene::CrashInterface *);

	// BrnRaceCarEntityModuleIO.h:346
	const InputBuffer_PostScene::TrafficToRaceCarInterface_PreScene * GetTrafficToRaceCarInterface_PreScene() const;

	// BrnRaceCarEntityModuleIO.h:347
	void SetTrafficToRaceCarInterface_PreScene(const InputBuffer_PostScene::TrafficToRaceCarInterface_PreScene *);

}

// BrnRaceCarEntityModuleIO.h:365
struct BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostScene : public IOBuffer {
	// BrnRaceCarEntityModuleIO.h:77
	typedef InputBuffer_Query::InSmCoarseQueryQueue SceneCoarseQueryQueue;

private:
	// BrnRaceCarEntityModuleIO.h:387
	OutputBuffer_PostScene::SceneCoarseQueryQueue mSceneCoarseQueryQueue;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:78
	typedef InputBuffer_Query::InFineLineTestQueue SceneFineLineTestQueue;

	// BrnRaceCarEntityModuleIO.h:388
	OutputBuffer_PostScene::SceneFineLineTestQueue mSceneFineLineTestQueue;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:83
	typedef AIModuleRequestInterface AIModuleRequestInterface;

	// BrnRaceCarEntityModuleIO.h:389
	OutputBuffer_PostScene::AIModuleRequestInterface mAIModuleRequestInterface;

	// BrnRaceCarEntityModuleIO.h:390
	RaceCarToTrafficInterface mRaceCarToTrafficInterface;

public:
	// BrnRaceCarEntityModuleIO.h:370
	void Construct();

	// BrnRaceCarEntityModuleIO.h:373
	const OutputBuffer_PostScene::SceneCoarseQueryQueue * GetSceneCoarseQueryQueue() const;

	// BrnRaceCarEntityModuleIO.h:374
	OutputBuffer_PostScene::SceneCoarseQueryQueue * GetSceneCoarseQueryQueue();

	// BrnRaceCarEntityModuleIO.h:376
	const OutputBuffer_PostScene::SceneFineLineTestQueue * GetSceneFineLineTestQueue() const;

	// BrnRaceCarEntityModuleIO.h:377
	OutputBuffer_PostScene::SceneFineLineTestQueue * GetSceneFineLineTestQueue();

	// BrnRaceCarEntityModuleIO.h:379
	const OutputBuffer_PostScene::AIModuleRequestInterface * GetAIModuleRequestInterface() const;

	// BrnRaceCarEntityModuleIO.h:380
	OutputBuffer_PostScene::AIModuleRequestInterface * GetAIModuleRequestInterface();

	// BrnRaceCarEntityModuleIO.h:382
	const RaceCarToTrafficInterface * GetRaceCarToTrafficInterface() const;

	// BrnRaceCarEntityModuleIO.h:383
	RaceCarToTrafficInterface * GetRaceCarToTrafficInterface();

}

// BrnRaceCarEntityModuleIO.h:404
struct BrnWorld::RaceCarEntityModuleIO::InputBuffer_PrePhysics : public IOBuffer {
	// BrnRaceCarEntityModuleIO.h:89
	typedef OutputBuffer::OutPotentialContactQueue PotentialContactQueue;

private:
	// BrnRaceCarEntityModuleIO.h:441
	InputBuffer_PrePhysics::PotentialContactQueue mPotentialContactQueue;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:79
	typedef OutputBuffer::OutSmSceneQueryResultsQueue SceneResultQueue;

	// BrnRaceCarEntityModuleIO.h:442
	InputBuffer_PrePhysics::SceneResultQueue mSceneResultQueue;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:84
	typedef AIModuleResultInterface AIModuleResultInterface;

	// BrnRaceCarEntityModuleIO.h:443
	InputBuffer_PrePhysics::AIModuleResultInterface mAIModuleResultInterface;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:97
	typedef InputBuffer::TakedownEventQueue TakedownEventQueue;

	// BrnRaceCarEntityModuleIO.h:444
	InputBuffer_PrePhysics::TakedownEventQueue mTakedownEventQueue;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:100
	typedef ScoringOutputInterface ScoringInterface;

	// BrnRaceCarEntityModuleIO.h:445
	InputBuffer_PrePhysics::ScoringInterface mScoringInterface;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:101
	typedef OnlineScoringOutputInterface OnlineScoringInterface;

	// BrnRaceCarEntityModuleIO.h:446
	InputBuffer_PrePhysics::OnlineScoringInterface mOnlineScoringInterface;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:95
	typedef TrafficToRaceCarInterface_PostScene TrafficToRaceCarInterface_PostScene;

	// BrnRaceCarEntityModuleIO.h:447
	InputBuffer_PrePhysics::TrafficToRaceCarInterface_PostScene mTrafficToRaceCarInterface_PostScene;

	// BrnRaceCarEntityModuleIO.h:448
	bool mbControllerActive;

	// BrnRaceCarEntityModuleIO.h:449
	bool mbInHardStopCamera;

public:
	// BrnRaceCarEntityModuleIO.h:409
	void Construct();

	// BrnRaceCarEntityModuleIO.h:412
	const InputBuffer_PrePhysics::PotentialContactQueue * GetPotentialContactQueue() const;

	// BrnRaceCarEntityModuleIO.h:413
	void SetPotentialContactQueue(const InputBuffer_PrePhysics::PotentialContactQueue *);

	// BrnRaceCarEntityModuleIO.h:415
	const InputBuffer_PrePhysics::SceneResultQueue * GetSceneResultQueue() const;

	// BrnRaceCarEntityModuleIO.h:416
	InputBuffer_PrePhysics::SceneResultQueue * GetSceneResultQueue();

	// BrnRaceCarEntityModuleIO.h:418
	const InputBuffer_PrePhysics::AIModuleResultInterface * GetAIModuleResultInterface() const;

	// BrnRaceCarEntityModuleIO.h:419
	void SetAIModuleResultInterface(const InputBuffer_PrePhysics::AIModuleResultInterface *);

	// BrnRaceCarEntityModuleIO.h:421
	const InputBuffer_PrePhysics::TakedownEventQueue * GetTakedownEventQueue() const;

	// BrnRaceCarEntityModuleIO.h:422
	void SetTakedownEventQueue(const InputBuffer_PrePhysics::TakedownEventQueue *);

	// BrnRaceCarEntityModuleIO.h:424
	const InputBuffer_PrePhysics::ScoringInterface * GetScoringInterface() const;

	// BrnRaceCarEntityModuleIO.h:425
	void SetScoringInterface(const InputBuffer_PrePhysics::ScoringInterface *);

	// BrnRaceCarEntityModuleIO.h:427
	const InputBuffer_PrePhysics::OnlineScoringInterface * GetOnlineScoringInterface() const;

	// BrnRaceCarEntityModuleIO.h:428
	void SetOnlineScoringInterface(const InputBuffer_PrePhysics::OnlineScoringInterface *);

	// BrnRaceCarEntityModuleIO.h:430
	const InputBuffer_PrePhysics::TrafficToRaceCarInterface_PostScene * GetTrafficToRaceCarInterface_PostScene() const;

	// BrnRaceCarEntityModuleIO.h:431
	void SetTrafficToRaceCarInterface_PostScene(const InputBuffer_PrePhysics::TrafficToRaceCarInterface_PostScene *);

	// BrnRaceCarEntityModuleIO.h:433
	bool GetControllerActive() const;

	// BrnRaceCarEntityModuleIO.h:434
	void SetControllerActive(bool);

	// BrnRaceCarEntityModuleIO.h:436
	bool GetInHardStopCamera() const;

	// BrnRaceCarEntityModuleIO.h:437
	void SetInHardStopCamera(bool);

}

// BrnRaceCarEntityModuleIO.h:462
struct BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics : public IOBuffer {
private:
	// BrnRaceCarEntityModuleIO.h:487
	OutputBuffer_PreScene::VehicleInputInterface mVehicleInputInterface;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:73
	typedef VehicleDriverInputInterface VehicleDriverInputInterface;

	// BrnRaceCarEntityModuleIO.h:488
	OutputBuffer_PrePhysics::VehicleDriverInputInterface mVehicleDriverInterface;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:76
	typedef VehicleEffectsInputInterface VehicleEffectsInputInterface;

	// BrnRaceCarEntityModuleIO.h:489
	OutputBuffer_PrePhysics::VehicleEffectsInputInterface mVehicleEffectsInterface;

	// BrnRaceCarEntityModuleIO.h:490
	RCEntityPlayerResetInterface mPlayerResetInterface;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:99
	typedef GameEventQueue GameEventQueue;

	// BrnRaceCarEntityModuleIO.h:491
	OutputBuffer_PrePhysics::GameEventQueue mGameEventQueue;

public:
	// BrnRaceCarEntityModuleIO.h:467
	void Construct();

	// BrnRaceCarEntityModuleIO.h:470
	const OutputBuffer_PreScene::VehicleInputInterface * GetVehicleInputInterface() const;

	// BrnRaceCarEntityModuleIO.h:471
	OutputBuffer_PreScene::VehicleInputInterface * GetVehicleInputInterface();

	// BrnRaceCarEntityModuleIO.h:473
	const OutputBuffer_PrePhysics::VehicleDriverInputInterface * GetVehicleDriverInterface() const;

	// BrnRaceCarEntityModuleIO.h:474
	OutputBuffer_PrePhysics::VehicleDriverInputInterface * GetVehicleDriverInterface();

	// BrnRaceCarEntityModuleIO.h:476
	const OutputBuffer_PrePhysics::VehicleEffectsInputInterface * GetVehicleEffectsInterface() const;

	// BrnRaceCarEntityModuleIO.h:477
	OutputBuffer_PrePhysics::VehicleEffectsInputInterface * GetVehicleEffectsInterface();

	// BrnRaceCarEntityModuleIO.h:479
	const RCEntityPlayerResetInterface * GetPlayerResetInterface() const;

	// BrnRaceCarEntityModuleIO.h:480
	RCEntityPlayerResetInterface * GetPlayerResetInterface();

	// BrnRaceCarEntityModuleIO.h:482
	const OutputBuffer_PrePhysics::GameEventQueue * GetGameEventQueue() const;

	// BrnRaceCarEntityModuleIO.h:483
	OutputBuffer_PrePhysics::GameEventQueue * GetGameEventQueue();

}

// BrnRaceCarEntityModuleIO.h:505
struct BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics : public IOBuffer {
	// BrnRaceCarEntityModuleIO.h:74
	typedef VehicleOutputInterface VehicleOutputInterface;

private:
	// BrnRaceCarEntityModuleIO.h:536
	InputBuffer_PostPhysics::VehicleOutputInterface mVehicleOutputInterface;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:75
	typedef VehicleManagerOutputInterface VehicleManagerOutputInterface;

	// BrnRaceCarEntityModuleIO.h:537
	InputBuffer_PostPhysics::VehicleManagerOutputInterface mVehicleManagerOutputInterface;

	// BrnRaceCarEntityModuleIO.h:538
	OutputBuffer_PreScene::SceneInputInterface mSceneInputInterface;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:87
	typedef DeformationOutputInterfaceForEntityModules DeformationOutputInterfaceForEntityModules;

	// BrnRaceCarEntityModuleIO.h:539
	InputBuffer_PostPhysics::DeformationOutputInterfaceForEntityModules mDeformationOutputInterfaceForEntityModules;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:88
	typedef DeformationOutputInterface DeformationOutputInterface;

	// BrnRaceCarEntityModuleIO.h:540
	InputBuffer_PostPhysics::DeformationOutputInterface mDeformationOutputInterface;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:90
	typedef ContactSpyInterface ContactSpyInterface;

	// BrnRaceCarEntityModuleIO.h:541
	InputBuffer_PostPhysics::ContactSpyInterface mContactSpyInterface;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:82
	typedef AIRaceCarInterface AIRaceCarInterface;

	// BrnRaceCarEntityModuleIO.h:542
	InputBuffer_PostPhysics::AIRaceCarInterface mAIRaceCarInterface;

public:
	// BrnRaceCarEntityModuleIO.h:510
	void Construct();

	// BrnRaceCarEntityModuleIO.h:513
	const InputBuffer_PostPhysics::VehicleOutputInterface * GetVehicleOutputInterface() const;

	// BrnRaceCarEntityModuleIO.h:514
	void SetVehicleOutputInterface(const InputBuffer_PostPhysics::VehicleOutputInterface *);

	// BrnRaceCarEntityModuleIO.h:516
	const InputBuffer_PostPhysics::VehicleManagerOutputInterface * GetVehicleManagerOutputInterface() const;

	// BrnRaceCarEntityModuleIO.h:517
	void SetVehicleManagerOutputInterface(const InputBuffer_PostPhysics::VehicleManagerOutputInterface *);

	// BrnRaceCarEntityModuleIO.h:519
	const OutputBuffer_PreScene::SceneInputInterface * GetSceneInputInterface() const;

	// BrnRaceCarEntityModuleIO.h:520
	OutputBuffer_PreScene::SceneInputInterface * GetSceneInputInterface();

	// BrnRaceCarEntityModuleIO.h:522
	const InputBuffer_PostPhysics::DeformationOutputInterfaceForEntityModules * GetDeformationOutputInterfaceForEntityModules() const;

	// BrnRaceCarEntityModuleIO.h:523
	void SetDeformationOutputInterfaceForEntityModules(const InputBuffer_PostPhysics::DeformationOutputInterfaceForEntityModules *);

	// BrnRaceCarEntityModuleIO.h:525
	const InputBuffer_PostPhysics::DeformationOutputInterface * GetDeformationOutputInterface() const;

	// BrnRaceCarEntityModuleIO.h:526
	void SetDeformationOutputInterface(const InputBuffer_PostPhysics::DeformationOutputInterface *);

	// BrnRaceCarEntityModuleIO.h:528
	const InputBuffer_PostPhysics::ContactSpyInterface * GetContactSpyInterface() const;

	// BrnRaceCarEntityModuleIO.h:529
	void SetContactSpyInterface(const InputBuffer_PostPhysics::ContactSpyInterface *);

	// BrnRaceCarEntityModuleIO.h:531
	const InputBuffer_PostPhysics::AIRaceCarInterface * GetAIRaceCarInterface() const;

	// BrnRaceCarEntityModuleIO.h:532
	void SetAIRaceCarInterface(const InputBuffer_PostPhysics::AIRaceCarInterface *);

}

// BrnRaceCarEntityModuleIO.h:555
struct BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics : public IOBuffer {
private:
	// BrnRaceCarEntityModuleIO.h:595
	OutputBuffer_Prepare::ResourceRequestInterface mResourceRequestInterface;

	// BrnRaceCarEntityModuleIO.h:596
	OutputBuffer_PreScene::SceneInputInterface mSceneInputInterface;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:103
	typedef BrnDirectorVehicleInputInterface DirectorVehicleInputInterface;

	// BrnRaceCarEntityModuleIO.h:597
	OutputBuffer_PostPhysics::DirectorVehicleInputInterface mDirectorVehicleInputInterface;

	// BrnRaceCarEntityModuleIO.h:598
	RCEntityActiveRaceCarOutputInterface mActiveRaceCarOutputInterface;

	// BrnRaceCarEntityModuleIO.h:599
	RCEntityGlobalRaceCarOutputInterface mGlobalRaceCarOutputInterface;

	// BrnRaceCarEntityModuleIO.h:600
	RCEntityActiveRaceCarOutputInterface mReplayActiveRaceCarOutputInterface;

	// BrnRaceCarEntityModuleIO.h:601
	RCEntityGlobalRaceCarOutputInterface mReplayGlobalRaceCarOutputInterface;

	// BrnRaceCarEntityModuleIO.h:602
	OutputBuffer_PrePhysics::GameEventQueue mGameEventQueue;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:107
	typedef RequestInterface ReplayRequestInterface;

	// BrnRaceCarEntityModuleIO.h:603
	OutputBuffer_PostPhysics::ReplayRequestInterface mReplayRequestInterface;

	// BrnRaceCarEntityModuleIO.h:604
	OutputBuffer_PreScene::VehicleInputInterface mVehicleInputInterface;

public:
	// BrnRaceCarEntityModuleIO.h:560
	void Construct();

	// BrnRaceCarEntityModuleIO.h:563
	const OutputBuffer_Prepare::ResourceRequestInterface * GetResourceRequestInterface() const;

	// BrnRaceCarEntityModuleIO.h:564
	OutputBuffer_Prepare::ResourceRequestInterface * GetResourceRequestInterface();

	// BrnRaceCarEntityModuleIO.h:566
	const OutputBuffer_PreScene::SceneInputInterface * GetSceneInputInterface() const;

	// BrnRaceCarEntityModuleIO.h:567
	OutputBuffer_PreScene::SceneInputInterface * GetSceneInputInterface();

	// BrnRaceCarEntityModuleIO.h:569
	const OutputBuffer_PostPhysics::DirectorVehicleInputInterface * GetDirectorVehicleInputInterface() const;

	// BrnRaceCarEntityModuleIO.h:570
	OutputBuffer_PostPhysics::DirectorVehicleInputInterface * GetDirectorVehicleInputInterface();

	// BrnRaceCarEntityModuleIO.h:572
	const RCEntityActiveRaceCarOutputInterface * GetActiveRaceCarOutputInterface() const;

	// BrnRaceCarEntityModuleIO.h:573
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface * GetActiveRaceCarOutputInterface();

	// BrnRaceCarEntityModuleIO.h:575
	const RCEntityGlobalRaceCarOutputInterface * GetGlobalRaceCarOutputInterface() const;

	// BrnRaceCarEntityModuleIO.h:576
	BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface * GetGlobalRaceCarOutputInterface();

	// BrnRaceCarEntityModuleIO.h:578
	const RCEntityActiveRaceCarOutputInterface * GetReplayActiveRaceCarOutputInterface() const;

	// BrnRaceCarEntityModuleIO.h:579
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface * GetReplayActiveRaceCarOutputInterface();

	// BrnRaceCarEntityModuleIO.h:581
	const RCEntityGlobalRaceCarOutputInterface * GetReplayGlobalRaceCarOutputInterface() const;

	// BrnRaceCarEntityModuleIO.h:582
	BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface * GetReplayGlobalRaceCarOutputInterface();

	// BrnRaceCarEntityModuleIO.h:584
	const OutputBuffer_PrePhysics::GameEventQueue * GetGameEventQueue() const;

	// BrnRaceCarEntityModuleIO.h:585
	OutputBuffer_PrePhysics::GameEventQueue * GetGameEventQueue();

	// BrnRaceCarEntityModuleIO.h:587
	const OutputBuffer_PostPhysics::ReplayRequestInterface * GetReplayRequestInterface() const;

	// BrnRaceCarEntityModuleIO.h:588
	OutputBuffer_PostPhysics::ReplayRequestInterface * GetReplayRequestInterface();

	// BrnRaceCarEntityModuleIO.h:590
	const OutputBuffer_PreScene::VehicleInputInterface * GetVehicleInputInterface() const;

	// BrnRaceCarEntityModuleIO.h:591
	OutputBuffer_PreScene::VehicleInputInterface * GetVehicleInputInterface();

}

// BrnRaceCarEntityModuleIO.h:619
struct BrnWorld::RaceCarEntityModuleIO::InputBuffer_GenerateDispatchLists : public IOBuffer {
private:
	// BrnRaceCarEntityModuleIO.h:647
	Camera mCameraInput;

	// BrnRaceCarEntityModuleIO.h:648
	InputBuffer_PrePhysics::SceneResultQueue mSceneResultQueue;

	// BrnRaceCarEntityModuleIO.h:649
	CgsGraphics::DispatchFrame * mpDispatchFrame;

	// BrnRaceCarEntityModuleIO.h:650
	BrnBlobbyShadowManager::BrnBlobbyShadowBuffer * mpBlobbyShadowBuffer;

	// BrnRaceCarEntityModuleIO.h:651
	BrnCoronaManager::BrnSubmissionInterface * mpCoronaSubmissionInterface;

	// BrnRaceCarEntityModuleIO.h:652
	BrnWorld::ShadowMap * mpShadowMap;

public:
	// BrnRaceCarEntityModuleIO.h:624
	void Construct();

	// BrnRaceCarEntityModuleIO.h:627
	const Camera * GetCameraInput() const;

	// BrnRaceCarEntityModuleIO.h:628
	void SetCameraInput(const Camera *);

	// BrnRaceCarEntityModuleIO.h:630
	const InputBuffer_PrePhysics::SceneResultQueue * GetSceneResultQueue() const;

	// BrnRaceCarEntityModuleIO.h:631
	InputBuffer_PrePhysics::SceneResultQueue * GetSceneResultQueue();

	// BrnRaceCarEntityModuleIO.h:633
	CgsGraphics::DispatchFrame * GetDispatchFrame() const;

	// BrnRaceCarEntityModuleIO.h:634
	void SetDispatchFrame(CgsGraphics::DispatchFrame *);

	// BrnRaceCarEntityModuleIO.h:636
	BrnBlobbyShadowManager::BrnBlobbyShadowBuffer * GetBlobbyShadowBuffer() const;

	// BrnRaceCarEntityModuleIO.h:637
	void SetBlobbyShadowBuffer(BrnBlobbyShadowManager::BrnBlobbyShadowBuffer *);

	// BrnRaceCarEntityModuleIO.h:639
	BrnCoronaManager::BrnSubmissionInterface * GetCoronaSubmissionInterface() const;

	// BrnRaceCarEntityModuleIO.h:640
	void SetCoronaSubmissionInterface(BrnCoronaManager::BrnSubmissionInterface *);

	// BrnRaceCarEntityModuleIO.h:642
	BrnWorld::ShadowMap * GetShadowMap() const;

	// BrnRaceCarEntityModuleIO.h:643
	void SetShadowMap(BrnWorld::ShadowMap *);

}

// BrnRaceCarEntityModuleIO.h:146
struct BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene : public IOBuffer {
private:
	// BrnRaceCarEntityModuleIO.h:244
	uint16_t[8] mau16RaceCarColourIndex;

	// BrnRaceCarEntityModuleIO.h:245
	uint16_t[8] mau16RaceCarPaintFinishIndex;

	// BrnRaceCarEntityModuleIO.h:246
	bool[8] mabReceivedNetworkDriverControls;

	// BrnRaceCarEntityModuleIO.h:247
	bool[8] mabRaceCarColourIndexValid;

	// BrnRaceCarEntityModuleIO.h:248
	bool[8] mabRaceCarPaintFinishIndexValid;

	// BrnRaceCarEntityModuleIO.h:249
	bool[8] mabLostContactThisFrame;

	// BrnRaceCarEntityModuleIO.h:250
	bool[8] mabRegainedContactThisFrame;

	// BrnRaceCarEntityModuleIO.h:251
	bool[8] mabCarSelectStatus;

	// BrnRaceCarEntityModuleIO.h:252
	bool[8] mabCarSelectStatusValid;

	// BrnRaceCarEntityModuleIO.h:254
	TimerStatusInterface mTimerStatusInterface;

	// BrnRaceCarEntityModuleIO.h:255
	Camera mCameraInput;

	// BrnRaceCarEntityModuleIO.h:256
	PlayerVehicleControls mPlayerVehicleControls;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:98
	typedef OutputBuffer::GameActionQueue GameActionQueue;

	// BrnRaceCarEntityModuleIO.h:257
	InputBuffer_PreScene::GameActionQueue mGameActionQueue;

	// BrnRaceCarEntityModuleIO.h:258
	BrnNetwork::EPaybackType meActivePaybackType;

	// BrnRaceCarEntityModuleIO.h:259
	EActiveRaceCarIndex meActivePaybackAggressor;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:106
	typedef StatusInterface ReplayStatusInterface;

	// BrnRaceCarEntityModuleIO.h:260
	InputBuffer_PreScene::ReplayStatusInterface mReplayStatusInterface;

	// Unknown accessibility
	// BrnRaceCarEntityModuleOutputInterface.h:146
	typedef EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16> AudioCarLoadedDataQueue;

	// BrnRaceCarEntityModuleIO.h:261
	InputBuffer_PreScene::AudioCarLoadedDataQueue mAudioCarLoadedDataQueue;

public:
	// BrnRaceCarEntityModuleIO.h:151
	void Construct();

	// BrnRaceCarEntityModuleIO.h:154
	const TimerStatusInterface * GetTimerStatusInterface() const;

	// BrnRaceCarEntityModuleIO.h:155
	void SetTimerStatusInterface(const TimerStatusInterface *);

	// BrnRaceCarEntityModuleIO.h:157
	const Camera * GetCameraInput() const;

	// BrnRaceCarEntityModuleIO.h:158
	void SetCameraInput(const Camera *);

	// BrnRaceCarEntityModuleIO.h:160
	const PlayerVehicleControls * GetPlayerVehicleControls() const;

	// BrnRaceCarEntityModuleIO.h:161
	void SetPlayerVehicleControls(const PlayerVehicleControls *);

	// BrnRaceCarEntityModuleIO.h:163
	const InputBuffer_PreScene::GameActionQueue * GetGameActionQueue() const;

	// BrnRaceCarEntityModuleIO.h:164
	InputBuffer_PreScene::GameActionQueue * GetGameActionQueue();

	// BrnRaceCarEntityModuleIO.h:166
	BrnNetwork::EPaybackType GetActivePaybackType() const;

	// BrnRaceCarEntityModuleIO.h:167
	void SetActivePaybackType(BrnNetwork::EPaybackType);

	// BrnRaceCarEntityModuleIO.h:169
	EActiveRaceCarIndex GetActivePaybackAggressor() const;

	// BrnRaceCarEntityModuleIO.h:170
	void SetActivePaybackAggressor(EActiveRaceCarIndex);

	// BrnRaceCarEntityModuleIO.h:173
	const InputBuffer_PreScene::ReplayStatusInterface * GetReplayStatusInterface() const;

	// BrnRaceCarEntityModuleIO.h:174
	void SetReplayStatusInterface(const InputBuffer_PreScene::ReplayStatusInterface *);

	// BrnRaceCarEntityModuleIO.h:176
	InputBuffer_PreScene::AudioCarLoadedDataQueue * GetAudioCarLoadedDataQueue();

	// BrnRaceCarEntityModuleIO.h:177
	const InputBuffer_PreScene::AudioCarLoadedDataQueue * GetAudioCarLoadedDataQueue() const;

	// BrnRaceCarEntityModuleIO.h:181
	bool GetReceivedNetworkDriverControls(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:185
	void SetReceivedNetworkDriverControls(EActiveRaceCarIndex);

	// BrnRaceCarEntityModuleIO.h:190
	void SetRaceCarColourIndex(EActiveRaceCarIndex, uint16_t);

	// BrnRaceCarEntityModuleIO.h:194
	uint16_t GetRaceCarColourIndex(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:198
	bool IsRaceCarColourIndexValid(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:203
	void SetRaceCarPaintFinishIndex(EActiveRaceCarIndex, uint16_t);

	// BrnRaceCarEntityModuleIO.h:207
	uint16_t GetRaceCarPaintFinishIndex(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:211
	bool IsRaceCarPaintFinishIndexValid(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:215
	void SetLostContact(EActiveRaceCarIndex);

	// BrnRaceCarEntityModuleIO.h:219
	bool GetLostContact(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:223
	void SetRegainedContact(EActiveRaceCarIndex);

	// BrnRaceCarEntityModuleIO.h:227
	bool GetRegainedContact(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:232
	void SetCarSelectStatus(EActiveRaceCarIndex, bool);

	// BrnRaceCarEntityModuleIO.h:236
	bool GetCarSelectStatus(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:240
	bool IsCarSelectStatusValid(EActiveRaceCarIndex) const;

}

// BrnRaceCarEntityModuleIO.h:274
struct BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene : public IOBuffer {
	// BrnRaceCarEntityModuleIO.h:72
	typedef VehicleInputInterface VehicleInputInterface;

private:
	// BrnRaceCarEntityModuleIO.h:311
	OutputBuffer_PreScene::VehicleInputInterface mVehicleInputInterface;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:71
	typedef InSceneUpdateInterface SceneInputInterface;

	// BrnRaceCarEntityModuleIO.h:312
	OutputBuffer_PreScene::SceneInputInterface mSceneInputInterface;

	// BrnRaceCarEntityModuleIO.h:313
	RCEntityActiveRaceCarOutputInterface mActiveRaceCarOutputInterface;

	// BrnRaceCarEntityModuleIO.h:314
	RCEntityGlobalRaceCarOutputInterface mGlobalRaceCarOutputInterface;

	// BrnRaceCarEntityModuleIO.h:315
	RCEntityActiveRaceCarOutputInterface mReplayActiveRaceCarOutputInterface;

	// BrnRaceCarEntityModuleIO.h:316
	RCEntityGlobalRaceCarOutputInterface mReplayGlobalRaceCarOutputInterface;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:81
	typedef RaceCarAIInterface RaceCarAIInterface;

	// BrnRaceCarEntityModuleIO.h:317
	OutputBuffer_PreScene::RaceCarAIInterface mRaceCarAIInterface;

	// BrnRaceCarEntityModuleIO.h:318
	bool mbRequestingRivalUpdate;

	// BrnRaceCarEntityModuleIO.h:320
	UpdateInputBuffer::AudioCarLoadedDataQueue mAudioCarLoadedDataQueue;

public:
	// BrnRaceCarEntityModuleIO.h:279
	void Construct();

	// BrnRaceCarEntityModuleIO.h:282
	const OutputBuffer_PreScene::VehicleInputInterface * GetVehicleInputInterface() const;

	// BrnRaceCarEntityModuleIO.h:283
	OutputBuffer_PreScene::VehicleInputInterface * GetVehicleInputInterface();

	// BrnRaceCarEntityModuleIO.h:285
	const OutputBuffer_PreScene::SceneInputInterface * GetSceneInputInterface() const;

	// BrnRaceCarEntityModuleIO.h:286
	OutputBuffer_PreScene::SceneInputInterface * GetSceneInputInterface();

	// BrnRaceCarEntityModuleIO.h:288
	const RCEntityActiveRaceCarOutputInterface * GetActiveRaceCarOutputInterface() const;

	// BrnRaceCarEntityModuleIO.h:289
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface * GetActiveRaceCarOutputInterface();

	// BrnRaceCarEntityModuleIO.h:291
	const RCEntityGlobalRaceCarOutputInterface * GetGlobalRaceCarOutputInterface() const;

	// BrnRaceCarEntityModuleIO.h:292
	BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface * GetGlobalRaceCarOutputInterface();

	// BrnRaceCarEntityModuleIO.h:294
	const RCEntityActiveRaceCarOutputInterface * GetReplayActiveRaceCarOutputInterface() const;

	// BrnRaceCarEntityModuleIO.h:295
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface * GetReplayActiveRaceCarOutputInterface();

	// BrnRaceCarEntityModuleIO.h:297
	const RCEntityGlobalRaceCarOutputInterface * GetReplayGlobalRaceCarOutputInterface() const;

	// BrnRaceCarEntityModuleIO.h:298
	BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface * GetReplayGlobalRaceCarOutputInterface();

	// BrnRaceCarEntityModuleIO.h:300
	const OutputBuffer_PreScene::RaceCarAIInterface * GetRaceCarAIInterface() const;

	// BrnRaceCarEntityModuleIO.h:301
	OutputBuffer_PreScene::RaceCarAIInterface * GetRaceCarAIInterface();

	// BrnRaceCarEntityModuleIO.h:303
	bool IsRequestingRivalUpdate() const;

	// BrnRaceCarEntityModuleIO.h:304
	void SetRequestingRivalUpdate(bool);

	// BrnRaceCarEntityModuleIO.h:306
	UpdateInputBuffer::AudioCarLoadedDataQueue * GetAudioCarLoadedDataQueue();

	// BrnRaceCarEntityModuleIO.h:307
	const UpdateInputBuffer::AudioCarLoadedDataQueue * GetAudioCarLoadedDataQueue() const;

}

// BrnRaceCarEntityModuleIO.h:146
struct BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene : public IOBuffer {
private:
	// BrnRaceCarEntityModuleIO.h:244
	uint16_t[8] mau16RaceCarColourIndex;

	// BrnRaceCarEntityModuleIO.h:245
	uint16_t[8] mau16RaceCarPaintFinishIndex;

	// BrnRaceCarEntityModuleIO.h:246
	bool[8] mabReceivedNetworkDriverControls;

	// BrnRaceCarEntityModuleIO.h:247
	bool[8] mabRaceCarColourIndexValid;

	// BrnRaceCarEntityModuleIO.h:248
	bool[8] mabRaceCarPaintFinishIndexValid;

	// BrnRaceCarEntityModuleIO.h:249
	bool[8] mabLostContactThisFrame;

	// BrnRaceCarEntityModuleIO.h:250
	bool[8] mabRegainedContactThisFrame;

	// BrnRaceCarEntityModuleIO.h:251
	bool[8] mabCarSelectStatus;

	// BrnRaceCarEntityModuleIO.h:252
	bool[8] mabCarSelectStatusValid;

	// BrnRaceCarEntityModuleIO.h:254
	TimerStatusInterface mTimerStatusInterface;

	// BrnRaceCarEntityModuleIO.h:255
	Camera mCameraInput;

	// BrnRaceCarEntityModuleIO.h:256
	PlayerVehicleControls mPlayerVehicleControls;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:98
	typedef InputBuffer_PreSim::GameActionQueue GameActionQueue;

	// BrnRaceCarEntityModuleIO.h:257
	InputBuffer_PreScene::GameActionQueue mGameActionQueue;

	// BrnRaceCarEntityModuleIO.h:258
	BrnNetwork::EPaybackType meActivePaybackType;

	// BrnRaceCarEntityModuleIO.h:259
	EActiveRaceCarIndex meActivePaybackAggressor;

	// Unknown accessibility
	// BrnRaceCarEntityModuleIO.h:106
	typedef StatusInterface ReplayStatusInterface;

	// BrnRaceCarEntityModuleIO.h:260
	InputBuffer_PreScene::ReplayStatusInterface mReplayStatusInterface;

	// Unknown accessibility
	// BrnRaceCarEntityModuleOutputInterface.h:146
	typedef EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16> AudioCarLoadedDataQueue;

	// BrnRaceCarEntityModuleIO.h:261
	InputBuffer_PreScene::AudioCarLoadedDataQueue mAudioCarLoadedDataQueue;

public:
	// BrnRaceCarEntityModuleIO.h:151
	void Construct();

	// BrnRaceCarEntityModuleIO.h:154
	const TimerStatusInterface * GetTimerStatusInterface() const;

	// BrnRaceCarEntityModuleIO.h:155
	void SetTimerStatusInterface(const TimerStatusInterface *);

	// BrnRaceCarEntityModuleIO.h:157
	const Camera * GetCameraInput() const;

	// BrnRaceCarEntityModuleIO.h:158
	void SetCameraInput(const Camera *);

	// BrnRaceCarEntityModuleIO.h:160
	const PlayerVehicleControls * GetPlayerVehicleControls() const;

	// BrnRaceCarEntityModuleIO.h:161
	void SetPlayerVehicleControls(const PlayerVehicleControls *);

	// BrnRaceCarEntityModuleIO.h:163
	const InputBuffer_PreScene::GameActionQueue * GetGameActionQueue() const;

	// BrnRaceCarEntityModuleIO.h:164
	InputBuffer_PreScene::GameActionQueue * GetGameActionQueue();

	// BrnRaceCarEntityModuleIO.h:166
	BrnNetwork::EPaybackType GetActivePaybackType() const;

	// BrnRaceCarEntityModuleIO.h:167
	void SetActivePaybackType(BrnNetwork::EPaybackType);

	// BrnRaceCarEntityModuleIO.h:169
	EActiveRaceCarIndex GetActivePaybackAggressor() const;

	// BrnRaceCarEntityModuleIO.h:170
	void SetActivePaybackAggressor(EActiveRaceCarIndex);

	// BrnRaceCarEntityModuleIO.h:173
	const InputBuffer_PreScene::ReplayStatusInterface * GetReplayStatusInterface() const;

	// BrnRaceCarEntityModuleIO.h:174
	void SetReplayStatusInterface(const InputBuffer_PreScene::ReplayStatusInterface *);

	// BrnRaceCarEntityModuleIO.h:176
	InputBuffer_PreScene::AudioCarLoadedDataQueue * GetAudioCarLoadedDataQueue();

	// BrnRaceCarEntityModuleIO.h:177
	const InputBuffer_PreScene::AudioCarLoadedDataQueue * GetAudioCarLoadedDataQueue() const;

	// BrnRaceCarEntityModuleIO.h:181
	bool GetReceivedNetworkDriverControls(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:185
	void SetReceivedNetworkDriverControls(EActiveRaceCarIndex);

	// BrnRaceCarEntityModuleIO.h:190
	void SetRaceCarColourIndex(EActiveRaceCarIndex, uint16_t);

	// BrnRaceCarEntityModuleIO.h:194
	uint16_t GetRaceCarColourIndex(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:198
	bool IsRaceCarColourIndexValid(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:203
	void SetRaceCarPaintFinishIndex(EActiveRaceCarIndex, uint16_t);

	// BrnRaceCarEntityModuleIO.h:207
	uint16_t GetRaceCarPaintFinishIndex(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:211
	bool IsRaceCarPaintFinishIndexValid(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:215
	void SetLostContact(EActiveRaceCarIndex);

	// BrnRaceCarEntityModuleIO.h:219
	bool GetLostContact(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:223
	void SetRegainedContact(EActiveRaceCarIndex);

	// BrnRaceCarEntityModuleIO.h:227
	bool GetRegainedContact(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:232
	void SetCarSelectStatus(EActiveRaceCarIndex, bool);

	// BrnRaceCarEntityModuleIO.h:236
	bool GetCarSelectStatus(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleIO.h:240
	bool IsCarSelectStatusValid(EActiveRaceCarIndex) const;

}

