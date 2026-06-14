// CgsUnicode.h:29
namespace CgsUnicode {
	// CgsUnicode.cpp:841
	// Declaration
	extern bool IsValidUtf8Character(const UnicodeBuffer::CgsUtf8 *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsUnicode.cpp:857
		using namespace CgsDev::Message;

		// CgsUnicode.cpp:891
		using namespace CgsDev::Message;

	}

	// CgsUnicode.cpp:166
	extern UnicodeBuffer::CgsUtf8 * Copy(UnicodeBuffer::CgsUtf8 *, const UnicodeBuffer::CgsUtf8 *);

	// CgsUnicode.cpp:671
	extern UnicodeBuffer::CgsUtf8 * ConvertUtf16ToUtf8(const CgsUtf16 *, UnicodeBuffer::CgsUtf8 *);

	// CgsUnicode.cpp:108
	extern uint32_t ByteLength(const UnicodeBuffer::CgsUtf8 *);

	// CgsUnicode.cpp:133
	extern UnicodeBuffer::CgsUtf8 * Concatenate(UnicodeBuffer::CgsUtf8 *, const UnicodeBuffer::CgsUtf8 *);

	// CgsUnicode.cpp:239
	extern UnicodeBuffer::CgsUtf8 * SafelyTerminate(UnicodeBuffer::CgsUtf8 *, int32_t);

	// CgsUnicode.cpp:281
	extern UnicodeBuffer::CgsUtf8 * ToUpperN(UnicodeBuffer::CgsUtf8 *, const UnicodeBuffer::CgsUtf8 *, int32_t);

	// CgsUnicode.cpp:328
	extern bool StringCompare(const UnicodeBuffer::CgsUtf8 *, const UnicodeBuffer::CgsUtf8 *);

	// CgsUnicode.cpp:193
	extern UnicodeBuffer::CgsUtf8 * CopyN(UnicodeBuffer::CgsUtf8 *, const UnicodeBuffer::CgsUtf8 *, int32_t);

	// CgsUnicode.cpp:365
	extern bool CharacterCompare(const UnicodeBuffer::CgsUtf8 *, const UnicodeBuffer::CgsUtf8 *);

	// CgsUnicode.cpp:405
	extern UnicodeBuffer::CgsUtf8 * GetCharAt(const UnicodeBuffer::CgsUtf8 *, UnicodeBuffer::CgsUtf8 *, uint32_t, bool);

	// CgsUnicode.cpp:457
	extern UnicodeBuffer::CgsUtf8 * IntToString(UnicodeBuffer::CgsUtf8 *, int32_t, uint8_t, UnicodeBuffer::CgsUtf8 *);

	// CgsUnicode.cpp:540
	extern UnicodeBuffer::CgsUtf8 * FloatToString(UnicodeBuffer::CgsUtf8 *, float32_t, uint8_t, UnicodeBuffer::CgsUtf8 *, UnicodeBuffer::CgsUtf8 *);

	// CgsUnicode.cpp:598
	extern UnicodeBuffer::CgsUtf8 * _Print(UnicodeBuffer::CgsUtf8 *, const UnicodeBuffer::CgsUtf8 *, int32_t, UnicodeBuffer::CgsUtf8 **, uint8_t);

	// CgsUnicode.cpp:810
	extern bool IsValidUtf8String(const UnicodeBuffer::CgsUtf8 *);

	// CgsUnicode.cpp:746
	extern CgsUtf16 * ConvertUtf8ToUtf16(const UnicodeBuffer::CgsUtf8 *, CgsUtf16 *);

	// CgsUnicode.cpp:80
	extern uint32_t StringLength(const UnicodeBuffer::CgsUtf8 *);

	// CgsUnicode.cpp:28
	const float32_t[10] KAF_PRECISION_MULTIPLIER;

	// CgsUnicode.cpp:42
	const UnicodeBuffer::CgsUtf8[7] KAUTF8_FIRST_BYTE_MARK;

	// CgsUnicode.cpp:59
	extern char[128] lacLastError;

}

// CgsUnicode.cpp:47
// CgsUnicode.cpp:53
