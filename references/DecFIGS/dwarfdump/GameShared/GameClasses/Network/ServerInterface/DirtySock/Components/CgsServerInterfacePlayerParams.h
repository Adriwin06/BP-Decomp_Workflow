// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsServerInterfacePlayerParams.h:54
	enum EFirewallSettings {
		E_FIREWALL_STRICT = 0,
		E_FIREWALL_MODERATE = 1,
		E_FIREWALL_OPEN = 2,
		E_FIREWALL_COUNT = 3,
	}

	// Declaration
	struct ServerInterfacePlayerParamsBase {
	public:
		virtual ~ServerInterfacePlayerParamsBase();

		ServerInterfacePlayerParamsBase();

		// CgsServerInterfacePlayerParams.h:116
		const char * GetName() const;

		// CgsServerInterfacePlayerParams.h:122
		int32_t GetID() const;

		CgsNetwork::ServerInterfacePlayerParamsBase & operator=(const CgsNetwork::ServerInterfacePlayerParamsBase &);

		// CgsServerInterfacePlayerParams.h:128
		CgsNetwork::EFirewallSettings GetFirewallSettings() const;

	}

}

// CgsServerInterfacePlayerParams.h:72
void CgsNetwork::ServerInterfacePlayerParamsBase::~ServerInterfacePlayerParamsBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfacePlayerParams.h:72
void CgsNetwork::ServerInterfacePlayerParamsBase::ServerInterfacePlayerParamsBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfacePlayerParams.h:72
void CgsNetwork::ServerInterfacePlayerParamsBase::operator=(const const CgsNetwork::ServerInterfacePlayerParamsBase &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsServerInterfacePlayerParams.h:54
	enum EFirewallSettings {
		E_FIREWALL_STRICT = 0,
		E_FIREWALL_MODERATE = 1,
		E_FIREWALL_OPEN = 2,
		E_FIREWALL_COUNT = 3,
	}

	// Declaration
	struct ServerInterfacePlayerParamsBase {
	public:
		virtual ~ServerInterfacePlayerParamsBase();

		// CgsServerInterfacePlayerParams.h:116
		const char * GetName() const;

		ServerInterfacePlayerParamsBase();

		// CgsServerInterfacePlayerParams.h:122
		int32_t GetID() const;

	}

}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsServerInterfacePlayerParams.h:54
	enum EFirewallSettings {
		E_FIREWALL_STRICT = 0,
		E_FIREWALL_MODERATE = 1,
		E_FIREWALL_OPEN = 2,
		E_FIREWALL_COUNT = 3,
	}

}

// CgsServerInterfacePlayerParams.h:72
struct CgsNetwork::ServerInterfacePlayerParamsBase : public CgsNetwork::ServerInterfaceStructureInterface {
protected:
	// CgsServerInterfacePlayerParams.h:103
	char[64] macMachineAddress;

	// CgsServerInterfacePlayerParams.h:104
	const char * mpcName;

	// CgsServerInterfacePlayerParams.h:105
	int32_t miIdent;

	// CgsServerInterfacePlayerParams.h:106
	int32_t miPresence;

	// CgsServerInterfacePlayerParams.h:107
	uint32_t muExternalAddress;

	// CgsServerInterfacePlayerParams.h:108
	uint32_t muInternalAddress;

	// CgsServerInterfacePlayerParams.h:109
	uint32_t muFlags;

	// CgsServerInterfacePlayerParams.h:110
	CgsNetwork::EFirewallSettings meFirewallSetting;

public:
	void ServerInterfacePlayerParamsBase(const CgsNetwork::ServerInterfacePlayerParamsBase &);

	void ServerInterfacePlayerParamsBase();

	// CgsServerInterfacePlayerParams.cpp:53
	virtual bool Prepare();

	// CgsServerInterfacePlayerParams.cpp:77
	virtual void SerialiseFromPlayer(const LobbyApiPlayT::LobbyApiPlayerT *);

	// CgsServerInterfacePlayerParams.cpp:106
	void SerialiseToString(char *, int32_t) const;

	// CgsServerInterfacePlayerParams.h:116
	const char * GetName() const;

	// CgsServerInterfacePlayerParams.h:122
	int32_t GetID() const;

	// CgsServerInterfacePlayerParams.h:128
	CgsNetwork::EFirewallSettings GetFirewallSettings() const;

	// CgsServerInterfacePlayerParams.h:134
	LobbyApiUserT::DirtyAddrT * GetDirtyAddrT();

	virtual void ~ServerInterfacePlayerParamsBase();

}

