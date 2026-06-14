// BrnHelpBar.h:62
extern const int32_t KI_MAX_HELPITEMS = 7;

// BrnHelpBar.h:163
extern const float32_t KF_ITEMWIDTH_INVALID;

// BrnHelpBar.h:164
extern char[] KAC_WIDTHVAR_NAME;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct HelpBar {
		// BrnHelpBar.h:62
		extern const int32_t KI_MAX_HELPITEMS = 7;

	private:
		// BrnHelpBar.h:163
		extern const float32_t KF_ITEMWIDTH_INVALID;

		// BrnHelpBar.h:164
		extern char[] KAC_WIDTHVAR_NAME;

	}

}

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

	}

}

// BrnHelpBar.h:50
struct BrnGui::HelpBar : public CgsGui::GuiComponent {
	// BrnHelpBar.h:62
	extern const int32_t KI_MAX_HELPITEMS = 7;

private:
	// BrnHelpBar.h:163
	extern const float32_t KF_ITEMWIDTH_INVALID;

	// BrnHelpBar.h:164
	extern char[] KAC_WIDTHVAR_NAME;

	// BrnHelpBar.h:166
	BrnGui::HelpItem[7] maItems;

	// BrnHelpBar.h:167
	BrnGui::Animator[7] maAnimators;

	// BrnHelpBar.h:168
	float32_t[7] mafItemWidths;

	// BrnHelpBar.h:170
	int32_t miNumUsedItems;

	// BrnHelpBar.h:171
	AnimChannelData::Time mCurrentTime;

	// BrnHelpBar.h:172
	Vector2 mBasePosition;

	// BrnHelpBar.h:174
	float32_t mfAnimationTime;

	// BrnHelpBar.h:175
	float32_t mfDelayBetweenItems;

	// BrnHelpBar.h:176
	float32_t mfSpacer;

	// BrnHelpBar.h:177
	float32_t mfStartX;

	// BrnHelpBar.h:179
	int32_t miNumItems;

	// BrnHelpBar.h:181
	bool mbItemInfoValid;

public:
	void HelpBar(const HelpBar &);

	void HelpBar();

	// BrnHelpBar.h:70
	void Construct(const char *, int32_t, StateInterface *, const char *);

	// BrnHelpBar.h:74
	void Destruct();

	// BrnHelpBar.h:78
	void SetupComponent();

	// BrnHelpBar.h:84
	void AppendExpectedAptComponent(BrnGui::GuiFlow, BrnGui::GuiCache *);

	// BrnHelpBar.h:195
	int32_t GetItemNameHash(int32_t) const;

	// BrnHelpBar.h:270
	bool IsItemInfoValid() const;

	// BrnHelpBar.h:210
	int32_t GetHelpBarItemCount() const;

	// BrnHelpBar.h:224
	BrnGui::HelpItem * GetHelpItem(int32_t);

	// BrnHelpBar.h:239
	BrnGui::Animator * GetAnimator(int32_t);

	// BrnHelpBar.h:255
	const BrnGui::Animator * GetAnimator(int32_t) const;

	// BrnHelpBar.h:116
	void Clear();

	// BrnHelpBar.h:123
	int32_t AppendHelpBarItem(const char *, BrnGui::ButtonIconComponent::EPadButton, BrnGui::ButtonIconComponent::EPadButton);

	// BrnHelpBar.h:128
	void TransitionIn(BrnGui::HelpBar::EAlignment);

	// BrnHelpBar.h:132
	void TransitionOut();

	// BrnHelpBar.h:137
	void SnapIn(BrnGui::HelpBar::EAlignment);

	// BrnHelpBar.h:141
	void SnapOut();

	// BrnHelpBar.h:146
	void Update(AnimChannelData::Time);

private:
	// BrnHelpBar.h:152
	void InvalidateAllItemInfo();

	// BrnHelpBar.h:157
	void InvalidateItemInfo(int32_t);

	// BrnHelpBar.h:161
	void UpdateItemInfo();

}

// BrnHelpBar.h:50
void BrnGui::HelpBar::HelpBar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

