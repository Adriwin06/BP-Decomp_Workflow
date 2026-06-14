// BrnCarSelectOnlinePlayerList.h:96
extern char[] KAC_PLAYER_LIST_ITEM_TEMPLATE;

// BrnCarSelectOnlinePlayerList.h:46
struct BrnGui::CarSelectOnlinePlayerList : public CgsGui::GuiComponent {
private:
	// BrnCarSelectOnlinePlayerList.cpp:23
	extern const char[12] KAC_PLAYER_LIST_ITEM_TEMPLATE;

	// BrnCarSelectOnlinePlayerList.h:97
	CarSelectOnlinePlayerListItem[8] maPlayerListItems;

	// BrnCarSelectOnlinePlayerList.h:99
	const BrnResource::VehicleList * mpVehicleList;

public:
	// BrnCarSelectOnlinePlayerList.cpp:44
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnCarSelectOnlinePlayerList.cpp:77
	void SetPlayerName(int32_t, const char *);

	// BrnCarSelectOnlinePlayerList.cpp:96
	void SetPlayerCar(int32_t, CgsID);

	// BrnCarSelectOnlinePlayerList.cpp:126
	void SetFinalSelection(int32_t, bool);

	// BrnCarSelectOnlinePlayerList.cpp:144
	void Show(int32_t);

	// BrnCarSelectOnlinePlayerList.cpp:162
	void Hide(int32_t);

	// BrnCarSelectOnlinePlayerList.cpp:180
	bool HandleLoadNotification(const char *);

	// BrnCarSelectOnlinePlayerList.h:116
	bool IsShowing(int32_t) const;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CarSelectOnlinePlayerList {
	public:
		// BrnCarSelectOnlinePlayerList.h:116
		bool IsShowing(int32_t) const;

	private:
		// BrnCarSelectOnlinePlayerList.h:96
		extern char[] KAC_PLAYER_LIST_ITEM_TEMPLATE;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CarSelectOnlinePlayerList {
	public:
		// BrnCarSelectOnlinePlayerList.h:116
		bool IsShowing(int32_t) const;

	private:
		// BrnCarSelectOnlinePlayerList.h:96
		extern char[] KAC_PLAYER_LIST_ITEM_TEMPLATE;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CarSelectOnlinePlayerList {
	public:
		CarSelectOnlinePlayerList();

	private:
		// BrnCarSelectOnlinePlayerList.h:96
		extern char[] KAC_PLAYER_LIST_ITEM_TEMPLATE;

	}

}

// BrnCarSelectOnlinePlayerList.h:46
void BrnGui::CarSelectOnlinePlayerList::CarSelectOnlinePlayerList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

