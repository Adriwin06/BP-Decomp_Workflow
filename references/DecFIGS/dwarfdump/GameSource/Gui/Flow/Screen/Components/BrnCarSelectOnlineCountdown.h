// BrnCarSelectOnlineCountdown.h:63
extern char[] KAC_NUMBER_TEXTFIELD_NAME;

// BrnCarSelectOnlineCountdown.h:46
struct BrnGui::CarSelectOnlineCountdown : public CgsGui::GuiComponent {
private:
	// BrnCarSelectOnlineCountdown.cpp:23
	extern const char[8] KAC_NUMBER_TEXTFIELD_NAME;

	// BrnCarSelectOnlineCountdown.h:64
	BrnGui::TextField mNumberTextfield;

	// BrnCarSelectOnlineCountdown.h:66
	int32_t miTimeLeft;

public:
	// BrnCarSelectOnlineCountdown.cpp:44
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnCarSelectOnlineCountdown.cpp:64
	void SetTimeLeft(float32_t);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CarSelectOnlineCountdown {
	private:
		// BrnCarSelectOnlineCountdown.h:63
		extern char[] KAC_NUMBER_TEXTFIELD_NAME;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CarSelectOnlineCountdown {
	private:
		// BrnCarSelectOnlineCountdown.h:63
		extern char[] KAC_NUMBER_TEXTFIELD_NAME;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CarSelectOnlineCountdown {
	public:
		CarSelectOnlineCountdown();

	private:
		// BrnCarSelectOnlineCountdown.h:63
		extern char[] KAC_NUMBER_TEXTFIELD_NAME;

	}

}

// BrnCarSelectOnlineCountdown.h:46
void BrnGui::CarSelectOnlineCountdown::CarSelectOnlineCountdown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

