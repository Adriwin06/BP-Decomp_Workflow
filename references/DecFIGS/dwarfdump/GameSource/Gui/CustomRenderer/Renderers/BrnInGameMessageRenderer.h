// BrnInGameMessageRenderer.h:170
extern const int32_t K_MESSAGE_LENGTH = 256;

// BrnInGameMessageRenderer.h:290
extern const int32_t K_MAX_INGAME_MESSAGES = 8;

// BrnInGameMessageRenderer.h:296
extern const float32_t K_MESSAGE_DELAY_TIME;

// BrnInGameMessageRenderer.h:297
extern const float32_t K_MESSAGE_FADEIN_TIME;

// BrnInGameMessageRenderer.h:298
extern const float32_t K_MESSAGE_FADEOUT_TIME;

// BrnInGameMessageRenderer.h:300
extern const float32_t K_BACKGROUND_MAX_ALPHA;

// BrnInGameMessageRenderer.h:301
extern const float32_t K_MESSAGE_MAX_ALPHA;

// BrnInGameMessageRenderer.h:309
extern char[] KAC_COPYRIGHT_STRING;

// BrnInGameMessageRenderer.h:310
extern char[] KAC_LATESTRULEBREAKERS_STRINGID;

// BrnInGameMessageRenderer.h:311
extern char[] KAC_AUTOSAVE_STRING;

// BrnInGameMessageRenderer.h:312
extern char[] KAC_RECONNECT_CONTROLLER_STRING;

// BrnInGameMessageRenderer.h:313
extern char[] KAC_RRULES_SCORE_FORMAT_STRINGID;

// BrnInGameMessageRenderer.h:314
extern char[] KAC_AUDIO_TRIGGER_LABEL;

// BrnInGameMessageRenderer.h:322
extern const int32_t KI_NUM_STARTENGINE_MESSAGES;

// BrnInGameMessageRenderer.h:323
extern const int32_t KI_NUM_OFFLINE_MESSAGES;

// BrnInGameMessageRenderer.h:324
extern const int32_t KI_NUM_SIGNEDIN_MESSAGES;

// BrnInGameMessageRenderer.h:325
extern const int32_t KI_NUM_BREAKINGNEWS_MESSAGES;

// BrnInGameMessageRenderer.h:326
extern const int32_t KI_NUM_ROADRULES_INTERVAL_MESSAGES;

// BrnInGameMessageRenderer.h:328
extern const int32_t KI_NUM_ROADRULES_BETWEEN_INTERVAL_MESSAGES;

// BrnInGameMessageRenderer.h:330
extern char[] KAC_TICKER_FONT_NAME;

// BrnInGameMessageRenderer.h:331
extern const float32_t K_FONT_HEIGHT;

// BrnInGameMessageRenderer.h:333
extern const float32_t K_MESSAGE_TOP;

// BrnInGameMessageRenderer.h:334
extern const float32_t K_MESSAGE_LEFT;

// BrnInGameMessageRenderer.h:335
extern const float32_t K_MESSAGE_RIGHT;

// BrnInGameMessageRenderer.h:337
extern const float32_t K_MESSAGE_HEIGHT;

// BrnInGameMessageRenderer.h:339
extern const float32_t K_MESSAGE_START_POS_X;

// BrnInGameMessageRenderer.h:340
extern const float32_t[8] K_MESSAGE_SCROLL_SPEED;

// BrnInGameMessageRenderer.h:341
extern const float32_t KF_DEFAULT_MESSAGE_GAP;

// BrnInGameMessageRenderer.h:344
extern const float32_t K_BACKGROUND_BORDER;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct InGameMessageRenderer {
		// BrnInGameMessageRenderer.h:51
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_DONE = 1,
		}

		// BrnInGameMessageRenderer.h:57
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_DONE = 1,
		}

		// BrnInGameMessageRenderer.h:104
		struct InGameMessage {
		private:
			// BrnInGameMessageRenderer.h:170
			extern const int32_t K_MESSAGE_LENGTH = 256;

			// BrnInGameMessageRenderer.h:171
			UnicodeBuffer::CgsUtf8[256] macMessageText;

			// BrnInGameMessageRenderer.h:172
			BrnGui::InGameMessageRenderer::InGameMessage * mpNextMessage;

			// BrnInGameMessageRenderer.h:173
			bool mbInUse;

			// BrnInGameMessageRenderer.h:174
			bool mbIsPriorityMessage;

			// BrnInGameMessageRenderer.h:175
			bool mbIsRoadRuleMessage;

			// BrnInGameMessageRenderer.h:176
			bool mbIsCustomMessage;

			// BrnInGameMessageRenderer.h:177
			bool mbIsTrainingMessage;

			// BrnInGameMessageRenderer.h:178
			bool mbIsChallengeMessage;

			// BrnInGameMessageRenderer.h:179
			bool mbRepeats;

			// BrnInGameMessageRenderer.h:180
			float32_t mfStringWidth;

			// BrnInGameMessageRenderer.h:181
			uint32_t muStringHash;

		public:
			// BrnInGameMessageRenderer.h:107
			void Construct();

			// BrnInGameMessageRenderer.h:121
			void SetupMessage(bool, bool, bool, bool, bool, bool, const UnicodeBuffer::CgsUtf8 *, int32_t, const UnicodeBuffer::CgsUtf8 *, const UnicodeBuffer::CgsUtf8 *, const UnicodeBuffer::CgsUtf8 *);

			// BrnInGameMessageRenderer.h:124
			const UnicodeBuffer::CgsUtf8 * GetText();

			// BrnInGameMessageRenderer.h:127
			BrnGui::InGameMessageRenderer::InGameMessage * GetNext() const;

			// BrnInGameMessageRenderer.h:131
			void SetNext(BrnGui::InGameMessageRenderer::InGameMessage *);

			// BrnInGameMessageRenderer.h:134
			bool GetInUse() const;

			// BrnInGameMessageRenderer.h:138
			void SetInUse(bool);

			// BrnInGameMessageRenderer.h:141
			float32_t GetStringWidth() const;

			// BrnInGameMessageRenderer.h:145
			void SetStringWidth(float32_t);

			// BrnInGameMessageRenderer.h:148
			bool GetIsRoadRuleMessage() const;

			// BrnInGameMessageRenderer.h:151
			bool GetIsCustomMessage() const;

			// BrnInGameMessageRenderer.h:154
			bool GetIsTrainingMessage() const;

			// BrnInGameMessageRenderer.h:157
			bool GetIsChallengeMessage() const;

			// BrnInGameMessageRenderer.h:160
			bool GetRepeats() const;

			// BrnInGameMessageRenderer.h:163
			bool GetIsPriorityMessage() const;

			// BrnInGameMessageRenderer.h:166
			uint32_t GetStringHash() const;

		}

		// BrnInGameMessageRenderer.h:184
		enum ETickerMode {
			E_TICKERMODE_NONE = 0,
			E_TICKERMODE_STARTENGINE = 1,
			E_TICKERMODE_OFFLINE = 2,
			E_TICKERMODE_SIGNEDIN = 3,
			E_TICKERMODE_ROADRULES = 4,
			E_TICKERMODE_CUSTOMMESSAGES = 5,
			E_TICKERMODE_AUTOSAVE_MESSAGE = 6,
			E_TICKERMODE_RECONNECT_CONTROLLER_MESSAGE = 7,
			E_TICKERMODE_NUM = 8,
		}

		// BrnInGameMessageRenderer.h:198
		enum EUpdateStage {
			E_UPDATESTAGE_NOTDISPLAYED = 0,
			E_UPDATESTAGE_FADINGIN = 1,
			E_UPDATESTAGE_DISPLAYING_MESSAGES = 2,
			E_UPDATESTAGE_DISPLAYING_ROADRULES = 3,
			E_UPDATESTAGE_DISPLAYING_AUTOSAVE_MESSAGE = 4,
			E_UPDATESTAGE_RECONNECT_CONTROLLER_MESSAGE = 5,
			E_UPDATESTAGE_FADINGOUT = 6,
			E_UPDATESTAGE_NUM = 7,
		}

	}

}

// BrnInGameMessageRenderer.h:48
struct BrnGui::InGameMessageRenderer : public CgsGui::CustomRenderComponentInterface {
private:
	// BrnInGameMessageRenderer.h:290
	extern const int32_t K_MAX_INGAME_MESSAGES = 8;

	// BrnInGameMessageRenderer.h:292
	BrnGui::InGameMessageRenderer::InGameMessage[8] maMessages;

	// BrnInGameMessageRenderer.h:293
	BrnGui::InGameMessageRenderer::InGameMessage mAutoSaveMessage;

	// BrnInGameMessageRenderer.h:294
	BrnGui::InGameMessageRenderer::InGameMessage * mpCurrentMessage;

	// BrnInGameMessageRenderer.cpp:39
	extern const float32_t K_MESSAGE_DELAY_TIME;

	// BrnInGameMessageRenderer.cpp:40
	extern const float32_t K_MESSAGE_FADEIN_TIME;

	// BrnInGameMessageRenderer.cpp:41
	extern const float32_t K_MESSAGE_FADEOUT_TIME;

	// BrnInGameMessageRenderer.cpp:45
	extern const float32_t K_BACKGROUND_MAX_ALPHA;

	// BrnInGameMessageRenderer.cpp:46
	extern const float32_t K_MESSAGE_MAX_ALPHA;

	// BrnInGameMessageRenderer.cpp:72
	extern RGBA K_BACKGROUND_COLOURS_BLACK;

	// BrnInGameMessageRenderer.cpp:73
	extern RGBA K_BACKGROUND_COLOURS_DARKORANGE;

	// BrnInGameMessageRenderer.cpp:74
	extern RGBA K_MARKER_COLOURS_GREY;

	// BrnInGameMessageRenderer.cpp:75
	extern RGBA K_MARKER_COLOURS_WHITE;

	// BrnInGameMessageRenderer.cpp:76
	extern RGBA K_MARKER_COLOURS_ORANGE;

	// BrnInGameMessageRenderer.cpp:82
	extern const char[72] KAC_COPYRIGHT_STRING;

	// BrnInGameMessageRenderer.cpp:83
	extern const char[24] KAC_LATESTRULEBREAKERS_STRINGID;

	// BrnInGameMessageRenderer.cpp:84
	extern const char[7] KAC_AUTOSAVE_STRING;

	// BrnInGameMessageRenderer.cpp:85
	extern const char[24] KAC_RECONNECT_CONTROLLER_STRING;

	// BrnInGameMessageRenderer.cpp:86
	extern const char[15] KAC_RRULES_SCORE_FORMAT_STRINGID;

	// BrnInGameMessageRenderer.cpp:87
	extern const char[11] KAC_AUDIO_TRIGGER_LABEL;

	// BrnInGameMessageRenderer.cpp:89
	extern const char *[1] KPAC_STARTENGINE_MESSAGES;

	// BrnInGameMessageRenderer.cpp:98
	extern const char *[3] KPAC_OFFLINE_MESSAGES;

	// BrnInGameMessageRenderer.cpp:109
	extern const char *[7] KPAC_SIGNEDIN_MESSAGES;

	// BrnInGameMessageRenderer.cpp:125
	extern const char *[4] KPAC_BREAKINGNEWS_MESSAGES_IDS;

	// BrnInGameMessageRenderer.cpp:133
	extern const char *[3] KPAC_ROADRULES_INTERVAL_MESSAGES_IDS;

	// BrnInGameMessageRenderer.cpp:140
	extern const int32_t KI_NUM_STARTENGINE_MESSAGES = 1;

	// BrnInGameMessageRenderer.cpp:141
	extern const int32_t KI_NUM_OFFLINE_MESSAGES = 3;

	// BrnInGameMessageRenderer.cpp:142
	extern const int32_t KI_NUM_SIGNEDIN_MESSAGES = 7;

	// BrnInGameMessageRenderer.cpp:143
	extern const int32_t KI_NUM_BREAKINGNEWS_MESSAGES = 4;

	// BrnInGameMessageRenderer.cpp:144
	extern const int32_t KI_NUM_ROADRULES_INTERVAL_MESSAGES = 3;

	// BrnInGameMessageRenderer.cpp:80
	extern const int32_t KI_NUM_ROADRULES_BETWEEN_INTERVAL_MESSAGES = 10;

	// BrnInGameMessageRenderer.cpp:78
	extern const char[9] KAC_TICKER_FONT_NAME;

	// BrnInGameMessageRenderer.cpp:43
	extern const float32_t K_FONT_HEIGHT;

	// BrnInGameMessageRenderer.cpp:48
	extern const float32_t K_MESSAGE_TOP;

	// BrnInGameMessageRenderer.cpp:49
	extern const float32_t K_MESSAGE_LEFT;

	// BrnInGameMessageRenderer.cpp:50
	extern const float32_t K_MESSAGE_RIGHT;

	// BrnInGameMessageRenderer.cpp:52
	extern const float32_t K_MESSAGE_HEIGHT;

	// BrnInGameMessageRenderer.cpp:54
	extern const float32_t K_MESSAGE_START_POS_X;

	// BrnInGameMessageRenderer.cpp:55
	extern const float32_t[8] K_MESSAGE_SCROLL_SPEED;

	// BrnInGameMessageRenderer.cpp:67
	extern const float32_t KF_DEFAULT_MESSAGE_GAP;

	// BrnInGameMessageRenderer.cpp:68
	extern float32_t mfMessageGap;

	// BrnInGameMessageRenderer.cpp:70
	extern const float32_t K_BACKGROUND_BORDER;

	// BrnInGameMessageRenderer.h:346
	BrnGui::InGameMessageRenderer::EPrepareStage mePrepareStage;

	// BrnInGameMessageRenderer.h:347
	BrnGui::InGameMessageRenderer::EUpdateStage meUpdateStage;

	// BrnInGameMessageRenderer.h:348
	BrnGui::InGameMessageRenderer::ETickerMode meTickerMode;

	// BrnInGameMessageRenderer.h:349
	BrnGui::InGameMessageRenderer::EReleaseStage meReleaseStage;

	// BrnInGameMessageRenderer.h:350
	rw::IResourceAllocator * mpHeapAllocator;

	// BrnInGameMessageRenderer.h:352
	BitArray<64u> mRoadRulesToShow;

	// BrnInGameMessageRenderer.h:354
	GuiEventQueueSmall * mpOutputEventQueue;

	// BrnInGameMessageRenderer.h:356
	Road::ChallengeIndex miLastRoadRuleScoreReceived;

	// BrnInGameMessageRenderer.h:358
	float32_t mfTextStartPosX;

	// BrnInGameMessageRenderer.h:359
	float32_t mfTextPosY;

	// BrnInGameMessageRenderer.h:362
	Resource mBlendStateResource;

	// BrnInGameMessageRenderer.h:363
	BlendState * mpBlendState;

	// BrnInGameMessageRenderer.h:365
	TextObject mTextObject;

	// BrnInGameMessageRenderer.h:366
	TextRenderer * mpTextRenderer;

	// BrnInGameMessageRenderer.h:367
	LanguageManager * mpLanguageManager;

	// BrnInGameMessageRenderer.h:369
	BrnGui::GuiCache * mpGuiCache;

	// BrnInGameMessageRenderer.h:371
	float32_t mfTimeRemainingInState;

	// BrnInGameMessageRenderer.h:372
	uint8_t mu8TextAlpha;

	// BrnInGameMessageRenderer.h:373
	uint8_t mu8BackgroundAlpha;

	// BrnInGameMessageRenderer.h:374
	uint8_t mu8BackgroundAlphaPeak;

	// BrnInGameMessageRenderer.h:376
	uint8_t mu8NextRoadRulesMessage;

	// BrnInGameMessageRenderer.h:377
	uint8_t mu8NextIntervalMessage;

	// BrnInGameMessageRenderer.h:379
	uint8_t mu8NumRoadRuleScoresShown;

	// BrnInGameMessageRenderer.h:381
	bool mbEnabled;

	// BrnInGameMessageRenderer.h:382
	bool mbGamePaused;

	// BrnInGameMessageRenderer.h:383
	bool mbGamePausedForDisconnect;

	// BrnInGameMessageRenderer.h:384
	bool mbShowingBreakingNews;

	// BrnInGameMessageRenderer.h:385
	bool mbShownStartEngineTip;

	// BrnInGameMessageRenderer.h:386
	bool mbShowAutoSaveMessage;

public:
	// BrnInGameMessageRenderer.cpp:165
	virtual void Construct();

	// BrnInGameMessageRenderer.cpp:233
	virtual bool Prepare(GuiEventQueueSmall *, rw::IResourceAllocator *, rw::IResourceAllocator *);

	// BrnInGameMessageRenderer.cpp:306
	virtual bool Release();

	// BrnInGameMessageRenderer.cpp:352
	virtual void Destruct();

	// BrnInGameMessageRenderer.cpp:390
	// Declaration
	virtual void RecvEvent(const CgsModule::Event *, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnInGameMessageRenderer.cpp:416
		using namespace CgsDev::Message;

		// BrnInGameMessageRenderer.cpp:424
		using namespace CgsDev::Message;

		// BrnInGameMessageRenderer.cpp:555
		using namespace CgsDev::Message;

		// BrnInGameMessageRenderer.cpp:608
		using namespace CgsDev::Message;

		// BrnInGameMessageRenderer.cpp:619
		using namespace CgsDev::Message;

		// BrnInGameMessageRenderer.cpp:632
		using namespace CgsDev::Message;

	}

	// BrnInGameMessageRenderer.cpp:370
	virtual void Update();

	// BrnInGameMessageRenderer.h:406
	virtual CgsGui::eCustomRenderLayer GetRenderLayer() const;

	// BrnInGameMessageRenderer.h:422
	void SetTextRenderer(TextRenderer *);

	// BrnInGameMessageRenderer.h:438
	void SetLanguageManager(LanguageManager *);

	// BrnInGameMessageRenderer.cpp:1091
	virtual CgsID GetID() const;

private:
	// BrnInGameMessageRenderer.cpp:771
	virtual void RenderComponent(ImRendererSet *);

	// BrnInGameMessageRenderer.cpp:1234
	void DrawBackground(CgsGraphics::Im2dRenderBuffer *);

	// BrnInGameMessageRenderer.cpp:1281
	void DrawMessages(CgsGraphics::Im2dRenderBuffer *);

	// BrnInGameMessageRenderer.cpp:1119
	// Declaration
	bool AddNewMessage(bool, bool, bool, bool, bool, bool, bool, const UnicodeBuffer::CgsUtf8 *, int32_t, const UnicodeBuffer::CgsUtf8 *, const UnicodeBuffer::CgsUtf8 *, const UnicodeBuffer::CgsUtf8 *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnInGameMessageRenderer.cpp:1166
		using namespace CgsDev::Message;

	}

	// BrnInGameMessageRenderer.cpp:1462
	void ClearAllMessages(bool, bool);

	// BrnInGameMessageRenderer.cpp:1513
	int32_t GetNumMessages() const;

	// BrnInGameMessageRenderer.cpp:1536
	int32_t GetNumRoadRuleMessages() const;

	// BrnInGameMessageRenderer.cpp:1562
	int32_t GetNumCustomMessages() const;

	// BrnInGameMessageRenderer.cpp:1587
	bool IsShowingTrainingTip() const;

	// BrnInGameMessageRenderer.cpp:1612
	void BufferMessagesForGameMode();

	// BrnInGameMessageRenderer.cpp:1744
	bool RequestNewRoadRulesScore();

	// BrnInGameMessageRenderer.cpp:1799
	void UpdateTickerMode();

	// BrnInGameMessageRenderer.cpp:1897
	void ResetYPos();

	// BrnInGameMessageRenderer.h:455
	void StartFadeOutIfDisplayingAnything();

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct InGameMessageRenderer {
	public:
		InGameMessageRenderer();

	private:
		// BrnInGameMessageRenderer.h:290
		extern const int32_t K_MAX_INGAME_MESSAGES = 8;

		// BrnInGameMessageRenderer.h:296
		extern const float32_t K_MESSAGE_DELAY_TIME;

		// BrnInGameMessageRenderer.h:297
		extern const float32_t K_MESSAGE_FADEIN_TIME;

		// BrnInGameMessageRenderer.h:298
		extern const float32_t K_MESSAGE_FADEOUT_TIME;

		// BrnInGameMessageRenderer.h:300
		extern const float32_t K_BACKGROUND_MAX_ALPHA;

		// BrnInGameMessageRenderer.h:301
		extern const float32_t K_MESSAGE_MAX_ALPHA;

		// BrnInGameMessageRenderer.h:309
		extern char[] KAC_COPYRIGHT_STRING;

		// BrnInGameMessageRenderer.h:310
		extern char[] KAC_LATESTRULEBREAKERS_STRINGID;

		// BrnInGameMessageRenderer.h:311
		extern char[] KAC_AUTOSAVE_STRING;

		// BrnInGameMessageRenderer.h:312
		extern char[] KAC_RECONNECT_CONTROLLER_STRING;

		// BrnInGameMessageRenderer.h:313
		extern char[] KAC_RRULES_SCORE_FORMAT_STRINGID;

		// BrnInGameMessageRenderer.h:314
		extern char[] KAC_AUDIO_TRIGGER_LABEL;

		// BrnInGameMessageRenderer.h:322
		extern const int32_t KI_NUM_STARTENGINE_MESSAGES;

		// BrnInGameMessageRenderer.h:323
		extern const int32_t KI_NUM_OFFLINE_MESSAGES;

		// BrnInGameMessageRenderer.h:324
		extern const int32_t KI_NUM_SIGNEDIN_MESSAGES;

		// BrnInGameMessageRenderer.h:325
		extern const int32_t KI_NUM_BREAKINGNEWS_MESSAGES;

		// BrnInGameMessageRenderer.h:326
		extern const int32_t KI_NUM_ROADRULES_INTERVAL_MESSAGES;

		// BrnInGameMessageRenderer.h:328
		extern const int32_t KI_NUM_ROADRULES_BETWEEN_INTERVAL_MESSAGES;

		// BrnInGameMessageRenderer.h:330
		extern char[] KAC_TICKER_FONT_NAME;

		// BrnInGameMessageRenderer.h:331
		extern const float32_t K_FONT_HEIGHT;

		// BrnInGameMessageRenderer.h:333
		extern const float32_t K_MESSAGE_TOP;

		// BrnInGameMessageRenderer.h:334
		extern const float32_t K_MESSAGE_LEFT;

		// BrnInGameMessageRenderer.h:335
		extern const float32_t K_MESSAGE_RIGHT;

		// BrnInGameMessageRenderer.h:337
		extern const float32_t K_MESSAGE_HEIGHT;

		// BrnInGameMessageRenderer.h:339
		extern const float32_t K_MESSAGE_START_POS_X;

		// BrnInGameMessageRenderer.h:340
		extern const float32_t[8] K_MESSAGE_SCROLL_SPEED;

		// BrnInGameMessageRenderer.h:341
		extern const float32_t KF_DEFAULT_MESSAGE_GAP;

		// BrnInGameMessageRenderer.h:344
		extern const float32_t K_BACKGROUND_BORDER;

	}

}

// BrnInGameMessageRenderer.h:48
void BrnGui::InGameMessageRenderer::InGameMessageRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

