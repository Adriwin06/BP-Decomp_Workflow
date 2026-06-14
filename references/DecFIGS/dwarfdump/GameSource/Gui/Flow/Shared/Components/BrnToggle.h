// BrnToggle.h:40
struct BrnGui::Toggle : public BrnGui::SelectableGroup {
private:
	// BrnToggle.h:91
	extern const int32_t KI_MAX_ITEMS_PER_TOGGLE = 100;

	// BrnToggle.cpp:23
	extern const char[11] macAptItemNameBase;

	// BrnToggle.cpp:24
	extern const char[12] macAptSizeIdent;

	// BrnToggle.cpp:25
	extern const char[18] macAptScrollIdent;

	// BrnToggle.cpp:26
	extern const char[12] macAptWrapIdent;

	// BrnToggle.cpp:27
	extern const char[5] macAptTrue;

	// BrnToggle.cpp:28
	extern const char[6] macAptFalse;

	// BrnToggle.cpp:29
	extern const char[5] macAptLeft;

	// BrnToggle.cpp:30
	extern const char[6] macAptRight;

	// BrnToggle.h:101
	ToggleItem[100] mToggleItems;

	// BrnToggle.h:102
	bool mbTransitioning;

public:
	// BrnToggle.cpp:51
	void Construct(const char *, StateInterface *, const char *, uint64_t);

	// BrnToggle.cpp:81
	void SetupToggle(int32_t, bool);

	// BrnToggle.h:124
	void SetItemText(int32_t, const char *);

	// BrnToggle.h:143
	void SetTransitioning(bool);

	// BrnToggle.h:163
	bool IsTransitioning() const;

	// BrnToggle.cpp:143
	virtual bool HighlightNext();

	// BrnToggle.cpp:169
	virtual bool HighlightPrevious();

	// BrnToggle.cpp:195
	virtual bool HighlightIndex(int32_t);

}

// BrnToggle.h:91
extern const int32_t KI_MAX_ITEMS_PER_TOGGLE = 100;

