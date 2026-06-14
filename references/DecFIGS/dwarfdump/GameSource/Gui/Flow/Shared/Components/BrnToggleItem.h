// BrnToggleItem.h:40
struct BrnGui::ToggleItem : public CgsGui::GuiComponent {
private:
	// BrnToggleItem.cpp:23
	extern const char[10] macAptToggleTextName;

	// BrnToggleItem.cpp:24
	extern const char[22] macAptScrollIdent;

	// BrnToggleItem.cpp:28
	extern const char[5] macAptLeftIdent;

	// BrnToggleItem.cpp:29
	extern const char[6] macAptRightIdent;

	// BrnToggleItem.cpp:26
	extern const char[5] macAptTrueIdent;

	// BrnToggleItem.cpp:27
	extern const char[6] macAptFalseIdent;

	// BrnToggleItem.cpp:25
	extern const char[20] macAptWrapIdent;

	// BrnToggleItem.h:78
	BrnGui::TextField mTextField;

public:
	// BrnToggleItem.cpp:50
	void Construct(const char *, StateInterface *, const char *, uint64_t);

	// BrnToggleItem.cpp:72
	void SetText(const char *);

	// BrnToggleItem.cpp:89
	virtual void Select();

	// BrnToggleItem.cpp:106
	virtual void Update();

}

