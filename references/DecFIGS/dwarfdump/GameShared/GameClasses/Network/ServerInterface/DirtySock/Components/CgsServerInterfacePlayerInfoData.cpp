// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsServerInterfacePlayerInfoData.cpp:92
	extern int32_t ConvertFlags(int32_t, CgsNetwork::EConversionFlags, int32_t *[2], int32_t);

	// CgsServerInterfacePlayerInfoData.cpp:133
	extern int32_t ConvertInfoFlags(int32_t, CgsNetwork::EConversionFlags);

	// CgsServerInterfacePlayerInfoData.cpp:153
	extern int32_t ConvertHWFlags(int32_t, CgsNetwork::EConversionFlags);

	// CgsServerInterfacePlayerInfoData.cpp:35
	const int32_t[17][2] KAAI_LOBBY_USER_FLAGS_TO_PLAYER_INFO_FLAGS;

	// CgsServerInterfacePlayerInfoData.cpp:55
	const int32_t KI_NUM_FLAGS = 17;

	// CgsServerInterfacePlayerInfoData.cpp:57
	const int32_t[7][2] KAAI_HW_FLAGS_TO_PLAYER_INFO_FLAGS;

	// CgsServerInterfacePlayerInfoData.cpp:67
	const int32_t KI_NUM_HW_FLAGS = 14;

}

