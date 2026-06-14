// _built-in_
namespace std {
	// inttypes.h:258
	typedef std::_Lldiv_t imaxdiv_t;

	// inttypes.h:249
	extern intmax_t abs(intmax_t);

	// inttypes.h:254
	extern std::imaxdiv_t div(intmax_t, intmax_t);

	// inttypes.h:40
	extern std::imaxdiv_t imaxdiv(intmax_t, intmax_t);

	// inttypes.h:43
	extern intmax_t strtoimax(const char *, char **, int);

	// inttypes.h:45
	extern uintmax_t strtoumax(const char *, char **, int);

	// inttypes.h:47
	// Declaration
	extern intmax_t wcstoimax(const _Wchart *, _Wchart **, int) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// yvals.h:467
		typedef wchar_t _Wchart;

	}

	// inttypes.h:49
	extern uintmax_t wcstoumax(const _Wchart *, _Wchart **, int);

}

// inttypes.h:271
using std::imaxdiv_t;

// inttypes.h:273
using std::abs;

// inttypes.h:273
using std::div;

// inttypes.h:274
using std::imaxdiv;

// inttypes.h:275
using std::strtoimax;

// inttypes.h:275
using std::strtoumax;

// inttypes.h:276
using std::wcstoimax;

// inttypes.h:276
using std::wcstoumax;

// inttypes.h:30
struct std::_Lldiv_t {
	// inttypes.h:31
	_Longlong quot;

	// inttypes.h:32
	_Longlong rem;

public:
	void _Lldiv_t(const _Lldiv_t &);

	void _Lldiv_t();

}

