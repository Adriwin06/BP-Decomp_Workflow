// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:312
	namespace Log {
		// CgsAssert.cpp:42
		extern CgsDev::StrStreamBase * gpAssertPrint;

		// CgsAssert.cpp:43
		extern CgsDev::StrStreamBase *const gpDefaultAssertPrint;

		// CgsAssert.cpp:41
		LogOutput gAssertPrint;

	}

	// CgsAssert.h:244
	namespace Assert {
		// CgsAssert.cpp:81
		extern void PrintStringed(const char *, const char *, int, const char *);

		// CgsAssert.cpp:112
		extern void PrintStringless(const char *, int);

	}

}

