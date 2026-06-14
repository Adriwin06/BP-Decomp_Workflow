// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct MenuItem {
		// BrnMenuItem.h:84
		enum MenuItemStates {
			E_MENUITEMSTATES_UNUSED = 0,
			E_MENUITEMSTATES_INVISIBLE = 1,
			E_MENUITEMSTATES_DISABLED = 2,
			E_MENUITEMSTATES_UNHIGHLIGHTED = 3,
			E_MENUITEMSTATES_HIGHLIGHTED = 4,
			E_MENUITEMSTATES_COUNT = 5,
		}

	}

}

// BrnMenuItem.h:42
struct BrnGui::MenuItem : public CgsGui::GuiComponent {
	// BrnMenuItem.h:45
	extern const uint32_t KU_MAX_NAME_LENGTH = 64;

private:
	// BrnMenuItem.h:97
	char[64] macItemText;

	// BrnMenuItem.h:98
	bool mbUpdateText;

	// BrnMenuItem.h:100
	extern const char *[] KAC_STATE_NAMES;

	// BrnMenuItem.h:102
	extern char[] macAptLabelText;

	// BrnMenuItem.h:103
	extern char[] macAptStateText;

	// BrnMenuItem.h:104
	extern char[] macAptUpdateStateText;

public:
	// BrnMenuItem.h:53
	void Construct(const char *, StateInterface *, const char *, uint64_t);

	// BrnMenuItem.h:57
	void Clear();

	// BrnMenuItem.h:64
	void Set(const char *, int32_t);

	// BrnMenuItem.h:68
	void SetText(const char *);

	// BrnMenuItem.h:71
	const char * GetItemText() const;

	// BrnMenuItem.h:119
	virtual void Select();

	// BrnMenuItem.h:79
	virtual void Update();

private:
	// BrnMenuItem.h:95
	BrnGui::MenuItem::MenuItemStates FindState() const;

}

// BrnMenuItem.h:45
extern const uint32_t KU_MAX_NAME_LENGTH = 64;

// BrnMenuItem.h:102
extern char[] macAptLabelText;

// BrnMenuItem.h:103
extern char[] macAptStateText;

// BrnMenuItem.h:104
extern char[] macAptUpdateStateText;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct MenuItem {
		// BrnMenuItem.h:84
		enum MenuItemStates {
			E_MENUITEMSTATES_UNUSED = 0,
			E_MENUITEMSTATES_INVISIBLE = 1,
			E_MENUITEMSTATES_DISABLED = 2,
			E_MENUITEMSTATES_UNHIGHLIGHTED = 3,
			E_MENUITEMSTATES_HIGHLIGHTED = 4,
			E_MENUITEMSTATES_COUNT = 5,
		}

	}

}

// BrnMenuItem.h:42
struct BrnGui::MenuItem : public CgsGui::GuiComponent {
	// BrnMenuItem.h:45
	extern const uint32_t KU_MAX_NAME_LENGTH = 64;

private:
	// BrnMenuItem.h:97
	char[64] macItemText;

	// BrnMenuItem.h:98
	bool mbUpdateText;

	// BrnMenuItem.cpp:24
	extern const char *[5] KAC_STATE_NAMES;

	// BrnMenuItem.cpp:33
	extern const char[13] macAptLabelText;

	// BrnMenuItem.cpp:34
	extern const char[10] macAptStateText;

	// BrnMenuItem.cpp:35
	extern const char[16] macAptUpdateStateText;

public:
	// BrnMenuItem.cpp:58
	void Construct(const char *, StateInterface *, const char *, uint64_t);

	// BrnMenuItem.cpp:74
	void Clear();

	// BrnMenuItem.cpp:99
	void Set(const char *, int32_t);

	// BrnMenuItem.cpp:117
	void SetText(const char *);

	// BrnMenuItem.cpp:124
	const char * GetItemText() const;

	// BrnMenuItem.h:119
	virtual void Select();

	// BrnMenuItem.cpp:138
	virtual void Update();

private:
	// BrnMenuItem.cpp:170
	BrnGui::MenuItem::MenuItemStates FindState() const;

}

// BrnMenuItem.h:42
struct BrnGui::MenuItem : public CgsGui::GuiComponent {
	// BrnMenuItem.h:45
	extern const uint32_t KU_MAX_NAME_LENGTH = 64;

private:
	// BrnMenuItem.h:97
	char[64] macItemText;

	// BrnMenuItem.h:98
	bool mbUpdateText;

	// BrnMenuItem.h:100
	extern const char *[] KAC_STATE_NAMES;

	// BrnMenuItem.h:102
	extern char[] macAptLabelText;

	// BrnMenuItem.h:103
	extern char[] macAptStateText;

	// BrnMenuItem.h:104
	extern char[] macAptUpdateStateText;

public:
	void MenuItem(const MenuItem &);

	void MenuItem();

	// BrnMenuItem.h:53
	void Construct(const char *, StateInterface *, const char *, uint64_t);

	// BrnMenuItem.h:57
	void Clear();

	// BrnMenuItem.h:64
	void Set(const char *, int32_t);

	// BrnMenuItem.h:68
	void SetText(const char *);

	// BrnMenuItem.h:71
	const char * GetItemText() const;

	// BrnMenuItem.h:119
	virtual void Select();

	// BrnMenuItem.h:79
	virtual void Update();

private:
	// BrnMenuItem.h:95
	BrnGui::MenuItem::MenuItemStates FindState() const;

}

// BrnMenuItem.h:42
void BrnGui::MenuItem::MenuItem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

