// BrnCarouselSliderBar.h:75
extern const int32_t KI_NUM_VISIBLE_ITEMS;

// BrnCarouselSliderBar.h:76
extern const float32_t KF_NUM_VISIBLE_ITEMS;

// BrnCarouselSliderBar.h:44
struct BrnGui::CarouselSliderBar : public CgsGui::GuiComponent {
private:
	// BrnCarouselSliderBar.cpp:23
	extern const char * mspacBarStartID;

	// BrnCarouselSliderBar.cpp:24
	extern const char * mspacBarEndID;

	// BrnCarouselSliderBar.h:72
	bool mbVisible;

	// BrnCarouselSliderBar.h:73
	bool mbAptUpdatestate;

	// BrnCarouselSliderBar.cpp:26
	extern const int32_t KI_NUM_VISIBLE_ITEMS = 5;

	// BrnCarouselSliderBar.cpp:27
	extern const float32_t KF_NUM_VISIBLE_ITEMS;

public:
	// BrnCarouselSliderBar.cpp:48
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnCarouselSliderBar.cpp:68
	void Update(int32_t, int32_t);

	// BrnCarouselSliderBar.cpp:113
	void SetVisible(bool);

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CarouselSliderBar {
	private:
		// BrnCarouselSliderBar.h:75
		extern const int32_t KI_NUM_VISIBLE_ITEMS;

		// BrnCarouselSliderBar.h:76
		extern const float32_t KF_NUM_VISIBLE_ITEMS;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CarouselSliderBar {
	public:
		CarouselSliderBar();

	private:
		// BrnCarouselSliderBar.h:75
		extern const int32_t KI_NUM_VISIBLE_ITEMS;

		// BrnCarouselSliderBar.h:76
		extern const float32_t KF_NUM_VISIBLE_ITEMS;

	}

}

// BrnCarouselSliderBar.h:44
void BrnGui::CarouselSliderBar::CarouselSliderBar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

