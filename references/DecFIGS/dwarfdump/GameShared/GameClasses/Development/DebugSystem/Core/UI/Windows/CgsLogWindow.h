// CgsLogWindow.h:90
extern const int32_t KI_CONSOLESTRINGLENGTH = 60;

// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugInternal.h:37
	namespace DebugUI {
		// Declaration
		struct LogWindow {
		protected:
			// CgsLogWindow.h:90
			extern const int32_t KI_CONSOLESTRINGLENGTH = 60;

		}

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugInternal.h:37
	namespace DebugUI {
		// Declaration
		struct LogWindow {
		public:
			// CgsLogWindow.h:129
			LogWindow();

		protected:
			// CgsLogWindow.h:90
			extern const int32_t KI_CONSOLESTRINGLENGTH = 60;

		}

	}

}

// CgsLogWindow.h:47
void CgsDev::DebugUI::LogWindowStrStream::LogWindowStrStream() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugInternal.h:37
	namespace DebugUI {
		// Declaration
		struct LogWindow {
			// CgsLogWindow.h:94
			struct CConsoleTextLine {
				// CgsLogWindow.h:96
				char[60] macText;

			}

		}

	}

}

// CgsLogWindow.h:67
struct CgsDev::DebugUI::LogWindow : public CgsDev::DebugUI::CustomWindow {
	// CgsLogWindow.h:85
	CgsDev::DebugUI::LogWindowStrStream mLog;

protected:
	// CgsLogWindow.h:90
	extern const int32_t KI_CONSOLESTRINGLENGTH = 60;

	// CgsLogWindow.h:100
	CgsDev::DebugUI::LogWindow::CConsoleTextLine * mpLinesArray;

	// CgsLogWindow.h:103
	int8_t miLineCount;

	// CgsLogWindow.h:104
	int8_t miLineHead;

	// CgsLogWindow.h:107
	float32_t mfHorizontalIndent;

	// CgsLogWindow.h:108
	float32_t mfVerticalIndent;

	// CgsLogWindow.h:114
	float32_t mfCurrentWidth;

	// CgsLogWindow.h:115
	bool mbAutosize;

public:
	void LogWindow(const LogWindow &);

	// CgsLogWindow.h:129
	void LogWindow();

	// CgsLogWindow.cpp:71
	void Construct(int32_t);

	// CgsLogWindow.cpp:104
	bool Prepare(const char *, const char *, int32_t);

	// CgsLogWindow.cpp:125
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

	// CgsLogWindow.cpp:163
	virtual void Render(CgsDev::Debug2DImmediateRender *);

	// CgsLogWindow.cpp:259
	void Print(const char *);

	// CgsLogWindow.cpp:293
	void Append(const char *);

	// CgsLogWindow.cpp:210
	void Clear();

protected:
	// CgsLogWindow.cpp:234
	float32_t ComputeConsoleHeight();

	// CgsLogWindow.cpp:340
	void RefreshWidth();

}

// CgsLogWindow.h:47
struct CgsDev::DebugUI::LogWindowStrStream : public CgsDev::StrStreamBase {
protected:
	// CgsLogWindow.h:53
	LogWindow * mpWindow;

public:
	void LogWindowStrStream();

	void LogWindowStrStream(const LogWindowStrStream &);

protected:
	// CgsLogWindow.cpp:56
	virtual void Append(const char *);

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsTypes.h:34
	namespace DebugUI {
		// Declaration
		struct LogWindow {
		protected:
			// CgsLogWindow.h:90
			extern const int32_t KI_CONSOLESTRINGLENGTH = 60;

		}

	}

}

