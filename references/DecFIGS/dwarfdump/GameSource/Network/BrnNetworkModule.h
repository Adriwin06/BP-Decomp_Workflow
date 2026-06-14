// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct BrnNetworkModule {
	public:
		// BrnNetworkModule.h:538
		AggressiveMoveData::NetworkPlayerID GetNetworkPlayerID(EActiveRaceCarIndex);

		// BrnNetworkModule.h:545
		EActiveRaceCarIndex GetActiveRaceCarIndex(AggressiveMoveData::NetworkPlayerID);

		// BrnNetworkModule.h:446
		BrnNetwork::BrnNetworkManager * GetNetworkManager();

		// BrnNetworkModule.h:485
		NetworkToGameStateInterface * GetNetworkToGameStateInterface();

		// BrnNetworkModule.h:493
		GameStateToNetworkInterface * GetGameStateToNetworkInterface();

		// BrnNetworkModule.h:398
		const TrafficNetworkOutputInterface * GetTrafficOutputInterface() const;

		// BrnNetworkModule.h:390
		TrafficNetworkInputInterface * GetTrafficInputInterface();

		// BrnNetworkModule.h:414
		const NetworkOutputInterface * GetCrashOutputInterface() const;

		// BrnNetworkModule.h:406
		NetworkInputInterface * GetCrashInputInterface();

		// BrnNetworkModule.h:310
		const InputBuffer::TakedownEventQueue * GetTakedownEventInputQueue() const;

		// BrnNetworkModule.h:326
		BrnGameState::GameStateModuleIO::GameEventQueue * GetGameEventQueue();

		// BrnNetworkModule.h:477
		void AddOutputGuiEvent<BrnGui::GuiEventNetworkCustomMatchResults>(GuiEventNetworkCustomMatchResults &);

		// BrnNetworkModule.h:466
		GuiEventQueueSmall * GetOutputGuiEventQueue();

		// BrnNetworkModule.h:477
		void AddOutputGuiEvent<BrnGui::GuiEventNetworkPlayerImage>(GuiEventNetworkPlayerImage &);

		// BrnNetworkModule.h:477
		void AddOutputGuiEvent<BrnGui::GuiEventNetworkLeavingGameFailed>(GuiEventNetworkLeavingGameFailed &);

		// BrnNetworkModule.h:477
		void AddOutputGuiEvent<CgsGui::GuiEventAddLocalisedTextPointer>(GuiEventAddLocalisedTextPointer &);

		// BrnNetworkModule.h:477
		void AddOutputGuiEvent<BrnGui::GuiEventNetworkNewsAndTOS>(GuiEventNetworkNewsAndTOS &);

		// BrnNetworkModule.h:528
		NetworkEventQueue * GetNetworkEventQueue();

		// BrnNetworkModule.h:477
		void AddOutputGuiEvent<CgsGui::GuiEventNetworkConnected>(GuiEventNetworkConnected &);

		// BrnNetworkModule.h:477
		void AddOutputGuiEvent<CgsGui::GuiEventNetworkDisconnected>(GuiEventNetworkDisconnected &);

		// BrnNetworkModule.h:477
		void AddOutputGuiEvent<CgsGui::GuiEventNetworkInGame>(GuiEventNetworkInGame &);

		// BrnNetworkModule.h:477
		void AddOutputGuiEvent<CgsGui::GuiEventNetworkInGameFailed>(GuiEventNetworkInGameFailed &);

		// BrnNetworkModule.h:477
		// Declaration
		void AddOutputGuiEvent<CgsGui::GuiEventNetworkGoneOffline>(GuiEventNetworkGoneOffline &) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsGuiEventTypeDefs.h:326
			typedef GuiEvent<46> GuiEventNetworkGoneOffline;

		}

		// BrnNetworkModule.h:477
		void AddOutputGuiEvent<CgsGui::GuiEventNetworkLaunched>(GuiEventNetworkLaunched &);

		// BrnNetworkModule.h:477
		// Declaration
		void AddOutputGuiEvent<CgsGui::GuiEventNetworkLeavingGame>(GuiEventNetworkLeavingGame &) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsGuiEventTypeDefs.h:328
			typedef GuiEvent<53> GuiEventNetworkLeavingGame;

		}

		// BrnNetworkModule.h:477
		void AddOutputGuiEvent<BrnGui::GuiEventNetworkPlayerStats>(GuiEventNetworkPlayerStats &);

		// BrnNetworkModule.h:421
		TimerStatusInterface * GetTimerStatusOutputInterface();

	}

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct BrnNetworkModule {
		// BrnNetworkModule.h:71
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MODULE = 1,
			E_PREPARESTAGE_NETWORK_MANAGER = 2,
			E_PREPARESTAGE_DONE = 3,
		}

		// BrnNetworkModule.h:79
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_NETWORK_MANAGER = 1,
			E_RELEASESTAGE_MODULE = 2,
			E_RELEASESTAGE_DONE = 3,
		}

	}

}

// BrnNetworkModule.h:68
struct BrnNetwork::BrnNetworkModule : public CgsModule::ModuleSingleBuffered {
private:
	// BrnNetworkModule.h:242
	bool mbIsUpdating;

	// BrnNetworkModule.h:245
	BrnNetworkManager mNetworkManager;

	// BrnNetworkModule.h:247
	BrnNetwork::BrnNetworkModule::EPrepareStage mePrepareStage;

	// BrnNetworkModule.h:248
	BrnNetwork::BrnNetworkModule::EReleaseStage meReleaseStage;

	// BrnNetworkModule.h:251
	bool mbOutputSendUpdateMessages;

	// BrnNetworkModule.h:252
	bool mbOutputRecvUpdateMessages;

	// BrnNetworkModule.h:255
	bool mbPadIdle;

	// BrnNetworkModule.h:258
	RoadRulesRecvData::NetworkPlayerID[8] maCachedPlayerIDsInGame;

	// BrnNetworkModule.h:259
	int32_t miCachedPlayersInGame;

	// BrnNetworkModule.h:261
	VehicleDriverInputInterface mVehicleDriverInputInterface;

	// BrnNetworkModule.h:262
	VehicleInputInterface mVehicleInputInterface;

	// BrnNetworkModule.h:263
	VehicleOutputInterface mVehicleOutputInterface;

	// BrnNetworkModule.h:264
	RCEntityActiveRaceCarOutputInterface mActiveRaceCarInterface;

	// BrnNetworkModule.h:265
	TrafficNetworkInputInterface mTrafficNetworkInputInterface;

	// BrnNetworkModule.h:266
	TrafficNetworkOutputInterface mTrafficNetworkOutputInterface;

	// BrnNetworkModule.h:267
	NetworkInputInterface mCrashNetworkInputInterface;

	// BrnNetworkModule.h:268
	NetworkOutputInterface mCrashNetworkOutputInterface;

	// BrnNetworkModule.h:269
	TimerStatusInterface mTimerStatusOutputInterface;

	// BrnNetworkModule.h:270
	GameStateToNetworkInterface mGameStateToNetworkInterface;

	// BrnNetworkModule.h:271
	NetworkToGameStateInterface mNetworkToGameStateInterface;

	// BrnNetworkModule.h:272
	PlayerVehicleControls mPlayerVehicleControls;

	// BrnNetworkModule.h:273
	GameEventQueue mGameEventQueue;

	// BrnNetworkModule.h:274
	InputBuffer::TakedownEventQueue mTakedownEventInputQueue;

	// BrnNetworkModule.h:275
	InputBuffer::GuiEventQueue mInputGuiEventQueue;

	// BrnNetworkModule.h:276
	GuiEventQueueSmall mOutputGuiEventQueue;

	// BrnNetworkModule.h:277
	NetworkEventQueue mNetworkEventQueue;

	// BrnNetworkModule.h:281
	int32_t miNetworkBeforeSimPM;

	// BrnNetworkModule.h:282
	int32_t miNetworkAfterSimPM;

	// BrnNetworkModule.h:283
	int32_t miNetworkAfterSim1PM;

	// BrnNetworkModule.h:284
	int32_t miNetworkAfterSim2PM;

	// BrnNetworkModule.h:285
	int32_t miNetworkAfterSim3PM;

	// BrnNetworkModule.h:286
	int32_t miNetworkAfterSim4PM;

	// BrnNetworkModule.h:287
	int32_t miNetworkAfterSim5PM;

	// BrnNetworkModule.h:288
	int32_t miNetworkAfterSim6PM;

	// BrnNetworkModule.h:289
	int32_t miNetworkAfterSim7PM;

	// BrnNetworkModule.h:290
	int32_t miNetworkAfterSim8PM;

public:
	// BrnNetworkModule.cpp:63
	virtual void Construct(bool);

	// BrnNetworkModule.cpp:149
	virtual bool Prepare(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, CgsSystem::EFrameRate, const LaunchData *, const AllocatorList *);

	// BrnNetworkModule.cpp:242
	virtual bool Release();

	// BrnNetworkModule.cpp:317
	virtual void Destruct();

	// BrnNetworkModule.cpp:347
	bool ProcessBeforeSimulation(IOBufferStack *, IOBufferStack *, const PreSimulationInputBuffer *, BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, BrnUpdateSet);

	// BrnNetworkModule.cpp:423
	// Declaration
	void ProcessAfterSimulation(IOBufferStack *, IOBufferStack *, const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *, BrnUpdateSet) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkModule.cpp:426
		using namespace CgsDev::Message;

		// BrnNetworkModule.cpp:475
		using namespace CgsDev::Message;

		// BrnNetworkModule.cpp:480
		using namespace CgsDev::Message;

		// BrnNetworkModule.cpp:498
		using namespace CgsDev::Message;

	}

	// BrnNetworkModule.cpp:509
	void CacheNetworkPlayerIDsAtGameStart();

	// BrnNetworkModule.cpp:548
	void ClearCachedNetworkPlayerIDsAtGameEnd();

	// BrnNetworkModule.h:136
	void SetButtonPressed(const ActionInfo *, int32_t);

	// BrnNetworkModule.h:140
	bool IsMenuActive();

	// BrnNetworkModule.h:143
	bool IsPlaying();

	// BrnNetworkModule.h:456
	InputBuffer::GuiEventQueue * GetInputGuiEventQueue();

	// BrnNetworkModule.h:466
	GuiEventQueueSmall * GetOutputGuiEventQueue();

	// BrnNetworkModule.h:493
	GameStateToNetworkInterface * GetGameStateToNetworkInterface();

	// BrnNetworkModule.h:485
	NetworkToGameStateInterface * GetNetworkToGameStateInterface();

	// BrnNetworkModule.h:503
	bool IsPadIdle() const;

	// BrnNetworkModule.h:334
	const VehicleInputInterface * GetVehicleInputInterface() const;

	// BrnNetworkModule.h:342
	const VehicleDriverInputInterface * GetVehicleDriverInputInterface() const;

	// BrnNetworkModule.h:350
	const VehicleOutputInterface * GetVehicleOutputInterface() const;

	// BrnNetworkModule.h:358
	const RCEntityActiveRaceCarOutputInterface * GetActiveRaceCarInterface() const;

	// BrnNetworkModule.h:366
	VehicleInputInterface * GetVehicleInputInterface();

	// BrnNetworkModule.h:374
	VehicleDriverInputInterface * GetVehicleDriverInputInterface();

	// BrnNetworkModule.h:382
	VehicleOutputInterface * GetVehicleOutputInterface();

	// BrnNetworkModule.h:390
	TrafficNetworkInputInterface * GetTrafficInputInterface();

	// BrnNetworkModule.h:398
	const TrafficNetworkOutputInterface * GetTrafficOutputInterface() const;

	// BrnNetworkModule.h:406
	NetworkInputInterface * GetCrashInputInterface();

	// BrnNetworkModule.h:414
	const NetworkOutputInterface * GetCrashOutputInterface() const;

	// BrnNetworkModule.h:421
	TimerStatusInterface * GetTimerStatusOutputInterface();

	// BrnNetworkModule.h:446
	BrnNetwork::BrnNetworkManager * GetNetworkManager();

	// BrnNetworkModule.h:429
	BrnWorld::PlayerVehicleControls * GetPlayerVehicleControls();

	// BrnNetworkModule.h:437
	const PlayerVehicleControls * GetPlayerVehicleControls() const;

	// BrnNetworkModule.h:326
	BrnGameState::GameStateModuleIO::GameEventQueue * GetGameEventQueue();

	// BrnNetworkModule.h:310
	const InputBuffer::TakedownEventQueue * GetTakedownEventInputQueue() const;

	// BrnNetworkModule.h:512
	bool IsSendUpdateMessageToBeShown() const;

	// BrnNetworkModule.h:520
	bool IsRecvUpdateMessageToBeShown() const;

	// BrnNetworkModule.cpp:568
	void DebugMemoryInit(BrnNetwork::BrnNetworkModule *);

	// BrnNetworkModule.h:528
	NetworkEventQueue * GetNetworkEventQueue();

	// BrnNetworkModule.h:538
	RoadRulesRecvData::NetworkPlayerID GetNetworkPlayerID(EActiveRaceCarIndex);

	// BrnNetworkModule.h:545
	EActiveRaceCarIndex GetActiveRaceCarIndex(RoadRulesRecvData::NetworkPlayerID);

}

// BrnNetworkModule.h:477
extern void AddOutputGuiEvent<BrnGui::GuiEventNetworkPlayerImage>(const GuiEventNetworkPlayerImage &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:479
		CgsDev::StrStream lStrStream;

	}
}

// BrnNetworkModule.h:477
extern void AddOutputGuiEvent<CgsGui::GuiEventShowLoginQuestion>(const GuiEventShowLoginQuestion &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:479
		CgsDev::StrStream lStrStream;

	}
}

// BrnNetworkModule.h:477
extern void AddOutputGuiEvent<BrnGui::GuiEventNetworkPlayerStats>(const GuiEventNetworkPlayerStats &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:479
		CgsDev::StrStream lStrStream;

	}
}

// BrnNetworkModule.h:477
extern void AddOutputGuiEvent<CgsGui::GuiEventNetworkDisconnected>(const GuiEventNetworkDisconnected &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:479
		CgsDev::StrStream lStrStream;

	}
}

// BrnNetworkModule.h:477
extern void AddOutputGuiEvent<BrnGui::GuiEventCamStatus>(const GuiEventCamStatus &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:479
		CgsDev::StrStream lStrStream;

	}
}

// BrnNetworkModule.h:477
extern void AddOutputGuiEvent<BrnGui::GuiEventNetworkCustomMatchResults>(const GuiEventNetworkCustomMatchResults &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:479
		CgsDev::StrStream lStrStream;

	}
}

// BrnNetworkModule.h:68
void BrnNetwork::BrnNetworkModule::BrnNetworkModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkModule.h:68
void BrnNetwork::BrnNetworkModule::~BrnNetworkModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

