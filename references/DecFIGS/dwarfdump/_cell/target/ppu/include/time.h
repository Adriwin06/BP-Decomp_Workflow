// _built-in_
namespace std {
	// time.h:82
	extern char * asctime(const tm *);

	// time.h:83
	extern clock_t clock();

	// time.h:84
	extern char * ctime(const time_t *);

	// time.h:85
	extern double difftime(time_t, time_t);

	// time.h:86
	extern tm * gmtime(const time_t *);

	// time.h:87
	extern tm * localtime(const time_t *);

	// time.h:88
	extern time_t mktime(tm *);

	// time.h:90
	extern size_t strftime(char *, size_t, const char *, const tm *);

	// time.h:78
	extern time_t time(time_t *);

}

// time.h:53
struct std::tm {
	// time.h:54
	int tm_sec;

	// time.h:55
	int tm_min;

	// time.h:56
	int tm_hour;

	// time.h:57
	int tm_mday;

	// time.h:58
	int tm_mon;

	// time.h:59
	int tm_year;

	// time.h:60
	int tm_wday;

	// time.h:61
	int tm_yday;

	// time.h:62
	int tm_isdst;

}

// time.h:34
typedef int64_t clock_t;

// time.h:98
using clock_t;

// time.h:72
typedef int clockid_t;

// time.h:106
using clockid_t;

// time.h:109
using std::tm;

// time.h:110
using std::asctime;

// time.h:110
using std::clock;

// time.h:110
using std::ctime;

// time.h:111
using std::difftime;

// time.h:111
using std::gmtime;

// time.h:111
using std::localtime;

// time.h:112
using std::mktime;

// time.h:112
using std::strftime;

// time.h:112
using std::time;

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsNetworkConstants.h:29
	namespace DirtySock {
		// time.h:98
		using clock_t;

		// time.h:106
		using clockid_t;

		// time.h:109
		using std::tm;

		// time.h:110
		using std::asctime;

		// time.h:110
		using std::clock;

		// time.h:110
		using std::ctime;

		// time.h:111
		using std::difftime;

		// time.h:111
		using std::gmtime;

		// time.h:111
		using std::localtime;

		// time.h:112
		using std::mktime;

		// time.h:112
		using std::strftime;

		// time.h:112
		using std::time;

	}

}

// CgsBitStream.h:26
namespace CgsNetwork {
	// CgsNetworkConstants.h:29
	namespace DirtySock {
		// time.h:98
		using clock_t;

		// time.h:106
		using clockid_t;

		// time.h:109
		using std::tm;

		// time.h:110
		using std::asctime;

		// time.h:110
		using std::clock;

		// time.h:110
		using std::ctime;

		// time.h:111
		using std::difftime;

		// time.h:111
		using std::gmtime;

		// time.h:111
		using std::localtime;

		// time.h:112
		using std::mktime;

		// time.h:112
		using std::strftime;

		// time.h:112
		using std::time;

	}

}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsNetworkConstants.h:29
	namespace DirtySock {
		// time.h:98
		using clock_t;

		// time.h:106
		using clockid_t;

		// time.h:109
		using std::tm;

		// time.h:110
		using std::asctime;

		// time.h:110
		using std::clock;

		// time.h:110
		using std::ctime;

		// time.h:111
		using std::difftime;

		// time.h:111
		using std::gmtime;

		// time.h:111
		using std::localtime;

		// time.h:112
		using std::mktime;

		// time.h:112
		using std::strftime;

		// time.h:112
		using std::time;

	}

}

// time.h:53
struct tm {
	// time.h:54
	int tm_sec;

	// time.h:55
	int tm_min;

	// time.h:56
	int tm_hour;

	// time.h:57
	int tm_mday;

	// time.h:58
	int tm_mon;

	// time.h:59
	int tm_year;

	// time.h:60
	int tm_wday;

	// time.h:61
	int tm_yday;

	// time.h:62
	int tm_isdst;

}

