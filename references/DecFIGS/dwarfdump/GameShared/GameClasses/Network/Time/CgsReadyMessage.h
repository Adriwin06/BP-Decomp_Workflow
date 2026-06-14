// CgsReadyMessage.h:36
struct CgsNetwork::ReadyMessage : public CgsNetwork::ReliableMessage {
public:
	void ReadyMessage(const ReadyMessage &);

	void ReadyMessage();

	// CgsReadyMessage.h:40
	void Construct();

	// CgsReadyMessage.h:44
	void PrepareForSend(uint16_t);

	// CgsReadyMessage.h:47
	bool Retrieve();

	// CgsReadyMessage.h:50
	void Release();

	// CgsReadyMessage.h:53
	void Destruct();

	// CgsReadyMessage.h:56
	virtual int32_t GetPackedMessageSize();

	// CgsReadyMessage.h:75
	virtual const char * GetName() const;

protected:
	// CgsReadyMessage.h:63
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

}

// CgsReadyMessage.h:36
void CgsNetwork::ReadyMessage::ReadyMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

