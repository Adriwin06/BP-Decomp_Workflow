// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsServerInterfaceGameFlags.cpp:60
	extern uint32_t ConvertFlags(uint32_t, CgsNetwork::EConversionFlags);

	// CgsServerInterfaceGameFlags.cpp:99
	extern uint32_t ConvertDirtySockFlagsToGame(uint32_t);

	// CgsServerInterfaceGameFlags.cpp:117
	extern uint32_t ConvertGameFlagsToDirtySock(uint32_t);

	// CgsServerInterfaceGameFlags.cpp:32
	const uint32_t[14][2] KAU_DIRTYSOCK_FLAGS_TO_GAME_FLAGS;

	// CgsServerInterfaceGameFlags.cpp:49
	const uint32_t KU_NUM_FLAGS = 14;

}

