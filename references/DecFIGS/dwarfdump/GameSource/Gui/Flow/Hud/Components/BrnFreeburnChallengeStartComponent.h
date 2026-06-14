// BrnFreeburnChallengeStartComponent.h:54
struct BrnGui::FreeburnChallengeStartComponent : public CgsGui::GuiComponent {
private:
	// BrnFreeburnChallengeStartComponent.h:91
	bool mbActive;

	// BrnFreeburnChallengeStartComponent.h:92
	bool mbDownL2;

	// BrnFreeburnChallengeStartComponent.h:93
	bool mbDownR2;

public:
	// BrnFreeburnChallengeStartComponent.cpp:42
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnFreeburnChallengeStartComponent.cpp:77
	void Show();

	// BrnFreeburnChallengeStartComponent.cpp:101
	void Hide();

	// BrnFreeburnChallengeStartComponent.cpp:126
	void HandleButtonPress(int32_t);

	// BrnFreeburnChallengeStartComponent.cpp:168
	void HandleButtonRelease(int32_t);

}

// BrnFreeburnChallengeStartComponent.h:54
void BrnGui::FreeburnChallengeStartComponent::FreeburnChallengeStartComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

