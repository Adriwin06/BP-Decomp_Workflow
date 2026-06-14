// kb_codes.h:212
struct CellKbInfo {
	// kb_codes.h:213
	uint32_t max_connect;

	// kb_codes.h:214
	uint32_t now_connect;

	// kb_codes.h:215
	uint32_t info;

	// kb_codes.h:216
	uint8_t[127] status;

}

// kb_codes.h:217
typedef CellKbInfo CellKbInfo;

// kb_codes.h:221
struct CellKbData {
	// kb_codes.h:222
	uint32_t led;

	// kb_codes.h:223
	uint32_t mkey;

	// kb_codes.h:224
	int32_t len;

	// kb_codes.h:225
	uint16_t[62] keycode;

}

// kb_codes.h:226
typedef CellKbData CellKbData;

