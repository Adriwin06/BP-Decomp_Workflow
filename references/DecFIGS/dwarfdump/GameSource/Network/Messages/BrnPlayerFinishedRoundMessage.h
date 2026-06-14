// BrnPlayerFinishedRoundMessage.h:48
struct BrnNetwork::PlayerFinishedRoundMessage : public CgsNetwork::ReliableMessage {
private:
	// BrnPlayerFinishedRoundMessage.h:109
	bool mbTimedOut;

	// BrnPlayerFinishedRoundMessage.h:110
	uint8_t mu8RoundNumber;

	// BrnPlayerFinishedRoundMessage.h:111
	RoadRulesRecvData::NetworkPlayerID mEliminatorNetworkPlayerID;

	// BrnPlayerFinishedRoundMessage.h:112
	float32_t mfDistanceFromFinish;

	// BrnPlayerFinishedRoundMessage.h:113
	Time mFinishTime;

	// BrnPlayerFinishedRoundMessage.h:114
	int32_t miEliminations;

public:
	// BrnPlayerFinishedRoundMessage.cpp:58
	void Construct();

	// BrnPlayerFinishedRoundMessage.cpp:79
	void Destruct();

	// BrnPlayerFinishedRoundMessage.cpp:105
	void PrepareForSend(uint16_t, uint8_t, Time, float32_t, RoadRulesRecvData::NetworkPlayerID, int32_t, bool);

	// BrnPlayerFinishedRoundMessage.cpp:149
	bool Retrieve(uint8_t *, Time *, float32_t *, RoadRulesRecvData::NetworkPlayerID *, int32_t *, bool *);

	// BrnPlayerFinishedRoundMessage.cpp:214
	virtual int32_t GetPackedMessageSize();

	// BrnPlayerFinishedRoundMessage.h:123
	uint8_t GetRoundNumber() const;

	// BrnPlayerFinishedRoundMessage.h:129
	Time GetFinishTime() const;

	// BrnPlayerFinishedRoundMessage.h:135
	float_t GetDistanceFromFinish() const;

	// BrnPlayerFinishedRoundMessage.h:141
	RoadRulesRecvData::NetworkPlayerID GetEliminatorNetworkPlayerID() const;

	// BrnPlayerFinishedRoundMessage.h:147
	bool GetTimedOut() const;

	// BrnPlayerFinishedRoundMessage.h:153
	virtual const char * GetName() const;

protected:
	// BrnPlayerFinishedRoundMessage.cpp:182
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

}

// BrnPlayerFinishedRoundMessage.h:48
void BrnNetwork::PlayerFinishedRoundMessage::PlayerFinishedRoundMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

