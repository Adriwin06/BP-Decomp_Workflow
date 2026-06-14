// BrnRestartTrafficMessage.h:43
struct BrnNetwork::RestartTrafficMessage : public CgsNetwork::ReliableMessage {
private:
	// BrnRestartTrafficMessage.h:84
	RoadRulesRecvData::NetworkPlayerID[8] maPlayerIDsForActiveHulls;

	// BrnRestartTrafficMessage.h:85
	uint16_t[8] mau16ActiveTrafficHulls;

	// BrnRestartTrafficMessage.h:86
	uint16_t mu16FrameSinceStartToResetTraffic;

public:
	// BrnRestartTrafficMessage.cpp:48
	void Construct();

	// BrnRestartTrafficMessage.cpp:64
	void Destruct();

	// BrnRestartTrafficMessage.cpp:82
	void PrepareForSend(uint16_t, uint16_t, const uint16_t *, const RoadRulesRecvData::NetworkPlayerID *);

	// BrnRestartTrafficMessage.cpp:112
	bool Retrieve(uint16_t *, uint16_t *, RoadRulesRecvData::NetworkPlayerID *);

	// BrnRestartTrafficMessage.cpp:148
	virtual int32_t GetPackedMessageSize();

	// BrnRestartTrafficMessage.h:96
	virtual const char * GetName() const;

protected:
	// BrnRestartTrafficMessage.cpp:166
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

}

// BrnRestartTrafficMessage.h:43
void BrnNetwork::RestartTrafficMessage::RestartTrafficMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

