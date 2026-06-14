// CgsServerInterfaceDirtySockErrorHelpers.h:48
struct CgsNetwork::DSErrorToServerInterfaceError {
	// CgsServerInterfaceDirtySockErrorHelpers.h:51
	int32_t miDSCode;

	// CgsServerInterfaceDirtySockErrorHelpers.h:52
	CgsNetwork::EServerInterfaceError meError;

}

// CgsServerInterfaceDirtySockErrorHelpers.h:69
struct CgsNetwork::DSErrorToServerInterfaceErrorTable {
	// CgsServerInterfaceDirtySockErrorHelpers.h:72
	const DSErrorToServerInterfaceError * mpMappingTable;

	// CgsServerInterfaceDirtySockErrorHelpers.h:73
	int32_t miNumMappings;

}

