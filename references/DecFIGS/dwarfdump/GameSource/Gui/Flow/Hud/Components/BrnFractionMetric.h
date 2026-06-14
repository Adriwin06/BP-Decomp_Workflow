// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct FractionMetric {
		// BrnFractionMetric.h:49
		enum EValueSection {
			E_VALUE_NUMERATOR = 0,
			E_VALUE_DENOMINATOR = 1,
			E_VALUE_SECTION_COUNT = 2,
		}

	}

}

// BrnFractionMetric.h:46
struct BrnGui::FractionMetric : public CgsGui::GuiComponent {
private:
	// BrnFractionMetric.h:98
	BrnGui::TextField numeratorTextField;

	// BrnFractionMetric.h:99
	BrnGui::TextField denominatorTextField;

	// BrnFractionMetric.h:100
	BrnGui::TextField labelTextField;

	// BrnFractionMetric.cpp:26
	extern const char[20] KAC_NUMERATOR_COMPONENT;

	// BrnFractionMetric.cpp:27
	extern const char[22] KAC_DENOMINATOR_COMPONENT;

	// BrnFractionMetric.cpp:28
	extern const char[10] KAC_LABEL_COMPONENT;

	// BrnFractionMetric.cpp:30
	extern const char[12] KAC_VISIBILITY;

	// BrnFractionMetric.h:108
	bool mbVisible;

public:
	// BrnFractionMetric.cpp:53
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnFractionMetric.cpp:79
	void SetValue(int32_t, BrnGui::FractionMetric::EValueSection);

	// BrnFractionMetric.cpp:105
	void SetValue(float32_t, BrnGui::FractionMetric::EValueSection);

	// BrnFractionMetric.cpp:177
	void SetLabel(const char *);

	// BrnFractionMetric.h:127
	bool IsVisible() const;

	// BrnFractionMetric.cpp:197
	void SetVisible(bool);

private:
	// BrnFractionMetric.cpp:139
	void SetValueText(const char *, BrnGui::FractionMetric::EValueSection);

}

