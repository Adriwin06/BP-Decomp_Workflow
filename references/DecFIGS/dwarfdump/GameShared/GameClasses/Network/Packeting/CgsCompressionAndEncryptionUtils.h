// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsCompressionAndEncryptionUtils.h:33
	const int32_t KI_ALL_PLAYERS = 8;

	// CgsCompressionAndEncryptionUtils.h:34
	const EMessageType KE_ACK_OR_NACK;

	// CgsCompressionAndEncryptionUtils.h:35
	const EMessageType KE_HEADER;

	// CgsCompressionAndEncryptionUtils.h:36
	const EMessageType KE_ALL_MESSAGE_TYPES;

	// CgsCompressionAndEncryptionUtils.h:37
	const int32_t KI_MAX_BANDWIDTH_HISTORY = 30;

}

// CgsCompressionAndEncryptionUtils.h:229
extern int[2][2][9][43] maaaaiAvgBitsTransmitted;

// CgsCompressionAndEncryptionUtils.h:231
extern int32_t miHistoricalIndex;

// CgsCompressionAndEncryptionUtils.h:232
extern int[30][2][9][43] maaaaiHistoricalBitsTransmitted;

// CgsBitStream.h:26
namespace CgsNetwork {
	// CgsCompressionAndEncryptionUtils.h:33
	const int32_t KI_ALL_PLAYERS = 8;

	// CgsCompressionAndEncryptionUtils.h:34
	const EMessageType KE_ACK_OR_NACK;

	// CgsCompressionAndEncryptionUtils.h:35
	const EMessageType KE_HEADER;

	// CgsCompressionAndEncryptionUtils.h:36
	const EMessageType KE_ALL_MESSAGE_TYPES;

	// CgsCompressionAndEncryptionUtils.h:37
	const int32_t KI_MAX_BANDWIDTH_HISTORY = 30;

}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct CompressionAndEncryptionUtils {
		// CgsCompressionAndEncryptionUtils.h:61
		struct PackedPacketHeader {
			// CgsCompressionAndEncryptionUtils.h:63
			uint8_t mx8Flags;

			// CgsCompressionAndEncryptionUtils.h:64
			uint8_t mu8GameID;

			// CgsCompressionAndEncryptionUtils.h:65
			uint16_t mu16Frame;

			// CgsCompressionAndEncryptionUtils.h:66
			uint8_t mu8NumTypes;

			// CgsCompressionAndEncryptionUtils.h:67
			uint8_t mu8NumSignalMsgs;

			// CgsCompressionAndEncryptionUtils.h:68
			uint8_t[2] mu8_Pad;

		}

		// CgsCompressionAndEncryptionUtils.h:72
		struct ReliablePackedPacketHeader : public CgsNetwork::CompressionAndEncryptionUtils::PackedPacketHeader {
			// CgsCompressionAndEncryptionUtils.h:74
			CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID mSendingPlayerID;

			// CgsCompressionAndEncryptionUtils.h:75
			CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID mRecvingPlayerID;

		}

		// CgsCompressionAndEncryptionUtils.h:78
		enum EAverageType {
			E_AVERAGE_TYPE_START = 0,
			E_AVERAGE_OVER_SECOND = 0,
			E_MAX_OVER_SECOND = 1,
			E_AVERAGE_TYPE_COUNT = 2,
		}

		// CgsCompressionAndEncryptionUtils.h:87
		enum ESendRecvBandwidth {
			E_SEND_RECV_START = 0,
			E_SEND_BANDWIDTH = 0,
			E_RECV_BANDWIDTH = 1,
			E_SEND_RECV_COUNT = 2,
		}

		// CgsCompressionAndEncryptionUtils.h:98
		struct RecvMessageData {
			// CgsCompressionAndEncryptionUtils.h:100
			CgsNetwork::Message * mpMessage;

			// CgsCompressionAndEncryptionUtils.h:45
			typedef void (CgsNetwork::Message *, void *) OnMessageUnpackedCallback;

			// CgsCompressionAndEncryptionUtils.h:101
			CgsNetwork::CompressionAndEncryptionUtils::RecvMessageData::OnMessageUnpackedCallback * mpMsgUnpackedCallback;

			// CgsCompressionAndEncryptionUtils.h:102
			void * mpCallbackUserData;

		}

	}

	// CgsCompressionAndEncryptionUtils.h:240
	extern CgsNetwork::CompressionAndEncryptionUtils::ESendRecvBandwidth operator++(CgsNetwork::CompressionAndEncryptionUtils::ESendRecvBandwidth &, int);

	// CgsCompressionAndEncryptionUtils.h:33
	const int32_t KI_ALL_PLAYERS = 8;

	// CgsCompressionAndEncryptionUtils.h:34
	const EMessageType KE_ACK_OR_NACK;

	// CgsCompressionAndEncryptionUtils.h:35
	const EMessageType KE_HEADER;

	// CgsCompressionAndEncryptionUtils.h:36
	const EMessageType KE_ALL_MESSAGE_TYPES;

	// CgsCompressionAndEncryptionUtils.h:37
	const int32_t KI_MAX_BANDWIDTH_HISTORY = 30;

}

// CgsCompressionAndEncryptionUtils.h:57
struct CgsNetwork::CompressionAndEncryptionUtils {
private:
	// CgsCompressionAndEncryptionUtils.h:222
	uint8_t * mpu8TmpBuffer;

	// CgsCompressionAndEncryptionUtils.h:225
	extern CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID[8] maNetworkPlayerID;

	// CgsCompressionAndEncryptionUtils.h:226
	extern int[2][9][43] maaaiBitsTransmitted;

	// CgsCompressionAndEncryptionUtils.h:227
	extern Time mLastAverageTime;

	// CgsCompressionAndEncryptionUtils.h:229
	extern int[2][2][9][43] maaaaiAvgBitsTransmitted;

	// CgsCompressionAndEncryptionUtils.h:231
	extern int32_t miHistoricalIndex;

	// CgsCompressionAndEncryptionUtils.h:232
	extern int[30][2][9][43] maaaaiHistoricalBitsTransmitted;

public:
	// CgsCompressionAndEncryptionUtils.h:107
	bool Prepare(const TimerStatus *);

	// CgsCompressionAndEncryptionUtils.h:111
	void Update(const TimerStatus *);

	// CgsCompressionAndEncryptionUtils.h:114
	bool Release();

	// CgsCompressionAndEncryptionUtils.h:133
	// Declaration
	bool Pack(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, CgsNetwork::Message **, int32_t, CgsNetwork::SignalMessage **, int32_t, uint8_t *, int32_t, int32_t *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsCompressionAndEncryptionUtils.cpp:179
		using namespace CgsDev::Message;

		// CgsCompressionAndEncryptionUtils.cpp:180
		using namespace CgsDev::Message;

		// CgsCompressionAndEncryptionUtils.cpp:196
		using namespace CgsDev::Message;

		// CgsCompressionAndEncryptionUtils.cpp:199
		using namespace CgsDev::Message;

	}

	// CgsCompressionAndEncryptionUtils.h:145
	void UnPack(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, CgsNetwork::CompressionAndEncryptionUtils::RecvMessageData *, int32_t, CgsNetwork::SignalMessage **, int32_t, uint8_t *, int32_t);

	// CgsCompressionAndEncryptionUtils.h:150
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID ExtractSendingPlayerID(uint8_t *, int32_t);

	// CgsCompressionAndEncryptionUtils.h:156
	void ResetBandwidthUsed(const TimerStatus *);

	// CgsCompressionAndEncryptionUtils.h:163
	int32_t GetBandwidthUsedInBytes(CgsNetwork::CompressionAndEncryptionUtils::EAverageType, CgsNetwork::CompressionAndEncryptionUtils::ESendRecvBandwidth, int32_t, int32_t);

	// CgsCompressionAndEncryptionUtils.h:172
	int32_t GetHistoryBandwidthUsedInBytes(int32_t, CgsNetwork::CompressionAndEncryptionUtils::ESendRecvBandwidth, int32_t, int32_t);

private:
	// CgsCompressionAndEncryptionUtils.h:180
	void UpdateMaxBandwidth();

	// CgsCompressionAndEncryptionUtils.h:183
	void UpdateBandwidthHistory();

	// CgsCompressionAndEncryptionUtils.h:190
	int32_t GetBandwidthUsedInBits(CgsNetwork::CompressionAndEncryptionUtils::EAverageType, CgsNetwork::CompressionAndEncryptionUtils::ESendRecvBandwidth, int32_t, int32_t);

	// CgsCompressionAndEncryptionUtils.h:200
	int32_t GetHistoryBandwidthUsedInBits(int32_t, CgsNetwork::CompressionAndEncryptionUtils::ESendRecvBandwidth, int32_t, int32_t);

	// CgsCompressionAndEncryptionUtils.h:210
	void RecordBitsTransmitted(CgsNetwork::CompressionAndEncryptionUtils::ESendRecvBandwidth, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, EMessageType, int32_t);

	// CgsCompressionAndEncryptionUtils.h:214
	int32_t GetEntryIndex(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

}

