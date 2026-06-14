// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct LoginManagerBase {
		// BrnNetworkLoginManagerBase.h:58
		enum ESignInType {
			E_SIGN_IN_TYPE_NORMAL = 0,
			E_SIGN_IN_TYPE_SILENT = 1,
			E_SIGN_IN_TYPE_FREE_BURN_LOBBY = 2,
			E_SIGN_IN_TYPE_COUNT = 3,
		}

	}

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct LoginManagerBase {
		// BrnNetworkLoginManagerBase.h:58
		enum ESignInType {
			E_SIGN_IN_TYPE_NORMAL = 0,
			E_SIGN_IN_TYPE_SILENT = 1,
			E_SIGN_IN_TYPE_FREE_BURN_LOBBY = 2,
			E_SIGN_IN_TYPE_COUNT = 3,
		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct LoginManagerBase {
		// BrnNetworkLoginManagerBase.h:58
		enum ESignInType {
			E_SIGN_IN_TYPE_NORMAL = 0,
			E_SIGN_IN_TYPE_SILENT = 1,
			E_SIGN_IN_TYPE_FREE_BURN_LOBBY = 2,
			E_SIGN_IN_TYPE_COUNT = 3,
		}

		// BrnNetworkLoginManagerBase.h:138
		enum ESignInState {
			E_SIGN_IN_STATE_SIGNING_IN = 0,
			E_SIGN_IN_STATE_SUCCESS = 1,
			E_SIGN_IN_STATE_FAILED = 2,
			E_SIGN_IN_STATE_COUNT = 3,
		}

		// BrnNetworkLoginManagerBase.h:147
		enum ESubState {
			E_SUBSTATE_PLATFORM_SPECIFIC_UPDATE = 0,
			E_SUBSTATE_CONNECTING_ONLINE = 1,
			E_SUBSTATE_CONNECTING_DS = 2,
			E_SUBSTATE_LOGGING_IN = 3,
			E_SUBSTATE_DOWNLOADING_TOS = 4,
			E_SUBSTATE_GET_CONFIGURATION_DATA = 5,
			E_SUBSTATE_WAITING_FOR_PLAYER_ID = 6,
			E_SUBSTATE_CONNECTING_TELEMETRY = 7,
			E_SUBSTATE_DOWNLOADING_SCOREBOARD_HEADERS = 8,
			E_SUBSTATE_WAITING_SELECTION = 9,
			E_SUBSTATE_RESUMING_SERVER_INTERFACE = 10,
			E_SUBSTATE_LOAD_SETTINGS = 11,
			E_SUBSTATE_PING_REGIONS = 12,
			E_SUBSTATE_NO_AGREEMENT = 13,
			E_SUBSTATE_DONE = 14,
			E_SUBSTATE_COUNT = 15,
		}

	}

}

// BrnNetworkLoginManagerBase.h:55
struct BrnNetwork::LoginManagerBase {
	int (*)(...) * _vptr.LoginManagerBase;

protected:
	// BrnNetworkLoginManagerBase.h:168
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkLoginManagerBase.h:169
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkLoginManagerBase.h:171
	BrnNetwork::LoginManagerBase::ESubState meSubState;

	// BrnNetworkLoginManagerBase.h:172
	BrnNetwork::LoginManagerBase::ESignInState meSignInState;

	// BrnNetworkLoginManagerBase.h:174
	BrnNetwork::LoginManagerBase::ESignInType meSignInType;

	// BrnNetworkLoginManagerBase.h:175
	BrnNetwork::LoginManagerBase::ESignInType meCompletedSignInType;

private:
	// BrnNetworkLoginManagerBase.h:197
	bool mbAgreeShare1;

	// BrnNetworkLoginManagerBase.h:198
	bool mbAgreeShare2;

	// BrnNetworkLoginManagerBase.h:200
	UnicodeBuffer::CgsUtf8 * mpTOS;

public:
	// BrnNetworkLoginManagerBase.cpp:58
	void Construct(BrnNetwork::BrnNetworkModule *);

	// BrnNetworkLoginManagerBase.cpp:86
	bool Prepare();

	// BrnNetworkLoginManagerBase.cpp:109
	bool Release();

	// BrnNetworkLoginManagerBase.cpp:129
	void Destruct();

	// BrnNetworkLoginManagerBase.cpp:151
	bool Update(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkLoginManagerBase.cpp:259
	virtual void Start(BrnNetwork::LoginManagerBase::ESignInType);

	// BrnNetworkLoginManagerBase.cpp:1120
	virtual void Disconnected();

	// BrnNetworkLoginManagerBase.cpp:874
	void AnswerCreateAccount(bool);

	// BrnNetworkLoginManagerBase.cpp:898
	void AnswerShareInfo(bool, bool);

	// BrnNetworkLoginManagerBase.cpp:915
	void AnswerOpenUsAccount(bool);

	// BrnNetworkLoginManagerBase.cpp:940
	void AnswerAgreeTOS(bool);

	// BrnNetworkLoginManagerBase.cpp:971
	void AnswerNoAgreement(bool);

	// BrnNetworkLoginManagerBase.cpp:994
	void AnswerSignIn(bool);

	// BrnNetworkLoginManagerBase.cpp:1018
	void AnswerChatRestricted(bool);

	// BrnNetworkLoginManagerBase.cpp:1032
	void CancelLogin();

	// BrnNetworkLoginManagerBase.h:282
	bool IsSigningIn() const;

	// BrnNetworkLoginManagerBase.h:288
	BrnNetwork::LoginManagerBase::ESignInType GetSignInType() const;

	// BrnNetworkLoginManagerBase.cpp:1247
	void FinishedWithTOS();

	// BrnNetworkLoginManagerBase.h:294
	BrnNetwork::LoginManagerBase::ESignInType GetCompletedSignInType() const;

protected:
	// BrnNetworkLoginManagerBase.h:179
	virtual void PlatformSpecificUpdate(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkLoginManagerBase.h:184
	virtual void GetUserNameAndPassword(char *, char *);

	// BrnNetworkLoginManagerBase.cpp:1070
	void Finished(bool);

	// BrnNetworkLoginManagerBase.cpp:1054
	void ShowSignInGui();

private:
	// BrnNetworkLoginManagerBase.cpp:848
	void LogInToServer();

	// BrnNetworkLoginManagerBase.cpp:488
	void PrepareDownloadingTOS();

	// BrnNetworkLoginManagerBase.h:209
	void PrepareDownloadingNews();

	// BrnNetworkLoginManagerBase.cpp:1145
	// Declaration
	void PrepareConnectTelemetry() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkLoginManagerBase.cpp:1174
		using namespace CgsDev::Message;

	}

	// BrnNetworkLoginManagerBase.cpp:1189
	void PrepareDownloadingScoreboardHeadings();

	// BrnNetworkLoginManagerBase.cpp:1207
	void PrepareLoadSettings();

	// BrnNetworkLoginManagerBase.cpp:1227
	void PreparePingRegions();

	// BrnNetworkLoginManagerBase.cpp:1265
	virtual void ShowChatRestrictionPopup();

	// BrnNetworkLoginManagerBase.cpp:1279
	void SetTelemetryCountryList();

	// BrnNetworkLoginManagerBase.cpp:1297
	// Declaration
	void SendUPnPTelemetry() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkLoginManagerBase.cpp:1344
		using namespace CgsDev::Message;

	}

	// BrnNetworkLoginManagerBase.cpp:305
	void UpdateConnectingOnline();

	// BrnNetworkLoginManagerBase.cpp:329
	// Declaration
	void UpdateConnectingDS() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkLoginManagerBase.cpp:357
		using namespace CgsDev::Message;

	}

	// BrnNetworkLoginManagerBase.cpp:382
	void UpdateLoggingIn();

	// BrnNetworkLoginManagerBase.cpp:513
	void UpdateDownloadingTOS();

	// BrnNetworkLoginManagerBase.cpp:590
	void UpdateGetConfigurationData();

	// BrnNetworkLoginManagerBase.cpp:632
	void UpdateWaitingForPlayerID();

	// BrnNetworkLoginManagerBase.cpp:657
	void UpdateConnectingTelemetry();

	// BrnNetworkLoginManagerBase.cpp:833
	void UpdateResumingServerInterface();

	// BrnNetworkLoginManagerBase.cpp:699
	void UpdateDownloadingScoreboardHeadings();

	// BrnNetworkLoginManagerBase.cpp:746
	void UpdateLoadSettings();

	// BrnNetworkLoginManagerBase.cpp:789
	void UpdatePingRegions();

	// BrnNetworkLoginManagerBase.cpp:1095
	void ResumeCompleteCallback(bool, void *);

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct LoginManagerBase {
		// BrnNetworkLoginManagerBase.h:58
		enum ESignInType {
			E_SIGN_IN_TYPE_NORMAL = 0,
			E_SIGN_IN_TYPE_SILENT = 1,
			E_SIGN_IN_TYPE_FREE_BURN_LOBBY = 2,
			E_SIGN_IN_TYPE_COUNT = 3,
		}

	public:
		// BrnNetworkLoginManagerBase.h:288
		BrnNetwork::LoginManagerBase::ESignInType GetSignInType() const;

	}

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct LoginManagerBase {
		// BrnNetworkLoginManagerBase.h:58
		enum ESignInType {
			E_SIGN_IN_TYPE_NORMAL = 0,
			E_SIGN_IN_TYPE_SILENT = 1,
			E_SIGN_IN_TYPE_FREE_BURN_LOBBY = 2,
			E_SIGN_IN_TYPE_COUNT = 3,
		}

	public:
		LoginManagerBase();

	}

}

// BrnNetworkLoginManagerBase.h:55
void BrnNetwork::LoginManagerBase::LoginManagerBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

