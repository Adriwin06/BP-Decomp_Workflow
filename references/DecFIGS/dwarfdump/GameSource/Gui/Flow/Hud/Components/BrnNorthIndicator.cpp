// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct NorthIndicatorComponent {
		// BrnNorthIndicator.h:47
		enum E_STYLES {
			E_STYLE_RACE = 0,
			E_STYLE_ROADRAGE = 1,
			E_STYLE_TRAFFICATTACK = 2,
			E_STYLE_PURSUIT = 3,
			E_STYLE_ELIMINATOR = 4,
			E_STYLE_BURNINGROUTE = 5,
			E_STYLE_SHOWTIME = 6,
			E_STYLE_COUNT = 7,
		}

	public:
		// BrnNorthIndicator.cpp:56
		void Update(float32_t);

		// BrnNorthIndicator.cpp:81
		void SetEventType(BrnGameState::GameStateModuleIO::EGameModeType);

	private:
		// BrnNorthIndicator.cpp:24
		extern const char[10] macAngleVar;

		// BrnNorthIndicator.cpp:25
		extern const char[7] macStyleVar;

		// BrnNorthIndicator.cpp:27
		extern const char *[7] mpacStyleAptStrings;

	}

}

