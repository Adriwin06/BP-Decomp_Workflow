// BrnBurningHomeRunSwitchRunnerMessage.h:43
struct BrnNetwork::BurningHomeRunSwitchRunnerMessage : public CgsNetwork::ReliableMessage {
private:
	// BrnBurningHomeRunSwitchRunnerMessage.h:81
	RoadRulesRecvData::NetworkPlayerID mNewRunnerID;

public:
	// BrnBurningHomeRunSwitchRunnerMessage.cpp:39
	void Construct();

	// BrnBurningHomeRunSwitchRunnerMessage.cpp:54
	void Destruct();

	// BrnBurningHomeRunSwitchRunnerMessage.cpp:71
	void PrepareForSend(uint16_t, RoadRulesRecvData::NetworkPlayerID);

	// BrnBurningHomeRunSwitchRunnerMessage.cpp:96
	bool Retrieve(RoadRulesRecvData::NetworkPlayerID *);

	// BrnBurningHomeRunSwitchRunnerMessage.cpp:144
	virtual int32_t GetPackedMessageSize();

	// BrnBurningHomeRunSwitchRunnerMessage.cpp:161
	virtual const char * GetName() const;

protected:
	// BrnBurningHomeRunSwitchRunnerMessage.cpp:123
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

}

// BrnBurningHomeRunSwitchRunnerMessage.h:43
void BrnNetwork::BurningHomeRunSwitchRunnerMessage::BurningHomeRunSwitchRunnerMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

