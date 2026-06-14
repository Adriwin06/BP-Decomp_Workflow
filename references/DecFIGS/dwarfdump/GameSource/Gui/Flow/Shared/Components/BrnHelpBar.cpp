// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct HelpBar {
		// BrnHelpBar.h:53
		enum EAlignment {
			E_ALIGNMENT_LEFT = 0,
			E_ALIGNMENT_RIGHT = 1,
			E_ALIGNMENT_CENTRE = 2,
			E_ALIGNMENT_MAX = 3,
		}

	public:
		// BrnHelpBar.cpp:84
		void Destruct();

		// BrnHelpBar.h:239
		BrnGui::Animator * GetAnimator(int32_t);

		// BrnHelpBar.cpp:101
		void SetupComponent();

		// BrnHelpBar.h:270
		bool IsItemInfoValid() const;

		// BrnHelpBar.cpp:173
		void TransitionIn(BrnGui::HelpBar::EAlignment);

		// BrnHelpBar.cpp:252
		void TransitionOut();

		// BrnHelpBar.cpp:275
		void SnapIn(BrnGui::HelpBar::EAlignment);

		// BrnHelpBar.cpp:342
		void SnapOut();

	private:
		// BrnHelpBar.cpp:408
		void InvalidateItemInfo(int32_t);

		// BrnHelpBar.cpp:388
		void InvalidateAllItemInfo();

		// BrnHelpBar.cpp:429
		void UpdateItemInfo();

	public:
		// BrnHelpBar.cpp:365
		void Update(AnimChannelData::Time);

		// BrnHelpBar.h:195
		int32_t GetItemNameHash(int32_t) const;

		// BrnHelpBar.cpp:473
		void AppendExpectedAptComponent(BrnGui::GuiFlow, BrnGui::GuiCache *);

		// BrnHelpBar.cpp:145
		int32_t AppendHelpBarItem(const char *, BrnGui::ButtonIconComponent::EPadButton, BrnGui::ButtonIconComponent::EPadButton);

		// BrnHelpBar.cpp:120
		void Clear();

		// BrnHelpBar.cpp:47
		void Construct(const char *, int32_t, StateInterface *, const char *);

		// Unknown accessibility
		// BrnHelpBar.h:62
		extern const int32_t KI_MAX_HELPITEMS = 7;

	private:
		// BrnHelpBar.cpp:27
		extern const float32_t KF_ITEMWIDTH_INVALID;

		// BrnHelpBar.cpp:26
		extern const char[8] KAC_WIDTHVAR_NAME;

	}

}

