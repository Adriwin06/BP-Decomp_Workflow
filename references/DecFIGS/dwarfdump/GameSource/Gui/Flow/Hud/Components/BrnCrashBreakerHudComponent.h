// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashbreakerHudComponent {
		// BrnCrashBreakerHudComponent.h:46
		enum EState {
			E_TRANS_IN = 0,
			E_TRANS_OUT = 1,
			E_TRANS_COUNT = 2,
		}

	}

}

// BrnCrashBreakerHudComponent.h:43
struct BrnGui::CrashbreakerHudComponent : public CgsGui::GuiComponent {
private:
	// BrnCrashBreakerHudComponent.cpp:30
	extern const char * mpacTransitionVariable;

	// BrnCrashBreakerHudComponent.cpp:31
	extern const char * mpacTimeTransitionVariable;

	// BrnCrashBreakerHudComponent.cpp:29
	extern const char * mpacPlatformString;

	// BrnCrashBreakerHudComponent.cpp:26
	extern const char * mpacPlatformText;

	// BrnCrashBreakerHudComponent.cpp:33
	extern const char *[2] mpacTransitions;

public:
	// BrnCrashBreakerHudComponent.cpp:54
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnCrashBreakerHudComponent.cpp:70
	void SetupCrashbreaker(int32_t);

	// BrnCrashBreakerHudComponent.cpp:92
	void SetTransition(BrnGui::CrashbreakerHudComponent::EState);

}

