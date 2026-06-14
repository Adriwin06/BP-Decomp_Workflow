// BrnImageGalleryCarouselItem.h:92
extern const char *[] KAPC_CAROUSEL_FRAMES;

// BrnImageGalleryCarouselItem.h:93
extern const char *[] KAPC_CAROUSEL_INVISIBLE_FRAMES;

// BrnImageGalleryCarouselItem.h:94
extern char[] KAC_GAMERTAG_NAME;

// BrnImageGalleryCarouselItem.h:95
extern char[] KAC_LOCK_ICON_NAME;

// BrnImageGalleryCarouselItem.h:96
extern char[] KAC_LOADING_ICON_NAME;

// BrnImageGalleryCarouselItem.h:45
struct BrnGui::ImageGalleryCarouselItem : public CgsGui::GuiComponent {
private:
	// BrnImageGalleryCarouselItem.cpp:23
	extern const char *[4] KAPC_CAROUSEL_FRAMES;

	// BrnImageGalleryCarouselItem.cpp:34
	extern const char *[4] KAPC_CAROUSEL_INVISIBLE_FRAMES;

	// BrnImageGalleryCarouselItem.cpp:45
	extern const char[12] KAC_GAMERTAG_NAME;

	// BrnImageGalleryCarouselItem.cpp:46
	extern const char[12] KAC_LOCK_ICON_NAME;

	// BrnImageGalleryCarouselItem.cpp:47
	extern const char[16] KAC_LOADING_ICON_NAME;

	// BrnImageGalleryCarouselItem.h:99
	BrnGui::TextField mGamertag;

	// BrnImageGalleryCarouselItem.h:100
	BrnGui::IconComponent mLockIcon;

	// BrnImageGalleryCarouselItem.h:101
	BrnGui::IconComponent mLoadingIcon;

	// BrnImageGalleryCarouselItem.h:104
	bool mbLocked;

public:
	// BrnImageGalleryCarouselItem.cpp:68
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnImageGalleryCarouselItem.h:121
	void SetLocked(bool);

	// BrnImageGalleryCarouselItem.cpp:93
	bool HandleLoadNotifications(const char *);

	// BrnImageGalleryCarouselItem.h:145
	void SetGamertag(const char *);

	// BrnImageGalleryCarouselItem.h:162
	void SetImageType(BrnGui::EGuiImageCategories, bool);

	// BrnImageGalleryCarouselItem.h:184
	void InvalidateImageType();

	// BrnImageGalleryCarouselItem.h:199
	void ShowLoading();

	// BrnImageGalleryCarouselItem.h:214
	void HideLoading();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ImageGalleryCarouselItem {
	public:
		// BrnImageGalleryCarouselItem.h:162
		void SetImageType(BrnGui::EGuiImageCategories, bool);

		// BrnImageGalleryCarouselItem.h:184
		void InvalidateImageType();

		// BrnImageGalleryCarouselItem.h:145
		void SetGamertag(const char *);

		// BrnImageGalleryCarouselItem.h:121
		void SetLocked(bool);

		// BrnImageGalleryCarouselItem.h:214
		void HideLoading();

	private:
		// BrnImageGalleryCarouselItem.h:92
		extern const char *[] KAPC_CAROUSEL_FRAMES;

		// BrnImageGalleryCarouselItem.h:93
		extern const char *[] KAPC_CAROUSEL_INVISIBLE_FRAMES;

		// BrnImageGalleryCarouselItem.h:94
		extern char[] KAC_GAMERTAG_NAME;

		// BrnImageGalleryCarouselItem.h:95
		extern char[] KAC_LOCK_ICON_NAME;

		// BrnImageGalleryCarouselItem.h:96
		extern char[] KAC_LOADING_ICON_NAME;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ImageGalleryCarouselItem {
	public:
		ImageGalleryCarouselItem();

	private:
		// BrnImageGalleryCarouselItem.h:92
		extern const char *[] KAPC_CAROUSEL_FRAMES;

		// BrnImageGalleryCarouselItem.h:93
		extern const char *[] KAPC_CAROUSEL_INVISIBLE_FRAMES;

		// BrnImageGalleryCarouselItem.h:94
		extern char[] KAC_GAMERTAG_NAME;

		// BrnImageGalleryCarouselItem.h:95
		extern char[] KAC_LOCK_ICON_NAME;

		// BrnImageGalleryCarouselItem.h:96
		extern char[] KAC_LOADING_ICON_NAME;

	}

}

// BrnImageGalleryCarouselItem.h:45
void BrnGui::ImageGalleryCarouselItem::ImageGalleryCarouselItem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

