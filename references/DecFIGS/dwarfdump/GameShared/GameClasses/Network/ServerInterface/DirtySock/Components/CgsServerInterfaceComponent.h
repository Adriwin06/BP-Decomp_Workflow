// CgsServerInterfaceComponent.h:106
extern DSErrorToServerInterfaceError[] kaDefaultDSServerInterfaceErrorMapping;

// CgsServerInterfaceComponent.h:107
extern const int32_t KI_NUM_DEFAULT_ERROR_MAPPINGS;

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceComponent {
	private:
		// CgsServerInterfaceComponent.h:106
		extern DSErrorToServerInterfaceError[] kaDefaultDSServerInterfaceErrorMapping;

		// CgsServerInterfaceComponent.h:107
		extern const int32_t KI_NUM_DEFAULT_ERROR_MAPPINGS;

	}

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceComponent {
	public:
		// CgsServerInterfaceComponent.h:122
		CgsNetwork::ServerInterfaceDirtySock::EStatus GetStatus() const;

	private:
		// CgsServerInterfaceComponent.h:106
		extern DSErrorToServerInterfaceError[] kaDefaultDSServerInterfaceErrorMapping;

		// CgsServerInterfaceComponent.h:107
		extern const int32_t KI_NUM_DEFAULT_ERROR_MAPPINGS;

	}

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceComponent {
	public:
		// CgsServerInterfaceComponent.h:55
		virtual ~ServerInterfaceComponent();

		// CgsServerInterfaceComponent.h:122
		CgsNetwork::ServerInterfaceDirtySock::EStatus GetStatus() const;

	private:
		// CgsServerInterfaceComponent.h:106
		extern DSErrorToServerInterfaceError[] kaDefaultDSServerInterfaceErrorMapping;

		// CgsServerInterfaceComponent.h:107
		extern const int32_t KI_NUM_DEFAULT_ERROR_MAPPINGS;

	}

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceComponent {
	public:
		// CgsServerInterfaceComponent.h:55
		virtual ~ServerInterfaceComponent();

		ServerInterfaceComponent();

	private:
		// CgsServerInterfaceComponent.h:106
		extern DSErrorToServerInterfaceError[] kaDefaultDSServerInterfaceErrorMapping;

		// CgsServerInterfaceComponent.h:107
		extern const int32_t KI_NUM_DEFAULT_ERROR_MAPPINGS;

	}

}

// CgsServerInterfaceComponent.h:48
void CgsNetwork::ServerInterfaceComponent::ServerInterfaceComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceComponent.h:48
struct CgsNetwork::ServerInterfaceComponent {
	int (*)(...) * _vptr.ServerInterfaceComponent;

private:
	// CgsServerInterfaceComponent.cpp:43
	extern const DSErrorToServerInterfaceError[1] kaDefaultDSServerInterfaceErrorMapping;

	// CgsServerInterfaceComponent.cpp:49
	extern const int32_t KI_NUM_DEFAULT_ERROR_MAPPINGS = 1;

	// CgsServerInterfaceComponent.h:109
	const char * mpcCurrentAction;

	// CgsServerInterfaceComponent.h:110
	CgsNetwork::ServerInterfaceDirtySock::EStatus meStatus;

	// CgsServerInterfaceComponent.h:111
	int32_t miLastError;

public:
	// CgsServerInterfaceComponent.cpp:63
	virtual void Construct();

	// CgsServerInterfaceComponent.h:55
	virtual void ~ServerInterfaceComponent();

	// CgsServerInterfaceComponent.h:61
	virtual void OnEvent(CgsNetwork::EServerInterfaceEvent, void *);

	// CgsServerInterfaceComponent.h:122
	CgsNetwork::ServerInterfaceDirtySock::EStatus GetStatus() const;

	// CgsServerInterfaceComponent.cpp:80
	// Declaration
	virtual void StartActionCore(const char *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsServerInterfaceComponent.cpp:82
		using namespace CgsDev::Message;

	}

	// CgsServerInterfaceComponent.cpp:101
	// Declaration
	virtual void EndActionCore(int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsServerInterfaceComponent.cpp:111
		using namespace CgsDev::Message;

		// CgsServerInterfaceComponent.cpp:117
		using namespace CgsDev::Message;

	}

	// CgsServerInterfaceComponent.cpp:133
	int32_t GetLastError() const;

	// CgsServerInterfaceComponent.cpp:147
	void ClearLastError();

	// CgsServerInterfaceComponent.cpp:163
	int32_t GetAndClearLastError();

	// CgsServerInterfaceComponent.cpp:185
	CgsNetwork::EServerInterfaceError ConvertError(int, const DSErrorToServerInterfaceError *, int) const;

}

