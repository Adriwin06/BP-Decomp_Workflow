// hosttype.h:32
typedef unsigned int RwUInt32;

// hosttype.h:41
typedef RwUInt32 RwBool;

// hosttype.h:31
typedef int RwInt32;

// hosttype.h:106
struct RwRGBTag {
	// hosttype.h:107
	uint8_t red;

	// hosttype.h:108
	uint8_t green;

	// hosttype.h:109
	uint8_t blue;

}

// hosttype.h:112
typedef RwRGBTag RwRGB;

// hosttype.h:116
struct RwRGBATag {
	// hosttype.h:117
	uint8_t red;

	// hosttype.h:118
	uint8_t green;

	// hosttype.h:119
	uint8_t blue;

	// hosttype.h:120
	uint8_t alpha;

}

// hosttype.h:123
typedef RwRGBATag RwRGBA;

// hosttype.h:129
struct rw::RGBA {
private:
	// hosttype.h:252
	uint32_t m_rgba;

public:
	// hosttype.h:133
	void RGBA();

	// hosttype.h:140
	void RGBA(RwRGBA);

	// hosttype.h:148
	void RGBA(uint8_t, uint8_t, uint8_t, uint8_t);

	// hosttype.h:159
	void RGBA(RwRGB, unsigned char);

	// hosttype.h:170
	RwRGBA GetRwRGBA() const;

	// hosttype.h:179
	void Set(RwRGBA);

	// hosttype.h:188
	uint8_t GetRed() const;

	// hosttype.h:195
	void SetRed(uint8_t);

	// hosttype.h:204
	uint8_t GetGreen() const;

	// hosttype.h:211
	void SetGreen(uint8_t);

	// hosttype.h:220
	uint8_t GetBlue() const;

	// hosttype.h:227
	void SetBlue(uint8_t);

	// hosttype.h:236
	uint8_t GetAlpha() const;

	// hosttype.h:243
	void SetAlpha(uint8_t);

}

// hosttype.h:42
typedef float RwReal32;

// hosttype.h:30
typedef short unsigned int RwUInt16;

// hosttype.h:38
typedef long long int RwInt64;

// hosttype.h:28
typedef unsigned char RwUInt8;

