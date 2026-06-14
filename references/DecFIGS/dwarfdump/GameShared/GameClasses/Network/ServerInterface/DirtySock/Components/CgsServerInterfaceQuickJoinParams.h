// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceQuickJoinParamsBase {
	public:
		// CgsServerInterfaceQuickJoinParams.h:59
		virtual ~ServerInterfaceQuickJoinParamsBase();

		ServerInterfaceQuickJoinParamsBase();

		// CgsServerInterfaceQuickJoinParams.h:118
		void SetJoinUserset(bool);

	}

}

// CgsServerInterfaceQuickJoinParams.h:55
void CgsNetwork::ServerInterfaceQuickJoinParamsBase::ServerInterfaceQuickJoinParamsBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceQuickJoinParamsBase {
	public:
		// CgsServerInterfaceQuickJoinParams.h:59
		virtual ~ServerInterfaceQuickJoinParamsBase();

	}

}

// CgsServerInterfaceQuickJoinParams.h:55
struct CgsNetwork::ServerInterfaceQuickJoinParamsBase {
	int (*)(...) * _vptr.ServerInterfaceQuickJoinParamsBase;

protected:
	// CgsServerInterfaceQuickJoinParams.h:83
	int32_t miNumParameters;

	// CgsServerInterfaceQuickJoinParams.h:84
	int32_t[16] maiQuickJoinParams;

	// CgsServerInterfaceQuickJoinParams.h:86
	bool mbRanked;

	// CgsServerInterfaceQuickJoinParams.h:87
	bool mbJoinUserset;

public:
	// CgsServerInterfaceQuickJoinParams.h:59
	virtual void ~ServerInterfaceQuickJoinParamsBase();

	// CgsServerInterfaceQuickJoinParams.cpp:48
	virtual bool Prepare();

	// CgsServerInterfaceQuickJoinParams.cpp:69
	void SerialiseToString(char *, int32_t) const;

	// CgsServerInterfaceQuickJoinParams.h:118
	void SetJoinUserset(bool);

	// CgsServerInterfaceQuickJoinParams.h:125
	void SetRanked(bool);

	// CgsServerInterfaceQuickJoinParams.h:131
	bool IsRanked() const;

}

