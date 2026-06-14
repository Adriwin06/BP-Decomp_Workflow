// BrnCameraRequestMessage.h:43
struct BrnNetwork::CameraRequestMessage : public CgsNetwork::ReliableMessage {
private:
	// BrnCameraRequestMessage.h:78
	bool mbReleaseFeed;

public:
	// BrnCameraRequestMessage.cpp:44
	void Construct();

	// BrnCameraRequestMessage.cpp:59
	void Destruct();

	// BrnCameraRequestMessage.cpp:75
	void PrepareForSend(uint16_t, bool);

	// BrnCameraRequestMessage.cpp:100
	bool Retrieve(bool *);

	// BrnCameraRequestMessage.cpp:142
	virtual int32_t GetPackedMessageSize();

	// BrnCameraRequestMessage.h:88
	virtual const char * GetName() const;

protected:
	// BrnCameraRequestMessage.cpp:131
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

}

// BrnCameraRequestMessage.h:43
void BrnNetwork::CameraRequestMessage::CameraRequestMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

