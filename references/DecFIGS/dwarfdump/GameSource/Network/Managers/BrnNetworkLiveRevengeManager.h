// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct LiveRevengeManager {
		// BrnNetworkLiveRevengeManager.h:281
		enum ELiveRevengeUploadStatus {
			E_LIVE_REVENGE_UPLOAD_STATUS_PENDING = 0,
			E_LIVE_REVENGE_UPLOAD_STATUS_IN_PROGRESS = 1,
			E_LIVE_REVENGE_UPLOAD_STATUS_IDLE = 2,
			E_LIVE_REVENGE_UPLOAD_STATUS_COUNT = 3,
		}

	}

}

// BrnNetworkLiveRevengeManager.h:72
struct BrnNetwork::LiveRevengeMappingEntry {
	// BrnNetworkLiveRevengeManager.h:74
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

	// BrnNetworkLiveRevengeManager.h:75
	int32_t miRevengeTableIndex;

	// BrnNetworkLiveRevengeManager.h:76
	BrnNetwork::LiveRevengeSyncMessage mSendMessage;

	// BrnNetworkLiveRevengeManager.h:77
	BrnNetwork::LiveRevengeSyncMessage mRecvMessage;

}

// BrnNetworkLiveRevengeManager.h:89
struct BrnNetwork::LiveRevengeProfile {
	// BrnNetworkLiveRevengeManager.h:92
	extern const int32_t KI_MAX_REVENGE_HISTORY = 250;

	// BrnNetworkLiveRevengeManager.h:93
	extern const int32_t KI_VERSION_NUMBER = 6;

	// BrnNetworkLiveRevengeManager.h:95
	int32_t miVersionNumber;

	// BrnNetworkLiveRevengeManager.h:97
	Array<BrnNetwork::LiveRevengeRelationship,250u> maRelationshipTable;

public:
	// BrnNetworkLiveRevengeManager.h:101
	// Declaration
	bool ValidateProfile() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkLiveRevengeManager.h:484
		using namespace CgsDev::Message;

	}

	// BrnNetworkLiveRevengeManager.h:105
	void Clear();

	// BrnNetworkLiveRevengeManager.h:109
	bool IsIncorrectVersion() const;

	// BrnNetworkLiveRevengeManager.h:113
	bool IsUpgradable() const;

	// BrnNetworkLiveRevengeManager.h:119
	bool UpgradeFrom(const void *, int32_t *) const;

}

// BrnNetworkLiveRevengeManager.h:133
struct BrnNetwork::LiveRevengeManager {
private:
	// BrnNetworkLiveRevengeManager.h:291
	BrnNetwork::LiveRevengeDebugComponent mDebugComponent;

	// BrnNetworkLiveRevengeManager.h:302
	LiveRevengeMappingEntry[7] maPlayerToTableIndexData;

	// BrnNetworkLiveRevengeManager.h:304
	extern const int32_t KI_NUMBER_OF_RIVALS_TO_STORE_ON_SERVER = 10;

	// BrnNetworkLiveRevengeManager.h:305
	int32_t[10] maTopIndexes;

	// BrnNetworkLiveRevengeManager.h:306
	int32_t miNumberOfTopRivals;

	// BrnNetworkLiveRevengeManager.h:308
	BrnNetwork::LiveRevengeProfile * mpLiveRevengeProfile;

	// BrnNetworkLiveRevengeManager.h:309
	InputBuffer::TakedownEventQueue mTakedownEventQueue;

	// BrnNetworkLiveRevengeManager.h:310
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkLiveRevengeManager.h:311
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkLiveRevengeManager.h:312
	HeapMalloc * mpAllocator;

	// BrnNetworkLiveRevengeManager.h:314
	BrnNetwork::LiveRevengeManager::ELiveRevengeUploadStatus meLiveRevengeUploadStatus;

	// BrnNetworkLiveRevengeManager.h:315
	FastBitArray<10> maDirtyTopRivals;

	// BrnNetworkLiveRevengeManager.h:317
	bool mbAreWeInOnlineGame;

	// BrnNetworkLiveRevengeManager.h:318
	bool mbProfileIsDirty;

	// BrnNetworkLiveRevengeManager.h:319
	bool mbNeedToUpdateMarksForCurrentRound;

public:
	// BrnNetworkLiveRevengeManager.h:139
	void Construct(BrnNetwork::BrnNetworkModule *);

	// BrnNetworkLiveRevengeManager.h:144
	bool Prepare(HeapMalloc *);

	// BrnNetworkLiveRevengeManager.h:148
	bool Release();

	// BrnNetworkLiveRevengeManager.h:152
	void Destruct();

	// BrnNetworkLiveRevengeManager.h:157
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkLiveRevengeManager.h:162
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkLiveRevengeManager.h:167
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:172
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:176
	void Disconnected();

	// BrnNetworkLiveRevengeManager.h:180
	void OnRoundStart();

	// BrnNetworkLiveRevengeManager.h:184
	void OnLeaveGame();

	// BrnNetworkLiveRevengeManager.h:188
	void OnRoundFinish();

	// BrnNetworkLiveRevengeManager.h:192
	void OnGameFinish();

	// BrnNetworkLiveRevengeManager.h:197
	BrnNetwork::LiveRevengeRelationship::ERelationshipStatus GetRelationshipStatus(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:201
	int32_t GetNumberOfRivals();

	// BrnNetworkLiveRevengeManager.h:205
	int32_t GetNumberOfRelationships();

	// BrnNetworkLiveRevengeManager.h:210
	const LiveRevengeRelationship * GetRevengeRelationship(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:215
	const LiveRevengeRelationship * GetRevengeRelationshipByIndex(int32_t);

	// BrnNetworkLiveRevengeManager.h:220
	const LiveRevengeRelationship * GetRevengeRelationshipByName(const char *);

	// BrnNetworkLiveRevengeManager.h:232
	void RemotePlayerFinalised(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:238
	void GetUniqueIDByName(PlayerName *, MugshotInfo::UniquePlayerID *);

	// BrnNetworkLiveRevengeManager.h:244
	void GetUniqueIDByPlayerID(RoadRulesRecvData::NetworkPlayerID, MugshotInfo::UniquePlayerID *);

	// BrnNetworkLiveRevengeManager.h:248
	void UpdateTopRivals();

	// BrnNetworkLiveRevengeManager.h:252
	void SendLiveRevengeRivalsToServer();

	// BrnNetworkLiveRevengeManager.h:262
	void HandlePaybackInitialisedEvent(const NetworkInPaybackIntialised *);

	// BrnNetworkLiveRevengeManager.h:267
	void HandlePaybackSucceededEvent(const NetworkInPaybackSucceeded *);

	// BrnNetworkLiveRevengeManager.h:272
	void HandleLiveRevengeProfileLoadedEvent(const LiveRevengeProfile *);

	// BrnNetworkLiveRevengeManager.h:277
	void HandleRoundResults(const OnlineRoundResults *);

private:
	// BrnNetworkLiveRevengeManager.h:324
	LiveRevengeRelationship * GetNonConstRevengeRelationship(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:331
	void DisplayRivalTakedownMessage(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, EActiveRaceCarIndex, EActiveRaceCarIndex);

	// BrnNetworkLiveRevengeManager.h:338
	void DisplayPlayerTakedownMessage(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, EActiveRaceCarIndex, EActiveRaceCarIndex);

	// BrnNetworkLiveRevengeManager.h:343
	int32_t FindPlayerInTableByName(const char *);

	// BrnNetworkLiveRevengeManager.h:348
	int32_t AddNewTableEntry(const MugshotInfo::UniquePlayerID *);

	// BrnNetworkLiveRevengeManager.h:353
	void ProcessTakedownQueue(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkLiveRevengeManager.h:361
	void UpdateLiveRevengeRelationShip(EActiveRaceCarIndex, EActiveRaceCarIndex, bool, BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkLiveRevengeManager.h:368
	void UpdatePaybacksData(EActiveRaceCarIndex, EActiveRaceCarIndex, BrnNetwork::EDirtyTrickStatus);

	// BrnNetworkLiveRevengeManager.h:372
	void ResetRevengeTableMappings();

	// BrnNetworkLiveRevengeManager.h:377
	EActiveRaceCarIndex NetworkPlayerIDToActiveRaceCarIndex(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:383
	void AddMappingEntry(RoadRulesRecvData::NetworkPlayerID, int32_t);

	// BrnNetworkLiveRevengeManager.h:388
	void RemoveMappingEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:393
	LiveRevengeMappingEntry * FindMappingEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:398
	int32_t GetRivalTopIndex(int32_t) const;

	// BrnNetworkLiveRevengeManager.h:402
	BrnNetwork::LiveRevengeProfile * GetProfile();

	// BrnNetworkLiveRevengeManager.h:406
	void ClearTopRivals();

	// BrnNetworkLiveRevengeManager.h:410
	void ProcessGameDirtyTrickInterface();

	// BrnNetworkLiveRevengeManager.h:416
	void SyncMessageArrivedCallback(BrnNetwork::LiveRevengeSyncMessage *, RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:420
	void AutoSaveLiveRevengeProfile();

	// BrnNetworkLiveRevengeManager.h:424
	void UpdateMarkedManInfo();

	// BrnNetworkLiveRevengeManager.h:429
	bool IsTableValid();

	// BrnNetworkLiveRevengeManager.h:437
	void _SyncMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkLiveRevengeManager.h:446
	void _SyncMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkLiveRevengeManager.h:452
	int _SortTopRivals(const void *, const void *);

	// BrnNetworkLiveRevengeManager.h:459
	void AddRelationshipToDebugMenu(int32_t);

	// BrnNetworkLiveRevengeManager.h:464
	void RemoveRelationshipFromDebugMenu(int32_t);

}

// BrnNetworkLiveRevengeManager.h:92
extern const int32_t KI_MAX_REVENGE_HISTORY = 250;

// BrnNetworkLiveRevengeManager.h:93
extern const int32_t KI_VERSION_NUMBER = 6;

// BrnNetworkLiveRevengeManager.h:304
extern const int32_t KI_NUMBER_OF_RIVALS_TO_STORE_ON_SERVER = 10;

// BrnNetworkLiveRevengeManager.h:72
struct BrnNetwork::LiveRevengeMappingEntry {
	// BrnNetworkLiveRevengeManager.h:74
	GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

	// BrnNetworkLiveRevengeManager.h:75
	int32_t miRevengeTableIndex;

	// BrnNetworkLiveRevengeManager.h:76
	BrnNetwork::LiveRevengeSyncMessage mSendMessage;

	// BrnNetworkLiveRevengeManager.h:77
	BrnNetwork::LiveRevengeSyncMessage mRecvMessage;

}

// BrnNetworkLiveRevengeManager.h:133
struct BrnNetwork::LiveRevengeManager {
private:
	// BrnNetworkLiveRevengeManager.h:291
	BrnNetwork::LiveRevengeDebugComponent mDebugComponent;

	// BrnNetworkLiveRevengeManager.h:302
	LiveRevengeMappingEntry[7] maPlayerToTableIndexData;

	// BrnNetworkLiveRevengeManager.h:304
	extern const int32_t KI_NUMBER_OF_RIVALS_TO_STORE_ON_SERVER = 10;

	// BrnNetworkLiveRevengeManager.h:305
	int32_t[10] maTopIndexes;

	// BrnNetworkLiveRevengeManager.h:306
	int32_t miNumberOfTopRivals;

	// BrnNetworkLiveRevengeManager.h:308
	BrnNetwork::LiveRevengeProfile * mpLiveRevengeProfile;

	// BrnNetworkLiveRevengeManager.h:309
	InputBuffer::TakedownEventQueue mTakedownEventQueue;

	// BrnNetworkLiveRevengeManager.h:310
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkLiveRevengeManager.h:311
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkLiveRevengeManager.h:312
	CgsMemory::HeapMalloc * mpAllocator;

	// BrnNetworkLiveRevengeManager.h:314
	BrnNetwork::LiveRevengeManager::ELiveRevengeUploadStatus meLiveRevengeUploadStatus;

	// BrnNetworkLiveRevengeManager.h:315
	FastBitArray<10> maDirtyTopRivals;

	// BrnNetworkLiveRevengeManager.h:317
	bool mbAreWeInOnlineGame;

	// BrnNetworkLiveRevengeManager.h:318
	bool mbProfileIsDirty;

	// BrnNetworkLiveRevengeManager.h:319
	bool mbNeedToUpdateMarksForCurrentRound;

public:
	// BrnNetworkLiveRevengeManager.h:139
	void Construct(BrnNetwork::BrnNetworkModule *);

	// BrnNetworkLiveRevengeManager.h:144
	bool Prepare(CgsMemory::HeapMalloc *);

	// BrnNetworkLiveRevengeManager.h:148
	bool Release();

	// BrnNetworkLiveRevengeManager.h:152
	void Destruct();

	// BrnNetworkLiveRevengeManager.h:157
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkLiveRevengeManager.h:162
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkLiveRevengeManager.h:167
	void AddPlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:172
	void RemovePlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:176
	void Disconnected();

	// BrnNetworkLiveRevengeManager.h:180
	void OnRoundStart();

	// BrnNetworkLiveRevengeManager.h:184
	void OnLeaveGame();

	// BrnNetworkLiveRevengeManager.h:188
	void OnRoundFinish();

	// BrnNetworkLiveRevengeManager.h:192
	void OnGameFinish();

	// BrnNetworkLiveRevengeManager.h:197
	BrnNetwork::LiveRevengeRelationship::ERelationshipStatus GetRelationshipStatus(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:201
	int32_t GetNumberOfRivals();

	// BrnNetworkLiveRevengeManager.h:205
	int32_t GetNumberOfRelationships();

	// BrnNetworkLiveRevengeManager.h:210
	const LiveRevengeRelationship * GetRevengeRelationship(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:215
	const LiveRevengeRelationship * GetRevengeRelationshipByIndex(int32_t);

	// BrnNetworkLiveRevengeManager.h:220
	const LiveRevengeRelationship * GetRevengeRelationshipByName(const char *);

	// BrnNetworkLiveRevengeManager.h:232
	void RemotePlayerFinalised(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:238
	void GetUniqueIDByName(PlayerName *, MugshotInfo::UniquePlayerID *);

	// BrnNetworkLiveRevengeManager.h:244
	void GetUniqueIDByPlayerID(GuiEventNetworkLaunching::NetworkPlayerID, MugshotInfo::UniquePlayerID *);

	// BrnNetworkLiveRevengeManager.h:248
	void UpdateTopRivals();

	// BrnNetworkLiveRevengeManager.h:252
	void SendLiveRevengeRivalsToServer();

	// BrnNetworkLiveRevengeManager.h:262
	void HandlePaybackInitialisedEvent(const NetworkInPaybackIntialised *);

	// BrnNetworkLiveRevengeManager.h:267
	void HandlePaybackSucceededEvent(const NetworkInPaybackSucceeded *);

	// BrnNetworkLiveRevengeManager.h:272
	void HandleLiveRevengeProfileLoadedEvent(const LiveRevengeProfile *);

	// BrnNetworkLiveRevengeManager.h:277
	void HandleRoundResults(const OnlineRoundResults *);

private:
	// BrnNetworkLiveRevengeManager.h:324
	LiveRevengeRelationship * GetNonConstRevengeRelationship(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:331
	void DisplayRivalTakedownMessage(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, EActiveRaceCarIndex, EActiveRaceCarIndex);

	// BrnNetworkLiveRevengeManager.h:338
	void DisplayPlayerTakedownMessage(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, EActiveRaceCarIndex, EActiveRaceCarIndex);

	// BrnNetworkLiveRevengeManager.h:343
	int32_t FindPlayerInTableByName(const char *);

	// BrnNetworkLiveRevengeManager.h:348
	int32_t AddNewTableEntry(const MugshotInfo::UniquePlayerID *);

	// BrnNetworkLiveRevengeManager.h:353
	void ProcessTakedownQueue(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkLiveRevengeManager.h:361
	void UpdateLiveRevengeRelationShip(EActiveRaceCarIndex, EActiveRaceCarIndex, bool, BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkLiveRevengeManager.h:368
	void UpdatePaybacksData(EActiveRaceCarIndex, EActiveRaceCarIndex, BrnNetwork::EDirtyTrickStatus);

	// BrnNetworkLiveRevengeManager.h:372
	void ResetRevengeTableMappings();

	// BrnNetworkLiveRevengeManager.h:377
	EActiveRaceCarIndex NetworkPlayerIDToActiveRaceCarIndex(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:383
	void AddMappingEntry(GuiEventNetworkLaunching::NetworkPlayerID, int32_t);

	// BrnNetworkLiveRevengeManager.h:388
	void RemoveMappingEntry(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:393
	LiveRevengeMappingEntry * FindMappingEntry(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:398
	int32_t GetRivalTopIndex(int32_t) const;

	// BrnNetworkLiveRevengeManager.h:402
	BrnNetwork::LiveRevengeProfile * GetProfile();

	// BrnNetworkLiveRevengeManager.h:406
	void ClearTopRivals();

	// BrnNetworkLiveRevengeManager.h:410
	void ProcessGameDirtyTrickInterface();

	// BrnNetworkLiveRevengeManager.h:416
	void SyncMessageArrivedCallback(BrnNetwork::LiveRevengeSyncMessage *, GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:420
	void AutoSaveLiveRevengeProfile();

	// BrnNetworkLiveRevengeManager.h:424
	void UpdateMarkedManInfo();

	// BrnNetworkLiveRevengeManager.h:429
	bool IsTableValid();

	// BrnNetworkLiveRevengeManager.h:437
	void _SyncMessageArrivedCallback(CgsNetwork::ReliableMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnNetworkLiveRevengeManager.h:446
	void _SyncMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnNetworkLiveRevengeManager.h:452
	int _SortTopRivals(const void *, const void *);

	// BrnNetworkLiveRevengeManager.h:459
	void AddRelationshipToDebugMenu(int32_t);

	// BrnNetworkLiveRevengeManager.h:464
	void RemoveRelationshipFromDebugMenu(int32_t);

}

// BrnNetworkLiveRevengeManager.h:133
struct BrnNetwork::LiveRevengeManager {
private:
	// BrnNetworkLiveRevengeManager.h:291
	BrnNetwork::LiveRevengeDebugComponent mDebugComponent;

	// BrnNetworkLiveRevengeManager.h:302
	LiveRevengeMappingEntry[7] maPlayerToTableIndexData;

	// BrnNetworkLiveRevengeManager.h:304
	extern const int32_t KI_NUMBER_OF_RIVALS_TO_STORE_ON_SERVER = 10;

	// BrnNetworkLiveRevengeManager.h:305
	int32_t[10] maTopIndexes;

	// BrnNetworkLiveRevengeManager.h:306
	int32_t miNumberOfTopRivals;

	// BrnNetworkLiveRevengeManager.h:308
	BrnNetwork::LiveRevengeProfile * mpLiveRevengeProfile;

	// Unknown accessibility
	// BrnTakedownManagerTypes.h:97
	typedef EventQueue<BrnGameState::TakedownEvent,8> TakedownEventQueue;

	// BrnNetworkLiveRevengeManager.h:309
	LiveRevengeManager::TakedownEventQueue mTakedownEventQueue;

	// BrnNetworkLiveRevengeManager.h:310
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkLiveRevengeManager.h:311
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkLiveRevengeManager.h:312
	HeapMalloc * mpAllocator;

	// BrnNetworkLiveRevengeManager.h:314
	BrnNetwork::LiveRevengeManager::ELiveRevengeUploadStatus meLiveRevengeUploadStatus;

	// BrnNetworkLiveRevengeManager.h:315
	FastBitArray<10> maDirtyTopRivals;

	// BrnNetworkLiveRevengeManager.h:317
	bool mbAreWeInOnlineGame;

	// BrnNetworkLiveRevengeManager.h:318
	bool mbProfileIsDirty;

	// BrnNetworkLiveRevengeManager.h:319
	bool mbNeedToUpdateMarksForCurrentRound;

public:
	// BrnNetworkLiveRevengeManager.h:139
	void Construct(BrnNetwork::BrnNetworkModule *);

	// BrnNetworkLiveRevengeManager.h:144
	bool Prepare(HeapMalloc *);

	// BrnNetworkLiveRevengeManager.h:148
	bool Release();

	// BrnNetworkLiveRevengeManager.h:152
	void Destruct();

	// BrnNetworkLiveRevengeManager.h:157
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkLiveRevengeManager.h:162
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkLiveRevengeManager.h:167
	void AddPlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:172
	void RemovePlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:176
	void Disconnected();

	// BrnNetworkLiveRevengeManager.h:180
	void OnRoundStart();

	// BrnNetworkLiveRevengeManager.h:184
	void OnLeaveGame();

	// BrnNetworkLiveRevengeManager.h:188
	void OnRoundFinish();

	// BrnNetworkLiveRevengeManager.h:192
	void OnGameFinish();

	// BrnNetworkLiveRevengeManager.h:197
	BrnNetwork::LiveRevengeRelationship::ERelationshipStatus GetRelationshipStatus(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:201
	int32_t GetNumberOfRivals();

	// BrnNetworkLiveRevengeManager.h:205
	int32_t GetNumberOfRelationships();

	// BrnNetworkLiveRevengeManager.h:210
	const LiveRevengeRelationship * GetRevengeRelationship(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:215
	const LiveRevengeRelationship * GetRevengeRelationshipByIndex(int32_t);

	// BrnNetworkLiveRevengeManager.h:220
	const LiveRevengeRelationship * GetRevengeRelationshipByName(const char *);

	// BrnNetworkLiveRevengeManager.h:232
	void RemotePlayerFinalised(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:238
	void GetUniqueIDByName(PlayerName *, MugshotInfo::UniquePlayerID *);

	// BrnNetworkLiveRevengeManager.h:244
	void GetUniqueIDByPlayerID(GuiEventNetworkLaunching::NetworkPlayerID, MugshotInfo::UniquePlayerID *);

	// BrnNetworkLiveRevengeManager.h:248
	void UpdateTopRivals();

	// BrnNetworkLiveRevengeManager.h:252
	void SendLiveRevengeRivalsToServer();

	// BrnNetworkLiveRevengeManager.h:262
	void HandlePaybackInitialisedEvent(const NetworkInPaybackIntialised *);

	// BrnNetworkLiveRevengeManager.h:267
	void HandlePaybackSucceededEvent(const NetworkInPaybackSucceeded *);

	// BrnNetworkLiveRevengeManager.h:272
	void HandleLiveRevengeProfileLoadedEvent(const LiveRevengeProfile *);

	// BrnNetworkLiveRevengeManager.h:277
	void HandleRoundResults(const OnlineRoundResults *);

private:
	// BrnNetworkLiveRevengeManager.h:324
	LiveRevengeRelationship * GetNonConstRevengeRelationship(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:331
	void DisplayRivalTakedownMessage(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, EActiveRaceCarIndex, EActiveRaceCarIndex);

	// BrnNetworkLiveRevengeManager.h:338
	void DisplayPlayerTakedownMessage(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, EActiveRaceCarIndex, EActiveRaceCarIndex);

	// BrnNetworkLiveRevengeManager.h:343
	int32_t FindPlayerInTableByName(const char *);

	// BrnNetworkLiveRevengeManager.h:348
	int32_t AddNewTableEntry(const MugshotInfo::UniquePlayerID *);

	// BrnNetworkLiveRevengeManager.h:353
	void ProcessTakedownQueue(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkLiveRevengeManager.h:361
	void UpdateLiveRevengeRelationShip(EActiveRaceCarIndex, EActiveRaceCarIndex, bool, BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkLiveRevengeManager.h:368
	void UpdatePaybacksData(EActiveRaceCarIndex, EActiveRaceCarIndex, BrnNetwork::EDirtyTrickStatus);

	// BrnNetworkLiveRevengeManager.h:372
	void ResetRevengeTableMappings();

	// BrnNetworkLiveRevengeManager.h:377
	EActiveRaceCarIndex NetworkPlayerIDToActiveRaceCarIndex(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:383
	void AddMappingEntry(GuiEventNetworkLaunching::NetworkPlayerID, int32_t);

	// BrnNetworkLiveRevengeManager.h:388
	void RemoveMappingEntry(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:393
	LiveRevengeMappingEntry * FindMappingEntry(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:398
	int32_t GetRivalTopIndex(int32_t) const;

	// BrnNetworkLiveRevengeManager.h:402
	BrnNetwork::LiveRevengeProfile * GetProfile();

	// BrnNetworkLiveRevengeManager.h:406
	void ClearTopRivals();

	// BrnNetworkLiveRevengeManager.h:410
	void ProcessGameDirtyTrickInterface();

	// BrnNetworkLiveRevengeManager.h:416
	void SyncMessageArrivedCallback(BrnNetwork::LiveRevengeSyncMessage *, GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:420
	void AutoSaveLiveRevengeProfile();

	// BrnNetworkLiveRevengeManager.h:424
	void UpdateMarkedManInfo();

	// BrnNetworkLiveRevengeManager.h:429
	bool IsTableValid();

	// BrnNetworkLiveRevengeManager.h:437
	void _SyncMessageArrivedCallback(CgsNetwork::ReliableMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnNetworkLiveRevengeManager.h:446
	void _SyncMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnNetworkLiveRevengeManager.h:452
	int _SortTopRivals(const void *, const void *);

	// BrnNetworkLiveRevengeManager.h:459
	void AddRelationshipToDebugMenu(int32_t);

	// BrnNetworkLiveRevengeManager.h:464
	void RemoveRelationshipFromDebugMenu(int32_t);

}

// BrnNetworkLiveRevengeManager.h:133
struct BrnNetwork::LiveRevengeManager {
private:
	// BrnNetworkLiveRevengeManager.h:291
	BrnNetwork::LiveRevengeDebugComponent mDebugComponent;

	// BrnNetworkLiveRevengeManager.h:302
	LiveRevengeMappingEntry[7] maPlayerToTableIndexData;

	// BrnNetworkLiveRevengeManager.h:304
	extern const int32_t KI_NUMBER_OF_RIVALS_TO_STORE_ON_SERVER = 10;

	// BrnNetworkLiveRevengeManager.h:305
	int32_t[10] maTopIndexes;

	// BrnNetworkLiveRevengeManager.h:306
	int32_t miNumberOfTopRivals;

	// BrnNetworkLiveRevengeManager.h:308
	BrnNetwork::LiveRevengeProfile * mpLiveRevengeProfile;

	// Unknown accessibility
	// BrnTakedownManagerTypes.h:97
	typedef EventQueue<BrnGameState::TakedownEvent,8> TakedownEventQueue;

	// BrnNetworkLiveRevengeManager.h:309
	LiveRevengeManager::TakedownEventQueue mTakedownEventQueue;

	// BrnNetworkLiveRevengeManager.h:310
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkLiveRevengeManager.h:311
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkLiveRevengeManager.h:312
	HeapMalloc * mpAllocator;

	// BrnNetworkLiveRevengeManager.h:314
	BrnNetwork::LiveRevengeManager::ELiveRevengeUploadStatus meLiveRevengeUploadStatus;

	// BrnNetworkLiveRevengeManager.h:315
	FastBitArray<10> maDirtyTopRivals;

	// BrnNetworkLiveRevengeManager.h:317
	bool mbAreWeInOnlineGame;

	// BrnNetworkLiveRevengeManager.h:318
	bool mbProfileIsDirty;

	// BrnNetworkLiveRevengeManager.h:319
	bool mbNeedToUpdateMarksForCurrentRound;

public:
	// BrnNetworkLiveRevengeManager.h:139
	void Construct(BrnNetwork::BrnNetworkModule *);

	// BrnNetworkLiveRevengeManager.h:144
	bool Prepare(HeapMalloc *);

	// BrnNetworkLiveRevengeManager.h:148
	bool Release();

	// BrnNetworkLiveRevengeManager.h:152
	void Destruct();

	// BrnNetworkLiveRevengeManager.h:157
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkLiveRevengeManager.h:162
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkLiveRevengeManager.h:167
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:172
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:176
	void Disconnected();

	// BrnNetworkLiveRevengeManager.h:180
	void OnRoundStart();

	// BrnNetworkLiveRevengeManager.h:184
	void OnLeaveGame();

	// BrnNetworkLiveRevengeManager.h:188
	void OnRoundFinish();

	// BrnNetworkLiveRevengeManager.h:192
	void OnGameFinish();

	// BrnNetworkLiveRevengeManager.h:197
	BrnNetwork::LiveRevengeRelationship::ERelationshipStatus GetRelationshipStatus(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:201
	int32_t GetNumberOfRivals();

	// BrnNetworkLiveRevengeManager.h:205
	int32_t GetNumberOfRelationships();

	// BrnNetworkLiveRevengeManager.h:210
	const LiveRevengeRelationship * GetRevengeRelationship(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:215
	const LiveRevengeRelationship * GetRevengeRelationshipByIndex(int32_t);

	// BrnNetworkLiveRevengeManager.h:220
	const LiveRevengeRelationship * GetRevengeRelationshipByName(const char *);

	// BrnNetworkLiveRevengeManager.h:232
	void RemotePlayerFinalised(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:238
	void GetUniqueIDByName(PlayerName *, MugshotInfo::UniquePlayerID *);

	// BrnNetworkLiveRevengeManager.h:244
	void GetUniqueIDByPlayerID(RoadRulesRecvData::NetworkPlayerID, MugshotInfo::UniquePlayerID *);

	// BrnNetworkLiveRevengeManager.h:248
	void UpdateTopRivals();

	// BrnNetworkLiveRevengeManager.h:252
	void SendLiveRevengeRivalsToServer();

	// BrnNetworkLiveRevengeManager.h:262
	void HandlePaybackInitialisedEvent(const NetworkInPaybackIntialised *);

	// BrnNetworkLiveRevengeManager.h:267
	void HandlePaybackSucceededEvent(const NetworkInPaybackSucceeded *);

	// BrnNetworkLiveRevengeManager.h:272
	void HandleLiveRevengeProfileLoadedEvent(const LiveRevengeProfile *);

	// BrnNetworkLiveRevengeManager.h:277
	void HandleRoundResults(const OnlineRoundResults *);

private:
	// BrnNetworkLiveRevengeManager.h:324
	LiveRevengeRelationship * GetNonConstRevengeRelationship(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:331
	void DisplayRivalTakedownMessage(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, EActiveRaceCarIndex, EActiveRaceCarIndex);

	// BrnNetworkLiveRevengeManager.h:338
	void DisplayPlayerTakedownMessage(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, EActiveRaceCarIndex, EActiveRaceCarIndex);

	// BrnNetworkLiveRevengeManager.h:343
	int32_t FindPlayerInTableByName(const char *);

	// BrnNetworkLiveRevengeManager.h:348
	int32_t AddNewTableEntry(const MugshotInfo::UniquePlayerID *);

	// BrnNetworkLiveRevengeManager.h:353
	void ProcessTakedownQueue(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkLiveRevengeManager.h:361
	void UpdateLiveRevengeRelationShip(EActiveRaceCarIndex, EActiveRaceCarIndex, bool, BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkLiveRevengeManager.h:368
	void UpdatePaybacksData(EActiveRaceCarIndex, EActiveRaceCarIndex, BrnNetwork::EDirtyTrickStatus);

	// BrnNetworkLiveRevengeManager.h:372
	void ResetRevengeTableMappings();

	// BrnNetworkLiveRevengeManager.h:377
	EActiveRaceCarIndex NetworkPlayerIDToActiveRaceCarIndex(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:383
	void AddMappingEntry(RoadRulesRecvData::NetworkPlayerID, int32_t);

	// BrnNetworkLiveRevengeManager.h:388
	void RemoveMappingEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:393
	LiveRevengeMappingEntry * FindMappingEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:398
	int32_t GetRivalTopIndex(int32_t) const;

	// BrnNetworkLiveRevengeManager.h:402
	BrnNetwork::LiveRevengeProfile * GetProfile();

	// BrnNetworkLiveRevengeManager.h:406
	void ClearTopRivals();

	// BrnNetworkLiveRevengeManager.h:410
	void ProcessGameDirtyTrickInterface();

	// BrnNetworkLiveRevengeManager.h:416
	void SyncMessageArrivedCallback(BrnNetwork::LiveRevengeSyncMessage *, RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:420
	void AutoSaveLiveRevengeProfile();

	// BrnNetworkLiveRevengeManager.h:424
	void UpdateMarkedManInfo();

	// BrnNetworkLiveRevengeManager.h:429
	bool IsTableValid();

	// BrnNetworkLiveRevengeManager.h:437
	void _SyncMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkLiveRevengeManager.h:446
	void _SyncMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkLiveRevengeManager.h:452
	int _SortTopRivals(const void *, const void *);

	// BrnNetworkLiveRevengeManager.h:459
	void AddRelationshipToDebugMenu(int32_t);

	// BrnNetworkLiveRevengeManager.h:464
	void RemoveRelationshipFromDebugMenu(int32_t);

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct LiveRevengeManager {
		// BrnNetworkLiveRevengeManager.h:281
		enum ELiveRevengeUploadStatus {
			E_LIVE_REVENGE_UPLOAD_STATUS_PENDING = 0,
			E_LIVE_REVENGE_UPLOAD_STATUS_IN_PROGRESS = 1,
			E_LIVE_REVENGE_UPLOAD_STATUS_IDLE = 2,
			E_LIVE_REVENGE_UPLOAD_STATUS_COUNT = 3,
		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct LiveRevengeManager {
		// BrnNetworkLiveRevengeManager.h:281
		enum ELiveRevengeUploadStatus {
			E_LIVE_REVENGE_UPLOAD_STATUS_PENDING = 0,
			E_LIVE_REVENGE_UPLOAD_STATUS_IN_PROGRESS = 1,
			E_LIVE_REVENGE_UPLOAD_STATUS_IDLE = 2,
			E_LIVE_REVENGE_UPLOAD_STATUS_COUNT = 3,
		}

		// BrnNetworkLiveRevengeManager.h:296
		struct LiveRevengeQSortData {
			// BrnNetworkLiveRevengeManager.h:298
			int32_t miIndex;

			// BrnNetworkLiveRevengeManager.h:299
			int32_t miTotalTakedowns;

		}

	}

}

// BrnNetworkLiveRevengeManager.h:72
struct BrnNetwork::LiveRevengeMappingEntry {
	// BrnNetworkLiveRevengeManager.h:74
	AggressiveMoveData::NetworkPlayerID mPlayerID;

	// BrnNetworkLiveRevengeManager.h:75
	int32_t miRevengeTableIndex;

	// BrnNetworkLiveRevengeManager.h:76
	BrnNetwork::LiveRevengeSyncMessage mSendMessage;

	// BrnNetworkLiveRevengeManager.h:77
	BrnNetwork::LiveRevengeSyncMessage mRecvMessage;

}

// BrnNetworkLiveRevengeManager.h:133
struct BrnNetwork::LiveRevengeManager {
private:
	// BrnNetworkLiveRevengeManager.h:291
	BrnNetwork::LiveRevengeDebugComponent mDebugComponent;

	// BrnNetworkLiveRevengeManager.h:302
	LiveRevengeMappingEntry[7] maPlayerToTableIndexData;

	// BrnNetworkLiveRevengeManager.h:304
	extern const int32_t KI_NUMBER_OF_RIVALS_TO_STORE_ON_SERVER = 10;

	// BrnNetworkLiveRevengeManager.h:305
	int32_t[10] maTopIndexes;

	// BrnNetworkLiveRevengeManager.h:306
	int32_t miNumberOfTopRivals;

	// BrnNetworkLiveRevengeManager.h:308
	BrnNetwork::LiveRevengeProfile * mpLiveRevengeProfile;

	// BrnNetworkLiveRevengeManager.h:309
	InputBuffer::TakedownEventQueue mTakedownEventQueue;

	// BrnNetworkLiveRevengeManager.h:310
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkLiveRevengeManager.h:311
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkLiveRevengeManager.h:312
	HeapMalloc * mpAllocator;

	// BrnNetworkLiveRevengeManager.h:314
	BrnNetwork::LiveRevengeManager::ELiveRevengeUploadStatus meLiveRevengeUploadStatus;

	// BrnNetworkLiveRevengeManager.h:315
	FastBitArray<10> maDirtyTopRivals;

	// BrnNetworkLiveRevengeManager.h:317
	bool mbAreWeInOnlineGame;

	// BrnNetworkLiveRevengeManager.h:318
	bool mbProfileIsDirty;

	// BrnNetworkLiveRevengeManager.h:319
	bool mbNeedToUpdateMarksForCurrentRound;

public:
	// BrnNetworkLiveRevengeManager.h:139
	void Construct(BrnNetwork::BrnNetworkModule *);

	// BrnNetworkLiveRevengeManager.h:144
	bool Prepare(HeapMalloc *);

	// BrnNetworkLiveRevengeManager.h:148
	bool Release();

	// BrnNetworkLiveRevengeManager.h:152
	void Destruct();

	// BrnNetworkLiveRevengeManager.h:157
	// Declaration
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkLiveRevengeManager.cpp:239
		using namespace CgsDev::Message;

	}

	// BrnNetworkLiveRevengeManager.h:162
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkLiveRevengeManager.h:167
	void AddPlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:172
	void RemovePlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:176
	void Disconnected();

	// BrnNetworkLiveRevengeManager.h:180
	void OnRoundStart();

	// BrnNetworkLiveRevengeManager.h:184
	void OnLeaveGame();

	// BrnNetworkLiveRevengeManager.h:188
	void OnRoundFinish();

	// BrnNetworkLiveRevengeManager.h:192
	void OnGameFinish();

	// BrnNetworkLiveRevengeManager.h:197
	BrnNetwork::LiveRevengeRelationship::ERelationshipStatus GetRelationshipStatus(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:201
	int32_t GetNumberOfRivals();

	// BrnNetworkLiveRevengeManager.h:205
	int32_t GetNumberOfRelationships();

	// BrnNetworkLiveRevengeManager.h:210
	const LiveRevengeRelationship * GetRevengeRelationship(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:215
	const LiveRevengeRelationship * GetRevengeRelationshipByIndex(int32_t);

	// BrnNetworkLiveRevengeManager.h:220
	const LiveRevengeRelationship * GetRevengeRelationshipByName(const char *);

	// BrnNetworkLiveRevengeManager.h:232
	void RemotePlayerFinalised(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:238
	void GetUniqueIDByName(PlayerName *, LiveRevengeRelationship::UniquePlayerID *);

	// BrnNetworkLiveRevengeManager.h:244
	void GetUniqueIDByPlayerID(AggressiveMoveData::NetworkPlayerID, LiveRevengeRelationship::UniquePlayerID *);

	// BrnNetworkLiveRevengeManager.h:248
	void UpdateTopRivals();

	// BrnNetworkLiveRevengeManager.h:252
	void SendLiveRevengeRivalsToServer();

	// BrnNetworkLiveRevengeManager.h:262
	void HandlePaybackInitialisedEvent(const NetworkInPaybackIntialised *);

	// BrnNetworkLiveRevengeManager.h:267
	void HandlePaybackSucceededEvent(const NetworkInPaybackSucceeded *);

	// BrnNetworkLiveRevengeManager.h:272
	void HandleLiveRevengeProfileLoadedEvent(const LiveRevengeProfile *);

	// BrnNetworkLiveRevengeManager.h:277
	void HandleRoundResults(const OnlineRoundResults *);

private:
	// BrnNetworkLiveRevengeManager.h:324
	LiveRevengeRelationship * GetNonConstRevengeRelationship(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:331
	void DisplayRivalTakedownMessage(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, EActiveRaceCarIndex, EActiveRaceCarIndex);

	// BrnNetworkLiveRevengeManager.h:338
	void DisplayPlayerTakedownMessage(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, EActiveRaceCarIndex, EActiveRaceCarIndex);

	// BrnNetworkLiveRevengeManager.h:343
	int32_t FindPlayerInTableByName(const char *);

	// BrnNetworkLiveRevengeManager.h:348
	int32_t AddNewTableEntry(const LiveRevengeRelationship::UniquePlayerID *);

	// BrnNetworkLiveRevengeManager.h:353
	void ProcessTakedownQueue(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkLiveRevengeManager.h:361
	void UpdateLiveRevengeRelationShip(EActiveRaceCarIndex, EActiveRaceCarIndex, bool, BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkLiveRevengeManager.h:368
	void UpdatePaybacksData(EActiveRaceCarIndex, EActiveRaceCarIndex, BrnNetwork::EDirtyTrickStatus);

	// BrnNetworkLiveRevengeManager.h:372
	void ResetRevengeTableMappings();

	// BrnNetworkLiveRevengeManager.h:377
	EActiveRaceCarIndex NetworkPlayerIDToActiveRaceCarIndex(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:383
	void AddMappingEntry(AggressiveMoveData::NetworkPlayerID, int32_t);

	// BrnNetworkLiveRevengeManager.h:388
	void RemoveMappingEntry(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:393
	LiveRevengeMappingEntry * FindMappingEntry(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:398
	int32_t GetRivalTopIndex(int32_t) const;

	// BrnNetworkLiveRevengeManager.h:402
	BrnNetwork::LiveRevengeProfile * GetProfile();

	// BrnNetworkLiveRevengeManager.h:406
	void ClearTopRivals();

	// BrnNetworkLiveRevengeManager.h:410
	void ProcessGameDirtyTrickInterface();

	// BrnNetworkLiveRevengeManager.h:416
	void SyncMessageArrivedCallback(BrnNetwork::LiveRevengeSyncMessage *, AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:420
	void AutoSaveLiveRevengeProfile();

	// BrnNetworkLiveRevengeManager.h:424
	void UpdateMarkedManInfo();

	// BrnNetworkLiveRevengeManager.h:429
	bool IsTableValid();

	// BrnNetworkLiveRevengeManager.h:437
	void _SyncMessageArrivedCallback(CgsNetwork::ReliableMessage *, AggressiveMoveData::NetworkPlayerID, void *);

	// BrnNetworkLiveRevengeManager.h:446
	// Declaration
	void _SyncMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, AggressiveMoveData::NetworkPlayerID, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkLiveRevengeManager.cpp:1394
		using namespace CgsDev::Message;

	}

	// BrnNetworkLiveRevengeManager.h:452
	int _SortTopRivals(const void *, const void *);

	// BrnNetworkLiveRevengeManager.h:459
	void AddRelationshipToDebugMenu(int32_t);

	// BrnNetworkLiveRevengeManager.h:464
	void RemoveRelationshipFromDebugMenu(int32_t);

}

// BrnNetworkLiveRevengeManager.h:133
struct BrnNetwork::LiveRevengeManager {
private:
	// BrnNetworkLiveRevengeManager.h:291
	BrnNetwork::LiveRevengeDebugComponent mDebugComponent;

	// BrnNetworkLiveRevengeManager.h:302
	LiveRevengeMappingEntry[7] maPlayerToTableIndexData;

	// BrnNetworkLiveRevengeManager.h:304
	extern const int32_t KI_NUMBER_OF_RIVALS_TO_STORE_ON_SERVER = 10;

	// BrnNetworkLiveRevengeManager.h:305
	int32_t[10] maTopIndexes;

	// BrnNetworkLiveRevengeManager.h:306
	int32_t miNumberOfTopRivals;

	// BrnNetworkLiveRevengeManager.h:308
	BrnNetwork::LiveRevengeProfile * mpLiveRevengeProfile;

	// BrnNetworkLiveRevengeManager.h:309
	InputBuffer::TakedownEventQueue mTakedownEventQueue;

	// BrnNetworkLiveRevengeManager.h:310
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkLiveRevengeManager.h:311
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkLiveRevengeManager.h:312
	HeapMalloc * mpAllocator;

	// BrnNetworkLiveRevengeManager.h:314
	BrnNetwork::LiveRevengeManager::ELiveRevengeUploadStatus meLiveRevengeUploadStatus;

	// BrnNetworkLiveRevengeManager.h:315
	FastBitArray<10> maDirtyTopRivals;

	// BrnNetworkLiveRevengeManager.h:317
	bool mbAreWeInOnlineGame;

	// BrnNetworkLiveRevengeManager.h:318
	bool mbProfileIsDirty;

	// BrnNetworkLiveRevengeManager.h:319
	bool mbNeedToUpdateMarksForCurrentRound;

public:
	// BrnNetworkLiveRevengeManager.h:139
	void Construct(BrnNetwork::BrnNetworkModule *);

	// BrnNetworkLiveRevengeManager.h:144
	bool Prepare(HeapMalloc *);

	// BrnNetworkLiveRevengeManager.h:148
	bool Release();

	// BrnNetworkLiveRevengeManager.h:152
	void Destruct();

	// BrnNetworkLiveRevengeManager.h:157
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkLiveRevengeManager.h:162
	void ProcessAfterSimulation(const PostSimulationInputBuffer *);

	// BrnNetworkLiveRevengeManager.h:167
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:172
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:176
	void Disconnected();

	// BrnNetworkLiveRevengeManager.h:180
	void OnRoundStart();

	// BrnNetworkLiveRevengeManager.h:184
	void OnLeaveGame();

	// BrnNetworkLiveRevengeManager.h:188
	void OnRoundFinish();

	// BrnNetworkLiveRevengeManager.h:192
	void OnGameFinish();

	// BrnNetworkLiveRevengeManager.h:197
	BrnNetwork::LiveRevengeRelationship::ERelationshipStatus GetRelationshipStatus(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:201
	int32_t GetNumberOfRivals();

	// BrnNetworkLiveRevengeManager.h:205
	int32_t GetNumberOfRelationships();

	// BrnNetworkLiveRevengeManager.h:210
	const LiveRevengeRelationship * GetRevengeRelationship(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:215
	const LiveRevengeRelationship * GetRevengeRelationshipByIndex(int32_t);

	// BrnNetworkLiveRevengeManager.h:220
	const LiveRevengeRelationship * GetRevengeRelationshipByName(const char *);

	// BrnNetworkLiveRevengeManager.h:232
	void RemotePlayerFinalised(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:238
	void GetUniqueIDByName(PlayerName *, MugshotInfo::UniquePlayerID *);

	// BrnNetworkLiveRevengeManager.h:244
	void GetUniqueIDByPlayerID(RoadRulesRecvData::NetworkPlayerID, MugshotInfo::UniquePlayerID *);

	// BrnNetworkLiveRevengeManager.h:248
	void UpdateTopRivals();

	// BrnNetworkLiveRevengeManager.h:252
	void SendLiveRevengeRivalsToServer();

	// BrnNetworkLiveRevengeManager.h:262
	void HandlePaybackInitialisedEvent(const NetworkInPaybackIntialised *);

	// BrnNetworkLiveRevengeManager.h:267
	void HandlePaybackSucceededEvent(const NetworkInPaybackSucceeded *);

	// BrnNetworkLiveRevengeManager.h:272
	void HandleLiveRevengeProfileLoadedEvent(const LiveRevengeProfile *);

	// BrnNetworkLiveRevengeManager.h:277
	void HandleRoundResults(const OnlineRoundResults *);

private:
	// BrnNetworkLiveRevengeManager.h:324
	LiveRevengeRelationship * GetNonConstRevengeRelationship(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:331
	void DisplayRivalTakedownMessage(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, EActiveRaceCarIndex, EActiveRaceCarIndex);

	// BrnNetworkLiveRevengeManager.h:338
	void DisplayPlayerTakedownMessage(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, EActiveRaceCarIndex, EActiveRaceCarIndex);

	// BrnNetworkLiveRevengeManager.h:343
	int32_t FindPlayerInTableByName(const char *);

	// BrnNetworkLiveRevengeManager.h:348
	int32_t AddNewTableEntry(const MugshotInfo::UniquePlayerID *);

	// BrnNetworkLiveRevengeManager.h:353
	void ProcessTakedownQueue(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkLiveRevengeManager.h:361
	void UpdateLiveRevengeRelationShip(EActiveRaceCarIndex, EActiveRaceCarIndex, bool, BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkLiveRevengeManager.h:368
	void UpdatePaybacksData(EActiveRaceCarIndex, EActiveRaceCarIndex, BrnNetwork::EDirtyTrickStatus);

	// BrnNetworkLiveRevengeManager.h:372
	void ResetRevengeTableMappings();

	// BrnNetworkLiveRevengeManager.h:377
	EActiveRaceCarIndex NetworkPlayerIDToActiveRaceCarIndex(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:383
	void AddMappingEntry(RoadRulesRecvData::NetworkPlayerID, int32_t);

	// BrnNetworkLiveRevengeManager.h:388
	void RemoveMappingEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:393
	LiveRevengeMappingEntry * FindMappingEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:398
	int32_t GetRivalTopIndex(int32_t) const;

	// BrnNetworkLiveRevengeManager.h:402
	BrnNetwork::LiveRevengeProfile * GetProfile();

	// BrnNetworkLiveRevengeManager.h:406
	void ClearTopRivals();

	// BrnNetworkLiveRevengeManager.h:410
	void ProcessGameDirtyTrickInterface();

	// BrnNetworkLiveRevengeManager.h:416
	void SyncMessageArrivedCallback(BrnNetwork::LiveRevengeSyncMessage *, RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:420
	void AutoSaveLiveRevengeProfile();

	// BrnNetworkLiveRevengeManager.h:424
	void UpdateMarkedManInfo();

	// BrnNetworkLiveRevengeManager.h:429
	bool IsTableValid();

	// BrnNetworkLiveRevengeManager.h:437
	void _SyncMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkLiveRevengeManager.h:446
	void _SyncMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkLiveRevengeManager.h:452
	int _SortTopRivals(const void *, const void *);

	// BrnNetworkLiveRevengeManager.h:459
	void AddRelationshipToDebugMenu(int32_t);

	// BrnNetworkLiveRevengeManager.h:464
	void RemoveRelationshipFromDebugMenu(int32_t);

}

// BrnNetworkLiveRevengeManager.h:133
struct BrnNetwork::LiveRevengeManager {
private:
	// BrnNetworkLiveRevengeManager.h:291
	BrnNetwork::LiveRevengeDebugComponent mDebugComponent;

	// BrnNetworkLiveRevengeManager.h:302
	LiveRevengeMappingEntry[7] maPlayerToTableIndexData;

	// BrnNetworkLiveRevengeManager.h:304
	extern const int32_t KI_NUMBER_OF_RIVALS_TO_STORE_ON_SERVER = 10;

	// BrnNetworkLiveRevengeManager.h:305
	int32_t[10] maTopIndexes;

	// BrnNetworkLiveRevengeManager.h:306
	int32_t miNumberOfTopRivals;

	// BrnNetworkLiveRevengeManager.h:308
	BrnNetwork::LiveRevengeProfile * mpLiveRevengeProfile;

	// BrnNetworkLiveRevengeManager.h:309
	InputBuffer::TakedownEventQueue mTakedownEventQueue;

	// BrnNetworkLiveRevengeManager.h:310
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkLiveRevengeManager.h:311
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkLiveRevengeManager.h:312
	HeapMalloc * mpAllocator;

	// BrnNetworkLiveRevengeManager.h:314
	BrnNetwork::LiveRevengeManager::ELiveRevengeUploadStatus meLiveRevengeUploadStatus;

	// BrnNetworkLiveRevengeManager.h:315
	FastBitArray<10> maDirtyTopRivals;

	// BrnNetworkLiveRevengeManager.h:317
	bool mbAreWeInOnlineGame;

	// BrnNetworkLiveRevengeManager.h:318
	bool mbProfileIsDirty;

	// BrnNetworkLiveRevengeManager.h:319
	bool mbNeedToUpdateMarksForCurrentRound;

public:
	// BrnNetworkLiveRevengeManager.h:139
	void Construct(BrnNetwork::BrnNetworkModule *);

	// BrnNetworkLiveRevengeManager.h:144
	bool Prepare(HeapMalloc *);

	// BrnNetworkLiveRevengeManager.h:148
	bool Release();

	// BrnNetworkLiveRevengeManager.h:152
	void Destruct();

	// BrnNetworkLiveRevengeManager.h:157
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkLiveRevengeManager.h:162
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkLiveRevengeManager.h:167
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:172
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:176
	void Disconnected();

	// BrnNetworkLiveRevengeManager.h:180
	void OnRoundStart();

	// BrnNetworkLiveRevengeManager.h:184
	void OnLeaveGame();

	// BrnNetworkLiveRevengeManager.h:188
	void OnRoundFinish();

	// BrnNetworkLiveRevengeManager.h:192
	void OnGameFinish();

	// BrnNetworkLiveRevengeManager.h:197
	BrnNetwork::LiveRevengeRelationship::ERelationshipStatus GetRelationshipStatus(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:201
	int32_t GetNumberOfRivals();

	// BrnNetworkLiveRevengeManager.h:205
	int32_t GetNumberOfRelationships();

	// BrnNetworkLiveRevengeManager.h:210
	const LiveRevengeRelationship * GetRevengeRelationship(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:215
	const LiveRevengeRelationship * GetRevengeRelationshipByIndex(int32_t);

	// BrnNetworkLiveRevengeManager.h:220
	const LiveRevengeRelationship * GetRevengeRelationshipByName(const char *);

	// BrnNetworkLiveRevengeManager.h:232
	void RemotePlayerFinalised(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:238
	void GetUniqueIDByName(PlayerName *, LiveRevengeRelationship::UniquePlayerID *);

	// BrnNetworkLiveRevengeManager.h:244
	void GetUniqueIDByPlayerID(RoadRulesRecvData::NetworkPlayerID, LiveRevengeRelationship::UniquePlayerID *);

	// BrnNetworkLiveRevengeManager.h:248
	void UpdateTopRivals();

	// BrnNetworkLiveRevengeManager.h:252
	void SendLiveRevengeRivalsToServer();

	// BrnNetworkLiveRevengeManager.h:262
	void HandlePaybackInitialisedEvent(const NetworkInPaybackIntialised *);

	// BrnNetworkLiveRevengeManager.h:267
	void HandlePaybackSucceededEvent(const NetworkInPaybackSucceeded *);

	// BrnNetworkLiveRevengeManager.h:272
	void HandleLiveRevengeProfileLoadedEvent(const LiveRevengeProfile *);

	// BrnNetworkLiveRevengeManager.h:277
	void HandleRoundResults(const OnlineRoundResults *);

private:
	// BrnNetworkLiveRevengeManager.h:324
	LiveRevengeRelationship * GetNonConstRevengeRelationship(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:331
	void DisplayRivalTakedownMessage(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, EActiveRaceCarIndex, EActiveRaceCarIndex);

	// BrnNetworkLiveRevengeManager.h:338
	void DisplayPlayerTakedownMessage(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, EActiveRaceCarIndex, EActiveRaceCarIndex);

	// BrnNetworkLiveRevengeManager.h:343
	int32_t FindPlayerInTableByName(const char *);

	// BrnNetworkLiveRevengeManager.h:348
	int32_t AddNewTableEntry(const LiveRevengeRelationship::UniquePlayerID *);

	// BrnNetworkLiveRevengeManager.h:353
	void ProcessTakedownQueue(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkLiveRevengeManager.h:361
	void UpdateLiveRevengeRelationShip(EActiveRaceCarIndex, EActiveRaceCarIndex, bool, BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkLiveRevengeManager.h:368
	void UpdatePaybacksData(EActiveRaceCarIndex, EActiveRaceCarIndex, BrnNetwork::EDirtyTrickStatus);

	// BrnNetworkLiveRevengeManager.h:372
	void ResetRevengeTableMappings();

	// BrnNetworkLiveRevengeManager.h:377
	EActiveRaceCarIndex NetworkPlayerIDToActiveRaceCarIndex(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:383
	void AddMappingEntry(RoadRulesRecvData::NetworkPlayerID, int32_t);

	// BrnNetworkLiveRevengeManager.h:388
	void RemoveMappingEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:393
	LiveRevengeMappingEntry * FindMappingEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:398
	int32_t GetRivalTopIndex(int32_t) const;

	// BrnNetworkLiveRevengeManager.h:402
	BrnNetwork::LiveRevengeProfile * GetProfile();

	// BrnNetworkLiveRevengeManager.h:406
	void ClearTopRivals();

	// BrnNetworkLiveRevengeManager.h:410
	void ProcessGameDirtyTrickInterface();

	// BrnNetworkLiveRevengeManager.h:416
	void SyncMessageArrivedCallback(BrnNetwork::LiveRevengeSyncMessage *, RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkLiveRevengeManager.h:420
	void AutoSaveLiveRevengeProfile();

	// BrnNetworkLiveRevengeManager.h:424
	void UpdateMarkedManInfo();

	// BrnNetworkLiveRevengeManager.h:429
	bool IsTableValid();

	// BrnNetworkLiveRevengeManager.h:437
	void _SyncMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkLiveRevengeManager.h:446
	void _SyncMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkLiveRevengeManager.h:452
	int _SortTopRivals(const void *, const void *);

	// BrnNetworkLiveRevengeManager.h:459
	void AddRelationshipToDebugMenu(int32_t);

	// BrnNetworkLiveRevengeManager.h:464
	void RemoveRelationshipFromDebugMenu(int32_t);

}

