// BrnColourMenuToggle.h:157
extern char[] KAC_TITLE_TEXT_COMPONENT;

// BrnColourMenuToggle.h:159
extern char[] KAC_APT_STATE_TEXT;

// BrnColourMenuToggle.h:161
extern const int32_t KI_NUM_COMPONENTS = 3;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct ColourMenuToggle {
	public:
		// BrnColourMenuToggle.h:211
		int32_t GetHighlightedIndex();

	private:
		// BrnColourMenuToggle.h:157
		extern char[] KAC_TITLE_TEXT_COMPONENT;

		// BrnColourMenuToggle.h:159
		extern char[] KAC_APT_STATE_TEXT;

		// BrnColourMenuToggle.h:161
		extern const int32_t KI_NUM_COMPONENTS = 3;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ColourMenuToggle {
		// BrnColourMenuToggle.h:164
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

// BrnColourMenuToggle.h:48
struct BrnGui::ColourMenuToggle : public CgsGui::GuiComponent {
private:
	// BrnColourMenuToggle.cpp:24
	extern const char *[5] KAC_ITEM_COLOUR_COMPONENT;

	// BrnColourMenuToggle.cpp:33
	extern const char[10] KAC_TITLE_TEXT_COMPONENT;

	// BrnColourMenuToggle.cpp:35
	extern const char *[5] KAC_STATE_NAMES;

	// BrnColourMenuToggle.cpp:44
	extern const char[10] KAC_APT_STATE_TEXT;

	// BrnColourMenuToggle.h:161
	extern const int32_t KI_NUM_COMPONENTS = 3;

	// BrnColourMenuToggle.h:175
	BrnGui::ColourSelection[5] maColourSelection;

	// BrnColourMenuToggle.h:176
	BrnGui::TextField mTitleText;

	// BrnColourMenuToggle.h:178
	int32_t miLoadedItems;

public:
	// BrnColourMenuToggle.cpp:65
	void Construct(const char *, StateInterface *, const char *, uint64_t);

	// BrnColourMenuToggle.cpp:92
	void Unloaded();

	// BrnColourMenuToggle.cpp:110
	void SetupMenuToggle(int32_t, bool, const char *, const rw::math::vpu::Vector4 **, uint64_t *);

	// BrnColourMenuToggle.cpp:145
	void SetupMenuToggleGradient(int32_t, bool, const char *, const rw::math::vpu::Vector4 **, const rw::math::vpu::Vector4 **, uint64_t *);

	// BrnColourMenuToggle.cpp:175
	void SetTitleText(const char *);

	// BrnColourMenuToggle.cpp:193
	void ProcessComponentLoads(const char *);

	// BrnColourMenuToggle.h:194
	bool IsComponentLoaded() const;

	// BrnColourMenuToggle.cpp:288
	virtual void Clear();

	// BrnColourMenuToggle.h:211
	int32_t GetHighlightedIndex();

	// BrnColourMenuToggle.h:227
	uint64_t GetHighlightedId();

	// BrnColourMenuToggle.cpp:346
	bool HighlightNext();

	// BrnColourMenuToggle.cpp:372
	bool HighlightPrevious();

	// BrnColourMenuToggle.cpp:398
	bool HighlightIndex(int32_t);

	// BrnColourMenuToggle.cpp:305
	virtual void Select();

	// BrnColourMenuToggle.cpp:228
	virtual void Update();

	// BrnColourMenuToggle.cpp:321
	void AppendExpectedAptComponent(BrnGui::GuiFlow, BrnGui::GuiCache *, bool);

	// BrnColourMenuToggle.h:245
	BrnGui::ColourSelection * GetColourSelection();

private:
	// BrnColourMenuToggle.cpp:423
	void HighlightNeighbours();

	// BrnColourMenuToggle.cpp:257
	BrnGui::ColourMenuToggle::MenuToggleStates FindState() const;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ColourMenuToggle {
	public:
		ColourMenuToggle();

	private:
		// BrnColourMenuToggle.h:157
		extern char[] KAC_TITLE_TEXT_COMPONENT;

		// BrnColourMenuToggle.h:159
		extern char[] KAC_APT_STATE_TEXT;

		// BrnColourMenuToggle.h:161
		extern const int32_t KI_NUM_COMPONENTS = 3;

	}

}

// BrnColourMenuToggle.h:48
void BrnGui::ColourMenuToggle::ColourMenuToggle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

