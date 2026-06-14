// BrnTextSelection.h:80
extern const int32_t KI_MAX_ITEMS_PER_SELECTION = 100;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct TextSelection {
	private:
		// BrnTextSelection.h:80
		extern const int32_t KI_MAX_ITEMS_PER_SELECTION = 100;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct TextSelection {
	private:
		// BrnTextSelection.h:80
		extern const int32_t KI_MAX_ITEMS_PER_SELECTION = 100;

	}

}

// BrnTextSelection.h:46
struct BrnGui::TextSelection : public BrnGui::SelectableGroup {
private:
	// BrnTextSelection.h:80
	extern const int32_t KI_MAX_ITEMS_PER_SELECTION = 100;

	// BrnTextSelection.h:82
	BrnGui::TextSelectionItem[100] maSelectionItems;

	// BrnTextSelection.h:83
	BrnGui::TextField mTextField;

public:
	// BrnTextSelection.cpp:42
	void Construct(const char *, StateInterface *, const char *, uint64_t);

	// BrnTextSelection.cpp:64
	void SetupTextSelection(int32_t, bool, const char **, uint64_t *);

	// BrnTextSelection.cpp:125
	void SetItemText(int32_t, const char *);

	// BrnTextSelection.cpp:143
	virtual void Update();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct TextSelection {
	public:
		TextSelection();

	private:
		// BrnTextSelection.h:80
		extern const int32_t KI_MAX_ITEMS_PER_SELECTION = 100;

	}

}

// BrnTextSelection.h:46
void BrnGui::TextSelection::TextSelection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

