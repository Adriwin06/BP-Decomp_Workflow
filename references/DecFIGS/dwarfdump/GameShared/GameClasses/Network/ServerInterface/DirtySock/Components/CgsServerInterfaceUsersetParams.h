// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceUsersetParamsBase {
	public:
		virtual ~ServerInterfaceUsersetParamsBase();

		ServerInterfaceUsersetParamsBase();

		// CgsServerInterfaceUsersetParams.h:300
		bool IsLocked() const;

		// CgsServerInterfaceUsersetParams.h:233
		void Unlock();

		// CgsServerInterfaceUsersetParams.h:226
		void Lock();

		// CgsServerInterfaceUsersetParams.h:192
		void SetName(const char *);

		// CgsServerInterfaceUsersetParams.h:220
		void SetMaxPlayers(int32_t);

	}

}

// CgsServerInterfaceUsersetParams.h:55
void CgsNetwork::ServerInterfaceUsersetParamsBase::~ServerInterfaceUsersetParamsBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceUsersetParams.h:55
void CgsNetwork::ServerInterfaceUsersetParamsBase::ServerInterfaceUsersetParamsBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceUsersetParams.h:55
struct CgsNetwork::ServerInterfaceUsersetParamsBase : public CgsNetwork::ServerInterfaceStructureInterface {
protected:
	// CgsServerInterfaceUsersetParams.h:139
	char[36] macName;

	// CgsServerInterfaceUsersetParams.h:140
	char[20] macPassword;

	// CgsServerInterfaceUsersetParams.h:141
	char[68] macDescription;

	// CgsServerInterfaceUsersetParams.h:142
	char[20] macHostName;

	// CgsServerInterfaceUsersetParams.h:144
	int32_t miUsersetId;

	// CgsServerInterfaceUsersetParams.h:145
	int32_t miType;

	// CgsServerInterfaceUsersetParams.h:146
	int32_t miNumPlayers;

	// CgsServerInterfaceUsersetParams.h:147
	int32_t miMaxNumPlayers;

	// CgsServerInterfaceUsersetParams.h:148
	uint32_t muUsersetFlags;

	// CgsServerInterfaceUsersetParams.h:149
	uint32_t muCustomFlags;

public:
	// CgsServerInterfaceUsersetParams.cpp:51
	virtual bool Prepare();

	// CgsServerInterfaceUsersetParams.cpp:80
	virtual void SerialiseToString(char *, int32_t) const;

	// CgsServerInterfaceUsersetParams.cpp:126
	// Declaration
	virtual void SerialiseFromUserset(const LobbyApiUserSetT *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// lobbyapi.h:241
		typedef LobbyApiUserSetT LobbyApiUserSetT;

	}

	// CgsServerInterfaceUsersetParams.h:192
	void SetName(const char *);

	// CgsServerInterfaceUsersetParams.h:199
	void SetPassword(const char *);

	// CgsServerInterfaceUsersetParams.h:206
	void SetDescription(const char *);

	// CgsServerInterfaceUsersetParams.h:213
	void SetType(int32_t);

	// CgsServerInterfaceUsersetParams.h:220
	void SetMaxPlayers(int32_t);

	// CgsServerInterfaceUsersetParams.h:226
	void Lock();

	// CgsServerInterfaceUsersetParams.h:233
	void Unlock();

	// CgsServerInterfaceUsersetParams.h:240
	void ChangeHostMigration(bool);

	// CgsServerInterfaceUsersetParams.h:258
	int32_t GetID() const;

	// CgsServerInterfaceUsersetParams.h:264
	const char * GetName() const;

	// CgsServerInterfaceUsersetParams.h:270
	const char * GetPassword() const;

	// CgsServerInterfaceUsersetParams.h:276
	const char * GetDescription() const;

	// CgsServerInterfaceUsersetParams.h:282
	int32_t GetType() const;

	// CgsServerInterfaceUsersetParams.h:288
	int32_t GetNumPlayers() const;

	// CgsServerInterfaceUsersetParams.h:294
	int32_t GetMaxPlayers() const;

	// CgsServerInterfaceUsersetParams.h:300
	bool IsLocked() const;

	// CgsServerInterfaceUsersetParams.h:306
	bool IsHostMigrationEnabled() const;

	virtual void ~ServerInterfaceUsersetParamsBase();

}

