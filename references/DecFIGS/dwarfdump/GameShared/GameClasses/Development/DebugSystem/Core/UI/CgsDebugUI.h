// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugInternal.h:37
	namespace DebugUI {
		// CgsDebugUI.h:51
		enum DockEdge {
			E_DOCKEDGE_TOP = 0,
			E_DOCKEDGE_BOTTOM = 1,
			E_DOCKEDGE_LEFT = 2,
			E_DOCKEDGE_RIGHT = 3,
		}

	}

}

// CgsDebugUI.h:72
struct CgsDev::DebugUI::DebugUI {
private:
	// CgsDebugUI.h:203
	CgsDev::DebugUI::Window * mpActiveWindow;

	// CgsDebugUI.h:204
	DebugLinkedList<CgsDev::DebugUI::Window> mWindowList;

	// CgsDebugUI.h:205
	float32_t mfCascadeX;

	// CgsDebugUI.h:206
	float32_t mfCascadeY;

	// CgsDebugUI.h:207
	bool mbVisible;

	// CgsDebugUI.h:210
	bool mbRunAutoExec;

	// CgsDebugUI.h:212
	CgsDev::Debug2DImmediateRender * mp2dRender;

	// CgsDebugUI.h:215
	Palette mPalette;

	// CgsDebugUI.h:216
	Metrics mMetrics;

	// CgsDebugUI.h:219
	DebugController mController;

	// CgsDebugUI.h:222
	MenuManager mMenuManager;

	// CgsDebugUI.h:223
	VariableManager mVariableManager;

	// CgsDebugUI.h:224
	FunctionManager mFunctionManager;

	// CgsDebugUI.h:225
	CgsDev::DebugUI::Console mConsole;

	// CgsDebugUI.h:226
	CgsDev::DebugUI::ErrorWindow mErrorWindow;

	// CgsDebugUI.h:227
	ScriptInterface mScriptInterface;

	// CgsDebugUI.h:228
	CgsDev::DebugUI::CommandWindow mCommandWindow;

public:
	// CgsDebugUI.h:77
	void Construct(const DebugManagerConstructParameters *);

	// CgsDebugUI.h:80
	void Update(float32_t);

	// CgsDebugUI.h:83
	void Destruct();

	// CgsDebugUI.h:90
	void SetGamePad(DebugManagerPad *);

	// CgsDebugUI.h:95
	void Render();

	// CgsDebugUI.h:100
	void AddWindow(CgsDev::DebugUI::Window *);

	// CgsDebugUI.h:103
	void RemoveWindow(CgsDev::DebugUI::Window *);

	// CgsDebugUI.h:106
	bool IsWindowAdded(CgsDev::DebugUI::Window *);

	// CgsDebugUI.h:109
	void SetActiveWindow(CgsDev::DebugUI::Window *);

	// CgsDebugUI.h:112
	const CgsDev::DebugUI::Window * GetActiveWindow() const;

	// CgsDebugUI.h:115
	void GetCascadePosition(const CgsDev::DebugUI::Window *, float32_t &, float32_t &);

	// CgsDebugUI.h:118
	void DockWindow(CgsDev::DebugUI::Window *, CgsDev::DebugUI::DockEdge);

	// CgsDebugUI.h:122
	const Palette & GetPalette() const;

	// CgsDebugUI.h:125
	const Metrics & GetMetrics() const;

	// CgsDebugUI.h:128
	MenuManager & GetMenuManager();

	// CgsDebugUI.h:131
	VariableManager & GetVariableManager();

	// CgsDebugUI.h:134
	FunctionManager & GetFunctionManager();

	// CgsDebugUI.h:137
	CgsDev::DebugUI::Console & GetConsole();

	// CgsDebugUI.h:140
	ScriptInterface & GetScriptInterface();

	// CgsDebugUI.h:143
	CgsDev::DebugUI::CommandWindow & GetCommandWindow();

	// CgsDebugUI.h:146
	DebugController & GetController();

	// CgsDebugUI.h:149
	bool IsVisible();

	// CgsDebugUI.h:153
	void ShowErrorMessage(const char *);

	// CgsDebugUI.h:158
	void SafeStringCopy(char *, const char *, int32_t);

	// CgsDebugUI.h:161
	void SafeStringCat(char *, const char *, int32_t);

	// CgsDebugUI.h:165
	void SetMetrics(const Metrics &);

	// CgsDebugUI.h:166
	void SetPalette(const Palette &);

	// CgsDebugUI.h:169
	CgsDev::Debug2DImmediateRender *const Get2DRenderer() const;

	// CgsDebugUI.h:173
	void Set2DRenderer(CgsDev::Debug2DImmediateRender *);

private:
	// CgsDebugUI.h:179
	void UpdateCascadePosition(bool);

	// CgsDebugUI.h:182
	bool HasModalWindow() const;

	// CgsDebugUI.h:185
	CgsDev::DebugUI::Window * GetNextWindow(CgsDev::DebugUI::Window *);

	// CgsDebugUI.h:188
	CgsDev::DebugUI::Window * GetPreviousWindow(CgsDev::DebugUI::Window *);

	// CgsDebugUI.h:191
	CgsDev::DebugUI::Window * GetNextActiveWindow(CgsDev::DebugUI::Window *);

	// CgsDebugUI.h:194
	CgsDev::DebugUI::Window * GetPreviousActiveWindow(CgsDev::DebugUI::Window *);

	// CgsDebugUI.h:197
	CgsDev::DebugManager & GetDebugManager() const;

	// CgsDebugUI.h:200
	CgsDev::DebugUI::Window * FindWindowNearPosition(float32_t, float32_t, float32_t, float32_t, float32_t, CgsDev::DebugUI::Window *);

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsTypes.h:34
	namespace DebugUI {
		// CgsDebugUI.h:51
		enum DockEdge {
			E_DOCKEDGE_TOP = 0,
			E_DOCKEDGE_BOTTOM = 1,
			E_DOCKEDGE_LEFT = 2,
			E_DOCKEDGE_RIGHT = 3,
		}

	}

}

