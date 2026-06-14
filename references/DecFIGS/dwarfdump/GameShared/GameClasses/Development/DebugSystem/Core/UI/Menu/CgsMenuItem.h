// CgsMenuItem.h:58
void CgsDev::DebugUI::MenuItem::MenuItem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMenuItem.h:58
struct CgsDev::DebugUI::MenuItem : public DebugInternal {
	int (*)(...) * _vptr.MenuItem;

protected:
	// CgsMenuItem.h:118
	float32_t mfWidth;

	// CgsMenuItem.h:119
	float32_t mfHeight;

private:
	// CgsMenuItem.h:124
	CgsDev::DebugUI::MenuItem * mpDebugLinkedListNext;

public:
	void MenuItem();

	void MenuItem(const CgsDev::DebugUI::MenuItem &);

	// CgsMenuItem.cpp:56
	void Prepare();

	// CgsMenuItem.h:66
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

	// CgsMenuItem.h:69
	virtual void Render(CgsDev::Debug2DImmediateRender *, float32_t, float32_t, bool, float32_t);

	// CgsMenuItem.h:72
	virtual void ComputeSize();

	// CgsMenuItem.h:137
	float32_t GetWidth() const;

	// CgsMenuItem.h:142
	float32_t GetHeight() const;

	// CgsMenuItem.h:147
	void SetWidth(float32_t);

	// CgsMenuItem.h:152
	void SetHeight(float32_t);

	// CgsMenuItem.cpp:174
	virtual bool IsUseful() const;

	// CgsMenuItem.cpp:191
	virtual bool IsVisible() const;

	// CgsMenuItem.cpp:258
	virtual void GetDisplayName(char *, int32_t) const;

	// CgsMenuItem.cpp:275
	virtual void GetItemString(char *, int32_t) const;

	// CgsMenuItem.cpp:290
	virtual CgsDev::DebugUI::Window * OpenAsWindow();

protected:
	// CgsMenuItem.cpp:81
	void RenderMenuItemText(CgsDev::Debug2DImmediateRender *, const char *, float32_t, float32_t, float32_t, float32_t, bool, float32_t);

	// CgsMenuItem.cpp:125
	void RenderMenuItemBackground(CgsDev::Debug2DImmediateRender *, float32_t, float32_t, float32_t, float32_t, bool, float32_t);

	// CgsMenuItem.cpp:151
	void ComputeSizeFromText(const char *);

	// CgsMenuItem.cpp:223
	const Palette & GetPalette() const;

	// CgsMenuItem.cpp:241
	const Metrics & GetMetrics() const;

	// CgsMenuItem.cpp:206
	CgsDev::Debug2DImmediateRender *const Get2DRenderer() const;

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugInternal.h:37
	namespace DebugUI {
		// Declaration
		struct MenuItem {
		public:
			MenuItem();

			// CgsMenuItem.h:137
			float32_t GetWidth() const;

		}

	}

}

