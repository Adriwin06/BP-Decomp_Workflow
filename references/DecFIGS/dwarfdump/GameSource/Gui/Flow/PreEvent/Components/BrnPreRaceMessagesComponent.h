// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct PreRaceMessagesComponent {
		// BrnPreRaceMessagesComponent.h:96
		enum EMessageState {
			E_MESSAGESTATE_TRANSIN = 0,
			E_MESSAGESTATE_VISIBLE = 1,
			E_MESSAGESTATE_TRANSOUT = 2,
			E_MESSAGESTATE_INVISIBLE = 3,
			E_MESSAGESTATE_COUNT = 4,
		}

		// BrnPreRaceMessagesComponent.h:107
		enum EMessageTextIndices {
			E_MSG_TEXT_TITLE = 0,
			E_MSG_TEXT_SUBTITLE_ONE = 1,
			E_MSG_TEXT_SUBTITLE_TWO = 2,
			E_MSG_TEXT_COUNT = 3,
		}

	}

}

// BrnPreRaceMessagesComponent.h:49
struct BrnGui::PreRaceMessagesComponent : public CgsGui::GuiComponent {
private:
	// BrnPreRaceMessagesComponent.h:91
	extern const int32_t KI_NUM_MESSAGE_TYPES = 3;

	// BrnPreRaceMessagesComponent.h:92
	float32_t[3] mfMsgTransInDurations;

	// BrnPreRaceMessagesComponent.h:93
	float32_t[3] mfMsgTransOutDurations;

	// BrnPreRaceMessagesComponent.h:117
	BrnGui::TextField mTitleTextfield;

	// BrnPreRaceMessagesComponent.h:118
	BrnGui::TextField mSubtitleTextfield;

	// BrnPreRaceMessagesComponent.cpp:29
	extern const char[13] KAC_TITLE_TEXTFIELD;

	// BrnPreRaceMessagesComponent.cpp:30
	extern const char[16] KAC_SUBTITLE_TEXTFIELD;

	// BrnPreRaceMessagesComponent.h:123
	BrnGui::PreRaceMessagesComponent::EMessageState meMessageState;

	// BrnPreRaceMessagesComponent.h:124
	int32_t miCurrentMessageIndex;

	// BrnPreRaceMessagesComponent.h:127
	GuiEventPreRaceMessages mPreRaceEvent;

	// BrnPreRaceMessagesComponent.h:129
	float32_t mfCurrentEventEndTime;

	// BrnPreRaceMessagesComponent.h:130
	float32_t mfSwitchSubtitleTime;

	// BrnPreRaceMessagesComponent.h:131
	float32_t mfTimeElapsedThisMsg;

public:
	// BrnPreRaceMessagesComponent.cpp:53
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnPreRaceMessagesComponent.cpp:94
	void Update(float32_t);

	// BrnPreRaceMessagesComponent.cpp:141
	void StoreMessageInformation(const GuiEventPreRaceMessages *);

	// BrnPreRaceMessagesComponent.cpp:173
	void StartMessage(int32_t, float32_t);

	// BrnPreRaceMessagesComponent.cpp:314
	void ProcessEndOfTransition();

	// BrnPreRaceMessagesComponent.h:158
	bool IsMessageShowing();

	// BrnPreRaceMessagesComponent.h:176
	void InitialiseTextOnLoad(const char *);

private:
	// BrnPreRaceMessagesComponent.cpp:276
	void EndMessage();

	// BrnPreRaceMessagesComponent.cpp:361
	void SetMessageText(BrnGui::PreRaceMessagesComponent::EMessageTextIndices);

}

// BrnPreRaceMessagesComponent.h:91
extern const int32_t KI_NUM_MESSAGE_TYPES = 3;

