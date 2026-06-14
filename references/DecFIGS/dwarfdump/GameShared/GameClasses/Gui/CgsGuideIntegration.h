// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct SystemUserProfile {
		// CgsGuideIntegration.h:437
		enum EUserSigninState {
			E_USERSIGNINSTATE_NOTSIGNEDIN = 0,
			E_USERSIGNINSTATE_SIGNEDIN = 1,
		}

		// CgsGuideIntegration.h:445
		struct ProfileSettings {
			// CgsGuideIntegration.h:446
			bool mbExternalCamera;

			// CgsGuideIntegration.h:447
			uint32_t miRumble;

		}

	}

}

// CgsGuideIntegration.h:435
struct CgsGui::SystemUserProfile {
	struct Listener;

public:
	// CgsGuideIntegration.h:472
	void Construct();

	// CgsGuideIntegration.h:476
	bool Prepare();

	// CgsGuideIntegration.h:480
	bool Release();

	// CgsGuideIntegration.h:484
	void Destruct();

	// CgsGuideIntegration.h:487
	void Update();

	// CgsGuideIntegration.h:490
	void SetUserIndex(uint32_t);

	// CgsGuideIntegration.h:492
	uint32_t GetUserIndex() const;

	// CgsGuideIntegration.h:495
	void AttachListener(SystemUserProfile::Listener &);

	// CgsGuideIntegration.h:497
	void DetachListener(SystemUserProfile::Listener &);

}

// CgsGuiShared.h:40
namespace CgsGui {
	// Declaration
	struct SystemUserProfile {
		// CgsGuideIntegration.h:437
		enum EUserSigninState {
			E_USERSIGNINSTATE_NOTSIGNEDIN = 0,
			E_USERSIGNINSTATE_SIGNEDIN = 1,
		}

		// CgsGuideIntegration.h:445
		struct ProfileSettings {
			// CgsGuideIntegration.h:446
			bool mbExternalCamera;

			// CgsGuideIntegration.h:447
			uint32_t miRumble;

		}

	}

}

// CgsGuideIntegration.h:451
struct CgsGui::SystemUserProfile::Listener {
	int (*)(...) * _vptr.Listener;

public:
	// CgsGuideIntegration.h:455
	virtual void UserNameChanged(const char *);

	// CgsGuideIntegration.h:459
	virtual void ProfileSettingsChanged(const CgsGui::SystemUserProfile::ProfileSettings &);

	// CgsGuideIntegration.h:463
	virtual void SigninStateChanged(CgsGui::SystemUserProfile::EUserSigninState);

	// CgsGuideIntegration.h:467
	virtual void UIClosed();

}

// CgsGuideIntegration.h:451
struct CgsGui::SystemUserProfile::Listener {
	int (*)(...) * _vptr.Listener;

public:
	void Listener(const Listener &);

	void Listener();

	// CgsGuideIntegration.h:455
	virtual void UserNameChanged(const char *);

	// CgsGuideIntegration.h:459
	virtual void ProfileSettingsChanged(const CgsGui::SystemUserProfile::ProfileSettings &);

	// CgsGuideIntegration.h:463
	virtual void SigninStateChanged(CgsGui::SystemUserProfile::EUserSigninState);

	// CgsGuideIntegration.h:467
	virtual void UIClosed();

}

// CgsGuideIntegration.h:451
void CgsGui::SystemUserProfile::Listener::Listener() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsOpaqueBuffer.h:30
namespace CgsGui {
	// Declaration
	struct SystemUserProfile {
		// CgsGuideIntegration.h:437
		enum EUserSigninState {
			E_USERSIGNINSTATE_NOTSIGNEDIN = 0,
			E_USERSIGNINSTATE_SIGNEDIN = 1,
		}

		// CgsGuideIntegration.h:445
		struct ProfileSettings {
			// CgsGuideIntegration.h:446
			bool mbExternalCamera;

			// CgsGuideIntegration.h:447
			uint32_t miRumble;

		}

	}

}

