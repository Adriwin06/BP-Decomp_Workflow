// BrnFreeburnChallengeMessage.h:43
struct BrnNetwork::FreeburnChallengeMessage : public CgsNetwork::ReliableMessage {
private:
	// BrnFreeburnChallengeMessage.h:73
	CgsID mChallengeID;

	// BrnFreeburnChallengeMessage.h:74
	BrnNetwork::BrnNetworkModuleIO::EChallengeEventType meEventType;

	// BrnFreeburnChallengeMessage.h:75
	BrnGameState::EChallengeStatus meChallengeStatus;

	// BrnFreeburnChallengeMessage.h:76
	int32_t miActionIndex;

public:
	// BrnFreeburnChallengeMessage.cpp:38
	void Construct();

	// BrnFreeburnChallengeMessage.cpp:58
	void Destruct();

	// BrnFreeburnChallengeMessage.cpp:148
	void PrepareForSend(uint16_t, CgsID, BrnNetwork::BrnNetworkModuleIO::EChallengeEventType, BrnGameState::EChallengeStatus, int32_t);

	// BrnFreeburnChallengeMessage.cpp:176
	bool Retrieve(CgsID *, BrnNetwork::BrnNetworkModuleIO::EChallengeEventType *, BrnGameState::EChallengeStatus *, int32_t *);

private:
	// BrnFreeburnChallengeMessage.cpp:76
	virtual int32_t GetPackedMessageSize();

	// BrnFreeburnChallengeMessage.cpp:96
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

	// BrnFreeburnChallengeMessage.cpp:128
	virtual const char * GetName() const;

}

// BrnFreeburnChallengeMessage.h:43
void BrnNetwork::FreeburnChallengeMessage::FreeburnChallengeMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

