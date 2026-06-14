// CgsStrStream.h:39
namespace CgsDev {
	// CgsVectorFont.h:39
	const unsigned char KC_DEBUG_CHARACTER_TRIANGLE = 127;

	// CgsVectorFont.h:40
	const unsigned char KC_DEBUG_CHARACTER_SQUARE = 128;

	// CgsVectorFont.h:41
	const unsigned char KC_DEBUG_CHARACTER_CROSS = 129;

	// CgsVectorFont.h:42
	const unsigned char KC_DEBUG_CHARACTER_CIRCLE = 130;

	// CgsVectorFont.h:43
	const unsigned char KC_DEBUG_CHARACTER_UP = 131;

	// CgsVectorFont.h:44
	const unsigned char KC_DEBUG_CHARACTER_DOWN = 132;

	// CgsVectorFont.h:45
	const unsigned char KC_DEBUG_CHARACTER_LEFT = 133;

	// CgsVectorFont.h:46
	const unsigned char KC_DEBUG_CHARACTER_RIGHT = 134;

	// CgsVectorFont.h:47
	const unsigned char KC_DEBUG_CHARACTER_DEBUG = 135;

}

// CgsVectorFont.h:63
struct CgsDev::VectorFont {
private:
	// CgsVectorFont.h:130
	Vector2 mSize;

	// CgsVectorFont.h:131
	RGBA mColour;

	// CgsVectorFont.h:134
	CgsDev::Debug2DImmediateRender * mp2DRenderer;

	// CgsVectorFont.h:135
	CgsDev::Debug3DImmediateRender * mp3DRenderer;

public:
	// CgsVectorFont.h:68
	void Construct();

	// CgsVectorFont.h:73
	void Construct(Vector2, RGBA);

	// CgsVectorFont.h:79
	float32_t Print(float32_t, float32_t, const char *);

	// CgsVectorFont.h:86
	float32_t Print(float32_t, float32_t, const char *, RGBA);

	// CgsVectorFont.h:91
	float32_t ComputeTextWidth(const char *, Vector2);

	// CgsVectorFont.h:96
	Vector2 ComputeTextExtent(const char *, Vector2);

	// CgsVectorFont.h:102
	void DrawLine(Vector2, Vector2, RGBA);

	// CgsVectorFont.h:105
	void SetSize(Vector2);

	// CgsVectorFont.h:108
	float32_t CalcCharacterHeight(float32_t);

	// CgsVectorFont.h:111
	void SetRenderer(CgsDev::Debug2DImmediateRender *);

	// CgsVectorFont.h:114
	void SetRenderer(CgsDev::Debug3DImmediateRender *);

	// CgsVectorFont.h:123
	Vector2 PrintComplex(float32_t, float32_t, const char *, RGBA, float32_t);

}

// CgsVectorFont.h:149
struct CgsDev::VectorFontStream : public CgsDev::StrStreamBase {
private:
	// CgsVectorFont.h:167
	VectorFont mVectorFont;

	// CgsVectorFont.h:170
	Vector2 mCurrentPosition;

	// CgsVectorFont.h:171
	float32_t mfDefaultX;

	// CgsVectorFont.h:172
	RGBA mColourRGBA;

public:
	// CgsVectorFont.cpp:347
	void Construct(CgsDev::Debug2DImmediateRender *);

	// CgsVectorFont.cpp:362
	void Prepare(float32_t, float32_t, float32_t, RGBA);

	// CgsVectorFont.h:199
	void SetPosition(float32_t, float32_t);

	// CgsVectorFont.h:206
	void SetSize(float32_t);

	// CgsVectorFont.h:212
	void SetColour(RGBA);

protected:
	// CgsVectorFont.cpp:378
	virtual void Append(const char *);

}

