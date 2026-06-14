// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct GuiNetworkRouteInfo {
		// BrnGuiNetworkRouteInfo.h:59
		enum EState {
			E_STATE_VISIBLE = 0,
			E_STATE_INVISIBLE = 1,
			E_STATE_COUNT = 2,
		}

		// BrnGuiNetworkRouteInfo.h:116
		enum EOptionComponent {
			E_OPTION_COMPONENT_GAMEMODE = 0,
			E_OPTION_COMPONENT_TRAFFIC = 1,
			E_OPTION_COMPONENT_VEHICLE_CLASS = 2,
			E_OPTION_COMPONENT_INFINITE_BOOST = 3,
			E_OPTION_COMPONENT_NUM_ROUNDS = 4,
			E_OPTION_COMPONENT_TRAFFIC_CHECKING = 5,
			E_OPTION_COMPONENT_BOOST_TYPE = 6,
			E_OPTION_COMPONENT_CRASH_LIMIT = 7,
			E_OPTION_COMPONENT_TIME_LIMIT = 8,
			E_OPTION_COMPONENT_COUNT = 9,
		}

	public:
		// BrnGuiNetworkRouteInfo.cpp:333
		// Declaration
		void Destruct() {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiNetworkRouteInfo.cpp:342
			using namespace CgsDev::Message;

		}

	private:
		// BrnGuiNetworkRouteInfo.cpp:667
		// Declaration
		void SetupMap() {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnGuiNetworkRouteInfo.cpp:672
			using namespace CgsDev::Message;

		}

	public:
		// BrnGuiNetworkRouteInfo.cpp:434
		void SetState(BrnGui::GuiNetworkRouteInfo::EState);

	private:
		// BrnGuiNetworkRouteInfo.cpp:845
		void SetOptionText(BrnGui::GuiNetworkRouteInfo::EOptionComponent, const int32_t *, const char *);

	public:
		// BrnGuiNetworkRouteInfo.cpp:644
		void AppendExpectedAptComponent(BrnGui::GuiFlow, BrnGui::GuiCache *);

	private:
		// BrnGuiNetworkRouteInfo.cpp:702
		void UpdateIconManager();

		// BrnGuiNetworkRouteInfo.cpp:806
		void ShowAppropiateOptions(const int32_t *);

		// BrnGuiNetworkRouteInfo.cpp:780
		void SetActiveLandmarks();

		// BrnGuiNetworkRouteInfo.cpp:724
		float32_t CalculateZoomFactor();

		// BrnGuiNetworkRouteInfo.cpp:411
		void HandleGuiCacheEvent(const GuiEventCache *);

	public:
		// BrnGuiNetworkRouteInfo.h:249
		bool IsComponentLoaded() const;

		// BrnGuiNetworkRouteInfo.cpp:356
		void Update(InputBuffer::GuiEventQueue *);

		// BrnGuiNetworkRouteInfo.cpp:469
		void SetInfo(int32_t, const BrnGui::GuiEventNetworkGameParams *);

		// BrnGuiNetworkRouteInfo.cpp:277
		void Construct(const char *, BrnGui::GuiEventRenderMainMap::EMapType, StateInterface *, const char *);

	private:
		// BrnGuiNetworkRouteInfo.cpp:91
		extern const int32_t[9] KAI_RACE_OPTION_TO_COMPONENT_MAPPING;

		// BrnGuiNetworkRouteInfo.cpp:104
		extern const int32_t[9] KAI_ROAD_RAGE_OPTION_TO_COMPONENT_MAPPING;

		// BrnGuiNetworkRouteInfo.cpp:117
		extern const int32_t[9] KAI_BHR_OPTION_TO_COMPONENT_MAPPING;

		// BrnGuiNetworkRouteInfo.cpp:220
		extern const int32_t KI_NUM_COMPONENTS_TO_LOAD = 11;

		// BrnGuiNetworkRouteInfo.cpp:25
		extern const char *[9] KPAC_OPTIONS_ANIMATOR_COMPONENT;

		// BrnGuiNetworkRouteInfo.cpp:38
		extern const char *[9] KPAC_HEADING_COMPONENT;

		// BrnGuiNetworkRouteInfo.cpp:51
		extern const char *[9] KPAC_VALUE_COMPONENT;

		// BrnGuiNetworkRouteInfo.cpp:130
		extern const char[10] KAC_APT_STATE;

		// BrnGuiNetworkRouteInfo.cpp:208
		extern const char *[2] KPAC_STATE_ID;

		// BrnGuiNetworkRouteInfo.cpp:214
		extern const char *[2] KPAC_OPTION_STATE_ID;

		// BrnGuiNetworkRouteInfo.cpp:132
		extern const char[12] KAC_NUM_ROUNDS_STRING_ID;

		// BrnGuiNetworkRouteInfo.cpp:133
		extern const char[27] KAC_NUM_ROUNDS_FORMAT_STRING_ID;

		// BrnGuiNetworkRouteInfo.cpp:134
		extern const char[30] KAC_NUM_ROUNDS_RR_FORMAT_STRING_ID;

		// BrnGuiNetworkRouteInfo.cpp:136
		extern const char *[9] KPAC_HEADING_STRING_IDS;

		// BrnGuiNetworkRouteInfo.cpp:149
		extern const char *[10] KPAC_VEHICLE_CLASS_STRING_IDS;

		// BrnGuiNetworkRouteInfo.cpp:163
		extern const char *[2] KPAC_RED_TEAM_INFINITE_BOOST_STRING_IDS;

		// BrnGuiNetworkRouteInfo.cpp:169
		extern const char *[2] KPAC_TRAFFIC_STRING_IDS;

		// BrnGuiNetworkRouteInfo.cpp:175
		extern const char *[2] KPAC_TRAFFIC_CHECKING_STRING_IDS;

		// BrnGuiNetworkRouteInfo.cpp:181
		extern const char *[6] KPAC_BOOST_TYPE_STRING_IDS;

		// BrnGuiNetworkRouteInfo.cpp:191
		extern const char *[6] KPAC_CRASH_LIMIT_STRING_IDS;

		// BrnGuiNetworkRouteInfo.cpp:201
		extern const char *[3] KPAC_TIME_LIMIT_STRING_IDS;

		// BrnGuiNetworkRouteInfo.cpp:226
		extern const rw::math::vpu::Vector2 K_MAP_DISPLAY_RECT;

		// BrnGuiNetworkRouteInfo.cpp:223
		extern const char[11] macSatNavIconBaseName;

		// BrnGuiNetworkRouteInfo.h:181
		extern const int32_t KAC_ONLINEROUTEMAP_NUMICONS = 50;

		// BrnGuiNetworkRouteInfo.cpp:222
		extern const char[11] macCrashNavBoroughName;

	}

	// BrnGuiNetworkRouteInfo.cpp:244
	const GameModeToString[7] KA_GAMEMODE_TO_STRING;

	// BrnGuiNetworkRouteInfo.cpp:254
	const int32_t KI_NUM_GAME_MODES = 7;

}

// BrnGuiNetworkRouteInfo.cpp:237
struct BrnGui::GameModeToString {
	// BrnGuiNetworkRouteInfo.cpp:240
	BrnGameState::GameStateModuleIO::EGameModeType meGameMode;

	// BrnGuiNetworkRouteInfo.cpp:241
	const char * mpcStringID;

}

