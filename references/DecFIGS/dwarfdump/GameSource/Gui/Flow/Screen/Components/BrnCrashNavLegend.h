// BrnCrashNavLegend.h:107
extern const int32_t KI_NUM_VISIBLE_ICONS = 5;

// BrnCrashNavLegend.h:118
extern char[] macHelpStringTextFieldName;

// BrnCrashNavLegend.h:120
extern char[] macTransitionOutVar;

// BrnCrashNavLegend.h:121
extern char[] macTransitionInVar;

// BrnCrashNavLegend.h:122
extern char[] macAnimationVarName;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavLegend {
		// BrnCrashNavLegend.h:47
		enum AnimState {
			E_ANIMSTATE_INVISIBLE = 0,
			E_ANIMSTATE_TRANSITIONIN = 1,
			E_ANIMSTATE_TRANSITIONOUT = 2,
			E_ANIMSTATE_CHANGEDATA = 3,
			E_ANIMSTATE_IDLE = 4,
		}

	}

}

// BrnCrashNavLegend.h:44
struct BrnGui::CrashNavLegend : public CgsGui::GuiComponent {
private:
	// BrnCrashNavLegend.h:107
	extern const int32_t KI_NUM_VISIBLE_ICONS = 5;

	// BrnCrashNavLegend.h:109
	BrnGui::CrashNavLegend::AnimState meAnimState;

	// BrnCrashNavLegend.h:111
	bool mbIsDirty;

	// BrnCrashNavLegend.h:113
	int8_t mi8CurrentlySelectedIcon;

	// BrnCrashNavLegend.h:115
	BrnGui::TextField mHelpStringTextField;

	// BrnCrashNavLegend.h:116
	BrnGui::IconComponent[5] mIcons;

	// BrnCrashNavLegend.cpp:23
	extern const char[14] macHelpStringTextFieldName;

	// BrnCrashNavLegend.cpp:28
	extern const char *[5] macIconNames;

	// BrnCrashNavLegend.cpp:25
	extern const char[14] macTransitionOutVar;

	// BrnCrashNavLegend.cpp:26
	extern const char[13] macTransitionInVar;

	// BrnCrashNavLegend.cpp:24
	extern const char[10] macAnimationVarName;

	// BrnCrashNavLegend.cpp:37
	extern const char *[9] macLegendIconNames;

	// BrnCrashNavLegend.cpp:50
	extern const char *[9] macLegendHelpStrings;

public:
	// BrnCrashNavLegend.cpp:82
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnCrashNavLegend.cpp:115
	void RecEvent(const CgsModule::Event *, int32_t, int32_t);

	// BrnCrashNavLegend.cpp:145
	void SetActive();

	// BrnCrashNavLegend.cpp:168
	void SetInactive();

	// BrnCrashNavLegend.cpp:188
	bool HighlightNext();

	// BrnCrashNavLegend.cpp:210
	bool HighlightPrevious();

private:
	// BrnCrashNavLegend.cpp:232
	void UpdateIcons();

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CrashNavLegend {
	private:
		// BrnCrashNavLegend.h:107
		extern const int32_t KI_NUM_VISIBLE_ICONS = 5;

		// BrnCrashNavLegend.h:118
		extern char[] macHelpStringTextFieldName;

		// BrnCrashNavLegend.h:120
		extern char[] macTransitionOutVar;

		// BrnCrashNavLegend.h:121
		extern char[] macTransitionInVar;

		// BrnCrashNavLegend.h:122
		extern char[] macAnimationVarName;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavLegend {
	public:
		CrashNavLegend();

	private:
		// BrnCrashNavLegend.h:107
		extern const int32_t KI_NUM_VISIBLE_ICONS = 5;

		// BrnCrashNavLegend.h:118
		extern char[] macHelpStringTextFieldName;

		// BrnCrashNavLegend.h:120
		extern char[] macTransitionOutVar;

		// BrnCrashNavLegend.h:121
		extern char[] macTransitionInVar;

		// BrnCrashNavLegend.h:122
		extern char[] macAnimationVarName;

	}

}

// BrnCrashNavLegend.h:44
void BrnGui::CrashNavLegend::CrashNavLegend() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

