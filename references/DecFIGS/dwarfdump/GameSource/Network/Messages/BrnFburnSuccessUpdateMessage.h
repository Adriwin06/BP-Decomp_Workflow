// BrnFburnSuccessUpdateMessage.h:45
struct BrnNetwork::FburnSuccessUpdateMessage : public CgsNetwork::Message {
private:
	// BrnFburnSuccessUpdateMessage.h:73
	FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess mSuccessBitArray;

	// BrnFburnSuccessUpdateMessage.h:74
	int32_t miFramesSinceStart;

	// BrnFburnSuccessUpdateMessage.h:75
	int32_t miActionIndex;

public:
	// BrnFburnSuccessUpdateMessage.cpp:37
	void Construct();

	// BrnFburnSuccessUpdateMessage.cpp:54
	void Destruct();

	// BrnFburnSuccessUpdateMessage.cpp:127
	void PrepareForSend(uint16_t, int32_t, int32_t, const FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *);

	// BrnFburnSuccessUpdateMessage.cpp:156
	bool Retrieve(int32_t *, int32_t *, FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *);

private:
	// BrnFburnSuccessUpdateMessage.cpp:69
	virtual int32_t GetPackedMessageSize();

	// BrnFburnSuccessUpdateMessage.cpp:86
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

	// BrnFburnSuccessUpdateMessage.cpp:110
	virtual const char * GetName() const;

}

// BrnFburnSuccessUpdateMessage.h:45
void BrnNetwork::FburnSuccessUpdateMessage::FburnSuccessUpdateMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

