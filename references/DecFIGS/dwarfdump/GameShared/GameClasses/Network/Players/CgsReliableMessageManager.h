// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ReliableMessageManager {
		// CgsReliableMessageManager.h:59
		struct BufferedSendMessageData {
			// CgsReliableMessageManager.h:62
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// CgsReliableMessageManager.h:64
			int32_t miLength;

			// CgsReliableMessageManager.h:66
			uint16_t mu16FrameFirstSent;

			// CgsReliableMessageManager.h:68
			uint16_t mu16FrameLastSent;

			// CgsReliableMessageManager.h:70
			CgsNetwork::Message * mpMsg;

		public:
			// CgsReliableMessageManager.h:74
			void Construct(CgsNetwork::Message *);

			// CgsReliableMessageManager.h:80
			void Prepare(RoadRulesRecvData::NetworkPlayerID, CgsNetwork::Message *, int32_t);

		}

		// CgsReliableMessageManager.h:154
		struct StoredRcvdMessageData {
			// CgsReliableMessageManager.h:157
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// CgsReliableMessageManager.h:159
			uint16_t mu16FrameSent;

			// CgsReliableMessageManager.h:161
			int32_t miType;

			// CgsReliableMessageManager.h:166
			int32_t miValidCountdown;

		public:
			// CgsReliableMessageManager.h:169
			void Construct();

		}

	}

	// CgsReliableMessageManager.h:42
	const int32_t KI_MAX_RELIABLE_MESSAGES_RECV_TO_BUFFER = 140;

	// CgsReliableMessageManager.h:43
	const int32_t KI_MAX_RELIABLE_MESSAGES_SEND_TO_BUFFER = 140;

}

// CgsReliableMessageManager.h:54
struct CgsNetwork::ReliableMessageManager {
private:
	// CgsReliableMessageManager.h:194
	CgsNetwork::PlayerManager * mpPlayerManager;

	// CgsReliableMessageManager.h:196
	uint8_t * mpReliableMessageBuffer;

	// CgsReliableMessageManager.h:197
	CgsNetwork::ReliableMessageManager::BufferedSendMessageData[140] maReliableMessageSendData;

	// CgsReliableMessageManager.h:198
	FastBitArray<140> mabValidSendData;

	// CgsReliableMessageManager.h:199
	int32_t miReliableMessageSendIndex;

	// CgsReliableMessageManager.h:201
	int32_t miMaxReliableMessagesSendToBuffer;

	// CgsReliableMessageManager.h:202
	int32_t miNumBufferedReliableMessages;

	// CgsReliableMessageManager.h:204
	CgsNetwork::ReliableMessageManager::StoredRcvdMessageData[140] maReliableMessagesRcvdData;

	// CgsReliableMessageManager.h:205
	int32_t miReliableMessagesRecvdBufferIndex;

	// CgsReliableMessageManager.h:207
	HeapMalloc * mpHeapAllocator;

public:
	// CgsReliableMessageManager.h:84
	void Construct();

	// CgsReliableMessageManager.h:89
	bool Prepare(CgsNetwork::PlayerManager *, HeapMalloc *);

	// CgsReliableMessageManager.h:92
	void Update();

	// CgsReliableMessageManager.h:95
	bool Release();

	// CgsReliableMessageManager.h:98
	void Destruct();

	// CgsReliableMessageManager.h:104
	CgsNetwork::ReliableMessageManager::BufferedSendMessageData * GetBufferedReliableMessage(int32_t);

	// CgsReliableMessageManager.h:110
	int32_t GetNextReliableMessageToResend(RoadRulesRecvData::NetworkPlayerID, uint16_t, int32_t);

	// CgsReliableMessageManager.h:116
	void AddBufferedReliableMessage(RoadRulesRecvData::NetworkPlayerID, CgsNetwork::Message *, int32_t);

	// CgsReliableMessageManager.h:120
	void RemoveBufferedReliableMessage(CgsNetwork::SignalMessage *);

	// CgsReliableMessageManager.h:123
	void ClearSendReliableMessages();

	// CgsReliableMessageManager.h:127
	void ClearPlayersSendReliableMessages(RoadRulesRecvData::NetworkPlayerID);

	// CgsReliableMessageManager.h:130
	void NackReliableMessageQueue();

	// CgsReliableMessageManager.h:138
	bool MessageIsDuplicate(CgsNetwork::Message *);

	// CgsReliableMessageManager.h:141
	int32_t GetMaxReliableMessagesToBuffer();

	// CgsReliableMessageManager.h:144
	void ClearRcvdReliableMessages();

	// CgsReliableMessageManager.h:147
	int32_t GetNumBufferedReliableMessages();

private:
	// CgsReliableMessageManager.h:175
	void CheckForReliableMessageTimeout();

	// CgsReliableMessageManager.h:181
	void UpdateReliableMessagesReceived();

	// CgsReliableMessageManager.h:185
	void RemoveBufferedReliableMessage(int32_t);

	// CgsReliableMessageManager.h:192
	void FakeNackMessage(CgsNetwork::Message *, RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID, bool);

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ReliableMessageManager {
		// CgsReliableMessageManager.h:59
		struct BufferedSendMessageData {
			// CgsReliableMessageManager.h:62
			GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

			// CgsReliableMessageManager.h:64
			int32_t miLength;

			// CgsReliableMessageManager.h:66
			uint16_t mu16FrameFirstSent;

			// CgsReliableMessageManager.h:68
			uint16_t mu16FrameLastSent;

			// CgsReliableMessageManager.h:70
			CgsNetwork::Message * mpMsg;

		public:
			// CgsReliableMessageManager.h:74
			void Construct(CgsNetwork::Message *);

			// CgsReliableMessageManager.h:80
			void Prepare(GuiEventNetworkLaunching::NetworkPlayerID, CgsNetwork::Message *, int32_t);

		}

		// CgsReliableMessageManager.h:154
		struct StoredRcvdMessageData {
			// CgsReliableMessageManager.h:157
			GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

			// CgsReliableMessageManager.h:159
			uint16_t mu16FrameSent;

			// CgsReliableMessageManager.h:161
			int32_t miType;

			// CgsReliableMessageManager.h:166
			int32_t miValidCountdown;

		public:
			// CgsReliableMessageManager.h:169
			void Construct();

		}

	}

	// CgsReliableMessageManager.h:42
	const int32_t KI_MAX_RELIABLE_MESSAGES_RECV_TO_BUFFER = 140;

	// CgsReliableMessageManager.h:43
	const int32_t KI_MAX_RELIABLE_MESSAGES_SEND_TO_BUFFER = 140;

}

// CgsReliableMessageManager.h:54
struct CgsNetwork::ReliableMessageManager {
private:
	// CgsReliableMessageManager.h:194
	CgsNetwork::PlayerManager * mpPlayerManager;

	// CgsReliableMessageManager.h:196
	uint8_t * mpReliableMessageBuffer;

	// CgsReliableMessageManager.h:197
	CgsNetwork::ReliableMessageManager::BufferedSendMessageData[140] maReliableMessageSendData;

	// CgsReliableMessageManager.h:198
	FastBitArray<140> mabValidSendData;

	// CgsReliableMessageManager.h:199
	int32_t miReliableMessageSendIndex;

	// CgsReliableMessageManager.h:201
	int32_t miMaxReliableMessagesSendToBuffer;

	// CgsReliableMessageManager.h:202
	int32_t miNumBufferedReliableMessages;

	// CgsReliableMessageManager.h:204
	CgsNetwork::ReliableMessageManager::StoredRcvdMessageData[140] maReliableMessagesRcvdData;

	// CgsReliableMessageManager.h:205
	int32_t miReliableMessagesRecvdBufferIndex;

	// CgsReliableMessageManager.h:207
	CgsMemory::HeapMalloc * mpHeapAllocator;

public:
	// CgsReliableMessageManager.h:84
	void Construct();

	// CgsReliableMessageManager.h:89
	bool Prepare(CgsNetwork::PlayerManager *, CgsMemory::HeapMalloc *);

	// CgsReliableMessageManager.h:92
	void Update();

	// CgsReliableMessageManager.h:95
	bool Release();

	// CgsReliableMessageManager.h:98
	void Destruct();

	// CgsReliableMessageManager.h:104
	CgsNetwork::ReliableMessageManager::BufferedSendMessageData * GetBufferedReliableMessage(int32_t);

	// CgsReliableMessageManager.h:110
	int32_t GetNextReliableMessageToResend(GuiEventNetworkLaunching::NetworkPlayerID, uint16_t, int32_t);

	// CgsReliableMessageManager.h:116
	void AddBufferedReliableMessage(GuiEventNetworkLaunching::NetworkPlayerID, CgsNetwork::Message *, int32_t);

	// CgsReliableMessageManager.h:120
	void RemoveBufferedReliableMessage(CgsNetwork::SignalMessage *);

	// CgsReliableMessageManager.h:123
	void ClearSendReliableMessages();

	// CgsReliableMessageManager.h:127
	void ClearPlayersSendReliableMessages(GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsReliableMessageManager.h:130
	void NackReliableMessageQueue();

	// CgsReliableMessageManager.h:138
	bool MessageIsDuplicate(CgsNetwork::Message *);

	// CgsReliableMessageManager.h:141
	int32_t GetMaxReliableMessagesToBuffer();

	// CgsReliableMessageManager.h:144
	void ClearRcvdReliableMessages();

	// CgsReliableMessageManager.h:147
	int32_t GetNumBufferedReliableMessages();

private:
	// CgsReliableMessageManager.h:175
	void CheckForReliableMessageTimeout();

	// CgsReliableMessageManager.h:181
	void UpdateReliableMessagesReceived();

	// CgsReliableMessageManager.h:185
	void RemoveBufferedReliableMessage(int32_t);

	// CgsReliableMessageManager.h:192
	void FakeNackMessage(CgsNetwork::Message *, GuiEventNetworkLaunching::NetworkPlayerID, GuiEventNetworkLaunching::NetworkPlayerID, bool);

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ReliableMessageManager {
		// CgsReliableMessageManager.h:59
		struct BufferedSendMessageData {
			// CgsReliableMessageManager.h:62
			AggressiveMoveData::NetworkPlayerID mPlayerID;

			// CgsReliableMessageManager.h:64
			int32_t miLength;

			// CgsReliableMessageManager.h:66
			uint16_t mu16FrameFirstSent;

			// CgsReliableMessageManager.h:68
			uint16_t mu16FrameLastSent;

			// CgsReliableMessageManager.h:70
			CgsNetwork::Message * mpMsg;

		public:
			// CgsReliableMessageManager.h:74
			void Construct(CgsNetwork::Message *);

			// CgsReliableMessageManager.h:80
			void Prepare(AggressiveMoveData::NetworkPlayerID, CgsNetwork::Message *, int32_t);

		}

		// CgsReliableMessageManager.h:154
		struct StoredRcvdMessageData {
			// CgsReliableMessageManager.h:157
			AggressiveMoveData::NetworkPlayerID mPlayerID;

			// CgsReliableMessageManager.h:159
			uint16_t mu16FrameSent;

			// CgsReliableMessageManager.h:161
			int32_t miType;

			// CgsReliableMessageManager.h:166
			int32_t miValidCountdown;

		public:
			// CgsReliableMessageManager.h:169
			void Construct();

		}

	}

	// CgsReliableMessageManager.h:42
	const int32_t KI_MAX_RELIABLE_MESSAGES_RECV_TO_BUFFER = 140;

	// CgsReliableMessageManager.h:43
	const int32_t KI_MAX_RELIABLE_MESSAGES_SEND_TO_BUFFER = 140;

}

// CgsReliableMessageManager.h:54
struct CgsNetwork::ReliableMessageManager {
private:
	// CgsReliableMessageManager.h:194
	CgsNetwork::PlayerManager * mpPlayerManager;

	// CgsReliableMessageManager.h:196
	uint8_t * mpReliableMessageBuffer;

	// CgsReliableMessageManager.h:197
	CgsNetwork::ReliableMessageManager::BufferedSendMessageData[140] maReliableMessageSendData;

	// CgsReliableMessageManager.h:198
	FastBitArray<140> mabValidSendData;

	// CgsReliableMessageManager.h:199
	int32_t miReliableMessageSendIndex;

	// CgsReliableMessageManager.h:201
	int32_t miMaxReliableMessagesSendToBuffer;

	// CgsReliableMessageManager.h:202
	int32_t miNumBufferedReliableMessages;

	// CgsReliableMessageManager.h:204
	CgsNetwork::ReliableMessageManager::StoredRcvdMessageData[140] maReliableMessagesRcvdData;

	// CgsReliableMessageManager.h:205
	int32_t miReliableMessagesRecvdBufferIndex;

	// CgsReliableMessageManager.h:207
	HeapMalloc * mpHeapAllocator;

public:
	// CgsReliableMessageManager.h:84
	void Construct();

	// CgsReliableMessageManager.h:89
	bool Prepare(CgsNetwork::PlayerManager *, HeapMalloc *);

	// CgsReliableMessageManager.h:92
	void Update();

	// CgsReliableMessageManager.h:95
	bool Release();

	// CgsReliableMessageManager.h:98
	void Destruct();

	// CgsReliableMessageManager.h:104
	CgsNetwork::ReliableMessageManager::BufferedSendMessageData * GetBufferedReliableMessage(int32_t);

	// CgsReliableMessageManager.h:110
	int32_t GetNextReliableMessageToResend(AggressiveMoveData::NetworkPlayerID, uint16_t, int32_t);

	// CgsReliableMessageManager.h:116
	void AddBufferedReliableMessage(AggressiveMoveData::NetworkPlayerID, CgsNetwork::Message *, int32_t);

	// CgsReliableMessageManager.h:120
	void RemoveBufferedReliableMessage(CgsNetwork::SignalMessage *);

	// CgsReliableMessageManager.h:123
	void ClearSendReliableMessages();

	// CgsReliableMessageManager.h:127
	void ClearPlayersSendReliableMessages(AggressiveMoveData::NetworkPlayerID);

	// CgsReliableMessageManager.h:130
	void NackReliableMessageQueue();

	// CgsReliableMessageManager.h:138
	bool MessageIsDuplicate(CgsNetwork::Message *);

	// CgsReliableMessageManager.h:141
	int32_t GetMaxReliableMessagesToBuffer();

	// CgsReliableMessageManager.h:144
	void ClearRcvdReliableMessages();

	// CgsReliableMessageManager.h:147
	int32_t GetNumBufferedReliableMessages();

private:
	// CgsReliableMessageManager.h:175
	void CheckForReliableMessageTimeout();

	// CgsReliableMessageManager.h:181
	void UpdateReliableMessagesReceived();

	// CgsReliableMessageManager.h:185
	void RemoveBufferedReliableMessage(int32_t);

	// CgsReliableMessageManager.h:192
	void FakeNackMessage(CgsNetwork::Message *, AggressiveMoveData::NetworkPlayerID, AggressiveMoveData::NetworkPlayerID, bool);

}

// CgsBitStream.h:26
namespace CgsNetwork {
	// Declaration
	struct ReliableMessageManager {
		// CgsReliableMessageManager.h:59
		struct BufferedSendMessageData {
			// CgsReliableMessageManager.h:62
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// CgsReliableMessageManager.h:64
			int32_t miLength;

			// CgsReliableMessageManager.h:66
			uint16_t mu16FrameFirstSent;

			// CgsReliableMessageManager.h:68
			uint16_t mu16FrameLastSent;

			// CgsReliableMessageManager.h:70
			CgsNetwork::Message * mpMsg;

		public:
			// CgsReliableMessageManager.h:74
			void Construct(CgsNetwork::Message *);

			// CgsReliableMessageManager.h:80
			void Prepare(RoadRulesRecvData::NetworkPlayerID, CgsNetwork::Message *, int32_t);

		}

		// CgsReliableMessageManager.h:154
		struct StoredRcvdMessageData {
			// CgsReliableMessageManager.h:157
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// CgsReliableMessageManager.h:159
			uint16_t mu16FrameSent;

			// CgsReliableMessageManager.h:161
			int32_t miType;

			// CgsReliableMessageManager.h:166
			int32_t miValidCountdown;

		public:
			// CgsReliableMessageManager.h:169
			void Construct();

		}

	}

	// CgsReliableMessageManager.h:42
	const int32_t KI_MAX_RELIABLE_MESSAGES_RECV_TO_BUFFER = 140;

	// CgsReliableMessageManager.h:43
	const int32_t KI_MAX_RELIABLE_MESSAGES_SEND_TO_BUFFER = 140;

}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct ReliableMessageManager {
		// CgsReliableMessageManager.h:59
		struct BufferedSendMessageData {
			// CgsReliableMessageManager.h:62
			CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID mPlayerID;

			// CgsReliableMessageManager.h:64
			int32_t miLength;

			// CgsReliableMessageManager.h:66
			uint16_t mu16FrameFirstSent;

			// CgsReliableMessageManager.h:68
			uint16_t mu16FrameLastSent;

			// CgsReliableMessageManager.h:70
			CgsNetwork::Message * mpMsg;

		public:
			// CgsReliableMessageManager.h:74
			void Construct(CgsNetwork::Message *);

			// CgsReliableMessageManager.h:80
			void Prepare(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, CgsNetwork::Message *, int32_t);

		}

		// CgsReliableMessageManager.h:154
		struct StoredRcvdMessageData {
			// CgsReliableMessageManager.h:157
			CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID mPlayerID;

			// CgsReliableMessageManager.h:159
			uint16_t mu16FrameSent;

			// CgsReliableMessageManager.h:161
			int32_t miType;

			// CgsReliableMessageManager.h:166
			int32_t miValidCountdown;

		public:
			// CgsReliableMessageManager.h:169
			void Construct();

		}

	}

	// CgsReliableMessageManager.h:42
	const int32_t KI_MAX_RELIABLE_MESSAGES_RECV_TO_BUFFER = 140;

	// CgsReliableMessageManager.h:43
	const int32_t KI_MAX_RELIABLE_MESSAGES_SEND_TO_BUFFER = 140;

}

// CgsReliableMessageManager.h:54
struct CgsNetwork::ReliableMessageManager {
private:
	// CgsReliableMessageManager.h:194
	CgsNetwork::PlayerManager * mpPlayerManager;

	// CgsReliableMessageManager.h:196
	uint8_t * mpReliableMessageBuffer;

	// CgsReliableMessageManager.h:197
	CgsNetwork::ReliableMessageManager::BufferedSendMessageData[140] maReliableMessageSendData;

	// CgsReliableMessageManager.h:198
	FastBitArray<140> mabValidSendData;

	// CgsReliableMessageManager.h:199
	int32_t miReliableMessageSendIndex;

	// CgsReliableMessageManager.h:201
	int32_t miMaxReliableMessagesSendToBuffer;

	// CgsReliableMessageManager.h:202
	int32_t miNumBufferedReliableMessages;

	// CgsReliableMessageManager.h:204
	CgsNetwork::ReliableMessageManager::StoredRcvdMessageData[140] maReliableMessagesRcvdData;

	// CgsReliableMessageManager.h:205
	int32_t miReliableMessagesRecvdBufferIndex;

	// CgsReliableMessageManager.h:207
	CgsMemory::HeapMalloc * mpHeapAllocator;

public:
	// CgsReliableMessageManager.h:84
	void Construct();

	// CgsReliableMessageManager.h:89
	bool Prepare(CgsNetwork::PlayerManager *, CgsMemory::HeapMalloc *);

	// CgsReliableMessageManager.h:92
	void Update();

	// CgsReliableMessageManager.h:95
	bool Release();

	// CgsReliableMessageManager.h:98
	void Destruct();

	// CgsReliableMessageManager.h:104
	CgsNetwork::ReliableMessageManager::BufferedSendMessageData * GetBufferedReliableMessage(int32_t);

	// CgsReliableMessageManager.h:110
	int32_t GetNextReliableMessageToResend(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, uint16_t, int32_t);

	// CgsReliableMessageManager.h:116
	void AddBufferedReliableMessage(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, CgsNetwork::Message *, int32_t);

	// CgsReliableMessageManager.h:120
	void RemoveBufferedReliableMessage(CgsNetwork::SignalMessage *);

	// CgsReliableMessageManager.h:123
	// Declaration
	void ClearSendReliableMessages() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsReliableMessageManager.cpp:429
		using namespace CgsDev::Message;

	}

	// CgsReliableMessageManager.h:127
	// Declaration
	void ClearPlayersSendReliableMessages(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsReliableMessageManager.cpp:457
		using namespace CgsDev::Message;

	}

	// CgsReliableMessageManager.h:130
	void NackReliableMessageQueue();

	// CgsReliableMessageManager.h:138
	// Declaration
	bool MessageIsDuplicate(CgsNetwork::Message *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsReliableMessageManager.cpp:635
		using namespace CgsDev::Message;

		// CgsReliableMessageManager.cpp:645
		using namespace CgsDev::Message;

	}

	// CgsReliableMessageManager.h:141
	int32_t GetMaxReliableMessagesToBuffer();

	// CgsReliableMessageManager.h:144
	void ClearRcvdReliableMessages();

	// CgsReliableMessageManager.h:147
	int32_t GetNumBufferedReliableMessages();

private:
	// CgsReliableMessageManager.h:175
	// Declaration
	void CheckForReliableMessageTimeout() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsReliableMessageManager.cpp:524
		using namespace CgsDev::Message;

		// CgsReliableMessageManager.cpp:528
		using namespace CgsDev::Message;

	}

	// CgsReliableMessageManager.h:181
	// Declaration
	void UpdateReliableMessagesReceived() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsReliableMessageManager.cpp:724
		using namespace CgsDev::Message;

	}

	// CgsReliableMessageManager.h:185
	void RemoveBufferedReliableMessage(int32_t);

	// CgsReliableMessageManager.h:192
	// Declaration
	void FakeNackMessage(CgsNetwork::Message *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsReliableMessageManager.cpp:578
		using namespace CgsDev::Message;

		// CgsReliableMessageManager.cpp:581
		using namespace CgsDev::Message;

		// CgsReliableMessageManager.cpp:587
		using namespace CgsDev::Message;

	}

}

