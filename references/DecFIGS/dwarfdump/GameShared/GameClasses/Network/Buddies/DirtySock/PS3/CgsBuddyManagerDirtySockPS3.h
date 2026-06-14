// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct BuddyManagerPS3 {
		// CgsBuddyManagerDirtySockPS3.h:66
		enum EPictureDownloadStatus {
			E_PICTURE_DOWNLOAD_STATUS_NOT_DOWNLOADED = 0,
			E_PICTURE_DOWNLOAD_STATUS_DOWNLOADED = 1,
			E_PICTURE_DOWNLOAD_STATUS_FAILED = 2,
			E_PICTURE_DOWNLOAD_STATUS_COUNT = 3,
		}

	}

}

// CgsBitStream.h:26
namespace CgsNetwork {
	// Declaration
	struct BuddyManagerPS3 {
		// CgsBuddyManagerDirtySockPS3.h:66
		enum EPictureDownloadStatus {
			E_PICTURE_DOWNLOAD_STATUS_NOT_DOWNLOADED = 0,
			E_PICTURE_DOWNLOAD_STATUS_DOWNLOADED = 1,
			E_PICTURE_DOWNLOAD_STATUS_FAILED = 2,
			E_PICTURE_DOWNLOAD_STATUS_COUNT = 3,
		}

	}

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct BuddyManagerPS3 {
		// CgsBuddyManagerDirtySockPS3.h:66
		enum EPictureDownloadStatus {
			E_PICTURE_DOWNLOAD_STATUS_NOT_DOWNLOADED = 0,
			E_PICTURE_DOWNLOAD_STATUS_DOWNLOADED = 1,
			E_PICTURE_DOWNLOAD_STATUS_FAILED = 2,
			E_PICTURE_DOWNLOAD_STATUS_COUNT = 3,
		}

	public:
		BuddyManagerPS3();

	}

}

// CgsBuddyManagerDirtySockPS3.h:63
void CgsNetwork::BuddyManagerPS3::BuddyManagerPS3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct BuddyManagerPS3 {
		// CgsBuddyManagerDirtySockPS3.h:66
		enum EPictureDownloadStatus {
			E_PICTURE_DOWNLOAD_STATUS_NOT_DOWNLOADED = 0,
			E_PICTURE_DOWNLOAD_STATUS_DOWNLOADED = 1,
			E_PICTURE_DOWNLOAD_STATUS_FAILED = 2,
			E_PICTURE_DOWNLOAD_STATUS_COUNT = 3,
		}

		// CgsBuddyManagerDirtySockPS3.h:202
		enum EInviteStatus {
			E_INVITE_STATUS_INVITED = 0,
			E_INVITE_STATUS_ACCEPTED = 1,
			E_INVITE_STATUS_DECLINED = 2,
			E_INVITE_STATUS_REVOKED = 3,
			E_INVITE_STATUS_COUNT = 4,
		}

		// CgsBuddyManagerDirtySockPS3.h:213
		enum EMessageSendingState {
			E_SENDING_STATE_NONE = 0,
			E_SENDING_STATE_IN_PROGRESS = 1,
			E_SENDING_STATE_NEEDS_RESENDING = 2,
			E_SENDING_STATE_COUNT = 3,
		}

	}

}

// CgsBuddyManagerDirtySockPS3.h:63
struct CgsNetwork::BuddyManagerPS3 : public CgsNetwork::BuddyManagerBase {
private:
	// CgsBuddyManagerDirtySockPS3.h:222
	FastBitArray<100> mOnlineBuddies;

	// CgsBuddyManagerDirtySockPS3.h:224
	int32_t miNumNewOnlineBuddies;

	// CgsBuddyManagerDirtySockPS3.h:225
	int32_t miNewOnlineBuddyIndex;

	// CgsBuddyManagerDirtySockPS3.h:227
	CgsNetwork::NetworkTexture * mpCurrentDownloadingTexture;

	// CgsBuddyManagerDirtySockPS3.h:228
	CgsNetwork::BuddyManagerPS3::EPictureDownloadStatus * mpeDownloadStatus;

	// CgsBuddyManagerDirtySockPS3.h:229
	SceNpUserInfo::SceNpAvatarUrl * mpAvatarUrl;

	// CgsBuddyManagerDirtySockPS3.h:231
	CellPngDecMainHandle mDecoderHandle;

	// CgsBuddyManagerDirtySockPS3.h:232
	void * mpOutputBuffer;

	// CgsBuddyManagerDirtySockPS3.h:234
	int32_t miFramesTillTryToSendPresenceData;

	// CgsBuddyManagerDirtySockPS3.h:236
	CgsNetwork::BuddyManagerPS3::EMessageSendingState meMessageSendingState;

	// CgsBuddyManagerDirtySockPS3.h:237
	char[200] macBufferedMessage;

	// CgsBuddyManagerDirtySockPS3.h:238
	PlayerName mPlayerToInvite;

	// CgsBuddyManagerDirtySockPS3.h:239
	PlayerName mLastPlayerSentTo;

	// CgsBuddyManagerDirtySockPS3.h:240
	bool mbRevokingInvites;

public:
	// CgsBuddyManagerDirtySockPS3.cpp:118
	void Construct(CgsNetwork::NetworkManager *, CgsNetwork::ServerInterface *);

	// CgsBuddyManagerDirtySockPS3.cpp:154
	bool Prepare();

	// CgsBuddyManagerDirtySockPS3.cpp:208
	bool Release();

	// CgsBuddyManagerDirtySockPS3.cpp:251
	void Destruct();

	// CgsBuddyManagerDirtySockPS3.cpp:283
	virtual void Update(bool);

	// CgsBuddyManagerDirtySockPS3.cpp:373
	void StartDownloadingPictures(CgsNetwork::NetworkTexture *, SceNpUserInfo::SceNpAvatarUrl *, CgsNetwork::BuddyManagerPS3::EPictureDownloadStatus *);

	// CgsBuddyManagerDirtySockPS3.cpp:401
	void CancelPictureDownload();

	// CgsBuddyManagerDirtySockPS3.cpp:970
	virtual void SendInvite(const PlayerName *);

	// CgsBuddyManagerDirtySockPS3.cpp:986
	virtual void CancelInvites();

	// CgsBuddyManagerDirtySockPS3.cpp:1316
	virtual void SetJoinable(bool);

	// CgsBuddyManagerDirtySockPS3.cpp:1037
	virtual void SendMessage(const PlayerName *, const char *);

	// CgsBuddyManagerDirtySockPS3.cpp:1064
	virtual void AcceptInvite(const PlayerName *);

	// CgsBuddyManagerDirtySockPS3.cpp:1083
	virtual void RevokeInvite(const PlayerName *);

	// CgsBuddyManagerDirtySockPS3.cpp:1102
	virtual void RevokeAllInvites();

	// CgsBuddyManagerDirtySockPS3.cpp:1152
	virtual void DeclineInvite(const PlayerName *);

	// CgsBuddyManagerDirtySockPS3.cpp:1224
	virtual void BuddyListHasChanged();

	// CgsBuddyManagerDirtySockPS3.cpp:1354
	virtual void AddPlayerToHistory(CgsNetwork::ServerInterfacePlayerParams *);

	// CgsBuddyManagerDirtySockPS3.cpp:1404
	virtual void RefreshBuddyList();

protected:
	// CgsBuddyManagerDirtySockPS3.cpp:1268
	virtual bool IsConnectedToNetworkService() const;

	// CgsBuddyManagerDirtySockPS3.cpp:1286
	virtual int32_t GetNumberOfNewOnlineBuddies();

	// CgsBuddyManagerDirtySockPS3.cpp:1302
	virtual int32_t GetIndexOfLastBuddyToComeOnline();

	// CgsBuddyManagerDirtySockPS3.cpp:832
	virtual void MessageArrived(const char *);

	// CgsBuddyManagerDirtySockPS3.cpp:932
	virtual void MessageSent(bool, int32_t);

	// CgsBuddyManagerDirtySockPS3.cpp:956
	virtual void ChatMessageArrived(const char *);

private:
	// CgsBuddyManagerDirtySockPS3.cpp:1176
	// Declaration
	bool PackAndSendInviteMessage(const PlayerName *, CgsNetwork::BuddyManagerPS3::EInviteStatus) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsBuddyManagerDirtySockPS3.cpp:1193
		using namespace CgsDev::Message;

	}

	// CgsBuddyManagerDirtySockPS3.cpp:1003
	void SetMessageHeader(int32_t, char *);

	// CgsBuddyManagerDirtySockPS3.cpp:1021
	void SetMessageBody(const char *, char *);

	// CgsBuddyManagerDirtySockPS3.cpp:427
	virtual void UpdatePictureDownload();

	// CgsBuddyManagerDirtySockPS3.h:264
	void RequestNextProfilePictures();

	// CgsBuddyManagerDirtySockPS3.h:268
	void DownloadNextPicture(bool);

	// CgsBuddyManagerDirtySockPS3.cpp:521
	// Declaration
	void DecodeImage() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsBuddyManagerDirtySockPS3.cpp:663
		using namespace CgsDev::Message;

	}

	// CgsBuddyManagerDirtySockPS3.cpp:715
	void CopyImage(uint8_t *, int32_t, int32_t, int32_t);

	// CgsBuddyManagerDirtySockPS3.cpp:339
	void HandleSendingInvites();

	// CgsBuddyManagerDirtySockPS3.cpp:1371
	void SendBufferToPlayer();

	// CgsBuddyManagerDirtySockPS3.cpp:1390
	void ClearBufferedMessage();

	// CgsBuddyManagerDirtySockPS3.cpp:1115
	void RevokeNextInvite();

	// CgsBuddyManagerDirtySockPS3.cpp:82
	void * PngDecCbControlMalloc(uint32_t, void *);

	// CgsBuddyManagerDirtySockPS3.cpp:101
	int32_t PngDecCbControlFree(void *, void *);

}

