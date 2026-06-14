// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct DangerousDrivingDisplay {
		// BrnDangerousDrivingDisplay.h:48
		enum DisplayType {
			E_DISPLAY_CAR = 0,
			E_DISPLAY_PLAYER = 1,
			E_DISPLAY_TOTAL = 2,
			E_BOXES_MAX = 3,
		}

	}

}

// BrnDangerousDrivingDisplay.h:45
struct BrnGui::DangerousDrivingDisplay : public CgsGui::GuiComponent {
private:
	// BrnDangerousDrivingDisplay.h:77
	extern const int32_t KI_NUM_ROWS = 5;

	// BrnDangerousDrivingDisplay.cpp:23
	extern const char *[3] mpacBoxNames;

	// BrnDangerousDrivingDisplay.cpp:30
	extern const char *[3] mpacBoxTitles;

	// BrnDangerousDrivingDisplay.cpp:37
	extern const char *[5] mpacRowNames;

	// BrnDangerousDrivingDisplay.cpp:46
	extern const char *[5] mpacRowIdents;

	// BrnDangerousDrivingDisplay.h:88
	BrnGui::TextField[5] mRowNames;

	// BrnDangerousDrivingDisplay.h:90
	BrnGui::DangerousDrivingBox[3] maBoxDisplays;

public:
	// BrnDangerousDrivingDisplay.cpp:72
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnDangerousDrivingDisplay.cpp:97
	void SetupComponent();

	// BrnDangerousDrivingDisplay.cpp:125
	void SetDisplay(BrnGui::DangerousDrivingDisplay::DisplayType, BrnGui::DangerousDrivingBox::DangerousDrivingValues *, bool);

private:
	// BrnDangerousDrivingDisplay.cpp:146
	void UpdateTotal();

}

// BrnDangerousDrivingDisplay.h:77
extern const int32_t KI_NUM_ROWS = 5;

