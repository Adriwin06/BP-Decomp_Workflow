// BrnScrollableSelection.h:47
struct BrnGui::ScrollableSelection : public BrnGui::SelectableGroup {
	// BrnScrollableSelection.h:140
	extern const int32_t KI_SCROLLABLE_SELECTION_ITEMS = 32;

private:
	// BrnScrollableSelection.cpp:27
	extern const char[15] KAC_DEFAULT_SELECTABLE_BASE_NAME;

	// BrnScrollableSelection.cpp:28
	extern const char[8] KAC_APT_WIDTH_VAR;

	// BrnScrollableSelection.cpp:29
	extern const float32_t KF_ITEMWIDTH_INVALID;

	// BrnScrollableSelection.h:158
	int32_t miNumDisplayedItems;

	// BrnScrollableSelection.h:160
	AnimChannelData::Time mCurrentTime;

	// BrnScrollableSelection.h:161
	bool mbIsTextUpdated;

	// BrnScrollableSelection.h:163
	Vector2 mBasePosition;

	// BrnScrollableSelection.h:164
	float32_t mfXSpacing;

	// BrnScrollableSelection.h:165
	float32_t mfAnimateInTime;

	// BrnScrollableSelection.h:166
	float32_t mfScrollTime;

	// BrnScrollableSelection.h:168
	Array<BrnGui::ScrollableSelectionItem,32u> maItems;

	// BrnScrollableSelection.h:169
	Array<float32_t,32u> mafItemWidths;

	// BrnScrollableSelection.h:171
	Array<BrnGui::Animator,32u> maAnimators;

public:
	// BrnScrollableSelection.cpp:50
	void Construct(const char *, StateInterface *, const char *, uint64_t, const char *);

	// BrnScrollableSelection.cpp:109
	void SetupSelection(int32_t, bool, int32_t, const char **, uint64_t *);

	// BrnScrollableSelection.h:184
	bool IsTextUpdated() const;

	// BrnScrollableSelection.h:198
	BrnGui::Animator * GetAnimator(int32_t);

	// BrnScrollableSelection.h:213
	const char * GetItemName(int32_t) const;

	// BrnScrollableSelection.h:228
	int32_t GetItemNameHash(int32_t) const;

	// BrnScrollableSelection.cpp:167
	virtual void TransitionIn();

	// BrnScrollableSelection.cpp:283
	virtual void TransitionOut();

	// BrnScrollableSelection.cpp:315
	virtual void Clear();

	// BrnScrollableSelection.cpp:329
	virtual void Add(BrnGui::ScrollableSelectionItem *);

	// BrnScrollableSelection.cpp:343
	virtual void Enable(int32_t);

	// BrnScrollableSelection.cpp:357
	virtual void Disable(int32_t);

	// BrnScrollableSelection.cpp:370
	virtual bool HighlightNext();

	// BrnScrollableSelection.cpp:392
	virtual bool HighlightPrevious();

	// BrnScrollableSelection.cpp:414
	virtual bool HighlightIndex(int32_t);

	// BrnScrollableSelection.cpp:437
	virtual void Select();

	// BrnScrollableSelection.cpp:450
	virtual void Update();

	// BrnScrollableSelection.cpp:469
	virtual void UpdateToTime(AnimChannelData::Time);

private:
	// BrnScrollableSelection.cpp:492
	void AnimateToIndex(int32_t);

	// BrnScrollableSelection.cpp:554
	void UpdateItemWidths(bool);

}

// BrnScrollableSelection.h:140
extern const int32_t KI_SCROLLABLE_SELECTION_ITEMS = 32;

