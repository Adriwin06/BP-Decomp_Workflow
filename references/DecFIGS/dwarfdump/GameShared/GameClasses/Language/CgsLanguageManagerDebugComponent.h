// CgsLanguageManagerDebugComponent.h:54
void CgsLanguage::LanguageManagerDebugComponent::LanguageManagerDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLanguageManagerDebugComponent.h:54
struct CgsLanguage::LanguageManagerDebugComponent : public CgsDev::DebugComponent {
private:
	// CgsLanguageManagerDebugComponent.h:95
	const LanguageManager * mpLanguageManager;

	// CgsLanguageManagerDebugComponent.h:96
	bool mbShowDebugComponent;

	// CgsLanguageManagerDebugComponent.h:97
	bool mbShowKeys;

	// CgsLanguageManagerDebugComponent.h:98
	bool mbShowLocalisedTextAsStars;

	// CgsLanguageManagerDebugComponent.h:100
	const char *[5] mapStars;

	// CgsLanguageManagerDebugComponent.h:103
	float32_t mrPosX;

	// CgsLanguageManagerDebugComponent.h:104
	float32_t mrPosY;

	// CgsLanguageManagerDebugComponent.h:105
	float32_t mrTextSpacing;

	// CgsLanguageManagerDebugComponent.h:106
	float32_t mrTextSize;

	// CgsLanguageManagerDebugComponent.h:109
	int32_t mnNumber1;

	// CgsLanguageManagerDebugComponent.h:110
	int32_t mnNumber2;

	// CgsLanguageManagerDebugComponent.h:111
	int32_t mnCurrency;

	// CgsLanguageManagerDebugComponent.h:114
	int32_t mnDays;

	// CgsLanguageManagerDebugComponent.h:115
	int32_t mnMonths;

	// CgsLanguageManagerDebugComponent.h:116
	int32_t mnYears;

	// CgsLanguageManagerDebugComponent.h:118
	int32_t mnHours;

	// CgsLanguageManagerDebugComponent.h:119
	int32_t mnMinutes;

	// CgsLanguageManagerDebugComponent.h:120
	float32_t mrSeconds;

	// CgsLanguageManagerDebugComponent.h:122
	float32_t mrDistance;

public:
	// CgsLanguageManagerDebugComponent.cpp:97
	void Construct(const LanguageManager *);

	// CgsLanguageManagerDebugComponent.cpp:51
	void Destruct();

	// CgsLanguageManagerDebugComponent.cpp:216
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// CgsLanguageManagerDebugComponent.h:133
	bool ShowKeysOnly() const;

	// CgsLanguageManagerDebugComponent.h:139
	bool ShowLocalisedTextAsStars() const;

	// CgsLanguageManagerDebugComponent.h:145
	const char * GetStarString(int32_t) const;

protected:
	// CgsLanguageManagerDebugComponent.cpp:67
	virtual const char * GetName() const;

	// CgsLanguageManagerDebugComponent.cpp:82
	virtual const char * GetPath() const;

	// CgsLanguageManagerDebugComponent.cpp:149
	virtual void OnActivate();

private:
	// CgsLanguageManagerDebugComponent.cpp:331
	void DrawText(CgsDev::Debug2DImmediateRender *, const char *, const char *, float32_t, float32_t &) const;

}

