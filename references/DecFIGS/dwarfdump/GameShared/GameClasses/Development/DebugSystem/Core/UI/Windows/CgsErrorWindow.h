// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugInternal.h:37
	namespace DebugUI {
		// Declaration
		struct ErrorWindow {
		private:
			// CgsErrorWindow.h:61
			extern const float32_t KF_ERRORWINDOWWIDTH;

			// CgsErrorWindow.h:62
			extern const float32_t KF_ERRORWINDOWHEIGHT;

			// CgsErrorWindow.h:63
			extern const float32_t KF_ERRORPULSETIME;

		}

	}

}

// CgsErrorWindow.h:61
extern const float32_t KF_ERRORWINDOWWIDTH;

// CgsErrorWindow.h:62
extern const float32_t KF_ERRORWINDOWHEIGHT;

// CgsErrorWindow.h:63
extern const float32_t KF_ERRORPULSETIME;

// CgsStrStream.h:39
namespace CgsDev {
	// CgsTypes.h:34
	namespace DebugUI {
		// Declaration
		struct ErrorWindow {
		private:
			// CgsErrorWindow.h:61
			extern const float32_t KF_ERRORWINDOWWIDTH;

			// CgsErrorWindow.h:62
			extern const float32_t KF_ERRORWINDOWHEIGHT;

			// CgsErrorWindow.h:63
			extern const float32_t KF_ERRORPULSETIME;

		}

	}

}

// CgsErrorWindow.h:52
struct CgsDev::DebugUI::ErrorWindow : public CgsDev::DebugUI::Window {
private:
	// CgsErrorWindow.cpp:35
	extern const float32_t KF_ERRORWINDOWWIDTH;

	// CgsErrorWindow.cpp:36
	extern const float32_t KF_ERRORWINDOWHEIGHT;

	// CgsErrorWindow.cpp:38
	extern const float32_t KF_ERRORPULSETIME;

	// CgsErrorWindow.h:65
	const char * mpcErrorMessage;

	// CgsErrorWindow.h:66
	float32_t mfPulse;

public:
	void ErrorWindow(const ErrorWindow &);

	void ErrorWindow();

	// CgsErrorWindow.cpp:59
	void Prepare(const char *);

	// CgsErrorWindow.cpp:97
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

	// CgsErrorWindow.cpp:122
	virtual void Render(CgsDev::Debug2DImmediateRender *);

}

// CgsErrorWindow.h:52
void CgsDev::DebugUI::ErrorWindow::ErrorWindow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

