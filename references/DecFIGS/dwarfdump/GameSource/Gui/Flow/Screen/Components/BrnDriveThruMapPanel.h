// BrnDriveThruMapPanel.h:48
struct BrnGui::DriveThruMapPanel : public BrnGui::IconComponent {
	// BrnDriveThruMapPanel.cpp:26
	extern const char *[1] KAPC_DRIVETHRU_FILTER_OPTIONS;

private:
	// BrnDriveThruMapPanel.cpp:31
	extern const char *[2] KAPC_TEXTFIELD_NAMES;

	// BrnDriveThruMapPanel.h:99
	BrnGui::TextField[2] maTextfields;

	// BrnDriveThruMapPanel.h:101
	CgsID mDriveThruID;

	// BrnDriveThruMapPanel.h:103
	bool mbActive;

public:
	// BrnDriveThruMapPanel.cpp:54
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnDriveThruMapPanel.cpp:86
	void AppendExpectedAptComponents(BrnGui::GuiFlow, BrnGui::GuiCache *);

	// BrnDriveThruMapPanel.cpp:110
	void SetDriveThruData(CgsID);

	// BrnDriveThruMapPanel.h:116
	void TransitionIn();

	// BrnDriveThruMapPanel.h:132
	void TransitionOut();

}

// BrnDriveThruMapPanel.h:48
void BrnGui::DriveThruMapPanel::DriveThruMapPanel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

