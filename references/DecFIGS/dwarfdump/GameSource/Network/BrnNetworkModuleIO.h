// BrnNetworkModuleIO.h:102
struct BrnNetwork::BrnNetworkModuleIO::PreSimulationInputBuffer : public IOBuffer {
private:
	// BrnNetworkModuleIO.h:143
	bool mbSysMenuOnScreen;

	// BrnNetworkModuleIO.h:144
	bool mbPadIdle;

	// BrnNetworkModuleIO.h:145
	int32_t miControllerPort;

	// BrnNetworkModuleIO.h:148
	TimerStatusInterface mTimerInterface;

public:
	// BrnNetworkModuleIO.h:107
	void Construct();

	// BrnNetworkModuleIO.h:111
	void Destruct();

	// BrnNetworkModuleIO.h:114
	const TimerStatusInterface * GetTimerStatusInterface() const;

	// BrnNetworkModuleIO.h:118
	void SetTimerStatusInterface(const TimerStatusInterface *);

	// BrnNetworkModuleIO.h:122
	void SetPadIdle(bool);

	// BrnNetworkModuleIO.h:125
	bool IsPadIdle() const;

	// BrnNetworkModuleIO.h:128
	int32_t GetControllerPort() const;

	// BrnNetworkModuleIO.h:132
	void SetControllerPort(int32_t);

	// BrnNetworkModuleIO.h:136
	void SetSysMenuOnScreen(bool);

	// BrnNetworkModuleIO.h:139
	bool IsSysMenuOnScreen() const;

}

// BrnNetworkModuleIO.h:160
struct BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer : public IOBuffer {
private:
	// BrnNetworkModuleIO.h:255
	VehicleOutputInterface mVehicleOutputInterface;

	// BrnNetworkModuleIO.h:256
	RCEntityActiveRaceCarOutputInterface mActiveRaceCarInterface;

	// BrnNetworkModuleIO.h:257
	TrafficNetworkOutputInterface mTrafficNetworkOutputInterface;

	// BrnNetworkModuleIO.h:258
	NetworkOutputInterface mCrashNetworkOutputInterface;

	// BrnNetworkModuleIO.h:259
	PlayerVehicleControls mPlayerVehicleControls;

	// BrnNetworkModuleIO.h:262
	InputBuffer::GameActionQueue mGameActionQueue;

	// BrnNetworkModuleIO.h:263
	GameStateToNetworkInterface mGameStateToNetworkInterface;

	// BrnNetworkModuleIO.h:264
	InputBuffer::TakedownEventQueue mTakedownEventInputQueue;

	// BrnNetworkModuleIO.h:267
	InputBuffer::GuiEventQueue mGuiEventQueue;

	// BrnNetworkModuleIO.h:270
	StatsInputInterface mStatsInputInterface;

	// BrnNetworkModuleIO.h:272
	NetworkEventQueue mNetworkEventQueue;

public:
	// BrnNetworkModuleIO.h:165
	void Construct();

	// BrnNetworkModuleIO.h:169
	void Destruct();

	// BrnNetworkModuleIO.h:173
	InputBuffer::TakedownEventQueue * GetTakedownEventInputQueue();

	// BrnNetworkModuleIO.h:177
	const InputBuffer::TakedownEventQueue * GetTakedownEventInputQueue() const;

	// BrnNetworkModuleIO.h:181
	InputBuffer::GuiEventQueue * GetGuiEventQueue();

	// BrnNetworkModuleIO.h:185
	const InputBuffer::GuiEventQueue * GetGuiEventQueue() const;

	// BrnNetworkModuleIO.h:189
	InputBuffer::GameActionQueue * GetGameActionQueue();

	// BrnNetworkModuleIO.h:193
	const InputBuffer::GameActionQueue * GetGameActionQueue() const;

	// BrnNetworkModuleIO.h:196
	const VehicleOutputInterface * GetVehicleOutputInterface() const;

	// BrnNetworkModuleIO.h:199
	const RCEntityActiveRaceCarOutputInterface * GetActiveRaceCarInterface() const;

	// BrnNetworkModuleIO.h:202
	const NetworkOutputInterface * GetCrashNetworkOutputInterface() const;

	// BrnNetworkModuleIO.h:205
	const TrafficNetworkOutputInterface * GetTrafficNetworkOutputInterface() const;

	// BrnNetworkModuleIO.h:208
	const GameStateToNetworkInterface * GetGameStateToNetworkInterface() const;

	// BrnNetworkModuleIO.h:211
	BrnWorld::PlayerVehicleControls * GetPlayerVehicleControls();

	// BrnNetworkModuleIO.h:214
	const PlayerVehicleControls * GetPlayerVehicleControls() const;

	// BrnNetworkModuleIO.h:217
	const StatsInputInterface * GetStatsInputInterface() const;

	// BrnNetworkModuleIO.h:220
	StatsInputInterface * GetStatsInputInterface();

	// BrnNetworkModuleIO.h:224
	void AppendVehicleOutputInterface(const VehicleOutputInterface *);

	// BrnNetworkModuleIO.h:228
	void SetActiveRaceCarInterface(const RCEntityActiveRaceCarOutputInterface *);

	// BrnNetworkModuleIO.h:232
	void SetTrafficOutputInterface(const TrafficNetworkOutputInterface *);

	// BrnNetworkModuleIO.h:236
	void SetCrashOutputInterface(const NetworkOutputInterface *);

	// BrnNetworkModuleIO.h:240
	void AppendTakedownQueue(const InputBuffer::TakedownEventQueue *);

	// BrnNetworkModuleIO.h:244
	void AppendGameStateToNetworkInterface(const GameStateToNetworkInterface *);

	// BrnNetworkModuleIO.h:247
	NetworkEventQueue * GetNetworkEventQueue();

	// BrnNetworkModuleIO.h:250
	const NetworkEventQueue * GetNetworkEventQueue() const;

}

// BrnNetworkModuleIO.h:284
struct BrnNetwork::BrnNetworkModuleIO::OutputBuffer : public IOBuffer {
private:
	// BrnNetworkModuleIO.h:439
	float32_t mfStandingsReceivedCountDownTime;

	// BrnNetworkModuleIO.h:440
	VehicleDriverInputInterface mVehicleDriverInputInterface;

	// BrnNetworkModuleIO.h:441
	VehicleInputInterface mVehicleInputInterface;

	// BrnNetworkModuleIO.h:442
	NetworkInputInterface mCrashNetworkInputInterface;

	// BrnNetworkModuleIO.h:443
	TrafficNetworkInputInterface mTrafficNetworkInputInterface;

	// BrnNetworkModuleIO.h:444
	NetworkToGameStateInterface mNetworkToGameStateInterface;

	// BrnNetworkModuleIO.h:445
	NetworkToGuiInterface mNetworkToGuiInterface;

	// BrnNetworkModuleIO.h:447
	StatsOutputInterface mStatsOutputInterface;

	// BrnNetworkModuleIO.h:448
	GuiEventQueueSmall mGuiEventQueue;

	// BrnNetworkModuleIO.h:450
	EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

	// BrnNetworkModuleIO.h:451
	GameEventQueue mGameEventQueue;

	// BrnNetworkModuleIO.h:452
	InputBuffer::TakedownEventQueue mTakedownEventOutputQueue;

	// BrnNetworkModuleIO.h:454
	bool mbIsPlaying;

	// BrnNetworkModuleIO.h:455
	bool mbIsConnected;

	// BrnNetworkModuleIO.h:456
	bool mbIsInInvite;

	// BrnNetworkModuleIO.h:457
	bool mbInvitesOpen;

	// Unknown accessibility
	// BrnNetworkModuleIO.h:88
	typedef RequestInterface<256> NetworkGameDataRequestInterface;

	// BrnNetworkModuleIO.h:459
	OutputBuffer::NetworkGameDataRequestInterface mGameDataRequestInterface;

	// BrnNetworkModuleIO.h:461
	InGamePlayerStatusInterface mInGamePlayerStatusInterface;

	// BrnNetworkModuleIO.h:462
	OnlineLobbyPlayerStatusInterface mOnlineLobbyPlayerStatusInterface;

	// BrnNetworkModuleIO.h:463
	PlayerResultsInterface mPlayerResultsInterface;

	// BrnNetworkModuleIO.h:465
	NetworkEventQueue mNetworkEventQueue;

public:
	// BrnNetworkModuleIO.h:289
	void Construct();

	// BrnNetworkModuleIO.h:293
	void Destruct();

	// BrnNetworkModuleIO.h:296
	EActiveRaceCarIndex GetPlayerActiveRaceCarIndex() const;

	// BrnNetworkModuleIO.h:300
	void SetPlayerActiveRaceCarIndex(EActiveRaceCarIndex);

	// BrnNetworkModuleIO.h:304
	BrnGameState::GameStateModuleIO::GameEventQueue * GetGameEventQueue();

	// BrnNetworkModuleIO.h:308
	const GameEventQueue * GetGameEventQueue() const;

	// BrnNetworkModuleIO.h:312
	GuiEventQueueSmall * GetGuiEventQueue();

	// BrnNetworkModuleIO.h:316
	const GuiEventQueueSmall * GetGuiEventQueue() const;

	// BrnNetworkModuleIO.h:320
	InputBuffer::TakedownEventQueue * GetTakedownEventOutputQueue();

	// BrnNetworkModuleIO.h:324
	const InputBuffer::TakedownEventQueue * GetTakedownEventOutputQueue() const;

	// BrnNetworkModuleIO.h:328
	void SetIsPlaying(bool);

	// BrnNetworkModuleIO.h:331
	bool IsPlaying() const;

	// BrnNetworkModuleIO.h:335
	void SetConnected(bool);

	// BrnNetworkModuleIO.h:338
	bool IsConnected() const;

	// BrnNetworkModuleIO.h:342
	void SetIsInInvite(bool);

	// BrnNetworkModuleIO.h:345
	bool IsInInvite() const;

	// BrnNetworkModuleIO.h:348
	const VehicleInputInterface * GetVehicleInputInterface() const;

	// BrnNetworkModuleIO.h:351
	const VehicleDriverInputInterface * GetVehicleDriverInputInterface() const;

	// BrnNetworkModuleIO.h:354
	VehicleInputInterface * GetVehicleInputInterface();

	// BrnNetworkModuleIO.h:357
	VehicleDriverInputInterface * GetVehicleDriverInputInterface();

	// BrnNetworkModuleIO.h:360
	const NetworkInputInterface * GetCrashNetworkInputInterface() const;

	// BrnNetworkModuleIO.h:363
	NetworkInputInterface * GetCrashNetworkInputInterface();

	// BrnNetworkModuleIO.h:366
	const TrafficNetworkInputInterface * GetTrafficNetworkInputInterface() const;

	// BrnNetworkModuleIO.h:369
	TrafficNetworkInputInterface * GetTrafficNetworkInputInterface();

	// BrnNetworkModuleIO.h:372
	NetworkToGameStateInterface * GetNetworkToGameStateInterface();

	// BrnNetworkModuleIO.h:375
	const NetworkToGameStateInterface * GetNetworkToGameStateInterface() const;

	// BrnNetworkModuleIO.h:378
	void SetStandingsReceivedCountDownTime(float32_t);

	// BrnNetworkModuleIO.h:381
	const OutputBuffer::NetworkGameDataRequestInterface * GetGameDataRequestInterface() const;

	// BrnNetworkModuleIO.h:384
	OutputBuffer::NetworkGameDataRequestInterface * GetGameDataRequestInterface();

	// BrnNetworkModuleIO.h:387
	const StatsOutputInterface * GetStatsOutputInterface() const;

	// BrnNetworkModuleIO.h:390
	StatsOutputInterface * GetStatsOutputInterface();

	// BrnNetworkModuleIO.h:393
	const InGamePlayerStatusInterface * GetInGamePlayerStatusInterface() const;

	// BrnNetworkModuleIO.h:396
	InGamePlayerStatusInterface * GetInGamePlayerStatusInterface();

	// BrnNetworkModuleIO.h:399
	const NetworkToGuiInterface * GetNetworkToGuiInterface() const;

	// BrnNetworkModuleIO.h:402
	NetworkToGuiInterface * GetNetworkToGuiInterface();

	// BrnNetworkModuleIO.h:406
	const PlayerResultsInterface * GetPlayerResultsInterface() const;

	// BrnNetworkModuleIO.h:410
	PlayerResultsInterface * GetPlayerResultsInterface();

	// BrnNetworkModuleIO.h:414
	OnlineLobbyPlayerStatusInterface * GetOnlineLobbyPlayerStatusInterface();

	// BrnNetworkModuleIO.h:418
	const OnlineLobbyPlayerStatusInterface * GetOnlineLobbyPlayerStatusInterface() const;

	// BrnNetworkModuleIO.h:422
	NetworkEventQueue * GetNetworkEventQueue();

	// BrnNetworkModuleIO.h:426
	const NetworkEventQueue * GetNetworkEventQueue() const;

	// BrnNetworkModuleIO.h:430
	bool AreInvitesOpen() const;

	// BrnNetworkModuleIO.h:435
	void SetInvitesOpen(bool);

}

// BrnNetworkModuleIO.h:160
struct BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer : public IOBuffer {
private:
	// BrnNetworkModuleIO.h:255
	VehicleOutputInterface mVehicleOutputInterface;

	// BrnNetworkModuleIO.h:256
	RCEntityActiveRaceCarOutputInterface mActiveRaceCarInterface;

	// BrnNetworkModuleIO.h:257
	TrafficNetworkOutputInterface mTrafficNetworkOutputInterface;

	// BrnNetworkModuleIO.h:258
	NetworkOutputInterface mCrashNetworkOutputInterface;

	// BrnNetworkModuleIO.h:259
	PlayerVehicleControls mPlayerVehicleControls;

	// BrnNetworkModuleIO.h:262
	OutputBuffer::GameActionQueue mGameActionQueue;

	// BrnNetworkModuleIO.h:263
	GameStateToNetworkInterface mGameStateToNetworkInterface;

	// BrnNetworkModuleIO.h:264
	InputBuffer::TakedownEventQueue mTakedownEventInputQueue;

	// BrnNetworkModuleIO.h:267
	InputBuffer::GuiEventQueue mGuiEventQueue;

	// BrnNetworkModuleIO.h:270
	StatsInputInterface mStatsInputInterface;

	// BrnNetworkModuleIO.h:272
	NetworkEventQueue mNetworkEventQueue;

public:
	// BrnNetworkModuleIO.h:165
	void Construct();

	// BrnNetworkModuleIO.h:169
	void Destruct();

	// BrnNetworkModuleIO.h:173
	InputBuffer::TakedownEventQueue * GetTakedownEventInputQueue();

	// BrnNetworkModuleIO.h:177
	const InputBuffer::TakedownEventQueue * GetTakedownEventInputQueue() const;

	// BrnNetworkModuleIO.h:181
	InputBuffer::GuiEventQueue * GetGuiEventQueue();

	// BrnNetworkModuleIO.h:185
	const InputBuffer::GuiEventQueue * GetGuiEventQueue() const;

	// BrnNetworkModuleIO.h:189
	OutputBuffer::GameActionQueue * GetGameActionQueue();

	// BrnNetworkModuleIO.h:193
	const OutputBuffer::GameActionQueue * GetGameActionQueue() const;

	// BrnNetworkModuleIO.h:196
	const VehicleOutputInterface * GetVehicleOutputInterface() const;

	// BrnNetworkModuleIO.h:199
	const RCEntityActiveRaceCarOutputInterface * GetActiveRaceCarInterface() const;

	// BrnNetworkModuleIO.h:202
	const NetworkOutputInterface * GetCrashNetworkOutputInterface() const;

	// BrnNetworkModuleIO.h:205
	const TrafficNetworkOutputInterface * GetTrafficNetworkOutputInterface() const;

	// BrnNetworkModuleIO.h:208
	const GameStateToNetworkInterface * GetGameStateToNetworkInterface() const;

	// BrnNetworkModuleIO.h:211
	BrnWorld::PlayerVehicleControls * GetPlayerVehicleControls();

	// BrnNetworkModuleIO.h:214
	const PlayerVehicleControls * GetPlayerVehicleControls() const;

	// BrnNetworkModuleIO.h:217
	const StatsInputInterface * GetStatsInputInterface() const;

	// BrnNetworkModuleIO.h:220
	StatsInputInterface * GetStatsInputInterface();

	// BrnNetworkModuleIO.h:224
	void AppendVehicleOutputInterface(const VehicleOutputInterface *);

	// BrnNetworkModuleIO.h:228
	void SetActiveRaceCarInterface(const RCEntityActiveRaceCarOutputInterface *);

	// BrnNetworkModuleIO.h:232
	void SetTrafficOutputInterface(const TrafficNetworkOutputInterface *);

	// BrnNetworkModuleIO.h:236
	void SetCrashOutputInterface(const NetworkOutputInterface *);

	// BrnNetworkModuleIO.h:240
	void AppendTakedownQueue(const InputBuffer::TakedownEventQueue *);

	// BrnNetworkModuleIO.h:244
	void AppendGameStateToNetworkInterface(const GameStateToNetworkInterface *);

	// BrnNetworkModuleIO.h:247
	NetworkEventQueue * GetNetworkEventQueue();

	// BrnNetworkModuleIO.h:250
	const NetworkEventQueue * GetNetworkEventQueue() const;

}

// BrnNetworkModuleIO.h:160
struct BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer : public IOBuffer {
private:
	// BrnNetworkModuleIO.h:255
	VehicleOutputInterface mVehicleOutputInterface;

	// BrnNetworkModuleIO.h:256
	RCEntityActiveRaceCarOutputInterface mActiveRaceCarInterface;

	// BrnNetworkModuleIO.h:257
	TrafficNetworkOutputInterface mTrafficNetworkOutputInterface;

	// BrnNetworkModuleIO.h:258
	NetworkOutputInterface mCrashNetworkOutputInterface;

	// BrnNetworkModuleIO.h:259
	PlayerVehicleControls mPlayerVehicleControls;

	// BrnNetworkModuleIO.h:262
	OutputBuffer::GameActionQueue mGameActionQueue;

	// BrnNetworkModuleIO.h:263
	GameStateToNetworkInterface mGameStateToNetworkInterface;

	// BrnNetworkModuleIO.h:264
	LiveRevengeManager::TakedownEventQueue mTakedownEventInputQueue;

	// BrnNetworkModuleIO.h:267
	InputBuffer::GuiEventQueue mGuiEventQueue;

	// BrnNetworkModuleIO.h:270
	StatsInputInterface mStatsInputInterface;

	// BrnNetworkModuleIO.h:272
	NetworkEventQueue mNetworkEventQueue;

public:
	// BrnNetworkModuleIO.h:165
	void Construct();

	// BrnNetworkModuleIO.h:169
	void Destruct();

	// BrnNetworkModuleIO.h:173
	LiveRevengeManager::TakedownEventQueue * GetTakedownEventInputQueue();

	// BrnNetworkModuleIO.h:177
	const LiveRevengeManager::TakedownEventQueue * GetTakedownEventInputQueue() const;

	// BrnNetworkModuleIO.h:181
	InputBuffer::GuiEventQueue * GetGuiEventQueue();

	// BrnNetworkModuleIO.h:185
	const InputBuffer::GuiEventQueue * GetGuiEventQueue() const;

	// BrnNetworkModuleIO.h:189
	OutputBuffer::GameActionQueue * GetGameActionQueue();

	// BrnNetworkModuleIO.h:193
	const OutputBuffer::GameActionQueue * GetGameActionQueue() const;

	// BrnNetworkModuleIO.h:196
	const VehicleOutputInterface * GetVehicleOutputInterface() const;

	// BrnNetworkModuleIO.h:199
	const RCEntityActiveRaceCarOutputInterface * GetActiveRaceCarInterface() const;

	// BrnNetworkModuleIO.h:202
	const NetworkOutputInterface * GetCrashNetworkOutputInterface() const;

	// BrnNetworkModuleIO.h:205
	const TrafficNetworkOutputInterface * GetTrafficNetworkOutputInterface() const;

	// BrnNetworkModuleIO.h:208
	const GameStateToNetworkInterface * GetGameStateToNetworkInterface() const;

	// BrnNetworkModuleIO.h:211
	BrnWorld::PlayerVehicleControls * GetPlayerVehicleControls();

	// BrnNetworkModuleIO.h:214
	const PlayerVehicleControls * GetPlayerVehicleControls() const;

	// BrnNetworkModuleIO.h:217
	const StatsInputInterface * GetStatsInputInterface() const;

	// BrnNetworkModuleIO.h:220
	StatsInputInterface * GetStatsInputInterface();

	// BrnNetworkModuleIO.h:224
	void AppendVehicleOutputInterface(const VehicleOutputInterface *);

	// BrnNetworkModuleIO.h:228
	void SetActiveRaceCarInterface(const RCEntityActiveRaceCarOutputInterface *);

	// BrnNetworkModuleIO.h:232
	void SetTrafficOutputInterface(const TrafficNetworkOutputInterface *);

	// BrnNetworkModuleIO.h:236
	void SetCrashOutputInterface(const NetworkOutputInterface *);

	// BrnNetworkModuleIO.h:240
	void AppendTakedownQueue(const LiveRevengeManager::TakedownEventQueue *);

	// BrnNetworkModuleIO.h:244
	void AppendGameStateToNetworkInterface(const GameStateToNetworkInterface *);

	// BrnNetworkModuleIO.h:247
	NetworkEventQueue * GetNetworkEventQueue();

	// BrnNetworkModuleIO.h:250
	const NetworkEventQueue * GetNetworkEventQueue() const;

}

// BrnNetworkModuleIO.h:284
struct BrnNetwork::BrnNetworkModuleIO::OutputBuffer : public IOBuffer {
private:
	// BrnNetworkModuleIO.h:439
	float32_t mfStandingsReceivedCountDownTime;

	// BrnNetworkModuleIO.h:440
	VehicleDriverInputInterface mVehicleDriverInputInterface;

	// BrnNetworkModuleIO.h:441
	VehicleInputInterface mVehicleInputInterface;

	// BrnNetworkModuleIO.h:442
	NetworkInputInterface mCrashNetworkInputInterface;

	// BrnNetworkModuleIO.h:443
	TrafficNetworkInputInterface mTrafficNetworkInputInterface;

	// BrnNetworkModuleIO.h:444
	NetworkToGameStateInterface mNetworkToGameStateInterface;

	// BrnNetworkModuleIO.h:445
	NetworkToGuiInterface mNetworkToGuiInterface;

	// BrnNetworkModuleIO.h:447
	StatsOutputInterface mStatsOutputInterface;

	// BrnNetworkModuleIO.h:448
	GuiEventQueueSmall mGuiEventQueue;

	// BrnNetworkModuleIO.h:450
	EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

	// BrnNetworkModuleIO.h:451
	GameEventQueue mGameEventQueue;

	// BrnNetworkModuleIO.h:452
	LiveRevengeManager::TakedownEventQueue mTakedownEventOutputQueue;

	// BrnNetworkModuleIO.h:454
	bool mbIsPlaying;

	// BrnNetworkModuleIO.h:455
	bool mbIsConnected;

	// BrnNetworkModuleIO.h:456
	bool mbIsInInvite;

	// BrnNetworkModuleIO.h:457
	bool mbInvitesOpen;

	// Unknown accessibility
	// BrnNetworkModuleIO.h:88
	typedef RequestInterface<256> NetworkGameDataRequestInterface;

	// BrnNetworkModuleIO.h:459
	OutputBuffer::NetworkGameDataRequestInterface mGameDataRequestInterface;

	// BrnNetworkModuleIO.h:461
	InGamePlayerStatusInterface mInGamePlayerStatusInterface;

	// BrnNetworkModuleIO.h:462
	OnlineLobbyPlayerStatusInterface mOnlineLobbyPlayerStatusInterface;

	// BrnNetworkModuleIO.h:463
	PlayerResultsInterface mPlayerResultsInterface;

	// BrnNetworkModuleIO.h:465
	NetworkEventQueue mNetworkEventQueue;

public:
	// BrnNetworkModuleIO.h:289
	void Construct();

	// BrnNetworkModuleIO.h:293
	void Destruct();

	// BrnNetworkModuleIO.h:296
	EActiveRaceCarIndex GetPlayerActiveRaceCarIndex() const;

	// BrnNetworkModuleIO.h:300
	void SetPlayerActiveRaceCarIndex(EActiveRaceCarIndex);

	// BrnNetworkModuleIO.h:304
	BrnGameState::GameStateModuleIO::GameEventQueue * GetGameEventQueue();

	// BrnNetworkModuleIO.h:308
	const GameEventQueue * GetGameEventQueue() const;

	// BrnNetworkModuleIO.h:312
	GuiEventQueueSmall * GetGuiEventQueue();

	// BrnNetworkModuleIO.h:316
	const GuiEventQueueSmall * GetGuiEventQueue() const;

	// BrnNetworkModuleIO.h:320
	LiveRevengeManager::TakedownEventQueue * GetTakedownEventOutputQueue();

	// BrnNetworkModuleIO.h:324
	const LiveRevengeManager::TakedownEventQueue * GetTakedownEventOutputQueue() const;

	// BrnNetworkModuleIO.h:328
	void SetIsPlaying(bool);

	// BrnNetworkModuleIO.h:331
	bool IsPlaying() const;

	// BrnNetworkModuleIO.h:335
	void SetConnected(bool);

	// BrnNetworkModuleIO.h:338
	bool IsConnected() const;

	// BrnNetworkModuleIO.h:342
	void SetIsInInvite(bool);

	// BrnNetworkModuleIO.h:345
	bool IsInInvite() const;

	// BrnNetworkModuleIO.h:348
	const VehicleInputInterface * GetVehicleInputInterface() const;

	// BrnNetworkModuleIO.h:351
	const VehicleDriverInputInterface * GetVehicleDriverInputInterface() const;

	// BrnNetworkModuleIO.h:354
	VehicleInputInterface * GetVehicleInputInterface();

	// BrnNetworkModuleIO.h:357
	VehicleDriverInputInterface * GetVehicleDriverInputInterface();

	// BrnNetworkModuleIO.h:360
	const NetworkInputInterface * GetCrashNetworkInputInterface() const;

	// BrnNetworkModuleIO.h:363
	NetworkInputInterface * GetCrashNetworkInputInterface();

	// BrnNetworkModuleIO.h:366
	const TrafficNetworkInputInterface * GetTrafficNetworkInputInterface() const;

	// BrnNetworkModuleIO.h:369
	TrafficNetworkInputInterface * GetTrafficNetworkInputInterface();

	// BrnNetworkModuleIO.h:372
	NetworkToGameStateInterface * GetNetworkToGameStateInterface();

	// BrnNetworkModuleIO.h:375
	const NetworkToGameStateInterface * GetNetworkToGameStateInterface() const;

	// BrnNetworkModuleIO.h:378
	void SetStandingsReceivedCountDownTime(float32_t);

	// BrnNetworkModuleIO.h:381
	const OutputBuffer::NetworkGameDataRequestInterface * GetGameDataRequestInterface() const;

	// BrnNetworkModuleIO.h:384
	OutputBuffer::NetworkGameDataRequestInterface * GetGameDataRequestInterface();

	// BrnNetworkModuleIO.h:387
	const StatsOutputInterface * GetStatsOutputInterface() const;

	// BrnNetworkModuleIO.h:390
	StatsOutputInterface * GetStatsOutputInterface();

	// BrnNetworkModuleIO.h:393
	const InGamePlayerStatusInterface * GetInGamePlayerStatusInterface() const;

	// BrnNetworkModuleIO.h:396
	InGamePlayerStatusInterface * GetInGamePlayerStatusInterface();

	// BrnNetworkModuleIO.h:399
	const NetworkToGuiInterface * GetNetworkToGuiInterface() const;

	// BrnNetworkModuleIO.h:402
	NetworkToGuiInterface * GetNetworkToGuiInterface();

	// BrnNetworkModuleIO.h:406
	const PlayerResultsInterface * GetPlayerResultsInterface() const;

	// BrnNetworkModuleIO.h:410
	PlayerResultsInterface * GetPlayerResultsInterface();

	// BrnNetworkModuleIO.h:414
	OnlineLobbyPlayerStatusInterface * GetOnlineLobbyPlayerStatusInterface();

	// BrnNetworkModuleIO.h:418
	const OnlineLobbyPlayerStatusInterface * GetOnlineLobbyPlayerStatusInterface() const;

	// BrnNetworkModuleIO.h:422
	NetworkEventQueue * GetNetworkEventQueue();

	// BrnNetworkModuleIO.h:426
	const NetworkEventQueue * GetNetworkEventQueue() const;

	// BrnNetworkModuleIO.h:430
	bool AreInvitesOpen() const;

	// BrnNetworkModuleIO.h:435
	void SetInvitesOpen(bool);

}

