// BrnSingleMetric.h:45
struct BrnGui::SingleMetric : public CgsGui::GuiComponent {
private:
	// BrnSingleMetric.h:82
	BrnGui::TextField valueTextField;

	// BrnSingleMetric.h:83
	BrnGui::TextField labelTextField;

	// BrnSingleMetric.cpp:26
	extern const char[10] KAC_VALUE_COMPONENT;

	// BrnSingleMetric.cpp:27
	extern const char[10] KAC_LABEL_COMPONENT;

	// BrnSingleMetric.cpp:29
	extern const char[12] KAC_VISIBILITY;

	// BrnSingleMetric.h:90
	bool mbVisible;

public:
	// BrnSingleMetric.cpp:53
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnSingleMetric.cpp:76
	void SetValue(int32_t);

	// BrnSingleMetric.cpp:102
	void SetValue(float32_t);

	// BrnSingleMetric.cpp:135
	void SetLabel(const char *);

	// BrnSingleMetric.h:109
	bool IsVisible() const;

	// BrnSingleMetric.cpp:155
	void SetVisible(bool);

}

