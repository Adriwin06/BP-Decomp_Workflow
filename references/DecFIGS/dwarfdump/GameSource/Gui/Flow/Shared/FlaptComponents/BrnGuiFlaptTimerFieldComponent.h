// BrnGuiFlaptTimerFieldComponent.h:134
extern char[] macTimerTextFieldName;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct FlaptTimerFieldComponent {
		// BrnGuiFlaptTimerFieldComponent.h:52
		enum ETimerMode {
			E_TIMER_MODE_COUNTING_UP = 0,
			E_TIMER_MODE_COUNTING_DOWN = 1,
			E_TIMER_MODE_COUNTING_NOT_COUNTING = 2,
			E_TIMER_MODE_COUNTING_COUNT = 3,
		}

	}

}

// BrnGuiFlaptTimerFieldComponent.h:49
struct BrnGui::FlaptTimerFieldComponent : public BrnFlaptComponent {
	int (*)(...) * _vptr.FlaptTimerFieldComponent;

private:
	// BrnGuiFlaptTimerFieldComponent.cpp:28
	extern const char[13] macTimerTextFieldName;

	// BrnGuiFlaptTimerFieldComponent.h:136
	TextFieldRef mTimerTextField;

	// BrnGuiFlaptTimerFieldComponent.h:138
	Vector4 mv4SafeColour;

	// BrnGuiFlaptTimerFieldComponent.h:140
	Vector4 mv4DangerColour;

	// BrnGuiFlaptTimerFieldComponent.h:142
	Vector4 mv4CurrentColour;

	// BrnGuiFlaptTimerFieldComponent.h:144
	float32_t mfSafeColourBoundary;

	// BrnGuiFlaptTimerFieldComponent.h:145
	float32_t mfDangerColourBoundary;

	// BrnGuiFlaptTimerFieldComponent.h:146
	float32_t mfOneOverBoundaryDifference;

	// BrnGuiFlaptTimerFieldComponent.h:147
	float32_t mfCurrentTime;

	// BrnGuiFlaptTimerFieldComponent.h:149
	BrnGui::FlaptTimerFieldComponent::ETimerMode meCountingMode;

public:
	// BrnGuiFlaptTimerFieldComponent.cpp:47
	virtual void Construct(const void *, StateInterface *, BrnGui::FlaptTimerFieldComponent::ETimerMode, const void *);

	// BrnGuiFlaptTimerFieldComponent.cpp:89
	virtual void Prepare(const char *, const char *, const BrnFlapt::FileRef &);

	// BrnGuiFlaptTimerFieldComponent.h:170
	void SetBoundaries(float32_t, float32_t);

	// BrnGuiFlaptTimerFieldComponent.h:204
	void SetSafeColours(uint8_t, uint8_t, uint8_t);

	// BrnGuiFlaptTimerFieldComponent.h:225
	void SetDangerColours(uint8_t, uint8_t, uint8_t);

	// BrnGuiFlaptTimerFieldComponent.cpp:113
	void SetTime(float32_t);

	// BrnGuiFlaptTimerFieldComponent.h:244
	void SetCountingMode(BrnGui::FlaptTimerFieldComponent::ETimerMode);

	// BrnGuiFlaptTimerFieldComponent.h:260
	void IncrementTime(float32_t);

	// BrnGuiFlaptTimerFieldComponent.h:276
	void DecrementsTime(float32_t);

	// BrnGuiFlaptTimerFieldComponent.h:291
	void HideTime();

	// BrnGuiFlaptTimerFieldComponent.h:306
	float32_t GetCurrentTime() const;

	// BrnGuiFlaptTimerFieldComponent.h:321
	bool IsTimeSafe();

	// BrnGuiFlaptTimerFieldComponent.h:349
	bool IsTimeDangerous();

private:
	// BrnGuiFlaptTimerFieldComponent.cpp:136
	void CalculateColour();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct FlaptTimerFieldComponent {
	public:
		FlaptTimerFieldComponent();

	private:
		// BrnGuiFlaptTimerFieldComponent.h:134
		extern char[] macTimerTextFieldName;

	}

}

// BrnGuiFlaptTimerFieldComponent.h:49
void BrnGui::FlaptTimerFieldComponent::FlaptTimerFieldComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

