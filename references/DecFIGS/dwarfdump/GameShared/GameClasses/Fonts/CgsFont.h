// CgsResourceID.h:30
namespace CgsResource {
	// CgsFont.h:28
	const CgsUtf16 KUTF16_DEFAULT_CHARACTER = 45;

}

// CgsFont.h:42
struct CgsResource::FontChar {
	// CgsFont.h:44
	Basic2dColouredVertex::Vector2 mTopLeftUV;

	// CgsFont.h:45
	Basic2dColouredVertex::Vector2 mDimensionsUV;

	// CgsFont.h:46
	Basic2dColouredVertex::Vector2 mStart;

	// CgsFont.h:47
	float32_t mfAdvance;

	// CgsFont.h:48
	uint16_t mu16TexturePageId;

	// CgsFont.h:51
	bool8_t mbIsLowerCaseScale;

	// CgsFont.h:52
	bool8_t mbIsRenderable;

public:
	// CgsFont.h:57
	bool IsRenderable() const;

}

// CgsFont.h:72
struct CgsResource::Font {
	// CgsFont.h:75
	extern const int32_t KI_TYPEFACE_MAX_CHARS = 128;

	// CgsFont.h:76
	extern const uint32_t KU_FONT_VERSION_ID = 10;

	// CgsFont.h:78
	extern const uint32_t KU_HASH_MASK = 127;

	// CgsFont.h:79
	extern const uint32_t KU_HASH_TABLE_SIZE = 129;

	// CgsFont.h:83
	uint32_t muVersionId;

	// CgsFont.h:84
	size_t mSizeOfFont;

	// CgsFont.h:86
	Basic2dColouredVertex::Vector2 mScaleUV;

	// CgsFont.h:87
	float32_t mfLowerCaseScale;

	// CgsFont.h:88
	float32_t mfBaseLine;

	// CgsFont.h:89
	float32_t mfXHeight;

	// CgsFont.h:90
	uint32_t muNumChars;

	// CgsFont.h:92
	FontChar * mpaFontChars;

	// CgsFont.h:93
	CgsUtf16 * mpaFontCharIds;

	// CgsFont.h:94
	uint16_t[129] mauHashOffsets;

	// CgsFont.h:96
	uint32_t muNumTexturePages;

	// CgsFont.h:97
	renderengine::Texture ** mpapTextures;

	// CgsFont.h:100
	TextureState * mpTextureState;

	// CgsFont.h:101
	Resource mTextureStateResource;

	// CgsFont.h:104
	uint32_t muFontHeightInPixels;

	// CgsFont.h:106
	char[128] macTypefaceFamilyName;

	// CgsFont.h:107
	char[128] macTypefaceStyleName;

public:
	// CgsFont.h:112
	uint32_t GetHeightInPixels() const;

	// CgsFont.h:116
	const FontChar * GetFontChar(CgsUtf16) const;

	// CgsFont.h:120
	const FontChar * GetFontChar(const UnicodeBuffer::CgsUtf8 *) const;

	// CgsFont.h:124
	float32_t GetStringWidth(const UnicodeBuffer::CgsUtf8 *) const;

	// CgsFont.h:127
	float32_t GetStringWidthIgnoringNewlines(const UnicodeBuffer::CgsUtf8 *) const;

	// CgsFont.h:135
	float32_t GetStringStartAndEnd(const UnicodeBuffer::CgsUtf8 *, float32_t, const UnicodeBuffer::CgsUtf8 **, const UnicodeBuffer::CgsUtf8 **, bool) const;

	// CgsFont.h:139
	void CreateTextureState(rw::IResourceAllocator &);

	// CgsFont.h:157
	const FontChar * FindFontChar(CgsUtf16) const;

}

// CgsFont.h:75
extern const int32_t KI_TYPEFACE_MAX_CHARS = 128;

// CgsFont.h:78
extern const uint32_t KU_HASH_MASK = 127;

// CgsFont.h:79
extern const uint32_t KU_HASH_TABLE_SIZE = 129;

// programbuffer.h:24
namespace CgsResource {
	// CgsFont.h:28
	const CgsUtf16 KUTF16_DEFAULT_CHARACTER = 45;

}

// CgsFont.h:42
struct CgsResource::FontChar {
	// vector2.h:123
	typedef Vector2Template<float> Vector2;

	// CgsFont.h:44
	FontChar::Vector2 mTopLeftUV;

	// CgsFont.h:45
	FontChar::Vector2 mDimensionsUV;

	// CgsFont.h:46
	FontChar::Vector2 mStart;

	// CgsFont.h:47
	float32_t mfAdvance;

	// CgsFont.h:48
	uint16_t mu16TexturePageId;

	// CgsFont.h:51
	bool8_t mbIsLowerCaseScale;

	// CgsFont.h:52
	bool8_t mbIsRenderable;

public:
	// CgsFont.h:57
	bool IsRenderable() const;

}

// CgsFont.h:72
struct CgsResource::Font {
	// CgsFont.h:75
	extern const int32_t KI_TYPEFACE_MAX_CHARS = 128;

	// CgsFont.h:76
	extern const uint32_t KU_FONT_VERSION_ID = 10;

	// CgsFont.h:78
	extern const uint32_t KU_HASH_MASK = 127;

	// CgsFont.h:79
	extern const uint32_t KU_HASH_TABLE_SIZE = 129;

	// CgsFont.h:83
	uint32_t muVersionId;

	// CgsFont.h:84
	size_t mSizeOfFont;

	// CgsFont.h:86
	FontChar::Vector2 mScaleUV;

	// CgsFont.h:87
	float32_t mfLowerCaseScale;

	// CgsFont.h:88
	float32_t mfBaseLine;

	// CgsFont.h:89
	float32_t mfXHeight;

	// CgsFont.h:90
	uint32_t muNumChars;

	// CgsFont.h:92
	FontChar * mpaFontChars;

	// CgsFont.h:93
	CgsUtf16 * mpaFontCharIds;

	// CgsFont.h:94
	uint16_t[129] mauHashOffsets;

	// CgsFont.h:96
	uint32_t muNumTexturePages;

	// CgsFont.h:97
	renderengine::Texture ** mpapTextures;

	// CgsFont.h:100
	TextureState * mpTextureState;

	// CgsFont.h:101
	Resource mTextureStateResource;

	// CgsFont.h:104
	uint32_t muFontHeightInPixels;

	// CgsFont.h:106
	char[128] macTypefaceFamilyName;

	// CgsFont.h:107
	char[128] macTypefaceStyleName;

public:
	// CgsFont.h:112
	uint32_t GetHeightInPixels() const;

	// CgsFont.h:116
	const FontChar * GetFontChar(CgsUtf16) const;

	// CgsFont.h:120
	const FontChar * GetFontChar(const UnicodeBuffer::CgsUtf8 *) const;

	// CgsFont.h:124
	float32_t GetStringWidth(const UnicodeBuffer::CgsUtf8 *) const;

	// CgsFont.h:127
	float32_t GetStringWidthIgnoringNewlines(const UnicodeBuffer::CgsUtf8 *) const;

	// CgsFont.h:135
	float32_t GetStringStartAndEnd(const UnicodeBuffer::CgsUtf8 *, float32_t, const UnicodeBuffer::CgsUtf8 **, const UnicodeBuffer::CgsUtf8 **, bool) const;

	// CgsFont.h:139
	void CreateTextureState(rw::IResourceAllocator &);

	// CgsFont.h:157
	const FontChar * FindFontChar(CgsUtf16) const;

}

// CgsFont.h:42
struct CgsResource::FontChar {
	// CgsFont.h:44
	SmoothStep::Vector2 mTopLeftUV;

	// CgsFont.h:45
	SmoothStep::Vector2 mDimensionsUV;

	// CgsFont.h:46
	SmoothStep::Vector2 mStart;

	// CgsFont.h:47
	float32_t mfAdvance;

	// CgsFont.h:48
	uint16_t mu16TexturePageId;

	// CgsFont.h:51
	bool8_t mbIsLowerCaseScale;

	// CgsFont.h:52
	bool8_t mbIsRenderable;

public:
	// CgsFont.h:57
	bool IsRenderable() const;

}

// CgsFont.h:72
struct CgsResource::Font {
	// CgsFont.h:75
	extern const int32_t KI_TYPEFACE_MAX_CHARS = 128;

	// CgsFont.h:76
	extern const uint32_t KU_FONT_VERSION_ID = 10;

	// CgsFont.h:78
	extern const uint32_t KU_HASH_MASK = 127;

	// CgsFont.h:79
	extern const uint32_t KU_HASH_TABLE_SIZE = 129;

	// CgsFont.h:83
	uint32_t muVersionId;

	// CgsFont.h:84
	size_t mSizeOfFont;

	// CgsFont.h:86
	SmoothStep::Vector2 mScaleUV;

	// CgsFont.h:87
	float32_t mfLowerCaseScale;

	// CgsFont.h:88
	float32_t mfBaseLine;

	// CgsFont.h:89
	float32_t mfXHeight;

	// CgsFont.h:90
	uint32_t muNumChars;

	// CgsFont.h:92
	FontChar * mpaFontChars;

	// CgsFont.h:93
	CgsUtf16 * mpaFontCharIds;

	// CgsFont.h:94
	uint16_t[129] mauHashOffsets;

	// CgsFont.h:96
	uint32_t muNumTexturePages;

	// CgsFont.h:97
	renderengine::Texture ** mpapTextures;

	// CgsFont.h:100
	TextureState * mpTextureState;

	// CgsFont.h:101
	Resource mTextureStateResource;

	// CgsFont.h:104
	uint32_t muFontHeightInPixels;

	// CgsFont.h:106
	char[128] macTypefaceFamilyName;

	// CgsFont.h:107
	char[128] macTypefaceStyleName;

public:
	// CgsFont.h:112
	uint32_t GetHeightInPixels() const;

	// CgsFont.h:116
	const FontChar * GetFontChar(CgsUtf16) const;

	// CgsFont.h:120
	const FontChar * GetFontChar(const UnicodeBuffer::CgsUtf8 *) const;

	// CgsFont.h:124
	float32_t GetStringWidth(const UnicodeBuffer::CgsUtf8 *) const;

	// CgsFont.h:127
	float32_t GetStringWidthIgnoringNewlines(const UnicodeBuffer::CgsUtf8 *) const;

	// CgsFont.h:135
	float32_t GetStringStartAndEnd(const UnicodeBuffer::CgsUtf8 *, float32_t, const UnicodeBuffer::CgsUtf8 **, const UnicodeBuffer::CgsUtf8 **, bool) const;

	// CgsFont.h:139
	void CreateTextureState(rw::IResourceAllocator &);

	// CgsFont.h:157
	const FontChar * FindFontChar(CgsUtf16) const;

}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsFont.h:28
	const CgsUtf16 KUTF16_DEFAULT_CHARACTER = 45;

}

// CgsFont.h:42
struct CgsResource::FontChar {
	// CgsFont.h:44
	AISection::Vector2 mTopLeftUV;

	// CgsFont.h:45
	AISection::Vector2 mDimensionsUV;

	// CgsFont.h:46
	AISection::Vector2 mStart;

	// CgsFont.h:47
	float32_t mfAdvance;

	// CgsFont.h:48
	uint16_t mu16TexturePageId;

	// CgsFont.h:51
	bool8_t mbIsLowerCaseScale;

	// CgsFont.h:52
	bool8_t mbIsRenderable;

public:
	// CgsFont.h:57
	bool IsRenderable() const;

}

// CgsFont.h:72
struct CgsResource::Font {
	// CgsFont.h:75
	extern const int32_t KI_TYPEFACE_MAX_CHARS = 128;

	// CgsFont.h:76
	extern const uint32_t KU_FONT_VERSION_ID = 10;

	// CgsFont.h:78
	extern const uint32_t KU_HASH_MASK = 127;

	// CgsFont.h:79
	extern const uint32_t KU_HASH_TABLE_SIZE = 129;

	// CgsFont.h:83
	uint32_t muVersionId;

	// CgsFont.h:84
	size_t mSizeOfFont;

	// CgsFont.h:86
	AISection::Vector2 mScaleUV;

	// CgsFont.h:87
	float32_t mfLowerCaseScale;

	// CgsFont.h:88
	float32_t mfBaseLine;

	// CgsFont.h:89
	float32_t mfXHeight;

	// CgsFont.h:90
	uint32_t muNumChars;

	// CgsFont.h:92
	FontChar * mpaFontChars;

	// CgsFont.h:93
	CgsUtf16 * mpaFontCharIds;

	// CgsFont.h:94
	uint16_t[129] mauHashOffsets;

	// CgsFont.h:96
	uint32_t muNumTexturePages;

	// CgsFont.h:97
	renderengine::Texture ** mpapTextures;

	// CgsFont.h:100
	TextureState * mpTextureState;

	// CgsFont.h:101
	Resource mTextureStateResource;

	// CgsFont.h:104
	uint32_t muFontHeightInPixels;

	// CgsFont.h:106
	char[128] macTypefaceFamilyName;

	// CgsFont.h:107
	char[128] macTypefaceStyleName;

public:
	// CgsFont.h:112
	uint32_t GetHeightInPixels() const;

	// CgsFont.h:116
	const FontChar * GetFontChar(CgsUtf16) const;

	// CgsFont.h:120
	const FontChar * GetFontChar(const UnicodeBuffer::CgsUtf8 *) const;

	// CgsFont.h:124
	float32_t GetStringWidth(const UnicodeBuffer::CgsUtf8 *) const;

	// CgsFont.h:127
	float32_t GetStringWidthIgnoringNewlines(const UnicodeBuffer::CgsUtf8 *) const;

	// CgsFont.h:135
	float32_t GetStringStartAndEnd(const UnicodeBuffer::CgsUtf8 *, float32_t, const UnicodeBuffer::CgsUtf8 **, const UnicodeBuffer::CgsUtf8 **, bool) const;

	// CgsFont.h:139
	void CreateTextureState(rw::IResourceAllocator &);

	// CgsFont.h:157
	const FontChar * FindFontChar(CgsUtf16) const;

}

// CgsLuaState.h:37
namespace CgsResource {
	// CgsFont.h:28
	const CgsUtf16 KUTF16_DEFAULT_CHARACTER = 45;

}

// CgsResourceTypeIds.h:28
namespace CgsResource {
	// CgsFont.h:28
	const CgsUtf16 KUTF16_DEFAULT_CHARACTER = 45;

}

// CgsPolygonSoupListSpatialMap.h:30
namespace CgsResource {
	// CgsFont.h:28
	const CgsUtf16 KUTF16_DEFAULT_CHARACTER = 45;

}

// CgsFont.h:76
extern const uint32_t KU_FONT_VERSION_ID = 10;

