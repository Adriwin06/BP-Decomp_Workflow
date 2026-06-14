// BrnNorthIndicator.h:72
extern char[] macAngleVar;

// BrnNorthIndicator.h:73
extern char[] macStyleVar;

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

// BrnNorthIndicator.h:44
struct BrnGui::NorthIndicatorComponent : public CgsGui::GuiComponent {
private:
	// BrnNorthIndicator.h:72
	extern char[] macAngleVar;

	// BrnNorthIndicator.h:73
	extern char[] macStyleVar;

	// BrnNorthIndicator.h:74
	extern const char *[7] mpacStyleAptStrings;

public:
	void NorthIndicatorComponent(const NorthIndicatorComponent &);

	void NorthIndicatorComponent();

	// BrnNorthIndicator.h:64
	void Update(float32_t);

	// BrnNorthIndicator.h:68
	void SetEventType(BrnGameState::GameStateModuleIO::EGameModeType);

}

// BrnNorthIndicator.h:44
void BrnGui::NorthIndicatorComponent::NorthIndicatorComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

