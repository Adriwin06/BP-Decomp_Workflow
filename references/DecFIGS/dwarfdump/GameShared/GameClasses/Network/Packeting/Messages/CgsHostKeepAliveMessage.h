// CgsHostKeepAliveMessage.h:46
void CgsNetwork::HostKeepAliveMessage::HostKeepAliveMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHostKeepAliveMessage.h:46
struct CgsNetwork::HostKeepAliveMessage : public CgsNetwork::Message {
public:
	// CgsHostKeepAliveMessage.h:86
	void Construct();

	// CgsHostKeepAliveMessage.h:104
	void PrepareForSend(uint16_t);

	// CgsHostKeepAliveMessage.h:120
	bool Retrieve();

	// CgsHostKeepAliveMessage.h:147
	virtual const char * GetName() const;

protected:
	// CgsHostKeepAliveMessage.cpp:59
	virtual CgsNetwork::Message::PackOrUnpackResult PackOrUnpack();

	// CgsHostKeepAliveMessage.cpp:43
	virtual int32_t GetPackedMessageSize();

}

