// BrnStatsUpdateMessage.h:44
struct BrnNetwork::StatsUpdateMessage : public CgsNetwork::Message {
private:
	// BrnStatsUpdateMessage.h:74
	int32_t miNumberOfChallenges;

	// BrnStatsUpdateMessage.h:75
	int32_t miNumberOfRivals;

	// BrnStatsUpdateMessage.h:76
	int32_t miNumberOfAchievements;

	// BrnStatsUpdateMessage.h:77
	int32_t miNumberOfTakedowns;

public:
	// BrnStatsUpdateMessage.cpp:41
	void Construct();

	// BrnStatsUpdateMessage.cpp:135
	void Destruct();

	// BrnStatsUpdateMessage.cpp:66
	void PrepareForSend(uint16_t, int32_t, int32_t, int32_t, int32_t);

	// BrnStatsUpdateMessage.cpp:98
	bool Retrieve(int32_t *, int32_t *, int32_t *, int32_t *);

private:
	// BrnStatsUpdateMessage.cpp:151
	virtual int32_t GetPackedMessageSize();

	// BrnStatsUpdateMessage.cpp:168
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

	// BrnStatsUpdateMessage.cpp:188
	virtual const char * GetName() const;

}

// BrnStatsUpdateMessage.h:44
void BrnNetwork::StatsUpdateMessage::StatsUpdateMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

