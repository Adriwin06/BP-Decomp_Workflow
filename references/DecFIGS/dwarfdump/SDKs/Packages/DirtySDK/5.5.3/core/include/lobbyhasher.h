// lobbyhasher.h:41
typedef HasherRef HasherRef;

// lobbyhasher.h:41
struct HasherRef {
	// lobbyhasher.c:67
	int32_t memgroup;

	// lobbyhasher.c:69
	int32_t items;

	// lobbyhasher.c:70
	int32_t flush;

	// lobbyhasher.c:71
	HashEnumT iter;

	// lobbyhasher.c:73
	int32_t hashlen;

	// lobbyhasher.c:74
	HasherT ** hashbuf;

	// lobbyhasher.c:76
	HasherT * list;

	// lobbyhasher.c:77
	HasherT * avail;

	// lobbyhasher.c:79
	HasherCompareF * compare;

}

// lobbyhasher.h:44
typedef int32_t (const unsigned char *, const unsigned char *) HasherCompareF;

