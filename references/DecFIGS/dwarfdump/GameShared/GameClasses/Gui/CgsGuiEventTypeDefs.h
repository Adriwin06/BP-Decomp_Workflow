// CgsGuiEventTypeDefs.h:57
extern const int32_t KI_STRING_LEN = 16;

// CgsGuiEventTypeDefs.h:168
extern const int32_t KI_MAX_ADD_ID_STRING_LENGTH = 128;

// CgsGuiEventTypeDefs.h:374
extern const int32_t KI_MAX_REASON_LENGTH = 128;

// CgsGuiEventTypeDefs.h:99
struct CgsGui::GuiEventControllerInputPressed : public GuiEvent<6> {
	// CgsGuiEventTypeDefs.h:101
	int32_t miPadId;

	// CgsGuiEventTypeDefs.h:102
	int32_t miButtonId;

}

// CgsGuiEventTypeDefs.h:206
struct CgsGui::GuiEventTimeInfo : public GuiEvent<26> {
private:
	// CgsGuiEventTypeDefs.h:228
	float32_t mfTimeStep;

	// CgsGuiEventTypeDefs.h:229
	float32_t mfTimeNow;

public:
	// CgsGuiEventTypeDefs.h:209
	void Construct();

	// CgsGuiEventTypeDefs.h:213
	float32_t GetTimeStep() const;

	// CgsGuiEventTypeDefs.h:217
	float32_t GetTime() const;

	// CgsGuiEventTypeDefs.h:221
	void SetTimeStep(float32_t);

	// CgsGuiEventTypeDefs.h:225
	void SetTime(float32_t);

}

// CgsGuiEventTypeDefs.h:80
extern const int32_t KI_INVALID_ACTIVE_USER_INDEX = 4294967295;

// CgsGuiEventTypeDefs.h:77
struct CgsGui::GuiEventActiveUserIndex : public GuiEvent<4> {
	// CgsGuiEventTypeDefs.h:80
	extern const int32_t KI_INVALID_ACTIVE_USER_INDEX = 4294967295;

	// CgsGuiEventTypeDefs.h:81
	int32_t miActiveUserIndex;

}

// CgsGuiEventTypeDefs.h:85
struct CgsGui::GuiEventControllerInputDown : public GuiEvent<5> {
	// CgsGuiEventTypeDefs.h:87
	int32_t miPadId;

	// CgsGuiEventTypeDefs.h:88
	int32_t miButtonId;

}

// CgsGuiEventTypeDefs.h:92
struct CgsGui::GuiEventControllerInputReleased : public GuiEvent<7> {
	// CgsGuiEventTypeDefs.h:94
	int32_t miPadId;

	// CgsGuiEventTypeDefs.h:95
	int32_t miButtonId;

}

// CgsGuiEventTypeDefs.h:106
struct CgsGui::GuiEventControllerAxis : public GuiEvent<8> {
	// CgsGuiEventTypeDefs.h:117
	int32_t miAxis;

	// CgsGuiEventTypeDefs.h:118
	float32_t mfXAxis;

	// CgsGuiEventTypeDefs.h:119
	float32_t mfYAxis;

}

// CgsGuiEventTypeDefs.h:123
struct CgsGui::GuiControllerDisconnected : public GuiEvent<9> {
	// CgsGuiEventTypeDefs.h:125
	int32_t miPlayer;

	// CgsGuiEventTypeDefs.h:126
	int32_t miPort;

}

// CgsGuiEventTypeDefs.h:274
struct CgsGui::GuiEventSetLanguage : public GuiEvent<28> {
	// CgsGuiEventTypeDefs.h:276
	CgsLanguage::ELanguage meLanguage;

}

// CgsGuiEventTypeDefs.h:335
struct CgsGui::GuiEventNetworkLaunching : public GuiEvent<57> {
	// CgsGuiEventTypeDefs.h:337
	int32_t miGameModeType;

	// CgsGuiEventTypeDefs.h:339
	RoadRulesRecvData::NetworkPlayerID mHostPlayerID;

}

// CgsGuiEventTypeDefs.h:335
struct CgsGui::GuiEventNetworkLaunching : public GuiEvent<57> {
	// CgsGuiEventTypeDefs.h:337
	int32_t miGameModeType;

	// CgsNetworkConstants.h:38
	typedef int32_t NetworkPlayerID;

	// CgsGuiEventTypeDefs.h:339
	GuiEventNetworkLaunching::NetworkPlayerID mHostPlayerID;

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsGuiEventTypeDefs.h:41
	enum LocaliseFormat {
		E_LOCALISEFORMAT_TIME_MINS_AND_SECS = 0,
		E_LOCALISEFORMAT_TIME_SECS = 1,
		E_LOCALISEFORMAT_COUNT = 2,
	}

	// Declaration
	struct GuiEventClearScreenSet {
		// CgsGuiEventTypeDefs.h:135
		enum EClearScreen {
			E_CLEAR_SCREEN_ACTIVE = 0,
			E_CLEAR_SCREEN_INACTIVE = 1,
			E_CLEAR_SCREEN_MAX = 2,
		}

	}

}

// CgsGuiEventTypeDefs.h:130
struct CgsGui::GuiEventClearScreenSet : public GuiEvent<25> {
	// CgsGuiEventTypeDefs.h:143
	CgsGui::GuiEventClearScreenSet::EClearScreen meClearScreen;

	// CgsGuiEventTypeDefs.h:144
	float32_t mfAlpha;

public:
	// CgsGuiEventTypeDefs.h:132
	void GuiEventClearScreenSet();

}

// CgsGuiEventTypeDefs.h:156
struct CgsGui::GuiEventUpdateLocalisedCpt : public GuiEvent<10> {
	// CgsGuiEventTypeDefs.h:158
	extern const uint32_t KU_MAX_STRING_LENGTH = 128;

	// CgsGuiEventTypeDefs.h:159
	const char * macName;

	// CgsGuiEventTypeDefs.h:160
	const char * macVariable;

	// CgsGuiEventTypeDefs.h:161
	CgsGui::LocaliseFormat meFormatType;

	// CgsGuiEventTypeDefs.h:162
	float32_t mfTimeInSecs;

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct GuiEventNetworkSuspension {
		// CgsGuiEventTypeDefs.h:360
		enum ESuspensionType {
			E_SUSPENSION_TYPE_SUSPEND = 0,
			E_SUSPENSION_TYPE_RESUME = 1,
			E_SUSPENSION_TYPE_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventNetworkLaunched {
		// CgsGuiEventTypeDefs.h:410
		enum ELaunchedStatus {
			E_LAUNCHED_STATUS_SUCCESS = 0,
			E_LAUNCHED_STATUS_NOT_ENOUGH_PLAYERS = 1,
			E_LAUNCHED_STATUS_STILL_CONNECTING = 2,
			E_LAUNCHED_STATUS_WAITING_FOR_ROUTES = 3,
			E_LAUNCHED_STATUS_NOT_ENOUGH_TEAMS = 4,
			E_LAUNCHED_STATUS_STILL_PLAYING = 5,
			E_LAUNCHED_STATUS_FAILED = 6,
			E_LAUNCHED_STATUS_COUNT = 7,
		}

	}

	// Declaration
	struct GuiEventNetworkInGameFailed {
		// CgsGuiEventTypeDefs.h:432
		enum EInGameFailReason {
			E_IN_GAME_FAIL_REASON_FULL = 0,
			E_IN_GAME_FAIL_REASON_STARTED = 1,
			E_IN_GAME_FAIL_REASON_UNKNOWN_GAME = 2,
			E_IN_GAME_FAIL_REASON_CREATE_GAME_FOR_INVITE_FAILED = 3,
			E_IN_GAME_FAIL_REASON_COUNT = 4,
		}

	}

}

// CgsGuiEventTypeDefs.h:344
struct CgsGui::GuiEventNetworkInGame : public GuiEvent<50> {
	// CgsGuiEventTypeDefs.h:346
	bool mbGameModified;

}

// CgsGuiEventTypeDefs.h:358
struct CgsGui::GuiEventNetworkSuspension : public GuiEvent<45> {
	// CgsGuiEventTypeDefs.h:368
	CgsGui::GuiEventNetworkSuspension::ESuspensionType meSuspensionType;

}

// CgsGuiEventTypeDefs.h:372
struct CgsGui::GuiEventNetworkDisconnected : public GuiEvent<44> {
	// CgsGuiEventTypeDefs.h:374
	extern const int32_t KI_MAX_REASON_LENGTH = 128;

	// CgsGuiEventTypeDefs.h:375
	char[128] macReason;

	// CgsGuiEventTypeDefs.h:376
	int32_t meLastError;

}

// CgsGuiEventTypeDefs.h:408
struct CgsGui::GuiEventNetworkLaunched : public GuiEvent<58> {
	// CgsGuiEventTypeDefs.h:424
	CgsGui::GuiEventNetworkLaunched::ELaunchedStatus meLaunchedStatus;

}

// CgsGuiEventTypeDefs.h:430
struct CgsGui::GuiEventNetworkInGameFailed : public GuiEvent<51> {
	// CgsGuiEventTypeDefs.h:442
	CgsGui::GuiEventNetworkInGameFailed::EInGameFailReason meFailReason;

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct GuiEventClearScreenSet {
		// CgsGuiEventTypeDefs.h:135
		enum EClearScreen {
			E_CLEAR_SCREEN_ACTIVE = 0,
			E_CLEAR_SCREEN_INACTIVE = 1,
			E_CLEAR_SCREEN_MAX = 2,
		}

	}

	// Declaration
	struct GuiEventNetworkSuspension {
		// CgsGuiEventTypeDefs.h:360
		enum ESuspensionType {
			E_SUSPENSION_TYPE_SUSPEND = 0,
			E_SUSPENSION_TYPE_RESUME = 1,
			E_SUSPENSION_TYPE_COUNT = 2,
		}

	}

	// CgsGuiEventTypeDefs.h:380
	enum ELoginQuestion {
		E_LOGIN_QUESTION_TOS = 0,
		E_LOGIN_QUESTION_CREATE_ACCOUNT = 1,
		E_LOGIN_QUESTION_SHARE = 2,
		E_LOGIN_QUESTION_OPEN_US_ACCOUNT = 3,
		E_LOGIN_QUESTION_NO_AGREEMENT = 4,
		E_LOGIN_QUESTION_SHOW_SIGN_IN = 5,
		E_LOGIN_QUESTION_CHAT_RESTRICTION = 6,
		E_LOGIN_QUESTION_COUNT = 7,
	}

	// Declaration
	struct GuiEventNetworkLaunched {
		// CgsGuiEventTypeDefs.h:410
		enum ELaunchedStatus {
			E_LAUNCHED_STATUS_SUCCESS = 0,
			E_LAUNCHED_STATUS_NOT_ENOUGH_PLAYERS = 1,
			E_LAUNCHED_STATUS_STILL_CONNECTING = 2,
			E_LAUNCHED_STATUS_WAITING_FOR_ROUTES = 3,
			E_LAUNCHED_STATUS_NOT_ENOUGH_TEAMS = 4,
			E_LAUNCHED_STATUS_STILL_PLAYING = 5,
			E_LAUNCHED_STATUS_FAILED = 6,
			E_LAUNCHED_STATUS_COUNT = 7,
		}

	}

	// Declaration
	struct GuiEventNetworkInGameFailed {
		// CgsGuiEventTypeDefs.h:432
		enum EInGameFailReason {
			E_IN_GAME_FAIL_REASON_FULL = 0,
			E_IN_GAME_FAIL_REASON_STARTED = 1,
			E_IN_GAME_FAIL_REASON_UNKNOWN_GAME = 2,
			E_IN_GAME_FAIL_REASON_CREATE_GAME_FOR_INVITE_FAILED = 3,
			E_IN_GAME_FAIL_REASON_COUNT = 4,
		}

	}

}

// CgsGuiEventTypeDefs.h:394
struct CgsGui::GuiEventShowLoginQuestion : public GuiEvent<47> {
	// CgsGuiEventTypeDefs.h:396
	CgsGui::ELoginQuestion meLoginQuestion;

}

// CgsGuiEventTypeDefs.h:400
struct CgsGui::GuiEventAnswerLoginQuestion : public GuiEvent<48> {
	// CgsGuiEventTypeDefs.h:402
	CgsGui::ELoginQuestion meLoginQuestion;

	// CgsGuiEventTypeDefs.h:403
	bool mbAccept;

	// CgsGuiEventTypeDefs.h:404
	bool mbAccept2;

}

// CgsGuiShared.h:40
namespace CgsGui {
	// Declaration
	struct GuiEventNetworkInGameFailed {
		// CgsGuiEventTypeDefs.h:432
		enum EInGameFailReason {
			E_IN_GAME_FAIL_REASON_FULL = 0,
			E_IN_GAME_FAIL_REASON_STARTED = 1,
			E_IN_GAME_FAIL_REASON_UNKNOWN_GAME = 2,
			E_IN_GAME_FAIL_REASON_CREATE_GAME_FOR_INVITE_FAILED = 3,
			E_IN_GAME_FAIL_REASON_COUNT = 4,
		}

	}

}

// CgsGuiEventTypeDefs.h:55
struct CgsGui::GuiEventStateChange : public GuiEvent<1> {
	// CgsGuiEventTypeDefs.h:57
	extern const int32_t KI_STRING_LEN = 16;

	// CgsGuiEventTypeDefs.h:59
	char[16] macMessage;

}

// CgsGuiEventTypeDefs.h:268
struct CgsGui::GuiEventSetSku : public GuiEvent<27> {
	// CgsGuiEventTypeDefs.h:270
	CgsLanguage::ESku meSku;

}

// CgsGuiEventTypeDefs.h:280
struct CgsGui::GuiEventSetLanguageNotification : public GuiEvent<29> {
	// CgsGuiEventTypeDefs.h:282
	CgsLanguage::ELanguage meLanguage;

}

// CgsGuiEventTypeDefs.h:287
struct CgsGui::GuiEventGetLanguage : public GuiEvent<31> {
	// CgsGuiEventTypeDefs.h:289
	CgsLanguage::ELanguage mLanguage;

}

// CgsGuiEventTypeDefs.h:305
struct CgsGui::GuiEventLoadingScreenState : public GuiEvent<33> {
	// CgsGuiEventTypeDefs.h:307
	bool mbIsVisible;

}

// CgsGuiEventTypeDefs.h:316
struct CgsGui::GuiViewEventFontCharSpacing : public GuiEvent<62> {
	// CgsGuiEventTypeDefs.h:318
	float32_t mfCharSpacingMultipler;

}

// CgsGuiEventTypeDefs.h:350
struct CgsGui::GuiEventNetworkConnected : public GuiEvent<43> {
	// CgsGuiEventTypeDefs.h:353
	bool mbIsFirstLogin;

	// CgsGuiEventTypeDefs.h:354
	bool mbIsNewsUpdated;

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct BrnNetworkModule {
	public:
		// BrnNetworkModule.h:538
		AggressiveMoveData::NetworkPlayerID GetNetworkPlayerID(EActiveRaceCarIndex);

		// BrnNetworkModule.h:545
		EActiveRaceCarIndex GetActiveRaceCarIndex(AggressiveMoveData::NetworkPlayerID);

		// BrnNetworkModule.h:446
		BrnNetwork::BrnNetworkManager * GetNetworkManager();

		// BrnNetworkModule.h:485
		NetworkToGameStateInterface * GetNetworkToGameStateInterface();

		// BrnNetworkModule.h:493
		GameStateToNetworkInterface * GetGameStateToNetworkInterface();

		// BrnNetworkModule.h:398
		const TrafficNetworkOutputInterface * GetTrafficOutputInterface() const;

		// BrnNetworkModule.h:390
		TrafficNetworkInputInterface * GetTrafficInputInterface();

		// BrnNetworkModule.h:414
		const NetworkOutputInterface * GetCrashOutputInterface() const;

		// BrnNetworkModule.h:406
		NetworkInputInterface * GetCrashInputInterface();

		// BrnNetworkModule.h:310
		const InputBuffer::TakedownEventQueue * GetTakedownEventInputQueue() const;

		// BrnNetworkModule.h:326
		BrnGameState::GameStateModuleIO::GameEventQueue * GetGameEventQueue();

		// BrnNetworkModule.h:477
		void AddOutputGuiEvent<BrnGui::GuiEventNetworkCustomMatchResults>(GuiEventNetworkCustomMatchResults &);

		// BrnNetworkModule.h:466
		GuiEventQueueSmall * GetOutputGuiEventQueue();

		// BrnNetworkModule.h:477
		void AddOutputGuiEvent<BrnGui::GuiEventNetworkPlayerImage>(GuiEventNetworkPlayerImage &);

		// BrnNetworkModule.h:477
		void AddOutputGuiEvent<BrnGui::GuiEventNetworkLeavingGameFailed>(GuiEventNetworkLeavingGameFailed &);

		// BrnNetworkModule.h:477
		void AddOutputGuiEvent<CgsGui::GuiEventAddLocalisedTextPointer>(GuiEventAddLocalisedTextPointer &);

		// BrnNetworkModule.h:477
		void AddOutputGuiEvent<BrnGui::GuiEventNetworkNewsAndTOS>(GuiEventNetworkNewsAndTOS &);

		// BrnNetworkModule.h:528
		NetworkEventQueue * GetNetworkEventQueue();

		// BrnNetworkModule.h:477
		void AddOutputGuiEvent<CgsGui::GuiEventNetworkConnected>(GuiEventNetworkConnected &);

		// BrnNetworkModule.h:477
		void AddOutputGuiEvent<CgsGui::GuiEventNetworkDisconnected>(GuiEventNetworkDisconnected &);

		// BrnNetworkModule.h:477
		void AddOutputGuiEvent<CgsGui::GuiEventNetworkInGame>(GuiEventNetworkInGame &);

		// BrnNetworkModule.h:477
		void AddOutputGuiEvent<CgsGui::GuiEventNetworkInGameFailed>(GuiEventNetworkInGameFailed &);

		// BrnNetworkModule.h:477
		// Declaration
		void AddOutputGuiEvent<CgsGui::GuiEventNetworkGoneOffline>(GuiEventNetworkGoneOffline &) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsGuiEventTypeDefs.h:326
			typedef GuiEvent<46> GuiEventNetworkGoneOffline;

		}

		// BrnNetworkModule.h:477
		void AddOutputGuiEvent<CgsGui::GuiEventNetworkLaunched>(GuiEventNetworkLaunched &);

		// BrnNetworkModule.h:477
		// Declaration
		void AddOutputGuiEvent<CgsGui::GuiEventNetworkLeavingGame>(GuiEventNetworkLeavingGame &) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// CgsGuiEventTypeDefs.h:328
			typedef GuiEvent<53> GuiEventNetworkLeavingGame;

		}

		// BrnNetworkModule.h:477
		void AddOutputGuiEvent<BrnGui::GuiEventNetworkPlayerStats>(GuiEventNetworkPlayerStats &);

		// BrnNetworkModule.h:421
		TimerStatusInterface * GetTimerStatusOutputInterface();

	}

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct GuiEventAddLocalisedTextPointer {
		// CgsGuiEventTypeDefs.h:170
		enum EOperation {
			E_OPERATION_ADD = 0,
			E_OPERATION_REMOVE = 1,
			E_OPERATION_COUNT = 2,
		}

	}

	// Declaration
	struct GuiEventNetworkSuspension {
		// CgsGuiEventTypeDefs.h:360
		enum ESuspensionType {
			E_SUSPENSION_TYPE_SUSPEND = 0,
			E_SUSPENSION_TYPE_RESUME = 1,
			E_SUSPENSION_TYPE_COUNT = 2,
		}

	}

	// CgsGuiEventTypeDefs.h:380
	enum ELoginQuestion {
		E_LOGIN_QUESTION_TOS = 0,
		E_LOGIN_QUESTION_CREATE_ACCOUNT = 1,
		E_LOGIN_QUESTION_SHARE = 2,
		E_LOGIN_QUESTION_OPEN_US_ACCOUNT = 3,
		E_LOGIN_QUESTION_NO_AGREEMENT = 4,
		E_LOGIN_QUESTION_SHOW_SIGN_IN = 5,
		E_LOGIN_QUESTION_CHAT_RESTRICTION = 6,
		E_LOGIN_QUESTION_COUNT = 7,
	}

	// Declaration
	struct GuiEventNetworkLaunched {
		// CgsGuiEventTypeDefs.h:410
		enum ELaunchedStatus {
			E_LAUNCHED_STATUS_SUCCESS = 0,
			E_LAUNCHED_STATUS_NOT_ENOUGH_PLAYERS = 1,
			E_LAUNCHED_STATUS_STILL_CONNECTING = 2,
			E_LAUNCHED_STATUS_WAITING_FOR_ROUTES = 3,
			E_LAUNCHED_STATUS_NOT_ENOUGH_TEAMS = 4,
			E_LAUNCHED_STATUS_STILL_PLAYING = 5,
			E_LAUNCHED_STATUS_FAILED = 6,
			E_LAUNCHED_STATUS_COUNT = 7,
		}

	}

	// Declaration
	struct GuiEventNetworkInGameFailed {
		// CgsGuiEventTypeDefs.h:432
		enum EInGameFailReason {
			E_IN_GAME_FAIL_REASON_FULL = 0,
			E_IN_GAME_FAIL_REASON_STARTED = 1,
			E_IN_GAME_FAIL_REASON_UNKNOWN_GAME = 2,
			E_IN_GAME_FAIL_REASON_CREATE_GAME_FOR_INVITE_FAILED = 3,
			E_IN_GAME_FAIL_REASON_COUNT = 4,
		}

	}

}

// CgsGuiEventTypeDefs.h:166
struct CgsGui::GuiEventAddLocalisedTextPointer : public GuiEvent<12> {
	// CgsGuiEventTypeDefs.h:168
	extern const int32_t KI_MAX_ADD_ID_STRING_LENGTH = 128;

	// CgsGuiEventTypeDefs.h:178
	char[128] macIdToAddToDatabase;

	// CgsGuiEventTypeDefs.h:179
	CgsGui::GuiEventAddLocalisedTextPointer::EOperation meOperation;

	// CgsGuiEventTypeDefs.h:180
	const UnicodeBuffer::CgsUtf8 * mpString;

}

// CgsGuiEventTypeDefs.h:185
struct CgsGui::GuiEventLocalisedTextPointerRemoved : public GuiEvent<13> {
private:
	// CgsGuiEventTypeDefs.h:199
	extern const int32_t KI_MAX_ADD_ID_STRING_LENGTH = 128;

	// CgsGuiEventTypeDefs.h:201
	uint32_t muStringHash;

public:
	// CgsGuiEventTypeDefs.h:191
	void SetStringRemoved(const char *);

	// CgsGuiEventTypeDefs.h:196
	bool IsThisTheRemovedString(const char *) const;

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsGuiEventTypeDefs.h:380
	enum ELoginQuestion {
		E_LOGIN_QUESTION_TOS = 0,
		E_LOGIN_QUESTION_CREATE_ACCOUNT = 1,
		E_LOGIN_QUESTION_SHARE = 2,
		E_LOGIN_QUESTION_OPEN_US_ACCOUNT = 3,
		E_LOGIN_QUESTION_NO_AGREEMENT = 4,
		E_LOGIN_QUESTION_SHOW_SIGN_IN = 5,
		E_LOGIN_QUESTION_CHAT_RESTRICTION = 6,
		E_LOGIN_QUESTION_COUNT = 7,
	}

}

// CgsGuiEventTypeDefs.h:294
struct CgsGui::GuiEventRequestLanguage : public GuiEvent<30> {
}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsGuiEventTypeDefs.h:41
	enum LocaliseFormat {
		E_LOCALISEFORMAT_TIME_MINS_AND_SECS = 0,
		E_LOCALISEFORMAT_TIME_SECS = 1,
		E_LOCALISEFORMAT_COUNT = 2,
	}

	// Declaration
	struct GuiEventClearScreenSet {
		// CgsGuiEventTypeDefs.h:135
		enum EClearScreen {
			E_CLEAR_SCREEN_ACTIVE = 0,
			E_CLEAR_SCREEN_INACTIVE = 1,
			E_CLEAR_SCREEN_MAX = 2,
		}

	}

	// Declaration
	struct GuiEventAddLocalisedTextPointer {
		// CgsGuiEventTypeDefs.h:170
		enum EOperation {
			E_OPERATION_ADD = 0,
			E_OPERATION_REMOVE = 1,
			E_OPERATION_COUNT = 2,
		}

	}

}

// CgsGuiEventTypeDefs.h:64
struct CgsGui::GuiEventPriorityRemoval : public GuiEvent<2> {
	// CgsGuiEventTypeDefs.h:66
	int32_t miRemovedEventId;

}

// CgsGuiEventTypeDefs.h:71
struct CgsGui::GuiEventPriorityBlocking : public GuiEvent<3> {
	// CgsGuiEventTypeDefs.h:73
	int32_t miBlockingEventId;

}

// CgsGuiEventTypeDefs.h:300
struct CgsGui::GuiEventSetCircleButtonConfig : public GuiEvent<32> {
}

// CgsGuiEventTypeDefs.h:158
extern const uint32_t KU_MAX_STRING_LENGTH = 128;

