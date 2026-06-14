// BrnTrafficHashMessage.h:45
struct BrnNetwork::TrafficHashMessage : public CgsNetwork::Message {
private:
	// BrnTrafficHashMessage.h:91
	uint16_t mu16SyncedFrameSinceStart;

	// BrnTrafficHashMessage.h:92
	uint16_t mu16TrafficHash;

	// BrnTrafficHashMessage.h:93
	uint16_t mu16Update10HzFrame;

public:
	// BrnTrafficHashMessage.cpp:49
	void Construct();

	// BrnTrafficHashMessage.cpp:67
	void Destruct();

	// BrnTrafficHashMessage.cpp:87
	void PrepareForSend(uint16_t, uint16_t, uint16_t, uint16_t);

	// BrnTrafficHashMessage.cpp:119
	bool Retrieve(uint16_t *, uint16_t *, uint16_t *);

	// BrnTrafficHashMessage.cpp:153
	virtual int32_t GetPackedMessageSize();

	// BrnTrafficHashMessage.cpp:193
	virtual bool OldMessagesAreValid() const;

	// BrnTrafficHashMessage.h:105
	virtual const char * GetName() const;

protected:
	// BrnTrafficHashMessage.cpp:171
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

}

// BrnTrafficHashMessage.h:45
void BrnNetwork::TrafficHashMessage::TrafficHashMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

