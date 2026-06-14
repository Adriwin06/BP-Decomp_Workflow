// BrnOnlinePreEventMessages.h:76
extern const int32_t KI_NUM_MESSAGE_STRINGS = 3;

// BrnOnlinePreEventMessages.h:78
extern char[] KAC_STRING_TEXTFIELD_TEMPLATE;

// BrnOnlinePreEventMessages.h:46
struct BrnGui::OnlinePreEventMessages : public CgsGui::GuiComponent {
private:
	// BrnOnlinePreEventMessages.h:76
	extern const int32_t KI_NUM_MESSAGE_STRINGS = 3;

	// BrnOnlinePreEventMessages.cpp:23
	extern const char[12] KAC_STRING_TEXTFIELD_TEMPLATE;

	// BrnOnlinePreEventMessages.h:79
	BrnGui::TextField[3] maString;

	// BrnOnlinePreEventMessages.h:81
	bool mbIsShowing;

public:
	// BrnOnlinePreEventMessages.cpp:44
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnOnlinePreEventMessages.cpp:72
	void Show(const BrnGui::GuiEventPreRaceMessages::MessageInfo *);

	// BrnOnlinePreEventMessages.cpp:124
	void Hide();

	// BrnOnlinePreEventMessages.h:97
	bool IsShowing() const;

	// BrnOnlinePreEventMessages.cpp:146
	bool HandleLoadNotification(const char *);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlinePreEventMessages {
	public:
		// BrnOnlinePreEventMessages.h:97
		bool IsShowing() const;

	private:
		// BrnOnlinePreEventMessages.h:76
		extern const int32_t KI_NUM_MESSAGE_STRINGS = 3;

		// BrnOnlinePreEventMessages.h:78
		extern char[] KAC_STRING_TEXTFIELD_TEMPLATE;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlinePreEventMessages {
	public:
		OnlinePreEventMessages();

	private:
		// BrnOnlinePreEventMessages.h:76
		extern const int32_t KI_NUM_MESSAGE_STRINGS = 3;

		// BrnOnlinePreEventMessages.h:78
		extern char[] KAC_STRING_TEXTFIELD_TEMPLATE;

	}

}

// BrnOnlinePreEventMessages.h:46
void BrnGui::OnlinePreEventMessages::OnlinePreEventMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

