// BrnCameraStatusMessage.h:44
struct BrnNetwork::CameraStatusMessage : public CgsNetwork::Message {
private:
	// BrnCameraStatusMessage.h:80
	BrnNetwork::ECameraStatus meCameraStatus;

public:
	// BrnCameraStatusMessage.cpp:45
	void Construct();

	// BrnCameraStatusMessage.cpp:61
	void Destruct();

	// BrnCameraStatusMessage.cpp:77
	void PrepareForSend(uint16_t, BrnNetwork::ECameraStatus);

	// BrnCameraStatusMessage.cpp:102
	bool Retrieve(BrnNetwork::ECameraStatus *);

	// BrnCameraStatusMessage.cpp:149
	virtual int32_t GetPackedMessageSize();

	// BrnCameraStatusMessage.h:90
	virtual const char * GetName() const;

protected:
	// BrnCameraStatusMessage.cpp:133
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

}

// BrnCameraStatusMessage.h:44
void BrnNetwork::CameraStatusMessage::CameraStatusMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

