// yvals.h:131
typedef int _Int32t;

// yvals.h:132
typedef unsigned int _Uint32t;

// yvals.h:140
typedef int _Ptrdifft;

// yvals.h:147
typedef unsigned int _Sizet;

// _built-in_
namespace std {
	// yvals.h:708
	using va_list;

	// inttypes.h:47
	// Declaration
	extern intmax_t wcstoimax(const _Wchart *, _Wchart **, int) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// yvals.h:467
		typedef wchar_t _Wchart;

	}

	// wchar.h:78
	// Declaration
	extern int vfwprintf(_Filet *, const wchar_t *, _Va_list) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// yvals.h:516
		typedef va_list _Va_list;

	}

}

// yvals.h:608
struct std::_Lockit {
private:
	// yvals.h:650
	int _Locktype;

public:
	// yvals.h:629
	void _Lockit();

	// yvals.h:636
	void _Lockit(int);

	// yvals.h:643
	void ~_Lockit();

	// yvals.h:652
	void _Lockit(const _Lockit &);

	// yvals.h:653
	_Lockit & operator=(const _Lockit &);

}

// yvals.h:453
typedef long long int _Longlong;

// yvals.h:454
typedef long long unsigned int _ULonglong;

// _built-in_
namespace std {
	// yvals.h:708
	using va_list;

	// inttypes.h:47
	// Declaration
	extern intmax_t wcstoimax(const _Wchart *, _Wchart **, int) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// yvals.h:467
		typedef wchar_t _Wchart;

	}

}

// yvals.h:479
typedef int _Wintt;

// yvals.h:477
typedef short unsigned int _Wchart;

// _built-in_
namespace std {
	// yvals.h:708
	using va_list;

}

