// BrnGuiHudMessagesDebugComponent.h:47
struct BrnGui::GuiHudMessagesDebugComponent : public CgsDev::DebugComponent {
protected:
	// BrnGuiHudMessagesDebugComponent.h:76
	HudMessageDirector * mpMessageDirector;

	// BrnGuiHudMessagesDebugComponent.h:77
	const HudMessageController * mpMessageController;

	// BrnGuiHudMessagesDebugComponent.h:78
	int32_t miMessageId;

	// BrnGuiHudMessagesDebugComponent.h:79
	int32_t miMessageGroup;

public:
	// BrnGuiHudMessagesDebugComponent.cpp:46
	void Construct(HudMessageDirector *);

	// BrnGuiHudMessagesDebugComponent.cpp:67
	void Destruct();

	// BrnGuiHudMessagesDebugComponent.h:164
	void SetController(const HudMessageController *);

	// BrnGuiHudMessagesDebugComponent.h:151
	bool ControllerIsValid() const;

protected:
	// BrnGuiHudMessagesDebugComponent.cpp:82
	virtual void OnActivate();

	// BrnGuiHudMessagesDebugComponent.h:89
	virtual const char * GetName() const;

	// BrnGuiHudMessagesDebugComponent.h:92
	virtual const char * GetPath() const;

	// BrnGuiHudMessagesDebugComponent.h:95
	virtual bool IsSimple() const;

	// BrnGuiHudMessagesDebugComponent.cpp:138
	void TriggerMessage(bool);

	// BrnGuiHudMessagesDebugComponent.cpp:200
	void SelectNextMessage();

	// BrnGuiHudMessagesDebugComponent.cpp:217
	void SelectPreviousMessage();

	// BrnGuiHudMessagesDebugComponent.cpp:236
	void TriggerMessageCallback(void *);

	// BrnGuiHudMessagesDebugComponent.cpp:250
	void TriggerMessageWithoutTimerCallback(void *);

	// BrnGuiHudMessagesDebugComponent.cpp:265
	void SelectNextMessageCallback(void *);

	// BrnGuiHudMessagesDebugComponent.cpp:280
	void SelectPreviousMessageCallback(void *);

}

// BrnGuiHudMessagesDebugComponent.h:47
void BrnGui::GuiHudMessagesDebugComponent::GuiHudMessagesDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

