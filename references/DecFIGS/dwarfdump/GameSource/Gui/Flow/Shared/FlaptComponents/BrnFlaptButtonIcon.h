// BrnFlaptButtonIcon.h:121
extern const const char *[16] maButtonIdentifiers;

// BrnFlaptButtonIcon.h:122
extern const const char *[16] maStateIdentifiers;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct FlaptButtonIconComponent {
		// BrnFlaptButtonIcon.h:48
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

		// BrnFlaptButtonIcon.h:71
		enum EPadButtonState {
			E_PADBUTTON_STATE_ACTIVE = 0,
			E_PADBUTTON_STATE_HIGLIGHTED = 1,
			E_PADBUTTON_STATE_PRESSED = 2,
			E_PADBUTTON_STATE_UNSELECTABLE = 3,
			E_PADBUTTON_STATE_COUNT = 4,
		}

	}

}

// BrnFlaptButtonIcon.h:44
struct BrnGui::FlaptButtonIconComponent : public BrnFlaptComponent {
private:
	// BrnFlaptButtonIcon.h:121
	extern const const char *[16] maButtonIdentifiers;

	// BrnFlaptButtonIcon.h:122
	extern const const char *[16] maStateIdentifiers;

	// BrnFlaptButtonIcon.h:124
	extern int32_t miControllerEnterWithCircle;

	// BrnFlaptButtonIcon.h:127
	BrnGui::FlaptButtonIconComponent::EPadButton meButton;

	// BrnFlaptButtonIcon.h:129
	MovieClipRef mAptButtonRef;

public:
	// BrnFlaptButtonIcon.h:87
	void Construct(const char *, StateInterface *, const char *);

	// BrnFlaptButtonIcon.h:94
	void Prepare(const char *, const BrnFlapt::FileRef &, const char *);

	// BrnFlaptButtonIcon.h:98
	void Prepare(const MovieClipRef *);

	// BrnFlaptButtonIcon.h:105
	void SetButton(BrnGui::FlaptButtonIconComponent::EPadButton, BrnGui::FlaptButtonIconComponent::EPadButtonState, bool);

	// BrnFlaptButtonIcon.h:110
	void SetState(BrnGui::FlaptButtonIconComponent::EPadButtonState);

	// BrnFlaptButtonIcon.h:114
	BrnGui::FlaptButtonIconComponent::EPadButton GetButton() const;

private:
	// BrnFlaptButtonIcon.h:119
	void Setup();

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct FlaptButtonIconComponent {
		// BrnFlaptButtonIcon.h:48
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

		// BrnFlaptButtonIcon.h:71
		enum EPadButtonState {
			E_PADBUTTON_STATE_ACTIVE = 0,
			E_PADBUTTON_STATE_HIGLIGHTED = 1,
			E_PADBUTTON_STATE_PRESSED = 2,
			E_PADBUTTON_STATE_UNSELECTABLE = 3,
			E_PADBUTTON_STATE_COUNT = 4,
		}

	}

}

