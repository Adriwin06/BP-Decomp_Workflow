// BrnColourSelector.h:43
struct BrnGui::ColourSelector : public CgsGui::GuiComponent {
private:
	// BrnColourSelector.cpp:23
	extern const float32_t KF_CURSOR_SPEED;

	// BrnColourSelector.cpp:24
	extern const char[7] KAC_CURSOR_NAME;

	// BrnColourSelector.cpp:25
	extern const char[7] KAC_APT_UPDATE;

	// BrnColourSelector.h:79
	BrnGui::GuiCursor mCursor;

public:
	// BrnColourSelector.cpp:45
	virtual void Construct(const char *, StateInterface *, Vector4, const char *);

	// BrnColourSelector.cpp:67
	void SetupComponent();

	// BrnColourSelector.cpp:85
	void MoveCursor(float32_t, float32_t);

	// BrnColourSelector.cpp:101
	Vector3 GetColour() const;

	// BrnColourSelector.cpp:193
	void SetColour(Vector3);

}

