// BrnBurnoutSkillzMessage.h:45
struct BrnNetwork::BurnoutSkillzMessage : public CgsNetwork::ReliableMessage {
private:
	// BrnBurnoutSkillzMessage.h:71
	BurnoutSkillzData mSkillzData;

	// BrnBurnoutSkillzMessage.h:72
	bool mbInitialData;

public:
	// BrnBurnoutSkillzMessage.cpp:40
	void Construct();

	// BrnBurnoutSkillzMessage.cpp:57
	void Destruct();

	// BrnBurnoutSkillzMessage.cpp:144
	void PrepareForSend(uint16_t, const BurnoutSkillzData *, bool);

	// BrnBurnoutSkillzMessage.cpp:181
	bool Retrieve(BurnoutSkillzData *, bool *);

private:
	// BrnBurnoutSkillzMessage.cpp:73
	virtual int32_t GetPackedMessageSize();

	// BrnBurnoutSkillzMessage.cpp:91
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

	// BrnBurnoutSkillzMessage.cpp:126
	virtual const char * GetName() const;

}

// BrnBurnoutSkillzMessage.h:45
void BrnNetwork::BurnoutSkillzMessage::BurnoutSkillzMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

