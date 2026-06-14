// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsBuddyManagerDirtySock.h:39
	const int32_t KI_MAX_RECENT_PLAYERS = 20;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct BuddyManagerBase {
	protected:
		// CgsBuddyManagerDirtySock.h:393
		extern const int32_t KI_INVALID_BUDDY_INDEX = 4294967295;

	}

	// CgsBuddyManagerDirtySock.h:52
	enum EBuddyErrorCodes {
		E_BUDDY_ERROR_CODES_NONE = 0,
		E_BUDDY_ERROR_CODES_PENDING = 1,
		E_BUDDY_ERROR_CODES_NOTUSER = 2,
		E_BUDDY_ERROR_CODES_BADPARAMS = 3,
		E_BUDDY_ERROR_CODES_OFFLINE = 4,
		E_BUDDY_ERROR_CODES_NOTFOUND = 5,
		E_BUDDY_ERROR_CODES_FULL = 6,
		E_BUDDY_ERROR_CODES_PASSWORD = 7,
		E_BUDDY_ERROR_CODES_HACK = 8,
		E_BUDDY_ERROR_CODES_INTERNAL = 9,
		E_BUDDY_ERROR_CODES_BADRESOURCE = 10,
		E_BUDDY_ERROR_CODES_NETWORK = 11,
		E_BUDDY_ERROR_CODES_AUTH = 12,
		E_BUDDY_ERROR_CODES_TIMEOUT = 13,
		E_BUDDY_ERROR_CODES_CANCEL = 14,
		E_BUDDY_ERROR_CODES_NOOPERATION = 15,
		E_BUDDY_ERROR_CODES_DISCONNECTED = 16,
		E_BUDDY_ERROR_CODES_UNKNOWN = 17,
		E_BUDDY_ERROR_CODES_WRONGSTATE = 18,
		E_BUDDY_ERROR_CODES_COUNT = 19,
	}

	// CgsBuddyManagerDirtySock.h:39
	const int32_t KI_MAX_RECENT_PLAYERS = 20;

}

// CgsBuddyManagerDirtySock.h:393
extern const int32_t KI_INVALID_BUDDY_INDEX = 4294967295;

// CgsBitStream.h:26
namespace CgsNetwork {
	// CgsBuddyManagerDirtySock.h:39
	const int32_t KI_MAX_RECENT_PLAYERS = 20;

}

// CgsBuddyManagerDirtySock.h:122
void CgsNetwork::BuddyManagerBase::BuddyManagerBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsBuddyManagerDirtySock.h:52
	enum EBuddyErrorCodes {
		E_BUDDY_ERROR_CODES_NONE = 0,
		E_BUDDY_ERROR_CODES_PENDING = 1,
		E_BUDDY_ERROR_CODES_NOTUSER = 2,
		E_BUDDY_ERROR_CODES_BADPARAMS = 3,
		E_BUDDY_ERROR_CODES_OFFLINE = 4,
		E_BUDDY_ERROR_CODES_NOTFOUND = 5,
		E_BUDDY_ERROR_CODES_FULL = 6,
		E_BUDDY_ERROR_CODES_PASSWORD = 7,
		E_BUDDY_ERROR_CODES_HACK = 8,
		E_BUDDY_ERROR_CODES_INTERNAL = 9,
		E_BUDDY_ERROR_CODES_BADRESOURCE = 10,
		E_BUDDY_ERROR_CODES_NETWORK = 11,
		E_BUDDY_ERROR_CODES_AUTH = 12,
		E_BUDDY_ERROR_CODES_TIMEOUT = 13,
		E_BUDDY_ERROR_CODES_CANCEL = 14,
		E_BUDDY_ERROR_CODES_NOOPERATION = 15,
		E_BUDDY_ERROR_CODES_DISCONNECTED = 16,
		E_BUDDY_ERROR_CODES_UNKNOWN = 17,
		E_BUDDY_ERROR_CODES_WRONGSTATE = 18,
		E_BUDDY_ERROR_CODES_COUNT = 19,
	}

	// CgsBuddyManagerDirtySock.h:77
	enum EBuddyActionStatus {
		E_BUDDY_ACTION_IDLE = 0,
		E_BUDDY_ACTION_BUSY = 1,
		E_BUDDY_ACTION_DOWNLOADING_PROFILE = 2,
		E_BUDDY_ACTION_DOWNLOADING_PIC = 3,
		E_BUDDY_ACTION_FAILED = 4,
		E_BUDDY_ACTION_COUNT = 5,
	}

	// CgsBuddyManagerDirtySock.h:39
	const int32_t KI_MAX_RECENT_PLAYERS = 20;

}

// CgsBuddyManagerDirtySock.h:104
struct CgsNetwork::DSBuddyErrorToBuddyManagerError {
	// CgsBuddyManagerDirtySock.h:107
	int32_t meBuddyApiError;

	// CgsBuddyManagerDirtySock.h:108
	CgsNetwork::EBuddyErrorCodes meBuddyManagerError;

}

// CgsBuddyManagerDirtySock.h:122
struct CgsNetwork::BuddyManagerBase {
	int (*)(...) * _vptr.BuddyManagerBase;

protected:
	// CgsBuddyManagerDirtySock.h:393
	extern const int32_t KI_INVALID_BUDDY_INDEX = 4294967295;

	// Unknown accessibility
	// hlbudapi.h:209
	typedef CgsNetwork::DirtySock::HLBApiRefT HLBApiRefT;

	// CgsBuddyManagerDirtySock.h:394
	BuddyManagerBase::HLBApiRefT * mpBuddies;

	// CgsBuddyManagerDirtySock.h:395
	CgsNetwork::EBuddyActionStatus meCurrentStatus;

	// CgsBuddyManagerDirtySock.h:396
	CgsNetwork::NetworkManager * mpNetworkManager;

	// CgsBuddyManagerDirtySock.h:397
	CgsNetwork::ServerInterface * mpServerInterface;

private:
	// CgsBuddyManagerDirtySock.h:439
	void * mpBuddiesChangedUserData;

	// Unknown accessibility
	// CgsBuddyManagerDirtySock.h:89
	typedef void (*)(CgsNetwork::EBuddyErrorCodes, void *) CgsBuddyStandardCallback;

	// CgsBuddyManagerDirtySock.h:440
	BuddyManagerBase::CgsBuddyStandardCallback mBuddiesChangedCallback;

public:
	// CgsBuddyManagerDirtySock.cpp:84
	void Construct(CgsNetwork::NetworkManager *, CgsNetwork::ServerInterface *);

	// CgsBuddyManagerDirtySock.cpp:106
	bool Prepare();

	// CgsBuddyManagerDirtySock.cpp:128
	virtual void Update(bool);

	// CgsBuddyManagerDirtySock.cpp:181
	bool Release();

	// CgsBuddyManagerDirtySock.cpp:199
	void Destruct();

	// CgsBuddyManagerDirtySock.cpp:216
	void Suspend();

	// CgsBuddyManagerDirtySock.cpp:236
	void Resume();

	// CgsBuddyManagerDirtySock.cpp:256
	virtual CgsNetwork::EBuddyErrorCodes Disconnect();

	// CgsBuddyManagerDirtySock.h:507
	CgsNetwork::EBuddyActionStatus CurrentStatus();

	// CgsBuddyManagerDirtySock.cpp:282
	bool IsABuddy(const PlayerName *);

	// CgsBuddyManagerDirtySock.cpp:305
	bool IsFullBuddy(const PlayerName *);

	// CgsBuddyManagerDirtySock.cpp:395
	bool GetBuddyName(int32_t, PlayerName *);

	// CgsBuddyManagerDirtySock.cpp:427
	int32_t GetBuddyIndex(const PlayerName *);

	// CgsBuddyManagerDirtySock.cpp:459
	int32_t GetNumBuddies();

	// CgsBuddyManagerDirtySock.cpp:480
	int32_t GetNumFullBuddies();

	// CgsBuddyManagerDirtySock.cpp:514
	int32_t GetNumOnlineBuddies();

	// CgsBuddyManagerDirtySock.cpp:547
	bool CanBuddyVoiceChat(const PlayerName *);

	// CgsBuddyManagerDirtySock.cpp:1177
	virtual void BuddyListHasChanged();

	// CgsBuddyManagerDirtySock.h:215
	virtual void AddPlayerToHistory(CgsNetwork::ServerInterfacePlayerParams *);

	// CgsBuddyManagerDirtySock.cpp:1345
	int32_t GetAllBuddyNames(const char **);

	// CgsBuddyManagerDirtySock.cpp:577
	// Declaration
	void SetSortFunction(CgsBuddySortCallback, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsBuddyManagerDirtySock.h:93
		typedef int32_t (*)(void *, int32_t, void *, void *) CgsBuddySortCallback;

	}

	// CgsBuddyManagerDirtySock.cpp:599
	CgsNetwork::EBuddyErrorCodes SortBuddies();

	// CgsBuddyManagerDirtySock.cpp:623
	bool IsBuddyJoinable(const PlayerName *);

	// CgsBuddyManagerDirtySock.cpp:1280
	virtual void JoinBuddy(const PlayerName *);

	// CgsBuddyManagerDirtySock.cpp:1109
	virtual void SendInvite(const PlayerName *);

	// CgsBuddyManagerDirtySock.cpp:1126
	virtual void CancelInvites();

	// CgsBuddyManagerDirtySock.cpp:1214
	virtual void AcceptInvite(const PlayerName *);

	// CgsBuddyManagerDirtySock.cpp:1231
	virtual void RevokeInvite(const PlayerName *);

	// CgsBuddyManagerDirtySock.cpp:1248
	virtual void RevokeAllInvites();

	// CgsBuddyManagerDirtySock.cpp:1263
	virtual void DeclineInvite(const PlayerName *);

	// CgsBuddyManagerDirtySock.cpp:1415
	virtual void InviteAccepted(const PlayerName *);

	// CgsBuddyManagerDirtySock.cpp:1435
	virtual void InviteRevoked(const PlayerName *);

	// CgsBuddyManagerDirtySock.cpp:1453
	virtual void InviteDeclined(const PlayerName *);

	// CgsBuddyManagerDirtySock.cpp:1384
	virtual bool AreAnyInvitesOpen();

	// CgsBuddyManagerDirtySock.cpp:804
	virtual int32_t GetTotalNumberOfMessages(const PlayerName *);

	// CgsBuddyManagerDirtySock.cpp:757
	virtual int32_t GetNumberOfUnreadMessages(const PlayerName *);

	// CgsBuddyManagerDirtySock.cpp:828
	virtual bool GetNextUnreadMessage(const PlayerName *, char *, int32_t);

	// CgsBuddyManagerDirtySock.cpp:936
	virtual bool GetMessage(const PlayerName *, int32_t, char *, int32_t);

	// CgsBuddyManagerDirtySock.cpp:740
	virtual void SendMessage(const PlayerName *, const char *);

	// CgsBuddyManagerDirtySock.cpp:967
	virtual const char * GetTitle(const PlayerName *);

	// CgsBuddyManagerDirtySock.cpp:987
	void SetPresence(const char *);

	// CgsBuddyManagerDirtySock.cpp:1002
	void GetBuddyPresence(const PlayerName *, char *);

	// CgsBuddyManagerDirtySock.cpp:1023
	void SetJoinable(bool);

	// CgsBuddyManagerDirtySock.cpp:1048
	bool IsBuddyJoinable(int32_t);

	// CgsBuddyManagerDirtySock.cpp:1063
	virtual bool HasBuddyInvitedMe(const PlayerName *);

	// CgsBuddyManagerDirtySock.cpp:1086
	virtual bool HaveIInvitedMyBuddy(const PlayerName *);

	// CgsBuddyManagerDirtySock.cpp:1191
	bool IsBuddyOnline(const PlayerName *);

	// CgsBuddyManagerDirtySock.cpp:361
	bool IsBuddyBlocked(const PlayerName *);

	// CgsBuddyManagerDirtySock.cpp:1472
	virtual void RefreshBuddyList();

protected:
	// CgsBuddyManagerDirtySock.h:401
	virtual bool IsConnectedToNetworkService() const;

	// CgsBuddyManagerDirtySock.h:405
	virtual int32_t GetNumberOfNewOnlineBuddies();

	// CgsBuddyManagerDirtySock.h:409
	virtual int32_t GetIndexOfLastBuddyToComeOnline();

	// CgsBuddyManagerDirtySock.cpp:881
	virtual void MessageArrived(const char *);

	// CgsBuddyManagerDirtySock.cpp:897
	virtual void MessageSent(bool, int32_t);

	// CgsBuddyManagerDirtySock.cpp:914
	virtual void InviteArrived(const PlayerName *);

	// CgsBuddyManagerDirtySock.cpp:1164
	virtual void InviteSent(bool);

	// CgsBuddyManagerDirtySock.cpp:1322
	int32_t _SortBuddyFunction(const void *, const void *);

private:
	// CgsBuddyManagerDirtySock.cpp:333
	bool IsFullBuddy(int32_t);

	// CgsBuddyManagerDirtySock.cpp:710
	CgsNetwork::EBuddyErrorCodes _ConvertError(int32_t);

	// CgsBuddyManagerDirtySock.cpp:649
	void _BuddyManagerDebugPrint(void *, const char *);

	// CgsBuddyManagerDirtySock.cpp:667
	void _BuddiesChangedCallback(BuddyManagerBase::HLBApiRefT *, int32_t, int32_t, void *);

	// CgsBuddyManagerDirtySock.cpp:690
	// Declaration
	void _PresenceChangedCallback(BuddyManagerBase::HLBApiRefT *, HLBBudT *, HLBStatE, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// hlbudapi.h:211
		typedef CgsNetwork::DirtySock::HLBBudT HLBBudT;

		// hlbudapi.h:61
		typedef CgsNetwork::DirtySock::HLBStatE HLBStatE;

	}

	// CgsBuddyManagerDirtySock.cpp:781
	void _MessageSendingCallback(BuddyManagerBase::HLBApiRefT *, int32_t, int32_t, void *);

	// CgsBuddyManagerDirtySock.cpp:864
	// Declaration
	void _MessageArrivedCallback(BuddyManagerBase::HLBApiRefT *, BuddyApiMsgT *, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// buddyapi.h:226
		typedef BuddyApiMsgT BuddyApiMsgT;

	}

	// CgsBuddyManagerDirtySock.cpp:1143
	void _MessageSendInviteCallback(BuddyManagerBase::HLBApiRefT *, int32_t, int32_t, void *);

	// CgsBuddyManagerDirtySock.cpp:1300
	int32_t _SortBuddyFunction(void *, int32_t, void *, void *);

}

