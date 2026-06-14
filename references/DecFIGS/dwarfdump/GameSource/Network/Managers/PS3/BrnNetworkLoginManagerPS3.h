// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct LoginManagerPS3 {
		// BrnNetworkLoginManagerPS3.h:84
		enum EPlatformSpecificSubState {
			E_PLATFORM_SPECIFIC_SUBSTATE_SIGN_IN_TO_NP = 0,
			E_PLATFORM_SPECIFIC_SUBSTATE_ACCOUNT_SIGN_IN = 1,
			E_PLATFORM_SPECIFIC_SUBSTATE_SHOW_CHAT_POPUP = 2,
			E_PLATFORM_SPECIFIC_SUBSTATE_COUNT = 3,
		}

	}

}

// BrnNetworkLoginManagerPS3.h:47
struct BrnNetwork::LoginManagerPS3 : public BrnNetwork::LoginManagerBase {
private:
	// BrnNetworkLoginManagerPS3.h:93
	BrnNetwork::LoginManagerPS3::EPlatformSpecificSubState mePlatformSpecificSubState;

	// BrnNetworkLoginManagerPS3.h:95
	bool mbHaveShownChatPopup;

public:
	// BrnNetworkLoginManagerPS3.cpp:49
	void Construct(BrnNetwork::BrnNetworkModule *);

	// BrnNetworkLoginManagerPS3.cpp:68
	bool Prepare();

	// BrnNetworkLoginManagerPS3.cpp:92
	bool Release();

	// BrnNetworkLoginManagerPS3.cpp:112
	void Destruct();

	// BrnNetworkLoginManagerPS3.cpp:168
	virtual void Start(BrnNetwork::LoginManagerBase::ESignInType);

	// BrnNetworkLoginManagerPS3.cpp:262
	virtual void Disconnected();

protected:
	// BrnNetworkLoginManagerPS3.cpp:128
	virtual void PlatformSpecificUpdate(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkLoginManagerPS3.cpp:247
	virtual void GetUserNameAndPassword(char *, char *);

private:
	// BrnNetworkLoginManagerPS3.cpp:278
	void StartDirtySockSignIn();

	// BrnNetworkLoginManagerPS3.cpp:283
	virtual void ShowChatRestrictionPopup();

	// BrnNetworkLoginManagerPS3.cpp:184
	void UpdateSignInToNP();

	// BrnNetworkLoginManagerPS3.cpp:224
	void UpdateAccountSignIn();

	// BrnNetworkLoginManagerPS3.cpp:312
	void UpdateShowChatPopup(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

}

// BrnNetworkLoginManagerPS3.h:47
void BrnNetwork::LoginManagerPS3::LoginManagerPS3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

