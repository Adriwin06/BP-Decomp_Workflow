// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct CameraRequestResponseMessage {
		// BrnCameraRequestResponseMessage.h:48
		enum EResponse {
			E_RESPONSE_DECLINE = 0,
			E_RESPONSE_ACCEPT = 1,
			E_RESPONSE_COUNT = 2,
		}

	}

}

// BrnCameraRequestResponseMessage.h:44
struct BrnNetwork::CameraRequestResponseMessage : public CgsNetwork::ReliableMessage {
private:
	// BrnCameraRequestResponseMessage.h:89
	BrnNetwork::CameraRequestResponseMessage::EResponse meCameraRequestResponse;

public:
	// BrnCameraRequestResponseMessage.cpp:44
	void Construct();

	// BrnCameraRequestResponseMessage.cpp:60
	void Destruct();

	// BrnCameraRequestResponseMessage.cpp:76
	void PrepareForSend(uint16_t, BrnNetwork::CameraRequestResponseMessage::EResponse);

	// BrnCameraRequestResponseMessage.cpp:101
	bool Retrieve(BrnNetwork::CameraRequestResponseMessage::EResponse *);

	// BrnCameraRequestResponseMessage.cpp:148
	virtual int32_t GetPackedMessageSize();

	// BrnCameraRequestResponseMessage.h:99
	virtual const char * GetName() const;

protected:
	// BrnCameraRequestResponseMessage.cpp:132
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

}

// BrnCameraRequestResponseMessage.h:44
void BrnNetwork::CameraRequestResponseMessage::CameraRequestResponseMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

