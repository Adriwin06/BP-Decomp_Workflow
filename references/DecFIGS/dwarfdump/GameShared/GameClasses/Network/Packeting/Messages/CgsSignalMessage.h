// CgsSignalMessage.h:46
void CgsNetwork::SignalMessage::SignalMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSignalMessage.h:46
struct CgsNetwork::SignalMessage : public CgsNetwork::MessageWithPlayerIDs {
public:
	void SignalMessage(const SignalMessage &);

	void SignalMessage();

	// CgsSignalMessage.h:96
	void PrepareAck(CgsNetwork::Message *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsSignalMessage.h:124
	void PrepareNack(CgsNetwork::Message *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsSignalMessage.cpp:71
	virtual int32_t GetPackedMessageSize();

	// CgsSignalMessage.h:138
	virtual const char * GetName() const;

protected:
	// CgsSignalMessage.cpp:43
	virtual CgsNetwork::Message::PackOrUnpackResult PackOrUnpack();

}

