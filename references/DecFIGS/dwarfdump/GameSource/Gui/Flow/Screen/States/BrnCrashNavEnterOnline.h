// BrnCrashNavEnterOnline.h:169
extern int32_t[] maiEventToObserve;

// BrnCrashNavEnterOnline.h:170
extern const int32_t miNumEventsObserved;

// BrnCrashNavEnterOnline.h:171
extern sResourceTuple[] maResourceTuplesToLoad;

// BrnCrashNavEnterOnline.h:172
extern const int32_t miNumResourcesToLoad;

// BrnCrashNavEnterOnline.h:174
extern const float32_t KF_MESSAGE_DISPLAY_WAIT_TIME;

// BrnCrashNavEnterOnline.h:176
extern const float32_t KF_TIME_TO_SCROLL_ONE_LINE;

// BrnCrashNavEnterOnline.h:177
extern const float32_t KF_AXIS_DEAD_ZONE;

// BrnCrashNavEnterOnline.h:180
extern char[] KAC_TEXTFIELD_COMPONENT;

// BrnCrashNavEnterOnline.h:181
extern char[] KAC_MESSAGE_BUTTONS_COMPONENT;

// BrnCrashNavEnterOnline.h:182
extern char[] KAC_TOS_QUESTION_COMPONENT;

// BrnCrashNavEnterOnline.h:183
extern char[] KAC_TOS_TEXT_COMPONENT;

// BrnCrashNavEnterOnline.h:184
extern char[] KAC_TOS_MENU_COMPONENT;

// BrnCrashNavEnterOnline.h:185
extern char[] KAC_SHARE_INFO_TOGGLES_COMPONENT;

// BrnCrashNavEnterOnline.h:186
extern char[] KAC_SHARE_INFO_OK_COMPONENT;

// BrnCrashNavEnterOnline.h:187
extern char[] KAC_SHARE_INFO_ANIMATION_COMPONENT;

// BrnCrashNavEnterOnline.h:188
extern char[] KAC_MESSAGE_ANIMATION_COMPONENT;

// BrnCrashNavEnterOnline.h:189
extern char[] KAC_MESSAGE_BUTTONS_ANIMATION_COMPONENT;

// BrnCrashNavEnterOnline.h:190
extern char[] KAC_TOS_DISPLAY_ANIMATION_COMPONENT;

// BrnCrashNavEnterOnline.h:191
extern char[] KAC_BUTTON_PROMPT_ANIMATION_COMPONENT;

// BrnCrashNavEnterOnline.h:192
extern char[] KAC_SIGN_IN_BACKGROUND_ANIMATION_COMPONENT;

// BrnCrashNavEnterOnline.h:195
extern char[] KAC_CONNECTING_STRING_ID;

// BrnCrashNavEnterOnline.h:196
extern char[] KAC_DISCONNECTED_STRING_ID;

// BrnCrashNavEnterOnline.h:197
extern char[] KAC_DISCONNECTED_WITH_REASON_STRING_ID;

// BrnCrashNavEnterOnline.h:198
extern char[] KAC_TOS_TEXT_STRING_ID;

// BrnCrashNavEnterOnline.h:199
extern char[] KAC_CREATE_ACCOUNT_TITLE_STRING_ID;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavEnterOnlineBase {
	public:
		// BrnCrashNavEnterOnline.h:114
		virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

	protected:
		// BrnCrashNavEnterOnline.h:370
		void SetIsInvalidatingCollisionWorld(bool);

		// BrnCrashNavEnterOnline.h:130
		extern const char *[4] KAPC_ANIMATION_STATES;

	private:
		// BrnCrashNavEnterOnline.h:169
		extern int32_t[] maiEventToObserve;

		// BrnCrashNavEnterOnline.h:170
		extern const int32_t miNumEventsObserved;

		// BrnCrashNavEnterOnline.h:171
		extern sResourceTuple[] maResourceTuplesToLoad;

		// BrnCrashNavEnterOnline.h:172
		extern const int32_t miNumResourcesToLoad;

		// BrnCrashNavEnterOnline.h:174
		extern const float32_t KF_MESSAGE_DISPLAY_WAIT_TIME;

		// BrnCrashNavEnterOnline.h:176
		extern const float32_t KF_TIME_TO_SCROLL_ONE_LINE;

		// BrnCrashNavEnterOnline.h:177
		extern const float32_t KF_AXIS_DEAD_ZONE;

		// BrnCrashNavEnterOnline.h:180
		extern char[] KAC_TEXTFIELD_COMPONENT;

		// BrnCrashNavEnterOnline.h:181
		extern char[] KAC_MESSAGE_BUTTONS_COMPONENT;

		// BrnCrashNavEnterOnline.h:182
		extern char[] KAC_TOS_QUESTION_COMPONENT;

		// BrnCrashNavEnterOnline.h:183
		extern char[] KAC_TOS_TEXT_COMPONENT;

		// BrnCrashNavEnterOnline.h:184
		extern char[] KAC_TOS_MENU_COMPONENT;

		// BrnCrashNavEnterOnline.h:185
		extern char[] KAC_SHARE_INFO_TOGGLES_COMPONENT;

		// BrnCrashNavEnterOnline.h:186
		extern char[] KAC_SHARE_INFO_OK_COMPONENT;

		// BrnCrashNavEnterOnline.h:187
		extern char[] KAC_SHARE_INFO_ANIMATION_COMPONENT;

		// BrnCrashNavEnterOnline.h:188
		extern char[] KAC_MESSAGE_ANIMATION_COMPONENT;

		// BrnCrashNavEnterOnline.h:189
		extern char[] KAC_MESSAGE_BUTTONS_ANIMATION_COMPONENT;

		// BrnCrashNavEnterOnline.h:190
		extern char[] KAC_TOS_DISPLAY_ANIMATION_COMPONENT;

		// BrnCrashNavEnterOnline.h:191
		extern char[] KAC_BUTTON_PROMPT_ANIMATION_COMPONENT;

		// BrnCrashNavEnterOnline.h:192
		extern char[] KAC_SIGN_IN_BACKGROUND_ANIMATION_COMPONENT;

		// BrnCrashNavEnterOnline.h:195
		extern char[] KAC_CONNECTING_STRING_ID;

		// BrnCrashNavEnterOnline.h:196
		extern char[] KAC_DISCONNECTED_STRING_ID;

		// BrnCrashNavEnterOnline.h:197
		extern char[] KAC_DISCONNECTED_WITH_REASON_STRING_ID;

		// BrnCrashNavEnterOnline.h:198
		extern char[] KAC_TOS_TEXT_STRING_ID;

		// BrnCrashNavEnterOnline.h:199
		extern char[] KAC_CREATE_ACCOUNT_TITLE_STRING_ID;

	}

}

// BrnCrashNavEnterOnline.h:130
extern const char *[4] KAPC_ANIMATION_STATES;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CrashNavEnterOnlineBase {
		// BrnCrashNavEnterOnline.h:122
		enum ESignInType {
			E_SIGN_IN_TYPE_FULL = 0,
			E_SIGN_IN_TYPE_NO_TITLE = 1,
			E_SIGN_IN_TYPE_COUNT = 2,
		}

		// BrnCrashNavEnterOnline.h:156
		enum ESubState {
			E_SUBSTATE_LOADING_SCREEN = 0,
			E_SUBSTATE_LOADING_COMPONENTS = 1,
			E_SUBSTATE_CONNECTING = 2,
			E_SUBSTATE_LOGIN_QUESTION = 3,
			E_SUBSTATE_DISCONNECTED = 4,
			E_SUBSTATE_LOGIN_ERROR = 5,
			E_SUBSTATE_COUNT = 6,
		}

	}

}

// BrnCrashNavEnterOnline.h:47
struct BrnGui::CrashNavEnterOnlineBase : public CgsGui::State {
protected:
	// BrnCrashNavEnterOnline.cpp:118
	extern const char *[4] KAPC_ANIMATION_STATES;

	// BrnCrashNavEnterOnline.h:132
	BrnGui::AnimationComponent mSignInBackgroundAnimation;

	// BrnCrashNavEnterOnline.h:134
	BrnGui::GuiCache * mpGuiCache;

	// BrnCrashNavEnterOnline.h:135
	CgsGui::ELoginQuestion meCurrentLoginQuestion;

	// BrnCrashNavEnterOnline.h:137
	BrnGui::CrashNavEnterOnlineBase::ESignInType meSignInType;

private:
	// BrnCrashNavEnterOnline.cpp:29
	extern const int32_t[12] maiEventToObserve;

	// BrnCrashNavEnterOnline.cpp:45
	extern const int32_t miNumEventsObserved = 12;

	// BrnCrashNavEnterOnline.cpp:47
	extern const sResourceTuple[1] maResourceTuplesToLoad;

	// BrnCrashNavEnterOnline.cpp:52
	extern const int32_t miNumResourcesToLoad = 1;

	// BrnCrashNavEnterOnline.cpp:54
	extern const float32_t KF_MESSAGE_DISPLAY_WAIT_TIME;

	// BrnCrashNavEnterOnline.cpp:128
	extern const float32_t KF_TIME_TO_SCROLL_ONE_LINE;

	// BrnCrashNavEnterOnline.cpp:129
	extern const float32_t KF_AXIS_DEAD_ZONE;

	// BrnCrashNavEnterOnline.cpp:57
	extern const char[12] KAC_TEXTFIELD_COMPONENT;

	// BrnCrashNavEnterOnline.cpp:58
	extern const char[7] KAC_MESSAGE_BUTTONS_COMPONENT;

	// BrnCrashNavEnterOnline.cpp:59
	extern const char[12] KAC_TOS_QUESTION_COMPONENT;

	// BrnCrashNavEnterOnline.cpp:60
	extern const char[8] KAC_TOS_TEXT_COMPONENT;

	// BrnCrashNavEnterOnline.cpp:61
	extern const char[10] KAC_TOS_MENU_COMPONENT;

	// BrnCrashNavEnterOnline.cpp:62
	extern const char[10] KAC_SHARE_INFO_TOGGLES_COMPONENT;

	// BrnCrashNavEnterOnline.cpp:63
	extern const char[13] KAC_SHARE_INFO_OK_COMPONENT;

	// BrnCrashNavEnterOnline.cpp:64
	extern const char[20] KAC_SHARE_INFO_ANIMATION_COMPONENT;

	// BrnCrashNavEnterOnline.cpp:65
	extern const char[22] KAC_MESSAGE_ANIMATION_COMPONENT;

	// BrnCrashNavEnterOnline.cpp:66
	extern const char[25] KAC_MESSAGE_BUTTONS_ANIMATION_COMPONENT;

	// BrnCrashNavEnterOnline.cpp:67
	extern const char[14] KAC_TOS_DISPLAY_ANIMATION_COMPONENT;

	// BrnCrashNavEnterOnline.cpp:68
	extern const char[23] KAC_BUTTON_PROMPT_ANIMATION_COMPONENT;

	// BrnCrashNavEnterOnline.cpp:69
	extern const char[27] KAC_SIGN_IN_BACKGROUND_ANIMATION_COMPONENT;

	// BrnCrashNavEnterOnline.cpp:72
	extern const char[13] KAC_CONNECTING_STRING_ID;

	// BrnCrashNavEnterOnline.cpp:73
	extern const char[10] KAC_DISCONNECTED_STRING_ID;

	// BrnCrashNavEnterOnline.cpp:74
	extern const char[13] KAC_DISCONNECTED_WITH_REASON_STRING_ID;

	// BrnCrashNavEnterOnline.cpp:75
	extern const char[10] KAC_TOS_TEXT_STRING_ID;

	// BrnCrashNavEnterOnline.cpp:76
	extern const char[35] KAC_CREATE_ACCOUNT_TITLE_STRING_ID;

	// BrnCrashNavEnterOnline.cpp:89
	extern const char *[2] KAPC_TOS_BUTTON_STRING_ID;

	// BrnCrashNavEnterOnline.cpp:95
	extern const char *[2] KAPC_YES_NO_BUTTON_STRING_ID;

	// BrnCrashNavEnterOnline.cpp:101
	extern const char *[2] KAPC_RETRY_CANCEL_BUTTON_STRING_ID;

	// BrnCrashNavEnterOnline.cpp:107
	extern const char *[2] KAPC_SUBMIT_CANCEL_BUTTON_STRING_ID;

	// BrnCrashNavEnterOnline.cpp:113
	extern const char *[1] KAPC_OK_BUTTON_STRING_ID;

	// BrnCrashNavEnterOnline.cpp:78
	extern const char *[7] KAPC_LOGIN_QUESTION_STRING_ID;

	// BrnCrashNavEnterOnline.h:208
	void (*)()[7] maShowControlsFunc;

	// BrnCrashNavEnterOnline.h:211
	BrnGui::AnimationComponent mMessageAnimation;

	// BrnCrashNavEnterOnline.h:212
	BrnGui::AnimationComponent mMessageButtonsAnimation;

	// BrnCrashNavEnterOnline.h:213
	BrnGui::AnimationComponent mTOSDisplayAnimation;

	// BrnCrashNavEnterOnline.h:214
	BrnGui::AnimationComponent mShareInfoTogglesAnimation;

	// BrnCrashNavEnterOnline.h:215
	BrnGui::AnimationComponent mButtonPromptAnimation;

	// BrnCrashNavEnterOnline.h:217
	BrnGui::TextField mMessageText;

	// BrnCrashNavEnterOnline.h:218
	BrnGui::MenuComponent mMessageButtons;

	// BrnCrashNavEnterOnline.h:221
	BrnGui::TextField mTOSQuestion;

	// BrnCrashNavEnterOnline.h:222
	BrnGui::TextField mTOSText;

	// BrnCrashNavEnterOnline.h:225
	BrnGui::MenuToggleGroup mShareInfoToggles;

	// BrnCrashNavEnterOnline.h:227
	GuiEventNetworkDisconnected mCachedHandleDisconnectEvent;

	// BrnCrashNavEnterOnline.h:229
	int32_t miNumFilesToLoad;

	// BrnCrashNavEnterOnline.h:230
	float32_t mfTimeInState;

	// BrnCrashNavEnterOnline.h:232
	float32_t mfScrollAmount;

	// BrnCrashNavEnterOnline.h:233
	float32_t mfLastAxisValue;

	// BrnCrashNavEnterOnline.h:235
	BrnGui::CrashNavEnterOnlineBase::ESubState meSubState;

	// BrnCrashNavEnterOnline.h:237
	bool mbJunkyardEntered;

	// BrnCrashNavEnterOnline.h:238
	bool mbIgnoreDisconnectedPopup;

	// BrnCrashNavEnterOnline.h:239
	bool mbIsInvalidatingCollisionWorld;

	// BrnCrashNavEnterOnline.h:240
	bool mbCachedDisconnectEventToHandle;

public:
	// BrnCrashNavEnterOnline.cpp:148
	virtual void OnEnter();

	// BrnCrashNavEnterOnline.cpp:237
	virtual void OnLeave();

	// BrnCrashNavEnterOnline.cpp:269
	virtual void Update();

	// BrnCrashNavEnterOnline.h:114
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

protected:
	// BrnCrashNavEnterOnline.cpp:1068
	void AnswerLoginQuestion(bool, bool);

	// BrnCrashNavEnterOnline.h:370
	void SetIsInvalidatingCollisionWorld(bool);

private:
	// BrnCrashNavEnterOnline.cpp:201
	void InitialiseFunctionArrays();

	// BrnCrashNavEnterOnline.cpp:746
	void CheckForCompletedLoads();

	// BrnCrashNavEnterOnline.cpp:817
	void ProcessComponentLoads(const CgsModule::Event *);

	// BrnCrashNavEnterOnline.cpp:451
	void HandleGuiCacheEvent(const GuiEventCache *);

	// BrnCrashNavEnterOnline.cpp:488
	void HandleControllerInput(const CgsModule::Event *);

	// BrnCrashNavEnterOnline.cpp:714
	void HandleLoginErrorInput(const GuiEventControllerInputPressed *);

	// BrnCrashNavEnterOnline.cpp:606
	void HandleLoginInput(const GuiEventControllerInputPressed *);

	// BrnCrashNavEnterOnline.cpp:547
	void HandleLoginInputShareInfo(const GuiEventControllerInputPressed *);

	// BrnCrashNavEnterOnline.cpp:658
	void HandleLoginInputShowSignIn(const GuiEventControllerInputPressed *);

	// BrnCrashNavEnterOnline.cpp:833
	void HandleShowLoginQuestion(const CgsModule::Event *);

	// BrnCrashNavEnterOnline.cpp:873
	void HandleDisconnectedEvent(const CgsModule::Event *);

	// BrnCrashNavEnterOnline.cpp:967
	virtual void HandleCollisionWorldEvent(const GuiEventRequestCollisionWorldEvent *);

	// BrnCrashNavEnterOnline.cpp:981
	void HandleOverlayCompleteEvent(const GuiOverlayCompleteEvent *);

	// BrnCrashNavEnterOnline.cpp:1032
	void HandleControllerAxis(const GuiEventControllerAxis *);

	// BrnCrashNavEnterOnline.cpp:1095
	void ShowTOS();

	// BrnCrashNavEnterOnline.cpp:1158
	void ShowShareInfo();

	// BrnCrashNavEnterOnline.cpp:1185
	void ShowCreateAccount();

	// BrnCrashNavEnterOnline.cpp:1217
	void ShowOpenAccountInUS();

	// BrnCrashNavEnterOnline.cpp:1370
	void ShowConnectingMessage();

	// BrnCrashNavEnterOnline.cpp:1249
	void ShowNoAgreement();

	// BrnCrashNavEnterOnline.cpp:1280
	void ShowChatRestrictedPopup();

	// BrnCrashNavEnterOnline.cpp:1312
	void ShowLoginError(int32_t);

	// BrnCrashNavEnterOnline.cpp:1127
	void ShowSignIn();

	// BrnCrashNavEnterOnline.h:349
	virtual void ShowSignInUI();

	// BrnCrashNavEnterOnline.cpp:1399
	void HideAllComponents();

	// BrnCrashNavEnterOnline.cpp:1418
	void HandleEnteringJunkyard();

}

// BrnCrashNavEnterOnline.h:153
struct {
	// BrnCrashNavEnterOnline.h:153
	void (*)() __pfn;

	// BrnCrashNavEnterOnline.h:153
	int __delta;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavEnterOnlineBase {
	public:
		CrashNavEnterOnlineBase();

	private:
		// BrnCrashNavEnterOnline.h:169
		extern int32_t[] maiEventToObserve;

		// BrnCrashNavEnterOnline.h:170
		extern const int32_t miNumEventsObserved;

		// BrnCrashNavEnterOnline.h:171
		extern sResourceTuple[] maResourceTuplesToLoad;

		// BrnCrashNavEnterOnline.h:172
		extern const int32_t miNumResourcesToLoad;

		// BrnCrashNavEnterOnline.h:174
		extern const float32_t KF_MESSAGE_DISPLAY_WAIT_TIME;

		// BrnCrashNavEnterOnline.h:176
		extern const float32_t KF_TIME_TO_SCROLL_ONE_LINE;

		// BrnCrashNavEnterOnline.h:177
		extern const float32_t KF_AXIS_DEAD_ZONE;

		// BrnCrashNavEnterOnline.h:180
		extern char[] KAC_TEXTFIELD_COMPONENT;

		// BrnCrashNavEnterOnline.h:181
		extern char[] KAC_MESSAGE_BUTTONS_COMPONENT;

		// BrnCrashNavEnterOnline.h:182
		extern char[] KAC_TOS_QUESTION_COMPONENT;

		// BrnCrashNavEnterOnline.h:183
		extern char[] KAC_TOS_TEXT_COMPONENT;

		// BrnCrashNavEnterOnline.h:184
		extern char[] KAC_TOS_MENU_COMPONENT;

		// BrnCrashNavEnterOnline.h:185
		extern char[] KAC_SHARE_INFO_TOGGLES_COMPONENT;

		// BrnCrashNavEnterOnline.h:186
		extern char[] KAC_SHARE_INFO_OK_COMPONENT;

		// BrnCrashNavEnterOnline.h:187
		extern char[] KAC_SHARE_INFO_ANIMATION_COMPONENT;

		// BrnCrashNavEnterOnline.h:188
		extern char[] KAC_MESSAGE_ANIMATION_COMPONENT;

		// BrnCrashNavEnterOnline.h:189
		extern char[] KAC_MESSAGE_BUTTONS_ANIMATION_COMPONENT;

		// BrnCrashNavEnterOnline.h:190
		extern char[] KAC_TOS_DISPLAY_ANIMATION_COMPONENT;

		// BrnCrashNavEnterOnline.h:191
		extern char[] KAC_BUTTON_PROMPT_ANIMATION_COMPONENT;

		// BrnCrashNavEnterOnline.h:192
		extern char[] KAC_SIGN_IN_BACKGROUND_ANIMATION_COMPONENT;

		// BrnCrashNavEnterOnline.h:195
		extern char[] KAC_CONNECTING_STRING_ID;

		// BrnCrashNavEnterOnline.h:196
		extern char[] KAC_DISCONNECTED_STRING_ID;

		// BrnCrashNavEnterOnline.h:197
		extern char[] KAC_DISCONNECTED_WITH_REASON_STRING_ID;

		// BrnCrashNavEnterOnline.h:198
		extern char[] KAC_TOS_TEXT_STRING_ID;

		// BrnCrashNavEnterOnline.h:199
		extern char[] KAC_CREATE_ACCOUNT_TITLE_STRING_ID;

	}

}

// BrnCrashNavEnterOnline.h:47
void BrnGui::CrashNavEnterOnlineBase::CrashNavEnterOnlineBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

