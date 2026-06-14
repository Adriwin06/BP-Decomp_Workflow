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

