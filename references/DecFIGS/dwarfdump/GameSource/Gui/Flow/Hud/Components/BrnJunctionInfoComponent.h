// BrnJunctionInfoComponent.h:125
extern char[] KAC_GAMEMODE_ICON_ANIMATOR_NAME;

// BrnJunctionInfoComponent.h:128
extern char[] KAC_MEDAL_ANIMATOR_NAME;

// BrnJunctionInfoComponent.h:131
extern char[] KAC_EVENT_NAME_TEXTFIELD_NAME;

// BrnJunctionInfoComponent.h:134
extern char[] KAC_EVENT_NAME_TEXTFIELD_LINE2_NAME;

// BrnJunctionInfoComponent.h:137
extern char[] KAC_START_HINT_ANIMATOR_NAME;

// BrnJunctionInfoComponent.h:140
extern char[] KAC_START_HINT_BUTTON_1_NAME;

// BrnJunctionInfoComponent.h:142
extern char[] KAC_START_HINT_BUTTON_2_NAME;

// BrnJunctionInfoComponent.h:145
extern char[] KAC_CURRENT_BURNING_ROUTE_ICON_FRAMENAME;

// BrnJunctionInfoComponent.h:146
extern char[] KAC_SPECIALEVENT_STRINGID;

// BrnJunctionInfoComponent.h:72
struct BrnGui::JunctionInfoComponent : public BrnFlaptComponent {
	// BrnJunctionInfoComponent.h:51
	typedef BrnGui::FlaptAnimatorComponent JunctionInfoAnimatorComponent;

private:
	// BrnJunctionInfoComponent.h:124
	JunctionInfoComponent::JunctionInfoAnimatorComponent mGameModeIconAnimator;

	// BrnJunctionInfoComponent.h:125
	extern char[] KAC_GAMEMODE_ICON_ANIMATOR_NAME;

	// BrnJunctionInfoComponent.h:127
	JunctionInfoComponent::JunctionInfoAnimatorComponent mMedalAnimator;

	// BrnJunctionInfoComponent.h:128
	extern char[] KAC_MEDAL_ANIMATOR_NAME;

	// Unknown accessibility
	// BrnJunctionInfoComponent.h:53
	typedef TextFieldRef JunctionInfoTextComponent;

	// BrnJunctionInfoComponent.h:130
	JunctionInfoComponent::JunctionInfoTextComponent mEventNameTextfield;

	// BrnJunctionInfoComponent.h:131
	extern char[] KAC_EVENT_NAME_TEXTFIELD_NAME;

	// BrnJunctionInfoComponent.h:133
	JunctionInfoComponent::JunctionInfoTextComponent mEventNameTextfield2Line;

	// BrnJunctionInfoComponent.h:134
	extern char[] KAC_EVENT_NAME_TEXTFIELD_LINE2_NAME;

	// BrnJunctionInfoComponent.h:136
	JunctionInfoComponent::JunctionInfoAnimatorComponent mStartHintAnimator;

	// BrnJunctionInfoComponent.h:137
	extern char[] KAC_START_HINT_ANIMATOR_NAME;

	// Unknown accessibility
	// BrnJunctionInfoComponent.h:52
	typedef FlaptButtonIconComponent JunctionInfoButtonIconComponent;

	// BrnJunctionInfoComponent.h:139
	JunctionInfoComponent::JunctionInfoButtonIconComponent mStartHintButton1;

	// BrnJunctionInfoComponent.h:140
	extern char[] KAC_START_HINT_BUTTON_1_NAME;

	// BrnJunctionInfoComponent.h:141
	JunctionInfoComponent::JunctionInfoButtonIconComponent mStartHintButton2;

	// BrnJunctionInfoComponent.h:142
	extern char[] KAC_START_HINT_BUTTON_2_NAME;

	// BrnJunctionInfoComponent.h:144
	extern const char *[] KAPC_GAMEMODE_ICON_FRAMENAMES;

	// BrnJunctionInfoComponent.h:145
	extern char[] KAC_CURRENT_BURNING_ROUTE_ICON_FRAMENAME;

	// BrnJunctionInfoComponent.h:146
	extern char[] KAC_SPECIALEVENT_STRINGID;

	// BrnJunctionInfoComponent.h:147
	GuiEventJunctionInfo mJunctionInfo;

	// BrnJunctionInfoComponent.h:149
	bool mbInJunction;

	// BrnJunctionInfoComponent.h:150
	bool mbShowingStartHint;

	// BrnJunctionInfoComponent.h:152
	bool mbShowing2LineName;

	// BrnJunctionInfoComponent.h:153
	bool mbGameComplete;

	// BrnJunctionInfoComponent.h:155
	CgsID mCurrentCarId;

public:
	// BrnJunctionInfoComponent.h:81
	void Construct(const char *, StateInterface *, const char *, int32_t);

	// BrnJunctionInfoComponent.h:88
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnJunctionInfoComponent.h:95
	void HandleJunctionChange(const GuiEventJunctionInfo *, CgsID);

	// BrnJunctionInfoComponent.h:100
	void Refresh(const char *);

	// BrnJunctionInfoComponent.h:106
	void HandleTransitionComplete(const char *, int32_t);

	// BrnJunctionInfoComponent.h:111
	void Run(const char *);

	// BrnJunctionInfoComponent.h:115
	bool IsShowingStartHint();

	// BrnJunctionInfoComponent.h:120
	void SetGameComplete(bool);

private:
	// BrnJunctionInfoComponent.h:159
	const char * GetMedalFrameNameFromMedal(int8_t);

	// BrnJunctionInfoComponent.h:163
	void SetupAptVariables();

	// BrnJunctionInfoComponent.h:167
	void SetEventNameText();

	// BrnJunctionInfoComponent.h:171
	void TransitionInMainClip();

	// BrnJunctionInfoComponent.h:175
	void TransitionOutMainClip();

}

