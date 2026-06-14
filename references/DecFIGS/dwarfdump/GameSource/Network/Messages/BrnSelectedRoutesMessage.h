// BrnSelectedRoutesMessage.h:47
struct BrnNetwork::SelectedRoutesMessage : public CgsNetwork::ReliableMessage {
private:
	// BrnSelectedRoutesMessage.h:88
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event mEvent;

	// BrnSelectedRoutesMessage.h:89
	int32_t miRoundNumber;

public:
	// BrnSelectedRoutesMessage.cpp:51
	void Construct();

	// BrnSelectedRoutesMessage.cpp:71
	void Destruct();

	// BrnSelectedRoutesMessage.cpp:88
	void PrepareForSend(uint16_t, int32_t, BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event *);

	// BrnSelectedRoutesMessage.cpp:121
	bool Retrieve(int32_t *, BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event *);

	// BrnSelectedRoutesMessage.cpp:207
	virtual int32_t GetPackedMessageSize();

	// BrnSelectedRoutesMessage.cpp:238
	virtual bool OldMessagesAreValid() const;

	// BrnSelectedRoutesMessage.h:99
	virtual const char * GetName() const;

protected:
	// BrnSelectedRoutesMessage.cpp:154
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

}

// BrnSelectedRoutesMessage.h:47
void BrnNetwork::SelectedRoutesMessage::SelectedRoutesMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

