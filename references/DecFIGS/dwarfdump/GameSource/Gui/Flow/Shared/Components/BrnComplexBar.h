// BrnComplexBar.h:45
extern const uint32_t KU_MAX_COLOUR_LEN = 16;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ComplexBar {
	public:
		// BrnComplexBar.h:139
		void RunTo(int32_t);

		// Unknown accessibility
		// BrnComplexBar.h:45
		extern const uint32_t KU_MAX_COLOUR_LEN = 16;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct ComplexBar {
	public:
		// BrnComplexBar.h:139
		void RunTo(int32_t);

		// Unknown accessibility
		// BrnComplexBar.h:45
		extern const uint32_t KU_MAX_COLOUR_LEN = 16;

	}

}

// BrnComplexBar.h:43
struct BrnGui::ComplexBar : public CgsGui::GuiComponent {
	// BrnComplexBar.h:45
	extern const uint32_t KU_MAX_COLOUR_LEN = 16;

private:
	// BrnComplexBar.h:92
	int32_t miCurrentIndex;

	// BrnComplexBar.h:93
	int32_t miTargetIndex;

	// BrnComplexBar.h:94
	int32_t miQueuedIndex;

	// BrnComplexBar.h:95
	bool mbTransitionInProgress;

	// BrnComplexBar.h:97
	char[16] macColour;

public:
	// BrnComplexBar.cpp:42
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnComplexBar.h:118
	void SetTo(int32_t);

	// BrnComplexBar.h:139
	void RunTo(int32_t);

	// BrnComplexBar.h:170
	void Increment(int32_t);

	// BrnComplexBar.h:196
	void Decrement(int32_t);

	// BrnComplexBar.cpp:114
	void HandleTransitionComplete(int32_t);

	// BrnComplexBar.h:223
	int32_t GetIndex() const;

	// BrnComplexBar.cpp:93
	void SetColour(uint32_t);

private:
	// BrnComplexBar.cpp:67
	void UpdateFlash(bool);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ComplexBar {
	public:
		ComplexBar();

		// Unknown accessibility
		// BrnComplexBar.h:45
		extern const uint32_t KU_MAX_COLOUR_LEN = 16;

	}

}

// BrnComplexBar.h:43
void BrnGui::ComplexBar::ComplexBar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

