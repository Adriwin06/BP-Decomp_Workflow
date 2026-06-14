// BrnTrafficEntityModuleIO.h:115
struct BrnTraffic::BrnTrafficIO::OutputBuffer_Prepare : public IOBuffer {
	// BrnTrafficEntityModuleIO.h:77
	typedef InSceneUpdateInterface SceneInputInterface;

private:
	// BrnTrafficEntityModuleIO.h:130
	OutputBuffer_Prepare::SceneInputInterface mSceneInputInterface;

	// Unknown accessibility
	// BrnTrafficEntityModuleIO.h:74
	typedef RequestInterface<4096> ResourceRequestInterface;

	// BrnTrafficEntityModuleIO.h:131
	OutputBuffer_Prepare::ResourceRequestInterface mResourceRequestInterface;

public:
	// BrnTrafficEntityModuleIO.h:119
	void Construct();

	// BrnTrafficEntityModuleIO.h:122
	const OutputBuffer_Prepare::SceneInputInterface * GetSceneInputInterface() const;

	// BrnTrafficEntityModuleIO.h:123
	OutputBuffer_Prepare::SceneInputInterface * GetSceneInputInterface();

	// BrnTrafficEntityModuleIO.h:125
	const OutputBuffer_Prepare::ResourceRequestInterface * GetResourceRequestInterface() const;

	// BrnTrafficEntityModuleIO.h:126
	OutputBuffer_Prepare::ResourceRequestInterface * GetResourceRequestInterface();

}

// BrnTrafficEntityModuleIO.h:380
struct BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics : public IOBuffer {
	// BrnTrafficEntityModuleIO.h:94
	typedef TrafficInputInterface CrashTrafficInputInterface;

private:
	// BrnTrafficEntityModuleIO.h:416
	OutputBuffer_PostPhysics::CrashTrafficInputInterface mCrashTrafficInputInterface;

	// BrnTrafficEntityModuleIO.h:417
	TrafficNetworkOutputInterface mNetworkInterface;

	// BrnTrafficEntityModuleIO.h:418
	TrafficSoundOutputInterface mTrafficSoundOutputInterface;

	// BrnTrafficEntityModuleIO.h:419
	TrafficDirectorOutputInterface mTrafficDirectorOutputInterface;

	// Unknown accessibility
	// BrnTrafficEntityModuleIO.h:100
	typedef GameEventQueue GameEventQueue;

	// BrnTrafficEntityModuleIO.h:420
	OutputBuffer_PostPhysics::GameEventQueue mGameEventQueue;

	// BrnTrafficEntityModuleIO.h:421
	OutputBuffer_Prepare::SceneInputInterface mSceneInputInterface;

	// Unknown accessibility
	// BrnTrafficTypeInterface.h:51
	typedef EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32> TrafficTypeResponseQueue;

	// BrnTrafficEntityModuleIO.h:422
	OutputBuffer_PostPhysics::TrafficTypeResponseQueue mTrafficTypeResponseQueue;

	// BrnTrafficEntityModuleIO.h:423
	OutputBuffer_Prepare::ResourceRequestInterface mResourceRequestInterface;

	// BrnTrafficEntityModuleIO.h:424
	InputBuffer::GuiEventInputQueue mGuiEventQueue;

public:
	// BrnTrafficEntityModuleIO.h:384
	void Construct();

	// BrnTrafficEntityModuleIO.h:387
	const OutputBuffer_PostPhysics::CrashTrafficInputInterface * GetCrashTrafficInputInterface() const;

	// BrnTrafficEntityModuleIO.h:388
	OutputBuffer_PostPhysics::CrashTrafficInputInterface * GetCrashTrafficInputInterface();

	// BrnTrafficEntityModuleIO.h:390
	const TrafficNetworkOutputInterface * GetNetworkInterface() const;

	// BrnTrafficEntityModuleIO.h:391
	TrafficNetworkOutputInterface * GetNetworkInterface();

	// BrnTrafficEntityModuleIO.h:393
	const TrafficSoundOutputInterface * GetTrafficSoundOutputInterface() const;

	// BrnTrafficEntityModuleIO.h:394
	TrafficSoundOutputInterface * GetTrafficSoundOutputInterface();

	// BrnTrafficEntityModuleIO.h:396
	const TrafficDirectorOutputInterface * GetTrafficDirectorOutputInterface() const;

	// BrnTrafficEntityModuleIO.h:397
	TrafficDirectorOutputInterface * GetTrafficDirectorOutputInterface();

	// BrnTrafficEntityModuleIO.h:399
	const OutputBuffer_PostPhysics::GameEventQueue * GetGameEventQueue() const;

	// BrnTrafficEntityModuleIO.h:400
	OutputBuffer_PostPhysics::GameEventQueue * GetGameEventQueue();

	// BrnTrafficEntityModuleIO.h:402
	const OutputBuffer_Prepare::SceneInputInterface * GetSceneInputInterface() const;

	// BrnTrafficEntityModuleIO.h:403
	OutputBuffer_Prepare::SceneInputInterface * GetSceneInputInterface();

	// BrnTrafficEntityModuleIO.h:405
	const OutputBuffer_PostPhysics::TrafficTypeResponseQueue * GetTrafficTypeResponseQueue() const;

	// BrnTrafficEntityModuleIO.h:406
	OutputBuffer_PostPhysics::TrafficTypeResponseQueue * GetTrafficTypeResponseQueue();

	// BrnTrafficEntityModuleIO.h:408
	const OutputBuffer_Prepare::ResourceRequestInterface * GetResourceRequestInterface() const;

	// BrnTrafficEntityModuleIO.h:409
	OutputBuffer_Prepare::ResourceRequestInterface * GetResourceRequestInterface();

	// BrnTrafficEntityModuleIO.h:411
	const InputBuffer::GuiEventInputQueue * GetGuiEventQueue() const;

	// BrnTrafficEntityModuleIO.h:412
	InputBuffer::GuiEventInputQueue * GetGuiEventQueue();

}

// BrnTrafficEntityModuleIO.h:143
struct BrnTraffic::BrnTrafficIO::InputBuffer_PreScene : public IOBuffer {
private:
	// BrnTrafficEntityModuleIO.h:167
	TimerStatusInterface mTimerStatusInterface;

	// Unknown accessibility
	// BrnTrafficEntityModuleIO.h:85
	typedef RCEntityActiveRaceCarOutputInterface ActiveRaceCarOutputInterface;

	// BrnTrafficEntityModuleIO.h:168
	InputBuffer_PreScene::ActiveRaceCarOutputInterface mActiveRaceCarOutputInterface;

	// Unknown accessibility
	// BrnTrafficEntityModuleIO.h:86
	typedef RCEntityGlobalRaceCarOutputInterface GlobalRaceCarOutputInterface;

	// BrnTrafficEntityModuleIO.h:169
	InputBuffer_PreScene::GlobalRaceCarOutputInterface mGlobalRaceCarOutputInterface;

	// BrnTrafficEntityModuleIO.h:170
	TrafficNetworkInputInterface mTrafficNetworkInputInterface;

	// BrnTrafficEntityModuleIO.h:171
	float32_t mfTimeOfDay_Seconds;

public:
	// BrnTrafficEntityModuleIO.h:147
	void Construct();

	// BrnTrafficEntityModuleIO.h:150
	const TimerStatusInterface * GetTimerStatusInterface() const;

	// BrnTrafficEntityModuleIO.h:151
	void SetTimerStatusInterface(const TimerStatusInterface *);

	// BrnTrafficEntityModuleIO.h:153
	const InputBuffer_PreScene::ActiveRaceCarOutputInterface * GetActiveRaceCarOutputInterface() const;

	// BrnTrafficEntityModuleIO.h:154
	void SetActiveRaceCarOutputInterface(const InputBuffer_PreScene::ActiveRaceCarOutputInterface *);

	// BrnTrafficEntityModuleIO.h:156
	const InputBuffer_PreScene::GlobalRaceCarOutputInterface * GetGlobalRaceCarOutputInterface() const;

	// BrnTrafficEntityModuleIO.h:157
	void SetGlobalRaceCarOutputInterface(const InputBuffer_PreScene::GlobalRaceCarOutputInterface *);

	// BrnTrafficEntityModuleIO.h:159
	const TrafficNetworkInputInterface * GetTrafficNetworkInputInterface() const;

	// BrnTrafficEntityModuleIO.h:160
	void SetTrafficNetworkInputInterface(const TrafficNetworkInputInterface *);

	// BrnTrafficEntityModuleIO.h:162
	float32_t GetTimeOfDay_Seconds() const;

	// BrnTrafficEntityModuleIO.h:163
	void SetTimeOfDay_Seconds(float32_t);

}

// BrnTrafficEntityModuleIO.h:175
struct BrnTraffic::BrnTrafficIO::OutputBuffer_PreScene : public IOBuffer {
private:
	// BrnTrafficEntityModuleIO.h:206
	OutputBuffer_Prepare::SceneInputInterface mSceneInputInterface;

	// BrnTrafficEntityModuleIO.h:207
	TrafficToRaceCarInterface_PreScene mTrafficToRaceCarInterface_PreScene;

	// Unknown accessibility
	// BrnTrafficEntityModuleIO.h:89
	typedef TriggerManagementInputInterface TriggerManagementInputInterface;

	// BrnTrafficEntityModuleIO.h:208
	OutputBuffer_PreScene::TriggerManagementInputInterface mTriggerManagementInputInterface;

	// BrnTrafficEntityModuleIO.h:209
	GuiTrafficCarInfoEvent::ScoringVehicleArray mPotentialScorees;

public:
	// BrnTrafficEntityModuleIO.h:179
	void Construct();

	// BrnTrafficEntityModuleIO.h:182
	const OutputBuffer_Prepare::SceneInputInterface * GetSceneInputInterface() const;

	// BrnTrafficEntityModuleIO.h:183
	OutputBuffer_Prepare::SceneInputInterface * GetSceneInputInterface();

	// BrnTrafficEntityModuleIO.h:185
	const TrafficToRaceCarInterface_PreScene * GetTrafficToRaceCarInterface_PreScene() const;

	// BrnTrafficEntityModuleIO.h:186
	TrafficToRaceCarInterface_PreScene * GetTrafficToRaceCarInterface_PreScene();

	// BrnTrafficEntityModuleIO.h:188
	const OutputBuffer_PreScene::TriggerManagementInputInterface * GetTriggerManagementInputInterface() const;

	// BrnTrafficEntityModuleIO.h:189
	OutputBuffer_PreScene::TriggerManagementInputInterface * GetTriggerManagementInputInterface();

	// BrnTrafficEntityModuleIO.h:198
	void AddPotentialScoree(Vector3, float32_t, int32_t, int32_t, uint16_t);

	// BrnTrafficEntityModuleIO.h:202
	const GuiTrafficCarInfoEvent::ScoringVehicleArray * GetPotentialScorees() const;

}

// BrnTrafficEntityModuleIO.h:221
struct BrnTraffic::BrnTrafficIO::InputBuffer_PostScene : public IOBuffer {
	// BrnTrafficEntityModuleIO.h:95
	typedef TrafficOutputInterface CrashTrafficOutputInterface;

private:
	// BrnTrafficEntityModuleIO.h:239
	InputBuffer_PostScene::CrashTrafficOutputInterface mCrashTrafficOutputInterface;

	// BrnTrafficEntityModuleIO.h:240
	InputBuffer_PreScene::ActiveRaceCarOutputInterface mActiveRaceCarOutputInterface;

	// Unknown accessibility
	// BrnTrafficEntityModuleIO.h:87
	typedef RaceCarToTrafficInterface RaceCarToTrafficInterface;

	// BrnTrafficEntityModuleIO.h:241
	InputBuffer_PostScene::RaceCarToTrafficInterface mRaceCarToTrafficInterface;

public:
	// BrnTrafficEntityModuleIO.h:225
	void Construct();

	// BrnTrafficEntityModuleIO.h:228
	const InputBuffer_PostScene::CrashTrafficOutputInterface * GetCrashTrafficOutputInterface() const;

	// BrnTrafficEntityModuleIO.h:229
	void SetCrashTrafficOutputInterface(const InputBuffer_PostScene::CrashTrafficOutputInterface *);

	// BrnTrafficEntityModuleIO.h:231
	const InputBuffer_PreScene::ActiveRaceCarOutputInterface * GetActiveRaceCarOutputInterface() const;

	// BrnTrafficEntityModuleIO.h:232
	void SetActiveRaceCarOutputInterface(const InputBuffer_PreScene::ActiveRaceCarOutputInterface *);

	// BrnTrafficEntityModuleIO.h:234
	const InputBuffer_PostScene::RaceCarToTrafficInterface * GetRaceCarToTrafficInterface() const;

	// BrnTrafficEntityModuleIO.h:235
	void SetRaceCarToTrafficInterface(const InputBuffer_PostScene::RaceCarToTrafficInterface *);

}

// BrnTrafficEntityModuleIO.h:245
struct BrnTraffic::BrnTrafficIO::OutputBuffer_PostScene : public IOBuffer {
	// BrnTrafficEntityModuleIO.h:102
	typedef InputBuffer_Query::InSmCoarseQueryQueue SceneCoarseQueryQueue;

private:
	// BrnTrafficEntityModuleIO.h:263
	OutputBuffer_PostScene::SceneCoarseQueryQueue mSceneCoarseQueryQueue;

	// BrnTrafficEntityModuleIO.h:264
	TrafficAIInterface mTrafficAIInterface;

	// BrnTrafficEntityModuleIO.h:265
	TrafficToRaceCarInterface_PostScene mTrafficToRaceCarInterface_PostScene;

public:
	// BrnTrafficEntityModuleIO.h:249
	void Construct();

	// BrnTrafficEntityModuleIO.h:252
	const OutputBuffer_PostScene::SceneCoarseQueryQueue * GetSceneCoarseQueryQueue() const;

	// BrnTrafficEntityModuleIO.h:253
	OutputBuffer_PostScene::SceneCoarseQueryQueue * GetSceneCoarseQueryQueue();

	// BrnTrafficEntityModuleIO.h:255
	const TrafficAIInterface * GetTrafficAIInterface() const;

	// BrnTrafficEntityModuleIO.h:256
	TrafficAIInterface * GetTrafficAIInterface();

	// BrnTrafficEntityModuleIO.h:258
	const TrafficToRaceCarInterface_PostScene * GetTrafficToRaceCarInterface_PostScene() const;

	// BrnTrafficEntityModuleIO.h:259
	TrafficToRaceCarInterface_PostScene * GetTrafficToRaceCarInterface_PostScene();

}

// BrnTrafficEntityModuleIO.h:270
struct BrnTraffic::BrnTrafficIO::InputBuffer_PrePhysics : public IOBuffer {
	// BrnTrafficEntityModuleIO.h:91
	typedef OutputBuffer::OutPotentialContactQueue PotentialContactQueue;

private:
	// BrnTrafficEntityModuleIO.h:294
	InputBuffer_PrePhysics::PotentialContactQueue mPotentialContactQueue;

	// Unknown accessibility
	// BrnTrafficEntityModuleIO.h:92
	typedef OutputBuffer::OutOverlapPairsQueue OverlapPairsQueue;

	// BrnTrafficEntityModuleIO.h:295
	InputBuffer_PrePhysics::OverlapPairsQueue mOverlapPairsQueue;

	// Unknown accessibility
	// BrnTrafficEntityModuleIO.h:97
	typedef OutputBuffer::OutSmSceneQueryResultsQueue SceneResultQueue;

	// BrnTrafficEntityModuleIO.h:296
	InputBuffer_PrePhysics::SceneResultQueue mSceneResultQueue;

	// Unknown accessibility
	// BrnTrafficEntityModuleIO.h:104
	typedef RCEntityPlayerResetInterface RCEntityPlayerResetInterface;

	// BrnTrafficEntityModuleIO.h:298
	InputBuffer_PrePhysics::RCEntityPlayerResetInterface mPlayerResetInterface;

	// Unknown accessibility
	// BrnTrafficEntityModuleIO.h:110
	typedef PropToTrafficInterface PropToTrafficInterface;

	// BrnTrafficEntityModuleIO.h:299
	InputBuffer_PrePhysics::PropToTrafficInterface mPropToTrafficInterface;

public:
	// BrnTrafficEntityModuleIO.h:274
	void Construct();

	// BrnTrafficEntityModuleIO.h:277
	const InputBuffer_PrePhysics::PotentialContactQueue * GetPotentialContactQueue() const;

	// BrnTrafficEntityModuleIO.h:278
	void SetPotentialContactQueue(const InputBuffer_PrePhysics::PotentialContactQueue *);

	// BrnTrafficEntityModuleIO.h:280
	const InputBuffer_PrePhysics::OverlapPairsQueue * GetOverlapPairsQueue() const;

	// BrnTrafficEntityModuleIO.h:281
	void SetOverlapPairsQueue(const InputBuffer_PrePhysics::OverlapPairsQueue *);

	// BrnTrafficEntityModuleIO.h:283
	const InputBuffer_PrePhysics::RCEntityPlayerResetInterface * GetPlayerResetInterface() const;

	// BrnTrafficEntityModuleIO.h:284
	void SetPlayerResetInterface(const InputBuffer_PrePhysics::RCEntityPlayerResetInterface *);

	// BrnTrafficEntityModuleIO.h:286
	const InputBuffer_PrePhysics::SceneResultQueue * GetSceneResultQueue() const;

	// BrnTrafficEntityModuleIO.h:287
	InputBuffer_PrePhysics::SceneResultQueue * GetSceneResultQueue();

	// BrnTrafficEntityModuleIO.h:289
	const InputBuffer_PrePhysics::PropToTrafficInterface * GetPropToTrafficInterface() const;

	// BrnTrafficEntityModuleIO.h:290
	InputBuffer_PrePhysics::PropToTrafficInterface * GetPropToTrafficInterface();

}

// BrnTrafficEntityModuleIO.h:303
struct BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics : public IOBuffer {
	// BrnTrafficEntityModuleIO.h:79
	typedef VehicleInputInterface VehicleInputInterface;

private:
	// BrnTrafficEntityModuleIO.h:324
	OutputBuffer_PrePhysics::VehicleInputInterface mVehicleInputInterface;

	// Unknown accessibility
	// BrnTrafficEntityModuleIO.h:80
	typedef VehicleEffectsInputInterface VehicleEffectsInputInterface;

	// BrnTrafficEntityModuleIO.h:325
	OutputBuffer_PrePhysics::VehicleEffectsInputInterface mVehicleEffectsInterface;

	// Unknown accessibility
	// BrnTrafficEntityModuleIO.h:81
	typedef VehicleDriverInputInterface VehicleDriverInputInterface;

	// BrnTrafficEntityModuleIO.h:326
	OutputBuffer_PrePhysics::VehicleDriverInputInterface mVehicleDriverInterface;

	// BrnTrafficEntityModuleIO.h:327
	bool mbPlayingShowtime;

public:
	// BrnTrafficEntityModuleIO.h:307
	void Construct();

	// BrnTrafficEntityModuleIO.h:310
	const OutputBuffer_PrePhysics::VehicleInputInterface * GetVehicleInputInterface() const;

	// BrnTrafficEntityModuleIO.h:311
	OutputBuffer_PrePhysics::VehicleInputInterface * GetVehicleInputInterface();

	// BrnTrafficEntityModuleIO.h:313
	const OutputBuffer_PrePhysics::VehicleEffectsInputInterface * GetVehicleEffectsInterface() const;

	// BrnTrafficEntityModuleIO.h:314
	OutputBuffer_PrePhysics::VehicleEffectsInputInterface * GetVehicleEffectsInterface();

	// BrnTrafficEntityModuleIO.h:316
	const OutputBuffer_PrePhysics::VehicleDriverInputInterface * GetVehicleDriverInterface() const;

	// BrnTrafficEntityModuleIO.h:317
	OutputBuffer_PrePhysics::VehicleDriverInputInterface * GetVehicleDriverInterface();

	// BrnTrafficEntityModuleIO.h:319
	bool GetPlayingShowtime() const;

	// BrnTrafficEntityModuleIO.h:320
	void SetPlayingShowtime(bool);

}

// BrnTrafficEntityModuleIO.h:339
struct BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics : public IOBuffer {
	// BrnTrafficEntityModuleIO.h:82
	typedef VehicleOutputInterface VehicleOutputInterface;

private:
	// BrnTrafficEntityModuleIO.h:370
	InputBuffer_PostPhysics::VehicleOutputInterface mVehicleOutputInterface;

	// BrnTrafficEntityModuleIO.h:371
	InputBuffer_PrePhysics::SceneResultQueue mSceneResultQueue;

	// Unknown accessibility
	// BrnTrafficEntityModuleIO.h:83
	typedef VehicleManagerOutputInterface VehicleManagerOutputInterface;

	// BrnTrafficEntityModuleIO.h:372
	InputBuffer_PostPhysics::VehicleManagerOutputInterface mVehicleManagerOutputInterface;

	// Unknown accessibility
	// BrnTrafficEntityModuleIO.h:99
	typedef InputBuffer::GameActionQueue GameActionQueue;

	// BrnTrafficEntityModuleIO.h:373
	InputBuffer_PostPhysics::GameActionQueue mGameActionQueue;

	// BrnTrafficEntityModuleIO.h:374
	InputBuffer_PreScene::ActiveRaceCarOutputInterface mActiveRaceCarOutputInterface;

	// Unknown accessibility
	// BrnTrafficEntityModuleIO.h:106
	typedef DeformationOutputInterfaceForEntityModules DeformationOutputInterfaceForEntityModules;

	// BrnTrafficEntityModuleIO.h:375
	InputBuffer_PostPhysics::DeformationOutputInterfaceForEntityModules mDeformationOutputInterfaceForEntityModules;

	// Unknown accessibility
	// BrnTrafficEntityModuleIO.h:108
	typedef ContactSpyInterface ContactSpyInterface;

	// BrnTrafficEntityModuleIO.h:376
	InputBuffer_PostPhysics::ContactSpyInterface mContactSpyInterface;

public:
	// BrnTrafficEntityModuleIO.h:343
	void Construct();

	// BrnTrafficEntityModuleIO.h:346
	const InputBuffer_PostPhysics::VehicleOutputInterface * GetVehicleOutputInterface() const;

	// BrnTrafficEntityModuleIO.h:347
	void SetVehicleOutputInterface(const InputBuffer_PostPhysics::VehicleOutputInterface *);

	// BrnTrafficEntityModuleIO.h:349
	const InputBuffer_PrePhysics::SceneResultQueue * GetSceneResultQueue() const;

	// BrnTrafficEntityModuleIO.h:350
	InputBuffer_PrePhysics::SceneResultQueue * GetSceneResultQueue();

	// BrnTrafficEntityModuleIO.h:352
	const InputBuffer_PostPhysics::VehicleManagerOutputInterface * GetVehicleManagerOutputInterface() const;

	// BrnTrafficEntityModuleIO.h:353
	void SetVehicleManagerOutputInterface(const InputBuffer_PostPhysics::VehicleManagerOutputInterface *);

	// BrnTrafficEntityModuleIO.h:355
	const InputBuffer_PostPhysics::GameActionQueue * GetGameActionQueue() const;

	// BrnTrafficEntityModuleIO.h:356
	InputBuffer_PostPhysics::GameActionQueue * GetGameActionQueue();

	// BrnTrafficEntityModuleIO.h:358
	const InputBuffer_PreScene::ActiveRaceCarOutputInterface * GetActiveRaceCarOutputInterface() const;

	// BrnTrafficEntityModuleIO.h:359
	void SetActiveRaceCarOutputInterface(const InputBuffer_PreScene::ActiveRaceCarOutputInterface *);

	// BrnTrafficEntityModuleIO.h:361
	const InputBuffer_PostPhysics::DeformationOutputInterfaceForEntityModules * GetDeformationOutputInterfaceForEntityModules() const;

	// BrnTrafficEntityModuleIO.h:362
	void SetDeformationOutputInterfaceForEntityModules(const InputBuffer_PostPhysics::DeformationOutputInterfaceForEntityModules *);

	// BrnTrafficEntityModuleIO.h:363
	InputBuffer_PostPhysics::DeformationOutputInterfaceForEntityModules * GetDeformationOutputInterfaceForEntityModules();

	// BrnTrafficEntityModuleIO.h:365
	const InputBuffer_PostPhysics::ContactSpyInterface * GetContactSpyInterface() const;

	// BrnTrafficEntityModuleIO.h:366
	void SetContactSpyInterface(const InputBuffer_PostPhysics::ContactSpyInterface *);

}

// BrnTrafficEntityModuleIO.h:436
struct BrnTraffic::BrnTrafficIO::InputBuffer_PreDispatch : public IOBuffer {
	// BrnTrafficEntityModuleIO.h:444
	Vector3 mCameraPosition;

	// BrnTrafficEntityModuleIO.h:445
	Array<CgsSceneManager::EntityId,650u> maTrafficEntityIds;

public:
	// BrnTrafficEntityModuleIO.h:439
	void Construct();

	// BrnTrafficEntityModuleIO.h:442
	void Clear();

}

// BrnTrafficEntityModuleIO.h:449
struct BrnTraffic::BrnTrafficIO::OutputBuffer_PreDispatch : public IOBuffer {
	// BrnTrafficEntityModuleIO.h:457
	Array<BrnTraffic::VehicleRenderInfo,64u> maTrafficRenderInfos;

public:
	// BrnTrafficEntityModuleIO.h:452
	void Construct();

	// BrnTrafficEntityModuleIO.h:455
	void Clear();

}

// BrnTrafficEntityModuleIO.h:467
struct BrnTraffic::BrnTrafficIO::InputBuffer_Dispatch : public IOBuffer {
private:
	// BrnTrafficEntityModuleIO.h:490
	InputBuffer_PrePhysics::SceneResultQueue mSceneResultQueue;

	// BrnTrafficEntityModuleIO.h:491
	CgsGraphics::DispatchFrame * mpDispatchFrame;

	// BrnTrafficEntityModuleIO.h:492
	BrnBlobbyShadowManager::BrnBlobbyShadowBuffer * mpBlobbyShadowBuffer;

	// BrnTrafficEntityModuleIO.h:493
	BrnCoronaManager::BrnSubmissionInterface * mpCoronaSubmissionInterface;

	// BrnTrafficEntityModuleIO.h:494
	BrnWorld::ShadowMap * mpShadowMap;

public:
	// BrnTrafficEntityModuleIO.h:471
	void Construct();

	// BrnTrafficEntityModuleIO.h:474
	CgsGraphics::DispatchFrame * GetDispatchFrame() const;

	// BrnTrafficEntityModuleIO.h:475
	void SetDispatchFrame(CgsGraphics::DispatchFrame *);

	// BrnTrafficEntityModuleIO.h:477
	const InputBuffer_PrePhysics::SceneResultQueue * GetSceneResultQueue() const;

	// BrnTrafficEntityModuleIO.h:478
	InputBuffer_PrePhysics::SceneResultQueue * GetSceneResultQueue();

	// BrnTrafficEntityModuleIO.h:480
	BrnBlobbyShadowManager::BrnBlobbyShadowBuffer * GetBlobbyShadowBuffer() const;

	// BrnTrafficEntityModuleIO.h:481
	void SetBlobbyShadowBuffer(BrnBlobbyShadowManager::BrnBlobbyShadowBuffer *);

	// BrnTrafficEntityModuleIO.h:483
	BrnCoronaManager::BrnSubmissionInterface * GetCoronaSubmissionInterface() const;

	// BrnTrafficEntityModuleIO.h:484
	void SetCoronaSubmissionInterface(BrnCoronaManager::BrnSubmissionInterface *);

	// BrnTrafficEntityModuleIO.h:486
	BrnWorld::ShadowMap * GetShadowMap() const;

	// BrnTrafficEntityModuleIO.h:487
	void SetShadowMap(BrnWorld::ShadowMap *);

}

