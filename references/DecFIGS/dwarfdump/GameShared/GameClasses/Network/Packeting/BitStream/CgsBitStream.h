// CgsBitStream.h:26
namespace CgsNetwork {
	struct PlayerName;

	struct DSErrorToServerInterfaceError;

	struct DSErrorToServerInterfaceErrorTable;

	struct VoIPClient;

	struct HeadsetStatusMessage;

	struct VoIPManager;

	struct ServerInterface;

	struct BuddyManagerBase;

	struct PlayerConnectionData;

	struct TestConnectionMessage;

	struct ConnectionStatusMessage;

	struct SignalMessage;

	struct ReliableMessage;

	struct PlayerData;

	struct PlayerMenuData;

	struct NetworkPlayer;

	struct CgsNetworkPlayerConstructParams;

	struct PlayerManagerDebugComponent;

	struct PlayerManagerConstructParams;

	struct PlayerManagerPrepareParams;

	struct HostMigrationNetworkPlayerData;

	struct HostKeepAliveMessage;

	struct NewHostMessage;

	struct HostMigrationManager;

	struct HostMigrationDebugComponent;

	struct SyncTimeMessage;

	struct SyncTimeClient;

	struct SyncTimeHost;

	struct StartTime;

	struct StartTimeMessage;

	struct ReadyMessage;

	struct NetworkManagerConstructParams;

	struct VersionDisplay;

	struct NetworkTexture;

	struct UniquePlayerIDPS3;

	struct ServerInterfacePlayerParams;

	struct ServerInterfaceGameParams;

	struct NetworkTextureDXTCompress;

}

// CgsBitStream.h:35
struct CgsNetwork::BitStream {
	// CgsBitStream.h:66
	int32_t miBitWritePosition;

	// CgsBitStream.h:67
	int32_t miBitReadPosition;

private:
	// CgsBitStream.h:70
	extern const int32_t KI_MAX_BITS = 64;

	// CgsBitStream.h:72
	uint64_t * mpuBuffer;

	// CgsBitStream.h:73
	int32_t miBufferSizeInBits;

public:
	// CgsBitStream.h:43
	bool Prepare(uint8_t *, int32_t, int32_t, int32_t);

	// CgsBitStream.h:46
	bool Release();

	// CgsBitStream.h:51
	bool AddBits(uint64_t, int32_t);

	// CgsBitStream.h:55
	uint64_t GetBits(int32_t);

	// CgsBitStream.h:58
	int32_t GetBitLength() const;

	// CgsBitStream.h:61
	int32_t GetBitLengthRemaining() const;

	// CgsBitStream.h:64
	// Declaration
	void DebugPrint() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsBitStream.cpp:200
		using namespace CgsDev::Message;

		// CgsBitStream.cpp:201
		using namespace CgsDev::Message;

		// CgsBitStream.cpp:205
		using namespace CgsDev::Message;

	}

}

// CgsBitStream.h:70
extern const int32_t KI_MAX_BITS = 64;

