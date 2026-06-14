// _built-in_
namespace std {
	// wchar.h:40
	typedef fpos_t::_Mbstatet mbstate_t;

	// wchar.h:57
	extern char_traits<wchar_t>::wint_t fgetwc(_Filet *);

	// wchar.h:59
	extern wchar_t * fgetws(wchar_t *, int, _Filet *);

	// wchar.h:60
	extern char_traits<wchar_t>::wint_t fputwc(wchar_t, _Filet *);

	// wchar.h:62
	extern int fputws(const wchar_t *, _Filet *);

	// wchar.h:63
	extern int fwide(_Filet *, int);

	// wchar.h:65
	extern int fwprintf(_Filet *, const wchar_t *, ...);

	// wchar.h:67
	extern int fwscanf(_Filet *, const wchar_t *, ...);

	// wchar.h:68
	extern char_traits<wchar_t>::wint_t getwc(_Filet *);

	// wchar.h:69
	extern char_traits<wchar_t>::wint_t getwchar();

	// wchar.h:95
	extern size_t mbrlen(const char *, size_t, std::mbstate_t *);

	// wchar.h:97
	extern size_t mbrtowc(wchar_t *, const char *, size_t, std::mbstate_t *);

	// wchar.h:99
	extern size_t mbsrtowcs(wchar_t *, const char **, size_t, std::mbstate_t *);

	// wchar.h:100
	extern int mbsinit(const std::mbstate_t *);

	// wchar.h:70
	extern char_traits<wchar_t>::wint_t putwc(wchar_t, _Filet *);

	// wchar.h:71
	extern char_traits<wchar_t>::wint_t putwchar(wchar_t);

	// wchar.h:73
	extern int swprintf(wchar_t *, size_t, const wchar_t *, ...);

	// wchar.h:75
	extern int swscanf(const wchar_t *, const wchar_t *, ...);

	// wchar.h:76
	extern char_traits<wchar_t>::wint_t ungetwc(char_traits<wchar_t>::wint_t, _Filet *);

	// wchar.h:78
	// Declaration
	extern int vfwprintf(_Filet *, const wchar_t *, _Va_list) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// yvals.h:516
		typedef va_list _Va_list;

	}

	// wchar.h:80
	extern int vswprintf(wchar_t *, size_t, const wchar_t *, _Va_list);

	// wchar.h:81
	extern int vwprintf(const wchar_t *, _Va_list);

	// wchar.h:102
	extern size_t wcrtomb(char *, wchar_t, std::mbstate_t *);

	// wchar.h:82
	extern int wprintf(const wchar_t *, ...);

	// wchar.h:83
	extern int wscanf(const wchar_t *, ...);

	// wchar.h:104
	extern size_t wcsrtombs(char *, const wchar_t **, size_t, std::mbstate_t *);

	// wchar.h:106
	extern long int wcstol(const wchar_t *, wchar_t **, int);

	// wchar.h:116
	extern wchar_t * wcscat(wchar_t *, const wchar_t *);

	// wchar.h:117
	extern int wcscmp(const wchar_t *, const wchar_t *);

	// wchar.h:124
	extern int wcscoll(const wchar_t *, const wchar_t *);

	// wchar.h:118
	extern wchar_t * wcscpy(wchar_t *, const wchar_t *);

	// wchar.h:125
	extern size_t wcscspn(const wchar_t *, const wchar_t *);

	// wchar.h:119
	extern size_t wcslen(const wchar_t *);

	// wchar.h:127
	extern wchar_t * wcsncat(wchar_t *, const wchar_t *, size_t);

	// wchar.h:120
	extern int wcsncmp(const wchar_t *, const wchar_t *, size_t);

	// wchar.h:122
	extern wchar_t * wcsncpy(wchar_t *, const wchar_t *, size_t);

	// wchar.h:128
	extern size_t wcsspn(const wchar_t *, const wchar_t *);

	// wchar.h:130
	extern wchar_t * wcstok(wchar_t *, const wchar_t *, wchar_t **);

	// wchar.h:132
	extern size_t wcsxfrm(wchar_t *, const wchar_t *, size_t);

	// wchar.h:159
	extern wchar_t * wmemchr(wchar_t *, wchar_t, size_t);

	// wchar.h:133
	extern int wmemcmp(const wchar_t *, const wchar_t *, size_t);

	// wchar.h:135
	extern wchar_t * wmemcpy(wchar_t *, const wchar_t *, size_t);

	// wchar.h:136
	extern wchar_t * wmemmove(wchar_t *, const wchar_t *, size_t);

	// wchar.h:137
	extern wchar_t * wmemset(wchar_t *, wchar_t, size_t);

	// wchar.h:141
	extern size_t wcsftime(wchar_t *, size_t, const wchar_t *, const tm *);

	// wchar.h:87
	extern int vfwscanf(_Filet *, const wchar_t *, _Va_list);

	// wchar.h:89
	extern int vswscanf(const wchar_t *, const wchar_t *, _Va_list);

	// wchar.h:90
	extern int vwscanf(const wchar_t *, _Va_list);

	// wchar.h:110
	extern _Longlong wcstoll(const wchar_t *, wchar_t **, int);

	// wchar.h:112
	extern _ULonglong wcstoull(const wchar_t *, wchar_t **, int);

}

// wchar.h:179
using std::mbstate_t;

// wchar.h:179
using std::tm;

// wchar.h:179
using std::char_traits<wchar_t>::wint_t;

// wchar.h:181
using std::btowc;

// wchar.h:181
using std::fgetwc;

// wchar.h:181
using std::fgetws;

// wchar.h:181
using std::fputwc;

// wchar.h:182
using std::fputws;

// wchar.h:182
using std::fwide;

// wchar.h:182
using std::fwprintf;

// wchar.h:183
using std::fwscanf;

// wchar.h:183
using std::getwc;

// wchar.h:183
using std::getwchar;

// wchar.h:184
using std::mbrlen;

// wchar.h:184
using std::mbrtowc;

// wchar.h:184
using std::mbsrtowcs;

// wchar.h:185
using std::mbsinit;

// wchar.h:185
using std::putwc;

// wchar.h:185
using std::putwchar;

// wchar.h:186
using std::swprintf;

// wchar.h:186
using std::swscanf;

// wchar.h:186
using std::ungetwc;

// wchar.h:187
using std::vfwprintf;

// wchar.h:187
using std::vswprintf;

// wchar.h:187
using std::vwprintf;

// wchar.h:188
using std::wcrtomb;

// wchar.h:188
using std::wprintf;

// wchar.h:188
using std::wscanf;

// wchar.h:189
using std::wcsrtombs;

// wchar.h:189
using std::wcstol;

// wchar.h:189
using std::wcscat;

// wchar.h:190
using std::wcschr;

// wchar.h:190
using std::wcscmp;

// wchar.h:190
using std::wcscoll;

// wchar.h:191
using std::wcscpy;

// wchar.h:191
using std::wcscspn;

// wchar.h:191
using std::wcslen;

// wchar.h:192
using std::wcsncat;

// wchar.h:192
using std::wcsncmp;

// wchar.h:192
using std::wcsncpy;

// wchar.h:193
using std::wcspbrk;

// wchar.h:193
using std::wcsrchr;

// wchar.h:193
using std::wcsspn;

// wchar.h:194
using std::wcstod;

// wchar.h:194
using std::wcstoul;

// wchar.h:194
using std::wcsstr;

// wchar.h:195
using std::wcstok;

// wchar.h:195
using std::wcsxfrm;

// wchar.h:195
using std::wctob;

// wchar.h:196
using std::wmemchr;

// wchar.h:196
using std::wmemcmp;

// wchar.h:196
using std::wmemcpy;

// wchar.h:197
using std::wmemmove;

// wchar.h:197
using std::wmemset;

// wchar.h:197
using std::wcsftime;

// wchar.h:200
using std::vfwscanf;

// wchar.h:200
using std::vswscanf;

// wchar.h:200
using std::vwscanf;

// wchar.h:201
using std::wcstof;

// wchar.h:201
using std::wcstold;

// wchar.h:202
using std::wcstoll;

// wchar.h:202
using std::wcstoull;

// _built-in_
namespace std {
	// wchar.h:40
	typedef fpos_t::_Mbstatet mbstate_t;

	// wchar.h:57
	extern wint_t fgetwc(_Filet *);

	// wchar.h:59
	extern wchar_t * fgetws(wchar_t *, int, _Filet *);

	// wchar.h:60
	extern wint_t fputwc(wchar_t, _Filet *);

	// wchar.h:62
	extern int fputws(const wchar_t *, _Filet *);

	// wchar.h:63
	extern int fwide(_Filet *, int);

	// wchar.h:65
	extern int fwprintf(_Filet *, const wchar_t *, ...);

	// wchar.h:67
	extern int fwscanf(_Filet *, const wchar_t *, ...);

	// wchar.h:68
	extern wint_t getwc(_Filet *);

	// wchar.h:69
	extern wint_t getwchar();

	// wchar.h:95
	extern size_t mbrlen(const char *, size_t, std::mbstate_t *);

	// wchar.h:97
	extern size_t mbrtowc(wchar_t *, const char *, size_t, std::mbstate_t *);

	// wchar.h:99
	extern size_t mbsrtowcs(wchar_t *, const char **, size_t, std::mbstate_t *);

	// wchar.h:100
	extern int mbsinit(const std::mbstate_t *);

	// wchar.h:70
	extern wint_t putwc(wchar_t, _Filet *);

	// wchar.h:71
	extern wint_t putwchar(wchar_t);

	// wchar.h:73
	extern int swprintf(wchar_t *, size_t, const wchar_t *, ...);

	// wchar.h:75
	extern int swscanf(const wchar_t *, const wchar_t *, ...);

	// wchar.h:76
	extern wint_t ungetwc(wint_t, _Filet *);

	// wchar.h:78
	// Declaration
	extern int vfwprintf(_Filet *, const wchar_t *, _Va_list) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// yvals.h:516
		typedef va_list _Va_list;

	}

	// wchar.h:80
	extern int vswprintf(wchar_t *, size_t, const wchar_t *, _Va_list);

	// wchar.h:81
	extern int vwprintf(const wchar_t *, _Va_list);

	// wchar.h:102
	extern size_t wcrtomb(char *, wchar_t, std::mbstate_t *);

	// wchar.h:82
	extern int wprintf(const wchar_t *, ...);

	// wchar.h:83
	extern int wscanf(const wchar_t *, ...);

	// wchar.h:104
	extern size_t wcsrtombs(char *, const wchar_t **, size_t, std::mbstate_t *);

	// wchar.h:106
	extern long int wcstol(const wchar_t *, wchar_t **, int);

	// wchar.h:116
	extern wchar_t * wcscat(wchar_t *, const wchar_t *);

	// wchar.h:117
	extern int wcscmp(const wchar_t *, const wchar_t *);

	// wchar.h:124
	extern int wcscoll(const wchar_t *, const wchar_t *);

	// wchar.h:118
	extern wchar_t * wcscpy(wchar_t *, const wchar_t *);

	// wchar.h:125
	extern size_t wcscspn(const wchar_t *, const wchar_t *);

	// wchar.h:119
	extern size_t wcslen(const wchar_t *);

	// wchar.h:127
	extern wchar_t * wcsncat(wchar_t *, const wchar_t *, size_t);

	// wchar.h:120
	extern int wcsncmp(const wchar_t *, const wchar_t *, size_t);

	// wchar.h:122
	extern wchar_t * wcsncpy(wchar_t *, const wchar_t *, size_t);

	// wchar.h:128
	extern size_t wcsspn(const wchar_t *, const wchar_t *);

	// wchar.h:130
	extern wchar_t * wcstok(wchar_t *, const wchar_t *, wchar_t **);

	// wchar.h:132
	extern size_t wcsxfrm(wchar_t *, const wchar_t *, size_t);

	// wchar.h:159
	extern wchar_t * wmemchr(wchar_t *, wchar_t, size_t);

	// wchar.h:133
	extern int wmemcmp(const wchar_t *, const wchar_t *, size_t);

	// wchar.h:135
	extern wchar_t * wmemcpy(wchar_t *, const wchar_t *, size_t);

	// wchar.h:136
	extern wchar_t * wmemmove(wchar_t *, const wchar_t *, size_t);

	// wchar.h:137
	extern wchar_t * wmemset(wchar_t *, wchar_t, size_t);

	// wchar.h:141
	extern size_t wcsftime(wchar_t *, size_t, const wchar_t *, const tm *);

	// wchar.h:87
	extern int vfwscanf(_Filet *, const wchar_t *, _Va_list);

	// wchar.h:89
	extern int vswscanf(const wchar_t *, const wchar_t *, _Va_list);

	// wchar.h:90
	extern int vwscanf(const wchar_t *, _Va_list);

	// wchar.h:110
	extern _Longlong wcstoll(const wchar_t *, wchar_t **, int);

	// wchar.h:112
	extern _ULonglong wcstoull(const wchar_t *, wchar_t **, int);

}

// wchar.h:52
typedef _Wintt wint_t;

// wchar.h:179
using wint_t;

