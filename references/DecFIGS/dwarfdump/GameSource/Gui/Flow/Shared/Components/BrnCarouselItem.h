// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CarouselItem {
		// BrnCarouselItem.h:72
		enum E_IconState {
			E_ICONSTATE_SELECTABLE_UNHIGHLIGHTED = 0,
			E_ICONSTATE_SELECTABLE_HIGHLIGHTED = 1,
			E_ICONSTATE_UNSELECTABLE_UNHIGHLIGHTED = 2,
			E_ICONSTATE_UNSELECTABLE_HIGHLIGHTED = 3,
			E_ICONSTATE_COUNT = 4,
		}

	}

}

// BrnCarouselItem.h:44
struct BrnGui::CarouselItem : public CgsGui::GuiComponent {
	// BrnCarouselItem.h:47
	extern const int32_t KI_MAX_ICONSTATE_LEN = 32;

private:
	// BrnCarouselItem.cpp:23
	extern const const char *[4] maDefaultIconIdentifiers;

	// BrnCarouselItem.h:85
	const char *const* mpStateIdentifiers;

	// BrnCarouselItem.h:87
	BrnGui::IconComponent mIcon;

	// BrnCarouselItem.cpp:30
	extern const char[13] macAptCarouselIconName;

	// BrnCarouselItem.h:90
	char[4][32] macAptCarouselIconStateNames;

	// BrnCarouselItem.h:91
	const char *[4] mpacAptCarouselIconStateNames;

public:
	// BrnCarouselItem.cpp:52
	void Construct(const char *, StateInterface *, const char *, const char *, uint64_t);

	// BrnCarouselItem.cpp:112
	virtual void Update();

	// BrnCarouselItem.cpp:95
	virtual void Select();

}

// BrnCarouselItem.h:47
extern const int32_t KI_MAX_ICONSTATE_LEN = 32;

