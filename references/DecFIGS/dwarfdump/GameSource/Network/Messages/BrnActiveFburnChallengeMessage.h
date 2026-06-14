// BrnActiveFburnChallengeMessage.h:46
struct BrnNetwork::ActiveFburnChallengeMessage : public CgsNetwork::ReliableMessage {
private:
	// BrnActiveFburnChallengeMessage.h:74
	RoadRulesRecvData::NetworkPlayerID[7] maPlayersInChallengeIDs;

	// BrnActiveFburnChallengeMessage.h:75
	CgsID mChallengeID;

	// BrnActiveFburnChallengeMessage.h:76
	int32_t miNumPlayersInChallenge;

public:
	// BrnActiveFburnChallengeMessage.cpp:38
	void Construct();

	// BrnActiveFburnChallengeMessage.cpp:57
	void Destruct();

	// BrnActiveFburnChallengeMessage.cpp:141
	void PrepareForSend(uint16_t, CgsID, RoadRulesRecvData::NetworkPlayerID *, int32_t);

	// BrnActiveFburnChallengeMessage.cpp:174
	bool Retrieve(CgsID *, RoadRulesRecvData::NetworkPlayerID *, int32_t *);

private:
	// BrnActiveFburnChallengeMessage.cpp:74
	virtual int32_t GetPackedMessageSize();

	// BrnActiveFburnChallengeMessage.cpp:93
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

	// BrnActiveFburnChallengeMessage.cpp:122
	virtual const char * GetName() const;

}

// BrnActiveFburnChallengeMessage.h:46
void BrnNetwork::ActiveFburnChallengeMessage::ActiveFburnChallengeMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

