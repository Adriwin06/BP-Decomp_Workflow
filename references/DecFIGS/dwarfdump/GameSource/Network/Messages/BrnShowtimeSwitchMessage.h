// BrnShowtimeSwitchMessage.h:42
struct BrnNetwork::ShowtimeSwitchMessage : public CgsNetwork::ReliableMessage {
private:
	// BrnShowtimeSwitchMessage.h:72
	int32_t miFinalShowtimeScore;

	// BrnShowtimeSwitchMessage.h:73
	bool mbEnteringShowtime;

public:
	// BrnShowtimeSwitchMessage.cpp:38
	void Construct();

	// BrnShowtimeSwitchMessage.cpp:55
	void Destruct();

	// BrnShowtimeSwitchMessage.cpp:129
	void PrepareForSend(uint16_t, int32_t, bool);

	// BrnShowtimeSwitchMessage.cpp:156
	bool Retrieve(int32_t *, bool *);

	// BrnShowtimeSwitchMessage.cpp:178
	virtual bool OldMessagesAreValid() const;

private:
	// BrnShowtimeSwitchMessage.cpp:71
	virtual int32_t GetPackedMessageSize();

	// BrnShowtimeSwitchMessage.cpp:89
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

	// BrnShowtimeSwitchMessage.cpp:111
	virtual const char * GetName() const;

}

// BrnShowtimeSwitchMessage.h:42
void BrnNetwork::ShowtimeSwitchMessage::ShowtimeSwitchMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

