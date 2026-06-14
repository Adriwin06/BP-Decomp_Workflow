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

}

// common.h:30
struct CgsNetwork::DirtySock::SceNpCommunicationId {
	// common.h:31
	char[9] data;

	// common.h:32
	char term;

	// common.h:33
	uint8_t num;

	// common.h:34
	char dummy;

}

// common.h:39
struct CgsNetwork::DirtySock::SceNpOnlineId {
	// common.h:40
	char[16] data;

	// common.h:41
	char term;

	// common.h:42
	char[3] dummy;

}

// common.h:47
struct CgsNetwork::DirtySock::SceNpId {
	// common.h:43
	typedef SceNpOnlineId SceNpOnlineId;

	// common.h:48
	SceNpId::SceNpOnlineId handle;

	// common.h:49
	uint8_t[8] opt;

	// common.h:50
	uint8_t[8] reserved;

}

// common.h:54
struct CgsNetwork::DirtySock::SceNpOnlineName {
	// common.h:55
	char[48] data;

	// common.h:56
	char term;

	// common.h:57
	char[3] padding;

}

// common.h:62
struct CgsNetwork::DirtySock::SceNpAvatarUrl {
	// common.h:63
	char[127] data;

	// common.h:64
	char term;

}

// common.h:69
struct CgsNetwork::DirtySock::SceNpUserInfo {
	// common.h:51
	typedef SceNpId SceNpId;

	// common.h:70
	SceNpUserInfo::SceNpId userId;

	// common.h:58
	typedef SceNpOnlineName SceNpOnlineName;

	// common.h:71
	SceNpUserInfo::SceNpOnlineName name;

	// common.h:65
	typedef SceNpAvatarUrl SceNpAvatarUrl;

	// common.h:72
	SceNpUserInfo::SceNpAvatarUrl icon;

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

}

// common.h:30
struct SceNpCommunicationId {
	// common.h:31
	char[9] data;

	// common.h:32
	char term;

	// common.h:33
	uint8_t num;

	// common.h:34
	char dummy;

}

// common.h:35
typedef SceNpCommunicationId SceNpCommunicationId;

// common.h:36
typedef SceNpCommunicationId SceNpTitleId;

// common.h:39
struct SceNpOnlineId {
	// common.h:40
	char[16] data;

	// common.h:41
	char term;

	// common.h:42
	char[3] dummy;

}

// common.h:43
typedef SceNpOnlineId SceNpOnlineId;

// common.h:47
struct SceNpId {
	// common.h:48
	SceNpOnlineId handle;

	// common.h:49
	uint8_t[8] opt;

	// common.h:50
	uint8_t[8] reserved;

}

// common.h:51
typedef SceNpId SceNpId;

// common.h:54
struct SceNpOnlineName {
	// common.h:55
	char[48] data;

	// common.h:56
	char term;

	// common.h:57
	char[3] padding;

}

// common.h:58
typedef SceNpOnlineName SceNpOnlineName;

// common.h:62
struct SceNpAvatarUrl {
	// common.h:63
	char[127] data;

	// common.h:64
	char term;

}

// common.h:65
typedef SceNpAvatarUrl SceNpAvatarUrl;

// common.h:69
struct SceNpUserInfo {
	// common.h:70
	SceNpId userId;

	// common.h:71
	SceNpOnlineName name;

	// common.h:72
	SceNpAvatarUrl icon;

}

// common.h:73
typedef SceNpUserInfo SceNpUserInfo;

