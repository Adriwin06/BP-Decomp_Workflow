// BrnCarSelectOnlinePlayerListItem.h:97
extern char[] KAC_GAMERTAG_TEXTFIELD_NAME;

// BrnCarSelectOnlinePlayerListItem.h:100
extern char[] KAC_CAR_TEXTFIELD_NAME;

// BrnCarSelectOnlinePlayerListItem.h:53
struct BrnGui::CarSelectOnlinePlayerListItem : public CgsGui::GuiComponent {
private:
	// BrnCarSelectOnlinePlayerListItem.cpp:23
	extern const char[12] KAC_GAMERTAG_TEXTFIELD_NAME;

	// BrnCarSelectOnlinePlayerListItem.h:98
	BrnGui::TextField mGamertagTextfield;

	// BrnCarSelectOnlinePlayerListItem.cpp:24
	extern const char[11] KAC_CAR_TEXTFIELD_NAME;

	// BrnCarSelectOnlinePlayerListItem.h:101
	BrnGui::TextField mCarTextfield;

	// BrnCarSelectOnlinePlayerListItem.h:103
	CgsID mCurrentCarID;

	// BrnCarSelectOnlinePlayerListItem.h:104
	bool mbVisible;

	// BrnCarSelectOnlinePlayerListItem.h:105
	bool mbFinalSelection;

public:
	// BrnCarSelectOnlinePlayerListItem.cpp:45
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnCarSelectOnlinePlayerListItem.h:120
	void Show();

	// BrnCarSelectOnlinePlayerListItem.h:146
	void Hide();

	// BrnCarSelectOnlinePlayerListItem.h:163
	bool IsShowing() const;

	// BrnCarSelectOnlinePlayerListItem.cpp:71
	void SetPlayerName(const char *);

	// BrnCarSelectOnlinePlayerListItem.cpp:91
	void SetPlayerCar(CgsID);

	// BrnCarSelectOnlinePlayerListItem.h:177
	void SetFinalSelection(bool);

	// BrnCarSelectOnlinePlayerListItem.cpp:122
	void OnLoad(const char *);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CarSelectOnlinePlayerListItem {
	public:
		// BrnCarSelectOnlinePlayerListItem.h:163
		bool IsShowing() const;

	private:
		// BrnCarSelectOnlinePlayerListItem.h:97
		extern char[] KAC_GAMERTAG_TEXTFIELD_NAME;

		// BrnCarSelectOnlinePlayerListItem.h:100
		extern char[] KAC_CAR_TEXTFIELD_NAME;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CarSelectOnlinePlayerListItem {
	public:
		// BrnCarSelectOnlinePlayerListItem.h:163
		bool IsShowing() const;

	private:
		// BrnCarSelectOnlinePlayerListItem.h:97
		extern char[] KAC_GAMERTAG_TEXTFIELD_NAME;

		// BrnCarSelectOnlinePlayerListItem.h:100
		extern char[] KAC_CAR_TEXTFIELD_NAME;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CarSelectOnlinePlayerListItem {
	public:
		CarSelectOnlinePlayerListItem();

	private:
		// BrnCarSelectOnlinePlayerListItem.h:97
		extern char[] KAC_GAMERTAG_TEXTFIELD_NAME;

		// BrnCarSelectOnlinePlayerListItem.h:100
		extern char[] KAC_CAR_TEXTFIELD_NAME;

	}

}

// BrnCarSelectOnlinePlayerListItem.h:53
void BrnGui::CarSelectOnlinePlayerListItem::CarSelectOnlinePlayerListItem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

