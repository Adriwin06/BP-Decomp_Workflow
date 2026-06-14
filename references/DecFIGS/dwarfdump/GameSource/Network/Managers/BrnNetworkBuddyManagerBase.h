// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct BuddyManagerBase {
		// BrnNetworkBuddyManagerBase.h:140
		enum EBuddyManagerState {
			E_BUDDY_MANAGER_STATE_FAILED = -1,
			E_BUDDY_MANAGER_STATE_START = 0,
			E_BUDDY_MANAGER_STATE_START_GET_SERVER_BUDDIES = 1,
			E_BUDDY_MANAGER_STATE_GETTING_SERVER_BUDDIES = 2,
			E_BUDDY_MANAGER_STATE_START_UPLOAD_SERVER_BUDDIES = 3,
			E_BUDDY_MANAGER_STATE_UPLOADING_SERVER_BUDDIES = 4,
			E_BUDDY_MANAGER_STATE_SERVER_BUDDIES_UPDATED = 5,
			E_BUDDY_MANAGER_STATE_COUNT = 6,
		}

	}

}

// BrnNetworkBuddyManagerBase.h:57
struct BrnNetwork::BuddyManagerBase : public CgsNetwork::BuddyManagerPS3 {
private:
	// BrnNetworkBuddyManagerBase.h:156
	BrnNetwork::BuddyManagerDebugComponent mDebugComponent;

	// BrnNetworkBuddyManagerBase.h:159
	PlayerName[100] maServerBuddyList;

	// BrnNetworkBuddyManagerBase.h:160
	PlayerName[100] maBuddyListAtUpload;

	// BrnNetworkBuddyManagerBase.h:161
	PlayerName[100] maCachedBuddyListAtLastChange;

	// BrnNetworkBuddyManagerBase.h:162
	Time mTimeUntilRetryAfterFailedBuddyUpload;

	// BrnNetworkBuddyManagerBase.h:163
	int32_t miNumServerBuddies;

	// BrnNetworkBuddyManagerBase.h:164
	int32_t miNumBuddiesAtUpload;

	// BrnNetworkBuddyManagerBase.h:165
	int32_t miCachedNumBuddiesAtLastChange;

	// BrnNetworkBuddyManagerBase.h:166
	BrnNetwork::BuddyManagerBase::EBuddyManagerState meState;

	// BrnNetworkBuddyManagerBase.h:167
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkBuddyManagerBase.h:172
	float32_t mfBuddyListChangedTimer;

	// BrnNetworkBuddyManagerBase.h:173
	int32_t miNextBuddyToSend;

	// BrnNetworkBuddyManagerBase.h:175
	bool mbOverwriteFriendsList;

public:
	// BrnNetworkBuddyManagerBase.cpp:49
	void Construct(BrnNetwork::BrnNetworkModule *, BrnNetwork::BrnServerInterface *);

	// BrnNetworkBuddyManagerBase.cpp:357
	bool Prepare();

	// BrnNetworkBuddyManagerBase.cpp:383
	bool Release();

	// BrnNetworkBuddyManagerBase.cpp:91
	void Destruct();

	// BrnNetworkBuddyManagerBase.cpp:307
	virtual CgsNetwork::EBuddyErrorCodes Disconnect();

	// BrnNetworkBuddyManagerBase.cpp:136
	void Update(bool, float32_t);

	// BrnNetworkBuddyManagerBase.cpp:1281
	virtual void OnLeaveGame();

protected:
	// BrnNetworkBuddyManagerBase.cpp:937
	virtual void BuddyListHasChanged();

	// BrnNetworkBuddyManagerBase.cpp:335
	void StartInvite(InviteOrJoinParams);

	// BrnNetworkBuddyManagerBase.h:271
	BrnNetwork::BrnNetworkModule * GetNetworkModule();

	// BrnNetworkBuddyManagerBase.cpp:700
	void ProcessEvent(const CgsModule::Event *, int32_t);

	// BrnNetworkBuddyManagerBase.cpp:910
	virtual void ProcessNetworkQueue(const NetworkEventQueue *, NetworkEventQueue *);

	// BrnNetworkBuddyManagerBase.cpp:869
	void ProcessDebugEvents();

	// BrnNetworkBuddyManagerBase.cpp:893
	void GameInviteAvailable(const PlayerName *);

private:
	// BrnNetworkBuddyManagerBase.cpp:765
	void CountBuddies(NetworkEventQueue *);

	// BrnNetworkBuddyManagerBase.cpp:783
	void SendEmptyBuddyInformation(NetworkEventQueue *);

	// BrnNetworkBuddyManagerBase.cpp:806
	void SendBuddyInformation(NetworkEventQueue *);

	// BrnNetworkBuddyManagerBase.cpp:1041
	void ClearPlayerList();

	// BrnNetworkBuddyManagerBase.cpp:1062
	void PopulateServerBuddyList(char *);

	// BrnNetworkBuddyManagerBase.cpp:548
	void GetBuddiesToAddAndRemoveFromServer(PlayerName *, PlayerName *, int32_t *, int32_t *, bool *);

	// BrnNetworkBuddyManagerBase.cpp:408
	void GetServerFriends();

	// BrnNetworkBuddyManagerBase.cpp:441
	// Declaration
	void UploadServerFriends() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkBuddyManagerBase.cpp:499
		using namespace CgsDev::Message;

		// BrnNetworkBuddyManagerBase.cpp:504
		using namespace CgsDev::Message;

	}

	// BrnNetworkBuddyManagerBase.cpp:1102
	void SortServerBuddyList();

	// BrnNetworkBuddyManagerBase.cpp:231
	void HandleBuddyListChange();

	// BrnNetworkBuddyManagerBase.cpp:1119
	// Declaration
	bool IsBuddyListAlphabetical(PlayerName *, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkBuddyManagerBase.cpp:1128
		using namespace CgsDev::Message;

	}

	// BrnNetworkBuddyManagerBase.cpp:1146
	bool IsLocalPlayersBuddyListAlphabetical();

	// BrnNetworkBuddyManagerBase.cpp:1180
	void _GetFriendsListFromServerComplete(void *, void *, bool);

	// BrnNetworkBuddyManagerBase.cpp:1241
	void _UploadFriendsToServerComplete(void *, void *, bool);

}

// BrnNetworkBuddyManagerBase.h:57
void BrnNetwork::BuddyManagerBase::BuddyManagerBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

