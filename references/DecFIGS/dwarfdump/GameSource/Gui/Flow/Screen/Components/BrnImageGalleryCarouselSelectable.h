// BrnImageGalleryCarouselSelectable.h:42
struct BrnGui::ImageGalleryCarouselSelectable : public CgsGui::GuiComponent {
private:
	// BrnImageGalleryCarouselSelectable.h:69
	bool mbUsed;

public:
	// BrnImageGalleryCarouselSelectable.cpp:43
	void Construct(const char *, StateInterface *, const char *, uint64_t);

	// BrnImageGalleryCarouselSelectable.cpp:61
	virtual void Select();

	// BrnImageGalleryCarouselSelectable.cpp:76
	virtual void Update();

	// BrnImageGalleryCarouselSelectable.h:86
	void SetUsed(bool);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ImageGalleryCarouselSelectable {
	public:
		// BrnImageGalleryCarouselSelectable.h:86
		void SetUsed(bool);

	}

}

// BrnImageGalleryCarouselSelectable.h:42
void BrnGui::ImageGalleryCarouselSelectable::ImageGalleryCarouselSelectable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

