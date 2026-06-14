// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct TrafficManager {
		// BrnNetworkTrafficManager.h:156
		struct TrafficSyncData {
			// BrnNetworkTrafficManager.h:159
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkTrafficManager.h:160
			BrnNetwork::HullSyncMessage mHullSyncMessageSend;

			// BrnNetworkTrafficManager.h:161
			BrnNetwork::HullSyncMessage mHullSyncMessageRecv;

			// BrnNetworkTrafficManager.h:162
			BrnNetwork::CrashingTrafficMessage mCrashingTrafficMessageSend;

			// BrnNetworkTrafficManager.h:163
			BrnNetwork::CrashingTrafficMessage mCrashingTrafficMessageRecv;

			// BrnNetworkTrafficManager.h:164
			BrnNetwork::RestartTrafficMessage mRestartTrafficMessageSend;

			// BrnNetworkTrafficManager.h:165
			BrnNetwork::RestartTrafficMessage mRestartTrafficMessageRecv;

			// BrnNetworkTrafficManager.h:167
			BrnNetwork::TrafficHashMessage mTrafficHashMessageSend;

			// BrnNetworkTrafficManager.h:168
			BrnNetwork::TrafficHashMessage mTrafficHashMessageRecv;

			// BrnHullSyncMessage.h:45
			typedef Array<BrnNetwork::HullToActivateInfo,7u> BufferedHullsToActivate;

			// BrnNetworkTrafficManager.h:171
			BrnNetwork::TrafficManager::TrafficSyncData::BufferedHullsToActivate mBufferedHullActivates;

			// BrnNetworkTrafficManager.h:173
			bool mbIsThereCrashingTrafficToSend;

		}

		// BrnNetworkTrafficManager.h:177
		struct BufferedMessage {
			// BrnNetworkTrafficManager.h:179
			uint16_t mu16FramesSinceRoundStart;

			// BrnNetworkTrafficManager.h:180
			RoadRulesRecvData::NetworkPlayerID mOwningNetworkPlayerID;

			// BrnNetworkTrafficManager.h:181
			int32_t miCrashingTrafficDataCount;

			// BrnNetworkTrafficManager.h:182
			CrashingTrafficData[24] maCrashingTrafficData;

		}

		// BrnNetworkTrafficManager.h:186
		struct BufferedRestartMessage {
			// BrnNetworkTrafficManager.h:188
			uint16_t[8] mau16ActiveHulls;

			// BrnNetworkTrafficManager.h:189
			uint16_t mu16RestartFrame;

		}

		// BrnNetworkTrafficManager.h:381
		struct TrafficHash {
			// BrnNetworkTrafficManager.h:384
			uint16_t muTrafficHash;

			// BrnNetworkTrafficManager.h:385
			uint16_t muUpdate10HzFrame;

		}

	}

	// BrnHullSyncMessage.h:30
	const uint16_t KU16_MIN_HULL_NUMBER;

	// BrnHullSyncMessage.h:31
	const uint16_t KU16_MAX_HULL_NUMBER = 400;

}

// BrnHullSyncMessage.h:38
struct BrnNetwork::HullToActivateInfo {
	// BrnHullSyncMessage.h:40
	uint16_t muHull;

	// BrnHullSyncMessage.h:41
	uint16_t muFramesSinceStart;

	// BrnHullSyncMessage.h:42
	uint16_t muTrafUpdateToActivate;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct TrafficManager {
		// BrnNetworkTrafficManager.h:156
		struct TrafficSyncData {
			// BrnNetworkTrafficManager.h:159
			GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

			// BrnNetworkTrafficManager.h:160
			BrnNetwork::HullSyncMessage mHullSyncMessageSend;

			// BrnNetworkTrafficManager.h:161
			BrnNetwork::HullSyncMessage mHullSyncMessageRecv;

			// BrnNetworkTrafficManager.h:162
			BrnNetwork::CrashingTrafficMessage mCrashingTrafficMessageSend;

			// BrnNetworkTrafficManager.h:163
			BrnNetwork::CrashingTrafficMessage mCrashingTrafficMessageRecv;

			// BrnNetworkTrafficManager.h:164
			BrnNetwork::RestartTrafficMessage mRestartTrafficMessageSend;

			// BrnNetworkTrafficManager.h:165
			BrnNetwork::RestartTrafficMessage mRestartTrafficMessageRecv;

			// BrnNetworkTrafficManager.h:167
			BrnNetwork::TrafficHashMessage mTrafficHashMessageSend;

			// BrnNetworkTrafficManager.h:168
			BrnNetwork::TrafficHashMessage mTrafficHashMessageRecv;

			// BrnHullSyncMessage.h:45
			typedef Array<BrnNetwork::HullToActivateInfo,7u> BufferedHullsToActivate;

			// BrnNetworkTrafficManager.h:171
			BrnNetwork::TrafficManager::TrafficSyncData::BufferedHullsToActivate mBufferedHullActivates;

			// BrnNetworkTrafficManager.h:173
			bool mbIsThereCrashingTrafficToSend;

		}

		// BrnNetworkTrafficManager.h:177
		struct BufferedMessage {
			// BrnNetworkTrafficManager.h:179
			uint16_t mu16FramesSinceRoundStart;

			// BrnNetworkTrafficManager.h:180
			GuiEventNetworkLaunching::NetworkPlayerID mOwningNetworkPlayerID;

			// BrnNetworkTrafficManager.h:181
			int32_t miCrashingTrafficDataCount;

			// BrnNetworkTrafficManager.h:182
			CrashingTrafficData[24] maCrashingTrafficData;

		}

		// BrnNetworkTrafficManager.h:186
		struct BufferedRestartMessage {
			// BrnNetworkTrafficManager.h:188
			uint16_t[8] mau16ActiveHulls;

			// BrnNetworkTrafficManager.h:189
			uint16_t mu16RestartFrame;

		}

		// BrnNetworkTrafficManager.h:381
		struct TrafficHash {
			// BrnNetworkTrafficManager.h:384
			uint16_t muTrafficHash;

			// BrnNetworkTrafficManager.h:385
			uint16_t muUpdate10HzFrame;

		}

	}

	// BrnHullSyncMessage.h:30
	const uint16_t KU16_MIN_HULL_NUMBER;

	// BrnHullSyncMessage.h:31
	const uint16_t KU16_MAX_HULL_NUMBER = 400;

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct TrafficManager {
		// BrnNetworkTrafficManager.h:156
		struct TrafficSyncData {
			// BrnNetworkTrafficManager.h:159
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkTrafficManager.h:160
			BrnNetwork::HullSyncMessage mHullSyncMessageSend;

			// BrnNetworkTrafficManager.h:161
			BrnNetwork::HullSyncMessage mHullSyncMessageRecv;

			// BrnNetworkTrafficManager.h:162
			BrnNetwork::CrashingTrafficMessage mCrashingTrafficMessageSend;

			// BrnNetworkTrafficManager.h:163
			BrnNetwork::CrashingTrafficMessage mCrashingTrafficMessageRecv;

			// BrnNetworkTrafficManager.h:164
			BrnNetwork::RestartTrafficMessage mRestartTrafficMessageSend;

			// BrnNetworkTrafficManager.h:165
			BrnNetwork::RestartTrafficMessage mRestartTrafficMessageRecv;

			// BrnNetworkTrafficManager.h:167
			BrnNetwork::TrafficHashMessage mTrafficHashMessageSend;

			// BrnNetworkTrafficManager.h:168
			BrnNetwork::TrafficHashMessage mTrafficHashMessageRecv;

			// BrnHullSyncMessage.h:45
			typedef Array<BrnNetwork::HullToActivateInfo,7u> BufferedHullsToActivate;

			// BrnNetworkTrafficManager.h:171
			BrnNetwork::TrafficManager::TrafficSyncData::BufferedHullsToActivate mBufferedHullActivates;

			// BrnNetworkTrafficManager.h:173
			bool mbIsThereCrashingTrafficToSend;

		}

		// BrnNetworkTrafficManager.h:177
		struct BufferedMessage {
			// BrnNetworkTrafficManager.h:179
			uint16_t mu16FramesSinceRoundStart;

			// BrnNetworkTrafficManager.h:180
			RoadRulesRecvData::NetworkPlayerID mOwningNetworkPlayerID;

			// BrnNetworkTrafficManager.h:181
			int32_t miCrashingTrafficDataCount;

			// BrnNetworkTrafficManager.h:182
			CrashingTrafficData[24] maCrashingTrafficData;

		}

		// BrnNetworkTrafficManager.h:186
		struct BufferedRestartMessage {
			// BrnNetworkTrafficManager.h:188
			uint16_t[8] mau16ActiveHulls;

			// BrnNetworkTrafficManager.h:189
			uint16_t mu16RestartFrame;

		}

		// BrnNetworkTrafficManager.h:381
		struct TrafficHash {
			// BrnNetworkTrafficManager.h:384
			uint16_t muTrafficHash;

			// BrnNetworkTrafficManager.h:385
			uint16_t muUpdate10HzFrame;

		}

	}

	// BrnHullSyncMessage.h:30
	const uint16_t KU16_MIN_HULL_NUMBER;

	// BrnHullSyncMessage.h:31
	const uint16_t KU16_MAX_HULL_NUMBER = 400;

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct TrafficManager {
		// BrnNetworkTrafficManager.h:156
		struct TrafficSyncData {
			// BrnNetworkTrafficManager.h:159
			AggressiveMoveData::NetworkPlayerID mPlayerID;

			// BrnNetworkTrafficManager.h:160
			BrnNetwork::HullSyncMessage mHullSyncMessageSend;

			// BrnNetworkTrafficManager.h:161
			BrnNetwork::HullSyncMessage mHullSyncMessageRecv;

			// BrnNetworkTrafficManager.h:162
			BrnNetwork::CrashingTrafficMessage mCrashingTrafficMessageSend;

			// BrnNetworkTrafficManager.h:163
			BrnNetwork::CrashingTrafficMessage mCrashingTrafficMessageRecv;

			// BrnNetworkTrafficManager.h:164
			BrnNetwork::RestartTrafficMessage mRestartTrafficMessageSend;

			// BrnNetworkTrafficManager.h:165
			BrnNetwork::RestartTrafficMessage mRestartTrafficMessageRecv;

			// BrnNetworkTrafficManager.h:167
			BrnNetwork::TrafficHashMessage mTrafficHashMessageSend;

			// BrnNetworkTrafficManager.h:168
			BrnNetwork::TrafficHashMessage mTrafficHashMessageRecv;

			// BrnHullSyncMessage.h:45
			typedef Array<BrnNetwork::HullToActivateInfo,7u> BufferedHullsToActivate;

			// BrnNetworkTrafficManager.h:171
			BrnNetwork::TrafficManager::TrafficSyncData::BufferedHullsToActivate mBufferedHullActivates;

			// BrnNetworkTrafficManager.h:173
			bool mbIsThereCrashingTrafficToSend;

		}

		// BrnNetworkTrafficManager.h:177
		struct BufferedMessage {
			// BrnNetworkTrafficManager.h:179
			uint16_t mu16FramesSinceRoundStart;

			// BrnNetworkTrafficManager.h:180
			AggressiveMoveData::NetworkPlayerID mOwningNetworkPlayerID;

			// BrnNetworkTrafficManager.h:181
			int32_t miCrashingTrafficDataCount;

			// BrnNetworkTrafficManager.h:182
			CrashingTrafficData[24] maCrashingTrafficData;

		}

		// BrnNetworkTrafficManager.h:186
		struct BufferedRestartMessage {
			// BrnNetworkTrafficManager.h:188
			uint16_t[8] mau16ActiveHulls;

			// BrnNetworkTrafficManager.h:189
			uint16_t mu16RestartFrame;

		}

		// BrnNetworkTrafficManager.h:381
		struct TrafficHash {
			// BrnNetworkTrafficManager.h:384
			uint16_t muTrafficHash;

			// BrnNetworkTrafficManager.h:385
			uint16_t muUpdate10HzFrame;

		}

	}

	// BrnHullSyncMessage.h:30
	const uint16_t KU16_MIN_HULL_NUMBER;

	// BrnHullSyncMessage.h:31
	const uint16_t KU16_MAX_HULL_NUMBER = 400;

}

// BrnHullSyncMessage.h:57
struct BrnNetwork::HullSyncMessage : public CgsNetwork::ReliableMessage {
private:
	// BrnHullSyncMessage.h:100
	BrnNetwork::TrafficManager::TrafficSyncData::BufferedHullsToActivate maBufferedHullActivates;

public:
	// BrnHullSyncMessage.cpp:50
	void Construct();

	// BrnHullSyncMessage.cpp:68
	void PrepareForSend(uint16_t, BrnNetwork::TrafficManager::TrafficSyncData::BufferedHullsToActivate *);

	// BrnHullSyncMessage.cpp:90
	void Release();

	// BrnHullSyncMessage.cpp:107
	void Destruct();

	// BrnHullSyncMessage.cpp:126
	bool Retrieve(BrnNetwork::TrafficManager::TrafficSyncData::BufferedHullsToActivate *);

	// BrnHullSyncMessage.cpp:160
	virtual int32_t GetPackedMessageSize();

	// BrnHullSyncMessage.h:110
	virtual const char * GetName() const;

	// BrnHullSyncMessage.cpp:243
	virtual bool OldMessagesAreValid() const;

protected:
	// BrnHullSyncMessage.cpp:188
	virtual BrnNetworkManager::PackOrUnpackResult PackOrUnpack();

}

// BrnHullSyncMessage.h:57
void BrnNetwork::HullSyncMessage::HullSyncMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

