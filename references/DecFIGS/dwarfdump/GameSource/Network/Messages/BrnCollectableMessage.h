// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct CollectableMessage {
		// BrnCollectableMessage.h:47
		enum ECollectableType {
			E_COLLECTABLE_TYPE_JUMP = 0,
			E_COLLECTABLE_TYPE_SMASH = 1,
			E_COLLECTABLE_TYPE_BILLBOARD = 2,
			E_COLLECTABLE_TYPE_MAX = 3,
		}

	}

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct CollectableMessage {
		// BrnCollectableMessage.h:47
		enum ECollectableType {
			E_COLLECTABLE_TYPE_JUMP = 0,
			E_COLLECTABLE_TYPE_SMASH = 1,
			E_COLLECTABLE_TYPE_BILLBOARD = 2,
			E_COLLECTABLE_TYPE_MAX = 3,
		}

	}

}

// BrnCollectableMessage.h:44
struct BrnNetwork::CollectableMessage : public CgsNetwork::ReliableMessage {
private:
	// BrnCollectableMessage.h:92
	CgsID mCollectableID;

	// BrnCollectableMessage.h:93
	BrnNetwork::CollectableMessage::ECollectableType meType;

public:
	// BrnCollectableMessage.cpp:43
	void Construct();

	// BrnCollectableMessage.cpp:60
	void PrepareForSend(uint16_t, CgsID, BrnNetwork::CollectableMessage::ECollectableType);

	// BrnCollectableMessage.cpp:95
	bool Retrieve(CgsID *, BrnNetwork::CollectableMessage::ECollectableType *);

	// BrnCollectableMessage.cpp:131
	virtual int32_t GetPackedMessageSize();

	// BrnCollectableMessage.h:103
	virtual const char * GetName() const;

	// BrnCollectableMessage.cpp:173
	virtual bool OldMessagesAreValid() const;

protected:
	// BrnCollectableMessage.cpp:148
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

}

// BrnCollectableMessage.h:44
void BrnNetwork::CollectableMessage::CollectableMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

