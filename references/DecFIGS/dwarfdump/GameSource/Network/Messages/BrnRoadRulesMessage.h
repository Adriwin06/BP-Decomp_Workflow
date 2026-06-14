// BrnRoadRulesMessage.h:44
struct BrnNetwork::RoadRulesMessage : public CgsNetwork::ReliableMessage {
private:
	// BrnRoadRulesMessage.h:79
	RoadRulesMessageData[10] maRoadRulesMessageData;

	// BrnRoadRulesMessage.h:80
	int32_t miNumRoadRulesScores;

	// BrnRoadRulesMessage.h:82
	int32_t miStreetDataVersion;

public:
	// BrnRoadRulesMessage.cpp:47
	void Construct();

	// BrnRoadRulesMessage.cpp:64
	void PrepareForSend(uint16_t, int32_t, RoadRulesMessageData *);

	// BrnRoadRulesMessage.cpp:104
	bool Retrieve(int32_t *, RoadRulesMessageData *);

	// BrnRoadRulesMessage.cpp:137
	virtual int32_t GetPackedMessageSize();

	// BrnRoadRulesMessage.h:93
	virtual const char * GetName() const;

protected:
	// BrnRoadRulesMessage.cpp:173
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

}

// BrnRoadRulesMessage.h:44
void BrnNetwork::RoadRulesMessage::RoadRulesMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

