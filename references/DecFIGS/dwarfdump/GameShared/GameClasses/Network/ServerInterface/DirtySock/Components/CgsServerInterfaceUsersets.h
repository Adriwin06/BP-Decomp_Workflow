// CgsServerInterfaceUsersets.h:173
extern DSErrorToServerInterfaceError[] KA_CREATE_DS_SERVER_INTERFACE_ERROR_MAPPING;

// CgsServerInterfaceUsersets.h:174
extern DSErrorToServerInterfaceError[] KA_JOIN_DS_SERVER_INTERFACE_ERROR_MAPPING;

// CgsServerInterfaceUsersets.h:175
extern DSErrorToServerInterfaceError[] KA_LEAVE_DS_SERVER_INTERFACE_ERROR_MAPPING;

// CgsServerInterfaceUsersets.h:176
extern DSErrorToServerInterfaceError[] KA_DELETE_DS_SERVER_INTERFACE_ERROR_MAPPING;

// CgsServerInterfaceUsersets.h:177
extern DSErrorToServerInterfaceError[] KA_UPDATE_DS_SERVER_INTERFACE_ERROR_MAPPING;

// CgsServerInterfaceUsersets.h:179
extern int[] KAI_ACTION_CODE_MAPPING;

// CgsServerInterfaceUsersets.h:180
extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceUsersets {
	private:
		// CgsServerInterfaceUsersets.h:173
		extern DSErrorToServerInterfaceError[] KA_CREATE_DS_SERVER_INTERFACE_ERROR_MAPPING;

		// CgsServerInterfaceUsersets.h:174
		extern DSErrorToServerInterfaceError[] KA_JOIN_DS_SERVER_INTERFACE_ERROR_MAPPING;

		// CgsServerInterfaceUsersets.h:175
		extern DSErrorToServerInterfaceError[] KA_LEAVE_DS_SERVER_INTERFACE_ERROR_MAPPING;

		// CgsServerInterfaceUsersets.h:176
		extern DSErrorToServerInterfaceError[] KA_DELETE_DS_SERVER_INTERFACE_ERROR_MAPPING;

		// CgsServerInterfaceUsersets.h:177
		extern DSErrorToServerInterfaceError[] KA_UPDATE_DS_SERVER_INTERFACE_ERROR_MAPPING;

		// CgsServerInterfaceUsersets.h:179
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfaceUsersets.h:180
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceUsersets {
	public:
		virtual ~ServerInterfaceUsersets();

	private:
		// CgsServerInterfaceUsersets.h:173
		extern DSErrorToServerInterfaceError[] KA_CREATE_DS_SERVER_INTERFACE_ERROR_MAPPING;

		// CgsServerInterfaceUsersets.h:174
		extern DSErrorToServerInterfaceError[] KA_JOIN_DS_SERVER_INTERFACE_ERROR_MAPPING;

		// CgsServerInterfaceUsersets.h:175
		extern DSErrorToServerInterfaceError[] KA_LEAVE_DS_SERVER_INTERFACE_ERROR_MAPPING;

		// CgsServerInterfaceUsersets.h:176
		extern DSErrorToServerInterfaceError[] KA_DELETE_DS_SERVER_INTERFACE_ERROR_MAPPING;

		// CgsServerInterfaceUsersets.h:177
		extern DSErrorToServerInterfaceError[] KA_UPDATE_DS_SERVER_INTERFACE_ERROR_MAPPING;

		// CgsServerInterfaceUsersets.h:179
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfaceUsersets.h:180
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsServerInterfaceUsersets.h:69
void CgsNetwork::ServerInterfaceUsersets::~ServerInterfaceUsersets() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceUsersets {
	public:
		virtual ~ServerInterfaceUsersets();

		ServerInterfaceUsersets();

	private:
		// CgsServerInterfaceUsersets.h:173
		extern DSErrorToServerInterfaceError[] KA_CREATE_DS_SERVER_INTERFACE_ERROR_MAPPING;

		// CgsServerInterfaceUsersets.h:174
		extern DSErrorToServerInterfaceError[] KA_JOIN_DS_SERVER_INTERFACE_ERROR_MAPPING;

		// CgsServerInterfaceUsersets.h:175
		extern DSErrorToServerInterfaceError[] KA_LEAVE_DS_SERVER_INTERFACE_ERROR_MAPPING;

		// CgsServerInterfaceUsersets.h:176
		extern DSErrorToServerInterfaceError[] KA_DELETE_DS_SERVER_INTERFACE_ERROR_MAPPING;

		// CgsServerInterfaceUsersets.h:177
		extern DSErrorToServerInterfaceError[] KA_UPDATE_DS_SERVER_INTERFACE_ERROR_MAPPING;

		// CgsServerInterfaceUsersets.h:179
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfaceUsersets.h:180
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsServerInterfaceUsersets.h:69
void CgsNetwork::ServerInterfaceUsersets::ServerInterfaceUsersets() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceUsersets {
		// CgsServerInterfaceUsersets.h:72
		enum EAction {
			E_ACTION_CREATE = 0,
			E_ACTION_DELETE = 1,
			E_ACTION_JOIN = 2,
			E_ACTION_LEAVE = 3,
			E_ACTION_UPDATE = 4,
			E_ACTION_COUNT = 5,
		}

	}

}

// CgsServerInterfaceUsersets.h:69
struct CgsNetwork::ServerInterfaceUsersets : public CgsNetwork::ServerInterfaceComponent {
private:
	// CgsServerInterfaceUsersets.cpp:60
	extern const DSErrorToServerInterfaceError[5] KA_CREATE_DS_SERVER_INTERFACE_ERROR_MAPPING;

	// CgsServerInterfaceUsersets.cpp:71
	extern const DSErrorToServerInterfaceError[7] KA_JOIN_DS_SERVER_INTERFACE_ERROR_MAPPING;

	// CgsServerInterfaceUsersets.cpp:84
	extern const DSErrorToServerInterfaceError[5] KA_LEAVE_DS_SERVER_INTERFACE_ERROR_MAPPING;

	// CgsServerInterfaceUsersets.cpp:95
	extern const DSErrorToServerInterfaceError[4] KA_DELETE_DS_SERVER_INTERFACE_ERROR_MAPPING;

	// CgsServerInterfaceUsersets.cpp:105
	extern const DSErrorToServerInterfaceError[5] KA_UPDATE_DS_SERVER_INTERFACE_ERROR_MAPPING;

	// CgsServerInterfaceUsersets.cpp:49
	extern const int[5] KAI_ACTION_CODE_MAPPING;

	// CgsServerInterfaceUsersets.cpp:116
	extern const DSErrorToServerInterfaceErrorTable[5] KA_DS_ERROR_TABLE_LOOKUP;

	// CgsServerInterfaceUsersets.cpp:126
	extern const char *[5] KAPC_ACTION_NAMES;

	// CgsServerInterfaceUsersets.h:183
	CgsNetwork::ServerInterfaceDirtySock * mpServerInterface;

	// CgsServerInterfaceUsersets.h:184
	CgsNetwork::ServerInterfaceUsersets::EAction meCurrentAction;

	// Unknown accessibility
	// lobbydisplist.h:43
	typedef CgsNetwork::DirtySock::DispListRef DispListRef;

	// CgsServerInterfaceUsersets.h:186
	ServerInterfaceUsersets::DispListRef * mpUsersInUsersetList;

public:
	// CgsServerInterfaceUsersets.cpp:148
	virtual void Construct();

	// CgsServerInterfaceUsersets.cpp:169
	void Destruct();

	// CgsServerInterfaceUsersets.cpp:189
	bool Prepare(CgsNetwork::ServerInterfaceDirtySock *);

	// CgsServerInterfaceUsersets.cpp:211
	bool Release();

	// CgsServerInterfaceUsersets.cpp:230
	void Update();

	// CgsServerInterfaceUsersets.cpp:290
	void Suspend();

	// CgsServerInterfaceUsersets.cpp:304
	void Resume();

	// CgsServerInterfaceUsersets.cpp:320
	virtual void OnEvent(CgsNetwork::EServerInterfaceEvent, void *);

	// CgsServerInterfaceUsersets.cpp:483
	void CreateUserset(ServerInterfaceUsersetParamsBase *);

	// CgsServerInterfaceUsersets.cpp:510
	void JoinUserset(ServerInterfaceUsersetParamsBase *);

	// CgsServerInterfaceUsersets.cpp:536
	void LeaveUserset();

	// CgsServerInterfaceUsersets.cpp:743
	bool IsLocalPlayerHost() const;

	// CgsServerInterfaceUsersets.cpp:598
	bool GetUserSetParams(ServerInterfaceUsersetParamsBase *) const;

	// CgsServerInterfaceUsersets.cpp:629
	void UpdateUserSetParams(ServerInterfaceUsersetParamsBase *);

	// CgsServerInterfaceUsersets.cpp:658
	bool IsLocalPlayerInUserset() const;

	// CgsServerInterfaceUsersets.cpp:676
	bool IsPlayerInOurUserset(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID) const;

	// CgsServerInterfaceUsersets.cpp:710
	bool IsPlayerInOurUserset(const char *) const;

	// CgsServerInterfaceUsersets.cpp:775
	void KickPlayer(const char *, CgsNetwork::EKickReason);

	// CgsServerInterfaceUsersets.cpp:807
	void KickPlayer(int32_t, CgsNetwork::EKickReason);

	// CgsServerInterfaceUsersets.cpp:845
	void KickPlayerByID(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, CgsNetwork::EKickReason);

private:
	// CgsServerInterfaceUsersets.cpp:446
	void AllocDisplayLists();

	// CgsServerInterfaceUsersets.cpp:464
	void FreeDisplayLists();

	// CgsServerInterfaceUsersets.cpp:571
	const LobbyApiUserSetT * GetUserSet() const;

	// CgsServerInterfaceUsersets.cpp:364
	CgsNetwork::EServerInterfaceError ConvertError(int, CgsNetwork::ServerInterfaceUsersets::EAction);

	// CgsServerInterfaceUsersets.cpp:406
	void StartAction(CgsNetwork::ServerInterfaceUsersets::EAction);

	// CgsServerInterfaceUsersets.cpp:430
	void EndAction(int);

	// CgsServerInterfaceUsersets.cpp:387
	void DefaultCallback(LobbyApiRefT *, LobbyApiMsgT *, void *);

public:
	virtual void ~ServerInterfaceUsersets();

}

