// BrnCarSelectMessage.h:46
struct BrnNetwork::CarSelectMessage : public CgsNetwork::ReliableMessage {
private:
	// BrnCarSelectMessage.h:91
	CgsID mCarId;

	// BrnCarSelectMessage.h:92
	CgsID mWheelId;

	// BrnCarSelectMessage.h:93
	uint16_t mu16ColourIndex;

	// BrnCarSelectMessage.h:94
	uint16_t mu16PaintFinishIndex;

	// BrnCarSelectMessage.h:95
	bool mbFinalSelection;

public:
	// BrnCarSelectMessage.cpp:47
	void Construct();

	// BrnCarSelectMessage.cpp:67
	void Destruct();

	// BrnCarSelectMessage.cpp:91
	void PrepareForSend(uint16_t, CgsID, CgsID, uint16_t, uint16_t, bool);

	// BrnCarSelectMessage.cpp:127
	bool Retrieve(CgsID *, CgsID *, uint16_t *, uint16_t *, bool *);

	// BrnCarSelectMessage.cpp:169
	virtual int32_t GetPackedMessageSize();

	// BrnCarSelectMessage.h:105
	virtual const char * GetName() const;

protected:
	// BrnCarSelectMessage.cpp:188
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

}

// BrnCarSelectMessage.h:46
void BrnNetwork::CarSelectMessage::CarSelectMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

