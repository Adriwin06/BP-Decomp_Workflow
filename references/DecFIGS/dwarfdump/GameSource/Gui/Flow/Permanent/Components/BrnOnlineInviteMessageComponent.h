// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct OnlineInviteMessageComponent {
		// BrnOnlineInviteMessageComponent.h:70
		enum EOnlineNotificationChyronType {
			E_ONLINENOTIFICATIONCHYRONTYPE_NONE = 0,
			E_ONLINENOTIFICATIONCHYRONTYPE_HOST_START_EVENT = 1,
			E_ONLINENOTIFICATIONCHYRONTYPE_BUDDY_ONLINE = 2,
			E_ONLINENOTIFICATIONCHYRONTYPE_NUM_BUDDIES_ONLINE = 3,
			E_ONLINENOTIFICATIONCHYRONTYPE_INVITE_RECEIVED = 4,
			E_ONLINENOTIFICATIONCHYRONTYPE_NEW_NEWS = 5,
			E_ONLINENOTIFICATIONCHYRONTYPE_COUNT = 6,
		}

		// BrnOnlineInviteMessageComponent.h:84
		enum EOnlineNotificationChyronSize {
			E_ONLINE_NOTIFICATION_CHYRON_SIZE_SMALL = 0,
			E_ONLINE_NOTIFICATION_CHYRON_SIZE_BIG = 1,
		}

		// BrnOnlineInviteMessageComponent.h:140
		enum EShowingState {
			E_SHOWINGSTATE_INVISIBLE = 0,
			E_SHOWINGSTATE_SHOWING = 1,
			E_SHOWINGSTATE_TRANSITIONING_OUT = 2,
			E_SHOWINGSTATE_COUNT = 3,
			E_SHOWINGSTATE_FIRST = 0,
		}

		// BrnOnlineInviteMessageComponent.h:151
		enum EMessagingAvailableState {
			E_MESSAGING_AVAILABLE_STATE_UNAVAILABLE = 0,
			E_MESSAGING_AVAILABLE_STATE_PRE_WAIT = 1,
			E_MESSAGING_AVAILABLE_STATE_AVAILABLE = 2,
			E_MESSAGING_AVAILABLE_STATE_COUNT = 3,
		}

	}

}

// BrnOnlineInviteMessageComponent.h:48
struct BrnGui::BaseOnlineInviteMessageComponent : public BrnFlaptComponent {
}

// BrnOnlineInviteMessageComponent.h:66
struct BrnGui::OnlineInviteMessageComponent : BaseOnlineInviteMessageComponent {
private:
	// BrnOnlineInviteMessageComponent.h:160
	extern const int32_t KI_MAX_NAME_LENGTH = 32;

	// BrnOnlineInviteMessageComponent.h:162
	extern char[] KAC_PLAYER_NAME_TEXTFIELD_NAME;

	// BrnOnlineInviteMessageComponent.h:163
	extern char[] KAC_NOTIFY_TYPE_TEXTFIELD_NAME;

	// BrnOnlineInviteMessageComponent.h:164
	extern const char *[] KAPC_TEXT_FIELDS_STINGS_0;

	// BrnOnlineInviteMessageComponent.h:165
	extern const char *[] KAPC_TEXT_FIELDS_STINGS_1;

	// BrnOnlineInviteMessageComponent.h:166
	extern const float32_t KF_MESSAGE_DURATION;

	// BrnOnlineInviteMessageComponent.h:167
	extern const float32_t KF_TIME_DELAY_BEFORE_ALLOWING_MESSAGES;

	// BrnOnlineInviteMessageComponent.h:169
	BrnGui::GuiCache * mpGuiCache;

	// BrnOnlineInviteMessageComponent.h:174
	TextFieldRef[2] maTextFields;

	// BrnOnlineInviteMessageComponent.h:177
	float32_t mfTimeToRemoveCurrentMessage;

	// BrnOnlineInviteMessageComponent.h:178
	float32_t mfTimeToAllowMessages;

	// BrnOnlineInviteMessageComponent.h:179
	BrnGui::OnlineInviteMessageComponent::EShowingState meShowingState;

	// BrnOnlineInviteMessageComponent.h:180
	BrnGui::OnlineInviteMessageComponent::EOnlineNotificationChyronType meShowingType;

	// BrnOnlineInviteMessageComponent.h:182
	BrnGui::OnlineInviteMessageComponent::EMessagingAvailableState meMessagesAvailable;

	// BrnOnlineInviteMessageComponent.h:183
	bool mbGameStarted;

	// BrnOnlineInviteMessageComponent.h:184
	BrnGui::OnlineInviteMessageComponent::EOnlineNotificationChyronType meQueuedType;

	// BrnOnlineInviteMessageComponent.h:185
	char[32] macQueuedName;

	// BrnOnlineInviteMessageComponent.h:186
	int32_t miQueuedCount;

	// BrnOnlineInviteMessageComponent.h:188
	bool mbOutputFinishEvent;

	// BrnOnlineInviteMessageComponent.h:190
	extern BrnGui::OnlineInviteMessageComponent::EOnlineNotificationChyronSize[] KAE_TYPE_SIZE_CONVERSION;

public:
	// BrnOnlineInviteMessageComponent.h:95
	void Construct(const char *, StateInterface *, const char *);

	// BrnOnlineInviteMessageComponent.h:103
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnOnlineInviteMessageComponent.h:109
	void Update();

	// BrnOnlineInviteMessageComponent.h:115
	void ShowMessage(const char *, BrnGui::OnlineInviteMessageComponent::EOnlineNotificationChyronType);

	// BrnOnlineInviteMessageComponent.h:121
	void ShowMessage(int32_t, BrnGui::OnlineInviteMessageComponent::EOnlineNotificationChyronType);

private:
	// BrnOnlineInviteMessageComponent.h:194
	bool IsMessageAllowed() const;

	// BrnOnlineInviteMessageComponent.h:198
	void AllowMessages();

	// BrnOnlineInviteMessageComponent.h:202
	void DisallowMessages();

	// BrnOnlineInviteMessageComponent.h:206
	void RemoveMessage();

	// BrnOnlineInviteMessageComponent.h:210
	void DoTransitionComplete();

	// BrnOnlineInviteMessageComponent.h:218
	void TransitionCompleteCallback(void *, uint16_t);

}

// BrnOnlineInviteMessageComponent.h:160
extern const int32_t KI_MAX_NAME_LENGTH = 32;

// BrnOnlineInviteMessageComponent.h:162
extern char[] KAC_PLAYER_NAME_TEXTFIELD_NAME;

// BrnOnlineInviteMessageComponent.h:163
extern char[] KAC_NOTIFY_TYPE_TEXTFIELD_NAME;

// BrnOnlineInviteMessageComponent.h:166
extern const float32_t KF_MESSAGE_DURATION;

// BrnOnlineInviteMessageComponent.h:167
extern const float32_t KF_TIME_DELAY_BEFORE_ALLOWING_MESSAGES;

// BrnOnlineInviteMessageComponent.h:190
extern BrnGui::OnlineInviteMessageComponent::EOnlineNotificationChyronSize[] KAE_TYPE_SIZE_CONVERSION;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineInviteMessageComponent {
		// BrnOnlineInviteMessageComponent.h:70
		enum EOnlineNotificationChyronType {
			E_ONLINENOTIFICATIONCHYRONTYPE_NONE = 0,
			E_ONLINENOTIFICATIONCHYRONTYPE_HOST_START_EVENT = 1,
			E_ONLINENOTIFICATIONCHYRONTYPE_BUDDY_ONLINE = 2,
			E_ONLINENOTIFICATIONCHYRONTYPE_NUM_BUDDIES_ONLINE = 3,
			E_ONLINENOTIFICATIONCHYRONTYPE_INVITE_RECEIVED = 4,
			E_ONLINENOTIFICATIONCHYRONTYPE_NEW_NEWS = 5,
			E_ONLINENOTIFICATIONCHYRONTYPE_COUNT = 6,
		}

		// BrnOnlineInviteMessageComponent.h:84
		enum EOnlineNotificationChyronSize {
			E_ONLINE_NOTIFICATION_CHYRON_SIZE_SMALL = 0,
			E_ONLINE_NOTIFICATION_CHYRON_SIZE_BIG = 1,
		}

		// BrnOnlineInviteMessageComponent.h:140
		enum EShowingState {
			E_SHOWINGSTATE_INVISIBLE = 0,
			E_SHOWINGSTATE_SHOWING = 1,
			E_SHOWINGSTATE_TRANSITIONING_OUT = 2,
			E_SHOWINGSTATE_COUNT = 3,
			E_SHOWINGSTATE_FIRST = 0,
		}

		// BrnOnlineInviteMessageComponent.h:151
		enum EMessagingAvailableState {
			E_MESSAGING_AVAILABLE_STATE_UNAVAILABLE = 0,
			E_MESSAGING_AVAILABLE_STATE_PRE_WAIT = 1,
			E_MESSAGING_AVAILABLE_STATE_AVAILABLE = 2,
			E_MESSAGING_AVAILABLE_STATE_COUNT = 3,
		}

	}

}

