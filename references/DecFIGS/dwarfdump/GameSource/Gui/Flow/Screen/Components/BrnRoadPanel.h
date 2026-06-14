// BrnRoadPanel.h:55
extern const int32_t KI_ROADRULE_COUNT = 2;

// BrnRoadPanel.h:57
extern const int32_t KI_PANEL_TEXT_LENGTH = 32;

// BrnRoadPanel.h:152
extern const int32_t KI_ROAD_NUM_ROWS = 4;

// BrnRoadPanel.h:158
extern char[] macRoadSignName;

// BrnRoadPanel.h:160
extern char[] macNameString;

// BrnRoadPanel.h:161
extern char[] macScoreString;

// BrnRoadPanel.h:162
extern char[] macBestScoreBackingString;

// BrnRoadPanel.h:163
extern char[] KAC_TARGET_CAPTION_NAME;

// BrnRoadPanel.h:165
extern const CgsLanguage::LanguageManager::ParameterFormatType[2] mpacLocalisationParameters;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct RoadPanelData {
		// BrnRoadPanel.h:65
		struct PanelBox {
			// BrnRoadPanel.h:79
			bool[2] mabPlayerBestScore;

			// BrnRoadPanel.h:80
			char[32] mPlayerScores;

			// BrnRoadPanel.h:81
			char[2][32] mNames;

			// BrnRoadPanel.h:82
			char[2][32] mScores;

		public:
			// BrnRoadPanel.h:77
			void Construct(const char *, const char *, const char *, const char *, const char *, bool, bool);

		}

	}

}

// BrnRoadPanel.h:52
struct BrnGui::RoadPanelData {
	// BrnRoadPanel.h:55
	extern const int32_t KI_ROADRULE_COUNT = 2;

	// BrnRoadPanel.h:57
	extern const int32_t KI_PANEL_TEXT_LENGTH = 32;

	// BrnRoadPanel.h:85
	BrnGui::RoadPanelData::PanelBox[2] mPanels;

public:
	// BrnRoadPanel.h:62
	void Construct();

}

// BrnRoadPanel.h:97
struct BrnGui::RoadPanel : public BrnGui::IconComponent {
	// BrnRoadPanel.cpp:38
	extern const char *[2] KAPC_RR_FILTER_OPTIONS;

private:
	// BrnRoadPanel.h:152
	extern const int32_t KI_ROAD_NUM_ROWS = 4;

	// BrnRoadPanel.h:154
	BrnGui::RoadSignIcon mRoadSign;

	// BrnRoadPanel.h:156
	RoadPanelData mRoadPanelData;

	// BrnRoadPanel.cpp:44
	extern const char[9] macRoadSignName;

	// BrnRoadPanel.cpp:26
	extern const char *[4] mpacBestTimeIconNames;

	// BrnRoadPanel.cpp:46
	extern const char[5] macNameString;

	// BrnRoadPanel.cpp:47
	extern const char[6] macScoreString;

	// BrnRoadPanel.cpp:48
	extern const char[25] macBestScoreBackingString;

	// BrnRoadPanel.cpp:49
	extern const char[14] KAC_TARGET_CAPTION_NAME;

	// BrnRoadPanel.cpp:51
	extern const CgsLanguage::LanguageManager::ParameterFormatType[2] mpacLocalisationParameters;

	// BrnRoadPanel.h:167
	BrnGui::ERoadIcon meIcon;

	// BrnRoadPanel.h:169
	BrnGui::TextField[4] mNames;

	// BrnRoadPanel.h:170
	BrnGui::TextField[4] mScores;

	// BrnRoadPanel.h:171
	BrnGui::TextField mTargetCaption;

	// BrnRoadPanel.h:172
	BrnGui::AnimationComponent mBestScoreBackingAnimation;

	// BrnRoadPanel.h:174
	BrnStreetData::ScoreType meCurrentRule;

	// BrnRoadPanel.h:175
	BrnGui::GuiEventSetRoadRuleScoreMode::ERoadPanelModes meCurrentScoreMode;

	// BrnRoadPanel.h:177
	bool mbActive;

public:
	// BrnRoadPanel.cpp:127
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnRoadPanel.cpp:172
	void AppendExpectedAptComponents(BrnGui::GuiFlow, BrnGui::GuiCache *);

	// BrnRoadPanel.cpp:203
	void SetRoadPanelData(const char *, RoadPanelData &);

	// BrnRoadPanel.cpp:226
	void SetCurrentRule(BrnStreetData::ScoreType);

	// BrnRoadPanel.cpp:298
	void SwitchScoreMode();

	// BrnRoadPanel.cpp:329
	void TransitionIn();

	// BrnRoadPanel.cpp:360
	void TransitionOut();

	// BrnRoadPanel.h:199
	BrnStreetData::ScoreType GetCurrentRule() const;

	// BrnRoadPanel.h:214
	BrnGui::GuiEventSetRoadRuleScoreMode::ERoadPanelModes GetScoringMode() const;

	// BrnRoadPanel.h:229
	const char * GetSelectedFriendName() const;

private:
	// BrnRoadPanel.cpp:386
	void UpdateVisibleScores();

	// BrnRoadPanel.cpp:502
	BrnGui::RoadSignIcon::ESignColour GetSignColour();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct RoadPanel {
	public:
		// BrnRoadPanel.h:214
		BrnGui::GuiEventSetRoadRuleScoreMode::ERoadPanelModes GetScoringMode() const;

	private:
		// BrnRoadPanel.h:152
		extern const int32_t KI_ROAD_NUM_ROWS = 4;

		// BrnRoadPanel.h:158
		extern char[] macRoadSignName;

		// BrnRoadPanel.h:160
		extern char[] macNameString;

		// BrnRoadPanel.h:161
		extern char[] macScoreString;

		// BrnRoadPanel.h:162
		extern char[] macBestScoreBackingString;

		// BrnRoadPanel.h:163
		extern char[] KAC_TARGET_CAPTION_NAME;

		// BrnRoadPanel.h:165
		extern const CgsLanguage::LanguageManager::ParameterFormatType[2] mpacLocalisationParameters;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct RoadPanelData {
		// BrnRoadPanel.h:65
		struct PanelBox {
			// BrnRoadPanel.h:79
			bool[2] mabPlayerBestScore;

			// BrnRoadPanel.h:80
			char[32] mPlayerScores;

			// BrnRoadPanel.h:81
			char[2][32] mNames;

			// BrnRoadPanel.h:82
			char[2][32] mScores;

		public:
			// BrnRoadPanel.h:77
			void Construct(const char *, const char *, const char *, const char *, const char *, bool, bool);

		}

	}

	// Declaration
	struct RoadPanel {
	public:
		// BrnRoadPanel.h:214
		BrnGui::GuiEventSetRoadRuleScoreMode::ERoadPanelModes GetScoringMode() const;

		// BrnRoadPanel.h:199
		BrnStreetData::ScoreType GetCurrentRule() const;

	private:
		// BrnRoadPanel.h:152
		extern const int32_t KI_ROAD_NUM_ROWS = 4;

		// BrnRoadPanel.h:158
		extern char[] macRoadSignName;

		// BrnRoadPanel.h:160
		extern char[] macNameString;

		// BrnRoadPanel.h:161
		extern char[] macScoreString;

		// BrnRoadPanel.h:162
		extern char[] macBestScoreBackingString;

		// BrnRoadPanel.h:163
		extern char[] KAC_TARGET_CAPTION_NAME;

		// BrnRoadPanel.h:165
		extern const CgsLanguage::LanguageManager::ParameterFormatType[2] mpacLocalisationParameters;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct RoadPanel {
	public:
		RoadPanel();

	private:
		// BrnRoadPanel.h:152
		extern const int32_t KI_ROAD_NUM_ROWS = 4;

		// BrnRoadPanel.h:158
		extern char[] macRoadSignName;

		// BrnRoadPanel.h:160
		extern char[] macNameString;

		// BrnRoadPanel.h:161
		extern char[] macScoreString;

		// BrnRoadPanel.h:162
		extern char[] macBestScoreBackingString;

		// BrnRoadPanel.h:163
		extern char[] KAC_TARGET_CAPTION_NAME;

		// BrnRoadPanel.h:165
		extern const CgsLanguage::LanguageManager::ParameterFormatType[2] mpacLocalisationParameters;

	}

}

// BrnRoadPanel.h:97
void BrnGui::RoadPanel::RoadPanel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

