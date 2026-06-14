// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsGuiKeyboard.h:39
	const int32_t KI_KEYBOARD_SYS_UTIL_CALLBACK_SLOT = 2;

}

// CgsGuiKeyboard.h:115
extern const uint32_t MAX_CHARACTERS = 512;

// CgsGuiKeyboard.h:79
struct CgsGui::GuiKeyboard {
private:
	// CgsGuiKeyboard.h:114
	sys_memory_container_t container_id;

	// CgsGuiKeyboard.h:115
	extern const uint32_t MAX_CHARACTERS = 512;

	// CgsGuiKeyboard.h:116
	CgsUtf16[512] maResultBuffer;

	// CgsGuiKeyboard.h:117
	CellOskDialogCallbackReturnParam mOutputInfo;

	// CgsGuiKeyboard.h:118
	CgsGui::GuiKeyboardListener * mpListener;

public:
	// CgsGuiKeyboard.h:85
	void Construct();

	// CgsGuiKeyboard.h:87
	bool Prepare(sys_memory_container_t);

	// CgsGuiKeyboard.h:90
	bool Release();

	// CgsGuiKeyboard.h:92
	void Destruct();

	// CgsGuiKeyboard.h:95
	bool IsShown() const;

	// CgsGuiKeyboard.h:98
	// Declaration
	void Show() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsGuiKeyboard.h:38
		typedef const CgsUtf16 * UTF16String;

	}

	// CgsGuiKeyboard.h:100
	void Update();

private:
	// CgsGuiKeyboard.h:105
	void HandleDialogFinished();

	// CgsGuiKeyboard.h:108
	void HandleDialogUnloaded();

	// CgsGuiKeyboard.h:111
	void SysutilCallback(uint64_t, uint64_t, void *);

}

// CgsGuiKeyboard.h:62
struct CgsGui::GuiKeyboardListener {
	int (*)(...) * _vptr.GuiKeyboardListener;

public:
	// CgsGuiKeyboard.h:66
	virtual void KeyboardClosed(UTF16String);

}

// CgsGuiShared.h:40
namespace CgsGui {
	// CgsGuiKeyboard.h:39
	const int32_t KI_KEYBOARD_SYS_UTIL_CALLBACK_SLOT = 2;

}

// CgsGuiKeyboard.h:62
struct CgsGui::GuiKeyboardListener {
	int (*)(...) * _vptr.GuiKeyboardListener;

public:
	void GuiKeyboardListener(const GuiKeyboardListener &);

	void GuiKeyboardListener();

	// CgsGuiKeyboard.h:66
	virtual void KeyboardClosed(UTF16String);

}

// CgsGuiKeyboard.h:62
void CgsGui::GuiKeyboardListener::GuiKeyboardListener() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiKeyboard.h:79
struct CgsGui::GuiKeyboard {
private:
	// CgsGuiKeyboard.h:114
	sys_memory_container_t container_id;

	// CgsGuiKeyboard.h:115
	extern const uint32_t MAX_CHARACTERS = 512;

	// CgsGuiKeyboard.h:116
	CgsUtf16[512] maResultBuffer;

	// CgsGuiKeyboard.h:117
	CellOskDialogCallbackReturnParam mOutputInfo;

	// CgsGuiKeyboard.h:118
	CgsGui::GuiKeyboardListener * mpListener;

public:
	// CgsGuiKeyboard.h:85
	void Construct();

	// CgsGuiKeyboard.h:87
	bool Prepare(sys_memory_container_t);

	// CgsGuiKeyboard.h:90
	bool Release();

	// CgsGuiKeyboard.h:92
	void Destruct();

	// CgsGuiKeyboard.h:95
	bool IsShown() const;

	// CgsGuiKeyboard.h:98
	// Declaration
	void Show(uint32_t, UTF16String, UTF16String, UTF16String, CgsGui::GuiKeyboardListener &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsGuiKeyboard.h:38
		typedef const CgsUtf16 * UTF16String;

	}

	// CgsGuiKeyboard.h:100
	void Update();

private:
	// CgsGuiKeyboard.h:105
	void HandleDialogFinished();

	// CgsGuiKeyboard.h:108
	void HandleDialogUnloaded();

	// CgsGuiKeyboard.h:111
	void SysutilCallback(uint64_t, uint64_t, void *);

}

// CgsOpaqueBuffer.h:30
namespace CgsGui {
	// CgsGuiKeyboard.h:39
	const int32_t KI_KEYBOARD_SYS_UTIL_CALLBACK_SLOT = 2;

}

