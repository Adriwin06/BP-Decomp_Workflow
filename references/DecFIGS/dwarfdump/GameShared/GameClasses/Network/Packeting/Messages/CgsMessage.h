// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsMessage.h:36
	const uint16_t KU16_DEFAULT_TOLERANCE = 21845;

	// CgsMessage.h:37
	const uint16_t KU16_MAX_FRAMES = 65534;

	// CgsMessage.h:40
	const uint8_t KX8_FLAGS_VALID = 1;

	// CgsMessage.h:41
	const uint8_t KX8_FLAGS_RELIABLE = 2;

	// CgsMessage.h:42
	const uint8_t KX8_FLAGS_ACK = 4;

	// CgsMessage.h:43
	const uint8_t KX8_FLAGS_NACK = 8;

	// CgsMessage.h:45
	const uint8_t KU8_INVALID_GAME_ID = 255;

	// CgsMessage.h:46
	const int8_t KI8_INVALID_TYPE = 4294967295;

	// CgsMessage.h:47
	const uint16_t KU16_INVALID_FRAME = 65535;

	// CgsMessage.h:48
	const uint16_t KU16_HALF_OF_FRAMES = 32768;

	// CgsMessage.h:49
	const uint32_t KU_INVALID_FRAME = 4294967295;

	// CgsMessage.h:50
	const uint32_t KU_HALF_OF_FRAMES = 2147483648;

	// CgsMessage.h:52
	const int32_t KI_MAX_UINT8 = 255;

	// CgsMessage.h:53
	const int32_t KI_MAX_UINT16 = 65535;

	// CgsMessage.h:54
	const int32_t KI_MAX_UINT32 = [255, 255, 255, 255, 255, 255, 255, 255];

	// CgsMessage.h:55
	const int32_t KI_MIN_UINT32;

	// CgsMessage.h:56
	const int32_t KI_MAX_INT8 = 127;

	// CgsMessage.h:57
	const int32_t KI_MAX_INT16 = 32767;

	// CgsMessage.h:58
	const int32_t KI_MAX_INT24 = 8388607;

	// CgsMessage.h:59
	const int32_t KI_MAX_INT32 = 2147483647;

	// CgsMessage.h:60
	const int32_t KI_MIN_INT32 = 2147483648;

	// CgsMessage.h:62
	const int32_t KI_MAX_PLAYER_ID = 2147483647;

	// CgsMessage.h:63
	const int32_t KI_MIN_PLAYER_ID = 4294967295;

	// CgsMessage.h:65
	const float_t KF_DEFAULT_MIN_TIME;

	// CgsMessage.h:66
	const float_t KF_DEFAULT_MAX_TIME;

	// CgsMessage.h:67
	const float_t KF_DEFAULT_MAX_TIME_ERROR;

	// CgsMessage.h:69
	const int32_t KI_MAX_GAME_ID = 255;

	// CgsMessage.h:70
	const int32_t KI_MIN_GAME_ID;

	// CgsMessage.h:72
	const int32_t KI_MAX_FLAGS = 255;

	// CgsMessage.h:73
	const int32_t KI_MIN_FLAGS;

	// CgsMessage.h:75
	const int32_t KI_MAX_MESSAGE_TYPE = 41;

	// CgsMessage.h:76
	const int32_t KI_MIN_MESSAGE_TYPE;

	// CgsMessage.h:78
	const int32_t KI_MAX_FRAMES = 65534;

	// CgsMessage.h:79
	const int32_t KI_MIN_FRAMES;

	// CgsMessage.h:87
	const PackOrUnpackResult KX_PACK_OR_UNPACK_SUCCESS;

	// CgsMessage.h:88
	const PackOrUnpackResult KX_PACK_FAILED_NO_SPACE = 1;

}

// CgsMessage.h:85
typedef uint8_t PackOrUnpackResult;

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct Message {
	public:
		// CgsMessage.h:757
		// Declaration
		uint8_t GetGameID() const {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsMessage.h:761
			using namespace CgsDev::Message;

		}

	}

	// CgsMessage.h:36
	const uint16_t KU16_DEFAULT_TOLERANCE = 21845;

	// CgsMessage.h:37
	const uint16_t KU16_MAX_FRAMES = 65534;

	// CgsMessage.h:40
	const uint8_t KX8_FLAGS_VALID = 1;

	// CgsMessage.h:41
	const uint8_t KX8_FLAGS_RELIABLE = 2;

	// CgsMessage.h:42
	const uint8_t KX8_FLAGS_ACK = 4;

	// CgsMessage.h:43
	const uint8_t KX8_FLAGS_NACK = 8;

	// CgsMessage.h:45
	const uint8_t KU8_INVALID_GAME_ID = 255;

	// CgsMessage.h:46
	const int8_t KI8_INVALID_TYPE = 4294967295;

	// CgsMessage.h:47
	const uint16_t KU16_INVALID_FRAME = 65535;

	// CgsMessage.h:48
	const uint16_t KU16_HALF_OF_FRAMES = 32768;

	// CgsMessage.h:49
	const uint32_t KU_INVALID_FRAME = 4294967295;

	// CgsMessage.h:50
	const uint32_t KU_HALF_OF_FRAMES = 2147483648;

	// CgsMessage.h:52
	const int32_t KI_MAX_UINT8 = 255;

	// CgsMessage.h:53
	const int32_t KI_MAX_UINT16 = 65535;

	// CgsMessage.h:54
	const int32_t KI_MAX_UINT32 = [255, 255, 255, 255, 255, 255, 255, 255];

	// CgsMessage.h:55
	const int32_t KI_MIN_UINT32;

	// CgsMessage.h:56
	const int32_t KI_MAX_INT8 = 127;

	// CgsMessage.h:57
	const int32_t KI_MAX_INT16 = 32767;

	// CgsMessage.h:58
	const int32_t KI_MAX_INT24 = 8388607;

	// CgsMessage.h:59
	const int32_t KI_MAX_INT32 = 2147483647;

	// CgsMessage.h:60
	const int32_t KI_MIN_INT32 = 2147483648;

	// CgsMessage.h:62
	const int32_t KI_MAX_PLAYER_ID = 2147483647;

	// CgsMessage.h:63
	const int32_t KI_MIN_PLAYER_ID = 4294967295;

	// CgsMessage.h:65
	const float_t KF_DEFAULT_MIN_TIME;

	// CgsMessage.h:66
	const float_t KF_DEFAULT_MAX_TIME;

	// CgsMessage.h:67
	const float_t KF_DEFAULT_MAX_TIME_ERROR;

	// CgsMessage.h:69
	const int32_t KI_MAX_GAME_ID = 255;

	// CgsMessage.h:70
	const int32_t KI_MIN_GAME_ID;

	// CgsMessage.h:72
	const int32_t KI_MAX_FLAGS = 255;

	// CgsMessage.h:73
	const int32_t KI_MIN_FLAGS;

	// CgsMessage.h:75
	const int32_t KI_MAX_MESSAGE_TYPE = 41;

	// CgsMessage.h:76
	const int32_t KI_MIN_MESSAGE_TYPE;

	// CgsMessage.h:78
	const int32_t KI_MAX_FRAMES = 65534;

	// CgsMessage.h:79
	const int32_t KI_MIN_FRAMES;

	// CgsMessage.h:87
	const BrnNetworkManager::PackOrUnpackResult KX_PACK_OR_UNPACK_SUCCESS;

	// CgsMessage.h:88
	const BrnNetworkManager::PackOrUnpackResult KX_PACK_FAILED_NO_SPACE = 1;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct Message {
	public:
		// CgsMessage.h:757
		// Declaration
		uint8_t GetGameID() const {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsMessage.h:761
			using namespace CgsDev::Message;

		}

		// CgsMessage.h:818
		bool IsMessageValid() const;

		// CgsMessage.h:645
		EMessageType GetType() const;

		// CgsMessage.h:607
		void Release();

		// CgsMessage.h:800
		void SetDealtWith();

		// CgsMessage.h:680
		uint16_t GetU16Frame() const;

	}

	// CgsMessage.h:513
	extern bool UInt16IsLargerOrEqualWrapped(uint16_t, uint16_t);

	// CgsMessage.h:535
	extern bool UInt16IsLargerWrapped(uint16_t, uint16_t);

	// CgsMessage.h:36
	const uint16_t KU16_DEFAULT_TOLERANCE = 21845;

	// CgsMessage.h:37
	const uint16_t KU16_MAX_FRAMES = 65534;

	// CgsMessage.h:40
	const uint8_t KX8_FLAGS_VALID = 1;

	// CgsMessage.h:41
	const uint8_t KX8_FLAGS_RELIABLE = 2;

	// CgsMessage.h:42
	const uint8_t KX8_FLAGS_ACK = 4;

	// CgsMessage.h:43
	const uint8_t KX8_FLAGS_NACK = 8;

	// CgsMessage.h:45
	const uint8_t KU8_INVALID_GAME_ID = 255;

	// CgsMessage.h:46
	const int8_t KI8_INVALID_TYPE = 4294967295;

	// CgsMessage.h:47
	const uint16_t KU16_INVALID_FRAME = 65535;

	// CgsMessage.h:48
	const uint16_t KU16_HALF_OF_FRAMES = 32768;

	// CgsMessage.h:49
	const uint32_t KU_INVALID_FRAME = 4294967295;

	// CgsMessage.h:50
	const uint32_t KU_HALF_OF_FRAMES = 2147483648;

	// CgsMessage.h:52
	const int32_t KI_MAX_UINT8 = 255;

	// CgsMessage.h:53
	const int32_t KI_MAX_UINT16 = 65535;

	// CgsMessage.h:54
	const int32_t KI_MAX_UINT32 = [255, 255, 255, 255, 255, 255, 255, 255];

	// CgsMessage.h:55
	const int32_t KI_MIN_UINT32;

	// CgsMessage.h:56
	const int32_t KI_MAX_INT8 = 127;

	// CgsMessage.h:57
	const int32_t KI_MAX_INT16 = 32767;

	// CgsMessage.h:58
	const int32_t KI_MAX_INT24 = 8388607;

	// CgsMessage.h:59
	const int32_t KI_MAX_INT32 = 2147483647;

	// CgsMessage.h:60
	const int32_t KI_MIN_INT32 = 2147483648;

	// CgsMessage.h:62
	const int32_t KI_MAX_PLAYER_ID = 2147483647;

	// CgsMessage.h:63
	const int32_t KI_MIN_PLAYER_ID = 4294967295;

	// CgsMessage.h:65
	const float_t KF_DEFAULT_MIN_TIME;

	// CgsMessage.h:66
	const float_t KF_DEFAULT_MAX_TIME;

	// CgsMessage.h:67
	const float_t KF_DEFAULT_MAX_TIME_ERROR;

	// CgsMessage.h:69
	const int32_t KI_MAX_GAME_ID = 255;

	// CgsMessage.h:70
	const int32_t KI_MIN_GAME_ID;

	// CgsMessage.h:72
	const int32_t KI_MAX_FLAGS = 255;

	// CgsMessage.h:73
	const int32_t KI_MIN_FLAGS;

	// CgsMessage.h:75
	const int32_t KI_MAX_MESSAGE_TYPE = 41;

	// CgsMessage.h:76
	const int32_t KI_MIN_MESSAGE_TYPE;

	// CgsMessage.h:78
	const int32_t KI_MAX_FRAMES = 65534;

	// CgsMessage.h:79
	const int32_t KI_MIN_FRAMES;

	// CgsMessage.h:87
	const BrnNetworkManager::PackOrUnpackResult KX_PACK_OR_UNPACK_SUCCESS;

	// CgsMessage.h:88
	const BrnNetworkManager::PackOrUnpackResult KX_PACK_FAILED_NO_SPACE = 1;

}

// CgsBitStream.h:26
namespace CgsNetwork {
	// Declaration
	struct Message {
	public:
		// CgsMessage.h:757
		// Declaration
		uint8_t GetGameID() const {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsMessage.h:761
			using namespace CgsDev::Message;

		}

		// CgsMessage.h:818
		bool IsMessageValid() const;

		// CgsMessage.h:607
		void Release();

		// CgsMessage.h:800
		void SetDealtWith();

		// CgsMessage.h:585
		void PrepareForSend(EMessageType, uint16_t);

		// CgsMessage.h:624
		void SetType(EMessageType);

		// CgsMessage.h:663
		void SetU16Frame(uint16_t);

		// CgsMessage.h:783
		void SetReadyToSend();

		// CgsMessage.h:1039
		bool IsPacking() const;

	}

	// CgsMessage.h:36
	const uint16_t KU16_DEFAULT_TOLERANCE = 21845;

	// CgsMessage.h:37
	const uint16_t KU16_MAX_FRAMES = 65534;

	// CgsMessage.h:40
	const uint8_t KX8_FLAGS_VALID = 1;

	// CgsMessage.h:41
	const uint8_t KX8_FLAGS_RELIABLE = 2;

	// CgsMessage.h:42
	const uint8_t KX8_FLAGS_ACK = 4;

	// CgsMessage.h:43
	const uint8_t KX8_FLAGS_NACK = 8;

	// CgsMessage.h:45
	const uint8_t KU8_INVALID_GAME_ID = 255;

	// CgsMessage.h:46
	const int8_t KI8_INVALID_TYPE = 4294967295;

	// CgsMessage.h:47
	const uint16_t KU16_INVALID_FRAME = 65535;

	// CgsMessage.h:48
	const uint16_t KU16_HALF_OF_FRAMES = 32768;

	// CgsMessage.h:49
	const uint32_t KU_INVALID_FRAME = 4294967295;

	// CgsMessage.h:50
	const uint32_t KU_HALF_OF_FRAMES = 2147483648;

	// CgsMessage.h:52
	const int32_t KI_MAX_UINT8 = 255;

	// CgsMessage.h:53
	const int32_t KI_MAX_UINT16 = 65535;

	// CgsMessage.h:54
	const int32_t KI_MAX_UINT32 = [255, 255, 255, 255, 255, 255, 255, 255];

	// CgsMessage.h:55
	const int32_t KI_MIN_UINT32;

	// CgsMessage.h:56
	const int32_t KI_MAX_INT8 = 127;

	// CgsMessage.h:57
	const int32_t KI_MAX_INT16 = 32767;

	// CgsMessage.h:58
	const int32_t KI_MAX_INT24 = 8388607;

	// CgsMessage.h:59
	const int32_t KI_MAX_INT32 = 2147483647;

	// CgsMessage.h:60
	const int32_t KI_MIN_INT32 = 2147483648;

	// CgsMessage.h:62
	const int32_t KI_MAX_PLAYER_ID = 2147483647;

	// CgsMessage.h:63
	const int32_t KI_MIN_PLAYER_ID = 4294967295;

	// CgsMessage.h:65
	const float_t KF_DEFAULT_MIN_TIME;

	// CgsMessage.h:66
	const float_t KF_DEFAULT_MAX_TIME;

	// CgsMessage.h:67
	const float_t KF_DEFAULT_MAX_TIME_ERROR;

	// CgsMessage.h:69
	const int32_t KI_MAX_GAME_ID = 255;

	// CgsMessage.h:70
	const int32_t KI_MIN_GAME_ID;

	// CgsMessage.h:72
	const int32_t KI_MAX_FLAGS = 255;

	// CgsMessage.h:73
	const int32_t KI_MIN_FLAGS;

	// CgsMessage.h:75
	const int32_t KI_MAX_MESSAGE_TYPE = 41;

	// CgsMessage.h:76
	const int32_t KI_MIN_MESSAGE_TYPE;

	// CgsMessage.h:78
	const int32_t KI_MAX_FRAMES = 65534;

	// CgsMessage.h:79
	const int32_t KI_MIN_FRAMES;

	// CgsMessage.h:87
	const BrnNetworkManager::PackOrUnpackResult KX_PACK_OR_UNPACK_SUCCESS;

	// CgsMessage.h:88
	const BrnNetworkManager::PackOrUnpackResult KX_PACK_FAILED_NO_SPACE = 1;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct Message {
	public:
		// CgsMessage.h:757
		// Declaration
		uint8_t GetGameID() const {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsMessage.h:761
			using namespace CgsDev::Message;

		}

		// CgsMessage.h:680
		uint16_t GetU16Frame() const;

		CgsNetwork::Message & operator=(const CgsNetwork::Message &);

		// CgsMessage.h:818
		bool IsMessageValid() const;

		// CgsMessage.h:607
		void Release();

		// CgsMessage.h:800
		void SetDealtWith();

		// CgsMessage.h:858
		bool IsOlderThan(uint16_t) const;

		// CgsMessage.h:838
		bool IsNewerThan(uint16_t) const;

	}

	// CgsMessage.h:535
	extern bool UInt16IsLargerWrapped(uint16_t, uint16_t);

	// CgsMessage.h:513
	extern bool UInt16IsLargerOrEqualWrapped(uint16_t, uint16_t);

	// CgsMessage.h:439
	extern uint16_t GetFrameDiffWrapped16(uint16_t, uint16_t);

	// CgsMessage.h:36
	const uint16_t KU16_DEFAULT_TOLERANCE = 21845;

	// CgsMessage.h:37
	const uint16_t KU16_MAX_FRAMES = 65534;

	// CgsMessage.h:40
	const uint8_t KX8_FLAGS_VALID = 1;

	// CgsMessage.h:41
	const uint8_t KX8_FLAGS_RELIABLE = 2;

	// CgsMessage.h:42
	const uint8_t KX8_FLAGS_ACK = 4;

	// CgsMessage.h:43
	const uint8_t KX8_FLAGS_NACK = 8;

	// CgsMessage.h:45
	const uint8_t KU8_INVALID_GAME_ID = 255;

	// CgsMessage.h:46
	const int8_t KI8_INVALID_TYPE = 4294967295;

	// CgsMessage.h:47
	const uint16_t KU16_INVALID_FRAME = 65535;

	// CgsMessage.h:48
	const uint16_t KU16_HALF_OF_FRAMES = 32768;

	// CgsMessage.h:49
	const uint32_t KU_INVALID_FRAME = 4294967295;

	// CgsMessage.h:50
	const uint32_t KU_HALF_OF_FRAMES = 2147483648;

	// CgsMessage.h:52
	const int32_t KI_MAX_UINT8 = 255;

	// CgsMessage.h:53
	const int32_t KI_MAX_UINT16 = 65535;

	// CgsMessage.h:54
	const int32_t KI_MAX_UINT32 = [255, 255, 255, 255, 255, 255, 255, 255];

	// CgsMessage.h:55
	const int32_t KI_MIN_UINT32;

	// CgsMessage.h:56
	const int32_t KI_MAX_INT8 = 127;

	// CgsMessage.h:57
	const int32_t KI_MAX_INT16 = 32767;

	// CgsMessage.h:58
	const int32_t KI_MAX_INT24 = 8388607;

	// CgsMessage.h:59
	const int32_t KI_MAX_INT32 = 2147483647;

	// CgsMessage.h:60
	const int32_t KI_MIN_INT32 = 2147483648;

	// CgsMessage.h:62
	const int32_t KI_MAX_PLAYER_ID = 2147483647;

	// CgsMessage.h:63
	const int32_t KI_MIN_PLAYER_ID = 4294967295;

	// CgsMessage.h:65
	const float_t KF_DEFAULT_MIN_TIME;

	// CgsMessage.h:66
	const float_t KF_DEFAULT_MAX_TIME;

	// CgsMessage.h:67
	const float_t KF_DEFAULT_MAX_TIME_ERROR;

	// CgsMessage.h:69
	const int32_t KI_MAX_GAME_ID = 255;

	// CgsMessage.h:70
	const int32_t KI_MIN_GAME_ID;

	// CgsMessage.h:72
	const int32_t KI_MAX_FLAGS = 255;

	// CgsMessage.h:73
	const int32_t KI_MIN_FLAGS;

	// CgsMessage.h:75
	const int32_t KI_MAX_MESSAGE_TYPE = 41;

	// CgsMessage.h:76
	const int32_t KI_MIN_MESSAGE_TYPE;

	// CgsMessage.h:78
	const int32_t KI_MAX_FRAMES = 65534;

	// CgsMessage.h:79
	const int32_t KI_MIN_FRAMES;

	// CgsMessage.h:87
	const BrnNetworkManager::PackOrUnpackResult KX_PACK_OR_UNPACK_SUCCESS;

	// CgsMessage.h:88
	const BrnNetworkManager::PackOrUnpackResult KX_PACK_FAILED_NO_SPACE = 1;

}

// CgsMessage.h:99
void CgsNetwork::Message::operator=(const const CgsNetwork::Message &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct Message {
	public:
		// CgsMessage.h:757
		// Declaration
		uint8_t GetGameID() const {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsMessage.h:761
			using namespace CgsDev::Message;

		}

		Message();

	}

	// CgsMessage.h:36
	const uint16_t KU16_DEFAULT_TOLERANCE = 21845;

	// CgsMessage.h:37
	const uint16_t KU16_MAX_FRAMES = 65534;

	// CgsMessage.h:40
	const uint8_t KX8_FLAGS_VALID = 1;

	// CgsMessage.h:41
	const uint8_t KX8_FLAGS_RELIABLE = 2;

	// CgsMessage.h:42
	const uint8_t KX8_FLAGS_ACK = 4;

	// CgsMessage.h:43
	const uint8_t KX8_FLAGS_NACK = 8;

	// CgsMessage.h:45
	const uint8_t KU8_INVALID_GAME_ID = 255;

	// CgsMessage.h:46
	const int8_t KI8_INVALID_TYPE = 4294967295;

	// CgsMessage.h:47
	const uint16_t KU16_INVALID_FRAME = 65535;

	// CgsMessage.h:48
	const uint16_t KU16_HALF_OF_FRAMES = 32768;

	// CgsMessage.h:49
	const uint32_t KU_INVALID_FRAME = 4294967295;

	// CgsMessage.h:50
	const uint32_t KU_HALF_OF_FRAMES = 2147483648;

	// CgsMessage.h:52
	const int32_t KI_MAX_UINT8 = 255;

	// CgsMessage.h:53
	const int32_t KI_MAX_UINT16 = 65535;

	// CgsMessage.h:54
	const int32_t KI_MAX_UINT32 = [255, 255, 255, 255, 255, 255, 255, 255];

	// CgsMessage.h:55
	const int32_t KI_MIN_UINT32;

	// CgsMessage.h:56
	const int32_t KI_MAX_INT8 = 127;

	// CgsMessage.h:57
	const int32_t KI_MAX_INT16 = 32767;

	// CgsMessage.h:58
	const int32_t KI_MAX_INT24 = 8388607;

	// CgsMessage.h:59
	const int32_t KI_MAX_INT32 = 2147483647;

	// CgsMessage.h:60
	const int32_t KI_MIN_INT32 = 2147483648;

	// CgsMessage.h:62
	const int32_t KI_MAX_PLAYER_ID = 2147483647;

	// CgsMessage.h:63
	const int32_t KI_MIN_PLAYER_ID = 4294967295;

	// CgsMessage.h:65
	const float_t KF_DEFAULT_MIN_TIME;

	// CgsMessage.h:66
	const float_t KF_DEFAULT_MAX_TIME;

	// CgsMessage.h:67
	const float_t KF_DEFAULT_MAX_TIME_ERROR;

	// CgsMessage.h:69
	const int32_t KI_MAX_GAME_ID = 255;

	// CgsMessage.h:70
	const int32_t KI_MIN_GAME_ID;

	// CgsMessage.h:72
	const int32_t KI_MAX_FLAGS = 255;

	// CgsMessage.h:73
	const int32_t KI_MIN_FLAGS;

	// CgsMessage.h:75
	const int32_t KI_MAX_MESSAGE_TYPE = 41;

	// CgsMessage.h:76
	const int32_t KI_MIN_MESSAGE_TYPE;

	// CgsMessage.h:78
	const int32_t KI_MAX_FRAMES = 65534;

	// CgsMessage.h:79
	const int32_t KI_MIN_FRAMES;

	// CgsMessage.h:87
	const BrnNetworkManager::PackOrUnpackResult KX_PACK_OR_UNPACK_SUCCESS;

	// CgsMessage.h:88
	const BrnNetworkManager::PackOrUnpackResult KX_PACK_FAILED_NO_SPACE = 1;

}

// CgsMessage.h:99
void CgsNetwork::Message::Message() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct Message {
		// CgsMessage.h:304
		enum EPackOrUnpack {
			E_PACK_INTO_BITSTREAM = 0,
			E_UNPACK_FROM_BITSTREAM = 1,
			E_PACK_OR_UNPACK_COUNT = 2,
		}

		// CgsMessage.h:85
		typedef uint8_t PackOrUnpackResult;

	}

	// CgsMessage.h:535
	extern bool UInt16IsLargerWrapped(uint16_t, uint16_t);

	// CgsMessage.h:513
	extern bool UInt16IsLargerOrEqualWrapped(uint16_t, uint16_t);

	// CgsMessage.h:439
	extern uint16_t GetFrameDiffWrapped16(uint16_t, uint16_t);

	// CgsMessage.h:36
	const uint16_t KU16_DEFAULT_TOLERANCE = 21845;

	// CgsMessage.h:37
	const uint16_t KU16_MAX_FRAMES = 65534;

	// CgsMessage.h:40
	const uint8_t KX8_FLAGS_VALID = 1;

	// CgsMessage.h:41
	const uint8_t KX8_FLAGS_RELIABLE = 2;

	// CgsMessage.h:42
	const uint8_t KX8_FLAGS_ACK = 4;

	// CgsMessage.h:43
	const uint8_t KX8_FLAGS_NACK = 8;

	// CgsMessage.h:45
	const uint8_t KU8_INVALID_GAME_ID = 255;

	// CgsMessage.h:46
	const int8_t KI8_INVALID_TYPE = 4294967295;

	// CgsMessage.h:47
	const uint16_t KU16_INVALID_FRAME = 65535;

	// CgsMessage.h:48
	const uint16_t KU16_HALF_OF_FRAMES = 32768;

	// CgsMessage.h:49
	const uint32_t KU_INVALID_FRAME = 4294967295;

	// CgsMessage.h:50
	const uint32_t KU_HALF_OF_FRAMES = 2147483648;

	// CgsMessage.h:52
	const int32_t KI_MAX_UINT8 = 255;

	// CgsMessage.h:53
	const int32_t KI_MAX_UINT16 = 65535;

	// CgsMessage.h:54
	const int32_t KI_MAX_UINT32 = [255, 255, 255, 255, 255, 255, 255, 255];

	// CgsMessage.h:55
	const int32_t KI_MIN_UINT32;

	// CgsMessage.h:56
	const int32_t KI_MAX_INT8 = 127;

	// CgsMessage.h:57
	const int32_t KI_MAX_INT16 = 32767;

	// CgsMessage.h:58
	const int32_t KI_MAX_INT24 = 8388607;

	// CgsMessage.h:59
	const int32_t KI_MAX_INT32 = 2147483647;

	// CgsMessage.h:60
	const int32_t KI_MIN_INT32 = 2147483648;

	// CgsMessage.h:62
	const int32_t KI_MAX_PLAYER_ID = 2147483647;

	// CgsMessage.h:63
	const int32_t KI_MIN_PLAYER_ID = 4294967295;

	// CgsMessage.h:65
	const float_t KF_DEFAULT_MIN_TIME;

	// CgsMessage.h:66
	const float_t KF_DEFAULT_MAX_TIME;

	// CgsMessage.h:67
	const float_t KF_DEFAULT_MAX_TIME_ERROR;

	// CgsMessage.h:69
	const int32_t KI_MAX_GAME_ID = 255;

	// CgsMessage.h:70
	const int32_t KI_MIN_GAME_ID;

	// CgsMessage.h:72
	const int32_t KI_MAX_FLAGS = 255;

	// CgsMessage.h:73
	const int32_t KI_MIN_FLAGS;

	// CgsMessage.h:75
	const int32_t KI_MAX_MESSAGE_TYPE = 41;

	// CgsMessage.h:76
	const int32_t KI_MIN_MESSAGE_TYPE;

	// CgsMessage.h:78
	const int32_t KI_MAX_FRAMES = 65534;

	// CgsMessage.h:79
	const int32_t KI_MIN_FRAMES;

	// CgsMessage.h:87
	const CgsNetwork::Message::PackOrUnpackResult KX_PACK_OR_UNPACK_SUCCESS;

	// CgsMessage.h:88
	const CgsNetwork::Message::PackOrUnpackResult KX_PACK_FAILED_NO_SPACE = 1;

}

// CgsMessage.h:99
struct CgsNetwork::Message {
	int (*)(...) * _vptr.Message;

protected:
	// CgsMessage.h:311
	CgsNetwork::Message::EPackOrUnpack mePackOrUnpack;

	// CgsMessage.h:312
	SmartBitStream mBitstream;

private:
	// CgsMessage.h:366
	uint8_t mu8GameID;

	// CgsMessage.h:367
	uint8_t mx8Flags;

	// CgsMessage.h:368
	int8_t mi8Type;

	// CgsMessage.h:369
	uint16_t mu16Frame;

public:
	Message & operator=(const CgsNetwork::Message &);

	void Message(const CgsNetwork::Message &);

	void Message();

	// CgsMessage.cpp:355
	void Construct();

	// CgsMessage.h:585
	void PrepareForSend(EMessageType, uint16_t);

	// CgsMessage.h:607
	void Release();

	// CgsMessage.h:624
	void SetType(EMessageType);

	// CgsMessage.h:645
	EMessageType GetType() const;

	// CgsMessage.h:663
	void SetU16Frame(uint16_t);

	// CgsMessage.h:680
	uint16_t GetU16Frame() const;

	// CgsMessage.cpp:376
	virtual bool IsReliable() const;

	// CgsMessage.cpp:393
	virtual bool OldMessagesAreValid() const;

	// CgsMessage.h:696
	bool IsAck() const;

	// CgsMessage.h:717
	bool IsNack() const;

	// CgsMessage.h:739
	void SetGameID(uint8_t);

	// CgsMessage.h:757
	// Declaration
	uint8_t GetGameID() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsMessage.h:761
		using namespace CgsDev::Message;

	}

	// CgsMessage.h:783
	void SetReadyToSend();

	// CgsMessage.h:800
	void SetDealtWith();

	// CgsMessage.h:818
	bool IsMessageValid() const;

	// CgsMessage.h:838
	bool IsNewerThan(uint16_t) const;

	// CgsMessage.h:858
	bool IsOlderThan(uint16_t) const;

	// CgsMessage.h:955
	bool Pack(uint8_t *, int32_t, int32_t, int32_t *);

	// CgsMessage.h:994
	void UnPack(uint8_t *, int32_t, int32_t, int32_t *);

	// CgsMessage.cpp:410
	// Declaration
	virtual int32_t GetPackedMessageSize() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsMessage.cpp:420
		using namespace CgsDev::Message;

	}

	// CgsMessage.h:1056
	bool AtEndOfMessage();

	// CgsMessage.h:1039
	bool IsPacking() const;

	// CgsMessage.h:195
	virtual const char * GetName() const;

	// CgsMessage.cpp:457
	CgsNetwork::Message::PackOrUnpackResult PackOrUnpack(bool *);

	// CgsMessage.cpp:500
	CgsNetwork::Message::PackOrUnpackResult PackOrUnpack(int8_t *, int32_t, int32_t);

	// CgsMessage.cpp:538
	CgsNetwork::Message::PackOrUnpackResult PackOrUnpack(uint8_t *, int32_t, int32_t);

	// CgsMessage.cpp:576
	CgsNetwork::Message::PackOrUnpackResult PackOrUnpack(int16_t *, int32_t, int32_t);

	// CgsMessage.cpp:617
	CgsNetwork::Message::PackOrUnpackResult PackOrUnpack(uint16_t *, int32_t, int32_t);

	// CgsMessage.cpp:655
	CgsNetwork::Message::PackOrUnpackResult PackOrUnpack(int32_t *, int32_t, int32_t);

	// CgsMessage.cpp:697
	CgsNetwork::Message::PackOrUnpackResult PackOrUnpack(float *, float_t, float_t, int32_t);

	// CgsMessage.cpp:739
	CgsNetwork::Message::PackOrUnpackResult PackOrUnpack(float *, float_t, float_t, float_t);

	// CgsMessage.cpp:954
	CgsNetwork::Message::PackOrUnpackResult PackOrUnpack(Matrix44Affine *, int32_t, int32_t, int32_t, Vector3, Vector3, int32_t, int32_t, int32_t);

	// CgsMessage.cpp:1029
	CgsNetwork::Message::PackOrUnpackResult PackOrUnpack(Vector3 *, int32_t, int32_t, float_t, int32_t);

	// CgsMessage.cpp:1113
	CgsNetwork::Message::PackOrUnpackResult PackOrUnpack(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID *);

	// CgsMessage.cpp:1130
	CgsNetwork::Message::PackOrUnpackResult PackOrUnpack(CgsID *);

	// CgsMessage.cpp:1261
	CgsNetwork::Message::PackOrUnpackResult PackOrUnpack(Time *, float_t);

	// CgsMessage.cpp:1194
	// Declaration
	CgsNetwork::Message::PackOrUnpackResult PackOrUnpack(Time *, int32_t, int32_t, float_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsMessage.cpp:1211
		using namespace CgsDev::Message;

		// CgsMessage.cpp:1234
		using namespace CgsDev::Message;

	}

	// CgsMessage.cpp:1278
	CgsNetwork::Message::PackOrUnpackResult PackOrUnpack(DateAndTime *);

	// CgsMessage.cpp:1355
	CgsNetwork::Message::PackOrUnpackResult PackOrUnpackBuffer(char *, int32_t);

protected:
	// CgsMessage.h:879
	void PrepareAck(EMessageType, uint16_t, uint8_t);

	// CgsMessage.h:906
	void PrepareNack(EMessageType, uint16_t, uint8_t);

	// CgsMessage.h:931
	void SetReliable();

	// CgsMessage.cpp:435
	virtual CgsNetwork::Message::PackOrUnpackResult PackOrUnpack();

	// CgsMessage.cpp:779
	void GetEulerAnglesFromMatrix(Matrix44Affine, float_t *, float_t *, float_t *);

	// CgsMessage.cpp:834
	void SetMatrixFromEulerAngles(Matrix44Affine *, float_t, float_t, float_t);

	// CgsMessage.cpp:920
	void GetVectorFromAngles(Vector3 *, float_t, float_t, float_t);

	// CgsMessage.cpp:876
	void GetAnglesFromVector(Vector3, float_t *, float_t *, float_t *);

}

