// BrnProgressBar.h:63
extern char[] KAC_APTPROGRESSHANDLE;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ProgressBar {
	private:
		// BrnProgressBar.h:63
		extern char[] KAC_APTPROGRESSHANDLE;

	}

}

// BrnProgressBar.h:42
struct BrnGui::ProgressBar : public CgsGui::GuiComponent {
private:
	// BrnProgressBar.cpp:23
	extern const char[13] KAC_APTPROGRESSHANDLE;

	// BrnProgressBar.h:69
	float32_t mfCurrentProgress;

public:
	// BrnProgressBar.cpp:44
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnProgressBar.cpp:63
	float32_t SetProgress(float32_t);

	// BrnProgressBar.h:84
	float32_t GetProgress() const;

private:
	// BrnProgressBar.cpp:90
	void UpdateApt();

}

