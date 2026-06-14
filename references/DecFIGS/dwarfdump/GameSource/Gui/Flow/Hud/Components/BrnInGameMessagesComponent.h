// BrnGuiEventTypes.h:28
namespace BrnGui {
	// BrnInGameMessagesComponent.h:54
	enum MessageState {
		E_MESSAGESTATE_NOMESSAGE = 0,
		E_MESSAGESTATE_WAITING = 1,
		E_MESSAGESTATE_TRANSIN = 2,
		E_MESSAGESTATE_VISIBLE = 3,
		E_MESSAGESTATE_TRANSOUT = 4,
	}

}

// BrnInGameMessagesComponent.h:85
struct BrnGui::InGameMessagesQueue {
	// BrnInGameMessagesComponent.h:87
	HudMessageEvent[2] maMessages;

	// BrnInGameMessagesComponent.h:88
	BrnGui::MessageState[2] maeMessageState;

	// BrnInGameMessagesComponent.h:90
	uint64_t muCurrentEventEndTime;

	// BrnInGameMessagesComponent.h:91
	uint8_t muCurrentMessageIndex;

public:
	// BrnInGameMessagesComponent.h:95
	void Construct();

	// BrnInGameMessagesComponent.h:99
	void ClearWaiting();

	// BrnInGameMessagesComponent.h:103
	void ClearPending();

}

// BrnInGameMessagesComponent.h:252
extern CgsLanguage::LanguageManager::ParameterFormatType[] KAE_PREFORMAT_PARAM_TYPE_CONVERSION;

// BrnInGameMessagesComponent.h:254
extern const int32_t KI_STRING_ID_LENGTH = 64;

// BrnInGameMessagesComponent.h:260
extern const int32_t KI_MAX_NUM_STRINGS = 3;

// CgsGuiShared.h:45
namespace BrnGui {
	// BrnInGameMessagesComponent.h:54
	enum MessageState {
		E_MESSAGESTATE_NOMESSAGE = 0,
		E_MESSAGESTATE_WAITING = 1,
		E_MESSAGESTATE_TRANSIN = 2,
		E_MESSAGESTATE_VISIBLE = 3,
		E_MESSAGESTATE_TRANSOUT = 4,
	}

}

// BrnInGameMessagesComponent.h:71
struct BrnGui::BaseInGameMessagesComponent : public BrnFlaptComponent {
}

// BrnInGameMessagesComponent.h:182
struct BrnGui::InGameMessagesComponent : public BaseInGameMessagesComponent {
private:
	// BrnInGameMessagesComponent.h:252
	extern CgsLanguage::LanguageManager::ParameterFormatType[] KAE_PREFORMAT_PARAM_TYPE_CONVERSION;

	// BrnInGameMessagesComponent.h:254
	extern const int32_t KI_STRING_ID_LENGTH = 64;

	// BrnInGameMessagesComponent.h:256
	extern const char *[] KAPC_GAMEMODE_ICON_NAMES;

	// BrnInGameMessagesComponent.h:258
	InGameMessagesQueue * mpInGameMessagesQueue;

	// BrnInGameMessagesComponent.h:260
	extern const int32_t KI_MAX_NUM_STRINGS = 3;

	// BrnInGameMessagesComponent.h:261
	extern const char *[3] KAPC_TEXTFIELD_NAMES;

	// BrnInGameMessagesComponent.h:266
	MovieClipRef mAnimationRef;

	// BrnInGameMessagesComponent.h:267
	MovieClipRef mIconRef;

	// BrnInGameMessagesComponent.h:269
	extern const char *[3] KAPC_TEXTFIELD_FIELD_NAMES;

	// BrnInGameMessagesComponent.h:270
	TextFieldRef[3] maTextFields;

	// BrnInGameMessagesComponent.h:273
	int32_t[3] maiCurrentStringParamCount;

	// BrnInGameMessagesComponent.h:274
	char[3][64] maacCurrentStringStringId;

	// BrnInGameMessagesComponent.h:275
	CgsLanguage::LanguageManager::ParameterFormatType[3][4] maaeCurrentStringParamTypes;

	// BrnInGameMessagesComponent.h:276
	char[3][4][64] maaacCurrentStringParams;

	// BrnInGameMessagesComponent.h:278
	const HudMessageController * mpMessageController;

	// BrnInGameMessagesComponent.h:279
	const HudMessageDirector * mpDirector;

	// BrnInGameMessagesComponent.h:281
	BrnGameState::GameStateModuleIO::EGameModeType meCurrentGameMode;

public:
	// BrnInGameMessagesComponent.h:190
	void Construct(const char *, StateInterface *, const char *);

	// BrnInGameMessagesComponent.h:197
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnInGameMessagesComponent.h:203
	void AddMessage(const CgsModule::Event *);

	// BrnInGameMessagesComponent.h:207
	void Update();

	// BrnInGameMessagesComponent.h:211
	void EndTransition();

	// BrnInGameMessagesComponent.h:216
	void SetController(const HudMessageController *);

	// BrnInGameMessagesComponent.h:221
	void SetDirector(const HudMessageDirector *);

	// BrnInGameMessagesComponent.h:226
	void RefreshString(int32_t);

	// BrnInGameMessagesComponent.h:239
	void SetInGameMessagesQueue(InGameMessagesQueue *);

	// BrnInGameMessagesComponent.h:244
	void SetGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnInGameMessagesComponent.h:248
	void TerminateMessages();

private:
	// BrnInGameMessagesComponent.h:286
	// Declaration
	void StartMessage(HudMessageEvent *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnInGameMessagesComponent.cpp:293
		using namespace CgsDev::Message;

	}

	// BrnInGameMessagesComponent.h:292
	void SendGameMessage(const char *, bool);

	// BrnInGameMessagesComponent.h:297
	void SetIcon(const char *);

	// BrnInGameMessagesComponent.h:302
	void QueueMessage(HudMessageEvent *);

	// BrnInGameMessagesComponent.h:306
	void EndMessage();

	// BrnInGameMessagesComponent.h:310
	uint8_t GetCurrentIndex() const;

	// BrnInGameMessagesComponent.h:314
	uint8_t GetNextIndex() const;

	// BrnInGameMessagesComponent.h:318
	void SwitchCurrentIndex();

	// BrnInGameMessagesComponent.h:323
	void UpdateInPlace(HudMessageEvent *);

	// BrnInGameMessagesComponent.h:328
	bool IsMessageUpdatable(CgsID) const;

	// BrnInGameMessagesComponent.h:337
	void TransitionCompleteCallback(void *, uint16_t);

}

// BrnInGameMessagesComponent.h:182
struct BrnGui::InGameMessagesComponent : public BaseInGameMessagesComponent {
private:
	// BrnInGameMessagesComponent.h:252
	extern CgsLanguage::LanguageManager::ParameterFormatType[] KAE_PREFORMAT_PARAM_TYPE_CONVERSION;

	// BrnInGameMessagesComponent.h:254
	extern const int32_t KI_STRING_ID_LENGTH = 64;

	// BrnInGameMessagesComponent.h:256
	extern const char *[] KAPC_GAMEMODE_ICON_NAMES;

	// BrnInGameMessagesComponent.h:258
	InGameMessagesQueue * mpInGameMessagesQueue;

	// BrnInGameMessagesComponent.h:260
	extern const int32_t KI_MAX_NUM_STRINGS = 3;

	// BrnInGameMessagesComponent.h:261
	extern const char *[3] KAPC_TEXTFIELD_NAMES;

	// BrnInGameMessagesComponent.h:266
	MovieClipRef mAnimationRef;

	// BrnInGameMessagesComponent.h:267
	MovieClipRef mIconRef;

	// BrnInGameMessagesComponent.h:269
	extern const char *[3] KAPC_TEXTFIELD_FIELD_NAMES;

	// BrnInGameMessagesComponent.h:270
	TextFieldRef[3] maTextFields;

	// BrnInGameMessagesComponent.h:273
	int32_t[3] maiCurrentStringParamCount;

	// BrnInGameMessagesComponent.h:274
	char[3][64] maacCurrentStringStringId;

	// BrnInGameMessagesComponent.h:275
	CgsLanguage::LanguageManager::ParameterFormatType[3][4] maaeCurrentStringParamTypes;

	// BrnInGameMessagesComponent.h:276
	char[3][4][64] maaacCurrentStringParams;

	// BrnInGameMessagesComponent.h:278
	const HudMessageController * mpMessageController;

	// BrnInGameMessagesComponent.h:279
	const HudMessageDirector * mpDirector;

	// BrnInGameMessagesComponent.h:281
	BrnGameState::GameStateModuleIO::EGameModeType meCurrentGameMode;

public:
	// BrnInGameMessagesComponent.h:190
	void Construct(const char *, StateInterface *, const char *);

	// BrnInGameMessagesComponent.h:197
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnInGameMessagesComponent.h:203
	void AddMessage(const CgsModule::Event *);

	// BrnInGameMessagesComponent.h:207
	void Update();

	// BrnInGameMessagesComponent.h:211
	void EndTransition();

	// BrnInGameMessagesComponent.h:216
	void SetController(const HudMessageController *);

	// BrnInGameMessagesComponent.h:221
	void SetDirector(const HudMessageDirector *);

	// BrnInGameMessagesComponent.h:226
	void RefreshString(int32_t);

	// BrnInGameMessagesComponent.h:239
	void SetInGameMessagesQueue(InGameMessagesQueue *);

	// BrnInGameMessagesComponent.h:244
	void SetGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnInGameMessagesComponent.h:248
	void TerminateMessages();

private:
	// BrnInGameMessagesComponent.h:286
	void StartMessage(HudMessageEvent *);

	// BrnInGameMessagesComponent.h:292
	void SendGameMessage(const char *, bool);

	// BrnInGameMessagesComponent.h:297
	void SetIcon(const char *);

	// BrnInGameMessagesComponent.h:302
	void QueueMessage(HudMessageEvent *);

	// BrnInGameMessagesComponent.h:306
	void EndMessage();

	// BrnInGameMessagesComponent.h:310
	uint8_t GetCurrentIndex() const;

	// BrnInGameMessagesComponent.h:314
	uint8_t GetNextIndex() const;

	// BrnInGameMessagesComponent.h:318
	void SwitchCurrentIndex();

	// BrnInGameMessagesComponent.h:323
	void UpdateInPlace(HudMessageEvent *);

	// BrnInGameMessagesComponent.h:328
	bool IsMessageUpdatable(CgsID) const;

	// BrnInGameMessagesComponent.h:337
	void TransitionCompleteCallback(void *, uint16_t);

}

