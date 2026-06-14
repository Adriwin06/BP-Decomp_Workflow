// BrnRoadRulesPersonalBestMessage.h:49
struct BrnNetwork::RoadRulesPersonalBestMessage : public CgsNetwork::ReliableMessage {
private:
	// BrnRoadRulesPersonalBestMessage.h:85
	int32_t[2] maiScores;

	// BrnRoadRulesPersonalBestMessage.h:86
	Road::ChallengeIndex mChallengeIndex;

	// BrnRoadRulesPersonalBestMessage.h:88
	int32_t miStreetDataVersion;

public:
	// BrnRoadRulesPersonalBestMessage.cpp:49
	void Construct();

	// BrnRoadRulesPersonalBestMessage.cpp:66
	void PrepareForSend(uint16_t, Road::ChallengeIndex, ChallengeData);

	// BrnRoadRulesPersonalBestMessage.cpp:118
	bool Retrieve(PlayerName *, Road::ChallengeIndex *, ChallengeHighScoreEntry *);

	// BrnRoadRulesPersonalBestMessage.cpp:163
	virtual int32_t GetPackedMessageSize();

	// BrnRoadRulesPersonalBestMessage.h:99
	virtual const char * GetName() const;

protected:
	// BrnRoadRulesPersonalBestMessage.cpp:193
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

}

// BrnRoadRulesPersonalBestMessage.h:49
void BrnNetwork::RoadRulesPersonalBestMessage::RoadRulesPersonalBestMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

