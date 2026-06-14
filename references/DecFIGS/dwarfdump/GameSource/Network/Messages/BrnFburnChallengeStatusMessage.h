// BrnFburnChallengeStatusMessage.h:45
struct BrnNetwork::FburnChallengeStatusMessage : public CgsNetwork::ReliableMessage {
private:
	// BrnFburnChallengeStatusMessage.h:69
	CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

public:
	// BrnFburnChallengeStatusMessage.cpp:37
	void Construct();

	// BrnFburnChallengeStatusMessage.cpp:52
	void Destruct();

	// BrnFburnChallengeStatusMessage.cpp:117
	void PrepareForSend(uint16_t, const CompletedFburnChallengesData::CompletedFburnChallenges *);

	// BrnFburnChallengeStatusMessage.cpp:142
	bool Retrieve(CompletedFburnChallengesData::CompletedFburnChallenges *);

private:
	// BrnFburnChallengeStatusMessage.cpp:65
	virtual int32_t GetPackedMessageSize();

	// BrnFburnChallengeStatusMessage.cpp:80
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

	// BrnFburnChallengeStatusMessage.cpp:102
	virtual const char * GetName() const;

}

// BrnFburnChallengeStatusMessage.h:45
void BrnNetwork::FburnChallengeStatusMessage::FburnChallengeStatusMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

