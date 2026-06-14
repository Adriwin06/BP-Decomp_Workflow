// BrnImageGallery.h:93
extern int32_t[] maiEventToObserve;

// BrnImageGallery.h:94
extern const int32_t miNumEventsObserved;

// BrnImageGallery.h:95
extern sResourceTuple[] maResourcesToLoad;

// BrnImageGallery.h:96
extern const uint32_t muNumResourcesToLoad;

// BrnImageGallery.h:98
extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 7;

// BrnImageGallery.h:111
extern char[] KAC_CAROUSEL_ANIMATOR_NAME;

// BrnImageGallery.h:114
extern char[] KAC_CAROUSEL_ITEM_LEFT_NAME;

// BrnImageGallery.h:115
extern char[] KAC_CAROUSEL_ITEM_MIDDLE_NAME;

// BrnImageGallery.h:116
extern char[] KAC_CAROUSEL_ITEM_RIGHT_NAME;

// BrnImageGallery.h:119
extern char[] KAC_CAROUSEL_LEFT_ARROW_ANIMATOR_NAME;

// BrnImageGallery.h:120
extern char[] KAC_CAROUSEL_RIGHT_ARROW_ANIMATOR_NAME;

// BrnImageGallery.h:126
extern BrnGui::ButtonIconComponent::EPadButton[] KAE_HELP_BAR_BUTTONS;

// BrnImageGallery.h:130
extern char[] KAC_WHO_TEXT;

// BrnImageGallery.h:131
extern char[] KAC_WHERE_TEXT;

// BrnImageGallery.h:132
extern char[] KAC_WHEN_TEXT;

// BrnImageGallery.h:141
extern char[] KAC_IMAGE_INFO_ANIMATOR_NAME;

// BrnImageGallery.h:144
extern char[] KAC_CURRENT_IMAGE_TEXT;

// BrnImageGallery.h:145
extern char[] KAC_TOTAL_IMAGE_TEXT;

// BrnImageGallery.h:149
extern char[] KAC_BUTTON_ANIMATOR_NAME;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ImageGalleryState {
		// BrnImageGallery.h:80
		enum InternalState {
			E_INTERNALSTATE_LOADRESOURCES = 0,
			E_INTERNALSTATE_WFINIT = 1,
			E_INTERNALSTATE_SETUP = 2,
			E_INTERNALSTATE_RUNNING = 3,
			E_INTERNALSTATE_LEFT = 4,
			E_INTERNALSTATE_COUNT = 5,
		}

	}

}

// BrnImageGallery.h:53
struct BrnGui::ImageGalleryState : public CgsGui::State {
private:
	// BrnImageGallery.h:91
	BrnGui::GuiCache * mpGuiCache;

	// BrnImageGallery.h:92
	BrnGui::ImageGalleryState::InternalState meInternalState;

	// BrnImageGallery.cpp:30
	extern const int32_t[8] maiEventToObserve;

	// BrnImageGallery.cpp:43
	extern const int32_t miNumEventsObserved = 8;

	// BrnImageGallery.cpp:45
	extern const sResourceTuple[1] maResourcesToLoad;

	// BrnImageGallery.cpp:50
	extern const uint32_t muNumResourcesToLoad = 1;

	// BrnImageGallery.h:98
	extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 7;

	// BrnImageGallery.h:99
	uint32_t[7] mauExpectedComponentIds;

	// BrnImageGallery.h:100
	uint32_t muNumExpectedComponents;

	// BrnImageGallery.h:102
	int32_t miCurrentlySelectedCarouselItem;

	// BrnImageGallery.cpp:52
	extern const char *[4] KAPC_MENU_TITLES;

	// BrnImageGallery.h:105
	BrnGui::ImageGallerySelectable[4] maCategorySelectable;

	// BrnImageGallery.h:106
	BrnGui::SelectableGroup mCategorySelectableGroup;

	// BrnImageGallery.h:108
	BrnGui::ImageGalleryCarouselSelectable[30] maCarouselOverviewSelectable;

	// BrnImageGallery.h:109
	BrnGui::SelectableGroup mCarouselOverviewSelectableGroup;

	// BrnImageGallery.cpp:63
	extern const char[23] KAC_CAROUSEL_ANIMATOR_NAME;

	// BrnImageGallery.h:112
	BrnGui::AnimationComponent mCarouselAnimator;

	// BrnImageGallery.cpp:64
	extern const char[20] KAC_CAROUSEL_ITEM_LEFT_NAME;

	// BrnImageGallery.cpp:65
	extern const char[19] KAC_CAROUSEL_ITEM_MIDDLE_NAME;

	// BrnImageGallery.cpp:66
	extern const char[21] KAC_CAROUSEL_ITEM_RIGHT_NAME;

	// BrnImageGallery.h:117
	BrnGui::ImageGalleryCarouselItem[3] maCarouselItems;

	// BrnImageGallery.cpp:68
	extern const char[15] KAC_CAROUSEL_LEFT_ARROW_ANIMATOR_NAME;

	// BrnImageGallery.cpp:69
	extern const char[16] KAC_CAROUSEL_RIGHT_ARROW_ANIMATOR_NAME;

	// BrnImageGallery.h:121
	BrnGui::AnimationComponent mCarouselLeftArrowAnimator;

	// BrnImageGallery.h:122
	BrnGui::AnimationComponent mCarouselRightArrowAnimator;

	// BrnImageGallery.cpp:71
	extern const char *[4] KAPC_HELP_BAR_LOCKED_TEXT;

	// BrnImageGallery.cpp:81
	extern const char *[4] KAPC_HELP_BAR_UNLOCKED_TEXT;

	// BrnImageGallery.cpp:91
	extern const BrnGui::ButtonIconComponent::EPadButton[4] KAE_HELP_BAR_BUTTONS;

	// BrnImageGallery.h:128
	int32_t miRequestsLeftPending;

	// BrnImageGallery.cpp:101
	extern const char[11] KAC_WHO_TEXT;

	// BrnImageGallery.cpp:102
	extern const char[13] KAC_WHERE_TEXT;

	// BrnImageGallery.cpp:103
	extern const char[12] KAC_WHEN_TEXT;

	// BrnImageGallery.h:133
	BrnGui::TextField mWhoText;

	// BrnImageGallery.h:134
	BrnGui::TextField mWhereText;

	// BrnImageGallery.h:135
	BrnGui::TextField mWhenText;

	// BrnImageGallery.h:137
	bool mbIsCurrentLocked;

	// BrnImageGallery.h:139
	int32_t[4] maiPhotoCountPerCategory;

	// BrnImageGallery.cpp:105
	extern const char[15] KAC_IMAGE_INFO_ANIMATOR_NAME;

	// BrnImageGallery.h:142
	BrnGui::AnimationComponent mImageInfoAnimator;

	// BrnImageGallery.cpp:106
	extern const char[11] KAC_CURRENT_IMAGE_TEXT;

	// BrnImageGallery.cpp:107
	extern const char[11] KAC_TOTAL_IMAGE_TEXT;

	// BrnImageGallery.h:146
	BrnGui::TextField mCurrentImageText;

	// BrnImageGallery.h:147
	BrnGui::TextField mTotalImageText;

	// BrnImageGallery.cpp:117
	extern const char[13] KAC_BUTTON_ANIMATOR_NAME;

	// BrnImageGallery.h:150
	BrnGui::AnimationComponent mButtonAnimator;

	// BrnImageGallery.h:152
	PlayerName mSelectedPlayerName;

	// BrnImageGallery.h:153
	bool mbSelectedImageValid;

	// BrnImageGallery.h:154
	bool mbPendingSnapShotRequest;

	// BrnImageGallery.h:155
	int8_t miSnapShotDelayCounter;

public:
	// BrnImageGallery.cpp:136
	virtual void OnEnter();

	// BrnImageGallery.cpp:299
	virtual void OnLeave();

	// BrnImageGallery.cpp:222
	virtual void Update();

	// BrnImageGallery.h:71
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnImageGallery.cpp:326
	bool UpdateLoadResources();

	// BrnImageGallery.cpp:353
	bool UpdateWFInit();

	// BrnImageGallery.cpp:374
	void UpdateSetup();

	// BrnImageGallery.cpp:417
	void UpdateRunning();

	// BrnImageGallery.cpp:515
	void UpdatePermanent();

	// BrnImageGallery.h:282
	void SetExpectedComponent(const char *);

	// BrnImageGallery.cpp:1038
	void SetExpectedAptComponentList();

	// BrnImageGallery.h:299
	void ClearExpectedComponent();

	// BrnImageGallery.cpp:560
	void HandleControllerInputPressed(const GuiEventControllerInputPressed *);

	// BrnImageGallery.cpp:954
	void HandleLoadNotification(const char *);

	// BrnImageGallery.cpp:994
	void HandleOverlayComplete(const GuiOverlayCompleteEvent *);

	// BrnImageGallery.h:324
	BrnGui::EGuiImageCategories GetCurrentCategory();

	// BrnImageGallery.cpp:1072
	void RefreshCarousel(BrnGameState::GameStateModuleIO::EImageGalleryRequest);

	// BrnImageGallery.h:341
	BrnGameState::GameStateModuleIO::EImageGalleryType GetCurrentGsmIOCategory();

	// BrnImageGallery.cpp:1176
	BrnGameState::GameStateModuleIO::EImageGalleryType GetGsmIOCategoryFromGuiEnum(BrnGui::EGuiImageCategories);

	// BrnImageGallery.cpp:1237
	BrnGui::EGuiImageCategories GetGuiCategoryFromGsmIOEnum(BrnGameState::GameStateModuleIO::EImageGalleryType);

	// BrnImageGallery.cpp:1296
	void HandleImageInfoEvent(const GuiImageGalleryImageInfoEvent *);

	// BrnImageGallery.cpp:1404
	void HandleCollectedCountEvent(const GuiImageGalleryCollectedCountEvent *);

	// BrnImageGallery.cpp:1458
	void HandleCollectedDataEvent(const GuiImageGalleryCollectedDataEvent *);

	// BrnImageGallery.cpp:1422
	void SetupCountForCategory(BrnGui::EGuiImageCategories, int32_t);

	// BrnImageGallery.cpp:1542
	void SetupButtons();

	// BrnImageGallery.cpp:1491
	void TriggerSound(EGameInputActions);

	// BrnImageGallery.cpp:1576
	void HideMiddleImage();

	// BrnImageGallery.cpp:1591
	void HideRightImage();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ImageGalleryState {
	public:
		ImageGalleryState();

	private:
		// BrnImageGallery.h:93
		extern int32_t[] maiEventToObserve;

		// BrnImageGallery.h:94
		extern const int32_t miNumEventsObserved;

		// BrnImageGallery.h:95
		extern sResourceTuple[] maResourcesToLoad;

		// BrnImageGallery.h:96
		extern const uint32_t muNumResourcesToLoad;

		// BrnImageGallery.h:98
		extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 7;

		// BrnImageGallery.h:111
		extern char[] KAC_CAROUSEL_ANIMATOR_NAME;

		// BrnImageGallery.h:114
		extern char[] KAC_CAROUSEL_ITEM_LEFT_NAME;

		// BrnImageGallery.h:115
		extern char[] KAC_CAROUSEL_ITEM_MIDDLE_NAME;

		// BrnImageGallery.h:116
		extern char[] KAC_CAROUSEL_ITEM_RIGHT_NAME;

		// BrnImageGallery.h:119
		extern char[] KAC_CAROUSEL_LEFT_ARROW_ANIMATOR_NAME;

		// BrnImageGallery.h:120
		extern char[] KAC_CAROUSEL_RIGHT_ARROW_ANIMATOR_NAME;

		// BrnImageGallery.h:126
		extern BrnGui::ButtonIconComponent::EPadButton[] KAE_HELP_BAR_BUTTONS;

		// BrnImageGallery.h:130
		extern char[] KAC_WHO_TEXT;

		// BrnImageGallery.h:131
		extern char[] KAC_WHERE_TEXT;

		// BrnImageGallery.h:132
		extern char[] KAC_WHEN_TEXT;

		// BrnImageGallery.h:141
		extern char[] KAC_IMAGE_INFO_ANIMATOR_NAME;

		// BrnImageGallery.h:144
		extern char[] KAC_CURRENT_IMAGE_TEXT;

		// BrnImageGallery.h:145
		extern char[] KAC_TOTAL_IMAGE_TEXT;

		// BrnImageGallery.h:149
		extern char[] KAC_BUTTON_ANIMATOR_NAME;

	}

}

// BrnImageGallery.h:53
void BrnGui::ImageGalleryState::ImageGalleryState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

