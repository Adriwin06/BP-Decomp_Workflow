// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkServers.cpp:243
	extern void SetServerType(CgsNetwork::EServerType);

	// BrnNetworkServers.cpp:227
	extern CgsNetwork::EServerType GetServerType();

	// BrnNetworkServers.cpp:163
	extern const char * GetServerIP();

	// BrnNetworkServers.cpp:210
	extern int32_t GetServerPort();

	// BrnNetworkServers.cpp:53
	const char * KPC_MY_PCS_IP;

	// BrnNetworkServers.cpp:72
	const char * KPC_STEST_SERVER_IP;

	// BrnNetworkServers.cpp:75
	const char * KPC_SDEV_SERVER_IP;

	// BrnNetworkServers.cpp:78
	const char * KPC_JUICE_SERVER_IP;

	// BrnNetworkServers.cpp:83
	const char * KPC_ARTIST_SERVER_IP;

	// BrnNetworkServers.cpp:108
	const int32_t KI_SERVER_PORT = 21850;

	// BrnNetworkServers.cpp:136
	CgsNetwork::EServerType KE_SERVER_TYPE;

}

