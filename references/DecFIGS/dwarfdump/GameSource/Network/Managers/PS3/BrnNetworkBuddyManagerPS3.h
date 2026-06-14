// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct BuddyManagerPS3 {
		// BrnNetworkBuddyManagerPS3.h:117
		enum EInviteOrJoinState {
			E_INVITE_STATE_START = 0,
			E_INVITE_STATE_GETTING_GAME_ID = 0,
			E_INVITE_STATE_WAITING_FOR_GAME_ID = 1,
			E_INVITE_STATE_STARTING_INVITE = 2,
			E_INVITE_STATE_COUNT = 3,
		}

	}

}

// BrnNetworkBuddyManagerPS3.h:34
namespace BrnHW {
	struct LaunchData;

}

// BrnNetworkBuddyManagerPS3.h:57
struct BrnNetwork::BuddyManagerPS3 : public BrnNetwork::BuddyManagerBase {
private:
	// BrnNetworkBuddyManagerPS3.h:128
	BrnNetwork::BuddyManagerPS3::EInviteOrJoinState meInviteState;

	// BrnNetworkBuddyManagerPS3.h:129
	PlayerName mPlayerToJoin;

	// BrnNetworkBuddyManagerPS3.h:130
	bool mbNotifyGameInviteSent;

public:
	// BrnNetworkBuddyManagerPS3.cpp:45
	void Construct(BrnNetwork::BrnNetworkModule *, BrnNetwork::BrnServerInterface *);

	// BrnNetworkBuddyManagerPS3.cpp:65
	bool Prepare(const BrnHW::LaunchData *);

	// BrnNetworkBuddyManagerPS3.cpp:89
	bool Release();

	// BrnNetworkBuddyManagerPS3.cpp:113
	void Destruct();

	// BrnNetworkBuddyManagerPS3.cpp:296
	void Update(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *, float32_t, bool, bool);

	// BrnNetworkBuddyManagerPS3.cpp:508
	void UpdateJoinableStatus();

	// BrnNetworkBuddyManagerPS3.cpp:553
	virtual void OnLeaveGame();

	// BrnNetworkBuddyManagerPS3.cpp:585
	void JoinGameComplete(bool);

protected:
	// BrnNetworkBuddyManagerPS3.cpp:431
	virtual void ProcessNetworkQueue(const NetworkEventQueue *, NetworkEventQueue *);

	// BrnNetworkBuddyManagerPS3.cpp:569
	virtual void MessageSent(bool, int32_t);

private:
	// BrnNetworkBuddyManagerPS3.cpp:133
	void OutputChatMessage(const PlayerName *, int32_t, NetworkEventQueue *);

	// BrnNetworkBuddyManagerPS3.cpp:212
	void OutputNextUnreadChatMessage(const PlayerName *, NetworkEventQueue *);

	// BrnNetworkBuddyManagerPS3.h:149
	void SendChatMessage(const PlayerName *, const char *);

	// BrnNetworkBuddyManagerPS3.cpp:254
	void PerformInvite(PlayerName *);

	// BrnNetworkBuddyManagerPS3.cpp:237
	virtual void AcceptInvite(const PlayerName *);

	// BrnNetworkBuddyManagerPS3.cpp:271
	virtual void JoinBuddy(const PlayerName *);

	// BrnNetworkBuddyManagerPS3.cpp:156
	virtual void ChatMessageArrived(const char *);

	// BrnNetworkBuddyManagerPS3.cpp:171
	virtual void InviteArrived(const PlayerName *);

	// BrnNetworkBuddyManagerPS3.cpp:196
	virtual void CustomMessageArrived(int8_t, const char *);

}

// BrnNetworkBuddyManagerPS3.h:57
void BrnNetwork::BuddyManagerPS3::BuddyManagerPS3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

