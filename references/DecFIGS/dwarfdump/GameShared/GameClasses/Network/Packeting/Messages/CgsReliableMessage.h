// CgsReliableMessage.h:47
void CgsNetwork::ReliableMessage::ReliableMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsReliableMessage.h:47
struct CgsNetwork::ReliableMessage : public CgsNetwork::MessageWithPlayerIDs {
public:
	// CgsReliableMessage.cpp:64
	void PrepareForSend(EMessageType, uint16_t);

	// CgsReliableMessage.cpp:44
	virtual bool IsReliable() const;

	// CgsReliableMessage.cpp:112
	virtual int32_t GetPackedMessageSize();

protected:
	// CgsReliableMessage.cpp:85
	virtual CgsNetwork::Message::PackOrUnpackResult PackOrUnpack();

}

