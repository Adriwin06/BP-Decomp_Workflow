// BrnIntro.h:150
extern const uint32_t muNumResourcesToLoad;

// BrnIntro.h:152
extern int32_t[] maiEventToObserve;

// BrnIntro.h:153
extern const int32_t miNumEventsObserved;

// BrnIntro.h:160
extern char[] KAC_SCREENANIM_NAME;

// BrnIntro.h:163
extern char[] KAC_LICENSECOMP_NAME;

// BrnIntro.h:164
extern char[] KAC_PHOTOBOOTHCOMP_NAME;

// BrnIntro.h:165
extern char[] KAC_BUTTONPROMPTCOMP_NAME;

// BrnIntro.h:166
extern char[] KAC_WELCOMETEXT1COMP_NAME;

// BrnIntro.h:167
extern char[] KAC_WELCOMETEXT2COMP_NAME;

// BrnIntro.h:169
extern char[] KAC_GOTOPHOTOBOOTH_STRINGID;

// BrnIntro.h:170
extern char[] KAC_CONTINUE_STRINGID;

// BrnIntro.h:188
extern char[] KAC_MONTHTEXTFIELD_NAME;

// BrnIntro.h:189
extern char[] KAC_DAYTEXTFIELD_NAME;

// BrnIntro.h:190
extern char[] KAC_YEARTEXTFIELD_NAME;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct Intro {
		// BrnIntro.h:78
		enum EIntroState {
			E_INTROSTATE_NONE = 0,
			E_INTROSTATE_PLAYING_VIDEO = 1,
			E_INTROSTATE_WAITING_FOR_VIDEO = 2,
			E_INTROSTATE_START_FLYBY = 3,
			E_INTROSTATE_WAIT_FOR_FLYBY_FINISH = 4,
			E_INTROSTATE_LOADINGRESOURCES = 5,
			E_INTROSTATE_WAITINGFORCOMPONENTS = 6,
			E_INTROSTATE_WELCOMETEXT = 7,
			E_INTROSTATE_PHOTOBOOTH = 8,
			E_INTROSTATE_LICENCE = 9,
			E_INTROSTATE_COUNT = 10,
		}

	}

}

// BrnIntro.h:47
struct BrnGui::Intro : public CgsGui::State {
private:
	// BrnIntro.cpp:32
	extern sResourceTuple[2] maResourcesToLoad;

	// BrnIntro.cpp:38
	extern const uint32_t muNumResourcesToLoad = 2;

	// BrnIntro.cpp:41
	extern const int32_t[8] maiEventToObserve;

	// BrnIntro.cpp:53
	extern const int32_t miNumEventsObserved = 8;

	// BrnIntro.h:155
	BrnGui::Intro::EIntroState meIntroState;

	// BrnIntro.h:157
	Profile * mpProfile;

	// BrnIntro.h:158
	BrnGui::GuiCache * mpGuiCache;

	// BrnIntro.cpp:55
	extern const char[15] KAC_SCREENANIM_NAME;

	// BrnIntro.cpp:56
	extern const char *[10] KAPC_SCREEN_FRAMENAMES;

	// BrnIntro.cpp:70
	extern const char[12] KAC_LICENSECOMP_NAME;

	// BrnIntro.cpp:71
	extern const char[15] KAC_PHOTOBOOTHCOMP_NAME;

	// BrnIntro.cpp:72
	extern const char[10] KAC_BUTTONPROMPTCOMP_NAME;

	// BrnIntro.cpp:73
	extern const char[18] KAC_WELCOMETEXT1COMP_NAME;

	// BrnIntro.cpp:74
	extern const char[18] KAC_WELCOMETEXT2COMP_NAME;

	// BrnIntro.cpp:76
	extern const char[25] KAC_GOTOPHOTOBOOTH_STRINGID;

	// BrnIntro.cpp:77
	extern const char[25] KAC_CONTINUE_STRINGID;

	// BrnIntro.h:172
	BrnGui::AnimationComponent mScreenAnim;

	// BrnIntro.h:174
	BrnGui::LicenseComponent mLicenseComponent;

	// BrnIntro.h:175
	BrnGui::PhotoBoothComponent mPhotoBoothComponent;

	// BrnIntro.h:176
	BrnGui::AnimationComponent mWelcomeText1Anim;

	// BrnIntro.h:177
	BrnGui::AnimationComponent mWelcomeText2Anim;

	// BrnIntro.h:179
	float32_t mfFlybyTimer;

	// BrnIntro.h:180
	float32_t mfPauseTimer;

	// BrnIntro.h:182
	bool mbVoiceOverPlaying;

	// BrnIntro.h:184
	BrnGui::TextField mMonthTextField;

	// BrnIntro.h:185
	BrnGui::TextField mDayTextField;

	// BrnIntro.h:186
	BrnGui::TextField mYearTextField;

	// BrnIntro.cpp:79
	extern const char[14] KAC_MONTHTEXTFIELD_NAME;

	// BrnIntro.cpp:80
	extern const char[12] KAC_DAYTEXTFIELD_NAME;

	// BrnIntro.cpp:81
	extern const char[13] KAC_YEARTEXTFIELD_NAME;

public:
	// BrnIntro.cpp:109
	virtual void Construct(CgsID, CgsFsm::ScriptedFsm *);

	// BrnIntro.cpp:130
	virtual void OnEnter();

	// BrnIntro.cpp:168
	virtual void OnLeave();

	// BrnIntro.cpp:203
	virtual void Update();

	// BrnIntro.h:70
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnIntro.cpp:348
	void HandleIncomingEvents();

	// BrnIntro.cpp:593
	void AppendExpectedComponents();

	// BrnIntro.cpp:615
	void SetupComponents();

	// BrnIntro.cpp:702
	virtual void HandleControllerInput(const CgsModule::Event *, int32_t);

	// BrnIntro.cpp:780
	void HandleTransitionFromWelcomeText();

	// BrnIntro.cpp:811
	virtual void HandleControllerPressedPhotoBooth(const CgsModule::Event *);

	// BrnIntro.cpp:858
	void HandleTransitionFromLicense();

	// BrnIntro.cpp:495
	void HandleVoiceOverStarting();

	// BrnIntro.cpp:515
	void HandleVoiceOverFinishing();

	// BrnIntro.cpp:536
	void HandleStateTransitions();

	// BrnIntro.h:139
	void UpdateComponents();

	// BrnIntro.h:143
	void SetupMenuComponents();

	// BrnIntro.h:147
	void HandleAptTrigger(const GuiEventAptTrigger *);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct Intro {
	public:
		Intro();

	private:
		// BrnIntro.h:150
		extern const uint32_t muNumResourcesToLoad;

		// BrnIntro.h:152
		extern int32_t[] maiEventToObserve;

		// BrnIntro.h:153
		extern const int32_t miNumEventsObserved;

		// BrnIntro.h:160
		extern char[] KAC_SCREENANIM_NAME;

		// BrnIntro.h:163
		extern char[] KAC_LICENSECOMP_NAME;

		// BrnIntro.h:164
		extern char[] KAC_PHOTOBOOTHCOMP_NAME;

		// BrnIntro.h:165
		extern char[] KAC_BUTTONPROMPTCOMP_NAME;

		// BrnIntro.h:166
		extern char[] KAC_WELCOMETEXT1COMP_NAME;

		// BrnIntro.h:167
		extern char[] KAC_WELCOMETEXT2COMP_NAME;

		// BrnIntro.h:169
		extern char[] KAC_GOTOPHOTOBOOTH_STRINGID;

		// BrnIntro.h:170
		extern char[] KAC_CONTINUE_STRINGID;

		// BrnIntro.h:188
		extern char[] KAC_MONTHTEXTFIELD_NAME;

		// BrnIntro.h:189
		extern char[] KAC_DAYTEXTFIELD_NAME;

		// BrnIntro.h:190
		extern char[] KAC_YEARTEXTFIELD_NAME;

	}

}

// BrnIntro.h:47
void BrnGui::Intro::Intro() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

