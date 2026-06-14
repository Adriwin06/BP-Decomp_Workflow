// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OffenceMenuItem {
		// BrnOffenceMenuItem.h:107
		enum OffenceMenuItemStates {
			E_OFFENCEMENUITEMSTATES_UNUSED = 0,
			E_OFFENCEMENUITEMSTATES_INVISIBLE = 1,
			E_OFFENCEMENUITEMSTATES_UNSELECTED_UNSTAMPED = 2,
			E_OFFENCEMENUITEMSTATES_SELECTED_UNSTAMPED = 3,
			E_OFFENCEMENUITEMSTATES_UNSELECTED_STAMPED = 4,
			E_OFFENCEMENUITEMSTATES_SELECTED_STAMPED = 5,
			E_OFFENCEMENUITEMSTATES_COUNT = 6,
		}

	}

}

// BrnOffenceMenuItem.h:45
struct BrnGui::OffenceMenuItem : public CgsGui::GuiComponent {
private:
	// BrnOffenceMenuItem.h:119
	bool mbIsDone;

	// BrnOffenceMenuItem.h:121
	BrnGui::AnimationComponent mStateAnimator;

	// BrnOffenceMenuItem.cpp:44
	extern const char[17] macStateAnimatorName;

	// BrnOffenceMenuItem.cpp:24
	extern const char *[6] KAC_STATE_NAMES;

	// BrnOffenceMenuItem.cpp:34
	extern const char *[6] KAC_STATE_NAMES_STILL;

	// BrnOffenceMenuItem.h:126
	BrnGui::TextField mOffenceTextField;

	// BrnOffenceMenuItem.cpp:45
	extern const char[16] macOffenceTextFieldName;

	// BrnOffenceMenuItem.h:129
	bool mbAnimationMode;

public:
	// BrnOffenceMenuItem.cpp:70
	void Construct(const char *, StateInterface *, bool, const char *, const char *, uint64_t);

	// BrnOffenceMenuItem.cpp:102
	void SetText(const char *);

	// BrnOffenceMenuItem.cpp:118
	const char * GetItemText() const;

	// BrnOffenceMenuItem.cpp:133
	void Refresh();

	// BrnOffenceMenuItem.cpp:149
	virtual void Update();

	// BrnOffenceMenuItem.cpp:208
	void AppendExpectedAptComponent(BrnGui::GuiFlow, BrnGui::GuiCache *);

	// BrnOffenceMenuItem.h:144
	virtual void Select();

	// BrnOffenceMenuItem.h:158
	void SetDone(bool);

	// BrnOffenceMenuItem.h:173
	const bool IsDone() const;

	// BrnOffenceMenuItem.cpp:225
	void Rename(const char *, const char *);

	// BrnOffenceMenuItem.h:187
	void SetAnimationMode(bool);

}

