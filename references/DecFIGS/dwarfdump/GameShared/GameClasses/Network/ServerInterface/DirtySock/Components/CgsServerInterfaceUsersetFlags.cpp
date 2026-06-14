// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsServerInterfaceUsersetFlags.cpp:52
	extern uint32_t ConvertUsersetFlags(uint32_t, CgsNetwork::EConversionFlags);

	// CgsServerInterfaceUsersetFlags.cpp:109
	extern uint32_t ConvertUsersetFlagsToDirtySock(uint32_t);

	// CgsServerInterfaceUsersetFlags.cpp:91
	extern uint32_t ConvertDirtySockFlagsToUserset(uint32_t);

	// CgsServerInterfaceUsersetFlags.cpp:32
	const uint32_t[6][2] KAU_DIRTYSOCK_FLAGS_TO_USERSET_FLAGS;

	// CgsServerInterfaceUsersetFlags.cpp:41
	const uint32_t KU_NUM_USERSET_FLAGS = 6;

}

