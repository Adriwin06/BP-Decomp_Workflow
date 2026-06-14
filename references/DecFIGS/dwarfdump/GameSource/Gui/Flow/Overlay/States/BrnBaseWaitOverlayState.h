// BrnBaseWaitOverlayState.h:42
struct BrnGui::BaseWaitOverlayState : public BrnGui::BaseOverlayState {
public:
	// BrnBaseWaitOverlayState.h:48
	virtual void FillInPopupType();

	// BrnBaseWaitOverlayState.cpp:40
	virtual bool UpdateRunning();

	// BrnBaseWaitOverlayState.cpp:77
	virtual void SetupOverlay(const GuiOverlayFullInfoResponse *);

}

// BrnBaseWaitOverlayState.h:42
void BrnGui::BaseWaitOverlayState::BaseWaitOverlayState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

