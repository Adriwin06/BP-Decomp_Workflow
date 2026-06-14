// CgsNewHostMessage.h:46
void CgsNetwork::NewHostMessage::NewHostMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNewHostMessage.h:46
struct CgsNetwork::NewHostMessage : public CgsNetwork::Message {
private:
	// CgsNewHostMessage.h:75
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID mNewHostID;

	// CgsNewHostMessage.h:76
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID[8] maReceivedClientsIDs;

public:
	// CgsNewHostMessage.cpp:43
	void Construct();

	// CgsNewHostMessage.cpp:73
	void PrepareForSend(uint16_t, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID *);

	// CgsNewHostMessage.cpp:102
	bool Retrieve(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID *);

	// CgsNewHostMessage.cpp:165
	virtual int32_t GetPackedMessageSize();

	// CgsNewHostMessage.h:83
	virtual const char * GetName() const;

protected:
	// CgsNewHostMessage.cpp:138
	virtual CgsNetwork::Message::PackOrUnpackResult PackOrUnpack();

}

