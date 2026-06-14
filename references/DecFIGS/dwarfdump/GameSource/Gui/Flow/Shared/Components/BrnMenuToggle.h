// BrnMenuToggle.h:134
extern char[] KAC_ITEM_TEXT_COMPONENT;

// BrnMenuToggle.h:135
extern char[] KAC_TITLE_TEXT_COMPONENT;

// BrnMenuToggle.h:137
extern char[] KAC_APT_STATE_TEXT;

// BrnMenuToggle.h:139
extern const int32_t KI_NUM_COMPONENTS = 3;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct MenuToggle {
	public:
		// BrnMenuToggle.h:189
		int32_t GetHighlightedIndex();

		// BrnMenuToggle.h:320
		BrnGui::TextSelection * GetTextSelection();

	private:
		// BrnMenuToggle.h:134
		extern char[] KAC_ITEM_TEXT_COMPONENT;

		// BrnMenuToggle.h:135
		extern char[] KAC_TITLE_TEXT_COMPONENT;

		// BrnMenuToggle.h:137
		extern char[] KAC_APT_STATE_TEXT;

		// BrnMenuToggle.h:139
		extern const int32_t KI_NUM_COMPONENTS = 3;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct MenuToggle {
	public:
		// BrnMenuToggle.h:205
		uint64_t GetHighlightedId();

		// BrnMenuToggle.h:295
		bool HighlightId(uint64_t);

		// BrnMenuToggle.h:245
		bool HighlightPrevious();

		// BrnMenuToggle.h:221
		bool HighlightNext();

		// BrnMenuToggle.h:189
		int32_t GetHighlightedIndex();

	private:
		// BrnMenuToggle.h:134
		extern char[] KAC_ITEM_TEXT_COMPONENT;

		// BrnMenuToggle.h:135
		extern char[] KAC_TITLE_TEXT_COMPONENT;

		// BrnMenuToggle.h:137
		extern char[] KAC_APT_STATE_TEXT;

		// BrnMenuToggle.h:139
		extern const int32_t KI_NUM_COMPONENTS = 3;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct MenuToggle {
	public:
		// BrnMenuToggle.h:189
		int32_t GetHighlightedIndex();

		// BrnMenuToggle.h:205
		uint64_t GetHighlightedId();

		// BrnMenuToggle.h:270
		bool HighlightIndex(int32_t);

		// BrnMenuToggle.h:221
		bool HighlightNext();

		// BrnMenuToggle.h:245
		bool HighlightPrevious();

	private:
		// BrnMenuToggle.h:134
		extern char[] KAC_ITEM_TEXT_COMPONENT;

		// BrnMenuToggle.h:135
		extern char[] KAC_TITLE_TEXT_COMPONENT;

		// BrnMenuToggle.h:137
		extern char[] KAC_APT_STATE_TEXT;

		// BrnMenuToggle.h:139
		extern const int32_t KI_NUM_COMPONENTS = 3;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct MenuToggle {
		// BrnMenuToggle.h:142
		enum MenuToggleStates {
			E_MENUTOGGLETATES_UNUSED = 0,
			E_MENUTOGGLETATES_INVISIBLE = 1,
			E_MENUTOGGLETATES_DISABLED = 2,
			E_MENUTOGGLETATES_UNHIGHLIGHTED = 3,
			E_MENUTOGGLETATES_HIGHLIGHTED = 4,
			E_MENUTOGGLETATES_COUNT = 5,
		}

	}

}

// BrnMenuToggle.h:48
struct BrnGui::MenuToggle : public CgsGui::GuiComponent {
private:
	// BrnMenuToggle.cpp:24
	extern const char[9] KAC_ITEM_TEXT_COMPONENT;

	// BrnMenuToggle.cpp:25
	extern const char[10] KAC_TITLE_TEXT_COMPONENT;

	// BrnMenuToggle.cpp:27
	extern const char *[5] KAC_STATE_NAMES;

	// BrnMenuToggle.cpp:36
	extern const char[10] KAC_APT_STATE_TEXT;

	// BrnMenuToggle.h:139
	extern const int32_t KI_NUM_COMPONENTS = 3;

	// BrnMenuToggle.h:153
	BrnGui::TextSelection mTextSelection;

	// BrnMenuToggle.h:154
	BrnGui::TextField mTitleText;

	// BrnMenuToggle.h:156
	int32_t miLoadedItems;

public:
	// BrnMenuToggle.cpp:57
	void Construct(const char *, StateInterface *, const char *, uint64_t);

	// BrnMenuToggle.cpp:78
	void Unloaded();

	// BrnMenuToggle.cpp:96
	void SetupMenuToggle(int32_t, bool, const char *, const char **, uint64_t *);

	// BrnMenuToggle.cpp:121
	void SetTitleText(const char *);

	// BrnMenuToggle.cpp:139
	void ProcessComponentLoads(const char *);

	// BrnMenuToggle.h:172
	bool IsComponentLoaded() const;

	// BrnMenuToggle.cpp:226
	virtual void Clear();

	// BrnMenuToggle.h:189
	int32_t GetHighlightedIndex();

	// BrnMenuToggle.h:205
	uint64_t GetHighlightedId();

	// BrnMenuToggle.h:221
	bool HighlightNext();

	// BrnMenuToggle.h:245
	bool HighlightPrevious();

	// BrnMenuToggle.h:270
	bool HighlightIndex(int32_t);

	// BrnMenuToggle.h:295
	bool HighlightId(uint64_t);

	// BrnMenuToggle.cpp:239
	virtual void Select();

	// BrnMenuToggle.cpp:170
	virtual void Update();

	// BrnMenuToggle.cpp:255
	void AppendExpectedAptComponent(BrnGui::GuiFlow, BrnGui::GuiCache *, bool);

	// BrnMenuToggle.h:320
	BrnGui::TextSelection * GetTextSelection();

private:
	// BrnMenuToggle.cpp:195
	BrnGui::MenuToggle::MenuToggleStates FindState() const;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct MenuToggle {
	public:
		MenuToggle();

	private:
		// BrnMenuToggle.h:134
		extern char[] KAC_ITEM_TEXT_COMPONENT;

		// BrnMenuToggle.h:135
		extern char[] KAC_TITLE_TEXT_COMPONENT;

		// BrnMenuToggle.h:137
		extern char[] KAC_APT_STATE_TEXT;

		// BrnMenuToggle.h:139
		extern const int32_t KI_NUM_COMPONENTS = 3;

	}

}

// BrnMenuToggle.h:48
void BrnGui::MenuToggle::MenuToggle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

