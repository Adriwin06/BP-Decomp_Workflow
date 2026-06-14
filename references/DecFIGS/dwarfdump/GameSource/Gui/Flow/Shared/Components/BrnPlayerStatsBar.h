// BrnPlayerStatsBar.h:76
extern const int32_t KI_MAX_BAR_LENGTH = 10;

// BrnPlayerStatsBar.h:78
extern char[] KAC_CAR_BAR_NAME;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct PlayerStatsBar {
	public:
		// BrnPlayerStatsBar.h:99
		void SetCar(int32_t, uint32_t);

	private:
		// BrnPlayerStatsBar.h:76
		extern const int32_t KI_MAX_BAR_LENGTH = 10;

		// BrnPlayerStatsBar.h:78
		extern char[] KAC_CAR_BAR_NAME;

	}

}

// BrnPlayerStatsBar.h:45
struct BrnGui::PlayerStatsBar : public CgsGui::GuiComponent {
private:
	// BrnPlayerStatsBar.h:76
	extern const int32_t KI_MAX_BAR_LENGTH = 10;

	// BrnPlayerStatsBar.cpp:21
	extern const char[10] KAC_CAR_BAR_NAME;

	// BrnPlayerStatsBar.h:80
	BrnGui::ComplexBar mCarBar;

	// BrnPlayerStatsBar.h:82
	int32_t miCarValue;

public:
	// BrnPlayerStatsBar.cpp:44
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnPlayerStatsBar.cpp:63
	void Reset(int32_t, int32_t);

	// BrnPlayerStatsBar.h:99
	void SetCar(int32_t, uint32_t);

	// BrnPlayerStatsBar.cpp:81
	bool HandleTransitionComplete(const char *, int32_t);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct PlayerStatsBar {
	public:
		PlayerStatsBar();

	private:
		// BrnPlayerStatsBar.h:76
		extern const int32_t KI_MAX_BAR_LENGTH = 10;

		// BrnPlayerStatsBar.h:78
		extern char[] KAC_CAR_BAR_NAME;

	}

}

// BrnPlayerStatsBar.h:45
void BrnGui::PlayerStatsBar::PlayerStatsBar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

