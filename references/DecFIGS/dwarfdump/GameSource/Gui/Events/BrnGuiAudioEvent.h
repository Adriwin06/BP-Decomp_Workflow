// BrnGuiAudioEvent.h:43
struct BrnGui::GuiAudioTriggerEvent : public GuiEvent<452> {
	// BrnGuiAudioEvent.h:45
	extern const int32_t KI_EVENT_NAME_LENGTH = 32;

	// BrnGuiAudioEvent.h:80
	char[32] macComponent;

	// BrnGuiAudioEvent.h:81
	int32_t meAction;

	// BrnGuiAudioEvent.h:82
	char[32] macLabel;

	// BrnGuiAudioEvent.h:83
	char[32] macMovie;

public:
	// BrnGuiAudioEvent.h:58
	void Construct(const char *, const char *, const char *, const char *);

	// BrnGuiAudioEvent.h:69
	void Construct(int32_t, const char *, const char *, const char *);

	// BrnGuiAudioEvent.h:75
	void Construct(const char *, const char *);

}

// BrnGuiAudioEvent.h:102
struct BrnGui::GuiAudioEvent : public GuiEvent<451> {
private:
	// BrnGuiAudioEvent.h:145
	int32_t miComponentType;

	// BrnGuiAudioEvent.h:146
	int32_t miAction;

	// BrnGuiAudioEvent.h:147
	int32_t miAdditionalInformation;

	// BrnGuiAudioEvent.h:148
	CgsID mHudMessageId;

public:
	// BrnGuiAudioEvent.h:109
	void Construct(int32_t, int32_t, int32_t);

	// BrnGuiAudioEvent.h:116
	void ConstructHudMessage(int32_t, int32_t, int32_t, char *);

	// BrnGuiAudioEvent.h:123
	void ConstructHudMessage(int32_t, int32_t, int32_t, CgsID);

	// BrnGuiAudioEvent.h:129
	const int32_t GetComponentType() const;

	// BrnGuiAudioEvent.h:133
	const int32_t GetAction() const;

	// BrnGuiAudioEvent.h:137
	const int32_t GetAdditionalInformation() const;

	// BrnGuiAudioEvent.h:141
	const CgsID GetHudMessageId() const;

}

// BrnGuiAudioEvent.h:45
extern const int32_t KI_EVENT_NAME_LENGTH = 32;

// BrnGuiAudioEvent.h:43
struct BrnGui::GuiAudioTriggerEvent : public GuiEvent<452> {
	// BrnGuiAudioEvent.h:45
	extern const int32_t KI_EVENT_NAME_LENGTH = 32;

	// BrnGuiAudioEvent.h:80
	char[32] macComponent;

	// BrnGuiAudioEvent.h:81
	int32_t meAction;

	// BrnGuiAudioEvent.h:82
	char[32] macLabel;

	// BrnGuiAudioEvent.h:83
	char[32] macMovie;

public:
	// BrnGuiAudioEvent.h:58
	// Declaration
	void Construct(const char *, const char *, const char *, const char *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiAudioEvent.cpp:67
		using namespace CgsDev::Message;

	}

	// BrnGuiAudioEvent.h:69
	// Declaration
	void Construct(int32_t, const char *, const char *, const char *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiAudioEvent.cpp:108
		using namespace CgsDev::Message;

	}

	// BrnGuiAudioEvent.h:75
	// Declaration
	void Construct(const char *, const char *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiAudioEvent.cpp:142
		using namespace CgsDev::Message;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// BrnGuiAudioEvent.h:34
	extern bool gbAudioDebugMessaging;

}

// BrnGuiAudioEvent.h:34
extern bool gbAudioDebugMessaging;

