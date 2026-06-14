// BrnDirectorModuleIO.h:86
struct BrnDirector::DirectorIO::InputBuffer : public IOBuffer {
private:
	// BrnDirectorModuleIO.h:324
	RCEntityGlobalRaceCarOutputInterface mGlobalRaceCarInterface;

	// BrnDirectorModuleIO.h:326
	BitArray<8u> mUsedRaceCars;

	// BrnDirectorModuleIO.h:327
	VehicleInfo[8] mRaceCarInfo;

	// BrnDirectorModuleIO.h:328
	CarScoreData mPlayerScoreData;

	// BrnDirectorModuleIO.h:329
	bool mbPlayerComboWarningActive;

	// BrnDirectorModuleIO.h:330
	float32_t mfPlayerBoostPercentage;

	// BrnDirectorModuleIO.h:332
	ControllerInfo mControllerInfo;

	// Unknown accessibility
	// BrnDirectorModuleIO.h:72
	typedef InputBuffer::GameActionQueue GameActionQueue;

	// BrnDirectorModuleIO.h:333
	InputBuffer::GameActionQueue mGameActionQueue;

	// BrnDirectorModuleIO.h:334
	TimerStatusInterface mTimerInterface;

	// BrnDirectorModuleIO.h:335
	BrnDirectorVehicleInputInterface mVehicleDriverInputInterface;

	// BrnDirectorModuleIO.h:336
	StatusInterface mWorldStatusInterface;

	// BrnDirectorModuleIO.h:337
	ContactSpyInterface mContacts;

	// BrnDirectorModuleIO.h:338
	TrafficDirectorOutputInterface mTrafficOutputInterface;

	// BrnDirectorModuleIO.h:339
	PlayerCrashInfo mPlayerCrashInfo;

	// BrnDirectorModuleIO.h:340
	GuiPFXHookEnumeration mHookEnumeration;

	// BrnDirectorModuleIO.h:341
	BrnDirector::GameState::DirectorProfileData mDirectorProfileData;

	// BrnDirectorModuleIO.h:343
	EActiveRaceCarIndex mePlayerCarIndex;

	// BrnDirectorModuleIO.h:344
	EActiveRaceCarIndex mePlayerKillerCarIndex;

	// BrnDirectorModuleIO.h:346
	int32_t miRankUpNewRank;

	// BrnDirectorModuleIO.h:348
	bool mbRankUpThisFrame;

	// BrnDirectorModuleIO.h:349
	bool mbStartNewProfileIntro;

	// BrnDirectorModuleIO.h:350
	bool mbStartGameIntroFlyby;

	// BrnDirectorModuleIO.h:351
	bool mbStopGameIntroFlyby;

	// BrnDirectorModuleIO.h:352
	bool mbPlayerTakenDown;

	// BrnDirectorModuleIO.h:353
	bool mbHasGotHookEnumeration;

	// BrnDirectorModuleIO.h:354
	bool mbEndOfCarSelect;

	// BrnDirectorModuleIO.h:355
	bool mbGotCrashNavShownEvent;

	// BrnDirectorModuleIO.h:356
	bool mbGotCrashNavHiddenEvent;

	// BrnDirectorModuleIO.h:357
	bool mbGotColourCalibrationShownEvent;

	// BrnDirectorModuleIO.h:358
	bool mbGotColourCalibrationHiddenEvent;

	// BrnDirectorModuleIO.h:359
	bool mbWorldWantsDebugControllerFocus;

	// BrnDirectorModuleIO.h:360
	bool mbSimPaused;

	// BrnDirectorModuleIO.h:361
	bool mbHasNewDirectorProfileData;

	// BrnDirectorModuleIO.h:362
	bool mbPlayerCrashbreakerFired;

	// BrnDirectorModuleIO.h:363
	bool mbCarSelectionChangedThisFrame;

	// BrnDirectorModuleIO.h:364
	bool mbCarSelectTickerClosedThisFrame;

	// BrnDirectorModuleIO.h:365
	bool mbGotShortcutMenuEvent;

	// BrnDirectorModuleIO.h:366
	bool mbShortcutMenuState;

	// BrnDirectorModuleIO.h:367
	bool mbLeftOnlinePostEvent;

	// BrnDirectorModuleIO.h:368
	bool mbEnteredOnlinePostEvent;

	// BrnDirectorModuleIO.h:369
	bool mbFinishedOnlineEventLoading;

	// BrnDirectorModuleIO.h:370
	bool mbStartedOnlineEventLoading;

	// BrnDirectorModuleIO.h:371
	bool mbStarting100PercentSequence;

	// BrnDirectorModuleIO.h:372
	bool mbFinished100PercentSequence;

public:
	// BrnDirectorModuleIO.h:91
	void Construct();

	// BrnDirectorModuleIO.h:95
	void Destruct();

	// BrnDirectorModuleIO.h:99
	InputBuffer::GameActionQueue * GetGameActionQueue();

	// BrnDirectorModuleIO.h:102
	const InputBuffer::GameActionQueue * GetGameActionQueue() const;

	// BrnDirectorModuleIO.h:105
	const TimerStatusInterface * GetTimerStatusInterface() const;

	// BrnDirectorModuleIO.h:108
	TimerStatusInterface * GetTimerStatusInterface();

	// BrnDirectorModuleIO.h:111
	const BrnDirectorVehicleInputInterface * GetVehicleInputInterface() const;

	// BrnDirectorModuleIO.h:114
	BrnDirectorVehicleInputInterface * GetVehicleInputInterface();

	// BrnDirectorModuleIO.h:118
	void SetPlayerCarIndex(EActiveRaceCarIndex);

	// BrnDirectorModuleIO.h:121
	EActiveRaceCarIndex GetPlayerCarIndex() const;

	// BrnDirectorModuleIO.h:130
	void SetRaceCarInfo(uint32_t, const VehicleInfo &);

	// BrnDirectorModuleIO.h:135
	void SetCrashingCentreOfMass(uint32_t, Matrix44Affine);

	// BrnDirectorModuleIO.h:140
	void GetRaceCarInfo(BitArray<8u> *, VehicleInfo *[8]) const;

	// BrnDirectorModuleIO.h:143
	const BitArray<8u> * GetUsedRaceCars() const;

	// BrnDirectorModuleIO.h:146
	VehicleInfo *[8] GetVehicleInfoArray() const;

	// BrnDirectorModuleIO.h:150
	void SetControllerInfo(const ControllerInfo *);

	// BrnDirectorModuleIO.h:153
	const ControllerInfo * GetControllerInfo() const;

	// BrnDirectorModuleIO.h:156
	void SetGotCrashNavShownEvent();

	// BrnDirectorModuleIO.h:159
	bool HasGotCrashNavShownEvent() const;

	// BrnDirectorModuleIO.h:162
	void SetGotCrashNavHiddenEvent();

	// BrnDirectorModuleIO.h:165
	bool HasGotCrashNavHiddenEvent() const;

	// BrnDirectorModuleIO.h:168
	void SetGotColourCalibrationShownEvent();

	// BrnDirectorModuleIO.h:171
	bool HasGotColourCalibrationShownEvent() const;

	// BrnDirectorModuleIO.h:174
	void SetGotColourCalibrationHiddenEvent();

	// BrnDirectorModuleIO.h:177
	bool HasGotColourCalibrationHiddenEvent() const;

	// BrnDirectorModuleIO.h:180
	bool HasGotShortcutMenuEvent() const;

	// BrnDirectorModuleIO.h:184
	void SetShortcutMenuEvent(bool);

	// BrnDirectorModuleIO.h:187
	bool GetShortcutMenuState() const;

	// Unknown accessibility
	// BrnDirectorModuleIO.h:74
	typedef ContactSpyInterface ContactSpyInterface;

	// BrnDirectorModuleIO.h:190
	const InputBuffer::ContactSpyInterface * GetContacts() const;

	// BrnDirectorModuleIO.h:194
	void AppendContacts(const ContactSpyInterface *);

	// BrnDirectorModuleIO.h:198
	void SetHookEnumeration(const GuiPFXHookEnumeration *);

	// BrnDirectorModuleIO.h:201
	bool HasGotHookEnumeration() const;

	// BrnDirectorModuleIO.h:204
	const GuiPFXHookEnumeration * GetHookEnumeration() const;

	// BrnDirectorModuleIO.h:207
	bool HasNewDirectorProfileData() const;

	// BrnDirectorModuleIO.h:210
	const BrnDirector::GameState::DirectorProfileData * GetDirectorProfileData() const;

	// BrnDirectorModuleIO.h:214
	void SetDirectorProfileData(const BrnDirector::GameState::DirectorProfileData *);

	// BrnDirectorModuleIO.h:217
	bool HasPlayerBeenTakenDown() const;

	// BrnDirectorModuleIO.h:221
	EActiveRaceCarIndex GetPlayerKiller() const;

	// BrnDirectorModuleIO.h:226
	void SetPlayerKiller(EActiveRaceCarIndex);

	// BrnDirectorModuleIO.h:230
	const RCEntityGlobalRaceCarOutputInterface * GetGlobalRaceCarInterface() const;

	// BrnDirectorModuleIO.h:231
	void SetGlobalRaceCarInterface(const RCEntityGlobalRaceCarOutputInterface *);

	// BrnDirectorModuleIO.h:233
	const PlayerCrashInfo * GetPlayerCrashInfo() const;

	// BrnDirectorModuleIO.h:234
	void SetPlayerCrashInfo(const PlayerCrashInfo *);

	// BrnDirectorModuleIO.h:236
	bool GetWorldWantsDebugControllerFocus() const;

	// BrnDirectorModuleIO.h:237
	void SetWorldWantsDebugControllerFocus(bool);

	// BrnDirectorModuleIO.h:239
	bool GetSimPaused() const;

	// BrnDirectorModuleIO.h:240
	void SetSimPaused(bool);

	// BrnDirectorModuleIO.h:242
	bool GetEndOfCarSelect() const;

	// BrnDirectorModuleIO.h:243
	void SetEndOfCarSelect(bool);

	// BrnDirectorModuleIO.h:245
	bool GetPlayerCrashbreakerFired() const;

	// BrnDirectorModuleIO.h:246
	void SetPlayerCrashbreakerFired(bool);

	// BrnDirectorModuleIO.h:248
	bool GetCarSelectionChangedThisFrame() const;

	// BrnDirectorModuleIO.h:249
	void SetCarSelectionChangedThisFrame(bool);

	// BrnDirectorModuleIO.h:251
	bool GetStartNewProfileIntro() const;

	// BrnDirectorModuleIO.h:252
	void SetStartNewProfileIntro(bool);

	// BrnDirectorModuleIO.h:254
	bool GetStartGameIntroFlyby() const;

	// BrnDirectorModuleIO.h:255
	void SetStartGameIntroFlyby(bool);

	// BrnDirectorModuleIO.h:257
	bool GetStopGameIntroFlyby() const;

	// BrnDirectorModuleIO.h:258
	void SetStopGameIntroFlyby(bool);

	// BrnDirectorModuleIO.h:260
	bool GetRankUpThisFrame() const;

	// BrnDirectorModuleIO.h:261
	void SetRankUpThisFrame(bool);

	// BrnDirectorModuleIO.h:263
	bool GetCarSelectTickerClosedThisFrame() const;

	// BrnDirectorModuleIO.h:264
	void SetCarSelectTickerClosedThisFrame(bool);

	// BrnDirectorModuleIO.h:266
	bool GetStartedOnlineEventLoading() const;

	// BrnDirectorModuleIO.h:267
	void SetStartedOnlineEventLoading(bool);

	// BrnDirectorModuleIO.h:269
	bool GetFinishedOnlineEventLoading() const;

	// BrnDirectorModuleIO.h:270
	void SetFinishedOnlineEventLoading(bool);

	// BrnDirectorModuleIO.h:272
	bool GetStarting100PercentSequence() const;

	// BrnDirectorModuleIO.h:273
	void SetStarting100PercentSequence(bool);

	// BrnDirectorModuleIO.h:275
	bool GetFinished100PercentSequence() const;

	// BrnDirectorModuleIO.h:276
	void SetFinished100PercentSequence(bool);

	// BrnDirectorModuleIO.h:279
	const int32_t GetRankUpNewRank() const;

	// BrnDirectorModuleIO.h:284
	void SetRankUpNewRank(int32_t);

	// BrnDirectorModuleIO.h:287
	float32_t GetPlayerBoostPercentage() const;

	// BrnDirectorModuleIO.h:288
	void SetPlayerBoostPercentage(float32_t);

	// BrnDirectorModuleIO.h:290
	const TrafficDirectorOutputInterface * GetTrafficOutputInterface() const;

	// BrnDirectorModuleIO.h:291
	void SetTrafficOutputInterface(const TrafficDirectorOutputInterface *);

	// BrnDirectorModuleIO.h:293
	const StatusInterface * GetWorldStatusInterface() const;

	// BrnDirectorModuleIO.h:294
	void SetWorldStatusInterface(const StatusInterface *);

	// BrnDirectorModuleIO.h:296
	const CarScoreData * GetPlayerScoreData() const;

	// BrnDirectorModuleIO.h:297
	void SetPlayerScoreData(const CarScoreData *);

	// BrnDirectorModuleIO.h:300
	bool GetPlayerComboWarningActive() const;

	// BrnDirectorModuleIO.h:305
	void SetPlayerComboWarningActive(bool);

	// BrnDirectorModuleIO.h:309
	void SetLeftOnlinePostEvent();

	// BrnDirectorModuleIO.h:312
	bool GetLeftOnlinePostEvent() const;

	// BrnDirectorModuleIO.h:315
	void SetEnteredOnlinePostEvent();

	// BrnDirectorModuleIO.h:318
	bool GetEnteredOnlinePostEvent() const;

}

// BrnDirectorModuleIO.h:384
struct BrnDirector::DirectorIO::OutputBuffer : public IOBuffer {
private:
	// BrnDirectorModuleIO.h:446
	Camera mCgsCamera;

	// BrnDirectorModuleIO.h:447
	Camera mBurnoutCamera;

	// Unknown accessibility
	// BrnDirectorModuleIO.h:73
	typedef RequestInterface<512> ResourceRequestInterface;

	// BrnDirectorModuleIO.h:448
	OutputBuffer::ResourceRequestInterface mResourceRequestInterface;

	// BrnDirectorModuleIO.h:449
	DirectorOutputInterface mDirectorOutputInterface;

	// BrnDirectorModuleIO.h:450
	TimerRequestInterface mTimerRequestInterface;

	// Unknown accessibility
	// BrnDirectorModuleIO.h:75
	typedef AttribSysRequestInterface<512> AttribSysUserVaultRequestInterface;

	// BrnDirectorModuleIO.h:451
	OutputBuffer::AttribSysUserVaultRequestInterface mVaultRequestInterface;

	// BrnDirectorModuleIO.h:452
	BrnDirector::GameState::DirectorProfileData mDirectorProfileData;

	// BrnDirectorModuleIO.h:454
	bool mbRequestHookEnumeration;

	// BrnDirectorModuleIO.h:456
	bool mbHasNewProfileData;

public:
	// BrnDirectorModuleIO.h:389
	void Construct();

	// BrnDirectorModuleIO.h:393
	void Destruct();

	// BrnDirectorModuleIO.h:396
	const Camera * GetCgsCamera() const;

	// BrnDirectorModuleIO.h:400
	void SetCgsCamera(const Camera *);

	// BrnDirectorModuleIO.h:403
	const Camera * GetCameraOutput() const;

	// BrnDirectorModuleIO.h:407
	void SetCameraOutput(Camera *);

	// BrnDirectorModuleIO.h:411
	OutputBuffer::ResourceRequestInterface * GetResourceRequestInterface();

	// BrnDirectorModuleIO.h:415
	const OutputBuffer::ResourceRequestInterface * GetResourceRequestInterface() const;

	// BrnDirectorModuleIO.h:418
	const DirectorOutputInterface * GetDirectorOutputInterface() const;

	// BrnDirectorModuleIO.h:421
	DirectorOutputInterface * GetDirectorOutputInterface();

	// BrnDirectorModuleIO.h:424
	const TimerRequestInterface * GetTimerRequestInterface() const;

	// BrnDirectorModuleIO.h:427
	TimerRequestInterface * GetTimerRequestInterface();

	// BrnDirectorModuleIO.h:430
	bool HasNewProfileData() const;

	// BrnDirectorModuleIO.h:434
	void SetNewProfileData(const BrnDirector::GameState::DirectorProfileData &);

	// BrnDirectorModuleIO.h:436
	const BrnDirector::GameState::DirectorProfileData * GetDirectorProfileData() const;

	// BrnDirectorModuleIO.h:438
	bool GetRequestHookEnumeration() const;

	// BrnDirectorModuleIO.h:439
	void SetRequestHookEnumeration(bool);

	// BrnDirectorModuleIO.h:441
	void SetVaultRequestInterface(const OutputBuffer::AttribSysUserVaultRequestInterface *);

	// BrnDirectorModuleIO.h:442
	const OutputBuffer::AttribSysUserVaultRequestInterface * GetVaultRequestInterface() const;

	// BrnDirectorModuleIO.h:443
	OutputBuffer::AttribSysUserVaultRequestInterface * GetVaultRequestInterface();

}

// BrnDirectorModuleIO.h:468
struct BrnDirector::DirectorIO::SceneQueryOutputBuffer : public IOBuffer {
private:
	// BrnDirectorModuleIO.h:484
	SceneQueryInterface mSceneQueryInterface;

	// BrnDirectorModuleIO.h:486
	EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,10> mFineLineTestQueue;

	// BrnDirectorModuleIO.h:487
	EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,40> mFineLineTestNearestQueue;

	// BrnDirectorModuleIO.h:488
	EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,10> mFineLineTestFastDoubleSidedQueue;

	// BrnDirectorModuleIO.h:489
	EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,10> mSphereTestFastQueue;

	// BrnDirectorModuleIO.h:490
	EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,10> mFineVolumeTestDeepestQueue;

	// BrnDirectorModuleIO.h:491
	EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,1> mFineVolumeTestQueue;

public:
	// BrnDirectorModuleIO.h:473
	void Construct();

	// BrnDirectorModuleIO.h:477
	void Destruct();

	// BrnDirectorModuleIO.h:479
	const SceneQueryInterface * GetSceneQueryInterface() const;

	// BrnDirectorModuleIO.h:480
	SceneQueryInterface * GetSceneQueryInterface();

}

// BrnDirectorModuleIO.h:503
struct BrnDirector::DirectorIO::SceneQueryInputBuffer : public IOBuffer {
private:
	// BrnDirectorModuleIO.h:531
	OutSceneQueryResultsQueue<4032> mResultsQueue;

public:
	// BrnDirectorModuleIO.h:508
	void Construct();

	// BrnDirectorModuleIO.h:512
	void Destruct();

	// BrnDirectorModuleIO.h:526
	const OutSceneQueryResultsQueue<4032> * GetResultsQueue() const;

	// BrnDirectorModuleIO.h:527
	OutSceneQueryResultsQueue<4032> * GetResultsQueue();

}

// BrnDirectorModuleIO.h:86
struct BrnDirector::DirectorIO::InputBuffer : public IOBuffer {
private:
	// BrnDirectorModuleIO.h:324
	RCEntityGlobalRaceCarOutputInterface mGlobalRaceCarInterface;

	// BrnDirectorModuleIO.h:326
	BitArray<8u> mUsedRaceCars;

	// BrnDirectorModuleIO.h:327
	VehicleInfo[8] mRaceCarInfo;

	// BrnDirectorModuleIO.h:328
	CarScoreData mPlayerScoreData;

	// BrnDirectorModuleIO.h:329
	bool mbPlayerComboWarningActive;

	// BrnDirectorModuleIO.h:330
	float32_t mfPlayerBoostPercentage;

	// BrnDirectorModuleIO.h:332
	ControllerInfo mControllerInfo;

	// Unknown accessibility
	// BrnDirectorModuleIO.h:72
	typedef InputBuffer_PreSim::GameActionQueue GameActionQueue;

	// BrnDirectorModuleIO.h:333
	InputBuffer::GameActionQueue mGameActionQueue;

	// BrnDirectorModuleIO.h:334
	TimerStatusInterface mTimerInterface;

	// BrnDirectorModuleIO.h:335
	BrnDirectorVehicleInputInterface mVehicleDriverInputInterface;

	// BrnDirectorModuleIO.h:336
	StatusInterface mWorldStatusInterface;

	// BrnDirectorModuleIO.h:337
	ContactSpyInterface mContacts;

	// BrnDirectorModuleIO.h:338
	TrafficDirectorOutputInterface mTrafficOutputInterface;

	// BrnDirectorModuleIO.h:339
	PlayerCrashInfo mPlayerCrashInfo;

	// BrnDirectorModuleIO.h:340
	GuiPFXHookEnumeration mHookEnumeration;

	// BrnDirectorModuleIO.h:341
	BrnDirector::GameState::DirectorProfileData mDirectorProfileData;

	// BrnDirectorModuleIO.h:343
	EActiveRaceCarIndex mePlayerCarIndex;

	// BrnDirectorModuleIO.h:344
	EActiveRaceCarIndex mePlayerKillerCarIndex;

	// BrnDirectorModuleIO.h:346
	int32_t miRankUpNewRank;

	// BrnDirectorModuleIO.h:348
	bool mbRankUpThisFrame;

	// BrnDirectorModuleIO.h:349
	bool mbStartNewProfileIntro;

	// BrnDirectorModuleIO.h:350
	bool mbStartGameIntroFlyby;

	// BrnDirectorModuleIO.h:351
	bool mbStopGameIntroFlyby;

	// BrnDirectorModuleIO.h:352
	bool mbPlayerTakenDown;

	// BrnDirectorModuleIO.h:353
	bool mbHasGotHookEnumeration;

	// BrnDirectorModuleIO.h:354
	bool mbEndOfCarSelect;

	// BrnDirectorModuleIO.h:355
	bool mbGotCrashNavShownEvent;

	// BrnDirectorModuleIO.h:356
	bool mbGotCrashNavHiddenEvent;

	// BrnDirectorModuleIO.h:357
	bool mbGotColourCalibrationShownEvent;

	// BrnDirectorModuleIO.h:358
	bool mbGotColourCalibrationHiddenEvent;

	// BrnDirectorModuleIO.h:359
	bool mbWorldWantsDebugControllerFocus;

	// BrnDirectorModuleIO.h:360
	bool mbSimPaused;

	// BrnDirectorModuleIO.h:361
	bool mbHasNewDirectorProfileData;

	// BrnDirectorModuleIO.h:362
	bool mbPlayerCrashbreakerFired;

	// BrnDirectorModuleIO.h:363
	bool mbCarSelectionChangedThisFrame;

	// BrnDirectorModuleIO.h:364
	bool mbCarSelectTickerClosedThisFrame;

	// BrnDirectorModuleIO.h:365
	bool mbGotShortcutMenuEvent;

	// BrnDirectorModuleIO.h:366
	bool mbShortcutMenuState;

	// BrnDirectorModuleIO.h:367
	bool mbLeftOnlinePostEvent;

	// BrnDirectorModuleIO.h:368
	bool mbEnteredOnlinePostEvent;

	// BrnDirectorModuleIO.h:369
	bool mbFinishedOnlineEventLoading;

	// BrnDirectorModuleIO.h:370
	bool mbStartedOnlineEventLoading;

	// BrnDirectorModuleIO.h:371
	bool mbStarting100PercentSequence;

	// BrnDirectorModuleIO.h:372
	bool mbFinished100PercentSequence;

public:
	// BrnDirectorModuleIO.h:91
	void Construct();

	// BrnDirectorModuleIO.h:95
	void Destruct();

	// BrnDirectorModuleIO.h:99
	InputBuffer::GameActionQueue * GetGameActionQueue();

	// BrnDirectorModuleIO.h:102
	const InputBuffer::GameActionQueue * GetGameActionQueue() const;

	// BrnDirectorModuleIO.h:105
	const TimerStatusInterface * GetTimerStatusInterface() const;

	// BrnDirectorModuleIO.h:108
	TimerStatusInterface * GetTimerStatusInterface();

	// BrnDirectorModuleIO.h:111
	const BrnDirectorVehicleInputInterface * GetVehicleInputInterface() const;

	// BrnDirectorModuleIO.h:114
	BrnDirectorVehicleInputInterface * GetVehicleInputInterface();

	// BrnDirectorModuleIO.h:118
	void SetPlayerCarIndex(EActiveRaceCarIndex);

	// BrnDirectorModuleIO.h:121
	EActiveRaceCarIndex GetPlayerCarIndex() const;

	// BrnDirectorModuleIO.h:130
	void SetRaceCarInfo(uint32_t, const VehicleInfo &);

	// BrnDirectorModuleIO.h:135
	void SetCrashingCentreOfMass(uint32_t, Matrix44Affine);

	// BrnDirectorModuleIO.h:140
	void GetRaceCarInfo(BitArray<8u> *, VehicleInfo *[8]) const;

	// BrnDirectorModuleIO.h:143
	const BitArray<8u> * GetUsedRaceCars() const;

	// BrnDirectorModuleIO.h:146
	VehicleInfo *[8] GetVehicleInfoArray() const;

	// BrnDirectorModuleIO.h:150
	void SetControllerInfo(const ControllerInfo *);

	// BrnDirectorModuleIO.h:153
	const ControllerInfo * GetControllerInfo() const;

	// BrnDirectorModuleIO.h:156
	void SetGotCrashNavShownEvent();

	// BrnDirectorModuleIO.h:159
	bool HasGotCrashNavShownEvent() const;

	// BrnDirectorModuleIO.h:162
	void SetGotCrashNavHiddenEvent();

	// BrnDirectorModuleIO.h:165
	bool HasGotCrashNavHiddenEvent() const;

	// BrnDirectorModuleIO.h:168
	void SetGotColourCalibrationShownEvent();

	// BrnDirectorModuleIO.h:171
	bool HasGotColourCalibrationShownEvent() const;

	// BrnDirectorModuleIO.h:174
	void SetGotColourCalibrationHiddenEvent();

	// BrnDirectorModuleIO.h:177
	bool HasGotColourCalibrationHiddenEvent() const;

	// BrnDirectorModuleIO.h:180
	bool HasGotShortcutMenuEvent() const;

	// BrnDirectorModuleIO.h:184
	void SetShortcutMenuEvent(bool);

	// BrnDirectorModuleIO.h:187
	bool GetShortcutMenuState() const;

	// Unknown accessibility
	// BrnDirectorModuleIO.h:74
	typedef ContactSpyInterface ContactSpyInterface;

	// BrnDirectorModuleIO.h:190
	const InputBuffer::ContactSpyInterface * GetContacts() const;

	// BrnDirectorModuleIO.h:194
	void AppendContacts(const ContactSpyInterface *);

	// BrnDirectorModuleIO.h:198
	void SetHookEnumeration(const GuiPFXHookEnumeration *);

	// BrnDirectorModuleIO.h:201
	bool HasGotHookEnumeration() const;

	// BrnDirectorModuleIO.h:204
	const GuiPFXHookEnumeration * GetHookEnumeration() const;

	// BrnDirectorModuleIO.h:207
	bool HasNewDirectorProfileData() const;

	// BrnDirectorModuleIO.h:210
	const BrnDirector::GameState::DirectorProfileData * GetDirectorProfileData() const;

	// BrnDirectorModuleIO.h:214
	void SetDirectorProfileData(const BrnDirector::GameState::DirectorProfileData *);

	// BrnDirectorModuleIO.h:217
	bool HasPlayerBeenTakenDown() const;

	// BrnDirectorModuleIO.h:221
	EActiveRaceCarIndex GetPlayerKiller() const;

	// BrnDirectorModuleIO.h:226
	void SetPlayerKiller(EActiveRaceCarIndex);

	// BrnDirectorModuleIO.h:230
	const RCEntityGlobalRaceCarOutputInterface * GetGlobalRaceCarInterface() const;

	// BrnDirectorModuleIO.h:231
	void SetGlobalRaceCarInterface(const RCEntityGlobalRaceCarOutputInterface *);

	// BrnDirectorModuleIO.h:233
	const PlayerCrashInfo * GetPlayerCrashInfo() const;

	// BrnDirectorModuleIO.h:234
	void SetPlayerCrashInfo(const PlayerCrashInfo *);

	// BrnDirectorModuleIO.h:236
	bool GetWorldWantsDebugControllerFocus() const;

	// BrnDirectorModuleIO.h:237
	void SetWorldWantsDebugControllerFocus(bool);

	// BrnDirectorModuleIO.h:239
	bool GetSimPaused() const;

	// BrnDirectorModuleIO.h:240
	void SetSimPaused(bool);

	// BrnDirectorModuleIO.h:242
	bool GetEndOfCarSelect() const;

	// BrnDirectorModuleIO.h:243
	void SetEndOfCarSelect(bool);

	// BrnDirectorModuleIO.h:245
	bool GetPlayerCrashbreakerFired() const;

	// BrnDirectorModuleIO.h:246
	void SetPlayerCrashbreakerFired(bool);

	// BrnDirectorModuleIO.h:248
	bool GetCarSelectionChangedThisFrame() const;

	// BrnDirectorModuleIO.h:249
	void SetCarSelectionChangedThisFrame(bool);

	// BrnDirectorModuleIO.h:251
	bool GetStartNewProfileIntro() const;

	// BrnDirectorModuleIO.h:252
	void SetStartNewProfileIntro(bool);

	// BrnDirectorModuleIO.h:254
	bool GetStartGameIntroFlyby() const;

	// BrnDirectorModuleIO.h:255
	void SetStartGameIntroFlyby(bool);

	// BrnDirectorModuleIO.h:257
	bool GetStopGameIntroFlyby() const;

	// BrnDirectorModuleIO.h:258
	void SetStopGameIntroFlyby(bool);

	// BrnDirectorModuleIO.h:260
	bool GetRankUpThisFrame() const;

	// BrnDirectorModuleIO.h:261
	void SetRankUpThisFrame(bool);

	// BrnDirectorModuleIO.h:263
	bool GetCarSelectTickerClosedThisFrame() const;

	// BrnDirectorModuleIO.h:264
	void SetCarSelectTickerClosedThisFrame(bool);

	// BrnDirectorModuleIO.h:266
	bool GetStartedOnlineEventLoading() const;

	// BrnDirectorModuleIO.h:267
	void SetStartedOnlineEventLoading(bool);

	// BrnDirectorModuleIO.h:269
	bool GetFinishedOnlineEventLoading() const;

	// BrnDirectorModuleIO.h:270
	void SetFinishedOnlineEventLoading(bool);

	// BrnDirectorModuleIO.h:272
	bool GetStarting100PercentSequence() const;

	// BrnDirectorModuleIO.h:273
	void SetStarting100PercentSequence(bool);

	// BrnDirectorModuleIO.h:275
	bool GetFinished100PercentSequence() const;

	// BrnDirectorModuleIO.h:276
	void SetFinished100PercentSequence(bool);

	// BrnDirectorModuleIO.h:279
	const int32_t GetRankUpNewRank() const;

	// BrnDirectorModuleIO.h:284
	void SetRankUpNewRank(int32_t);

	// BrnDirectorModuleIO.h:287
	float32_t GetPlayerBoostPercentage() const;

	// BrnDirectorModuleIO.h:288
	void SetPlayerBoostPercentage(float32_t);

	// BrnDirectorModuleIO.h:290
	const TrafficDirectorOutputInterface * GetTrafficOutputInterface() const;

	// BrnDirectorModuleIO.h:291
	void SetTrafficOutputInterface(const TrafficDirectorOutputInterface *);

	// BrnDirectorModuleIO.h:293
	const StatusInterface * GetWorldStatusInterface() const;

	// BrnDirectorModuleIO.h:294
	void SetWorldStatusInterface(const StatusInterface *);

	// BrnDirectorModuleIO.h:296
	const CarScoreData * GetPlayerScoreData() const;

	// BrnDirectorModuleIO.h:297
	void SetPlayerScoreData(const CarScoreData *);

	// BrnDirectorModuleIO.h:300
	bool GetPlayerComboWarningActive() const;

	// BrnDirectorModuleIO.h:305
	void SetPlayerComboWarningActive(bool);

	// BrnDirectorModuleIO.h:309
	void SetLeftOnlinePostEvent();

	// BrnDirectorModuleIO.h:312
	bool GetLeftOnlinePostEvent() const;

	// BrnDirectorModuleIO.h:315
	void SetEnteredOnlinePostEvent();

	// BrnDirectorModuleIO.h:318
	bool GetEnteredOnlinePostEvent() const;

}

