// BrnBoostMessageItem.h:124
extern char[] macBoostTextFieldName;

// BrnBoostMessageItem.h:125
extern char[] macBoostTransitionIdent;

// BrnBoostMessageItem.h:126
extern char[] macBoostTransitionType;

// BrnBoostMessageItem.h:129
extern char[] macBoostBackingType;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct BoostMessageItem {
		// BrnBoostMessageItem.h:64
		enum Transition {
			E_TRANSITION_ON = 0,
			E_TRANSITION_OFF = 1,
			E_TRANSITION_RESET = 2,
			E_TRANSITION_MAX = 3,
		}

	}

}

// BrnBoostMessageItem.h:49
struct BrnGui::BaseBoostMessageItemComponent : public BrnFlaptComponent {
}

// BrnBoostMessageItem.h:61
struct BrnGui::BoostMessageItem : public BaseBoostMessageItemComponent {
private:
	// BrnBoostMessageItem.h:124
	extern char[] macBoostTextFieldName;

	// BrnBoostMessageItem.h:125
	extern char[] macBoostTransitionIdent;

	// BrnBoostMessageItem.h:126
	extern char[] macBoostTransitionType;

	// BrnBoostMessageItem.h:127
	extern const char *[3] mpacBoostTextStateNames;

	// BrnBoostMessageItem.h:129
	extern char[] macBoostBackingType;

	// BrnBoostMessageItem.h:130
	extern const char *[] mpacBackingTypeNames;

	// BrnBoostMessageItem.h:135
	TextFieldRef mMessageText;

	// BrnBoostMessageItem.h:137
	MovieClipRef mBackingRef;

	// BrnBoostMessageItem.h:141
	bool mbInTransition;

	// BrnBoostMessageItem.h:143
	BrnWorld::EBoostType meCurrentBoostType;

public:
	// BrnBoostMessageItem.h:78
	void Construct(const char *, StateInterface *, const char *);

	// BrnBoostMessageItem.h:85
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnBoostMessageItem.h:89
	void Update();

	// BrnBoostMessageItem.h:105
	void SetText(const char *, int32_t);

	// BrnBoostMessageItem.h:111
	void SetTransition(BrnGui::BoostMessageItem::Transition, BrnWorld::EBoostType);

	// BrnBoostMessageItem.h:115
	bool IsInTransition() const;

	// BrnBoostMessageItem.h:120
	void MessageRefresh();

private:
	// BrnBoostMessageItem.h:148
	void UpdateBoostType(BrnWorld::EBoostType);

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct BoostMessageItem {
		// BrnBoostMessageItem.h:64
		enum Transition {
			E_TRANSITION_ON = 0,
			E_TRANSITION_OFF = 1,
			E_TRANSITION_RESET = 2,
			E_TRANSITION_MAX = 3,
		}

	}

}

