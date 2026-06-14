// _built-in_
namespace std {
	// xwstr.h:36
	extern char_traits<wchar_t>::wint_t btowc(int);

	// xwstr.h:19
	extern wchar_t * wcschr(wchar_t *, wchar_t);

	// xwstr.h:23
	extern wchar_t * wcspbrk(wchar_t *, const wchar_t *);

	// xwstr.h:27
	extern wchar_t * wcsrchr(wchar_t *, wchar_t);

	// xwstr.h:31
	extern wchar_t * wcsstr(wchar_t *, const wchar_t *);

	// xwstr.h:41
	extern int wctob(char_traits<wchar_t>::wint_t);

	// xwstr.h:48
	extern float wcstof(const wchar_t *, wchar_t **);

	// xwstr.h:54
	extern long double wcstold(const wchar_t *, wchar_t **);

}

// _built-in_
namespace std {
	// xwstr.h:36
	extern wint_t btowc(int);

	// xwstr.h:19
	extern wchar_t * wcschr(wchar_t *, wchar_t);

	// xwstr.h:23
	extern wchar_t * wcspbrk(wchar_t *, const wchar_t *);

	// xwstr.h:27
	extern wchar_t * wcsrchr(wchar_t *, wchar_t);

	// xwstr.h:31
	extern wchar_t * wcsstr(wchar_t *, const wchar_t *);

	// xwstr.h:41
	extern int wctob(wint_t);

	// xwstr.h:48
	extern float wcstof(const wchar_t *, wchar_t **);

	// xwstr.h:54
	extern long double wcstold(const wchar_t *, wchar_t **);

}

