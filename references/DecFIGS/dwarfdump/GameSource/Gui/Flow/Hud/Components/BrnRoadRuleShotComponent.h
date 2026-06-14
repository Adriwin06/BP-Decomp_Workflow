// BrnRoadRuleShotComponent.h:126
extern char[] KAC_TEMPLATE_ON_ROAD_STRING_ID;

// BrnRoadRuleShotComponent.h:128
extern char[] KAC_GAMERTAG_TEXTFIELD_MOVIECLIP_NAME;

// BrnRoadRuleShotComponent.h:129
extern char[] KAC_ROAD_NAME_TEXTFIELD_MOVIECLIP_NAME;

// BrnRoadRuleShotComponent.h:130
extern char[] KAC_RULE_STATE_TEXTFIELD_MOVIECLIP_NAME;

// BrnRoadRuleShotComponent.h:132
extern char[] KAC_GAMERTAG_TEXTFIELD_NAME;

// BrnRoadRuleShotComponent.h:133
extern char[] KAC_ROAD_NAME_TEXTFIELD_NAME;

// BrnRoadRuleShotComponent.h:134
extern char[] KAC_RULE_STATE_TEXTFIELD_NAME;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct RoadRuleShotComponent {
		// BrnRoadRuleShotComponent.h:59
		enum EPlayerState {
			E_PLAYER_STATE_RACING = 0,
			E_PLAYER_STATE_CRASHING = 1,
			E_PLAYER_STATE_COUNT = 2,
		}

	public:
		// BrnRoadRuleShotComponent.cpp:110
		void HandleLoadNotifications(const char *);

		// BrnRoadRuleShotComponent.cpp:253
		void Show(bool);

		// BrnRoadRuleShotComponent.cpp:349
		void Hide();

		// BrnRoadRuleShotComponent.cpp:58
		void Construct(const char *, StateInterface *, const char *);

		// BrnRoadRuleShotComponent.cpp:295
		void Snap(bool);

		// BrnRoadRuleShotComponent.cpp:92
		void Prepare(const char *, const BrnFlapt::FileRef &);

		// BrnRoadRuleShotComponent.cpp:148
		void SetupComponent(BrnGui::RoadRuleShotComponent::EPlayerState, bool, const char *, CgsID, bool);

	private:
		// BrnRoadRuleShotComponent.cpp:23
		extern const char *[2] KAPC_COMPONENT_STATE_FRAME_NAMES;

		// BrnRoadRuleShotComponent.cpp:29
		extern const char[21] KAC_TEMPLATE_ON_ROAD_STRING_ID;

		// BrnRoadRuleShotComponent.cpp:31
		extern const char[12] KAC_GAMERTAG_TEXTFIELD_MOVIECLIP_NAME;

		// BrnRoadRuleShotComponent.cpp:32
		extern const char[12] KAC_ROAD_NAME_TEXTFIELD_MOVIECLIP_NAME;

		// BrnRoadRuleShotComponent.cpp:33
		extern const char[12] KAC_RULE_STATE_TEXTFIELD_MOVIECLIP_NAME;

		// BrnRoadRuleShotComponent.cpp:35
		extern const char[13] KAC_GAMERTAG_TEXTFIELD_NAME;

		// BrnRoadRuleShotComponent.cpp:36
		extern const char[13] KAC_ROAD_NAME_TEXTFIELD_NAME;

		// BrnRoadRuleShotComponent.cpp:37
		extern const char[13] KAC_RULE_STATE_TEXTFIELD_NAME;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct RoadRuleShotComponent {
	private:
		// BrnRoadRuleShotComponent.h:126
		extern char[] KAC_TEMPLATE_ON_ROAD_STRING_ID;

		// BrnRoadRuleShotComponent.h:128
		extern char[] KAC_GAMERTAG_TEXTFIELD_MOVIECLIP_NAME;

		// BrnRoadRuleShotComponent.h:129
		extern char[] KAC_ROAD_NAME_TEXTFIELD_MOVIECLIP_NAME;

		// BrnRoadRuleShotComponent.h:130
		extern char[] KAC_RULE_STATE_TEXTFIELD_MOVIECLIP_NAME;

		// BrnRoadRuleShotComponent.h:132
		extern char[] KAC_GAMERTAG_TEXTFIELD_NAME;

		// BrnRoadRuleShotComponent.h:133
		extern char[] KAC_ROAD_NAME_TEXTFIELD_NAME;

		// BrnRoadRuleShotComponent.h:134
		extern char[] KAC_RULE_STATE_TEXTFIELD_NAME;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct RoadRuleShotComponent {
		// BrnRoadRuleShotComponent.h:59
		enum EPlayerState {
			E_PLAYER_STATE_RACING = 0,
			E_PLAYER_STATE_CRASHING = 1,
			E_PLAYER_STATE_COUNT = 2,
		}

		// BrnRoadRuleShotComponent.h:112
		enum EComponentState {
			E_COMPONENT_STATE_INVALID = -1,
			E_COMPONENT_STATE_NEW_RULER = 0,
			E_COMPONENT_STATE_OLD_LOSER = 1,
			E_COMPONENT_STATE_COUNT = 2,
		}

	}

}

// BrnRoadRuleShotComponent.h:55
struct BrnGui::RoadRuleShotComponent : public BrnGui::FlaptIconComponent {
private:
	// BrnRoadRuleShotComponent.h:122
	extern const char *[] KAPC_COMPONENT_STATE_FRAME_NAMES;

	// BrnRoadRuleShotComponent.h:123
	const char * mpcComponentState;

	// BrnRoadRuleShotComponent.h:124
	BrnGui::RoadRuleShotComponent::EComponentState meComponentState;

	// BrnRoadRuleShotComponent.h:126
	extern char[] KAC_TEMPLATE_ON_ROAD_STRING_ID;

	// BrnRoadRuleShotComponent.h:128
	extern char[] KAC_GAMERTAG_TEXTFIELD_MOVIECLIP_NAME;

	// BrnRoadRuleShotComponent.h:129
	extern char[] KAC_ROAD_NAME_TEXTFIELD_MOVIECLIP_NAME;

	// BrnRoadRuleShotComponent.h:130
	extern char[] KAC_RULE_STATE_TEXTFIELD_MOVIECLIP_NAME;

	// BrnRoadRuleShotComponent.h:132
	extern char[] KAC_GAMERTAG_TEXTFIELD_NAME;

	// BrnRoadRuleShotComponent.h:133
	extern char[] KAC_ROAD_NAME_TEXTFIELD_NAME;

	// BrnRoadRuleShotComponent.h:134
	extern char[] KAC_RULE_STATE_TEXTFIELD_NAME;

	// BrnRoadRuleShotComponent.h:144
	MovieClipRef mAnimationMovieClip;

	// BrnRoadRuleShotComponent.h:146
	TextFieldRef mGamertagTextfield;

	// BrnRoadRuleShotComponent.h:147
	TextFieldRef mRoadNameTextfield;

	// BrnRoadRuleShotComponent.h:148
	TextFieldRef mRuleStateTextfield;

public:
	void RoadRuleShotComponent(const RoadRuleShotComponent &);

	void RoadRuleShotComponent();

	// BrnRoadRuleShotComponent.h:72
	void Construct(const char *, StateInterface *, const char *);

	// BrnRoadRuleShotComponent.h:78
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnRoadRuleShotComponent.h:84
	void HandleLoadNotifications(const char *);

	// BrnRoadRuleShotComponent.h:93
	void SetupComponent(BrnGui::RoadRuleShotComponent::EPlayerState, bool, const char *, CgsID, bool);

	// BrnRoadRuleShotComponent.h:98
	void Show(bool);

	// BrnRoadRuleShotComponent.h:103
	void Snap(bool);

	// BrnRoadRuleShotComponent.h:107
	void Hide();

}

// BrnRoadRuleShotComponent.h:55
void BrnGui::RoadRuleShotComponent::RoadRuleShotComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

