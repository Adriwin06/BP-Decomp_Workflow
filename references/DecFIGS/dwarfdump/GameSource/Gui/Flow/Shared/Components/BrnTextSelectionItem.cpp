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

