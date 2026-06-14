// BrnBaseOkCancelOverlayState.h:42
struct BrnGui::BaseOkCancelOverlayState : public BrnGui::BaseOverlayState {
public:
	// BrnBaseOkCancelOverlayState.h:48
	virtual void FillInPopupType();

	// BrnBaseOkCancelOverlayState.cpp:40
	virtual bool UpdateRunning();

	// BrnBaseOkCancelOverlayState.cpp:103
	virtual void SetupOverlay(const GuiOverlayFullInfoResponse *);

}

// BrnBaseOkCancelOverlayState.h:42
void BrnGui::BaseOkCancelOverlayState::BaseOkCancelOverlayState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

