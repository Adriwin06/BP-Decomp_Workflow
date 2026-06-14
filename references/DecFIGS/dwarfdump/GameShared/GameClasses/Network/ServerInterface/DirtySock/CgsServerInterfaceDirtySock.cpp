// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsServerInterfaceDirtySock.cpp:159
	extern void DirtyMemFree(void *, int32_t, int32_t);

	// CgsServerInterfaceDirtySock.cpp:138
	extern void * DirtyMemAlloc(int32_t, int32_t, int32_t);

	// CgsServerInterfaceDirtySock.cpp:69
	const DSErrorToServerInterfaceError[1] kaDefaultDSServerInterfaceErrorMapping;

	// CgsServerInterfaceDirtySock.cpp:75
	const int32_t KI_NUM_DEFAULT_ERROR_MAPPINGS = 1;

	// CgsServerInterfaceDirtySock.cpp:77
	const int32_t KI_MESSAGE_BUFFER_MODULE;

	// CgsServerInterfaceDirtySock.cpp:78
	const int32_t KI_MESSAGE_BUFFER_GROUP = 1684434036;

	// CgsServerInterfaceDirtySock.cpp:80
	const int32_t KI_STATS_UPDATE_TIME = 500;

	// CgsServerInterfaceDirtySock.cpp:88
	const uint16_t[14] gauLanguageIDs;

	// CgsServerInterfaceDirtySock.cpp:109
	const char * KAC_STANDARD_SELE_OPTIONS;

}

