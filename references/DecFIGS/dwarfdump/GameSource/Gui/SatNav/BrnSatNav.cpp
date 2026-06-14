// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct SatNavComponent {
		// BrnSatNav.h:99
		enum ESatNavMode {
			E_SAT_NAV_MODE_TRACK_PLAYER = 0,
			E_SAT_NAV_MODE_FREE_ROAMING = 1,
			E_SAT_NAV_MODE_COUNT = 2,
		}

	public:
		// BrnSatNav.cpp:161
		// Declaration
		void Destruct() {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnSatNav.cpp:165
			using namespace CgsDev::Message;

		}

		// BrnSatNav.cpp:217
		// Declaration
		void Update() {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnSatNav.cpp:235
			using namespace CgsDev::Message;

		}

		// BrnSatNav.cpp:668
		// Declaration
		float32_t GetViewDistance(float32_t) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnSatNav.cpp:670
			using namespace rw::math;

		}

	private:
		// BrnSatNav.cpp:329
		void UpdateTrackPlayer();

	public:
		// BrnSatNav.cpp:620
		void StartRoaming(float32_t);

		// BrnSatNav.cpp:644
		void AppendExpectedComponentList(uint32_t *, uint32_t *, uint32_t);

		// BrnSatNav.cpp:782
		void SetIconVisibility(bool);

		// BrnSatNav.cpp:801
		void SetEventType(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnSatNav.cpp:696
		void GetZoomedCarWorldRect(Vector3 *, Vector3, float32_t, float32_t, bool, bool);

		// BrnSatNav.h:303
		void ClearIconInfo();

		// BrnSatNav.cpp:62
		void Construct(StateInterface *, const char *, BrnGui::SatNavComponent::ESatNavMode);

	private:
		// BrnSatNav.cpp:180
		void SetViewParamsFromPlayerCar(const GuiPlayerInfo *);

		// BrnSatNav.cpp:350
		void UpdateFreeRoaming();

	public:
		// BrnSatNav.cpp:456
		void RecvEvent(const CgsModule::Event *, int32_t);

		// BrnSatNav.cpp:540
		void LoadResources();

		// BrnSatNav.cpp:574
		void SetRoamingRouteInfo(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *, const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

		// Unknown accessibility
		// BrnSatNav.cpp:36
		extern float32_t KF_CAR_MAX_MPH;

		// Unknown accessibility
		// BrnSatNav.cpp:37
		extern float32_t KF_MIN_VIEW_DIST;

		// Unknown accessibility
		// BrnSatNav.cpp:38
		extern float32_t KF_MAX_VIEW_DIST;

		// Unknown accessibility
		// BrnSatNav.cpp:39
		extern float32_t KF_MIN_VIEW_LERP;

		// Unknown accessibility
		// BrnSatNav.cpp:40
		extern float32_t KF_MAX_VIEW_LERP;

	private:
		// BrnSatNav.h:240
		extern const int32_t KI_MAX_PARENT_NAME_LENGTH = 112;

		// BrnSatNav.h:241
		extern const int32_t KI_SATNAV_NUMBEROFICONS = 16;

		// BrnSatNav.cpp:31
		extern uint32_t[16] mauHashedSatNavIconNames;

		// BrnSatNav.cpp:32
		extern const char[11] macSatNavIconBaseName;

		// BrnSatNav.cpp:33
		extern const char[10] macNorthIndicatorName;

		// BrnSatNav.cpp:34
		extern const char[10] macStatic;

	}

}

