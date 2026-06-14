// CgsTextWindow.h:68
struct CgsDev::DebugUI::TextWindow : public CgsDev::DebugUI::CustomWindow {
	// CgsTextWindow.h:85
	CgsDev::DebugUI::TextWindowStrStream mText;

protected:
	// CgsTextWindow.cpp:37
	extern const float32_t KF_DEFAULT_WIDTH;

	// CgsTextWindow.cpp:38
	extern const float32_t KF_DEFAULT_HEIGHT;

	// CgsTextWindow.h:100
	int32_t miBufferSize;

	// CgsTextWindow.h:101
	char * mpcBuffer;

	// CgsTextWindow.h:104
	bool mbAutoSize;

public:
	void TextWindow(const TextWindow &);

	// CgsTextWindow.h:117
	void TextWindow();

	// CgsTextWindow.cpp:75
	void Construct(int32_t);

	// CgsTextWindow.cpp:101
	bool Prepare(const char *, const char *, int32_t);

	// CgsTextWindow.cpp:123
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

	// CgsTextWindow.cpp:147
	virtual void Render(CgsDev::Debug2DImmediateRender *);

	// CgsTextWindow.cpp:192
	void Append(const char *);

	// CgsTextWindow.cpp:178
	void Clear();

	// CgsTextWindow.h:123
	bool IsAutoSize() const;

	// CgsTextWindow.h:128
	void SetAutoSize(bool);

	// CgsTextWindow.cpp:206
	void SetSizeToText();

}

// CgsTextWindow.h:48
struct CgsDev::DebugUI::TextWindowStrStream : public CgsDev::StrStreamBase {
protected:
	// CgsTextWindow.h:54
	TextWindow * mpWindow;

public:
	void TextWindowStrStream();

	void TextWindowStrStream(const TextWindowStrStream &);

protected:
	// CgsTextWindow.cpp:60
	virtual void Append(const char *);

}

