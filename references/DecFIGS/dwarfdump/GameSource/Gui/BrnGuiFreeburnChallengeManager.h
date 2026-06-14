// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct FreeburnChallengeManager {
		// BrnGuiFreeburnChallengeManager.h:173
		enum EPageState {
			E_PAGE_STATE_NONE = 0,
			E_PAGE_STATE_AUTO_ROTATE = 1,
			E_PAGE_STATE_SELECT = 2,
			E_PAGE_STATE_COUNT = 3,
		}

		// BrnGuiFreeburnChallengeManager.h:184
		enum EInternalState {
			E_INTERNAL_STATE_OFF = 0,
			E_INTERNAL_STATE_NOT_ACTIVE = 1,
			E_INTERNAL_STATE_INITIALISED = 2,
			E_INTERNAL_STATE_RUNNING = 3,
			E_INTERNAL_STATE_RESULTS = 4,
			E_INTERNAL_STATE_COUNT = 5,
		}

	}

}

// BrnGuiFreeburnChallengeManager.h:51
struct BrnGui::FreeburnChallengeManager {
private:
	// BrnGuiFreeburnChallengeManager.h:195
	extern const float32_t KF_ROTATION_TIME;

	// BrnGuiFreeburnChallengeManager.h:198
	BrnGui::GuiCache * mpGuiCache;

	// BrnGuiFreeburnChallengeManager.h:199
	BrnGui::FreeburnChallengeManager::EInternalState meInternalState;

	// BrnGuiFreeburnChallengeManager.h:200
	float32_t mfTimeToNextChange;

	// BrnGuiFreeburnChallengeManager.h:201
	BrnGui::FreeburnChallengeManager::EPageState mePageState;

	// BrnGuiFreeburnChallengeManager.h:202
	int32_t miCurrentTargetIndex;

	// BrnGuiFreeburnChallengeManager.h:205
	const ChallengeListEntry * mpCurrentChallenge;

	// BrnGuiFreeburnChallengeManager.h:206
	bool mbIsLocalHost;

	// BrnGuiFreeburnChallengeManager.h:207
	int32_t miTargetsCount;

	// BrnGuiFreeburnChallengeManager.h:208
	BrnResource::ChallengeListEntryAction::EChallengeDataType[2] maeChallengeTargetTypes;

	// BrnGuiFreeburnChallengeManager.h:211
	BrnGameState::GameStateModuleIO::EFreeburnChallengeSuccess[2][8] maaeComplete;

	// BrnGuiFreeburnChallengeManager.h:212
	float32_t[2][8] maafIndividualTargetContributions;

	// BrnGuiFreeburnChallengeManager.h:213
	int32_t[2] maiOverallTargetRemaining;

	// BrnGuiFreeburnChallengeManager.h:214
	int32_t miCurrentAction;

	// BrnGuiFreeburnChallengeManager.h:217
	FburnChallengeEveryPlayerStatusData mCompletedData;

public:
	// BrnGuiFreeburnChallengeManager.h:57
	void Construct(BrnGui::GuiCache *);

	// BrnGuiFreeburnChallengeManager.h:61
	void Update();

	// BrnGuiFreeburnChallengeManager.h:66
	void StartChallenge(const GuiChallengeStartEvent *);

	// BrnGuiFreeburnChallengeManager.h:71
	void StartNotActiveChallenge(const GuiChallengeNotActiveStartEvent *);

	// BrnGuiFreeburnChallengeManager.h:75
	void EndNotActiveChallenge();

	// BrnGuiFreeburnChallengeManager.h:80
	void TriggerChallenge(const GuiChallengeTriggerResponse *);

	// BrnGuiFreeburnChallengeManager.h:85
	void HandleNewData(const GuiChallengeUpdateEvent *);

	// BrnGuiFreeburnChallengeManager.h:89
	void FinishChallenge();

	// BrnGuiFreeburnChallengeManager.h:93
	void SelectNext();

	// BrnGuiFreeburnChallengeManager.h:98
	void HandleCompletionStatus(const GuiEventFburnChallengeEveryPlayerStatus *);

	// BrnGuiFreeburnChallengeManager.h:106
	const ChallengeListEntry * GetCurrentChallenge() const;

	// BrnGuiFreeburnChallengeManager.h:110
	const ChallengeListEntryAction * GetCurrentAction() const;

	// BrnGuiFreeburnChallengeManager.h:115
	BrnGameState::GameStateModuleIO::EFreeburnChallengeSuccess GetCurrentSuccessForARCI(EActiveRaceCarIndex) const;

	// BrnGuiFreeburnChallengeManager.h:120
	float32_t GetCurrentContributionForARCI(EActiveRaceCarIndex) const;

	// BrnGuiFreeburnChallengeManager.h:124
	float32_t GetCurrentContributionOverall() const;

	// BrnGuiFreeburnChallengeManager.h:128
	bool AreTargetsAvailable() const;

	// BrnGuiFreeburnChallengeManager.h:132
	bool AreMultipleTargetsAvailable() const;

	// BrnGuiFreeburnChallengeManager.h:136
	BrnResource::ChallengeListEntryAction::EChallengeDataType GetCurrentTargetType() const;

	// BrnGuiFreeburnChallengeManager.h:140
	bool IsActive() const;

	// BrnGuiFreeburnChallengeManager.h:144
	bool IsNotActive() const;

	// BrnGuiFreeburnChallengeManager.h:148
	bool IsRunning() const;

	// BrnGuiFreeburnChallengeManager.h:152
	bool IsShowingResults() const;

	// BrnGuiFreeburnChallengeManager.h:156
	bool IsStarted() const;

	// BrnGuiFreeburnChallengeManager.h:160
	bool IsLocalHost() const;

	// BrnGuiFreeburnChallengeManager.h:164
	const FburnChallengeEveryPlayerStatusData * GetCompletedChallengesData() const;

	// BrnGuiFreeburnChallengeManager.h:168
	void StartResults();

}

// BrnGuiFreeburnChallengeManager.h:195
extern const float32_t KF_ROTATION_TIME;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct FreeburnChallengeManager {
		// BrnGuiFreeburnChallengeManager.h:173
		enum EPageState {
			E_PAGE_STATE_NONE = 0,
			E_PAGE_STATE_AUTO_ROTATE = 1,
			E_PAGE_STATE_SELECT = 2,
			E_PAGE_STATE_COUNT = 3,
		}

		// BrnGuiFreeburnChallengeManager.h:184
		enum EInternalState {
			E_INTERNAL_STATE_OFF = 0,
			E_INTERNAL_STATE_NOT_ACTIVE = 1,
			E_INTERNAL_STATE_INITIALISED = 2,
			E_INTERNAL_STATE_RUNNING = 3,
			E_INTERNAL_STATE_RESULTS = 4,
			E_INTERNAL_STATE_COUNT = 5,
		}

	}

}

