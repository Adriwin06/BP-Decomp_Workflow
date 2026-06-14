// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct ChallengeSuccessManager {
		// BrnChallengeSuccessManager.h:126
		struct ChallengeSuccessData {
			// BrnChallengeSuccessManager.h:128
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnChallengeSuccessManager.h:129
			BrnNetwork::FburnSuccessUpdateMessage mUpdateMessageSend;

			// BrnChallengeSuccessManager.h:130
			BrnNetwork::FburnSuccessUpdateMessage mUpdateMessageRecv;

			// BrnChallengeSuccessManager.h:131
			BrnNetwork::FburnChallengeSuccessMessage mChallengeSuccessMessageSend;

			// BrnChallengeSuccessManager.h:132
			BrnNetwork::FburnChallengeSuccessMessage mChallengeSuccessMessageRecv;

		}

	}

}

// BrnChallengeSuccessManager.h:69
struct BrnNetwork::ChallengeSuccessManager {
private:
	// BrnChallengeSuccessManager.h:135
	BrnNetwork::ChallengeSuccessManager::ChallengeSuccessData[7] maChallengeSuccessData;

	// BrnChallengeSuccessManager.h:137
	FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess mLastSecondChallengeSuccess;

	// BrnChallengeSuccessManager.h:138
	int32_t miChallengeSuccessUpdateIndex;

	// BrnChallengeSuccessManager.h:140
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnChallengeSuccessManager.h:141
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnChallengeSuccessManager.h:142
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnChallengeSuccessManager.h:144
	bool mbSendUpdateSuccessMessage;

public:
	// BrnChallengeSuccessManager.h:77
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *);

	// BrnChallengeSuccessManager.h:81
	bool Prepare();

	// BrnChallengeSuccessManager.h:85
	bool Release();

	// BrnChallengeSuccessManager.h:89
	void Destruct();

	// BrnChallengeSuccessManager.h:94
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnChallengeSuccessManager.h:99
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnChallengeSuccessManager.h:104
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnChallengeSuccessManager.h:109
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnChallengeSuccessManager.h:113
	void Disconnected();

private:
	// BrnChallengeSuccessManager.h:149
	BrnNetwork::ChallengeSuccessManager::ChallengeSuccessData * GetChallengeSuccessDataEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnChallengeSuccessManager.h:153
	void HandleSendingUpdateMessage();

	// BrnChallengeSuccessManager.h:160
	void HandleSendingChallengeSuccessMessage(const bool *, const bool *, const float32_t *);

	// BrnChallengeSuccessManager.h:164
	void CheckForNewUpdateMessages();

	// BrnChallengeSuccessManager.h:172
	void HandleReceivedUpdateMessage(RoadRulesRecvData::NetworkPlayerID, int32_t, int32_t, FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *);

	// BrnChallengeSuccessManager.h:177
	void ProcessNetworkEvents(const NetworkEventQueue *);

	// BrnChallengeSuccessManager.h:183
	void TranslateSuccessUpdate60HzTo50Hz(FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *, FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *);

	// BrnChallengeSuccessManager.h:189
	void TranslateSuccessUpdate50HzTo60Hz(FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *, FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *);

	// BrnChallengeSuccessManager.h:196
	void _ChallengeSuccessMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnChallengeSuccessManager.h:205
	void _ChallengeSuccessMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct ChallengeSuccessManager {
		// BrnChallengeSuccessManager.h:126
		struct ChallengeSuccessData {
			// BrnChallengeSuccessManager.h:128
			GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

			// BrnChallengeSuccessManager.h:129
			BrnNetwork::FburnSuccessUpdateMessage mUpdateMessageSend;

			// BrnChallengeSuccessManager.h:130
			BrnNetwork::FburnSuccessUpdateMessage mUpdateMessageRecv;

			// BrnChallengeSuccessManager.h:131
			BrnNetwork::FburnChallengeSuccessMessage mChallengeSuccessMessageSend;

			// BrnChallengeSuccessManager.h:132
			BrnNetwork::FburnChallengeSuccessMessage mChallengeSuccessMessageRecv;

		}

	}

}

// BrnChallengeSuccessManager.h:69
struct BrnNetwork::ChallengeSuccessManager {
private:
	// BrnChallengeSuccessManager.h:135
	BrnNetwork::ChallengeSuccessManager::ChallengeSuccessData[7] maChallengeSuccessData;

	// BrnChallengeSuccessManager.h:137
	FburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess mLastSecondChallengeSuccess;

	// BrnChallengeSuccessManager.h:138
	int32_t miChallengeSuccessUpdateIndex;

	// BrnChallengeSuccessManager.h:140
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnChallengeSuccessManager.h:141
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnChallengeSuccessManager.h:142
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnChallengeSuccessManager.h:144
	bool mbSendUpdateSuccessMessage;

public:
	// BrnChallengeSuccessManager.h:77
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *);

	// BrnChallengeSuccessManager.h:81
	bool Prepare();

	// BrnChallengeSuccessManager.h:85
	bool Release();

	// BrnChallengeSuccessManager.h:89
	void Destruct();

	// BrnChallengeSuccessManager.h:94
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnChallengeSuccessManager.h:99
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnChallengeSuccessManager.h:104
	void AddPlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnChallengeSuccessManager.h:109
	void RemovePlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnChallengeSuccessManager.h:113
	void Disconnected();

private:
	// BrnChallengeSuccessManager.h:149
	BrnNetwork::ChallengeSuccessManager::ChallengeSuccessData * GetChallengeSuccessDataEntry(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnChallengeSuccessManager.h:153
	void HandleSendingUpdateMessage();

	// BrnChallengeSuccessManager.h:160
	void HandleSendingChallengeSuccessMessage(const bool *, const bool *, const float32_t *);

	// BrnChallengeSuccessManager.h:164
	void CheckForNewUpdateMessages();

	// BrnChallengeSuccessManager.h:172
	void HandleReceivedUpdateMessage(GuiEventNetworkLaunching::NetworkPlayerID, int32_t, int32_t, FburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess *);

	// BrnChallengeSuccessManager.h:177
	void ProcessNetworkEvents(const NetworkEventQueue *);

	// BrnChallengeSuccessManager.h:183
	void TranslateSuccessUpdate60HzTo50Hz(FburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess *, FburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess *);

	// BrnChallengeSuccessManager.h:189
	void TranslateSuccessUpdate50HzTo60Hz(FburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess *, FburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess *);

	// BrnChallengeSuccessManager.h:196
	void _ChallengeSuccessMessageArrivedCallback(CgsNetwork::ReliableMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnChallengeSuccessManager.h:205
	void _ChallengeSuccessMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

}

// BrnChallengeSuccessManager.h:69
struct BrnNetwork::ChallengeSuccessManager {
private:
	// BrnChallengeSuccessManager.h:135
	BrnNetwork::ChallengeSuccessManager::ChallengeSuccessData[7] maChallengeSuccessData;

	// BrnChallengeSuccessManager.h:137
	FburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess mLastSecondChallengeSuccess;

	// BrnChallengeSuccessManager.h:138
	int32_t miChallengeSuccessUpdateIndex;

	// BrnChallengeSuccessManager.h:140
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnChallengeSuccessManager.h:141
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnChallengeSuccessManager.h:142
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnChallengeSuccessManager.h:144
	bool mbSendUpdateSuccessMessage;

public:
	// BrnChallengeSuccessManager.h:77
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *);

	// BrnChallengeSuccessManager.h:81
	bool Prepare();

	// BrnChallengeSuccessManager.h:85
	bool Release();

	// BrnChallengeSuccessManager.h:89
	void Destruct();

	// BrnChallengeSuccessManager.h:94
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnChallengeSuccessManager.h:99
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnChallengeSuccessManager.h:104
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnChallengeSuccessManager.h:109
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnChallengeSuccessManager.h:113
	void Disconnected();

private:
	// BrnChallengeSuccessManager.h:149
	BrnNetwork::ChallengeSuccessManager::ChallengeSuccessData * GetChallengeSuccessDataEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnChallengeSuccessManager.h:153
	void HandleSendingUpdateMessage();

	// BrnChallengeSuccessManager.h:160
	void HandleSendingChallengeSuccessMessage(const bool *, const bool *, const float32_t *);

	// BrnChallengeSuccessManager.h:164
	void CheckForNewUpdateMessages();

	// BrnChallengeSuccessManager.h:172
	void HandleReceivedUpdateMessage(RoadRulesRecvData::NetworkPlayerID, int32_t, int32_t, FburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess *);

	// BrnChallengeSuccessManager.h:177
	void ProcessNetworkEvents(const NetworkEventQueue *);

	// BrnChallengeSuccessManager.h:183
	void TranslateSuccessUpdate60HzTo50Hz(FburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess *, FburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess *);

	// BrnChallengeSuccessManager.h:189
	void TranslateSuccessUpdate50HzTo60Hz(FburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess *, FburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess *);

	// BrnChallengeSuccessManager.h:196
	void _ChallengeSuccessMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnChallengeSuccessManager.h:205
	void _ChallengeSuccessMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct ChallengeSuccessManager {
		// BrnChallengeSuccessManager.h:126
		struct ChallengeSuccessData {
			// BrnChallengeSuccessManager.h:128
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnChallengeSuccessManager.h:129
			BrnNetwork::FburnSuccessUpdateMessage mUpdateMessageSend;

			// BrnChallengeSuccessManager.h:130
			BrnNetwork::FburnSuccessUpdateMessage mUpdateMessageRecv;

			// BrnChallengeSuccessManager.h:131
			BrnNetwork::FburnChallengeSuccessMessage mChallengeSuccessMessageSend;

			// BrnChallengeSuccessManager.h:132
			BrnNetwork::FburnChallengeSuccessMessage mChallengeSuccessMessageRecv;

		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct ChallengeSuccessManager {
		// BrnChallengeSuccessManager.h:126
		struct ChallengeSuccessData {
			// BrnChallengeSuccessManager.h:128
			AggressiveMoveData::NetworkPlayerID mPlayerID;

			// BrnChallengeSuccessManager.h:129
			BrnNetwork::FburnSuccessUpdateMessage mUpdateMessageSend;

			// BrnChallengeSuccessManager.h:130
			BrnNetwork::FburnSuccessUpdateMessage mUpdateMessageRecv;

			// BrnChallengeSuccessManager.h:131
			BrnNetwork::FburnChallengeSuccessMessage mChallengeSuccessMessageSend;

			// BrnChallengeSuccessManager.h:132
			BrnNetwork::FburnChallengeSuccessMessage mChallengeSuccessMessageRecv;

		}

	}

}

// BrnChallengeSuccessManager.h:69
struct BrnNetwork::ChallengeSuccessManager {
private:
	// BrnChallengeSuccessManager.h:135
	BrnNetwork::ChallengeSuccessManager::ChallengeSuccessData[7] maChallengeSuccessData;

	// BrnChallengeSuccessManager.h:137
	FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess mLastSecondChallengeSuccess;

	// BrnChallengeSuccessManager.h:138
	int32_t miChallengeSuccessUpdateIndex;

	// BrnChallengeSuccessManager.h:140
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnChallengeSuccessManager.h:141
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnChallengeSuccessManager.h:142
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnChallengeSuccessManager.h:144
	bool mbSendUpdateSuccessMessage;

public:
	// BrnChallengeSuccessManager.h:77
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *);

	// BrnChallengeSuccessManager.h:81
	bool Prepare();

	// BrnChallengeSuccessManager.h:85
	bool Release();

	// BrnChallengeSuccessManager.h:89
	void Destruct();

	// BrnChallengeSuccessManager.h:94
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnChallengeSuccessManager.h:99
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnChallengeSuccessManager.h:104
	void AddPlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnChallengeSuccessManager.h:109
	void RemovePlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnChallengeSuccessManager.h:113
	void Disconnected();

private:
	// BrnChallengeSuccessManager.h:149
	BrnNetwork::ChallengeSuccessManager::ChallengeSuccessData * GetChallengeSuccessDataEntry(AggressiveMoveData::NetworkPlayerID);

	// BrnChallengeSuccessManager.h:153
	void HandleSendingUpdateMessage();

	// BrnChallengeSuccessManager.h:160
	void HandleSendingChallengeSuccessMessage(const bool *, const bool *, const float32_t *);

	// BrnChallengeSuccessManager.h:164
	void CheckForNewUpdateMessages();

	// BrnChallengeSuccessManager.h:172
	void HandleReceivedUpdateMessage(AggressiveMoveData::NetworkPlayerID, int32_t, int32_t, FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *);

	// BrnChallengeSuccessManager.h:177
	void ProcessNetworkEvents(const NetworkEventQueue *);

	// BrnChallengeSuccessManager.h:183
	void TranslateSuccessUpdate60HzTo50Hz(FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *, FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *);

	// BrnChallengeSuccessManager.h:189
	void TranslateSuccessUpdate50HzTo60Hz(FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *, FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *);

	// BrnChallengeSuccessManager.h:196
	void _ChallengeSuccessMessageArrivedCallback(CgsNetwork::ReliableMessage *, AggressiveMoveData::NetworkPlayerID, void *);

	// BrnChallengeSuccessManager.h:205
	// Declaration
	void _ChallengeSuccessMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, AggressiveMoveData::NetworkPlayerID, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnChallengeSuccessManager.cpp:796
		using namespace CgsDev::Message;

	}

}

// BrnChallengeSuccessManager.h:69
struct BrnNetwork::ChallengeSuccessManager {
private:
	// BrnChallengeSuccessManager.h:135
	BrnNetwork::ChallengeSuccessManager::ChallengeSuccessData[7] maChallengeSuccessData;

	// BrnChallengeSuccessManager.h:137
	FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess mLastSecondChallengeSuccess;

	// BrnChallengeSuccessManager.h:138
	int32_t miChallengeSuccessUpdateIndex;

	// BrnChallengeSuccessManager.h:140
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnChallengeSuccessManager.h:141
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnChallengeSuccessManager.h:142
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnChallengeSuccessManager.h:144
	bool mbSendUpdateSuccessMessage;

public:
	// BrnChallengeSuccessManager.h:77
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *);

	// BrnChallengeSuccessManager.h:81
	bool Prepare();

	// BrnChallengeSuccessManager.h:85
	bool Release();

	// BrnChallengeSuccessManager.h:89
	void Destruct();

	// BrnChallengeSuccessManager.h:94
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnChallengeSuccessManager.h:99
	void ProcessAfterSimulation(const PostSimulationInputBuffer *);

	// BrnChallengeSuccessManager.h:104
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnChallengeSuccessManager.h:109
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnChallengeSuccessManager.h:113
	void Disconnected();

private:
	// BrnChallengeSuccessManager.h:149
	BrnNetwork::ChallengeSuccessManager::ChallengeSuccessData * GetChallengeSuccessDataEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnChallengeSuccessManager.h:153
	void HandleSendingUpdateMessage();

	// BrnChallengeSuccessManager.h:160
	void HandleSendingChallengeSuccessMessage(const bool *, const bool *, const float32_t *);

	// BrnChallengeSuccessManager.h:164
	void CheckForNewUpdateMessages();

	// BrnChallengeSuccessManager.h:172
	void HandleReceivedUpdateMessage(RoadRulesRecvData::NetworkPlayerID, int32_t, int32_t, FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *);

	// BrnChallengeSuccessManager.h:177
	void ProcessNetworkEvents(const NetworkEventQueue *);

	// BrnChallengeSuccessManager.h:183
	void TranslateSuccessUpdate60HzTo50Hz(FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *, FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *);

	// BrnChallengeSuccessManager.h:189
	void TranslateSuccessUpdate50HzTo60Hz(FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *, FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *);

	// BrnChallengeSuccessManager.h:196
	void _ChallengeSuccessMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnChallengeSuccessManager.h:205
	void _ChallengeSuccessMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

}

// BrnChallengeSuccessManager.h:69
struct BrnNetwork::ChallengeSuccessManager {
private:
	// BrnChallengeSuccessManager.h:135
	BrnNetwork::ChallengeSuccessManager::ChallengeSuccessData[7] maChallengeSuccessData;

	// BrnChallengeSuccessManager.h:137
	NetworkOutFburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess mLastSecondChallengeSuccess;

	// BrnChallengeSuccessManager.h:138
	int32_t miChallengeSuccessUpdateIndex;

	// BrnChallengeSuccessManager.h:140
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnChallengeSuccessManager.h:141
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnChallengeSuccessManager.h:142
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnChallengeSuccessManager.h:144
	bool mbSendUpdateSuccessMessage;

public:
	// BrnChallengeSuccessManager.h:77
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *);

	// BrnChallengeSuccessManager.h:81
	bool Prepare();

	// BrnChallengeSuccessManager.h:85
	bool Release();

	// BrnChallengeSuccessManager.h:89
	void Destruct();

	// BrnChallengeSuccessManager.h:94
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnChallengeSuccessManager.h:99
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnChallengeSuccessManager.h:104
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnChallengeSuccessManager.h:109
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnChallengeSuccessManager.h:113
	void Disconnected();

private:
	// BrnChallengeSuccessManager.h:149
	BrnNetwork::ChallengeSuccessManager::ChallengeSuccessData * GetChallengeSuccessDataEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnChallengeSuccessManager.h:153
	void HandleSendingUpdateMessage();

	// BrnChallengeSuccessManager.h:160
	void HandleSendingChallengeSuccessMessage(const bool *, const bool *, const float32_t *);

	// BrnChallengeSuccessManager.h:164
	void CheckForNewUpdateMessages();

	// BrnChallengeSuccessManager.h:172
	void HandleReceivedUpdateMessage(RoadRulesRecvData::NetworkPlayerID, int32_t, int32_t, NetworkOutFburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess *);

	// BrnChallengeSuccessManager.h:177
	void ProcessNetworkEvents(const NetworkEventQueue *);

	// BrnChallengeSuccessManager.h:183
	void TranslateSuccessUpdate60HzTo50Hz(NetworkOutFburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess *, NetworkOutFburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess *);

	// BrnChallengeSuccessManager.h:189
	void TranslateSuccessUpdate50HzTo60Hz(NetworkOutFburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess *, NetworkOutFburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess *);

	// BrnChallengeSuccessManager.h:196
	void _ChallengeSuccessMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnChallengeSuccessManager.h:205
	void _ChallengeSuccessMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

}

