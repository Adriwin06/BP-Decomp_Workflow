// CgsHeadsetStatusMessage.h:36
void CgsNetwork::HeadsetStatusMessage::HeadsetStatusMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHeadsetStatusMessage.h:36
struct CgsNetwork::HeadsetStatusMessage : public CgsNetwork::Message {
private:
	// CgsHeadsetStatusMessage.h:73
	uint8_t mu8HeadsetStatus;

public:
	HeadsetStatusMessage & operator=(const HeadsetStatusMessage &);

	void HeadsetStatusMessage(const HeadsetStatusMessage &);

	void HeadsetStatusMessage();

	// CgsHeadsetStatusMessage.cpp:47
	void Construct();

	// CgsHeadsetStatusMessage.cpp:79
	void PrepareForSend(uint16_t, uint8_t);

	// CgsHeadsetStatusMessage.cpp:103
	bool Retrieve(uint8_t *);

	// CgsHeadsetStatusMessage.cpp:63
	void Destruct();

	// CgsHeadsetStatusMessage.cpp:136
	virtual int32_t GetPackedMessageSize();

	// CgsHeadsetStatusMessage.h:83
	virtual const char * GetName() const;

protected:
	// CgsHeadsetStatusMessage.cpp:152
	virtual CgsNetwork::Message::PackOrUnpackResult PackOrUnpack();

}

// CgsHeadsetStatusMessage.h:36
void CgsNetwork::HeadsetStatusMessage::operator=(const const HeadsetStatusMessage &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

