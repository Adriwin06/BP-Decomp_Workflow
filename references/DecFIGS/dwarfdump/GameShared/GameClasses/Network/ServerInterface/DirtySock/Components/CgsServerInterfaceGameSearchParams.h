// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceGameSearchParamsBase {
	public:
		virtual ~ServerInterfaceGameSearchParamsBase();

		CgsNetwork::ServerInterfaceGameSearchParamsBase & operator=(const CgsNetwork::ServerInterfaceGameSearchParamsBase &);

		ServerInterfaceGameSearchParamsBase();

		// CgsServerInterfaceGameSearchParams.h:120
		void SetReturnPlayers(bool);

	}

}

// CgsServerInterfaceGameSearchParams.h:48
void CgsNetwork::ServerInterfaceGameSearchParamsBase::~ServerInterfaceGameSearchParamsBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceGameSearchParams.h:48
void CgsNetwork::ServerInterfaceGameSearchParamsBase::operator=(const const CgsNetwork::ServerInterfaceGameSearchParamsBase &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceGameSearchParams.h:48
void CgsNetwork::ServerInterfaceGameSearchParamsBase::ServerInterfaceGameSearchParamsBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceGameSearchParams.h:48
struct CgsNetwork::ServerInterfaceGameSearchParamsBase : public CgsNetwork::ServerInterfaceStructureInterface {
protected:
	// CgsServerInterfaceGameSearchParams.h:73
	int32_t miNumGames;

	// CgsServerInterfaceGameSearchParams.h:74
	int32_t miRoomID;

	// CgsServerInterfaceGameSearchParams.h:75
	uint32_t muGameFlagsMask;

	// CgsServerInterfaceGameSearchParams.h:76
	uint32_t muGameFlagsValue;

	// CgsServerInterfaceGameSearchParams.h:78
	bool mbReturnPlayers;

public:
	// CgsServerInterfaceGameSearchParams.cpp:48
	virtual bool Prepare();

	// CgsServerInterfaceGameSearchParams.cpp:70
	void SerialiseToString(char *, int32_t) const;

	// CgsServerInterfaceGameSearchParams.h:120
	void SetReturnPlayers(bool);

	// CgsServerInterfaceGameSearchParams.h:126
	bool ReturnPlayers() const;

	// CgsServerInterfaceGameSearchParams.h:132
	bool IsRanked() const;

protected:
	// CgsServerInterfaceGameSearchParams.h:83
	virtual uint32_t GetCustomFlagsMask() const;

	// CgsServerInterfaceGameSearchParams.h:88
	virtual uint32_t GetCustomFlagsValue() const;

public:
	virtual void ~ServerInterfaceGameSearchParamsBase();

}

