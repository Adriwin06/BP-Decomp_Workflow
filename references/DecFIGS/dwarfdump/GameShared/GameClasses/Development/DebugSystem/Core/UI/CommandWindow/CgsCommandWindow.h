// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugInternal.h:37
	namespace DebugUI {
		// Declaration
		struct CommandWindow {
		protected:
			// CgsCommandWindow.h:75
			extern const int32_t KI_MAX_INPUT = 100;

		private:
			// CgsCommandWindow.h:91
			extern const float32_t KF_CURSOR_BLINK_TIME;

		}

	}

}

// CgsCommandWindow.h:75
extern const int32_t KI_MAX_INPUT = 100;

// CgsCommandWindow.h:91
extern const float32_t KF_CURSOR_BLINK_TIME;

// CgsStrStream.h:39
namespace CgsDev {
	// CgsTypes.h:34
	namespace DebugUI {
		// Declaration
		struct CommandWindow {
		protected:
			// CgsCommandWindow.h:75
			extern const int32_t KI_MAX_INPUT = 100;

		private:
			// CgsCommandWindow.h:91
			extern const float32_t KF_CURSOR_BLINK_TIME;

		}

	}

}

// CgsCommandWindow.h:54
struct CgsDev::DebugUI::CommandWindow : public CgsDev::DebugUI::Window {
protected:
	// CgsCommandWindow.h:75
	extern const int32_t KI_MAX_INPUT = 100;

private:
	// CgsCommandWindow.cpp:41
	extern const float32_t KF_CURSOR_BLINK_TIME;

	// CgsCommandWindow.h:93
	char[100] macInput;

	// CgsCommandWindow.h:94
	float32_t mfBlinkTime;

	// CgsCommandWindow.h:95
	bool mbCursorBlink;

public:
	void CommandWindow(const CommandWindow &);

	void CommandWindow();

	// CgsCommandWindow.cpp:62
	void Construct();

	// CgsCommandWindow.cpp:200
	virtual void Render(CgsDev::Debug2DImmediateRender *);

	// CgsCommandWindow.cpp:83
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

	// CgsCommandWindow.h:62
	void Register(const char *);

	// CgsCommandWindow.h:63
	void Unregister();

	// CgsCommandWindow.cpp:138
	void ToggleShow();

	// CgsCommandWindow.cpp:410
	bool IsVisible();

	// CgsCommandWindow.cpp:331
	virtual void OnGetFocus();

	// CgsCommandWindow.cpp:345
	virtual void OnLostFocus();

protected:
	// CgsCommandWindow.cpp:317
	void Clear();

	// CgsCommandWindow.cpp:228
	void ProcessInput();

	// CgsCommandWindow.cpp:109
	void UpdatePosition();

private:
	// CgsCommandWindow.cpp:361
	void GetCurrentItemString(char *, int32_t);

}

// CgsCommandWindow.h:54
void CgsDev::DebugUI::CommandWindow::CommandWindow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

