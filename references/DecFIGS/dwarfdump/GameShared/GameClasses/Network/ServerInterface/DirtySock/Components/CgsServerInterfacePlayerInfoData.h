// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsServerInterfacePlayerInfoData.h:50
	const int32_t KI_PLAYER_INFO_FLAG_ADMINISTRATOR = 1;

	// CgsServerInterfacePlayerInfoData.h:51
	const int32_t KI_PLAYER_INFO_FLAG_DETENTION = 2;

	// CgsServerInterfacePlayerInfoData.h:52
	const int32_t KI_PLAYER_INFO_FLAG_IN_GAME = 4;

	// CgsServerInterfacePlayerInfoData.h:53
	const int32_t KI_PLAYER_INFO_FLAG_ROOM_HOST = 8;

	// CgsServerInterfacePlayerInfoData.h:54
	const int32_t KI_PLAYER_INFO_FLAG_LOCKED = 16;

	// CgsServerInterfacePlayerInfoData.h:55
	const int32_t KI_PLAYER_INFO_FLAG_MODERATOR = 32;

	// CgsServerInterfacePlayerInfoData.h:56
	const int32_t KI_PLAYER_INFO_FLAG_NO_CHAT_FILTER = 64;

	// CgsServerInterfacePlayerInfoData.h:57
	const int32_t KI_PLAYER_INFO_FLAG_NO_PRIVATE_MESSAGE = 128;

	// CgsServerInterfacePlayerInfoData.h:58
	const int32_t KI_PLAYER_INFO_FLAG_TEST_ACCOUNT = 256;

	// CgsServerInterfacePlayerInfoData.h:59
	const int32_t KI_PLAYER_INFO_FLAG_LOCAL_USER = 512;

	// CgsServerInterfacePlayerInfoData.h:60
	const int32_t KI_PLAYER_INFO_FLAG_ROOM_VICE_HOST = 1024;

	// CgsServerInterfacePlayerInfoData.h:61
	const int32_t KI_PLAYER_INFO_FLAG_AUDIT_SESSION = 2048;

	// CgsServerInterfacePlayerInfoData.h:62
	const int32_t KI_PLAYER_INFO_FLAG_TERMINATED = 4096;

	// CgsServerInterfacePlayerInfoData.h:63
	const int32_t KI_PLAYER_INFO_FLAG_ATTR0 = 8192;

	// CgsServerInterfacePlayerInfoData.h:64
	const int32_t KI_PLAYER_INFO_FLAG_ATTR1 = 16384;

	// CgsServerInterfacePlayerInfoData.h:65
	const int32_t KI_PLAYER_INFO_FLAG_ATTR2 = 32768;

	// CgsServerInterfacePlayerInfoData.h:66
	const int32_t KI_PLAYER_INFO_FLAG_ATTR3 = 65536;

	// CgsServerInterfacePlayerInfoData.h:68
	const int32_t KI_PLAYER_INFO_HW_FLAG_BROADBAND = 1;

	// CgsServerInterfacePlayerInfoData.h:69
	const int32_t KI_PLAYER_INFO_HW_FLAG_USB_ETHERNET = 2;

	// CgsServerInterfacePlayerInfoData.h:70
	const int32_t KI_PLAYER_INFO_HW_FLAG_USB_HEADSET = 4;

	// CgsServerInterfacePlayerInfoData.h:71
	const int32_t KI_PLAYER_INFO_HW_FLAG_USB_KEYBOARD = 8;

	// CgsServerInterfacePlayerInfoData.h:72
	const int32_t KI_PLAYER_INFO_HW_FLAG_PPPOE = 16;

	// CgsServerInterfacePlayerInfoData.h:73
	const int32_t KI_PLAYER_INFO_HW_FLAG_VOIP_USED = 32;

	// CgsServerInterfacePlayerInfoData.h:74
	const int32_t KI_PLAYER_INFO_HW_FLAG_VOIP_ACTIVE = 64;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfacePlayerInfoDataBase {
	public:
		// CgsServerInterfacePlayerInfoData.h:209
		int32_t GetGameID() const;

		virtual ~ServerInterfacePlayerInfoDataBase();

		ServerInterfacePlayerInfoDataBase();

		// CgsServerInterfacePlayerInfoData.h:185
		const char * GetName() const;

		// CgsServerInterfacePlayerInfoData.h:197
		int32_t GetID() const;

		// CgsServerInterfacePlayerInfoData.h:203
		int32_t GetRank() const;

		// CgsServerInterfacePlayerInfoData.h:191
		uint32_t GetLocality() const;

	}

	// CgsServerInterfacePlayerInfoData.h:50
	const int32_t KI_PLAYER_INFO_FLAG_ADMINISTRATOR = 1;

	// CgsServerInterfacePlayerInfoData.h:51
	const int32_t KI_PLAYER_INFO_FLAG_DETENTION = 2;

	// CgsServerInterfacePlayerInfoData.h:52
	const int32_t KI_PLAYER_INFO_FLAG_IN_GAME = 4;

	// CgsServerInterfacePlayerInfoData.h:53
	const int32_t KI_PLAYER_INFO_FLAG_ROOM_HOST = 8;

	// CgsServerInterfacePlayerInfoData.h:54
	const int32_t KI_PLAYER_INFO_FLAG_LOCKED = 16;

	// CgsServerInterfacePlayerInfoData.h:55
	const int32_t KI_PLAYER_INFO_FLAG_MODERATOR = 32;

	// CgsServerInterfacePlayerInfoData.h:56
	const int32_t KI_PLAYER_INFO_FLAG_NO_CHAT_FILTER = 64;

	// CgsServerInterfacePlayerInfoData.h:57
	const int32_t KI_PLAYER_INFO_FLAG_NO_PRIVATE_MESSAGE = 128;

	// CgsServerInterfacePlayerInfoData.h:58
	const int32_t KI_PLAYER_INFO_FLAG_TEST_ACCOUNT = 256;

	// CgsServerInterfacePlayerInfoData.h:59
	const int32_t KI_PLAYER_INFO_FLAG_LOCAL_USER = 512;

	// CgsServerInterfacePlayerInfoData.h:60
	const int32_t KI_PLAYER_INFO_FLAG_ROOM_VICE_HOST = 1024;

	// CgsServerInterfacePlayerInfoData.h:61
	const int32_t KI_PLAYER_INFO_FLAG_AUDIT_SESSION = 2048;

	// CgsServerInterfacePlayerInfoData.h:62
	const int32_t KI_PLAYER_INFO_FLAG_TERMINATED = 4096;

	// CgsServerInterfacePlayerInfoData.h:63
	const int32_t KI_PLAYER_INFO_FLAG_ATTR0 = 8192;

	// CgsServerInterfacePlayerInfoData.h:64
	const int32_t KI_PLAYER_INFO_FLAG_ATTR1 = 16384;

	// CgsServerInterfacePlayerInfoData.h:65
	const int32_t KI_PLAYER_INFO_FLAG_ATTR2 = 32768;

	// CgsServerInterfacePlayerInfoData.h:66
	const int32_t KI_PLAYER_INFO_FLAG_ATTR3 = 65536;

	// CgsServerInterfacePlayerInfoData.h:68
	const int32_t KI_PLAYER_INFO_HW_FLAG_BROADBAND = 1;

	// CgsServerInterfacePlayerInfoData.h:69
	const int32_t KI_PLAYER_INFO_HW_FLAG_USB_ETHERNET = 2;

	// CgsServerInterfacePlayerInfoData.h:70
	const int32_t KI_PLAYER_INFO_HW_FLAG_USB_HEADSET = 4;

	// CgsServerInterfacePlayerInfoData.h:71
	const int32_t KI_PLAYER_INFO_HW_FLAG_USB_KEYBOARD = 8;

	// CgsServerInterfacePlayerInfoData.h:72
	const int32_t KI_PLAYER_INFO_HW_FLAG_PPPOE = 16;

	// CgsServerInterfacePlayerInfoData.h:73
	const int32_t KI_PLAYER_INFO_HW_FLAG_VOIP_USED = 32;

	// CgsServerInterfacePlayerInfoData.h:74
	const int32_t KI_PLAYER_INFO_HW_FLAG_VOIP_ACTIVE = 64;

}

// CgsServerInterfacePlayerInfoData.h:85
void CgsNetwork::ServerInterfacePlayerInfoDataBase::~ServerInterfacePlayerInfoDataBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfacePlayerInfoData.h:85
void CgsNetwork::ServerInterfacePlayerInfoDataBase::ServerInterfacePlayerInfoDataBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsBitStream.h:26
namespace CgsNetwork {
	// CgsServerInterfacePlayerInfoData.h:50
	const int32_t KI_PLAYER_INFO_FLAG_ADMINISTRATOR = 1;

	// CgsServerInterfacePlayerInfoData.h:51
	const int32_t KI_PLAYER_INFO_FLAG_DETENTION = 2;

	// CgsServerInterfacePlayerInfoData.h:52
	const int32_t KI_PLAYER_INFO_FLAG_IN_GAME = 4;

	// CgsServerInterfacePlayerInfoData.h:53
	const int32_t KI_PLAYER_INFO_FLAG_ROOM_HOST = 8;

	// CgsServerInterfacePlayerInfoData.h:54
	const int32_t KI_PLAYER_INFO_FLAG_LOCKED = 16;

	// CgsServerInterfacePlayerInfoData.h:55
	const int32_t KI_PLAYER_INFO_FLAG_MODERATOR = 32;

	// CgsServerInterfacePlayerInfoData.h:56
	const int32_t KI_PLAYER_INFO_FLAG_NO_CHAT_FILTER = 64;

	// CgsServerInterfacePlayerInfoData.h:57
	const int32_t KI_PLAYER_INFO_FLAG_NO_PRIVATE_MESSAGE = 128;

	// CgsServerInterfacePlayerInfoData.h:58
	const int32_t KI_PLAYER_INFO_FLAG_TEST_ACCOUNT = 256;

	// CgsServerInterfacePlayerInfoData.h:59
	const int32_t KI_PLAYER_INFO_FLAG_LOCAL_USER = 512;

	// CgsServerInterfacePlayerInfoData.h:60
	const int32_t KI_PLAYER_INFO_FLAG_ROOM_VICE_HOST = 1024;

	// CgsServerInterfacePlayerInfoData.h:61
	const int32_t KI_PLAYER_INFO_FLAG_AUDIT_SESSION = 2048;

	// CgsServerInterfacePlayerInfoData.h:62
	const int32_t KI_PLAYER_INFO_FLAG_TERMINATED = 4096;

	// CgsServerInterfacePlayerInfoData.h:63
	const int32_t KI_PLAYER_INFO_FLAG_ATTR0 = 8192;

	// CgsServerInterfacePlayerInfoData.h:64
	const int32_t KI_PLAYER_INFO_FLAG_ATTR1 = 16384;

	// CgsServerInterfacePlayerInfoData.h:65
	const int32_t KI_PLAYER_INFO_FLAG_ATTR2 = 32768;

	// CgsServerInterfacePlayerInfoData.h:66
	const int32_t KI_PLAYER_INFO_FLAG_ATTR3 = 65536;

	// CgsServerInterfacePlayerInfoData.h:68
	const int32_t KI_PLAYER_INFO_HW_FLAG_BROADBAND = 1;

	// CgsServerInterfacePlayerInfoData.h:69
	const int32_t KI_PLAYER_INFO_HW_FLAG_USB_ETHERNET = 2;

	// CgsServerInterfacePlayerInfoData.h:70
	const int32_t KI_PLAYER_INFO_HW_FLAG_USB_HEADSET = 4;

	// CgsServerInterfacePlayerInfoData.h:71
	const int32_t KI_PLAYER_INFO_HW_FLAG_USB_KEYBOARD = 8;

	// CgsServerInterfacePlayerInfoData.h:72
	const int32_t KI_PLAYER_INFO_HW_FLAG_PPPOE = 16;

	// CgsServerInterfacePlayerInfoData.h:73
	const int32_t KI_PLAYER_INFO_HW_FLAG_VOIP_USED = 32;

	// CgsServerInterfacePlayerInfoData.h:74
	const int32_t KI_PLAYER_INFO_HW_FLAG_VOIP_ACTIVE = 64;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfacePlayerInfoDataBase {
	public:
		virtual ~ServerInterfacePlayerInfoDataBase();

		ServerInterfacePlayerInfoDataBase();

		// CgsServerInterfacePlayerInfoData.h:197
		int32_t GetID() const;

		// CgsServerInterfacePlayerInfoData.h:185
		const char * GetName() const;

		// CgsServerInterfacePlayerInfoData.h:203
		int32_t GetRank() const;

	}

	// CgsServerInterfacePlayerInfoData.h:50
	const int32_t KI_PLAYER_INFO_FLAG_ADMINISTRATOR = 1;

	// CgsServerInterfacePlayerInfoData.h:51
	const int32_t KI_PLAYER_INFO_FLAG_DETENTION = 2;

	// CgsServerInterfacePlayerInfoData.h:52
	const int32_t KI_PLAYER_INFO_FLAG_IN_GAME = 4;

	// CgsServerInterfacePlayerInfoData.h:53
	const int32_t KI_PLAYER_INFO_FLAG_ROOM_HOST = 8;

	// CgsServerInterfacePlayerInfoData.h:54
	const int32_t KI_PLAYER_INFO_FLAG_LOCKED = 16;

	// CgsServerInterfacePlayerInfoData.h:55
	const int32_t KI_PLAYER_INFO_FLAG_MODERATOR = 32;

	// CgsServerInterfacePlayerInfoData.h:56
	const int32_t KI_PLAYER_INFO_FLAG_NO_CHAT_FILTER = 64;

	// CgsServerInterfacePlayerInfoData.h:57
	const int32_t KI_PLAYER_INFO_FLAG_NO_PRIVATE_MESSAGE = 128;

	// CgsServerInterfacePlayerInfoData.h:58
	const int32_t KI_PLAYER_INFO_FLAG_TEST_ACCOUNT = 256;

	// CgsServerInterfacePlayerInfoData.h:59
	const int32_t KI_PLAYER_INFO_FLAG_LOCAL_USER = 512;

	// CgsServerInterfacePlayerInfoData.h:60
	const int32_t KI_PLAYER_INFO_FLAG_ROOM_VICE_HOST = 1024;

	// CgsServerInterfacePlayerInfoData.h:61
	const int32_t KI_PLAYER_INFO_FLAG_AUDIT_SESSION = 2048;

	// CgsServerInterfacePlayerInfoData.h:62
	const int32_t KI_PLAYER_INFO_FLAG_TERMINATED = 4096;

	// CgsServerInterfacePlayerInfoData.h:63
	const int32_t KI_PLAYER_INFO_FLAG_ATTR0 = 8192;

	// CgsServerInterfacePlayerInfoData.h:64
	const int32_t KI_PLAYER_INFO_FLAG_ATTR1 = 16384;

	// CgsServerInterfacePlayerInfoData.h:65
	const int32_t KI_PLAYER_INFO_FLAG_ATTR2 = 32768;

	// CgsServerInterfacePlayerInfoData.h:66
	const int32_t KI_PLAYER_INFO_FLAG_ATTR3 = 65536;

	// CgsServerInterfacePlayerInfoData.h:68
	const int32_t KI_PLAYER_INFO_HW_FLAG_BROADBAND = 1;

	// CgsServerInterfacePlayerInfoData.h:69
	const int32_t KI_PLAYER_INFO_HW_FLAG_USB_ETHERNET = 2;

	// CgsServerInterfacePlayerInfoData.h:70
	const int32_t KI_PLAYER_INFO_HW_FLAG_USB_HEADSET = 4;

	// CgsServerInterfacePlayerInfoData.h:71
	const int32_t KI_PLAYER_INFO_HW_FLAG_USB_KEYBOARD = 8;

	// CgsServerInterfacePlayerInfoData.h:72
	const int32_t KI_PLAYER_INFO_HW_FLAG_PPPOE = 16;

	// CgsServerInterfacePlayerInfoData.h:73
	const int32_t KI_PLAYER_INFO_HW_FLAG_VOIP_USED = 32;

	// CgsServerInterfacePlayerInfoData.h:74
	const int32_t KI_PLAYER_INFO_HW_FLAG_VOIP_ACTIVE = 64;

}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct ServerInterfacePlayerInfoDataBase {
		// CgsServerInterfacePlayerInfoData.h:89
		struct PlayerColour {
			// CgsServerInterfacePlayerInfoData.h:91
			uint8_t mu8Red;

			// CgsServerInterfacePlayerInfoData.h:92
			uint8_t mu8Green;

			// CgsServerInterfacePlayerInfoData.h:93
			uint8_t mu8Blue;

			// CgsServerInterfacePlayerInfoData.h:94
			uint8_t mu8Alpha;

		}

	}

	// CgsServerInterfacePlayerInfoData.h:50
	const int32_t KI_PLAYER_INFO_FLAG_ADMINISTRATOR = 1;

	// CgsServerInterfacePlayerInfoData.h:51
	const int32_t KI_PLAYER_INFO_FLAG_DETENTION = 2;

	// CgsServerInterfacePlayerInfoData.h:52
	const int32_t KI_PLAYER_INFO_FLAG_IN_GAME = 4;

	// CgsServerInterfacePlayerInfoData.h:53
	const int32_t KI_PLAYER_INFO_FLAG_ROOM_HOST = 8;

	// CgsServerInterfacePlayerInfoData.h:54
	const int32_t KI_PLAYER_INFO_FLAG_LOCKED = 16;

	// CgsServerInterfacePlayerInfoData.h:55
	const int32_t KI_PLAYER_INFO_FLAG_MODERATOR = 32;

	// CgsServerInterfacePlayerInfoData.h:56
	const int32_t KI_PLAYER_INFO_FLAG_NO_CHAT_FILTER = 64;

	// CgsServerInterfacePlayerInfoData.h:57
	const int32_t KI_PLAYER_INFO_FLAG_NO_PRIVATE_MESSAGE = 128;

	// CgsServerInterfacePlayerInfoData.h:58
	const int32_t KI_PLAYER_INFO_FLAG_TEST_ACCOUNT = 256;

	// CgsServerInterfacePlayerInfoData.h:59
	const int32_t KI_PLAYER_INFO_FLAG_LOCAL_USER = 512;

	// CgsServerInterfacePlayerInfoData.h:60
	const int32_t KI_PLAYER_INFO_FLAG_ROOM_VICE_HOST = 1024;

	// CgsServerInterfacePlayerInfoData.h:61
	const int32_t KI_PLAYER_INFO_FLAG_AUDIT_SESSION = 2048;

	// CgsServerInterfacePlayerInfoData.h:62
	const int32_t KI_PLAYER_INFO_FLAG_TERMINATED = 4096;

	// CgsServerInterfacePlayerInfoData.h:63
	const int32_t KI_PLAYER_INFO_FLAG_ATTR0 = 8192;

	// CgsServerInterfacePlayerInfoData.h:64
	const int32_t KI_PLAYER_INFO_FLAG_ATTR1 = 16384;

	// CgsServerInterfacePlayerInfoData.h:65
	const int32_t KI_PLAYER_INFO_FLAG_ATTR2 = 32768;

	// CgsServerInterfacePlayerInfoData.h:66
	const int32_t KI_PLAYER_INFO_FLAG_ATTR3 = 65536;

	// CgsServerInterfacePlayerInfoData.h:68
	const int32_t KI_PLAYER_INFO_HW_FLAG_BROADBAND = 1;

	// CgsServerInterfacePlayerInfoData.h:69
	const int32_t KI_PLAYER_INFO_HW_FLAG_USB_ETHERNET = 2;

	// CgsServerInterfacePlayerInfoData.h:70
	const int32_t KI_PLAYER_INFO_HW_FLAG_USB_HEADSET = 4;

	// CgsServerInterfacePlayerInfoData.h:71
	const int32_t KI_PLAYER_INFO_HW_FLAG_USB_KEYBOARD = 8;

	// CgsServerInterfacePlayerInfoData.h:72
	const int32_t KI_PLAYER_INFO_HW_FLAG_PPPOE = 16;

	// CgsServerInterfacePlayerInfoData.h:73
	const int32_t KI_PLAYER_INFO_HW_FLAG_VOIP_USED = 32;

	// CgsServerInterfacePlayerInfoData.h:74
	const int32_t KI_PLAYER_INFO_HW_FLAG_VOIP_ACTIVE = 64;

}

// CgsServerInterfacePlayerInfoData.h:85
struct CgsNetwork::ServerInterfacePlayerInfoDataBase : public CgsNetwork::ServerInterfaceStructureInterface {
protected:
	// CgsServerInterfacePlayerInfoData.h:123
	char[20] macName;

	// CgsServerInterfacePlayerInfoData.h:124
	char[132] macAuxiliaryData;

	// CgsServerInterfacePlayerInfoData.h:125
	char[20] macClubID;

	// CgsServerInterfacePlayerInfoData.h:126
	char[8] macClubTag;

	// CgsServerInterfacePlayerInfoData.h:127
	char[8] macPing;

	// CgsServerInterfacePlayerInfoData.h:129
	CgsNetwork::ServerInterfacePlayerInfoDataBase::PlayerColour mColour;

	// CgsServerInterfacePlayerInfoData.h:131
	int32_t miIdent;

	// CgsServerInterfacePlayerInfoData.h:132
	int32_t miFlags;

	// CgsServerInterfacePlayerInfoData.h:133
	int32_t miAttributes;

	// CgsServerInterfacePlayerInfoData.h:134
	int32_t miRank;

	// CgsServerInterfacePlayerInfoData.h:135
	int32_t miGameID;

	// CgsServerInterfacePlayerInfoData.h:136
	int32_t miReputation;

	// CgsServerInterfacePlayerInfoData.h:137
	int32_t miUserSetID;

	// CgsServerInterfacePlayerInfoData.h:139
	uint32_t muIPAddress;

	// CgsServerInterfacePlayerInfoData.h:140
	uint32_t muLevel;

	// CgsServerInterfacePlayerInfoData.h:141
	uint32_t muMedals;

	// CgsServerInterfacePlayerInfoData.h:142
	uint32_t muHwFlags;

	// CgsServerInterfacePlayerInfoData.h:143
	uint32_t muLocalAddr;

	// CgsServerInterfacePlayerInfoData.h:144
	uint32_t muLocality;

public:
	void ServerInterfacePlayerInfoDataBase(const ServerInterfacePlayerInfoDataBase &);

	void ServerInterfacePlayerInfoDataBase();

	// CgsServerInterfacePlayerInfoData.cpp:167
	virtual bool Prepare();

	// CgsServerInterfacePlayerInfoData.cpp:208
	// Declaration
	virtual void SerialiseFromUser(const LobbyApiUserT *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// lobbyapi.h:140
		typedef LobbyApiUserT LobbyApiUserT;

	}

	// CgsServerInterfacePlayerInfoData.h:185
	const char * GetName() const;

	// CgsServerInterfacePlayerInfoData.h:191
	uint32_t GetLocality() const;

	// CgsServerInterfacePlayerInfoData.h:197
	int32_t GetID() const;

	// CgsServerInterfacePlayerInfoData.h:203
	int32_t GetRank() const;

	// CgsServerInterfacePlayerInfoData.h:209
	int32_t GetGameID() const;

	virtual void ~ServerInterfacePlayerInfoDataBase();

}

