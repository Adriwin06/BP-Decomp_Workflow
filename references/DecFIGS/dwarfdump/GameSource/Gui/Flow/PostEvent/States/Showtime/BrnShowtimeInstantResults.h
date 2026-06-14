// BrnShowtimeInstantResults.h:69
extern const float32_t KF_TOTALLING_DURATION;

// BrnShowtimeInstantResults.h:70
extern const float32_t KF_SUMMARY_DURATION;

// BrnShowtimeInstantResults.h:71
extern const float32_t KF_TRANS_OUT_DURATION;

// BrnShowtimeInstantResults.h:130
extern const int32_t KI_HELPITEMS = 3;

// BrnShowtimeInstantResults.h:134
extern int32_t[] maiEventToObserve;

// BrnShowtimeInstantResults.h:135
extern const int32_t miNumEventsObserved;

// BrnShowtimeInstantResults.h:136
extern sResourceTuple[] maResourcesToLoad;

// BrnShowtimeInstantResults.h:137
extern uint32_t muNumResourcesToLoad;

// BrnShowtimeInstantResults.h:140
extern char[] KAC_MAIN_BG_ICON_NAME;

// BrnShowtimeInstantResults.h:141
extern char[] KAC_RESULTS_ICON_NAME;

// BrnShowtimeInstantResults.h:142
extern char[] KAC_SECOND_RESULTS_ICON_NAME;

// BrnShowtimeInstantResults.h:144
extern char[] KAC_FINISHED_TEXT_NAME;

// BrnShowtimeInstantResults.h:145
extern char[] KAC_MULTIPLIER_TEXT_NAME;

// BrnShowtimeInstantResults.h:146
extern char[] KAC_MULTIPLIER_SYMBOL_NAME;

// BrnShowtimeInstantResults.h:147
extern char[] KAC_TOTAL_SCORE_TEXT_NAME;

// BrnShowtimeInstantResults.h:148
extern char[] KAC_TOTAL_SCORE_ICON_NAME;

// BrnShowtimeInstantResults.h:151
extern char[] KAC_SHOWTIME_OVER;

// BrnShowtimeInstantResults.h:152
extern char[] KAC_SHOWTIME_SCORE;

// BrnShowtimeInstantResults.h:153
extern char[] KAC_SHOWTIME_DAMAGE_WITH_MULTIPLIER;

// BrnShowtimeInstantResults.h:154
extern char[] KAC_SHOWTIME_DAMAGE_WITHOUT_MULTIPLIER;

// BrnShowtimeInstantResults.h:155
extern char[] KAC_SHOWTIME_DISTANCE_IN_METRES;

// BrnShowtimeInstantResults.h:156
extern char[] KAC_SHOWTIME_DISTANCE_IN_DOLLARS;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct ShowtimeInstantResultsState {
		// BrnShowtimeInstantResults.h:75
		enum EResultsInternalStates {
			E_RESULTS_STATE_INVALID = -1,
			E_RESULTS_STATE_UNLOADED = 0,
			E_RESULTS_STATE_LOADING_RESOURCES = 1,
			E_RESULTS_STATE_LOADING_COMPONENTS = 2,
			E_RESULTS_STATE_ACTIVE = 3,
			E_RESULTS_STATE_COUNT = 4,
		}

		// BrnShowtimeInstantResults.h:87
		enum EResultsActiveSubStates {
			E_ACTIVE_SUBSTATE_EVENT_NONE = -1,
			E_ACTIVE_SUBSTATE_EVENT_RESULTS = 0,
			E_ACTIVE_SUBSTATE_EVENT_DONE = 1,
			E_ACTIVE_SUBSTATE_EVENT_COUNT = 2,
		}

		// BrnShowtimeInstantResults.h:97
		enum EResultsSubStateStates {
			E_SUBSTATE_INVALID = -1,
			E_SUBSTATE_SET_UP_COMPONENTS = 0,
			E_SUBSTATE_TOTALLING = 1,
			E_SUBSTATE_SUMMARY = 2,
			E_SUBSTATE_LEAVING = 3,
			E_SUBSTATE_COUNT = 4,
		}

		// BrnShowtimeInstantResults.h:108
		enum EResultsTotallingSubstates {
			E_TOTALLING_SUBSTATE_INVALID = 0,
			E_TOTALLING_SUBSTATE_SHOWING_DISTANCE_METRES = 1,
			E_TOTALLING_SUBSTATE_SHOWING_DISTANCE_DOLLARS = 2,
			E_TOTALLING_SUBSTATE_BANKING_DISTANCE = 3,
			E_TOTALLING_SUBSTATE_SHOWING_MULTIPLICATION = 4,
			E_TOTALLING_SUBSTATE_BANKING_SCORE = 5,
			E_TOTALLING_COUNT = 6,
		}

	}

}

// BrnShowtimeInstantResults.h:45
struct BrnGui::ShowtimeInstantResultsState : public CgsGui::State {
	// BrnShowtimeInstantResults.cpp:33
	extern const float32_t KF_TOTALLING_DURATION;

	// BrnShowtimeInstantResults.cpp:34
	extern const float32_t KF_SUMMARY_DURATION;

	// BrnShowtimeInstantResults.cpp:35
	extern const float32_t KF_TRANS_OUT_DURATION;

private:
	// BrnShowtimeInstantResults.h:130
	extern const int32_t KI_HELPITEMS = 3;

	// BrnShowtimeInstantResults.cpp:45
	extern const int32_t[7] maiEventToObserve;

	// BrnShowtimeInstantResults.cpp:56
	extern const int32_t miNumEventsObserved = 7;

	// BrnShowtimeInstantResults.cpp:58
	extern sResourceTuple[3] maResourcesToLoad;

	// BrnShowtimeInstantResults.cpp:68
	extern uint32_t muNumResourcesToLoad;

	// BrnShowtimeInstantResults.cpp:71
	extern const char[11] KAC_MAIN_BG_ICON_NAME;

	// BrnShowtimeInstantResults.cpp:85
	extern const char[6] KAC_RESULTS_ICON_NAME;

	// BrnShowtimeInstantResults.cpp:72
	extern const char[18] KAC_SECOND_RESULTS_ICON_NAME;

	// BrnShowtimeInstantResults.cpp:75
	extern const char *[3] KAC_HELPITEM_NAMES;

	// BrnShowtimeInstantResults.cpp:82
	extern const char[9] KAC_FINISHED_TEXT_NAME;

	// BrnShowtimeInstantResults.cpp:83
	extern const char[13] KAC_MULTIPLIER_TEXT_NAME;

	// BrnShowtimeInstantResults.cpp:84
	extern const char[11] KAC_MULTIPLIER_SYMBOL_NAME;

	// BrnShowtimeInstantResults.cpp:86
	extern const char[13] KAC_TOTAL_SCORE_TEXT_NAME;

	// BrnShowtimeInstantResults.h:148
	extern char[] KAC_TOTAL_SCORE_ICON_NAME;

	// BrnShowtimeInstantResults.cpp:88
	extern const char[18] KAC_SHOWTIME_OVER;

	// BrnShowtimeInstantResults.cpp:89
	extern const char[19] KAC_SHOWTIME_SCORE;

	// BrnShowtimeInstantResults.cpp:90
	extern const char[36] KAC_SHOWTIME_DAMAGE_WITH_MULTIPLIER;

	// BrnShowtimeInstantResults.cpp:91
	extern const char[39] KAC_SHOWTIME_DAMAGE_WITHOUT_MULTIPLIER;

	// BrnShowtimeInstantResults.cpp:92
	extern const char[32] KAC_SHOWTIME_DISTANCE_IN_METRES;

	// BrnShowtimeInstantResults.cpp:93
	extern const char[33] KAC_SHOWTIME_DISTANCE_IN_DOLLARS;

	// BrnShowtimeInstantResults.h:159
	BrnGui::HelpItem[3] mHelpItems;

	// BrnShowtimeInstantResults.h:160
	BrnGui::TextField mFinishedText;

	// BrnShowtimeInstantResults.h:161
	BrnGui::TextField mTotalScoreText;

	// BrnShowtimeInstantResults.h:162
	BrnGui::TextField mMultiplierText;

	// BrnShowtimeInstantResults.h:163
	BrnGui::TextField mMultSymbolText;

	// BrnShowtimeInstantResults.h:166
	BrnGui::IconComponent mResultsIcon;

	// BrnShowtimeInstantResults.h:168
	BrnGui::GuiCache * mpGuiCache;

	// BrnShowtimeInstantResults.h:169
	BrnGui::ShowtimeInstantResultsState::EResultsInternalStates meCurrentState;

	// BrnShowtimeInstantResults.h:171
	BrnGui::ShowtimeInstantResultsState::EResultsActiveSubStates meActiveSubState;

	// BrnShowtimeInstantResults.h:172
	bool[2] mabSubStateFlags;

	// BrnShowtimeInstantResults.h:174
	BrnGui::ShowtimeInstantResultsState::EResultsSubStateStates meSubStateState;

	// BrnShowtimeInstantResults.h:176
	BrnGui::ShowtimeInstantResultsState::EResultsTotallingSubstates meTotallingStage;

	// BrnShowtimeInstantResults.h:178
	BrnGui::GuiEventOfflinePostEvent::OfflinePostEventData mResults;

	// BrnShowtimeInstantResults.h:180
	float32_t mfTimeRemaining;

	// BrnShowtimeInstantResults.h:181
	int32_t miLastCrashedCars;

	// BrnShowtimeInstantResults.h:182
	int32_t miCrashExtensionsRemaining;

	// BrnShowtimeInstantResults.h:183
	int32_t miDistanceDollars;

	// BrnShowtimeInstantResults.h:184
	int32_t miScoreMultiplierDollars;

	// BrnShowtimeInstantResults.h:185
	int32_t miBankingDollarTotal;

	// BrnShowtimeInstantResults.h:186
	int32_t miBankingDistanceDollars;

	// BrnShowtimeInstantResults.h:187
	int32_t miBankingScoreMultiplier;

	// BrnShowtimeInstantResults.h:189
	int32_t miCurrentMultiplier;

public:
	// BrnShowtimeInstantResults.cpp:112
	virtual void OnEnter();

	// BrnShowtimeInstantResults.cpp:183
	virtual void OnLeave();

	// BrnShowtimeInstantResults.cpp:223
	virtual void Update();

	// BrnShowtimeInstantResults.h:63
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnShowtimeInstantResults.cpp:303
	void AppendExpectedComponents();

	// BrnShowtimeInstantResults.cpp:330
	// Declaration
	void HandleIncomingEvents() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnShowtimeInstantResults.cpp:374
		using namespace CgsDev::Message;

		// BrnShowtimeInstantResults.cpp:380
		using namespace CgsDev::Message;

		// BrnShowtimeInstantResults.cpp:395
		using namespace CgsDev::Message;

	}

	// BrnShowtimeInstantResults.cpp:482
	void HandleAptTriggers(const GuiEventAptTrigger *);

	// BrnShowtimeInstantResults.cpp:507
	void HandleControllerInput(const GuiEventControllerInputPressed *);

	// BrnShowtimeInstantResults.cpp:519
	void SetupComponents();

	// BrnShowtimeInstantResults.cpp:543
	void SetupTotalling();

	// BrnShowtimeInstantResults.cpp:569
	void SetupSummary();

	// BrnShowtimeInstantResults.cpp:597
	void UpdateSubstate();

	// BrnShowtimeInstantResults.cpp:642
	void UpdateEventResults();

	// BrnShowtimeInstantResults.cpp:732
	void UpdateScoreTotalling();

	// BrnShowtimeInstantResults.cpp:891
	bool TickSubstateAndEndIfDone();

	// BrnShowtimeInstantResults.cpp:933
	void TriggerExitResults();

	// BrnShowtimeInstantResults.cpp:951
	int32_t CalculateMultiplier();

	// BrnShowtimeInstantResults.h:271
	BrnGui::ShowtimeInstantResultsState::EResultsActiveSubStates GetNextSubstate();

	// BrnShowtimeInstantResults.h:303
	void ResetStateTimer();

	// BrnShowtimeInstantResults.h:354
	void SetMultiplierText();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ShowtimeInstantResultsState {
	public:
		ShowtimeInstantResultsState();

		// Unknown accessibility
		// BrnShowtimeInstantResults.h:69
		extern const float32_t KF_TOTALLING_DURATION;

		// Unknown accessibility
		// BrnShowtimeInstantResults.h:70
		extern const float32_t KF_SUMMARY_DURATION;

		// Unknown accessibility
		// BrnShowtimeInstantResults.h:71
		extern const float32_t KF_TRANS_OUT_DURATION;

	private:
		// BrnShowtimeInstantResults.h:130
		extern const int32_t KI_HELPITEMS = 3;

		// BrnShowtimeInstantResults.h:134
		extern int32_t[] maiEventToObserve;

		// BrnShowtimeInstantResults.h:135
		extern const int32_t miNumEventsObserved;

		// BrnShowtimeInstantResults.h:136
		extern sResourceTuple[] maResourcesToLoad;

		// BrnShowtimeInstantResults.h:137
		extern uint32_t muNumResourcesToLoad;

		// BrnShowtimeInstantResults.h:140
		extern char[] KAC_MAIN_BG_ICON_NAME;

		// BrnShowtimeInstantResults.h:141
		extern char[] KAC_RESULTS_ICON_NAME;

		// BrnShowtimeInstantResults.h:142
		extern char[] KAC_SECOND_RESULTS_ICON_NAME;

		// BrnShowtimeInstantResults.h:144
		extern char[] KAC_FINISHED_TEXT_NAME;

		// BrnShowtimeInstantResults.h:145
		extern char[] KAC_MULTIPLIER_TEXT_NAME;

		// BrnShowtimeInstantResults.h:146
		extern char[] KAC_MULTIPLIER_SYMBOL_NAME;

		// BrnShowtimeInstantResults.h:147
		extern char[] KAC_TOTAL_SCORE_TEXT_NAME;

		// BrnShowtimeInstantResults.h:148
		extern char[] KAC_TOTAL_SCORE_ICON_NAME;

		// BrnShowtimeInstantResults.h:151
		extern char[] KAC_SHOWTIME_OVER;

		// BrnShowtimeInstantResults.h:152
		extern char[] KAC_SHOWTIME_SCORE;

		// BrnShowtimeInstantResults.h:153
		extern char[] KAC_SHOWTIME_DAMAGE_WITH_MULTIPLIER;

		// BrnShowtimeInstantResults.h:154
		extern char[] KAC_SHOWTIME_DAMAGE_WITHOUT_MULTIPLIER;

		// BrnShowtimeInstantResults.h:155
		extern char[] KAC_SHOWTIME_DISTANCE_IN_METRES;

		// BrnShowtimeInstantResults.h:156
		extern char[] KAC_SHOWTIME_DISTANCE_IN_DOLLARS;

	}

}

// BrnShowtimeInstantResults.h:45
void BrnGui::ShowtimeInstantResultsState::ShowtimeInstantResultsState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

