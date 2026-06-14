// CgsServerInterfaceBroadcastMessages.h:165
extern int[] KAI_ACTION_CODE_MAPPING;

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceBroadcastMessages {
	public:
		virtual ~ServerInterfaceBroadcastMessages();

	private:
		// CgsServerInterfaceBroadcastMessages.h:165
		extern int[] KAI_ACTION_CODE_MAPPING;

	}

}

// CgsServerInterfaceBroadcastMessages.h:107
void CgsNetwork::ServerInterfaceBroadcastMessages::~ServerInterfaceBroadcastMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceBroadcastMessages {
	public:
		virtual ~ServerInterfaceBroadcastMessages();

		ServerInterfaceBroadcastMessages();

	private:
		// CgsServerInterfaceBroadcastMessages.h:165
		extern int[] KAI_ACTION_CODE_MAPPING;

	}

}

// CgsServerInterfaceBroadcastMessages.h:107
void CgsNetwork::ServerInterfaceBroadcastMessages::ServerInterfaceBroadcastMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceBroadcastMessages {
		// CgsServerInterfaceBroadcastMessages.h:109
		enum EAction {
			E_ACTION_BROADCAST_MESSAGE = 0,
			E_ACTION_COUNT = 1,
		}

	}

}

// CgsServerInterfaceBroadcastMessages.h:67
struct CgsNetwork::ServerInterfaceBroadcastMessage {
	// CgsServerInterfaceBroadcastMessages.h:73
	void * mpData;

	// CgsServerInterfaceBroadcastMessages.h:74
	CgsNetwork::EBroadcastMessageTypes meType;

	// CgsServerInterfaceBroadcastMessages.h:75
	int32_t miSize;

public:
	// CgsServerInterfaceBroadcastMessages.h:71
	void Construct();

}

// CgsServerInterfaceBroadcastMessages.h:87
struct CgsNetwork::ServerInterfaceBroadcastDataPacket {
	// CgsServerInterfaceBroadcastMessages.h:93
	char[128] macData;

	// CgsServerInterfaceBroadcastMessages.h:94
	CgsNetwork::EBroadcastMessageTypes meType;

	// CgsServerInterfaceBroadcastMessages.h:95
	int32_t miSize;

public:
	// CgsServerInterfaceBroadcastMessages.h:91
	void Construct();

}

// CgsServerInterfaceBroadcastMessages.h:107
struct CgsNetwork::ServerInterfaceBroadcastMessages : public CgsNetwork::ServerInterfaceComponent {
private:
	// CgsServerInterfaceBroadcastMessages.cpp:43
	extern const int[1] KAI_ACTION_CODE_MAPPING;

	// Unknown accessibility
	// CgsServerInterfaceBroadcastMessages.h:56
	typedef void (*)(void *, int32_t, void *) BroadcastMessageCallback;

	// CgsServerInterfaceBroadcastMessages.h:167
	ServerInterfaceBroadcastMessages::BroadcastMessageCallback[4] mapRegisteredCallbacks;

	// CgsServerInterfaceBroadcastMessages.h:168
	void *[4] mapRegisteredCallbacksUserData;

	// CgsServerInterfaceBroadcastMessages.h:171
	ServerInterfaceBroadcastDataPacket[10] maMessagePacket;

	// CgsServerInterfaceBroadcastMessages.h:173
	int32_t miNumArbPacketsBuffered;

	// CgsServerInterfaceBroadcastMessages.h:175
	CgsNetwork::ServerInterfaceDirtySock * mpServerInterface;

	// CgsServerInterfaceBroadcastMessages.h:176
	CgsNetwork::ServerInterfaceBroadcastMessages::EAction meCurrentAction;

	// CgsServerInterfaceBroadcastMessages.h:178
	int32_t miChatCallback;

public:
	// CgsServerInterfaceBroadcastMessages.cpp:93
	virtual void Construct();

	// CgsServerInterfaceBroadcastMessages.cpp:113
	void Destruct();

	// CgsServerInterfaceBroadcastMessages.cpp:134
	bool Prepare(CgsNetwork::ServerInterfaceDirtySock *);

	// CgsServerInterfaceBroadcastMessages.cpp:160
	bool Release();

	// CgsServerInterfaceBroadcastMessages.cpp:183
	// Declaration
	void Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsServerInterfaceBroadcastMessages.cpp:190
		using namespace CgsDev::Message;

	}

	// CgsServerInterfaceBroadcastMessages.cpp:211
	void Suspend();

	// CgsServerInterfaceBroadcastMessages.cpp:224
	void Resume();

	// CgsServerInterfaceBroadcastMessages.cpp:388
	// Declaration
	void SendGameMessage(CgsNetwork::EBroadcastMessageTypes, void *, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsServerInterfaceBroadcastMessages.cpp:397
		using namespace CgsDev::Message;

	}

	// CgsServerInterfaceBroadcastMessages.cpp:418
	// Declaration
	void SendUserSetMessage(const char *, CgsNetwork::EBroadcastMessageTypes, void *, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsServerInterfaceBroadcastMessages.cpp:427
		using namespace CgsDev::Message;

	}

	// CgsServerInterfaceBroadcastMessages.cpp:444
	void RegisterMessageCallback(CgsNetwork::EBroadcastMessageTypes, ServerInterfaceBroadcastMessages::BroadcastMessageCallback, void *);

	// CgsServerInterfaceBroadcastMessages.cpp:239
	virtual void OnEvent(CgsNetwork::EServerInterfaceEvent, void *);

private:
	// CgsServerInterfaceBroadcastMessages.cpp:345
	bool GetLastMessage(ServerInterfaceBroadcastMessage *);

	// CgsServerInterfaceBroadcastMessages.cpp:464
	void BroadcastMessage(ServerInterfaceBroadcastMessage *, const char *);

	// CgsServerInterfaceBroadcastMessages.cpp:289
	void ChatCallback(LobbyApiRefT *, LobbyApiMsgT *, void *);

public:
	virtual void ~ServerInterfaceBroadcastMessages();

}

