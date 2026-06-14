// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct NetworkAdapterPrepareParams {
		// CgsNetworkAdapterBase.h:62
		struct PlatformIDs {
			// CgsNetworkAdapterBase.h:64
			extern const int32_t KI_MAX_NP_TITLE_ID_LENGTH = 13;

			// CgsNetworkAdapterBase.h:65
			extern const int32_t KI_MAX_SERVICE_ID_PREFIX_LENGTH = 7;

			// common.h:35
			typedef SceNpCommunicationId SceNpCommunicationId;

		private:
			// CgsNetworkAdapterBase.h:84
			CgsNetwork::NetworkAdapterPrepareParams::PlatformIDs::SceNpCommunicationId mCommunicationID;

			// CgsNetworkAdapterBase.h:85
			char[13] macNPTitleID;

			// CgsNetworkAdapterBase.h:86
			char[7] macServiceIDPrefix;

		public:
			// CgsNetworkAdapterBase.h:71
			void Construct(const CgsNetwork::NetworkAdapterPrepareParams::PlatformIDs::SceNpCommunicationId *, const char *, const char *);

			// CgsNetworkAdapterBase.h:74
			const CgsNetwork::NetworkAdapterPrepareParams::PlatformIDs::SceNpCommunicationId * GetCommunicationID() const;

			// CgsNetworkAdapterBase.h:77
			const char * GetNPTitleID() const;

			// CgsNetworkAdapterBase.h:80
			const char * GetServiceIDPrefix() const;

		}

	}

	// Declaration
	struct NetworkAdapterBase {
		// CgsNetworkAdapterBase.h:132
		enum ENetworkStatus {
			E_NET_STATUS_NONE = 0,
			E_NET_STATUS_BUSY = 1,
			E_NET_STATUS_READY = 2,
			E_NET_STATUS_ERROR = 3,
			E_NET_STATUS_COUNT = 4,
		}

		// CgsNetworkAdapterBase.h:145
		enum ENetworkError {
			E_NET_ERROR_NONE = 0,
			E_NET_ERROR_FAILED_TO_UP_INTERFACE = 1,
			E_NET_ERROR_COUNT = 2,
		}

	}

}

// CgsNetworkAdapterBase.h:57
struct CgsNetwork::NetworkAdapterPrepareParams {
private:
	// CgsNetworkAdapterBase.h:121
	CgsNetwork::NetworkAdapterPrepareParams::PlatformIDs mTitleID;

	// CgsNetworkAdapterBase.h:122
	CgsNetwork::EServerType meServerType;

	// CgsNetworkAdapterBase.h:123
	HeapMalloc * mpHeapMalloc;

	// CgsNetworkAdapterBase.h:124
	CgsNetwork::NetworkManager * mpNetworkManager;

	// CgsNetworkAdapterBase.h:125
	CgsNetwork::ServerInterface * mpServerInterface;

public:
	// CgsNetworkAdapterBase.h:102
	void Construct(CgsNetwork::EServerType, HeapMalloc *, CgsNetwork::NetworkManager *, CgsNetwork::ServerInterface *, CgsNetwork::NetworkAdapterPrepareParams::PlatformIDs);

	// CgsNetworkAdapterBase.h:105
	CgsNetwork::EServerType GetServerType() const;

	// CgsNetworkAdapterBase.h:108
	CgsNetwork::NetworkManager * GetNetworkManager();

	// CgsNetworkAdapterBase.h:111
	CgsNetwork::ServerInterface * GetServerInterface();

	// CgsNetworkAdapterBase.h:114
	CgsNetwork::NetworkAdapterPrepareParams::PlatformIDs GetTitleID();

	// CgsNetworkAdapterBase.h:117
	HeapMalloc * GetRecieveBufferAllocator();

}

// CgsNetworkAdapterBase.h:129
struct CgsNetwork::NetworkAdapterBase {
protected:
	// CgsNetworkAdapterBase.h:203
	FakeNetworkConditions::MessageSentCallback * mpMessageSentCallbackFunction;

	// CgsNetworkAdapterBase.h:205
	CgsNetwork::NetworkManager * mpNetworkManager;

	// CgsNetworkAdapterBase.h:206
	CgsNetwork::ServerInterface * mpServerInterface;

	// CgsNetworkAdapterBase.h:209
	FakeNetworkConditions mNetworkConditions;

	// CgsNetworkAdapterBase.h:211
	CgsNetwork::NetworkAdapterBase::ENetworkError meLastError;

	// CgsNetworkAdapterBase.h:212
	CgsNetwork::EServerType meServerType;

	// CgsNetworkAdapterBase.h:214
	bool mbDuplicateLogin;

private:
	// CgsNetworkAdapterBase.h:218
	HeapMalloc * mpHeapMalloc;

	// CgsNetworkAdapterBase.h:219
	uint8_t * mpRecvBuffer;

	// CgsNetworkAdapterBase.h:222
	extern int32_t miSendPerfMon;

public:
	// CgsNetworkAdapterBase.h:153
	void Construct();

	// CgsNetworkAdapterBase.h:159
	CgsNetwork::NetworkAdapterBase::ENetworkStatus Prepare(NetworkAdapterPrepareParams *);

	// CgsNetworkAdapterBase.h:168
	void Update();

	// CgsNetworkAdapterBase.h:171
	bool Release();

	// CgsNetworkAdapterBase.h:174
	void Destruct();

	// CgsNetworkAdapterBase.h:177
	CgsNetwork::NetworkAdapterBase::ENetworkError GetLastError();

	// CgsNetworkAdapterBase.h:184
	FakeNetworkConditions::MessageSentCallback * SetMessageSentCallback(FakeNetworkConditions::MessageSentCallback *);

	// CgsNetworkAdapterBase.h:191
	bool SendTo(void *, int32_t, CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData);

	// CgsNetworkAdapterBase.h:196
	int32_t ReceiveFrom(void **, CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData);

	// CgsNetworkAdapterBase.h:199
	bool HadDuplicateLogin() const;

}

// CgsNetworkAdapterBase.h:64
extern const int32_t KI_MAX_NP_TITLE_ID_LENGTH = 13;

// CgsNetworkAdapterBase.h:65
extern const int32_t KI_MAX_SERVICE_ID_PREFIX_LENGTH = 7;

// CgsNetworkAdapterBase.h:57
struct CgsNetwork::NetworkAdapterPrepareParams {
private:
	// CgsNetworkAdapterBase.h:121
	CgsNetwork::NetworkAdapterPrepareParams::PlatformIDs mTitleID;

	// CgsNetworkAdapterBase.h:122
	CgsNetwork::EServerType meServerType;

	// CgsNetworkAdapterBase.h:123
	CgsMemory::HeapMalloc * mpHeapMalloc;

	// CgsNetworkAdapterBase.h:124
	CgsNetwork::NetworkManager * mpNetworkManager;

	// CgsNetworkAdapterBase.h:125
	CgsNetwork::ServerInterface * mpServerInterface;

public:
	// CgsNetworkAdapterBase.h:102
	void Construct(CgsNetwork::EServerType, CgsMemory::HeapMalloc *, CgsNetwork::NetworkManager *, CgsNetwork::ServerInterface *, CgsNetwork::NetworkAdapterPrepareParams::PlatformIDs);

	// CgsNetworkAdapterBase.h:105
	CgsNetwork::EServerType GetServerType() const;

	// CgsNetworkAdapterBase.h:108
	CgsNetwork::NetworkManager * GetNetworkManager();

	// CgsNetworkAdapterBase.h:111
	CgsNetwork::ServerInterface * GetServerInterface();

	// CgsNetworkAdapterBase.h:114
	CgsNetwork::NetworkAdapterPrepareParams::PlatformIDs GetTitleID();

	// CgsNetworkAdapterBase.h:117
	CgsMemory::HeapMalloc * GetRecieveBufferAllocator();

}

// CgsNetworkAdapterBase.h:129
struct CgsNetwork::NetworkAdapterBase {
protected:
	// CgsNetworkAdapterBase.h:203
	FakeNetworkConditions::MessageSentCallback * mpMessageSentCallbackFunction;

	// CgsNetworkAdapterBase.h:205
	CgsNetwork::NetworkManager * mpNetworkManager;

	// CgsNetworkAdapterBase.h:206
	CgsNetwork::ServerInterface * mpServerInterface;

	// CgsNetworkAdapterBase.h:209
	FakeNetworkConditions mNetworkConditions;

	// CgsNetworkAdapterBase.h:211
	CgsNetwork::NetworkAdapterBase::ENetworkError meLastError;

	// CgsNetworkAdapterBase.h:212
	CgsNetwork::EServerType meServerType;

	// CgsNetworkAdapterBase.h:214
	bool mbDuplicateLogin;

private:
	// CgsNetworkAdapterBase.h:218
	CgsMemory::HeapMalloc * mpHeapMalloc;

	// CgsNetworkAdapterBase.h:219
	uint8_t * mpRecvBuffer;

	// CgsNetworkAdapterBase.h:222
	extern int32_t miSendPerfMon;

public:
	// CgsNetworkAdapterBase.h:153
	void Construct();

	// CgsNetworkAdapterBase.h:159
	CgsNetwork::NetworkAdapterBase::ENetworkStatus Prepare(NetworkAdapterPrepareParams *);

	// CgsNetworkAdapterBase.h:168
	void Update();

	// CgsNetworkAdapterBase.h:171
	bool Release();

	// CgsNetworkAdapterBase.h:174
	void Destruct();

	// CgsNetworkAdapterBase.h:177
	CgsNetwork::NetworkAdapterBase::ENetworkError GetLastError();

	// CgsNetworkAdapterBase.h:184
	FakeNetworkConditions::MessageSentCallback * SetMessageSentCallback(FakeNetworkConditions::MessageSentCallback *);

	// CgsNetworkAdapterBase.h:191
	bool SendTo(void *, int32_t, CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData);

	// CgsNetworkAdapterBase.h:196
	int32_t ReceiveFrom(void **, CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData);

	// CgsNetworkAdapterBase.h:199
	bool HadDuplicateLogin() const;

}

// CgsNetworkAdapterBase.h:129
struct CgsNetwork::NetworkAdapterBase {
protected:
	// CgsNetworkAdapterBase.h:203
	FakeNetworkConditions::MessageSentCallback * mpMessageSentCallbackFunction;

	// CgsNetworkAdapterBase.h:205
	CgsNetwork::NetworkManager * mpNetworkManager;

	// CgsNetworkAdapterBase.h:206
	CgsNetwork::ServerInterface * mpServerInterface;

	// CgsNetworkAdapterBase.h:209
	FakeNetworkConditions mNetworkConditions;

	// CgsNetworkAdapterBase.h:211
	CgsNetwork::NetworkAdapterBase::ENetworkError meLastError;

	// CgsNetworkAdapterBase.h:212
	CgsNetwork::EServerType meServerType;

	// CgsNetworkAdapterBase.h:214
	bool mbDuplicateLogin;

private:
	// CgsNetworkAdapterBase.h:218
	HeapMalloc * mpHeapMalloc;

	// CgsNetworkAdapterBase.h:219
	uint8_t * mpRecvBuffer;

	// CgsNetworkAdapterBase.h:222
	extern int32_t miSendPerfMon;

public:
	// CgsNetworkAdapterBase.h:153
	void Construct();

	// CgsNetworkAdapterBase.h:159
	CgsNetwork::NetworkAdapterBase::ENetworkStatus Prepare(NetworkAdapterPrepareParams *);

	// CgsNetworkAdapterBase.h:168
	void Update();

	// CgsNetworkAdapterBase.h:171
	bool Release();

	// CgsNetworkAdapterBase.h:174
	void Destruct();

	// CgsNetworkAdapterBase.h:177
	CgsNetwork::NetworkAdapterBase::ENetworkError GetLastError();

	// CgsNetworkAdapterBase.h:184
	FakeNetworkConditions::MessageSentCallback * SetMessageSentCallback(FakeNetworkConditions::MessageSentCallback *);

	// CgsNetworkAdapterBase.h:191
	bool SendTo(void *, int32_t, CgsNetwork::PlayersConnectionManager::ConnectionDataEntry::ConnectionData);

	// CgsNetworkAdapterBase.h:196
	int32_t ReceiveFrom(void **, CgsNetwork::PlayersConnectionManager::ConnectionDataEntry::ConnectionData);

	// CgsNetworkAdapterBase.h:199
	bool HadDuplicateLogin() const;

}

// CgsBitStream.h:26
namespace CgsNetwork {
	// Declaration
	struct NetworkAdapterPrepareParams {
		// CgsNetworkAdapterBase.h:62
		struct PlatformIDs {
			// CgsNetworkAdapterBase.h:64
			extern const int32_t KI_MAX_NP_TITLE_ID_LENGTH = 13;

			// CgsNetworkAdapterBase.h:65
			extern const int32_t KI_MAX_SERVICE_ID_PREFIX_LENGTH = 7;

			// common.h:35
			typedef SceNpCommunicationId SceNpCommunicationId;

		private:
			// CgsNetworkAdapterBase.h:84
			CgsNetwork::NetworkAdapterPrepareParams::PlatformIDs::SceNpCommunicationId mCommunicationID;

			// CgsNetworkAdapterBase.h:85
			char[13] macNPTitleID;

			// CgsNetworkAdapterBase.h:86
			char[7] macServiceIDPrefix;

		public:
			// CgsNetworkAdapterBase.h:71
			void Construct(const CgsNetwork::NetworkAdapterPrepareParams::PlatformIDs::SceNpCommunicationId *, const char *, const char *);

			// CgsNetworkAdapterBase.h:74
			const CgsNetwork::NetworkAdapterPrepareParams::PlatformIDs::SceNpCommunicationId * GetCommunicationID() const;

			// CgsNetworkAdapterBase.h:77
			const char * GetNPTitleID() const;

			// CgsNetworkAdapterBase.h:80
			const char * GetServiceIDPrefix() const;

		}

	}

	// Declaration
	struct NetworkAdapterBase {
		// CgsNetworkAdapterBase.h:132
		enum ENetworkStatus {
			E_NET_STATUS_NONE = 0,
			E_NET_STATUS_BUSY = 1,
			E_NET_STATUS_READY = 2,
			E_NET_STATUS_ERROR = 3,
			E_NET_STATUS_COUNT = 4,
		}

		// CgsNetworkAdapterBase.h:145
		enum ENetworkError {
			E_NET_ERROR_NONE = 0,
			E_NET_ERROR_FAILED_TO_UP_INTERFACE = 1,
			E_NET_ERROR_COUNT = 2,
		}

	}

}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct NetworkAdapterPrepareParams {
		// CgsNetworkAdapterBase.h:62
		struct PlatformIDs {
			// CgsNetworkAdapterBase.h:64
			extern const int32_t KI_MAX_NP_TITLE_ID_LENGTH = 13;

			// CgsNetworkAdapterBase.h:65
			extern const int32_t KI_MAX_SERVICE_ID_PREFIX_LENGTH = 7;

			// common.h:35
			typedef SceNpCommunicationId SceNpCommunicationId;

		private:
			// CgsNetworkAdapterBase.h:84
			CgsNetwork::NetworkAdapterPrepareParams::PlatformIDs::SceNpCommunicationId mCommunicationID;

			// CgsNetworkAdapterBase.h:85
			char[13] macNPTitleID;

			// CgsNetworkAdapterBase.h:86
			char[7] macServiceIDPrefix;

		public:
			// CgsNetworkAdapterBase.h:71
			void Construct(const CgsNetwork::NetworkAdapterPrepareParams::PlatformIDs::SceNpCommunicationId *, const char *, const char *);

			// CgsNetworkAdapterBase.h:74
			const CgsNetwork::NetworkAdapterPrepareParams::PlatformIDs::SceNpCommunicationId * GetCommunicationID() const;

			// CgsNetworkAdapterBase.h:77
			const char * GetNPTitleID() const;

			// CgsNetworkAdapterBase.h:80
			const char * GetServiceIDPrefix() const;

		}

	}

	// Declaration
	struct NetworkAdapterBase {
		// CgsNetworkAdapterBase.h:132
		enum ENetworkStatus {
			E_NET_STATUS_NONE = 0,
			E_NET_STATUS_BUSY = 1,
			E_NET_STATUS_READY = 2,
			E_NET_STATUS_ERROR = 3,
			E_NET_STATUS_COUNT = 4,
		}

		// CgsNetworkAdapterBase.h:145
		enum ENetworkError {
			E_NET_ERROR_NONE = 0,
			E_NET_ERROR_FAILED_TO_UP_INTERFACE = 1,
			E_NET_ERROR_COUNT = 2,
		}

	}

}

// CgsNetworkAdapterBase.h:129
struct CgsNetwork::NetworkAdapterBase {
protected:
	// CgsNetworkAdapterBase.h:203
	FakeNetworkConditions::MessageSentCallback * mpMessageSentCallbackFunction;

	// CgsNetworkAdapterBase.h:205
	CgsNetwork::NetworkManager * mpNetworkManager;

	// CgsNetworkAdapterBase.h:206
	CgsNetwork::ServerInterface * mpServerInterface;

	// CgsNetworkAdapterBase.h:209
	FakeNetworkConditions mNetworkConditions;

	// CgsNetworkAdapterBase.h:211
	CgsNetwork::NetworkAdapterBase::ENetworkError meLastError;

	// CgsNetworkAdapterBase.h:212
	CgsNetwork::EServerType meServerType;

	// CgsNetworkAdapterBase.h:214
	bool mbDuplicateLogin;

private:
	// CgsNetworkAdapterBase.h:218
	CgsMemory::HeapMalloc * mpHeapMalloc;

	// CgsNetworkAdapterBase.h:219
	uint8_t * mpRecvBuffer;

	// CgsNetworkAdapterBase.h:222
	extern int32_t miSendPerfMon;

public:
	// CgsNetworkAdapterBase.h:153
	void Construct();

	// CgsNetworkAdapterBase.h:159
	CgsNetwork::NetworkAdapterBase::ENetworkStatus Prepare(NetworkAdapterPrepareParams *);

	// CgsNetworkAdapterBase.h:168
	void Update();

	// CgsNetworkAdapterBase.h:171
	bool Release();

	// CgsNetworkAdapterBase.h:174
	void Destruct();

	// CgsNetworkAdapterBase.h:177
	CgsNetwork::NetworkAdapterBase::ENetworkError GetLastError();

	// CgsNetworkAdapterBase.h:184
	FakeNetworkConditions::MessageSentCallback * SetMessageSentCallback(FakeNetworkConditions::MessageSentCallback *);

	// CgsNetworkAdapterBase.h:191
	// Declaration
	bool SendTo(void *, int32_t, CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsNetworkAdapterBase.cpp:215
		using namespace CgsDev::Message;

	}

	// CgsNetworkAdapterBase.h:196
	int32_t ReceiveFrom(void **, CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData);

	// CgsNetworkAdapterBase.h:199
	bool HadDuplicateLogin() const;

}

