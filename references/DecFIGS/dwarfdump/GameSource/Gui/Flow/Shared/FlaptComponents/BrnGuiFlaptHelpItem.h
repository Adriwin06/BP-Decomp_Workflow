// BrnGuiFlaptHelpItem.h:99
extern char[] KAC_ICONLEFT;

// BrnGuiFlaptHelpItem.h:100
extern char[] KAC_ICONRIGHT;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct FlaptHelpItem {
		// BrnGuiFlaptHelpItem.h:49
		enum EIconPosition {
			E_ICONPOSITION_LEFT = 0,
			E_ICONPOSITION_RIGHT = 1,
			E_ICONPOSITION_COUNT = 2,
		}

	}

}

// BrnGuiFlaptHelpItem.h:46
struct BrnGui::FlaptHelpItem : public BrnFlaptComponent {
private:
	// BrnGuiFlaptHelpItem.h:99
	extern char[] KAC_ICONLEFT;

	// BrnGuiFlaptHelpItem.h:100
	extern char[] KAC_ICONRIGHT;

	// BrnGuiFlaptHelpItem.h:102
	FlaptButtonIconComponent mIconLeft;

	// BrnGuiFlaptHelpItem.h:103
	FlaptButtonIconComponent mIconRight;

	// BrnGuiFlaptHelpItem.h:104
	TextFieldRef mTextField;

public:
	// BrnGuiFlaptHelpItem.h:62
	void Construct(const char *, StateInterface *, const char *);

	// BrnGuiFlaptHelpItem.h:67
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnGuiFlaptHelpItem.h:71
	void Prepare(const MovieClipRef *);

	// BrnGuiFlaptHelpItem.h:79
	void SetItem(const char *, BrnGui::FlaptButtonIconComponent::EPadButton, BrnGui::FlaptButtonIconComponent::EPadButton, bool);

	// BrnGuiFlaptHelpItem.h:84
	void SetText(const char *);

	// BrnGuiFlaptHelpItem.h:90
	void SetIconState(BrnGui::FlaptHelpItem::EIconPosition, BrnGui::FlaptButtonIconComponent::EPadButtonState);

	// BrnGuiFlaptHelpItem.h:95
	BrnGui::FlaptButtonIconComponent::EPadButton GetIconButton(BrnGui::FlaptHelpItem::EIconPosition) const;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct FlaptHelpItem {
		// BrnGuiFlaptHelpItem.h:49
		enum EIconPosition {
			E_ICONPOSITION_LEFT = 0,
			E_ICONPOSITION_RIGHT = 1,
			E_ICONPOSITION_COUNT = 2,
		}

	}

}

