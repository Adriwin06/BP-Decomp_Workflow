// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct FakeNetworkConditions {
		// CgsFakeNetworkConditions.h:77
		struct BufferedMessageData {
			// CgsConnectionDataPS3.h:88
			typedef ConnectionDataPS3 ConnectionData;

		}

	}

	// CgsFakeNetworkConditions.h:35
	const int32_t KI_DELAYED_MESSAGES_TO_BUFFER = 128;

}

// CgsFakeNetworkConditions.h:45
struct CgsNetwork::FakeNetworkConditions {
private:
	// CgsFakeNetworkConditions.h:112
	bool mbEnable;

public:
	// CgsFakeNetworkConditions.h:50
	// Declaration
	void Construct() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsNetworkAdapterDeclarations.h:39
		typedef CgsNetwork::NetworkAdapterPS3 NetworkAdapter;

	}

	// CgsFakeNetworkConditions.h:53
	void Prepare();

	// CgsFakeNetworkConditions.h:56
	void Update();

	// CgsFakeNetworkConditions.h:59
	void Release();

	// CgsFakeNetworkConditions.h:62
	void Destruct();

	// CgsFakeNetworkConditions.h:68
	bool FakeNetworkConditionsWillDealWithThisPacket(uint8_t *, int32_t, CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData);

	// Unknown accessibility
	// CgsFakeNetworkConditions.h:42
	typedef void (void *) MessageSentCallback;

	// CgsFakeNetworkConditions.h:72
	FakeNetworkConditions::MessageSentCallback * SetMessageSentCallback(FakeNetworkConditions::MessageSentCallback *);

private:
	// CgsFakeNetworkConditions.h:97
	bool IsRandomPacketDrop();

	// CgsFakeNetworkConditions.h:100
	int32_t GetPacketDelayTime();

	// CgsFakeNetworkConditions.h:103
	void Enable();

	// CgsFakeNetworkConditions.h:106
	void Disable();

	// CgsFakeNetworkConditions.h:109
	void SendDelayedMessages();

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsFakeNetworkConditions.h:35
	const int32_t KI_DELAYED_MESSAGES_TO_BUFFER = 128;

}

// CgsFakeNetworkConditions.h:45
struct CgsNetwork::FakeNetworkConditions {
private:
	// CgsFakeNetworkConditions.h:112
	bool mbEnable;

public:
	// CgsFakeNetworkConditions.h:50
	// Declaration
	void Construct() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsNetworkAdapterDeclarations.h:39
		typedef CgsNetwork::NetworkAdapterPS3 NetworkAdapter;

	}

	// CgsFakeNetworkConditions.h:53
	void Prepare();

	// CgsFakeNetworkConditions.h:56
	void Update();

	// CgsFakeNetworkConditions.h:59
	void Release();

	// CgsFakeNetworkConditions.h:62
	void Destruct();

	// CgsFakeNetworkConditions.h:68
	bool FakeNetworkConditionsWillDealWithThisPacket(uint8_t *, int32_t, CgsNetwork::PlayersConnectionManager::ConnectionDataEntry::ConnectionData);

	// Unknown accessibility
	// CgsFakeNetworkConditions.h:42
	typedef void (void *) MessageSentCallback;

	// CgsFakeNetworkConditions.h:72
	FakeNetworkConditions::MessageSentCallback * SetMessageSentCallback(FakeNetworkConditions::MessageSentCallback *);

private:
	// CgsFakeNetworkConditions.h:97
	bool IsRandomPacketDrop();

	// CgsFakeNetworkConditions.h:100
	int32_t GetPacketDelayTime();

	// CgsFakeNetworkConditions.h:103
	void Enable();

	// CgsFakeNetworkConditions.h:106
	void Disable();

	// CgsFakeNetworkConditions.h:109
	void SendDelayedMessages();

}

// CgsBitStream.h:26
namespace CgsNetwork {
	// Declaration
	struct FakeNetworkConditions {
		// CgsFakeNetworkConditions.h:77
		struct BufferedMessageData {
			// CgsConnectionDataPS3.h:88
			typedef ConnectionDataPS3 ConnectionData;

		}

	}

	// CgsFakeNetworkConditions.h:35
	const int32_t KI_DELAYED_MESSAGES_TO_BUFFER = 128;

}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct FakeNetworkConditions {
		// CgsFakeNetworkConditions.h:77
		struct BufferedMessageData {
			// CgsFakeNetworkConditions.h:90
			uint8_t * mpData;

			// CgsFakeNetworkConditions.h:91
			int32_t miLength;

			// CgsConnectionDataPS3.h:88
			typedef ConnectionDataPS3 ConnectionData;

			// CgsFakeNetworkConditions.h:92
			CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData mConnectionData;

			// CgsFakeNetworkConditions.h:93
			int32_t miFramesBeforeSend;

		public:
			// CgsFakeNetworkConditions.h:81
			void Construct(uint8_t *);

			// CgsFakeNetworkConditions.h:88
			void Prepare(uint8_t *, int32_t, CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData, int32_t);

		}

	}

	// CgsFakeNetworkConditions.h:35
	const int32_t KI_DELAYED_MESSAGES_TO_BUFFER = 128;

}

// CgsFakeNetworkConditions.h:45
struct CgsNetwork::FakeNetworkConditions {
private:
	// CgsFakeNetworkConditions.h:112
	bool mbEnable;

public:
	// CgsFakeNetworkConditions.h:50
	// Declaration
	void Construct(NetworkAdapter *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsNetworkAdapterDeclarations.h:39
		typedef CgsNetwork::NetworkAdapterPS3 NetworkAdapter;

	}

	// CgsFakeNetworkConditions.h:53
	void Prepare();

	// CgsFakeNetworkConditions.h:56
	void Update();

	// CgsFakeNetworkConditions.h:59
	void Release();

	// CgsFakeNetworkConditions.h:62
	void Destruct();

	// CgsFakeNetworkConditions.h:68
	bool FakeNetworkConditionsWillDealWithThisPacket(uint8_t *, int32_t, CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData);

	// Unknown accessibility
	// CgsFakeNetworkConditions.h:42
	typedef void (void *) MessageSentCallback;

	// CgsFakeNetworkConditions.h:72
	FakeNetworkConditions::MessageSentCallback * SetMessageSentCallback(FakeNetworkConditions::MessageSentCallback *);

private:
	// CgsFakeNetworkConditions.h:97
	bool IsRandomPacketDrop();

	// CgsFakeNetworkConditions.h:100
	int32_t GetPacketDelayTime();

	// CgsFakeNetworkConditions.h:103
	void Enable();

	// CgsFakeNetworkConditions.h:106
	void Disable();

	// CgsFakeNetworkConditions.h:109
	void SendDelayedMessages();

}

