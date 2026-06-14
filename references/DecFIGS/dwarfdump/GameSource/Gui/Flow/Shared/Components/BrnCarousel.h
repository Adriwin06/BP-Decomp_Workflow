// BrnCarousel.h:47
struct BrnGui::Carousel : public SelectableGroup {
private:
	// BrnCarousel.h:92
	extern const int32_t KI_MAX_ITEMS_PER_CAROUSEL = 50;

	// BrnCarousel.h:93
	CarouselItem[50] mCarouselItems;

	// BrnCarousel.h:95
	bool mbTransitioning;

	// BrnCarousel.cpp:24
	extern const char[13] macAptItemNameBase;

	// BrnCarousel.cpp:25
	extern const char[12] macAptSizeIdent;

	// BrnCarousel.cpp:26
	extern const char[12] macAptWrapIdent;

	// BrnCarousel.cpp:27
	extern const char[20] macAptScrollIdent;

	// BrnCarousel.cpp:28
	extern const char[5] macAptTrue;

	// BrnCarousel.cpp:29
	extern const char[6] macAptFalse;

	// BrnCarousel.cpp:30
	extern const char[5] macAptLeftIdent;

	// BrnCarousel.cpp:31
	extern const char[6] macAptRightIdent;

public:
	// BrnCarousel.cpp:52
	void Construct(const char *, StateInterface *, const char *, uint64_t);

	// BrnCarousel.cpp:84
	void SetupCarousel(int32_t, bool);

	// BrnCarousel.h:119
	void SetTransitioning(bool);

	// BrnCarousel.h:139
	bool IsTransitioning() const;

	// BrnCarousel.cpp:144
	virtual bool HighlightNext();

	// BrnCarousel.cpp:170
	virtual bool HighlightPrevious();

	// BrnCarousel.cpp:196
	virtual bool HighlightIndex(int32_t);

}

// BrnCarousel.h:92
extern const int32_t KI_MAX_ITEMS_PER_CAROUSEL = 50;

