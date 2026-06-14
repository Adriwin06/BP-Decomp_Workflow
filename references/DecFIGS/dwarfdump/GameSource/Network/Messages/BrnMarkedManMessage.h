// BrnMarkedManMessage.h:43
struct BrnNetwork::MarkedManMessage : public CgsNetwork::ReliableMessage {
private:
	// BrnMarkedManMessage.h:80
	RoadRulesRecvData::NetworkPlayerID mMarkedMan;

	// BrnMarkedManMessage.h:81
	bool mbFinalAnswer;

public:
	// BrnMarkedManMessage.cpp:44
	void Construct();

	// BrnMarkedManMessage.cpp:60
	void Destruct();

	// BrnMarkedManMessage.cpp:78
	void PrepareForSend(uint16_t, RoadRulesRecvData::NetworkPlayerID, bool);

	// BrnMarkedManMessage.cpp:107
	bool Retrieve(RoadRulesRecvData::NetworkPlayerID *, bool *);

	// BrnMarkedManMessage.cpp:152
	virtual int32_t GetPackedMessageSize();

	// BrnMarkedManMessage.h:91
	virtual const char * GetName() const;

protected:
	// BrnMarkedManMessage.cpp:140
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

}

// BrnMarkedManMessage.h:43
void BrnNetwork::MarkedManMessage::MarkedManMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

