// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct ButtonIconComponent {
		// BrnButtonIcon.h:45
		enum EPadButton {
			E_PADBUTTON_UP = 0,
			E_PADBUTTON_DOWN = 1,
			E_PADBUTTON_LEFT = 2,
			E_PADBUTTON_RIGHT = 3,
			E_PADBUTTON_SELECT = 4,
			E_PADBUTTON_BACK = 5,
			E_PADBUTTON_OPTION0 = 6,
			E_PADBUTTON_OPTION1 = 7,
			E_PADBUTTON_LSHOULDER = 8,
			E_PADBUTTON_RSHOULDER = 9,
			E_PADBUTTON_LTRIGGER = 10,
			E_PADBUTTON_RTRIGGER = 11,
			E_PADBUTTON_START = 12,
			E_PADBUTTON_LTHUMB = 13,
			E_PADBUTTON_RTHUMB = 14,
			E_PADBUTTON_INVISIBLE = 15,
			E_PADBUTTON_COUNT = 16,
		}

	}

}

// BrnButtonIcon.h:102
extern const const char *[16] maButtonIdentifiers;

// BrnButtonIcon.h:103
extern const const char *[16] maStateIdentifiers;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ButtonIconComponent {
		// BrnButtonIcon.h:45
		enum EPadButton {
			E_PADBUTTON_UP = 0,
			E_PADBUTTON_DOWN = 1,
			E_PADBUTTON_LEFT = 2,
			E_PADBUTTON_RIGHT = 3,
			E_PADBUTTON_SELECT = 4,
			E_PADBUTTON_BACK = 5,
			E_PADBUTTON_OPTION0 = 6,
			E_PADBUTTON_OPTION1 = 7,
			E_PADBUTTON_LSHOULDER = 8,
			E_PADBUTTON_RSHOULDER = 9,
			E_PADBUTTON_LTRIGGER = 10,
			E_PADBUTTON_RTRIGGER = 11,
			E_PADBUTTON_START = 12,
			E_PADBUTTON_LTHUMB = 13,
			E_PADBUTTON_RTHUMB = 14,
			E_PADBUTTON_INVISIBLE = 15,
			E_PADBUTTON_COUNT = 16,
		}

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct ButtonIconComponent {
		// BrnButtonIcon.h:45
		enum EPadButton {
			E_PADBUTTON_UP = 0,
			E_PADBUTTON_DOWN = 1,
			E_PADBUTTON_LEFT = 2,
			E_PADBUTTON_RIGHT = 3,
			E_PADBUTTON_SELECT = 4,
			E_PADBUTTON_BACK = 5,
			E_PADBUTTON_OPTION0 = 6,
			E_PADBUTTON_OPTION1 = 7,
			E_PADBUTTON_LSHOULDER = 8,
			E_PADBUTTON_RSHOULDER = 9,
			E_PADBUTTON_LTRIGGER = 10,
			E_PADBUTTON_RTRIGGER = 11,
			E_PADBUTTON_START = 12,
			E_PADBUTTON_LTHUMB = 13,
			E_PADBUTTON_RTHUMB = 14,
			E_PADBUTTON_INVISIBLE = 15,
			E_PADBUTTON_COUNT = 16,
		}

	private:
		// BrnButtonIcon.h:102
		extern const const char *[16] maButtonIdentifiers;

		// BrnButtonIcon.h:103
		extern const const char *[16] maStateIdentifiers;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ButtonIconComponent {
		// BrnButtonIcon.h:45
		enum EPadButton {
			E_PADBUTTON_UP = 0,
			E_PADBUTTON_DOWN = 1,
			E_PADBUTTON_LEFT = 2,
			E_PADBUTTON_RIGHT = 3,
			E_PADBUTTON_SELECT = 4,
			E_PADBUTTON_BACK = 5,
			E_PADBUTTON_OPTION0 = 6,
			E_PADBUTTON_OPTION1 = 7,
			E_PADBUTTON_LSHOULDER = 8,
			E_PADBUTTON_RSHOULDER = 9,
			E_PADBUTTON_LTRIGGER = 10,
			E_PADBUTTON_RTRIGGER = 11,
			E_PADBUTTON_START = 12,
			E_PADBUTTON_LTHUMB = 13,
			E_PADBUTTON_RTHUMB = 14,
			E_PADBUTTON_INVISIBLE = 15,
			E_PADBUTTON_COUNT = 16,
		}

		// BrnButtonIcon.h:68
		enum EPadButtonState {
			E_PADBUTTON_STATE_ACTIVE = 0,
			E_PADBUTTON_STATE_HIGLIGHTED = 1,
			E_PADBUTTON_STATE_PRESSED = 2,
			E_PADBUTTON_STATE_UNSELECTABLE = 3,
			E_PADBUTTON_STATE_COUNT = 4,
		}

	}

}

// BrnButtonIcon.h:41
struct BrnGui::ButtonIconComponent : public CgsGui::GuiComponent {
private:
	// BrnButtonIcon.cpp:28
	extern const const char *[16] maButtonIdentifiers;

	// BrnButtonIcon.cpp:48
	extern const const char *[16] maStateIdentifiers;

	// BrnButtonIcon.cpp:57
	extern int32_t miControllerEnterWithCircle;

	// BrnButtonIcon.h:108
	BrnGui::ButtonIconComponent::EPadButton meButton;

public:
	// BrnButtonIcon.cpp:79
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnButtonIcon.cpp:113
	void SetButton(BrnGui::ButtonIconComponent::EPadButton, BrnGui::ButtonIconComponent::EPadButtonState);

	// BrnButtonIcon.cpp:149
	void SetState(BrnGui::ButtonIconComponent::EPadButtonState);

	// BrnButtonIcon.h:123
	BrnGui::ButtonIconComponent::EPadButton GetButton() const;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ButtonIconComponent {
		// BrnButtonIcon.h:45
		enum EPadButton {
			E_PADBUTTON_UP = 0,
			E_PADBUTTON_DOWN = 1,
			E_PADBUTTON_LEFT = 2,
			E_PADBUTTON_RIGHT = 3,
			E_PADBUTTON_SELECT = 4,
			E_PADBUTTON_BACK = 5,
			E_PADBUTTON_OPTION0 = 6,
			E_PADBUTTON_OPTION1 = 7,
			E_PADBUTTON_LSHOULDER = 8,
			E_PADBUTTON_RSHOULDER = 9,
			E_PADBUTTON_LTRIGGER = 10,
			E_PADBUTTON_RTRIGGER = 11,
			E_PADBUTTON_START = 12,
			E_PADBUTTON_LTHUMB = 13,
			E_PADBUTTON_RTHUMB = 14,
			E_PADBUTTON_INVISIBLE = 15,
			E_PADBUTTON_COUNT = 16,
		}

	public:
		ButtonIconComponent();

	private:
		// BrnButtonIcon.h:102
		extern const const char *[16] maButtonIdentifiers;

		// BrnButtonIcon.h:103
		extern const const char *[16] maStateIdentifiers;

	}

}

// BrnButtonIcon.h:41
void BrnGui::ButtonIconComponent::ButtonIconComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

