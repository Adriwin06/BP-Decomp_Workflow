// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugInternal.h:37
	namespace DebugUI {
		// Declaration
		struct Console {
		private:
			// CgsConsole.h:76
			extern const float32_t KF_TOGGLETIME;

		}

	}

}

// CgsConsole.h:76
extern const float32_t KF_TOGGLETIME;

// CgsStrStream.h:39
namespace CgsDev {
	// CgsTypes.h:34
	namespace DebugUI {
		// Declaration
		struct Console {
		private:
			// CgsConsole.h:76
			extern const float32_t KF_TOGGLETIME;

		}

	}

}

// CgsConsole.h:53
struct CgsDev::DebugUI::Console : public LogWindow {
private:
	// CgsConsole.cpp:35
	extern const float32_t KF_TOGGLETIME;

	// CgsConsole.h:79
	bool mbVisible;

	// CgsConsole.h:80
	bool mbFullyVisible;

	// CgsConsole.h:81
	bool mbEnabled;

public:
	void Console(const Console &);

	void Console();

	// CgsConsole.cpp:58
	void Construct(const DebugManagerConstructParameters *);

	// CgsConsole.cpp:93
	void Destruct();

	// CgsConsole.cpp:108
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

	// CgsConsole.cpp:162
	void ToggleShow();

	// CgsConsole.h:93
	bool IsVisible() const;

	// CgsConsole.h:99
	void Enable();

	// CgsConsole.h:105
	void Disable();

	// CgsConsole.h:111
	bool IsEnabled();

}

// CgsConsole.h:53
void CgsDev::DebugUI::Console::Console() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

