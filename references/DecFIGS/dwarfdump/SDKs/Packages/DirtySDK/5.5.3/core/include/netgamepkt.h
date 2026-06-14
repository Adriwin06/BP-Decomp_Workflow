// netgamepkt.h:71
struct CgsNetwork::DirtySock::NetGamePacketHeadT {
	// netgamepkt.h:72
	int32_t size;

	// netgamepkt.h:73
	uint16_t len;

	// netgamepkt.h:74
	uint8_t kind;

	// netgamepkt.h:75
	uint8_t pad;

}

// netgamepkt.h:80
struct CgsNetwork::DirtySock::NetGamePacketT {
	// netgamepkt.h:76
	typedef NetGamePacketHeadT NetGamePacketHeadT;

	// netgamepkt.h:82
	NetGamePacketT::NetGamePacketHeadT head;

	// netgamepkt.h:95
	// netgamepkt.h:85
	union {
		// netgamepkt.h:87
		struct {
			// netgamepkt.h:88
			int32_t ident;

			// netgamepkt.h:89
			int32_t kind;

			// netgamepkt.h:90
			int32_t size;

			// netgamepkt.h:91
			uint8_t[200] data;

		}

		// netgamepkt.h:92
		// netgamepkt.h:87
		struct {
			// netgamepkt.h:88
			int32_t ident;

			// netgamepkt.h:89
			int32_t kind;

			// netgamepkt.h:90
			int32_t size;

			// netgamepkt.h:91
			uint8_t[200] data;

		}

 strm;

		// netgamepkt.h:94
		uint8_t[240] data;

	}
 body;

	// netgamepkt.h:98
	uint8_t[12] tail;

}

// netgamepkt.h:103
struct CgsNetwork::DirtySock::NetGameMaxPacketT {
	// netgamepkt.h:105
	NetGamePacketT::NetGamePacketHeadT head;

	// netgamepkt.h:110
	// netgamepkt.h:108
	union {
		// netgamepkt.h:109
		uint8_t[1200] data;

	}
 body;

	// netgamepkt.h:113
	uint8_t[12] tail;

}

// netgamepkt.h:71
struct NetGamePacketHeadT {
	// netgamepkt.h:72
	int32_t size;

	// netgamepkt.h:73
	uint16_t len;

	// netgamepkt.h:74
	uint8_t kind;

	// netgamepkt.h:75
	uint8_t pad;

}

// netgamepkt.h:76
typedef NetGamePacketHeadT NetGamePacketHeadT;

// netgamepkt.h:92
struct {
	// netgamepkt.h:88
	int32_t ident;

	// netgamepkt.h:89
	int32_t kind;

	// netgamepkt.h:90
	int32_t size;

	// netgamepkt.h:91
	uint8_t[200] data;

}

// netgamepkt.h:95
union {
	// netgamepkt.h:92
	// netgamepkt.h:92
	struct {
		// netgamepkt.h:88
		int32_t ident;

		// netgamepkt.h:89
		int32_t kind;

		// netgamepkt.h:90
		int32_t size;

		// netgamepkt.h:91
		uint8_t[200] data;

	}

 strm;

	// netgamepkt.h:94
	uint8_t[240] data;

}
// netgamepkt.h:80
struct NetGamePacketT {
	// netgamepkt.h:82
	NetGamePacketHeadT head;

	// netgamepkt.h:95
	// netgamepkt.h:95
	union {
		// netgamepkt.h:92
		// netgamepkt.h:92
		struct {
			// netgamepkt.h:88
			int32_t ident;

			// netgamepkt.h:89
			int32_t kind;

			// netgamepkt.h:90
			int32_t size;

			// netgamepkt.h:91
			uint8_t[200] data;

		}

 strm;

		// netgamepkt.h:94
		uint8_t[240] data;

	}
 body;

	// netgamepkt.h:98
	uint8_t[12] tail;

}

// netgamepkt.h:99
typedef NetGamePacketT NetGamePacketT;

