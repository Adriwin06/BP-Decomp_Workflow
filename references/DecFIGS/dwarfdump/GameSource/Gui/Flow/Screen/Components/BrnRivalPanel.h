// BrnRivalPanel.h:113
extern const int32_t KI_NUM_TEXTFIELDS = 5;

// BrnRivalPanel.h:114
extern const int32_t KI_NUM_PROGRESS_BARS = 3;

// BrnRivalPanel.h:120
extern const char *[] maIconIdentifiers;

// BrnRivalPanel.h:49
struct BrnGui::RivalPanelData {
	// BrnRivalPanel.h:55
	CgsID mId;

	// BrnRivalPanel.h:56
	CgsID mCarId;

	// BrnRivalPanel.h:57
	BrnWorld::ECounty meCountyIndex;

	// BrnRivalPanel.h:58
	int32_t miRaceWins;

	// BrnRivalPanel.h:59
	int8_t miProgressStatus;

public:
	// BrnRivalPanel.h:53
	void Clear();

}

// BrnRivalPanel.h:80
struct BrnGui::RivalPanel : public CgsGui::GuiComponent {
private:
	// BrnRivalPanel.h:113
	extern const int32_t KI_NUM_TEXTFIELDS = 5;

	// BrnRivalPanel.h:114
	extern const int32_t KI_NUM_PROGRESS_BARS = 3;

	// BrnRivalPanel.cpp:26
	extern const char *[5] KAC_TEXTFIELD_NAMES;

	// BrnRivalPanel.cpp:35
	extern const char *[3] KAC_PROGRESS_BAR_NAMES;

	// BrnRivalPanel.cpp:42
	extern const char * KAC_ICON_NAME;

	// BrnRivalPanel.cpp:44
	extern const const char *[1] maIconIdentifiers;

	// BrnRivalPanel.h:122
	BrnGui::TextField[5] maPanelTextfields;

	// BrnRivalPanel.h:123
	BrnGui::ProgressBar[3] maPanelProgressBars;

	// BrnRivalPanel.h:124
	BrnGui::IconComponent mPanelIcon;

	// BrnRivalPanel.h:126
	bool mbComponentIsActive;

	// BrnRivalPanel.h:127
	bool mbRivalDataIsValid;

	// BrnRivalPanel.h:129
	RivalPanelData mCurrentRivalData;

public:
	// BrnRivalPanel.cpp:69
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnRivalPanel.cpp:106
	void SetPanelData(const RivalPanelData &);

	// BrnRivalPanel.cpp:127
	void SetupComponent();

private:
	// BrnRivalPanel.cpp:144
	void SetAptData();

}

