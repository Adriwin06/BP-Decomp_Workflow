// zlib.h:63
typedef voidpf (*)(voidpf, uInt, uInt) alloc_func;

// zlib.h:64
typedef void (*)(voidpf, voidpf) free_func;

// zlib.h:68
struct z_stream_s {
	// zlib.h:69
	Bytef * next_in;

	// zlib.h:70
	uInt avail_in;

	// zlib.h:71
	uLong total_in;

	// zlib.h:73
	Bytef * next_out;

	// zlib.h:74
	uInt avail_out;

	// zlib.h:75
	uLong total_out;

	// zlib.h:77
	char * msg;

	// zlib.h:78
	internal_state * state;

	// zlib.h:80
	alloc_func zalloc;

	// zlib.h:81
	free_func zfree;

	// zlib.h:82
	voidpf opaque;

	// zlib.h:84
	int data_type;

	// zlib.h:85
	uLong adler;

	// zlib.h:86
	uLong reserved;

}

// zlib.h:890
struct internal_state {
	// zlib.h:890
	int dummy;

}

// zlib.h:87
typedef z_stream_s z_stream;

