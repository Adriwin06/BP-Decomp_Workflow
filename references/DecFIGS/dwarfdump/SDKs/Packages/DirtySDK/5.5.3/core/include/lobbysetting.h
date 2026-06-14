// lobbysetting.h:40
typedef LobbySettingRefT LobbySettingRefT;

// lobbysetting.h:40
struct LobbySettingRefT {
	// lobbysetting.c:39
	LobbyApiRefT * pApiRef;

	// lobbysetting.c:40
	int32_t iCallbackID;

	// lobbysetting.c:41
	int32_t iMemGroup;

	// lobbysetting.c:43
	LobbySettingCallbackT * pCallback;

	// lobbysetting.c:44
	void * pUserData;

	// lobbysetting.c:50
	enumeration  eState;

	// lobbysetting.c:52
	char[1001] strSettings;

}

// lobbysetting.h:43
typedef void (LobbySettingRefT *, int32_t, void *) LobbySettingCallbackT;

