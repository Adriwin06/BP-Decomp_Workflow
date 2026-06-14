// BrnScrollableSelectionItem.h:43
struct BrnGui::ScrollableSelectionItem : public CgsGui::GuiComponent {
	// BrnScrollableSelectionItem.h:46
	extern const int32_t SCROLLABLE_SELECTION_ITEM_TEXT_LEN = 32;

private:
	// BrnScrollableSelectionItem.h:75
	char[32] macText;

public:
	BrnGui::ScrollableSelectionItem & operator=(const BrnGui::ScrollableSelectionItem &);

	void ScrollableSelectionItem(const BrnGui::ScrollableSelectionItem &);

	void ScrollableSelectionItem();

	// BrnScrollableSelectionItem.cpp:41
	void Construct(const char *, StateInterface *, const char *, uint64_t);

	// BrnScrollableSelectionItem.cpp:60
	virtual void Select();

	// BrnScrollableSelectionItem.cpp:72
	virtual void Update();

	// BrnScrollableSelectionItem.h:88
	const char * GetText() const;

	// BrnScrollableSelectionItem.cpp:91
	void SetText(const char *);

}

// BrnScrollableSelectionItem.h:43
void BrnGui::ScrollableSelectionItem::ScrollableSelectionItem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnScrollableSelectionItem.h:43
void BrnGui::ScrollableSelectionItem::operator=(const const BrnGui::ScrollableSelectionItem &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnScrollableSelectionItem.h:46
extern const int32_t SCROLLABLE_SELECTION_ITEM_TEXT_LEN = 32;

