// BrnBaseOkOverlayState.h:42
struct BrnGui::BaseOkOverlayState : public BrnGui::BaseOverlayState {
public:
	// BrnBaseOkOverlayState.h:48
	virtual void FillInPopupType();

	// BrnBaseOkOverlayState.cpp:40
	virtual bool UpdateRunning();

	// BrnBaseOkOverlayState.cpp:86
	virtual void SetupOverlay(const GuiOverlayFullInfoResponse *);

}

// BrnBaseOkOverlayState.h:42
void BrnGui::BaseOkOverlayState::BaseOkOverlayState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

