// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateModuleIO.h:60
		const float32_t KF_RACE_START_PRESSED_VALUE;

	}

}

// BrnGameStateModuleIO.h:90
struct BrnGameState::GameStateModuleIO::PreWorldInputBuffer : public IOBuffer {
private:
	// BrnGameStateModuleIO.h:162
	TimerStatusInterface mTimerStatusInterface;

	// BrnGameStateModuleIO.h:163
	ControllerInput mControllerInput;

	// BrnGameStateModuleIO.h:164
	GameEventQueue mGameEventQueue;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:67
	typedef InputBuffer::TakedownEventQueue TakedownEventQueue;

	// BrnGameStateModuleIO.h:165
	PreWorldInputBuffer::TakedownEventQueue mTakedownEventInputQueue;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:75
	typedef NetworkToGameStateInterface NetworkToGameStateInterface;

	// BrnGameStateModuleIO.h:166
	PreWorldInputBuffer::NetworkToGameStateInterface mNetworkToGameStateInterface;

	// BrnGameStateModuleIO.h:167
	ControllerToGameStateInterface mControllerToGameStateInterface;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:76
	typedef InGamePlayerStatusInterface NetworkPlayerStatusInterface;

	// BrnGameStateModuleIO.h:168
	PreWorldInputBuffer::NetworkPlayerStatusInterface mPlayerStatusInterface;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:77
	typedef PlayerResultsInterface NetworkPlayerResultsInterface;

	// BrnGameStateModuleIO.h:169
	PreWorldInputBuffer::NetworkPlayerResultsInterface mNetworkPlayerResultsInterface;

	// BrnGameStateModuleIO.h:170
	bool mbInvitesOpen;

public:
	// BrnGameStateModuleIO.h:94
	void Construct();

	// BrnGameStateModuleIO.h:98
	void Destruct();

	// BrnGameStateModuleIO.h:102
	const ControllerInput * GetControllerInput() const;

	// BrnGameStateModuleIO.h:109
	void SetButtonPressed(const ActionInfo *, bool, bool);

	// BrnGameStateModuleIO.h:113
	bool PlayerRequestedCrashModeStart() const;

	// BrnGameStateModuleIO.h:116
	bool PlayerRequestedMaxPlayerStatsCheat() const;

	// BrnGameStateModuleIO.h:119
	bool PlayerRequestedRoadRageModeStart() const;

	// BrnGameStateModuleIO.h:122
	bool PlayerRequestedRaceModeStart() const;

	// BrnGameStateModuleIO.h:126
	void AppendGetNetworkToGameStateInterface(const NetworkToGameStateInterface *);

	// BrnGameStateModuleIO.h:130
	const GameEventQueue * GetGameEventQueue() const;

	// BrnGameStateModuleIO.h:131
	BrnGameState::GameStateModuleIO::GameEventQueue * GetGameEventQueue();

	// BrnGameStateModuleIO.h:133
	const TimerStatusInterface * GetTimerStatusInterface() const;

	// BrnGameStateModuleIO.h:134
	TimerStatusInterface * GetTimerStatusInterface();

	// BrnGameStateModuleIO.h:135
	void SetTimerStatusInterface(const TimerStatusInterface *);

	// BrnGameStateModuleIO.h:137
	const PreWorldInputBuffer::TakedownEventQueue * GetTakedownEventInputQueue() const;

	// BrnGameStateModuleIO.h:138
	PreWorldInputBuffer::TakedownEventQueue * GetTakedownEventInputQueue();

	// BrnGameStateModuleIO.h:140
	const PreWorldInputBuffer::NetworkToGameStateInterface * GetNetworkToGameStateInterface() const;

	// BrnGameStateModuleIO.h:141
	PreWorldInputBuffer::NetworkToGameStateInterface * GetNetworkToGameStateInterface();

	// BrnGameStateModuleIO.h:143
	const ControllerToGameStateInterface * GetControllerToGameStateInterface() const;

	// BrnGameStateModuleIO.h:144
	ControllerToGameStateInterface * GetControllerToGameStateInterface();

	// BrnGameStateModuleIO.h:146
	const PreWorldInputBuffer::NetworkPlayerStatusInterface * GetPlayerStatusInterface() const;

	// BrnGameStateModuleIO.h:147
	void SetPlayerStatusInterface(const PreWorldInputBuffer::NetworkPlayerStatusInterface *);

	// BrnGameStateModuleIO.h:149
	const PreWorldInputBuffer::NetworkPlayerResultsInterface * GetNetworkPlayerResultsInterface() const;

	// BrnGameStateModuleIO.h:150
	void SetNetworkPlayerResultsInterface(const PreWorldInputBuffer::NetworkPlayerResultsInterface *);

	// BrnGameStateModuleIO.h:154
	bool AreInvitesOpen() const;

	// BrnGameStateModuleIO.h:159
	void SetInvitesOpen(bool);

}

// BrnGameStateModuleIO.h:182
struct BrnGameState::GameStateModuleIO::PostWorldInputBuffer : public IOBuffer {
private:
	// BrnGameStateModuleIO.h:232
	VehicleManagerOutputInterface::RaceCarCrashEventQueue mRaceCarCrashEventQueue;

	// BrnGameStateModuleIO.h:233
	VehicleOutputInterface mVehicleOutputInterface;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:78
	typedef ContactSpyInterface ContactSpyInterface;

	// BrnGameStateModuleIO.h:234
	PostWorldInputBuffer::ContactSpyInterface mContactSpyInterface;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:70
	typedef TriggerEntityModuleOutputInterface TriggerEntityModuleOutputInterface;

	// BrnGameStateModuleIO.h:235
	PostWorldInputBuffer::TriggerEntityModuleOutputInterface mTriggerEntityOutputInterface;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:71
	typedef RCEntityActiveRaceCarOutputInterface RCEntityActiveRaceCarOutputInterface;

	// BrnGameStateModuleIO.h:236
	PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface mActiveRaceCarOutputInterface;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:72
	typedef RCEntityGlobalRaceCarOutputInterface RCEntityGlobalRaceCarOutputInterface;

	// BrnGameStateModuleIO.h:237
	PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface mGlobalRaceCarOutputInterface;

	// BrnGameStateModuleIO.h:238
	GameEventQueue mGameEventQueue;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:73
	typedef AICarOutputInterface AICarOutputInterface;

	// BrnGameStateModuleIO.h:239
	PostWorldInputBuffer::AICarOutputInterface mAICarOutputInterface;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:79
	typedef OutputBuffer_PostPhysics::TrafficTypeResponseQueue TrafficTypeResponseQueue;

	// BrnGameStateModuleIO.h:240
	PostWorldInputBuffer::TrafficTypeResponseQueue mTrafficTypeResponseQueue;

	// BrnGameStateModuleIO.h:241
	bool mbIsInPictureParadise;

public:
	// BrnGameStateModuleIO.h:187
	void Construct();

	// BrnGameStateModuleIO.h:191
	void Destruct();

	// BrnGameStateModuleIO.h:195
	const GameEventQueue * GetGameEventQueue() const;

	// BrnGameStateModuleIO.h:196
	BrnGameState::GameStateModuleIO::GameEventQueue * GetGameEventQueue();

	// BrnGameStateModuleIO.h:198
	const VehicleManagerOutputInterface::RaceCarCrashEventQueue * GetRaceCarCrashEventQueue() const;

	// BrnGameStateModuleIO.h:199
	VehicleManagerOutputInterface::RaceCarCrashEventQueue * GetRaceCarCrashEventQueue();

	// BrnGameStateModuleIO.h:201
	const VehicleOutputInterface * GetVehicleOutputInterface() const;

	// BrnGameStateModuleIO.h:202
	VehicleOutputInterface * GetVehicleOutputInterface();

	// BrnGameStateModuleIO.h:204
	const PostWorldInputBuffer::ContactSpyInterface * GetContactSpyInterface() const;

	// BrnGameStateModuleIO.h:205
	PostWorldInputBuffer::ContactSpyInterface * GetContactSpyInterface();

	// BrnGameStateModuleIO.h:207
	const PostWorldInputBuffer::TriggerEntityModuleOutputInterface * GetTriggerEntityOutputInterface() const;

	// BrnGameStateModuleIO.h:208
	PostWorldInputBuffer::TriggerEntityModuleOutputInterface * GetTriggerEntityOutputInterface();

	// BrnGameStateModuleIO.h:210
	const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface * GetActiveRaceCarOutputInterface() const;

	// BrnGameStateModuleIO.h:211
	PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface * GetActiveRaceCarOutputInterface();

	// BrnGameStateModuleIO.h:213
	const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface * GetGlobalRaceCarOutputInterface() const;

	// BrnGameStateModuleIO.h:214
	PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface * GetGlobalRaceCarOutputInterface();

	// BrnGameStateModuleIO.h:216
	const PostWorldInputBuffer::AICarOutputInterface * GetAICarOutputInterface() const;

	// BrnGameStateModuleIO.h:217
	PostWorldInputBuffer::AICarOutputInterface * GetAICarOutputInterface();

	// BrnGameStateModuleIO.h:219
	const PostWorldInputBuffer::TrafficTypeResponseQueue * GetTrafficTypeResponseQueue() const;

	// BrnGameStateModuleIO.h:220
	void AppendTrafficTypeResponseQueue(const PostWorldInputBuffer::TrafficTypeResponseQueue *);

	// BrnGameStateModuleIO.h:224
	void SetInPictureParadise(bool);

	// BrnGameStateModuleIO.h:227
	const bool GetInPictureParadise() const;

}

// BrnGameStateModuleIO.h:253
struct BrnGameState::GameStateModuleIO::OutputBuffer : public IOBuffer {
private:
	// BrnGameStateModuleIO.h:338
	InputBuffer::GameActionQueue mGameActionQueue;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:66
	typedef RequestInterface<3072> ResourceRequestInterface;

	// BrnGameStateModuleIO.h:339
	OutputBuffer::ResourceRequestInterface mResourceRequestInterface;

	// BrnGameStateModuleIO.h:340
	TimerRequestInterface mTimerRequestInterface;

	// BrnGameStateModuleIO.h:341
	FrameRateTypeRequestInterface mFrameRateTypeRequestInterface;

	// BrnGameStateModuleIO.h:342
	PreWorldInputBuffer::TakedownEventQueue mTakedownEventOutputQueue;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:74
	typedef GameStateToNetworkInterface GameStateToNetworkInterface;

	// BrnGameStateModuleIO.h:343
	OutputBuffer::GameStateToNetworkInterface mGameStateToNetworkInterface;

	// BrnGameStateModuleIO.h:344
	GameStateToControllerInterface mGameStateToControllerInterface;

	// BrnGameStateModuleIO.h:345
	GameStateToGuiInterface mGameStateToGuiInterface;

	// BrnGameStateModuleIO.h:346
	InputBuffer::GuiEventQueue mGuiEventQueue;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:68
	typedef TriggerManagementInputInterface TriggerManagementInputInterface;

	// BrnGameStateModuleIO.h:347
	OutputBuffer::TriggerManagementInputInterface mTriggerManagementInputInterface;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:69
	typedef TriggerQueryInputInterface TriggerQueryInputInterface;

	// BrnGameStateModuleIO.h:348
	OutputBuffer::TriggerQueryInputInterface mTriggerQueryInputInterface;

	// BrnGameStateModuleIO.h:349
	BrnNetwork::EPaybackType meActivePaybackType;

	// BrnGameStateModuleIO.h:350
	EActiveRaceCarIndex meActivePaybackAggressor;

	// BrnGameStateModuleIO.h:351
	Time mGameModeElapsedTime;

	// BrnGameStateModuleIO.h:352
	RaceCarRaceDistanceInterface mRaceCarRaceDistanceInterface;

	// BrnGameStateModuleIO.h:353
	ScoringOutputInterface mScoringOutputInterface;

	// BrnGameStateModuleIO.h:354
	OnlineScoringOutputInterface mOnlineScoringOutputInterface;

	// BrnGameStateModuleIO.h:355
	InterestInterface mInterestInterface;

	// BrnGameStateModuleIO.h:356
	GameModeOutputInterface mGameModeOutputInterface;

	// BrnGameStateModuleIO.h:357
	SetUpAllEventStartsInterface mSetUpAllEventStartsInterface;

	// BrnGameStateModuleIO.h:358
	SpecificGameModeEventInterface mSpecificGameModeEventInterface;

	// BrnGameStateModuleIO.h:359
	bool mbSetUpAllEventStartsInterfaceIsValid;

	// BrnGameStateModuleIO.h:360
	bool mbSpecificGameModeEventInterfaceIsValid;

	// BrnGameStateModuleIO.h:361
	bool mbControllerActive;

public:
	// BrnGameStateModuleIO.h:257
	void Construct();

	// BrnGameStateModuleIO.h:261
	void Destruct();

	// BrnGameStateModuleIO.h:265
	const InputBuffer::GameActionQueue * GetGameActionQueue() const;

	// BrnGameStateModuleIO.h:266
	InputBuffer::GameActionQueue * GetGameActionQueue();

	// BrnGameStateModuleIO.h:268
	const OutputBuffer::ResourceRequestInterface * GetResourceRequestInterface() const;

	// BrnGameStateModuleIO.h:269
	OutputBuffer::ResourceRequestInterface * GetResourceRequestInterface();

	// BrnGameStateModuleIO.h:271
	const PreWorldInputBuffer::TakedownEventQueue * GetTakedownEventOutputQueue() const;

	// BrnGameStateModuleIO.h:272
	PreWorldInputBuffer::TakedownEventQueue * GetTakedownEventOutputQueue();

	// BrnGameStateModuleIO.h:274
	const TimerRequestInterface * GetTimerRequestInterface() const;

	// BrnGameStateModuleIO.h:275
	TimerRequestInterface * GetTimerRequestInterface();

	// BrnGameStateModuleIO.h:277
	const FrameRateTypeRequestInterface * GetFrameRateTypeRequestInterface() const;

	// BrnGameStateModuleIO.h:278
	FrameRateTypeRequestInterface * GetFrameRateTypeRequestInterface();

	// BrnGameStateModuleIO.h:280
	const InputBuffer::GuiEventQueue * GetGuiEventQueue() const;

	// BrnGameStateModuleIO.h:281
	InputBuffer::GuiEventQueue * GetGuiEventQueue();

	// BrnGameStateModuleIO.h:283
	const OutputBuffer::TriggerManagementInputInterface * GetTriggerManagementInputInterface() const;

	// BrnGameStateModuleIO.h:284
	OutputBuffer::TriggerManagementInputInterface * GetTriggerManagementInputInterface();

	// BrnGameStateModuleIO.h:286
	const OutputBuffer::TriggerQueryInputInterface * GetTriggerQueryInputInterface() const;

	// BrnGameStateModuleIO.h:287
	OutputBuffer::TriggerQueryInputInterface * GetTriggerQueryInputInterface();

	// BrnGameStateModuleIO.h:289
	const OutputBuffer::GameStateToNetworkInterface * GetGameStateToNetworkInterface() const;

	// BrnGameStateModuleIO.h:290
	OutputBuffer::GameStateToNetworkInterface * GetGameStateToNetworkInterface();

	// BrnGameStateModuleIO.h:292
	const GameStateToControllerInterface * GetGameStateToControllerInterface() const;

	// BrnGameStateModuleIO.h:293
	GameStateToControllerInterface * GetGameStateToControllerInterface();

	// BrnGameStateModuleIO.h:295
	const GameStateToGuiInterface * GetGameStateToGuiInterface() const;

	// BrnGameStateModuleIO.h:296
	GameStateToGuiInterface * GetGameStateToGuiInterface();

	// BrnGameStateModuleIO.h:298
	BrnNetwork::EPaybackType GetActivePaybackType() const;

	// BrnGameStateModuleIO.h:299
	void SetActivePaybackType(BrnNetwork::EPaybackType);

	// BrnGameStateModuleIO.h:301
	EActiveRaceCarIndex GetActivePaybackAggressor() const;

	// BrnGameStateModuleIO.h:302
	void SetActivePaybackAggressor(EActiveRaceCarIndex);

	// BrnGameStateModuleIO.h:304
	const Time * GetGameModeElapsedTime() const;

	// BrnGameStateModuleIO.h:305
	void SetGameModeElapsedTime(const Time *);

	// BrnGameStateModuleIO.h:307
	bool GetControllerActive() const;

	// BrnGameStateModuleIO.h:308
	void SetControllerActive(bool);

	// BrnGameStateModuleIO.h:310
	const RaceCarRaceDistanceInterface * GetRaceCarRaceDistanceInterface() const;

	// BrnGameStateModuleIO.h:311
	RaceCarRaceDistanceInterface * GetRaceCarRaceDistanceInterface();

	// BrnGameStateModuleIO.h:313
	const ScoringOutputInterface * GetScoringOutputInterface() const;

	// BrnGameStateModuleIO.h:314
	ScoringOutputInterface * GetScoringOutputInterface();

	// BrnGameStateModuleIO.h:316
	const OnlineScoringOutputInterface * GetOnlineScoringOutputInterface() const;

	// BrnGameStateModuleIO.h:317
	OnlineScoringOutputInterface * GetOnlineScoringOutputInterface();

	// BrnGameStateModuleIO.h:319
	const InterestInterface * GetInterestInterface() const;

	// BrnGameStateModuleIO.h:320
	InterestInterface * GetInterestInterface();

	// BrnGameStateModuleIO.h:322
	const GameModeOutputInterface * GetGameModeOutputInterface() const;

	// BrnGameStateModuleIO.h:323
	GameModeOutputInterface * GetGameModeOutputInterface();

	// BrnGameStateModuleIO.h:325
	const SetUpAllEventStartsInterface * GetSetUpAllEventStartsInterface() const;

	// BrnGameStateModuleIO.h:326
	void SetSetUpAllEventStartsInterface(const SetUpAllEventStartsInterface *);

	// BrnGameStateModuleIO.h:328
	bool GetSetUpAllEventStartsInterfaceIsValid() const;

	// BrnGameStateModuleIO.h:329
	void SetSetUpAllEventStartsInterfaceIsValid(bool);

	// BrnGameStateModuleIO.h:331
	const SpecificGameModeEventInterface * GetSpecificGameModeEventInterface() const;

	// BrnGameStateModuleIO.h:332
	void SetSpecificGameModeEventInterface(const SpecificGameModeEventInterface *);

	// BrnGameStateModuleIO.h:334
	bool GetSpecificGameModeEventInterfaceIsValid() const;

	// BrnGameStateModuleIO.h:335
	void SetSpecificGameModeEventInterfaceIsValid(bool);

}

// BrnGameStateModuleIO.h:182
struct BrnGameState::GameStateModuleIO::PostWorldInputBuffer : public IOBuffer {
private:
	// BrnGameStateModuleIO.h:232
	VehicleManagerOutputInterface::RaceCarCrashEventQueue mRaceCarCrashEventQueue;

	// BrnGameStateModuleIO.h:233
	VehicleOutputInterface mVehicleOutputInterface;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:78
	typedef ContactSpyInterface ContactSpyInterface;

	// BrnGameStateModuleIO.h:234
	PostWorldInputBuffer::ContactSpyInterface mContactSpyInterface;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:70
	typedef TriggerEntityModuleOutputInterface TriggerEntityModuleOutputInterface;

	// BrnGameStateModuleIO.h:235
	PostWorldInputBuffer::TriggerEntityModuleOutputInterface mTriggerEntityOutputInterface;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:71
	typedef RCEntityActiveRaceCarOutputInterface RCEntityActiveRaceCarOutputInterface;

	// BrnGameStateModuleIO.h:236
	PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface mActiveRaceCarOutputInterface;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:72
	typedef RCEntityGlobalRaceCarOutputInterface RCEntityGlobalRaceCarOutputInterface;

	// BrnGameStateModuleIO.h:237
	PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface mGlobalRaceCarOutputInterface;

	// BrnGameStateModuleIO.h:238
	GameEventQueue mGameEventQueue;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:73
	typedef AICarOutputInterface AICarOutputInterface;

	// BrnGameStateModuleIO.h:239
	PostWorldInputBuffer::AICarOutputInterface mAICarOutputInterface;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:79
	typedef PostWorldInputBuffer::TrafficTypeResponseQueue TrafficTypeResponseQueue;

	// Unknown accessibility
	// BrnTrafficTypeInterface.h:51
	typedef EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32> TrafficTypeResponseQueue;

	// BrnGameStateModuleIO.h:240
	PostWorldInputBuffer::TrafficTypeResponseQueue mTrafficTypeResponseQueue;

	// BrnGameStateModuleIO.h:241
	bool mbIsInPictureParadise;

public:
	// BrnGameStateModuleIO.h:187
	void Construct();

	// BrnGameStateModuleIO.h:191
	void Destruct();

	// BrnGameStateModuleIO.h:195
	const GameEventQueue * GetGameEventQueue() const;

	// BrnGameStateModuleIO.h:196
	BrnGameState::GameStateModuleIO::GameEventQueue * GetGameEventQueue();

	// BrnGameStateModuleIO.h:198
	const VehicleManagerOutputInterface::RaceCarCrashEventQueue * GetRaceCarCrashEventQueue() const;

	// BrnGameStateModuleIO.h:199
	VehicleManagerOutputInterface::RaceCarCrashEventQueue * GetRaceCarCrashEventQueue();

	// BrnGameStateModuleIO.h:201
	const VehicleOutputInterface * GetVehicleOutputInterface() const;

	// BrnGameStateModuleIO.h:202
	VehicleOutputInterface * GetVehicleOutputInterface();

	// BrnGameStateModuleIO.h:204
	const PostWorldInputBuffer::ContactSpyInterface * GetContactSpyInterface() const;

	// BrnGameStateModuleIO.h:205
	PostWorldInputBuffer::ContactSpyInterface * GetContactSpyInterface();

	// BrnGameStateModuleIO.h:207
	const PostWorldInputBuffer::TriggerEntityModuleOutputInterface * GetTriggerEntityOutputInterface() const;

	// BrnGameStateModuleIO.h:208
	PostWorldInputBuffer::TriggerEntityModuleOutputInterface * GetTriggerEntityOutputInterface();

	// BrnGameStateModuleIO.h:210
	const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface * GetActiveRaceCarOutputInterface() const;

	// BrnGameStateModuleIO.h:211
	PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface * GetActiveRaceCarOutputInterface();

	// BrnGameStateModuleIO.h:213
	const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface * GetGlobalRaceCarOutputInterface() const;

	// BrnGameStateModuleIO.h:214
	PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface * GetGlobalRaceCarOutputInterface();

	// BrnGameStateModuleIO.h:216
	const PostWorldInputBuffer::AICarOutputInterface * GetAICarOutputInterface() const;

	// BrnGameStateModuleIO.h:217
	PostWorldInputBuffer::AICarOutputInterface * GetAICarOutputInterface();

	// BrnGameStateModuleIO.h:219
	const PostWorldInputBuffer::TrafficTypeResponseQueue * GetTrafficTypeResponseQueue() const;

	// BrnGameStateModuleIO.h:220
	void AppendTrafficTypeResponseQueue(const PostWorldInputBuffer::TrafficTypeResponseQueue *);

	// BrnGameStateModuleIO.h:224
	void SetInPictureParadise(bool);

	// BrnGameStateModuleIO.h:227
	const bool GetInPictureParadise() const;

}

// BrnGameStateModuleIO.h:253
struct BrnGameState::GameStateModuleIO::OutputBuffer : public IOBuffer {
private:
	// BrnGameStateModuleIO.h:338
	OutputBuffer::GameActionQueue mGameActionQueue;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:66
	typedef RequestInterface<3072> ResourceRequestInterface;

	// BrnGameStateModuleIO.h:339
	OutputBuffer::ResourceRequestInterface mResourceRequestInterface;

	// BrnGameStateModuleIO.h:340
	TimerRequestInterface mTimerRequestInterface;

	// BrnGameStateModuleIO.h:341
	FrameRateTypeRequestInterface mFrameRateTypeRequestInterface;

	// BrnGameStateModuleIO.h:342
	PreWorldInputBuffer::TakedownEventQueue mTakedownEventOutputQueue;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:74
	typedef GameStateToNetworkInterface GameStateToNetworkInterface;

	// BrnGameStateModuleIO.h:343
	OutputBuffer::GameStateToNetworkInterface mGameStateToNetworkInterface;

	// BrnGameStateModuleIO.h:344
	GameStateToControllerInterface mGameStateToControllerInterface;

	// BrnGameStateModuleIO.h:345
	GameStateToGuiInterface mGameStateToGuiInterface;

	// BrnGameStateModuleIO.h:346
	InputBuffer::GuiEventQueue mGuiEventQueue;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:68
	typedef TriggerManagementInputInterface TriggerManagementInputInterface;

	// BrnGameStateModuleIO.h:347
	OutputBuffer::TriggerManagementInputInterface mTriggerManagementInputInterface;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:69
	typedef TriggerQueryInputInterface TriggerQueryInputInterface;

	// BrnGameStateModuleIO.h:348
	OutputBuffer::TriggerQueryInputInterface mTriggerQueryInputInterface;

	// BrnGameStateModuleIO.h:349
	BrnNetwork::EPaybackType meActivePaybackType;

	// BrnGameStateModuleIO.h:350
	EActiveRaceCarIndex meActivePaybackAggressor;

	// BrnGameStateModuleIO.h:351
	Time mGameModeElapsedTime;

	// BrnGameStateModuleIO.h:352
	RaceCarRaceDistanceInterface mRaceCarRaceDistanceInterface;

	// BrnGameStateModuleIO.h:353
	ScoringOutputInterface mScoringOutputInterface;

	// BrnGameStateModuleIO.h:354
	OnlineScoringOutputInterface mOnlineScoringOutputInterface;

	// BrnGameStateModuleIO.h:355
	InterestInterface mInterestInterface;

	// BrnGameStateModuleIO.h:356
	GameModeOutputInterface mGameModeOutputInterface;

	// BrnGameStateModuleIO.h:357
	SetUpAllEventStartsInterface mSetUpAllEventStartsInterface;

	// BrnGameStateModuleIO.h:358
	SpecificGameModeEventInterface mSpecificGameModeEventInterface;

	// BrnGameStateModuleIO.h:359
	bool mbSetUpAllEventStartsInterfaceIsValid;

	// BrnGameStateModuleIO.h:360
	bool mbSpecificGameModeEventInterfaceIsValid;

	// BrnGameStateModuleIO.h:361
	bool mbControllerActive;

public:
	// BrnGameStateModuleIO.h:257
	void Construct();

	// BrnGameStateModuleIO.h:261
	void Destruct();

	// BrnGameStateModuleIO.h:265
	const OutputBuffer::GameActionQueue * GetGameActionQueue() const;

	// BrnGameStateModuleIO.h:266
	OutputBuffer::GameActionQueue * GetGameActionQueue();

	// BrnGameStateModuleIO.h:268
	const OutputBuffer::ResourceRequestInterface * GetResourceRequestInterface() const;

	// BrnGameStateModuleIO.h:269
	OutputBuffer::ResourceRequestInterface * GetResourceRequestInterface();

	// BrnGameStateModuleIO.h:271
	const PreWorldInputBuffer::TakedownEventQueue * GetTakedownEventOutputQueue() const;

	// BrnGameStateModuleIO.h:272
	PreWorldInputBuffer::TakedownEventQueue * GetTakedownEventOutputQueue();

	// BrnGameStateModuleIO.h:274
	const TimerRequestInterface * GetTimerRequestInterface() const;

	// BrnGameStateModuleIO.h:275
	TimerRequestInterface * GetTimerRequestInterface();

	// BrnGameStateModuleIO.h:277
	const FrameRateTypeRequestInterface * GetFrameRateTypeRequestInterface() const;

	// BrnGameStateModuleIO.h:278
	FrameRateTypeRequestInterface * GetFrameRateTypeRequestInterface();

	// BrnGameStateModuleIO.h:280
	const InputBuffer::GuiEventQueue * GetGuiEventQueue() const;

	// BrnGameStateModuleIO.h:281
	InputBuffer::GuiEventQueue * GetGuiEventQueue();

	// BrnGameStateModuleIO.h:283
	const OutputBuffer::TriggerManagementInputInterface * GetTriggerManagementInputInterface() const;

	// BrnGameStateModuleIO.h:284
	OutputBuffer::TriggerManagementInputInterface * GetTriggerManagementInputInterface();

	// BrnGameStateModuleIO.h:286
	const OutputBuffer::TriggerQueryInputInterface * GetTriggerQueryInputInterface() const;

	// BrnGameStateModuleIO.h:287
	OutputBuffer::TriggerQueryInputInterface * GetTriggerQueryInputInterface();

	// BrnGameStateModuleIO.h:289
	const OutputBuffer::GameStateToNetworkInterface * GetGameStateToNetworkInterface() const;

	// BrnGameStateModuleIO.h:290
	OutputBuffer::GameStateToNetworkInterface * GetGameStateToNetworkInterface();

	// BrnGameStateModuleIO.h:292
	const GameStateToControllerInterface * GetGameStateToControllerInterface() const;

	// BrnGameStateModuleIO.h:293
	GameStateToControllerInterface * GetGameStateToControllerInterface();

	// BrnGameStateModuleIO.h:295
	const GameStateToGuiInterface * GetGameStateToGuiInterface() const;

	// BrnGameStateModuleIO.h:296
	GameStateToGuiInterface * GetGameStateToGuiInterface();

	// BrnGameStateModuleIO.h:298
	BrnNetwork::EPaybackType GetActivePaybackType() const;

	// BrnGameStateModuleIO.h:299
	void SetActivePaybackType(BrnNetwork::EPaybackType);

	// BrnGameStateModuleIO.h:301
	EActiveRaceCarIndex GetActivePaybackAggressor() const;

	// BrnGameStateModuleIO.h:302
	void SetActivePaybackAggressor(EActiveRaceCarIndex);

	// BrnGameStateModuleIO.h:304
	const Time * GetGameModeElapsedTime() const;

	// BrnGameStateModuleIO.h:305
	void SetGameModeElapsedTime(const Time *);

	// BrnGameStateModuleIO.h:307
	bool GetControllerActive() const;

	// BrnGameStateModuleIO.h:308
	void SetControllerActive(bool);

	// BrnGameStateModuleIO.h:310
	const RaceCarRaceDistanceInterface * GetRaceCarRaceDistanceInterface() const;

	// BrnGameStateModuleIO.h:311
	RaceCarRaceDistanceInterface * GetRaceCarRaceDistanceInterface();

	// BrnGameStateModuleIO.h:313
	const ScoringOutputInterface * GetScoringOutputInterface() const;

	// BrnGameStateModuleIO.h:314
	ScoringOutputInterface * GetScoringOutputInterface();

	// BrnGameStateModuleIO.h:316
	const OnlineScoringOutputInterface * GetOnlineScoringOutputInterface() const;

	// BrnGameStateModuleIO.h:317
	OnlineScoringOutputInterface * GetOnlineScoringOutputInterface();

	// BrnGameStateModuleIO.h:319
	const InterestInterface * GetInterestInterface() const;

	// BrnGameStateModuleIO.h:320
	InterestInterface * GetInterestInterface();

	// BrnGameStateModuleIO.h:322
	const GameModeOutputInterface * GetGameModeOutputInterface() const;

	// BrnGameStateModuleIO.h:323
	GameModeOutputInterface * GetGameModeOutputInterface();

	// BrnGameStateModuleIO.h:325
	const SetUpAllEventStartsInterface * GetSetUpAllEventStartsInterface() const;

	// BrnGameStateModuleIO.h:326
	void SetSetUpAllEventStartsInterface(const SetUpAllEventStartsInterface *);

	// BrnGameStateModuleIO.h:328
	bool GetSetUpAllEventStartsInterfaceIsValid() const;

	// BrnGameStateModuleIO.h:329
	void SetSetUpAllEventStartsInterfaceIsValid(bool);

	// BrnGameStateModuleIO.h:331
	const SpecificGameModeEventInterface * GetSpecificGameModeEventInterface() const;

	// BrnGameStateModuleIO.h:332
	void SetSpecificGameModeEventInterface(const SpecificGameModeEventInterface *);

	// BrnGameStateModuleIO.h:334
	bool GetSpecificGameModeEventInterfaceIsValid() const;

	// BrnGameStateModuleIO.h:335
	void SetSpecificGameModeEventInterfaceIsValid(bool);

}

// BrnGameStateModuleIO.h:90
struct BrnGameState::GameStateModuleIO::PreWorldInputBuffer : public IOBuffer {
private:
	// BrnGameStateModuleIO.h:162
	TimerStatusInterface mTimerStatusInterface;

	// BrnGameStateModuleIO.h:163
	ControllerInput mControllerInput;

	// BrnGameStateModuleIO.h:164
	GameEventQueue mGameEventQueue;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:67
	typedef LiveRevengeManager::TakedownEventQueue TakedownEventQueue;

	// BrnGameStateModuleIO.h:165
	PreWorldInputBuffer::TakedownEventQueue mTakedownEventInputQueue;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:75
	typedef NetworkToGameStateInterface NetworkToGameStateInterface;

	// BrnGameStateModuleIO.h:166
	PreWorldInputBuffer::NetworkToGameStateInterface mNetworkToGameStateInterface;

	// BrnGameStateModuleIO.h:167
	ControllerToGameStateInterface mControllerToGameStateInterface;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:76
	typedef InGamePlayerStatusInterface NetworkPlayerStatusInterface;

	// BrnGameStateModuleIO.h:168
	PreWorldInputBuffer::NetworkPlayerStatusInterface mPlayerStatusInterface;

	// Unknown accessibility
	// BrnGameStateModuleIO.h:77
	typedef PlayerResultsInterface NetworkPlayerResultsInterface;

	// BrnGameStateModuleIO.h:169
	PreWorldInputBuffer::NetworkPlayerResultsInterface mNetworkPlayerResultsInterface;

	// BrnGameStateModuleIO.h:170
	bool mbInvitesOpen;

public:
	// BrnGameStateModuleIO.h:94
	void Construct();

	// BrnGameStateModuleIO.h:98
	void Destruct();

	// BrnGameStateModuleIO.h:102
	const ControllerInput * GetControllerInput() const;

	// BrnGameStateModuleIO.h:109
	void SetButtonPressed(const ActionInfo *, bool, bool);

	// BrnGameStateModuleIO.h:113
	bool PlayerRequestedCrashModeStart() const;

	// BrnGameStateModuleIO.h:116
	bool PlayerRequestedMaxPlayerStatsCheat() const;

	// BrnGameStateModuleIO.h:119
	bool PlayerRequestedRoadRageModeStart() const;

	// BrnGameStateModuleIO.h:122
	bool PlayerRequestedRaceModeStart() const;

	// BrnGameStateModuleIO.h:126
	void AppendGetNetworkToGameStateInterface(const NetworkToGameStateInterface *);

	// BrnGameStateModuleIO.h:130
	const GameEventQueue * GetGameEventQueue() const;

	// BrnGameStateModuleIO.h:131
	BrnGameState::GameStateModuleIO::GameEventQueue * GetGameEventQueue();

	// BrnGameStateModuleIO.h:133
	const TimerStatusInterface * GetTimerStatusInterface() const;

	// BrnGameStateModuleIO.h:134
	TimerStatusInterface * GetTimerStatusInterface();

	// BrnGameStateModuleIO.h:135
	void SetTimerStatusInterface(const TimerStatusInterface *);

	// BrnGameStateModuleIO.h:137
	const PreWorldInputBuffer::TakedownEventQueue * GetTakedownEventInputQueue() const;

	// BrnGameStateModuleIO.h:138
	PreWorldInputBuffer::TakedownEventQueue * GetTakedownEventInputQueue();

	// BrnGameStateModuleIO.h:140
	const PreWorldInputBuffer::NetworkToGameStateInterface * GetNetworkToGameStateInterface() const;

	// BrnGameStateModuleIO.h:141
	PreWorldInputBuffer::NetworkToGameStateInterface * GetNetworkToGameStateInterface();

	// BrnGameStateModuleIO.h:143
	const ControllerToGameStateInterface * GetControllerToGameStateInterface() const;

	// BrnGameStateModuleIO.h:144
	ControllerToGameStateInterface * GetControllerToGameStateInterface();

	// BrnGameStateModuleIO.h:146
	const PreWorldInputBuffer::NetworkPlayerStatusInterface * GetPlayerStatusInterface() const;

	// BrnGameStateModuleIO.h:147
	void SetPlayerStatusInterface(const PreWorldInputBuffer::NetworkPlayerStatusInterface *);

	// BrnGameStateModuleIO.h:149
	const PreWorldInputBuffer::NetworkPlayerResultsInterface * GetNetworkPlayerResultsInterface() const;

	// BrnGameStateModuleIO.h:150
	void SetNetworkPlayerResultsInterface(const PreWorldInputBuffer::NetworkPlayerResultsInterface *);

	// BrnGameStateModuleIO.h:154
	bool AreInvitesOpen() const;

	// BrnGameStateModuleIO.h:159
	void SetInvitesOpen(bool);

}

