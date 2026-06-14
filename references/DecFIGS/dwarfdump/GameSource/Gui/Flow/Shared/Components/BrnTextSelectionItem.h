// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct TextSelectionItem {
	public:
		// BrnTextSelectionItem.cpp:63
		void SetText(const char *);

		// BrnTextSelectionItem.h:83
		const char * GetText() const;

		// BrnTextSelectionItem.cpp:42
		void Construct(const char *, StateInterface *, const char *, uint64_t);

	}

}

// BrnTextSelectionItem.h:43
struct BrnGui::TextSelectionItem : public BrnGui::Selectable {
public:
	void TextSelectionItem(const TextSelectionItem &);

	void TextSelectionItem();

	// BrnTextSelectionItem.h:52
	void Construct(const char *, StateInterface *, const char *, uint64_t);

	// BrnTextSelectionItem.h:57
	void SetText(const char *);

	// BrnTextSelectionItem.h:83
	const char * GetText() const;

	// BrnTextSelectionItem.h:96
	virtual void Select();

}

// BrnTextSelectionItem.h:43
void BrnGui::TextSelectionItem::TextSelectionItem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

