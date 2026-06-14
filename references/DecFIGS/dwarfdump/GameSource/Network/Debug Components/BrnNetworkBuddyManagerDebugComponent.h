// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct BuddyManagerDebugComponent {
	public:
		// BrnNetworkBuddyManagerDebugComponent.h:157
		NetworkEventQueue * GetEventQueue();

	}

}

// BrnNetworkBuddyManagerDebugComponent.h:53
struct BrnNetwork::BuddyManagerDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnNetworkBuddyManagerDebugComponent.h:101
	BuddyInformation[5] mBuddyInformation;

	// BrnNetworkBuddyManagerDebugComponent.h:102
	int32_t miBuddyIndex;

	// BrnNetworkBuddyManagerDebugComponent.h:103
	int32_t miMessageIndex;

	// BrnNetworkBuddyManagerDebugComponent.h:104
	int32_t miFeedbackIndex;

	// BrnNetworkBuddyManagerDebugComponent.h:106
	PlayerName mInviteBuddy;

	// BrnNetworkBuddyManagerDebugComponent.h:108
	NetworkEventQueue * mpEventQueue;

	// BrnNetworkBuddyManagerDebugComponent.h:110
	BrnNetwork::BuddyManagerBase * mpBuddyManager;

public:
	// BrnNetworkBuddyManagerDebugComponent.cpp:50
	void Construct(BrnNetwork::BuddyManagerBase *);

	// BrnNetworkBuddyManagerDebugComponent.cpp:76
	bool Prepare();

	// BrnNetworkBuddyManagerDebugComponent.cpp:136
	bool Release();

	// BrnNetworkBuddyManagerDebugComponent.cpp:184
	void Destruct();

	// BrnNetworkBuddyManagerDebugComponent.cpp:96
	virtual void OnActivate();

	// BrnNetworkBuddyManagerDebugComponent.cpp:205
	virtual const char * GetName() const;

	// BrnNetworkBuddyManagerDebugComponent.cpp:217
	virtual const char * GetPath() const;

	// BrnNetworkBuddyManagerDebugComponent.h:157
	NetworkEventQueue * GetEventQueue();

	// BrnNetworkBuddyManagerDebugComponent.cpp:354
	void SetGameInviteBuddy(const PlayerName *);

	// BrnNetworkBuddyManagerDebugComponent.cpp:370
	// Declaration
	void ProcessOutgoingEvents(NetworkEventQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkBuddyManagerDebugComponent.cpp:388
		using namespace CgsDev::Message;

		// BrnNetworkBuddyManagerDebugComponent.cpp:399
		using namespace CgsDev::Message;

		// BrnNetworkBuddyManagerDebugComponent.cpp:404
		using namespace CgsDev::Message;

		// BrnNetworkBuddyManagerDebugComponent.cpp:405
		using namespace CgsDev::Message;

		// BrnNetworkBuddyManagerDebugComponent.cpp:406
		using namespace CgsDev::Message;

		// BrnNetworkBuddyManagerDebugComponent.cpp:410
		using namespace CgsDev::Message;

		// BrnNetworkBuddyManagerDebugComponent.cpp:414
		using namespace CgsDev::Message;

		// BrnNetworkBuddyManagerDebugComponent.cpp:419
		using namespace CgsDev::Message;

		// BrnNetworkBuddyManagerDebugComponent.cpp:435
		using namespace CgsDev::Message;

		// BrnNetworkBuddyManagerDebugComponent.cpp:443
		using namespace CgsDev::Message;

		// BrnNetworkBuddyManagerDebugComponent.cpp:449
		using namespace CgsDev::Message;

		// BrnNetworkBuddyManagerDebugComponent.cpp:455
		using namespace CgsDev::Message;

	}

private:
	// BrnNetworkBuddyManagerDebugComponent.cpp:230
	void GetBuddyCount(void *);

	// BrnNetworkBuddyManagerDebugComponent.cpp:246
	void PrintBuddyInfo(void *);

	// BrnNetworkBuddyManagerDebugComponent.cpp:262
	void PrintMessage(void *);

	// BrnNetworkBuddyManagerDebugComponent.cpp:280
	void PrintNextUnreadMessage(void *);

	// BrnNetworkBuddyManagerDebugComponent.cpp:297
	void SendTestMessage(void *);

	// BrnNetworkBuddyManagerDebugComponent.cpp:315
	void SendInvite(void *);

	// BrnNetworkBuddyManagerDebugComponent.cpp:332
	void AcceptInvite(void *);

	// BrnNetworkBuddyManagerDebugComponent.cpp:479
	void JoinBuddy(void *);

	// BrnNetworkBuddyManagerDebugComponent.cpp:500
	void LeaveFeedback(void *);

	// BrnNetworkBuddyManagerDebugComponent.cpp:522
	void ForceServerFriendsOverwrite(void *);

}

// BrnNetworkBuddyManagerDebugComponent.h:53
void BrnNetwork::BuddyManagerDebugComponent::BuddyManagerDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

