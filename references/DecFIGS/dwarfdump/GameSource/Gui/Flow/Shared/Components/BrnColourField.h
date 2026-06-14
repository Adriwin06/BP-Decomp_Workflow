// BrnColourField.h:48
extern const uint32_t KU_MAX_COLOUR_LEN = 16;

// BrnColourField.h:45
struct BrnGui::ColourField : public CgsGui::GuiComponent {
	// BrnColourField.h:48
	extern const uint32_t KU_MAX_COLOUR_LEN = 16;

private:
	// BrnColourField.h:78
	char[16] macColour1;

	// BrnColourField.h:79
	char[16] macColour2;

	// BrnColourField.h:80
	bool mbHidden;

	// BrnColourField.h:81
	bool mbIsGradient;

public:
	// BrnColourField.cpp:44
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnColourField.h:102
	void SetColour(uint32_t);

	// BrnColourField.h:128
	void SetGradient(uint32_t, uint32_t);

	// BrnColourField.h:155
	void Hide();

	// BrnColourField.h:171
	void Show();

private:
	// BrnColourField.cpp:69
	void OutputAptData();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ColourField {
	public:
		ColourField();

		// Unknown accessibility
		// BrnColourField.h:48
		extern const uint32_t KU_MAX_COLOUR_LEN = 16;

	}

}

// BrnColourField.h:45
void BrnGui::ColourField::ColourField() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

