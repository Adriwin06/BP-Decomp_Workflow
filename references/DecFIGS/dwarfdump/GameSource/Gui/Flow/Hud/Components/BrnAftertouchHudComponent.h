// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct AftertouchHudComponent {
		// BrnAftertouchHudComponent.h:46
		enum EControllerState {
			E_CONTROLLER_SHAKE = 0,
			E_CONTROLLER_MIDDLE = 1,
			E_CONTROLLER_TOPLEFT = 2,
			E_CONTROLLER_TOP = 3,
			E_CONTROLLER_TOPRIGHT = 4,
			E_CONTROLLER_RIGHT = 5,
			E_CONTROLLER_BOTTOMRIGHT = 6,
			E_CONTROLLER_BOTTOM = 7,
			E_CONTROLLER_BOTTOMLEFT = 8,
			E_CONTROLLER_LEFT = 9,
			E_CONTROLLER_COUNT = 10,
		}

	}

}

// BrnAftertouchHudComponent.h:43
struct BrnGui::AftertouchHudComponent : public CgsGui::GuiComponent {
private:
	// BrnAftertouchHudComponent.cpp:23
	extern const char * KAC_CONTROLLER_VAR_ROTATION;

	// BrnAftertouchHudComponent.cpp:24
	extern const char * KAC_CONTROLLER_VAR_MAGNITUDE;

	// BrnAftertouchHudComponent.cpp:25
	extern const char * KAC_CONTROLLER_VAR_STATE;

	// BrnAftertouchHudComponent.cpp:26
	extern const char * KAC_CONTROLLER_VAR_PLATFORM;

	// BrnAftertouchHudComponent.cpp:28
	extern const char *[10] KAC_CONTROLLER_STATES;

	// BrnAftertouchHudComponent.cpp:45
	extern const char * KAC_PLATFORM_NAME;

	// BrnAftertouchHudComponent.h:86
	bool mbPlatformSet;

	// BrnAftertouchHudComponent.h:88
	Vector2 mv2ControllerPos;

	// BrnAftertouchHudComponent.h:89
	BrnGui::AftertouchHudComponent::EControllerState meControllerState;

public:
	// BrnAftertouchHudComponent.cpp:68
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnAftertouchHudComponent.cpp:89
	void SetController(Vector2, bool);

}

