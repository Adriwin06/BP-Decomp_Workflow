// _built-in_
namespace std {
	// wctype.h:44
	extern char_traits<wchar_t>::wint_t towctrans(char_traits<wchar_t>::wint_t, wctrans_t);

	// wctype.h:38
	extern wctrans_t wctrans(const char *);

	// wctype.h:39
	extern wctype_t wctype(const char *);

}

// wctype.h:19
typedef _Sizet wctrans_t;

// wctype.h:67
using wctrans_t;

// wctype.h:22
typedef _Sizet wctype_t;

// wctype.h:67
using wctype_t;

// wctype.h:67
using std::char_traits<wchar_t>::wint_t;

// wctype.h:69
using std::iswalnum;

// wctype.h:69
using std::iswalpha;

// wctype.h:69
using std::iswcntrl;

// wctype.h:70
using std::iswctype;

// wctype.h:70
using std::iswdigit;

// wctype.h:70
using std::iswgraph;

// wctype.h:71
using std::iswlower;

// wctype.h:71
using std::iswprint;

// wctype.h:71
using std::iswpunct;

// wctype.h:72
using std::iswspace;

// wctype.h:72
using std::iswupper;

// wctype.h:72
using std::iswxdigit;

// wctype.h:73
using std::towctrans;

// wctype.h:73
using std::towlower;

// wctype.h:73
using std::towupper;

// wctype.h:74
using std::wctrans;

// wctype.h:74
using std::wctype;

// wctype.h:77
using std::iswblank;

// _built-in_
namespace std {
	// wctype.h:44
	extern wint_t towctrans(wint_t, wctrans_t);

	// wctype.h:38
	extern wctrans_t wctrans(const char *);

	// wctype.h:39
	extern wctype_t wctype(const char *);

}

// wctype.h:67
using wint_t;

