// CgsStartTimeMessage.h:38
struct CgsNetwork::StartTime {
	// CgsStartTimeMessage.h:40
	RoadRulesRecvData::NetworkPlayerID mHostID;

	// CgsStartTimeMessage.h:41
	Time mStartTime;

}

// CgsStartTimeMessage.h:38
struct CgsNetwork::StartTime {
	// CgsStartTimeMessage.h:40
	GuiEventNetworkLaunching::NetworkPlayerID mHostID;

	// CgsStartTimeMessage.h:41
	Time mStartTime;

}

// CgsStartTimeMessage.h:38
struct CgsNetwork::StartTime {
	// CgsStartTimeMessage.h:40
	AggressiveMoveData::NetworkPlayerID mHostID;

	// CgsStartTimeMessage.h:41
	Time mStartTime;

}

// CgsStartTimeMessage.h:47
void CgsNetwork::StartTimeMessage::StartTimeMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsStartTimeMessage.h:38
struct CgsNetwork::StartTime {
	// CgsStartTimeMessage.h:40
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID mHostID;

	// CgsStartTimeMessage.h:41
	Time mStartTime;

}

// CgsStartTimeMessage.h:47
struct CgsNetwork::StartTimeMessage : public CgsNetwork::ReliableMessage {
private:
	// CgsStartTimeMessage.h:84
	StartTime mStartTime;

	// CgsStartTimeMessage.h:85
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID[8] maReceivedClientsIDs;

public:
	// CgsStartTimeMessage.cpp:49
	void Construct();

	// CgsStartTimeMessage.cpp:71
	bool PrepareForSend(uint16_t, const StartTime *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID *);

	// CgsStartTimeMessage.cpp:104
	void Release();

	// CgsStartTimeMessage.cpp:123
	void Destruct();

	// CgsStartTimeMessage.cpp:142
	bool Retrieve(StartTime *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID *);

	// CgsStartTimeMessage.cpp:208
	virtual int32_t GetPackedMessageSize();

	// CgsStartTimeMessage.h:91
	virtual const char * GetName() const;

protected:
	// CgsStartTimeMessage.cpp:179
	virtual CgsNetwork::Message::PackOrUnpackResult PackOrUnpack();

}

