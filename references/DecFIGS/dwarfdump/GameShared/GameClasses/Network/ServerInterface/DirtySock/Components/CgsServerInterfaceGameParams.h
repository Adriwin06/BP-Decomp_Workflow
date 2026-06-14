// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceGameParamsBase {
	public:
		// CgsServerInterfaceGameParams.h:443
		// Declaration
		bool IsRankedGame() const {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsServerInterfaceGameParams.h:445
			using namespace CgsDev::Message;

			// CgsServerInterfaceGameParams.h:446
			using namespace CgsDev::Message;

			// CgsServerInterfaceGameParams.h:447
			using namespace CgsDev::Message;

		}

		// CgsServerInterfaceGameParams.h:339
		virtual void SetRankedGame(bool);

		virtual ~ServerInterfaceGameParamsBase();

		ServerInterfaceGameParamsBase();

		// CgsServerInterfaceGameParams.h:388
		const char * GetName() const;

		// CgsServerInterfaceGameParams.h:425
		int32_t GetMaxPlayers() const;

		CgsNetwork::ServerInterfaceGameParamsBase & operator=(const CgsNetwork::ServerInterfaceGameParamsBase &);

		// CgsServerInterfaceGameParams.h:282
		void SetName(const char *);

		// CgsServerInterfaceGameParams.h:303
		void SetMinPlayers(int32_t);

		// CgsServerInterfaceGameParams.h:310
		void SetMaxPlayers(int32_t);

		// CgsServerInterfaceGameParams.h:325
		void SetFixedGame(bool);

		// CgsServerInterfaceGameParams.h:360
		void SetJoinUserset(bool);

		// CgsServerInterfaceGameParams.h:464
		void UnlockGame();

		// CgsServerInterfaceGameParams.h:437
		uint32_t GetRandomSeed() const;

		// CgsServerInterfaceGameParams.h:353
		void SetGameID(int32_t);

		// CgsServerInterfaceGameParams.h:296
		void SetSession(const char *);

		// CgsServerInterfaceGameParams.h:413
		int32_t GetNumberOfPlayers() const;

		// CgsServerInterfaceGameParams.h:458
		bool IsLocked() const;

	}

}

// CgsServerInterfaceGameParams.h:55
void CgsNetwork::ServerInterfaceGameParamsBase::~ServerInterfaceGameParamsBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceGameParams.h:55
void CgsNetwork::ServerInterfaceGameParamsBase::ServerInterfaceGameParamsBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceGameParams.h:55
void CgsNetwork::ServerInterfaceGameParamsBase::operator=(const const CgsNetwork::ServerInterfaceGameParamsBase &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceGameParamsBase {
	public:
		// CgsServerInterfaceGameParams.h:443
		// Declaration
		bool IsRankedGame() const {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsServerInterfaceGameParams.h:445
			using namespace CgsDev::Message;

			// CgsServerInterfaceGameParams.h:446
			using namespace CgsDev::Message;

			// CgsServerInterfaceGameParams.h:447
			using namespace CgsDev::Message;

		}

		// CgsServerInterfaceGameParams.h:339
		virtual void SetRankedGame(bool);

		// CgsServerInterfaceGameParams.h:413
		int32_t GetNumberOfPlayers() const;

		virtual ~ServerInterfaceGameParamsBase();

		// CgsServerInterfaceGameParams.h:282
		void SetName(const char *);

		// CgsServerInterfaceGameParams.h:289
		void SetPassword(const char *);

		// CgsServerInterfaceGameParams.h:303
		void SetMinPlayers(int32_t);

		// CgsServerInterfaceGameParams.h:310
		void SetMaxPlayers(int32_t);

		// CgsServerInterfaceGameParams.h:318
		void SetRoomID(int32_t);

		// CgsServerInterfaceGameParams.h:360
		void SetJoinUserset(bool);

		ServerInterfaceGameParamsBase();

		// CgsServerInterfaceGameParams.h:388
		const char * GetName() const;

		// CgsServerInterfaceGameParams.h:425
		int32_t GetMaxPlayers() const;

		// CgsServerInterfaceGameParams.h:407
		const char * GetHostName() const;

	}

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceGameParamsBase {
	public:
		// CgsServerInterfaceGameParams.h:443
		// Declaration
		bool IsRankedGame() const {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsServerInterfaceGameParams.h:445
			using namespace CgsDev::Message;

			// CgsServerInterfaceGameParams.h:446
			using namespace CgsDev::Message;

			// CgsServerInterfaceGameParams.h:447
			using namespace CgsDev::Message;

		}

		// CgsServerInterfaceGameParams.h:339
		virtual void SetRankedGame(bool);

		virtual ~ServerInterfaceGameParamsBase();

		ServerInterfaceGameParamsBase();

	}

}

// CgsServerInterfaceGameParams.h:55
struct CgsNetwork::ServerInterfaceGameParamsBase : public CgsNetwork::ServerInterfaceStructureInterface {
protected:
	// CgsServerInterfaceGameParams.h:185
	char[36] macName;

	// CgsServerInterfaceGameParams.h:186
	char[20] macPassword;

	// CgsServerInterfaceGameParams.h:187
	char[20] macHostName;

	// CgsServerInterfaceGameParams.h:188
	char[128] macSession;

	// CgsServerInterfaceGameParams.h:189
	int32_t miGameID;

	// CgsServerInterfaceGameParams.h:190
	int32_t miRoomID;

	// CgsServerInterfaceGameParams.h:191
	int32_t miMinNumPlayers;

	// CgsServerInterfaceGameParams.h:192
	int32_t miMaxNumPlayers;

	// CgsServerInterfaceGameParams.h:193
	int32_t miNumPlayers;

	// CgsServerInterfaceGameParams.h:194
	int32_t miNumPublicSlots;

	// CgsServerInterfaceGameParams.h:195
	int32_t miNumPrivateSlots;

	// CgsServerInterfaceGameParams.h:197
	uint32_t muCustomFlags;

	// CgsServerInterfaceGameParams.h:198
	uint32_t muGameFlags;

	// CgsServerInterfaceGameParams.h:199
	bool mbJoinUserset;

	// CgsServerInterfaceGameParams.h:200
	uint32_t muRandomSeed;

public:
	// CgsServerInterfaceGameParams.cpp:55
	virtual bool Prepare();

	// CgsServerInterfaceGameParams.cpp:88
	virtual void SerialiseToString(char *, int32_t) const;

	// CgsServerInterfaceGameParams.cpp:153
	virtual void SerialiseFromGame(const ServerInterfaceGames::LobbyApiPlayT *);

	// CgsServerInterfaceGameParams.cpp:191
	void SetTotalSlots(int32_t, int32_t);

	// CgsServerInterfaceGameParams.cpp:208
	void GetTotalSlots(int32_t *, int32_t *) const;

	// CgsServerInterfaceGameParams.h:282
	void SetName(const char *);

	// CgsServerInterfaceGameParams.h:289
	void SetPassword(const char *);

	// CgsServerInterfaceGameParams.h:296
	void SetSession(const char *);

	// CgsServerInterfaceGameParams.h:303
	void SetMinPlayers(int32_t);

	// CgsServerInterfaceGameParams.h:310
	void SetMaxPlayers(int32_t);

	// CgsServerInterfaceGameParams.h:318
	void SetRoomID(int32_t);

	// CgsServerInterfaceGameParams.h:325
	void SetFixedGame(bool);

	// CgsServerInterfaceGameParams.h:339
	virtual void SetRankedGame(bool);

	// CgsServerInterfaceGameParams.h:353
	void SetGameID(int32_t);

	// CgsServerInterfaceGameParams.h:360
	void SetJoinUserset(bool);

	// CgsServerInterfaceGameParams.h:367
	void SetRandomSeed(uint32_t);

	// CgsServerInterfaceGameParams.h:374
	void SetUseUsersets(bool);

	// CgsServerInterfaceGameParams.h:388
	const char * GetName() const;

	// CgsServerInterfaceGameParams.h:394
	const char * GetPassword() const;

	// CgsServerInterfaceGameParams.h:400
	const char * GetSession() const;

	// CgsServerInterfaceGameParams.h:407
	const char * GetHostName() const;

	// CgsServerInterfaceGameParams.h:413
	int32_t GetNumberOfPlayers() const;

	// CgsServerInterfaceGameParams.h:419
	int32_t GetMinPlayers() const;

	// CgsServerInterfaceGameParams.h:425
	int32_t GetMaxPlayers() const;

	// CgsServerInterfaceGameParams.h:431
	int32_t GetRoomID() const;

	// CgsServerInterfaceGameParams.h:443
	// Declaration
	bool IsRankedGame() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsServerInterfaceGameParams.h:445
		using namespace CgsDev::Message;

		// CgsServerInterfaceGameParams.h:446
		using namespace CgsDev::Message;

		// CgsServerInterfaceGameParams.h:447
		using namespace CgsDev::Message;

	}

	// CgsServerInterfaceGameParams.h:452
	int32_t GetGameID() const;

	// CgsServerInterfaceGameParams.h:437
	uint32_t GetRandomSeed() const;

	// CgsServerInterfaceGameParams.h:458
	bool IsLocked() const;

	// CgsServerInterfaceGameParams.h:464
	void UnlockGame();

	// CgsServerInterfaceGameParams.h:470
	void LockGame();

	// CgsServerInterfaceGameParams.h:476
	bool IsUsingUsersets() const;

	virtual void ~ServerInterfaceGameParamsBase();

}

