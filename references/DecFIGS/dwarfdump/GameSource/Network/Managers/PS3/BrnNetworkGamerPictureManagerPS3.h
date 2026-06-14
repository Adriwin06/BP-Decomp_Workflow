// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct GamerPictureManagerPS3 {
		// BrnNetworkGamerPictureManagerPS3.h:117
		enum EUserInfodownloadState {
			E_USER_INFO_DOWNLOAD_STATE_NP_ID = 0,
			E_USER_INFO_DOWNLOAD_STATE_USER_INFO = 1,
			E_USER_INFO_DOWNLOAD_STATE_MAX = 2,
		}

		// BrnNetworkGamerPictureManagerPS3.h:126
		struct GamerPictureData {
			// BrnNetworkGamerPictureManagerPS3.h:128
			SceNpUserInfo::SceNpAvatarUrl mAvatarUrl;

			// BrnNetworkGamerPictureManagerPS3.h:129
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkGamerPictureManagerPS3.h:130
			NetworkTexture mGamerPicture;

			// BrnNetworkGamerPictureManagerPS3.h:131
			CgsNetwork::BuddyManagerPS3::EPictureDownloadStatus meGamerPictureDownloaded;

		}

	}

}

// BrnNetworkGamerPictureManagerPS3.h:59
struct BrnNetwork::GamerPictureManagerPS3 {
private:
	// BrnNetworkGamerPictureManagerPS3.h:114
	extern const int32_t KI_GAMER_PICTURE_WIDTH;

	// BrnNetworkGamerPictureManagerPS3.h:115
	extern const int32_t KI_GAMER_PICTURE_HEIGHT;

	// BrnNetworkGamerPictureManagerPS3.h:134
	BrnNetwork::GamerPictureManagerPS3::GamerPictureData[7] maGamerPictureData;

	// BrnNetworkGamerPictureManagerPS3.h:135
	BrnNetwork::GamerPictureManagerPS3::GamerPictureData mLocalPlayerGamerPictureData;

	// BrnNetworkGamerPictureManagerPS3.h:137
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkGamerPictureManagerPS3.h:138
	HeapMalloc * mpHeapMalloc;

	// BrnNetworkGamerPictureManagerPS3.h:140
	CgsNetwork::BuddyManagerPS3::EPictureDownloadStatus meGamerPictureDownloaded;

	// BrnNetworkGamerPictureManagerPS3.h:141
	SceNpUserInfo::SceNpAvatarUrl * mpCurrentAvatarUrl;

	// BrnNetworkGamerPictureManagerPS3.h:143
	SceNpMatchingRoomMember::SceNpUserInfo mUserInfo;

	// BrnNetworkGamerPictureManagerPS3.h:144
	SceNpUserInfo::SceNpId mUserInfoNpID;

	// BrnNetworkGamerPictureManagerPS3.h:145
	SceNpId::SceNpOnlineId mOnlineId;

	// BrnNetworkGamerPictureManagerPS3.h:147
	RoadRulesRecvData::NetworkPlayerID mUserInfoPlayerID;

	// BrnNetworkGamerPictureManagerPS3.h:149
	BrnNetwork::GamerPictureManagerPS3::EUserInfodownloadState meUserInfoDownloadState;

	// BrnNetworkGamerPictureManagerPS3.h:150
	int32_t miUserInfoTransactionID;

	// BrnNetworkGamerPictureManagerPS3.h:152
	CgsNetwork::NetworkTextureDXTCompress * mpTextureCompressor;

	// BrnNetworkGamerPictureManagerPS3.h:154
	bool mbConnectedToNP;

public:
	// BrnNetworkGamerPictureManagerPS3.h:66
	void Construct(BrnNetwork::BrnNetworkManager *, CgsNetwork::NetworkTextureDXTCompress *);

	// BrnNetworkGamerPictureManagerPS3.h:71
	bool Prepare(HeapMalloc *);

	// BrnNetworkGamerPictureManagerPS3.h:75
	bool Release();

	// BrnNetworkGamerPictureManagerPS3.h:79
	void Destruct();

	// BrnNetworkGamerPictureManagerPS3.h:83
	void Update();

	// BrnNetworkGamerPictureManagerPS3.h:88
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkGamerPictureManagerPS3.h:93
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkGamerPictureManagerPS3.h:97
	void Disconnected();

	// BrnNetworkGamerPictureManagerPS3.h:102
	const NetworkTexture * GetGamerPictureTexture(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnNetworkGamerPictureManagerPS3.h:110
	void GetCompressedGamerPictureTexture(RoadRulesRecvData::NetworkPlayerID, NetworkTexture *, NetworkTextureDXTCompress::CompressionCompleteCallback, void *);

private:
	// BrnNetworkGamerPictureManagerPS3.h:158
	BrnNetwork::GamerPictureManagerPS3::GamerPictureData * GetGamerPictureDataEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkGamerPictureManagerPS3.h:162
	const BrnNetwork::GamerPictureManagerPS3::GamerPictureData * GetGamerPictureDataEntry(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnNetworkGamerPictureManagerPS3.h:165
	void ResetGamerPictureData();

	// BrnNetworkGamerPictureManagerPS3.h:169
	void PrepareGamerPictureTextures(HeapMalloc *);

	// BrnNetworkGamerPictureManagerPS3.h:172
	void DownloadNextGamerPicture();

	// BrnNetworkGamerPictureManagerPS3.h:175
	void DownloadNextUserInfo();

	// BrnNetworkGamerPictureManagerPS3.h:179
	void DownloadLocalGamerPicOnNPConnect();

}

// BrnNetworkGamerPictureManagerPS3.h:114
extern const int32_t KI_GAMER_PICTURE_WIDTH;

// BrnNetworkGamerPictureManagerPS3.h:115
extern const int32_t KI_GAMER_PICTURE_HEIGHT;

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct GamerPictureManagerPS3 {
		// BrnNetworkGamerPictureManagerPS3.h:117
		enum EUserInfodownloadState {
			E_USER_INFO_DOWNLOAD_STATE_NP_ID = 0,
			E_USER_INFO_DOWNLOAD_STATE_USER_INFO = 1,
			E_USER_INFO_DOWNLOAD_STATE_MAX = 2,
		}

		// BrnNetworkGamerPictureManagerPS3.h:126
		struct GamerPictureData {
			// BrnNetworkGamerPictureManagerPS3.h:128
			SceNpUserInfo::SceNpAvatarUrl mAvatarUrl;

			// BrnNetworkGamerPictureManagerPS3.h:129
			GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

			// BrnNetworkGamerPictureManagerPS3.h:130
			NetworkTexture mGamerPicture;

			// BrnNetworkGamerPictureManagerPS3.h:131
			CgsNetwork::BuddyManagerPS3::EPictureDownloadStatus meGamerPictureDownloaded;

		}

	}

}

// BrnNetworkGamerPictureManagerPS3.h:59
struct BrnNetwork::GamerPictureManagerPS3 {
private:
	// BrnNetworkGamerPictureManagerPS3.h:114
	extern const int32_t KI_GAMER_PICTURE_WIDTH;

	// BrnNetworkGamerPictureManagerPS3.h:115
	extern const int32_t KI_GAMER_PICTURE_HEIGHT;

	// BrnNetworkGamerPictureManagerPS3.h:134
	BrnNetwork::GamerPictureManagerPS3::GamerPictureData[7] maGamerPictureData;

	// BrnNetworkGamerPictureManagerPS3.h:135
	BrnNetwork::GamerPictureManagerPS3::GamerPictureData mLocalPlayerGamerPictureData;

	// BrnNetworkGamerPictureManagerPS3.h:137
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkGamerPictureManagerPS3.h:138
	CgsMemory::HeapMalloc * mpHeapMalloc;

	// BrnNetworkGamerPictureManagerPS3.h:140
	CgsNetwork::BuddyManagerPS3::EPictureDownloadStatus meGamerPictureDownloaded;

	// BrnNetworkGamerPictureManagerPS3.h:141
	SceNpUserInfo::SceNpAvatarUrl * mpCurrentAvatarUrl;

	// BrnNetworkGamerPictureManagerPS3.h:143
	SceNpMatchingRoomMember::SceNpUserInfo mUserInfo;

	// BrnNetworkGamerPictureManagerPS3.h:144
	SceNpUserInfo::SceNpId mUserInfoNpID;

	// BrnNetworkGamerPictureManagerPS3.h:145
	SceNpId::SceNpOnlineId mOnlineId;

	// BrnNetworkGamerPictureManagerPS3.h:147
	GuiEventNetworkLaunching::NetworkPlayerID mUserInfoPlayerID;

	// BrnNetworkGamerPictureManagerPS3.h:149
	BrnNetwork::GamerPictureManagerPS3::EUserInfodownloadState meUserInfoDownloadState;

	// BrnNetworkGamerPictureManagerPS3.h:150
	int32_t miUserInfoTransactionID;

	// BrnNetworkGamerPictureManagerPS3.h:152
	CgsNetwork::NetworkTextureDXTCompress * mpTextureCompressor;

	// BrnNetworkGamerPictureManagerPS3.h:154
	bool mbConnectedToNP;

public:
	// BrnNetworkGamerPictureManagerPS3.h:66
	void Construct(BrnNetwork::BrnNetworkManager *, CgsNetwork::NetworkTextureDXTCompress *);

	// BrnNetworkGamerPictureManagerPS3.h:71
	bool Prepare(CgsMemory::HeapMalloc *);

	// BrnNetworkGamerPictureManagerPS3.h:75
	bool Release();

	// BrnNetworkGamerPictureManagerPS3.h:79
	void Destruct();

	// BrnNetworkGamerPictureManagerPS3.h:83
	void Update();

	// BrnNetworkGamerPictureManagerPS3.h:88
	void AddPlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkGamerPictureManagerPS3.h:93
	void RemovePlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkGamerPictureManagerPS3.h:97
	void Disconnected();

	// BrnNetworkGamerPictureManagerPS3.h:102
	const NetworkTexture * GetGamerPictureTexture(GuiEventNetworkLaunching::NetworkPlayerID) const;

	// BrnNetworkGamerPictureManagerPS3.h:110
	void GetCompressedGamerPictureTexture(GuiEventNetworkLaunching::NetworkPlayerID, NetworkTexture *, NetworkTextureDXTCompress::CompressionCompleteCallback, void *);

private:
	// BrnNetworkGamerPictureManagerPS3.h:158
	BrnNetwork::GamerPictureManagerPS3::GamerPictureData * GetGamerPictureDataEntry(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkGamerPictureManagerPS3.h:162
	const BrnNetwork::GamerPictureManagerPS3::GamerPictureData * GetGamerPictureDataEntry(GuiEventNetworkLaunching::NetworkPlayerID) const;

	// BrnNetworkGamerPictureManagerPS3.h:165
	void ResetGamerPictureData();

	// BrnNetworkGamerPictureManagerPS3.h:169
	void PrepareGamerPictureTextures(CgsMemory::HeapMalloc *);

	// BrnNetworkGamerPictureManagerPS3.h:172
	void DownloadNextGamerPicture();

	// BrnNetworkGamerPictureManagerPS3.h:175
	void DownloadNextUserInfo();

	// BrnNetworkGamerPictureManagerPS3.h:179
	void DownloadLocalGamerPicOnNPConnect();

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct GamerPictureManagerPS3 {
		// BrnNetworkGamerPictureManagerPS3.h:117
		enum EUserInfodownloadState {
			E_USER_INFO_DOWNLOAD_STATE_NP_ID = 0,
			E_USER_INFO_DOWNLOAD_STATE_USER_INFO = 1,
			E_USER_INFO_DOWNLOAD_STATE_MAX = 2,
		}

		// BrnNetworkGamerPictureManagerPS3.h:126
		struct GamerPictureData {
			// BrnNetworkGamerPictureManagerPS3.h:128
			SceNpUserInfo::SceNpAvatarUrl mAvatarUrl;

			// BrnNetworkGamerPictureManagerPS3.h:129
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkGamerPictureManagerPS3.h:130
			NetworkTexture mGamerPicture;

			// BrnNetworkGamerPictureManagerPS3.h:131
			CgsNetwork::BuddyManagerPS3::EPictureDownloadStatus meGamerPictureDownloaded;

		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct GamerPictureManagerPS3 {
		// BrnNetworkGamerPictureManagerPS3.h:117
		enum EUserInfodownloadState {
			E_USER_INFO_DOWNLOAD_STATE_NP_ID = 0,
			E_USER_INFO_DOWNLOAD_STATE_USER_INFO = 1,
			E_USER_INFO_DOWNLOAD_STATE_MAX = 2,
		}

		// BrnNetworkGamerPictureManagerPS3.h:126
		struct GamerPictureData {
			// BrnNetworkGamerPictureManagerPS3.h:128
			SceNpUserInfo::SceNpAvatarUrl mAvatarUrl;

			// BrnNetworkGamerPictureManagerPS3.h:129
			AggressiveMoveData::NetworkPlayerID mPlayerID;

			// BrnNetworkGamerPictureManagerPS3.h:130
			NetworkTexture mGamerPicture;

			// BrnNetworkGamerPictureManagerPS3.h:131
			CgsNetwork::BuddyManagerPS3::EPictureDownloadStatus meGamerPictureDownloaded;

		}

	}

}

// BrnNetworkGamerPictureManagerPS3.h:59
struct BrnNetwork::GamerPictureManagerPS3 {
private:
	// BrnNetworkGamerPictureManagerPS3.h:114
	extern const int32_t KI_GAMER_PICTURE_WIDTH;

	// BrnNetworkGamerPictureManagerPS3.h:115
	extern const int32_t KI_GAMER_PICTURE_HEIGHT;

	// BrnNetworkGamerPictureManagerPS3.h:134
	BrnNetwork::GamerPictureManagerPS3::GamerPictureData[7] maGamerPictureData;

	// BrnNetworkGamerPictureManagerPS3.h:135
	BrnNetwork::GamerPictureManagerPS3::GamerPictureData mLocalPlayerGamerPictureData;

	// BrnNetworkGamerPictureManagerPS3.h:137
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkGamerPictureManagerPS3.h:138
	HeapMalloc * mpHeapMalloc;

	// BrnNetworkGamerPictureManagerPS3.h:140
	CgsNetwork::BuddyManagerPS3::EPictureDownloadStatus meGamerPictureDownloaded;

	// BrnNetworkGamerPictureManagerPS3.h:141
	SceNpUserInfo::SceNpAvatarUrl * mpCurrentAvatarUrl;

	// BrnNetworkGamerPictureManagerPS3.h:143
	SceNpMatchingRoomMember::SceNpUserInfo mUserInfo;

	// BrnNetworkGamerPictureManagerPS3.h:144
	SceNpUserInfo::SceNpId mUserInfoNpID;

	// BrnNetworkGamerPictureManagerPS3.h:145
	SceNpId::SceNpOnlineId mOnlineId;

	// BrnNetworkGamerPictureManagerPS3.h:147
	AggressiveMoveData::NetworkPlayerID mUserInfoPlayerID;

	// BrnNetworkGamerPictureManagerPS3.h:149
	BrnNetwork::GamerPictureManagerPS3::EUserInfodownloadState meUserInfoDownloadState;

	// BrnNetworkGamerPictureManagerPS3.h:150
	int32_t miUserInfoTransactionID;

	// BrnNetworkGamerPictureManagerPS3.h:152
	CgsNetwork::NetworkTextureDXTCompress * mpTextureCompressor;

	// BrnNetworkGamerPictureManagerPS3.h:154
	bool mbConnectedToNP;

public:
	// BrnNetworkGamerPictureManagerPS3.h:66
	void Construct(BrnNetwork::BrnNetworkManager *, CgsNetwork::NetworkTextureDXTCompress *);

	// BrnNetworkGamerPictureManagerPS3.h:71
	bool Prepare(HeapMalloc *);

	// BrnNetworkGamerPictureManagerPS3.h:75
	bool Release();

	// BrnNetworkGamerPictureManagerPS3.h:79
	void Destruct();

	// BrnNetworkGamerPictureManagerPS3.h:83
	// Declaration
	void Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkGamerPictureManagerPS3.cpp:233
		using namespace CgsDev::Message;

		// BrnNetworkGamerPictureManagerPS3.cpp:260
		using namespace CgsDev::Message;

		// BrnNetworkGamerPictureManagerPS3.cpp:309
		using namespace CgsDev::Message;

	}

	// BrnNetworkGamerPictureManagerPS3.h:88
	void AddPlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkGamerPictureManagerPS3.h:93
	void RemovePlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkGamerPictureManagerPS3.h:97
	void Disconnected();

	// BrnNetworkGamerPictureManagerPS3.h:102
	const NetworkTexture * GetGamerPictureTexture(AggressiveMoveData::NetworkPlayerID) const;

	// BrnNetworkGamerPictureManagerPS3.h:110
	void GetCompressedGamerPictureTexture(AggressiveMoveData::NetworkPlayerID, NetworkTexture *, NetworkTextureDXTCompress::CompressionCompleteCallback, void *);

private:
	// BrnNetworkGamerPictureManagerPS3.h:158
	BrnNetwork::GamerPictureManagerPS3::GamerPictureData * GetGamerPictureDataEntry(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkGamerPictureManagerPS3.h:162
	const BrnNetwork::GamerPictureManagerPS3::GamerPictureData * GetGamerPictureDataEntry(AggressiveMoveData::NetworkPlayerID) const;

	// BrnNetworkGamerPictureManagerPS3.h:165
	void ResetGamerPictureData();

	// BrnNetworkGamerPictureManagerPS3.h:169
	void PrepareGamerPictureTextures(HeapMalloc *);

	// BrnNetworkGamerPictureManagerPS3.h:172
	void DownloadNextGamerPicture();

	// BrnNetworkGamerPictureManagerPS3.h:175
	// Declaration
	void DownloadNextUserInfo() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkGamerPictureManagerPS3.cpp:766
		using namespace CgsDev::Message;

		// BrnNetworkGamerPictureManagerPS3.cpp:785
		using namespace CgsDev::Message;

	}

	// BrnNetworkGamerPictureManagerPS3.h:179
	void DownloadLocalGamerPicOnNPConnect();

}

// BrnNetworkGamerPictureManagerPS3.h:59
struct BrnNetwork::GamerPictureManagerPS3 {
private:
	// BrnNetworkGamerPictureManagerPS3.h:114
	extern const int32_t KI_GAMER_PICTURE_WIDTH;

	// BrnNetworkGamerPictureManagerPS3.h:115
	extern const int32_t KI_GAMER_PICTURE_HEIGHT;

	// BrnNetworkGamerPictureManagerPS3.h:134
	BrnNetwork::GamerPictureManagerPS3::GamerPictureData[7] maGamerPictureData;

	// BrnNetworkGamerPictureManagerPS3.h:135
	BrnNetwork::GamerPictureManagerPS3::GamerPictureData mLocalPlayerGamerPictureData;

	// BrnNetworkGamerPictureManagerPS3.h:137
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkGamerPictureManagerPS3.h:138
	HeapMalloc * mpHeapMalloc;

	// BrnNetworkGamerPictureManagerPS3.h:140
	CgsNetwork::BuddyManagerPS3::EPictureDownloadStatus meGamerPictureDownloaded;

	// BrnNetworkGamerPictureManagerPS3.h:141
	SceNpUserInfo::SceNpAvatarUrl * mpCurrentAvatarUrl;

	// BrnNetworkGamerPictureManagerPS3.h:143
	SceNpMatchingRoomMember::SceNpUserInfo mUserInfo;

	// BrnNetworkGamerPictureManagerPS3.h:144
	SceNpUserInfo::SceNpId mUserInfoNpID;

	// BrnNetworkGamerPictureManagerPS3.h:145
	SceNpId::SceNpOnlineId mOnlineId;

	// BrnNetworkGamerPictureManagerPS3.h:147
	RoadRulesRecvData::NetworkPlayerID mUserInfoPlayerID;

	// BrnNetworkGamerPictureManagerPS3.h:149
	BrnNetwork::GamerPictureManagerPS3::EUserInfodownloadState meUserInfoDownloadState;

	// BrnNetworkGamerPictureManagerPS3.h:150
	int32_t miUserInfoTransactionID;

	// BrnNetworkGamerPictureManagerPS3.h:152
	CgsNetwork::NetworkTextureDXTCompress * mpTextureCompressor;

	// BrnNetworkGamerPictureManagerPS3.h:154
	bool mbConnectedToNP;

public:
	// BrnNetworkGamerPictureManagerPS3.h:66
	void Construct(BrnNetwork::BrnNetworkManager *, CgsNetwork::NetworkTextureDXTCompress *);

	// BrnNetworkGamerPictureManagerPS3.h:71
	bool Prepare(HeapMalloc *);

	// BrnNetworkGamerPictureManagerPS3.h:75
	bool Release();

	// BrnNetworkGamerPictureManagerPS3.h:79
	void Destruct();

	// BrnNetworkGamerPictureManagerPS3.h:83
	void Update();

	// BrnNetworkGamerPictureManagerPS3.h:88
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkGamerPictureManagerPS3.h:93
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkGamerPictureManagerPS3.h:97
	void Disconnected();

	// BrnNetworkGamerPictureManagerPS3.h:102
	const NetworkTexture * GetGamerPictureTexture(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnNetworkGamerPictureManagerPS3.h:110
	void GetCompressedGamerPictureTexture(RoadRulesRecvData::NetworkPlayerID, CgsNetwork::NetworkTexture *, NetworkTextureDXTCompress::CompressionCompleteCallback, void *);

private:
	// BrnNetworkGamerPictureManagerPS3.h:158
	BrnNetwork::GamerPictureManagerPS3::GamerPictureData * GetGamerPictureDataEntry(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkGamerPictureManagerPS3.h:162
	const BrnNetwork::GamerPictureManagerPS3::GamerPictureData * GetGamerPictureDataEntry(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnNetworkGamerPictureManagerPS3.h:165
	void ResetGamerPictureData();

	// BrnNetworkGamerPictureManagerPS3.h:169
	void PrepareGamerPictureTextures(HeapMalloc *);

	// BrnNetworkGamerPictureManagerPS3.h:172
	void DownloadNextGamerPicture();

	// BrnNetworkGamerPictureManagerPS3.h:175
	void DownloadNextUserInfo();

	// BrnNetworkGamerPictureManagerPS3.h:179
	void DownloadLocalGamerPicOnNPConnect();

}

