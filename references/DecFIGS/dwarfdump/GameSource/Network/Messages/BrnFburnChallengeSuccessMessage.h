// BrnFburnChallengeSuccessMessage.h:45
struct BrnNetwork::FburnChallengeSuccessMessage : public CgsNetwork::ReliableMessage {
private:
	// BrnFburnChallengeSuccessMessage.h:77
	float32_t[2] mafActionScores;

	// BrnFburnChallengeSuccessMessage.h:78
	bool[2] mabSuccessfulActions;

	// BrnFburnChallengeSuccessMessage.h:79
	bool[2] mabAccumulationThisFrame;

public:
	// BrnFburnChallengeSuccessMessage.cpp:37
	void Construct();

	// BrnFburnChallengeSuccessMessage.cpp:59
	void Destruct();

	// BrnFburnChallengeSuccessMessage.cpp:147
	void PrepareForSend(uint16_t, const bool *, const bool *, const float32_t *);

	// BrnFburnChallengeSuccessMessage.cpp:176
	bool Retrieve(bool *, bool *, float32_t *);

	// BrnFburnChallengeSuccessMessage.cpp:206
	virtual bool OldMessagesAreValid() const;

private:
	// BrnFburnChallengeSuccessMessage.cpp:79
	virtual int32_t GetPackedMessageSize();

	// BrnFburnChallengeSuccessMessage.cpp:101
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

	// BrnFburnChallengeSuccessMessage.cpp:130
	virtual const char * GetName() const;

}

// BrnFburnChallengeSuccessMessage.h:45
void BrnNetwork::FburnChallengeSuccessMessage::FburnChallengeSuccessMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

