// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsConnectionStatusMessage.h:37
	enum EConnectionStatus {
		E_NOT_STARTED = 0,
		E_CONNAPI_PROTOMANGLING = 1,
		E_CHECKING_CONNECTION = 2,
		E_CONNECTION_SUCCESS = 3,
		E_CONNECTION_FAILURE = 4,
		E_CONNECTION_STATUS_COUNT = 5,
	}

}

// CgsConnectionStatusMessage.h:48
struct CgsNetwork::PlayerConnectionData {
	// CgsConnectionStatusMessage.h:50
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

	// CgsConnectionStatusMessage.h:51
	CgsNetwork::EConnectionStatus meConnectionStatus;

}

// CgsConnectionStatusMessage.h:48
struct CgsNetwork::PlayerConnectionData {
	// CgsConnectionStatusMessage.h:50
	GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

	// CgsConnectionStatusMessage.h:51
	CgsNetwork::EConnectionStatus meConnectionStatus;

}

// CgsConnectionStatusMessage.h:48
struct CgsNetwork::PlayerConnectionData {
	// CgsConnectionStatusMessage.h:50
	AggressiveMoveData::NetworkPlayerID mPlayerID;

	// CgsConnectionStatusMessage.h:51
	CgsNetwork::EConnectionStatus meConnectionStatus;

}

// CgsBitStream.h:26
namespace CgsNetwork {
	// CgsConnectionStatusMessage.h:37
	enum EConnectionStatus {
		E_NOT_STARTED = 0,
		E_CONNAPI_PROTOMANGLING = 1,
		E_CHECKING_CONNECTION = 2,
		E_CONNECTION_SUCCESS = 3,
		E_CONNECTION_FAILURE = 4,
		E_CONNECTION_STATUS_COUNT = 5,
	}

}

// CgsConnectionStatusMessage.h:55
void CgsNetwork::ConnectionStatusMessage::ConnectionStatusMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsConnectionStatusMessage.h:37
	enum EConnectionStatus {
		E_NOT_STARTED = 0,
		E_CONNAPI_PROTOMANGLING = 1,
		E_CHECKING_CONNECTION = 2,
		E_CONNECTION_SUCCESS = 3,
		E_CONNECTION_FAILURE = 4,
		E_CONNECTION_STATUS_COUNT = 5,
	}

}

// CgsConnectionStatusMessage.h:48
struct CgsNetwork::PlayerConnectionData {
	// CgsConnectionStatusMessage.h:50
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID mPlayerID;

	// CgsConnectionStatusMessage.h:51
	CgsNetwork::EConnectionStatus meConnectionStatus;

}

// CgsConnectionStatusMessage.h:55
struct CgsNetwork::ConnectionStatusMessage : public CgsNetwork::ReliableMessage {
private:
	// CgsConnectionStatusMessage.h:93
	PlayerConnectionData[7] maConnectionData;

public:
	// CgsConnectionStatusMessage.cpp:45
	void Construct();

	// CgsConnectionStatusMessage.cpp:74
	// Declaration
	void PrepareForSend(const PlayerConnectionData *, uint16_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsConnectionStatusMessage.cpp:78
		using namespace CgsDev::Message;

	}

	// CgsConnectionStatusMessage.cpp:104
	// Declaration
	bool Retrieve(PlayerConnectionData *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsConnectionStatusMessage.cpp:111
		using namespace CgsDev::Message;

	}

	// CgsConnectionStatusMessage.h:71
	void Update();

	// CgsConnectionStatusMessage.cpp:145
	// Declaration
	void Release() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsConnectionStatusMessage.cpp:147
		using namespace CgsDev::Message;

	}

	// CgsConnectionStatusMessage.cpp:165
	void Destruct();

	// CgsConnectionStatusMessage.cpp:205
	virtual int32_t GetPackedMessageSize();

	// CgsConnectionStatusMessage.h:101
	virtual const char * GetName() const;

protected:
	// CgsConnectionStatusMessage.cpp:179
	virtual CgsNetwork::Message::PackOrUnpackResult PackOrUnpack();

}

