// CgsPingMessage.h:47
void CgsNetwork::PingMessage::PingMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPingMessage.h:91
void CgsNetwork::PingReplyMessage::PingReplyMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPingMessage.h:91
struct CgsNetwork::PingReplyMessage : public CgsNetwork::Message {
private:
	// CgsPingMessage.h:126
	float_t mfPingTime;

public:
	// CgsPingMessage.cpp:221
	void Construct();

	// CgsPingMessage.cpp:242
	void PrepareForSend(uint16_t, float_t);

	// CgsPingMessage.cpp:271
	bool Retrieve(float_t *);

	// CgsPingMessage.cpp:305
	void Release();

	// CgsPingMessage.cpp:324
	void Destruct();

	// CgsPingMessage.cpp:364
	virtual int32_t GetPackedMessageSize();

	// CgsPingMessage.h:148
	virtual const char * GetName() const;

protected:
	// CgsPingMessage.cpp:338
	virtual CgsNetwork::Message::PackOrUnpackResult PackOrUnpack();

}

// CgsPingMessage.h:47
struct CgsNetwork::PingMessage : public CgsNetwork::Message {
private:
	// CgsPingMessage.h:82
	float_t mfPingTime;

public:
	// CgsPingMessage.cpp:56
	void Construct();

	// CgsPingMessage.cpp:77
	void PrepareForSend(uint16_t, float_t);

	// CgsPingMessage.cpp:106
	bool Retrieve(float_t *);

	// CgsPingMessage.cpp:140
	void Release();

	// CgsPingMessage.cpp:159
	void Destruct();

	// CgsPingMessage.cpp:199
	virtual int32_t GetPackedMessageSize();

	// CgsPingMessage.h:142
	virtual const char * GetName() const;

protected:
	// CgsPingMessage.cpp:173
	virtual CgsNetwork::Message::PackOrUnpackResult PackOrUnpack();

}

