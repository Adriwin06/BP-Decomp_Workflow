// lobbysort.c:99
extern void LobbyMSort(void *  refptr, void *  base, int32_t  nmemb, int32_t  size, int32_t (*)(void *, const void *, const void *)  compare) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbysort.c:100
	int32_t pass;

	// lobbysort.c:101
	int32_t * rbuf;

	// lobbysort.c:101
	int32_t * rget;

	// lobbysort.c:101
	int32_t * rput;

	// lobbysort.c:101
	int32_t[512] rtmp;

	// lobbysort.c:102
	char **[2] mbuf;

	// lobbysort.c:102
	char ** msrc;

	// lobbysort.c:102
	char ** mdst;

	// lobbysort.c:102
	char *[2][512] mtmp;

	// lobbysort.c:103
	char * xbuf;

	// lobbysort.c:103
	char[1024] xtmp;

	{
		// lobbysort.c:131
		char * p;

		// lobbysort.c:132
		char * q;

	}
	{
		// lobbysort.c:164
		int32_t r1;

		// lobbysort.c:165
		int32_t r2;

		// lobbysort.c:168
		char ** xbeg;

		// lobbysort.c:169
		char ** xend;

		// lobbysort.c:170
		char ** ybeg;

		// lobbysort.c:171
		char ** yend;

	}
	{
		// lobbysort.c:206
		int32_t i;

		// lobbysort.c:206
		int32_t j;

		// lobbysort.c:206
		int32_t k;

	}
}

