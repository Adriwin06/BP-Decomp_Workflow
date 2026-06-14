// lobbytagfield.h:54
enum {
	TAGFIELD_PATTERN_INT8 = 98,
	TAGFIELD_PATTERN_INT16 = 119,
	TAGFIELD_PATTERN_INT32 = 108,
	TAGFIELD_PATTERN_STR = 115,
}

// lobbytagfield.h:59
typedef enumeration  TagFieldPatternE;

// lobbytagfield.h:63
struct TagFieldStructPtrT {
	// lobbytagfield.h:64
	TagFieldPatternE eType;

	// lobbytagfield.h:65
	int32_t iOffset;

}

// lobbytagfield.h:66
typedef TagFieldStructPtrT TagFieldStructPtrT;

