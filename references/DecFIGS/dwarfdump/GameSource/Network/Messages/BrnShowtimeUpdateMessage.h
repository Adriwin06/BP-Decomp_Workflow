// BrnShowtimeUpdateMessage.h:42
struct BrnNetwork::ShowtimeUpdateMessage : public CgsNetwork::Message {
private:
	// BrnShowtimeUpdateMessage.h:66
	int32_t miShowtimeScore;

public:
	// BrnShowtimeUpdateMessage.cpp:38
	void Construct();

	// BrnShowtimeUpdateMessage.cpp:54
	void Destruct();

	// BrnShowtimeUpdateMessage.cpp:122
	void PrepareForSend(uint16_t, int32_t);

	// BrnShowtimeUpdateMessage.cpp:147
	bool Retrieve(int32_t *);

private:
	// BrnShowtimeUpdateMessage.cpp:69
	virtual int32_t GetPackedMessageSize();

	// BrnShowtimeUpdateMessage.cpp:86
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

	// BrnShowtimeUpdateMessage.cpp:105
	virtual const char * GetName() const;

}

// BrnShowtimeUpdateMessage.h:42
void BrnNetwork::ShowtimeUpdateMessage::ShowtimeUpdateMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

