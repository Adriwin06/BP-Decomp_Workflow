// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CrashNavPanel {
		// BrnCrashNavPanel.h:69
		enum PanelType {
			E_PANEL_EVENT = 0,
			E_PANEL_DRIVETHRU = 1,
			E_PANEL_ROADSIGN = 2,
			E_PANEL_RIVALS = 3,
			E_PANEL_SELECTABLE_COUNT = 4,
			E_PANEL_GENERIC = 4,
			E_PANEL_COUNT = 5,
		}

	}

}

// BrnCrashNavPanel.h:224
extern char[] KAC_OPTION_NAME;

// BrnCrashNavPanel.h:225
extern char[] KAC_EVENT_INFO_PANEL_NAME;

// BrnCrashNavPanel.h:226
extern char[] KAC_DRIVETHRU_PANEL_NAME;

// BrnCrashNavPanel.h:227
extern char[] KAC_ROAD_RULE_PANEL_NAME;

// BrnCrashNavPanel.h:228
extern char[] KAC_RIVAL_PANEL_NAME;

// BrnCrashNavPanel.h:229
extern char[] KAC_GENERIC_PANEL_NAME;

// BrnCrashNavPanel.h:230
extern char[] KAC_GENERIC_PANEL_TEXT_1_NAME;

// BrnCrashNavPanel.h:231
extern char[] KAC_GENERIC_PANEL_TEXT_2_NAME;

// BrnCrashNavPanel.h:235
extern char[] macAnimationVarName;

// BrnCrashNavPanel.h:256
extern const BrnGui::CrashNavPanel::PanelType K_DEFAULT_PANELTYPE;

// BrnCrashNavPanel.h:257
extern const BrnGui::CrashNavPanel::PanelType K_DEFAULT_PANELTYPE_ONLINE;

// BrnCrashNavPanel.h:258
extern const BrnGui::EventPanel::EEventType K_DEFAULT_EVENTMODE;

// BrnCrashNavPanel.h:259
extern const BrnStreetData::ScoreType K_DEFAULT_RR_SCORETYPE;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavPanel {
		// BrnCrashNavPanel.h:69
		enum PanelType {
			E_PANEL_EVENT = 0,
			E_PANEL_DRIVETHRU = 1,
			E_PANEL_ROADSIGN = 2,
			E_PANEL_RIVALS = 3,
			E_PANEL_SELECTABLE_COUNT = 4,
			E_PANEL_GENERIC = 4,
			E_PANEL_COUNT = 5,
		}

		// BrnCrashNavPanel.h:83
		enum AnimState {
			E_ANIMSTATE_INVISIBLE = 0,
			E_ANIMSTATE_TRANS_IN = 1,
			E_ANIMSTATE_IDLE = 2,
			E_ANIMSTATE_TRANS_OUT = 3,
			E_ANIMSTATE_COUNT = 4,
		}

		// BrnCrashNavPanel.h:103
		enum EPrepareStage {
			E_PREPARESTAGE_CONSTRUCTED = 0,
			E_PREPARESTAGE_DONE = 1,
			E_PREPARESTAGE_COUNT = 2,
		}

	}

}

// BrnCrashNavPanel.h:66
struct BrnGui::CrashNavPanel : public CgsGui::GuiComponent {
private:
	// BrnCrashNavPanel.cpp:25
	extern const char *[3] KAPC_OPTION_HEADINGS;

	// BrnCrashNavPanel.cpp:33
	extern const char *[4] KAPC_TOP_LEVEL_OPTION_LABELS;

	// BrnCrashNavPanel.cpp:41
	extern const char[13] KAC_OPTION_NAME;

	// BrnCrashNavPanel.cpp:42
	extern const char[14] KAC_EVENT_INFO_PANEL_NAME;

	// BrnCrashNavPanel.cpp:43
	extern const char[18] KAC_DRIVETHRU_PANEL_NAME;

	// BrnCrashNavPanel.cpp:44
	extern const char[13] KAC_ROAD_RULE_PANEL_NAME;

	// BrnCrashNavPanel.cpp:45
	extern const char[14] KAC_RIVAL_PANEL_NAME;

	// BrnCrashNavPanel.cpp:46
	extern const char[16] KAC_GENERIC_PANEL_NAME;

	// BrnCrashNavPanel.cpp:47
	extern const char[9] KAC_GENERIC_PANEL_TEXT_1_NAME;

	// BrnCrashNavPanel.cpp:48
	extern const char[9] KAC_GENERIC_PANEL_TEXT_2_NAME;

	// BrnCrashNavPanel.cpp:50
	extern const char *[4] mpacAnimationStrings;

	// BrnCrashNavPanel.cpp:58
	extern const char[10] macAnimationVarName;

	// BrnCrashNavPanel.h:237
	BrnGui::CrashNavPanel::EPrepareStage mePrepareStage;

	// BrnCrashNavPanel.h:239
	BrnGui::CrashNavPanel::PanelType mePanelType;

	// BrnCrashNavPanel.h:240
	BrnGui::CrashNavPanel::PanelType meVisiblePanel;

	// BrnCrashNavPanel.h:242
	BrnGui::GuiCache * mpGuiCache;

	// BrnCrashNavPanel.h:244
	BrnGui::MenuToggleGroup mFilterToggles;

	// BrnCrashNavPanel.h:246
	BrnGui::EventPanel mEventPanel;

	// BrnCrashNavPanel.h:247
	BrnGui::DriveThruMapPanel mDrivethruPanel;

	// BrnCrashNavPanel.h:248
	BrnGui::RoadPanel mRoadPanel;

	// BrnCrashNavPanel.h:249
	BrnGui::RivalMapPanel mRivalPanel;

	// BrnCrashNavPanel.h:251
	BrnGui::IconComponent mGenericPanel;

	// BrnCrashNavPanel.h:252
	BrnGui::TextField mGenericPanelText1;

	// BrnCrashNavPanel.h:253
	BrnGui::TextField mGenericPanelText2;

	// BrnCrashNavPanel.cpp:61
	extern const BrnGui::CrashNavPanel::PanelType K_DEFAULT_PANELTYPE;

	// BrnCrashNavPanel.cpp:62
	extern const BrnGui::CrashNavPanel::PanelType K_DEFAULT_PANELTYPE_ONLINE;

	// BrnCrashNavPanel.cpp:63
	extern const BrnGui::EventPanel::EEventType K_DEFAULT_EVENTMODE;

	// BrnCrashNavPanel.cpp:64
	extern const BrnStreetData::ScoreType K_DEFAULT_RR_SCORETYPE;

	// BrnCrashNavPanel.h:262
	BrnGui::CrashNavPanel::PanelType meSavedPanelType;

	// BrnCrashNavPanel.h:263
	BrnGui::EventPanel::EEventType meSavedEventMode;

	// BrnCrashNavPanel.h:264
	BrnStreetData::ScoreType meSavedRRScoreType;

public:
	// BrnCrashNavPanel.cpp:85
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnCrashNavPanel.cpp:248
	void AppendExpectedAptComponents(BrnGui::GuiFlow, BrnGui::GuiCache *);

	// BrnCrashNavPanel.cpp:268
	void SetupComponent();

	// BrnCrashNavPanel.cpp:370
	void Update();

	// BrnCrashNavPanel.cpp:385
	void ChangeVisiblePanelState(BrnGui::CrashNavPanel::PanelType, BrnGui::RivalMapPanel::ERivalType);

	// BrnCrashNavPanel.cpp:499
	void SetAnimState(BrnGui::CrashNavPanel::AnimState);

	// BrnCrashNavPanel.cpp:520
	bool RecEvent(const CgsModule::Event *, int32_t, int32_t);

	// BrnCrashNavPanel.cpp:614
	void ShowBlank();

	// BrnCrashNavPanel.cpp:634
	void SetEventPanelData(uint32_t, bool);

	// BrnCrashNavPanel.cpp:654
	void SetDrivethruPanelData(CgsID);

	// BrnCrashNavPanel.cpp:675
	void SetRoadPanelData(const char *, RoadPanelData &);

	// BrnCrashNavPanel.cpp:695
	bool ToggleRoadPanelScores();

	// BrnCrashNavPanel.cpp:721
	void SetRivalPanelData();

	// BrnCrashNavPanel.cpp:757
	void SetRivalPanelData(CgsID);

	// BrnCrashNavPanel.cpp:784
	void SetRivalPanelData(const PlayerName *, CgsID);

	// BrnCrashNavPanel.h:314
	BrnGui::CrashNavPanel::PanelType GetPanelActiveFilterMode();

	// BrnCrashNavPanel.h:329
	BrnProgression::RaceEventData::EModeType GetPanelActiveGameModeType();

	// BrnCrashNavPanel.h:346
	BrnStreetData::ScoreType GetPanelActiveRoadRuleType() const;

	// BrnCrashNavPanel.h:363
	BrnGui::GuiEventSetRoadRuleScoreMode::ERoadPanelModes GetRoadPanelScoreMode() const;

	// BrnCrashNavPanel.cpp:127
	void StoreSettings(bool);

	// BrnCrashNavPanel.cpp:1152
	bool IsRoadRuleFriendSelected() const;

	// BrnCrashNavPanel.cpp:1173
	const char * GetRoadRuleFriendSelectedName() const;

private:
	// BrnCrashNavPanel.cpp:804
	void HandleAptEvents(const GuiEventAptTrigger *);

	// BrnCrashNavPanel.cpp:846
	bool HandleControllerInput(const GuiEventControllerInputPressed *);

	// BrnCrashNavPanel.cpp:955
	void RefreshSecondLevelFilter(BrnGui::EventPanel::EEventType, BrnStreetData::ScoreType, bool);

	// BrnCrashNavPanel.cpp:1052
	void UpdateDataPanel();

	// BrnCrashNavPanel.cpp:188
	void RestoreSettings();

	// BrnCrashNavPanel.cpp:1101
	void TriggerSound(EGameInputActions);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavPanel {
		// BrnCrashNavPanel.h:69
		enum PanelType {
			E_PANEL_EVENT = 0,
			E_PANEL_DRIVETHRU = 1,
			E_PANEL_ROADSIGN = 2,
			E_PANEL_RIVALS = 3,
			E_PANEL_SELECTABLE_COUNT = 4,
			E_PANEL_GENERIC = 4,
			E_PANEL_COUNT = 5,
		}

	public:
		// BrnCrashNavPanel.h:314
		BrnGui::CrashNavPanel::PanelType GetPanelActiveFilterMode();

		// BrnCrashNavPanel.h:363
		BrnGui::GuiEventSetRoadRuleScoreMode::ERoadPanelModes GetRoadPanelScoreMode() const;

	private:
		// BrnCrashNavPanel.h:224
		extern char[] KAC_OPTION_NAME;

		// BrnCrashNavPanel.h:225
		extern char[] KAC_EVENT_INFO_PANEL_NAME;

		// BrnCrashNavPanel.h:226
		extern char[] KAC_DRIVETHRU_PANEL_NAME;

		// BrnCrashNavPanel.h:227
		extern char[] KAC_ROAD_RULE_PANEL_NAME;

		// BrnCrashNavPanel.h:228
		extern char[] KAC_RIVAL_PANEL_NAME;

		// BrnCrashNavPanel.h:229
		extern char[] KAC_GENERIC_PANEL_NAME;

		// BrnCrashNavPanel.h:230
		extern char[] KAC_GENERIC_PANEL_TEXT_1_NAME;

		// BrnCrashNavPanel.h:231
		extern char[] KAC_GENERIC_PANEL_TEXT_2_NAME;

		// BrnCrashNavPanel.h:235
		extern char[] macAnimationVarName;

		// BrnCrashNavPanel.h:256
		extern const BrnGui::CrashNavPanel::PanelType K_DEFAULT_PANELTYPE;

		// BrnCrashNavPanel.h:257
		extern const BrnGui::CrashNavPanel::PanelType K_DEFAULT_PANELTYPE_ONLINE;

		// BrnCrashNavPanel.h:258
		extern const BrnGui::EventPanel::EEventType K_DEFAULT_EVENTMODE;

		// BrnCrashNavPanel.h:259
		extern const BrnStreetData::ScoreType K_DEFAULT_RR_SCORETYPE;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CrashNavPanel {
		// BrnCrashNavPanel.h:69
		enum PanelType {
			E_PANEL_EVENT = 0,
			E_PANEL_DRIVETHRU = 1,
			E_PANEL_ROADSIGN = 2,
			E_PANEL_RIVALS = 3,
			E_PANEL_SELECTABLE_COUNT = 4,
			E_PANEL_GENERIC = 4,
			E_PANEL_COUNT = 5,
		}

	public:
		// BrnCrashNavPanel.h:314
		BrnGui::CrashNavPanel::PanelType GetPanelActiveFilterMode();

		// BrnCrashNavPanel.h:363
		BrnGui::GuiEventSetRoadRuleScoreMode::ERoadPanelModes GetRoadPanelScoreMode() const;

		// BrnCrashNavPanel.h:329
		BrnProgression::RaceEventData::EModeType GetPanelActiveGameModeType();

		// BrnCrashNavPanel.h:346
		BrnStreetData::ScoreType GetPanelActiveRoadRuleType() const;

	private:
		// BrnCrashNavPanel.h:224
		extern char[] KAC_OPTION_NAME;

		// BrnCrashNavPanel.h:225
		extern char[] KAC_EVENT_INFO_PANEL_NAME;

		// BrnCrashNavPanel.h:226
		extern char[] KAC_DRIVETHRU_PANEL_NAME;

		// BrnCrashNavPanel.h:227
		extern char[] KAC_ROAD_RULE_PANEL_NAME;

		// BrnCrashNavPanel.h:228
		extern char[] KAC_RIVAL_PANEL_NAME;

		// BrnCrashNavPanel.h:229
		extern char[] KAC_GENERIC_PANEL_NAME;

		// BrnCrashNavPanel.h:230
		extern char[] KAC_GENERIC_PANEL_TEXT_1_NAME;

		// BrnCrashNavPanel.h:231
		extern char[] KAC_GENERIC_PANEL_TEXT_2_NAME;

		// BrnCrashNavPanel.h:235
		extern char[] macAnimationVarName;

		// BrnCrashNavPanel.h:256
		extern const BrnGui::CrashNavPanel::PanelType K_DEFAULT_PANELTYPE;

		// BrnCrashNavPanel.h:257
		extern const BrnGui::CrashNavPanel::PanelType K_DEFAULT_PANELTYPE_ONLINE;

		// BrnCrashNavPanel.h:258
		extern const BrnGui::EventPanel::EEventType K_DEFAULT_EVENTMODE;

		// BrnCrashNavPanel.h:259
		extern const BrnStreetData::ScoreType K_DEFAULT_RR_SCORETYPE;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavPanel {
		// BrnCrashNavPanel.h:69
		enum PanelType {
			E_PANEL_EVENT = 0,
			E_PANEL_DRIVETHRU = 1,
			E_PANEL_ROADSIGN = 2,
			E_PANEL_RIVALS = 3,
			E_PANEL_SELECTABLE_COUNT = 4,
			E_PANEL_GENERIC = 4,
			E_PANEL_COUNT = 5,
		}

	public:
		CrashNavPanel();

	private:
		// BrnCrashNavPanel.h:224
		extern char[] KAC_OPTION_NAME;

		// BrnCrashNavPanel.h:225
		extern char[] KAC_EVENT_INFO_PANEL_NAME;

		// BrnCrashNavPanel.h:226
		extern char[] KAC_DRIVETHRU_PANEL_NAME;

		// BrnCrashNavPanel.h:227
		extern char[] KAC_ROAD_RULE_PANEL_NAME;

		// BrnCrashNavPanel.h:228
		extern char[] KAC_RIVAL_PANEL_NAME;

		// BrnCrashNavPanel.h:229
		extern char[] KAC_GENERIC_PANEL_NAME;

		// BrnCrashNavPanel.h:230
		extern char[] KAC_GENERIC_PANEL_TEXT_1_NAME;

		// BrnCrashNavPanel.h:231
		extern char[] KAC_GENERIC_PANEL_TEXT_2_NAME;

		// BrnCrashNavPanel.h:235
		extern char[] macAnimationVarName;

		// BrnCrashNavPanel.h:256
		extern const BrnGui::CrashNavPanel::PanelType K_DEFAULT_PANELTYPE;

		// BrnCrashNavPanel.h:257
		extern const BrnGui::CrashNavPanel::PanelType K_DEFAULT_PANELTYPE_ONLINE;

		// BrnCrashNavPanel.h:258
		extern const BrnGui::EventPanel::EEventType K_DEFAULT_EVENTMODE;

		// BrnCrashNavPanel.h:259
		extern const BrnStreetData::ScoreType K_DEFAULT_RR_SCORETYPE;

	}

}

// BrnCrashNavPanel.h:66
void BrnGui::CrashNavPanel::CrashNavPanel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

