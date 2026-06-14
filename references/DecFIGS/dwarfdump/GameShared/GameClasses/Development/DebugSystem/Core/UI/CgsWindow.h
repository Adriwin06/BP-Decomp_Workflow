// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugInternal.h:37
	namespace DebugUI {
		// Declaration
		struct Window {
			// CgsWindow.h:62
			extern const int32_t KX_FLAGNORMAL;

			// CgsWindow.h:63
			extern const int32_t KX_FLAGDISABLED = 1;

			// CgsWindow.h:67
			extern const int32_t KX_FLAGHIDDEN = 16;

			// CgsWindow.h:68
			extern const int32_t KX_FLAGPINNED = 32;

			// CgsWindow.h:69
			extern const int32_t KX_FLAGNOFOCUS = 64;

			// CgsWindow.h:70
			extern const int32_t KX_FLAGMODAL = 128;

		}

	}

}

// CgsWindow.h:62
extern const int32_t KX_FLAGNORMAL;

// CgsWindow.h:63
extern const int32_t KX_FLAGDISABLED = 1;

// CgsWindow.h:67
extern const int32_t KX_FLAGHIDDEN = 16;

// CgsWindow.h:68
extern const int32_t KX_FLAGPINNED = 32;

// CgsWindow.h:69
extern const int32_t KX_FLAGNOFOCUS = 64;

// CgsWindow.h:70
extern const int32_t KX_FLAGMODAL = 128;

// CgsStrStream.h:39
namespace CgsDev {
	// CgsTypes.h:34
	namespace DebugUI {
		// Declaration
		struct Window {
			// CgsWindow.h:62
			extern const int32_t KX_FLAGNORMAL;

			// CgsWindow.h:63
			extern const int32_t KX_FLAGDISABLED = 1;

			// CgsWindow.h:67
			extern const int32_t KX_FLAGHIDDEN = 16;

			// CgsWindow.h:68
			extern const int32_t KX_FLAGPINNED = 32;

			// CgsWindow.h:69
			extern const int32_t KX_FLAGNOFOCUS = 64;

			// CgsWindow.h:70
			extern const int32_t KX_FLAGMODAL = 128;

		}

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugInternal.h:37
	namespace DebugUI {
		// Declaration
		struct Window {
		public:
			// CgsWindow.h:105
			virtual void OnGetFocus();

			// CgsWindow.h:106
			virtual void OnLostFocus();

			// CgsWindow.h:164
			float32_t GetX() const;

			// CgsWindow.h:169
			float32_t GetY() const;

			// Unknown accessibility
			// CgsWindow.h:62
			extern const int32_t KX_FLAGNORMAL;

			// Unknown accessibility
			// CgsWindow.h:63
			extern const int32_t KX_FLAGDISABLED = 1;

			// Unknown accessibility
			// CgsWindow.h:67
			extern const int32_t KX_FLAGHIDDEN = 16;

			// Unknown accessibility
			// CgsWindow.h:68
			extern const int32_t KX_FLAGPINNED = 32;

			// Unknown accessibility
			// CgsWindow.h:69
			extern const int32_t KX_FLAGNOFOCUS = 64;

			// Unknown accessibility
			// CgsWindow.h:70
			extern const int32_t KX_FLAGMODAL = 128;

		}

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugInternal.h:37
	namespace DebugUI {
		// Declaration
		struct Window {
		public:
			// CgsWindow.h:105
			virtual void OnGetFocus();

			// CgsWindow.h:106
			virtual void OnLostFocus();

			Window();

			// Unknown accessibility
			// CgsWindow.h:62
			extern const int32_t KX_FLAGNORMAL;

			// Unknown accessibility
			// CgsWindow.h:63
			extern const int32_t KX_FLAGDISABLED = 1;

			// Unknown accessibility
			// CgsWindow.h:67
			extern const int32_t KX_FLAGHIDDEN = 16;

			// Unknown accessibility
			// CgsWindow.h:68
			extern const int32_t KX_FLAGPINNED = 32;

			// Unknown accessibility
			// CgsWindow.h:69
			extern const int32_t KX_FLAGNOFOCUS = 64;

			// Unknown accessibility
			// CgsWindow.h:70
			extern const int32_t KX_FLAGMODAL = 128;

		}

	}

}

// CgsWindow.h:58
void CgsDev::DebugUI::Window::Window() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugInternal.h:37
	namespace DebugUI {
		// Declaration
		struct Window {
		public:
			Window();

			// Unknown accessibility
			// CgsWindow.h:62
			extern const int32_t KX_FLAGNORMAL;

			// Unknown accessibility
			// CgsWindow.h:63
			extern const int32_t KX_FLAGDISABLED = 1;

			// Unknown accessibility
			// CgsWindow.h:67
			extern const int32_t KX_FLAGHIDDEN = 16;

			// Unknown accessibility
			// CgsWindow.h:68
			extern const int32_t KX_FLAGPINNED = 32;

			// Unknown accessibility
			// CgsWindow.h:69
			extern const int32_t KX_FLAGNOFOCUS = 64;

			// Unknown accessibility
			// CgsWindow.h:70
			extern const int32_t KX_FLAGMODAL = 128;

		}

	}

}

// CgsWindow.h:58
struct CgsDev::DebugUI::Window : public DebugInternal {
	int (*)(...) * _vptr.Window;

	// CgsWindow.h:62
	extern const int32_t KX_FLAGNORMAL;

	// CgsWindow.h:63
	extern const int32_t KX_FLAGDISABLED = 1;

	// CgsWindow.h:64
	extern const int32_t KX_FLAGNOCAPTION = 2;

	// CgsWindow.h:65
	extern const int32_t KX_FLAGNOBORDER = 4;

	// CgsWindow.h:66
	extern const int32_t KX_FLAGNOBACKGROUND = 8;

	// CgsWindow.h:67
	extern const int32_t KX_FLAGHIDDEN = 16;

	// CgsWindow.h:68
	extern const int32_t KX_FLAGPINNED = 32;

	// CgsWindow.h:69
	extern const int32_t KX_FLAGNOFOCUS = 64;

	// CgsWindow.h:70
	extern const int32_t KX_FLAGMODAL = 128;

	// CgsWindow.h:71
	extern const int32_t KX_FLAGNOCASCADE = 256;

	// CgsWindow.h:72
	extern const int32_t KX_FLAGNOCLAMPTOSCREEN = 512;

protected:
	// CgsWindow.h:135
	const char * mpcCaption;

	// CgsWindow.h:136
	int32_t mxFlags;

	// CgsWindow.h:137
	float32_t mfTransparency;

private:
	// CgsWindow.h:141
	float32_t mfX;

	// CgsWindow.h:142
	float32_t mfY;

	// CgsWindow.h:143
	float32_t mfWidth;

	// CgsWindow.h:144
	float32_t mfHeight;

	// CgsWindow.h:147
	CgsDev::DebugUI::Window * mpDebugLinkedListNext;

public:
	void Window();

	void Window(const CgsDev::DebugUI::Window &);

	// CgsWindow.cpp:64
	void Prepare(float32_t, float32_t, const char *, int32_t);

	// CgsWindow.cpp:216
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

	// CgsWindow.cpp:112
	virtual void Render(CgsDev::Debug2DImmediateRender *);

	// CgsWindow.h:164
	float32_t GetX() const;

	// CgsWindow.h:169
	float32_t GetY() const;

	// CgsWindow.h:174
	float32_t GetWidth() const;

	// CgsWindow.h:179
	float32_t GetHeight() const;

	// CgsWindow.h:184
	const char * GetCaption() const;

	// CgsWindow.h:189
	int32_t GetFlags() const;

	// CgsWindow.h:194
	bool IsPinned() const;

	// CgsWindow.h:199
	bool IsHidden() const;

	// CgsWindow.h:204
	bool IsEnabled() const;

	// CgsWindow.h:209
	bool IsModal() const;

	// CgsWindow.cpp:233
	bool IsActiveWindow() const;

	// CgsWindow.h:214
	bool CanActivate() const;

	// CgsWindow.h:219
	void TogglePin();

	// CgsWindow.cpp:311
	void ApplyMovement(float32_t, float32_t);

	// CgsWindow.cpp:333
	void SetSize(float32_t, float32_t);

	// CgsWindow.cpp:369
	void SetPosition(float32_t, float32_t);

	// CgsWindow.h:224
	void SetCaption(const char *);

	// CgsWindow.h:105
	virtual void OnGetFocus();

	// CgsWindow.h:106
	virtual void OnLostFocus();

	// CgsWindow.cpp:432
	float32_t CalcScreenWidth();

	// CgsWindow.cpp:453
	float32_t CalcScreenHeight();

	// CgsWindow.cpp:475
	float32_t CalcCaptionWidth();

	// CgsWindow.cpp:499
	float32_t CalcCaptionHeight();

protected:
	// CgsWindow.cpp:523
	virtual void GetMenuPath(char *, int32_t);

	// CgsWindow.cpp:541
	virtual void GetSelectedItemString(char *, int32_t) const;

	// CgsWindow.cpp:251
	RGBA ScaleColour(RGBA) const;

	// CgsWindow.cpp:286
	void ClampToScreen();

	// CgsWindow.cpp:402
	const Palette & GetPalette() const;

	// CgsWindow.cpp:417
	const Metrics & GetMetrics() const;

	// CgsWindow.cpp:388
	CgsDev::Debug2DImmediateRender *const Get2DRenderer() const;

}

// CgsWindow.h:64
extern const int32_t KX_FLAGNOCAPTION = 2;

// CgsWindow.h:65
extern const int32_t KX_FLAGNOBORDER = 4;

// CgsWindow.h:66
extern const int32_t KX_FLAGNOBACKGROUND = 8;

// CgsWindow.h:71
extern const int32_t KX_FLAGNOCASCADE = 256;

// CgsWindow.h:72
extern const int32_t KX_FLAGNOCLAMPTOSCREEN = 512;

// CgsStrStream.h:39
namespace CgsDev {
	// CgsTypes.h:34
	namespace DebugUI {
		// Declaration
		struct Window {
		public:
			// CgsWindow.h:105
			virtual void OnGetFocus();

			// CgsWindow.h:106
			virtual void OnLostFocus();

			// CgsWindow.h:164
			float32_t GetX() const;

			// CgsWindow.h:169
			float32_t GetY() const;

			// CgsWindow.h:174
			float32_t GetWidth() const;

			// CgsWindow.h:179
			float32_t GetHeight() const;

			// Unknown accessibility
			// CgsWindow.h:62
			extern const int32_t KX_FLAGNORMAL;

			// Unknown accessibility
			// CgsWindow.h:63
			extern const int32_t KX_FLAGDISABLED = 1;

			// Unknown accessibility
			// CgsWindow.h:67
			extern const int32_t KX_FLAGHIDDEN = 16;

			// Unknown accessibility
			// CgsWindow.h:68
			extern const int32_t KX_FLAGPINNED = 32;

			// Unknown accessibility
			// CgsWindow.h:69
			extern const int32_t KX_FLAGNOFOCUS = 64;

			// Unknown accessibility
			// CgsWindow.h:70
			extern const int32_t KX_FLAGMODAL = 128;

		}

	}

}

