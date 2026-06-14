// BrnHelpItem.h:88
extern char[] KAC_ICONLEFT;

// BrnHelpItem.h:89
extern char[] KAC_ICONRIGHT;

// BrnHelpItem.h:90
extern char[] KAC_STRING_VAR;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct HelpItem {
	private:
		// BrnHelpItem.h:88
		extern char[] KAC_ICONLEFT;

		// BrnHelpItem.h:89
		extern char[] KAC_ICONRIGHT;

		// BrnHelpItem.h:90
		extern char[] KAC_STRING_VAR;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct HelpItem {
	private:
		// BrnHelpItem.h:88
		extern char[] KAC_ICONLEFT;

		// BrnHelpItem.h:89
		extern char[] KAC_ICONRIGHT;

		// BrnHelpItem.h:90
		extern char[] KAC_STRING_VAR;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct HelpItem {
		// BrnHelpItem.h:48
		enum EIconPosition {
			E_ICONPOSITION_LEFT = 0,
			E_ICONPOSITION_RIGHT = 1,
			E_ICONPOSITION_COUNT = 2,
		}

	}

}

// BrnHelpItem.h:45
struct BrnGui::HelpItem : public CgsGui::GuiComponent {
private:
	// BrnHelpItem.cpp:23
	extern const char[11] KAC_ICONLEFT;

	// BrnHelpItem.cpp:24
	extern const char[12] KAC_ICONRIGHT;

	// BrnHelpItem.cpp:25
	extern const char[12] KAC_STRING_VAR;

	// BrnHelpItem.h:92
	BrnGui::ButtonIconComponent mIconLeft;

	// BrnHelpItem.h:93
	BrnGui::ButtonIconComponent mIconRight;

public:
	// BrnHelpItem.cpp:44
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnHelpItem.cpp:66
	void SetItem(const char *, BrnGui::ButtonIconComponent::EPadButton, BrnGui::ButtonIconComponent::EPadButton);

	// BrnHelpItem.h:108
	void SetText(const char *);

	// BrnHelpItem.cpp:87
	void SetIconState(BrnGui::HelpItem::EIconPosition, BrnGui::ButtonIconComponent::EPadButtonState);

	// BrnHelpItem.cpp:115
	BrnGui::ButtonIconComponent::EPadButton GetIconButton(BrnGui::HelpItem::EIconPosition) const;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct HelpItem {
	public:
		HelpItem();

	private:
		// BrnHelpItem.h:88
		extern char[] KAC_ICONLEFT;

		// BrnHelpItem.h:89
		extern char[] KAC_ICONRIGHT;

		// BrnHelpItem.h:90
		extern char[] KAC_STRING_VAR;

	}

}

// BrnHelpItem.h:45
void BrnGui::HelpItem::HelpItem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

