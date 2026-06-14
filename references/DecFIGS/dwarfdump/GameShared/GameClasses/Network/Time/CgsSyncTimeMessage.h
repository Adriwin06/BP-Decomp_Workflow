// CgsSyncTimeMessage.h:36
void CgsNetwork::SyncTimeMessage::SyncTimeMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSyncTimeMessage.h:36
struct CgsNetwork::SyncTimeMessage : public CgsNetwork::Message {
private:
	// CgsSyncTimeMessage.h:70
	Time mClientSendTime;

	// CgsSyncTimeMessage.h:71
	Time mHostTime;

	// CgsSyncTimeMessage.h:72
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID mHostPlayerID;

	// CgsSyncTimeMessage.h:73
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID mClientPlayerID;

public:
	// CgsSyncTimeMessage.cpp:51
	void Construct();

	// CgsSyncTimeMessage.cpp:77
	void Prepare(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, Time, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, Time);

	// CgsSyncTimeMessage.cpp:103
	bool Retrieve(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID *, Time *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID *, Time *);

	// CgsSyncTimeMessage.cpp:159
	virtual int32_t GetPackedMessageSize();

	// CgsSyncTimeMessage.h:81
	virtual const char * GetName() const;

protected:
	// CgsSyncTimeMessage.cpp:135
	virtual CgsNetwork::Message::PackOrUnpackResult PackOrUnpack();

}

