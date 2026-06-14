// BrnCompletedGame.h:165
extern int32_t[] maiEventToObserve;

// BrnCompletedGame.h:166
extern const int32_t miNumEventsObserved;

// BrnCompletedGame.h:169
extern char[] KAC_LICENSE_COMPONENT_NAME;

// BrnCompletedGame.h:170
extern char[] KAC_PHOTO_COMPONENT_NAME;

// BrnCompletedGame.h:172
extern char[] KAC_UPGRADE_ANIM_NAME;

// BrnCompletedGame.h:173
extern char[] KAC_UPGRADE_TEXTFIELD_NAME;

// BrnCompletedGame.h:175
extern char[] KAC_CARS_ANIM_NAME;

// BrnCompletedGame.h:176
extern char[] KAC_CARS_TEXTFIELD_NAME;

// BrnCompletedGame.h:179
extern const float32_t KF_NEXT_STEP_DURATION;

// BrnCompletedGame.h:180
extern const float32_t KF_CARS_UNLOCKED_DURATION;

// BrnCompletedGame.h:181
extern const float32_t KF_FINAL_UPGRADED_DURATION;

// BrnCompletedGame.h:182
extern const float32_t KF_LICENSE_TICK_UP_DURATION;

// BrnCompletedGame.h:183
extern const float32_t KF_BACKGROUND_HEADSTART;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CompletedGame {
		// BrnCompletedGame.h:82
		enum ECompletedGameState {
			E_COMPLETEDGAMESTATE_NONE = 0,
			E_COMPLETEDGAMESTATE_RUNNING = 1,
			E_COMPLETEDGAMESTATE_DONE = 2,
			E_COMPLETEDGAMESTATE_COUNT = 3,
		}

		// BrnCompletedGame.h:91
		enum ECompletionType {
			E_COMPLETION_NOT_SET = 0,
			E_COMPLETION_WON_BURNOUT_LICENSE = 1,
			E_COMPLETION_WON_ELITE_LICENSE = 2,
			E_COMPLETION_JUST_HIT_100_PERCENT = 3,
			E_COMPLETION_FINISHED_GAME = 4,
			E_COMPLETED_COUNT = 5,
		}

		// BrnCompletedGame.h:103
		enum EBurnoutSubstates {
			E_BURNOUT_PRESENTATION_INVALID = 0,
			E_BURNOUT_PRESENTATION_LOAD_RESOURCES = 1,
			E_BURNOUT_PRESENTATION_INITIALISE_COMPONENTS = 2,
			E_BURNOUT_PRESENTATION_RUNNING = 3,
			E_BURNOUT_PRESENTATION_CLEANUP = 4,
			E_BURNOUT_PRESENTATION_COUNT = 5,
		}

		// BrnCompletedGame.h:115
		enum EEliteSubstates {
			E_ELITE_PRESENTATION_INVALID = 0,
			E_ELITE_CAR_PRESENTATION_LOAD_RESOURCES = 1,
			E_ELITE_CAR_PRESENTATION_INITIALISE_COMPONENTS = 2,
			E_ELITE_CAR_PRESENTATION_RUNNING = 3,
			E_ELITE_CAR_PRESENTATION_LEAVING = 4,
			E_ELITE_CAR_PRESENTATION_CLEANUP = 5,
			E_ELITE_LICENSE_PRESENTATION_LOAD_RESOURCES = 6,
			E_ELITE_LICENSE_PRESENTATION_INITIALISE_COMPONENTS = 7,
			E_ELITE_LICENSE_PRESENTATION_RUNNING = 8,
			E_ELITE_LICENSE_PRESENTATION_CLEANUP = 9,
			E_ELITE_PRESENTATION_COUNT = 10,
		}

		// BrnCompletedGame.h:133
		enum EFinishedFirstPartSubstates {
			E_FINISHED_FIRST_PRESENTATION_INVALID = 0,
			E_FINISHED_FIRST_LICENSE_PRESENTATION_LOAD_RESOURCES = 1,
			E_FINISHED_FIRST_LICENSE_PRESENTATION_INITIALISE_COMPONENTS = 2,
			E_FINISHED_FIRST_LICENSE_PRESENTATION_RUNNING = 3,
			E_FINISHED_FIRST_TAKING_PHOTO = 4,
			E_FINISHED_FIRST_TAKING_PHOTO_CLEANUP = 5,
			E_FINISHED_FIRST_UPGRADE_PRESENTATION_BEGIN = 6,
			E_FINISHED_FIRST_UPGRADE_PRESENTATION_RUNNING = 7,
			E_FINISHED_FIRST_UPGRADE_PRESENTATION_CLEANUP = 8,
			E_FINISHED_FIRST_PRESENTATION_COUNT = 9,
		}

		// BrnCompletedGame.h:151
		enum EFinishedSecondPartSubstates {
			E_FINISHED_SECOND_PRESENTATION_INVALID = 0,
			E_FINISHED_SECOND_PRESENTATION_LOAD_RESOURCES = 1,
			E_FINISHED_SECOND_PRESENTATION_INITIALISE_COMPONENTS = 2,
			E_FINISHED_SECOND_PRESENTATION_RUNNING = 3,
			E_FINISHED_SECOND_PRESENTATION_LEAVING = 4,
			E_FINISHED_SECOND_PRESENTATION_CLEANUP = 5,
			E_FINISHED_SECOND_PRESENTATION_COUNT = 6,
		}

	}

}

// BrnCompletedGame.h:50
struct BrnGui::CompletedGame : public CgsGui::State {
private:
	// BrnCompletedGame.cpp:32
	extern const int32_t[6] maiEventToObserve;

	// BrnCompletedGame.cpp:43
	extern const int32_t miNumEventsObserved = 6;

	// BrnCompletedGame.cpp:46
	extern const char[12] KAC_LICENSE_COMPONENT_NAME;

	// BrnCompletedGame.cpp:47
	extern const char[15] KAC_PHOTO_COMPONENT_NAME;

	// BrnCompletedGame.cpp:49
	extern const char[18] KAC_UPGRADE_ANIM_NAME;

	// BrnCompletedGame.cpp:50
	extern const char[19] KAC_UPGRADE_TEXTFIELD_NAME;

	// BrnCompletedGame.cpp:52
	extern const char[18] KAC_CARS_ANIM_NAME;

	// BrnCompletedGame.cpp:53
	extern const char[19] KAC_CARS_TEXTFIELD_NAME;

	// BrnCompletedGame.cpp:56
	extern const float32_t KF_NEXT_STEP_DURATION;

	// BrnCompletedGame.cpp:57
	extern const float32_t KF_CARS_UNLOCKED_DURATION;

	// BrnCompletedGame.cpp:58
	extern const float32_t KF_FINAL_UPGRADED_DURATION;

	// BrnCompletedGame.cpp:59
	extern const float32_t KF_LICENSE_TICK_UP_DURATION;

	// BrnCompletedGame.cpp:60
	extern const float32_t KF_BACKGROUND_HEADSTART;

	// BrnCompletedGame.h:187
	BrnGui::LicenseComponent mLicense;

	// BrnCompletedGame.h:188
	BrnGui::PhotoBoothComponent mPhotoBoothComponent;

	// BrnCompletedGame.h:190
	BrnGui::AnimationComponent mUpgradeStateAnimator;

	// BrnCompletedGame.h:191
	BrnGui::TextField mUpgradeTextfield;

	// BrnCompletedGame.h:193
	BrnGui::AnimationComponent mRewardCarsStateAnimator;

	// BrnCompletedGame.h:194
	BrnGui::TextField mRewardCarsTextfield;

	// BrnCompletedGame.h:199
	BrnGui::CompletedGame::ECompletedGameState meCompletedGameState;

	// BrnCompletedGame.h:201
	BrnGui::CompletedGame::ECompletionType meCompletionType;

	// BrnCompletedGame.h:203
	BrnGui::CompletedGame::EBurnoutSubstates meBurnoutSubstate;

	// BrnCompletedGame.h:204
	BrnGui::CompletedGame::EEliteSubstates meEliteSubstate;

	// BrnCompletedGame.h:205
	BrnGui::CompletedGame::EFinishedFirstPartSubstates meFirstFinishedSubstate;

	// BrnCompletedGame.h:206
	BrnGui::CompletedGame::EFinishedSecondPartSubstates meSecondFinishedSubstate;

	// BrnCompletedGame.h:208
	float32_t mfTimeRemaining;

	// BrnCompletedGame.h:210
	bool mbStartedUpgradeTransOut;

	// BrnCompletedGame.h:214
	sResourceTuple mResourceToLoad;

	// BrnCompletedGame.h:215
	int32_t miNumResourcesToLoad;

	// BrnCompletedGame.h:217
	BrnGui::GuiCache * mpGuiCache;

	// BrnCompletedGame.h:219
	Profile * mpProfile;

public:
	// BrnCompletedGame.cpp:80
	virtual void Construct(CgsID, CgsFsm::ScriptedFsm *);

	// BrnCompletedGame.cpp:112
	virtual void OnEnter();

	// BrnCompletedGame.cpp:163
	virtual void OnLeave();

	// BrnCompletedGame.cpp:191
	virtual void Update();

	// BrnCompletedGame.h:73
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnCompletedGame.cpp:373
	void UpdateBurnoutLicensePresentation();

	// BrnCompletedGame.cpp:481
	void UpdateEliteLicensePresentation();

	// BrnCompletedGame.cpp:680
	void UpdateOneHundredPercentPartOnePresentation();

	// BrnCompletedGame.cpp:873
	void UpdateOneHundredPercentPartTwoPresentation();

	// BrnCompletedGame.cpp:998
	void HandleIncomingEvents();

	// BrnCompletedGame.cpp:1122
	virtual void HandleControllerInput(const CgsModule::Event *, int32_t);

	// BrnCompletedGame.cpp:1203
	void TriggerExitState();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CompletedGame {
	public:
		CompletedGame();

	private:
		// BrnCompletedGame.h:165
		extern int32_t[] maiEventToObserve;

		// BrnCompletedGame.h:166
		extern const int32_t miNumEventsObserved;

		// BrnCompletedGame.h:169
		extern char[] KAC_LICENSE_COMPONENT_NAME;

		// BrnCompletedGame.h:170
		extern char[] KAC_PHOTO_COMPONENT_NAME;

		// BrnCompletedGame.h:172
		extern char[] KAC_UPGRADE_ANIM_NAME;

		// BrnCompletedGame.h:173
		extern char[] KAC_UPGRADE_TEXTFIELD_NAME;

		// BrnCompletedGame.h:175
		extern char[] KAC_CARS_ANIM_NAME;

		// BrnCompletedGame.h:176
		extern char[] KAC_CARS_TEXTFIELD_NAME;

		// BrnCompletedGame.h:179
		extern const float32_t KF_NEXT_STEP_DURATION;

		// BrnCompletedGame.h:180
		extern const float32_t KF_CARS_UNLOCKED_DURATION;

		// BrnCompletedGame.h:181
		extern const float32_t KF_FINAL_UPGRADED_DURATION;

		// BrnCompletedGame.h:182
		extern const float32_t KF_LICENSE_TICK_UP_DURATION;

		// BrnCompletedGame.h:183
		extern const float32_t KF_BACKGROUND_HEADSTART;

	}

}

// BrnCompletedGame.h:50
void BrnGui::CompletedGame::CompletedGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

