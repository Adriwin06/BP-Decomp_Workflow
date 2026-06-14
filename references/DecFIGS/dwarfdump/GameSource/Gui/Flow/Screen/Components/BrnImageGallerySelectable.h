// BrnImageGallerySelectable.h:79
extern char[] KAC_CATEGORY_TEXT_NAME;

// BrnImageGallerySelectable.h:80
extern char[] KAC_COLLECTED_TEXT_NAME;

// BrnImageGallerySelectable.h:42
struct BrnGui::ImageGallerySelectable : public CgsGui::GuiComponent {
private:
	// BrnImageGallerySelectable.cpp:23
	extern const char[12] KAC_CATEGORY_TEXT_NAME;

	// BrnImageGallerySelectable.cpp:24
	extern const char[13] KAC_COLLECTED_TEXT_NAME;

	// BrnImageGallerySelectable.h:82
	BrnGui::TextField mCategoryText;

	// BrnImageGallerySelectable.h:83
	BrnGui::TextField mCollectedText;

public:
	// BrnImageGallerySelectable.cpp:46
	void Construct(const char *, StateInterface *, const char *, uint64_t);

	// BrnImageGallerySelectable.cpp:65
	virtual void Select();

	// BrnImageGallerySelectable.cpp:80
	virtual void Update();

	// BrnImageGallerySelectable.h:99
	void SetCategory(const char *);

	// BrnImageGallerySelectable.h:115
	void SetCollected(int32_t);

	// BrnImageGallerySelectable.cpp:112
	bool HandleLoadNotifications(const char *);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ImageGallerySelectable {
	public:
		// BrnImageGallerySelectable.h:115
		void SetCollected(int32_t);

		// BrnImageGallerySelectable.h:99
		void SetCategory(const char *);

	private:
		// BrnImageGallerySelectable.h:79
		extern char[] KAC_CATEGORY_TEXT_NAME;

		// BrnImageGallerySelectable.h:80
		extern char[] KAC_COLLECTED_TEXT_NAME;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ImageGallerySelectable {
	public:
		ImageGallerySelectable();

	private:
		// BrnImageGallerySelectable.h:79
		extern char[] KAC_CATEGORY_TEXT_NAME;

		// BrnImageGallerySelectable.h:80
		extern char[] KAC_COLLECTED_TEXT_NAME;

	}

}

// BrnImageGallerySelectable.h:42
void BrnGui::ImageGallerySelectable::ImageGallerySelectable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

