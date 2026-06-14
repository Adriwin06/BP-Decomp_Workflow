// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct EventPanel {
		// BrnEventPanel.h:53
		enum EEventType {
			E_EVENT_TYPE_RACE = 0,
			E_EVENT_TYPE_ROAD_RAGE = 1,
			E_EVENT_TYPE_STUNT_ATTACK = 2,
			E_EVENT_TYPE_SURVIVOR = 3,
			E_EVENT_TYPE_BURNING_ROUTE = 4,
			E_EVENT_TYPE_ALL = 5,
			E_EVENT_TYPE_COUNT = 6,
		}

	}

}

// BrnEventPanel.h:165
extern char[] KAC_MODE_LOGO_NAME;

// BrnEventPanel.h:166
extern char[] KAC_CAR_ICON_NAME;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct EventPanel {
		// BrnEventPanel.h:53
		enum EEventType {
			E_EVENT_TYPE_RACE = 0,
			E_EVENT_TYPE_ROAD_RAGE = 1,
			E_EVENT_TYPE_STUNT_ATTACK = 2,
			E_EVENT_TYPE_SURVIVOR = 3,
			E_EVENT_TYPE_BURNING_ROUTE = 4,
			E_EVENT_TYPE_ALL = 5,
			E_EVENT_TYPE_COUNT = 6,
		}

	}

}

// BrnEventPanel.h:50
struct BrnGui::EventPanel : public BrnGui::IconComponent {
	// BrnEventPanel.cpp:26
	extern const char *[6] KAPC_EVENT_FILTER_OPTIONS;

private:
	// BrnEventPanel.cpp:36
	extern const char *[6] KAPC_MODE_NAMES;

	// BrnEventPanel.cpp:46
	extern const char *[6] KAPC_TEXTFIELD_NAMES;

	// BrnEventPanel.cpp:56
	extern const char[13] KAC_MODE_LOGO_NAME;

	// BrnEventPanel.cpp:58
	extern const char[12] KAC_CAR_ICON_NAME;

	// BrnEventPanel.h:168
	BrnGui::TextField[6] mTextfields;

	// BrnEventPanel.h:169
	BrnGui::IconComponent mModeLogo;

	// BrnEventPanel.h:170
	BrnGui::IconComponent mCarIcon;

	// BrnEventPanel.h:172
	BrnGui::EventPanel::EEventType meCurrentGameMode;

	// BrnEventPanel.h:174
	uint32_t muCurrentEventID;

	// BrnEventPanel.h:176
	int32_t miPlayerRank;

	// BrnEventPanel.h:178
	int32_t miCurrentRaceRank;

	// BrnEventPanel.h:179
	int32_t miCurrentRoadRageRank;

	// BrnEventPanel.h:180
	int32_t miCurrentStuntAttackRank;

	// BrnEventPanel.h:181
	int32_t miCurrentMarkedManRank;

	// BrnEventPanel.h:183
	int32_t miOfflineRaceRankWins;

	// BrnEventPanel.h:184
	int32_t miRoadRageRankWins;

	// BrnEventPanel.h:185
	int32_t miStuntAttackRankWins;

	// BrnEventPanel.h:186
	int32_t miMarkedManRankWins;

	// BrnEventPanel.h:189
	bool mbActive;

public:
	// BrnEventPanel.cpp:79
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnEventPanel.cpp:131
	void AppendExpectedAptComponents(BrnGui::GuiFlow, BrnGui::GuiCache *);

	// BrnEventPanel.cpp:159
	void SetEventData(uint32_t, const BrnGui::GuiCache *, bool);

	// BrnEventPanel.cpp:429
	// Declaration
	int32_t GetStuntRunScore(const WorldDataController *, const BrnProgression::RaceEventData *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnEventPanel.cpp:457
		using namespace CgsDev::Message;

		// BrnEventPanel.cpp:458
		using namespace CgsDev::Message;

		// BrnEventPanel.cpp:459
		using namespace CgsDev::Message;

		// BrnEventPanel.cpp:460
		using namespace CgsDev::Message;

		// BrnEventPanel.cpp:461
		using namespace CgsDev::Message;

		// BrnEventPanel.cpp:462
		using namespace CgsDev::Message;

		// BrnEventPanel.cpp:463
		using namespace CgsDev::Message;

		// BrnEventPanel.cpp:464
		using namespace CgsDev::Message;

		// BrnEventPanel.cpp:465
		using namespace CgsDev::Message;

		// BrnEventPanel.cpp:466
		using namespace CgsDev::Message;

	}

	// BrnEventPanel.cpp:481
	// Declaration
	int32_t GetRoadRageTakedownScore(const WorldDataController *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnEventPanel.cpp:520
		using namespace CgsDev::Message;

		// BrnEventPanel.cpp:521
		using namespace CgsDev::Message;

		// BrnEventPanel.cpp:522
		using namespace CgsDev::Message;

		// BrnEventPanel.cpp:523
		using namespace CgsDev::Message;

		// BrnEventPanel.cpp:524
		using namespace CgsDev::Message;

		// BrnEventPanel.cpp:525
		using namespace CgsDev::Message;

		// BrnEventPanel.cpp:526
		using namespace CgsDev::Message;

		// BrnEventPanel.cpp:527
		using namespace CgsDev::Message;

		// BrnEventPanel.cpp:528
		using namespace CgsDev::Message;

		// BrnEventPanel.cpp:529
		using namespace CgsDev::Message;

	}

	// BrnEventPanel.cpp:378
	int32_t GetRankThresholdForEvent(int32_t, BrnGameState::GameStateModuleIO::EGameModeType, const WorldDataController *) const;

	// BrnEventPanel.cpp:545
	void SetCurrentGameMode(BrnGui::EventPanel::EEventType);

	// BrnEventPanel.cpp:602
	void TransitionIn();

	// BrnEventPanel.cpp:648
	void TransitionOut();

	// BrnEventPanel.h:210
	BrnGui::EventPanel::EEventType GetCurrentGameMode();

	// BrnEventPanel.h:225
	BrnProgression::RaceEventData::EModeType GetCurrentProgressionGameMode();

	// BrnEventPanel.h:241
	void SetPlayerRank(int32_t);

	// BrnEventPanel.h:262
	void SetModeRanks(int32_t, int32_t, int32_t, int32_t);

	// BrnEventPanel.h:289
	void SetModeRankWins(int32_t, int32_t, int32_t, int32_t);

private:
	// BrnEventPanel.h:308
	BrnProgression::RaceEventData::EModeType ConvertLocalEventDefToProgressionEventDef(BrnGui::EventPanel::EEventType);

	// BrnEventPanel.h:338
	BrnGui::EventPanel::EEventType ConvertProgressionEventDefToLocalEventDef(BrnProgression::RaceEventData::EModeType);

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct EventPanel {
		// BrnEventPanel.h:53
		enum EEventType {
			E_EVENT_TYPE_RACE = 0,
			E_EVENT_TYPE_ROAD_RAGE = 1,
			E_EVENT_TYPE_STUNT_ATTACK = 2,
			E_EVENT_TYPE_SURVIVOR = 3,
			E_EVENT_TYPE_BURNING_ROUTE = 4,
			E_EVENT_TYPE_ALL = 5,
			E_EVENT_TYPE_COUNT = 6,
		}

	public:
		// BrnEventPanel.h:225
		BrnProgression::RaceEventData::EModeType GetCurrentProgressionGameMode();

	private:
		// BrnEventPanel.h:308
		BrnProgression::RaceEventData::EModeType ConvertLocalEventDefToProgressionEventDef(BrnGui::EventPanel::EEventType);

		// BrnEventPanel.h:165
		extern char[] KAC_MODE_LOGO_NAME;

		// BrnEventPanel.h:166
		extern char[] KAC_CAR_ICON_NAME;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct EventPanel {
		// BrnEventPanel.h:53
		enum EEventType {
			E_EVENT_TYPE_RACE = 0,
			E_EVENT_TYPE_ROAD_RAGE = 1,
			E_EVENT_TYPE_STUNT_ATTACK = 2,
			E_EVENT_TYPE_SURVIVOR = 3,
			E_EVENT_TYPE_BURNING_ROUTE = 4,
			E_EVENT_TYPE_ALL = 5,
			E_EVENT_TYPE_COUNT = 6,
		}

	public:
		EventPanel();

	private:
		// BrnEventPanel.h:165
		extern char[] KAC_MODE_LOGO_NAME;

		// BrnEventPanel.h:166
		extern char[] KAC_CAR_ICON_NAME;

	}

}

// BrnEventPanel.h:50
void BrnGui::EventPanel::EventPanel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

