// BrnTicker.h:45
struct BrnGui::Ticker : public CgsGui::GuiComponent {
private:
	// BrnTicker.cpp:24
	extern const char[9] KAC_APT_TEXTHANDLE;

	// BrnTicker.cpp:25
	extern const char[11] KAC_APT_UPDATEHANDLE;

	// BrnTicker.cpp:27
	extern const char[5] KAC_TEXT_PADDER;

	// BrnTicker.h:92
	extern const int32_t KI_PADDER_LENGTH = 4;

	// BrnTicker.h:94
	extern const int32_t KI_MAX_TICKER_LENGTH = 256;

	// BrnTicker.h:95
	char[256] macCurrentString;

	// BrnTicker.h:96
	char[256] macPaddedString;

public:
	// BrnTicker.cpp:50
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnTicker.h:112
	const char * GetText() const;

	// BrnTicker.cpp:70
	bool SetText(const char *);

	// BrnTicker.cpp:123
	bool AddText(const char *, bool);

	// BrnTicker.cpp:172
	int32_t RemoveText();

	// BrnTicker.h:127
	void Clear();

	// BrnTicker.cpp:213
	void Update();

private:
	// BrnTicker.h:86
	void UpdateApt();

}

// BrnTicker.h:92
extern const int32_t KI_PADDER_LENGTH = 4;

// BrnTicker.h:94
extern const int32_t KI_MAX_TICKER_LENGTH = 256;

