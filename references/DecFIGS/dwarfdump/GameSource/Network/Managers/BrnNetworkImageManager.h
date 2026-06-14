// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct NetworkImageManager {
		// BrnNetworkImageManager.h:166
		enum EImageManagerState {
			E_IMAGE_MANAGER_STATE_CAPTURE_MUGSHOT = 0,
			E_IMAGE_MANAGER_STATE_TAKE_MUGSHOT = 1,
			E_IMAGE_MANAGER_STATE_WAIT_COMPRESS_MUGSHOT = 2,
			E_IMAGE_MANAGER_STATE_SHOW_MY_MUGSHOT = 3,
			E_IMAGE_MANAGER_STATE_SHOW_MUGSHOT = 4,
			E_IMAGE_MANAGER_STATE_COUNT = 5,
		}

		// BrnNetworkImageManager.h:178
		enum EMugshotPrivilege {
			E_MUGSHOT_PRIVILEGE_ANYONE = 0,
			E_MUGSHOT_PRIVILEGE_FRIENDS = 1,
			E_MUGSHOT_PRIVILEGE_NOONE = 2,
			E_MUGSHOT_PRIVILEGE_COUNT = 3,
		}

		// BrnNetworkImageManager.h:188
		struct ImageMessageData {
			// BrnNetworkImageManager.h:190
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkImageManager.h:191
			BrnNetwork::ImageMessage mImageMessageSend;

			// BrnNetworkImageManager.h:192
			BrnNetwork::ImageMessage mImageMessageRecv;

		}

		// BrnNetworkImageManager.h:196
		struct MugshotData {
			// BrnNetworkImageManager.h:198
			NetworkTexture mPicture;

			// BrnNetworkImageManager.h:199
			BitArray<50u> mReceivedPhotoPackets;

			// BrnNetworkImageManager.h:200
			RoadRulesRecvData::NetworkPlayerID mTakedownAggressorPlayerID;

			// BrnNetworkImageManager.h:201
			RoadRulesRecvData::NetworkPlayerID mTakedownVictimPlayerID;

			// BrnNetworkImageManager.h:202
			int32_t miLastPacketSent;

			// BrnNetworkImageManager.h:203
			int32_t miNumberOfPacketsToSend;

			// BrnNetworkImageManager.h:204
			bool mbPictureValid;

			// BrnNetworkImageManager.h:205
			bool mbPhotoFinishValid;

		}

	}

}

// BrnNetworkImageManager.h:78
struct BrnNetwork::NetworkImageManager {
private:
	// BrnNetworkImageManager.h:208
	BrnNetwork::NetworkImageManager::MugshotData[8] maMugshotData;

	// BrnNetworkImageManager.h:209
	BrnNetwork::NetworkImageManager::ImageMessageData[7] maImageData;

	// BrnNetworkImageManager.h:210
	RoadRulesRecvData::NetworkPlayerID mTakedownVictimPlayerID;

	// BrnNetworkImageManager.h:211
	RoadRulesRecvData::NetworkPlayerID mTakedownAggressorPlayerID;

	// BrnNetworkImageManager.h:212
	BrnNetwork::NetworkImageManager::EImageManagerState meState;

	// BrnNetworkImageManager.h:213
	BrnGameState::GameStateModuleIO::EImageType meImageTypeOfGamerPicToSave;

	// BrnNetworkImageManager.h:214
	BrnGameState::GameStateModuleIO::EImageType meImageTypeToSend;

	// BrnNetworkImageManager.h:215
	CgsID mRoadRuleBeatenID;

	// BrnNetworkImageManager.h:216
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkImageManager.h:217
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnNetworkImageManager.h:218
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkImageManager.h:219
	bool mbOutputMugshotData;

	// BrnNetworkImageManager.h:220
	bool mbBroadcastCurrentImage;

	// BrnNetworkImageManager.h:221
	bool mbAbortCaptureThisFrame;

	// BrnNetworkImageManager.h:222
	bool mbAbortShowThisFrame;

	// BrnNetworkImageManager.h:223
	bool mbMugshotsEnabled;

	// BrnNetworkImageManager.h:228
	BrnNetwork::ImageManagerDebugComponent mDebugComponent;

public:
	// BrnNetworkImageManager.h:87
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *, CgsNetwork::NetworkTextureDXTCompress *);

	// BrnNetworkImageManager.h:92
	bool Prepare(HeapMalloc *);

	// BrnNetworkImageManager.h:96
	bool Release();

	// BrnNetworkImageManager.h:100
	void Destruct();

	// BrnNetworkImageManager.h:105
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkImageManager.h:110
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkImageManager.h:115
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:120
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:124
	void Disconnected();

	// BrnNetworkImageManager.h:129
	NetworkTexture * GetMugshotImageByAggressor(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:134
	RoadRulesRecvData::NetworkPlayerID GetMugshotVictimID(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:140
	NetworkTexture * GetPhotoFinishImageByRoundWinner(RoadRulesRecvData::NetworkPlayerID, bool *);

	// BrnNetworkImageManager.h:144
	void OnRoundStart();

	// BrnNetworkImageManager.h:148
	void HandlePlayerStoppedMode();

	// BrnNetworkImageManager.h:153
	void HandleRoundResults(const OnlineRoundResults *);

	// BrnNetworkImageManager.h:158
	void EnableMugshotOutput(bool);

private:
	// BrnNetworkImageManager.h:233
	void SendNextSegment();

	// BrnNetworkImageManager.h:237
	BrnNetwork::NetworkImageManager::MugshotData * GetImageDataToSend();

	// BrnNetworkImageManager.h:242
	BrnNetwork::NetworkImageManager::ImageMessageData * GetImageMessageDataEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:247
	BrnNetwork::NetworkImageManager::MugshotData * GetMugshotDataEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:252
	void ProcessNetworkEvents(const NetworkEventQueue *);

	// BrnNetworkImageManager.h:256
	void ProcessDirtyTrickEvents();

	// BrnNetworkImageManager.h:261
	void OutputMugshotData(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkImageManager.h:266
	void HandleMugshotEvent(const NetworkInPaybackMugshotEvent *);

	// BrnNetworkImageManager.h:270
	void HandleAbortingMugshotCapture();

	// BrnNetworkImageManager.h:277
	void SendMugshotPicture(RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:282
	void BroadcastImage(BrnNetwork::NetworkImageManager::MugshotData *);

	// BrnNetworkImageManager.h:288
	void ReceiveImageMessage(RoadRulesRecvData::NetworkPlayerID, BrnNetwork::ImageMessage *);

	// BrnNetworkImageManager.h:295
	void HandleReceivedCameraPic(RoadRulesRecvData::NetworkPlayerID, BrnNetwork::NetworkImageManager::MugshotData *, BrnGameState::GameStateModuleIO::EImageType);

	// BrnNetworkImageManager.h:300
	void HandleShowingMugshot(bool);

	// BrnNetworkImageManager.h:304
	BrnNetwork::NetworkImageManager::EMugshotPrivilege CheckMugshotPrivileges();

	// BrnNetworkImageManager.h:309
	void GetCompressedTexture(NetworkTexture *);

	// BrnNetworkImageManager.h:313
	void AbortMugshotCapture();

	// BrnNetworkImageManager.h:317
	void AbortMugshotShow();

	// BrnNetworkImageManager.h:322
	bool AreMugshotsDisabledForPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:326
	bool IsThereEnoughBandwidthToSend();

	// BrnNetworkImageManager.h:333
	void RequestMugshotSave(BrnNetwork::NetworkImageManager::MugshotData *, RoadRulesRecvData::NetworkPlayerID, BrnGameState::GameStateModuleIO::EImageType);

	// BrnNetworkImageManager.h:339
	void GetUniqueIDByPlayerID(RoadRulesRecvData::NetworkPlayerID, MugshotInfo::UniquePlayerID *);

	// BrnNetworkImageManager.h:346
	void _ImageMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkImageManager.h:355
	void _ImageMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkImageManager.h:361
	void _GetCompressedCameraPicCallback(void *, void *);

	// BrnNetworkImageManager.h:367
	void _GetCompressedGamerPicCallback(void *, void *);

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct NetworkImageManager {
		// BrnNetworkImageManager.h:166
		enum EImageManagerState {
			E_IMAGE_MANAGER_STATE_CAPTURE_MUGSHOT = 0,
			E_IMAGE_MANAGER_STATE_TAKE_MUGSHOT = 1,
			E_IMAGE_MANAGER_STATE_WAIT_COMPRESS_MUGSHOT = 2,
			E_IMAGE_MANAGER_STATE_SHOW_MY_MUGSHOT = 3,
			E_IMAGE_MANAGER_STATE_SHOW_MUGSHOT = 4,
			E_IMAGE_MANAGER_STATE_COUNT = 5,
		}

		// BrnNetworkImageManager.h:178
		enum EMugshotPrivilege {
			E_MUGSHOT_PRIVILEGE_ANYONE = 0,
			E_MUGSHOT_PRIVILEGE_FRIENDS = 1,
			E_MUGSHOT_PRIVILEGE_NOONE = 2,
			E_MUGSHOT_PRIVILEGE_COUNT = 3,
		}

		// BrnNetworkImageManager.h:188
		struct ImageMessageData {
			// BrnNetworkImageManager.h:190
			GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

			// BrnNetworkImageManager.h:191
			BrnNetwork::ImageMessage mImageMessageSend;

			// BrnNetworkImageManager.h:192
			BrnNetwork::ImageMessage mImageMessageRecv;

		}

		// BrnNetworkImageManager.h:196
		struct MugshotData {
			// BrnNetworkImageManager.h:198
			NetworkTexture mPicture;

			// BrnNetworkImageManager.h:199
			BitArray<50u> mReceivedPhotoPackets;

			// BrnNetworkImageManager.h:200
			GuiEventNetworkLaunching::NetworkPlayerID mTakedownAggressorPlayerID;

			// BrnNetworkImageManager.h:201
			GuiEventNetworkLaunching::NetworkPlayerID mTakedownVictimPlayerID;

			// BrnNetworkImageManager.h:202
			int32_t miLastPacketSent;

			// BrnNetworkImageManager.h:203
			int32_t miNumberOfPacketsToSend;

			// BrnNetworkImageManager.h:204
			bool mbPictureValid;

			// BrnNetworkImageManager.h:205
			bool mbPhotoFinishValid;

		}

	}

}

// BrnNetworkImageManager.h:78
struct BrnNetwork::NetworkImageManager {
private:
	// BrnNetworkImageManager.h:208
	BrnNetwork::NetworkImageManager::MugshotData[8] maMugshotData;

	// BrnNetworkImageManager.h:209
	BrnNetwork::NetworkImageManager::ImageMessageData[7] maImageData;

	// BrnNetworkImageManager.h:210
	GuiEventNetworkLaunching::NetworkPlayerID mTakedownVictimPlayerID;

	// BrnNetworkImageManager.h:211
	GuiEventNetworkLaunching::NetworkPlayerID mTakedownAggressorPlayerID;

	// BrnNetworkImageManager.h:212
	BrnNetwork::NetworkImageManager::EImageManagerState meState;

	// BrnNetworkImageManager.h:213
	BrnGameState::GameStateModuleIO::EImageType meImageTypeOfGamerPicToSave;

	// BrnNetworkImageManager.h:214
	BrnGameState::GameStateModuleIO::EImageType meImageTypeToSend;

	// BrnNetworkImageManager.h:215
	CgsID mRoadRuleBeatenID;

	// BrnNetworkImageManager.h:216
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkImageManager.h:217
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnNetworkImageManager.h:218
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkImageManager.h:219
	bool mbOutputMugshotData;

	// BrnNetworkImageManager.h:220
	bool mbBroadcastCurrentImage;

	// BrnNetworkImageManager.h:221
	bool mbAbortCaptureThisFrame;

	// BrnNetworkImageManager.h:222
	bool mbAbortShowThisFrame;

	// BrnNetworkImageManager.h:223
	bool mbMugshotsEnabled;

	// BrnNetworkImageManager.h:228
	BrnNetwork::ImageManagerDebugComponent mDebugComponent;

public:
	// BrnNetworkImageManager.h:87
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *, CgsNetwork::NetworkTextureDXTCompress *);

	// BrnNetworkImageManager.h:92
	bool Prepare(CgsMemory::HeapMalloc *);

	// BrnNetworkImageManager.h:96
	bool Release();

	// BrnNetworkImageManager.h:100
	void Destruct();

	// BrnNetworkImageManager.h:105
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkImageManager.h:110
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkImageManager.h:115
	void AddPlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkImageManager.h:120
	void RemovePlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkImageManager.h:124
	void Disconnected();

	// BrnNetworkImageManager.h:129
	NetworkTexture * GetMugshotImageByAggressor(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkImageManager.h:134
	GuiEventNetworkLaunching::NetworkPlayerID GetMugshotVictimID(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkImageManager.h:140
	NetworkTexture * GetPhotoFinishImageByRoundWinner(GuiEventNetworkLaunching::NetworkPlayerID, bool *);

	// BrnNetworkImageManager.h:144
	void OnRoundStart();

	// BrnNetworkImageManager.h:148
	void HandlePlayerStoppedMode();

	// BrnNetworkImageManager.h:153
	void HandleRoundResults(const OnlineRoundResults *);

	// BrnNetworkImageManager.h:158
	void EnableMugshotOutput(bool);

private:
	// BrnNetworkImageManager.h:233
	void SendNextSegment();

	// BrnNetworkImageManager.h:237
	BrnNetwork::NetworkImageManager::MugshotData * GetImageDataToSend();

	// BrnNetworkImageManager.h:242
	BrnNetwork::NetworkImageManager::ImageMessageData * GetImageMessageDataEntry(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkImageManager.h:247
	BrnNetwork::NetworkImageManager::MugshotData * GetMugshotDataEntry(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkImageManager.h:252
	void ProcessNetworkEvents(const NetworkEventQueue *);

	// BrnNetworkImageManager.h:256
	void ProcessDirtyTrickEvents();

	// BrnNetworkImageManager.h:261
	void OutputMugshotData(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkImageManager.h:266
	void HandleMugshotEvent(const NetworkInPaybackMugshotEvent *);

	// BrnNetworkImageManager.h:270
	void HandleAbortingMugshotCapture();

	// BrnNetworkImageManager.h:277
	void SendMugshotPicture(GuiEventNetworkLaunching::NetworkPlayerID, GuiEventNetworkLaunching::NetworkPlayerID, GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkImageManager.h:282
	void BroadcastImage(BrnNetwork::NetworkImageManager::MugshotData *);

	// BrnNetworkImageManager.h:288
	void ReceiveImageMessage(GuiEventNetworkLaunching::NetworkPlayerID, BrnNetwork::ImageMessage *);

	// BrnNetworkImageManager.h:295
	void HandleReceivedCameraPic(GuiEventNetworkLaunching::NetworkPlayerID, BrnNetwork::NetworkImageManager::MugshotData *, BrnGameState::GameStateModuleIO::EImageType);

	// BrnNetworkImageManager.h:300
	void HandleShowingMugshot(bool);

	// BrnNetworkImageManager.h:304
	BrnNetwork::NetworkImageManager::EMugshotPrivilege CheckMugshotPrivileges();

	// BrnNetworkImageManager.h:309
	void GetCompressedTexture(NetworkTexture *);

	// BrnNetworkImageManager.h:313
	void AbortMugshotCapture();

	// BrnNetworkImageManager.h:317
	void AbortMugshotShow();

	// BrnNetworkImageManager.h:322
	bool AreMugshotsDisabledForPlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkImageManager.h:326
	bool IsThereEnoughBandwidthToSend();

	// BrnNetworkImageManager.h:333
	void RequestMugshotSave(BrnNetwork::NetworkImageManager::MugshotData *, GuiEventNetworkLaunching::NetworkPlayerID, BrnGameState::GameStateModuleIO::EImageType);

	// BrnNetworkImageManager.h:339
	void GetUniqueIDByPlayerID(GuiEventNetworkLaunching::NetworkPlayerID, MugshotInfo::UniquePlayerID *);

	// BrnNetworkImageManager.h:346
	void _ImageMessageArrivedCallback(CgsNetwork::ReliableMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnNetworkImageManager.h:355
	void _ImageMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnNetworkImageManager.h:361
	void _GetCompressedCameraPicCallback(void *, void *);

	// BrnNetworkImageManager.h:367
	void _GetCompressedGamerPicCallback(void *, void *);

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct NetworkImageManager {
		// BrnNetworkImageManager.h:166
		enum EImageManagerState {
			E_IMAGE_MANAGER_STATE_CAPTURE_MUGSHOT = 0,
			E_IMAGE_MANAGER_STATE_TAKE_MUGSHOT = 1,
			E_IMAGE_MANAGER_STATE_WAIT_COMPRESS_MUGSHOT = 2,
			E_IMAGE_MANAGER_STATE_SHOW_MY_MUGSHOT = 3,
			E_IMAGE_MANAGER_STATE_SHOW_MUGSHOT = 4,
			E_IMAGE_MANAGER_STATE_COUNT = 5,
		}

		// BrnNetworkImageManager.h:178
		enum EMugshotPrivilege {
			E_MUGSHOT_PRIVILEGE_ANYONE = 0,
			E_MUGSHOT_PRIVILEGE_FRIENDS = 1,
			E_MUGSHOT_PRIVILEGE_NOONE = 2,
			E_MUGSHOT_PRIVILEGE_COUNT = 3,
		}

		// BrnNetworkImageManager.h:188
		struct ImageMessageData {
			// BrnNetworkImageManager.h:190
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkImageManager.h:191
			BrnNetwork::ImageMessage mImageMessageSend;

			// BrnNetworkImageManager.h:192
			BrnNetwork::ImageMessage mImageMessageRecv;

		}

		// BrnNetworkImageManager.h:196
		struct MugshotData {
			// BrnNetworkImageManager.h:198
			NetworkTexture mPicture;

			// BrnNetworkImageManager.h:199
			BitArray<50u> mReceivedPhotoPackets;

			// BrnNetworkImageManager.h:200
			RoadRulesRecvData::NetworkPlayerID mTakedownAggressorPlayerID;

			// BrnNetworkImageManager.h:201
			RoadRulesRecvData::NetworkPlayerID mTakedownVictimPlayerID;

			// BrnNetworkImageManager.h:202
			int32_t miLastPacketSent;

			// BrnNetworkImageManager.h:203
			int32_t miNumberOfPacketsToSend;

			// BrnNetworkImageManager.h:204
			bool mbPictureValid;

			// BrnNetworkImageManager.h:205
			bool mbPhotoFinishValid;

		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct NetworkImageManager {
		// BrnNetworkImageManager.h:166
		enum EImageManagerState {
			E_IMAGE_MANAGER_STATE_CAPTURE_MUGSHOT = 0,
			E_IMAGE_MANAGER_STATE_TAKE_MUGSHOT = 1,
			E_IMAGE_MANAGER_STATE_WAIT_COMPRESS_MUGSHOT = 2,
			E_IMAGE_MANAGER_STATE_SHOW_MY_MUGSHOT = 3,
			E_IMAGE_MANAGER_STATE_SHOW_MUGSHOT = 4,
			E_IMAGE_MANAGER_STATE_COUNT = 5,
		}

		// BrnNetworkImageManager.h:178
		enum EMugshotPrivilege {
			E_MUGSHOT_PRIVILEGE_ANYONE = 0,
			E_MUGSHOT_PRIVILEGE_FRIENDS = 1,
			E_MUGSHOT_PRIVILEGE_NOONE = 2,
			E_MUGSHOT_PRIVILEGE_COUNT = 3,
		}

		// BrnNetworkImageManager.h:188
		struct ImageMessageData {
			// BrnNetworkImageManager.h:190
			AggressiveMoveData::NetworkPlayerID mPlayerID;

			// BrnNetworkImageManager.h:191
			BrnNetwork::ImageMessage mImageMessageSend;

			// BrnNetworkImageManager.h:192
			BrnNetwork::ImageMessage mImageMessageRecv;

		}

		// BrnNetworkImageManager.h:196
		struct MugshotData {
			// BrnNetworkImageManager.h:198
			NetworkTexture mPicture;

			// BrnNetworkImageManager.h:199
			BitArray<50u> mReceivedPhotoPackets;

			// BrnNetworkImageManager.h:200
			AggressiveMoveData::NetworkPlayerID mTakedownAggressorPlayerID;

			// BrnNetworkImageManager.h:201
			AggressiveMoveData::NetworkPlayerID mTakedownVictimPlayerID;

			// BrnNetworkImageManager.h:202
			int32_t miLastPacketSent;

			// BrnNetworkImageManager.h:203
			int32_t miNumberOfPacketsToSend;

			// BrnNetworkImageManager.h:204
			bool mbPictureValid;

			// BrnNetworkImageManager.h:205
			bool mbPhotoFinishValid;

		}

	}

}

// BrnNetworkImageManager.h:78
struct BrnNetwork::NetworkImageManager {
private:
	// BrnNetworkImageManager.h:208
	BrnNetwork::NetworkImageManager::MugshotData[8] maMugshotData;

	// BrnNetworkImageManager.h:209
	BrnNetwork::NetworkImageManager::ImageMessageData[7] maImageData;

	// BrnNetworkImageManager.h:210
	AggressiveMoveData::NetworkPlayerID mTakedownVictimPlayerID;

	// BrnNetworkImageManager.h:211
	AggressiveMoveData::NetworkPlayerID mTakedownAggressorPlayerID;

	// BrnNetworkImageManager.h:212
	BrnNetwork::NetworkImageManager::EImageManagerState meState;

	// BrnNetworkImageManager.h:213
	BrnGameState::GameStateModuleIO::EImageType meImageTypeOfGamerPicToSave;

	// BrnNetworkImageManager.h:214
	BrnGameState::GameStateModuleIO::EImageType meImageTypeToSend;

	// BrnNetworkImageManager.h:215
	CgsID mRoadRuleBeatenID;

	// BrnNetworkImageManager.h:216
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkImageManager.h:217
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnNetworkImageManager.h:218
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkImageManager.h:219
	bool mbOutputMugshotData;

	// BrnNetworkImageManager.h:220
	bool mbBroadcastCurrentImage;

	// BrnNetworkImageManager.h:221
	bool mbAbortCaptureThisFrame;

	// BrnNetworkImageManager.h:222
	bool mbAbortShowThisFrame;

	// BrnNetworkImageManager.h:223
	bool mbMugshotsEnabled;

	// BrnNetworkImageManager.h:228
	BrnNetwork::ImageManagerDebugComponent mDebugComponent;

public:
	// BrnNetworkImageManager.h:87
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *, CgsNetwork::NetworkTextureDXTCompress *);

	// BrnNetworkImageManager.h:92
	bool Prepare(HeapMalloc *);

	// BrnNetworkImageManager.h:96
	bool Release();

	// BrnNetworkImageManager.h:100
	void Destruct();

	// BrnNetworkImageManager.h:105
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkImageManager.h:110
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkImageManager.h:115
	void AddPlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkImageManager.h:120
	void RemovePlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkImageManager.h:124
	void Disconnected();

	// BrnNetworkImageManager.h:129
	NetworkTexture * GetMugshotImageByAggressor(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkImageManager.h:134
	AggressiveMoveData::NetworkPlayerID GetMugshotVictimID(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkImageManager.h:140
	// Declaration
	NetworkTexture * GetPhotoFinishImageByRoundWinner(AggressiveMoveData::NetworkPlayerID, bool *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkImageManager.cpp:1879
		using namespace CgsDev::Message;

		// BrnNetworkImageManager.cpp:1887
		using namespace CgsDev::Message;

	}

	// BrnNetworkImageManager.h:144
	void OnRoundStart();

	// BrnNetworkImageManager.h:148
	void HandlePlayerStoppedMode();

	// BrnNetworkImageManager.h:153
	void HandleRoundResults(const OnlineRoundResults *);

	// BrnNetworkImageManager.h:158
	void EnableMugshotOutput(bool);

private:
	// BrnNetworkImageManager.h:233
	void SendNextSegment();

	// BrnNetworkImageManager.h:237
	BrnNetwork::NetworkImageManager::MugshotData * GetImageDataToSend();

	// BrnNetworkImageManager.h:242
	BrnNetwork::NetworkImageManager::ImageMessageData * GetImageMessageDataEntry(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkImageManager.h:247
	BrnNetwork::NetworkImageManager::MugshotData * GetMugshotDataEntry(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkImageManager.h:252
	void ProcessNetworkEvents(const NetworkEventQueue *);

	// BrnNetworkImageManager.h:256
	void ProcessDirtyTrickEvents();

	// BrnNetworkImageManager.h:261
	void OutputMugshotData(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkImageManager.h:266
	void HandleMugshotEvent(const NetworkInPaybackMugshotEvent *);

	// BrnNetworkImageManager.h:270
	void HandleAbortingMugshotCapture();

	// BrnNetworkImageManager.h:277
	void SendMugshotPicture(AggressiveMoveData::NetworkPlayerID, AggressiveMoveData::NetworkPlayerID, AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkImageManager.h:282
	void BroadcastImage(BrnNetwork::NetworkImageManager::MugshotData *);

	// BrnNetworkImageManager.h:288
	void ReceiveImageMessage(AggressiveMoveData::NetworkPlayerID, BrnNetwork::ImageMessage *);

	// BrnNetworkImageManager.h:295
	void HandleReceivedCameraPic(AggressiveMoveData::NetworkPlayerID, BrnNetwork::NetworkImageManager::MugshotData *, BrnGameState::GameStateModuleIO::EImageType);

	// BrnNetworkImageManager.h:300
	void HandleShowingMugshot(bool);

	// BrnNetworkImageManager.h:304
	BrnNetwork::NetworkImageManager::EMugshotPrivilege CheckMugshotPrivileges();

	// BrnNetworkImageManager.h:309
	void GetCompressedTexture(NetworkTexture *);

	// BrnNetworkImageManager.h:313
	void AbortMugshotCapture();

	// BrnNetworkImageManager.h:317
	void AbortMugshotShow();

	// BrnNetworkImageManager.h:322
	bool AreMugshotsDisabledForPlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkImageManager.h:326
	bool IsThereEnoughBandwidthToSend();

	// BrnNetworkImageManager.h:333
	void RequestMugshotSave(BrnNetwork::NetworkImageManager::MugshotData *, AggressiveMoveData::NetworkPlayerID, BrnGameState::GameStateModuleIO::EImageType);

	// BrnNetworkImageManager.h:339
	void GetUniqueIDByPlayerID(AggressiveMoveData::NetworkPlayerID, LiveRevengeRelationship::UniquePlayerID *);

	// BrnNetworkImageManager.h:346
	void _ImageMessageArrivedCallback(CgsNetwork::ReliableMessage *, AggressiveMoveData::NetworkPlayerID, void *);

	// BrnNetworkImageManager.h:355
	// Declaration
	void _ImageMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, AggressiveMoveData::NetworkPlayerID, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkImageManager.cpp:1755
		using namespace CgsDev::Message;

	}

	// BrnNetworkImageManager.h:361
	void _GetCompressedCameraPicCallback(void *, void *);

	// BrnNetworkImageManager.h:367
	void _GetCompressedGamerPicCallback(void *, void *);

}

// BrnNetworkImageManager.h:78
struct BrnNetwork::NetworkImageManager {
private:
	// BrnNetworkImageManager.h:208
	BrnNetwork::NetworkImageManager::MugshotData[8] maMugshotData;

	// BrnNetworkImageManager.h:209
	BrnNetwork::NetworkImageManager::ImageMessageData[7] maImageData;

	// BrnNetworkImageManager.h:210
	RoadRulesRecvData::NetworkPlayerID mTakedownVictimPlayerID;

	// BrnNetworkImageManager.h:211
	RoadRulesRecvData::NetworkPlayerID mTakedownAggressorPlayerID;

	// BrnNetworkImageManager.h:212
	BrnNetwork::NetworkImageManager::EImageManagerState meState;

	// BrnNetworkImageManager.h:213
	BrnGameState::GameStateModuleIO::EImageType meImageTypeOfGamerPicToSave;

	// BrnNetworkImageManager.h:214
	BrnGameState::GameStateModuleIO::EImageType meImageTypeToSend;

	// BrnNetworkImageManager.h:215
	CgsID mRoadRuleBeatenID;

	// BrnNetworkImageManager.h:216
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkImageManager.h:217
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnNetworkImageManager.h:218
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkImageManager.h:219
	bool mbOutputMugshotData;

	// BrnNetworkImageManager.h:220
	bool mbBroadcastCurrentImage;

	// BrnNetworkImageManager.h:221
	bool mbAbortCaptureThisFrame;

	// BrnNetworkImageManager.h:222
	bool mbAbortShowThisFrame;

	// BrnNetworkImageManager.h:223
	bool mbMugshotsEnabled;

	// BrnNetworkImageManager.h:228
	BrnNetwork::ImageManagerDebugComponent mDebugComponent;

public:
	// BrnNetworkImageManager.h:87
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *, CgsNetwork::NetworkTextureDXTCompress *);

	// BrnNetworkImageManager.h:92
	bool Prepare(HeapMalloc *);

	// BrnNetworkImageManager.h:96
	bool Release();

	// BrnNetworkImageManager.h:100
	void Destruct();

	// BrnNetworkImageManager.h:105
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkImageManager.h:110
	void ProcessAfterSimulation(const PostSimulationInputBuffer *);

	// BrnNetworkImageManager.h:115
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:120
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:124
	void Disconnected();

	// BrnNetworkImageManager.h:129
	NetworkTexture * GetMugshotImageByAggressor(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:134
	RoadRulesRecvData::NetworkPlayerID GetMugshotVictimID(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:140
	NetworkTexture * GetPhotoFinishImageByRoundWinner(RoadRulesRecvData::NetworkPlayerID, bool *);

	// BrnNetworkImageManager.h:144
	void OnRoundStart();

	// BrnNetworkImageManager.h:148
	void HandlePlayerStoppedMode();

	// BrnNetworkImageManager.h:153
	void HandleRoundResults(const OnlineRoundResults *);

	// BrnNetworkImageManager.h:158
	void EnableMugshotOutput(bool);

private:
	// BrnNetworkImageManager.h:233
	void SendNextSegment();

	// BrnNetworkImageManager.h:237
	BrnNetwork::NetworkImageManager::MugshotData * GetImageDataToSend();

	// BrnNetworkImageManager.h:242
	BrnNetwork::NetworkImageManager::ImageMessageData * GetImageMessageDataEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:247
	BrnNetwork::NetworkImageManager::MugshotData * GetMugshotDataEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:252
	void ProcessNetworkEvents(const NetworkEventQueue *);

	// BrnNetworkImageManager.h:256
	void ProcessDirtyTrickEvents();

	// BrnNetworkImageManager.h:261
	void OutputMugshotData(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkImageManager.h:266
	void HandleMugshotEvent(const NetworkInPaybackMugshotEvent *);

	// BrnNetworkImageManager.h:270
	void HandleAbortingMugshotCapture();

	// BrnNetworkImageManager.h:277
	void SendMugshotPicture(RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:282
	void BroadcastImage(BrnNetwork::NetworkImageManager::MugshotData *);

	// BrnNetworkImageManager.h:288
	void ReceiveImageMessage(RoadRulesRecvData::NetworkPlayerID, BrnNetwork::ImageMessage *);

	// BrnNetworkImageManager.h:295
	void HandleReceivedCameraPic(RoadRulesRecvData::NetworkPlayerID, BrnNetwork::NetworkImageManager::MugshotData *, BrnGameState::GameStateModuleIO::EImageType);

	// BrnNetworkImageManager.h:300
	void HandleShowingMugshot(bool);

	// BrnNetworkImageManager.h:304
	BrnNetwork::NetworkImageManager::EMugshotPrivilege CheckMugshotPrivileges();

	// BrnNetworkImageManager.h:309
	void GetCompressedTexture(NetworkTexture *);

	// BrnNetworkImageManager.h:313
	void AbortMugshotCapture();

	// BrnNetworkImageManager.h:317
	void AbortMugshotShow();

	// BrnNetworkImageManager.h:322
	bool AreMugshotsDisabledForPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:326
	bool IsThereEnoughBandwidthToSend();

	// BrnNetworkImageManager.h:333
	void RequestMugshotSave(BrnNetwork::NetworkImageManager::MugshotData *, RoadRulesRecvData::NetworkPlayerID, BrnGameState::GameStateModuleIO::EImageType);

	// BrnNetworkImageManager.h:339
	void GetUniqueIDByPlayerID(RoadRulesRecvData::NetworkPlayerID, MugshotInfo::UniquePlayerID *);

	// BrnNetworkImageManager.h:346
	void _ImageMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkImageManager.h:355
	void _ImageMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkImageManager.h:361
	void _GetCompressedCameraPicCallback(void *, void *);

	// BrnNetworkImageManager.h:367
	void _GetCompressedGamerPicCallback(void *, void *);

}

// BrnNetworkImageManager.h:78
struct BrnNetwork::NetworkImageManager {
private:
	// BrnNetworkImageManager.h:208
	BrnNetwork::NetworkImageManager::MugshotData[8] maMugshotData;

	// BrnNetworkImageManager.h:209
	BrnNetwork::NetworkImageManager::ImageMessageData[7] maImageData;

	// BrnNetworkImageManager.h:210
	RoadRulesRecvData::NetworkPlayerID mTakedownVictimPlayerID;

	// BrnNetworkImageManager.h:211
	RoadRulesRecvData::NetworkPlayerID mTakedownAggressorPlayerID;

	// BrnNetworkImageManager.h:212
	BrnNetwork::NetworkImageManager::EImageManagerState meState;

	// BrnNetworkImageManager.h:213
	BrnGameState::GameStateModuleIO::EImageType meImageTypeOfGamerPicToSave;

	// BrnNetworkImageManager.h:214
	BrnGameState::GameStateModuleIO::EImageType meImageTypeToSend;

	// BrnNetworkImageManager.h:215
	CgsID mRoadRuleBeatenID;

	// BrnNetworkImageManager.h:216
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkImageManager.h:217
	CgsNetwork::PlayerManager * mpPlayerManager;

	// BrnNetworkImageManager.h:218
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkImageManager.h:219
	bool mbOutputMugshotData;

	// BrnNetworkImageManager.h:220
	bool mbBroadcastCurrentImage;

	// BrnNetworkImageManager.h:221
	bool mbAbortCaptureThisFrame;

	// BrnNetworkImageManager.h:222
	bool mbAbortShowThisFrame;

	// BrnNetworkImageManager.h:223
	bool mbMugshotsEnabled;

	// BrnNetworkImageManager.h:228
	BrnNetwork::ImageManagerDebugComponent mDebugComponent;

public:
	// BrnNetworkImageManager.h:87
	void Construct(BrnNetwork::BrnNetworkModule *, CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *, CgsNetwork::NetworkTextureDXTCompress *);

	// BrnNetworkImageManager.h:92
	bool Prepare(HeapMalloc *);

	// BrnNetworkImageManager.h:96
	bool Release();

	// BrnNetworkImageManager.h:100
	void Destruct();

	// BrnNetworkImageManager.h:105
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkImageManager.h:110
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkImageManager.h:115
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:120
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:124
	void Disconnected();

	// BrnNetworkImageManager.h:129
	CgsNetwork::NetworkTexture * GetMugshotImageByAggressor(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:134
	RoadRulesRecvData::NetworkPlayerID GetMugshotVictimID(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:140
	CgsNetwork::NetworkTexture * GetPhotoFinishImageByRoundWinner(RoadRulesRecvData::NetworkPlayerID, bool *);

	// BrnNetworkImageManager.h:144
	void OnRoundStart();

	// BrnNetworkImageManager.h:148
	void HandlePlayerStoppedMode();

	// BrnNetworkImageManager.h:153
	void HandleRoundResults(const OnlineRoundResults *);

	// BrnNetworkImageManager.h:158
	void EnableMugshotOutput(bool);

private:
	// BrnNetworkImageManager.h:233
	void SendNextSegment();

	// BrnNetworkImageManager.h:237
	BrnNetwork::NetworkImageManager::MugshotData * GetImageDataToSend();

	// BrnNetworkImageManager.h:242
	BrnNetwork::NetworkImageManager::ImageMessageData * GetImageMessageDataEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:247
	BrnNetwork::NetworkImageManager::MugshotData * GetMugshotDataEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:252
	void ProcessNetworkEvents(const NetworkEventQueue *);

	// BrnNetworkImageManager.h:256
	void ProcessDirtyTrickEvents();

	// BrnNetworkImageManager.h:261
	void OutputMugshotData(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkImageManager.h:266
	void HandleMugshotEvent(const NetworkInPaybackMugshotEvent *);

	// BrnNetworkImageManager.h:270
	void HandleAbortingMugshotCapture();

	// BrnNetworkImageManager.h:277
	void SendMugshotPicture(RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:282
	void BroadcastImage(BrnNetwork::NetworkImageManager::MugshotData *);

	// BrnNetworkImageManager.h:288
	void ReceiveImageMessage(RoadRulesRecvData::NetworkPlayerID, BrnNetwork::ImageMessage *);

	// BrnNetworkImageManager.h:295
	void HandleReceivedCameraPic(RoadRulesRecvData::NetworkPlayerID, BrnNetwork::NetworkImageManager::MugshotData *, BrnGameState::GameStateModuleIO::EImageType);

	// BrnNetworkImageManager.h:300
	void HandleShowingMugshot(bool);

	// BrnNetworkImageManager.h:304
	BrnNetwork::NetworkImageManager::EMugshotPrivilege CheckMugshotPrivileges();

	// BrnNetworkImageManager.h:309
	void GetCompressedTexture(CgsNetwork::NetworkTexture *);

	// BrnNetworkImageManager.h:313
	void AbortMugshotCapture();

	// BrnNetworkImageManager.h:317
	void AbortMugshotShow();

	// BrnNetworkImageManager.h:322
	bool AreMugshotsDisabledForPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkImageManager.h:326
	bool IsThereEnoughBandwidthToSend();

	// BrnNetworkImageManager.h:333
	void RequestMugshotSave(BrnNetwork::NetworkImageManager::MugshotData *, RoadRulesRecvData::NetworkPlayerID, BrnGameState::GameStateModuleIO::EImageType);

	// BrnNetworkImageManager.h:339
	void GetUniqueIDByPlayerID(RoadRulesRecvData::NetworkPlayerID, LiveRevengeRelationship::UniquePlayerID *);

	// BrnNetworkImageManager.h:346
	void _ImageMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkImageManager.h:355
	void _ImageMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkImageManager.h:361
	void _GetCompressedCameraPicCallback(void *, void *);

	// BrnNetworkImageManager.h:367
	void _GetCompressedGamerPicCallback(void *, void *);

}

