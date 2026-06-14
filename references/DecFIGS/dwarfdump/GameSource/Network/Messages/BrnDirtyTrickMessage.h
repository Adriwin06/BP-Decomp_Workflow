// BrnDirtyTrickMessage.h:45
struct BrnNetwork::DirtyTrickMessage : public CgsNetwork::ReliableMessage {
private:
	// BrnDirtyTrickMessage.h:88
	RoadRulesRecvData::NetworkPlayerID mAggressorNetworkPlayerID;

	// BrnDirtyTrickMessage.h:89
	RoadRulesRecvData::NetworkPlayerID mVictimNetworkPlayerID;

	// BrnDirtyTrickMessage.h:90
	uint8_t mu8DirtyTrickType;

	// BrnDirtyTrickMessage.h:91
	uint8_t mu8DirtyTrickStatus;

public:
	// BrnDirtyTrickMessage.cpp:51
	void Construct();

	// BrnDirtyTrickMessage.cpp:70
	void Destruct();

	// BrnDirtyTrickMessage.cpp:92
	void PrepareForSend(uint16_t, RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID, uint8_t, uint8_t);

	// BrnDirtyTrickMessage.cpp:129
	bool Retrieve(RoadRulesRecvData::NetworkPlayerID *, RoadRulesRecvData::NetworkPlayerID *, uint8_t *, uint8_t *);

	// BrnDirtyTrickMessage.cpp:168
	virtual int32_t GetPackedMessageSize();

	// BrnDirtyTrickMessage.h:101
	virtual const char * GetName() const;

protected:
	// BrnDirtyTrickMessage.cpp:187
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

}

// BrnDirtyTrickMessage.h:45
void BrnNetwork::DirtyTrickMessage::DirtyTrickMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

