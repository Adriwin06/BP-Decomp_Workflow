// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct CameraPS3 {
		// BrnNetworkCameraPS3.h:166
		struct CameraFeedRequestDelayTimer {
			// BrnNetworkCameraPS3.h:168
			Time mSelectedTime;

			// BrnNetworkCameraPS3.h:169
			RoadRulesRecvData::NetworkPlayerID mSelectedPlayerID;

		}

		// BrnNetworkCameraPS3.h:182
		struct Machine {
			// BrnNetworkCameraPS3.h:188
			enum ETimeState {
				E_WAIT_STATE_1 = 0,
				E_WAIT_STATE_2 = 1,
				E_STATE_TIME_SET = 2,
			}

			// BrnNetworkCameraPS3.h:185
			int32_t miIPAddress;

			// BrnNetworkCameraPS3.h:186
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkCameraPS3.h:195
			BrnNetwork::CameraPS3::Machine::ETimeState meLastPictureDecodeState;

			// BrnNetworkCameraPS3.h:196
			BrnNetwork::CameraPS3::Machine::ETimeState meLastDataReceivedState;

			// BrnNetworkCameraPS3.h:198
			Time mLastDataReceivedTime;

			// BrnNetworkCameraPS3.h:199
			Time mLastPictureDecodeTime;

			// BrnNetworkCameraPS3.h:201
			NetworkTexture mCameraPicture;

			// BrnNetworkCameraPS3.h:203
			bool mbSendToPlayer;

			// BrnNetworkCameraPS3.h:204
			bool mbReceiveFromPlayer;

			// BrnNetworkCameraPS3.h:206
			BrnNetwork::CameraStatusMessage mStatusMessageSend;

			// BrnNetworkCameraPS3.h:207
			BrnNetwork::CameraStatusMessage mStatusMessageRecv;

			// BrnNetworkCameraPS3.h:208
			BrnNetwork::CameraRequestMessage mRequestMessageSend;

			// BrnNetworkCameraPS3.h:209
			BrnNetwork::CameraRequestMessage mRequestMessageRecv;

			// BrnNetworkCameraPS3.h:210
			BrnNetwork::CameraRequestResponseMessage mRequestResponseMessageSend;

			// BrnNetworkCameraPS3.h:211
			BrnNetwork::CameraRequestResponseMessage mRequestResponseMessageRecv;

		}

	}

}

// BrnNetworkCameraPS3.h:61
struct BrnNetwork::CameraPS3 {
private:
	// BrnNetworkCameraPS3.h:146
	extern const uint64_t KU64_UV_MASK;

	// BrnNetworkCameraPS3.h:148
	extern const uint64_t KU64_Y_MASK;

	// BrnNetworkCameraPS3.h:149
	extern const uint64_t KU64_Y_SHIFT;

	// BrnNetworkCameraPS3.h:151
	extern const uint64_t KU64_LOWER_BITS_MASK;

	// BrnNetworkCameraPS3.h:153
	extern const uint64_t KU64_Y_MULSCALE;

	// BrnNetworkCameraPS3.h:155
	extern const uint64_t KU64_Y_BITS;

	// BrnNetworkCameraPS3.h:214
	extern const int32_t KI_MAX_NUM_VIDEO_PACKETS = 256;

	// BrnNetworkCameraPS3.h:215
	extern const int32_t KI_MAX_PLAYERS_TO_SEND_TO = 3;

	// BrnNetworkCameraPS3.h:217
	extern const int32_t KI_MAX_REMOTE_CONSOLES = 4;

	// BrnNetworkCameraPS3.h:218
	extern const int32_t KI_MAX_ALLOWABLE_PLAYERS = 8;

	// BrnNetworkCameraPS3.h:220
	BrnNetwork::CameraPS3::Machine[8] maPlayers;

	// BrnNetworkCameraPS3.h:222
	NetworkTexture mLocalCameraPicture;

	// BrnNetworkCameraPS3.h:224
	int32_t miNumPlayersSendingTo;

	// BrnNetworkCameraPS3.h:226
	BrnNetwork::CameraPS3::CameraFeedRequestDelayTimer mCameraFeedRequestDelayTimer;

	// BrnNetworkCameraPS3.h:228
	WebcamPS3 mWebcam;

	// BrnNetworkCameraPS3.h:230
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkCameraPS3.h:231
	CgsNetwork::NetworkTextureDXTCompress * mpTextureCompressor;

	// BrnNetworkCameraPS3.h:233
	BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions meCameraUserSetting;

	// BrnNetworkCameraPS3.h:234
	bool mbPrepared;

	// BrnNetworkCameraPS3.h:235
	bool mbGameEnabled;

	// BrnNetworkCameraPS3.h:236
	bool mbSendCameraStatus;

	// BrnNetworkCameraPS3.h:239
	int32_t miCameraDownsamplePM;

public:
	// BrnNetworkCameraPS3.h:67
	void Construct(BrnNetwork::BrnNetworkManager *, CgsNetwork::NetworkTextureDXTCompress *);

	// BrnNetworkCameraPS3.h:71
	bool Prepare(HeapMalloc *);

	// BrnNetworkCameraPS3.h:74
	bool Release();

	// BrnNetworkCameraPS3.h:77
	void Destruct();

	// BrnNetworkCameraPS3.h:80
	void Update();

	// BrnNetworkCameraPS3.h:83
	void Disconnected();

	// BrnNetworkCameraPS3.h:86
	void OnGameStart();

	// BrnNetworkCameraPS3.h:89
	const NetworkTexture * GetRequestedCameraPicture();

	// BrnNetworkCameraPS3.h:93
	const NetworkTexture * GetCameraPicture(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:101
	void GetCompressedLocalCameraPicture(NetworkTexture *, int32_t, NetworkTextureDXTCompress::CompressionCompleteCallback, void *);

	// BrnNetworkCameraPS3.h:105
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:109
	void PlayerFinalised(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:113
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:117
	void RequestFeed(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:121
	void ReleaseFeed(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:124
	RoadRulesRecvData::NetworkPlayerID GetRequestedPlayerID() const;

	// BrnNetworkCameraPS3.h:128
	void SetUserSetting(BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions);

	// BrnNetworkCameraPS3.h:132
	void SetGameEnabled(bool);

	// BrnNetworkCameraPS3.h:135
	BrnNetwork::ECameraStatus GetLocalCameraStatus();

	// BrnNetworkCameraPS3.h:138
	bool GetFriendsOnlySetting() const;

	// BrnNetworkCameraPS3.h:142
	void SendCameraStatusMessages(bool);

private:
	// BrnNetworkCameraPS3.h:244
	BrnNetwork::CameraPS3::Machine * GetMachineEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:248
	void PrepareTextures(HeapMalloc *);

	// BrnNetworkCameraPS3.h:251
	void RequestFeed();

	// BrnNetworkCameraPS3.h:254
	void ResetRemotePlayers();

	// BrnNetworkCameraPS3.h:257
	void GetRemoteCameraPictures();

	// BrnNetworkCameraPS3.h:260
	void GetLocalCameraPicture();

	// BrnNetworkCameraPS3.h:263
	void UpdateCameraStatus();

	// BrnNetworkCameraPS3.h:267
	bool IsPlayerRegistered(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:271
	void UnregisterPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:278
	void _RequestMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkCameraPS3.h:287
	void _RequestMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkCameraPS3.h:294
	void _RequestResponseMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkCameraPS3.h:303
	void _RequestResponseMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

}

// BrnNetworkCameraPS3.h:146
extern const uint64_t KU64_UV_MASK;

// BrnNetworkCameraPS3.h:148
extern const uint64_t KU64_Y_MASK;

// BrnNetworkCameraPS3.h:149
extern const uint64_t KU64_Y_SHIFT;

// BrnNetworkCameraPS3.h:151
extern const uint64_t KU64_LOWER_BITS_MASK;

// BrnNetworkCameraPS3.h:153
extern const uint64_t KU64_Y_MULSCALE;

// BrnNetworkCameraPS3.h:155
extern const uint64_t KU64_Y_BITS;

// BrnNetworkCameraPS3.h:215
extern const int32_t KI_MAX_PLAYERS_TO_SEND_TO = 3;

// BrnNetworkCameraPS3.h:218
extern const int32_t KI_MAX_ALLOWABLE_PLAYERS = 8;

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct CameraPS3 {
		// BrnNetworkCameraPS3.h:166
		struct CameraFeedRequestDelayTimer {
			// BrnNetworkCameraPS3.h:168
			Time mSelectedTime;

			// BrnNetworkCameraPS3.h:169
			GuiEventNetworkLaunching::NetworkPlayerID mSelectedPlayerID;

		}

		// BrnNetworkCameraPS3.h:182
		struct Machine {
			// BrnNetworkCameraPS3.h:188
			enum ETimeState {
				E_WAIT_STATE_1 = 0,
				E_WAIT_STATE_2 = 1,
				E_STATE_TIME_SET = 2,
			}

			// BrnNetworkCameraPS3.h:185
			int32_t miIPAddress;

			// BrnNetworkCameraPS3.h:186
			GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

			// BrnNetworkCameraPS3.h:195
			BrnNetwork::CameraPS3::Machine::ETimeState meLastPictureDecodeState;

			// BrnNetworkCameraPS3.h:196
			BrnNetwork::CameraPS3::Machine::ETimeState meLastDataReceivedState;

			// BrnNetworkCameraPS3.h:198
			Time mLastDataReceivedTime;

			// BrnNetworkCameraPS3.h:199
			Time mLastPictureDecodeTime;

			// BrnNetworkCameraPS3.h:201
			NetworkTexture mCameraPicture;

			// BrnNetworkCameraPS3.h:203
			bool mbSendToPlayer;

			// BrnNetworkCameraPS3.h:204
			bool mbReceiveFromPlayer;

			// BrnNetworkCameraPS3.h:206
			BrnNetwork::CameraStatusMessage mStatusMessageSend;

			// BrnNetworkCameraPS3.h:207
			BrnNetwork::CameraStatusMessage mStatusMessageRecv;

			// BrnNetworkCameraPS3.h:208
			BrnNetwork::CameraRequestMessage mRequestMessageSend;

			// BrnNetworkCameraPS3.h:209
			BrnNetwork::CameraRequestMessage mRequestMessageRecv;

			// BrnNetworkCameraPS3.h:210
			BrnNetwork::CameraRequestResponseMessage mRequestResponseMessageSend;

			// BrnNetworkCameraPS3.h:211
			BrnNetwork::CameraRequestResponseMessage mRequestResponseMessageRecv;

		}

	}

}

// BrnNetworkCameraPS3.h:61
struct BrnNetwork::CameraPS3 {
private:
	// BrnNetworkCameraPS3.h:146
	extern const uint64_t KU64_UV_MASK;

	// BrnNetworkCameraPS3.h:148
	extern const uint64_t KU64_Y_MASK;

	// BrnNetworkCameraPS3.h:149
	extern const uint64_t KU64_Y_SHIFT;

	// BrnNetworkCameraPS3.h:151
	extern const uint64_t KU64_LOWER_BITS_MASK;

	// BrnNetworkCameraPS3.h:153
	extern const uint64_t KU64_Y_MULSCALE;

	// BrnNetworkCameraPS3.h:155
	extern const uint64_t KU64_Y_BITS;

	// BrnNetworkCameraPS3.h:214
	extern const int32_t KI_MAX_NUM_VIDEO_PACKETS = 256;

	// BrnNetworkCameraPS3.h:215
	extern const int32_t KI_MAX_PLAYERS_TO_SEND_TO = 3;

	// BrnNetworkCameraPS3.h:217
	extern const int32_t KI_MAX_REMOTE_CONSOLES = 4;

	// BrnNetworkCameraPS3.h:218
	extern const int32_t KI_MAX_ALLOWABLE_PLAYERS = 8;

	// BrnNetworkCameraPS3.h:220
	BrnNetwork::CameraPS3::Machine[8] maPlayers;

	// BrnNetworkCameraPS3.h:222
	NetworkTexture mLocalCameraPicture;

	// BrnNetworkCameraPS3.h:224
	int32_t miNumPlayersSendingTo;

	// BrnNetworkCameraPS3.h:226
	BrnNetwork::CameraPS3::CameraFeedRequestDelayTimer mCameraFeedRequestDelayTimer;

	// BrnNetworkCameraPS3.h:228
	WebcamPS3 mWebcam;

	// BrnNetworkCameraPS3.h:230
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkCameraPS3.h:231
	CgsNetwork::NetworkTextureDXTCompress * mpTextureCompressor;

	// BrnNetworkCameraPS3.h:233
	BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions meCameraUserSetting;

	// BrnNetworkCameraPS3.h:234
	bool mbPrepared;

	// BrnNetworkCameraPS3.h:235
	bool mbGameEnabled;

	// BrnNetworkCameraPS3.h:236
	bool mbSendCameraStatus;

	// BrnNetworkCameraPS3.h:239
	int32_t miCameraDownsamplePM;

public:
	// BrnNetworkCameraPS3.h:67
	void Construct(BrnNetwork::BrnNetworkManager *, CgsNetwork::NetworkTextureDXTCompress *);

	// BrnNetworkCameraPS3.h:71
	bool Prepare(CgsMemory::HeapMalloc *);

	// BrnNetworkCameraPS3.h:74
	bool Release();

	// BrnNetworkCameraPS3.h:77
	void Destruct();

	// BrnNetworkCameraPS3.h:80
	void Update();

	// BrnNetworkCameraPS3.h:83
	void Disconnected();

	// BrnNetworkCameraPS3.h:86
	void OnGameStart();

	// BrnNetworkCameraPS3.h:89
	const NetworkTexture * GetRequestedCameraPicture();

	// BrnNetworkCameraPS3.h:93
	const NetworkTexture * GetCameraPicture(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:101
	void GetCompressedLocalCameraPicture(NetworkTexture *, int32_t, NetworkTextureDXTCompress::CompressionCompleteCallback, void *);

	// BrnNetworkCameraPS3.h:105
	void AddPlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:109
	void PlayerFinalised(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:113
	void RemovePlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:117
	void RequestFeed(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:121
	void ReleaseFeed(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:124
	GuiEventNetworkLaunching::NetworkPlayerID GetRequestedPlayerID() const;

	// BrnNetworkCameraPS3.h:128
	void SetUserSetting(BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions);

	// BrnNetworkCameraPS3.h:132
	void SetGameEnabled(bool);

	// BrnNetworkCameraPS3.h:135
	BrnNetwork::ECameraStatus GetLocalCameraStatus();

	// BrnNetworkCameraPS3.h:138
	bool GetFriendsOnlySetting() const;

	// BrnNetworkCameraPS3.h:142
	void SendCameraStatusMessages(bool);

private:
	// BrnNetworkCameraPS3.h:244
	BrnNetwork::CameraPS3::Machine * GetMachineEntry(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:248
	void PrepareTextures(CgsMemory::HeapMalloc *);

	// BrnNetworkCameraPS3.h:251
	void RequestFeed();

	// BrnNetworkCameraPS3.h:254
	void ResetRemotePlayers();

	// BrnNetworkCameraPS3.h:257
	void GetRemoteCameraPictures();

	// BrnNetworkCameraPS3.h:260
	void GetLocalCameraPicture();

	// BrnNetworkCameraPS3.h:263
	void UpdateCameraStatus();

	// BrnNetworkCameraPS3.h:267
	bool IsPlayerRegistered(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:271
	void UnregisterPlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:278
	void _RequestMessageArrivedCallback(CgsNetwork::ReliableMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnNetworkCameraPS3.h:287
	void _RequestMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnNetworkCameraPS3.h:294
	void _RequestResponseMessageArrivedCallback(CgsNetwork::ReliableMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnNetworkCameraPS3.h:303
	void _RequestResponseMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct CameraPS3 {
		// BrnNetworkCameraPS3.h:166
		struct CameraFeedRequestDelayTimer {
			// BrnNetworkCameraPS3.h:168
			Time mSelectedTime;

			// BrnNetworkCameraPS3.h:169
			RoadRulesRecvData::NetworkPlayerID mSelectedPlayerID;

		}

		// BrnNetworkCameraPS3.h:182
		struct Machine {
			// BrnNetworkCameraPS3.h:188
			enum ETimeState {
				E_WAIT_STATE_1 = 0,
				E_WAIT_STATE_2 = 1,
				E_STATE_TIME_SET = 2,
			}

			// BrnNetworkCameraPS3.h:185
			int32_t miIPAddress;

			// BrnNetworkCameraPS3.h:186
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkCameraPS3.h:195
			BrnNetwork::CameraPS3::Machine::ETimeState meLastPictureDecodeState;

			// BrnNetworkCameraPS3.h:196
			BrnNetwork::CameraPS3::Machine::ETimeState meLastDataReceivedState;

			// BrnNetworkCameraPS3.h:198
			Time mLastDataReceivedTime;

			// BrnNetworkCameraPS3.h:199
			Time mLastPictureDecodeTime;

			// BrnNetworkCameraPS3.h:201
			NetworkTexture mCameraPicture;

			// BrnNetworkCameraPS3.h:203
			bool mbSendToPlayer;

			// BrnNetworkCameraPS3.h:204
			bool mbReceiveFromPlayer;

			// BrnNetworkCameraPS3.h:206
			BrnNetwork::CameraStatusMessage mStatusMessageSend;

			// BrnNetworkCameraPS3.h:207
			BrnNetwork::CameraStatusMessage mStatusMessageRecv;

			// BrnNetworkCameraPS3.h:208
			BrnNetwork::CameraRequestMessage mRequestMessageSend;

			// BrnNetworkCameraPS3.h:209
			BrnNetwork::CameraRequestMessage mRequestMessageRecv;

			// BrnNetworkCameraPS3.h:210
			BrnNetwork::CameraRequestResponseMessage mRequestResponseMessageSend;

			// BrnNetworkCameraPS3.h:211
			BrnNetwork::CameraRequestResponseMessage mRequestResponseMessageRecv;

		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct CameraPS3 {
		// BrnNetworkCameraPS3.h:166
		struct CameraFeedRequestDelayTimer {
			// BrnNetworkCameraPS3.h:168
			Time mSelectedTime;

			// BrnNetworkCameraPS3.h:169
			AggressiveMoveData::NetworkPlayerID mSelectedPlayerID;

		}

		// BrnNetworkCameraPS3.h:182
		struct Machine {
			// BrnNetworkCameraPS3.h:188
			enum ETimeState {
				E_WAIT_STATE_1 = 0,
				E_WAIT_STATE_2 = 1,
				E_STATE_TIME_SET = 2,
			}

			// BrnNetworkCameraPS3.h:185
			int32_t miIPAddress;

			// BrnNetworkCameraPS3.h:186
			AggressiveMoveData::NetworkPlayerID mPlayerID;

			// BrnNetworkCameraPS3.h:195
			BrnNetwork::CameraPS3::Machine::ETimeState meLastPictureDecodeState;

			// BrnNetworkCameraPS3.h:196
			BrnNetwork::CameraPS3::Machine::ETimeState meLastDataReceivedState;

			// BrnNetworkCameraPS3.h:198
			Time mLastDataReceivedTime;

			// BrnNetworkCameraPS3.h:199
			Time mLastPictureDecodeTime;

			// BrnNetworkCameraPS3.h:201
			NetworkTexture mCameraPicture;

			// BrnNetworkCameraPS3.h:203
			bool mbSendToPlayer;

			// BrnNetworkCameraPS3.h:204
			bool mbReceiveFromPlayer;

			// BrnNetworkCameraPS3.h:206
			BrnNetwork::CameraStatusMessage mStatusMessageSend;

			// BrnNetworkCameraPS3.h:207
			BrnNetwork::CameraStatusMessage mStatusMessageRecv;

			// BrnNetworkCameraPS3.h:208
			BrnNetwork::CameraRequestMessage mRequestMessageSend;

			// BrnNetworkCameraPS3.h:209
			BrnNetwork::CameraRequestMessage mRequestMessageRecv;

			// BrnNetworkCameraPS3.h:210
			BrnNetwork::CameraRequestResponseMessage mRequestResponseMessageSend;

			// BrnNetworkCameraPS3.h:211
			BrnNetwork::CameraRequestResponseMessage mRequestResponseMessageRecv;

		}

	}

}

// BrnNetworkCameraPS3.h:61
struct BrnNetwork::CameraPS3 {
private:
	// BrnNetworkCameraPS3.h:146
	extern const uint64_t KU64_UV_MASK;

	// BrnNetworkCameraPS3.h:148
	extern const uint64_t KU64_Y_MASK;

	// BrnNetworkCameraPS3.h:149
	extern const uint64_t KU64_Y_SHIFT;

	// BrnNetworkCameraPS3.h:151
	extern const uint64_t KU64_LOWER_BITS_MASK;

	// BrnNetworkCameraPS3.h:153
	extern const uint64_t KU64_Y_MULSCALE;

	// BrnNetworkCameraPS3.h:155
	extern const uint64_t KU64_Y_BITS;

	// BrnNetworkCameraPS3.h:214
	extern const int32_t KI_MAX_NUM_VIDEO_PACKETS = 256;

	// BrnNetworkCameraPS3.h:215
	extern const int32_t KI_MAX_PLAYERS_TO_SEND_TO = 3;

	// BrnNetworkCameraPS3.h:217
	extern const int32_t KI_MAX_REMOTE_CONSOLES = 4;

	// BrnNetworkCameraPS3.h:218
	extern const int32_t KI_MAX_ALLOWABLE_PLAYERS = 8;

	// BrnNetworkCameraPS3.h:220
	BrnNetwork::CameraPS3::Machine[8] maPlayers;

	// BrnNetworkCameraPS3.h:222
	NetworkTexture mLocalCameraPicture;

	// BrnNetworkCameraPS3.h:224
	int32_t miNumPlayersSendingTo;

	// BrnNetworkCameraPS3.h:226
	BrnNetwork::CameraPS3::CameraFeedRequestDelayTimer mCameraFeedRequestDelayTimer;

	// BrnNetworkCameraPS3.h:228
	WebcamPS3 mWebcam;

	// BrnNetworkCameraPS3.h:230
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkCameraPS3.h:231
	CgsNetwork::NetworkTextureDXTCompress * mpTextureCompressor;

	// BrnNetworkCameraPS3.h:233
	BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions meCameraUserSetting;

	// BrnNetworkCameraPS3.h:234
	bool mbPrepared;

	// BrnNetworkCameraPS3.h:235
	bool mbGameEnabled;

	// BrnNetworkCameraPS3.h:236
	bool mbSendCameraStatus;

	// BrnNetworkCameraPS3.h:239
	int32_t miCameraDownsamplePM;

public:
	// BrnNetworkCameraPS3.h:67
	void Construct(BrnNetwork::BrnNetworkManager *, CgsNetwork::NetworkTextureDXTCompress *);

	// BrnNetworkCameraPS3.h:71
	bool Prepare(HeapMalloc *);

	// BrnNetworkCameraPS3.h:74
	bool Release();

	// BrnNetworkCameraPS3.h:77
	void Destruct();

	// BrnNetworkCameraPS3.h:80
	void Update();

	// BrnNetworkCameraPS3.h:83
	void Disconnected();

	// BrnNetworkCameraPS3.h:86
	void OnGameStart();

	// BrnNetworkCameraPS3.h:89
	const NetworkTexture * GetRequestedCameraPicture();

	// BrnNetworkCameraPS3.h:93
	const NetworkTexture * GetCameraPicture(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:101
	void GetCompressedLocalCameraPicture(NetworkTexture *, int32_t, NetworkTextureDXTCompress::CompressionCompleteCallback, void *);

	// BrnNetworkCameraPS3.h:105
	void AddPlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:109
	void PlayerFinalised(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:113
	void RemovePlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:117
	void RequestFeed(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:121
	void ReleaseFeed(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:124
	AggressiveMoveData::NetworkPlayerID GetRequestedPlayerID() const;

	// BrnNetworkCameraPS3.h:128
	void SetUserSetting(BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions);

	// BrnNetworkCameraPS3.h:132
	void SetGameEnabled(bool);

	// BrnNetworkCameraPS3.h:135
	BrnNetwork::ECameraStatus GetLocalCameraStatus();

	// BrnNetworkCameraPS3.h:138
	bool GetFriendsOnlySetting() const;

	// BrnNetworkCameraPS3.h:142
	void SendCameraStatusMessages(bool);

private:
	// BrnNetworkCameraPS3.h:244
	BrnNetwork::CameraPS3::Machine * GetMachineEntry(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:248
	void PrepareTextures(HeapMalloc *);

	// BrnNetworkCameraPS3.h:251
	void RequestFeed();

	// BrnNetworkCameraPS3.h:254
	void ResetRemotePlayers();

	// BrnNetworkCameraPS3.h:257
	void GetRemoteCameraPictures();

	// BrnNetworkCameraPS3.h:260
	void GetLocalCameraPicture();

	// BrnNetworkCameraPS3.h:263
	void UpdateCameraStatus();

	// BrnNetworkCameraPS3.h:267
	bool IsPlayerRegistered(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:271
	void UnregisterPlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:278
	void _RequestMessageArrivedCallback(CgsNetwork::ReliableMessage *, AggressiveMoveData::NetworkPlayerID, void *);

	// BrnNetworkCameraPS3.h:287
	void _RequestMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, AggressiveMoveData::NetworkPlayerID, void *);

	// BrnNetworkCameraPS3.h:294
	void _RequestResponseMessageArrivedCallback(CgsNetwork::ReliableMessage *, AggressiveMoveData::NetworkPlayerID, void *);

	// BrnNetworkCameraPS3.h:303
	void _RequestResponseMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, AggressiveMoveData::NetworkPlayerID, void *);

}

// BrnNetworkCameraPS3.h:61
struct BrnNetwork::CameraPS3 {
private:
	// BrnNetworkCameraPS3.h:146
	extern const uint64_t KU64_UV_MASK;

	// BrnNetworkCameraPS3.h:148
	extern const uint64_t KU64_Y_MASK;

	// BrnNetworkCameraPS3.h:149
	extern const uint64_t KU64_Y_SHIFT;

	// BrnNetworkCameraPS3.h:151
	extern const uint64_t KU64_LOWER_BITS_MASK;

	// BrnNetworkCameraPS3.h:153
	extern const uint64_t KU64_Y_MULSCALE;

	// BrnNetworkCameraPS3.h:155
	extern const uint64_t KU64_Y_BITS;

	// BrnNetworkCameraPS3.h:214
	extern const int32_t KI_MAX_NUM_VIDEO_PACKETS = 256;

	// BrnNetworkCameraPS3.h:215
	extern const int32_t KI_MAX_PLAYERS_TO_SEND_TO = 3;

	// BrnNetworkCameraPS3.h:217
	extern const int32_t KI_MAX_REMOTE_CONSOLES = 4;

	// BrnNetworkCameraPS3.h:218
	extern const int32_t KI_MAX_ALLOWABLE_PLAYERS = 8;

	// BrnNetworkCameraPS3.h:220
	BrnNetwork::CameraPS3::Machine[8] maPlayers;

	// BrnNetworkCameraPS3.h:222
	NetworkTexture mLocalCameraPicture;

	// BrnNetworkCameraPS3.h:224
	int32_t miNumPlayersSendingTo;

	// BrnNetworkCameraPS3.h:226
	BrnNetwork::CameraPS3::CameraFeedRequestDelayTimer mCameraFeedRequestDelayTimer;

	// BrnNetworkCameraPS3.h:228
	WebcamPS3 mWebcam;

	// BrnNetworkCameraPS3.h:230
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkCameraPS3.h:231
	CgsNetwork::NetworkTextureDXTCompress * mpTextureCompressor;

	// BrnNetworkCameraPS3.h:233
	BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions meCameraUserSetting;

	// BrnNetworkCameraPS3.h:234
	bool mbPrepared;

	// BrnNetworkCameraPS3.h:235
	bool mbGameEnabled;

	// BrnNetworkCameraPS3.h:236
	bool mbSendCameraStatus;

	// BrnNetworkCameraPS3.h:239
	int32_t miCameraDownsamplePM;

public:
	// BrnNetworkCameraPS3.h:67
	void Construct(BrnNetwork::BrnNetworkManager *, CgsNetwork::NetworkTextureDXTCompress *);

	// BrnNetworkCameraPS3.h:71
	bool Prepare(HeapMalloc *);

	// BrnNetworkCameraPS3.h:74
	bool Release();

	// BrnNetworkCameraPS3.h:77
	void Destruct();

	// BrnNetworkCameraPS3.h:80
	void Update();

	// BrnNetworkCameraPS3.h:83
	void Disconnected();

	// BrnNetworkCameraPS3.h:86
	void OnGameStart();

	// BrnNetworkCameraPS3.h:89
	const NetworkTexture * GetRequestedCameraPicture();

	// BrnNetworkCameraPS3.h:93
	const NetworkTexture * GetCameraPicture(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:101
	void GetCompressedLocalCameraPicture(NetworkTexture *, int32_t, NetworkTextureDXTCompress::CompressionCompleteCallback, void *);

	// BrnNetworkCameraPS3.h:105
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:109
	void PlayerFinalised(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:113
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:117
	void RequestFeed(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:121
	void ReleaseFeed(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:124
	RoadRulesRecvData::NetworkPlayerID GetRequestedPlayerID() const;

	// BrnNetworkCameraPS3.h:128
	void SetUserSetting(BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions);

	// BrnNetworkCameraPS3.h:132
	void SetGameEnabled(bool);

	// BrnNetworkCameraPS3.h:135
	BrnNetwork::ECameraStatus GetLocalCameraStatus();

	// BrnNetworkCameraPS3.h:138
	bool GetFriendsOnlySetting() const;

	// BrnNetworkCameraPS3.h:142
	void SendCameraStatusMessages(bool);

private:
	// BrnNetworkCameraPS3.h:244
	BrnNetwork::CameraPS3::Machine * GetMachineEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:248
	void PrepareTextures(HeapMalloc *);

	// BrnNetworkCameraPS3.h:251
	void RequestFeed();

	// BrnNetworkCameraPS3.h:254
	void ResetRemotePlayers();

	// BrnNetworkCameraPS3.h:257
	void GetRemoteCameraPictures();

	// BrnNetworkCameraPS3.h:260
	void GetLocalCameraPicture();

	// BrnNetworkCameraPS3.h:263
	void UpdateCameraStatus();

	// BrnNetworkCameraPS3.h:267
	bool IsPlayerRegistered(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:271
	void UnregisterPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:278
	void _RequestMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkCameraPS3.h:287
	// Declaration
	void _RequestMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkCameraPS3.cpp:1068
		using namespace CgsDev::Message;

	}

	// BrnNetworkCameraPS3.h:294
	void _RequestResponseMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkCameraPS3.h:303
	void _RequestResponseMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

}

// BrnNetworkCameraPS3.h:61
struct BrnNetwork::CameraPS3 {
private:
	// BrnNetworkCameraPS3.h:146
	extern const uint64_t KU64_UV_MASK;

	// BrnNetworkCameraPS3.h:148
	extern const uint64_t KU64_Y_MASK;

	// BrnNetworkCameraPS3.h:149
	extern const uint64_t KU64_Y_SHIFT;

	// BrnNetworkCameraPS3.h:151
	extern const uint64_t KU64_LOWER_BITS_MASK;

	// BrnNetworkCameraPS3.h:153
	extern const uint64_t KU64_Y_MULSCALE;

	// BrnNetworkCameraPS3.h:155
	extern const uint64_t KU64_Y_BITS;

	// BrnNetworkCameraPS3.h:214
	extern const int32_t KI_MAX_NUM_VIDEO_PACKETS = 256;

	// BrnNetworkCameraPS3.h:215
	extern const int32_t KI_MAX_PLAYERS_TO_SEND_TO = 3;

	// BrnNetworkCameraPS3.h:217
	extern const int32_t KI_MAX_REMOTE_CONSOLES = 4;

	// BrnNetworkCameraPS3.h:218
	extern const int32_t KI_MAX_ALLOWABLE_PLAYERS = 8;

	// BrnNetworkCameraPS3.h:220
	BrnNetwork::CameraPS3::Machine[8] maPlayers;

	// BrnNetworkCameraPS3.h:222
	NetworkTexture mLocalCameraPicture;

	// BrnNetworkCameraPS3.h:224
	int32_t miNumPlayersSendingTo;

	// BrnNetworkCameraPS3.h:226
	BrnNetwork::CameraPS3::CameraFeedRequestDelayTimer mCameraFeedRequestDelayTimer;

	// BrnNetworkCameraPS3.h:228
	WebcamPS3 mWebcam;

	// BrnNetworkCameraPS3.h:230
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkCameraPS3.h:231
	CgsNetwork::NetworkTextureDXTCompress * mpTextureCompressor;

	// BrnNetworkCameraPS3.h:233
	BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions meCameraUserSetting;

	// BrnNetworkCameraPS3.h:234
	bool mbPrepared;

	// BrnNetworkCameraPS3.h:235
	bool mbGameEnabled;

	// BrnNetworkCameraPS3.h:236
	bool mbSendCameraStatus;

	// BrnNetworkCameraPS3.h:239
	int32_t miCameraDownsamplePM;

public:
	// BrnNetworkCameraPS3.h:67
	void Construct(BrnNetwork::BrnNetworkManager *, CgsNetwork::NetworkTextureDXTCompress *);

	// BrnNetworkCameraPS3.h:71
	bool Prepare(HeapMalloc *);

	// BrnNetworkCameraPS3.h:74
	bool Release();

	// BrnNetworkCameraPS3.h:77
	void Destruct();

	// BrnNetworkCameraPS3.h:80
	void Update();

	// BrnNetworkCameraPS3.h:83
	void Disconnected();

	// BrnNetworkCameraPS3.h:86
	void OnGameStart();

	// BrnNetworkCameraPS3.h:89
	const NetworkTexture * GetRequestedCameraPicture();

	// BrnNetworkCameraPS3.h:93
	const NetworkTexture * GetCameraPicture(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:101
	void GetCompressedLocalCameraPicture(CgsNetwork::NetworkTexture *, int32_t, NetworkTextureDXTCompress::CompressionCompleteCallback, void *);

	// BrnNetworkCameraPS3.h:105
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:109
	void PlayerFinalised(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:113
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:117
	void RequestFeed(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:121
	void ReleaseFeed(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:124
	RoadRulesRecvData::NetworkPlayerID GetRequestedPlayerID() const;

	// BrnNetworkCameraPS3.h:128
	void SetUserSetting(BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions);

	// BrnNetworkCameraPS3.h:132
	void SetGameEnabled(bool);

	// BrnNetworkCameraPS3.h:135
	BrnNetwork::ECameraStatus GetLocalCameraStatus();

	// BrnNetworkCameraPS3.h:138
	bool GetFriendsOnlySetting() const;

	// BrnNetworkCameraPS3.h:142
	void SendCameraStatusMessages(bool);

private:
	// BrnNetworkCameraPS3.h:244
	BrnNetwork::CameraPS3::Machine * GetMachineEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:248
	void PrepareTextures(HeapMalloc *);

	// BrnNetworkCameraPS3.h:251
	void RequestFeed();

	// BrnNetworkCameraPS3.h:254
	void ResetRemotePlayers();

	// BrnNetworkCameraPS3.h:257
	void GetRemoteCameraPictures();

	// BrnNetworkCameraPS3.h:260
	void GetLocalCameraPicture();

	// BrnNetworkCameraPS3.h:263
	void UpdateCameraStatus();

	// BrnNetworkCameraPS3.h:267
	bool IsPlayerRegistered(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:271
	void UnregisterPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkCameraPS3.h:278
	void _RequestMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkCameraPS3.h:287
	void _RequestMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkCameraPS3.h:294
	void _RequestResponseMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkCameraPS3.h:303
	void _RequestResponseMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

}

