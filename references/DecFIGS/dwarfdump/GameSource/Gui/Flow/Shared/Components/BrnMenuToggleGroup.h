// BrnMenuToggleGroup.h:57
extern const int32_t KI_MAX_ITEMS_PER_GROUP = 8;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct MenuToggleGroup {
	public:
		// BrnMenuToggleGroup.h:173
		BrnGui::MenuToggle * GetSelectable(int32_t);

		// BrnMenuToggleGroup.h:206
		int32_t GetHighlightedItemIndex(int32_t);

		// Unknown accessibility
		// BrnMenuToggleGroup.h:57
		extern const int32_t KI_MAX_ITEMS_PER_GROUP = 8;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct MenuToggleGroup {
	public:
		// BrnMenuToggleGroup.h:173
		BrnGui::MenuToggle * GetSelectable(int32_t);

		// BrnMenuToggleGroup.h:222
		uint64_t GetHighlightedItemId(int32_t);

		// BrnMenuToggleGroup.h:206
		int32_t GetHighlightedItemIndex(int32_t);

		// Unknown accessibility
		// BrnMenuToggleGroup.h:57
		extern const int32_t KI_MAX_ITEMS_PER_GROUP = 8;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct MenuToggleGroup {
	public:
		// BrnMenuToggleGroup.h:173
		BrnGui::MenuToggle * GetSelectable(int32_t);

		// BrnMenuToggleGroup.h:206
		int32_t GetHighlightedItemIndex(int32_t);

		// BrnMenuToggleGroup.h:222
		uint64_t GetHighlightedItemId(int32_t);

		// Unknown accessibility
		// BrnMenuToggleGroup.h:57
		extern const int32_t KI_MAX_ITEMS_PER_GROUP = 8;

	}

}

// BrnMenuToggleGroup.h:54
struct BrnGui::MenuToggleGroup : public BrnGui::SelectableGroup {
	// BrnMenuToggleGroup.h:57
	extern const int32_t KI_MAX_ITEMS_PER_GROUP = 8;

private:
	// BrnMenuToggleGroup.h:156
	BrnGui::MenuToggle[8] maItems;

	// BrnMenuToggleGroup.h:157
	int32_t miMaxItems;

	// BrnMenuToggleGroup.h:158
	int32_t miLoadedItems;

public:
	// BrnMenuToggleGroup.cpp:45
	void Construct(const char *, StateInterface *, int32_t, const char *, uint64_t);

	// BrnMenuToggleGroup.cpp:89
	void Unloaded();

	// BrnMenuToggleGroup.cpp:113
	void SetupGroup(int32_t, bool);

	// BrnMenuToggleGroup.cpp:157
	void SetupToggle(int32_t, int32_t, bool, const char *, const char **, uint64_t *);

	// BrnMenuToggleGroup.cpp:188
	virtual void Clear();

	// BrnMenuToggleGroup.cpp:211
	virtual bool HighlightNextItem();

	// BrnMenuToggleGroup.cpp:227
	virtual bool HighlightPreviousItem();

	// BrnMenuToggleGroup.cpp:244
	bool HighlightItem(int32_t, int32_t);

	// BrnMenuToggleGroup.h:206
	int32_t GetHighlightedItemIndex(int32_t);

	// BrnMenuToggleGroup.h:222
	uint64_t GetHighlightedItemId(int32_t);

	// BrnMenuToggleGroup.h:237
	void SetToggleActive(int32_t, bool);

	// BrnMenuToggleGroup.h:189
	const BrnGui::MenuToggle * GetSelectable(int32_t) const;

	// BrnMenuToggleGroup.cpp:258
	void ProcessComponentLoads(const char *);

	// BrnMenuToggleGroup.cpp:277
	bool IsComponentLoaded() const;

	// BrnMenuToggleGroup.cpp:303
	// Declaration
	void AppendExpectedAptComponent(BrnGui::GuiFlow, BrnGui::GuiCache *, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMenuToggleGroup.cpp:309
		using namespace CgsDev::Message;

	}

	// BrnMenuToggleGroup.h:173
	BrnGui::MenuToggle * GetSelectable(int32_t);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct MenuToggleGroup {
	public:
		MenuToggleGroup();

		// Unknown accessibility
		// BrnMenuToggleGroup.h:57
		extern const int32_t KI_MAX_ITEMS_PER_GROUP = 8;

	}

}

// BrnMenuToggleGroup.h:54
void BrnGui::MenuToggleGroup::MenuToggleGroup() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

