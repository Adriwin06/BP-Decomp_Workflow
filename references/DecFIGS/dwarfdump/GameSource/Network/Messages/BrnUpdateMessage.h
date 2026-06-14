// BrnUpdateMessage.h:64
struct BrnNetwork::UpdateData {
	// BrnUpdateMessage.h:66
	uint16_t mu16SentFrame;

	// BrnUpdateMessage.h:67
	uint16_t mu16FramesSinceStart;

	// BrnUpdateMessage.h:68
	Matrix44Affine mMatrix;

	// BrnUpdateMessage.h:69
	Vector3 mLinearVelocity;

	// BrnUpdateMessage.h:70
	Vector3 mAngularVelocity;

	// BrnUpdateMessage.h:71
	float_t mfSteering;

	// BrnUpdateMessage.h:72
	float_t mfAcceleration;

	// BrnUpdateMessage.h:73
	float_t mfBraking;

	// BrnUpdateMessage.h:74
	BrnNetwork::ECameraStatus meCameraStatus;

	// BrnUpdateMessage.h:75
	CgsNetwork::ENetworkHeadsetPlayerStatus meHeadsetStatus;

	// BrnUpdateMessage.h:76
	bool mbIsBoosting;

	// BrnUpdateMessage.h:77
	bool mbIsCrashing;

	// BrnUpdateMessage.h:78
	bool mbIsFreeBurnLobby;

	// BrnUpdateMessage.h:79
	bool mbIsRoundNumberOdd;

	// BrnUpdateMessage.h:80
	bool mbIsEliminated;

	// BrnUpdateMessage.h:81
	bool mbSnap;

	// BrnUpdateMessage.h:82
	bool mbIsInCarSelect;

	// BrnUpdateMessage.h:83
	bool mbReceivingPlayerCrashedUs;

}

// BrnUpdateMessage.h:87
struct BrnNetwork::UpdateMessage : public CgsNetwork::Message {
private:
	// BrnUpdateMessage.h:125
	UpdateData mUpdateData;

public:
	// BrnUpdateMessage.cpp:95
	void Construct();

	// BrnUpdateMessage.cpp:110
	void PrepareForSend(UpdateData *);

	// BrnUpdateMessage.cpp:164
	void Release();

	// BrnUpdateMessage.cpp:182
	void Destruct();

	// BrnUpdateMessage.cpp:253
	virtual int32_t GetPackedMessageSize();

	// BrnUpdateMessage.h:129
	const UpdateData * GetUpdateData();

	// BrnUpdateMessage.h:136
	uint16_t GetU16FramesSinceStart();

	// BrnUpdateMessage.h:143
	uint16_t GetU16SentFrame();

	// BrnUpdateMessage.h:150
	virtual const char * GetName() const;

protected:
	// BrnUpdateMessage.cpp:195
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct UpdateMessage {
	public:
		BrnNetwork::UpdateMessage & operator=(const BrnNetwork::UpdateMessage &);

		// BrnUpdateMessage.h:136
		uint16_t GetU16FramesSinceStart();

		// BrnUpdateMessage.h:129
		const UpdateData * GetUpdateData();

	}

}

// BrnUpdateMessage.h:87
void BrnNetwork::UpdateMessage::operator=(const const BrnNetwork::UpdateMessage &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnUpdateMessage.h:87
void BrnNetwork::UpdateMessage::UpdateMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

