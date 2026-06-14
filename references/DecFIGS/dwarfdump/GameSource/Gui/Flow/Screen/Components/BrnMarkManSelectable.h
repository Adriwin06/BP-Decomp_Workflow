// BrnMarkManSelectable.h:117
extern char[] KAC_GAMERTAG_TEXTFIELD_NAME;

// BrnMarkManSelectable.h:120
extern char[] KAC_MARKMAN_TOP_ICON_NAME;

// BrnMarkManSelectable.h:123
extern char[] KAC_MARKMAN_BOTTOM_ICON_NAME;

// BrnMarkManSelectable.h:126
extern char[] KAC_MARK_COUNT_BAR_NAME;

// BrnMarkManSelectable.h:129
extern char[] KAC_VOIP_ICON_NAME;

// BrnMarkManSelectable.h:44
struct BrnGui::MarkManSelectable : public CgsGui::GuiComponent {
private:
	// BrnMarkManSelectable.cpp:22
	extern const char[12] KAC_GAMERTAG_TEXTFIELD_NAME;

	// BrnMarkManSelectable.h:118
	BrnGui::TextField mGamertag;

	// BrnMarkManSelectable.cpp:23
	extern const char[14] KAC_MARKMAN_TOP_ICON_NAME;

	// BrnMarkManSelectable.h:121
	BrnGui::IconComponent mMarkManTopIcon;

	// BrnMarkManSelectable.cpp:24
	extern const char[17] KAC_MARKMAN_BOTTOM_ICON_NAME;

	// BrnMarkManSelectable.h:124
	BrnGui::IconComponent mMarkManBottomIcon;

	// BrnMarkManSelectable.cpp:25
	extern const char[13] KAC_MARK_COUNT_BAR_NAME;

	// BrnMarkManSelectable.h:127
	BrnGui::ComplexBar mMarkCountBar;

	// BrnMarkManSelectable.cpp:26
	extern const char[8] KAC_VOIP_ICON_NAME;

	// BrnMarkManSelectable.h:130
	BrnGui::IconComponent mVoIPIcon;

	// BrnMarkManSelectable.h:132
	EActiveRaceCarIndex meSlotActiveRaceCarIndex;

	// BrnMarkManSelectable.h:133
	GuiEventNetworkLaunching::NetworkPlayerID mNetworkId;

	// BrnMarkManSelectable.h:134
	bool mbIsMarked;

	// BrnMarkManSelectable.h:135
	int32_t miMarkCount;

	// BrnMarkManSelectable.h:136
	bool mbVoIPOn;

public:
	// BrnMarkManSelectable.cpp:50
	void Construct(const char *, StateInterface *, const char *, uint64_t);

	// BrnMarkManSelectable.cpp:78
	virtual void Select();

	// BrnMarkManSelectable.cpp:93
	virtual void Update();

	// BrnMarkManSelectable.cpp:128
	bool HandleLoadNotification(const char *);

	// BrnMarkManSelectable.cpp:161
	bool HandleTransitionComplete(const char *, int32_t);

	// BrnMarkManSelectable.h:153
	void SetGamertag(const char *);

	// BrnMarkManSelectable.h:170
	void SetIds(EActiveRaceCarIndex, GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnMarkManSelectable.cpp:182
	void Mark();

	// BrnMarkManSelectable.cpp:215
	void UnMark();

	// BrnMarkManSelectable.h:186
	bool IsMarked() const;

	// BrnMarkManSelectable.h:201
	GuiEventNetworkLaunching::NetworkPlayerID GetNetworkId() const;

	// BrnMarkManSelectable.h:216
	EActiveRaceCarIndex GetActiveRaceCarIndex() const;

	// BrnMarkManSelectable.cpp:237
	void SetMarkCount(int32_t);

	// BrnMarkManSelectable.cpp:257
	void SetVoIP(bool);

}

