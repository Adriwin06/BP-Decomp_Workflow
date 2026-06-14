// lobbyutf8.h:49
struct Utf8TransTblT {
	// lobbyutf8.h:50
	uint32_t uRangeBegin;

	// lobbyutf8.h:51
	uint32_t uRangeEnd;

	// lobbyutf8.h:52
	unsigned char * pCodeTbl;

}

// lobbyutf8.h:53
typedef Utf8TransTblT Utf8TransTblT;

// lobbyutf8.h:57
struct Utf8EncodeTblT {
	// lobbyutf8.h:58
	uint16_t[256] uCodeTbl;

}

// lobbyutf8.h:59
typedef Utf8EncodeTblT Utf8EncodeTblT;

