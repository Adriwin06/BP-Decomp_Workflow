// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsServerInterfaceTelemetry.h:66
	const char[128] KAC_TELEMETRY_DISABLED_COUNTRIES;

	// CgsServerInterfaceTelemetry.h:69
	const int32_t KI_FIRST_USAGE_BUFFER_SIZE = 250;

	// CgsServerInterfaceTelemetry.h:70
	const int32_t KI_NORMAL_USAGE_BUFFER_SIZE = 100;

}

// CgsServerInterfaceTelemetry.h:188
extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceTelemetry {
	public:
		// CgsServerInterfaceTelemetry.h:232
		void EnableTemetry(bool);

	private:
		// CgsServerInterfaceTelemetry.h:188
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

	// CgsServerInterfaceTelemetry.h:66
	const char[128] KAC_TELEMETRY_DISABLED_COUNTRIES;

	// CgsServerInterfaceTelemetry.h:69
	const int32_t KI_FIRST_USAGE_BUFFER_SIZE = 250;

	// CgsServerInterfaceTelemetry.h:70
	const int32_t KI_NORMAL_USAGE_BUFFER_SIZE = 100;

}

// CgsBitStream.h:26
namespace CgsNetwork {
	// CgsServerInterfaceTelemetry.h:66
	const char[128] KAC_TELEMETRY_DISABLED_COUNTRIES;

	// CgsServerInterfaceTelemetry.h:69
	const int32_t KI_FIRST_USAGE_BUFFER_SIZE = 250;

	// CgsServerInterfaceTelemetry.h:70
	const int32_t KI_NORMAL_USAGE_BUFFER_SIZE = 100;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceTelemetry {
	public:
		virtual ~ServerInterfaceTelemetry();

	private:
		// CgsServerInterfaceTelemetry.h:188
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

	// CgsServerInterfaceTelemetry.h:66
	const char[128] KAC_TELEMETRY_DISABLED_COUNTRIES;

	// CgsServerInterfaceTelemetry.h:69
	const int32_t KI_FIRST_USAGE_BUFFER_SIZE = 250;

	// CgsServerInterfaceTelemetry.h:70
	const int32_t KI_NORMAL_USAGE_BUFFER_SIZE = 100;

}

// CgsServerInterfaceTelemetry.h:49
struct CgsNetwork::EventDataKeys {
	// CgsServerInterfaceTelemetry.h:51
	uint32_t luModuleID;

	// CgsServerInterfaceTelemetry.h:52
	uint32_t luGroupID;

	// CgsServerInterfaceTelemetry.h:53
	char[16] macDescription;

}

// CgsServerInterfaceTelemetry.h:81
void CgsNetwork::ServerInterfaceTelemetry::~ServerInterfaceTelemetry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceTelemetry {
	public:
		virtual ~ServerInterfaceTelemetry();

		ServerInterfaceTelemetry();

	private:
		// CgsServerInterfaceTelemetry.h:188
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

	// CgsServerInterfaceTelemetry.h:66
	const char[128] KAC_TELEMETRY_DISABLED_COUNTRIES;

	// CgsServerInterfaceTelemetry.h:69
	const int32_t KI_FIRST_USAGE_BUFFER_SIZE = 250;

	// CgsServerInterfaceTelemetry.h:70
	const int32_t KI_NORMAL_USAGE_BUFFER_SIZE = 100;

}

// CgsServerInterfaceTelemetry.h:81
void CgsNetwork::ServerInterfaceTelemetry::ServerInterfaceTelemetry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsServerInterfaceTelemetry.h:66
	const char[128] KAC_TELEMETRY_DISABLED_COUNTRIES;

	// CgsServerInterfaceTelemetry.h:69
	const int32_t KI_FIRST_USAGE_BUFFER_SIZE = 250;

	// CgsServerInterfaceTelemetry.h:70
	const int32_t KI_NORMAL_USAGE_BUFFER_SIZE = 100;

}

// CgsServerInterfaceTelemetry.h:81
struct CgsNetwork::ServerInterfaceTelemetry : public CgsNetwork::ServerInterfaceComponent {
private:
	// CgsServerInterfaceTelemetry.cpp:53
	extern const DSErrorToServerInterfaceErrorTable[1] KA_DS_ERROR_TABLE_LOOKUP;

	// CgsServerInterfaceTelemetry.h:190
	uint32_t muMaxFirstUsageBufferSize;

	// CgsServerInterfaceTelemetry.h:191
	bool mbDidSuspendHaltCurrentBuffer;

	// Unknown accessibility
	// telemetryapi.h:47
	typedef CgsNetwork::DirtySock::TelemetryApiRefT TelemetryApiRefT;

	// CgsServerInterfaceTelemetry.h:192
	ServerInterfaceTelemetry::TelemetryApiRefT * mpTelemetryFirstUsage;

	// CgsServerInterfaceTelemetry.h:193
	ServerInterfaceTelemetry::TelemetryApiRefT * mpTelemetryNormalUsage;

	// CgsServerInterfaceTelemetry.h:194
	ServerInterfaceTelemetry::TelemetryApiRefT * mpTelemetryCurrent;

	// CgsServerInterfaceTelemetry.h:195
	CgsNetwork::ServerInterfaceDirtySock * mpServerInterface;

	// CgsServerInterfaceTelemetry.h:196
	EventDataKeys * mpaEventIDsToKeysMapping;

public:
	// CgsServerInterfaceTelemetry.cpp:75
	virtual void Construct();

	// CgsServerInterfaceTelemetry.cpp:97
	virtual void Destruct();

	// CgsServerInterfaceTelemetry.cpp:125
	virtual bool Prepare(CgsNetwork::ServerInterfaceDirtySock *, bool, const char *, int32_t, int32_t);

	// CgsServerInterfaceTelemetry.cpp:182
	virtual bool Release();

	// CgsServerInterfaceTelemetry.cpp:217
	virtual void Update();

	// CgsServerInterfaceTelemetry.cpp:245
	void Suspend();

	// CgsServerInterfaceTelemetry.cpp:270
	void Resume();

	// CgsServerInterfaceTelemetry.cpp:295
	virtual void OnEvent(CgsNetwork::EServerInterfaceEvent, void *);

	// CgsServerInterfaceTelemetry.cpp:334
	CgsNetwork::EServerInterfaceError Connect(bool);

	// CgsServerInterfaceTelemetry.cpp:363
	void CaptureEvent(int32_t, const char *);

	// CgsServerInterfaceTelemetry.cpp:435
	void SetSendDataThreshold(int32_t);

	// CgsServerInterfaceTelemetry.cpp:456
	void SetSendDataTimeout(int32_t);

	// CgsServerInterfaceTelemetry.cpp:495
	void SetEventFilters(const char *, const char *);

	// CgsServerInterfaceTelemetry.cpp:519
	uint32_t GetFirstUsageBufferDataSize();

	// CgsServerInterfaceTelemetry.cpp:544
	uint32_t GetMaxFirstUsageBufferDataSize();

	// CgsServerInterfaceTelemetry.cpp:573
	CgsNetwork::EServerInterfaceError GetFirstUsageBufferDataToStore(void *, uint32_t, uint32_t *);

	// CgsServerInterfaceTelemetry.cpp:613
	CgsNetwork::EServerInterfaceError SetFirstUsageBufferDataFromMemory(void *, uint32_t);

	// CgsServerInterfaceTelemetry.h:232
	void EnableTemetry(bool);

	// CgsServerInterfaceTelemetry.cpp:1011
	void SetDisabledCountryList(const char *);

protected:
	// CgsServerInterfaceTelemetry.cpp:779
	void SetEventMappingTable(EventDataKeys *);

private:
	// CgsServerInterfaceTelemetry.cpp:797
	CgsNetwork::EServerInterfaceError ConvertError(int32_t);

	// CgsServerInterfaceTelemetry.cpp:823
	void AbandonFirstUsageBuffer();

	// CgsServerInterfaceTelemetry.cpp:898
	CgsNetwork::EServerInterfaceError AuthAndConnect();

	// CgsServerInterfaceTelemetry.cpp:956
	void _FirstUsageBufferFull(ServerInterfaceTelemetry::TelemetryApiRefT *, void *);

	// CgsServerInterfaceTelemetry.cpp:985
	void _FirstUsageBufferSendComplete(ServerInterfaceTelemetry::TelemetryApiRefT *, void *);

public:
	virtual void ~ServerInterfaceTelemetry();

}

