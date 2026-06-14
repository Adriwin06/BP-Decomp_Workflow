// _built-in_
namespace std {
	// stdio.h:81
	typedef fpos_t fpos_t;

	// stdio.h:106
	typedef std::_Filet FILE;

	// stdio.h:105
	typedef _Filet _Filet;

	// stdio.h:112
	extern void clearerr(std::FILE *);

	// stdio.h:113
	extern int fclose(std::FILE *);

	// stdio.h:114
	extern int feof(std::FILE *);

	// stdio.h:115
	extern int ferror(std::FILE *);

	// stdio.h:116
	extern int fflush(std::FILE *);

	// stdio.h:117
	extern int fgetc(std::FILE *);

	// stdio.h:118
	extern int fgetpos(std::FILE *, std::fpos_t *);

	// stdio.h:119
	extern char * fgets(char *, int, std::FILE *);

	// stdio.h:120
	extern std::FILE * fopen(const char *, const char *);

	// stdio.h:121
	extern int fileno(std::FILE *);

	// stdio.h:125
	extern size_t fread(void *, size_t, size_t, std::FILE *);

	// stdio.h:127
	extern std::FILE * freopen(const char *, const char *, std::FILE *);

	// stdio.h:129
	extern int fseek(std::FILE *, long int, int);

	// stdio.h:130
	extern int fsetpos(std::FILE *, const std::fpos_t *);

	// stdio.h:131
	extern long int ftell(std::FILE *);

	// stdio.h:189
	extern int getc(std::FILE *);

	// stdio.h:190
	extern int getchar();

	// stdio.h:134
	extern char * gets(char *);

	// stdio.h:135
	extern void perror(const char *);

	// stdio.h:191
	extern int putc(int, std::FILE *);

	// stdio.h:138
	extern int remove(const char *);

	// stdio.h:139
	extern int rename(const char *, const char *);

	// stdio.h:140
	extern void rewind(std::FILE *);

	// stdio.h:142
	extern void setbuf(std::FILE *, char *);

	// stdio.h:143
	extern int setvbuf(std::FILE *, char *, int, size_t);

	// stdio.h:146
	extern std::FILE * tmpfile();

	// stdio.h:147
	extern char * tmpnam(char *);

	// stdio.h:148
	extern int ungetc(int, std::FILE *);

}

// stdio.h:71
struct std::_Mbstatet {
	// stdio.h:72
	long unsigned int _Wchar;

	// stdio.h:73
	short unsigned int _Byte;

	// stdio.h:73
	short unsigned int _State;

}

// stdio.h:78
struct std::fpos_t {
	// stdio.h:79
	long int _Off;

	// stdio.h:74
	typedef _Mbstatet _Mbstatet;

	// stdio.h:80
	fpos_t::_Mbstatet _Wstate;

}

// stdio.h:86
struct std::_Filet {
	// stdio.h:87
	short unsigned int _Mode;

	// stdio.h:88
	unsigned char _Idx;

	// stdio.h:89
	short int _Handle;

	// stdio.h:91
	unsigned char * _Buf;

	// stdio.h:91
	unsigned char * _Bend;

	// stdio.h:91
	unsigned char * _Next;

	// stdio.h:92
	unsigned char * _Rend;

	// stdio.h:92
	unsigned char * _Wend;

	// stdio.h:92
	unsigned char * _Rback;

	// stdio.h:94
	_Wchart * _WRback;

	// stdio.h:94
	_Wchart[2] _WBack;

	// stdio.h:95
	unsigned char * _Rsave;

	// stdio.h:95
	unsigned char * _WRend;

	// stdio.h:95
	unsigned char * _WWend;

	// stdio.h:97
	fpos_t::_Mbstatet _Wstate;

	// stdio.h:98
	char * _Tmpnam;

	// stdio.h:99
	unsigned char[3] _Back;

	// stdio.h:99
	unsigned char _Cbuf;

	// stdio.h:100
	uint64_t fpos;

	// stdio.h:101
	uint64_t _Rsize;

	// stdio.h:102
	uint64_t _offset;

	// stdio.h:103
	unsigned char * _BRend;

	// stdio.h:104
	short unsigned int _Bflag;

}

// stdio.h:260
using std::fpos_t;

// stdio.h:260
using std::FILE;

// stdio.h:261
using std::clearerr;

// stdio.h:261
using std::fclose;

// stdio.h:261
using std::feof;

// stdio.h:262
using std::ferror;

// stdio.h:262
using std::fflush;

// stdio.h:262
using std::fgetc;

// stdio.h:263
using std::fgetpos;

// stdio.h:263
using std::fgets;

// stdio.h:263
using std::fopen;

// stdio.h:264
using std::fileno;

// stdio.h:266
using std::fread;

// stdio.h:266
using std::freopen;

// stdio.h:267
using std::fseek;

// stdio.h:267
using std::fsetpos;

// stdio.h:267
using std::ftell;

// stdio.h:268
using std::getc;

// stdio.h:268
using std::getchar;

// stdio.h:269
using std::gets;

// stdio.h:269
using std::perror;

// stdio.h:270
using std::putc;

// stdio.h:271
using std::remove;

// stdio.h:272
using std::rename;

// stdio.h:272
using std::rewind;

// stdio.h:273
using std::setbuf;

// stdio.h:273
using std::setvbuf;

// stdio.h:274
using std::tmpfile;

// stdio.h:274
using std::tmpnam;

// stdio.h:275
using std::ungetc;

// stdio.h:71
struct _Mbstatet {
	// stdio.h:72
	long unsigned int _Wchar;

	// stdio.h:73
	short unsigned int _Byte;

	// stdio.h:73
	short unsigned int _State;

}

// stdio.h:74
typedef _Mbstatet _Mbstatet;

// stdio.h:86
struct _Filet {
	// stdio.h:87
	short unsigned int _Mode;

	// stdio.h:88
	unsigned char _Idx;

	// stdio.h:89
	short int _Handle;

	// stdio.h:91
	unsigned char * _Buf;

	// stdio.h:91
	unsigned char * _Bend;

	// stdio.h:91
	unsigned char * _Next;

	// stdio.h:92
	unsigned char * _Rend;

	// stdio.h:92
	unsigned char * _Wend;

	// stdio.h:92
	unsigned char * _Rback;

	// stdio.h:94
	_Wchart * _WRback;

	// stdio.h:94
	_Wchart[2] _WBack;

	// stdio.h:95
	unsigned char * _Rsave;

	// stdio.h:95
	unsigned char * _WRend;

	// stdio.h:95
	unsigned char * _WWend;

	// stdio.h:97
	_Mbstatet _Wstate;

	// stdio.h:98
	char * _Tmpnam;

	// stdio.h:99
	unsigned char[3] _Back;

	// stdio.h:99
	unsigned char _Cbuf;

	// stdio.h:100
	uint64_t fpos;

	// stdio.h:101
	uint64_t _Rsize;

	// stdio.h:102
	uint64_t _offset;

	// stdio.h:103
	unsigned char * _BRend;

	// stdio.h:104
	short unsigned int _Bflag;

}

// stdio.h:105
typedef _Filet _Filet;

// stdio.h:106
typedef _Filet FILE;

// stdio.h:110
extern FILE _Stdout;

