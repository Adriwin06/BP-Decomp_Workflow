// BrnRivalMapPanel.h:124
extern char[] KAC_CAR_ICON_NAME;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct RivalMapPanel {
		// BrnRivalMapPanel.h:51
		enum ERivalType {
			E_RIVAL_TYPE_OFFLINE_PLAYER = 0,
			E_RIVAL_TYPE_OFFLINE_RIVAL = 1,
			E_RIVAL_TYPE_ONLINE_PLAYER = 2,
			E_RIVAL_TYPE_ONLINE_RIVAL = 3,
			E_RIVAL_TYPE_COUNT = 4,
		}

	}

}

// BrnRivalMapPanel.h:48
struct BrnGui::RivalMapPanel : public BrnGui::IconComponent {
private:
	// BrnRivalMapPanel.cpp:26
	extern const char *[4] KAPC_TEXTFIELD_NAMES;

	// BrnRivalMapPanel.cpp:34
	extern const char[17] KAC_CAR_ICON_NAME;

	// BrnRivalMapPanel.h:126
	BrnGui::TextField[4] mTextfields;

	// BrnRivalMapPanel.h:127
	BrnGui::IconComponent mCarImageIcon;

	// BrnRivalMapPanel.h:129
	PlayerName mPlayerName;

	// BrnRivalMapPanel.h:131
	BrnGui::RivalMapPanel::ERivalType meCurrentRivalType;

	// BrnRivalMapPanel.h:132
	CgsID mRivalID;

	// BrnRivalMapPanel.h:133
	CgsID mOnlineRivalID;

	// BrnRivalMapPanel.h:135
	GuiEventStatsResponse mPlayerStats;

	// BrnRivalMapPanel.h:136
	bool mPlayerStatsReceived;

	// BrnRivalMapPanel.h:138
	bool mbActive;

public:
	// BrnRivalMapPanel.cpp:48
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnRivalMapPanel.cpp:89
	void AppendExpectedAptComponents(BrnGui::GuiFlow, BrnGui::GuiCache *);

	// BrnRivalMapPanel.cpp:115
	void SetPlayerData(BrnGui::GuiCache *);

	// BrnRivalMapPanel.cpp:168
	void SetRivalData(CgsID);

	// BrnRivalMapPanel.cpp:240
	void SetRivalData(const PlayerName *, CgsID, BrnGui::GuiCache *);

	// BrnRivalMapPanel.cpp:323
	void TransitionIn(BrnGui::RivalMapPanel::ERivalType);

	// BrnRivalMapPanel.cpp:355
	void TransitionOut();

	// BrnRivalMapPanel.h:151
	void StorePlayerInfo(const GuiEventStatsResponse *);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct RivalMapPanel {
	public:
		RivalMapPanel();

	private:
		// BrnRivalMapPanel.h:124
		extern char[] KAC_CAR_ICON_NAME;

	}

}

// BrnRivalMapPanel.h:48
void BrnGui::RivalMapPanel::RivalMapPanel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

