// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct MessageWithPlayerIDs {
	public:
		// CgsMessageWithPlayerIDs.h:139
		// Declaration
		AggressiveMoveData::NetworkPlayerID GetSendingPlayerID() const {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsMessageWithPlayerIDs.h:143
			using namespace CgsDev::Message;

		}

		// CgsMessageWithPlayerIDs.h:201
		// Declaration
		AggressiveMoveData::NetworkPlayerID GetRecvingPlayerID() const {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsMessageWithPlayerIDs.h:205
			using namespace CgsDev::Message;

		}

	}

}

// CgsBitStream.h:26
namespace CgsNetwork {
	// Declaration
	struct MessageWithPlayerIDs {
	public:
		// CgsMessageWithPlayerIDs.h:139
		// Declaration
		RoadRulesRecvData::NetworkPlayerID GetSendingPlayerID() const {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsMessageWithPlayerIDs.h:143
			using namespace CgsDev::Message;

		}

		// CgsMessageWithPlayerIDs.h:201
		// Declaration
		RoadRulesRecvData::NetworkPlayerID GetRecvingPlayerID() const {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsMessageWithPlayerIDs.h:205
			using namespace CgsDev::Message;

		}

		// CgsMessageWithPlayerIDs.h:100
		void Construct();

	}

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct MessageWithPlayerIDs {
	public:
		// CgsMessageWithPlayerIDs.h:139
		// Declaration
		RoadRulesRecvData::NetworkPlayerID GetSendingPlayerID() const {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsMessageWithPlayerIDs.h:143
			using namespace CgsDev::Message;

		}

		// CgsMessageWithPlayerIDs.h:201
		// Declaration
		RoadRulesRecvData::NetworkPlayerID GetRecvingPlayerID() const {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsMessageWithPlayerIDs.h:205
			using namespace CgsDev::Message;

		}

		MessageWithPlayerIDs();

	}

}

// CgsMessageWithPlayerIDs.h:47
void CgsNetwork::MessageWithPlayerIDs::MessageWithPlayerIDs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMessageWithPlayerIDs.h:47
struct CgsNetwork::MessageWithPlayerIDs : public CgsNetwork::Message {
private:
	// CgsMessageWithPlayerIDs.h:82
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID mSendingPlayerID;

	// CgsMessageWithPlayerIDs.h:83
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID mRecvingPlayerID;

public:
	void MessageWithPlayerIDs(const CgsNetwork::MessageWithPlayerIDs &);

	void MessageWithPlayerIDs();

	// CgsMessageWithPlayerIDs.h:100
	void Construct();

	// CgsMessageWithPlayerIDs.h:121
	void SetSendingPlayerID(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsMessageWithPlayerIDs.h:139
	// Declaration
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID GetSendingPlayerID() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsMessageWithPlayerIDs.h:143
		using namespace CgsDev::Message;

	}

	// CgsMessageWithPlayerIDs.h:166
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID GetSendingPlayerIDForNack() const;

	// CgsMessageWithPlayerIDs.h:183
	void SetRecvingPlayerID(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsMessageWithPlayerIDs.h:201
	// Declaration
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID GetRecvingPlayerID() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsMessageWithPlayerIDs.h:205
		using namespace CgsDev::Message;

	}

	// CgsMessageWithPlayerIDs.h:228
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID GetRecvingPlayerIDForNack() const;

	// CgsMessageWithPlayerIDs.cpp:43
	virtual int32_t GetPackedMessageSize();

}

