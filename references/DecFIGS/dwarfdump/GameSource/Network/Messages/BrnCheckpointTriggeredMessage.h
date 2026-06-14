// BrnCheckpointTriggeredMessage.h:44
struct BrnNetwork::CheckpointTriggeredMessage : public CgsNetwork::ReliableMessage {
private:
	// BrnCheckpointTriggeredMessage.h:68
	int32_t miCheckpointIndex;

public:
	// BrnCheckpointTriggeredMessage.cpp:39
	void Construct();

	// BrnCheckpointTriggeredMessage.cpp:55
	void Destruct();

	// BrnCheckpointTriggeredMessage.cpp:139
	void PrepareForSend(uint16_t, int32_t);

	// BrnCheckpointTriggeredMessage.cpp:163
	bool Retrieve(int32_t *);

private:
	// BrnCheckpointTriggeredMessage.cpp:70
	virtual int32_t GetPackedMessageSize();

	// BrnCheckpointTriggeredMessage.cpp:87
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

	// BrnCheckpointTriggeredMessage.cpp:109
	virtual const char * GetName() const;

	// BrnCheckpointTriggeredMessage.cpp:122
	virtual bool OldMessagesAreValid() const;

}

// BrnCheckpointTriggeredMessage.h:44
void BrnNetwork::CheckpointTriggeredMessage::CheckpointTriggeredMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

