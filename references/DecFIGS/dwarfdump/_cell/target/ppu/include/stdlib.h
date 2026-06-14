// _built-in_
namespace std {
	// stdlib.h:84
	extern int abs(int);

	// stdlib.h:141
	extern int atexit(void (*)());

	// stdlib.h:170
	extern double atof(const char *);

	// stdlib.h:180
	extern int atoi(const char *);

	// stdlib.h:185
	extern long int atol(const char *);

	// stdlib.h:143
	// Declaration
	extern void * bsearch(const void *, const void *, size_t, size_t, _Cmpfun *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// stdlib.h:139
		typedef int (const void *, const void *) _Cmpfun;

	}

	// stdlib.h:88
	extern std::div_t div(int, int);

	// stdlib.h:89
	extern void free(void *);

	// stdlib.h:90
	extern std::ldiv_t ldiv(long int, long int);

	// stdlib.h:93
	extern int mblen(const char *, size_t);

	// stdlib.h:95
	extern size_t mbstowcs(wchar_t *, const char *, size_t);

	// stdlib.h:96
	extern int mbtowc(wchar_t *, const char *, size_t);

	// stdlib.h:144
	extern void qsort(void *, size_t, size_t, _Cmpfun *);

	// stdlib.h:97
	extern int rand();

	// stdlib.h:99
	extern void * realloc(void *, size_t);

	// stdlib.h:98
	extern void srand(unsigned int);

	// stdlib.h:198
	extern double strtod(const char *, char **);

	// stdlib.h:115
	extern long int strtol(const char *, char **, int);

	// stdlib.h:204
	extern long unsigned int strtoul(const char *, char **, int);

	// stdlib.h:117
	extern size_t wcstombs(char *, const wchar_t *, size_t);

	// stdlib.h:118
	extern int wctomb(char *, wchar_t);

	// stdlib.h:92
	extern void * memalign(size_t, size_t);

	// stdlib.h:175
	extern float atoff(const char *);

	// stdlib.h:102
	extern void * reallocalign(void *, size_t, size_t);

	// stdlib.h:103
	extern size_t malloc_usable_size(void *);

	// stdlib.h:111
	extern int malloc_stats(malloc_managed_size *);

	// stdlib.h:74
	typedef std::_Lldiv_t lldiv_t;

	// stdlib.h:211
	extern _Longlong atoll(const char *);

	// stdlib.h:131
	extern std::lldiv_t lldiv(_Longlong, _Longlong);

	// stdlib.h:217
	extern float strtof(const char *, char **);

	// stdlib.h:223
	extern long double strtold(const char *, char **);

	// stdlib.h:229
	extern _Longlong strtoll(const char *, char **, int);

	// stdlib.h:235
	extern _ULonglong strtoull(const char *, char **, int);

	// stdlib.h:80
	extern void _Exit(int);

}

// stdlib.h:105
struct std::malloc_managed_size {
	// stdlib.h:106
	size_t max_system_size;

	// stdlib.h:107
	size_t current_system_size;

	// stdlib.h:108
	size_t current_inuse_size;

}

// stdlib.h:347
using std::div_t;

// stdlib.h:347
using std::ldiv_t;

// stdlib.h:349
using std::abs;

// stdlib.h:349
using std::atexit;

// stdlib.h:350
using std::atof;

// stdlib.h:350
using std::atoi;

// stdlib.h:350
using std::atol;

// stdlib.h:351
using std::bsearch;

// stdlib.h:351
using std::div;

// stdlib.h:352
using std::free;

// stdlib.h:353
using std::ldiv;

// stdlib.h:354
using std::mblen;

// stdlib.h:354
using std::mbstowcs;

// stdlib.h:354
using std::mbtowc;

// stdlib.h:355
using std::qsort;

// stdlib.h:355
using std::rand;

// stdlib.h:356
using std::realloc;

// stdlib.h:357
using std::srand;

// stdlib.h:357
using std::strtod;

// stdlib.h:357
using std::strtol;

// stdlib.h:358
using std::strtoul;

// stdlib.h:359
using std::wcstombs;

// stdlib.h:359
using std::wctomb;

// stdlib.h:360
using std::memalign;

// stdlib.h:361
using std::atoff;

// stdlib.h:364
using std::reallocalign;

// stdlib.h:365
using std::malloc_usable_size;

// stdlib.h:366
using std::malloc_stats;

// stdlib.h:370
using std::lldiv_t;

// stdlib.h:372
using std::atoll;

// stdlib.h:372
using std::lldiv;

// stdlib.h:373
using std::strtof;

// stdlib.h:373
using std::strtold;

// stdlib.h:374
using std::strtoll;

// stdlib.h:374
using std::strtoull;

// stdlib.h:375
using std::_Exit;

// stdlib.h:378
using std::get_state_TT800;

// stdlib.h:378
using std::init_TT800;

// stdlib.h:378
using std::init_by_array_TT800;

// stdlib.h:379
using std::rand_int32_TT800;

// stdlib.h:379
using std::rand_int31_TT800;

// stdlib.h:380
using std::rand_real1_TT800;

// stdlib.h:380
using std::rand_real2_TT800;

// stdlib.h:380
using std::rand_real3_TT800;

// stdlib.h:60
struct std::ldiv_t {
	// stdlib.h:61
	long int quot;

	// stdlib.h:62
	long int rem;

}

// stdlib.h:54
struct std::div_t {
	// stdlib.h:55
	int quot;

	// stdlib.h:56
	int rem;

}

// _built-in_
namespace std {
	// stdlib.h:89
	extern void free(void *);

}

