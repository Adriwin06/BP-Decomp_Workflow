// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct ImageMessage {
		// BrnImageMessage.h:92
		extern const int32_t KI_MAX_PHOTO_PACKETS = 50;

		// BrnImageMessage.h:93
		extern const int32_t KI_PHOTO_SEGMENT_SIZE = 500;

	}

}

// BrnImageMessage.h:92
extern const int32_t KI_MAX_PHOTO_PACKETS = 50;

// BrnImageMessage.h:93
extern const int32_t KI_PHOTO_SEGMENT_SIZE = 500;

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct ImageMessage {
		// BrnImageMessage.h:92
		extern const int32_t KI_MAX_PHOTO_PACKETS = 50;

		// BrnImageMessage.h:93
		extern const int32_t KI_PHOTO_SEGMENT_SIZE = 500;

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct ImageMessage {
		// BrnImageMessage.h:92
		extern const int32_t KI_MAX_PHOTO_PACKETS = 50;

		// BrnImageMessage.h:93
		extern const int32_t KI_PHOTO_SEGMENT_SIZE = 500;

	}

}

// BrnImageMessage.h:45
struct BrnNetwork::ImageMessage : public CgsNetwork::ReliableMessage {
	// BrnImageMessage.h:92
	extern const int32_t KI_MAX_PHOTO_PACKETS = 50;

	// BrnImageMessage.h:93
	extern const int32_t KI_PHOTO_SEGMENT_SIZE = 500;

private:
	// BrnImageMessage.h:103
	char[500] macPhotoBuffer;

	// BrnImageMessage.h:105
	CgsID mBeatenRoadID;

	// BrnImageMessage.h:107
	RoadRulesRecvData::NetworkPlayerID mImageSenderPlayerID;

	// BrnImageMessage.h:108
	RoadRulesRecvData::NetworkPlayerID mImageReceiverPlayerID;

	// BrnImageMessage.h:110
	uint16_t mu16PhotoPacketNumber;

	// BrnImageMessage.h:111
	uint16_t mu16TotalPhotoPacketCount;

	// BrnImageMessage.h:112
	uint16_t mu16NumberOfBytesOfPhotoData;

	// BrnImageMessage.h:113
	uint8_t mu8ImageType;

public:
	// BrnImageMessage.cpp:51
	void Construct();

	// BrnImageMessage.cpp:78
	void Destruct();

	// BrnImageMessage.cpp:109
	void PrepareForSend(uint16_t, RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID, BrnGameState::GameStateModuleIO::EImageType, CgsID, uint16_t, uint16_t, uint16_t, void *);

	// BrnImageMessage.cpp:171
	bool Retrieve(RoadRulesRecvData::NetworkPlayerID *, RoadRulesRecvData::NetworkPlayerID *, BrnGameState::GameStateModuleIO::EImageType *, CgsID *, uint16_t *, uint16_t *, uint16_t *, void *);

	// BrnImageMessage.cpp:222
	virtual int32_t GetPackedMessageSize();

	// BrnImageMessage.h:123
	virtual const char * GetName() const;

	// BrnImageMessage.cpp:275
	virtual bool OldMessagesAreValid() const;

protected:
	// BrnImageMessage.cpp:244
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct ImageMessage {
	public:
		ImageMessage();

		// Unknown accessibility
		// BrnImageMessage.h:92
		extern const int32_t KI_MAX_PHOTO_PACKETS = 50;

		// Unknown accessibility
		// BrnImageMessage.h:93
		extern const int32_t KI_PHOTO_SEGMENT_SIZE = 500;

	}

}

// BrnImageMessage.h:45
void BrnNetwork::ImageMessage::ImageMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

