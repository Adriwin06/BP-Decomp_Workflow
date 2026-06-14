// CgsUnicode.h:29
namespace CgsUnicode {
	struct UnicodeBuffer;

	// CgsUnicode.h:37
	const UnicodeBuffer::CgsUtf8 KUTF_NULL;

	// CgsUnicode.h:38
	const UnicodeBuffer::CgsUtf8 KUTF_SPACE = 32;

	// CgsUnicode.h:39
	const UnicodeBuffer::CgsUtf8 KUTF_NEWLINE = 10;

	// CgsUnicode.h:40
	const UnicodeBuffer::CgsUtf8 KUTF_CARRIAGERETURN = 13;

	// CgsUnicode.h:41
	const UnicodeBuffer::CgsUtf8 KUTF_ZERO = 48;

	// CgsUnicode.h:42
	const UnicodeBuffer::CgsUtf8 KUTF_PLUS = 43;

	// CgsUnicode.h:43
	const UnicodeBuffer::CgsUtf8 KUTF_MINUS = 45;

	// CgsUnicode.h:44
	const UnicodeBuffer::CgsUtf8 KUTF_DECIMALPOINT = 46;

	// CgsUnicode.h:45
	const UnicodeBuffer::CgsUtf8 KUTF_COMMA = 44;

	// CgsUnicode.h:51
	const UnicodeBuffer::CgsUtf8[2] KUTF8_NON_BREAKING_SPACE;

	// CgsUnicode.h:54
	const CgsUtf16 KUTF16_NON_BREAKING_SPACE = 160;

	// CgsUnicode.h:56
	const uint32_t KU_UNICODE_BUFFER_SIZE = 256;

	// CgsUnicode.h:68
	const uint8_t KU_TRAILING_BYTE_MASK = 192;

	// CgsUnicode.h:69
	const uint8_t KU_TRAILING_BYTE = 128;

	// CgsUnicode.h:72
	const uint8_t KU_SINGLE_BYTE_CHAR_MASK = 128;

	// CgsUnicode.h:73
	const uint8_t KU_SINGLE_BYTE_CHAR;

	// CgsUnicode.h:76
	const uint8_t KU_TWO_BYTE_CHAR_MASK = 224;

	// CgsUnicode.h:77
	const uint8_t KU_TWO_BYTE_CHAR = 192;

	// CgsUnicode.h:80
	const uint8_t KU_THREE_BYTE_CHAR_MASK = 240;

	// CgsUnicode.h:81
	const uint8_t KU_THREE_BYTE_CHAR = 224;

	// CgsUnicode.h:84
	const uint8_t KU_FOUR_BYTE_CHAR_MASK = 248;

	// CgsUnicode.h:85
	const uint8_t KU_FOUR_BYTE_CHAR = 240;

	// CgsUnicode.h:88
	const uint8_t[256] KAU_TRAILING_BYTE_COUNT;

	// CgsUnicode.h:109
	const CgsUtf32[6] KAUTF32_OFFSETS_FROM_UTF8;

	// CgsUnicode.h:116
	const CgsUtf32 KUTF32_MAX_UTF16 = 65535;

}

// CgsUnicode.h:132
struct CgsUnicode::UnicodeBuffer {
	// CgsUnicode.h:31
	typedef uint8_t CgsUtf8;

private:
	// CgsUnicode.h:192
	extern UnicodeBuffer::CgsUtf8[16] maUtf8TrueString;

	// CgsUnicode.h:193
	extern UnicodeBuffer::CgsUtf8[16] maUtf8FalseString;

	// CgsUnicode.h:195
	UnicodeBuffer::CgsUtf8[256] maBuffer;

	// CgsUnicode.h:196
	UnicodeBuffer::CgsUtf8[4] maUtf8ThousandsSeparator;

	// CgsUnicode.h:197
	UnicodeBuffer::CgsUtf8[4] maUtf8DecimalPointCharacter;

	// CgsUnicode.h:199
	uint8_t muDecimalPlaces;

	// CgsUnicode.h:200
	uint8_t muMinimumDigits;

public:
	// CgsUnicode.h:137
	void Construct();

	// CgsUnicode.h:141
	void Reset();

	// CgsUnicode.h:145
	void Convert(int32_t);

	// CgsUnicode.h:149
	void Convert(float32_t);

	// CgsUnicode.h:153
	void Convert(const UnicodeBuffer::CgsUtf8 *);

	// CgsUnicode.h:157
	// Declaration
	void Convert() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsUnicode.h:32
		typedef uint16_t CgsUtf16;

	}

	// CgsUnicode.h:161
	void Convert(bool);

	// CgsUnicode.h:165
	const UnicodeBuffer::CgsUtf8 * GetBuffer();

	// CgsUnicode.h:169
	void SetThousandsSeparator(const UnicodeBuffer::CgsUtf8 *);

	// CgsUnicode.h:173
	void SetDecimalPointCharacter(const UnicodeBuffer::CgsUtf8 *);

	// CgsUnicode.h:177
	void SetDecimalPlaces(uint8_t);

	// CgsUnicode.h:181
	void SetMinimumDigits(uint8_t);

	// CgsUnicode.h:185
	void SetTrueString(UnicodeBuffer::CgsUtf8 *);

	// CgsUnicode.h:189
	void SetFalseString(UnicodeBuffer::CgsUtf8 *);

}

// CgsUnicode.h:33
typedef uint32_t CgsUtf32;

// CgsUnicode.h:192
extern UnicodeBuffer::CgsUtf8[16] maUtf8TrueString;

// CgsUnicode.h:193
extern UnicodeBuffer::CgsUtf8[16] maUtf8FalseString;

// CgsUnicode.h:132
struct CgsUnicode::UnicodeBuffer {
	// CgsUnicode.h:31
	typedef uint8_t CgsUtf8;

private:
	// CgsUnicode.h:192
	extern UnicodeBuffer::CgsUtf8[16] maUtf8TrueString;

	// CgsUnicode.h:193
	extern UnicodeBuffer::CgsUtf8[16] maUtf8FalseString;

	// CgsUnicode.h:195
	UnicodeBuffer::CgsUtf8[256] maBuffer;

	// CgsUnicode.h:196
	UnicodeBuffer::CgsUtf8[4] maUtf8ThousandsSeparator;

	// CgsUnicode.h:197
	UnicodeBuffer::CgsUtf8[4] maUtf8DecimalPointCharacter;

	// CgsUnicode.h:199
	uint8_t muDecimalPlaces;

	// CgsUnicode.h:200
	uint8_t muMinimumDigits;

public:
	// CgsUnicode.h:137
	void Construct();

	// CgsUnicode.h:141
	void Reset();

	// CgsUnicode.h:145
	void Convert(int32_t);

	// CgsUnicode.h:149
	void Convert(float32_t);

	// CgsUnicode.h:153
	void Convert(const UnicodeBuffer::CgsUtf8 *);

	// CgsUnicode.h:157
	// Declaration
	void Convert(const CgsUtf16 *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsUnicode.h:32
		typedef uint16_t CgsUtf16;

	}

	// CgsUnicode.h:161
	void Convert(bool);

	// CgsUnicode.h:165
	const UnicodeBuffer::CgsUtf8 * GetBuffer();

	// CgsUnicode.h:169
	void SetThousandsSeparator(const UnicodeBuffer::CgsUtf8 *);

	// CgsUnicode.h:173
	void SetDecimalPointCharacter(const UnicodeBuffer::CgsUtf8 *);

	// CgsUnicode.h:177
	void SetDecimalPlaces(uint8_t);

	// CgsUnicode.h:181
	void SetMinimumDigits(uint8_t);

	// CgsUnicode.h:185
	void SetTrueString(UnicodeBuffer::CgsUtf8 *);

	// CgsUnicode.h:189
	void SetFalseString(UnicodeBuffer::CgsUtf8 *);

}

// CgsUnicode.h:29
namespace CgsUnicode {
	struct UnicodeBuffer;

	// CgsUnicode.h:689
	extern UnicodeBuffer::CgsUtf8 * Print<const CgsUnicode::CgsUtf8*, const CgsUnicode::CgsUtf8*>(const UnicodeBuffer::CgsUtf8 *, UnicodeBuffer::CgsUtf8 *, int, const UnicodeBuffer::CgsUtf8 *const&, const UnicodeBuffer::CgsUtf8 *const&);

	// CgsUnicode.h:723
	extern UnicodeBuffer::CgsUtf8 * Print<const CgsUnicode::CgsUtf8*, const CgsUnicode::CgsUtf8*, const CgsUnicode::CgsUtf8*>(const UnicodeBuffer::CgsUtf8 *, UnicodeBuffer::CgsUtf8 *, int, const UnicodeBuffer::CgsUtf8 *const&, const UnicodeBuffer::CgsUtf8 *const&, const UnicodeBuffer::CgsUtf8 *const&);

	// CgsUnicode.h:689
	extern UnicodeBuffer::CgsUtf8 * Print<CgsUnicode::CgsUtf8*, CgsUnicode::CgsUtf8 [32]>(const UnicodeBuffer::CgsUtf8 *, UnicodeBuffer::CgsUtf8 *, int, UnicodeBuffer::CgsUtf8 *const&, UnicodeBuffer::CgsUtf8 &[32]);

	// CgsUnicode.h:659
	extern UnicodeBuffer::CgsUtf8 * Print<CgsUnicode::CgsUtf8*>(const UnicodeBuffer::CgsUtf8 *, UnicodeBuffer::CgsUtf8 *, int, UnicodeBuffer::CgsUtf8 *const&);

	// CgsUnicode.h:659
	extern UnicodeBuffer::CgsUtf8 * Print<const CgsUnicode::CgsUtf8*>(const UnicodeBuffer::CgsUtf8 *, UnicodeBuffer::CgsUtf8 *, int, const UnicodeBuffer::CgsUtf8 *const&);

	// CgsUnicode.h:37
	const UnicodeBuffer::CgsUtf8 KUTF_NULL;

	// CgsUnicode.h:38
	const UnicodeBuffer::CgsUtf8 KUTF_SPACE = 32;

	// CgsUnicode.h:39
	const UnicodeBuffer::CgsUtf8 KUTF_NEWLINE = 10;

	// CgsUnicode.h:40
	const UnicodeBuffer::CgsUtf8 KUTF_CARRIAGERETURN = 13;

	// CgsUnicode.h:41
	const UnicodeBuffer::CgsUtf8 KUTF_ZERO = 48;

	// CgsUnicode.h:42
	const UnicodeBuffer::CgsUtf8 KUTF_PLUS = 43;

	// CgsUnicode.h:43
	const UnicodeBuffer::CgsUtf8 KUTF_MINUS = 45;

	// CgsUnicode.h:44
	const UnicodeBuffer::CgsUtf8 KUTF_DECIMALPOINT = 46;

	// CgsUnicode.h:45
	const UnicodeBuffer::CgsUtf8 KUTF_COMMA = 44;

	// CgsUnicode.h:51
	const UnicodeBuffer::CgsUtf8[2] KUTF8_NON_BREAKING_SPACE;

	// CgsUnicode.h:54
	const CgsUtf16 KUTF16_NON_BREAKING_SPACE = 160;

	// CgsUnicode.h:56
	const uint32_t KU_UNICODE_BUFFER_SIZE = 256;

	// CgsUnicode.h:68
	const uint8_t KU_TRAILING_BYTE_MASK = 192;

	// CgsUnicode.h:69
	const uint8_t KU_TRAILING_BYTE = 128;

	// CgsUnicode.h:72
	const uint8_t KU_SINGLE_BYTE_CHAR_MASK = 128;

	// CgsUnicode.h:73
	const uint8_t KU_SINGLE_BYTE_CHAR;

	// CgsUnicode.h:76
	const uint8_t KU_TWO_BYTE_CHAR_MASK = 224;

	// CgsUnicode.h:77
	const uint8_t KU_TWO_BYTE_CHAR = 192;

	// CgsUnicode.h:80
	const uint8_t KU_THREE_BYTE_CHAR_MASK = 240;

	// CgsUnicode.h:81
	const uint8_t KU_THREE_BYTE_CHAR = 224;

	// CgsUnicode.h:84
	const uint8_t KU_FOUR_BYTE_CHAR_MASK = 248;

	// CgsUnicode.h:85
	const uint8_t KU_FOUR_BYTE_CHAR = 240;

	// CgsUnicode.h:88
	const uint8_t[256] KAU_TRAILING_BYTE_COUNT;

	// CgsUnicode.h:109
	const CgsUtf32[6] KAUTF32_OFFSETS_FROM_UTF8;

	// CgsUnicode.h:116
	const CgsUtf32 KUTF32_MAX_UTF16 = 65535;

}

// CgsUnicode.h:29
namespace CgsUnicode {
	struct UnicodeBuffer;

	// CgsUnicode.h:903
	extern CgsUtf16 ConvertUtf8CharToUtf16Char(const UnicodeBuffer::CgsUtf8 *);

	// CgsUnicode.h:862
	extern const UnicodeBuffer::CgsUtf8 * IncrementUtf8Pointer(const UnicodeBuffer::CgsUtf8 *);

	// CgsUnicode.h:37
	const UnicodeBuffer::CgsUtf8 KUTF_NULL;

	// CgsUnicode.h:38
	const UnicodeBuffer::CgsUtf8 KUTF_SPACE = 32;

	// CgsUnicode.h:39
	const UnicodeBuffer::CgsUtf8 KUTF_NEWLINE = 10;

	// CgsUnicode.h:40
	const UnicodeBuffer::CgsUtf8 KUTF_CARRIAGERETURN = 13;

	// CgsUnicode.h:41
	const UnicodeBuffer::CgsUtf8 KUTF_ZERO = 48;

	// CgsUnicode.h:42
	const UnicodeBuffer::CgsUtf8 KUTF_PLUS = 43;

	// CgsUnicode.h:43
	const UnicodeBuffer::CgsUtf8 KUTF_MINUS = 45;

	// CgsUnicode.h:44
	const UnicodeBuffer::CgsUtf8 KUTF_DECIMALPOINT = 46;

	// CgsUnicode.h:45
	const UnicodeBuffer::CgsUtf8 KUTF_COMMA = 44;

	// CgsUnicode.h:51
	const UnicodeBuffer::CgsUtf8[2] KUTF8_NON_BREAKING_SPACE;

	// CgsUnicode.h:54
	const CgsUtf16 KUTF16_NON_BREAKING_SPACE = 160;

	// CgsUnicode.h:56
	const uint32_t KU_UNICODE_BUFFER_SIZE = 256;

	// CgsUnicode.h:68
	const uint8_t KU_TRAILING_BYTE_MASK = 192;

	// CgsUnicode.h:69
	const uint8_t KU_TRAILING_BYTE = 128;

	// CgsUnicode.h:72
	const uint8_t KU_SINGLE_BYTE_CHAR_MASK = 128;

	// CgsUnicode.h:73
	const uint8_t KU_SINGLE_BYTE_CHAR;

	// CgsUnicode.h:76
	const uint8_t KU_TWO_BYTE_CHAR_MASK = 224;

	// CgsUnicode.h:77
	const uint8_t KU_TWO_BYTE_CHAR = 192;

	// CgsUnicode.h:80
	const uint8_t KU_THREE_BYTE_CHAR_MASK = 240;

	// CgsUnicode.h:81
	const uint8_t KU_THREE_BYTE_CHAR = 224;

	// CgsUnicode.h:84
	const uint8_t KU_FOUR_BYTE_CHAR_MASK = 248;

	// CgsUnicode.h:85
	const uint8_t KU_FOUR_BYTE_CHAR = 240;

	// CgsUnicode.h:88
	const uint8_t[256] KAU_TRAILING_BYTE_COUNT;

	// CgsUnicode.h:109
	const CgsUtf32[6] KAUTF32_OFFSETS_FROM_UTF8;

	// CgsUnicode.h:116
	const CgsUtf32 KUTF32_MAX_UTF16 = 65535;

}

// CgsUnicode.h:29
namespace CgsUnicode {
	struct UnicodeBuffer;

	// CgsUnicode.h:828
	extern bool IsSingleByteUtf8(const UnicodeBuffer::CgsUtf8 *);

	void IsValidUtf8Character(const UnicodeBuffer::CgsUtf8 *);

	// CgsUnicode.h:903
	extern CgsUtf16 ConvertUtf8CharToUtf16Char(const UnicodeBuffer::CgsUtf8 *);

	// CgsUnicode.h:862
	extern const UnicodeBuffer::CgsUtf8 * IncrementUtf8Pointer(const UnicodeBuffer::CgsUtf8 *);

	// CgsUnicode.h:878
	extern const UnicodeBuffer::CgsUtf8 * DecrementUtf8Pointer(const UnicodeBuffer::CgsUtf8 **);

	// CgsUnicode.h:37
	const UnicodeBuffer::CgsUtf8 KUTF_NULL;

	// CgsUnicode.h:38
	const UnicodeBuffer::CgsUtf8 KUTF_SPACE = 32;

	// CgsUnicode.h:39
	const UnicodeBuffer::CgsUtf8 KUTF_NEWLINE = 10;

	// CgsUnicode.h:40
	const UnicodeBuffer::CgsUtf8 KUTF_CARRIAGERETURN = 13;

	// CgsUnicode.h:41
	const UnicodeBuffer::CgsUtf8 KUTF_ZERO = 48;

	// CgsUnicode.h:42
	const UnicodeBuffer::CgsUtf8 KUTF_PLUS = 43;

	// CgsUnicode.h:43
	const UnicodeBuffer::CgsUtf8 KUTF_MINUS = 45;

	// CgsUnicode.h:44
	const UnicodeBuffer::CgsUtf8 KUTF_DECIMALPOINT = 46;

	// CgsUnicode.h:45
	const UnicodeBuffer::CgsUtf8 KUTF_COMMA = 44;

	// CgsUnicode.h:51
	const UnicodeBuffer::CgsUtf8[2] KUTF8_NON_BREAKING_SPACE;

	// CgsUnicode.h:54
	const CgsUtf16 KUTF16_NON_BREAKING_SPACE = 160;

	// CgsUnicode.h:56
	const uint32_t KU_UNICODE_BUFFER_SIZE = 256;

	// CgsUnicode.h:68
	const uint8_t KU_TRAILING_BYTE_MASK = 192;

	// CgsUnicode.h:69
	const uint8_t KU_TRAILING_BYTE = 128;

	// CgsUnicode.h:72
	const uint8_t KU_SINGLE_BYTE_CHAR_MASK = 128;

	// CgsUnicode.h:73
	const uint8_t KU_SINGLE_BYTE_CHAR;

	// CgsUnicode.h:76
	const uint8_t KU_TWO_BYTE_CHAR_MASK = 224;

	// CgsUnicode.h:77
	const uint8_t KU_TWO_BYTE_CHAR = 192;

	// CgsUnicode.h:80
	const uint8_t KU_THREE_BYTE_CHAR_MASK = 240;

	// CgsUnicode.h:81
	const uint8_t KU_THREE_BYTE_CHAR = 224;

	// CgsUnicode.h:84
	const uint8_t KU_FOUR_BYTE_CHAR_MASK = 248;

	// CgsUnicode.h:85
	const uint8_t KU_FOUR_BYTE_CHAR = 240;

	// CgsUnicode.h:88
	const uint8_t[256] KAU_TRAILING_BYTE_COUNT;

	// CgsUnicode.h:109
	const CgsUtf32[6] KAUTF32_OFFSETS_FROM_UTF8;

	// CgsUnicode.h:116
	const CgsUtf32 KUTF32_MAX_UTF16 = 65535;

}

// CgsUnicode.h:29
namespace CgsUnicode {
	struct UnicodeBuffer;

	// CgsUnicode.h:689
	extern UnicodeBuffer::CgsUtf8 * Print<const CgsUnicode::CgsUtf8*, const CgsUnicode::CgsUtf8*>(const UnicodeBuffer::CgsUtf8 *, UnicodeBuffer::CgsUtf8 *, int, const UnicodeBuffer::CgsUtf8 *const&, const UnicodeBuffer::CgsUtf8 *const&);

	// CgsUnicode.h:659
	extern UnicodeBuffer::CgsUtf8 * Print<CgsUnicode::CgsUtf8*>(const UnicodeBuffer::CgsUtf8 *, UnicodeBuffer::CgsUtf8 *, int, UnicodeBuffer::CgsUtf8 *const&);

	// CgsUnicode.h:723
	extern UnicodeBuffer::CgsUtf8 * Print<const CgsUnicode::CgsUtf8*, const CgsUnicode::CgsUtf8*, const CgsUnicode::CgsUtf8*>(const UnicodeBuffer::CgsUtf8 *, UnicodeBuffer::CgsUtf8 *, int, const UnicodeBuffer::CgsUtf8 *const&, const UnicodeBuffer::CgsUtf8 *const&, const UnicodeBuffer::CgsUtf8 *const&);

	// CgsUnicode.h:659
	extern UnicodeBuffer::CgsUtf8 * Print<const CgsUnicode::CgsUtf8*>(const UnicodeBuffer::CgsUtf8 *, UnicodeBuffer::CgsUtf8 *, int, const UnicodeBuffer::CgsUtf8 *const&);

	// CgsUnicode.h:37
	const UnicodeBuffer::CgsUtf8 KUTF_NULL;

	// CgsUnicode.h:38
	const UnicodeBuffer::CgsUtf8 KUTF_SPACE = 32;

	// CgsUnicode.h:39
	const UnicodeBuffer::CgsUtf8 KUTF_NEWLINE = 10;

	// CgsUnicode.h:40
	const UnicodeBuffer::CgsUtf8 KUTF_CARRIAGERETURN = 13;

	// CgsUnicode.h:41
	const UnicodeBuffer::CgsUtf8 KUTF_ZERO = 48;

	// CgsUnicode.h:42
	const UnicodeBuffer::CgsUtf8 KUTF_PLUS = 43;

	// CgsUnicode.h:43
	const UnicodeBuffer::CgsUtf8 KUTF_MINUS = 45;

	// CgsUnicode.h:44
	const UnicodeBuffer::CgsUtf8 KUTF_DECIMALPOINT = 46;

	// CgsUnicode.h:45
	const UnicodeBuffer::CgsUtf8 KUTF_COMMA = 44;

	// CgsUnicode.h:51
	const UnicodeBuffer::CgsUtf8[2] KUTF8_NON_BREAKING_SPACE;

	// CgsUnicode.h:54
	const CgsUtf16 KUTF16_NON_BREAKING_SPACE = 160;

	// CgsUnicode.h:56
	const uint32_t KU_UNICODE_BUFFER_SIZE = 256;

	// CgsUnicode.h:68
	const uint8_t KU_TRAILING_BYTE_MASK = 192;

	// CgsUnicode.h:69
	const uint8_t KU_TRAILING_BYTE = 128;

	// CgsUnicode.h:72
	const uint8_t KU_SINGLE_BYTE_CHAR_MASK = 128;

	// CgsUnicode.h:73
	const uint8_t KU_SINGLE_BYTE_CHAR;

	// CgsUnicode.h:76
	const uint8_t KU_TWO_BYTE_CHAR_MASK = 224;

	// CgsUnicode.h:77
	const uint8_t KU_TWO_BYTE_CHAR = 192;

	// CgsUnicode.h:80
	const uint8_t KU_THREE_BYTE_CHAR_MASK = 240;

	// CgsUnicode.h:81
	const uint8_t KU_THREE_BYTE_CHAR = 224;

	// CgsUnicode.h:84
	const uint8_t KU_FOUR_BYTE_CHAR_MASK = 248;

	// CgsUnicode.h:85
	const uint8_t KU_FOUR_BYTE_CHAR = 240;

	// CgsUnicode.h:88
	const uint8_t[256] KAU_TRAILING_BYTE_COUNT;

	// CgsUnicode.h:109
	const CgsUtf32[6] KAUTF32_OFFSETS_FROM_UTF8;

	// CgsUnicode.h:116
	const CgsUtf32 KUTF32_MAX_UTF16 = 65535;

}

