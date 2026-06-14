// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnCrashingTrafficMessage.h:35
	const int32_t KI_MIN_CRASHING_TRAFFIC_IN_MESSAGE;

	// BrnCrashingTrafficMessage.h:36
	const int32_t KI_MAX_CRASHING_TRAFFIC_IN_MESSAGE = 24;

}

// BrnCrashingTrafficMessage.h:50
struct BrnNetwork::CrashingTrafficData {
	// BrnCrashingTrafficMessage.h:52
	uint16_t mu16VehicleID;

	// BrnCrashingTrafficMessage.h:53
	Matrix44Affine mMatrix;

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// BrnCrashingTrafficMessage.h:35
	const int32_t KI_MIN_CRASHING_TRAFFIC_IN_MESSAGE;

	// BrnCrashingTrafficMessage.h:36
	const int32_t KI_MAX_CRASHING_TRAFFIC_IN_MESSAGE = 24;

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct CrashingTrafficMessage {
	public:
		// BrnCrashingTrafficMessage.h:118
		uint16_t GetFramesSinceStart() const;

	}

	// BrnCrashingTrafficMessage.h:35
	const int32_t KI_MIN_CRASHING_TRAFFIC_IN_MESSAGE;

	// BrnCrashingTrafficMessage.h:36
	const int32_t KI_MAX_CRASHING_TRAFFIC_IN_MESSAGE = 24;

}

// BrnCrashingTrafficMessage.h:68
struct BrnNetwork::CrashingTrafficMessage : public CgsNetwork::Message {
private:
	// BrnCrashingTrafficMessage.h:106
	int32_t miCrashingTrafficDataCount;

	// BrnCrashingTrafficMessage.h:107
	uint16_t mu16FramesSinceRoundStart;

	// BrnCrashingTrafficMessage.h:108
	CrashingTrafficData[24] maCrashingTrafficData;

public:
	// BrnCrashingTrafficMessage.cpp:61
	void Construct();

	// BrnCrashingTrafficMessage.cpp:145
	void Destruct();

	// BrnCrashingTrafficMessage.cpp:79
	void PrepareForSend(uint16_t, uint16_t, int32_t, CrashingTrafficData *);

	// BrnCrashingTrafficMessage.cpp:111
	bool Retrieve(int32_t *, CrashingTrafficData *);

	// BrnCrashingTrafficMessage.cpp:212
	virtual int32_t GetPackedMessageSize();

	// BrnCrashingTrafficMessage.h:118
	uint16_t GetFramesSinceStart() const;

	// BrnCrashingTrafficMessage.h:124
	virtual const char * GetName() const;

protected:
	// BrnCrashingTrafficMessage.cpp:158
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

}

// BrnCrashingTrafficMessage.h:68
void BrnNetwork::CrashingTrafficMessage::CrashingTrafficMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

